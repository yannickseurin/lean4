// Lean compiler output
// Module: Lean.Meta.Constructions.SparseCasesOnEq
// Imports: public import Lean.Meta.Basic import Lean.Meta.Constructions.SparseCasesOn import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Cases import Lean.Meta.Tactic.Refl
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
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
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSparseCasesOnInfoCore(lean_object*, lean_object*);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "mkSparseCasesOnEq: not refutable "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Constructions.SparseCasesOnEq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "_private.Lean.Meta.Constructions.SparseCasesOnEq.0.Lean.Meta.getSparseCasesOnEq.realize"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: s.ctorName.isSome\n          "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: hyps.size = 1\n        "};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "mkSparseCasesOnEq: unexpected hyp type "};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hasNotBit"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(117, 117, 142, 139, 222, 16, 37, 88)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 160, 71, 192, 5, 128, 186)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hidx"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(133, 25, 203, 189, 219, 140, 152, 16)}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "mkSparseCasesOnEq: "};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = " is not a sparse casesOn combinator"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getSparseCasesOnEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "else_eq"};
static const lean_object* l_Lean_Meta_getSparseCasesOnEq___closed__0 = (const lean_object*)&l_Lean_Meta_getSparseCasesOnEq___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 137, .m_capacity = 137, .m_length = 136, .m_data = "_private.Lean.Meta.Constructions.SparseCasesOnEq.0.Lean.Meta.initFn._@.Lean.Meta.Constructions.SparseCasesOnEq.1213293720._hygCtx._hyg.2"};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "assertion violation: name = name'\n    "};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___f_8_; lean_object* v___x_10740__overap_9_; lean_object* v___x_10_; 
v___f_8_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___closed__0));
v___x_10740__overap_9_ = lean_panic_fn_borrowed(v___f_8_, v_msg_2_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_10_ = lean_apply_5(v___x_10740__overap_9_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2___boxed(lean_object* v_msg_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2(v_msg_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
lean_dec(v___y_13_);
lean_dec_ref(v___y_12_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(lean_object* v_mvarId_18_, lean_object* v_x_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_18_, v_x_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
if (lean_obj_tag(v___x_25_) == 0)
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_33_; 
v_a_26_ = lean_ctor_get(v___x_25_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_25_);
if (v_isSharedCheck_33_ == 0)
{
v___x_28_ = v___x_25_;
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v___x_25_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_31_; 
if (v_isShared_29_ == 0)
{
v___x_31_ = v___x_28_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v_a_26_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
v_a_34_ = lean_ctor_get(v___x_25_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_25_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_25_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_25_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg___boxed(lean_object* v_mvarId_42_, lean_object* v_x_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(v_mvarId_42_, v_x_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6(lean_object* v_00_u03b1_50_, lean_object* v_mvarId_51_, lean_object* v_x_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(v_mvarId_51_, v_x_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___boxed(lean_object* v_00_u03b1_59_, lean_object* v_mvarId_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6(v_00_u03b1_59_, v_mvarId_60_, v_x_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__7(lean_object* v_msg_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = l_Lean_instInhabitedName;
v___x_70_ = lean_panic_fn_borrowed(v___x_69_, v_msg_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg(lean_object* v_e_71_, lean_object* v___y_72_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = l_Lean_Expr_hasMVar(v_e_71_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_e_71_);
return v___x_75_;
}
else
{
lean_object* v___x_76_; lean_object* v_mctx_77_; lean_object* v___x_78_; lean_object* v_fst_79_; lean_object* v_snd_80_; lean_object* v___x_81_; lean_object* v_cache_82_; lean_object* v_zetaDeltaFVarIds_83_; lean_object* v_postponed_84_; lean_object* v_diag_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_94_; 
v___x_76_ = lean_st_ref_get(v___y_72_);
v_mctx_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_ref(v_mctx_77_);
lean_dec(v___x_76_);
v___x_78_ = l_Lean_instantiateMVarsCore(v_mctx_77_, v_e_71_);
v_fst_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_fst_79_);
v_snd_80_ = lean_ctor_get(v___x_78_, 1);
lean_inc(v_snd_80_);
lean_dec_ref(v___x_78_);
v___x_81_ = lean_st_ref_take(v___y_72_);
v_cache_82_ = lean_ctor_get(v___x_81_, 1);
v_zetaDeltaFVarIds_83_ = lean_ctor_get(v___x_81_, 2);
v_postponed_84_ = lean_ctor_get(v___x_81_, 3);
v_diag_85_ = lean_ctor_get(v___x_81_, 4);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_94_ == 0)
{
lean_object* v_unused_95_; 
v_unused_95_ = lean_ctor_get(v___x_81_, 0);
lean_dec(v_unused_95_);
v___x_87_ = v___x_81_;
v_isShared_88_ = v_isSharedCheck_94_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_diag_85_);
lean_inc(v_postponed_84_);
lean_inc(v_zetaDeltaFVarIds_83_);
lean_inc(v_cache_82_);
lean_dec(v___x_81_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_94_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 0, v_snd_80_);
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_snd_80_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v_cache_82_);
lean_ctor_set(v_reuseFailAlloc_93_, 2, v_zetaDeltaFVarIds_83_);
lean_ctor_set(v_reuseFailAlloc_93_, 3, v_postponed_84_);
lean_ctor_set(v_reuseFailAlloc_93_, 4, v_diag_85_);
v___x_90_ = v_reuseFailAlloc_93_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_st_ref_put(v___y_72_, v___x_90_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v_fst_79_);
return v___x_92_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg___boxed(lean_object* v_e_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg(v_e_96_, v___y_97_);
lean_dec(v___y_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8(lean_object* v_e_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg(v_e_100_, v___y_102_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___boxed(lean_object* v_e_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8(v_e_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0(lean_object* v_k_114_, lean_object* v_b_115_, lean_object* v_c_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
lean_inc(v___y_120_);
lean_inc_ref(v___y_119_);
lean_inc(v___y_118_);
lean_inc_ref(v___y_117_);
v___x_122_ = lean_apply_7(v_k_114_, v_b_115_, v_c_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, lean_box(0));
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0___boxed(lean_object* v_k_123_, lean_object* v_b_124_, lean_object* v_c_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0(v_k_123_, v_b_124_, v_c_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(lean_object* v_type_132_, lean_object* v_k_133_, uint8_t v_cleanupAnnotations_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___f_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___f_140_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_140_, 0, v_k_133_);
v___x_141_ = 0;
v___x_142_ = lean_box(0);
v___x_143_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_141_, v___x_142_, v_type_132_, v___f_140_, v_cleanupAnnotations_134_, v___x_141_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_143_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_143_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
v_a_152_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_143_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_143_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg___boxed(lean_object* v_type_160_, lean_object* v_k_161_, lean_object* v_cleanupAnnotations_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_168_; lean_object* v_res_169_; 
v_cleanupAnnotations_boxed_168_ = lean_unbox(v_cleanupAnnotations_162_);
v_res_169_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(v_type_160_, v_k_161_, v_cleanupAnnotations_boxed_168_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10(lean_object* v_00_u03b1_170_, lean_object* v_type_171_, lean_object* v_k_172_, uint8_t v_cleanupAnnotations_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(v_type_171_, v_k_172_, v_cleanupAnnotations_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___boxed(lean_object* v_00_u03b1_180_, lean_object* v_type_181_, lean_object* v_k_182_, lean_object* v_cleanupAnnotations_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_189_; lean_object* v_res_190_; 
v_cleanupAnnotations_boxed_189_ = lean_unbox(v_cleanupAnnotations_183_);
v_res_190_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10(v_00_u03b1_180_, v_type_181_, v_k_182_, v_cleanupAnnotations_boxed_189_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20___redArg(lean_object* v_x_191_, lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
lean_object* v_ks_195_; lean_object* v_vs_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_220_; 
v_ks_195_ = lean_ctor_get(v_x_191_, 0);
v_vs_196_ = lean_ctor_get(v_x_191_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_191_);
if (v_isSharedCheck_220_ == 0)
{
v___x_198_ = v_x_191_;
v_isShared_199_ = v_isSharedCheck_220_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_vs_196_);
lean_inc(v_ks_195_);
lean_dec(v_x_191_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_220_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_200_ = lean_array_get_size(v_ks_195_);
v___x_201_ = lean_nat_dec_lt(v_x_192_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec(v_x_192_);
v___x_202_ = lean_array_push(v_ks_195_, v_x_193_);
v___x_203_ = lean_array_push(v_vs_196_, v_x_194_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_203_);
lean_ctor_set(v___x_198_, 0, v___x_202_);
v___x_205_ = v___x_198_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
else
{
lean_object* v_k_x27_207_; uint8_t v___x_208_; 
v_k_x27_207_ = lean_array_fget_borrowed(v_ks_195_, v_x_192_);
v___x_208_ = l_Lean_instBEqMVarId_beq(v_x_193_, v_k_x27_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_210_; 
if (v_isShared_199_ == 0)
{
v___x_210_ = v___x_198_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_ks_195_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_vs_196_);
v___x_210_ = v_reuseFailAlloc_214_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_unsigned_to_nat(1u);
v___x_212_ = lean_nat_add(v_x_192_, v___x_211_);
lean_dec(v_x_192_);
v_x_191_ = v___x_210_;
v_x_192_ = v___x_212_;
goto _start;
}
}
else
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_215_ = lean_array_fset(v_ks_195_, v_x_192_, v_x_193_);
v___x_216_ = lean_array_fset(v_vs_196_, v_x_192_, v_x_194_);
lean_dec(v_x_192_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_216_);
lean_ctor_set(v___x_198_, 0, v___x_215_);
v___x_218_ = v___x_198_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_215_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16___redArg(lean_object* v_n_221_, lean_object* v_k_222_, lean_object* v_v_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(0u);
v___x_225_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20___redArg(v_n_221_, v___x_224_, v_k_222_, v_v_223_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(0);
v___x_227_ = l_unsafeCast___redArg(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(lean_object* v_x_229_, size_t v_x_230_, size_t v_x_231_, lean_object* v_x_232_, lean_object* v_x_233_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_object* v_es_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v_j_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v_es_234_ = lean_ctor_get(v_x_229_, 0);
v___x_235_ = ((size_t)31ULL);
v___x_236_ = lean_usize_land(v_x_230_, v___x_235_);
v_j_237_ = lean_usize_to_nat(v___x_236_);
v___x_238_ = lean_array_get_size(v_es_234_);
v___x_239_ = lean_nat_dec_lt(v_j_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_dec(v_j_237_);
lean_dec(v_x_233_);
lean_dec(v_x_232_);
return v_x_229_;
}
else
{
lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_278_; 
lean_inc_ref(v_es_234_);
v_isSharedCheck_278_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; 
v_unused_279_ = lean_ctor_get(v_x_229_, 0);
lean_dec(v_unused_279_);
v___x_241_ = v_x_229_;
v_isShared_242_ = v_isSharedCheck_278_;
goto v_resetjp_240_;
}
else
{
lean_dec(v_x_229_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_278_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v_v_243_; lean_object* v___x_244_; lean_object* v_xs_x27_245_; lean_object* v___y_247_; 
v_v_243_ = lean_array_fget(v_es_234_, v_j_237_);
v___x_244_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__0);
v_xs_x27_245_ = lean_array_fset(v_es_234_, v_j_237_, v___x_244_);
switch(lean_obj_tag(v_v_243_))
{
case 0:
{
lean_object* v_key_252_; lean_object* v_val_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_263_; 
v_key_252_ = lean_ctor_get(v_v_243_, 0);
v_val_253_ = lean_ctor_get(v_v_243_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v_v_243_);
if (v_isSharedCheck_263_ == 0)
{
v___x_255_ = v_v_243_;
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_val_253_);
lean_inc(v_key_252_);
lean_dec(v_v_243_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
uint8_t v___x_257_; 
v___x_257_ = l_Lean_instBEqMVarId_beq(v_x_232_, v_key_252_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_del_object(v___x_255_);
v___x_258_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_252_, v_val_253_, v_x_232_, v_x_233_);
v___x_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
v___y_247_ = v___x_259_;
goto v___jp_246_;
}
else
{
lean_object* v___x_261_; 
lean_dec(v_val_253_);
lean_dec(v_key_252_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v_x_233_);
lean_ctor_set(v___x_255_, 0, v_x_232_);
v___x_261_ = v___x_255_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_x_232_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_x_233_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
v___y_247_ = v___x_261_;
goto v___jp_246_;
}
}
}
}
case 1:
{
lean_object* v_node_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_276_; 
v_node_264_ = lean_ctor_get(v_v_243_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v_v_243_);
if (v_isSharedCheck_276_ == 0)
{
v___x_266_ = v_v_243_;
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_node_264_);
lean_dec(v_v_243_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
size_t v___x_268_; size_t v___x_269_; size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_268_ = ((size_t)5ULL);
v___x_269_ = lean_usize_shift_right(v_x_230_, v___x_268_);
v___x_270_ = ((size_t)1ULL);
v___x_271_ = lean_usize_add(v_x_231_, v___x_270_);
v___x_272_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(v_node_264_, v___x_269_, v___x_271_, v_x_232_, v_x_233_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_272_);
v___x_274_ = v___x_266_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
v___y_247_ = v___x_274_;
goto v___jp_246_;
}
}
}
default: 
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v_x_232_);
lean_ctor_set(v___x_277_, 1, v_x_233_);
v___y_247_ = v___x_277_;
goto v___jp_246_;
}
}
v___jp_246_:
{
lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_248_ = lean_array_fset(v_xs_x27_245_, v_j_237_, v___y_247_);
lean_dec(v_j_237_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___x_248_);
v___x_250_ = v___x_241_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
}
else
{
lean_object* v_ks_280_; lean_object* v_vs_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_299_; 
v_ks_280_ = lean_ctor_get(v_x_229_, 0);
v_vs_281_ = lean_ctor_get(v_x_229_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_299_ == 0)
{
v___x_283_ = v_x_229_;
v_isShared_284_ = v_isSharedCheck_299_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_vs_281_);
lean_inc(v_ks_280_);
lean_dec(v_x_229_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_299_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_ks_280_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_vs_281_);
v___x_286_ = v_reuseFailAlloc_298_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v_newNode_287_; size_t v___x_288_; uint8_t v___x_289_; 
v_newNode_287_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16___redArg(v___x_286_, v_x_232_, v_x_233_);
v___x_288_ = ((size_t)7ULL);
v___x_289_ = lean_usize_dec_le(v___x_288_, v_x_231_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_290_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_287_);
v___x_291_ = lean_unsigned_to_nat(4u);
v___x_292_ = lean_nat_dec_lt(v___x_290_, v___x_291_);
lean_dec(v___x_290_);
if (v___x_292_ == 0)
{
lean_object* v_ks_293_; lean_object* v_vs_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_ks_293_ = lean_ctor_get(v_newNode_287_, 0);
lean_inc_ref(v_ks_293_);
v_vs_294_ = lean_ctor_get(v_newNode_287_, 1);
lean_inc_ref(v_vs_294_);
lean_dec_ref(v_newNode_287_);
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___closed__1);
v___x_297_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg(v_x_231_, v_ks_293_, v_vs_294_, v___x_295_, v___x_296_);
lean_dec_ref(v_vs_294_);
lean_dec_ref(v_ks_293_);
return v___x_297_;
}
else
{
return v_newNode_287_;
}
}
else
{
return v_newNode_287_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg(size_t v_depth_300_, lean_object* v_keys_301_, lean_object* v_vals_302_, lean_object* v_i_303_, lean_object* v_entries_304_){
_start:
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_array_get_size(v_keys_301_);
v___x_306_ = lean_nat_dec_lt(v_i_303_, v___x_305_);
if (v___x_306_ == 0)
{
lean_dec(v_i_303_);
return v_entries_304_;
}
else
{
lean_object* v_k_307_; lean_object* v_v_308_; uint64_t v___x_309_; size_t v_h_310_; size_t v___x_311_; lean_object* v___x_312_; size_t v___x_313_; size_t v___x_314_; size_t v___x_315_; size_t v_h_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_k_307_ = lean_array_fget_borrowed(v_keys_301_, v_i_303_);
v_v_308_ = lean_array_fget_borrowed(v_vals_302_, v_i_303_);
v___x_309_ = l_Lean_instHashableMVarId_hash(v_k_307_);
v_h_310_ = lean_uint64_to_usize(v___x_309_);
v___x_311_ = ((size_t)5ULL);
v___x_312_ = lean_unsigned_to_nat(1u);
v___x_313_ = ((size_t)1ULL);
v___x_314_ = lean_usize_sub(v_depth_300_, v___x_313_);
v___x_315_ = lean_usize_mul(v___x_311_, v___x_314_);
v_h_316_ = lean_usize_shift_right(v_h_310_, v___x_315_);
v___x_317_ = lean_nat_add(v_i_303_, v___x_312_);
lean_dec(v_i_303_);
lean_inc(v_v_308_);
lean_inc(v_k_307_);
v___x_318_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(v_entries_304_, v_h_316_, v_depth_300_, v_k_307_, v_v_308_);
v_i_303_ = v___x_317_;
v_entries_304_ = v___x_318_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg___boxed(lean_object* v_depth_320_, lean_object* v_keys_321_, lean_object* v_vals_322_, lean_object* v_i_323_, lean_object* v_entries_324_){
_start:
{
size_t v_depth_boxed_325_; lean_object* v_res_326_; 
v_depth_boxed_325_ = lean_unbox_usize(v_depth_320_);
lean_dec(v_depth_320_);
v_res_326_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg(v_depth_boxed_325_, v_keys_321_, v_vals_322_, v_i_323_, v_entries_324_);
lean_dec_ref(v_vals_322_);
lean_dec_ref(v_keys_321_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg___boxed(lean_object* v_x_327_, lean_object* v_x_328_, lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
size_t v_x_16448__boxed_332_; size_t v_x_16449__boxed_333_; lean_object* v_res_334_; 
v_x_16448__boxed_332_ = lean_unbox_usize(v_x_328_);
lean_dec(v_x_328_);
v_x_16449__boxed_333_ = lean_unbox_usize(v_x_329_);
lean_dec(v_x_329_);
v_res_334_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(v_x_327_, v_x_16448__boxed_332_, v_x_16449__boxed_333_, v_x_330_, v_x_331_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6___redArg(lean_object* v_x_335_, lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
uint64_t v___x_338_; size_t v___x_339_; size_t v___x_340_; lean_object* v___x_341_; 
v___x_338_ = l_Lean_instHashableMVarId_hash(v_x_336_);
v___x_339_ = lean_uint64_to_usize(v___x_338_);
v___x_340_ = ((size_t)1ULL);
v___x_341_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(v_x_335_, v___x_339_, v___x_340_, v_x_336_, v_x_337_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(lean_object* v_mvarId_342_, lean_object* v_val_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_346_; lean_object* v_mctx_347_; lean_object* v_cache_348_; lean_object* v_zetaDeltaFVarIds_349_; lean_object* v_postponed_350_; lean_object* v_diag_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_380_; 
v___x_346_ = lean_st_ref_take(v___y_344_);
v_mctx_347_ = lean_ctor_get(v___x_346_, 0);
v_cache_348_ = lean_ctor_get(v___x_346_, 1);
v_zetaDeltaFVarIds_349_ = lean_ctor_get(v___x_346_, 2);
v_postponed_350_ = lean_ctor_get(v___x_346_, 3);
v_diag_351_ = lean_ctor_get(v___x_346_, 4);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_380_ == 0)
{
v___x_353_ = v___x_346_;
v_isShared_354_ = v_isSharedCheck_380_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_diag_351_);
lean_inc(v_postponed_350_);
lean_inc(v_zetaDeltaFVarIds_349_);
lean_inc(v_cache_348_);
lean_inc(v_mctx_347_);
lean_dec(v___x_346_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_380_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v_depth_355_; lean_object* v_levelAssignDepth_356_; lean_object* v_lmvarCounter_357_; lean_object* v_mvarCounter_358_; lean_object* v_lDecls_359_; lean_object* v_decls_360_; lean_object* v_userNames_361_; lean_object* v_lAssignment_362_; lean_object* v_eAssignment_363_; lean_object* v_dAssignment_364_; lean_object* v_instanceTypedMVars_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_379_; 
v_depth_355_ = lean_ctor_get(v_mctx_347_, 0);
v_levelAssignDepth_356_ = lean_ctor_get(v_mctx_347_, 1);
v_lmvarCounter_357_ = lean_ctor_get(v_mctx_347_, 2);
v_mvarCounter_358_ = lean_ctor_get(v_mctx_347_, 3);
v_lDecls_359_ = lean_ctor_get(v_mctx_347_, 4);
v_decls_360_ = lean_ctor_get(v_mctx_347_, 5);
v_userNames_361_ = lean_ctor_get(v_mctx_347_, 6);
v_lAssignment_362_ = lean_ctor_get(v_mctx_347_, 7);
v_eAssignment_363_ = lean_ctor_get(v_mctx_347_, 8);
v_dAssignment_364_ = lean_ctor_get(v_mctx_347_, 9);
v_instanceTypedMVars_365_ = lean_ctor_get(v_mctx_347_, 10);
v_isSharedCheck_379_ = !lean_is_exclusive(v_mctx_347_);
if (v_isSharedCheck_379_ == 0)
{
v___x_367_ = v_mctx_347_;
v_isShared_368_ = v_isSharedCheck_379_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_instanceTypedMVars_365_);
lean_inc(v_dAssignment_364_);
lean_inc(v_eAssignment_363_);
lean_inc(v_lAssignment_362_);
lean_inc(v_userNames_361_);
lean_inc(v_decls_360_);
lean_inc(v_lDecls_359_);
lean_inc(v_mvarCounter_358_);
lean_inc(v_lmvarCounter_357_);
lean_inc(v_levelAssignDepth_356_);
lean_inc(v_depth_355_);
lean_dec(v_mctx_347_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_379_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = lean_box(0);
v___x_370_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6___redArg(v_eAssignment_363_, v_mvarId_342_, v_val_343_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 8, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_depth_355_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_levelAssignDepth_356_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v_lmvarCounter_357_);
lean_ctor_set(v_reuseFailAlloc_378_, 3, v_mvarCounter_358_);
lean_ctor_set(v_reuseFailAlloc_378_, 4, v_lDecls_359_);
lean_ctor_set(v_reuseFailAlloc_378_, 5, v_decls_360_);
lean_ctor_set(v_reuseFailAlloc_378_, 6, v_userNames_361_);
lean_ctor_set(v_reuseFailAlloc_378_, 7, v_lAssignment_362_);
lean_ctor_set(v_reuseFailAlloc_378_, 8, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_378_, 9, v_dAssignment_364_);
lean_ctor_set(v_reuseFailAlloc_378_, 10, v_instanceTypedMVars_365_);
v___x_372_ = v_reuseFailAlloc_378_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_374_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_372_);
v___x_374_ = v___x_353_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_cache_348_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v_zetaDeltaFVarIds_349_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_postponed_350_);
lean_ctor_set(v_reuseFailAlloc_377_, 4, v_diag_351_);
v___x_374_ = v_reuseFailAlloc_377_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_st_ref_put(v___y_344_, v___x_374_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_369_);
return v___x_376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg___boxed(lean_object* v_mvarId_381_, lean_object* v_val_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(v_mvarId_381_, v_val_382_, v___y_383_);
lean_dec(v___y_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4(lean_object* v_msgData_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v_env_393_; lean_object* v___x_394_; lean_object* v_toCold_395_; lean_object* v_mctx_396_; lean_object* v_lctx_397_; lean_object* v_options_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_392_ = lean_st_ref_get(v___y_390_);
v_env_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc_ref(v_env_393_);
lean_dec(v___x_392_);
v___x_394_ = lean_st_ref_get(v___y_388_);
v_toCold_395_ = lean_ctor_get(v___y_389_, 0);
v_mctx_396_ = lean_ctor_get(v___x_394_, 0);
lean_inc_ref(v_mctx_396_);
lean_dec(v___x_394_);
v_lctx_397_ = lean_ctor_get(v___y_387_, 2);
v_options_398_ = lean_ctor_get(v_toCold_395_, 2);
lean_inc_ref(v_options_398_);
lean_inc_ref(v_lctx_397_);
v___x_399_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_399_, 0, v_env_393_);
lean_ctor_set(v___x_399_, 1, v_mctx_396_);
lean_ctor_set(v___x_399_, 2, v_lctx_397_);
lean_ctor_set(v___x_399_, 3, v_options_398_);
v___x_400_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v_msgData_386_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4___boxed(lean_object* v_msgData_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4(v_msgData_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(lean_object* v_msg_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_ref_415_; lean_object* v___x_416_; lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_425_; 
v_ref_415_ = lean_ctor_get(v___y_412_, 2);
v___x_416_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3_spec__4(v_msg_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_425_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_ref_415_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_ref_415_);
lean_ctor_set(v___x_421_, 1, v_a_417_);
if (v_isShared_420_ == 0)
{
lean_ctor_set_tag(v___x_419_, 1);
lean_ctor_set(v___x_419_, 0, v___x_421_);
v___x_423_ = v___x_419_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg___boxed(lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v_msg_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
return v_res_432_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__0));
v___x_435_ = l_Lean_stringToMessageData(v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0(lean_object* v___x_436_, lean_object* v_snd_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___x_443_; 
lean_inc(v___y_441_);
lean_inc_ref(v___y_440_);
lean_inc(v___y_439_);
lean_inc_ref(v___y_438_);
lean_inc_ref(v___x_436_);
v___x_443_ = lean_infer_type(v___x_436_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v___x_445_ = l_Lean_refutableHasNotBit_x3f(v_a_444_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_445_, 1);
if (lean_obj_tag(v_a_446_) == 1)
{
lean_object* v_val_447_; lean_object* v___x_448_; 
v_val_447_ = lean_ctor_get(v_a_446_, 0);
lean_inc(v_val_447_);
lean_dec_ref_known(v_a_446_, 1);
lean_inc(v_snd_437_);
v___x_448_ = l_Lean_MVarId_getType(v_snd_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v___x_450_ = l_Lean_Meta_mkAbsurd(v_a_449_, v_val_447_, v___x_436_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec_ref(v___y_438_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref_known(v___x_450_, 1);
v___x_452_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(v_snd_437_, v_a_451_, v___y_439_);
lean_dec(v___y_439_);
return v___x_452_;
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec(v___y_439_);
lean_dec(v_snd_437_);
v_a_453_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_450_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_450_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
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
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec(v_val_447_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v_snd_437_);
lean_dec_ref(v___x_436_);
v_a_461_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_448_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_448_);
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
lean_object* v___x_469_; 
lean_dec(v_a_446_);
lean_dec(v_snd_437_);
lean_inc(v___y_441_);
lean_inc_ref(v___y_440_);
lean_inc(v___y_439_);
lean_inc_ref(v___y_438_);
v___x_469_ = lean_infer_type(v___x_436_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_469_, 1);
v___x_471_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___closed__1);
v___x_472_ = l_Lean_MessageData_ofExpr(v_a_470_);
v___x_473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v___x_473_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v___x_474_;
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
v_a_475_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_469_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_469_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v_snd_437_);
lean_dec_ref(v___x_436_);
v_a_483_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_445_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_445_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v_snd_437_);
lean_dec_ref(v___x_436_);
v_a_491_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_443_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_443_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___boxed(lean_object* v___x_499_, lean_object* v_snd_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0(v___x_499_, v_snd_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
return v_res_506_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8(lean_object* v_a_507_, lean_object* v_as_508_, size_t v_i_509_, size_t v_stop_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_eq(v_i_509_, v_stop_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_array_uget_borrowed(v_as_508_, v_i_509_);
v___x_513_ = lean_name_eq(v_a_507_, v___x_512_);
if (v___x_513_ == 0)
{
size_t v___x_514_; size_t v___x_515_; 
v___x_514_ = ((size_t)1ULL);
v___x_515_ = lean_usize_add(v_i_509_, v___x_514_);
v_i_509_ = v___x_515_;
goto _start;
}
else
{
return v___x_513_;
}
}
else
{
uint8_t v___x_517_; 
v___x_517_ = 0;
return v___x_517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8___boxed(lean_object* v_a_518_, lean_object* v_as_519_, lean_object* v_i_520_, lean_object* v_stop_521_){
_start:
{
size_t v_i_boxed_522_; size_t v_stop_boxed_523_; uint8_t v_res_524_; lean_object* v_r_525_; 
v_i_boxed_522_ = lean_unbox_usize(v_i_520_);
lean_dec(v_i_520_);
v_stop_boxed_523_ = lean_unbox_usize(v_stop_521_);
lean_dec(v_stop_521_);
v_res_524_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8(v_a_518_, v_as_519_, v_i_boxed_522_, v_stop_boxed_523_);
lean_dec_ref(v_as_519_);
lean_dec(v_a_518_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5(lean_object* v_as_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = lean_array_get_size(v_as_526_);
v___x_530_ = lean_nat_dec_lt(v___x_528_, v___x_529_);
if (v___x_530_ == 0)
{
return v___x_530_;
}
else
{
if (v___x_530_ == 0)
{
return v___x_530_;
}
else
{
size_t v___x_531_; size_t v___x_532_; uint8_t v___x_533_; 
v___x_531_ = ((size_t)0ULL);
v___x_532_ = lean_usize_of_nat(v___x_529_);
v___x_533_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5_spec__8(v_a_527_, v_as_526_, v___x_531_, v___x_532_);
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5___boxed(lean_object* v_as_534_, lean_object* v_a_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5(v_as_534_, v_a_535_);
lean_dec(v_a_535_);
lean_dec_ref(v_as_534_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_541_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__2));
v___x_542_ = lean_unsigned_to_nat(10u);
v___x_543_ = lean_unsigned_to_nat(63u);
v___x_544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__1));
v___x_545_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0));
v___x_546_ = l_mkPanicMessageWithDecl(v___x_545_, v___x_544_, v___x_543_, v___x_542_, v___x_541_);
return v___x_546_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__6));
v___x_551_ = lean_unsigned_to_nat(14u);
v___x_552_ = lean_unsigned_to_nat(22u);
v___x_553_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__5));
v___x_554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__4));
v___x_555_ = l_mkPanicMessageWithDecl(v___x_554_, v___x_553_, v___x_552_, v___x_551_, v___x_550_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1(uint8_t v___y_556_, lean_object* v_val_557_, lean_object* v_mvarId_558_, uint8_t v___x_559_, lean_object* v_subst_560_, lean_object* v_fst_561_, lean_object* v_fst_562_, lean_object* v___x_563_, lean_object* v_ctorName_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v___y_571_; 
if (v___y_556_ == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec(v_ctorName_564_);
lean_dec(v___x_563_);
lean_dec(v_fst_562_);
lean_dec(v_fst_561_);
lean_dec(v_mvarId_558_);
v___x_593_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__3);
v___x_594_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2(v___x_593_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
return v___x_594_;
}
else
{
if (lean_obj_tag(v_ctorName_564_) == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__7);
v___x_596_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__7(v___x_595_);
v___y_571_ = v___x_596_;
goto v___jp_570_;
}
else
{
lean_object* v_val_597_; 
v_val_597_ = lean_ctor_get(v_ctorName_564_, 0);
lean_inc(v_val_597_);
lean_dec_ref_known(v_ctorName_564_, 1);
v___y_571_ = v_val_597_;
goto v___jp_570_;
}
}
v___jp_570_:
{
lean_object* v_insterestingCtors_572_; uint8_t v___x_573_; 
v_insterestingCtors_572_ = lean_ctor_get(v_val_557_, 3);
v___x_573_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__5(v_insterestingCtors_572_, v___y_571_);
lean_dec(v___y_571_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
lean_dec(v___x_563_);
lean_dec(v_fst_562_);
lean_dec(v_fst_561_);
v___x_574_ = l_Lean_MVarId_refl(v_mvarId_558_, v___x_559_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
return v___x_574_;
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = l_Lean_Meta_FVarSubst_get(v_subst_560_, v_fst_561_);
v___x_576_ = l_Lean_Meta_FVarSubst_get(v_subst_560_, v_fst_562_);
v___x_577_ = l_Lean_Expr_fvarId_x21(v___x_576_);
lean_dec_ref(v___x_576_);
v___x_578_ = l_Lean_Meta_substEq(v_mvarId_558_, v___x_577_, v___x_563_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_582_; lean_object* v___f_583_; lean_object* v___x_584_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
v_fst_580_ = lean_ctor_get(v_a_579_, 0);
lean_inc(v_fst_580_);
v_snd_581_ = lean_ctor_get(v_a_579_, 1);
lean_inc_n(v_snd_581_, 2);
lean_dec(v_a_579_);
v___x_582_ = l_Lean_Meta_FVarSubst_apply(v_fst_580_, v___x_575_);
lean_dec_ref(v___x_575_);
v___f_583_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__0___boxed), 7, 2);
lean_closure_set(v___f_583_, 0, v___x_582_);
lean_closure_set(v___f_583_, 1, v_snd_581_);
v___x_584_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(v_snd_581_, v___f_583_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
return v___x_584_;
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v___x_575_);
v_a_585_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_578_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_578_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___boxed(lean_object* v___y_598_, lean_object* v_val_599_, lean_object* v_mvarId_600_, lean_object* v___x_601_, lean_object* v_subst_602_, lean_object* v_fst_603_, lean_object* v_fst_604_, lean_object* v___x_605_, lean_object* v_ctorName_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
uint8_t v___y_16924__boxed_612_; uint8_t v___x_16926__boxed_613_; lean_object* v_res_614_; 
v___y_16924__boxed_612_ = lean_unbox(v___y_598_);
v___x_16926__boxed_613_ = lean_unbox(v___x_601_);
v_res_614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1(v___y_16924__boxed_612_, v_val_599_, v_mvarId_600_, v___x_16926__boxed_613_, v_subst_602_, v_fst_603_, v_fst_604_, v___x_605_, v_ctorName_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v_subst_602_);
lean_dec_ref(v_val_599_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9(lean_object* v_val_615_, lean_object* v___x_616_, lean_object* v_fst_617_, lean_object* v_fst_618_, lean_object* v_as_619_, size_t v_i_620_, size_t v_stop_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
uint8_t v___x_628_; 
v___x_628_ = lean_usize_dec_eq(v_i_620_, v_stop_621_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; lean_object* v_toInductionSubgoal_630_; lean_object* v_ctorName_631_; lean_object* v_mvarId_632_; lean_object* v_subst_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; uint8_t v___y_638_; 
v___x_629_ = lean_array_uget_borrowed(v_as_619_, v_i_620_);
v_toInductionSubgoal_630_ = lean_ctor_get(v___x_629_, 0);
v_ctorName_631_ = lean_ctor_get(v___x_629_, 1);
v_mvarId_632_ = lean_ctor_get(v_toInductionSubgoal_630_, 0);
v_subst_633_ = lean_ctor_get(v_toInductionSubgoal_630_, 2);
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = lean_nat_dec_eq(v___x_616_, v___x_634_);
v___x_636_ = lean_box(0);
if (lean_obj_tag(v_ctorName_631_) == 0)
{
v___y_638_ = v___x_628_;
goto v___jp_637_;
}
else
{
v___y_638_ = v___x_635_;
goto v___jp_637_;
}
v___jp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___y_641_; lean_object* v___x_642_; 
v___x_639_ = lean_box(v___y_638_);
v___x_640_ = lean_box(v___x_635_);
lean_inc(v_ctorName_631_);
lean_inc(v_fst_618_);
lean_inc(v_fst_617_);
lean_inc(v_subst_633_);
lean_inc_n(v_mvarId_632_, 2);
lean_inc_ref(v_val_615_);
v___y_641_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___boxed), 14, 9);
lean_closure_set(v___y_641_, 0, v___x_639_);
lean_closure_set(v___y_641_, 1, v_val_615_);
lean_closure_set(v___y_641_, 2, v_mvarId_632_);
lean_closure_set(v___y_641_, 3, v___x_640_);
lean_closure_set(v___y_641_, 4, v_subst_633_);
lean_closure_set(v___y_641_, 5, v_fst_617_);
lean_closure_set(v___y_641_, 6, v_fst_618_);
lean_closure_set(v___y_641_, 7, v___x_636_);
lean_closure_set(v___y_641_, 8, v_ctorName_631_);
v___x_642_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(v_mvarId_632_, v___y_641_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; size_t v___x_644_; size_t v___x_645_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v___x_644_ = ((size_t)1ULL);
v___x_645_ = lean_usize_add(v_i_620_, v___x_644_);
v_i_620_ = v___x_645_;
v_b_622_ = v_a_643_;
goto _start;
}
else
{
lean_dec(v_fst_618_);
lean_dec(v_fst_617_);
lean_dec_ref(v_val_615_);
return v___x_642_;
}
}
}
else
{
lean_object* v___x_647_; 
lean_dec(v_fst_618_);
lean_dec(v_fst_617_);
lean_dec_ref(v_val_615_);
v___x_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_647_, 0, v_b_622_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___boxed(lean_object* v_val_648_, lean_object* v___x_649_, lean_object* v_fst_650_, lean_object* v_fst_651_, lean_object* v_as_652_, lean_object* v_i_653_, lean_object* v_stop_654_, lean_object* v_b_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
size_t v_i_boxed_661_; size_t v_stop_boxed_662_; lean_object* v_res_663_; 
v_i_boxed_661_ = lean_unbox_usize(v_i_653_);
lean_dec(v_i_653_);
v_stop_boxed_662_ = lean_unbox_usize(v_stop_654_);
lean_dec(v_stop_654_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9(v_val_648_, v___x_649_, v_fst_650_, v_fst_651_, v_as_652_, v_i_boxed_661_, v_stop_boxed_662_, v_b_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec_ref(v_as_652_);
lean_dec(v___x_649_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0(lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_fst_669_, lean_object* v___x_670_, lean_object* v_snd_671_, lean_object* v_val_672_, lean_object* v___x_673_, lean_object* v_xs_674_, lean_object* v___x_675_, lean_object* v_a_676_, lean_object* v_hyps_677_, lean_object* v_a_678_, uint8_t v___x_679_, lean_object* v_thmName_680_, lean_object* v_levelParams_681_, lean_object* v___x_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___x_688_; 
lean_inc_ref(v___x_667_);
v___x_688_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_667_, v___x_668_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_688_, 1);
v___x_690_ = l_Lean_Expr_mvarId_x21(v_a_689_);
v___x_691_ = lean_box(0);
lean_inc(v_fst_669_);
v___x_692_ = l_Lean_Meta_substEq(v___x_690_, v_fst_669_, v___x_691_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v_fst_694_; lean_object* v_snd_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_788_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_a_693_);
lean_dec_ref_known(v___x_692_, 1);
v_fst_694_ = lean_ctor_get(v_a_693_, 0);
lean_inc(v_fst_694_);
v_snd_695_ = lean_ctor_get(v_a_693_, 1);
lean_inc(v_snd_695_);
lean_dec(v_a_693_);
v___x_696_ = l_Lean_Meta_FVarSubst_apply(v_fst_694_, v___x_670_);
v___x_697_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(v_snd_695_, v___x_696_, v___y_684_);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_788_ == 0)
{
lean_object* v_unused_789_; 
v_unused_789_ = lean_ctor_get(v___x_697_, 0);
lean_dec(v_unused_789_);
v___x_699_ = v___x_697_;
v_isShared_700_ = v_isSharedCheck_788_;
goto v_resetjp_698_;
}
else
{
lean_dec(v___x_697_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_788_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___closed__1));
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 1);
lean_ctor_set(v___x_699_, 0, v___x_667_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_667_);
v___x_703_ = v_reuseFailAlloc_787_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_MVarId_note(v_snd_671_, v___x_701_, v_a_689_, v___x_703_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v_fst_706_; lean_object* v_snd_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_778_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_704_, 1);
v_fst_706_ = lean_ctor_get(v_a_705_, 0);
v_snd_707_ = lean_ctor_get(v_a_705_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v_a_705_);
if (v_isSharedCheck_778_ == 0)
{
v___x_709_ = v_a_705_;
v_isShared_710_ = v_isSharedCheck_778_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_snd_707_);
lean_inc(v_fst_706_);
lean_dec(v_a_705_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_778_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v_majorPos_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; lean_object* v___y_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_majorPos_711_ = lean_ctor_get(v_val_672_, 1);
v___x_712_ = lean_array_get_borrowed(v___x_673_, v_xs_674_, v_majorPos_711_);
v___x_713_ = l_Lean_Expr_fvarId_x21(v___x_712_);
v___x_714_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___x_715_ = 0;
v___x_757_ = lean_box(0);
v___x_758_ = l_Lean_MVarId_cases(v_snd_707_, v___x_713_, v___x_714_, v___x_715_, v___x_757_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = lean_array_get_size(v_a_759_);
v___x_761_ = lean_nat_dec_lt(v___x_675_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_a_759_);
lean_dec(v_fst_706_);
lean_dec_ref(v_val_672_);
lean_dec(v_fst_669_);
goto v___jp_716_;
}
else
{
lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_762_ = lean_box(0);
v___x_763_ = lean_nat_dec_le(v___x_760_, v___x_760_);
if (v___x_763_ == 0)
{
if (v___x_761_ == 0)
{
lean_dec(v_a_759_);
lean_dec(v_fst_706_);
lean_dec_ref(v_val_672_);
lean_dec(v_fst_669_);
goto v___jp_716_;
}
else
{
size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; 
v___x_764_ = ((size_t)0ULL);
v___x_765_ = lean_usize_of_nat(v___x_760_);
v___x_766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9(v_val_672_, v___x_682_, v_fst_706_, v_fst_669_, v_a_759_, v___x_764_, v___x_765_, v___x_762_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v_a_759_);
v___y_756_ = v___x_766_;
goto v___jp_755_;
}
}
else
{
size_t v___x_767_; size_t v___x_768_; lean_object* v___x_769_; 
v___x_767_ = ((size_t)0ULL);
v___x_768_ = lean_usize_of_nat(v___x_760_);
v___x_769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9(v_val_672_, v___x_682_, v_fst_706_, v_fst_669_, v_a_759_, v___x_767_, v___x_768_, v___x_762_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v_a_759_);
v___y_756_ = v___x_769_;
goto v___jp_755_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_del_object(v___x_709_);
lean_dec(v_fst_706_);
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_xs_674_);
lean_dec_ref(v_val_672_);
lean_dec(v_fst_669_);
v_a_770_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_758_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_758_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
v___jp_716_:
{
lean_object* v___x_717_; lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_754_; 
v___x_717_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__8___redArg(v_a_676_, v___y_684_);
v_a_718_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_754_ == 0)
{
v___x_720_ = v___x_717_;
v_isShared_721_ = v_isSharedCheck_754_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_717_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_754_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; uint8_t v___x_723_; lean_object* v___x_724_; 
v___x_722_ = l_Array_append___redArg(v_xs_674_, v_hyps_677_);
v___x_723_ = 1;
lean_inc_ref(v___x_722_);
v___x_724_ = l_Lean_Meta_mkForallFVars(v___x_722_, v_a_678_, v___x_715_, v___x_679_, v___x_679_, v___x_723_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
v___x_726_ = l_Lean_Meta_mkLambdaFVars(v___x_722_, v_a_718_, v___x_715_, v___x_679_, v___x_715_, v___x_679_, v___x_723_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
lean_inc(v_thmName_680_);
v___x_728_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_728_, 0, v_thmName_680_);
lean_ctor_set(v___x_728_, 1, v_levelParams_681_);
lean_ctor_set(v___x_728_, 2, v_a_725_);
v___x_729_ = lean_box(0);
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 1);
lean_ctor_set(v___x_709_, 1, v___x_729_);
lean_ctor_set(v___x_709_, 0, v_thmName_680_);
v___x_731_ = v___x_709_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_thmName_680_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v___x_729_);
v___x_731_ = v_reuseFailAlloc_737_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_732_, 0, v___x_728_);
lean_ctor_set(v___x_732_, 1, v_a_727_);
lean_ctor_set(v___x_732_, 2, v___x_731_);
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 2);
lean_ctor_set(v___x_720_, 0, v___x_732_);
v___x_734_ = v___x_720_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_732_);
v___x_734_ = v_reuseFailAlloc_736_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lean_addDecl(v___x_734_, v___x_715_, v___y_685_, v___y_686_);
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_a_725_);
lean_del_object(v___x_720_);
lean_del_object(v___x_709_);
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
v_a_738_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_726_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_726_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec_ref(v___x_722_);
lean_del_object(v___x_720_);
lean_dec(v_a_718_);
lean_del_object(v___x_709_);
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
v_a_746_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_724_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_724_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
v___jp_755_:
{
if (lean_obj_tag(v___y_756_) == 0)
{
lean_dec_ref_known(v___y_756_, 1);
goto v___jp_716_;
}
else
{
lean_del_object(v___x_709_);
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_xs_674_);
return v___y_756_;
}
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_xs_674_);
lean_dec_ref(v_val_672_);
lean_dec(v_fst_669_);
v_a_779_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_704_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_704_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_689_);
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_xs_674_);
lean_dec_ref(v_val_672_);
lean_dec(v_snd_671_);
lean_dec(v_fst_669_);
lean_dec_ref(v___x_667_);
v_a_790_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_692_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_692_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec(v_levelParams_681_);
lean_dec(v_thmName_680_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_xs_674_);
lean_dec_ref(v_val_672_);
lean_dec(v_snd_671_);
lean_dec(v_fst_669_);
lean_dec_ref(v___x_667_);
v_a_798_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_688_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_688_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___boxed(lean_object** _args){
lean_object* v___x_806_ = _args[0];
lean_object* v___x_807_ = _args[1];
lean_object* v_fst_808_ = _args[2];
lean_object* v___x_809_ = _args[3];
lean_object* v_snd_810_ = _args[4];
lean_object* v_val_811_ = _args[5];
lean_object* v___x_812_ = _args[6];
lean_object* v_xs_813_ = _args[7];
lean_object* v___x_814_ = _args[8];
lean_object* v_a_815_ = _args[9];
lean_object* v_hyps_816_ = _args[10];
lean_object* v_a_817_ = _args[11];
lean_object* v___x_818_ = _args[12];
lean_object* v_thmName_819_ = _args[13];
lean_object* v_levelParams_820_ = _args[14];
lean_object* v___x_821_ = _args[15];
lean_object* v___y_822_ = _args[16];
lean_object* v___y_823_ = _args[17];
lean_object* v___y_824_ = _args[18];
lean_object* v___y_825_ = _args[19];
lean_object* v___y_826_ = _args[20];
_start:
{
uint8_t v___x_17106__boxed_827_; lean_object* v_res_828_; 
v___x_17106__boxed_827_ = lean_unbox(v___x_818_);
v_res_828_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0(v___x_806_, v___x_807_, v_fst_808_, v___x_809_, v_snd_810_, v_val_811_, v___x_812_, v_xs_813_, v___x_814_, v_a_815_, v_hyps_816_, v_a_817_, v___x_17106__boxed_827_, v_thmName_819_, v_levelParams_820_, v___x_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___x_821_);
lean_dec_ref(v_hyps_816_);
lean_dec(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_809_);
return v_res_828_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_830_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__0));
v___x_831_ = lean_unsigned_to_nat(8u);
v___x_832_ = lean_unsigned_to_nat(34u);
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__1));
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0));
v___x_835_ = l_mkPanicMessageWithDecl(v___x_834_, v___x_833_, v___x_832_, v___x_831_, v___x_830_);
return v___x_835_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__2));
v___x_838_ = l_Lean_stringToMessageData(v___x_837_);
return v___x_838_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_box(0);
v___x_840_ = l_unsafeCast___redArg(v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1(lean_object* v___x_854_, lean_object* v___x_855_, lean_object* v_sparseCasesOnName_856_, lean_object* v___x_857_, lean_object* v_xs_858_, lean_object* v___x_859_, lean_object* v___x_860_, lean_object* v_val_861_, lean_object* v_thmName_862_, lean_object* v_levelParams_863_, lean_object* v_hyps_864_, lean_object* v_x_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = lean_array_get_size(v_hyps_864_);
v___x_872_ = lean_nat_dec_eq(v___x_871_, v___x_854_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v___x_859_);
lean_dec_ref(v_xs_858_);
lean_dec(v___x_857_);
lean_dec(v_sparseCasesOnName_856_);
lean_dec_ref(v___x_855_);
v___x_873_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1_once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__1);
v___x_874_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__2(v___x_873_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = lean_array_get(v___x_855_, v_hyps_864_, v___x_875_);
v___x_896_ = l_Lean_mkConst(v_sparseCasesOnName_856_, v___x_857_);
v___x_897_ = l_Lean_mkAppN(v___x_896_, v_xs_858_);
v___x_898_ = l_Lean_mkAppN(v___x_859_, v_hyps_864_);
v___x_899_ = l_Lean_Meta_mkEq(v___x_897_, v___x_898_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc_n(v_a_900_, 2);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4_once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__4);
v___x_902_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_900_, v___x_901_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = l_Lean_Expr_mvarId_x21(v_a_903_);
lean_inc(v___y_869_);
lean_inc_ref(v___y_868_);
lean_inc(v___y_867_);
lean_inc_ref(v___y_866_);
lean_inc(v___x_876_);
v___x_905_ = lean_infer_type(v___x_876_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_905_, 1);
v___x_907_ = l_Lean_Expr_cleanupAnnotations(v_a_906_);
v___x_908_ = l_Lean_Expr_isApp(v___x_907_);
if (v___x_908_ == 0)
{
lean_dec_ref(v___x_907_);
lean_dec(v___x_904_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v___y_878_ = v___y_866_;
v___y_879_ = v___y_867_;
v___y_880_ = v___y_868_;
v___y_881_ = v___y_869_;
goto v___jp_877_;
}
else
{
lean_object* v_arg_909_; lean_object* v___x_910_; uint8_t v___x_911_; 
v_arg_909_ = lean_ctor_get(v___x_907_, 1);
lean_inc_ref(v_arg_909_);
v___x_910_ = l_Lean_Expr_appFnCleanup___redArg(v___x_907_);
v___x_911_ = l_Lean_Expr_isApp(v___x_910_);
if (v___x_911_ == 0)
{
lean_dec_ref(v___x_910_);
lean_dec_ref(v_arg_909_);
lean_dec(v___x_904_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v___y_878_ = v___y_866_;
v___y_879_ = v___y_867_;
v___y_880_ = v___y_868_;
v___y_881_ = v___y_869_;
goto v___jp_877_;
}
else
{
lean_object* v_arg_912_; lean_object* v___x_913_; lean_object* v___x_914_; uint8_t v___x_915_; 
v_arg_912_ = lean_ctor_get(v___x_910_, 1);
lean_inc_ref(v_arg_912_);
v___x_913_ = l_Lean_Expr_appFnCleanup___redArg(v___x_910_);
v___x_914_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__7));
v___x_915_ = l_Lean_Expr_isConstOf(v___x_913_, v___x_914_);
lean_dec_ref(v___x_913_);
if (v___x_915_ == 0)
{
lean_dec_ref(v_arg_912_);
lean_dec_ref(v_arg_909_);
lean_dec(v___x_904_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v___y_878_ = v___y_866_;
v___y_879_ = v___y_867_;
v___y_880_ = v___y_868_;
v___y_881_ = v___y_869_;
goto v___jp_877_;
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_916_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__9));
v___x_917_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__10));
lean_inc(v___x_860_);
v___x_918_ = l_Lean_mkConst(v___x_917_, v___x_860_);
v___x_919_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__12));
v___x_920_ = l_Lean_MVarId_assertExt(v___x_904_, v___x_916_, v___x_918_, v_arg_909_, v___x_919_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = l_Lean_Meta_intro1Core(v_a_921_, v___x_872_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v_fst_924_; lean_object* v_snd_925_; lean_object* v___x_926_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v_fst_924_ = lean_ctor_get(v_a_923_, 0);
lean_inc(v_fst_924_);
v_snd_925_ = lean_ctor_get(v_a_923_, 1);
lean_inc(v_snd_925_);
lean_dec(v_a_923_);
v___x_926_ = l_Lean_Meta_intro1Core(v_snd_925_, v___x_872_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v_fst_928_; lean_object* v_snd_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___f_934_; lean_object* v___x_935_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
v_fst_928_ = lean_ctor_get(v_a_927_, 0);
lean_inc(v_fst_928_);
v_snd_929_ = lean_ctor_get(v_a_927_, 1);
lean_inc_n(v_snd_929_, 2);
lean_dec(v_a_927_);
v___x_930_ = l_Lean_mkConst(v___x_914_, v___x_860_);
v___x_931_ = l_Lean_mkFVar(v_fst_924_);
v___x_932_ = l_Lean_mkAppB(v___x_930_, v_arg_912_, v___x_931_);
v___x_933_ = lean_box(v___x_872_);
v___f_934_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__0___boxed), 21, 16);
lean_closure_set(v___f_934_, 0, v___x_932_);
lean_closure_set(v___f_934_, 1, v___x_901_);
lean_closure_set(v___f_934_, 2, v_fst_928_);
lean_closure_set(v___f_934_, 3, v___x_876_);
lean_closure_set(v___f_934_, 4, v_snd_929_);
lean_closure_set(v___f_934_, 5, v_val_861_);
lean_closure_set(v___f_934_, 6, v___x_855_);
lean_closure_set(v___f_934_, 7, v_xs_858_);
lean_closure_set(v___f_934_, 8, v___x_875_);
lean_closure_set(v___f_934_, 9, v_a_903_);
lean_closure_set(v___f_934_, 10, v_hyps_864_);
lean_closure_set(v___f_934_, 11, v_a_900_);
lean_closure_set(v___f_934_, 12, v___x_933_);
lean_closure_set(v___f_934_, 13, v_thmName_862_);
lean_closure_set(v___f_934_, 14, v_levelParams_863_);
lean_closure_set(v___f_934_, 15, v___x_871_);
v___x_935_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__6___redArg(v_snd_929_, v___f_934_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
return v___x_935_;
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_fst_924_);
lean_dec_ref(v_arg_912_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_936_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_926_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_926_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec_ref(v_arg_912_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_944_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_922_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_922_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec_ref(v_arg_912_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_952_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_920_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_920_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
lean_dec(v___x_904_);
lean_dec(v_a_903_);
lean_dec(v_a_900_);
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_960_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_905_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_905_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec(v_a_900_);
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_968_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_902_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_902_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v___x_876_);
lean_dec_ref(v_hyps_864_);
lean_dec(v_levelParams_863_);
lean_dec(v_thmName_862_);
lean_dec_ref(v_val_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_xs_858_);
lean_dec_ref(v___x_855_);
v_a_976_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_899_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_899_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
v___jp_877_:
{
lean_object* v___x_882_; 
lean_inc(v___y_881_);
lean_inc_ref(v___y_880_);
lean_inc(v___y_879_);
lean_inc_ref(v___y_878_);
v___x_882_ = lean_infer_type(v___x_876_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3_once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___closed__3);
v___x_885_ = l_Lean_MessageData_ofExpr(v_a_883_);
v___x_886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_884_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v___x_886_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
return v___x_887_;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
v_a_888_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_882_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_882_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___boxed(lean_object** _args){
lean_object* v___x_984_ = _args[0];
lean_object* v___x_985_ = _args[1];
lean_object* v_sparseCasesOnName_986_ = _args[2];
lean_object* v___x_987_ = _args[3];
lean_object* v_xs_988_ = _args[4];
lean_object* v___x_989_ = _args[5];
lean_object* v___x_990_ = _args[6];
lean_object* v_val_991_ = _args[7];
lean_object* v_thmName_992_ = _args[8];
lean_object* v_levelParams_993_ = _args[9];
lean_object* v_hyps_994_ = _args[10];
lean_object* v_x_995_ = _args[11];
lean_object* v___y_996_ = _args[12];
lean_object* v___y_997_ = _args[13];
lean_object* v___y_998_ = _args[14];
lean_object* v___y_999_ = _args[15];
lean_object* v___y_1000_ = _args[16];
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1(v___x_984_, v___x_985_, v_sparseCasesOnName_986_, v___x_987_, v_xs_988_, v___x_989_, v___x_990_, v_val_991_, v_thmName_992_, v_levelParams_993_, v_hyps_994_, v_x_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec_ref(v_x_995_);
lean_dec(v___x_984_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2(lean_object* v___x_1002_, lean_object* v_sparseCasesOnName_1003_, lean_object* v___x_1004_, lean_object* v___x_1005_, lean_object* v_val_1006_, lean_object* v_thmName_1007_, lean_object* v_levelParams_1008_, lean_object* v_xs_1009_, lean_object* v_x_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___f_1020_; lean_object* v___x_1021_; 
v___x_1016_ = lean_array_get_size(v_xs_1009_);
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_nat_sub(v___x_1016_, v___x_1017_);
v___x_1019_ = lean_array_get(v___x_1002_, v_xs_1009_, v___x_1018_);
lean_dec(v___x_1018_);
lean_inc(v___x_1019_);
v___f_1020_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__1___boxed), 17, 10);
lean_closure_set(v___f_1020_, 0, v___x_1017_);
lean_closure_set(v___f_1020_, 1, v___x_1002_);
lean_closure_set(v___f_1020_, 2, v_sparseCasesOnName_1003_);
lean_closure_set(v___f_1020_, 3, v___x_1004_);
lean_closure_set(v___f_1020_, 4, v_xs_1009_);
lean_closure_set(v___f_1020_, 5, v___x_1019_);
lean_closure_set(v___f_1020_, 6, v___x_1005_);
lean_closure_set(v___f_1020_, 7, v_val_1006_);
lean_closure_set(v___f_1020_, 8, v_thmName_1007_);
lean_closure_set(v___f_1020_, 9, v_levelParams_1008_);
lean_inc(v___y_1014_);
lean_inc_ref(v___y_1013_);
lean_inc(v___y_1012_);
lean_inc_ref(v___y_1011_);
v___x_1021_ = lean_infer_type(v___x_1019_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = 0;
v___x_1024_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(v_a_1022_, v___f_1020_, v___x_1023_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
return v___x_1024_;
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref(v___f_1020_);
v_a_1025_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1021_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1021_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2___boxed(lean_object* v___x_1033_, lean_object* v_sparseCasesOnName_1034_, lean_object* v___x_1035_, lean_object* v___x_1036_, lean_object* v_val_1037_, lean_object* v_thmName_1038_, lean_object* v_levelParams_1039_, lean_object* v_xs_1040_, lean_object* v_x_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2(v___x_1033_, v_sparseCasesOnName_1034_, v___x_1035_, v___x_1036_, v_val_1037_, v_thmName_1038_, v_levelParams_1039_, v_xs_1040_, v_x_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec_ref(v_x_1041_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg(lean_object* v_ref_1048_, lean_object* v_msg_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_toCold_1055_; lean_object* v_currRecDepth_1056_; lean_object* v_ref_1057_; uint8_t v_diag_1058_; uint8_t v_suppressElabErrors_1059_; lean_object* v_ref_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_toCold_1055_ = lean_ctor_get(v___y_1052_, 0);
v_currRecDepth_1056_ = lean_ctor_get(v___y_1052_, 1);
v_ref_1057_ = lean_ctor_get(v___y_1052_, 2);
v_diag_1058_ = lean_ctor_get_uint8(v___y_1052_, sizeof(void*)*3);
v_suppressElabErrors_1059_ = lean_ctor_get_uint8(v___y_1052_, sizeof(void*)*3 + 1);
v_ref_1060_ = l_Lean_replaceRef(v_ref_1048_, v_ref_1057_);
lean_inc(v_currRecDepth_1056_);
lean_inc_ref(v_toCold_1055_);
v___x_1061_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1061_, 0, v_toCold_1055_);
lean_ctor_set(v___x_1061_, 1, v_currRecDepth_1056_);
lean_ctor_set(v___x_1061_, 2, v_ref_1060_);
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*3, v_diag_1058_);
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*3 + 1, v_suppressElabErrors_1059_);
v___x_1062_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v_msg_1049_, v___y_1050_, v___y_1051_, v___x_1061_, v___y_1053_);
lean_dec_ref_known(v___x_1061_, 3);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg___boxed(lean_object* v_ref_1063_, lean_object* v_msg_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg(v_ref_1063_, v_msg_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v_ref_1063_);
return v_res_1070_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0(void){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1071_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1074_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1);
v___x_1075_ = lean_unsigned_to_nat(0u);
v___x_1076_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
lean_ctor_set(v___x_1076_, 2, v___x_1075_);
lean_ctor_set(v___x_1076_, 3, v___x_1075_);
lean_ctor_set(v___x_1076_, 4, v___x_1074_);
lean_ctor_set(v___x_1076_, 5, v___x_1074_);
lean_ctor_set(v___x_1076_, 6, v___x_1074_);
lean_ctor_set(v___x_1076_, 7, v___x_1074_);
lean_ctor_set(v___x_1076_, 8, v___x_1074_);
lean_ctor_set(v___x_1076_, 9, v___x_1074_);
lean_ctor_set(v___x_1076_, 10, v___x_1074_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3(void){
_start:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1077_ = lean_unsigned_to_nat(32u);
v___x_1078_ = lean_mk_empty_array_with_capacity(v___x_1077_);
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4(void){
_start:
{
size_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1080_ = ((size_t)5ULL);
v___x_1081_ = lean_unsigned_to_nat(0u);
v___x_1082_ = lean_unsigned_to_nat(32u);
v___x_1083_ = lean_mk_empty_array_with_capacity(v___x_1082_);
v___x_1084_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__3);
v___x_1085_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v___x_1083_);
lean_ctor_set(v___x_1085_, 2, v___x_1081_);
lean_ctor_set(v___x_1085_, 3, v___x_1081_);
lean_ctor_set_usize(v___x_1085_, 4, v___x_1080_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1086_ = lean_box(1);
v___x_1087_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4);
v___x_1088_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__1);
v___x_1089_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
lean_ctor_set(v___x_1089_, 2, v___x_1086_);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__6));
v___x_1092_ = l_Lean_stringToMessageData(v___x_1091_);
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__8));
v___x_1095_ = l_Lean_stringToMessageData(v___x_1094_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__10));
v___x_1098_ = l_Lean_stringToMessageData(v___x_1097_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__12));
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__14));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__16));
v___x_1107_ = l_Lean_stringToMessageData(v___x_1106_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__18));
v___x_1110_ = l_Lean_stringToMessageData(v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg(lean_object* v_msg_1111_, lean_object* v_declHint_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v_env_1117_; uint8_t v___x_1118_; 
v___x_1115_ = l_Lean_instInhabitedName;
v___x_1116_ = lean_st_ref_get(v___y_1113_);
v_env_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc_ref(v_env_1117_);
lean_dec(v___x_1116_);
v___x_1118_ = l_Lean_Name_isAnonymous(v_declHint_1112_);
if (v___x_1118_ == 0)
{
uint8_t v_isExporting_1119_; 
v_isExporting_1119_ = lean_ctor_get_uint8(v_env_1117_, sizeof(void*)*8);
if (v_isExporting_1119_ == 0)
{
lean_object* v___x_1120_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_declHint_1112_);
v___x_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1120_, 0, v_msg_1111_);
return v___x_1120_;
}
else
{
lean_object* v___x_1121_; uint8_t v___x_1122_; 
lean_inc_ref(v_env_1117_);
v___x_1121_ = l_Lean_Environment_setExporting(v_env_1117_, v___x_1118_);
lean_inc(v_declHint_1112_);
lean_inc_ref(v___x_1121_);
v___x_1122_ = l_Lean_Environment_contains(v___x_1121_, v_declHint_1112_, v_isExporting_1119_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; 
lean_dec_ref(v___x_1121_);
lean_dec_ref(v_env_1117_);
lean_dec(v_declHint_1112_);
v___x_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1123_, 0, v_msg_1111_);
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v_c_1129_; lean_object* v___x_1130_; 
v___x_1124_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__2);
v___x_1125_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__5);
v___x_1126_ = l_Lean_Options_empty;
v___x_1127_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1121_);
lean_ctor_set(v___x_1127_, 1, v___x_1124_);
lean_ctor_set(v___x_1127_, 2, v___x_1125_);
lean_ctor_set(v___x_1127_, 3, v___x_1126_);
lean_inc(v_declHint_1112_);
v___x_1128_ = l_Lean_MessageData_ofConstName(v_declHint_1112_, v___x_1118_);
v_c_1129_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1129_, 0, v___x_1127_);
lean_ctor_set(v_c_1129_, 1, v___x_1128_);
v___x_1130_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1117_, v_declHint_1112_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_declHint_1112_);
v___x_1131_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v_c_1129_);
v___x_1133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__9);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_MessageData_note(v___x_1134_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_msg_1111_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
else
{
lean_object* v_val_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1172_; 
v_val_1138_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1140_ = v___x_1130_;
v_isShared_1141_ = v_isSharedCheck_1172_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_val_1138_);
lean_dec(v___x_1130_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1172_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v_mod_1144_; uint8_t v___x_1145_; 
v___x_1142_ = l_Lean_Environment_header(v_env_1117_);
lean_dec_ref(v_env_1117_);
v___x_1143_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1142_);
lean_dec_ref(v___x_1142_);
v_mod_1144_ = lean_array_get(v___x_1115_, v___x_1143_, v_val_1138_);
lean_dec(v_val_1138_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = l_Lean_isPrivateName(v_declHint_1112_);
lean_dec(v_declHint_1112_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1146_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__11);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v_c_1129_);
v___x_1148_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__13);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = l_Lean_MessageData_ofName(v_mod_1144_);
v___x_1151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__15);
v___x_1153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = l_Lean_MessageData_note(v___x_1153_);
v___x_1155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_msg_1111_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1155_);
v___x_1157_ = v___x_1140_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
else
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1159_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__7);
v___x_1160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v_c_1129_);
v___x_1161_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__17);
v___x_1162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1160_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
v___x_1163_ = l_Lean_MessageData_ofName(v_mod_1144_);
v___x_1164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
v___x_1165_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__19);
v___x_1166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
v___x_1167_ = l_Lean_MessageData_note(v___x_1166_);
v___x_1168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1168_, 0, v_msg_1111_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1168_);
v___x_1170_ = v___x_1140_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1173_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_declHint_1112_);
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v_msg_1111_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___boxed(lean_object* v_msg_1174_, lean_object* v_declHint_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg(v_msg_1174_, v_declHint_1175_, v___y_1176_);
lean_dec(v___y_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16(lean_object* v_msg_1179_, lean_object* v_declHint_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1196_; 
v___x_1186_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg(v_msg_1179_, v_declHint_1180_, v___y_1184_);
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1196_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1196_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1194_; 
v___x_1191_ = l_Lean_unknownIdentifierMessageTag;
v___x_1192_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v_a_1187_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v___x_1192_);
v___x_1194_ = v___x_1189_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16___boxed(lean_object* v_msg_1197_, lean_object* v_declHint_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16(v_msg_1197_, v_declHint_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg(lean_object* v_ref_1205_, lean_object* v_msg_1206_, lean_object* v_declHint_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; lean_object* v_a_1214_; lean_object* v___x_1215_; 
v___x_1213_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16(v_msg_1206_, v_declHint_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg(v_ref_1205_, v_a_1214_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg___boxed(lean_object* v_ref_1216_, lean_object* v_msg_1217_, lean_object* v_declHint_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg(v_ref_1216_, v_msg_1217_, v_declHint_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v_ref_1216_);
return v_res_1224_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__0));
v___x_1227_ = l_Lean_stringToMessageData(v___x_1226_);
return v___x_1227_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__2));
v___x_1230_ = l_Lean_stringToMessageData(v___x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg(lean_object* v_ref_1231_, lean_object* v_constName_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; uint8_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1238_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__1);
v___x_1239_ = 0;
lean_inc(v_constName_1232_);
v___x_1240_ = l_Lean_MessageData_ofConstName(v_constName_1232_, v___x_1239_);
v___x_1241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1238_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___closed__3);
v___x_1243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg(v_ref_1231_, v___x_1243_, v_constName_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg___boxed(lean_object* v_ref_1245_, lean_object* v_constName_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg(v_ref_1245_, v_constName_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v_ref_1245_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg(lean_object* v_constName_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_ref_1259_; lean_object* v___x_1260_; 
v_ref_1259_ = lean_ctor_get(v___y_1256_, 2);
v___x_1260_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg(v_ref_1259_, v_constName_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg(v_constName_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0(lean_object* v_constName_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; lean_object* v_env_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1274_ = lean_st_ref_get(v___y_1272_);
v_env_1275_ = lean_ctor_get(v___x_1274_, 0);
lean_inc_ref(v_env_1275_);
lean_dec(v___x_1274_);
v___x_1276_ = 0;
lean_inc(v_constName_1268_);
v___x_1277_ = l_Lean_Environment_findConstVal_x3f(v_env_1275_, v_constName_1268_, v___x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg(v_constName_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
return v___x_1278_;
}
else
{
lean_object* v_val_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
lean_dec(v_constName_1268_);
v_val_1279_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1277_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_val_1279_);
lean_dec(v___x_1277_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set_tag(v___x_1281_, 0);
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_val_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0___boxed(lean_object* v_constName_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0(v_constName_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__1(lean_object* v_a_1294_, lean_object* v_a_1295_){
_start:
{
if (lean_obj_tag(v_a_1294_) == 0)
{
lean_object* v___x_1296_; 
v___x_1296_ = l_List_reverse___redArg(v_a_1295_);
return v___x_1296_;
}
else
{
lean_object* v_head_1297_; lean_object* v_tail_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1307_; 
v_head_1297_ = lean_ctor_get(v_a_1294_, 0);
v_tail_1298_ = lean_ctor_get(v_a_1294_, 1);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_a_1294_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1300_ = v_a_1294_;
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_tail_1298_);
lean_inc(v_head_1297_);
lean_dec(v_a_1294_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; lean_object* v___x_1304_; 
v___x_1302_ = l_Lean_mkLevelParam(v_head_1297_);
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 1, v_a_1295_);
lean_ctor_set(v___x_1300_, 0, v___x_1302_);
v___x_1304_ = v___x_1300_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v_a_1295_);
v___x_1304_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
v_a_1294_ = v_tail_1298_;
v_a_1295_ = v___x_1304_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__0));
v___x_1310_ = l_Lean_stringToMessageData(v___x_1309_);
return v___x_1310_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__2));
v___x_1313_ = l_Lean_stringToMessageData(v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize(lean_object* v_sparseCasesOnName_1314_, lean_object* v_thmName_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = l_Lean_instInhabitedExpr;
lean_inc(v_sparseCasesOnName_1314_);
v___x_1322_ = l_Lean_Meta_getSparseCasesOnInfo___redArg(v_sparseCasesOnName_1314_, v_a_1319_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1322_, 1);
if (lean_obj_tag(v_a_1323_) == 1)
{
lean_object* v_val_1324_; lean_object* v___x_1325_; 
v_val_1324_ = lean_ctor_get(v_a_1323_, 0);
lean_inc(v_val_1324_);
lean_dec_ref_known(v_a_1323_, 1);
lean_inc(v_sparseCasesOnName_1314_);
v___x_1325_ = l_Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0(v_sparseCasesOnName_1314_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_levelParams_1327_; lean_object* v_type_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___f_1331_; uint8_t v___x_1332_; lean_object* v___x_1333_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v_levelParams_1327_ = lean_ctor_get(v_a_1326_, 1);
lean_inc_n(v_levelParams_1327_, 2);
v_type_1328_ = lean_ctor_get(v_a_1326_, 2);
lean_inc_ref(v_type_1328_);
lean_dec(v_a_1326_);
v___x_1329_ = lean_box(0);
v___x_1330_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__1(v_levelParams_1327_, v___x_1329_);
v___f_1331_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___lam__2___boxed), 14, 7);
lean_closure_set(v___f_1331_, 0, v___x_1321_);
lean_closure_set(v___f_1331_, 1, v_sparseCasesOnName_1314_);
lean_closure_set(v___f_1331_, 2, v___x_1330_);
lean_closure_set(v___f_1331_, 3, v___x_1329_);
lean_closure_set(v___f_1331_, 4, v_val_1324_);
lean_closure_set(v___f_1331_, 5, v_thmName_1315_);
lean_closure_set(v___f_1331_, 6, v_levelParams_1327_);
v___x_1332_ = 0;
v___x_1333_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__10___redArg(v_type_1328_, v___f_1331_, v___x_1332_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_);
return v___x_1333_;
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec(v_val_1324_);
lean_dec(v_thmName_1315_);
lean_dec(v_sparseCasesOnName_1314_);
v_a_1334_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1325_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1325_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
lean_dec(v_a_1323_);
lean_dec(v_thmName_1315_);
v___x_1342_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1_once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__1);
v___x_1343_ = l_Lean_MessageData_ofName(v_sparseCasesOnName_1314_);
v___x_1344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1342_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3_once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___closed__3);
v___x_1346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v___x_1346_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_);
return v___x_1347_;
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_thmName_1315_);
lean_dec(v_sparseCasesOnName_1314_);
v_a_1348_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1322_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1322_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___boxed(lean_object* v_sparseCasesOnName_1356_, lean_object* v_thmName_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize(v_sparseCasesOnName_1356_, v_thmName_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_);
lean_dec(v_a_1361_);
lean_dec_ref(v_a_1360_);
lean_dec(v_a_1359_);
lean_dec_ref(v_a_1358_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3(lean_object* v_00_u03b1_1364_, lean_object* v_msg_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___redArg(v_msg_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3___boxed(lean_object* v_00_u03b1_1372_, lean_object* v_msg_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__3(v_00_u03b1_1372_, v_msg_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4(lean_object* v_mvarId_1380_, lean_object* v_val_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___redArg(v_mvarId_1380_, v_val_1381_, v___y_1383_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4___boxed(lean_object* v_mvarId_1388_, lean_object* v_val_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4(v_mvarId_1388_, v_val_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0(lean_object* v_00_u03b1_1396_, lean_object* v_constName_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___redArg(v_constName_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_constName_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0(v_00_u03b1_1404_, v_constName_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6(lean_object* v_00_u03b2_1412_, lean_object* v_x_1413_, lean_object* v_x_1414_, lean_object* v_x_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6___redArg(v_x_1413_, v_x_1414_, v_x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6(lean_object* v_00_u03b1_1417_, lean_object* v_ref_1418_, lean_object* v_constName_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___redArg(v_ref_1418_, v_constName_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6___boxed(lean_object* v_00_u03b1_1426_, lean_object* v_ref_1427_, lean_object* v_constName_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6(v_00_u03b1_1426_, v_ref_1427_, v_constName_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v_ref_1427_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12(lean_object* v_00_u03b2_1435_, lean_object* v_x_1436_, size_t v_x_1437_, size_t v_x_1438_, lean_object* v_x_1439_, lean_object* v_x_1440_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___redArg(v_x_1436_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12___boxed(lean_object* v_00_u03b2_1442_, lean_object* v_x_1443_, lean_object* v_x_1444_, lean_object* v_x_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_){
_start:
{
size_t v_x_18427__boxed_1448_; size_t v_x_18428__boxed_1449_; lean_object* v_res_1450_; 
v_x_18427__boxed_1448_ = lean_unbox_usize(v_x_1444_);
lean_dec(v_x_1444_);
v_x_18428__boxed_1449_ = lean_unbox_usize(v_x_1445_);
lean_dec(v_x_1445_);
v_res_1450_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12(v_00_u03b2_1442_, v_x_1443_, v_x_18427__boxed_1448_, v_x_18428__boxed_1449_, v_x_1446_, v_x_1447_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13(lean_object* v_00_u03b1_1451_, lean_object* v_ref_1452_, lean_object* v_msg_1453_, lean_object* v_declHint_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___redArg(v_ref_1452_, v_msg_1453_, v_declHint_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13___boxed(lean_object* v_00_u03b1_1461_, lean_object* v_ref_1462_, lean_object* v_msg_1463_, lean_object* v_declHint_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13(v_00_u03b1_1461_, v_ref_1462_, v_msg_1463_, v_declHint_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v_ref_1462_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16(lean_object* v_00_u03b2_1471_, lean_object* v_n_1472_, lean_object* v_k_1473_, lean_object* v_v_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16___redArg(v_n_1472_, v_k_1473_, v_v_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17(lean_object* v_00_u03b2_1476_, size_t v_depth_1477_, lean_object* v_keys_1478_, lean_object* v_vals_1479_, lean_object* v_heq_1480_, lean_object* v_i_1481_, lean_object* v_entries_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___redArg(v_depth_1477_, v_keys_1478_, v_vals_1479_, v_i_1481_, v_entries_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17___boxed(lean_object* v_00_u03b2_1484_, lean_object* v_depth_1485_, lean_object* v_keys_1486_, lean_object* v_vals_1487_, lean_object* v_heq_1488_, lean_object* v_i_1489_, lean_object* v_entries_1490_){
_start:
{
size_t v_depth_boxed_1491_; lean_object* v_res_1492_; 
v_depth_boxed_1491_ = lean_unbox_usize(v_depth_1485_);
lean_dec(v_depth_1485_);
v_res_1492_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__17(v_00_u03b2_1484_, v_depth_boxed_1491_, v_keys_1486_, v_vals_1487_, v_heq_1488_, v_i_1489_, v_entries_1490_);
lean_dec_ref(v_vals_1487_);
lean_dec_ref(v_keys_1486_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18(lean_object* v_msg_1493_, lean_object* v_declHint_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg(v_msg_1493_, v_declHint_1494_, v___y_1498_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___boxed(lean_object* v_msg_1501_, lean_object* v_declHint_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18(v_msg_1501_, v_declHint_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17(lean_object* v_00_u03b1_1509_, lean_object* v_ref_1510_, lean_object* v_msg_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___redArg(v_ref_1510_, v_msg_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17___boxed(lean_object* v_00_u03b1_1518_, lean_object* v_ref_1519_, lean_object* v_msg_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__17(v_00_u03b1_1518_, v_ref_1519_, v_msg_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v_ref_1519_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20(lean_object* v_00_u03b2_1527_, lean_object* v_x_1528_, lean_object* v_x_1529_, lean_object* v_x_1530_, lean_object* v_x_1531_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__4_spec__6_spec__12_spec__16_spec__20___redArg(v_x_1528_, v_x_1529_, v_x_1530_, v_x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnEq(lean_object* v_sparseCasesOnName_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v___x_1540_; lean_object* v_thmName_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1540_ = ((lean_object*)(l_Lean_Meta_getSparseCasesOnEq___closed__0));
lean_inc_n(v_sparseCasesOnName_1534_, 2);
v_thmName_1541_ = l_Lean_Name_str___override(v_sparseCasesOnName_1534_, v___x_1540_);
lean_inc_n(v_thmName_1541_, 2);
v___x_1542_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize___boxed), 7, 2);
lean_closure_set(v___x_1542_, 0, v_sparseCasesOnName_1534_);
lean_closure_set(v___x_1542_, 1, v_thmName_1541_);
v___x_1543_ = l_Lean_Meta_realizeConst(v_sparseCasesOnName_1534_, v_thmName_1541_, v___x_1542_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1550_ == 0)
{
lean_object* v_unused_1551_; 
v_unused_1551_ = lean_ctor_get(v___x_1543_, 0);
lean_dec(v_unused_1551_);
v___x_1545_ = v___x_1543_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_dec(v___x_1543_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v_thmName_1541_);
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_thmName_1541_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_dec(v_thmName_1541_);
v_a_1552_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1543_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1543_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getSparseCasesOnEq___boxed(lean_object* v_sparseCasesOnName_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_Meta_getSparseCasesOnEq(v_sparseCasesOnName_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
return v_res_1566_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName(lean_object* v_env_1567_, lean_object* v_n_1568_){
_start:
{
if (lean_obj_tag(v_n_1568_) == 1)
{
lean_object* v_pre_1569_; lean_object* v_str_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_pre_1569_ = lean_ctor_get(v_n_1568_, 0);
lean_inc(v_pre_1569_);
v_str_1570_ = lean_ctor_get(v_n_1568_, 1);
lean_inc_ref(v_str_1570_);
lean_dec_ref_known(v_n_1568_, 2);
v___x_1571_ = ((lean_object*)(l_Lean_Meta_getSparseCasesOnEq___closed__0));
v___x_1572_ = lean_string_dec_eq(v_str_1570_, v___x_1571_);
lean_dec_ref(v_str_1570_);
if (v___x_1572_ == 0)
{
lean_dec(v_pre_1569_);
lean_dec_ref(v_env_1567_);
return v___x_1572_;
}
else
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_Meta_getSparseCasesOnInfoCore(v_env_1567_, v_pre_1569_);
if (lean_obj_tag(v___x_1573_) == 0)
{
uint8_t v___x_1574_; 
v___x_1574_ = 0;
return v___x_1574_;
}
else
{
lean_dec_ref_known(v___x_1573_, 1);
return v___x_1572_;
}
}
}
else
{
uint8_t v___x_1575_; 
lean_dec(v_n_1568_);
lean_dec_ref(v_env_1567_);
v___x_1575_ = 0;
return v___x_1575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName___boxed(lean_object* v_env_1576_, lean_object* v_n_1577_){
_start:
{
uint8_t v_res_1578_; lean_object* v_r_1579_; 
v_res_1578_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName(v_env_1576_, v_n_1577_);
v_r_1579_ = lean_box(v_res_1578_);
return v_r_1579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_));
v___x_1583_ = l_Lean_registerReservedNamePredicate(v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2____boxed(lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_();
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0(lean_object* v_msg_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___f_1591_; lean_object* v___x_792__overap_1592_; lean_object* v___x_1593_; 
v___f_1591_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___closed__0));
v___x_792__overap_1592_ = lean_panic_fn_borrowed(v___f_1591_, v_msg_1587_);
lean_inc(v___y_1589_);
lean_inc_ref(v___y_1588_);
v___x_1593_ = lean_apply_3(v___x_792__overap_1592_, v___y_1588_, v___y_1589_, lean_box(0));
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0___boxed(lean_object* v_msg_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0(v_msg_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
return v_res_1598_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1601_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_));
v___x_1602_ = lean_unsigned_to_nat(4u);
v___x_1603_ = lean_unsigned_to_nat(97u);
v___x_1604_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_));
v___x_1605_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__9___lam__1___closed__0));
v___x_1606_ = l_mkPanicMessageWithDecl(v___x_1605_, v___x_1604_, v___x_1603_, v___x_1602_, v___x_1601_);
return v___x_1606_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__0);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1609_ = lean_box(1);
v___x_1610_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4);
v___x_1611_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1612_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
lean_ctor_set(v___x_1612_, 1, v___x_1610_);
lean_ctor_set(v___x_1612_, 2, v___x_1609_);
return v___x_1612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1615_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1616_ = lean_unsigned_to_nat(0u);
v___x_1617_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
lean_ctor_set(v___x_1617_, 2, v___x_1616_);
lean_ctor_set(v___x_1617_, 3, v___x_1616_);
lean_ctor_set(v___x_1617_, 4, v___x_1615_);
lean_ctor_set(v___x_1617_, 5, v___x_1615_);
lean_ctor_set(v___x_1617_, 6, v___x_1615_);
lean_ctor_set(v___x_1617_, 7, v___x_1615_);
lean_ctor_set(v___x_1617_, 8, v___x_1615_);
lean_ctor_set(v___x_1617_, 9, v___x_1615_);
lean_ctor_set(v___x_1617_, 10, v___x_1615_);
return v___x_1617_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1619_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
lean_ctor_set(v___x_1619_, 2, v___x_1618_);
lean_ctor_set(v___x_1619_, 3, v___x_1618_);
lean_ctor_set(v___x_1619_, 4, v___x_1618_);
lean_ctor_set(v___x_1619_, 5, v___x_1618_);
return v___x_1619_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
lean_ctor_set(v___x_1621_, 2, v___x_1620_);
lean_ctor_set(v___x_1621_, 3, v___x_1620_);
lean_ctor_set(v___x_1621_, 4, v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(lean_object* v___x_1622_, lean_object* v_name_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; lean_object* v_env_1628_; uint8_t v___x_1629_; lean_object* v_a_1631_; 
v___x_1627_ = lean_st_ref_get(v___y_1625_);
v_env_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc_ref(v_env_1628_);
lean_dec(v___x_1627_);
lean_inc(v_name_1623_);
v___x_1629_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_isName(v_env_1628_, v_name_1623_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec(v_name_1623_);
lean_dec(v___x_1622_);
v___x_1637_ = lean_box(v___x_1629_);
v___x_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; uint8_t v___x_1640_; uint8_t v___x_1641_; uint8_t v___x_1642_; uint8_t v___x_1643_; lean_object* v___x_1644_; uint64_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1639_ = l_Lean_Name_getPrefix(v_name_1623_);
v___x_1640_ = 0;
v___x_1641_ = 1;
v___x_1642_ = 0;
v___x_1643_ = 2;
v___x_1644_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1644_, 0, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 1, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 2, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 3, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 4, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 5, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 6, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 7, v___x_1640_);
lean_ctor_set_uint8(v___x_1644_, 8, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 9, v___x_1641_);
lean_ctor_set_uint8(v___x_1644_, 10, v___x_1642_);
lean_ctor_set_uint8(v___x_1644_, 11, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 12, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 13, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 14, v___x_1643_);
lean_ctor_set_uint8(v___x_1644_, 15, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 16, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 17, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 18, v___x_1629_);
lean_ctor_set_uint8(v___x_1644_, 19, v___x_1640_);
v___x_1645_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1644_);
v___x_1646_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set_uint64(v___x_1646_, sizeof(void*)*1, v___x_1645_);
v___x_1647_ = lean_unsigned_to_nat(0u);
v___x_1648_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_getSparseCasesOnEq_realize_spec__0_spec__0_spec__6_spec__13_spec__16_spec__18___redArg___closed__4);
v___x_1649_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1650_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_));
v___x_1651_ = lean_box(0);
lean_inc(v___x_1622_);
v___x_1652_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1652_, 0, v___x_1646_);
lean_ctor_set(v___x_1652_, 1, v___x_1622_);
lean_ctor_set(v___x_1652_, 2, v___x_1649_);
lean_ctor_set(v___x_1652_, 3, v___x_1650_);
lean_ctor_set(v___x_1652_, 4, v___x_1651_);
lean_ctor_set(v___x_1652_, 5, v___x_1647_);
lean_ctor_set(v___x_1652_, 6, v___x_1651_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*7, v___x_1640_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*7 + 1, v___x_1640_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*7 + 2, v___x_1640_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*7 + 3, v___x_1629_);
v___x_1653_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1654_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__7_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1655_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__8_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1653_);
lean_ctor_set(v___x_1656_, 1, v___x_1654_);
lean_ctor_set(v___x_1656_, 2, v___x_1622_);
lean_ctor_set(v___x_1656_, 3, v___x_1648_);
lean_ctor_set(v___x_1656_, 4, v___x_1655_);
v___x_1657_ = lean_st_mk_ref(v___x_1656_);
v___x_1658_ = l_Lean_Meta_getSparseCasesOnEq(v___x_1639_, v___x_1652_, v___x_1657_, v___y_1624_, v___y_1625_);
lean_dec_ref_known(v___x_1652_, 7);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1660_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1660_ = lean_st_ref_get(v___x_1657_);
lean_dec(v___x_1657_);
lean_dec(v___x_1660_);
v_a_1631_ = v_a_1659_;
goto v___jp_1630_;
}
else
{
lean_dec(v___x_1657_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1661_; 
v_a_1661_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1658_, 1);
v_a_1631_ = v_a_1661_;
goto v___jp_1630_;
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_name_1623_);
v_a_1662_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1658_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1658_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
v___jp_1630_:
{
uint8_t v___x_1632_; 
v___x_1632_ = lean_name_eq(v_name_1623_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec(v_name_1623_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1633_ = lean_obj_once(&l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_);
v___x_1634_ = l_panic___at___00__private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2__spec__0(v___x_1633_, v___y_1624_, v___y_1625_);
return v___x_1634_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_box(v___x_1629_);
v___x_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
return v___x_1636_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2____boxed(lean_object* v___x_1670_, lean_object* v_name_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(v___x_1670_, v_name_1671_, v___y_1672_, v___y_1673_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1679_; lean_object* v___x_1680_; 
v___f_1679_ = ((lean_object*)(l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_));
v___x_1680_ = l_Lean_registerReservedNameAction(v___f_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2____boxed(lean_object* v_a_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_();
return v_res_1682_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOnEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_3147303576____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_SparseCasesOnEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_Constructions_SparseCasesOnEq_1213293720____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_SparseCasesOnEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_SparseCasesOnEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOnEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_SparseCasesOnEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_SparseCasesOnEq(builtin);
}
#ifdef __cplusplus
}
#endif

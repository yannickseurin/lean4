// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Param
// Imports: public import Lean.Elab.Tactic.Grind.Basic import Lean.Meta.Tactic.Grind.ForallProp import Lean.Elab.Tactic.Grind.Anchor import Lean.Elab.SyntheticMVars
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
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_isMatchEqLikeDeclName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabAnchorRef(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremForDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_backward_grind_inferPattern;
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_Grind_grindExt;
lean_object* l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_find___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_checkDeprecatedCore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SymbolPriorities_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_erase___redArg(lean_object*, lean_object*);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_assertExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserCategory(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "this parameter is redundant, environment already contains `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` annotated with `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected modifier "};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "redundant modifier `!` in `grind` parameter"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "failed to generate equation theorems for `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid `grind` parameter, `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "` is a definition, the only acceptable (and redundant) modifier is '='"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` is a reducible definition, `grind` automatically unfolds them"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` is not a theorem, definition, or inductive type"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "invalid `grind` parameter, only global declarations are allowed when `+revert` is used"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 97, 194, 195, 68, 28, 219, 173)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "invalid `grind` parameter, failed to infer patterns"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "invalid `grind` parameter, parameter type is not a `forall` and is universe polymorphic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "invalid `grind` parameter, modifier is redundant since the parameter type is not a `forall`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid `grind` parameter, proof term expected"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "invalid `grind` parameter, only global declarations are allowed with this kind of modifier"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid use of `usr` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` does not have patterns specified with the command `grind_pattern`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`cases` parameter is not supported here"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "invalid use of `intro` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`[grind ext]` cannot be set using parameters"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "normalization theorems should be registered using the `@[grind norm]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "declarations to be unfolded during normalization should be registered using the `@[grind unfold]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "homomorphism rules should be registered using the `@[grind hom]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "homomorphism predicates should be registered using the `@[grind hom_pred]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid use of modifier in `grind` attribute `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "redundant parameter `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "`, `grind` uses local hypotheses automatically"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 144, 208, 205, 52, 106, 220, 83)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unexpected `grind` parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 172, 113, 174, 15, 5, 26, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(185, 180, 24, 243, 113, 54, 79, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "grindLemmaMin"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(65, 124, 255, 191, 121, 182, 88, 219)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(168, 155, 228, 98, 168, 72, 115, 174)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid anchor, `only` modifier expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "invalid `-` occurrence, it can only be used at the `grind` tactic entry point"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object* v_params_3_, lean_object* v_declName_4_, uint8_t v_eager_5_){
_start:
{
lean_object* v_config_6_; lean_object* v_extensions_7_; lean_object* v_extra_8_; lean_object* v_extraInj_9_; lean_object* v_extraFacts_10_; lean_object* v_symPrios_11_; lean_object* v_norm_12_; lean_object* v_normProcs_13_; lean_object* v_anchorRefs_x3f_14_; lean_object* v___x_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v_config_6_ = lean_ctor_get(v_params_3_, 0);
v_extensions_7_ = lean_ctor_get(v_params_3_, 1);
v_extra_8_ = lean_ctor_get(v_params_3_, 2);
v_extraInj_9_ = lean_ctor_get(v_params_3_, 3);
v_extraFacts_10_ = lean_ctor_get(v_params_3_, 4);
v_symPrios_11_ = lean_ctor_get(v_params_3_, 5);
v_norm_12_ = lean_ctor_get(v_params_3_, 6);
v_normProcs_13_ = lean_ctor_get(v_params_3_, 7);
v_anchorRefs_x3f_14_ = lean_ctor_get(v_params_3_, 8);
v___x_15_ = lean_unsigned_to_nat(0u);
v___x_16_ = lean_array_get_size(v_extensions_7_);
v___x_17_ = lean_nat_dec_lt(v___x_15_, v___x_16_);
if (v___x_17_ == 0)
{
lean_dec(v_declName_4_);
return v_params_3_;
}
else
{
lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_41_; 
lean_inc(v_anchorRefs_x3f_14_);
lean_inc_ref(v_normProcs_13_);
lean_inc_ref(v_norm_12_);
lean_inc_ref(v_symPrios_11_);
lean_inc_ref(v_extraFacts_10_);
lean_inc_ref(v_extraInj_9_);
lean_inc_ref(v_extra_8_);
lean_inc_ref(v_extensions_7_);
lean_inc_ref(v_config_6_);
v_isSharedCheck_41_ = !lean_is_exclusive(v_params_3_);
if (v_isSharedCheck_41_ == 0)
{
lean_object* v_unused_42_; lean_object* v_unused_43_; lean_object* v_unused_44_; lean_object* v_unused_45_; lean_object* v_unused_46_; lean_object* v_unused_47_; lean_object* v_unused_48_; lean_object* v_unused_49_; lean_object* v_unused_50_; 
v_unused_42_ = lean_ctor_get(v_params_3_, 8);
lean_dec(v_unused_42_);
v_unused_43_ = lean_ctor_get(v_params_3_, 7);
lean_dec(v_unused_43_);
v_unused_44_ = lean_ctor_get(v_params_3_, 6);
lean_dec(v_unused_44_);
v_unused_45_ = lean_ctor_get(v_params_3_, 5);
lean_dec(v_unused_45_);
v_unused_46_ = lean_ctor_get(v_params_3_, 4);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v_params_3_, 3);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v_params_3_, 2);
lean_dec(v_unused_48_);
v_unused_49_ = lean_ctor_get(v_params_3_, 1);
lean_dec(v_unused_49_);
v_unused_50_ = lean_ctor_get(v_params_3_, 0);
lean_dec(v_unused_50_);
v___x_19_ = v_params_3_;
v_isShared_20_ = v_isSharedCheck_41_;
goto v_resetjp_18_;
}
else
{
lean_dec(v_params_3_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_41_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v_v_21_; lean_object* v_casesTypes_22_; lean_object* v_extThms_23_; lean_object* v_funCC_24_; lean_object* v_ematch_25_; lean_object* v_inj_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_40_; 
v_v_21_ = lean_array_fget(v_extensions_7_, v___x_15_);
v_casesTypes_22_ = lean_ctor_get(v_v_21_, 0);
v_extThms_23_ = lean_ctor_get(v_v_21_, 1);
v_funCC_24_ = lean_ctor_get(v_v_21_, 2);
v_ematch_25_ = lean_ctor_get(v_v_21_, 3);
v_inj_26_ = lean_ctor_get(v_v_21_, 4);
v_isSharedCheck_40_ = !lean_is_exclusive(v_v_21_);
if (v_isSharedCheck_40_ == 0)
{
v___x_28_ = v_v_21_;
v_isShared_29_ = v_isSharedCheck_40_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_inj_26_);
lean_inc(v_ematch_25_);
lean_inc(v_funCC_24_);
lean_inc(v_extThms_23_);
lean_inc(v_casesTypes_22_);
lean_dec(v_v_21_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_40_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v_xs_x27_31_; lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_30_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0);
v_xs_x27_31_ = lean_array_fset(v_extensions_7_, v___x_15_, v___x_30_);
v___x_32_ = l_Lean_Meta_Grind_CasesTypes_insert(v_casesTypes_22_, v_declName_4_, v_eager_5_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_32_);
v___x_34_ = v___x_28_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_extThms_23_);
lean_ctor_set(v_reuseFailAlloc_39_, 2, v_funCC_24_);
lean_ctor_set(v_reuseFailAlloc_39_, 3, v_ematch_25_);
lean_ctor_set(v_reuseFailAlloc_39_, 4, v_inj_26_);
v___x_34_ = v_reuseFailAlloc_39_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lean_array_fset(v_xs_x27_31_, v___x_15_, v___x_34_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 1, v___x_35_);
v___x_37_ = v___x_19_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_config_6_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_38_, 2, v_extra_8_);
lean_ctor_set(v_reuseFailAlloc_38_, 3, v_extraInj_9_);
lean_ctor_set(v_reuseFailAlloc_38_, 4, v_extraFacts_10_);
lean_ctor_set(v_reuseFailAlloc_38_, 5, v_symPrios_11_);
lean_ctor_set(v_reuseFailAlloc_38_, 6, v_norm_12_);
lean_ctor_set(v_reuseFailAlloc_38_, 7, v_normProcs_13_);
lean_ctor_set(v_reuseFailAlloc_38_, 8, v_anchorRefs_x3f_14_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object* v_params_51_, lean_object* v_declName_52_, lean_object* v_eager_53_){
_start:
{
uint8_t v_eager_boxed_54_; lean_object* v_res_55_; 
v_eager_boxed_54_ = lean_unbox(v_eager_53_);
v_res_55_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_51_, v_declName_52_, v_eager_boxed_54_);
return v_res_55_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object* v_declName_56_, lean_object* v_as_57_, size_t v_i_58_, size_t v_stop_59_){
_start:
{
uint8_t v___x_60_; 
v___x_60_ = lean_usize_dec_eq(v_i_58_, v_stop_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; lean_object* v_casesTypes_62_; uint8_t v___x_63_; 
v___x_61_ = lean_array_uget_borrowed(v_as_57_, v_i_58_);
v_casesTypes_62_ = lean_ctor_get(v___x_61_, 0);
v___x_63_ = l_Lean_Meta_Grind_CasesTypes_contains(v_casesTypes_62_, v_declName_56_);
if (v___x_63_ == 0)
{
size_t v___x_64_; size_t v___x_65_; 
v___x_64_ = ((size_t)1ULL);
v___x_65_ = lean_usize_add(v_i_58_, v___x_64_);
v_i_58_ = v___x_65_;
goto _start;
}
else
{
return v___x_63_;
}
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object* v_declName_68_, lean_object* v_as_69_, lean_object* v_i_70_, lean_object* v_stop_71_){
_start:
{
size_t v_i_boxed_72_; size_t v_stop_boxed_73_; uint8_t v_res_74_; lean_object* v_r_75_; 
v_i_boxed_72_ = lean_unbox_usize(v_i_70_);
lean_dec(v_i_70_);
v_stop_boxed_73_ = lean_unbox_usize(v_stop_71_);
lean_dec(v_stop_71_);
v_res_74_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_68_, v_as_69_, v_i_boxed_72_, v_stop_boxed_73_);
lean_dec_ref(v_as_69_);
lean_dec(v_declName_68_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object* v_params_76_, lean_object* v_declName_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v___y_82_; lean_object* v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; lean_object* v_config_93_; lean_object* v_extensions_94_; lean_object* v_extra_95_; lean_object* v_extraInj_96_; lean_object* v_extraFacts_97_; lean_object* v_symPrios_98_; lean_object* v_norm_99_; lean_object* v_normProcs_100_; lean_object* v_anchorRefs_x3f_101_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v_config_93_ = lean_ctor_get(v_params_76_, 0);
lean_inc_ref(v_config_93_);
v_extensions_94_ = lean_ctor_get(v_params_76_, 1);
lean_inc_ref(v_extensions_94_);
v_extra_95_ = lean_ctor_get(v_params_76_, 2);
lean_inc_ref(v_extra_95_);
v_extraInj_96_ = lean_ctor_get(v_params_76_, 3);
lean_inc_ref(v_extraInj_96_);
v_extraFacts_97_ = lean_ctor_get(v_params_76_, 4);
lean_inc_ref(v_extraFacts_97_);
v_symPrios_98_ = lean_ctor_get(v_params_76_, 5);
lean_inc_ref(v_symPrios_98_);
v_norm_99_ = lean_ctor_get(v_params_76_, 6);
lean_inc_ref(v_norm_99_);
v_normProcs_100_ = lean_ctor_get(v_params_76_, 7);
lean_inc_ref(v_normProcs_100_);
v_anchorRefs_x3f_101_ = lean_ctor_get(v_params_76_, 8);
lean_inc(v_anchorRefs_x3f_101_);
lean_dec_ref(v_params_76_);
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_array_get_size(v_extensions_94_);
v___x_135_ = lean_nat_dec_lt(v___x_133_, v___x_134_);
if (v___x_135_ == 0)
{
goto v___jp_123_;
}
else
{
if (v___x_135_ == 0)
{
goto v___jp_123_;
}
else
{
size_t v___x_136_; size_t v___x_137_; uint8_t v___x_138_; 
v___x_136_ = ((size_t)0ULL);
v___x_137_ = lean_usize_of_nat(v___x_134_);
v___x_138_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_77_, v_extensions_94_, v___x_136_, v___x_137_);
if (v___x_138_ == 0)
{
goto v___jp_123_;
}
else
{
goto v___jp_102_;
}
}
}
v___jp_81_:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_91_, 0, v___y_85_);
lean_ctor_set(v___x_91_, 1, v___y_90_);
lean_ctor_set(v___x_91_, 2, v___y_83_);
lean_ctor_set(v___x_91_, 3, v___y_87_);
lean_ctor_set(v___x_91_, 4, v___y_86_);
lean_ctor_set(v___x_91_, 5, v___y_89_);
lean_ctor_set(v___x_91_, 6, v___y_84_);
lean_ctor_set(v___x_91_, 7, v___y_88_);
lean_ctor_set(v___x_91_, 8, v___y_82_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
v___jp_102_:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_array_get_size(v_extensions_94_);
v___x_105_ = lean_nat_dec_lt(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_dec(v_declName_77_);
v___y_82_ = v_anchorRefs_x3f_101_;
v___y_83_ = v_extra_95_;
v___y_84_ = v_norm_99_;
v___y_85_ = v_config_93_;
v___y_86_ = v_extraFacts_97_;
v___y_87_ = v_extraInj_96_;
v___y_88_ = v_normProcs_100_;
v___y_89_ = v_symPrios_98_;
v___y_90_ = v_extensions_94_;
goto v___jp_81_;
}
else
{
lean_object* v_v_106_; lean_object* v_casesTypes_107_; lean_object* v_extThms_108_; lean_object* v_funCC_109_; lean_object* v_ematch_110_; lean_object* v_inj_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_122_; 
v_v_106_ = lean_array_fget(v_extensions_94_, v___x_103_);
v_casesTypes_107_ = lean_ctor_get(v_v_106_, 0);
v_extThms_108_ = lean_ctor_get(v_v_106_, 1);
v_funCC_109_ = lean_ctor_get(v_v_106_, 2);
v_ematch_110_ = lean_ctor_get(v_v_106_, 3);
v_inj_111_ = lean_ctor_get(v_v_106_, 4);
v_isSharedCheck_122_ = !lean_is_exclusive(v_v_106_);
if (v_isSharedCheck_122_ == 0)
{
v___x_113_ = v_v_106_;
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_inj_111_);
lean_inc(v_ematch_110_);
lean_inc(v_funCC_109_);
lean_inc(v_extThms_108_);
lean_inc(v_casesTypes_107_);
lean_dec(v_v_106_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v_xs_x27_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_115_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0);
v_xs_x27_116_ = lean_array_fset(v_extensions_94_, v___x_103_, v___x_115_);
v___x_117_ = l_Lean_Meta_Grind_CasesTypes_erase(v_casesTypes_107_, v_declName_77_);
lean_dec(v_declName_77_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_117_);
v___x_119_ = v___x_113_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_extThms_108_);
lean_ctor_set(v_reuseFailAlloc_121_, 2, v_funCC_109_);
lean_ctor_set(v_reuseFailAlloc_121_, 3, v_ematch_110_);
lean_ctor_set(v_reuseFailAlloc_121_, 4, v_inj_111_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; 
v___x_120_ = lean_array_fset(v_xs_x27_116_, v___x_103_, v___x_119_);
v___y_82_ = v_anchorRefs_x3f_101_;
v___y_83_ = v_extra_95_;
v___y_84_ = v_norm_99_;
v___y_85_ = v_config_93_;
v___y_86_ = v_extraFacts_97_;
v___y_87_ = v_extraInj_96_;
v___y_88_ = v_normProcs_100_;
v___y_89_ = v_symPrios_98_;
v___y_90_ = v___x_120_;
goto v___jp_81_;
}
}
}
}
v___jp_123_:
{
lean_object* v___x_124_; 
lean_inc(v_declName_77_);
v___x_124_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_77_, v_a_78_, v_a_79_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_dec_ref_known(v___x_124_, 1);
goto v___jp_102_;
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
lean_dec(v_anchorRefs_x3f_101_);
lean_dec_ref(v_normProcs_100_);
lean_dec_ref(v_norm_99_);
lean_dec_ref(v_symPrios_98_);
lean_dec_ref(v_extraFacts_97_);
lean_dec_ref(v_extraInj_96_);
lean_dec_ref(v_extra_95_);
lean_dec_ref(v_extensions_94_);
lean_dec_ref(v_config_93_);
lean_dec(v_declName_77_);
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object* v_params_139_, lean_object* v_declName_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_params_139_, v_declName_140_, v_a_141_, v_a_142_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object* v_params_145_, lean_object* v_declName_146_){
_start:
{
lean_object* v_config_147_; lean_object* v_extensions_148_; lean_object* v_extra_149_; lean_object* v_extraInj_150_; lean_object* v_extraFacts_151_; lean_object* v_symPrios_152_; lean_object* v_norm_153_; lean_object* v_normProcs_154_; lean_object* v_anchorRefs_x3f_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v_config_147_ = lean_ctor_get(v_params_145_, 0);
v_extensions_148_ = lean_ctor_get(v_params_145_, 1);
v_extra_149_ = lean_ctor_get(v_params_145_, 2);
v_extraInj_150_ = lean_ctor_get(v_params_145_, 3);
v_extraFacts_151_ = lean_ctor_get(v_params_145_, 4);
v_symPrios_152_ = lean_ctor_get(v_params_145_, 5);
v_norm_153_ = lean_ctor_get(v_params_145_, 6);
v_normProcs_154_ = lean_ctor_get(v_params_145_, 7);
v_anchorRefs_x3f_155_ = lean_ctor_get(v_params_145_, 8);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_array_get_size(v_extensions_148_);
v___x_158_ = lean_nat_dec_lt(v___x_156_, v___x_157_);
if (v___x_158_ == 0)
{
lean_dec(v_declName_146_);
return v_params_145_;
}
else
{
lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_182_; 
lean_inc(v_anchorRefs_x3f_155_);
lean_inc_ref(v_normProcs_154_);
lean_inc_ref(v_norm_153_);
lean_inc_ref(v_symPrios_152_);
lean_inc_ref(v_extraFacts_151_);
lean_inc_ref(v_extraInj_150_);
lean_inc_ref(v_extra_149_);
lean_inc_ref(v_extensions_148_);
lean_inc_ref(v_config_147_);
v_isSharedCheck_182_ = !lean_is_exclusive(v_params_145_);
if (v_isSharedCheck_182_ == 0)
{
lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; lean_object* v_unused_186_; lean_object* v_unused_187_; lean_object* v_unused_188_; lean_object* v_unused_189_; lean_object* v_unused_190_; lean_object* v_unused_191_; 
v_unused_183_ = lean_ctor_get(v_params_145_, 8);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_params_145_, 7);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_params_145_, 6);
lean_dec(v_unused_185_);
v_unused_186_ = lean_ctor_get(v_params_145_, 5);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_params_145_, 4);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_params_145_, 3);
lean_dec(v_unused_188_);
v_unused_189_ = lean_ctor_get(v_params_145_, 2);
lean_dec(v_unused_189_);
v_unused_190_ = lean_ctor_get(v_params_145_, 1);
lean_dec(v_unused_190_);
v_unused_191_ = lean_ctor_get(v_params_145_, 0);
lean_dec(v_unused_191_);
v___x_160_ = v_params_145_;
v_isShared_161_ = v_isSharedCheck_182_;
goto v_resetjp_159_;
}
else
{
lean_dec(v_params_145_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_182_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v_v_162_; lean_object* v_casesTypes_163_; lean_object* v_extThms_164_; lean_object* v_funCC_165_; lean_object* v_ematch_166_; lean_object* v_inj_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_181_; 
v_v_162_ = lean_array_fget(v_extensions_148_, v___x_156_);
v_casesTypes_163_ = lean_ctor_get(v_v_162_, 0);
v_extThms_164_ = lean_ctor_get(v_v_162_, 1);
v_funCC_165_ = lean_ctor_get(v_v_162_, 2);
v_ematch_166_ = lean_ctor_get(v_v_162_, 3);
v_inj_167_ = lean_ctor_get(v_v_162_, 4);
v_isSharedCheck_181_ = !lean_is_exclusive(v_v_162_);
if (v_isSharedCheck_181_ == 0)
{
v___x_169_ = v_v_162_;
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_inj_167_);
lean_inc(v_ematch_166_);
lean_inc(v_funCC_165_);
lean_inc(v_extThms_164_);
lean_inc(v_casesTypes_163_);
lean_dec(v_v_162_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v_xs_x27_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_171_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0);
v_xs_x27_172_ = lean_array_fset(v_extensions_148_, v___x_156_, v___x_171_);
v___x_173_ = l_Lean_NameSet_insert(v_funCC_165_, v_declName_146_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 2, v___x_173_);
v___x_175_ = v___x_169_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_casesTypes_163_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v_extThms_164_);
lean_ctor_set(v_reuseFailAlloc_180_, 2, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_180_, 3, v_ematch_166_);
lean_ctor_set(v_reuseFailAlloc_180_, 4, v_inj_167_);
v___x_175_ = v_reuseFailAlloc_180_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lean_array_fset(v_xs_x27_172_, v___x_156_, v___x_175_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_176_);
v___x_178_ = v___x_160_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_config_147_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v_extra_149_);
lean_ctor_set(v_reuseFailAlloc_179_, 3, v_extraInj_150_);
lean_ctor_set(v_reuseFailAlloc_179_, 4, v_extraFacts_151_);
lean_ctor_set(v_reuseFailAlloc_179_, 5, v_symPrios_152_);
lean_ctor_set(v_reuseFailAlloc_179_, 6, v_norm_153_);
lean_ctor_set(v_reuseFailAlloc_179_, 7, v_normProcs_154_);
lean_ctor_set(v_reuseFailAlloc_179_, 8, v_anchorRefs_x3f_155_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object* v_declName_192_, lean_object* v_as_193_, size_t v_i_194_, size_t v_stop_195_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = lean_usize_dec_eq(v_i_194_, v_stop_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v_ematch_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_197_ = lean_array_uget_borrowed(v_as_193_, v_i_194_);
v_ematch_198_ = lean_ctor_get(v___x_197_, 3);
lean_inc(v_declName_192_);
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v_declName_192_);
v___x_200_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_ematch_198_, v___x_199_);
lean_dec_ref_known(v___x_199_, 1);
if (v___x_200_ == 0)
{
size_t v___x_201_; size_t v___x_202_; 
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_194_, v___x_201_);
v_i_194_ = v___x_202_;
goto _start;
}
else
{
lean_dec(v_declName_192_);
return v___x_200_;
}
}
else
{
uint8_t v___x_204_; 
lean_dec(v_declName_192_);
v___x_204_ = 0;
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object* v_declName_205_, lean_object* v_as_206_, lean_object* v_i_207_, lean_object* v_stop_208_){
_start:
{
size_t v_i_boxed_209_; size_t v_stop_boxed_210_; uint8_t v_res_211_; lean_object* v_r_212_; 
v_i_boxed_209_ = lean_unbox_usize(v_i_207_);
lean_dec(v_i_207_);
v_stop_boxed_210_ = lean_unbox_usize(v_stop_208_);
lean_dec(v_stop_208_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_205_, v_as_206_, v_i_boxed_209_, v_stop_boxed_210_);
lean_dec_ref(v_as_206_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object* v_params_213_, lean_object* v_declName_214_){
_start:
{
lean_object* v_extensions_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v_extensions_215_ = lean_ctor_get(v_params_213_, 1);
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_array_get_size(v_extensions_215_);
v___x_218_ = lean_nat_dec_lt(v___x_216_, v___x_217_);
if (v___x_218_ == 0)
{
lean_dec(v_declName_214_);
return v___x_218_;
}
else
{
if (v___x_218_ == 0)
{
lean_dec(v_declName_214_);
return v___x_218_;
}
else
{
size_t v___x_219_; size_t v___x_220_; uint8_t v___x_221_; 
v___x_219_ = ((size_t)0ULL);
v___x_220_ = lean_usize_of_nat(v___x_217_);
v___x_221_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_214_, v_extensions_215_, v___x_219_, v___x_220_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object* v_params_222_, lean_object* v_declName_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_222_, v_declName_223_);
lean_dec_ref(v_params_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object* v_declName_226_, lean_object* v_as_227_, size_t v_i_228_, size_t v_stop_229_){
_start:
{
uint8_t v___x_230_; 
v___x_230_ = lean_usize_dec_eq(v_i_228_, v_stop_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v_inj_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_231_ = lean_array_uget_borrowed(v_as_227_, v_i_228_);
v_inj_232_ = lean_ctor_get(v___x_231_, 4);
lean_inc(v_declName_226_);
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v_declName_226_);
v___x_234_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_232_, v___x_233_);
lean_dec_ref_known(v___x_233_, 1);
if (v___x_234_ == 0)
{
size_t v___x_235_; size_t v___x_236_; 
v___x_235_ = ((size_t)1ULL);
v___x_236_ = lean_usize_add(v_i_228_, v___x_235_);
v_i_228_ = v___x_236_;
goto _start;
}
else
{
lean_dec(v_declName_226_);
return v___x_234_;
}
}
else
{
uint8_t v___x_238_; 
lean_dec(v_declName_226_);
v___x_238_ = 0;
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object* v_declName_239_, lean_object* v_as_240_, lean_object* v_i_241_, lean_object* v_stop_242_){
_start:
{
size_t v_i_boxed_243_; size_t v_stop_boxed_244_; uint8_t v_res_245_; lean_object* v_r_246_; 
v_i_boxed_243_ = lean_unbox_usize(v_i_241_);
lean_dec(v_i_241_);
v_stop_boxed_244_ = lean_unbox_usize(v_stop_242_);
lean_dec(v_stop_242_);
v_res_245_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_239_, v_as_240_, v_i_boxed_243_, v_stop_boxed_244_);
lean_dec_ref(v_as_240_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object* v_params_247_, lean_object* v_declName_248_){
_start:
{
lean_object* v_extensions_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v_extensions_249_ = lean_ctor_get(v_params_247_, 1);
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_array_get_size(v_extensions_249_);
v___x_252_ = lean_nat_dec_lt(v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
lean_dec(v_declName_248_);
return v___x_252_;
}
else
{
if (v___x_252_ == 0)
{
lean_dec(v_declName_248_);
return v___x_252_;
}
else
{
size_t v___x_253_; size_t v___x_254_; uint8_t v___x_255_; 
v___x_253_ = ((size_t)0ULL);
v___x_254_ = lean_usize_of_nat(v___x_251_);
v___x_255_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_248_, v_extensions_249_, v___x_253_, v___x_254_);
return v___x_255_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object* v_params_256_, lean_object* v_declName_257_){
_start:
{
uint8_t v_res_258_; lean_object* v_r_259_; 
v_res_258_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_params_256_, v_declName_257_);
lean_dec_ref(v_params_256_);
v_r_259_ = lean_box(v_res_258_);
return v_r_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object* v_params_260_, lean_object* v_declName_261_){
_start:
{
lean_object* v_config_262_; lean_object* v_extensions_263_; lean_object* v_extra_264_; lean_object* v_extraInj_265_; lean_object* v_extraFacts_266_; lean_object* v_symPrios_267_; lean_object* v_norm_268_; lean_object* v_normProcs_269_; lean_object* v_anchorRefs_x3f_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_config_262_ = lean_ctor_get(v_params_260_, 0);
v_extensions_263_ = lean_ctor_get(v_params_260_, 1);
v_extra_264_ = lean_ctor_get(v_params_260_, 2);
v_extraInj_265_ = lean_ctor_get(v_params_260_, 3);
v_extraFacts_266_ = lean_ctor_get(v_params_260_, 4);
v_symPrios_267_ = lean_ctor_get(v_params_260_, 5);
v_norm_268_ = lean_ctor_get(v_params_260_, 6);
v_normProcs_269_ = lean_ctor_get(v_params_260_, 7);
v_anchorRefs_x3f_270_ = lean_ctor_get(v_params_260_, 8);
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_array_get_size(v_extensions_263_);
v___x_273_ = lean_nat_dec_lt(v___x_271_, v___x_272_);
if (v___x_273_ == 0)
{
lean_dec(v_declName_261_);
return v_params_260_;
}
else
{
lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_298_; 
lean_inc(v_anchorRefs_x3f_270_);
lean_inc_ref(v_normProcs_269_);
lean_inc_ref(v_norm_268_);
lean_inc_ref(v_symPrios_267_);
lean_inc_ref(v_extraFacts_266_);
lean_inc_ref(v_extraInj_265_);
lean_inc_ref(v_extra_264_);
lean_inc_ref(v_extensions_263_);
lean_inc_ref(v_config_262_);
v_isSharedCheck_298_ = !lean_is_exclusive(v_params_260_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; lean_object* v_unused_300_; lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; lean_object* v_unused_304_; lean_object* v_unused_305_; lean_object* v_unused_306_; lean_object* v_unused_307_; 
v_unused_299_ = lean_ctor_get(v_params_260_, 8);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_params_260_, 7);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_params_260_, 6);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_params_260_, 5);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_params_260_, 4);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_params_260_, 3);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_params_260_, 2);
lean_dec(v_unused_305_);
v_unused_306_ = lean_ctor_get(v_params_260_, 1);
lean_dec(v_unused_306_);
v_unused_307_ = lean_ctor_get(v_params_260_, 0);
lean_dec(v_unused_307_);
v___x_275_ = v_params_260_;
v_isShared_276_ = v_isSharedCheck_298_;
goto v_resetjp_274_;
}
else
{
lean_dec(v_params_260_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_298_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_v_277_; lean_object* v_casesTypes_278_; lean_object* v_extThms_279_; lean_object* v_funCC_280_; lean_object* v_ematch_281_; lean_object* v_inj_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_297_; 
v_v_277_ = lean_array_fget(v_extensions_263_, v___x_271_);
v_casesTypes_278_ = lean_ctor_get(v_v_277_, 0);
v_extThms_279_ = lean_ctor_get(v_v_277_, 1);
v_funCC_280_ = lean_ctor_get(v_v_277_, 2);
v_ematch_281_ = lean_ctor_get(v_v_277_, 3);
v_inj_282_ = lean_ctor_get(v_v_277_, 4);
v_isSharedCheck_297_ = !lean_is_exclusive(v_v_277_);
if (v_isSharedCheck_297_ == 0)
{
v___x_284_ = v_v_277_;
v_isShared_285_ = v_isSharedCheck_297_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_inj_282_);
lean_inc(v_ematch_281_);
lean_inc(v_funCC_280_);
lean_inc(v_extThms_279_);
lean_inc(v_casesTypes_278_);
lean_dec(v_v_277_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_297_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v_xs_x27_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_286_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0);
v_xs_x27_287_ = lean_array_fset(v_extensions_263_, v___x_271_, v___x_286_);
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_declName_261_);
v___x_289_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_ematch_281_, v___x_288_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 3, v___x_289_);
v___x_291_ = v___x_284_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_casesTypes_278_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_extThms_279_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v_funCC_280_);
lean_ctor_set(v_reuseFailAlloc_296_, 3, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_296_, 4, v_inj_282_);
v___x_291_ = v_reuseFailAlloc_296_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_292_ = lean_array_fset(v_xs_x27_287_, v___x_271_, v___x_291_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_292_);
v___x_294_ = v___x_275_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_config_262_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_extra_264_);
lean_ctor_set(v_reuseFailAlloc_295_, 3, v_extraInj_265_);
lean_ctor_set(v_reuseFailAlloc_295_, 4, v_extraFacts_266_);
lean_ctor_set(v_reuseFailAlloc_295_, 5, v_symPrios_267_);
lean_ctor_set(v_reuseFailAlloc_295_, 6, v_norm_268_);
lean_ctor_set(v_reuseFailAlloc_295_, 7, v_normProcs_269_);
lean_ctor_set(v_reuseFailAlloc_295_, 8, v_anchorRefs_x3f_270_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object* v_params_308_, uint8_t v___x_309_, lean_object* v_as_310_, size_t v_i_311_, size_t v_stop_312_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_usize_dec_eq(v_i_311_, v_stop_312_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = 1;
v___x_315_ = lean_array_uget_borrowed(v_as_310_, v_i_311_);
lean_inc(v___x_315_);
v___x_316_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_308_, v___x_315_);
if (v___x_316_ == 0)
{
return v___x_314_;
}
else
{
if (v___x_309_ == 0)
{
size_t v___x_317_; size_t v___x_318_; 
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_add(v_i_311_, v___x_317_);
v_i_311_ = v___x_318_;
goto _start;
}
else
{
return v___x_314_;
}
}
}
else
{
uint8_t v___x_320_; 
v___x_320_ = 0;
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object* v_params_321_, lean_object* v___x_322_, lean_object* v_as_323_, lean_object* v_i_324_, lean_object* v_stop_325_){
_start:
{
uint8_t v___x_1645__boxed_326_; size_t v_i_boxed_327_; size_t v_stop_boxed_328_; uint8_t v_res_329_; lean_object* v_r_330_; 
v___x_1645__boxed_326_ = lean_unbox(v___x_322_);
v_i_boxed_327_ = lean_unbox_usize(v_i_324_);
lean_dec(v_i_324_);
v_stop_boxed_328_ = lean_unbox_usize(v_stop_325_);
lean_dec(v_stop_325_);
v_res_329_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_321_, v___x_1645__boxed_326_, v_as_323_, v_i_boxed_327_, v_stop_boxed_328_);
lean_dec_ref(v_as_323_);
lean_dec_ref(v_params_321_);
v_r_330_ = lean_box(v_res_329_);
return v_r_330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object* v_as_331_, size_t v_i_332_, size_t v_stop_333_, lean_object* v_b_334_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = lean_usize_dec_eq(v_i_332_, v_stop_333_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; size_t v___x_338_; size_t v___x_339_; 
v___x_336_ = lean_array_uget_borrowed(v_as_331_, v_i_332_);
lean_inc(v___x_336_);
v___x_337_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_b_334_, v___x_336_);
v___x_338_ = ((size_t)1ULL);
v___x_339_ = lean_usize_add(v_i_332_, v___x_338_);
v_i_332_ = v___x_339_;
v_b_334_ = v___x_337_;
goto _start;
}
else
{
return v_b_334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object* v_as_341_, lean_object* v_i_342_, lean_object* v_stop_343_, lean_object* v_b_344_){
_start:
{
size_t v_i_boxed_345_; size_t v_stop_boxed_346_; lean_object* v_res_347_; 
v_i_boxed_345_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_stop_boxed_346_ = lean_unbox_usize(v_stop_343_);
lean_dec(v_stop_343_);
v_res_347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_as_341_, v_i_boxed_345_, v_stop_boxed_346_, v_b_344_);
lean_dec_ref(v_as_341_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object* v_params_348_, lean_object* v_declName_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v___x_358_; lean_object* v_env_359_; uint8_t v___x_360_; 
v___x_358_ = lean_st_ref_get(v_a_353_);
v_env_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc_ref(v_env_359_);
lean_dec(v___x_358_);
lean_inc(v_declName_349_);
v___x_360_ = l_Lean_wasOriginallyTheorem(v_env_359_, v_declName_349_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; 
lean_inc(v_declName_349_);
v___x_361_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_406_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_406_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_406_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_406_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
if (lean_obj_tag(v_a_362_) == 1)
{
lean_object* v_val_366_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v_val_366_ = lean_ctor_get(v_a_362_, 0);
lean_inc(v_val_366_);
lean_dec_ref_known(v_a_362_, 1);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_array_get_size(v_val_366_);
v___x_392_ = lean_nat_dec_lt(v___x_390_, v___x_391_);
if (v___x_392_ == 0)
{
lean_dec(v_declName_349_);
goto v___jp_367_;
}
else
{
if (v___x_392_ == 0)
{
lean_dec(v_declName_349_);
goto v___jp_367_;
}
else
{
size_t v___x_393_; size_t v___x_394_; uint8_t v___x_395_; 
v___x_393_ = ((size_t)0ULL);
v___x_394_ = lean_usize_of_nat(v___x_391_);
v___x_395_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_348_, v___x_360_, v_val_366_, v___x_393_, v___x_394_);
if (v___x_395_ == 0)
{
lean_dec(v_declName_349_);
goto v___jp_367_;
}
else
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_349_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_dec_ref_known(v___x_396_, 1);
goto v___jp_367_;
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec(v_val_366_);
lean_del_object(v___x_364_);
lean_dec_ref(v_params_348_);
v_a_397_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_396_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
}
v___jp_367_:
{
lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = lean_array_get_size(v_val_366_);
v___x_370_ = lean_nat_dec_lt(v___x_368_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_372_; 
lean_dec(v_val_366_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v_params_348_);
v___x_372_ = v___x_364_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_params_348_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
else
{
uint8_t v___x_374_; 
v___x_374_ = lean_nat_dec_le(v___x_369_, v___x_369_);
if (v___x_374_ == 0)
{
if (v___x_370_ == 0)
{
lean_object* v___x_376_; 
lean_dec(v_val_366_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v_params_348_);
v___x_376_ = v___x_364_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_params_348_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
else
{
size_t v___x_378_; size_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_378_ = ((size_t)0ULL);
v___x_379_ = lean_usize_of_nat(v___x_369_);
v___x_380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_val_366_, v___x_378_, v___x_379_, v_params_348_);
lean_dec(v_val_366_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_380_);
v___x_382_ = v___x_364_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
size_t v___x_384_; size_t v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_384_ = ((size_t)0ULL);
v___x_385_ = lean_usize_of_nat(v___x_369_);
v___x_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_val_366_, v___x_384_, v___x_385_, v_params_348_);
lean_dec(v_val_366_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_386_);
v___x_388_ = v___x_364_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
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
else
{
lean_object* v___x_405_; 
lean_del_object(v___x_364_);
lean_dec(v_a_362_);
lean_dec_ref(v_params_348_);
v___x_405_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_349_, v_a_352_, v_a_353_);
return v___x_405_;
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
lean_dec(v_declName_349_);
lean_dec_ref(v_params_348_);
v_a_407_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_361_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_361_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
else
{
uint8_t v___x_415_; 
lean_inc(v_declName_349_);
v___x_415_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_348_, v_declName_349_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_inc(v_declName_349_);
v___x_416_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_349_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_dec_ref_known(v___x_416_, 1);
goto v___jp_355_;
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_declName_349_);
lean_dec_ref(v_params_348_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
goto v___jp_355_;
}
}
v___jp_355_:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_params_348_, v_declName_349_);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object* v_params_425_, lean_object* v_declName_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_params_425_, v_declName_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object* v_params_433_, lean_object* v_declName_434_){
_start:
{
lean_object* v_config_435_; lean_object* v_extensions_436_; lean_object* v_extra_437_; lean_object* v_extraInj_438_; lean_object* v_extraFacts_439_; lean_object* v_symPrios_440_; lean_object* v_norm_441_; lean_object* v_normProcs_442_; lean_object* v_anchorRefs_x3f_443_; lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v_config_435_ = lean_ctor_get(v_params_433_, 0);
v_extensions_436_ = lean_ctor_get(v_params_433_, 1);
v_extra_437_ = lean_ctor_get(v_params_433_, 2);
v_extraInj_438_ = lean_ctor_get(v_params_433_, 3);
v_extraFacts_439_ = lean_ctor_get(v_params_433_, 4);
v_symPrios_440_ = lean_ctor_get(v_params_433_, 5);
v_norm_441_ = lean_ctor_get(v_params_433_, 6);
v_normProcs_442_ = lean_ctor_get(v_params_433_, 7);
v_anchorRefs_x3f_443_ = lean_ctor_get(v_params_433_, 8);
v___x_444_ = lean_unsigned_to_nat(0u);
v___x_445_ = lean_array_get_size(v_extensions_436_);
v___x_446_ = lean_nat_dec_lt(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_dec(v_declName_434_);
return v_params_433_;
}
else
{
lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_471_; 
lean_inc(v_anchorRefs_x3f_443_);
lean_inc_ref(v_normProcs_442_);
lean_inc_ref(v_norm_441_);
lean_inc_ref(v_symPrios_440_);
lean_inc_ref(v_extraFacts_439_);
lean_inc_ref(v_extraInj_438_);
lean_inc_ref(v_extra_437_);
lean_inc_ref(v_extensions_436_);
lean_inc_ref(v_config_435_);
v_isSharedCheck_471_ = !lean_is_exclusive(v_params_433_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; lean_object* v_unused_476_; lean_object* v_unused_477_; lean_object* v_unused_478_; lean_object* v_unused_479_; lean_object* v_unused_480_; 
v_unused_472_ = lean_ctor_get(v_params_433_, 8);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_params_433_, 7);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_params_433_, 6);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_params_433_, 5);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_params_433_, 4);
lean_dec(v_unused_476_);
v_unused_477_ = lean_ctor_get(v_params_433_, 3);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_params_433_, 2);
lean_dec(v_unused_478_);
v_unused_479_ = lean_ctor_get(v_params_433_, 1);
lean_dec(v_unused_479_);
v_unused_480_ = lean_ctor_get(v_params_433_, 0);
lean_dec(v_unused_480_);
v___x_448_ = v_params_433_;
v_isShared_449_ = v_isSharedCheck_471_;
goto v_resetjp_447_;
}
else
{
lean_dec(v_params_433_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_471_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v_v_450_; lean_object* v_casesTypes_451_; lean_object* v_extThms_452_; lean_object* v_funCC_453_; lean_object* v_ematch_454_; lean_object* v_inj_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_470_; 
v_v_450_ = lean_array_fget(v_extensions_436_, v___x_444_);
v_casesTypes_451_ = lean_ctor_get(v_v_450_, 0);
v_extThms_452_ = lean_ctor_get(v_v_450_, 1);
v_funCC_453_ = lean_ctor_get(v_v_450_, 2);
v_ematch_454_ = lean_ctor_get(v_v_450_, 3);
v_inj_455_ = lean_ctor_get(v_v_450_, 4);
v_isSharedCheck_470_ = !lean_is_exclusive(v_v_450_);
if (v_isSharedCheck_470_ == 0)
{
v___x_457_ = v_v_450_;
v_isShared_458_ = v_isSharedCheck_470_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_inj_455_);
lean_inc(v_ematch_454_);
lean_inc(v_funCC_453_);
lean_inc(v_extThms_452_);
lean_inc(v_casesTypes_451_);
lean_dec(v_v_450_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_470_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v_xs_x27_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_459_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___closed__0);
v_xs_x27_460_ = lean_array_fset(v_extensions_436_, v___x_444_, v___x_459_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_declName_434_);
v___x_462_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_inj_455_, v___x_461_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 4, v___x_462_);
v___x_464_ = v___x_457_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_casesTypes_451_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_extThms_452_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v_funCC_453_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_ematch_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 4, v___x_462_);
v___x_464_ = v_reuseFailAlloc_469_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_465_ = lean_array_fset(v_xs_x27_460_, v___x_444_, v___x_464_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v___x_465_);
v___x_467_ = v___x_448_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_config_435_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_468_, 2, v_extra_437_);
lean_ctor_set(v_reuseFailAlloc_468_, 3, v_extraInj_438_);
lean_ctor_set(v_reuseFailAlloc_468_, 4, v_extraFacts_439_);
lean_ctor_set(v_reuseFailAlloc_468_, 5, v_symPrios_440_);
lean_ctor_set(v_reuseFailAlloc_468_, 6, v_norm_441_);
lean_ctor_set(v_reuseFailAlloc_468_, 7, v_normProcs_442_);
lean_ctor_set(v_reuseFailAlloc_468_, 8, v_anchorRefs_x3f_443_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object* v_origin_481_, lean_object* v_as_482_, size_t v_sz_483_, size_t v_i_484_, lean_object* v_b_485_){
_start:
{
lean_object* v_a_487_; uint8_t v___x_491_; 
v___x_491_ = lean_usize_dec_lt(v_i_484_, v_sz_483_);
if (v___x_491_ == 0)
{
return v_b_485_;
}
else
{
lean_object* v_a_492_; lean_object* v_ematch_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v_a_492_ = lean_array_uget_borrowed(v_as_482_, v_i_484_);
v_ematch_493_ = lean_ctor_get(v_a_492_, 3);
v___x_494_ = l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(v_ematch_493_, v_origin_481_);
v___x_495_ = l_List_isEmpty___redArg(v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = l_List_appendTR___redArg(v_b_485_, v___x_494_);
v_a_487_ = v___x_496_;
goto v___jp_486_;
}
else
{
lean_dec(v___x_494_);
v_a_487_ = v_b_485_;
goto v___jp_486_;
}
}
v___jp_486_:
{
size_t v___x_488_; size_t v___x_489_; 
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_add(v_i_484_, v___x_488_);
v_i_484_ = v___x_489_;
v_b_485_ = v_a_487_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object* v_origin_497_, lean_object* v_as_498_, lean_object* v_sz_499_, lean_object* v_i_500_, lean_object* v_b_501_){
_start:
{
size_t v_sz_boxed_502_; size_t v_i_boxed_503_; lean_object* v_res_504_; 
v_sz_boxed_502_ = lean_unbox_usize(v_sz_499_);
lean_dec(v_sz_499_);
v_i_boxed_503_ = lean_unbox_usize(v_i_500_);
lean_dec(v_i_500_);
v_res_504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_497_, v_as_498_, v_sz_boxed_502_, v_i_boxed_503_, v_b_501_);
lean_dec_ref(v_as_498_);
lean_dec_ref(v_origin_497_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object* v_s_505_, lean_object* v_origin_506_){
_start:
{
lean_object* v_result_507_; size_t v_sz_508_; size_t v___x_509_; lean_object* v___x_510_; 
v_result_507_ = lean_box(0);
v_sz_508_ = lean_array_size(v_s_505_);
v___x_509_ = ((size_t)0ULL);
v___x_510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_506_, v_s_505_, v_sz_508_, v___x_509_, v_result_507_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object* v_s_511_, lean_object* v_origin_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_511_, v_origin_512_);
lean_dec_ref(v_origin_512_);
lean_dec_ref(v_s_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object* v_upperBound_514_, lean_object* v_s_515_, lean_object* v_origin_516_, lean_object* v_a_517_, lean_object* v_b_518_){
_start:
{
lean_object* v_a_520_; uint8_t v___x_524_; 
v___x_524_ = lean_nat_dec_lt(v_a_517_, v_upperBound_514_);
if (v___x_524_ == 0)
{
lean_dec(v_a_517_);
return v_b_518_;
}
else
{
lean_object* v___x_525_; lean_object* v_ematch_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_525_ = lean_array_fget_borrowed(v_s_515_, v_a_517_);
v_ematch_526_ = lean_ctor_get(v___x_525_, 3);
v___x_527_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_ematch_526_, v_origin_516_);
v___x_528_ = l_List_isEmpty___redArg(v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; 
v___x_529_ = l_List_appendTR___redArg(v_b_518_, v___x_527_);
v_a_520_ = v___x_529_;
goto v___jp_519_;
}
else
{
lean_dec(v___x_527_);
v_a_520_ = v_b_518_;
goto v___jp_519_;
}
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(1u);
v___x_522_ = lean_nat_add(v_a_517_, v___x_521_);
lean_dec(v_a_517_);
v_a_517_ = v___x_522_;
v_b_518_ = v_a_520_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object* v_upperBound_530_, lean_object* v_s_531_, lean_object* v_origin_532_, lean_object* v_a_533_, lean_object* v_b_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_530_, v_s_531_, v_origin_532_, v_a_533_, v_b_534_);
lean_dec_ref(v_origin_532_);
lean_dec_ref(v_s_531_);
lean_dec(v_upperBound_530_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object* v_s_536_, lean_object* v_origin_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_r_540_; lean_object* v___x_541_; 
v___x_538_ = lean_array_get_size(v_s_536_);
v___x_539_ = lean_unsigned_to_nat(0u);
v_r_540_ = lean_box(0);
v___x_541_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v___x_538_, v_s_536_, v_origin_537_, v___x_539_, v_r_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object* v_s_542_, lean_object* v_origin_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Meta_Grind_ExtensionStateArray_find(v_s_542_, v_origin_543_);
lean_dec_ref(v_origin_543_);
lean_dec_ref(v_s_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object* v_upperBound_545_, lean_object* v_s_546_, lean_object* v_origin_547_, lean_object* v_inst_548_, lean_object* v_R_549_, lean_object* v_a_550_, lean_object* v_b_551_, lean_object* v_c_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_545_, v_s_546_, v_origin_547_, v_a_550_, v_b_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object* v_upperBound_554_, lean_object* v_s_555_, lean_object* v_origin_556_, lean_object* v_inst_557_, lean_object* v_R_558_, lean_object* v_a_559_, lean_object* v_b_560_, lean_object* v_c_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(v_upperBound_554_, v_s_555_, v_origin_556_, v_inst_557_, v_R_558_, v_a_559_, v_b_560_, v_c_561_);
lean_dec_ref(v_origin_556_);
lean_dec_ref(v_s_555_);
lean_dec(v_upperBound_554_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object* v_msgData_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; lean_object* v_env_570_; lean_object* v___x_571_; lean_object* v_toCold_572_; lean_object* v_mctx_573_; lean_object* v_lctx_574_; lean_object* v_options_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_569_ = lean_st_ref_get(v___y_567_);
v_env_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc_ref(v_env_570_);
lean_dec(v___x_569_);
v___x_571_ = lean_st_ref_get(v___y_565_);
v_toCold_572_ = lean_ctor_get(v___y_566_, 0);
v_mctx_573_ = lean_ctor_get(v___x_571_, 0);
lean_inc_ref(v_mctx_573_);
lean_dec(v___x_571_);
v_lctx_574_ = lean_ctor_get(v___y_564_, 2);
v_options_575_ = lean_ctor_get(v_toCold_572_, 2);
lean_inc_ref(v_options_575_);
lean_inc_ref(v_lctx_574_);
v___x_576_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_576_, 0, v_env_570_);
lean_ctor_set(v___x_576_, 1, v_mctx_573_);
lean_ctor_set(v___x_576_, 2, v_lctx_574_);
lean_ctor_set(v___x_576_, 3, v_options_575_);
v___x_577_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
lean_ctor_set(v___x_577_, 1, v_msgData_563_);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_msgData_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msgData_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
return v_res_585_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_586_, lean_object* v_opt_587_){
_start:
{
lean_object* v_name_588_; lean_object* v_defValue_589_; lean_object* v_map_590_; lean_object* v___x_591_; 
v_name_588_ = lean_ctor_get(v_opt_587_, 0);
v_defValue_589_ = lean_ctor_get(v_opt_587_, 1);
v_map_590_ = lean_ctor_get(v_opts_586_, 0);
v___x_591_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_590_, v_name_588_);
if (lean_obj_tag(v___x_591_) == 0)
{
uint8_t v___x_592_; 
v___x_592_ = lean_unbox(v_defValue_589_);
return v___x_592_;
}
else
{
lean_object* v_val_593_; 
v_val_593_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_val_593_);
lean_dec_ref_known(v___x_591_, 1);
if (lean_obj_tag(v_val_593_) == 1)
{
uint8_t v_v_594_; 
v_v_594_ = lean_ctor_get_uint8(v_val_593_, 0);
lean_dec_ref_known(v_val_593_, 0);
return v_v_594_;
}
else
{
uint8_t v___x_595_; 
lean_dec(v_val_593_);
v___x_595_ = lean_unbox(v_defValue_589_);
return v___x_595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_596_, lean_object* v_opt_597_){
_start:
{
uint8_t v_res_598_; lean_object* v_r_599_; 
v_res_598_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_opts_596_, v_opt_597_);
lean_dec_ref(v_opt_597_);
lean_dec_ref(v_opts_596_);
v_r_599_ = lean_box(v_res_598_);
return v_r_599_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_608_, uint8_t v___y_609_, lean_object* v_x_610_){
_start:
{
if (lean_obj_tag(v_x_610_) == 1)
{
lean_object* v_pre_611_; 
v_pre_611_ = lean_ctor_get(v_x_610_, 0);
switch(lean_obj_tag(v_pre_611_))
{
case 1:
{
lean_object* v_pre_612_; 
v_pre_612_ = lean_ctor_get(v_pre_611_, 0);
switch(lean_obj_tag(v_pre_612_))
{
case 0:
{
lean_object* v_str_613_; lean_object* v_str_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v_str_613_ = lean_ctor_get(v_x_610_, 1);
v_str_614_ = lean_ctor_get(v_pre_611_, 1);
v___x_615_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_616_ = lean_string_dec_eq(v_str_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_618_ = lean_string_dec_eq(v_str_614_, v___x_617_);
if (v___x_618_ == 0)
{
return v___x_618_;
}
else
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_620_ = lean_string_dec_eq(v_str_613_, v___x_619_);
if (v___x_620_ == 0)
{
return v___x_620_;
}
else
{
return v_suppressElabErrors_608_;
}
}
}
else
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_622_ = lean_string_dec_eq(v_str_613_, v___x_621_);
if (v___x_622_ == 0)
{
return v___x_622_;
}
else
{
return v_suppressElabErrors_608_;
}
}
}
case 1:
{
lean_object* v_pre_623_; 
v_pre_623_ = lean_ctor_get(v_pre_612_, 0);
if (lean_obj_tag(v_pre_623_) == 0)
{
lean_object* v_str_624_; lean_object* v_str_625_; lean_object* v_str_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v_str_624_ = lean_ctor_get(v_x_610_, 1);
v_str_625_ = lean_ctor_get(v_pre_611_, 1);
v_str_626_ = lean_ctor_get(v_pre_612_, 1);
v___x_627_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_628_ = lean_string_dec_eq(v_str_626_, v___x_627_);
if (v___x_628_ == 0)
{
return v___x_628_;
}
else
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_630_ = lean_string_dec_eq(v_str_625_, v___x_629_);
if (v___x_630_ == 0)
{
return v___x_630_;
}
else
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_632_ = lean_string_dec_eq(v_str_624_, v___x_631_);
if (v___x_632_ == 0)
{
return v___x_632_;
}
else
{
return v_suppressElabErrors_608_;
}
}
}
}
else
{
return v___y_609_;
}
}
default: 
{
return v___y_609_;
}
}
}
case 0:
{
lean_object* v_str_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_str_633_ = lean_ctor_get(v_x_610_, 1);
v___x_634_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_635_ = lean_string_dec_eq(v_str_633_, v___x_634_);
if (v___x_635_ == 0)
{
return v___x_635_;
}
else
{
return v_suppressElabErrors_608_;
}
}
default: 
{
return v___y_609_;
}
}
}
else
{
return v___y_609_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_636_, lean_object* v___y_637_, lean_object* v_x_638_){
_start:
{
uint8_t v_suppressElabErrors_boxed_639_; uint8_t v___y_4532__boxed_640_; uint8_t v_res_641_; lean_object* v_r_642_; 
v_suppressElabErrors_boxed_639_ = lean_unbox(v_suppressElabErrors_636_);
v___y_4532__boxed_640_ = lean_unbox(v___y_637_);
v_res_641_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_639_, v___y_4532__boxed_640_, v_x_638_);
lean_dec(v_x_638_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object* v_ref_644_, lean_object* v_msgData_645_, uint8_t v_severity_646_, uint8_t v_isSilent_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
uint8_t v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; uint8_t v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v_currNamespace_661_; lean_object* v_openDecls_662_; lean_object* v___y_663_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; uint8_t v___y_692_; uint8_t v___y_693_; uint8_t v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; uint8_t v___y_719_; uint8_t v___y_720_; lean_object* v___y_721_; uint8_t v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; uint8_t v___y_732_; uint8_t v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; uint8_t v___y_737_; uint8_t v___x_742_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; uint8_t v___y_749_; uint8_t v___y_750_; lean_object* v___y_751_; uint8_t v___y_752_; uint8_t v___y_754_; uint8_t v___x_772_; 
v___x_742_ = 2;
v___x_772_ = l_Lean_instBEqMessageSeverity_beq(v_severity_646_, v___x_742_);
if (v___x_772_ == 0)
{
v___y_754_ = v___x_772_;
goto v___jp_753_;
}
else
{
uint8_t v___x_773_; 
lean_inc_ref(v_msgData_645_);
v___x_773_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_645_);
v___y_754_ = v___x_773_;
goto v___jp_753_;
}
v___jp_653_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_env_668_; lean_object* v_nextMacroScope_669_; lean_object* v_ngen_670_; lean_object* v_auxDeclNGen_671_; lean_object* v_traceState_672_; lean_object* v_cache_673_; lean_object* v_messages_674_; lean_object* v_infoState_675_; lean_object* v_snapshotTasks_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_687_; 
lean_inc(v_openDecls_662_);
lean_inc(v_currNamespace_661_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v_currNamespace_661_);
lean_ctor_set(v___x_664_, 1, v_openDecls_662_);
v___x_665_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___y_659_);
lean_inc_ref(v___y_656_);
lean_inc_ref(v___y_660_);
v___x_666_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_666_, 0, v___y_660_);
lean_ctor_set(v___x_666_, 1, v___y_658_);
lean_ctor_set(v___x_666_, 2, v___y_655_);
lean_ctor_set(v___x_666_, 3, v___y_656_);
lean_ctor_set(v___x_666_, 4, v___x_665_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*5, v___y_657_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*5 + 1, v___y_654_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*5 + 2, v_isSilent_647_);
v___x_667_ = lean_st_ref_take(v___y_663_);
v_env_668_ = lean_ctor_get(v___x_667_, 0);
v_nextMacroScope_669_ = lean_ctor_get(v___x_667_, 1);
v_ngen_670_ = lean_ctor_get(v___x_667_, 2);
v_auxDeclNGen_671_ = lean_ctor_get(v___x_667_, 3);
v_traceState_672_ = lean_ctor_get(v___x_667_, 4);
v_cache_673_ = lean_ctor_get(v___x_667_, 5);
v_messages_674_ = lean_ctor_get(v___x_667_, 6);
v_infoState_675_ = lean_ctor_get(v___x_667_, 7);
v_snapshotTasks_676_ = lean_ctor_get(v___x_667_, 8);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_687_ == 0)
{
v___x_678_ = v___x_667_;
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_snapshotTasks_676_);
lean_inc(v_infoState_675_);
lean_inc(v_messages_674_);
lean_inc(v_cache_673_);
lean_inc(v_traceState_672_);
lean_inc(v_auxDeclNGen_671_);
lean_inc(v_ngen_670_);
lean_inc(v_nextMacroScope_669_);
lean_inc(v_env_668_);
lean_dec(v___x_667_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_680_ = lean_box(0);
v___x_681_ = l_Lean_MessageLog_add(v___x_666_, v_messages_674_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 6, v___x_681_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_env_668_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_nextMacroScope_669_);
lean_ctor_set(v_reuseFailAlloc_686_, 2, v_ngen_670_);
lean_ctor_set(v_reuseFailAlloc_686_, 3, v_auxDeclNGen_671_);
lean_ctor_set(v_reuseFailAlloc_686_, 4, v_traceState_672_);
lean_ctor_set(v_reuseFailAlloc_686_, 5, v_cache_673_);
lean_ctor_set(v_reuseFailAlloc_686_, 6, v___x_681_);
lean_ctor_set(v_reuseFailAlloc_686_, 7, v_infoState_675_);
lean_ctor_set(v_reuseFailAlloc_686_, 8, v_snapshotTasks_676_);
v___x_683_ = v_reuseFailAlloc_686_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_st_ref_put(v___y_663_, v___x_683_);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_680_);
return v___x_685_;
}
}
}
v___jp_688_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_714_; 
v___x_699_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_645_);
v___x_700_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_699_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_714_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_714_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_714_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_inc_ref_n(v___y_695_, 2);
v___x_705_ = l_Lean_FileMap_toPosition(v___y_695_, v___y_697_);
lean_dec(v___y_697_);
v___x_706_ = l_Lean_FileMap_toPosition(v___y_695_, v___y_698_);
lean_dec(v___y_698_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
v___x_708_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_694_ == 0)
{
lean_del_object(v___x_703_);
lean_dec_ref(v___y_691_);
v___y_654_ = v___y_692_;
v___y_655_ = v___x_707_;
v___y_656_ = v___x_708_;
v___y_657_ = v___y_693_;
v___y_658_ = v___x_705_;
v___y_659_ = v_a_701_;
v___y_660_ = v___y_696_;
v_currNamespace_661_ = v___y_689_;
v_openDecls_662_ = v___y_690_;
v___y_663_ = v___y_651_;
goto v___jp_653_;
}
else
{
uint8_t v___x_709_; 
lean_inc(v_a_701_);
v___x_709_ = l_Lean_MessageData_hasTag(v___y_691_, v_a_701_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_712_; 
lean_dec_ref_known(v___x_707_, 1);
lean_dec_ref(v___x_705_);
lean_dec(v_a_701_);
v___x_710_ = lean_box(0);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_710_);
v___x_712_ = v___x_703_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
else
{
lean_del_object(v___x_703_);
v___y_654_ = v___y_692_;
v___y_655_ = v___x_707_;
v___y_656_ = v___x_708_;
v___y_657_ = v___y_693_;
v___y_658_ = v___x_705_;
v___y_659_ = v_a_701_;
v___y_660_ = v___y_696_;
v_currNamespace_661_ = v___y_689_;
v_openDecls_662_ = v___y_690_;
v___y_663_ = v___y_651_;
goto v___jp_653_;
}
}
}
}
v___jp_715_:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_Syntax_getTailPos_x3f(v___y_721_, v___y_720_);
lean_dec(v___y_721_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_inc(v___y_725_);
v___y_689_ = v___y_716_;
v___y_690_ = v___y_717_;
v___y_691_ = v___y_718_;
v___y_692_ = v___y_719_;
v___y_693_ = v___y_720_;
v___y_694_ = v___y_722_;
v___y_695_ = v___y_723_;
v___y_696_ = v___y_724_;
v___y_697_ = v___y_725_;
v___y_698_ = v___y_725_;
goto v___jp_688_;
}
else
{
lean_object* v_val_727_; 
v_val_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_val_727_);
lean_dec_ref_known(v___x_726_, 1);
v___y_689_ = v___y_716_;
v___y_690_ = v___y_717_;
v___y_691_ = v___y_718_;
v___y_692_ = v___y_719_;
v___y_693_ = v___y_720_;
v___y_694_ = v___y_722_;
v___y_695_ = v___y_723_;
v___y_696_ = v___y_724_;
v___y_697_ = v___y_725_;
v___y_698_ = v_val_727_;
goto v___jp_688_;
}
}
v___jp_728_:
{
lean_object* v_ref_738_; lean_object* v___x_739_; 
v_ref_738_ = l_Lean_replaceRef(v_ref_644_, v___y_734_);
v___x_739_ = l_Lean_Syntax_getPos_x3f(v_ref_738_, v___y_732_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_unsigned_to_nat(0u);
v___y_716_ = v___y_729_;
v___y_717_ = v___y_730_;
v___y_718_ = v___y_731_;
v___y_719_ = v___y_737_;
v___y_720_ = v___y_732_;
v___y_721_ = v_ref_738_;
v___y_722_ = v___y_733_;
v___y_723_ = v___y_735_;
v___y_724_ = v___y_736_;
v___y_725_ = v___x_740_;
goto v___jp_715_;
}
else
{
lean_object* v_val_741_; 
v_val_741_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_val_741_);
lean_dec_ref_known(v___x_739_, 1);
v___y_716_ = v___y_729_;
v___y_717_ = v___y_730_;
v___y_718_ = v___y_731_;
v___y_719_ = v___y_737_;
v___y_720_ = v___y_732_;
v___y_721_ = v_ref_738_;
v___y_722_ = v___y_733_;
v___y_723_ = v___y_735_;
v___y_724_ = v___y_736_;
v___y_725_ = v_val_741_;
goto v___jp_715_;
}
}
v___jp_743_:
{
if (v___y_752_ == 0)
{
v___y_729_ = v___y_744_;
v___y_730_ = v___y_745_;
v___y_731_ = v___y_746_;
v___y_732_ = v___y_749_;
v___y_733_ = v___y_750_;
v___y_734_ = v___y_751_;
v___y_735_ = v___y_747_;
v___y_736_ = v___y_748_;
v___y_737_ = v_severity_646_;
goto v___jp_728_;
}
else
{
v___y_729_ = v___y_744_;
v___y_730_ = v___y_745_;
v___y_731_ = v___y_746_;
v___y_732_ = v___y_749_;
v___y_733_ = v___y_750_;
v___y_734_ = v___y_751_;
v___y_735_ = v___y_747_;
v___y_736_ = v___y_748_;
v___y_737_ = v___x_742_;
goto v___jp_728_;
}
}
v___jp_753_:
{
if (v___y_754_ == 0)
{
lean_object* v_toCold_755_; lean_object* v_ref_756_; uint8_t v_suppressElabErrors_757_; lean_object* v_fileName_758_; lean_object* v_fileMap_759_; lean_object* v_options_760_; lean_object* v_currNamespace_761_; lean_object* v_openDecls_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___f_765_; uint8_t v___x_766_; uint8_t v___x_767_; 
v_toCold_755_ = lean_ctor_get(v___y_650_, 0);
v_ref_756_ = lean_ctor_get(v___y_650_, 2);
v_suppressElabErrors_757_ = lean_ctor_get_uint8(v___y_650_, sizeof(void*)*3 + 1);
v_fileName_758_ = lean_ctor_get(v_toCold_755_, 0);
v_fileMap_759_ = lean_ctor_get(v_toCold_755_, 1);
v_options_760_ = lean_ctor_get(v_toCold_755_, 2);
v_currNamespace_761_ = lean_ctor_get(v_toCold_755_, 4);
v_openDecls_762_ = lean_ctor_get(v_toCold_755_, 5);
v___x_763_ = lean_box(v_suppressElabErrors_757_);
v___x_764_ = lean_box(v___y_754_);
v___f_765_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_765_, 0, v___x_763_);
lean_closure_set(v___f_765_, 1, v___x_764_);
v___x_766_ = 1;
v___x_767_ = l_Lean_instBEqMessageSeverity_beq(v_severity_646_, v___x_766_);
if (v___x_767_ == 0)
{
v___y_744_ = v_currNamespace_761_;
v___y_745_ = v_openDecls_762_;
v___y_746_ = v___f_765_;
v___y_747_ = v_fileMap_759_;
v___y_748_ = v_fileName_758_;
v___y_749_ = v___y_754_;
v___y_750_ = v_suppressElabErrors_757_;
v___y_751_ = v_ref_756_;
v___y_752_ = v___x_767_;
goto v___jp_743_;
}
else
{
lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_768_ = l_Lean_warningAsError;
v___x_769_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_760_, v___x_768_);
v___y_744_ = v_currNamespace_761_;
v___y_745_ = v_openDecls_762_;
v___y_746_ = v___f_765_;
v___y_747_ = v_fileMap_759_;
v___y_748_ = v_fileName_758_;
v___y_749_ = v___y_754_;
v___y_750_ = v_suppressElabErrors_757_;
v___y_751_ = v_ref_756_;
v___y_752_ = v___x_769_;
goto v___jp_743_;
}
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; 
lean_dec_ref(v_msgData_645_);
v___x_770_ = lean_box(0);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_774_, lean_object* v_msgData_775_, lean_object* v_severity_776_, lean_object* v_isSilent_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
uint8_t v_severity_boxed_783_; uint8_t v_isSilent_boxed_784_; lean_object* v_res_785_; 
v_severity_boxed_783_ = lean_unbox(v_severity_776_);
v_isSilent_boxed_784_ = lean_unbox(v_isSilent_777_);
v_res_785_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_774_, v_msgData_775_, v_severity_boxed_783_, v_isSilent_boxed_784_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v_ref_774_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object* v_msgData_786_, uint8_t v_severity_787_, uint8_t v_isSilent_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_ref_794_; lean_object* v___x_795_; 
v_ref_794_ = lean_ctor_get(v___y_791_, 2);
v___x_795_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_794_, v_msgData_786_, v_severity_787_, v_isSilent_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object* v_msgData_796_, lean_object* v_severity_797_, lean_object* v_isSilent_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
uint8_t v_severity_boxed_804_; uint8_t v_isSilent_boxed_805_; lean_object* v_res_806_; 
v_severity_boxed_804_ = lean_unbox(v_severity_797_);
v_isSilent_boxed_805_ = lean_unbox(v_isSilent_798_);
v_res_806_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_796_, v_severity_boxed_804_, v_isSilent_boxed_805_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object* v_msgData_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v___x_813_; uint8_t v___x_814_; lean_object* v___x_815_; 
v___x_813_ = 1;
v___x_814_ = 0;
v___x_815_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_807_, v___x_813_, v___x_814_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object* v_msgData_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v_msgData_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
return v_res_822_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0));
v___x_825_ = l_Lean_stringToMessageData(v___x_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
if (lean_obj_tag(v_a_826_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = l_List_reverse___redArg(v_a_827_);
return v___x_828_;
}
else
{
lean_object* v_head_829_; lean_object* v_tail_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_843_; 
v_head_829_ = lean_ctor_get(v_a_826_, 0);
v_tail_830_ = lean_ctor_get(v_a_826_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_a_826_);
if (v_isSharedCheck_843_ == 0)
{
v___x_832_ = v_a_826_;
v_isShared_833_ = v_isSharedCheck_843_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_tail_830_);
lean_inc(v_head_829_);
lean_dec(v_a_826_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_843_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
uint8_t v_minIndexable_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v_minIndexable_834_ = 0;
v___x_835_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_836_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_829_, v_minIndexable_834_);
lean_dec(v_head_829_);
v___x_837_ = l_Lean_stringToMessageData(v___x_836_);
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_835_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v_a_827_);
lean_ctor_set(v___x_832_, 0, v___x_838_);
v___x_840_ = v___x_832_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_a_827_);
v___x_840_ = v_reuseFailAlloc_842_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
v_a_826_ = v_tail_830_;
v_a_827_ = v___x_840_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
if (lean_obj_tag(v_a_844_) == 0)
{
lean_object* v___x_846_; 
v___x_846_ = l_List_reverse___redArg(v_a_845_);
return v___x_846_;
}
else
{
lean_object* v_head_847_; lean_object* v_tail_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
v_head_847_ = lean_ctor_get(v_a_844_, 0);
v_tail_848_ = lean_ctor_get(v_a_844_, 1);
v_isSharedCheck_856_ = !lean_is_exclusive(v_a_844_);
if (v_isSharedCheck_856_ == 0)
{
v___x_850_ = v_a_844_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_tail_848_);
lean_inc(v_head_847_);
lean_dec(v_a_844_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v_a_845_);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_head_847_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_a_845_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
v_a_844_ = v_tail_848_;
v_a_845_ = v___x_853_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0));
v___x_859_ = l_Lean_stringToMessageData(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2));
v___x_862_ = l_Lean_stringToMessageData(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object* v_s_866_, lean_object* v_declName_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_kinds_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v_ks_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_inc(v_declName_867_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_declName_867_);
v___x_899_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_866_, v___x_898_);
lean_dec_ref_known(v___x_898_, 1);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_dec(v_declName_867_);
v___x_900_ = lean_box(0);
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
return v___x_901_;
}
else
{
lean_object* v_head_902_; lean_object* v_tail_903_; uint8_t v_minIndexable_904_; uint8_t v_gen_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; 
v_head_902_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_head_902_);
v_tail_903_ = lean_ctor_get(v___x_899_, 1);
lean_inc(v_tail_903_);
v_minIndexable_904_ = 0;
if (lean_obj_tag(v_tail_903_) == 0)
{
lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_925_; 
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; lean_object* v_unused_927_; 
v_unused_926_ = lean_ctor_get(v___x_899_, 1);
lean_dec(v_unused_926_);
v_unused_927_ = lean_ctor_get(v___x_899_, 0);
lean_dec(v_unused_927_);
v___x_917_ = v___x_899_;
v_isShared_918_ = v_isSharedCheck_925_;
goto v_resetjp_916_;
}
else
{
lean_dec(v___x_899_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_925_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_919_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_920_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_902_, v_minIndexable_904_);
lean_dec(v_head_902_);
v___x_921_ = l_Lean_stringToMessageData(v___x_920_);
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 7);
lean_ctor_set(v___x_917_, 1, v___x_921_);
lean_ctor_set(v___x_917_, 0, v___x_919_);
v___x_923_ = v___x_917_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
v_kinds_874_ = v___x_923_;
v___y_875_ = v_a_868_;
v___y_876_ = v_a_869_;
v___y_877_ = v_a_870_;
v___y_878_ = v_a_871_;
goto v___jp_873_;
}
}
}
else
{
lean_object* v_head_928_; 
v_head_928_ = lean_ctor_get(v_tail_903_, 0);
switch(lean_obj_tag(v_head_928_))
{
case 1:
{
lean_object* v_tail_929_; 
v_tail_929_ = lean_ctor_get(v_tail_903_, 1);
lean_inc(v_tail_929_);
lean_dec_ref_known(v_tail_903_, 2);
if (lean_obj_tag(v_tail_929_) == 0)
{
if (lean_obj_tag(v_head_902_) == 0)
{
uint8_t v_gen_930_; 
lean_dec_ref_known(v___x_899_, 2);
v_gen_930_ = lean_ctor_get_uint8(v_head_902_, 0);
lean_dec_ref_known(v_head_902_, 0);
v_gen_906_ = v_gen_930_;
v___y_907_ = v_a_868_;
v___y_908_ = v_a_869_;
v___y_909_ = v_a_870_;
v___y_910_ = v_a_871_;
goto v___jp_905_;
}
else
{
lean_dec(v_head_902_);
v_ks_889_ = v___x_899_;
v___y_890_ = v_a_868_;
v___y_891_ = v_a_869_;
v___y_892_ = v_a_870_;
v___y_893_ = v_a_871_;
goto v___jp_888_;
}
}
else
{
lean_dec(v_tail_929_);
lean_dec(v_head_902_);
v_ks_889_ = v___x_899_;
v___y_890_ = v_a_868_;
v___y_891_ = v_a_869_;
v___y_892_ = v_a_870_;
v___y_893_ = v_a_871_;
goto v___jp_888_;
}
}
case 0:
{
lean_object* v_tail_931_; 
v_tail_931_ = lean_ctor_get(v_tail_903_, 1);
lean_inc(v_tail_931_);
lean_dec_ref_known(v_tail_903_, 2);
if (lean_obj_tag(v_tail_931_) == 0)
{
if (lean_obj_tag(v_head_902_) == 1)
{
uint8_t v_gen_932_; 
lean_dec_ref_known(v___x_899_, 2);
v_gen_932_ = lean_ctor_get_uint8(v_head_902_, 0);
lean_dec_ref_known(v_head_902_, 0);
v_gen_906_ = v_gen_932_;
v___y_907_ = v_a_868_;
v___y_908_ = v_a_869_;
v___y_909_ = v_a_870_;
v___y_910_ = v_a_871_;
goto v___jp_905_;
}
else
{
lean_dec(v_head_902_);
v_ks_889_ = v___x_899_;
v___y_890_ = v_a_868_;
v___y_891_ = v_a_869_;
v___y_892_ = v_a_870_;
v___y_893_ = v_a_871_;
goto v___jp_888_;
}
}
else
{
lean_dec(v_tail_931_);
lean_dec(v_head_902_);
v_ks_889_ = v___x_899_;
v___y_890_ = v_a_868_;
v___y_891_ = v_a_869_;
v___y_892_ = v_a_870_;
v___y_893_ = v_a_871_;
goto v___jp_888_;
}
}
default: 
{
lean_dec_ref_known(v_tail_903_, 2);
lean_dec(v_head_902_);
v_ks_889_ = v___x_899_;
v___y_890_ = v_a_868_;
v___y_891_ = v_a_869_;
v___y_892_ = v_a_870_;
v___y_893_ = v_a_871_;
goto v___jp_888_;
}
}
}
v___jp_905_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_911_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_912_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_912_, 0, v_gen_906_);
v___x_913_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v___x_912_, v_minIndexable_904_);
lean_dec_ref_known(v___x_912_, 0);
v___x_914_ = l_Lean_stringToMessageData(v___x_913_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_911_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v_kinds_874_ = v___x_915_;
v___y_875_ = v___y_907_;
v___y_876_ = v___y_908_;
v___y_877_ = v___y_909_;
v___y_878_ = v___y_910_;
goto v___jp_873_;
}
}
v___jp_873_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_879_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1);
v___x_880_ = l_Lean_MessageData_ofName(v_declName_867_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v_kinds_874_);
v___x_885_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_884_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v___x_886_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
return v___x_887_;
}
v___jp_888_:
{
lean_object* v___x_894_; lean_object* v_ks_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_894_ = lean_box(0);
v_ks_895_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(v_ks_889_, v___x_894_);
v___x_896_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(v_ks_895_, v___x_894_);
v___x_897_ = l_Lean_MessageData_ofList(v___x_896_);
v_kinds_874_ = v___x_897_;
v___y_875_ = v___y_890_;
v___y_876_ = v___y_891_;
v___y_877_ = v___y_892_;
v___y_878_ = v___y_893_;
goto v___jp_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object* v_s_933_, lean_object* v_declName_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_s_933_, v_declName_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec_ref(v_s_933_);
return v_res_940_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_941_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0);
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_944_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_945_ = lean_unsigned_to_nat(0u);
v___x_946_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
lean_ctor_set(v___x_946_, 2, v___x_945_);
lean_ctor_set(v___x_946_, 3, v___x_945_);
lean_ctor_set(v___x_946_, 4, v___x_944_);
lean_ctor_set(v___x_946_, 5, v___x_944_);
lean_ctor_set(v___x_946_, 6, v___x_944_);
lean_ctor_set(v___x_946_, 7, v___x_944_);
lean_ctor_set(v___x_946_, 8, v___x_944_);
lean_ctor_set(v___x_946_, 9, v___x_944_);
lean_ctor_set(v___x_946_, 10, v___x_944_);
return v___x_946_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = lean_unsigned_to_nat(32u);
v___x_948_ = lean_mk_empty_array_with_capacity(v___x_947_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_950_ = ((size_t)5ULL);
v___x_951_ = lean_unsigned_to_nat(0u);
v___x_952_ = lean_unsigned_to_nat(32u);
v___x_953_ = lean_mk_empty_array_with_capacity(v___x_952_);
v___x_954_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3);
v___x_955_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_955_, 0, v___x_954_);
lean_ctor_set(v___x_955_, 1, v___x_953_);
lean_ctor_set(v___x_955_, 2, v___x_951_);
lean_ctor_set(v___x_955_, 3, v___x_951_);
lean_ctor_set_usize(v___x_955_, 4, v___x_950_);
return v___x_955_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_956_ = lean_box(1);
v___x_957_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4);
v___x_958_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
lean_ctor_set(v___x_959_, 2, v___x_956_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object* v_msgData_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v_toCold_965_; lean_object* v_env_966_; lean_object* v_options_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_964_ = lean_st_ref_get(v___y_962_);
v_toCold_965_ = lean_ctor_get(v___y_961_, 0);
v_env_966_ = lean_ctor_get(v___x_964_, 0);
lean_inc_ref(v_env_966_);
lean_dec(v___x_964_);
v_options_967_ = lean_ctor_get(v_toCold_965_, 2);
v___x_968_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_969_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_967_);
v___x_970_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_970_, 0, v_env_966_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
lean_ctor_set(v___x_970_, 2, v___x_969_);
lean_ctor_set(v___x_970_, 3, v_options_967_);
v___x_971_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set(v___x_971_, 1, v_msgData_960_);
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object* v_msgData_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msgData_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object* v_msg_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v_ref_982_; lean_object* v___x_983_; lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_992_; 
v_ref_982_ = lean_ctor_get(v___y_979_, 2);
v___x_983_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msg_978_, v___y_979_, v___y_980_);
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_992_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_990_; 
lean_inc(v_ref_982_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v_ref_982_);
lean_ctor_set(v___x_988_, 1, v_a_984_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 1);
lean_ctor_set(v___x_986_, 0, v___x_988_);
v___x_990_ = v___x_986_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object* v_msg_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
return v_res_997_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6));
v___x_1010_ = l_Lean_stringToMessageData(v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object* v_s_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v_env_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1015_ = lean_st_ref_get(v_a_1013_);
v_env_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc_ref(v_env_1016_);
lean_dec(v___x_1015_);
v___x_1017_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
v___x_1018_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5));
lean_inc_ref(v_s_1011_);
v___x_1019_ = l_Lean_Parser_runParserCategory(v_env_1016_, v___x_1017_, v_s_1011_, v___x_1018_);
if (lean_obj_tag(v___x_1019_) == 1)
{
lean_object* v_a_1020_; lean_object* v___x_1021_; 
lean_dec_ref(v_s_1011_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = l_Lean_Meta_Grind_getAttrKindCore(v_a_1020_, v_a_1012_, v_a_1013_);
return v___x_1021_;
}
else
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_dec_ref(v___x_1019_);
v___x_1022_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7);
v___x_1023_ = l_Lean_stringToMessageData(v_s_1011_);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_1024_, v_a_1012_, v_a_1013_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object* v_s_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(v_s_1026_, v_a_1027_, v_a_1028_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object* v_00_u03b1_1031_, lean_object* v_msg_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_1032_, v___y_1033_, v___y_1034_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object* v_00_u03b1_1037_, lean_object* v_msg_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(v_00_u03b1_1037_, v_msg_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_ref_1049_; lean_object* v___x_1050_; lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
v_ref_1049_ = lean_ctor_get(v___y_1046_, 2);
v___x_1050_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_inc(v_ref_1049_);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v_ref_1049_);
lean_ctor_set(v___x_1055_, 1, v_a_1051_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 1);
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object* v_msg_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1066_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0));
v___x_1069_ = l_Lean_stringToMessageData(v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t v_minIndexable_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
if (v_minIndexable_1070_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = lean_box(0);
v___x_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1);
v___x_1079_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1078_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_);
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object* v_minIndexable_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
uint8_t v_minIndexable_boxed_1086_; lean_object* v_res_1087_; 
v_minIndexable_boxed_1086_ = lean_unbox(v_minIndexable_1080_);
v_res_1087_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_boxed_1086_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object* v_00_u03b1_1088_, lean_object* v_msg_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object* v_00_u03b1_1096_, lean_object* v_msg_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(v_00_u03b1_1096_, v_msg_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
return v_res_1103_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1106_ = l_Lean_stringToMessageData(v___x_1105_);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1109_ = l_Lean_stringToMessageData(v___x_1108_);
return v___x_1109_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4));
v___x_1112_ = l_Lean_stringToMessageData(v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_1115_ = l_Lean_stringToMessageData(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_1118_ = l_Lean_stringToMessageData(v___x_1117_);
return v___x_1118_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_1121_ = l_Lean_stringToMessageData(v___x_1120_);
return v___x_1121_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_1124_ = l_Lean_stringToMessageData(v___x_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1125_, lean_object* v_declHint_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_env_1131_; uint8_t v___x_1132_; 
v___x_1129_ = l_Lean_instInhabitedName;
v___x_1130_ = lean_st_ref_get(v___y_1127_);
v_env_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc_ref(v_env_1131_);
lean_dec(v___x_1130_);
v___x_1132_ = l_Lean_Name_isAnonymous(v_declHint_1126_);
if (v___x_1132_ == 0)
{
uint8_t v_isExporting_1133_; 
v_isExporting_1133_ = lean_ctor_get_uint8(v_env_1131_, sizeof(void*)*8);
if (v_isExporting_1133_ == 0)
{
lean_object* v___x_1134_; 
lean_dec_ref(v_env_1131_);
lean_dec(v_declHint_1126_);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v_msg_1125_);
return v___x_1134_;
}
else
{
lean_object* v___x_1135_; uint8_t v___x_1136_; 
lean_inc_ref(v_env_1131_);
v___x_1135_ = l_Lean_Environment_setExporting(v_env_1131_, v___x_1132_);
lean_inc(v_declHint_1126_);
lean_inc_ref(v___x_1135_);
v___x_1136_ = l_Lean_Environment_contains(v___x_1135_, v_declHint_1126_, v_isExporting_1133_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; 
lean_dec_ref(v___x_1135_);
lean_dec_ref(v_env_1131_);
lean_dec(v_declHint_1126_);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v_msg_1125_);
return v___x_1137_;
}
else
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_c_1143_; lean_object* v___x_1144_; 
v___x_1138_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_1139_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
v___x_1140_ = l_Lean_Options_empty;
v___x_1141_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1135_);
lean_ctor_set(v___x_1141_, 1, v___x_1138_);
lean_ctor_set(v___x_1141_, 2, v___x_1139_);
lean_ctor_set(v___x_1141_, 3, v___x_1140_);
lean_inc(v_declHint_1126_);
v___x_1142_ = l_Lean_MessageData_ofConstName(v_declHint_1126_, v___x_1132_);
v_c_1143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1143_, 0, v___x_1141_);
lean_ctor_set(v_c_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1131_, v_declHint_1126_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_dec_ref(v_env_1131_);
lean_dec(v_declHint_1126_);
v___x_1145_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v_c_1143_);
v___x_1147_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = l_Lean_MessageData_note(v___x_1148_);
v___x_1150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1150_, 0, v_msg_1125_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
else
{
lean_object* v_val_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1186_; 
v_val_1152_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1154_ = v___x_1144_;
v_isShared_1155_ = v_isSharedCheck_1186_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_val_1152_);
lean_dec(v___x_1144_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1186_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v_mod_1158_; uint8_t v___x_1159_; 
v___x_1156_ = l_Lean_Environment_header(v_env_1131_);
lean_dec_ref(v_env_1131_);
v___x_1157_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1156_);
lean_dec_ref(v___x_1156_);
v_mod_1158_ = lean_array_get(v___x_1129_, v___x_1157_, v_val_1152_);
lean_dec(v_val_1152_);
lean_dec_ref(v___x_1157_);
v___x_1159_ = l_Lean_isPrivateName(v_declHint_1126_);
lean_dec(v_declHint_1126_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1160_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
lean_ctor_set(v___x_1161_, 1, v_c_1143_);
v___x_1162_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = l_Lean_MessageData_ofName(v_mod_1158_);
v___x_1165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
v___x_1168_ = l_Lean_MessageData_note(v___x_1167_);
v___x_1169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1169_, 0, v_msg_1125_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1169_);
v___x_1171_ = v___x_1154_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
else
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1173_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
lean_ctor_set(v___x_1174_, 1, v_c_1143_);
v___x_1175_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = l_Lean_MessageData_ofName(v_mod_1158_);
v___x_1178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = l_Lean_MessageData_note(v___x_1180_);
v___x_1182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1182_, 0, v_msg_1125_);
lean_ctor_set(v___x_1182_, 1, v___x_1181_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1182_);
v___x_1184_ = v___x_1154_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1187_; 
lean_dec_ref(v_env_1131_);
lean_dec(v_declHint_1126_);
v___x_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_msg_1125_);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1188_, lean_object* v_declHint_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1188_, v_declHint_1189_, v___y_1190_);
lean_dec(v___y_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_1193_, lean_object* v_declHint_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1210_; 
v___x_1200_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1193_, v_declHint_1194_, v___y_1198_);
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1210_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1210_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v___x_1205_ = l_Lean_unknownIdentifierMessageTag;
v___x_1206_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
lean_ctor_set(v___x_1206_, 1, v_a_1201_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1206_);
v___x_1208_ = v___x_1203_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_1211_, lean_object* v_declHint_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1211_, v_declHint_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1219_, lean_object* v_msg_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_toCold_1226_; lean_object* v_currRecDepth_1227_; lean_object* v_ref_1228_; uint8_t v_diag_1229_; uint8_t v_suppressElabErrors_1230_; lean_object* v_ref_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_toCold_1226_ = lean_ctor_get(v___y_1223_, 0);
v_currRecDepth_1227_ = lean_ctor_get(v___y_1223_, 1);
v_ref_1228_ = lean_ctor_get(v___y_1223_, 2);
v_diag_1229_ = lean_ctor_get_uint8(v___y_1223_, sizeof(void*)*3);
v_suppressElabErrors_1230_ = lean_ctor_get_uint8(v___y_1223_, sizeof(void*)*3 + 1);
v_ref_1231_ = l_Lean_replaceRef(v_ref_1219_, v_ref_1228_);
lean_inc(v_currRecDepth_1227_);
lean_inc_ref(v_toCold_1226_);
v___x_1232_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1232_, 0, v_toCold_1226_);
lean_ctor_set(v___x_1232_, 1, v_currRecDepth_1227_);
lean_ctor_set(v___x_1232_, 2, v_ref_1231_);
lean_ctor_set_uint8(v___x_1232_, sizeof(void*)*3, v_diag_1229_);
lean_ctor_set_uint8(v___x_1232_, sizeof(void*)*3 + 1, v_suppressElabErrors_1230_);
v___x_1233_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1220_, v___y_1221_, v___y_1222_, v___x_1232_, v___y_1224_);
lean_dec_ref_known(v___x_1232_, 3);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1234_, lean_object* v_msg_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1234_, v_msg_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v_ref_1234_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1242_, lean_object* v_msg_1243_, lean_object* v_declHint_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v___x_1250_; lean_object* v_a_1251_; lean_object* v___x_1252_; 
v___x_1250_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1243_, v_declHint_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1251_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1242_, v_a_1251_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1253_, lean_object* v_msg_1254_, lean_object* v_declHint_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1253_, v_msg_1254_, v_declHint_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v_ref_1253_);
return v_res_1261_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1265_, lean_object* v_constName_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1272_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1273_ = 0;
lean_inc(v_constName_1266_);
v___x_1274_ = l_Lean_MessageData_ofConstName(v_constName_1266_, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1272_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1265_, v___x_1277_, v_constName_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1279_, lean_object* v_constName_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1279_, v_constName_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v_ref_1279_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object* v_constName_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v_ref_1293_; lean_object* v___x_1294_; 
v_ref_1293_ = lean_ctor_get(v___y_1290_, 2);
v___x_1294_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1293_, v_constName_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object* v_constName_1302_, uint8_t v_skipRealize_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; lean_object* v_env_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_st_ref_get(v___y_1307_);
v_env_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc_ref(v_env_1310_);
lean_dec(v___x_1309_);
lean_inc(v_constName_1302_);
v___x_1311_ = l_Lean_Environment_findAsync_x3f(v_env_1310_, v_constName_1302_, v_skipRealize_1303_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1302_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
return v___x_1312_;
}
else
{
lean_object* v_val_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec(v_constName_1302_);
v_val_1313_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1311_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_val_1313_);
lean_dec(v___x_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 0);
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_val_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object* v_constName_1321_, lean_object* v_skipRealize_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
uint8_t v_skipRealize_boxed_1328_; lean_object* v_res_1329_; 
v_skipRealize_boxed_1328_ = lean_unbox(v_skipRealize_1322_);
v_res_1329_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_constName_1321_, v_skipRealize_boxed_1328_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object* v_declName_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; lean_object* v_env_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1333_ = lean_st_ref_get(v___y_1331_);
v_env_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc_ref(v_env_1334_);
lean_dec(v___x_1333_);
v___x_1335_ = l_Lean_getReducibilityStatusCore(v_env_1334_, v_declName_1330_);
v___x_1336_ = lean_box(v___x_1335_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object* v_declName_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1338_, v___y_1339_);
lean_dec(v___y_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object* v_declName_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1348_; lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1364_; 
v___x_1348_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1342_, v___y_1346_);
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1364_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1364_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
uint8_t v___x_1353_; 
v___x_1353_ = lean_unbox(v_a_1349_);
lean_dec(v_a_1349_);
if (v___x_1353_ == 0)
{
uint8_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1357_; 
v___x_1354_ = 1;
v___x_1355_ = lean_box(v___x_1354_);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1355_);
v___x_1357_ = v___x_1351_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v___x_1355_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
else
{
uint8_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = 0;
v___x_1360_ = lean_box(v___x_1359_);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1360_);
v___x_1362_ = v___x_1351_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object* v_declName_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
return v_res_1371_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__0));
v___x_1374_ = l_Lean_stringToMessageData(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__2));
v___x_1377_ = l_Lean_stringToMessageData(v___x_1376_);
return v___x_1377_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__4));
v___x_1380_ = l_Lean_stringToMessageData(v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__6));
v___x_1383_ = l_Lean_stringToMessageData(v___x_1382_);
return v___x_1383_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__8));
v___x_1386_ = l_Lean_stringToMessageData(v___x_1385_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object* v_params_1387_, lean_object* v_id_1388_, lean_object* v_declName_1389_, lean_object* v_kind_1390_, uint8_t v_minIndexable_1391_, uint8_t v_suggest_1392_, uint8_t v_warn_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v___y_1400_; lean_object* v_thm_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; uint8_t v___x_1455_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___x_1653_; 
v___x_1455_ = 0;
lean_inc(v_declName_1389_);
v___x_1653_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_declName_1389_, v___x_1455_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; uint8_t v_kind_1655_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v_kind_1655_ = lean_ctor_get_uint8(v_a_1654_, sizeof(void*)*3);
lean_dec(v_a_1654_);
switch(v_kind_1655_)
{
case 1:
{
v___y_1584_ = v_a_1394_;
v___y_1585_ = v_a_1395_;
v___y_1586_ = v_a_1396_;
v___y_1587_ = v_a_1397_;
goto v___jp_1583_;
}
case 2:
{
v___y_1584_ = v_a_1394_;
v___y_1585_ = v_a_1395_;
v___y_1586_ = v_a_1396_;
v___y_1587_ = v_a_1397_;
goto v___jp_1583_;
}
case 6:
{
v___y_1584_ = v_a_1394_;
v___y_1585_ = v_a_1395_;
v___y_1586_ = v_a_1396_;
v___y_1587_ = v_a_1397_;
goto v___jp_1583_;
}
case 0:
{
lean_object* v___x_1656_; 
lean_dec(v_id_1388_);
lean_inc(v_declName_1389_);
v___x_1656_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1389_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; uint8_t v___x_1658_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = lean_unbox(v_a_1657_);
lean_dec(v_a_1657_);
if (v___x_1658_ == 0)
{
v___y_1513_ = v_a_1394_;
v___y_1514_ = v_a_1395_;
v___y_1515_ = v_a_1396_;
v___y_1516_ = v_a_1397_;
goto v___jp_1512_;
}
else
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_dec(v_kind_1390_);
lean_dec_ref(v_params_1387_);
v___x_1659_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1660_ = l_Lean_MessageData_ofConstName(v_declName_1389_, v___x_1455_);
v___x_1661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__7, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7);
v___x_1663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1661_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1663_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1664_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1664_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_kind_1390_);
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1673_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1656_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1656_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
default: 
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec(v_kind_1390_);
lean_dec(v_id_1388_);
lean_dec_ref(v_params_1387_);
v___x_1681_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1682_ = l_Lean_MessageData_ofConstName(v_declName_1389_, v___x_1455_);
v___x_1683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__9, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9);
v___x_1685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1683_);
lean_ctor_set(v___x_1685_, 1, v___x_1684_);
v___x_1686_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1685_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
return v___x_1686_;
}
}
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
lean_dec(v_kind_1390_);
lean_dec(v_declName_1389_);
lean_dec(v_id_1388_);
lean_dec_ref(v_params_1387_);
v_a_1687_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v___x_1653_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1653_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1692_; 
if (v_isShared_1690_ == 0)
{
v___x_1692_ = v___x_1689_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_a_1687_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
v___jp_1399_:
{
lean_object* v_config_1401_; lean_object* v_extensions_1402_; lean_object* v_extra_1403_; lean_object* v_extraInj_1404_; lean_object* v_extraFacts_1405_; lean_object* v_symPrios_1406_; lean_object* v_norm_1407_; lean_object* v_normProcs_1408_; lean_object* v_anchorRefs_x3f_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1418_; 
v_config_1401_ = lean_ctor_get(v_params_1387_, 0);
v_extensions_1402_ = lean_ctor_get(v_params_1387_, 1);
v_extra_1403_ = lean_ctor_get(v_params_1387_, 2);
v_extraInj_1404_ = lean_ctor_get(v_params_1387_, 3);
v_extraFacts_1405_ = lean_ctor_get(v_params_1387_, 4);
v_symPrios_1406_ = lean_ctor_get(v_params_1387_, 5);
v_norm_1407_ = lean_ctor_get(v_params_1387_, 6);
v_normProcs_1408_ = lean_ctor_get(v_params_1387_, 7);
v_anchorRefs_x3f_1409_ = lean_ctor_get(v_params_1387_, 8);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_params_1387_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1411_ = v_params_1387_;
v_isShared_1412_ = v_isSharedCheck_1418_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_anchorRefs_x3f_1409_);
lean_inc(v_normProcs_1408_);
lean_inc(v_norm_1407_);
lean_inc(v_symPrios_1406_);
lean_inc(v_extraFacts_1405_);
lean_inc(v_extraInj_1404_);
lean_inc(v_extra_1403_);
lean_inc(v_extensions_1402_);
lean_inc(v_config_1401_);
lean_dec(v_params_1387_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1418_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1415_; 
v___x_1413_ = l_Lean_PersistentArray_push___redArg(v_extra_1403_, v___y_1400_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 2, v___x_1413_);
v___x_1415_ = v___x_1411_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_config_1401_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_extensions_1402_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v___x_1413_);
lean_ctor_set(v_reuseFailAlloc_1417_, 3, v_extraInj_1404_);
lean_ctor_set(v_reuseFailAlloc_1417_, 4, v_extraFacts_1405_);
lean_ctor_set(v_reuseFailAlloc_1417_, 5, v_symPrios_1406_);
lean_ctor_set(v_reuseFailAlloc_1417_, 6, v_norm_1407_);
lean_ctor_set(v_reuseFailAlloc_1417_, 7, v_normProcs_1408_);
lean_ctor_set(v_reuseFailAlloc_1417_, 8, v_anchorRefs_x3f_1409_);
v___x_1415_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
}
v___jp_1419_:
{
if (v_warn_1393_ == 0)
{
lean_dec(v_declName_1389_);
v___y_1400_ = v_thm_1420_;
goto v___jp_1399_;
}
else
{
lean_object* v_extensions_1425_; lean_object* v_patterns_1426_; lean_object* v_origin_1427_; lean_object* v_cnstrs_1428_; uint8_t v___x_1429_; 
v_extensions_1425_ = lean_ctor_get(v_params_1387_, 1);
v_patterns_1426_ = lean_ctor_get(v_thm_1420_, 3);
v_origin_1427_ = lean_ctor_get(v_thm_1420_, 5);
v_cnstrs_1428_ = lean_ctor_get(v_thm_1420_, 7);
v___x_1429_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1425_, v_origin_1427_, v_patterns_1426_, v_cnstrs_1428_);
if (v___x_1429_ == 0)
{
lean_dec(v_declName_1389_);
v___y_1400_ = v_thm_1420_;
goto v___jp_1399_;
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1425_, v_declName_1389_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_dec_ref_known(v___x_1430_, 1);
v___y_1400_ = v_thm_1420_;
goto v___jp_1399_;
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_dec_ref(v_thm_1420_);
lean_dec_ref(v_params_1387_);
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
}
v___jp_1439_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1451_ = l_Lean_PersistentArray_push___redArg(v___y_1447_, v___y_1446_);
v___x_1452_ = l_Lean_PersistentArray_push___redArg(v___x_1451_, v___y_1445_);
v___x_1453_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1453_, 0, v___y_1442_);
lean_ctor_set(v___x_1453_, 1, v___y_1450_);
lean_ctor_set(v___x_1453_, 2, v___x_1452_);
lean_ctor_set(v___x_1453_, 3, v___y_1443_);
lean_ctor_set(v___x_1453_, 4, v___y_1440_);
lean_ctor_set(v___x_1453_, 5, v___y_1449_);
lean_ctor_set(v___x_1453_, 6, v___y_1444_);
lean_ctor_set(v___x_1453_, 7, v___y_1448_);
lean_ctor_set(v___x_1453_, 8, v___y_1441_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
return v___x_1454_;
}
v___jp_1456_:
{
lean_object* v___x_1461_; 
v___x_1461_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1391_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v___x_1462_; 
lean_dec_ref_known(v___x_1461_, 1);
lean_inc(v_declName_1389_);
v___x_1462_ = l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(v_declName_1389_, v___x_1455_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1495_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1465_ = v___x_1462_;
v_isShared_1466_ = v_isSharedCheck_1495_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1462_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1495_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
if (lean_obj_tag(v_a_1463_) == 1)
{
lean_object* v_val_1467_; lean_object* v_config_1468_; lean_object* v_extensions_1469_; lean_object* v_extra_1470_; lean_object* v_extraInj_1471_; lean_object* v_extraFacts_1472_; lean_object* v_symPrios_1473_; lean_object* v_norm_1474_; lean_object* v_normProcs_1475_; lean_object* v_anchorRefs_x3f_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_declName_1389_);
v_val_1467_ = lean_ctor_get(v_a_1463_, 0);
lean_inc(v_val_1467_);
lean_dec_ref_known(v_a_1463_, 1);
v_config_1468_ = lean_ctor_get(v_params_1387_, 0);
v_extensions_1469_ = lean_ctor_get(v_params_1387_, 1);
v_extra_1470_ = lean_ctor_get(v_params_1387_, 2);
v_extraInj_1471_ = lean_ctor_get(v_params_1387_, 3);
v_extraFacts_1472_ = lean_ctor_get(v_params_1387_, 4);
v_symPrios_1473_ = lean_ctor_get(v_params_1387_, 5);
v_norm_1474_ = lean_ctor_get(v_params_1387_, 6);
v_normProcs_1475_ = lean_ctor_get(v_params_1387_, 7);
v_anchorRefs_x3f_1476_ = lean_ctor_get(v_params_1387_, 8);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_params_1387_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1478_ = v_params_1387_;
v_isShared_1479_ = v_isSharedCheck_1488_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_anchorRefs_x3f_1476_);
lean_inc(v_normProcs_1475_);
lean_inc(v_norm_1474_);
lean_inc(v_symPrios_1473_);
lean_inc(v_extraFacts_1472_);
lean_inc(v_extraInj_1471_);
lean_inc(v_extra_1470_);
lean_inc(v_extensions_1469_);
lean_inc(v_config_1468_);
lean_dec(v_params_1387_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1488_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___x_1480_ = l_Lean_Array_toPArray_x27___redArg(v_val_1467_);
lean_dec(v_val_1467_);
v___x_1481_ = l_Lean_PersistentArray_append___redArg(v_extra_1470_, v___x_1480_);
lean_dec_ref(v___x_1480_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 2, v___x_1481_);
v___x_1483_ = v___x_1478_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_config_1468_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_extensions_1469_);
lean_ctor_set(v_reuseFailAlloc_1487_, 2, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1487_, 3, v_extraInj_1471_);
lean_ctor_set(v_reuseFailAlloc_1487_, 4, v_extraFacts_1472_);
lean_ctor_set(v_reuseFailAlloc_1487_, 5, v_symPrios_1473_);
lean_ctor_set(v_reuseFailAlloc_1487_, 6, v_norm_1474_);
lean_ctor_set(v_reuseFailAlloc_1487_, 7, v_normProcs_1475_);
lean_ctor_set(v_reuseFailAlloc_1487_, 8, v_anchorRefs_x3f_1476_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 0, v___x_1483_);
v___x_1485_ = v___x_1465_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
lean_del_object(v___x_1465_);
lean_dec(v_a_1463_);
lean_dec_ref(v_params_1387_);
v___x_1489_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__1, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1);
v___x_1490_ = l_Lean_MessageData_ofConstName(v_declName_1389_, v___x_1455_);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1493_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
return v___x_1494_;
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1496_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1462_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1462_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1504_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1461_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1461_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
v___jp_1512_:
{
uint8_t v___x_1517_; 
v___x_1517_ = l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(v_kind_1390_);
if (v___x_1517_ == 0)
{
uint8_t v___x_1518_; 
v___x_1518_ = l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(v_kind_1390_);
lean_dec(v_kind_1390_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v_params_1387_);
v___x_1519_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1520_ = l_Lean_MessageData_ofConstName(v_declName_1389_, v___x_1455_);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__5, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5);
v___x_1523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1523_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
else
{
v___y_1457_ = v___y_1513_;
v___y_1458_ = v___y_1514_;
v___y_1459_ = v___y_1515_;
v___y_1460_ = v___y_1516_;
goto v___jp_1456_;
}
}
else
{
lean_dec(v_kind_1390_);
v___y_1457_ = v___y_1513_;
v___y_1458_ = v___y_1514_;
v___y_1459_ = v___y_1515_;
v___y_1460_ = v___y_1516_;
goto v___jp_1456_;
}
}
v___jp_1533_:
{
lean_object* v_symPrios_1538_; lean_object* v___x_1539_; 
v_symPrios_1538_ = lean_ctor_get(v_params_1387_, 5);
lean_inc_ref(v_symPrios_1538_);
lean_inc(v_declName_1389_);
v___x_1539_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1389_, v_kind_1390_, v_symPrios_1538_, v___x_1455_, v_minIndexable_1391_, v___y_1535_, v___y_1534_, v___y_1537_, v___y_1536_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v_thm_1420_ = v_a_1540_;
v___y_1421_ = v___y_1535_;
v___y_1422_ = v___y_1534_;
v___y_1423_ = v___y_1537_;
v___y_1424_ = v___y_1536_;
goto v___jp_1419_;
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1541_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1539_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1539_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
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
v___jp_1549_:
{
if (v_suggest_1392_ == 0)
{
lean_dec(v_id_1388_);
v___y_1534_ = v___y_1551_;
v___y_1535_ = v___y_1550_;
v___y_1536_ = v___y_1553_;
v___y_1537_ = v___y_1552_;
goto v___jp_1533_;
}
else
{
lean_object* v_toCold_1554_; lean_object* v_options_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v_toCold_1554_ = lean_ctor_get(v___y_1552_, 0);
v_options_1555_ = lean_ctor_get(v_toCold_1554_, 2);
v___x_1556_ = l_Lean_Meta_Grind_backward_grind_inferPattern;
v___x_1557_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_1555_, v___x_1556_);
if (v___x_1557_ == 0)
{
lean_object* v_symPrios_1558_; lean_object* v___x_1559_; 
lean_dec(v_kind_1390_);
v_symPrios_1558_ = lean_ctor_get(v_params_1387_, 5);
lean_inc_ref(v_symPrios_1558_);
lean_inc(v_declName_1389_);
v___x_1559_ = l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(v_id_1388_, v_declName_1389_, v_symPrios_1558_, v_minIndexable_1391_, v_suggest_1392_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v___x_1559_, 1);
v_thm_1420_ = v_a_1560_;
v___y_1421_ = v___y_1550_;
v___y_1422_ = v___y_1551_;
v___y_1423_ = v___y_1552_;
v___y_1424_ = v___y_1553_;
goto v___jp_1419_;
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1561_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1559_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1559_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
else
{
lean_dec(v_id_1388_);
v___y_1534_ = v___y_1551_;
v___y_1535_ = v___y_1550_;
v___y_1536_ = v___y_1553_;
v___y_1537_ = v___y_1552_;
goto v___jp_1533_;
}
}
}
v___jp_1569_:
{
lean_object* v___x_1574_; 
v___x_1574_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1391_, v___y_1571_, v___y_1573_, v___y_1572_, v___y_1570_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_dec_ref_known(v___x_1574_, 1);
v___y_1550_ = v___y_1571_;
v___y_1551_ = v___y_1573_;
v___y_1552_ = v___y_1572_;
v___y_1553_ = v___y_1570_;
goto v___jp_1549_;
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec(v_kind_1390_);
lean_dec(v_declName_1389_);
lean_dec(v_id_1388_);
lean_dec_ref(v_params_1387_);
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
v___jp_1583_:
{
if (lean_obj_tag(v_kind_1390_) == 2)
{
uint8_t v_gen_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_id_1388_);
v_gen_1588_ = lean_ctor_get_uint8(v_kind_1390_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v_kind_1390_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1590_ = v_kind_1390_;
v_isShared_1591_ = v_isSharedCheck_1652_;
goto v_resetjp_1589_;
}
else
{
lean_dec(v_kind_1390_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1652_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; 
v___x_1592_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1391_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_config_1593_; lean_object* v_extensions_1594_; lean_object* v_extra_1595_; lean_object* v_extraInj_1596_; lean_object* v_extraFacts_1597_; lean_object* v_symPrios_1598_; lean_object* v_norm_1599_; lean_object* v_normProcs_1600_; lean_object* v_anchorRefs_x3f_1601_; lean_object* v___x_1603_; 
lean_dec_ref_known(v___x_1592_, 1);
v_config_1593_ = lean_ctor_get(v_params_1387_, 0);
lean_inc_ref(v_config_1593_);
v_extensions_1594_ = lean_ctor_get(v_params_1387_, 1);
lean_inc_ref(v_extensions_1594_);
v_extra_1595_ = lean_ctor_get(v_params_1387_, 2);
lean_inc_ref(v_extra_1595_);
v_extraInj_1596_ = lean_ctor_get(v_params_1387_, 3);
lean_inc_ref(v_extraInj_1596_);
v_extraFacts_1597_ = lean_ctor_get(v_params_1387_, 4);
lean_inc_ref(v_extraFacts_1597_);
v_symPrios_1598_ = lean_ctor_get(v_params_1387_, 5);
lean_inc_ref(v_symPrios_1598_);
v_norm_1599_ = lean_ctor_get(v_params_1387_, 6);
lean_inc_ref(v_norm_1599_);
v_normProcs_1600_ = lean_ctor_get(v_params_1387_, 7);
lean_inc_ref(v_normProcs_1600_);
v_anchorRefs_x3f_1601_ = lean_ctor_get(v_params_1387_, 8);
lean_inc(v_anchorRefs_x3f_1601_);
lean_dec_ref(v_params_1387_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set_tag(v___x_1590_, 0);
v___x_1603_ = v___x_1590_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1643_, 0, v_gen_1588_);
v___x_1603_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
lean_object* v___x_1604_; 
lean_inc_ref(v_symPrios_1598_);
lean_inc(v_declName_1389_);
v___x_1604_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1389_, v___x_1603_, v_symPrios_1598_, v___x_1455_, v___x_1455_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___x_1606_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1606_, 0, v_gen_1588_);
lean_inc_ref(v_symPrios_1598_);
lean_inc(v_declName_1389_);
v___x_1607_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1389_, v___x_1606_, v_symPrios_1598_, v___x_1455_, v___x_1455_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1607_) == 0)
{
if (v_warn_1393_ == 0)
{
lean_object* v_a_1608_; 
lean_dec(v_declName_1389_);
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v___y_1440_ = v_extraFacts_1597_;
v___y_1441_ = v_anchorRefs_x3f_1601_;
v___y_1442_ = v_config_1593_;
v___y_1443_ = v_extraInj_1596_;
v___y_1444_ = v_norm_1599_;
v___y_1445_ = v_a_1608_;
v___y_1446_ = v_a_1605_;
v___y_1447_ = v_extra_1595_;
v___y_1448_ = v_normProcs_1600_;
v___y_1449_ = v_symPrios_1598_;
v___y_1450_ = v_extensions_1594_;
goto v___jp_1439_;
}
else
{
lean_object* v_a_1609_; lean_object* v_patterns_1610_; lean_object* v_origin_1611_; lean_object* v_cnstrs_1612_; uint8_t v___x_1613_; 
v_a_1609_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1607_, 1);
v_patterns_1610_ = lean_ctor_get(v_a_1605_, 3);
v_origin_1611_ = lean_ctor_get(v_a_1605_, 5);
v_cnstrs_1612_ = lean_ctor_get(v_a_1605_, 7);
v___x_1613_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1594_, v_origin_1611_, v_patterns_1610_, v_cnstrs_1612_);
if (v___x_1613_ == 0)
{
lean_dec(v_declName_1389_);
v___y_1440_ = v_extraFacts_1597_;
v___y_1441_ = v_anchorRefs_x3f_1601_;
v___y_1442_ = v_config_1593_;
v___y_1443_ = v_extraInj_1596_;
v___y_1444_ = v_norm_1599_;
v___y_1445_ = v_a_1609_;
v___y_1446_ = v_a_1605_;
v___y_1447_ = v_extra_1595_;
v___y_1448_ = v_normProcs_1600_;
v___y_1449_ = v_symPrios_1598_;
v___y_1450_ = v_extensions_1594_;
goto v___jp_1439_;
}
else
{
lean_object* v_patterns_1614_; lean_object* v_origin_1615_; lean_object* v_cnstrs_1616_; uint8_t v___x_1617_; 
v_patterns_1614_ = lean_ctor_get(v_a_1609_, 3);
v_origin_1615_ = lean_ctor_get(v_a_1609_, 5);
v_cnstrs_1616_ = lean_ctor_get(v_a_1609_, 7);
v___x_1617_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1594_, v_origin_1615_, v_patterns_1614_, v_cnstrs_1616_);
if (v___x_1617_ == 0)
{
lean_dec(v_declName_1389_);
v___y_1440_ = v_extraFacts_1597_;
v___y_1441_ = v_anchorRefs_x3f_1601_;
v___y_1442_ = v_config_1593_;
v___y_1443_ = v_extraInj_1596_;
v___y_1444_ = v_norm_1599_;
v___y_1445_ = v_a_1609_;
v___y_1446_ = v_a_1605_;
v___y_1447_ = v_extra_1595_;
v___y_1448_ = v_normProcs_1600_;
v___y_1449_ = v_symPrios_1598_;
v___y_1450_ = v_extensions_1594_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1618_; 
v___x_1618_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1594_, v_declName_1389_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_dec_ref_known(v___x_1618_, 1);
v___y_1440_ = v_extraFacts_1597_;
v___y_1441_ = v_anchorRefs_x3f_1601_;
v___y_1442_ = v_config_1593_;
v___y_1443_ = v_extraInj_1596_;
v___y_1444_ = v_norm_1599_;
v___y_1445_ = v_a_1609_;
v___y_1446_ = v_a_1605_;
v___y_1447_ = v_extra_1595_;
v___y_1448_ = v_normProcs_1600_;
v___y_1449_ = v_symPrios_1598_;
v___y_1450_ = v_extensions_1594_;
goto v___jp_1439_;
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_a_1609_);
lean_dec(v_a_1605_);
lean_dec(v_anchorRefs_x3f_1601_);
lean_dec_ref(v_normProcs_1600_);
lean_dec_ref(v_norm_1599_);
lean_dec_ref(v_symPrios_1598_);
lean_dec_ref(v_extraFacts_1597_);
lean_dec_ref(v_extraInj_1596_);
lean_dec_ref(v_extra_1595_);
lean_dec_ref(v_extensions_1594_);
lean_dec_ref(v_config_1593_);
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1618_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1618_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec(v_a_1605_);
lean_dec(v_anchorRefs_x3f_1601_);
lean_dec_ref(v_normProcs_1600_);
lean_dec_ref(v_norm_1599_);
lean_dec_ref(v_symPrios_1598_);
lean_dec_ref(v_extraFacts_1597_);
lean_dec_ref(v_extraInj_1596_);
lean_dec_ref(v_extra_1595_);
lean_dec_ref(v_extensions_1594_);
lean_dec_ref(v_config_1593_);
lean_dec(v_declName_1389_);
v_a_1627_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1607_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1607_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
else
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
lean_dec(v_anchorRefs_x3f_1601_);
lean_dec_ref(v_normProcs_1600_);
lean_dec_ref(v_norm_1599_);
lean_dec_ref(v_symPrios_1598_);
lean_dec_ref(v_extraFacts_1597_);
lean_dec_ref(v_extraInj_1596_);
lean_dec_ref(v_extra_1595_);
lean_dec_ref(v_extensions_1594_);
lean_dec_ref(v_config_1593_);
lean_dec(v_declName_1389_);
v_a_1635_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1637_ = v___x_1604_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1604_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_del_object(v___x_1590_);
lean_dec(v_declName_1389_);
lean_dec_ref(v_params_1387_);
v_a_1644_ = lean_ctor_get(v___x_1592_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1592_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1592_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
}
else
{
switch(lean_obj_tag(v_kind_1390_))
{
case 0:
{
v___y_1570_ = v___y_1587_;
v___y_1571_ = v___y_1584_;
v___y_1572_ = v___y_1586_;
v___y_1573_ = v___y_1585_;
goto v___jp_1569_;
}
case 1:
{
v___y_1570_ = v___y_1587_;
v___y_1571_ = v___y_1584_;
v___y_1572_ = v___y_1586_;
v___y_1573_ = v___y_1585_;
goto v___jp_1569_;
}
default: 
{
v___y_1550_ = v___y_1584_;
v___y_1551_ = v___y_1585_;
v___y_1552_ = v___y_1586_;
v___y_1553_ = v___y_1587_;
goto v___jp_1549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object* v_params_1695_, lean_object* v_id_1696_, lean_object* v_declName_1697_, lean_object* v_kind_1698_, lean_object* v_minIndexable_1699_, lean_object* v_suggest_1700_, lean_object* v_warn_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
uint8_t v_minIndexable_boxed_1707_; uint8_t v_suggest_boxed_1708_; uint8_t v_warn_boxed_1709_; lean_object* v_res_1710_; 
v_minIndexable_boxed_1707_ = lean_unbox(v_minIndexable_1699_);
v_suggest_boxed_1708_ = lean_unbox(v_suggest_1700_);
v_warn_boxed_1709_ = lean_unbox(v_warn_1701_);
v_res_1710_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_1695_, v_id_1696_, v_declName_1697_, v_kind_1698_, v_minIndexable_boxed_1707_, v_suggest_boxed_1708_, v_warn_boxed_1709_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_);
lean_dec(v_a_1705_);
lean_dec_ref(v_a_1704_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object* v_declName_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1711_, v___y_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object* v_declName_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(v_declName_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object* v_00_u03b1_1725_, lean_object* v_constName_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1733_, lean_object* v_constName_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(v_00_u03b1_1733_, v_constName_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1741_, lean_object* v_ref_1742_, lean_object* v_constName_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1742_, v_constName_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1750_, lean_object* v_ref_1751_, lean_object* v_constName_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(v_00_u03b1_1750_, v_ref_1751_, v_constName_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v_ref_1751_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_1759_, lean_object* v_ref_1760_, lean_object* v_msg_1761_, lean_object* v_declHint_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1760_, v_msg_1761_, v_declHint_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1769_, lean_object* v_ref_1770_, lean_object* v_msg_1771_, lean_object* v_declHint_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_1769_, v_ref_1770_, v_msg_1771_, v_declHint_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v_ref_1770_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_1779_, lean_object* v_declHint_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1779_, v_declHint_1780_, v___y_1784_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_1787_, lean_object* v_declHint_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_1787_, v_declHint_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_1795_, lean_object* v_ref_1796_, lean_object* v_msg_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1796_, v_msg_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1804_, lean_object* v_ref_1805_, lean_object* v_msg_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_1804_, v_ref_1805_, v_msg_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v_ref_1805_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object* v_params_1815_, lean_object* v_val_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_config_1820_; lean_object* v_extensions_1821_; lean_object* v_extra_1822_; lean_object* v_extraInj_1823_; lean_object* v_extraFacts_1824_; lean_object* v_symPrios_1825_; lean_object* v_norm_1826_; lean_object* v_normProcs_1827_; lean_object* v_anchorRefs_x3f_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1858_; 
v_config_1820_ = lean_ctor_get(v_params_1815_, 0);
v_extensions_1821_ = lean_ctor_get(v_params_1815_, 1);
v_extra_1822_ = lean_ctor_get(v_params_1815_, 2);
v_extraInj_1823_ = lean_ctor_get(v_params_1815_, 3);
v_extraFacts_1824_ = lean_ctor_get(v_params_1815_, 4);
v_symPrios_1825_ = lean_ctor_get(v_params_1815_, 5);
v_norm_1826_ = lean_ctor_get(v_params_1815_, 6);
v_normProcs_1827_ = lean_ctor_get(v_params_1815_, 7);
v_anchorRefs_x3f_1828_ = lean_ctor_get(v_params_1815_, 8);
v_isSharedCheck_1858_ = !lean_is_exclusive(v_params_1815_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1830_ = v_params_1815_;
v_isShared_1831_ = v_isSharedCheck_1858_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_anchorRefs_x3f_1828_);
lean_inc(v_normProcs_1827_);
lean_inc(v_norm_1826_);
lean_inc(v_symPrios_1825_);
lean_inc(v_extraFacts_1824_);
lean_inc(v_extraInj_1823_);
lean_inc(v_extra_1822_);
lean_inc(v_extensions_1821_);
lean_inc(v_config_1820_);
lean_dec(v_params_1815_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1858_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___y_1833_; 
if (lean_obj_tag(v_anchorRefs_x3f_1828_) == 0)
{
lean_object* v___x_1856_; 
v___x_1856_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0));
v___y_1833_ = v___x_1856_;
goto v___jp_1832_;
}
else
{
lean_object* v_val_1857_; 
v_val_1857_ = lean_ctor_get(v_anchorRefs_x3f_1828_, 0);
lean_inc(v_val_1857_);
lean_dec_ref_known(v_anchorRefs_x3f_1828_, 1);
v___y_1833_ = v_val_1857_;
goto v___jp_1832_;
}
v___jp_1832_:
{
lean_object* v___x_1834_; 
v___x_1834_ = l_Lean_Elab_Tactic_Grind_elabAnchorRef(v_val_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1847_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1837_ = v___x_1834_;
v_isShared_1838_ = v_isSharedCheck_1847_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1847_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1839_ = lean_array_push(v___y_1833_, v_a_1835_);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 8, v___x_1840_);
v___x_1842_ = v___x_1830_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_config_1820_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_extensions_1821_);
lean_ctor_set(v_reuseFailAlloc_1846_, 2, v_extra_1822_);
lean_ctor_set(v_reuseFailAlloc_1846_, 3, v_extraInj_1823_);
lean_ctor_set(v_reuseFailAlloc_1846_, 4, v_extraFacts_1824_);
lean_ctor_set(v_reuseFailAlloc_1846_, 5, v_symPrios_1825_);
lean_ctor_set(v_reuseFailAlloc_1846_, 6, v_norm_1826_);
lean_ctor_set(v_reuseFailAlloc_1846_, 7, v_normProcs_1827_);
lean_ctor_set(v_reuseFailAlloc_1846_, 8, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1844_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1842_);
v___x_1844_ = v___x_1837_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
lean_dec_ref(v___y_1833_);
lean_del_object(v___x_1830_);
lean_dec_ref(v_normProcs_1827_);
lean_dec_ref(v_norm_1826_);
lean_dec_ref(v_symPrios_1825_);
lean_dec_ref(v_extraFacts_1824_);
lean_dec_ref(v_extraInj_1823_);
lean_dec_ref(v_extra_1822_);
lean_dec_ref(v_extensions_1821_);
lean_dec_ref(v_config_1820_);
v_a_1848_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1834_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1834_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object* v_params_1859_, lean_object* v_val_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_params_1859_, v_val_1860_, v_a_1861_, v_a_1862_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
lean_dec(v_val_1860_);
return v_res_1864_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0));
v___x_1867_ = l_Lean_stringToMessageData(v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object* v_params_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_config_1872_; uint8_t v_revert_1873_; 
v_config_1872_ = lean_ctor_get(v_params_1868_, 0);
v_revert_1873_ = lean_ctor_get_uint8(v_config_1872_, sizeof(void*)*14 + 30);
if (v_revert_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1);
v___x_1877_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_1876_, v_a_1869_, v_a_1870_);
return v___x_1877_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object* v_params_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_1878_, v_a_1879_, v_a_1880_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec_ref(v_params_1878_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object* v_e_1883_, lean_object* v___y_1884_){
_start:
{
uint8_t v___x_1886_; 
v___x_1886_ = l_Lean_Expr_hasMVar(v_e_1883_);
if (v___x_1886_ == 0)
{
lean_object* v___x_1887_; 
v___x_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1887_, 0, v_e_1883_);
return v___x_1887_;
}
else
{
lean_object* v___x_1888_; lean_object* v_mctx_1889_; lean_object* v___x_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; lean_object* v___x_1893_; lean_object* v_cache_1894_; lean_object* v_zetaDeltaFVarIds_1895_; lean_object* v_postponed_1896_; lean_object* v_diag_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1906_; 
v___x_1888_ = lean_st_ref_get(v___y_1884_);
v_mctx_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc_ref(v_mctx_1889_);
lean_dec(v___x_1888_);
v___x_1890_ = l_Lean_instantiateMVarsCore(v_mctx_1889_, v_e_1883_);
v_fst_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_fst_1891_);
v_snd_1892_ = lean_ctor_get(v___x_1890_, 1);
lean_inc(v_snd_1892_);
lean_dec_ref(v___x_1890_);
v___x_1893_ = lean_st_ref_take(v___y_1884_);
v_cache_1894_ = lean_ctor_get(v___x_1893_, 1);
v_zetaDeltaFVarIds_1895_ = lean_ctor_get(v___x_1893_, 2);
v_postponed_1896_ = lean_ctor_get(v___x_1893_, 3);
v_diag_1897_ = lean_ctor_get(v___x_1893_, 4);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1906_ == 0)
{
lean_object* v_unused_1907_; 
v_unused_1907_ = lean_ctor_get(v___x_1893_, 0);
lean_dec(v_unused_1907_);
v___x_1899_ = v___x_1893_;
v_isShared_1900_ = v_isSharedCheck_1906_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_diag_1897_);
lean_inc(v_postponed_1896_);
lean_inc(v_zetaDeltaFVarIds_1895_);
lean_inc(v_cache_1894_);
lean_dec(v___x_1893_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1906_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v_snd_1892_);
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_snd_1892_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_cache_1894_);
lean_ctor_set(v_reuseFailAlloc_1905_, 2, v_zetaDeltaFVarIds_1895_);
lean_ctor_set(v_reuseFailAlloc_1905_, 3, v_postponed_1896_);
lean_ctor_set(v_reuseFailAlloc_1905_, 4, v_diag_1897_);
v___x_1902_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = lean_st_ref_put(v___y_1884_, v___x_1902_);
v___x_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_fst_1891_);
return v___x_1904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object* v_e_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_1908_, v___y_1909_);
lean_dec(v___y_1909_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object* v_e_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_1912_, v___y_1916_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object* v_e_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(v_e_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(lean_object* v_p_1932_, lean_object* v_term_1933_, lean_object* v___x_1934_, uint8_t v___x_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_toCold_1943_; lean_object* v_currRecDepth_1944_; lean_object* v_ref_1945_; uint8_t v_diag_1946_; uint8_t v_suppressElabErrors_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_2015_; 
v_toCold_1943_ = lean_ctor_get(v___y_1940_, 0);
v_currRecDepth_1944_ = lean_ctor_get(v___y_1940_, 1);
v_ref_1945_ = lean_ctor_get(v___y_1940_, 2);
v_diag_1946_ = lean_ctor_get_uint8(v___y_1940_, sizeof(void*)*3);
v_suppressElabErrors_1947_ = lean_ctor_get_uint8(v___y_1940_, sizeof(void*)*3 + 1);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___y_1940_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_1949_ = v___y_1940_;
v_isShared_1950_ = v_isSharedCheck_2015_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_ref_1945_);
lean_inc(v_currRecDepth_1944_);
lean_inc(v_toCold_1943_);
lean_dec(v___y_1940_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_2015_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v_ref_1951_; lean_object* v___x_1953_; 
v_ref_1951_ = l_Lean_replaceRef(v_p_1932_, v_ref_1945_);
lean_dec(v_ref_1945_);
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 2, v_ref_1951_);
v___x_1953_ = v___x_1949_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_toCold_1943_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_currRecDepth_1944_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_ref_1951_);
lean_ctor_set_uint8(v_reuseFailAlloc_2014_, sizeof(void*)*3, v_diag_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_2014_, sizeof(void*)*3 + 1, v_suppressElabErrors_1947_);
v___x_1953_ = v_reuseFailAlloc_2014_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lean_Elab_Term_elabTerm(v_term_1933_, v___x_1934_, v___x_1935_, v___x_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___x_1953_, v___y_1941_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; uint8_t v___x_1956_; lean_object* v___x_1957_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
v___x_1956_ = 1;
v___x_1957_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_1956_, v___x_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___x_1953_, v___y_1941_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v___x_1958_; lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1997_; 
lean_dec_ref_known(v___x_1957_, 1);
v___x_1958_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_a_1955_, v___y_1939_);
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_1997_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1997_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
uint8_t v___x_1963_; 
v___x_1963_ = l_Lean_Expr_hasSyntheticSorry(v_a_1959_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1964_ = l_Lean_Expr_eta(v_a_1959_);
v___x_1965_ = l_Lean_Expr_hasMVar(v___x_1964_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
lean_dec_ref(v___x_1953_);
v___x_1966_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___closed__0));
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
lean_ctor_set(v___x_1967_, 1, v___x_1964_);
v___x_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1968_);
v___x_1970_ = v___x_1961_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
else
{
lean_object* v___x_1972_; 
lean_del_object(v___x_1961_);
v___x_1972_ = l_Lean_Meta_abstractMVars(v___x_1964_, v___x_1935_, v___y_1938_, v___y_1939_, v___x_1953_, v___y_1941_);
lean_dec_ref(v___x_1953_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1984_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1975_ = v___x_1972_;
v_isShared_1976_ = v_isSharedCheck_1984_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1972_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1984_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v_paramNames_1977_; lean_object* v_expr_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1982_; 
v_paramNames_1977_ = lean_ctor_get(v_a_1973_, 0);
lean_inc_ref(v_paramNames_1977_);
v_expr_1978_ = lean_ctor_get(v_a_1973_, 2);
lean_inc_ref(v_expr_1978_);
lean_dec(v_a_1973_);
v___x_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_paramNames_1977_);
lean_ctor_set(v___x_1979_, 1, v_expr_1978_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v___x_1980_);
v___x_1982_ = v___x_1975_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
v_a_1985_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1972_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1972_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1995_; 
lean_dec(v_a_1959_);
lean_dec_ref(v___x_1953_);
v___x_1993_ = lean_box(0);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1993_);
v___x_1995_ = v___x_1961_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_a_1955_);
lean_dec_ref(v___x_1953_);
v_a_1998_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1957_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1957_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec_ref(v___x_1953_);
v_a_2006_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1954_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1954_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object* v_p_2016_, lean_object* v_term_2017_, lean_object* v___x_2018_, lean_object* v___x_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v___x_12109__boxed_2027_; lean_object* v_res_2028_; 
v___x_12109__boxed_2027_ = lean_unbox(v___x_2019_);
v_res_2028_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(v_p_2016_, v_term_2017_, v___x_2018_, v___x_12109__boxed_2027_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
lean_dec(v___y_2025_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v_p_2016_);
return v_res_2028_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__2));
v___x_2034_ = l_Lean_stringToMessageData(v___x_2033_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object* v_params_2035_, lean_object* v_p_2036_, lean_object* v_fst_2037_, lean_object* v_snd_2038_, uint8_t v___x_2039_, uint8_t v_minIndexable_2040_, lean_object* v_kind_2041_, lean_object* v_idx_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_symPrios_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; lean_object* v___x_2053_; 
v_symPrios_2048_ = lean_ctor_get(v_params_2035_, 5);
lean_inc_ref(v_symPrios_2048_);
lean_dec_ref(v_params_2035_);
v___x_2049_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__1));
v___x_2050_ = lean_name_append_index_after(v___x_2049_, v_idx_2042_);
v___x_2051_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
lean_ctor_set(v___x_2051_, 1, v_p_2036_);
v___x_2052_ = 0;
v___x_2053_ = l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(v___x_2051_, v_fst_2037_, v_snd_2038_, v_kind_2041_, v_symPrios_2048_, v___x_2039_, v___x_2052_, v_minIndexable_2040_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2064_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2064_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2064_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
if (lean_obj_tag(v_a_2054_) == 1)
{
lean_object* v_val_2058_; lean_object* v___x_2060_; 
v_val_2058_ = lean_ctor_get(v_a_2054_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v_a_2054_, 1);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v_val_2058_);
v___x_2060_ = v___x_2056_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_val_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_del_object(v___x_2056_);
lean_dec(v_a_2054_);
v___x_2062_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___closed__3);
v___x_2063_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_2062_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
return v___x_2063_;
}
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
v_a_2065_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2053_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2053_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object* v_params_2073_, lean_object* v_p_2074_, lean_object* v_fst_2075_, lean_object* v_snd_2076_, lean_object* v___x_2077_, lean_object* v_minIndexable_2078_, lean_object* v_kind_2079_, lean_object* v_idx_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
uint8_t v___x_12283__boxed_2086_; uint8_t v_minIndexable_boxed_2087_; lean_object* v_res_2088_; 
v___x_12283__boxed_2086_ = lean_unbox(v___x_2077_);
v_minIndexable_boxed_2087_ = lean_unbox(v_minIndexable_2078_);
v_res_2088_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(v_params_2073_, v_p_2074_, v_fst_2075_, v_snd_2076_, v___x_12283__boxed_2086_, v_minIndexable_boxed_2087_, v_kind_2079_, v_idx_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
return v_res_2088_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = lean_box(1);
v___x_2090_ = l_Lean_MessageData_ofFormat(v___x_2089_);
return v___x_2090_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2094_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__2));
v___x_2095_ = l_Lean_MessageData_ofFormat(v___x_2094_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(lean_object* v_x_2096_, lean_object* v_x_2097_){
_start:
{
if (lean_obj_tag(v_x_2097_) == 0)
{
return v_x_2096_;
}
else
{
lean_object* v_head_2098_; lean_object* v_tail_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2121_; 
v_head_2098_ = lean_ctor_get(v_x_2097_, 0);
v_tail_2099_ = lean_ctor_get(v_x_2097_, 1);
v_isSharedCheck_2121_ = !lean_is_exclusive(v_x_2097_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2101_ = v_x_2097_;
v_isShared_2102_ = v_isSharedCheck_2121_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_tail_2099_);
lean_inc(v_head_2098_);
lean_dec(v_x_2097_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2121_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v_before_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2119_; 
v_before_2103_ = lean_ctor_get(v_head_2098_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_head_2098_);
if (v_isSharedCheck_2119_ == 0)
{
lean_object* v_unused_2120_; 
v_unused_2120_ = lean_ctor_get(v_head_2098_, 1);
lean_dec(v_unused_2120_);
v___x_2105_ = v_head_2098_;
v_isShared_2106_ = v_isSharedCheck_2119_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_before_2103_);
lean_dec(v_head_2098_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2119_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2107_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 7);
lean_ctor_set(v___x_2105_, 1, v___x_2107_);
lean_ctor_set(v___x_2105_, 0, v_x_2096_);
v___x_2109_ = v___x_2105_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_x_2096_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__3);
if (v_isShared_2102_ == 0)
{
lean_ctor_set_tag(v___x_2101_, 7);
lean_ctor_set(v___x_2101_, 1, v___x_2110_);
lean_ctor_set(v___x_2101_, 0, v___x_2109_);
v___x_2112_ = v___x_2101_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2109_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2113_ = l_Lean_MessageData_ofSyntax(v_before_2103_);
v___x_2114_ = l_Lean_indentD(v___x_2113_);
v___x_2115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2112_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v_x_2096_ = v___x_2115_;
v_x_2097_ = v_tail_2099_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__1));
v___x_2126_ = l_Lean_MessageData_ofFormat(v___x_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(lean_object* v_msgData_2127_, lean_object* v_macroStack_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_toCold_2131_; lean_object* v_options_2132_; lean_object* v___x_2133_; uint8_t v___x_2134_; 
v_toCold_2131_ = lean_ctor_get(v___y_2129_, 0);
v_options_2132_ = lean_ctor_get(v_toCold_2131_, 2);
v___x_2133_ = l_Lean_Elab_pp_macroStack;
v___x_2134_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_2132_, v___x_2133_);
if (v___x_2134_ == 0)
{
lean_object* v___x_2135_; 
lean_dec(v_macroStack_2128_);
v___x_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2135_, 0, v_msgData_2127_);
return v___x_2135_;
}
else
{
if (lean_obj_tag(v_macroStack_2128_) == 0)
{
lean_object* v___x_2136_; 
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v_msgData_2127_);
return v___x_2136_;
}
else
{
lean_object* v_head_2137_; lean_object* v_after_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2153_; 
v_head_2137_ = lean_ctor_get(v_macroStack_2128_, 0);
lean_inc(v_head_2137_);
v_after_2138_ = lean_ctor_get(v_head_2137_, 1);
v_isSharedCheck_2153_ = !lean_is_exclusive(v_head_2137_);
if (v_isSharedCheck_2153_ == 0)
{
lean_object* v_unused_2154_; 
v_unused_2154_ = lean_ctor_get(v_head_2137_, 0);
lean_dec(v_unused_2154_);
v___x_2140_ = v_head_2137_;
v_isShared_2141_ = v_isSharedCheck_2153_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_after_2138_);
lean_dec(v_head_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2153_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2144_; 
v___x_2142_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2___closed__0);
if (v_isShared_2141_ == 0)
{
lean_ctor_set_tag(v___x_2140_, 7);
lean_ctor_set(v___x_2140_, 1, v___x_2142_);
lean_ctor_set(v___x_2140_, 0, v_msgData_2127_);
v___x_2144_ = v___x_2140_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_msgData_2127_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v___x_2142_);
v___x_2144_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v_msgData_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2145_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___closed__2);
v___x_2146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set(v___x_2146_, 1, v___x_2145_);
v___x_2147_ = l_Lean_MessageData_ofSyntax(v_after_2138_);
v___x_2148_ = l_Lean_indentD(v___x_2147_);
v_msgData_2149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2149_, 0, v___x_2146_);
lean_ctor_set(v_msgData_2149_, 1, v___x_2148_);
v___x_2150_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1_spec__2(v_msgData_2149_, v_macroStack_2128_);
v___x_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
return v___x_2151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_2155_, lean_object* v_macroStack_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_msgData_2155_, v_macroStack_2156_, v___y_2157_);
lean_dec_ref(v___y_2157_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(lean_object* v_msg_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v_ref_2168_; lean_object* v_macroStack_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v_a_2172_; lean_object* v___x_2173_; lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2182_; 
v_ref_2168_ = lean_ctor_get(v___y_2165_, 2);
v_macroStack_2169_ = lean_ctor_get(v___y_2161_, 1);
v___x_2170_ = l_Lean_Elab_getBetterRef(v_ref_2168_, v_macroStack_2169_);
v___x_2171_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_2160_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_);
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref(v___x_2171_);
lean_inc(v_macroStack_2169_);
v___x_2173_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_a_2172_, v_macroStack_2169_, v___y_2165_);
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2180_; 
v___x_2178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2170_);
lean_ctor_set(v___x_2178_, 1, v_a_2174_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set_tag(v___x_2176_, 1);
lean_ctor_set(v___x_2176_, 0, v___x_2178_);
v___x_2180_ = v___x_2176_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object* v_msg_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
return v_res_2191_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0));
v___x_2194_ = l_Lean_stringToMessageData(v___x_2193_);
return v___x_2194_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2));
v___x_2197_ = l_Lean_stringToMessageData(v___x_2196_);
return v___x_2197_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5(void){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2199_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4));
v___x_2200_ = l_Lean_stringToMessageData(v___x_2199_);
return v___x_2200_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6));
v___x_2203_ = l_Lean_stringToMessageData(v___x_2202_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object* v_params_2206_, lean_object* v_p_2207_, lean_object* v_mod_x3f_2208_, lean_object* v_term_2209_, uint8_t v_minIndexable_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v___y_2219_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2306_; lean_object* v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v_kind_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v_toCold_2533_; lean_object* v_currRecDepth_2534_; lean_object* v_ref_2535_; uint8_t v_diag_2536_; uint8_t v_suppressElabErrors_2537_; lean_object* v_ref_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v_toCold_2533_ = lean_ctor_get(v_a_2215_, 0);
v_currRecDepth_2534_ = lean_ctor_get(v_a_2215_, 1);
v_ref_2535_ = lean_ctor_get(v_a_2215_, 2);
v_diag_2536_ = lean_ctor_get_uint8(v_a_2215_, sizeof(void*)*3);
v_suppressElabErrors_2537_ = lean_ctor_get_uint8(v_a_2215_, sizeof(void*)*3 + 1);
v_ref_2538_ = l_Lean_replaceRef(v_p_2207_, v_ref_2535_);
lean_inc(v_currRecDepth_2534_);
lean_inc_ref(v_toCold_2533_);
v___x_2539_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2539_, 0, v_toCold_2533_);
lean_ctor_set(v___x_2539_, 1, v_currRecDepth_2534_);
lean_ctor_set(v___x_2539_, 2, v_ref_2538_);
lean_ctor_set_uint8(v___x_2539_, sizeof(void*)*3, v_diag_2536_);
lean_ctor_set_uint8(v___x_2539_, sizeof(void*)*3 + 1, v_suppressElabErrors_2537_);
v___x_2540_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_2206_, v___x_2539_, v_a_2216_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_dec_ref_known(v___x_2540_, 1);
if (lean_obj_tag(v_mod_x3f_2208_) == 1)
{
lean_object* v_val_2541_; lean_object* v___x_2542_; 
v_val_2541_ = lean_ctor_get(v_mod_x3f_2208_, 0);
lean_inc(v_val_2541_);
v___x_2542_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_2541_, v___x_2539_, v_a_2216_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; 
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2543_);
lean_dec_ref_known(v___x_2542_, 1);
switch(lean_obj_tag(v_a_2543_))
{
case 0:
{
lean_object* v_k_2544_; 
v_k_2544_ = lean_ctor_get(v_a_2543_, 0);
lean_inc(v_k_2544_);
lean_dec_ref_known(v_a_2543_, 1);
if (lean_obj_tag(v_k_2544_) == 9)
{
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v___y_2509_ = v_a_2211_;
v___y_2510_ = v_a_2212_;
v___y_2511_ = v_a_2213_;
v___y_2512_ = v_a_2214_;
v___y_2513_ = v___x_2539_;
v___y_2514_ = v_a_2216_;
goto v___jp_2508_;
}
else
{
v_kind_2443_ = v_k_2544_;
v___y_2444_ = v_a_2211_;
v___y_2445_ = v_a_2212_;
v___y_2446_ = v_a_2213_;
v___y_2447_ = v_a_2214_;
v___y_2448_ = v___x_2539_;
v___y_2449_ = v_a_2216_;
goto v___jp_2442_;
}
}
case 1:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
lean_dec_ref_known(v_a_2543_, 0);
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v___x_2545_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2546_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2545_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v___x_2539_, v_a_2216_);
lean_dec_ref_known(v___x_2539_, 3);
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2546_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
case 3:
{
v___y_2526_ = v_a_2211_;
v___y_2527_ = v_a_2212_;
v___y_2528_ = v_a_2213_;
v___y_2529_ = v_a_2214_;
v___y_2530_ = v___x_2539_;
v___y_2531_ = v_a_2216_;
goto v___jp_2525_;
}
case 5:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
lean_dec_ref_known(v_a_2543_, 1);
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v___x_2555_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2556_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2555_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v___x_2539_, v_a_2216_);
lean_dec_ref_known(v___x_2539_, 3);
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
case 8:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec_ref_known(v_a_2543_, 0);
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v___x_2565_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2566_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2565_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v___x_2539_, v_a_2216_);
lean_dec_ref_known(v___x_2539_, 3);
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2566_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2566_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
default: 
{
lean_dec(v_a_2543_);
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v___y_2509_ = v_a_2211_;
v___y_2510_ = v_a_2212_;
v___y_2511_ = v_a_2213_;
v___y_2512_ = v_a_2214_;
v___y_2513_ = v___x_2539_;
v___y_2514_ = v_a_2216_;
goto v___jp_2508_;
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec_ref_known(v_mod_x3f_2208_, 1);
lean_dec_ref_known(v___x_2539_, 3);
lean_dec(v_term_2209_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v_a_2575_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2542_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2542_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
else
{
v___y_2526_ = v_a_2211_;
v___y_2527_ = v_a_2212_;
v___y_2528_ = v_a_2213_;
v___y_2529_ = v_a_2214_;
v___y_2530_ = v___x_2539_;
v___y_2531_ = v_a_2216_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec_ref_known(v___x_2539_, 3);
lean_dec(v_term_2209_);
lean_dec(v_mod_x3f_2208_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v_a_2583_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2540_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2540_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
v___jp_2218_:
{
lean_object* v_config_2220_; lean_object* v_extensions_2221_; lean_object* v_extra_2222_; lean_object* v_extraInj_2223_; lean_object* v_extraFacts_2224_; lean_object* v_symPrios_2225_; lean_object* v_norm_2226_; lean_object* v_normProcs_2227_; lean_object* v_anchorRefs_x3f_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2237_; 
v_config_2220_ = lean_ctor_get(v_params_2206_, 0);
v_extensions_2221_ = lean_ctor_get(v_params_2206_, 1);
v_extra_2222_ = lean_ctor_get(v_params_2206_, 2);
v_extraInj_2223_ = lean_ctor_get(v_params_2206_, 3);
v_extraFacts_2224_ = lean_ctor_get(v_params_2206_, 4);
v_symPrios_2225_ = lean_ctor_get(v_params_2206_, 5);
v_norm_2226_ = lean_ctor_get(v_params_2206_, 6);
v_normProcs_2227_ = lean_ctor_get(v_params_2206_, 7);
v_anchorRefs_x3f_2228_ = lean_ctor_get(v_params_2206_, 8);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_params_2206_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2230_ = v_params_2206_;
v_isShared_2231_ = v_isSharedCheck_2237_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_anchorRefs_x3f_2228_);
lean_inc(v_normProcs_2227_);
lean_inc(v_norm_2226_);
lean_inc(v_symPrios_2225_);
lean_inc(v_extraFacts_2224_);
lean_inc(v_extraInj_2223_);
lean_inc(v_extra_2222_);
lean_inc(v_extensions_2221_);
lean_inc(v_config_2220_);
lean_dec(v_params_2206_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2237_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2232_ = l_Lean_PersistentArray_push___redArg(v_extraFacts_2224_, v___y_2219_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 4, v___x_2232_);
v___x_2234_ = v___x_2230_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_config_2220_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_extensions_2221_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v_extra_2222_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v_extraInj_2223_);
lean_ctor_set(v_reuseFailAlloc_2236_, 4, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2236_, 5, v_symPrios_2225_);
lean_ctor_set(v_reuseFailAlloc_2236_, 6, v_norm_2226_);
lean_ctor_set(v_reuseFailAlloc_2236_, 7, v_normProcs_2227_);
lean_ctor_set(v_reuseFailAlloc_2236_, 8, v_anchorRefs_x3f_2228_);
v___x_2234_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
}
}
v___jp_2238_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2248_ = lean_array_get_size(v___y_2241_);
lean_dec_ref(v___y_2241_);
v___x_2249_ = lean_unsigned_to_nat(0u);
v___x_2250_ = lean_nat_dec_eq(v___x_2248_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
lean_dec_ref(v___y_2239_);
lean_dec_ref(v_params_2206_);
v___x_2251_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1);
v___x_2252_ = l_Lean_indentExpr(v___y_2240_);
v___x_2253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2253_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec_ref(v___y_2246_);
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
else
{
lean_dec_ref(v___y_2246_);
lean_dec_ref(v___y_2240_);
v___y_2219_ = v___y_2239_;
goto v___jp_2218_;
}
}
v___jp_2263_:
{
lean_object* v___x_2280_; 
lean_inc(v___y_2279_);
lean_inc(v___y_2277_);
lean_inc_ref(v___y_2276_);
v___x_2280_ = lean_apply_7(v___y_2275_, v___y_2267_, v___y_2274_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, lean_box(0));
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2290_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2288_; 
v___x_2285_ = l_Lean_PersistentArray_push___redArg(v___y_2273_, v_a_2281_);
v___x_2286_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2286_, 0, v___y_2266_);
lean_ctor_set(v___x_2286_, 1, v___y_2265_);
lean_ctor_set(v___x_2286_, 2, v___x_2285_);
lean_ctor_set(v___x_2286_, 3, v___y_2264_);
lean_ctor_set(v___x_2286_, 4, v___y_2271_);
lean_ctor_set(v___x_2286_, 5, v___y_2272_);
lean_ctor_set(v___x_2286_, 6, v___y_2268_);
lean_ctor_set(v___x_2286_, 7, v___y_2269_);
lean_ctor_set(v___x_2286_, 8, v___y_2270_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v___x_2286_);
v___x_2288_ = v___x_2283_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec_ref(v___y_2266_);
lean_dec_ref(v___y_2265_);
lean_dec_ref(v___y_2264_);
v_a_2291_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2280_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2280_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
v___jp_2299_:
{
lean_object* v___x_2316_; 
v___x_2316_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2210_, v___y_2311_, v___y_2307_, v___y_2302_, v___y_2314_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_dec_ref_known(v___x_2316_, 1);
v___y_2264_ = v___y_2309_;
v___y_2265_ = v___y_2300_;
v___y_2266_ = v___y_2310_;
v___y_2267_ = v___y_2301_;
v___y_2268_ = v___y_2312_;
v___y_2269_ = v___y_2313_;
v___y_2270_ = v___y_2303_;
v___y_2271_ = v___y_2304_;
v___y_2272_ = v___y_2305_;
v___y_2273_ = v___y_2306_;
v___y_2274_ = v___y_2308_;
v___y_2275_ = v___y_2315_;
v___y_2276_ = v___y_2311_;
v___y_2277_ = v___y_2307_;
v___y_2278_ = v___y_2302_;
v___y_2279_ = v___y_2314_;
goto v___jp_2263_;
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
lean_dec_ref(v___y_2315_);
lean_dec_ref(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
v___jp_2325_:
{
uint8_t v___x_2337_; 
v___x_2337_ = l_Lean_Expr_isForall(v___y_2328_);
if (v___x_2337_ == 0)
{
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2327_);
if (lean_obj_tag(v_mod_x3f_2208_) == 0)
{
v___y_2239_ = v___y_2326_;
v___y_2240_ = v___y_2328_;
v___y_2241_ = v___y_2329_;
v___y_2242_ = v___y_2331_;
v___y_2243_ = v___y_2332_;
v___y_2244_ = v___y_2333_;
v___y_2245_ = v___y_2334_;
v___y_2246_ = v___y_2335_;
v___y_2247_ = v___y_2336_;
goto v___jp_2238_;
}
else
{
lean_dec_ref_known(v_mod_x3f_2208_, 1);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
lean_dec_ref(v___y_2329_);
lean_dec_ref(v___y_2326_);
lean_dec_ref(v_params_2206_);
v___x_2338_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3);
v___x_2339_ = l_Lean_indentExpr(v___y_2328_);
v___x_2340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2340_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec_ref(v___y_2335_);
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2341_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
else
{
v___y_2239_ = v___y_2326_;
v___y_2240_ = v___y_2328_;
v___y_2241_ = v___y_2329_;
v___y_2242_ = v___y_2331_;
v___y_2243_ = v___y_2332_;
v___y_2244_ = v___y_2333_;
v___y_2245_ = v___y_2334_;
v___y_2246_ = v___y_2335_;
v___y_2247_ = v___y_2336_;
goto v___jp_2238_;
}
}
}
else
{
lean_object* v_extra_2350_; 
lean_dec_ref(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec_ref(v___y_2326_);
lean_dec(v_mod_x3f_2208_);
v_extra_2350_ = lean_ctor_get(v_params_2206_, 2);
lean_inc_ref(v_extra_2350_);
if (lean_obj_tag(v___y_2327_) == 2)
{
lean_object* v_config_2351_; lean_object* v_extensions_2352_; lean_object* v_extraInj_2353_; lean_object* v_extraFacts_2354_; lean_object* v_symPrios_2355_; lean_object* v_norm_2356_; lean_object* v_normProcs_2357_; lean_object* v_anchorRefs_x3f_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2413_; 
v_config_2351_ = lean_ctor_get(v_params_2206_, 0);
v_extensions_2352_ = lean_ctor_get(v_params_2206_, 1);
v_extraInj_2353_ = lean_ctor_get(v_params_2206_, 3);
v_extraFacts_2354_ = lean_ctor_get(v_params_2206_, 4);
v_symPrios_2355_ = lean_ctor_get(v_params_2206_, 5);
v_norm_2356_ = lean_ctor_get(v_params_2206_, 6);
v_normProcs_2357_ = lean_ctor_get(v_params_2206_, 7);
v_anchorRefs_x3f_2358_ = lean_ctor_get(v_params_2206_, 8);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_params_2206_);
if (v_isSharedCheck_2413_ == 0)
{
lean_object* v_unused_2414_; 
v_unused_2414_ = lean_ctor_get(v_params_2206_, 2);
lean_dec(v_unused_2414_);
v___x_2360_ = v_params_2206_;
v_isShared_2361_ = v_isSharedCheck_2413_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_anchorRefs_x3f_2358_);
lean_inc(v_normProcs_2357_);
lean_inc(v_norm_2356_);
lean_inc(v_symPrios_2355_);
lean_inc(v_extraFacts_2354_);
lean_inc(v_extraInj_2353_);
lean_inc(v_extensions_2352_);
lean_inc(v_config_2351_);
lean_dec(v_params_2206_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2413_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v_size_2362_; uint8_t v_gen_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2412_; 
v_size_2362_ = lean_ctor_get(v_extra_2350_, 2);
v_gen_2363_ = lean_ctor_get_uint8(v___y_2327_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___y_2327_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2365_ = v___y_2327_;
v_isShared_2366_ = v_isSharedCheck_2412_;
goto v_resetjp_2364_;
}
else
{
lean_dec(v___y_2327_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2412_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; 
v___x_2367_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2210_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v___x_2369_; 
lean_dec_ref_known(v___x_2367_, 1);
if (v_isShared_2366_ == 0)
{
lean_ctor_set_tag(v___x_2365_, 0);
v___x_2369_ = v___x_2365_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2403_, 0, v_gen_2363_);
v___x_2369_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; 
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2336_);
lean_inc_ref(v___y_2335_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v_size_2362_);
v___x_2370_ = lean_apply_7(v___y_2330_, v___x_2369_, v_size_2362_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, lean_box(0));
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v___x_2370_, 1);
v___x_2372_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2372_, 0, v_gen_2363_);
lean_inc(v___y_2336_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v_size_2362_);
v___x_2373_ = lean_apply_7(v___y_2330_, v___x_2372_, v_size_2362_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, lean_box(0));
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2386_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2386_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2386_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2381_; 
v___x_2378_ = l_Lean_PersistentArray_push___redArg(v_extra_2350_, v_a_2371_);
v___x_2379_ = l_Lean_PersistentArray_push___redArg(v___x_2378_, v_a_2374_);
if (v_isShared_2361_ == 0)
{
lean_ctor_set(v___x_2360_, 2, v___x_2379_);
v___x_2381_ = v___x_2360_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_config_2351_);
lean_ctor_set(v_reuseFailAlloc_2385_, 1, v_extensions_2352_);
lean_ctor_set(v_reuseFailAlloc_2385_, 2, v___x_2379_);
lean_ctor_set(v_reuseFailAlloc_2385_, 3, v_extraInj_2353_);
lean_ctor_set(v_reuseFailAlloc_2385_, 4, v_extraFacts_2354_);
lean_ctor_set(v_reuseFailAlloc_2385_, 5, v_symPrios_2355_);
lean_ctor_set(v_reuseFailAlloc_2385_, 6, v_norm_2356_);
lean_ctor_set(v_reuseFailAlloc_2385_, 7, v_normProcs_2357_);
lean_ctor_set(v_reuseFailAlloc_2385_, 8, v_anchorRefs_x3f_2358_);
v___x_2381_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
lean_object* v___x_2383_; 
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 0, v___x_2381_);
v___x_2383_ = v___x_2376_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
lean_dec(v_a_2371_);
lean_del_object(v___x_2360_);
lean_dec(v_anchorRefs_x3f_2358_);
lean_dec_ref(v_normProcs_2357_);
lean_dec_ref(v_norm_2356_);
lean_dec_ref(v_symPrios_2355_);
lean_dec_ref(v_extraFacts_2354_);
lean_dec_ref(v_extraInj_2353_);
lean_dec_ref(v_extensions_2352_);
lean_dec_ref(v_config_2351_);
lean_dec_ref(v_extra_2350_);
v_a_2387_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2373_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2373_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_del_object(v___x_2360_);
lean_dec(v_anchorRefs_x3f_2358_);
lean_dec_ref(v_normProcs_2357_);
lean_dec_ref(v_norm_2356_);
lean_dec_ref(v_symPrios_2355_);
lean_dec_ref(v_extraFacts_2354_);
lean_dec_ref(v_extraInj_2353_);
lean_dec_ref(v_extensions_2352_);
lean_dec_ref(v_config_2351_);
lean_dec_ref(v_extra_2350_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v___y_2330_);
v_a_2395_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2370_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2370_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_del_object(v___x_2365_);
lean_del_object(v___x_2360_);
lean_dec(v_anchorRefs_x3f_2358_);
lean_dec_ref(v_normProcs_2357_);
lean_dec_ref(v_norm_2356_);
lean_dec_ref(v_symPrios_2355_);
lean_dec_ref(v_extraFacts_2354_);
lean_dec_ref(v_extraInj_2353_);
lean_dec_ref(v_extensions_2352_);
lean_dec_ref(v_config_2351_);
lean_dec_ref(v_extra_2350_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v___y_2330_);
v_a_2404_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2367_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2367_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
}
else
{
switch(lean_obj_tag(v___y_2327_))
{
case 0:
{
lean_object* v_config_2415_; lean_object* v_extensions_2416_; lean_object* v_extraInj_2417_; lean_object* v_extraFacts_2418_; lean_object* v_symPrios_2419_; lean_object* v_norm_2420_; lean_object* v_normProcs_2421_; lean_object* v_anchorRefs_x3f_2422_; lean_object* v_size_2423_; 
v_config_2415_ = lean_ctor_get(v_params_2206_, 0);
lean_inc_ref(v_config_2415_);
v_extensions_2416_ = lean_ctor_get(v_params_2206_, 1);
lean_inc_ref(v_extensions_2416_);
v_extraInj_2417_ = lean_ctor_get(v_params_2206_, 3);
lean_inc_ref(v_extraInj_2417_);
v_extraFacts_2418_ = lean_ctor_get(v_params_2206_, 4);
lean_inc_ref(v_extraFacts_2418_);
v_symPrios_2419_ = lean_ctor_get(v_params_2206_, 5);
lean_inc_ref(v_symPrios_2419_);
v_norm_2420_ = lean_ctor_get(v_params_2206_, 6);
lean_inc_ref(v_norm_2420_);
v_normProcs_2421_ = lean_ctor_get(v_params_2206_, 7);
lean_inc_ref(v_normProcs_2421_);
v_anchorRefs_x3f_2422_ = lean_ctor_get(v_params_2206_, 8);
lean_inc(v_anchorRefs_x3f_2422_);
lean_dec_ref(v_params_2206_);
v_size_2423_ = lean_ctor_get(v_extra_2350_, 2);
lean_inc(v_size_2423_);
v___y_2300_ = v_extensions_2416_;
v___y_2301_ = v___y_2327_;
v___y_2302_ = v___y_2335_;
v___y_2303_ = v_anchorRefs_x3f_2422_;
v___y_2304_ = v_extraFacts_2418_;
v___y_2305_ = v_symPrios_2419_;
v___y_2306_ = v_extra_2350_;
v___y_2307_ = v___y_2334_;
v___y_2308_ = v_size_2423_;
v___y_2309_ = v_extraInj_2417_;
v___y_2310_ = v_config_2415_;
v___y_2311_ = v___y_2333_;
v___y_2312_ = v_norm_2420_;
v___y_2313_ = v_normProcs_2421_;
v___y_2314_ = v___y_2336_;
v___y_2315_ = v___y_2330_;
goto v___jp_2299_;
}
case 1:
{
lean_object* v_config_2424_; lean_object* v_extensions_2425_; lean_object* v_extraInj_2426_; lean_object* v_extraFacts_2427_; lean_object* v_symPrios_2428_; lean_object* v_norm_2429_; lean_object* v_normProcs_2430_; lean_object* v_anchorRefs_x3f_2431_; lean_object* v_size_2432_; 
v_config_2424_ = lean_ctor_get(v_params_2206_, 0);
lean_inc_ref(v_config_2424_);
v_extensions_2425_ = lean_ctor_get(v_params_2206_, 1);
lean_inc_ref(v_extensions_2425_);
v_extraInj_2426_ = lean_ctor_get(v_params_2206_, 3);
lean_inc_ref(v_extraInj_2426_);
v_extraFacts_2427_ = lean_ctor_get(v_params_2206_, 4);
lean_inc_ref(v_extraFacts_2427_);
v_symPrios_2428_ = lean_ctor_get(v_params_2206_, 5);
lean_inc_ref(v_symPrios_2428_);
v_norm_2429_ = lean_ctor_get(v_params_2206_, 6);
lean_inc_ref(v_norm_2429_);
v_normProcs_2430_ = lean_ctor_get(v_params_2206_, 7);
lean_inc_ref(v_normProcs_2430_);
v_anchorRefs_x3f_2431_ = lean_ctor_get(v_params_2206_, 8);
lean_inc(v_anchorRefs_x3f_2431_);
lean_dec_ref(v_params_2206_);
v_size_2432_ = lean_ctor_get(v_extra_2350_, 2);
lean_inc(v_size_2432_);
v___y_2300_ = v_extensions_2425_;
v___y_2301_ = v___y_2327_;
v___y_2302_ = v___y_2335_;
v___y_2303_ = v_anchorRefs_x3f_2431_;
v___y_2304_ = v_extraFacts_2427_;
v___y_2305_ = v_symPrios_2428_;
v___y_2306_ = v_extra_2350_;
v___y_2307_ = v___y_2334_;
v___y_2308_ = v_size_2432_;
v___y_2309_ = v_extraInj_2426_;
v___y_2310_ = v_config_2424_;
v___y_2311_ = v___y_2333_;
v___y_2312_ = v_norm_2429_;
v___y_2313_ = v_normProcs_2430_;
v___y_2314_ = v___y_2336_;
v___y_2315_ = v___y_2330_;
goto v___jp_2299_;
}
default: 
{
lean_object* v_config_2433_; lean_object* v_extensions_2434_; lean_object* v_extraInj_2435_; lean_object* v_extraFacts_2436_; lean_object* v_symPrios_2437_; lean_object* v_norm_2438_; lean_object* v_normProcs_2439_; lean_object* v_anchorRefs_x3f_2440_; lean_object* v_size_2441_; 
v_config_2433_ = lean_ctor_get(v_params_2206_, 0);
lean_inc_ref(v_config_2433_);
v_extensions_2434_ = lean_ctor_get(v_params_2206_, 1);
lean_inc_ref(v_extensions_2434_);
v_extraInj_2435_ = lean_ctor_get(v_params_2206_, 3);
lean_inc_ref(v_extraInj_2435_);
v_extraFacts_2436_ = lean_ctor_get(v_params_2206_, 4);
lean_inc_ref(v_extraFacts_2436_);
v_symPrios_2437_ = lean_ctor_get(v_params_2206_, 5);
lean_inc_ref(v_symPrios_2437_);
v_norm_2438_ = lean_ctor_get(v_params_2206_, 6);
lean_inc_ref(v_norm_2438_);
v_normProcs_2439_ = lean_ctor_get(v_params_2206_, 7);
lean_inc_ref(v_normProcs_2439_);
v_anchorRefs_x3f_2440_ = lean_ctor_get(v_params_2206_, 8);
lean_inc(v_anchorRefs_x3f_2440_);
lean_dec_ref(v_params_2206_);
v_size_2441_ = lean_ctor_get(v_extra_2350_, 2);
lean_inc(v_size_2441_);
v___y_2264_ = v_extraInj_2435_;
v___y_2265_ = v_extensions_2434_;
v___y_2266_ = v_config_2433_;
v___y_2267_ = v___y_2327_;
v___y_2268_ = v_norm_2438_;
v___y_2269_ = v_normProcs_2439_;
v___y_2270_ = v_anchorRefs_x3f_2440_;
v___y_2271_ = v_extraFacts_2436_;
v___y_2272_ = v_symPrios_2437_;
v___y_2273_ = v_extra_2350_;
v___y_2274_ = v_size_2441_;
v___y_2275_ = v___y_2330_;
v___y_2276_ = v___y_2333_;
v___y_2277_ = v___y_2334_;
v___y_2278_ = v___y_2335_;
v___y_2279_ = v___y_2336_;
goto v___jp_2263_;
}
}
}
}
}
v___jp_2442_:
{
lean_object* v___x_2450_; uint8_t v___x_2451_; lean_object* v___x_2452_; lean_object* v___f_2453_; lean_object* v___x_2454_; 
v___x_2450_ = lean_box(0);
v___x_2451_ = 1;
v___x_2452_ = lean_box(v___x_2451_);
lean_inc(v_p_2207_);
v___f_2453_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2453_, 0, v_p_2207_);
lean_closure_set(v___f_2453_, 1, v_term_2209_);
lean_closure_set(v___f_2453_, 2, v___x_2450_);
lean_closure_set(v___f_2453_, 3, v___x_2452_);
v___x_2454_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_2453_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2499_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2457_ = v___x_2454_;
v_isShared_2458_ = v_isSharedCheck_2499_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2454_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2499_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
if (lean_obj_tag(v_a_2455_) == 1)
{
lean_object* v_val_2459_; lean_object* v_fst_2460_; lean_object* v_snd_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___f_2464_; lean_object* v___x_2465_; 
lean_del_object(v___x_2457_);
v_val_2459_ = lean_ctor_get(v_a_2455_, 0);
lean_inc(v_val_2459_);
lean_dec_ref_known(v_a_2455_, 1);
v_fst_2460_ = lean_ctor_get(v_val_2459_, 0);
lean_inc_n(v_fst_2460_, 2);
v_snd_2461_ = lean_ctor_get(v_val_2459_, 1);
lean_inc_n(v_snd_2461_, 3);
lean_dec(v_val_2459_);
v___x_2462_ = lean_box(v___x_2451_);
v___x_2463_ = lean_box(v_minIndexable_2210_);
lean_inc_ref(v_params_2206_);
v___f_2464_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed), 13, 6);
lean_closure_set(v___f_2464_, 0, v_params_2206_);
lean_closure_set(v___f_2464_, 1, v_p_2207_);
lean_closure_set(v___f_2464_, 2, v_fst_2460_);
lean_closure_set(v___f_2464_, 3, v_snd_2461_);
lean_closure_set(v___f_2464_, 4, v___x_2462_);
lean_closure_set(v___f_2464_, 5, v___x_2463_);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
v___x_2465_ = lean_infer_type(v_snd_2461_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2467_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc_n(v_a_2466_, 2);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2467_ = l_Lean_Meta_isProp(v_a_2466_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; uint8_t v___x_2469_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2467_, 1);
v___x_2469_ = lean_unbox(v_a_2468_);
lean_dec(v_a_2468_);
if (v___x_2469_ == 0)
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v_a_2466_);
lean_dec_ref(v___f_2464_);
lean_dec(v_snd_2461_);
lean_dec(v_fst_2460_);
lean_dec(v_kind_2443_);
lean_dec(v_mod_x3f_2208_);
lean_dec_ref(v_params_2206_);
v___x_2470_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5);
v___x_2471_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2470_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
lean_dec_ref(v___y_2448_);
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
else
{
v___y_2326_ = v_snd_2461_;
v___y_2327_ = v_kind_2443_;
v___y_2328_ = v_a_2466_;
v___y_2329_ = v_fst_2460_;
v___y_2330_ = v___f_2464_;
v___y_2331_ = v___y_2444_;
v___y_2332_ = v___y_2445_;
v___y_2333_ = v___y_2446_;
v___y_2334_ = v___y_2447_;
v___y_2335_ = v___y_2448_;
v___y_2336_ = v___y_2449_;
goto v___jp_2325_;
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_a_2466_);
lean_dec_ref(v___f_2464_);
lean_dec(v_snd_2461_);
lean_dec(v_fst_2460_);
lean_dec_ref(v___y_2448_);
lean_dec(v_kind_2443_);
lean_dec(v_mod_x3f_2208_);
lean_dec_ref(v_params_2206_);
v_a_2480_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2467_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2467_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec_ref(v___f_2464_);
lean_dec(v_snd_2461_);
lean_dec(v_fst_2460_);
lean_dec_ref(v___y_2448_);
lean_dec(v_kind_2443_);
lean_dec(v_mod_x3f_2208_);
lean_dec_ref(v_params_2206_);
v_a_2488_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2465_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2465_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
else
{
lean_object* v___x_2497_; 
lean_dec(v_a_2455_);
lean_dec_ref(v___y_2448_);
lean_dec(v_kind_2443_);
lean_dec(v_mod_x3f_2208_);
lean_dec(v_p_2207_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v_params_2206_);
v___x_2497_ = v___x_2457_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_params_2206_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec_ref(v___y_2448_);
lean_dec(v_kind_2443_);
lean_dec(v_mod_x3f_2208_);
lean_dec(v_p_2207_);
lean_dec_ref(v_params_2206_);
v_a_2500_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2454_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2454_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
v___jp_2508_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
v___x_2515_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2516_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2515_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec_ref(v___y_2513_);
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2519_ = v___x_2516_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_dec(v___x_2516_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2517_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
v___jp_2525_:
{
lean_object* v___x_2532_; 
v___x_2532_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_kind_2443_ = v___x_2532_;
v___y_2444_ = v___y_2526_;
v___y_2445_ = v___y_2527_;
v___y_2446_ = v___y_2528_;
v___y_2447_ = v___y_2529_;
v___y_2448_ = v___y_2530_;
v___y_2449_ = v___y_2531_;
goto v___jp_2442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object* v_params_2591_, lean_object* v_p_2592_, lean_object* v_mod_x3f_2593_, lean_object* v_term_2594_, lean_object* v_minIndexable_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
uint8_t v_minIndexable_boxed_2603_; lean_object* v_res_2604_; 
v_minIndexable_boxed_2603_ = lean_unbox(v_minIndexable_2595_);
v_res_2604_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_2591_, v_p_2592_, v_mod_x3f_2593_, v_term_2594_, v_minIndexable_boxed_2603_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
lean_dec(v_a_2601_);
lean_dec_ref(v_a_2600_);
lean_dec(v_a_2599_);
lean_dec_ref(v_a_2598_);
lean_dec(v_a_2597_);
lean_dec_ref(v_a_2596_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(lean_object* v_00_u03b1_2605_, lean_object* v_msg_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object* v_00_u03b1_2615_, lean_object* v_msg_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(v_00_u03b1_2615_, v_msg_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(lean_object* v_msgData_2625_, lean_object* v_macroStack_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___redArg(v_msgData_2625_, v_macroStack_2626_, v___y_2631_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1___boxed(lean_object* v_msgData_2635_, lean_object* v_macroStack_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
lean_object* v_res_2644_; 
v_res_2644_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1_spec__1(v_msgData_2635_, v_macroStack_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object* v_params_2645_, lean_object* v_val_2646_, lean_object* v___x_2647_, lean_object* v_____r_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v___x_2656_; lean_object* v_ext_2657_; lean_object* v_toEnvExtension_2658_; lean_object* v_env_2659_; lean_object* v_config_2660_; lean_object* v_extensions_2661_; lean_object* v_extra_2662_; lean_object* v_extraInj_2663_; lean_object* v_extraFacts_2664_; lean_object* v_symPrios_2665_; lean_object* v_norm_2666_; lean_object* v_normProcs_2667_; lean_object* v_anchorRefs_x3f_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2680_; 
v___x_2656_ = lean_st_ref_get(v___y_2654_);
v_ext_2657_ = lean_ctor_get(v_val_2646_, 1);
v_toEnvExtension_2658_ = lean_ctor_get(v_ext_2657_, 0);
v_env_2659_ = lean_ctor_get(v___x_2656_, 0);
lean_inc_ref(v_env_2659_);
lean_dec(v___x_2656_);
v_config_2660_ = lean_ctor_get(v_params_2645_, 0);
v_extensions_2661_ = lean_ctor_get(v_params_2645_, 1);
v_extra_2662_ = lean_ctor_get(v_params_2645_, 2);
v_extraInj_2663_ = lean_ctor_get(v_params_2645_, 3);
v_extraFacts_2664_ = lean_ctor_get(v_params_2645_, 4);
v_symPrios_2665_ = lean_ctor_get(v_params_2645_, 5);
v_norm_2666_ = lean_ctor_get(v_params_2645_, 6);
v_normProcs_2667_ = lean_ctor_get(v_params_2645_, 7);
v_anchorRefs_x3f_2668_ = lean_ctor_get(v_params_2645_, 8);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_params_2645_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2670_ = v_params_2645_;
v_isShared_2671_ = v_isSharedCheck_2680_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_anchorRefs_x3f_2668_);
lean_inc(v_normProcs_2667_);
lean_inc(v_norm_2666_);
lean_inc(v_symPrios_2665_);
lean_inc(v_extraFacts_2664_);
lean_inc(v_extraInj_2663_);
lean_inc(v_extra_2662_);
lean_inc(v_extensions_2661_);
lean_inc(v_config_2660_);
lean_dec(v_params_2645_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2680_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v_asyncMode_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2676_; 
v_asyncMode_2672_ = lean_ctor_get(v_toEnvExtension_2658_, 2);
v___x_2673_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2647_, v_val_2646_, v_env_2659_, v_asyncMode_2672_);
v___x_2674_ = lean_array_push(v_extensions_2661_, v___x_2673_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 1, v___x_2674_);
v___x_2676_ = v___x_2670_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_config_2660_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v___x_2674_);
lean_ctor_set(v_reuseFailAlloc_2679_, 2, v_extra_2662_);
lean_ctor_set(v_reuseFailAlloc_2679_, 3, v_extraInj_2663_);
lean_ctor_set(v_reuseFailAlloc_2679_, 4, v_extraFacts_2664_);
lean_ctor_set(v_reuseFailAlloc_2679_, 5, v_symPrios_2665_);
lean_ctor_set(v_reuseFailAlloc_2679_, 6, v_norm_2666_);
lean_ctor_set(v_reuseFailAlloc_2679_, 7, v_normProcs_2667_);
lean_ctor_set(v_reuseFailAlloc_2679_, 8, v_anchorRefs_x3f_2668_);
v___x_2676_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2676_);
v___x_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
return v___x_2678_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object* v_params_2681_, lean_object* v_val_2682_, lean_object* v___x_2683_, lean_object* v_____r_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_2681_, v_val_2682_, v___x_2683_, v_____r_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec_ref(v___x_2683_);
lean_dec_ref(v_val_2682_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object* v_p_2693_, lean_object* v_id_2694_, uint8_t v_minIndexable_2695_, lean_object* v_as_x27_2696_, lean_object* v_b_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
if (lean_obj_tag(v_as_x27_2696_) == 0)
{
lean_object* v___x_2703_; 
lean_dec(v_id_2694_);
v___x_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_b_2697_);
return v___x_2703_;
}
else
{
lean_object* v_head_2704_; lean_object* v_tail_2705_; lean_object* v_toCold_2706_; lean_object* v_currRecDepth_2707_; lean_object* v_ref_2708_; uint8_t v_diag_2709_; uint8_t v_suppressElabErrors_2710_; uint8_t v___x_2711_; lean_object* v___x_2712_; lean_object* v_ref_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_head_2704_ = lean_ctor_get(v_as_x27_2696_, 0);
v_tail_2705_ = lean_ctor_get(v_as_x27_2696_, 1);
v_toCold_2706_ = lean_ctor_get(v___y_2700_, 0);
v_currRecDepth_2707_ = lean_ctor_get(v___y_2700_, 1);
v_ref_2708_ = lean_ctor_get(v___y_2700_, 2);
v_diag_2709_ = lean_ctor_get_uint8(v___y_2700_, sizeof(void*)*3);
v_suppressElabErrors_2710_ = lean_ctor_get_uint8(v___y_2700_, sizeof(void*)*3 + 1);
v___x_2711_ = 0;
v___x_2712_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_2713_ = l_Lean_replaceRef(v_p_2693_, v_ref_2708_);
lean_inc(v_currRecDepth_2707_);
lean_inc_ref(v_toCold_2706_);
v___x_2714_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2714_, 0, v_toCold_2706_);
lean_ctor_set(v___x_2714_, 1, v_currRecDepth_2707_);
lean_ctor_set(v___x_2714_, 2, v_ref_2713_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*3, v_diag_2709_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*3 + 1, v_suppressElabErrors_2710_);
lean_inc(v_head_2704_);
lean_inc(v_id_2694_);
v___x_2715_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_2697_, v_id_2694_, v_head_2704_, v___x_2712_, v_minIndexable_2695_, v___x_2711_, v___x_2711_, v___y_2698_, v___y_2699_, v___x_2714_, v___y_2701_);
lean_dec_ref_known(v___x_2714_, 3);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; 
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc(v_a_2716_);
lean_dec_ref_known(v___x_2715_, 1);
v_as_x27_2696_ = v_tail_2705_;
v_b_2697_ = v_a_2716_;
goto _start;
}
else
{
lean_dec(v_id_2694_);
return v___x_2715_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object* v_p_2718_, lean_object* v_id_2719_, lean_object* v_minIndexable_2720_, lean_object* v_as_x27_2721_, lean_object* v_b_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
uint8_t v_minIndexable_boxed_2728_; lean_object* v_res_2729_; 
v_minIndexable_boxed_2728_ = lean_unbox(v_minIndexable_2720_);
v_res_2729_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_2718_, v_id_2719_, v_minIndexable_boxed_2728_, v_as_x27_2721_, v_b_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v_as_x27_2721_);
lean_dec(v_p_2718_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object* v_k_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_){
_start:
{
if (lean_obj_tag(v_a_2731_) == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = l_List_reverse___redArg(v_a_2732_);
return v___x_2733_;
}
else
{
lean_object* v_head_2734_; lean_object* v_tail_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2746_; 
v_head_2734_ = lean_ctor_get(v_a_2731_, 0);
v_tail_2735_ = lean_ctor_get(v_a_2731_, 1);
v_isSharedCheck_2746_ = !lean_is_exclusive(v_a_2731_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2737_ = v_a_2731_;
v_isShared_2738_ = v_isSharedCheck_2746_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_tail_2735_);
lean_inc(v_head_2734_);
lean_dec(v_a_2731_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2746_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v_kind_2739_; uint8_t v___x_2740_; 
v_kind_2739_ = lean_ctor_get(v_head_2734_, 6);
v___x_2740_ = l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(v_kind_2739_, v_k_2730_);
if (v___x_2740_ == 0)
{
lean_del_object(v___x_2737_);
lean_dec(v_head_2734_);
v_a_2731_ = v_tail_2735_;
goto _start;
}
else
{
lean_object* v___x_2743_; 
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 1, v_a_2732_);
v___x_2743_ = v___x_2737_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_head_2734_);
lean_ctor_set(v_reuseFailAlloc_2745_, 1, v_a_2732_);
v___x_2743_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
v_a_2731_ = v_tail_2735_;
v_a_2732_ = v___x_2743_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object* v_k_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v_k_2747_, v_a_2748_, v_a_2749_);
lean_dec(v_k_2747_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object* v_ref_2751_, lean_object* v_msg_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_toCold_2760_; lean_object* v_currRecDepth_2761_; lean_object* v_ref_2762_; uint8_t v_diag_2763_; uint8_t v_suppressElabErrors_2764_; lean_object* v_ref_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v_toCold_2760_ = lean_ctor_get(v___y_2757_, 0);
v_currRecDepth_2761_ = lean_ctor_get(v___y_2757_, 1);
v_ref_2762_ = lean_ctor_get(v___y_2757_, 2);
v_diag_2763_ = lean_ctor_get_uint8(v___y_2757_, sizeof(void*)*3);
v_suppressElabErrors_2764_ = lean_ctor_get_uint8(v___y_2757_, sizeof(void*)*3 + 1);
v_ref_2765_ = l_Lean_replaceRef(v_ref_2751_, v_ref_2762_);
lean_inc(v_currRecDepth_2761_);
lean_inc_ref(v_toCold_2760_);
v___x_2766_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2766_, 0, v_toCold_2760_);
lean_ctor_set(v___x_2766_, 1, v_currRecDepth_2761_);
lean_ctor_set(v___x_2766_, 2, v_ref_2765_);
lean_ctor_set_uint8(v___x_2766_, sizeof(void*)*3, v_diag_2763_);
lean_ctor_set_uint8(v___x_2766_, sizeof(void*)*3 + 1, v_suppressElabErrors_2764_);
v___x_2767_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v_msg_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___x_2766_, v___y_2758_);
lean_dec_ref_known(v___x_2766_, 3);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object* v_ref_2768_, lean_object* v_msg_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_2768_, v_msg_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v_ref_2768_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object* v_p_2778_, lean_object* v_id_2779_, uint8_t v_minIndexable_2780_, lean_object* v_as_x27_2781_, lean_object* v_b_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_){
_start:
{
if (lean_obj_tag(v_as_x27_2781_) == 0)
{
lean_object* v___x_2788_; 
lean_dec(v_id_2779_);
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v_b_2782_);
return v___x_2788_;
}
else
{
lean_object* v_head_2789_; lean_object* v_tail_2790_; lean_object* v_toCold_2791_; lean_object* v_currRecDepth_2792_; lean_object* v_ref_2793_; uint8_t v_diag_2794_; uint8_t v_suppressElabErrors_2795_; uint8_t v___x_2796_; uint8_t v___x_2797_; lean_object* v___x_2798_; lean_object* v_ref_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_head_2789_ = lean_ctor_get(v_as_x27_2781_, 0);
v_tail_2790_ = lean_ctor_get(v_as_x27_2781_, 1);
v_toCold_2791_ = lean_ctor_get(v___y_2785_, 0);
v_currRecDepth_2792_ = lean_ctor_get(v___y_2785_, 1);
v_ref_2793_ = lean_ctor_get(v___y_2785_, 2);
v_diag_2794_ = lean_ctor_get_uint8(v___y_2785_, sizeof(void*)*3);
v_suppressElabErrors_2795_ = lean_ctor_get_uint8(v___y_2785_, sizeof(void*)*3 + 1);
v___x_2796_ = 0;
v___x_2797_ = 1;
v___x_2798_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_2799_ = l_Lean_replaceRef(v_p_2778_, v_ref_2793_);
lean_inc(v_currRecDepth_2792_);
lean_inc_ref(v_toCold_2791_);
v___x_2800_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2800_, 0, v_toCold_2791_);
lean_ctor_set(v___x_2800_, 1, v_currRecDepth_2792_);
lean_ctor_set(v___x_2800_, 2, v_ref_2799_);
lean_ctor_set_uint8(v___x_2800_, sizeof(void*)*3, v_diag_2794_);
lean_ctor_set_uint8(v___x_2800_, sizeof(void*)*3 + 1, v_suppressElabErrors_2795_);
lean_inc(v_head_2789_);
lean_inc(v_id_2779_);
v___x_2801_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_2782_, v_id_2779_, v_head_2789_, v___x_2798_, v_minIndexable_2780_, v___x_2796_, v___x_2797_, v___y_2783_, v___y_2784_, v___x_2800_, v___y_2786_);
lean_dec_ref_known(v___x_2800_, 3);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2801_, 1);
v_as_x27_2781_ = v_tail_2790_;
v_b_2782_ = v_a_2802_;
goto _start;
}
else
{
lean_dec(v_id_2779_);
return v___x_2801_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object* v_p_2804_, lean_object* v_id_2805_, lean_object* v_minIndexable_2806_, lean_object* v_as_x27_2807_, lean_object* v_b_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v_minIndexable_boxed_2814_; lean_object* v_res_2815_; 
v_minIndexable_boxed_2814_ = lean_unbox(v_minIndexable_2806_);
v_res_2815_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_2804_, v_id_2805_, v_minIndexable_boxed_2814_, v_as_x27_2807_, v_b_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v_as_x27_2807_);
lean_dec(v_p_2804_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(lean_object* v_x_2816_){
_start:
{
if (lean_obj_tag(v_x_2816_) == 0)
{
lean_object* v___x_2817_; 
v___x_2817_ = lean_box(0);
return v___x_2817_;
}
else
{
lean_object* v_head_2818_; lean_object* v_tail_2819_; lean_object* v_fst_2820_; uint8_t v___x_2821_; 
v_head_2818_ = lean_ctor_get(v_x_2816_, 0);
v_tail_2819_ = lean_ctor_get(v_x_2816_, 1);
v_fst_2820_ = lean_ctor_get(v_head_2818_, 0);
v___x_2821_ = l_Lean_isPrivateName(v_fst_2820_);
if (v___x_2821_ == 0)
{
v_x_2816_ = v_tail_2819_;
goto _start;
}
else
{
lean_object* v___x_2823_; 
lean_inc(v_head_2818_);
v___x_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2823_, 0, v_head_2818_);
return v___x_2823_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16___boxed(lean_object* v_x_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(v_x_2824_);
lean_dec(v_x_2824_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(lean_object* v_ref_2826_, lean_object* v_msgData_2827_, uint8_t v_severity_2828_, uint8_t v_isSilent_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
uint8_t v___y_2836_; lean_object* v___y_2837_; uint8_t v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v_currNamespace_2843_; lean_object* v_openDecls_2844_; lean_object* v___y_2845_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; uint8_t v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; uint8_t v___y_2877_; uint8_t v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; uint8_t v___y_2902_; lean_object* v___y_2903_; uint8_t v___y_2904_; uint8_t v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; uint8_t v___y_2915_; lean_object* v___y_2916_; uint8_t v___y_2917_; lean_object* v___y_2918_; uint8_t v___y_2919_; uint8_t v___x_2924_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; uint8_t v___y_2932_; uint8_t v___y_2933_; uint8_t v___y_2934_; uint8_t v___y_2936_; uint8_t v___x_2954_; 
v___x_2924_ = 2;
v___x_2954_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2828_, v___x_2924_);
if (v___x_2954_ == 0)
{
v___y_2936_ = v___x_2954_;
goto v___jp_2935_;
}
else
{
uint8_t v___x_2955_; 
lean_inc_ref(v_msgData_2827_);
v___x_2955_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2827_);
v___y_2936_ = v___x_2955_;
goto v___jp_2935_;
}
v___jp_2835_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_env_2850_; lean_object* v_nextMacroScope_2851_; lean_object* v_ngen_2852_; lean_object* v_auxDeclNGen_2853_; lean_object* v_traceState_2854_; lean_object* v_cache_2855_; lean_object* v_messages_2856_; lean_object* v_infoState_2857_; lean_object* v_snapshotTasks_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2869_; 
lean_inc(v_openDecls_2844_);
lean_inc(v_currNamespace_2843_);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v_currNamespace_2843_);
lean_ctor_set(v___x_2846_, 1, v_openDecls_2844_);
v___x_2847_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2846_);
lean_ctor_set(v___x_2847_, 1, v___y_2841_);
lean_inc_ref(v___y_2837_);
lean_inc_ref(v___y_2842_);
v___x_2848_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2848_, 0, v___y_2842_);
lean_ctor_set(v___x_2848_, 1, v___y_2839_);
lean_ctor_set(v___x_2848_, 2, v___y_2840_);
lean_ctor_set(v___x_2848_, 3, v___y_2837_);
lean_ctor_set(v___x_2848_, 4, v___x_2847_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*5, v___y_2836_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*5 + 1, v___y_2838_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*5 + 2, v_isSilent_2829_);
v___x_2849_ = lean_st_ref_take(v___y_2845_);
v_env_2850_ = lean_ctor_get(v___x_2849_, 0);
v_nextMacroScope_2851_ = lean_ctor_get(v___x_2849_, 1);
v_ngen_2852_ = lean_ctor_get(v___x_2849_, 2);
v_auxDeclNGen_2853_ = lean_ctor_get(v___x_2849_, 3);
v_traceState_2854_ = lean_ctor_get(v___x_2849_, 4);
v_cache_2855_ = lean_ctor_get(v___x_2849_, 5);
v_messages_2856_ = lean_ctor_get(v___x_2849_, 6);
v_infoState_2857_ = lean_ctor_get(v___x_2849_, 7);
v_snapshotTasks_2858_ = lean_ctor_get(v___x_2849_, 8);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2860_ = v___x_2849_;
v_isShared_2861_ = v_isSharedCheck_2869_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_snapshotTasks_2858_);
lean_inc(v_infoState_2857_);
lean_inc(v_messages_2856_);
lean_inc(v_cache_2855_);
lean_inc(v_traceState_2854_);
lean_inc(v_auxDeclNGen_2853_);
lean_inc(v_ngen_2852_);
lean_inc(v_nextMacroScope_2851_);
lean_inc(v_env_2850_);
lean_dec(v___x_2849_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2869_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2865_; 
v___x_2862_ = lean_box(0);
v___x_2863_ = l_Lean_MessageLog_add(v___x_2848_, v_messages_2856_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 6, v___x_2863_);
v___x_2865_ = v___x_2860_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_env_2850_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_nextMacroScope_2851_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_ngen_2852_);
lean_ctor_set(v_reuseFailAlloc_2868_, 3, v_auxDeclNGen_2853_);
lean_ctor_set(v_reuseFailAlloc_2868_, 4, v_traceState_2854_);
lean_ctor_set(v_reuseFailAlloc_2868_, 5, v_cache_2855_);
lean_ctor_set(v_reuseFailAlloc_2868_, 6, v___x_2863_);
lean_ctor_set(v_reuseFailAlloc_2868_, 7, v_infoState_2857_);
lean_ctor_set(v_reuseFailAlloc_2868_, 8, v_snapshotTasks_2858_);
v___x_2865_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2866_ = lean_st_ref_put(v___y_2845_, v___x_2865_);
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2862_);
return v___x_2867_;
}
}
}
v___jp_2870_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2896_; 
v___x_2881_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2827_);
v___x_2882_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_2881_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2885_ = v___x_2882_;
v_isShared_2886_ = v_isSharedCheck_2896_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2882_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2896_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_inc_ref_n(v___y_2876_, 2);
v___x_2887_ = l_Lean_FileMap_toPosition(v___y_2876_, v___y_2875_);
lean_dec(v___y_2875_);
v___x_2888_ = l_Lean_FileMap_toPosition(v___y_2876_, v___y_2880_);
lean_dec(v___y_2880_);
v___x_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2888_);
v___x_2890_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_2878_ == 0)
{
lean_del_object(v___x_2885_);
lean_dec_ref(v___y_2871_);
v___y_2836_ = v___y_2874_;
v___y_2837_ = v___x_2890_;
v___y_2838_ = v___y_2877_;
v___y_2839_ = v___x_2887_;
v___y_2840_ = v___x_2889_;
v___y_2841_ = v_a_2883_;
v___y_2842_ = v___y_2879_;
v_currNamespace_2843_ = v___y_2873_;
v_openDecls_2844_ = v___y_2872_;
v___y_2845_ = v___y_2833_;
goto v___jp_2835_;
}
else
{
uint8_t v___x_2891_; 
lean_inc(v_a_2883_);
v___x_2891_ = l_Lean_MessageData_hasTag(v___y_2871_, v_a_2883_);
if (v___x_2891_ == 0)
{
lean_object* v___x_2892_; lean_object* v___x_2894_; 
lean_dec_ref_known(v___x_2889_, 1);
lean_dec_ref(v___x_2887_);
lean_dec(v_a_2883_);
v___x_2892_ = lean_box(0);
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 0, v___x_2892_);
v___x_2894_ = v___x_2885_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
else
{
lean_del_object(v___x_2885_);
v___y_2836_ = v___y_2874_;
v___y_2837_ = v___x_2890_;
v___y_2838_ = v___y_2877_;
v___y_2839_ = v___x_2887_;
v___y_2840_ = v___x_2889_;
v___y_2841_ = v_a_2883_;
v___y_2842_ = v___y_2879_;
v_currNamespace_2843_ = v___y_2873_;
v_openDecls_2844_ = v___y_2872_;
v___y_2845_ = v___y_2833_;
goto v___jp_2835_;
}
}
}
}
v___jp_2897_:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_Lean_Syntax_getTailPos_x3f(v___y_2903_, v___y_2902_);
lean_dec(v___y_2903_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_inc(v___y_2907_);
v___y_2871_ = v___y_2898_;
v___y_2872_ = v___y_2899_;
v___y_2873_ = v___y_2900_;
v___y_2874_ = v___y_2902_;
v___y_2875_ = v___y_2907_;
v___y_2876_ = v___y_2901_;
v___y_2877_ = v___y_2904_;
v___y_2878_ = v___y_2905_;
v___y_2879_ = v___y_2906_;
v___y_2880_ = v___y_2907_;
goto v___jp_2870_;
}
else
{
lean_object* v_val_2909_; 
v_val_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_val_2909_);
lean_dec_ref_known(v___x_2908_, 1);
v___y_2871_ = v___y_2898_;
v___y_2872_ = v___y_2899_;
v___y_2873_ = v___y_2900_;
v___y_2874_ = v___y_2902_;
v___y_2875_ = v___y_2907_;
v___y_2876_ = v___y_2901_;
v___y_2877_ = v___y_2904_;
v___y_2878_ = v___y_2905_;
v___y_2879_ = v___y_2906_;
v___y_2880_ = v_val_2909_;
goto v___jp_2870_;
}
}
v___jp_2910_:
{
lean_object* v_ref_2920_; lean_object* v___x_2921_; 
v_ref_2920_ = l_Lean_replaceRef(v_ref_2826_, v___y_2914_);
v___x_2921_ = l_Lean_Syntax_getPos_x3f(v_ref_2920_, v___y_2915_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v___x_2922_; 
v___x_2922_ = lean_unsigned_to_nat(0u);
v___y_2898_ = v___y_2911_;
v___y_2899_ = v___y_2912_;
v___y_2900_ = v___y_2913_;
v___y_2901_ = v___y_2916_;
v___y_2902_ = v___y_2915_;
v___y_2903_ = v_ref_2920_;
v___y_2904_ = v___y_2919_;
v___y_2905_ = v___y_2917_;
v___y_2906_ = v___y_2918_;
v___y_2907_ = v___x_2922_;
goto v___jp_2897_;
}
else
{
lean_object* v_val_2923_; 
v_val_2923_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_val_2923_);
lean_dec_ref_known(v___x_2921_, 1);
v___y_2898_ = v___y_2911_;
v___y_2899_ = v___y_2912_;
v___y_2900_ = v___y_2913_;
v___y_2901_ = v___y_2916_;
v___y_2902_ = v___y_2915_;
v___y_2903_ = v_ref_2920_;
v___y_2904_ = v___y_2919_;
v___y_2905_ = v___y_2917_;
v___y_2906_ = v___y_2918_;
v___y_2907_ = v_val_2923_;
goto v___jp_2897_;
}
}
v___jp_2925_:
{
if (v___y_2934_ == 0)
{
v___y_2911_ = v___y_2926_;
v___y_2912_ = v___y_2928_;
v___y_2913_ = v___y_2930_;
v___y_2914_ = v___y_2931_;
v___y_2915_ = v___y_2932_;
v___y_2916_ = v___y_2927_;
v___y_2917_ = v___y_2933_;
v___y_2918_ = v___y_2929_;
v___y_2919_ = v_severity_2828_;
goto v___jp_2910_;
}
else
{
v___y_2911_ = v___y_2926_;
v___y_2912_ = v___y_2928_;
v___y_2913_ = v___y_2930_;
v___y_2914_ = v___y_2931_;
v___y_2915_ = v___y_2932_;
v___y_2916_ = v___y_2927_;
v___y_2917_ = v___y_2933_;
v___y_2918_ = v___y_2929_;
v___y_2919_ = v___x_2924_;
goto v___jp_2910_;
}
}
v___jp_2935_:
{
if (v___y_2936_ == 0)
{
lean_object* v_toCold_2937_; lean_object* v_ref_2938_; uint8_t v_suppressElabErrors_2939_; lean_object* v_fileName_2940_; lean_object* v_fileMap_2941_; lean_object* v_options_2942_; lean_object* v_currNamespace_2943_; lean_object* v_openDecls_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___f_2947_; uint8_t v___x_2948_; uint8_t v___x_2949_; 
v_toCold_2937_ = lean_ctor_get(v___y_2832_, 0);
v_ref_2938_ = lean_ctor_get(v___y_2832_, 2);
v_suppressElabErrors_2939_ = lean_ctor_get_uint8(v___y_2832_, sizeof(void*)*3 + 1);
v_fileName_2940_ = lean_ctor_get(v_toCold_2937_, 0);
v_fileMap_2941_ = lean_ctor_get(v_toCold_2937_, 1);
v_options_2942_ = lean_ctor_get(v_toCold_2937_, 2);
v_currNamespace_2943_ = lean_ctor_get(v_toCold_2937_, 4);
v_openDecls_2944_ = lean_ctor_get(v_toCold_2937_, 5);
v___x_2945_ = lean_box(v_suppressElabErrors_2939_);
v___x_2946_ = lean_box(v___y_2936_);
v___f_2947_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2947_, 0, v___x_2945_);
lean_closure_set(v___f_2947_, 1, v___x_2946_);
v___x_2948_ = 1;
v___x_2949_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2828_, v___x_2948_);
if (v___x_2949_ == 0)
{
v___y_2926_ = v___f_2947_;
v___y_2927_ = v_fileMap_2941_;
v___y_2928_ = v_openDecls_2944_;
v___y_2929_ = v_fileName_2940_;
v___y_2930_ = v_currNamespace_2943_;
v___y_2931_ = v_ref_2938_;
v___y_2932_ = v___y_2936_;
v___y_2933_ = v_suppressElabErrors_2939_;
v___y_2934_ = v___x_2949_;
goto v___jp_2925_;
}
else
{
lean_object* v___x_2950_; uint8_t v___x_2951_; 
v___x_2950_ = l_Lean_warningAsError;
v___x_2951_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_2942_, v___x_2950_);
v___y_2926_ = v___f_2947_;
v___y_2927_ = v_fileMap_2941_;
v___y_2928_ = v_openDecls_2944_;
v___y_2929_ = v_fileName_2940_;
v___y_2930_ = v_currNamespace_2943_;
v___y_2931_ = v_ref_2938_;
v___y_2932_ = v___y_2936_;
v___y_2933_ = v_suppressElabErrors_2939_;
v___y_2934_ = v___x_2951_;
goto v___jp_2925_;
}
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
lean_dec_ref(v_msgData_2827_);
v___x_2952_ = lean_box(0);
v___x_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
return v___x_2953_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg___boxed(lean_object* v_ref_2956_, lean_object* v_msgData_2957_, lean_object* v_severity_2958_, lean_object* v_isSilent_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
uint8_t v_severity_boxed_2965_; uint8_t v_isSilent_boxed_2966_; lean_object* v_res_2967_; 
v_severity_boxed_2965_ = lean_unbox(v_severity_2958_);
v_isSilent_boxed_2966_ = lean_unbox(v_isSilent_2959_);
v_res_2967_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_2956_, v_msgData_2957_, v_severity_boxed_2965_, v_isSilent_boxed_2966_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v_ref_2956_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(lean_object* v_msgData_2968_, uint8_t v_severity_2969_, uint8_t v_isSilent_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v_ref_2978_; lean_object* v___x_2979_; 
v_ref_2978_ = lean_ctor_get(v___y_2975_, 2);
v___x_2979_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_2978_, v_msgData_2968_, v_severity_2969_, v_isSilent_2970_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21___boxed(lean_object* v_msgData_2980_, lean_object* v_severity_2981_, lean_object* v_isSilent_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
uint8_t v_severity_boxed_2990_; uint8_t v_isSilent_boxed_2991_; lean_object* v_res_2992_; 
v_severity_boxed_2990_ = lean_unbox(v_severity_2981_);
v_isSilent_boxed_2991_ = lean_unbox(v_isSilent_2982_);
v_res_2992_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(v_msgData_2980_, v_severity_boxed_2990_, v_isSilent_boxed_2991_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(lean_object* v_msgData_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
uint8_t v___x_3001_; uint8_t v___x_3002_; lean_object* v___x_3003_; 
v___x_3001_ = 1;
v___x_3002_ = 0;
v___x_3003_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(v_msgData_2993_, v___x_3001_, v___x_3002_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19___boxed(lean_object* v_msgData_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(v_msgData_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
lean_dec(v___y_3008_);
lean_dec_ref(v___y_3007_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(lean_object* v_opt_3013_, lean_object* v___y_3014_){
_start:
{
lean_object* v_toCold_3016_; lean_object* v_options_3017_; uint8_t v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v_toCold_3016_ = lean_ctor_get(v___y_3014_, 0);
v_options_3017_ = lean_ctor_get(v_toCold_3016_, 2);
v___x_3018_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_options_3017_, v_opt_3013_);
v___x_3019_ = lean_box(v___x_3018_);
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg___boxed(lean_object* v_opt_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v_opt_3021_, v___y_3022_);
lean_dec_ref(v___y_3022_);
lean_dec_ref(v_opt_3021_);
return v_res_3024_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1(void){
_start:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0));
v___x_3027_ = l_Lean_stringToMessageData(v___x_3026_);
return v___x_3027_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2));
v___x_3030_ = l_Lean_stringToMessageData(v___x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(lean_object* v_id_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
lean_object* v___x_3039_; lean_object* v_env_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3062_; 
v___x_3039_ = lean_st_ref_get(v___y_3037_);
v_env_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc_ref(v_env_3040_);
lean_dec(v___x_3039_);
v___x_3041_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_3042_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v___x_3041_, v___y_3036_);
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3062_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3062_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
uint8_t v_isExporting_3052_; 
v_isExporting_3052_ = lean_ctor_get_uint8(v_env_3040_, sizeof(void*)*8);
lean_dec_ref(v_env_3040_);
if (v_isExporting_3052_ == 0)
{
lean_dec(v_a_3043_);
lean_dec(v_id_3031_);
goto v___jp_3047_;
}
else
{
uint8_t v___x_3053_; 
v___x_3053_ = l_Lean_isPrivateName(v_id_3031_);
if (v___x_3053_ == 0)
{
lean_dec(v_a_3043_);
lean_dec(v_id_3031_);
goto v___jp_3047_;
}
else
{
uint8_t v___x_3054_; 
v___x_3054_ = lean_unbox(v_a_3043_);
lean_dec(v_a_3043_);
if (v___x_3054_ == 0)
{
lean_dec(v_id_3031_);
goto v___jp_3047_;
}
else
{
lean_object* v___x_3055_; uint8_t v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
lean_del_object(v___x_3045_);
v___x_3055_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1);
v___x_3056_ = 0;
v___x_3057_ = l_Lean_MessageData_ofConstName(v_id_3031_, v___x_3056_);
v___x_3058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3055_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3);
v___x_3060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3058_);
lean_ctor_set(v___x_3060_, 1, v___x_3059_);
v___x_3061_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(v___x_3060_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_);
return v___x_3061_;
}
}
}
v___jp_3047_:
{
lean_object* v___x_3048_; lean_object* v___x_3050_; 
v___x_3048_ = lean_box(0);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3048_);
v___x_3050_ = v___x_3045_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3048_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___boxed(lean_object* v_id_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(v_id_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(lean_object* v_id_3072_, uint8_t v_enableLog_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v___x_3081_; lean_object* v_toCold_3082_; lean_object* v_env_3083_; lean_object* v_options_3084_; lean_object* v_currNamespace_3085_; lean_object* v_openDecls_3086_; lean_object* v_res_3087_; lean_object* v___x_3088_; 
v___x_3081_ = lean_st_ref_get(v___y_3079_);
v_toCold_3082_ = lean_ctor_get(v___y_3078_, 0);
v_env_3083_ = lean_ctor_get(v___x_3081_, 0);
lean_inc_ref(v_env_3083_);
lean_dec(v___x_3081_);
v_options_3084_ = lean_ctor_get(v_toCold_3082_, 2);
v_currNamespace_3085_ = lean_ctor_get(v_toCold_3082_, 4);
v_openDecls_3086_ = lean_ctor_get(v_toCold_3082_, 5);
lean_inc(v_openDecls_3086_);
lean_inc(v_currNamespace_3085_);
v_res_3087_ = l_Lean_ResolveName_resolveGlobalName(v_env_3083_, v_options_3084_, v_currNamespace_3085_, v_openDecls_3086_, v_id_3072_);
v___x_3088_ = lean_st_ref_get(v___y_3079_);
if (v_enableLog_3073_ == 0)
{
lean_object* v___x_3089_; 
lean_dec(v___x_3088_);
v___x_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_res_3087_);
return v___x_3089_;
}
else
{
lean_object* v_env_3090_; uint8_t v_isExporting_3091_; 
v_env_3090_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_ref(v_env_3090_);
lean_dec(v___x_3088_);
v_isExporting_3091_ = lean_ctor_get_uint8(v_env_3090_, sizeof(void*)*8);
lean_dec_ref(v_env_3090_);
if (v_isExporting_3091_ == 0)
{
lean_object* v___x_3092_; 
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v_res_3087_);
return v___x_3092_;
}
else
{
lean_object* v___x_3093_; 
v___x_3093_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(v_res_3087_);
if (lean_obj_tag(v___x_3093_) == 1)
{
lean_object* v_val_3094_; lean_object* v_fst_3095_; lean_object* v___x_3096_; 
v_val_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_val_3094_);
lean_dec_ref_known(v___x_3093_, 1);
v_fst_3095_ = lean_ctor_get(v_val_3094_, 0);
lean_inc(v_fst_3095_);
lean_dec(v_val_3094_);
v___x_3096_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(v_fst_3095_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3103_ == 0)
{
lean_object* v_unused_3104_; 
v_unused_3104_ = lean_ctor_get(v___x_3096_, 0);
lean_dec(v_unused_3104_);
v___x_3098_ = v___x_3096_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_dec(v___x_3096_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v_res_3087_);
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_res_3087_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_res_3087_);
v_a_3105_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3096_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3096_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v___x_3113_; 
lean_dec(v___x_3093_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_res_3087_);
return v___x_3113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13___boxed(lean_object* v_id_3114_, lean_object* v_enableLog_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
uint8_t v_enableLog_boxed_3123_; lean_object* v_res_3124_; 
v_enableLog_boxed_3123_ = lean_unbox(v_enableLog_3115_);
v_res_3124_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(v_id_3114_, v_enableLog_boxed_3123_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
lean_dec(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
if (lean_obj_tag(v_a_3125_) == 0)
{
lean_object* v___x_3127_; 
v___x_3127_ = l_List_reverse___redArg(v_a_3126_);
return v___x_3127_;
}
else
{
lean_object* v_head_3128_; lean_object* v_tail_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3140_; 
v_head_3128_ = lean_ctor_get(v_a_3125_, 0);
v_tail_3129_ = lean_ctor_get(v_a_3125_, 1);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_a_3125_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3131_ = v_a_3125_;
v_isShared_3132_ = v_isSharedCheck_3140_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_tail_3129_);
lean_inc(v_head_3128_);
lean_dec(v_a_3125_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3140_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v_snd_3133_; uint8_t v___x_3134_; 
v_snd_3133_ = lean_ctor_get(v_head_3128_, 1);
v___x_3134_ = l_List_isEmpty___redArg(v_snd_3133_);
if (v___x_3134_ == 0)
{
lean_del_object(v___x_3131_);
lean_dec(v_head_3128_);
v_a_3125_ = v_tail_3129_;
goto _start;
}
else
{
lean_object* v___x_3137_; 
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 1, v_a_3126_);
v___x_3137_ = v___x_3131_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_head_3128_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_a_3126_);
v___x_3137_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
v_a_3125_ = v_tail_3129_;
v_a_3126_ = v___x_3137_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(lean_object* v_view_3141_, lean_object* v_findLocalDecl_x3f_3142_, lean_object* v_n_3143_, lean_object* v_projs_3144_, uint8_t v_globalDeclFound_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___y_3154_; lean_object* v___y_3155_; uint8_t v_globalDeclFoundNext_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v_imported_3165_; lean_object* v_ctx_3166_; lean_object* v_scopes_3167_; lean_object* v_givenNameView_3168_; uint8_t v___y_3170_; 
v_imported_3165_ = lean_ctor_get(v_view_3141_, 1);
v_ctx_3166_ = lean_ctor_get(v_view_3141_, 2);
v_scopes_3167_ = lean_ctor_get(v_view_3141_, 3);
lean_inc(v_scopes_3167_);
lean_inc(v_ctx_3166_);
lean_inc(v_imported_3165_);
lean_inc(v_n_3143_);
v_givenNameView_3168_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_3168_, 0, v_n_3143_);
lean_ctor_set(v_givenNameView_3168_, 1, v_imported_3165_);
lean_ctor_set(v_givenNameView_3168_, 2, v_ctx_3166_);
lean_ctor_set(v_givenNameView_3168_, 3, v_scopes_3167_);
if (v_globalDeclFound_3145_ == 0)
{
v___y_3170_ = v_globalDeclFound_3145_;
goto v___jp_3169_;
}
else
{
uint8_t v___x_3205_; 
v___x_3205_ = l_List_isEmpty___redArg(v_projs_3144_);
if (v___x_3205_ == 0)
{
v___y_3170_ = v_globalDeclFound_3145_;
goto v___jp_3169_;
}
else
{
uint8_t v___x_3206_; 
v___x_3206_ = 0;
v___y_3170_ = v___x_3206_;
goto v___jp_3169_;
}
}
v___jp_3153_:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___y_3154_);
lean_ctor_set(v___x_3163_, 1, v_projs_3144_);
v_n_3143_ = v___y_3155_;
v_projs_3144_ = v___x_3163_;
v_globalDeclFound_3145_ = v_globalDeclFoundNext_3156_;
v___y_3146_ = v___y_3157_;
v___y_3147_ = v___y_3158_;
v___y_3148_ = v___y_3159_;
v___y_3149_ = v___y_3160_;
v___y_3150_ = v___y_3161_;
v___y_3151_ = v___y_3162_;
goto _start;
}
v___jp_3169_:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = lean_box(v___y_3170_);
lean_inc_ref(v_findLocalDecl_x3f_3142_);
lean_inc_ref(v_givenNameView_3168_);
v___x_3172_ = lean_apply_2(v_findLocalDecl_x3f_3142_, v_givenNameView_3168_, v___x_3171_);
if (lean_obj_tag(v___x_3172_) == 0)
{
if (lean_obj_tag(v_n_3143_) == 1)
{
if (v_globalDeclFound_3145_ == 0)
{
lean_object* v_pre_3173_; lean_object* v_str_3174_; uint8_t v_globalDeclFoundNext_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v_pre_3173_ = lean_ctor_get(v_n_3143_, 0);
lean_inc(v_pre_3173_);
v_str_3174_ = lean_ctor_get(v_n_3143_, 1);
lean_inc_ref(v_str_3174_);
lean_dec_ref_known(v_n_3143_, 2);
v_globalDeclFoundNext_3175_ = 1;
v___x_3176_ = l_Lean_MacroScopesView_review(v_givenNameView_3168_);
v___x_3177_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(v___x_3176_, v_globalDeclFound_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v___x_3179_; lean_object* v_r_3180_; uint8_t v___x_3181_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3178_);
lean_dec_ref_known(v___x_3177_, 1);
v___x_3179_ = lean_box(0);
v_r_3180_ = l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(v_a_3178_, v___x_3179_);
v___x_3181_ = l_List_isEmpty___redArg(v_r_3180_);
lean_dec(v_r_3180_);
if (v___x_3181_ == 0)
{
v___y_3154_ = v_str_3174_;
v___y_3155_ = v_pre_3173_;
v_globalDeclFoundNext_3156_ = v_globalDeclFoundNext_3175_;
v___y_3157_ = v___y_3146_;
v___y_3158_ = v___y_3147_;
v___y_3159_ = v___y_3148_;
v___y_3160_ = v___y_3149_;
v___y_3161_ = v___y_3150_;
v___y_3162_ = v___y_3151_;
goto v___jp_3153_;
}
else
{
v___y_3154_ = v_str_3174_;
v___y_3155_ = v_pre_3173_;
v_globalDeclFoundNext_3156_ = v_globalDeclFound_3145_;
v___y_3157_ = v___y_3146_;
v___y_3158_ = v___y_3147_;
v___y_3159_ = v___y_3148_;
v___y_3160_ = v___y_3149_;
v___y_3161_ = v___y_3150_;
v___y_3162_ = v___y_3151_;
goto v___jp_3153_;
}
}
else
{
lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_dec_ref(v_str_3174_);
lean_dec(v_pre_3173_);
lean_dec(v_projs_3144_);
lean_dec_ref(v_findLocalDecl_x3f_3142_);
v_a_3182_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3177_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3177_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_pre_3190_; lean_object* v_str_3191_; 
lean_dec_ref_known(v_givenNameView_3168_, 4);
v_pre_3190_ = lean_ctor_get(v_n_3143_, 0);
lean_inc(v_pre_3190_);
v_str_3191_ = lean_ctor_get(v_n_3143_, 1);
lean_inc_ref(v_str_3191_);
lean_dec_ref_known(v_n_3143_, 2);
v___y_3154_ = v_str_3191_;
v___y_3155_ = v_pre_3190_;
v_globalDeclFoundNext_3156_ = v_globalDeclFound_3145_;
v___y_3157_ = v___y_3146_;
v___y_3158_ = v___y_3147_;
v___y_3159_ = v___y_3148_;
v___y_3160_ = v___y_3149_;
v___y_3161_ = v___y_3150_;
v___y_3162_ = v___y_3151_;
goto v___jp_3153_;
}
}
else
{
lean_object* v___x_3192_; lean_object* v___x_3193_; 
lean_dec_ref_known(v_givenNameView_3168_, 4);
lean_dec(v_projs_3144_);
lean_dec(v_n_3143_);
lean_dec_ref(v_findLocalDecl_x3f_3142_);
v___x_3192_ = lean_box(0);
v___x_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3192_);
return v___x_3193_;
}
}
else
{
lean_object* v_val_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3204_; 
lean_dec_ref_known(v_givenNameView_3168_, 4);
lean_dec(v_n_3143_);
lean_dec_ref(v_findLocalDecl_x3f_3142_);
v_val_3194_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3196_ = v___x_3172_;
v_isShared_3197_ = v_isSharedCheck_3204_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_val_3194_);
lean_dec(v___x_3172_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3204_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3201_; 
v___x_3198_ = l_Lean_LocalDecl_toExpr(v_val_3194_);
v___x_3199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
lean_ctor_set(v___x_3199_, 1, v_projs_3144_);
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 0, v___x_3199_);
v___x_3201_ = v___x_3196_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v___x_3199_);
v___x_3201_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
lean_object* v___x_3202_; 
v___x_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
return v___x_3202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8___boxed(lean_object* v_view_3207_, lean_object* v_findLocalDecl_x3f_3208_, lean_object* v_n_3209_, lean_object* v_projs_3210_, lean_object* v_globalDeclFound_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
uint8_t v_globalDeclFound_boxed_3219_; lean_object* v_res_3220_; 
v_globalDeclFound_boxed_3219_ = lean_unbox(v_globalDeclFound_3211_);
v_res_3220_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(v_view_3207_, v_findLocalDecl_x3f_3208_, v_n_3209_, v_projs_3210_, v_globalDeclFound_boxed_3219_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec_ref(v_view_3207_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(lean_object* v_localDecl_x3f_3221_, lean_object* v_givenName_3222_, lean_object* v_as_3223_, lean_object* v_i_3224_){
_start:
{
lean_object* v_zero_3225_; uint8_t v_isZero_3226_; 
v_zero_3225_ = lean_unsigned_to_nat(0u);
v_isZero_3226_ = lean_nat_dec_eq(v_i_3224_, v_zero_3225_);
if (v_isZero_3226_ == 1)
{
lean_object* v___x_3227_; 
lean_dec(v_i_3224_);
v___x_3227_ = lean_box(0);
return v___x_3227_;
}
else
{
lean_object* v_one_3228_; lean_object* v_n_3229_; lean_object* v___y_3231_; lean_object* v___x_3233_; 
v_one_3228_ = lean_unsigned_to_nat(1u);
v_n_3229_ = lean_nat_sub(v_i_3224_, v_one_3228_);
lean_dec(v_i_3224_);
v___x_3233_ = lean_array_fget_borrowed(v_as_3223_, v_n_3229_);
if (lean_obj_tag(v___x_3233_) == 0)
{
v___y_3231_ = v___x_3233_;
goto v___jp_3230_;
}
else
{
lean_object* v_val_3234_; uint8_t v___x_3235_; 
v_val_3234_ = lean_ctor_get(v___x_3233_, 0);
v___x_3235_ = l_Lean_LocalDecl_isAuxDecl(v_val_3234_);
if (v___x_3235_ == 0)
{
v___y_3231_ = v_localDecl_x3f_3221_;
goto v___jp_3230_;
}
else
{
lean_object* v___x_3236_; uint8_t v___x_3237_; 
v___x_3236_ = l_Lean_LocalDecl_userName(v_val_3234_);
v___x_3237_ = lean_name_eq(v___x_3236_, v_givenName_3222_);
lean_dec(v___x_3236_);
if (v___x_3237_ == 0)
{
v_i_3224_ = v_n_3229_;
goto _start;
}
else
{
v___y_3231_ = v___x_3233_;
goto v___jp_3230_;
}
}
}
v___jp_3230_:
{
if (lean_obj_tag(v___y_3231_) == 0)
{
v_i_3224_ = v_n_3229_;
goto _start;
}
else
{
lean_dec(v_n_3229_);
lean_inc_ref(v___y_3231_);
return v___y_3231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_localDecl_x3f_3239_, lean_object* v_givenName_3240_, lean_object* v_as_3241_, lean_object* v_i_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3239_, v_givenName_3240_, v_as_3241_, v_i_3242_);
lean_dec_ref(v_as_3241_);
lean_dec(v_givenName_3240_);
lean_dec(v_localDecl_x3f_3239_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(lean_object* v_localDecl_x3f_3244_, lean_object* v_givenName_3245_, lean_object* v_as_3246_, lean_object* v_i_3247_){
_start:
{
lean_object* v_zero_3248_; uint8_t v_isZero_3249_; 
v_zero_3248_ = lean_unsigned_to_nat(0u);
v_isZero_3249_ = lean_nat_dec_eq(v_i_3247_, v_zero_3248_);
if (v_isZero_3249_ == 1)
{
lean_object* v___x_3250_; 
lean_dec(v_i_3247_);
v___x_3250_ = lean_box(0);
return v___x_3250_;
}
else
{
lean_object* v_one_3251_; lean_object* v_n_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v_one_3251_ = lean_unsigned_to_nat(1u);
v_n_3252_ = lean_nat_sub(v_i_3247_, v_one_3251_);
lean_dec(v_i_3247_);
v___x_3253_ = lean_array_fget_borrowed(v_as_3246_, v_n_3252_);
v___x_3254_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3244_, v_givenName_3245_, v___x_3253_);
if (lean_obj_tag(v___x_3254_) == 0)
{
v_i_3247_ = v_n_3252_;
goto _start;
}
else
{
lean_dec(v_n_3252_);
return v___x_3254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(lean_object* v_localDecl_x3f_3256_, lean_object* v_givenName_3257_, lean_object* v_x_3258_){
_start:
{
if (lean_obj_tag(v_x_3258_) == 0)
{
lean_object* v_cs_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_cs_3259_ = lean_ctor_get(v_x_3258_, 0);
v___x_3260_ = lean_array_get_size(v_cs_3259_);
v___x_3261_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_3256_, v_givenName_3257_, v_cs_3259_, v___x_3260_);
return v___x_3261_;
}
else
{
lean_object* v_vs_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v_vs_3262_ = lean_ctor_get(v_x_3258_, 0);
v___x_3263_ = lean_array_get_size(v_vs_3262_);
v___x_3264_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3256_, v_givenName_3257_, v_vs_3262_, v___x_3263_);
return v___x_3264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11___boxed(lean_object* v_localDecl_x3f_3265_, lean_object* v_givenName_3266_, lean_object* v_x_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3265_, v_givenName_3266_, v_x_3267_);
lean_dec_ref(v_x_3267_);
lean_dec(v_givenName_3266_);
lean_dec(v_localDecl_x3f_3265_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg___boxed(lean_object* v_localDecl_x3f_3269_, lean_object* v_givenName_3270_, lean_object* v_as_3271_, lean_object* v_i_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_3269_, v_givenName_3270_, v_as_3271_, v_i_3272_);
lean_dec_ref(v_as_3271_);
lean_dec(v_givenName_3270_);
lean_dec(v_localDecl_x3f_3269_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object* v_localDecl_x3f_3274_, lean_object* v_givenName_3275_, lean_object* v_t_3276_){
_start:
{
lean_object* v_root_3277_; lean_object* v_tail_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v_root_3277_ = lean_ctor_get(v_t_3276_, 0);
v_tail_3278_ = lean_ctor_get(v_t_3276_, 1);
v___x_3279_ = lean_array_get_size(v_tail_3278_);
v___x_3280_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3274_, v_givenName_3275_, v_tail_3278_, v___x_3279_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v___x_3281_; 
v___x_3281_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3274_, v_givenName_3275_, v_root_3277_);
return v___x_3281_;
}
else
{
return v___x_3280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object* v_localDecl_x3f_3282_, lean_object* v_givenName_3283_, lean_object* v_t_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_localDecl_x3f_3282_, v_givenName_3283_, v_t_3284_);
lean_dec_ref(v_t_3284_);
lean_dec(v_givenName_3283_);
lean_dec(v_localDecl_x3f_3282_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(lean_object* v_t_3286_, lean_object* v_k_3287_){
_start:
{
if (lean_obj_tag(v_t_3286_) == 0)
{
lean_object* v_k_3288_; lean_object* v_v_3289_; lean_object* v_l_3290_; lean_object* v_r_3291_; uint8_t v___x_3292_; 
v_k_3288_ = lean_ctor_get(v_t_3286_, 1);
v_v_3289_ = lean_ctor_get(v_t_3286_, 2);
v_l_3290_ = lean_ctor_get(v_t_3286_, 3);
v_r_3291_ = lean_ctor_get(v_t_3286_, 4);
v___x_3292_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3287_, v_k_3288_);
switch(v___x_3292_)
{
case 0:
{
v_t_3286_ = v_l_3290_;
goto _start;
}
case 1:
{
lean_object* v___x_3294_; 
lean_inc(v_v_3289_);
v___x_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3294_, 0, v_v_3289_);
return v___x_3294_;
}
default: 
{
v_t_3286_ = v_r_3291_;
goto _start;
}
}
}
else
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_box(0);
return v___x_3296_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg___boxed(lean_object* v_t_3297_, lean_object* v_k_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_t_3297_, v_k_3298_);
lean_dec(v_k_3298_);
lean_dec(v_t_3297_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(lean_object* v_localDecl_3300_, lean_object* v_givenName_3301_){
_start:
{
lean_object* v___x_3302_; uint8_t v___x_3303_; 
v___x_3302_ = l_Lean_LocalDecl_userName(v_localDecl_3300_);
v___x_3303_ = lean_name_eq(v___x_3302_, v_givenName_3301_);
lean_dec(v___x_3302_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; 
lean_dec_ref(v_localDecl_3300_);
v___x_3304_ = lean_box(0);
return v___x_3304_;
}
else
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3305_, 0, v_localDecl_3300_);
return v___x_3305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v_localDecl_3306_, lean_object* v_givenName_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_localDecl_3306_, v_givenName_3307_);
lean_dec(v_givenName_3307_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(lean_object* v_givenName_3309_, uint8_t v_skipAuxDecl_3310_, lean_object* v_auxDeclToFullName_3311_, lean_object* v___x_3312_, lean_object* v_givenNameView_3313_, lean_object* v_as_3314_, lean_object* v_i_3315_){
_start:
{
lean_object* v_zero_3316_; uint8_t v_isZero_3317_; 
v_zero_3316_ = lean_unsigned_to_nat(0u);
v_isZero_3317_ = lean_nat_dec_eq(v_i_3315_, v_zero_3316_);
if (v_isZero_3317_ == 1)
{
lean_object* v___x_3318_; 
lean_dec(v_i_3315_);
lean_dec_ref(v_givenNameView_3313_);
lean_dec(v___x_3312_);
v___x_3318_ = lean_box(0);
return v___x_3318_;
}
else
{
lean_object* v_one_3319_; lean_object* v_n_3320_; lean_object* v___y_3322_; lean_object* v___x_3324_; 
v_one_3319_ = lean_unsigned_to_nat(1u);
v_n_3320_ = lean_nat_sub(v_i_3315_, v_one_3319_);
lean_dec(v_i_3315_);
v___x_3324_ = lean_array_fget_borrowed(v_as_3314_, v_n_3320_);
if (lean_obj_tag(v___x_3324_) == 0)
{
v___y_3322_ = v___x_3324_;
goto v___jp_3321_;
}
else
{
lean_object* v_val_3325_; uint8_t v___x_3326_; 
v_val_3325_ = lean_ctor_get(v___x_3324_, 0);
v___x_3326_ = l_Lean_LocalDecl_isAuxDecl(v_val_3325_);
if (v___x_3326_ == 0)
{
lean_object* v___x_3327_; 
lean_inc(v_val_3325_);
v___x_3327_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_val_3325_, v_givenName_3309_);
v___y_3322_ = v___x_3327_;
goto v___jp_3321_;
}
else
{
if (v_skipAuxDecl_3310_ == 0)
{
if (v___x_3326_ == 0)
{
v_i_3315_ = v_n_3320_;
goto _start;
}
else
{
lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3329_ = l_Lean_LocalDecl_fvarId(v_val_3325_);
v___x_3330_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_auxDeclToFullName_3311_, v___x_3329_);
lean_dec(v___x_3329_);
if (lean_obj_tag(v___x_3330_) == 1)
{
lean_object* v_val_3331_; lean_object* v_fullDeclView_3332_; lean_object* v___y_3334_; lean_object* v_name_3355_; lean_object* v___x_3356_; 
v_val_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_val_3331_);
lean_dec_ref_known(v___x_3330_, 1);
v_fullDeclView_3332_ = l_Lean_extractMacroScopes(v_val_3331_);
v_name_3355_ = lean_ctor_get(v_fullDeclView_3332_, 0);
lean_inc_n(v_name_3355_, 2);
v___x_3356_ = l_Lean_privateToUserName_x3f(v_name_3355_);
if (lean_obj_tag(v___x_3356_) == 0)
{
v___y_3334_ = v_name_3355_;
goto v___jp_3333_;
}
else
{
lean_object* v_val_3357_; 
lean_dec(v_name_3355_);
v_val_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc(v_val_3357_);
lean_dec_ref_known(v___x_3356_, 1);
v___y_3334_ = v_val_3357_;
goto v___jp_3333_;
}
v___jp_3333_:
{
lean_object* v_imported_3335_; lean_object* v_ctx_3336_; lean_object* v_scopes_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3353_; 
v_imported_3335_ = lean_ctor_get(v_fullDeclView_3332_, 1);
v_ctx_3336_ = lean_ctor_get(v_fullDeclView_3332_, 2);
v_scopes_3337_ = lean_ctor_get(v_fullDeclView_3332_, 3);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_fullDeclView_3332_);
if (v_isSharedCheck_3353_ == 0)
{
lean_object* v_unused_3354_; 
v_unused_3354_ = lean_ctor_get(v_fullDeclView_3332_, 0);
lean_dec(v_unused_3354_);
v___x_3339_ = v_fullDeclView_3332_;
v_isShared_3340_ = v_isSharedCheck_3353_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_scopes_3337_);
lean_inc(v_ctx_3336_);
lean_inc(v_imported_3335_);
lean_dec(v_fullDeclView_3332_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3353_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v_fullDeclView_3342_; 
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 0, v___y_3334_);
v_fullDeclView_3342_ = v___x_3339_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___y_3334_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_imported_3335_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_ctx_3336_);
lean_ctor_set(v_reuseFailAlloc_3352_, 3, v_scopes_3337_);
v_fullDeclView_3342_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
lean_object* v_fullDeclName_3343_; uint8_t v___x_3344_; 
lean_inc_ref(v_fullDeclView_3342_);
v_fullDeclName_3343_ = l_Lean_MacroScopesView_review(v_fullDeclView_3342_);
v___x_3344_ = l_Lean_Name_isPrefixOf(v___x_3312_, v_fullDeclName_3343_);
if (v___x_3344_ == 0)
{
lean_object* v___x_3345_; 
lean_dec_ref(v_fullDeclView_3342_);
lean_inc(v___x_3312_);
lean_inc_ref(v_givenNameView_3313_);
lean_inc(v_val_3325_);
v___x_3345_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_3325_, v_givenNameView_3313_, v_fullDeclName_3343_, v___x_3312_);
lean_dec(v_fullDeclName_3343_);
v___y_3322_ = v___x_3345_;
goto v___jp_3321_;
}
else
{
lean_object* v___x_3346_; lean_object* v_localDeclNameView_3347_; uint8_t v___x_3348_; 
lean_dec(v_fullDeclName_3343_);
v___x_3346_ = l_Lean_LocalDecl_userName(v_val_3325_);
v_localDeclNameView_3347_ = l_Lean_extractMacroScopes(v___x_3346_);
v___x_3348_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_3347_, v_givenNameView_3313_);
lean_dec_ref(v_localDeclNameView_3347_);
if (v___x_3348_ == 0)
{
lean_dec_ref(v_fullDeclView_3342_);
v_i_3315_ = v_n_3320_;
goto _start;
}
else
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_3313_, v_fullDeclView_3342_);
lean_dec_ref(v_fullDeclView_3342_);
if (v___x_3350_ == 0)
{
v_i_3315_ = v_n_3320_;
goto _start;
}
else
{
lean_inc_ref(v___x_3324_);
v___y_3322_ = v___x_3324_;
goto v___jp_3321_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3358_; 
lean_dec(v___x_3330_);
lean_inc(v_val_3325_);
v___x_3358_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_val_3325_, v_givenName_3309_);
v___y_3322_ = v___x_3358_;
goto v___jp_3321_;
}
}
}
else
{
v_i_3315_ = v_n_3320_;
goto _start;
}
}
}
v___jp_3321_:
{
if (lean_obj_tag(v___y_3322_) == 0)
{
v_i_3315_ = v_n_3320_;
goto _start;
}
else
{
lean_dec(v_n_3320_);
lean_dec_ref(v_givenNameView_3313_);
lean_dec(v___x_3312_);
return v___y_3322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_givenName_3360_, lean_object* v_skipAuxDecl_3361_, lean_object* v_auxDeclToFullName_3362_, lean_object* v___x_3363_, lean_object* v_givenNameView_3364_, lean_object* v_as_3365_, lean_object* v_i_3366_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3367_; lean_object* v_res_3368_; 
v_skipAuxDecl_boxed_3367_ = lean_unbox(v_skipAuxDecl_3361_);
v_res_3368_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3360_, v_skipAuxDecl_boxed_3367_, v_auxDeclToFullName_3362_, v___x_3363_, v_givenNameView_3364_, v_as_3365_, v_i_3366_);
lean_dec_ref(v_as_3365_);
lean_dec(v_auxDeclToFullName_3362_);
lean_dec(v_givenName_3360_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(lean_object* v_givenName_3369_, uint8_t v_skipAuxDecl_3370_, lean_object* v_auxDeclToFullName_3371_, lean_object* v___x_3372_, lean_object* v_givenNameView_3373_, lean_object* v_as_3374_, lean_object* v_i_3375_){
_start:
{
lean_object* v_zero_3376_; uint8_t v_isZero_3377_; 
v_zero_3376_ = lean_unsigned_to_nat(0u);
v_isZero_3377_ = lean_nat_dec_eq(v_i_3375_, v_zero_3376_);
if (v_isZero_3377_ == 1)
{
lean_object* v___x_3378_; 
lean_dec(v_i_3375_);
lean_dec_ref(v_givenNameView_3373_);
lean_dec(v___x_3372_);
v___x_3378_ = lean_box(0);
return v___x_3378_;
}
else
{
lean_object* v_one_3379_; lean_object* v_n_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v_one_3379_ = lean_unsigned_to_nat(1u);
v_n_3380_ = lean_nat_sub(v_i_3375_, v_one_3379_);
lean_dec(v_i_3375_);
v___x_3381_ = lean_array_fget_borrowed(v_as_3374_, v_n_3380_);
lean_inc_ref(v_givenNameView_3373_);
lean_inc(v___x_3372_);
v___x_3382_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3369_, v_skipAuxDecl_3370_, v_auxDeclToFullName_3371_, v___x_3372_, v_givenNameView_3373_, v___x_3381_);
if (lean_obj_tag(v___x_3382_) == 0)
{
v_i_3375_ = v_n_3380_;
goto _start;
}
else
{
lean_dec(v_n_3380_);
lean_dec_ref(v_givenNameView_3373_);
lean_dec(v___x_3372_);
return v___x_3382_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(lean_object* v_givenName_3384_, uint8_t v_skipAuxDecl_3385_, lean_object* v_auxDeclToFullName_3386_, lean_object* v___x_3387_, lean_object* v_givenNameView_3388_, lean_object* v_x_3389_){
_start:
{
if (lean_obj_tag(v_x_3389_) == 0)
{
lean_object* v_cs_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v_cs_3390_ = lean_ctor_get(v_x_3389_, 0);
v___x_3391_ = lean_array_get_size(v_cs_3390_);
v___x_3392_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_3384_, v_skipAuxDecl_3385_, v_auxDeclToFullName_3386_, v___x_3387_, v_givenNameView_3388_, v_cs_3390_, v___x_3391_);
return v___x_3392_;
}
else
{
lean_object* v_vs_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v_vs_3393_ = lean_ctor_get(v_x_3389_, 0);
v___x_3394_ = lean_array_get_size(v_vs_3393_);
v___x_3395_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3384_, v_skipAuxDecl_3385_, v_auxDeclToFullName_3386_, v___x_3387_, v_givenNameView_3388_, v_vs_3393_, v___x_3394_);
return v___x_3395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8___boxed(lean_object* v_givenName_3396_, lean_object* v_skipAuxDecl_3397_, lean_object* v_auxDeclToFullName_3398_, lean_object* v___x_3399_, lean_object* v_givenNameView_3400_, lean_object* v_x_3401_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3402_; lean_object* v_res_3403_; 
v_skipAuxDecl_boxed_3402_ = lean_unbox(v_skipAuxDecl_3397_);
v_res_3403_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3396_, v_skipAuxDecl_boxed_3402_, v_auxDeclToFullName_3398_, v___x_3399_, v_givenNameView_3400_, v_x_3401_);
lean_dec_ref(v_x_3401_);
lean_dec(v_auxDeclToFullName_3398_);
lean_dec(v_givenName_3396_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg___boxed(lean_object* v_givenName_3404_, lean_object* v_skipAuxDecl_3405_, lean_object* v_auxDeclToFullName_3406_, lean_object* v___x_3407_, lean_object* v_givenNameView_3408_, lean_object* v_as_3409_, lean_object* v_i_3410_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3411_; lean_object* v_res_3412_; 
v_skipAuxDecl_boxed_3411_ = lean_unbox(v_skipAuxDecl_3405_);
v_res_3412_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_3404_, v_skipAuxDecl_boxed_3411_, v_auxDeclToFullName_3406_, v___x_3407_, v_givenNameView_3408_, v_as_3409_, v_i_3410_);
lean_dec_ref(v_as_3409_);
lean_dec(v_auxDeclToFullName_3406_);
lean_dec(v_givenName_3404_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object* v_givenName_3413_, uint8_t v_skipAuxDecl_3414_, lean_object* v_auxDeclToFullName_3415_, lean_object* v___x_3416_, lean_object* v_givenNameView_3417_, lean_object* v_t_3418_){
_start:
{
lean_object* v_root_3419_; lean_object* v_tail_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v_root_3419_ = lean_ctor_get(v_t_3418_, 0);
v_tail_3420_ = lean_ctor_get(v_t_3418_, 1);
v___x_3421_ = lean_array_get_size(v_tail_3420_);
lean_inc_ref(v_givenNameView_3417_);
lean_inc(v___x_3416_);
v___x_3422_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3413_, v_skipAuxDecl_3414_, v_auxDeclToFullName_3415_, v___x_3416_, v_givenNameView_3417_, v_tail_3420_, v___x_3421_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3413_, v_skipAuxDecl_3414_, v_auxDeclToFullName_3415_, v___x_3416_, v_givenNameView_3417_, v_root_3419_);
return v___x_3423_;
}
else
{
lean_dec_ref(v_givenNameView_3417_);
lean_dec(v___x_3416_);
return v___x_3422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object* v_givenName_3424_, lean_object* v_skipAuxDecl_3425_, lean_object* v_auxDeclToFullName_3426_, lean_object* v___x_3427_, lean_object* v_givenNameView_3428_, lean_object* v_t_3429_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3430_; lean_object* v_res_3431_; 
v_skipAuxDecl_boxed_3430_ = lean_unbox(v_skipAuxDecl_3425_);
v_res_3431_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_givenName_3424_, v_skipAuxDecl_boxed_3430_, v_auxDeclToFullName_3426_, v___x_3427_, v_givenNameView_3428_, v_t_3429_);
lean_dec_ref(v_t_3429_);
lean_dec(v_auxDeclToFullName_3426_);
lean_dec(v_givenName_3424_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object* v_auxDeclToFullName_3432_, lean_object* v_currNamespace_3433_, lean_object* v_decls_3434_, lean_object* v_givenNameView_3435_, uint8_t v_skipAuxDecl_3436_){
_start:
{
lean_object* v_givenName_3437_; lean_object* v_localDecl_x3f_3438_; 
lean_inc_ref(v_givenNameView_3435_);
v_givenName_3437_ = l_Lean_MacroScopesView_review(v_givenNameView_3435_);
v_localDecl_x3f_3438_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_givenName_3437_, v_skipAuxDecl_3436_, v_auxDeclToFullName_3432_, v_currNamespace_3433_, v_givenNameView_3435_, v_decls_3434_);
if (lean_obj_tag(v_localDecl_x3f_3438_) == 0)
{
if (v_skipAuxDecl_3436_ == 0)
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_localDecl_x3f_3438_, v_givenName_3437_, v_decls_3434_);
lean_dec(v_givenName_3437_);
return v___x_3439_;
}
else
{
lean_dec(v_givenName_3437_);
return v_localDecl_x3f_3438_;
}
}
else
{
lean_dec(v_givenName_3437_);
return v_localDecl_x3f_3438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object* v_auxDeclToFullName_3440_, lean_object* v_currNamespace_3441_, lean_object* v_decls_3442_, lean_object* v_givenNameView_3443_, lean_object* v_skipAuxDecl_3444_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3445_; lean_object* v_res_3446_; 
v_skipAuxDecl_boxed_3445_ = lean_unbox(v_skipAuxDecl_3444_);
v_res_3446_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(v_auxDeclToFullName_3440_, v_currNamespace_3441_, v_decls_3442_, v_givenNameView_3443_, v_skipAuxDecl_boxed_3445_);
lean_dec_ref(v_decls_3442_);
lean_dec(v_auxDeclToFullName_3440_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object* v_n_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_lctx_3455_; lean_object* v_toCold_3456_; lean_object* v_decls_3457_; lean_object* v_auxDeclToFullName_3458_; lean_object* v_currNamespace_3459_; lean_object* v_view_3460_; lean_object* v_name_3461_; lean_object* v_findLocalDecl_x3f_3462_; lean_object* v___x_3463_; uint8_t v___x_3464_; lean_object* v___x_3465_; 
v_lctx_3455_ = lean_ctor_get(v___y_3450_, 2);
v_toCold_3456_ = lean_ctor_get(v___y_3452_, 0);
v_decls_3457_ = lean_ctor_get(v_lctx_3455_, 1);
v_auxDeclToFullName_3458_ = lean_ctor_get(v_lctx_3455_, 2);
v_currNamespace_3459_ = lean_ctor_get(v_toCold_3456_, 4);
v_view_3460_ = l_Lean_extractMacroScopes(v_n_3447_);
v_name_3461_ = lean_ctor_get(v_view_3460_, 0);
lean_inc(v_name_3461_);
lean_inc_ref(v_decls_3457_);
lean_inc(v_currNamespace_3459_);
lean_inc(v_auxDeclToFullName_3458_);
v_findLocalDecl_x3f_3462_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed), 5, 3);
lean_closure_set(v_findLocalDecl_x3f_3462_, 0, v_auxDeclToFullName_3458_);
lean_closure_set(v_findLocalDecl_x3f_3462_, 1, v_currNamespace_3459_);
lean_closure_set(v_findLocalDecl_x3f_3462_, 2, v_decls_3457_);
v___x_3463_ = lean_box(0);
v___x_3464_ = 0;
v___x_3465_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(v_view_3460_, v_findLocalDecl_x3f_3462_, v_name_3461_, v___x_3463_, v___x_3464_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec_ref(v_view_3460_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object* v_n_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v_res_3474_; 
v_res_3474_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v_n_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object* v_as_x27_3475_, lean_object* v_b_3476_){
_start:
{
if (lean_obj_tag(v_as_x27_3475_) == 0)
{
lean_object* v___x_3478_; 
v___x_3478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3478_, 0, v_b_3476_);
return v___x_3478_;
}
else
{
lean_object* v_head_3479_; lean_object* v_tail_3480_; lean_object* v_config_3481_; lean_object* v_extensions_3482_; lean_object* v_extra_3483_; lean_object* v_extraInj_3484_; lean_object* v_extraFacts_3485_; lean_object* v_symPrios_3486_; lean_object* v_norm_3487_; lean_object* v_normProcs_3488_; lean_object* v_anchorRefs_x3f_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3498_; 
v_head_3479_ = lean_ctor_get(v_as_x27_3475_, 0);
v_tail_3480_ = lean_ctor_get(v_as_x27_3475_, 1);
v_config_3481_ = lean_ctor_get(v_b_3476_, 0);
v_extensions_3482_ = lean_ctor_get(v_b_3476_, 1);
v_extra_3483_ = lean_ctor_get(v_b_3476_, 2);
v_extraInj_3484_ = lean_ctor_get(v_b_3476_, 3);
v_extraFacts_3485_ = lean_ctor_get(v_b_3476_, 4);
v_symPrios_3486_ = lean_ctor_get(v_b_3476_, 5);
v_norm_3487_ = lean_ctor_get(v_b_3476_, 6);
v_normProcs_3488_ = lean_ctor_get(v_b_3476_, 7);
v_anchorRefs_x3f_3489_ = lean_ctor_get(v_b_3476_, 8);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_b_3476_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3491_ = v_b_3476_;
v_isShared_3492_ = v_isSharedCheck_3498_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_anchorRefs_x3f_3489_);
lean_inc(v_normProcs_3488_);
lean_inc(v_norm_3487_);
lean_inc(v_symPrios_3486_);
lean_inc(v_extraFacts_3485_);
lean_inc(v_extraInj_3484_);
lean_inc(v_extra_3483_);
lean_inc(v_extensions_3482_);
lean_inc(v_config_3481_);
lean_dec(v_b_3476_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3498_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3493_; lean_object* v___x_3495_; 
lean_inc(v_head_3479_);
v___x_3493_ = l_Lean_PersistentArray_push___redArg(v_extra_3483_, v_head_3479_);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 2, v___x_3493_);
v___x_3495_ = v___x_3491_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_config_3481_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_extensions_3482_);
lean_ctor_set(v_reuseFailAlloc_3497_, 2, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3497_, 3, v_extraInj_3484_);
lean_ctor_set(v_reuseFailAlloc_3497_, 4, v_extraFacts_3485_);
lean_ctor_set(v_reuseFailAlloc_3497_, 5, v_symPrios_3486_);
lean_ctor_set(v_reuseFailAlloc_3497_, 6, v_norm_3487_);
lean_ctor_set(v_reuseFailAlloc_3497_, 7, v_normProcs_3488_);
lean_ctor_set(v_reuseFailAlloc_3497_, 8, v_anchorRefs_x3f_3489_);
v___x_3495_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
v_as_x27_3475_ = v_tail_3480_;
v_b_3476_ = v___x_3495_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object* v_as_x27_3499_, lean_object* v_b_3500_, lean_object* v___y_3501_){
_start:
{
lean_object* v_res_3502_; 
v_res_3502_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_3499_, v_b_3500_);
lean_dec(v_as_x27_3499_);
return v_res_3502_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1(void){
_start:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3504_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0));
v___x_3505_ = l_Lean_stringToMessageData(v___x_3504_);
return v___x_3505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3(void){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2));
v___x_3508_ = l_Lean_stringToMessageData(v___x_3507_);
return v___x_3508_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4));
v___x_3511_ = l_Lean_stringToMessageData(v___x_3510_);
return v___x_3511_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6));
v___x_3514_ = l_Lean_stringToMessageData(v___x_3513_);
return v___x_3514_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8));
v___x_3517_ = l_Lean_stringToMessageData(v___x_3516_);
return v___x_3517_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10));
v___x_3520_ = l_Lean_stringToMessageData(v___x_3519_);
return v___x_3520_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12));
v___x_3523_ = l_Lean_stringToMessageData(v___x_3522_);
return v___x_3523_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14));
v___x_3526_ = l_Lean_stringToMessageData(v___x_3525_);
return v___x_3526_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16));
v___x_3529_ = l_Lean_stringToMessageData(v___x_3528_);
return v___x_3529_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18));
v___x_3532_ = l_Lean_stringToMessageData(v___x_3531_);
return v___x_3532_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20));
v___x_3535_ = l_Lean_stringToMessageData(v___x_3534_);
return v___x_3535_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23(void){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22));
v___x_3538_ = l_Lean_stringToMessageData(v___x_3537_);
return v___x_3538_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24));
v___x_3541_ = l_Lean_stringToMessageData(v___x_3540_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object* v_params_3542_, lean_object* v_p_3543_, lean_object* v_mod_x3f_3544_, lean_object* v_id_3545_, uint8_t v_minIndexable_3546_, uint8_t v_only_3547_, uint8_t v_incremental_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v___y_3557_; uint8_t v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___y_3562_; lean_object* v___y_3563_; lean_object* v___y_3564_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3658_; uint8_t v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v_a_3709_; lean_object* v___y_3932_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3943_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3944_ = lean_box(0);
lean_inc(v_id_3545_);
v___x_3945_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_id_3545_, v___x_3944_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; 
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref_known(v___x_3945_, 1);
v_a_3709_ = v_a_3946_;
goto v___jp_3708_;
}
else
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_4021_; 
v_a_3947_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_3949_ = v___x_3945_;
v_isShared_3950_ = v_isSharedCheck_4021_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3945_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_4021_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
uint8_t v___y_3952_; uint8_t v___x_4019_; 
v___x_4019_ = l_Lean_Exception_isInterrupt(v_a_3947_);
if (v___x_4019_ == 0)
{
uint8_t v___x_4020_; 
lean_inc(v_a_3947_);
v___x_4020_ = l_Lean_Exception_isRuntime(v_a_3947_);
v___y_3952_ = v___x_4020_;
goto v___jp_3951_;
}
else
{
v___y_3952_ = v___x_4019_;
goto v___jp_3951_;
}
v___jp_3951_:
{
if (v___y_3952_ == 0)
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
lean_del_object(v___x_3949_);
v___x_3953_ = l_Lean_TSyntax_getId(v_id_3545_);
lean_inc(v___x_3953_);
v___x_3954_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_3953_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
if (lean_obj_tag(v_a_3955_) == 0)
{
lean_object* v___x_3956_; 
v___x_3956_ = l_Lean_Meta_Grind_getExtension_x3f(v___x_3953_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3985_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3959_ = v___x_3956_;
v_isShared_3960_ = v_isSharedCheck_3985_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3956_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3985_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
if (lean_obj_tag(v_a_3957_) == 1)
{
lean_del_object(v___x_3959_);
lean_dec(v_a_3947_);
if (lean_obj_tag(v_mod_x3f_3544_) == 1)
{
lean_object* v_val_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3975_; 
lean_dec_ref_known(v_a_3957_, 1);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_val_3961_ = lean_ctor_get(v_mod_x3f_3544_, 0);
lean_inc(v_val_3961_);
lean_dec_ref_known(v_mod_x3f_3544_, 1);
v___x_3962_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21);
v___x_3963_ = l_Lean_MessageData_ofName(v___x_3953_);
v___x_3964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3962_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_3966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_val_3961_, v___x_3966_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec(v_val_3961_);
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3975_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3970_ = v___x_3967_;
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v___x_3967_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3973_; 
if (v_isShared_3971_ == 0)
{
v___x_3973_ = v___x_3970_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_a_3968_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
else
{
lean_object* v_val_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
lean_dec(v___x_3953_);
v_val_3976_ = lean_ctor_get(v_a_3957_, 0);
lean_inc(v_val_3976_);
lean_dec_ref_known(v_a_3957_, 1);
v___x_3977_ = lean_box(0);
lean_inc_ref(v_params_3542_);
v___x_3978_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_3542_, v_val_3976_, v___x_3943_, v___x_3977_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec(v_val_3976_);
v___y_3932_ = v___x_3978_;
goto v___jp_3931_;
}
}
else
{
lean_object* v___x_3979_; uint8_t v___x_3980_; 
lean_dec(v_a_3957_);
v___x_3979_ = l_Lean_Name_getPrefix(v___x_3953_);
lean_dec(v___x_3953_);
v___x_3980_ = l_Lean_Name_isAnonymous(v___x_3979_);
lean_dec(v___x_3979_);
if (v___x_3980_ == 0)
{
lean_object* v___x_3981_; 
lean_del_object(v___x_3959_);
lean_dec(v_a_3947_);
v___x_3981_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_3542_, v_p_3543_, v_mod_x3f_3544_, v_id_3545_, v_minIndexable_3546_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
return v___x_3981_;
}
else
{
lean_object* v___x_3983_; 
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set_tag(v___x_3959_, 1);
lean_ctor_set(v___x_3959_, 0, v_a_3947_);
v___x_3983_ = v___x_3959_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3947_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_dec(v___x_3953_);
lean_dec(v_a_3947_);
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3986_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3956_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3956_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
else
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4007_; 
lean_dec_ref_known(v_a_3955_, 1);
lean_dec(v___x_3953_);
lean_dec(v_a_3947_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3994_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23);
lean_inc(v_id_3545_);
v___x_3995_ = l_Lean_MessageData_ofSyntax(v_id_3545_);
v___x_3996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3994_);
lean_ctor_set(v___x_3996_, 1, v___x_3995_);
v___x_3997_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25);
v___x_3998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3996_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v___x_3999_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_id_3545_, v___x_3998_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec(v_id_3545_);
v_a_4000_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4007_ == 0)
{
v___x_4002_ = v___x_3999_;
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___x_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4005_; 
if (v_isShared_4003_ == 0)
{
v___x_4005_ = v___x_4002_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_4000_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
}
}
else
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4015_; 
lean_dec(v___x_3953_);
lean_dec(v_a_3947_);
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_4008_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4010_ = v___x_3954_;
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v___x_3954_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4015_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4013_; 
if (v_isShared_4011_ == 0)
{
v___x_4013_ = v___x_4010_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_a_4008_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
}
else
{
lean_object* v___x_4017_; 
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
if (v_isShared_3950_ == 0)
{
v___x_4017_ = v___x_3949_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_3947_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
}
v___jp_3556_:
{
uint8_t v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = 0;
lean_inc(v___y_3557_);
v___x_3566_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v___y_3557_, v___x_3565_, v___y_3563_, v___y_3564_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
if (lean_obj_tag(v_a_3567_) == 1)
{
lean_object* v_val_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec(v___y_3557_);
v_val_3568_ = lean_ctor_get(v_a_3567_, 0);
lean_inc_n(v_val_3568_, 2);
lean_dec_ref_known(v_a_3567_, 1);
v___x_3569_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3542_, v_val_3568_, v___x_3565_);
v___x_3570_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_3568_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3581_; 
v_a_3571_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3573_ = v___x_3570_;
v_isShared_3574_ = v_isSharedCheck_3581_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3570_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3581_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
if (lean_obj_tag(v_a_3571_) == 1)
{
lean_object* v_val_3575_; lean_object* v_ctors_3576_; lean_object* v___x_3577_; 
lean_del_object(v___x_3573_);
v_val_3575_ = lean_ctor_get(v_a_3571_, 0);
lean_inc(v_val_3575_);
lean_dec_ref_known(v_a_3571_, 1);
v_ctors_3576_ = lean_ctor_get(v_val_3575_, 4);
lean_inc(v_ctors_3576_);
lean_dec(v_val_3575_);
v___x_3577_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_3543_, v_id_3545_, v_minIndexable_3546_, v_ctors_3576_, v___x_3569_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
lean_dec(v_ctors_3576_);
lean_dec(v_p_3543_);
return v___x_3577_;
}
else
{
lean_object* v___x_3579_; 
lean_dec(v_a_3571_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 0, v___x_3569_);
v___x_3579_ = v___x_3573_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3569_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
else
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
lean_dec_ref(v___x_3569_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
v_a_3582_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3584_ = v___x_3570_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3570_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_a_3582_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
}
else
{
lean_object* v_toCold_3590_; lean_object* v_currRecDepth_3591_; lean_object* v_ref_3592_; uint8_t v_diag_3593_; uint8_t v_suppressElabErrors_3594_; lean_object* v___x_3595_; lean_object* v_ref_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
lean_dec(v_a_3567_);
v_toCold_3590_ = lean_ctor_get(v___y_3563_, 0);
v_currRecDepth_3591_ = lean_ctor_get(v___y_3563_, 1);
v_ref_3592_ = lean_ctor_get(v___y_3563_, 2);
v_diag_3593_ = lean_ctor_get_uint8(v___y_3563_, sizeof(void*)*3);
v_suppressElabErrors_3594_ = lean_ctor_get_uint8(v___y_3563_, sizeof(void*)*3 + 1);
v___x_3595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__8));
v_ref_3596_ = l_Lean_replaceRef(v_p_3543_, v_ref_3592_);
lean_dec(v_p_3543_);
lean_inc(v_currRecDepth_3591_);
lean_inc_ref(v_toCold_3590_);
v___x_3597_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3597_, 0, v_toCold_3590_);
lean_ctor_set(v___x_3597_, 1, v_currRecDepth_3591_);
lean_ctor_set(v___x_3597_, 2, v_ref_3596_);
lean_ctor_set_uint8(v___x_3597_, sizeof(void*)*3, v_diag_3593_);
lean_ctor_set_uint8(v___x_3597_, sizeof(void*)*3 + 1, v_suppressElabErrors_3594_);
v___x_3598_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3542_, v_id_3545_, v___y_3557_, v___x_3595_, v_minIndexable_3546_, v___y_3558_, v___y_3558_, v___y_3561_, v___y_3562_, v___x_3597_, v___y_3564_);
lean_dec_ref_known(v___x_3597_, 3);
return v___x_3598_;
}
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
lean_dec(v___y_3557_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3599_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3566_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v___x_3566_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
v___jp_3607_:
{
lean_object* v___x_3616_; 
v___x_3616_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3546_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
lean_dec_ref_known(v___x_3616_, 1);
v___x_3617_ = l_Lean_Meta_Grind_grindExt;
v___x_3618_ = l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(v___x_3617_, v___y_3615_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; uint8_t v___x_3624_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
lean_inc(v___y_3608_);
v___x_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3620_, 0, v___y_3608_);
v___x_3621_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_a_3619_, v___x_3620_);
lean_dec_ref_known(v___x_3620_, 1);
lean_dec(v_a_3619_);
v___x_3622_ = lean_box(0);
v___x_3623_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v___y_3609_, v___x_3621_, v___x_3622_);
lean_dec(v___y_3609_);
v___x_3624_ = l_List_isEmpty___redArg(v___x_3623_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; 
lean_dec(v___y_3608_);
lean_dec(v_p_3543_);
v___x_3625_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v___x_3623_, v_params_3542_);
lean_dec(v___x_3623_);
return v___x_3625_;
}
else
{
lean_object* v___x_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec(v___x_3623_);
lean_dec_ref(v_params_3542_);
v___x_3626_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1);
v___x_3627_ = 0;
v___x_3628_ = l_Lean_MessageData_ofConstName(v___y_3608_, v___x_3627_);
v___x_3629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3626_);
lean_ctor_set(v___x_3629_, 1, v___x_3628_);
v___x_3630_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3);
v___x_3631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3629_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
v___x_3632_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_p_3543_, v___x_3631_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
lean_dec(v_p_3543_);
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3632_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3632_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3641_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3618_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3618_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
else
{
lean_object* v_a_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3656_; 
lean_dec(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3649_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3651_ = v___x_3616_;
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_a_3649_);
lean_dec(v___x_3616_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v___x_3654_; 
if (v_isShared_3652_ == 0)
{
v___x_3654_ = v___x_3651_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v_a_3649_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
}
v___jp_3657_:
{
lean_object* v___x_3664_; 
v___x_3664_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3546_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_toCold_3665_; lean_object* v_currRecDepth_3666_; lean_object* v_ref_3667_; uint8_t v_diag_3668_; uint8_t v_suppressElabErrors_3669_; lean_object* v_ref_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
lean_dec_ref_known(v___x_3664_, 1);
v_toCold_3665_ = lean_ctor_get(v___y_3662_, 0);
v_currRecDepth_3666_ = lean_ctor_get(v___y_3662_, 1);
v_ref_3667_ = lean_ctor_get(v___y_3662_, 2);
v_diag_3668_ = lean_ctor_get_uint8(v___y_3662_, sizeof(void*)*3);
v_suppressElabErrors_3669_ = lean_ctor_get_uint8(v___y_3662_, sizeof(void*)*3 + 1);
v_ref_3670_ = l_Lean_replaceRef(v_p_3543_, v_ref_3667_);
lean_dec(v_p_3543_);
lean_inc(v_currRecDepth_3666_);
lean_inc_ref(v_toCold_3665_);
v___x_3671_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3671_, 0, v_toCold_3665_);
lean_ctor_set(v___x_3671_, 1, v_currRecDepth_3666_);
lean_ctor_set(v___x_3671_, 2, v_ref_3670_);
lean_ctor_set_uint8(v___x_3671_, sizeof(void*)*3, v_diag_3668_);
lean_ctor_set_uint8(v___x_3671_, sizeof(void*)*3 + 1, v_suppressElabErrors_3669_);
lean_inc(v___y_3658_);
v___x_3672_ = l_Lean_Meta_Grind_validateCasesAttr(v___y_3658_, v___y_3659_, v___x_3671_, v___y_3663_);
lean_dec_ref_known(v___x_3671_, 3);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3680_; 
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3680_ == 0)
{
lean_object* v_unused_3681_; 
v_unused_3681_ = lean_ctor_get(v___x_3672_, 0);
lean_dec(v_unused_3681_);
v___x_3674_ = v___x_3672_;
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
else
{
lean_dec(v___x_3672_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3676_; lean_object* v___x_3678_; 
v___x_3676_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3542_, v___y_3658_, v___y_3659_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 0, v___x_3676_);
v___x_3678_ = v___x_3674_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3676_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec(v___y_3658_);
lean_dec_ref(v_params_3542_);
v_a_3682_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3672_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3672_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec(v___y_3658_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3690_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3664_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3664_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
v___jp_3698_:
{
lean_object* v_ctors_3706_; lean_object* v___x_3707_; 
v_ctors_3706_ = lean_ctor_get(v___y_3699_, 4);
lean_inc(v_ctors_3706_);
lean_dec_ref(v___y_3699_);
v___x_3707_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_3543_, v_id_3545_, v_minIndexable_3546_, v_ctors_3706_, v_params_3542_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v_ctors_3706_);
lean_dec(v_p_3543_);
return v___x_3707_;
}
v___jp_3708_:
{
uint8_t v___x_3710_; lean_object* v___x_3711_; 
v___x_3710_ = 1;
lean_inc(v_a_3709_);
v___x_3711_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_3709_, v___x_3710_, v_a_3549_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_dec_ref_known(v___x_3711_, 1);
if (lean_obj_tag(v_mod_x3f_3544_) == 1)
{
lean_object* v_val_3712_; lean_object* v___x_3713_; 
v_val_3712_ = lean_ctor_get(v_mod_x3f_3544_, 0);
lean_inc(v_val_3712_);
lean_dec_ref_known(v_mod_x3f_3544_, 1);
v___x_3713_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_3712_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3914_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3716_ = v___x_3713_;
v_isShared_3717_ = v_isSharedCheck_3914_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3713_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3914_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
switch(lean_obj_tag(v_a_3714_))
{
case 0:
{
lean_object* v_k_3718_; 
lean_del_object(v___x_3716_);
v_k_3718_ = lean_ctor_get(v_a_3714_, 0);
lean_inc(v_k_3718_);
lean_dec_ref_known(v_a_3714_, 1);
if (lean_obj_tag(v_k_3718_) == 9)
{
lean_dec(v_id_3545_);
if (v_only_3547_ == 0)
{
lean_object* v_toCold_3719_; lean_object* v_currRecDepth_3720_; lean_object* v_ref_3721_; uint8_t v_diag_3722_; uint8_t v_suppressElabErrors_3723_; lean_object* v_ref_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v_toCold_3719_ = lean_ctor_get(v_a_3553_, 0);
v_currRecDepth_3720_ = lean_ctor_get(v_a_3553_, 1);
v_ref_3721_ = lean_ctor_get(v_a_3553_, 2);
v_diag_3722_ = lean_ctor_get_uint8(v_a_3553_, sizeof(void*)*3);
v_suppressElabErrors_3723_ = lean_ctor_get_uint8(v_a_3553_, sizeof(void*)*3 + 1);
v_ref_3724_ = l_Lean_replaceRef(v_p_3543_, v_ref_3721_);
lean_inc(v_currRecDepth_3720_);
lean_inc_ref(v_toCold_3719_);
v___x_3725_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3725_, 0, v_toCold_3719_);
lean_ctor_set(v___x_3725_, 1, v_currRecDepth_3720_);
lean_ctor_set(v___x_3725_, 2, v_ref_3724_);
lean_ctor_set_uint8(v___x_3725_, sizeof(void*)*3, v_diag_3722_);
lean_ctor_set_uint8(v___x_3725_, sizeof(void*)*3 + 1, v_suppressElabErrors_3723_);
v___x_3726_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___x_3725_, v_a_3554_);
lean_dec_ref_known(v___x_3725_, 3);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_dec_ref_known(v___x_3726_, 1);
v___y_3608_ = v_a_3709_;
v___y_3609_ = v_k_3718_;
v___y_3610_ = v_a_3549_;
v___y_3611_ = v_a_3550_;
v___y_3612_ = v_a_3551_;
v___y_3613_ = v_a_3552_;
v___y_3614_ = v_a_3553_;
v___y_3615_ = v_a_3554_;
goto v___jp_3607_;
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
lean_dec(v_a_3709_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
else
{
v___y_3608_ = v_a_3709_;
v___y_3609_ = v_k_3718_;
v___y_3610_ = v_a_3549_;
v___y_3611_ = v_a_3550_;
v___y_3612_ = v_a_3551_;
v___y_3613_ = v_a_3552_;
v___y_3614_ = v_a_3553_;
v___y_3615_ = v_a_3554_;
goto v___jp_3607_;
}
}
else
{
lean_object* v_toCold_3735_; lean_object* v_currRecDepth_3736_; lean_object* v_ref_3737_; uint8_t v_diag_3738_; uint8_t v_suppressElabErrors_3739_; uint8_t v___x_3740_; lean_object* v_ref_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v_toCold_3735_ = lean_ctor_get(v_a_3553_, 0);
v_currRecDepth_3736_ = lean_ctor_get(v_a_3553_, 1);
v_ref_3737_ = lean_ctor_get(v_a_3553_, 2);
v_diag_3738_ = lean_ctor_get_uint8(v_a_3553_, sizeof(void*)*3);
v_suppressElabErrors_3739_ = lean_ctor_get_uint8(v_a_3553_, sizeof(void*)*3 + 1);
v___x_3740_ = 0;
v_ref_3741_ = l_Lean_replaceRef(v_p_3543_, v_ref_3737_);
lean_dec(v_p_3543_);
lean_inc(v_currRecDepth_3736_);
lean_inc_ref(v_toCold_3735_);
v___x_3742_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3742_, 0, v_toCold_3735_);
lean_ctor_set(v___x_3742_, 1, v_currRecDepth_3736_);
lean_ctor_set(v___x_3742_, 2, v_ref_3741_);
lean_ctor_set_uint8(v___x_3742_, sizeof(void*)*3, v_diag_3738_);
lean_ctor_set_uint8(v___x_3742_, sizeof(void*)*3 + 1, v_suppressElabErrors_3739_);
v___x_3743_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3542_, v_id_3545_, v_a_3709_, v_k_3718_, v_minIndexable_3546_, v___x_3740_, v___x_3710_, v_a_3551_, v_a_3552_, v___x_3742_, v_a_3554_);
lean_dec_ref_known(v___x_3742_, 3);
return v___x_3743_;
}
}
case 1:
{
lean_del_object(v___x_3716_);
lean_dec(v_id_3545_);
if (v_incremental_3548_ == 0)
{
uint8_t v_eager_3744_; 
v_eager_3744_ = lean_ctor_get_uint8(v_a_3714_, 0);
lean_dec_ref_known(v_a_3714_, 0);
v___y_3658_ = v_a_3709_;
v___y_3659_ = v_eager_3744_;
v___y_3660_ = v_a_3551_;
v___y_3661_ = v_a_3552_;
v___y_3662_ = v_a_3553_;
v___y_3663_ = v_a_3554_;
goto v___jp_3657_;
}
else
{
lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v_a_3747_; lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3754_; 
lean_dec_ref_known(v_a_3714_, 0);
lean_dec(v_a_3709_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3745_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_3746_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3745_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3747_ = lean_ctor_get(v___x_3746_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3746_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3749_ = v___x_3746_;
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
else
{
lean_inc(v_a_3747_);
lean_dec(v___x_3746_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_a_3747_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
}
case 2:
{
uint8_t v___x_3755_; lean_object* v___x_3756_; 
lean_del_object(v___x_3716_);
v___x_3755_ = 0;
lean_inc(v_a_3709_);
v___x_3756_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_a_3709_, v___x_3755_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
if (lean_obj_tag(v_a_3757_) == 1)
{
lean_dec(v_a_3709_);
if (v_incremental_3548_ == 0)
{
lean_object* v_val_3758_; 
v_val_3758_ = lean_ctor_get(v_a_3757_, 0);
lean_inc(v_val_3758_);
lean_dec_ref_known(v_a_3757_, 1);
v___y_3699_ = v_val_3758_;
v___y_3700_ = v_a_3549_;
v___y_3701_ = v_a_3550_;
v___y_3702_ = v_a_3551_;
v___y_3703_ = v_a_3552_;
v___y_3704_ = v_a_3553_;
v___y_3705_ = v_a_3554_;
goto v___jp_3698_;
}
else
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
lean_dec_ref_known(v_a_3757_, 1);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3759_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_3760_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3759_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v___x_3760_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_a_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
else
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec(v_a_3757_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3769_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7);
v___x_3770_ = l_Lean_MessageData_ofConstName(v_a_3709_, v___x_3755_);
v___x_3771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3769_);
lean_ctor_set(v___x_3771_, 1, v___x_3770_);
v___x_3772_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9);
v___x_3773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3771_);
lean_ctor_set(v___x_3773_, 1, v___x_3772_);
v___x_3774_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3773_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
else
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3790_; 
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3783_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3785_ = v___x_3756_;
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v___x_3756_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3783_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
return v___x_3788_;
}
}
}
}
case 3:
{
lean_del_object(v___x_3716_);
v___y_3557_ = v_a_3709_;
v___y_3558_ = v___x_3710_;
v___y_3559_ = v_a_3549_;
v___y_3560_ = v_a_3550_;
v___y_3561_ = v_a_3551_;
v___y_3562_ = v_a_3552_;
v___y_3563_ = v_a_3553_;
v___y_3564_ = v_a_3554_;
goto v___jp_3556_;
}
case 4:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
lean_del_object(v___x_3716_);
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3791_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11);
v___x_3792_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3791_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3792_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3792_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3798_; 
if (v_isShared_3796_ == 0)
{
v___x_3798_ = v___x_3795_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3793_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
}
case 5:
{
lean_object* v_prio_3801_; lean_object* v___x_3802_; 
lean_del_object(v___x_3716_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
v_prio_3801_ = lean_ctor_get(v_a_3714_, 0);
lean_inc(v_prio_3801_);
lean_dec_ref_known(v_a_3714_, 1);
v___x_3802_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3546_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3826_; 
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3826_ == 0)
{
lean_object* v_unused_3827_; 
v_unused_3827_ = lean_ctor_get(v___x_3802_, 0);
lean_dec(v_unused_3827_);
v___x_3804_ = v___x_3802_;
v_isShared_3805_ = v_isSharedCheck_3826_;
goto v_resetjp_3803_;
}
else
{
lean_dec(v___x_3802_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3826_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v_config_3806_; lean_object* v_extensions_3807_; lean_object* v_extra_3808_; lean_object* v_extraInj_3809_; lean_object* v_extraFacts_3810_; lean_object* v_symPrios_3811_; lean_object* v_norm_3812_; lean_object* v_normProcs_3813_; lean_object* v_anchorRefs_x3f_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3825_; 
v_config_3806_ = lean_ctor_get(v_params_3542_, 0);
v_extensions_3807_ = lean_ctor_get(v_params_3542_, 1);
v_extra_3808_ = lean_ctor_get(v_params_3542_, 2);
v_extraInj_3809_ = lean_ctor_get(v_params_3542_, 3);
v_extraFacts_3810_ = lean_ctor_get(v_params_3542_, 4);
v_symPrios_3811_ = lean_ctor_get(v_params_3542_, 5);
v_norm_3812_ = lean_ctor_get(v_params_3542_, 6);
v_normProcs_3813_ = lean_ctor_get(v_params_3542_, 7);
v_anchorRefs_x3f_3814_ = lean_ctor_get(v_params_3542_, 8);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_params_3542_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3816_ = v_params_3542_;
v_isShared_3817_ = v_isSharedCheck_3825_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_anchorRefs_x3f_3814_);
lean_inc(v_normProcs_3813_);
lean_inc(v_norm_3812_);
lean_inc(v_symPrios_3811_);
lean_inc(v_extraFacts_3810_);
lean_inc(v_extraInj_3809_);
lean_inc(v_extra_3808_);
lean_inc(v_extensions_3807_);
lean_inc(v_config_3806_);
lean_dec(v_params_3542_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3825_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3818_; lean_object* v___x_3820_; 
v___x_3818_ = l_Lean_Meta_Grind_SymbolPriorities_insert(v_symPrios_3811_, v_a_3709_, v_prio_3801_);
if (v_isShared_3817_ == 0)
{
lean_ctor_set(v___x_3816_, 5, v___x_3818_);
v___x_3820_ = v___x_3816_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_config_3806_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v_extensions_3807_);
lean_ctor_set(v_reuseFailAlloc_3824_, 2, v_extra_3808_);
lean_ctor_set(v_reuseFailAlloc_3824_, 3, v_extraInj_3809_);
lean_ctor_set(v_reuseFailAlloc_3824_, 4, v_extraFacts_3810_);
lean_ctor_set(v_reuseFailAlloc_3824_, 5, v___x_3818_);
lean_ctor_set(v_reuseFailAlloc_3824_, 6, v_norm_3812_);
lean_ctor_set(v_reuseFailAlloc_3824_, 7, v_normProcs_3813_);
lean_ctor_set(v_reuseFailAlloc_3824_, 8, v_anchorRefs_x3f_3814_);
v___x_3820_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3822_; 
if (v_isShared_3805_ == 0)
{
lean_ctor_set(v___x_3804_, 0, v___x_3820_);
v___x_3822_ = v___x_3804_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
}
else
{
lean_object* v_a_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3835_; 
lean_dec(v_prio_3801_);
lean_dec(v_a_3709_);
lean_dec_ref(v_params_3542_);
v_a_3828_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3830_ = v___x_3802_;
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_a_3828_);
lean_dec(v___x_3802_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3833_; 
if (v_isShared_3831_ == 0)
{
v___x_3833_ = v___x_3830_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v_a_3828_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
}
case 6:
{
lean_object* v___x_3836_; 
lean_del_object(v___x_3716_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
v___x_3836_ = l_Lean_Meta_Grind_mkInjectiveTheorem(v_a_3709_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3861_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3839_ = v___x_3836_;
v_isShared_3840_ = v_isSharedCheck_3861_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3836_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3861_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v_config_3841_; lean_object* v_extensions_3842_; lean_object* v_extra_3843_; lean_object* v_extraInj_3844_; lean_object* v_extraFacts_3845_; lean_object* v_symPrios_3846_; lean_object* v_norm_3847_; lean_object* v_normProcs_3848_; lean_object* v_anchorRefs_x3f_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3860_; 
v_config_3841_ = lean_ctor_get(v_params_3542_, 0);
v_extensions_3842_ = lean_ctor_get(v_params_3542_, 1);
v_extra_3843_ = lean_ctor_get(v_params_3542_, 2);
v_extraInj_3844_ = lean_ctor_get(v_params_3542_, 3);
v_extraFacts_3845_ = lean_ctor_get(v_params_3542_, 4);
v_symPrios_3846_ = lean_ctor_get(v_params_3542_, 5);
v_norm_3847_ = lean_ctor_get(v_params_3542_, 6);
v_normProcs_3848_ = lean_ctor_get(v_params_3542_, 7);
v_anchorRefs_x3f_3849_ = lean_ctor_get(v_params_3542_, 8);
v_isSharedCheck_3860_ = !lean_is_exclusive(v_params_3542_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3851_ = v_params_3542_;
v_isShared_3852_ = v_isSharedCheck_3860_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_anchorRefs_x3f_3849_);
lean_inc(v_normProcs_3848_);
lean_inc(v_norm_3847_);
lean_inc(v_symPrios_3846_);
lean_inc(v_extraFacts_3845_);
lean_inc(v_extraInj_3844_);
lean_inc(v_extra_3843_);
lean_inc(v_extensions_3842_);
lean_inc(v_config_3841_);
lean_dec(v_params_3542_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3860_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
v___x_3853_ = l_Lean_PersistentArray_push___redArg(v_extraInj_3844_, v_a_3837_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 3, v___x_3853_);
v___x_3855_ = v___x_3851_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_config_3841_);
lean_ctor_set(v_reuseFailAlloc_3859_, 1, v_extensions_3842_);
lean_ctor_set(v_reuseFailAlloc_3859_, 2, v_extra_3843_);
lean_ctor_set(v_reuseFailAlloc_3859_, 3, v___x_3853_);
lean_ctor_set(v_reuseFailAlloc_3859_, 4, v_extraFacts_3845_);
lean_ctor_set(v_reuseFailAlloc_3859_, 5, v_symPrios_3846_);
lean_ctor_set(v_reuseFailAlloc_3859_, 6, v_norm_3847_);
lean_ctor_set(v_reuseFailAlloc_3859_, 7, v_normProcs_3848_);
lean_ctor_set(v_reuseFailAlloc_3859_, 8, v_anchorRefs_x3f_3849_);
v___x_3855_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
lean_object* v___x_3857_; 
if (v_isShared_3840_ == 0)
{
lean_ctor_set(v___x_3839_, 0, v___x_3855_);
v___x_3857_ = v___x_3839_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec_ref(v_params_3542_);
v_a_3862_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3836_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3836_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
case 7:
{
lean_object* v___x_3870_; lean_object* v___x_3872_; 
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
v___x_3870_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(v_params_3542_, v_a_3709_);
if (v_isShared_3717_ == 0)
{
lean_ctor_set(v___x_3716_, 0, v___x_3870_);
v___x_3872_ = v___x_3716_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3870_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
case 8:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
lean_dec_ref_known(v_a_3714_, 0);
lean_del_object(v___x_3716_);
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3874_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13);
v___x_3875_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3874_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
case 9:
{
lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3893_; 
lean_del_object(v___x_3716_);
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3884_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15);
v___x_3885_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3884_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3888_ = v___x_3885_;
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3885_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
case 10:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3903_; 
lean_del_object(v___x_3716_);
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3894_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17);
v___x_3895_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3894_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3898_ = v___x_3895_;
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3895_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
default: 
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
lean_del_object(v___x_3716_);
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v___x_3904_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19);
v___x_3905_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_3904_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
v_a_3906_ = lean_ctor_get(v___x_3905_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3905_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3905_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3905_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
}
}
else
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3922_; 
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3915_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3917_ = v___x_3713_;
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v___x_3713_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v___x_3920_; 
if (v_isShared_3918_ == 0)
{
v___x_3920_ = v___x_3917_;
goto v_reusejp_3919_;
}
else
{
lean_object* v_reuseFailAlloc_3921_; 
v_reuseFailAlloc_3921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3921_, 0, v_a_3915_);
v___x_3920_ = v_reuseFailAlloc_3921_;
goto v_reusejp_3919_;
}
v_reusejp_3919_:
{
return v___x_3920_;
}
}
}
}
else
{
lean_dec(v_mod_x3f_3544_);
v___y_3557_ = v_a_3709_;
v___y_3558_ = v___x_3710_;
v___y_3559_ = v_a_3549_;
v___y_3560_ = v_a_3550_;
v___y_3561_ = v_a_3551_;
v___y_3562_ = v_a_3552_;
v___y_3563_ = v_a_3553_;
v___y_3564_ = v_a_3554_;
goto v___jp_3556_;
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
lean_dec(v_a_3709_);
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3923_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3711_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3711_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
v___jp_3931_:
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3942_; 
v_a_3933_ = lean_ctor_get(v___y_3932_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___y_3932_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3935_ = v___y_3932_;
v_isShared_3936_ = v_isSharedCheck_3942_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___y_3932_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3942_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
if (lean_obj_tag(v_a_3933_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3939_; 
lean_dec(v_id_3545_);
lean_dec(v_mod_x3f_3544_);
lean_dec(v_p_3543_);
lean_dec_ref(v_params_3542_);
v_a_3937_ = lean_ctor_get(v_a_3933_, 0);
lean_inc(v_a_3937_);
lean_dec_ref_known(v_a_3933_, 1);
if (v_isShared_3936_ == 0)
{
lean_ctor_set(v___x_3935_, 0, v_a_3937_);
v___x_3939_ = v___x_3935_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3937_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
else
{
lean_object* v_a_3941_; 
lean_del_object(v___x_3935_);
v_a_3941_ = lean_ctor_get(v_a_3933_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v_a_3933_, 1);
v_a_3709_ = v_a_3941_;
goto v___jp_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object* v_params_4022_, lean_object* v_p_4023_, lean_object* v_mod_x3f_4024_, lean_object* v_id_4025_, lean_object* v_minIndexable_4026_, lean_object* v_only_4027_, lean_object* v_incremental_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_){
_start:
{
uint8_t v_minIndexable_boxed_4036_; uint8_t v_only_boxed_4037_; uint8_t v_incremental_boxed_4038_; lean_object* v_res_4039_; 
v_minIndexable_boxed_4036_ = lean_unbox(v_minIndexable_4026_);
v_only_boxed_4037_ = lean_unbox(v_only_4027_);
v_incremental_boxed_4038_ = lean_unbox(v_incremental_4028_);
v_res_4039_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_params_4022_, v_p_4023_, v_mod_x3f_4024_, v_id_4025_, v_minIndexable_boxed_4036_, v_only_boxed_4037_, v_incremental_boxed_4038_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_, v_a_4034_);
lean_dec(v_a_4034_);
lean_dec_ref(v_a_4033_);
lean_dec(v_a_4032_);
lean_dec_ref(v_a_4031_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
return v_res_4039_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object* v_p_4040_, lean_object* v_id_4041_, uint8_t v_minIndexable_4042_, lean_object* v_as_4043_, lean_object* v_as_x27_4044_, lean_object* v_b_4045_, lean_object* v_a_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_4040_, v_id_4041_, v_minIndexable_4042_, v_as_x27_4044_, v_b_4045_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object* v_p_4055_, lean_object* v_id_4056_, lean_object* v_minIndexable_4057_, lean_object* v_as_4058_, lean_object* v_as_x27_4059_, lean_object* v_b_4060_, lean_object* v_a_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_){
_start:
{
uint8_t v_minIndexable_boxed_4069_; lean_object* v_res_4070_; 
v_minIndexable_boxed_4069_ = lean_unbox(v_minIndexable_4057_);
v_res_4070_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(v_p_4055_, v_id_4056_, v_minIndexable_boxed_4069_, v_as_4058_, v_as_x27_4059_, v_b_4060_, v_a_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
lean_dec(v_as_x27_4059_);
lean_dec(v_as_4058_);
lean_dec(v_p_4055_);
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object* v_as_4071_, lean_object* v_as_x27_4072_, lean_object* v_b_4073_, lean_object* v_a_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
lean_object* v___x_4082_; 
v___x_4082_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_4072_, v_b_4073_);
return v___x_4082_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object* v_as_4083_, lean_object* v_as_x27_4084_, lean_object* v_b_4085_, lean_object* v_a_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
lean_object* v_res_4094_; 
v_res_4094_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(v_as_4083_, v_as_x27_4084_, v_b_4085_, v_a_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
lean_dec(v_as_x27_4084_);
lean_dec(v_as_4083_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object* v_00_u03b1_4095_, lean_object* v_ref_4096_, lean_object* v_msg_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v___x_4105_; 
v___x_4105_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_4096_, v_msg_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_);
return v___x_4105_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object* v_00_u03b1_4106_, lean_object* v_ref_4107_, lean_object* v_msg_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_){
_start:
{
lean_object* v_res_4116_; 
v_res_4116_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(v_00_u03b1_4106_, v_ref_4107_, v_msg_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec(v___y_4112_);
lean_dec_ref(v___y_4111_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
lean_dec(v_ref_4107_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object* v_p_4117_, lean_object* v_id_4118_, uint8_t v_minIndexable_4119_, lean_object* v_as_4120_, lean_object* v_as_x27_4121_, lean_object* v_b_4122_, lean_object* v_a_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v___x_4131_; 
v___x_4131_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_4117_, v_id_4118_, v_minIndexable_4119_, v_as_x27_4121_, v_b_4122_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object* v_p_4132_, lean_object* v_id_4133_, lean_object* v_minIndexable_4134_, lean_object* v_as_4135_, lean_object* v_as_x27_4136_, lean_object* v_b_4137_, lean_object* v_a_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_){
_start:
{
uint8_t v_minIndexable_boxed_4146_; lean_object* v_res_4147_; 
v_minIndexable_boxed_4146_ = lean_unbox(v_minIndexable_4134_);
v_res_4147_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(v_p_4132_, v_id_4133_, v_minIndexable_boxed_4146_, v_as_4135_, v_as_x27_4136_, v_b_4137_, v_a_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v_as_x27_4136_);
lean_dec(v_as_4135_);
lean_dec(v_p_4132_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object* v_00_u03b4_4148_, lean_object* v_t_4149_, lean_object* v_k_4150_){
_start:
{
lean_object* v___x_4151_; 
v___x_4151_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_t_4149_, v_k_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object* v_00_u03b4_4152_, lean_object* v_t_4153_, lean_object* v_k_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(v_00_u03b4_4152_, v_t_4153_, v_k_4154_);
lean_dec(v_k_4154_);
lean_dec(v_t_4153_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(lean_object* v_givenName_4156_, uint8_t v_skipAuxDecl_4157_, lean_object* v_auxDeclToFullName_4158_, lean_object* v___x_4159_, lean_object* v_givenNameView_4160_, lean_object* v_as_4161_, lean_object* v_i_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_4156_, v_skipAuxDecl_4157_, v_auxDeclToFullName_4158_, v___x_4159_, v_givenNameView_4160_, v_as_4161_, v_i_4162_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___boxed(lean_object* v_givenName_4165_, lean_object* v_skipAuxDecl_4166_, lean_object* v_auxDeclToFullName_4167_, lean_object* v___x_4168_, lean_object* v_givenNameView_4169_, lean_object* v_as_4170_, lean_object* v_i_4171_, lean_object* v_a_4172_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4173_; lean_object* v_res_4174_; 
v_skipAuxDecl_boxed_4173_ = lean_unbox(v_skipAuxDecl_4166_);
v_res_4174_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(v_givenName_4165_, v_skipAuxDecl_boxed_4173_, v_auxDeclToFullName_4167_, v___x_4168_, v_givenNameView_4169_, v_as_4170_, v_i_4171_, v_a_4172_);
lean_dec_ref(v_as_4170_);
lean_dec(v_auxDeclToFullName_4167_);
lean_dec(v_givenName_4165_);
return v_res_4174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(lean_object* v_localDecl_x3f_4175_, lean_object* v_givenName_4176_, lean_object* v_as_4177_, lean_object* v_i_4178_, lean_object* v_a_4179_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_4175_, v_givenName_4176_, v_as_4177_, v_i_4178_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___boxed(lean_object* v_localDecl_x3f_4181_, lean_object* v_givenName_4182_, lean_object* v_as_4183_, lean_object* v_i_4184_, lean_object* v_a_4185_){
_start:
{
lean_object* v_res_4186_; 
v_res_4186_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(v_localDecl_x3f_4181_, v_givenName_4182_, v_as_4183_, v_i_4184_, v_a_4185_);
lean_dec_ref(v_as_4183_);
lean_dec(v_givenName_4182_);
lean_dec(v_localDecl_x3f_4181_);
return v_res_4186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(lean_object* v_givenName_4187_, uint8_t v_skipAuxDecl_4188_, lean_object* v_auxDeclToFullName_4189_, lean_object* v___x_4190_, lean_object* v_givenNameView_4191_, lean_object* v_as_4192_, lean_object* v_i_4193_, lean_object* v_a_4194_){
_start:
{
lean_object* v___x_4195_; 
v___x_4195_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_4187_, v_skipAuxDecl_4188_, v_auxDeclToFullName_4189_, v___x_4190_, v_givenNameView_4191_, v_as_4192_, v_i_4193_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___boxed(lean_object* v_givenName_4196_, lean_object* v_skipAuxDecl_4197_, lean_object* v_auxDeclToFullName_4198_, lean_object* v___x_4199_, lean_object* v_givenNameView_4200_, lean_object* v_as_4201_, lean_object* v_i_4202_, lean_object* v_a_4203_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4204_; lean_object* v_res_4205_; 
v_skipAuxDecl_boxed_4204_ = lean_unbox(v_skipAuxDecl_4197_);
v_res_4205_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(v_givenName_4196_, v_skipAuxDecl_boxed_4204_, v_auxDeclToFullName_4198_, v___x_4199_, v_givenNameView_4200_, v_as_4201_, v_i_4202_, v_a_4203_);
lean_dec_ref(v_as_4201_);
lean_dec(v_auxDeclToFullName_4198_);
lean_dec(v_givenName_4196_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(lean_object* v_localDecl_x3f_4206_, lean_object* v_givenName_4207_, lean_object* v_as_4208_, lean_object* v_i_4209_, lean_object* v_a_4210_){
_start:
{
lean_object* v___x_4211_; 
v___x_4211_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_4206_, v_givenName_4207_, v_as_4208_, v_i_4209_);
return v___x_4211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___boxed(lean_object* v_localDecl_x3f_4212_, lean_object* v_givenName_4213_, lean_object* v_as_4214_, lean_object* v_i_4215_, lean_object* v_a_4216_){
_start:
{
lean_object* v_res_4217_; 
v_res_4217_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(v_localDecl_x3f_4212_, v_givenName_4213_, v_as_4214_, v_i_4215_, v_a_4216_);
lean_dec_ref(v_as_4214_);
lean_dec(v_givenName_4213_);
lean_dec(v_localDecl_x3f_4212_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(lean_object* v_opt_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v___x_4226_; 
v___x_4226_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v_opt_4218_, v___y_4223_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___boxed(lean_object* v_opt_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(v_opt_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
lean_dec(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
lean_dec(v___y_4229_);
lean_dec_ref(v___y_4228_);
lean_dec_ref(v_opt_4227_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(lean_object* v_ref_4236_, lean_object* v_msgData_4237_, uint8_t v_severity_4238_, uint8_t v_isSilent_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
lean_object* v___x_4247_; 
v___x_4247_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_4236_, v_msgData_4237_, v_severity_4238_, v_isSilent_4239_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___boxed(lean_object* v_ref_4248_, lean_object* v_msgData_4249_, lean_object* v_severity_4250_, lean_object* v_isSilent_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
uint8_t v_severity_boxed_4259_; uint8_t v_isSilent_boxed_4260_; lean_object* v_res_4261_; 
v_severity_boxed_4259_ = lean_unbox(v_severity_4250_);
v_isSilent_boxed_4260_ = lean_unbox(v_isSilent_4251_);
v_res_4261_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(v_ref_4248_, v_msgData_4249_, v_severity_boxed_4259_, v_isSilent_boxed_4260_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v_ref_4248_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object* v___x_4262_, uint8_t v___x_4263_, lean_object* v_b_4264_, lean_object* v_____r_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4273_ = lean_box(0);
v___x_4274_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_4262_, v___x_4273_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4274_) == 0)
{
lean_object* v_a_4275_; lean_object* v___x_4276_; 
v_a_4275_ = lean_ctor_get(v___x_4274_, 0);
lean_inc_n(v_a_4275_, 2);
lean_dec_ref_known(v___x_4274_, 1);
v___x_4276_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_4275_, v___x_4263_, v___y_4266_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4276_) == 0)
{
uint8_t v___x_4277_; lean_object* v___x_4278_; 
lean_dec_ref_known(v___x_4276_, 1);
v___x_4277_ = 0;
lean_inc(v_a_4275_);
v___x_4278_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_a_4275_, v___x_4277_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4338_; 
v_a_4279_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4281_ = v___x_4278_;
v_isShared_4282_ = v_isSharedCheck_4338_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v___x_4278_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4338_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
if (lean_obj_tag(v_a_4279_) == 1)
{
lean_object* v_val_4283_; lean_object* v___x_4284_; 
lean_del_object(v___x_4281_);
lean_dec(v_a_4275_);
v_val_4283_ = lean_ctor_get(v_a_4279_, 0);
lean_inc_n(v_val_4283_, 2);
lean_dec_ref_known(v_a_4279_, 1);
v___x_4284_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_val_4283_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4284_) == 0)
{
lean_object* v___x_4285_; 
lean_dec_ref_known(v___x_4284_, 1);
v___x_4285_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_b_4264_, v_val_4283_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4295_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4288_ = v___x_4285_;
v_isShared_4289_ = v_isSharedCheck_4295_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4285_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4295_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4293_; 
v___x_4290_ = lean_box(0);
v___x_4291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4290_);
lean_ctor_set(v___x_4291_, 1, v_a_4286_);
if (v_isShared_4289_ == 0)
{
lean_ctor_set(v___x_4288_, 0, v___x_4291_);
v___x_4293_ = v___x_4288_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v___x_4291_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
v_a_4296_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4285_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4285_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec(v_val_4283_);
lean_dec_ref(v_b_4264_);
v_a_4304_ = lean_ctor_get(v___x_4284_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4284_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4284_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4284_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4304_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
else
{
uint8_t v___x_4312_; 
lean_dec(v_a_4279_);
lean_inc(v_a_4275_);
v___x_4312_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_b_4264_, v_a_4275_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; 
lean_del_object(v___x_4281_);
v___x_4313_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_b_4264_, v_a_4275_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v_a_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4323_; 
v_a_4314_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4316_ = v___x_4313_;
v_isShared_4317_ = v_isSharedCheck_4323_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_a_4314_);
lean_dec(v___x_4313_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4323_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4321_; 
v___x_4318_ = lean_box(0);
v___x_4319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4318_);
lean_ctor_set(v___x_4319_, 1, v_a_4314_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 0, v___x_4319_);
v___x_4321_ = v___x_4316_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v___x_4319_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
return v___x_4321_;
}
}
}
else
{
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
v_a_4324_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___x_4313_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___x_4313_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_a_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
else
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4336_; 
v___x_4332_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(v_b_4264_, v_a_4275_);
v___x_4333_ = lean_box(0);
v___x_4334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4333_);
lean_ctor_set(v___x_4334_, 1, v___x_4332_);
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 0, v___x_4334_);
v___x_4336_ = v___x_4281_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
lean_dec(v_a_4275_);
lean_dec_ref(v_b_4264_);
v_a_4339_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4278_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4278_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4344_; 
if (v_isShared_4342_ == 0)
{
v___x_4344_ = v___x_4341_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
lean_dec(v_a_4275_);
lean_dec_ref(v_b_4264_);
v_a_4347_ = lean_ctor_get(v___x_4276_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4276_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4276_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4276_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
else
{
lean_object* v_a_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4362_; 
lean_dec_ref(v_b_4264_);
v_a_4355_ = lean_ctor_get(v___x_4274_, 0);
v_isSharedCheck_4362_ = !lean_is_exclusive(v___x_4274_);
if (v_isSharedCheck_4362_ == 0)
{
v___x_4357_ = v___x_4274_;
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_a_4355_);
lean_dec(v___x_4274_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_a_4355_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
return v___x_4360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object* v___x_4363_, lean_object* v___x_4364_, lean_object* v_b_4365_, lean_object* v_____r_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
uint8_t v___x_17510__boxed_4374_; lean_object* v_res_4375_; 
v___x_17510__boxed_4374_ = lean_unbox(v___x_4364_);
v_res_4375_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4363_, v___x_17510__boxed_4374_, v_b_4365_, v_____r_4366_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec(v___y_4370_);
lean_dec_ref(v___y_4369_);
lean_dec(v___y_4368_);
lean_dec_ref(v___y_4367_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object* v___x_4379_, lean_object* v_b_4380_, lean_object* v_a_4381_, uint8_t v___x_4382_, uint8_t v_only_4383_, uint8_t v_incremental_4384_, lean_object* v_x_4385_, lean_object* v_mod_x3f_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; 
v___x_4394_ = lean_unsigned_to_nat(1u);
v___x_4395_ = l_Lean_Syntax_getArg(v___x_4379_, v___x_4394_);
if (v___x_4382_ == 0)
{
lean_object* v___x_4456_; uint8_t v___x_4457_; 
v___x_4456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4395_);
v___x_4457_ = l_Lean_Syntax_isOfKind(v___x_4395_, v___x_4456_);
if (v___x_4457_ == 0)
{
lean_object* v___x_4458_; 
v___x_4458_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4380_, v_a_4381_, v_mod_x3f_4386_, v___x_4395_, v___x_4382_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4458_) == 0)
{
lean_object* v_a_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4468_; 
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4461_ = v___x_4458_;
v_isShared_4462_ = v_isSharedCheck_4468_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_a_4459_);
lean_dec(v___x_4458_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4468_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4466_; 
v___x_4463_ = lean_box(0);
v___x_4464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
lean_ctor_set(v___x_4464_, 1, v_a_4459_);
if (v_isShared_4462_ == 0)
{
lean_ctor_set(v___x_4461_, 0, v___x_4464_);
v___x_4466_ = v___x_4461_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v___x_4464_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
else
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
v_a_4469_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v___x_4458_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4458_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
}
}
else
{
goto v___jp_4416_;
}
}
else
{
goto v___jp_4416_;
}
v___jp_4396_:
{
lean_object* v___x_4397_; 
v___x_4397_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4380_, v_a_4381_, v_mod_x3f_4386_, v___x_4395_, v___x_4382_, v_only_4383_, v_incremental_4384_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4397_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4407_; 
v_a_4398_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4400_ = v___x_4397_;
v_isShared_4401_ = v_isSharedCheck_4407_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4397_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4407_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4405_; 
v___x_4402_ = lean_box(0);
v___x_4403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
lean_ctor_set(v___x_4403_, 1, v_a_4398_);
if (v_isShared_4401_ == 0)
{
lean_ctor_set(v___x_4400_, 0, v___x_4403_);
v___x_4405_ = v___x_4400_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v___x_4403_);
v___x_4405_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
return v___x_4405_;
}
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
v_a_4408_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4397_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4397_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
v___jp_4416_:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; 
v___x_4417_ = l_Lean_TSyntax_getId(v___x_4395_);
v___x_4418_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4417_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_object* v_a_4419_; 
v_a_4419_ = lean_ctor_get(v___x_4418_, 0);
lean_inc(v_a_4419_);
lean_dec_ref_known(v___x_4418_, 1);
if (lean_obj_tag(v_a_4419_) == 1)
{
lean_object* v_val_4420_; lean_object* v_snd_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4446_; 
v_val_4420_ = lean_ctor_get(v_a_4419_, 0);
lean_inc(v_val_4420_);
lean_dec_ref_known(v_a_4419_, 1);
v_snd_4421_ = lean_ctor_get(v_val_4420_, 1);
v_isSharedCheck_4446_ = !lean_is_exclusive(v_val_4420_);
if (v_isSharedCheck_4446_ == 0)
{
lean_object* v_unused_4447_; 
v_unused_4447_ = lean_ctor_get(v_val_4420_, 0);
lean_dec(v_unused_4447_);
v___x_4423_ = v_val_4420_;
v_isShared_4424_ = v_isSharedCheck_4446_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_snd_4421_);
lean_dec(v_val_4420_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4446_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
if (lean_obj_tag(v_snd_4421_) == 1)
{
lean_object* v___x_4425_; 
lean_dec_ref_known(v_snd_4421_, 2);
v___x_4425_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4380_, v_a_4381_, v_mod_x3f_4386_, v___x_4395_, v___x_4382_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4437_; 
v_a_4426_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4428_ = v___x_4425_;
v_isShared_4429_ = v_isSharedCheck_4437_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4425_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4437_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4430_; lean_object* v___x_4432_; 
v___x_4430_ = lean_box(0);
if (v_isShared_4424_ == 0)
{
lean_ctor_set(v___x_4423_, 1, v_a_4426_);
lean_ctor_set(v___x_4423_, 0, v___x_4430_);
v___x_4432_ = v___x_4423_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4436_, 1, v_a_4426_);
v___x_4432_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
lean_object* v___x_4434_; 
if (v_isShared_4429_ == 0)
{
lean_ctor_set(v___x_4428_, 0, v___x_4432_);
v___x_4434_ = v___x_4428_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v___x_4432_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
else
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
lean_del_object(v___x_4423_);
v_a_4438_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4425_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4425_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
}
else
{
lean_del_object(v___x_4423_);
lean_dec(v_snd_4421_);
goto v___jp_4396_;
}
}
}
else
{
lean_dec(v_a_4419_);
goto v___jp_4396_;
}
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_dec(v___x_4395_);
lean_dec(v_mod_x3f_4386_);
lean_dec(v_a_4381_);
lean_dec_ref(v_b_4380_);
v_a_4448_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4418_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4418_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object* v___x_4477_, lean_object* v_b_4478_, lean_object* v_a_4479_, lean_object* v___x_4480_, lean_object* v_only_4481_, lean_object* v_incremental_4482_, lean_object* v_x_4483_, lean_object* v_mod_x3f_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_){
_start:
{
uint8_t v___x_17728__boxed_4492_; uint8_t v_only_boxed_4493_; uint8_t v_incremental_boxed_4494_; lean_object* v_res_4495_; 
v___x_17728__boxed_4492_ = lean_unbox(v___x_4480_);
v_only_boxed_4493_ = lean_unbox(v_only_4481_);
v_incremental_boxed_4494_ = lean_unbox(v_incremental_4482_);
v_res_4495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4477_, v_b_4478_, v_a_4479_, v___x_17728__boxed_4492_, v_only_boxed_4493_, v_incremental_boxed_4494_, v_x_4483_, v_mod_x3f_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_);
lean_dec(v___y_4490_);
lean_dec_ref(v___y_4489_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
lean_dec(v___y_4486_);
lean_dec_ref(v___y_4485_);
lean_dec(v___x_4477_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object* v_b_4496_, lean_object* v___x_4497_, lean_object* v_____r_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_){
_start:
{
lean_object* v___x_4506_; 
v___x_4506_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_b_4496_, v___x_4497_, v___y_4503_, v___y_4504_);
if (lean_obj_tag(v___x_4506_) == 0)
{
lean_object* v_a_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4516_; 
v_a_4507_ = lean_ctor_get(v___x_4506_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4506_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4509_ = v___x_4506_;
v_isShared_4510_ = v_isSharedCheck_4516_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_a_4507_);
lean_dec(v___x_4506_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4516_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4514_; 
v___x_4511_ = lean_box(0);
v___x_4512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
lean_ctor_set(v___x_4512_, 1, v_a_4507_);
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 0, v___x_4512_);
v___x_4514_ = v___x_4509_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v___x_4512_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
v_a_4517_ = lean_ctor_get(v___x_4506_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4506_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4506_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4506_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object* v_b_4525_, lean_object* v___x_4526_, lean_object* v_____r_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v_res_4535_; 
v_res_4535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4525_, v___x_4526_, v_____r_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v___x_4526_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object* v___x_4536_, lean_object* v_b_4537_, lean_object* v_a_4538_, uint8_t v___x_4539_, uint8_t v_only_4540_, uint8_t v_incremental_4541_, uint8_t v___x_4542_, lean_object* v_x_4543_, lean_object* v_mod_x3f_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v___x_4552_; lean_object* v___x_4553_; 
v___x_4552_ = lean_unsigned_to_nat(2u);
v___x_4553_ = l_Lean_Syntax_getArg(v___x_4536_, v___x_4552_);
if (v___x_4542_ == 0)
{
lean_object* v___x_4614_; uint8_t v___x_4615_; 
v___x_4614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4553_);
v___x_4615_ = l_Lean_Syntax_isOfKind(v___x_4553_, v___x_4614_);
if (v___x_4615_ == 0)
{
lean_object* v___x_4616_; 
v___x_4616_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4537_, v_a_4538_, v_mod_x3f_4544_, v___x_4553_, v___x_4539_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v_a_4617_; lean_object* v___x_4619_; uint8_t v_isShared_4620_; uint8_t v_isSharedCheck_4626_; 
v_a_4617_ = lean_ctor_get(v___x_4616_, 0);
v_isSharedCheck_4626_ = !lean_is_exclusive(v___x_4616_);
if (v_isSharedCheck_4626_ == 0)
{
v___x_4619_ = v___x_4616_;
v_isShared_4620_ = v_isSharedCheck_4626_;
goto v_resetjp_4618_;
}
else
{
lean_inc(v_a_4617_);
lean_dec(v___x_4616_);
v___x_4619_ = lean_box(0);
v_isShared_4620_ = v_isSharedCheck_4626_;
goto v_resetjp_4618_;
}
v_resetjp_4618_:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4624_; 
v___x_4621_ = lean_box(0);
v___x_4622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
lean_ctor_set(v___x_4622_, 1, v_a_4617_);
if (v_isShared_4620_ == 0)
{
lean_ctor_set(v___x_4619_, 0, v___x_4622_);
v___x_4624_ = v___x_4619_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4622_);
v___x_4624_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
return v___x_4624_;
}
}
}
else
{
lean_object* v_a_4627_; lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4634_; 
v_a_4627_ = lean_ctor_get(v___x_4616_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4616_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4629_ = v___x_4616_;
v_isShared_4630_ = v_isSharedCheck_4634_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_a_4627_);
lean_dec(v___x_4616_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4634_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
lean_object* v___x_4632_; 
if (v_isShared_4630_ == 0)
{
v___x_4632_ = v___x_4629_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_a_4627_);
v___x_4632_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
return v___x_4632_;
}
}
}
}
else
{
goto v___jp_4574_;
}
}
else
{
goto v___jp_4574_;
}
v___jp_4554_:
{
lean_object* v___x_4555_; 
v___x_4555_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4537_, v_a_4538_, v_mod_x3f_4544_, v___x_4553_, v___x_4539_, v_only_4540_, v_incremental_4541_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_);
if (lean_obj_tag(v___x_4555_) == 0)
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4565_; 
v_a_4556_ = lean_ctor_get(v___x_4555_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4555_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4558_ = v___x_4555_;
v_isShared_4559_ = v_isSharedCheck_4565_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4555_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4565_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4563_; 
v___x_4560_ = lean_box(0);
v___x_4561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4560_);
lean_ctor_set(v___x_4561_, 1, v_a_4556_);
if (v_isShared_4559_ == 0)
{
lean_ctor_set(v___x_4558_, 0, v___x_4561_);
v___x_4563_ = v___x_4558_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v___x_4561_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
v_a_4566_ = lean_ctor_get(v___x_4555_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4555_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v___x_4555_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_a_4566_);
lean_dec(v___x_4555_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
v___jp_4574_:
{
lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4575_ = l_Lean_TSyntax_getId(v___x_4553_);
v___x_4576_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4575_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_);
if (lean_obj_tag(v___x_4576_) == 0)
{
lean_object* v_a_4577_; 
v_a_4577_ = lean_ctor_get(v___x_4576_, 0);
lean_inc(v_a_4577_);
lean_dec_ref_known(v___x_4576_, 1);
if (lean_obj_tag(v_a_4577_) == 1)
{
lean_object* v_val_4578_; lean_object* v_snd_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4604_; 
v_val_4578_ = lean_ctor_get(v_a_4577_, 0);
lean_inc(v_val_4578_);
lean_dec_ref_known(v_a_4577_, 1);
v_snd_4579_ = lean_ctor_get(v_val_4578_, 1);
v_isSharedCheck_4604_ = !lean_is_exclusive(v_val_4578_);
if (v_isSharedCheck_4604_ == 0)
{
lean_object* v_unused_4605_; 
v_unused_4605_ = lean_ctor_get(v_val_4578_, 0);
lean_dec(v_unused_4605_);
v___x_4581_ = v_val_4578_;
v_isShared_4582_ = v_isSharedCheck_4604_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_snd_4579_);
lean_dec(v_val_4578_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4604_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
if (lean_obj_tag(v_snd_4579_) == 1)
{
lean_object* v___x_4583_; 
lean_dec_ref_known(v_snd_4579_, 2);
v___x_4583_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4537_, v_a_4538_, v_mod_x3f_4544_, v___x_4553_, v___x_4539_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4595_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4595_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4595_ == 0)
{
v___x_4586_ = v___x_4583_;
v_isShared_4587_ = v_isSharedCheck_4595_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_a_4584_);
lean_dec(v___x_4583_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4595_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4588_; lean_object* v___x_4590_; 
v___x_4588_ = lean_box(0);
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 1, v_a_4584_);
lean_ctor_set(v___x_4581_, 0, v___x_4588_);
v___x_4590_ = v___x_4581_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v___x_4588_);
lean_ctor_set(v_reuseFailAlloc_4594_, 1, v_a_4584_);
v___x_4590_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4592_; 
if (v_isShared_4587_ == 0)
{
lean_ctor_set(v___x_4586_, 0, v___x_4590_);
v___x_4592_ = v___x_4586_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v___x_4590_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
else
{
lean_object* v_a_4596_; lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4603_; 
lean_del_object(v___x_4581_);
v_a_4596_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4598_ = v___x_4583_;
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
else
{
lean_inc(v_a_4596_);
lean_dec(v___x_4583_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
lean_object* v___x_4601_; 
if (v_isShared_4599_ == 0)
{
v___x_4601_ = v___x_4598_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v_a_4596_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
return v___x_4601_;
}
}
}
}
else
{
lean_del_object(v___x_4581_);
lean_dec(v_snd_4579_);
goto v___jp_4554_;
}
}
}
else
{
lean_dec(v_a_4577_);
goto v___jp_4554_;
}
}
else
{
lean_object* v_a_4606_; lean_object* v___x_4608_; uint8_t v_isShared_4609_; uint8_t v_isSharedCheck_4613_; 
lean_dec(v___x_4553_);
lean_dec(v_mod_x3f_4544_);
lean_dec(v_a_4538_);
lean_dec_ref(v_b_4537_);
v_a_4606_ = lean_ctor_get(v___x_4576_, 0);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___x_4576_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4608_ = v___x_4576_;
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
else
{
lean_inc(v_a_4606_);
lean_dec(v___x_4576_);
v___x_4608_ = lean_box(0);
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
v_resetjp_4607_:
{
lean_object* v___x_4611_; 
if (v_isShared_4609_ == 0)
{
v___x_4611_ = v___x_4608_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v_a_4606_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object* v___x_4635_, lean_object* v_b_4636_, lean_object* v_a_4637_, lean_object* v___x_4638_, lean_object* v_only_4639_, lean_object* v_incremental_4640_, lean_object* v___x_4641_, lean_object* v_x_4642_, lean_object* v_mod_x3f_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_){
_start:
{
uint8_t v___x_17997__boxed_4651_; uint8_t v_only_boxed_4652_; uint8_t v_incremental_boxed_4653_; uint8_t v___x_17998__boxed_4654_; lean_object* v_res_4655_; 
v___x_17997__boxed_4651_ = lean_unbox(v___x_4638_);
v_only_boxed_4652_ = lean_unbox(v_only_4639_);
v_incremental_boxed_4653_ = lean_unbox(v_incremental_4640_);
v___x_17998__boxed_4654_ = lean_unbox(v___x_4641_);
v_res_4655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4635_, v_b_4636_, v_a_4637_, v___x_17997__boxed_4651_, v_only_boxed_4652_, v_incremental_boxed_4653_, v___x_17998__boxed_4654_, v_x_4642_, v_mod_x3f_4643_, v___y_4644_, v___y_4645_, v___y_4646_, v___y_4647_, v___y_4648_, v___y_4649_);
lean_dec(v___y_4649_);
lean_dec_ref(v___y_4648_);
lean_dec(v___y_4647_);
lean_dec_ref(v___y_4646_);
lean_dec(v___y_4645_);
lean_dec_ref(v___y_4644_);
lean_dec(v___x_4635_);
return v_res_4655_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; 
v___x_4663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2));
v___x_4664_ = l_Lean_stringToMessageData(v___x_4663_);
return v___x_4664_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13(void){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4690_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12));
v___x_4691_ = l_Lean_stringToMessageData(v___x_4690_);
return v___x_4691_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17(void){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16));
v___x_4697_ = l_Lean_stringToMessageData(v___x_4696_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t v_lax_4698_, uint8_t v_only_4699_, uint8_t v_incremental_4700_, lean_object* v_as_4701_, size_t v_sz_4702_, size_t v_i_4703_, lean_object* v_b_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v_snd_4713_; lean_object* v___y_4718_; uint8_t v___y_4719_; lean_object* v_a_4723_; lean_object* v___y_4727_; uint8_t v___x_4731_; 
v___x_4731_ = lean_usize_dec_lt(v_i_4703_, v_sz_4702_);
if (v___x_4731_ == 0)
{
lean_object* v___x_4732_; 
v___x_4732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4732_, 0, v_b_4704_);
return v___x_4732_;
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4734_; uint8_t v___x_4735_; 
v_a_4733_ = lean_array_uget_borrowed(v_as_4701_, v_i_4703_);
v___x_4734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1));
lean_inc(v_a_4733_);
v___x_4735_ = l_Lean_Syntax_isOfKind(v_a_4733_, v___x_4734_);
if (v___x_4735_ == 0)
{
lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4737_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4738_ = l_Lean_indentD(v___x_4737_);
v___x_4739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4736_);
lean_ctor_set(v___x_4739_, 1, v___x_4738_);
v___x_4740_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4739_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_dec_ref_known(v___x_4740_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4741_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4741_);
lean_dec_ref_known(v___x_4740_, 1);
v_a_4723_ = v_a_4741_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; uint8_t v___x_4745_; 
v___x_4742_ = lean_unsigned_to_nat(0u);
v___x_4743_ = l_Lean_Syntax_getArg(v_a_4733_, v___x_4742_);
v___x_4744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5));
lean_inc(v___x_4743_);
v___x_4745_ = l_Lean_Syntax_isOfKind(v___x_4743_, v___x_4744_);
if (v___x_4745_ == 0)
{
lean_object* v___x_4746_; uint8_t v___x_4747_; 
v___x_4746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7));
lean_inc(v___x_4743_);
v___x_4747_ = l_Lean_Syntax_isOfKind(v___x_4743_, v___x_4746_);
if (v___x_4747_ == 0)
{
lean_object* v___x_4748_; uint8_t v___x_4749_; 
v___x_4748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9));
lean_inc(v___x_4743_);
v___x_4749_ = l_Lean_Syntax_isOfKind(v___x_4743_, v___x_4748_);
if (v___x_4749_ == 0)
{
lean_object* v___x_4750_; uint8_t v___x_4751_; 
v___x_4750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11));
lean_inc(v___x_4743_);
v___x_4751_ = l_Lean_Syntax_isOfKind(v___x_4743_, v___x_4750_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
lean_dec(v___x_4743_);
v___x_4752_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4753_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4754_ = l_Lean_indentD(v___x_4753_);
v___x_4755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4752_);
lean_ctor_set(v___x_4755_, 1, v___x_4754_);
v___x_4756_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4755_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4756_) == 0)
{
lean_dec_ref_known(v___x_4756_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4757_; 
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4757_);
lean_dec_ref_known(v___x_4756_, 1);
v_a_4723_ = v_a_4757_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4758_; lean_object* v___x_4759_; 
v___x_4758_ = lean_unsigned_to_nat(1u);
v___x_4759_ = l_Lean_Syntax_getArg(v___x_4743_, v___x_4758_);
lean_dec(v___x_4743_);
if (v___x_4749_ == 0)
{
lean_object* v___x_4768_; uint8_t v___x_4769_; 
v___x_4768_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15));
lean_inc(v___x_4759_);
v___x_4769_ = l_Lean_Syntax_isOfKind(v___x_4759_, v___x_4768_);
if (v___x_4769_ == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; 
lean_dec(v___x_4759_);
v___x_4770_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4771_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4772_ = l_Lean_indentD(v___x_4771_);
v___x_4773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4770_);
lean_ctor_set(v___x_4773_, 1, v___x_4772_);
v___x_4774_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4773_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4774_) == 0)
{
lean_dec_ref_known(v___x_4774_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4775_; 
v_a_4775_ = lean_ctor_get(v___x_4774_, 0);
lean_inc(v_a_4775_);
lean_dec_ref_known(v___x_4774_, 1);
v_a_4723_ = v_a_4775_;
goto v___jp_4722_;
}
}
else
{
goto v___jp_4760_;
}
}
else
{
goto v___jp_4760_;
}
v___jp_4760_:
{
if (v_only_4699_ == 0)
{
lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4761_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13);
v___x_4762_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v___x_4759_, v___x_4761_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4762_) == 0)
{
lean_object* v_a_4763_; lean_object* v___x_4764_; 
v_a_4763_ = lean_ctor_get(v___x_4762_, 0);
lean_inc(v_a_4763_);
lean_dec_ref_known(v___x_4762_, 1);
lean_inc_ref(v_b_4704_);
v___x_4764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4704_, v___x_4759_, v_a_4763_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4759_);
v___y_4727_ = v___x_4764_;
goto v___jp_4726_;
}
else
{
lean_object* v_a_4765_; 
lean_dec(v___x_4759_);
v_a_4765_ = lean_ctor_get(v___x_4762_, 0);
lean_inc(v_a_4765_);
lean_dec_ref_known(v___x_4762_, 1);
v_a_4723_ = v_a_4765_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4766_ = lean_box(0);
lean_inc_ref(v_b_4704_);
v___x_4767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4704_, v___x_4759_, v___x_4766_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4759_);
v___y_4727_ = v___x_4767_;
goto v___jp_4726_;
}
}
}
}
else
{
lean_object* v___x_4776_; lean_object* v___x_4777_; uint8_t v___x_4778_; 
v___x_4776_ = lean_unsigned_to_nat(1u);
v___x_4777_ = l_Lean_Syntax_getArg(v___x_4743_, v___x_4776_);
v___x_4778_ = l_Lean_Syntax_isNone(v___x_4777_);
if (v___x_4778_ == 0)
{
uint8_t v___x_4779_; 
lean_inc(v___x_4777_);
v___x_4779_ = l_Lean_Syntax_matchesNull(v___x_4777_, v___x_4776_);
if (v___x_4779_ == 0)
{
lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
lean_dec(v___x_4777_);
lean_dec(v___x_4743_);
v___x_4780_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4781_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4782_ = l_Lean_indentD(v___x_4781_);
v___x_4783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4783_, 0, v___x_4780_);
lean_ctor_set(v___x_4783_, 1, v___x_4782_);
v___x_4784_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4783_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_dec_ref_known(v___x_4784_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4785_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4784_, 1);
v_a_4723_ = v_a_4785_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Lean_Syntax_getArg(v___x_4777_, v___x_4742_);
lean_dec(v___x_4777_);
if (v___x_4778_ == 0)
{
lean_object* v___x_4791_; uint8_t v___x_4792_; 
v___x_4791_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_4786_);
v___x_4792_ = l_Lean_Syntax_isOfKind(v___x_4786_, v___x_4791_);
if (v___x_4792_ == 0)
{
lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
lean_dec(v___x_4786_);
lean_dec(v___x_4743_);
v___x_4793_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4794_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4795_ = l_Lean_indentD(v___x_4794_);
v___x_4796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4793_);
lean_ctor_set(v___x_4796_, 1, v___x_4795_);
v___x_4797_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4796_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4797_) == 0)
{
lean_dec_ref_known(v___x_4797_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4798_; 
v_a_4798_ = lean_ctor_get(v___x_4797_, 0);
lean_inc(v_a_4798_);
lean_dec_ref_known(v___x_4797_, 1);
v_a_4723_ = v_a_4798_;
goto v___jp_4722_;
}
}
else
{
goto v___jp_4787_;
}
}
else
{
goto v___jp_4787_;
}
v___jp_4787_:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4788_ = lean_box(0);
v___x_4789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4786_);
lean_inc(v_a_4733_);
lean_inc_ref(v_b_4704_);
v___x_4790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4743_, v_b_4704_, v_a_4733_, v___x_4735_, v_only_4699_, v_incremental_4700_, v___x_4747_, v___x_4788_, v___x_4789_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4743_);
v___y_4727_ = v___x_4790_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
lean_dec(v___x_4777_);
v___x_4799_ = lean_box(0);
v___x_4800_ = lean_box(0);
lean_inc(v_a_4733_);
lean_inc_ref(v_b_4704_);
v___x_4801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4743_, v_b_4704_, v_a_4733_, v___x_4735_, v_only_4699_, v_incremental_4700_, v___x_4747_, v___x_4799_, v___x_4800_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4743_);
v___y_4727_ = v___x_4801_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v___x_4802_; uint8_t v___x_4803_; 
v___x_4802_ = l_Lean_Syntax_getArg(v___x_4743_, v___x_4742_);
v___x_4803_ = l_Lean_Syntax_isNone(v___x_4802_);
if (v___x_4803_ == 0)
{
lean_object* v___x_4804_; uint8_t v___x_4805_; 
v___x_4804_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_4802_);
v___x_4805_ = l_Lean_Syntax_matchesNull(v___x_4802_, v___x_4804_);
if (v___x_4805_ == 0)
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
lean_dec(v___x_4802_);
lean_dec(v___x_4743_);
v___x_4806_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4807_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4808_ = l_Lean_indentD(v___x_4807_);
v___x_4809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4806_);
lean_ctor_set(v___x_4809_, 1, v___x_4808_);
v___x_4810_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4809_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4810_) == 0)
{
lean_dec_ref_known(v___x_4810_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4811_; 
v_a_4811_ = lean_ctor_get(v___x_4810_, 0);
lean_inc(v_a_4811_);
lean_dec_ref_known(v___x_4810_, 1);
v_a_4723_ = v_a_4811_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4812_; 
v___x_4812_ = l_Lean_Syntax_getArg(v___x_4802_, v___x_4742_);
lean_dec(v___x_4802_);
if (v___x_4803_ == 0)
{
lean_object* v___x_4817_; uint8_t v___x_4818_; 
v___x_4817_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_4812_);
v___x_4818_ = l_Lean_Syntax_isOfKind(v___x_4812_, v___x_4817_);
if (v___x_4818_ == 0)
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; 
lean_dec(v___x_4812_);
lean_dec(v___x_4743_);
v___x_4819_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4820_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4821_ = l_Lean_indentD(v___x_4820_);
v___x_4822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4822_, 0, v___x_4819_);
lean_ctor_set(v___x_4822_, 1, v___x_4821_);
v___x_4823_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4822_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4823_) == 0)
{
lean_dec_ref_known(v___x_4823_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4824_; 
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
lean_inc(v_a_4824_);
lean_dec_ref_known(v___x_4823_, 1);
v_a_4723_ = v_a_4824_;
goto v___jp_4722_;
}
}
else
{
goto v___jp_4813_;
}
}
else
{
goto v___jp_4813_;
}
v___jp_4813_:
{
lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; 
v___x_4814_ = lean_box(0);
v___x_4815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4815_, 0, v___x_4812_);
lean_inc(v_a_4733_);
lean_inc_ref(v_b_4704_);
v___x_4816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4743_, v_b_4704_, v_a_4733_, v___x_4745_, v_only_4699_, v_incremental_4700_, v___x_4814_, v___x_4815_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4743_);
v___y_4727_ = v___x_4816_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
lean_dec(v___x_4802_);
v___x_4825_ = lean_box(0);
v___x_4826_ = lean_box(0);
lean_inc(v_a_4733_);
lean_inc_ref(v_b_4704_);
v___x_4827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4743_, v_b_4704_, v_a_4733_, v___x_4745_, v_only_4699_, v_incremental_4700_, v___x_4825_, v___x_4826_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___x_4743_);
v___y_4727_ = v___x_4827_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; uint8_t v___x_4831_; 
v___x_4828_ = lean_unsigned_to_nat(1u);
v___x_4829_ = l_Lean_Syntax_getArg(v___x_4743_, v___x_4828_);
lean_dec(v___x_4743_);
v___x_4830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4829_);
v___x_4831_ = l_Lean_Syntax_isOfKind(v___x_4829_, v___x_4830_);
if (v___x_4831_ == 0)
{
lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
lean_dec(v___x_4829_);
v___x_4832_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_4733_);
v___x_4833_ = l_Lean_MessageData_ofSyntax(v_a_4733_);
v___x_4834_ = l_Lean_indentD(v___x_4833_);
v___x_4835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4832_);
lean_ctor_set(v___x_4835_, 1, v___x_4834_);
v___x_4836_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_4835_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_dec_ref_known(v___x_4836_, 1);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4837_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_a_4837_);
lean_dec_ref_known(v___x_4836_, 1);
v_a_4723_ = v_a_4837_;
goto v___jp_4722_;
}
}
else
{
if (v_incremental_4700_ == 0)
{
lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4838_ = lean_box(0);
lean_inc_ref(v_b_4704_);
v___x_4839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4829_, v___x_4735_, v_b_4704_, v___x_4838_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
v___y_4727_ = v___x_4839_;
goto v___jp_4726_;
}
else
{
lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17);
v___x_4841_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_a_4733_, v___x_4840_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_object* v_a_4842_; lean_object* v___x_4843_; 
v_a_4842_ = lean_ctor_get(v___x_4841_, 0);
lean_inc(v_a_4842_);
lean_dec_ref_known(v___x_4841_, 1);
lean_inc_ref(v_b_4704_);
v___x_4843_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4829_, v___x_4735_, v_b_4704_, v_a_4842_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
v___y_4727_ = v___x_4843_;
goto v___jp_4726_;
}
else
{
lean_object* v_a_4844_; 
lean_dec(v___x_4829_);
v_a_4844_ = lean_ctor_get(v___x_4841_, 0);
lean_inc(v_a_4844_);
lean_dec_ref_known(v___x_4841_, 1);
v_a_4723_ = v_a_4844_;
goto v___jp_4722_;
}
}
}
}
}
}
v___jp_4712_:
{
size_t v___x_4714_; size_t v___x_4715_; 
v___x_4714_ = ((size_t)1ULL);
v___x_4715_ = lean_usize_add(v_i_4703_, v___x_4714_);
v_i_4703_ = v___x_4715_;
v_b_4704_ = v_snd_4713_;
goto _start;
}
v___jp_4717_:
{
if (v___y_4719_ == 0)
{
if (v_lax_4698_ == 0)
{
lean_object* v___x_4720_; 
lean_dec_ref(v_b_4704_);
v___x_4720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___y_4718_);
return v___x_4720_;
}
else
{
lean_dec_ref(v___y_4718_);
v_snd_4713_ = v_b_4704_;
goto v___jp_4712_;
}
}
else
{
lean_object* v___x_4721_; 
lean_dec_ref(v_b_4704_);
v___x_4721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4721_, 0, v___y_4718_);
return v___x_4721_;
}
}
v___jp_4722_:
{
uint8_t v___x_4724_; 
v___x_4724_ = l_Lean_Exception_isInterrupt(v_a_4723_);
if (v___x_4724_ == 0)
{
uint8_t v___x_4725_; 
lean_inc_ref(v_a_4723_);
v___x_4725_ = l_Lean_Exception_isRuntime(v_a_4723_);
v___y_4718_ = v_a_4723_;
v___y_4719_ = v___x_4725_;
goto v___jp_4717_;
}
else
{
v___y_4718_ = v_a_4723_;
v___y_4719_ = v___x_4724_;
goto v___jp_4717_;
}
}
v___jp_4726_:
{
if (lean_obj_tag(v___y_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v_snd_4729_; 
lean_dec_ref(v_b_4704_);
v_a_4728_ = lean_ctor_get(v___y_4727_, 0);
lean_inc(v_a_4728_);
lean_dec_ref_known(v___y_4727_, 1);
v_snd_4729_ = lean_ctor_get(v_a_4728_, 1);
lean_inc(v_snd_4729_);
lean_dec(v_a_4728_);
v_snd_4713_ = v_snd_4729_;
goto v___jp_4712_;
}
else
{
lean_object* v_a_4730_; 
v_a_4730_ = lean_ctor_get(v___y_4727_, 0);
lean_inc(v_a_4730_);
lean_dec_ref_known(v___y_4727_, 1);
v_a_4723_ = v_a_4730_;
goto v___jp_4722_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object* v_lax_4845_, lean_object* v_only_4846_, lean_object* v_incremental_4847_, lean_object* v_as_4848_, lean_object* v_sz_4849_, lean_object* v_i_4850_, lean_object* v_b_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
uint8_t v_lax_boxed_4859_; uint8_t v_only_boxed_4860_; uint8_t v_incremental_boxed_4861_; size_t v_sz_boxed_4862_; size_t v_i_boxed_4863_; lean_object* v_res_4864_; 
v_lax_boxed_4859_ = lean_unbox(v_lax_4845_);
v_only_boxed_4860_ = lean_unbox(v_only_4846_);
v_incremental_boxed_4861_ = lean_unbox(v_incremental_4847_);
v_sz_boxed_4862_ = lean_unbox_usize(v_sz_4849_);
lean_dec(v_sz_4849_);
v_i_boxed_4863_ = lean_unbox_usize(v_i_4850_);
lean_dec(v_i_4850_);
v_res_4864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_boxed_4859_, v_only_boxed_4860_, v_incremental_boxed_4861_, v_as_4848_, v_sz_boxed_4862_, v_i_boxed_4863_, v_b_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
lean_dec(v___y_4855_);
lean_dec_ref(v___y_4854_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
lean_dec_ref(v_as_4848_);
return v_res_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object* v_params_4865_, lean_object* v_ps_4866_, uint8_t v_only_4867_, uint8_t v_lax_4868_, uint8_t v_incremental_4869_, lean_object* v_a_4870_, lean_object* v_a_4871_, lean_object* v_a_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_){
_start:
{
size_t v_sz_4877_; size_t v___x_4878_; lean_object* v___x_4879_; 
v_sz_4877_ = lean_array_size(v_ps_4866_);
v___x_4878_ = ((size_t)0ULL);
v___x_4879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_4868_, v_only_4867_, v_incremental_4869_, v_ps_4866_, v_sz_4877_, v___x_4878_, v_params_4865_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_);
return v___x_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object* v_params_4880_, lean_object* v_ps_4881_, lean_object* v_only_4882_, lean_object* v_lax_4883_, lean_object* v_incremental_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_, lean_object* v_a_4887_, lean_object* v_a_4888_, lean_object* v_a_4889_, lean_object* v_a_4890_, lean_object* v_a_4891_){
_start:
{
uint8_t v_only_boxed_4892_; uint8_t v_lax_boxed_4893_; uint8_t v_incremental_boxed_4894_; lean_object* v_res_4895_; 
v_only_boxed_4892_ = lean_unbox(v_only_4882_);
v_lax_boxed_4893_ = lean_unbox(v_lax_4883_);
v_incremental_boxed_4894_ = lean_unbox(v_incremental_4884_);
v_res_4895_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_4880_, v_ps_4881_, v_only_boxed_4892_, v_lax_boxed_4893_, v_incremental_boxed_4894_, v_a_4885_, v_a_4886_, v_a_4887_, v_a_4888_, v_a_4889_, v_a_4890_);
lean_dec(v_a_4890_);
lean_dec_ref(v_a_4889_);
lean_dec(v_a_4888_);
lean_dec_ref(v_a_4887_);
lean_dec(v_a_4886_);
lean_dec_ref(v_a_4885_);
lean_dec_ref(v_ps_4881_);
return v_res_4895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object* v_thm_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v_origin_4907_; 
v_origin_4907_ = lean_ctor_get(v_thm_4896_, 5);
if (lean_obj_tag(v_origin_4907_) == 0)
{
lean_object* v_declName_4908_; lean_object* v___x_4909_; 
lean_inc_ref(v_origin_4907_);
lean_dec_ref(v_thm_4896_);
v_declName_4908_ = lean_ctor_get(v_origin_4907_, 0);
lean_inc(v_declName_4908_);
lean_dec_ref_known(v_origin_4907_, 1);
v___x_4909_ = l_Lean_Meta_Grind_isMatchEqLikeDeclName(v_declName_4908_, v_a_4904_, v_a_4905_);
return v___x_4909_;
}
else
{
lean_object* v_proof_4910_; lean_object* v___x_4911_; 
v_proof_4910_ = lean_ctor_get(v_thm_4896_, 1);
lean_inc_ref(v_proof_4910_);
lean_dec_ref(v_thm_4896_);
v___x_4911_ = l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(v_proof_4910_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
return v___x_4911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object* v_thm_4912_, lean_object* v_a_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_a_4921_, lean_object* v_a_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_thm_4912_, v_a_4913_, v_a_4914_, v_a_4915_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_, v_a_4920_, v_a_4921_);
lean_dec(v_a_4921_);
lean_dec_ref(v_a_4920_);
lean_dec(v_a_4919_);
lean_dec_ref(v_a_4918_);
lean_dec(v_a_4917_);
lean_dec_ref(v_a_4916_);
lean_dec(v_a_4915_);
lean_dec_ref(v_a_4914_);
lean_dec(v_a_4913_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object* v_as_4924_, size_t v_sz_4925_, size_t v_i_4926_, lean_object* v_b_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
uint8_t v___x_4938_; 
v___x_4938_ = lean_usize_dec_lt(v_i_4926_, v_sz_4925_);
if (v___x_4938_ == 0)
{
lean_object* v___x_4939_; 
v___x_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4939_, 0, v_b_4927_);
return v___x_4939_;
}
else
{
lean_object* v_snd_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4966_; 
v_snd_4940_ = lean_ctor_get(v_b_4927_, 1);
v_isSharedCheck_4966_ = !lean_is_exclusive(v_b_4927_);
if (v_isSharedCheck_4966_ == 0)
{
lean_object* v_unused_4967_; 
v_unused_4967_ = lean_ctor_get(v_b_4927_, 0);
lean_dec(v_unused_4967_);
v___x_4942_ = v_b_4927_;
v_isShared_4943_ = v_isSharedCheck_4966_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_snd_4940_);
lean_dec(v_b_4927_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4966_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; lean_object* v_a_4946_; lean_object* v_a_4953_; lean_object* v___x_4954_; 
v___x_4944_ = lean_box(0);
v_a_4953_ = lean_array_uget_borrowed(v_as_4924_, v_i_4926_);
lean_inc(v_a_4953_);
v___x_4954_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_4953_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_);
if (lean_obj_tag(v___x_4954_) == 0)
{
lean_object* v_a_4955_; uint8_t v___x_4956_; 
v_a_4955_ = lean_ctor_get(v___x_4954_, 0);
lean_inc(v_a_4955_);
lean_dec_ref_known(v___x_4954_, 1);
v___x_4956_ = lean_unbox(v_a_4955_);
lean_dec(v_a_4955_);
if (v___x_4956_ == 0)
{
v_a_4946_ = v_snd_4940_;
goto v___jp_4945_;
}
else
{
lean_object* v___x_4957_; 
lean_inc(v_a_4953_);
v___x_4957_ = l_Lean_PersistentArray_push___redArg(v_snd_4940_, v_a_4953_);
v_a_4946_ = v___x_4957_;
goto v___jp_4945_;
}
}
else
{
lean_object* v_a_4958_; lean_object* v___x_4960_; uint8_t v_isShared_4961_; uint8_t v_isSharedCheck_4965_; 
lean_del_object(v___x_4942_);
lean_dec(v_snd_4940_);
v_a_4958_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4965_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4965_ == 0)
{
v___x_4960_ = v___x_4954_;
v_isShared_4961_ = v_isSharedCheck_4965_;
goto v_resetjp_4959_;
}
else
{
lean_inc(v_a_4958_);
lean_dec(v___x_4954_);
v___x_4960_ = lean_box(0);
v_isShared_4961_ = v_isSharedCheck_4965_;
goto v_resetjp_4959_;
}
v_resetjp_4959_:
{
lean_object* v___x_4963_; 
if (v_isShared_4961_ == 0)
{
v___x_4963_ = v___x_4960_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v_a_4958_);
v___x_4963_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
return v___x_4963_;
}
}
}
v___jp_4945_:
{
lean_object* v___x_4948_; 
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 1, v_a_4946_);
lean_ctor_set(v___x_4942_, 0, v___x_4944_);
v___x_4948_ = v___x_4942_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v___x_4944_);
lean_ctor_set(v_reuseFailAlloc_4952_, 1, v_a_4946_);
v___x_4948_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
size_t v___x_4949_; size_t v___x_4950_; 
v___x_4949_ = ((size_t)1ULL);
v___x_4950_ = lean_usize_add(v_i_4926_, v___x_4949_);
v_i_4926_ = v___x_4950_;
v_b_4927_ = v___x_4948_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object* v_as_4968_, lean_object* v_sz_4969_, lean_object* v_i_4970_, lean_object* v_b_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_){
_start:
{
size_t v_sz_boxed_4982_; size_t v_i_boxed_4983_; lean_object* v_res_4984_; 
v_sz_boxed_4982_ = lean_unbox_usize(v_sz_4969_);
lean_dec(v_sz_4969_);
v_i_boxed_4983_ = lean_unbox_usize(v_i_4970_);
lean_dec(v_i_4970_);
v_res_4984_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_4968_, v_sz_boxed_4982_, v_i_boxed_4983_, v_b_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_);
lean_dec(v___y_4980_);
lean_dec_ref(v___y_4979_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec_ref(v_as_4968_);
return v_res_4984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object* v_as_4985_, size_t v_sz_4986_, size_t v_i_4987_, lean_object* v_b_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
uint8_t v___x_4999_; 
v___x_4999_ = lean_usize_dec_lt(v_i_4987_, v_sz_4986_);
if (v___x_4999_ == 0)
{
lean_object* v___x_5000_; 
v___x_5000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5000_, 0, v_b_4988_);
return v___x_5000_;
}
else
{
lean_object* v_snd_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5027_; 
v_snd_5001_ = lean_ctor_get(v_b_4988_, 1);
v_isSharedCheck_5027_ = !lean_is_exclusive(v_b_4988_);
if (v_isSharedCheck_5027_ == 0)
{
lean_object* v_unused_5028_; 
v_unused_5028_ = lean_ctor_get(v_b_4988_, 0);
lean_dec(v_unused_5028_);
v___x_5003_ = v_b_4988_;
v_isShared_5004_ = v_isSharedCheck_5027_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_snd_5001_);
lean_dec(v_b_4988_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5027_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5005_; lean_object* v_a_5007_; lean_object* v_a_5014_; lean_object* v___x_5015_; 
v___x_5005_ = lean_box(0);
v_a_5014_ = lean_array_uget_borrowed(v_as_4985_, v_i_4987_);
lean_inc(v_a_5014_);
v___x_5015_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5014_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_);
if (lean_obj_tag(v___x_5015_) == 0)
{
lean_object* v_a_5016_; uint8_t v___x_5017_; 
v_a_5016_ = lean_ctor_get(v___x_5015_, 0);
lean_inc(v_a_5016_);
lean_dec_ref_known(v___x_5015_, 1);
v___x_5017_ = lean_unbox(v_a_5016_);
lean_dec(v_a_5016_);
if (v___x_5017_ == 0)
{
v_a_5007_ = v_snd_5001_;
goto v___jp_5006_;
}
else
{
lean_object* v___x_5018_; 
lean_inc(v_a_5014_);
v___x_5018_ = l_Lean_PersistentArray_push___redArg(v_snd_5001_, v_a_5014_);
v_a_5007_ = v___x_5018_;
goto v___jp_5006_;
}
}
else
{
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_del_object(v___x_5003_);
lean_dec(v_snd_5001_);
v_a_5019_ = lean_ctor_get(v___x_5015_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_5015_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_5015_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_5015_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
v___jp_5006_:
{
lean_object* v___x_5009_; 
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 1, v_a_5007_);
lean_ctor_set(v___x_5003_, 0, v___x_5005_);
v___x_5009_ = v___x_5003_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v___x_5005_);
lean_ctor_set(v_reuseFailAlloc_5013_, 1, v_a_5007_);
v___x_5009_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
size_t v___x_5010_; size_t v___x_5011_; lean_object* v___x_5012_; 
v___x_5010_ = ((size_t)1ULL);
v___x_5011_ = lean_usize_add(v_i_4987_, v___x_5010_);
v___x_5012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_4985_, v_sz_4986_, v___x_5011_, v___x_5009_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_);
return v___x_5012_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object* v_as_5029_, lean_object* v_sz_5030_, lean_object* v_i_5031_, lean_object* v_b_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_){
_start:
{
size_t v_sz_boxed_5043_; size_t v_i_boxed_5044_; lean_object* v_res_5045_; 
v_sz_boxed_5043_ = lean_unbox_usize(v_sz_5030_);
lean_dec(v_sz_5030_);
v_i_boxed_5044_ = lean_unbox_usize(v_i_5031_);
lean_dec(v_i_5031_);
v_res_5045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_as_5029_, v_sz_boxed_5043_, v_i_boxed_5044_, v_b_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_);
lean_dec(v___y_5041_);
lean_dec_ref(v___y_5040_);
lean_dec(v___y_5039_);
lean_dec_ref(v___y_5038_);
lean_dec(v___y_5037_);
lean_dec_ref(v___y_5036_);
lean_dec(v___y_5035_);
lean_dec_ref(v___y_5034_);
lean_dec(v___y_5033_);
lean_dec_ref(v_as_5029_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_5046_, size_t v_sz_5047_, size_t v_i_5048_, lean_object* v_b_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_){
_start:
{
uint8_t v___x_5060_; 
v___x_5060_ = lean_usize_dec_lt(v_i_5048_, v_sz_5047_);
if (v___x_5060_ == 0)
{
lean_object* v___x_5061_; 
v___x_5061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5061_, 0, v_b_5049_);
return v___x_5061_;
}
else
{
lean_object* v_snd_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5088_; 
v_snd_5062_ = lean_ctor_get(v_b_5049_, 1);
v_isSharedCheck_5088_ = !lean_is_exclusive(v_b_5049_);
if (v_isSharedCheck_5088_ == 0)
{
lean_object* v_unused_5089_; 
v_unused_5089_ = lean_ctor_get(v_b_5049_, 0);
lean_dec(v_unused_5089_);
v___x_5064_ = v_b_5049_;
v_isShared_5065_ = v_isSharedCheck_5088_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_snd_5062_);
lean_dec(v_b_5049_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5088_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
lean_object* v___x_5066_; lean_object* v_a_5068_; lean_object* v_a_5075_; lean_object* v___x_5076_; 
v___x_5066_ = lean_box(0);
v_a_5075_ = lean_array_uget_borrowed(v_as_5046_, v_i_5048_);
lean_inc(v_a_5075_);
v___x_5076_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5075_, v___y_5050_, v___y_5051_, v___y_5052_, v___y_5053_, v___y_5054_, v___y_5055_, v___y_5056_, v___y_5057_, v___y_5058_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5077_; uint8_t v___x_5078_; 
v_a_5077_ = lean_ctor_get(v___x_5076_, 0);
lean_inc(v_a_5077_);
lean_dec_ref_known(v___x_5076_, 1);
v___x_5078_ = lean_unbox(v_a_5077_);
lean_dec(v_a_5077_);
if (v___x_5078_ == 0)
{
v_a_5068_ = v_snd_5062_;
goto v___jp_5067_;
}
else
{
lean_object* v___x_5079_; 
lean_inc(v_a_5075_);
v___x_5079_ = l_Lean_PersistentArray_push___redArg(v_snd_5062_, v_a_5075_);
v_a_5068_ = v___x_5079_;
goto v___jp_5067_;
}
}
else
{
lean_object* v_a_5080_; lean_object* v___x_5082_; uint8_t v_isShared_5083_; uint8_t v_isSharedCheck_5087_; 
lean_del_object(v___x_5064_);
lean_dec(v_snd_5062_);
v_a_5080_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5087_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5087_ == 0)
{
v___x_5082_ = v___x_5076_;
v_isShared_5083_ = v_isSharedCheck_5087_;
goto v_resetjp_5081_;
}
else
{
lean_inc(v_a_5080_);
lean_dec(v___x_5076_);
v___x_5082_ = lean_box(0);
v_isShared_5083_ = v_isSharedCheck_5087_;
goto v_resetjp_5081_;
}
v_resetjp_5081_:
{
lean_object* v___x_5085_; 
if (v_isShared_5083_ == 0)
{
v___x_5085_ = v___x_5082_;
goto v_reusejp_5084_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v_a_5080_);
v___x_5085_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5084_;
}
v_reusejp_5084_:
{
return v___x_5085_;
}
}
}
v___jp_5067_:
{
lean_object* v___x_5070_; 
if (v_isShared_5065_ == 0)
{
lean_ctor_set(v___x_5064_, 1, v_a_5068_);
lean_ctor_set(v___x_5064_, 0, v___x_5066_);
v___x_5070_ = v___x_5064_;
goto v_reusejp_5069_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v___x_5066_);
lean_ctor_set(v_reuseFailAlloc_5074_, 1, v_a_5068_);
v___x_5070_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5069_;
}
v_reusejp_5069_:
{
size_t v___x_5071_; size_t v___x_5072_; 
v___x_5071_ = ((size_t)1ULL);
v___x_5072_ = lean_usize_add(v_i_5048_, v___x_5071_);
v_i_5048_ = v___x_5072_;
v_b_5049_ = v___x_5070_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_5090_, lean_object* v_sz_5091_, lean_object* v_i_5092_, lean_object* v_b_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_, lean_object* v___y_5103_){
_start:
{
size_t v_sz_boxed_5104_; size_t v_i_boxed_5105_; lean_object* v_res_5106_; 
v_sz_boxed_5104_ = lean_unbox_usize(v_sz_5091_);
lean_dec(v_sz_5091_);
v_i_boxed_5105_ = lean_unbox_usize(v_i_5092_);
lean_dec(v_i_5092_);
v_res_5106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5090_, v_sz_boxed_5104_, v_i_boxed_5105_, v_b_5093_, v___y_5094_, v___y_5095_, v___y_5096_, v___y_5097_, v___y_5098_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_);
lean_dec(v___y_5102_);
lean_dec_ref(v___y_5101_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
lean_dec(v___y_5098_);
lean_dec_ref(v___y_5097_);
lean_dec(v___y_5096_);
lean_dec_ref(v___y_5095_);
lean_dec(v___y_5094_);
lean_dec_ref(v_as_5090_);
return v_res_5106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object* v_as_5107_, size_t v_sz_5108_, size_t v_i_5109_, lean_object* v_b_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_){
_start:
{
uint8_t v___x_5121_; 
v___x_5121_ = lean_usize_dec_lt(v_i_5109_, v_sz_5108_);
if (v___x_5121_ == 0)
{
lean_object* v___x_5122_; 
v___x_5122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5122_, 0, v_b_5110_);
return v___x_5122_;
}
else
{
lean_object* v_snd_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5149_; 
v_snd_5123_ = lean_ctor_get(v_b_5110_, 1);
v_isSharedCheck_5149_ = !lean_is_exclusive(v_b_5110_);
if (v_isSharedCheck_5149_ == 0)
{
lean_object* v_unused_5150_; 
v_unused_5150_ = lean_ctor_get(v_b_5110_, 0);
lean_dec(v_unused_5150_);
v___x_5125_ = v_b_5110_;
v_isShared_5126_ = v_isSharedCheck_5149_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_snd_5123_);
lean_dec(v_b_5110_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5149_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5127_; lean_object* v_a_5129_; lean_object* v_a_5136_; lean_object* v___x_5137_; 
v___x_5127_ = lean_box(0);
v_a_5136_ = lean_array_uget_borrowed(v_as_5107_, v_i_5109_);
lean_inc(v_a_5136_);
v___x_5137_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5136_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; uint8_t v___x_5139_; 
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5138_);
lean_dec_ref_known(v___x_5137_, 1);
v___x_5139_ = lean_unbox(v_a_5138_);
lean_dec(v_a_5138_);
if (v___x_5139_ == 0)
{
v_a_5129_ = v_snd_5123_;
goto v___jp_5128_;
}
else
{
lean_object* v___x_5140_; 
lean_inc(v_a_5136_);
v___x_5140_ = l_Lean_PersistentArray_push___redArg(v_snd_5123_, v_a_5136_);
v_a_5129_ = v___x_5140_;
goto v___jp_5128_;
}
}
else
{
lean_object* v_a_5141_; lean_object* v___x_5143_; uint8_t v_isShared_5144_; uint8_t v_isSharedCheck_5148_; 
lean_del_object(v___x_5125_);
lean_dec(v_snd_5123_);
v_a_5141_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5143_ = v___x_5137_;
v_isShared_5144_ = v_isSharedCheck_5148_;
goto v_resetjp_5142_;
}
else
{
lean_inc(v_a_5141_);
lean_dec(v___x_5137_);
v___x_5143_ = lean_box(0);
v_isShared_5144_ = v_isSharedCheck_5148_;
goto v_resetjp_5142_;
}
v_resetjp_5142_:
{
lean_object* v___x_5146_; 
if (v_isShared_5144_ == 0)
{
v___x_5146_ = v___x_5143_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5147_; 
v_reuseFailAlloc_5147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5147_, 0, v_a_5141_);
v___x_5146_ = v_reuseFailAlloc_5147_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
return v___x_5146_;
}
}
}
v___jp_5128_:
{
lean_object* v___x_5131_; 
if (v_isShared_5126_ == 0)
{
lean_ctor_set(v___x_5125_, 1, v_a_5129_);
lean_ctor_set(v___x_5125_, 0, v___x_5127_);
v___x_5131_ = v___x_5125_;
goto v_reusejp_5130_;
}
else
{
lean_object* v_reuseFailAlloc_5135_; 
v_reuseFailAlloc_5135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5135_, 0, v___x_5127_);
lean_ctor_set(v_reuseFailAlloc_5135_, 1, v_a_5129_);
v___x_5131_ = v_reuseFailAlloc_5135_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
size_t v___x_5132_; size_t v___x_5133_; lean_object* v___x_5134_; 
v___x_5132_ = ((size_t)1ULL);
v___x_5133_ = lean_usize_add(v_i_5109_, v___x_5132_);
v___x_5134_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5107_, v_sz_5108_, v___x_5133_, v___x_5131_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_);
return v___x_5134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object* v_as_5151_, lean_object* v_sz_5152_, lean_object* v_i_5153_, lean_object* v_b_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_){
_start:
{
size_t v_sz_boxed_5165_; size_t v_i_boxed_5166_; lean_object* v_res_5167_; 
v_sz_boxed_5165_ = lean_unbox_usize(v_sz_5152_);
lean_dec(v_sz_5152_);
v_i_boxed_5166_ = lean_unbox_usize(v_i_5153_);
lean_dec(v_i_5153_);
v_res_5167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_as_5151_, v_sz_boxed_5165_, v_i_boxed_5166_, v_b_5154_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_);
lean_dec(v___y_5163_);
lean_dec_ref(v___y_5162_);
lean_dec(v___y_5161_);
lean_dec_ref(v___y_5160_);
lean_dec(v___y_5159_);
lean_dec_ref(v___y_5158_);
lean_dec(v___y_5157_);
lean_dec_ref(v___y_5156_);
lean_dec(v___y_5155_);
lean_dec_ref(v_as_5151_);
return v_res_5167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object* v_init_5168_, lean_object* v_n_5169_, lean_object* v_b_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_){
_start:
{
if (lean_obj_tag(v_n_5169_) == 0)
{
lean_object* v_cs_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; size_t v_sz_5184_; size_t v___x_5185_; lean_object* v___x_5186_; 
v_cs_5181_ = lean_ctor_get(v_n_5169_, 0);
v___x_5182_ = lean_box(0);
v___x_5183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5183_, 0, v___x_5182_);
lean_ctor_set(v___x_5183_, 1, v_b_5170_);
v_sz_5184_ = lean_array_size(v_cs_5181_);
v___x_5185_ = ((size_t)0ULL);
v___x_5186_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5168_, v_cs_5181_, v_sz_5184_, v___x_5185_, v___x_5183_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_);
if (lean_obj_tag(v___x_5186_) == 0)
{
lean_object* v_a_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5201_; 
v_a_5187_ = lean_ctor_get(v___x_5186_, 0);
v_isSharedCheck_5201_ = !lean_is_exclusive(v___x_5186_);
if (v_isSharedCheck_5201_ == 0)
{
v___x_5189_ = v___x_5186_;
v_isShared_5190_ = v_isSharedCheck_5201_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_a_5187_);
lean_dec(v___x_5186_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5201_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v_fst_5191_; 
v_fst_5191_ = lean_ctor_get(v_a_5187_, 0);
if (lean_obj_tag(v_fst_5191_) == 0)
{
lean_object* v_snd_5192_; lean_object* v___x_5193_; lean_object* v___x_5195_; 
v_snd_5192_ = lean_ctor_get(v_a_5187_, 1);
lean_inc(v_snd_5192_);
lean_dec(v_a_5187_);
v___x_5193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5193_, 0, v_snd_5192_);
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 0, v___x_5193_);
v___x_5195_ = v___x_5189_;
goto v_reusejp_5194_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v___x_5193_);
v___x_5195_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5194_;
}
v_reusejp_5194_:
{
return v___x_5195_;
}
}
else
{
lean_object* v_val_5197_; lean_object* v___x_5199_; 
lean_inc_ref(v_fst_5191_);
lean_dec(v_a_5187_);
v_val_5197_ = lean_ctor_get(v_fst_5191_, 0);
lean_inc(v_val_5197_);
lean_dec_ref_known(v_fst_5191_, 1);
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 0, v_val_5197_);
v___x_5199_ = v___x_5189_;
goto v_reusejp_5198_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v_val_5197_);
v___x_5199_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5198_;
}
v_reusejp_5198_:
{
return v___x_5199_;
}
}
}
}
else
{
lean_object* v_a_5202_; lean_object* v___x_5204_; uint8_t v_isShared_5205_; uint8_t v_isSharedCheck_5209_; 
v_a_5202_ = lean_ctor_get(v___x_5186_, 0);
v_isSharedCheck_5209_ = !lean_is_exclusive(v___x_5186_);
if (v_isSharedCheck_5209_ == 0)
{
v___x_5204_ = v___x_5186_;
v_isShared_5205_ = v_isSharedCheck_5209_;
goto v_resetjp_5203_;
}
else
{
lean_inc(v_a_5202_);
lean_dec(v___x_5186_);
v___x_5204_ = lean_box(0);
v_isShared_5205_ = v_isSharedCheck_5209_;
goto v_resetjp_5203_;
}
v_resetjp_5203_:
{
lean_object* v___x_5207_; 
if (v_isShared_5205_ == 0)
{
v___x_5207_ = v___x_5204_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5208_; 
v_reuseFailAlloc_5208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5208_, 0, v_a_5202_);
v___x_5207_ = v_reuseFailAlloc_5208_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
return v___x_5207_;
}
}
}
}
else
{
lean_object* v_vs_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; size_t v_sz_5213_; size_t v___x_5214_; lean_object* v___x_5215_; 
v_vs_5210_ = lean_ctor_get(v_n_5169_, 0);
v___x_5211_ = lean_box(0);
v___x_5212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5212_, 0, v___x_5211_);
lean_ctor_set(v___x_5212_, 1, v_b_5170_);
v_sz_5213_ = lean_array_size(v_vs_5210_);
v___x_5214_ = ((size_t)0ULL);
v___x_5215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_vs_5210_, v_sz_5213_, v___x_5214_, v___x_5212_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_);
if (lean_obj_tag(v___x_5215_) == 0)
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5230_; 
v_a_5216_ = lean_ctor_get(v___x_5215_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5215_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5218_ = v___x_5215_;
v_isShared_5219_ = v_isSharedCheck_5230_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5215_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5230_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v_fst_5220_; 
v_fst_5220_ = lean_ctor_get(v_a_5216_, 0);
if (lean_obj_tag(v_fst_5220_) == 0)
{
lean_object* v_snd_5221_; lean_object* v___x_5222_; lean_object* v___x_5224_; 
v_snd_5221_ = lean_ctor_get(v_a_5216_, 1);
lean_inc(v_snd_5221_);
lean_dec(v_a_5216_);
v___x_5222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5222_, 0, v_snd_5221_);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 0, v___x_5222_);
v___x_5224_ = v___x_5218_;
goto v_reusejp_5223_;
}
else
{
lean_object* v_reuseFailAlloc_5225_; 
v_reuseFailAlloc_5225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5225_, 0, v___x_5222_);
v___x_5224_ = v_reuseFailAlloc_5225_;
goto v_reusejp_5223_;
}
v_reusejp_5223_:
{
return v___x_5224_;
}
}
else
{
lean_object* v_val_5226_; lean_object* v___x_5228_; 
lean_inc_ref(v_fst_5220_);
lean_dec(v_a_5216_);
v_val_5226_ = lean_ctor_get(v_fst_5220_, 0);
lean_inc(v_val_5226_);
lean_dec_ref_known(v_fst_5220_, 1);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 0, v_val_5226_);
v___x_5228_ = v___x_5218_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_val_5226_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
return v___x_5228_;
}
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
v_a_5231_ = lean_ctor_get(v___x_5215_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5215_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5215_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5215_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object* v_init_5239_, lean_object* v_as_5240_, size_t v_sz_5241_, size_t v_i_5242_, lean_object* v_b_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_){
_start:
{
uint8_t v___x_5254_; 
v___x_5254_ = lean_usize_dec_lt(v_i_5242_, v_sz_5241_);
if (v___x_5254_ == 0)
{
lean_object* v___x_5255_; 
v___x_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5255_, 0, v_b_5243_);
return v___x_5255_;
}
else
{
lean_object* v_snd_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5290_; 
v_snd_5256_ = lean_ctor_get(v_b_5243_, 1);
v_isSharedCheck_5290_ = !lean_is_exclusive(v_b_5243_);
if (v_isSharedCheck_5290_ == 0)
{
lean_object* v_unused_5291_; 
v_unused_5291_ = lean_ctor_get(v_b_5243_, 0);
lean_dec(v_unused_5291_);
v___x_5258_ = v_b_5243_;
v_isShared_5259_ = v_isSharedCheck_5290_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_snd_5256_);
lean_dec(v_b_5243_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5290_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
lean_object* v___x_5260_; lean_object* v_a_5261_; lean_object* v___x_5262_; 
v___x_5260_ = lean_box(0);
v_a_5261_ = lean_array_uget_borrowed(v_as_5240_, v_i_5242_);
lean_inc(v_snd_5256_);
v___x_5262_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5239_, v_a_5261_, v_snd_5256_, v___y_5244_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_);
if (lean_obj_tag(v___x_5262_) == 0)
{
lean_object* v_a_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5281_; 
v_a_5263_ = lean_ctor_get(v___x_5262_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5262_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5265_ = v___x_5262_;
v_isShared_5266_ = v_isSharedCheck_5281_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_a_5263_);
lean_dec(v___x_5262_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5281_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
if (lean_obj_tag(v_a_5263_) == 0)
{
lean_object* v___x_5267_; lean_object* v___x_5269_; 
v___x_5267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5267_, 0, v_a_5263_);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 0, v___x_5267_);
v___x_5269_ = v___x_5258_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v___x_5267_);
lean_ctor_set(v_reuseFailAlloc_5273_, 1, v_snd_5256_);
v___x_5269_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
lean_object* v___x_5271_; 
if (v_isShared_5266_ == 0)
{
lean_ctor_set(v___x_5265_, 0, v___x_5269_);
v___x_5271_ = v___x_5265_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v___x_5269_);
v___x_5271_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
return v___x_5271_;
}
}
}
else
{
lean_object* v_a_5274_; lean_object* v___x_5276_; 
lean_del_object(v___x_5265_);
lean_dec(v_snd_5256_);
v_a_5274_ = lean_ctor_get(v_a_5263_, 0);
lean_inc(v_a_5274_);
lean_dec_ref_known(v_a_5263_, 1);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 1, v_a_5274_);
lean_ctor_set(v___x_5258_, 0, v___x_5260_);
v___x_5276_ = v___x_5258_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v___x_5260_);
lean_ctor_set(v_reuseFailAlloc_5280_, 1, v_a_5274_);
v___x_5276_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
size_t v___x_5277_; size_t v___x_5278_; 
v___x_5277_ = ((size_t)1ULL);
v___x_5278_ = lean_usize_add(v_i_5242_, v___x_5277_);
v_i_5242_ = v___x_5278_;
v_b_5243_ = v___x_5276_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_del_object(v___x_5258_);
lean_dec(v_snd_5256_);
v_a_5282_ = lean_ctor_get(v___x_5262_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5262_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5262_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5262_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5292_, lean_object* v_as_5293_, lean_object* v_sz_5294_, lean_object* v_i_5295_, lean_object* v_b_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_){
_start:
{
size_t v_sz_boxed_5307_; size_t v_i_boxed_5308_; lean_object* v_res_5309_; 
v_sz_boxed_5307_ = lean_unbox_usize(v_sz_5294_);
lean_dec(v_sz_5294_);
v_i_boxed_5308_ = lean_unbox_usize(v_i_5295_);
lean_dec(v_i_5295_);
v_res_5309_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5292_, v_as_5293_, v_sz_boxed_5307_, v_i_boxed_5308_, v_b_5296_, v___y_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_);
lean_dec(v___y_5305_);
lean_dec_ref(v___y_5304_);
lean_dec(v___y_5303_);
lean_dec_ref(v___y_5302_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
lean_dec(v___y_5299_);
lean_dec_ref(v___y_5298_);
lean_dec(v___y_5297_);
lean_dec_ref(v_as_5293_);
lean_dec_ref(v_init_5292_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object* v_init_5310_, lean_object* v_n_5311_, lean_object* v_b_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5310_, v_n_5311_, v_b_5312_, v___y_5313_, v___y_5314_, v___y_5315_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_);
lean_dec(v___y_5321_);
lean_dec_ref(v___y_5320_);
lean_dec(v___y_5319_);
lean_dec_ref(v___y_5318_);
lean_dec(v___y_5317_);
lean_dec_ref(v___y_5316_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
lean_dec(v___y_5313_);
lean_dec_ref(v_n_5311_);
lean_dec_ref(v_init_5310_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object* v_t_5324_, lean_object* v_init_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v_root_5336_; lean_object* v_tail_5337_; lean_object* v___x_5338_; 
v_root_5336_ = lean_ctor_get(v_t_5324_, 0);
v_tail_5337_ = lean_ctor_get(v_t_5324_, 1);
lean_inc_ref(v_init_5325_);
v___x_5338_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5325_, v_root_5336_, v_init_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_, v___y_5334_);
lean_dec_ref(v_init_5325_);
if (lean_obj_tag(v___x_5338_) == 0)
{
lean_object* v_a_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5375_; 
v_a_5339_ = lean_ctor_get(v___x_5338_, 0);
v_isSharedCheck_5375_ = !lean_is_exclusive(v___x_5338_);
if (v_isSharedCheck_5375_ == 0)
{
v___x_5341_ = v___x_5338_;
v_isShared_5342_ = v_isSharedCheck_5375_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_a_5339_);
lean_dec(v___x_5338_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5375_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
if (lean_obj_tag(v_a_5339_) == 0)
{
lean_object* v_a_5343_; lean_object* v___x_5345_; 
v_a_5343_ = lean_ctor_get(v_a_5339_, 0);
lean_inc(v_a_5343_);
lean_dec_ref_known(v_a_5339_, 1);
if (v_isShared_5342_ == 0)
{
lean_ctor_set(v___x_5341_, 0, v_a_5343_);
v___x_5345_ = v___x_5341_;
goto v_reusejp_5344_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v_a_5343_);
v___x_5345_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5344_;
}
v_reusejp_5344_:
{
return v___x_5345_;
}
}
else
{
lean_object* v_a_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; size_t v_sz_5350_; size_t v___x_5351_; lean_object* v___x_5352_; 
lean_del_object(v___x_5341_);
v_a_5347_ = lean_ctor_get(v_a_5339_, 0);
lean_inc(v_a_5347_);
lean_dec_ref_known(v_a_5339_, 1);
v___x_5348_ = lean_box(0);
v___x_5349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5349_, 0, v___x_5348_);
lean_ctor_set(v___x_5349_, 1, v_a_5347_);
v_sz_5350_ = lean_array_size(v_tail_5337_);
v___x_5351_ = ((size_t)0ULL);
v___x_5352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_tail_5337_, v_sz_5350_, v___x_5351_, v___x_5349_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_, v___y_5334_);
if (lean_obj_tag(v___x_5352_) == 0)
{
lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5366_; 
v_a_5353_ = lean_ctor_get(v___x_5352_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5352_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5355_ = v___x_5352_;
v_isShared_5356_ = v_isSharedCheck_5366_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v___x_5352_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5366_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v_fst_5357_; 
v_fst_5357_ = lean_ctor_get(v_a_5353_, 0);
if (lean_obj_tag(v_fst_5357_) == 0)
{
lean_object* v_snd_5358_; lean_object* v___x_5360_; 
v_snd_5358_ = lean_ctor_get(v_a_5353_, 1);
lean_inc(v_snd_5358_);
lean_dec(v_a_5353_);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v_snd_5358_);
v___x_5360_ = v___x_5355_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_snd_5358_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
else
{
lean_object* v_val_5362_; lean_object* v___x_5364_; 
lean_inc_ref(v_fst_5357_);
lean_dec(v_a_5353_);
v_val_5362_ = lean_ctor_get(v_fst_5357_, 0);
lean_inc(v_val_5362_);
lean_dec_ref_known(v_fst_5357_, 1);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v_val_5362_);
v___x_5364_ = v___x_5355_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_val_5362_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
else
{
lean_object* v_a_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5374_; 
v_a_5367_ = lean_ctor_get(v___x_5352_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5352_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5369_ = v___x_5352_;
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_a_5367_);
lean_dec(v___x_5352_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5372_; 
if (v_isShared_5370_ == 0)
{
v___x_5372_ = v___x_5369_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5367_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
}
}
}
else
{
lean_object* v_a_5376_; lean_object* v___x_5378_; uint8_t v_isShared_5379_; uint8_t v_isSharedCheck_5383_; 
v_a_5376_ = lean_ctor_get(v___x_5338_, 0);
v_isSharedCheck_5383_ = !lean_is_exclusive(v___x_5338_);
if (v_isSharedCheck_5383_ == 0)
{
v___x_5378_ = v___x_5338_;
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
else
{
lean_inc(v_a_5376_);
lean_dec(v___x_5338_);
v___x_5378_ = lean_box(0);
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
v_resetjp_5377_:
{
lean_object* v___x_5381_; 
if (v_isShared_5379_ == 0)
{
v___x_5381_ = v___x_5378_;
goto v_reusejp_5380_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v_a_5376_);
v___x_5381_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5380_;
}
v_reusejp_5380_:
{
return v___x_5381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object* v_t_5384_, lean_object* v_init_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_){
_start:
{
lean_object* v_res_5396_; 
v_res_5396_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_t_5384_, v_init_5385_, v___y_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_);
lean_dec(v___y_5394_);
lean_dec_ref(v___y_5393_);
lean_dec(v___y_5392_);
lean_dec_ref(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v___y_5389_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
lean_dec(v___y_5386_);
lean_dec_ref(v_t_5384_);
return v_res_5396_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0(void){
_start:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; 
v___x_5397_ = lean_unsigned_to_nat(32u);
v___x_5398_ = lean_mk_empty_array_with_capacity(v___x_5397_);
v___x_5399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5399_, 0, v___x_5398_);
return v___x_5399_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1(void){
_start:
{
size_t v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v_result_5405_; 
v___x_5400_ = ((size_t)5ULL);
v___x_5401_ = lean_unsigned_to_nat(0u);
v___x_5402_ = lean_unsigned_to_nat(32u);
v___x_5403_ = lean_mk_empty_array_with_capacity(v___x_5402_);
v___x_5404_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0);
v_result_5405_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_result_5405_, 0, v___x_5404_);
lean_ctor_set(v_result_5405_, 1, v___x_5403_);
lean_ctor_set(v_result_5405_, 2, v___x_5401_);
lean_ctor_set(v_result_5405_, 3, v___x_5401_);
lean_ctor_set_usize(v_result_5405_, 4, v___x_5400_);
return v_result_5405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object* v_thms_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_, lean_object* v_a_5415_){
_start:
{
lean_object* v_result_5417_; lean_object* v___x_5418_; 
v_result_5417_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1);
v___x_5418_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_thms_5406_, v_result_5417_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_, v_a_5415_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object* v_thms_5419_, lean_object* v_a_5420_, lean_object* v_a_5421_, lean_object* v_a_5422_, lean_object* v_a_5423_, lean_object* v_a_5424_, lean_object* v_a_5425_, lean_object* v_a_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_5419_, v_a_5420_, v_a_5421_, v_a_5422_, v_a_5423_, v_a_5424_, v_a_5425_, v_a_5426_, v_a_5427_, v_a_5428_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
lean_dec(v_a_5426_);
lean_dec_ref(v_a_5425_);
lean_dec(v_a_5424_);
lean_dec_ref(v_a_5423_);
lean_dec(v_a_5422_);
lean_dec_ref(v_a_5421_);
lean_dec(v_a_5420_);
lean_dec_ref(v_thms_5419_);
return v_res_5430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object* v_thms_5433_, lean_object* v_newThms_5434_, lean_object* v_gmt_5435_, lean_object* v_numInstances_5436_, lean_object* v_numDelayedInstances_5437_, lean_object* v_num_5438_, lean_object* v_preInstances_5439_, lean_object* v_nextThmIdx_5440_, lean_object* v_matchEqNames_5441_, lean_object* v_delayedThmInsts_5442_, lean_object* v_nextDeclIdx_5443_, lean_object* v_enodeMap_5444_, lean_object* v_exprs_5445_, lean_object* v_parents_5446_, lean_object* v_congrTable_5447_, lean_object* v_appMap_5448_, lean_object* v_indicesFound_5449_, lean_object* v_newFacts_5450_, uint8_t v_inconsistent_5451_, lean_object* v_nextIdx_5452_, lean_object* v_newRawFacts_5453_, lean_object* v_facts_5454_, lean_object* v_extThms_5455_, lean_object* v_inj_5456_, lean_object* v_split_5457_, lean_object* v_clean_5458_, lean_object* v_sstates_5459_, lean_object* v_mvarId_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_){
_start:
{
lean_object* v___x_5471_; 
v___x_5471_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_5433_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_);
if (lean_obj_tag(v___x_5471_) == 0)
{
lean_object* v_a_5472_; lean_object* v___x_5473_; 
v_a_5472_ = lean_ctor_get(v___x_5471_, 0);
lean_inc(v_a_5472_);
lean_dec_ref_known(v___x_5471_, 1);
v___x_5473_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_newThms_5434_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_);
if (lean_obj_tag(v___x_5473_) == 0)
{
lean_object* v_a_5474_; lean_object* v___x_5476_; uint8_t v_isShared_5477_; uint8_t v_isSharedCheck_5485_; 
v_a_5474_ = lean_ctor_get(v___x_5473_, 0);
v_isSharedCheck_5485_ = !lean_is_exclusive(v___x_5473_);
if (v_isSharedCheck_5485_ == 0)
{
v___x_5476_ = v___x_5473_;
v_isShared_5477_ = v_isSharedCheck_5485_;
goto v_resetjp_5475_;
}
else
{
lean_inc(v_a_5474_);
lean_dec(v___x_5473_);
v___x_5476_ = lean_box(0);
v_isShared_5477_ = v_isSharedCheck_5485_;
goto v_resetjp_5475_;
}
v_resetjp_5475_:
{
lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5483_; 
v___x_5478_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0));
v___x_5479_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_5479_, 0, v___x_5478_);
lean_ctor_set(v___x_5479_, 1, v_gmt_5435_);
lean_ctor_set(v___x_5479_, 2, v_a_5472_);
lean_ctor_set(v___x_5479_, 3, v_a_5474_);
lean_ctor_set(v___x_5479_, 4, v_numInstances_5436_);
lean_ctor_set(v___x_5479_, 5, v_numDelayedInstances_5437_);
lean_ctor_set(v___x_5479_, 6, v_num_5438_);
lean_ctor_set(v___x_5479_, 7, v_preInstances_5439_);
lean_ctor_set(v___x_5479_, 8, v_nextThmIdx_5440_);
lean_ctor_set(v___x_5479_, 9, v_matchEqNames_5441_);
lean_ctor_set(v___x_5479_, 10, v_delayedThmInsts_5442_);
v___x_5480_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v___x_5480_, 0, v_nextDeclIdx_5443_);
lean_ctor_set(v___x_5480_, 1, v_enodeMap_5444_);
lean_ctor_set(v___x_5480_, 2, v_exprs_5445_);
lean_ctor_set(v___x_5480_, 3, v_parents_5446_);
lean_ctor_set(v___x_5480_, 4, v_congrTable_5447_);
lean_ctor_set(v___x_5480_, 5, v_appMap_5448_);
lean_ctor_set(v___x_5480_, 6, v_indicesFound_5449_);
lean_ctor_set(v___x_5480_, 7, v_newFacts_5450_);
lean_ctor_set(v___x_5480_, 8, v_nextIdx_5452_);
lean_ctor_set(v___x_5480_, 9, v_newRawFacts_5453_);
lean_ctor_set(v___x_5480_, 10, v_facts_5454_);
lean_ctor_set(v___x_5480_, 11, v_extThms_5455_);
lean_ctor_set(v___x_5480_, 12, v___x_5479_);
lean_ctor_set(v___x_5480_, 13, v_inj_5456_);
lean_ctor_set(v___x_5480_, 14, v_split_5457_);
lean_ctor_set(v___x_5480_, 15, v_clean_5458_);
lean_ctor_set(v___x_5480_, 16, v_sstates_5459_);
lean_ctor_set_uint8(v___x_5480_, sizeof(void*)*17, v_inconsistent_5451_);
v___x_5481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5480_);
lean_ctor_set(v___x_5481_, 1, v_mvarId_5460_);
if (v_isShared_5477_ == 0)
{
lean_ctor_set(v___x_5476_, 0, v___x_5481_);
v___x_5483_ = v___x_5476_;
goto v_reusejp_5482_;
}
else
{
lean_object* v_reuseFailAlloc_5484_; 
v_reuseFailAlloc_5484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5484_, 0, v___x_5481_);
v___x_5483_ = v_reuseFailAlloc_5484_;
goto v_reusejp_5482_;
}
v_reusejp_5482_:
{
return v___x_5483_;
}
}
}
else
{
lean_object* v_a_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5493_; 
lean_dec(v_a_5472_);
lean_dec(v_mvarId_5460_);
lean_dec_ref(v_sstates_5459_);
lean_dec_ref(v_clean_5458_);
lean_dec_ref(v_split_5457_);
lean_dec_ref(v_inj_5456_);
lean_dec_ref(v_extThms_5455_);
lean_dec_ref(v_facts_5454_);
lean_dec_ref(v_newRawFacts_5453_);
lean_dec(v_nextIdx_5452_);
lean_dec_ref(v_newFacts_5450_);
lean_dec_ref(v_indicesFound_5449_);
lean_dec_ref(v_appMap_5448_);
lean_dec_ref(v_congrTable_5447_);
lean_dec_ref(v_parents_5446_);
lean_dec_ref(v_exprs_5445_);
lean_dec_ref(v_enodeMap_5444_);
lean_dec(v_nextDeclIdx_5443_);
lean_dec_ref(v_delayedThmInsts_5442_);
lean_dec_ref(v_matchEqNames_5441_);
lean_dec(v_nextThmIdx_5440_);
lean_dec_ref(v_preInstances_5439_);
lean_dec(v_num_5438_);
lean_dec(v_numDelayedInstances_5437_);
lean_dec(v_numInstances_5436_);
lean_dec(v_gmt_5435_);
v_a_5486_ = lean_ctor_get(v___x_5473_, 0);
v_isSharedCheck_5493_ = !lean_is_exclusive(v___x_5473_);
if (v_isSharedCheck_5493_ == 0)
{
v___x_5488_ = v___x_5473_;
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_a_5486_);
lean_dec(v___x_5473_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v___x_5491_; 
if (v_isShared_5489_ == 0)
{
v___x_5491_ = v___x_5488_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_a_5486_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
return v___x_5491_;
}
}
}
}
else
{
lean_object* v_a_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5501_; 
lean_dec(v_mvarId_5460_);
lean_dec_ref(v_sstates_5459_);
lean_dec_ref(v_clean_5458_);
lean_dec_ref(v_split_5457_);
lean_dec_ref(v_inj_5456_);
lean_dec_ref(v_extThms_5455_);
lean_dec_ref(v_facts_5454_);
lean_dec_ref(v_newRawFacts_5453_);
lean_dec(v_nextIdx_5452_);
lean_dec_ref(v_newFacts_5450_);
lean_dec_ref(v_indicesFound_5449_);
lean_dec_ref(v_appMap_5448_);
lean_dec_ref(v_congrTable_5447_);
lean_dec_ref(v_parents_5446_);
lean_dec_ref(v_exprs_5445_);
lean_dec_ref(v_enodeMap_5444_);
lean_dec(v_nextDeclIdx_5443_);
lean_dec_ref(v_delayedThmInsts_5442_);
lean_dec_ref(v_matchEqNames_5441_);
lean_dec(v_nextThmIdx_5440_);
lean_dec_ref(v_preInstances_5439_);
lean_dec(v_num_5438_);
lean_dec(v_numDelayedInstances_5437_);
lean_dec(v_numInstances_5436_);
lean_dec(v_gmt_5435_);
v_a_5494_ = lean_ctor_get(v___x_5471_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5471_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5496_ = v___x_5471_;
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_a_5494_);
lean_dec(v___x_5471_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___x_5499_; 
if (v_isShared_5497_ == 0)
{
v___x_5499_ = v___x_5496_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_a_5494_);
v___x_5499_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
return v___x_5499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_thms_5502_ = _args[0];
lean_object* v_newThms_5503_ = _args[1];
lean_object* v_gmt_5504_ = _args[2];
lean_object* v_numInstances_5505_ = _args[3];
lean_object* v_numDelayedInstances_5506_ = _args[4];
lean_object* v_num_5507_ = _args[5];
lean_object* v_preInstances_5508_ = _args[6];
lean_object* v_nextThmIdx_5509_ = _args[7];
lean_object* v_matchEqNames_5510_ = _args[8];
lean_object* v_delayedThmInsts_5511_ = _args[9];
lean_object* v_nextDeclIdx_5512_ = _args[10];
lean_object* v_enodeMap_5513_ = _args[11];
lean_object* v_exprs_5514_ = _args[12];
lean_object* v_parents_5515_ = _args[13];
lean_object* v_congrTable_5516_ = _args[14];
lean_object* v_appMap_5517_ = _args[15];
lean_object* v_indicesFound_5518_ = _args[16];
lean_object* v_newFacts_5519_ = _args[17];
lean_object* v_inconsistent_5520_ = _args[18];
lean_object* v_nextIdx_5521_ = _args[19];
lean_object* v_newRawFacts_5522_ = _args[20];
lean_object* v_facts_5523_ = _args[21];
lean_object* v_extThms_5524_ = _args[22];
lean_object* v_inj_5525_ = _args[23];
lean_object* v_split_5526_ = _args[24];
lean_object* v_clean_5527_ = _args[25];
lean_object* v_sstates_5528_ = _args[26];
lean_object* v_mvarId_5529_ = _args[27];
lean_object* v___y_5530_ = _args[28];
lean_object* v___y_5531_ = _args[29];
lean_object* v___y_5532_ = _args[30];
lean_object* v___y_5533_ = _args[31];
lean_object* v___y_5534_ = _args[32];
lean_object* v___y_5535_ = _args[33];
lean_object* v___y_5536_ = _args[34];
lean_object* v___y_5537_ = _args[35];
lean_object* v___y_5538_ = _args[36];
lean_object* v___y_5539_ = _args[37];
_start:
{
uint8_t v_inconsistent_boxed_5540_; lean_object* v_res_5541_; 
v_inconsistent_boxed_5540_ = lean_unbox(v_inconsistent_5520_);
v_res_5541_ = l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(v_thms_5502_, v_newThms_5503_, v_gmt_5504_, v_numInstances_5505_, v_numDelayedInstances_5506_, v_num_5507_, v_preInstances_5508_, v_nextThmIdx_5509_, v_matchEqNames_5510_, v_delayedThmInsts_5511_, v_nextDeclIdx_5512_, v_enodeMap_5513_, v_exprs_5514_, v_parents_5515_, v_congrTable_5516_, v_appMap_5517_, v_indicesFound_5518_, v_newFacts_5519_, v_inconsistent_boxed_5540_, v_nextIdx_5521_, v_newRawFacts_5522_, v_facts_5523_, v_extThms_5524_, v_inj_5525_, v_split_5526_, v_clean_5527_, v_sstates_5528_, v_mvarId_5529_, v___y_5530_, v___y_5531_, v___y_5532_, v___y_5533_, v___y_5534_, v___y_5535_, v___y_5536_, v___y_5537_, v___y_5538_);
lean_dec(v___y_5538_);
lean_dec_ref(v___y_5537_);
lean_dec(v___y_5536_);
lean_dec_ref(v___y_5535_);
lean_dec(v___y_5534_);
lean_dec_ref(v___y_5533_);
lean_dec(v___y_5532_);
lean_dec_ref(v___y_5531_);
lean_dec(v___y_5530_);
lean_dec_ref(v_newThms_5503_);
lean_dec_ref(v_thms_5502_);
return v_res_5541_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5542_; 
v___x_5542_ = l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
return v___x_5542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t v_sz_5543_, size_t v_i_5544_, lean_object* v_bs_5545_){
_start:
{
uint8_t v___x_5546_; 
v___x_5546_ = lean_usize_dec_lt(v_i_5544_, v_sz_5543_);
if (v___x_5546_ == 0)
{
lean_object* v___x_5547_; 
v___x_5547_ = l_unsafeCast___redArg(v_bs_5545_);
lean_dec_ref(v_bs_5545_);
return v___x_5547_;
}
else
{
lean_object* v_v_5548_; lean_object* v___x_5549_; lean_object* v_casesTypes_5550_; lean_object* v_extThms_5551_; lean_object* v_funCC_5552_; lean_object* v_inj_5553_; lean_object* v___x_5555_; uint8_t v_isShared_5556_; uint8_t v_isSharedCheck_5568_; 
v_v_5548_ = lean_array_uget_borrowed(v_bs_5545_, v_i_5544_);
v___x_5549_ = l_unsafeCast___redArg(v_v_5548_);
v_casesTypes_5550_ = lean_ctor_get(v___x_5549_, 0);
v_extThms_5551_ = lean_ctor_get(v___x_5549_, 1);
v_funCC_5552_ = lean_ctor_get(v___x_5549_, 2);
v_inj_5553_ = lean_ctor_get(v___x_5549_, 4);
v_isSharedCheck_5568_ = !lean_is_exclusive(v___x_5549_);
if (v_isSharedCheck_5568_ == 0)
{
lean_object* v_unused_5569_; 
v_unused_5569_ = lean_ctor_get(v___x_5549_, 3);
lean_dec(v_unused_5569_);
v___x_5555_ = v___x_5549_;
v_isShared_5556_ = v_isSharedCheck_5568_;
goto v_resetjp_5554_;
}
else
{
lean_inc(v_inj_5553_);
lean_inc(v_funCC_5552_);
lean_inc(v_extThms_5551_);
lean_inc(v_casesTypes_5550_);
lean_dec(v___x_5549_);
v___x_5555_ = lean_box(0);
v_isShared_5556_ = v_isSharedCheck_5568_;
goto v_resetjp_5554_;
}
v_resetjp_5554_:
{
lean_object* v___x_5557_; lean_object* v_bs_x27_5558_; lean_object* v___x_5559_; lean_object* v___x_5561_; 
v___x_5557_ = lean_unsigned_to_nat(0u);
v_bs_x27_5558_ = lean_array_uset(v_bs_5545_, v_i_5544_, v___x_5557_);
v___x_5559_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0);
if (v_isShared_5556_ == 0)
{
lean_ctor_set(v___x_5555_, 3, v___x_5559_);
v___x_5561_ = v___x_5555_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5567_; 
v_reuseFailAlloc_5567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5567_, 0, v_casesTypes_5550_);
lean_ctor_set(v_reuseFailAlloc_5567_, 1, v_extThms_5551_);
lean_ctor_set(v_reuseFailAlloc_5567_, 2, v_funCC_5552_);
lean_ctor_set(v_reuseFailAlloc_5567_, 3, v___x_5559_);
lean_ctor_set(v_reuseFailAlloc_5567_, 4, v_inj_5553_);
v___x_5561_ = v_reuseFailAlloc_5567_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
size_t v___x_5562_; size_t v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; 
v___x_5562_ = ((size_t)1ULL);
v___x_5563_ = lean_usize_add(v_i_5544_, v___x_5562_);
v___x_5564_ = l_unsafeCast___redArg(v___x_5561_);
lean_dec_ref(v___x_5561_);
v___x_5565_ = lean_array_uset(v_bs_x27_5558_, v_i_5544_, v___x_5564_);
v_i_5544_ = v___x_5563_;
v_bs_5545_ = v___x_5565_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object* v_sz_5570_, lean_object* v_i_5571_, lean_object* v_bs_5572_){
_start:
{
size_t v_sz_boxed_5573_; size_t v_i_boxed_5574_; lean_object* v_res_5575_; 
v_sz_boxed_5573_ = lean_unbox_usize(v_sz_5570_);
lean_dec(v_sz_5570_);
v_i_boxed_5574_ = lean_unbox_usize(v_i_5571_);
lean_dec(v_i_5571_);
v_res_5575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_boxed_5573_, v_i_boxed_5574_, v_bs_5572_);
return v_res_5575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object* v_params_5576_, lean_object* v_ps_5577_, uint8_t v_only_5578_, lean_object* v_k_5579_, lean_object* v_a_5580_, lean_object* v_a_5581_, lean_object* v_a_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_, lean_object* v_a_5586_, lean_object* v_a_5587_){
_start:
{
lean_object* v___y_5590_; lean_object* v___y_5591_; lean_object* v___y_5592_; lean_object* v___y_5593_; lean_object* v___y_5594_; lean_object* v___y_5595_; lean_object* v___y_5596_; lean_object* v___y_5597_; lean_object* v___y_5598_; uint8_t v___y_5611_; uint8_t v___y_5612_; lean_object* v_params_5613_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v___y_5616_; lean_object* v___y_5617_; lean_object* v___y_5618_; lean_object* v___y_5619_; lean_object* v___y_5620_; lean_object* v___y_5621_; uint8_t v___y_5722_; 
if (v_only_5578_ == 0)
{
lean_object* v___x_5746_; lean_object* v___x_5747_; uint8_t v___x_5748_; 
v___x_5746_ = lean_array_get_size(v_ps_5577_);
v___x_5747_ = lean_unsigned_to_nat(0u);
v___x_5748_ = lean_nat_dec_eq(v___x_5746_, v___x_5747_);
if (v___x_5748_ == 0)
{
v___y_5722_ = v___x_5748_;
goto v___jp_5721_;
}
else
{
lean_object* v___x_5749_; 
lean_dec_ref(v_params_5576_);
lean_inc(v_a_5587_);
lean_inc_ref(v_a_5586_);
lean_inc(v_a_5585_);
lean_inc_ref(v_a_5584_);
lean_inc(v_a_5583_);
lean_inc_ref(v_a_5582_);
lean_inc(v_a_5581_);
lean_inc_ref(v_a_5580_);
v___x_5749_ = lean_apply_9(v_k_5579_, v_a_5580_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_, lean_box(0));
return v___x_5749_;
}
}
else
{
uint8_t v___x_5750_; 
v___x_5750_ = 0;
v___y_5722_ = v___x_5750_;
goto v___jp_5721_;
}
v___jp_5589_:
{
lean_object* v___x_5599_; lean_object* v___x_5600_; 
v___x_5599_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_assertExtra___boxed), 12, 1);
lean_closure_set(v___x_5599_, 0, v___y_5590_);
v___x_5600_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___x_5599_, v___y_5591_, v___y_5592_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_);
if (lean_obj_tag(v___x_5600_) == 0)
{
lean_object* v___x_5601_; 
lean_dec_ref_known(v___x_5600_, 1);
lean_inc(v___y_5598_);
lean_inc_ref(v___y_5597_);
lean_inc(v___y_5596_);
lean_inc_ref(v___y_5595_);
lean_inc(v___y_5594_);
lean_inc_ref(v___y_5593_);
lean_inc(v___y_5592_);
v___x_5601_ = lean_apply_9(v_k_5579_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, lean_box(0));
return v___x_5601_;
}
else
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5609_; 
lean_dec_ref(v___y_5591_);
lean_dec_ref(v_k_5579_);
v_a_5602_ = lean_ctor_get(v___x_5600_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v___x_5600_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5604_ = v___x_5600_;
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v___x_5600_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5607_; 
if (v_isShared_5605_ == 0)
{
v___x_5607_ = v___x_5604_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_a_5602_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
}
v___jp_5610_:
{
lean_object* v___x_5622_; 
v___x_5622_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_5613_, v_ps_5577_, v_only_5578_, v___y_5612_, v___y_5611_, v___y_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_);
if (lean_obj_tag(v___x_5622_) == 0)
{
lean_object* v_a_5623_; lean_object* v_ctx_5624_; lean_object* v_anchorRefs_x3f_5625_; lean_object* v_toContext_5626_; lean_object* v_sctx_5627_; lean_object* v_methods_5628_; uint8_t v_sym_5629_; lean_object* v_simp_5630_; lean_object* v_simpMethods_5631_; lean_object* v_config_5632_; uint8_t v_cheapCases_5633_; uint8_t v_reportMVarIssue_5634_; lean_object* v_splitSource_5635_; lean_object* v_ematchDiagSource_5636_; lean_object* v_symPrios_5637_; lean_object* v_extensions_5638_; uint8_t v_debug_5639_; uint8_t v_ematchDiag_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v_a_5623_ = lean_ctor_get(v___x_5622_, 0);
lean_inc_n(v_a_5623_, 2);
lean_dec_ref_known(v___x_5622_, 1);
v_ctx_5624_ = lean_ctor_get(v___y_5614_, 1);
v_anchorRefs_x3f_5625_ = lean_ctor_get(v_a_5623_, 8);
v_toContext_5626_ = lean_ctor_get(v___y_5614_, 0);
v_sctx_5627_ = lean_ctor_get(v___y_5614_, 2);
v_methods_5628_ = lean_ctor_get(v___y_5614_, 3);
v_sym_5629_ = lean_ctor_get_uint8(v___y_5614_, sizeof(void*)*5);
v_simp_5630_ = lean_ctor_get(v_ctx_5624_, 0);
v_simpMethods_5631_ = lean_ctor_get(v_ctx_5624_, 1);
v_config_5632_ = lean_ctor_get(v_ctx_5624_, 2);
v_cheapCases_5633_ = lean_ctor_get_uint8(v_ctx_5624_, sizeof(void*)*8);
v_reportMVarIssue_5634_ = lean_ctor_get_uint8(v_ctx_5624_, sizeof(void*)*8 + 1);
v_splitSource_5635_ = lean_ctor_get(v_ctx_5624_, 4);
v_ematchDiagSource_5636_ = lean_ctor_get(v_ctx_5624_, 5);
v_symPrios_5637_ = lean_ctor_get(v_ctx_5624_, 6);
v_extensions_5638_ = lean_ctor_get(v_ctx_5624_, 7);
v_debug_5639_ = lean_ctor_get_uint8(v_ctx_5624_, sizeof(void*)*8 + 2);
v_ematchDiag_5640_ = lean_ctor_get_uint8(v_ctx_5624_, sizeof(void*)*8 + 3);
lean_inc_ref(v_extensions_5638_);
lean_inc_ref(v_symPrios_5637_);
lean_inc(v_ematchDiagSource_5636_);
lean_inc(v_splitSource_5635_);
lean_inc(v_anchorRefs_x3f_5625_);
lean_inc_ref(v_config_5632_);
lean_inc_ref(v_simpMethods_5631_);
lean_inc_ref(v_simp_5630_);
v___x_5641_ = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(v___x_5641_, 0, v_simp_5630_);
lean_ctor_set(v___x_5641_, 1, v_simpMethods_5631_);
lean_ctor_set(v___x_5641_, 2, v_config_5632_);
lean_ctor_set(v___x_5641_, 3, v_anchorRefs_x3f_5625_);
lean_ctor_set(v___x_5641_, 4, v_splitSource_5635_);
lean_ctor_set(v___x_5641_, 5, v_ematchDiagSource_5636_);
lean_ctor_set(v___x_5641_, 6, v_symPrios_5637_);
lean_ctor_set(v___x_5641_, 7, v_extensions_5638_);
lean_ctor_set_uint8(v___x_5641_, sizeof(void*)*8, v_cheapCases_5633_);
lean_ctor_set_uint8(v___x_5641_, sizeof(void*)*8 + 1, v_reportMVarIssue_5634_);
lean_ctor_set_uint8(v___x_5641_, sizeof(void*)*8 + 2, v_debug_5639_);
lean_ctor_set_uint8(v___x_5641_, sizeof(void*)*8 + 3, v_ematchDiag_5640_);
lean_inc_ref(v_methods_5628_);
lean_inc_ref(v_sctx_5627_);
lean_inc_ref(v_toContext_5626_);
v___x_5642_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5642_, 0, v_toContext_5626_);
lean_ctor_set(v___x_5642_, 1, v___x_5641_);
lean_ctor_set(v___x_5642_, 2, v_sctx_5627_);
lean_ctor_set(v___x_5642_, 3, v_methods_5628_);
lean_ctor_set(v___x_5642_, 4, v_a_5623_);
lean_ctor_set_uint8(v___x_5642_, sizeof(void*)*5, v_sym_5629_);
if (v_only_5578_ == 0)
{
v___y_5590_ = v_a_5623_;
v___y_5591_ = v___x_5642_;
v___y_5592_ = v___y_5615_;
v___y_5593_ = v___y_5616_;
v___y_5594_ = v___y_5617_;
v___y_5595_ = v___y_5618_;
v___y_5596_ = v___y_5619_;
v___y_5597_ = v___y_5620_;
v___y_5598_ = v___y_5621_;
goto v___jp_5589_;
}
else
{
lean_object* v___x_5643_; 
v___x_5643_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_5615_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_);
if (lean_obj_tag(v___x_5643_) == 0)
{
lean_object* v_a_5644_; lean_object* v_toGoalState_5645_; lean_object* v_ematch_5646_; lean_object* v_mvarId_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5703_; 
v_a_5644_ = lean_ctor_get(v___x_5643_, 0);
lean_inc(v_a_5644_);
lean_dec_ref_known(v___x_5643_, 1);
v_toGoalState_5645_ = lean_ctor_get(v_a_5644_, 0);
lean_inc_ref(v_toGoalState_5645_);
v_ematch_5646_ = lean_ctor_get(v_toGoalState_5645_, 12);
lean_inc_ref(v_ematch_5646_);
v_mvarId_5647_ = lean_ctor_get(v_a_5644_, 1);
v_isSharedCheck_5703_ = !lean_is_exclusive(v_a_5644_);
if (v_isSharedCheck_5703_ == 0)
{
lean_object* v_unused_5704_; 
v_unused_5704_ = lean_ctor_get(v_a_5644_, 0);
lean_dec(v_unused_5704_);
v___x_5649_ = v_a_5644_;
v_isShared_5650_ = v_isSharedCheck_5703_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_mvarId_5647_);
lean_dec(v_a_5644_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5703_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v_nextDeclIdx_5651_; lean_object* v_enodeMap_5652_; lean_object* v_exprs_5653_; lean_object* v_parents_5654_; lean_object* v_congrTable_5655_; lean_object* v_appMap_5656_; lean_object* v_indicesFound_5657_; lean_object* v_newFacts_5658_; uint8_t v_inconsistent_5659_; lean_object* v_nextIdx_5660_; lean_object* v_newRawFacts_5661_; lean_object* v_facts_5662_; lean_object* v_extThms_5663_; lean_object* v_inj_5664_; lean_object* v_split_5665_; lean_object* v_clean_5666_; lean_object* v_sstates_5667_; lean_object* v_gmt_5668_; lean_object* v_thms_5669_; lean_object* v_newThms_5670_; lean_object* v_numInstances_5671_; lean_object* v_numDelayedInstances_5672_; lean_object* v_num_5673_; lean_object* v_preInstances_5674_; lean_object* v_nextThmIdx_5675_; lean_object* v_matchEqNames_5676_; lean_object* v_delayedThmInsts_5677_; lean_object* v___x_5678_; lean_object* v___f_5679_; lean_object* v___x_5680_; 
v_nextDeclIdx_5651_ = lean_ctor_get(v_toGoalState_5645_, 0);
lean_inc(v_nextDeclIdx_5651_);
v_enodeMap_5652_ = lean_ctor_get(v_toGoalState_5645_, 1);
lean_inc_ref(v_enodeMap_5652_);
v_exprs_5653_ = lean_ctor_get(v_toGoalState_5645_, 2);
lean_inc_ref(v_exprs_5653_);
v_parents_5654_ = lean_ctor_get(v_toGoalState_5645_, 3);
lean_inc_ref(v_parents_5654_);
v_congrTable_5655_ = lean_ctor_get(v_toGoalState_5645_, 4);
lean_inc_ref(v_congrTable_5655_);
v_appMap_5656_ = lean_ctor_get(v_toGoalState_5645_, 5);
lean_inc_ref(v_appMap_5656_);
v_indicesFound_5657_ = lean_ctor_get(v_toGoalState_5645_, 6);
lean_inc_ref(v_indicesFound_5657_);
v_newFacts_5658_ = lean_ctor_get(v_toGoalState_5645_, 7);
lean_inc_ref(v_newFacts_5658_);
v_inconsistent_5659_ = lean_ctor_get_uint8(v_toGoalState_5645_, sizeof(void*)*17);
v_nextIdx_5660_ = lean_ctor_get(v_toGoalState_5645_, 8);
lean_inc(v_nextIdx_5660_);
v_newRawFacts_5661_ = lean_ctor_get(v_toGoalState_5645_, 9);
lean_inc_ref(v_newRawFacts_5661_);
v_facts_5662_ = lean_ctor_get(v_toGoalState_5645_, 10);
lean_inc_ref(v_facts_5662_);
v_extThms_5663_ = lean_ctor_get(v_toGoalState_5645_, 11);
lean_inc_ref(v_extThms_5663_);
v_inj_5664_ = lean_ctor_get(v_toGoalState_5645_, 13);
lean_inc_ref(v_inj_5664_);
v_split_5665_ = lean_ctor_get(v_toGoalState_5645_, 14);
lean_inc_ref(v_split_5665_);
v_clean_5666_ = lean_ctor_get(v_toGoalState_5645_, 15);
lean_inc_ref(v_clean_5666_);
v_sstates_5667_ = lean_ctor_get(v_toGoalState_5645_, 16);
lean_inc_ref(v_sstates_5667_);
lean_dec_ref(v_toGoalState_5645_);
v_gmt_5668_ = lean_ctor_get(v_ematch_5646_, 1);
lean_inc(v_gmt_5668_);
v_thms_5669_ = lean_ctor_get(v_ematch_5646_, 2);
lean_inc_ref(v_thms_5669_);
v_newThms_5670_ = lean_ctor_get(v_ematch_5646_, 3);
lean_inc_ref(v_newThms_5670_);
v_numInstances_5671_ = lean_ctor_get(v_ematch_5646_, 4);
lean_inc(v_numInstances_5671_);
v_numDelayedInstances_5672_ = lean_ctor_get(v_ematch_5646_, 5);
lean_inc(v_numDelayedInstances_5672_);
v_num_5673_ = lean_ctor_get(v_ematch_5646_, 6);
lean_inc(v_num_5673_);
v_preInstances_5674_ = lean_ctor_get(v_ematch_5646_, 7);
lean_inc_ref(v_preInstances_5674_);
v_nextThmIdx_5675_ = lean_ctor_get(v_ematch_5646_, 8);
lean_inc(v_nextThmIdx_5675_);
v_matchEqNames_5676_ = lean_ctor_get(v_ematch_5646_, 9);
lean_inc_ref(v_matchEqNames_5676_);
v_delayedThmInsts_5677_ = lean_ctor_get(v_ematch_5646_, 10);
lean_inc_ref(v_delayedThmInsts_5677_);
lean_dec_ref(v_ematch_5646_);
v___x_5678_ = lean_box(v_inconsistent_5659_);
v___f_5679_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed), 38, 28);
lean_closure_set(v___f_5679_, 0, v_thms_5669_);
lean_closure_set(v___f_5679_, 1, v_newThms_5670_);
lean_closure_set(v___f_5679_, 2, v_gmt_5668_);
lean_closure_set(v___f_5679_, 3, v_numInstances_5671_);
lean_closure_set(v___f_5679_, 4, v_numDelayedInstances_5672_);
lean_closure_set(v___f_5679_, 5, v_num_5673_);
lean_closure_set(v___f_5679_, 6, v_preInstances_5674_);
lean_closure_set(v___f_5679_, 7, v_nextThmIdx_5675_);
lean_closure_set(v___f_5679_, 8, v_matchEqNames_5676_);
lean_closure_set(v___f_5679_, 9, v_delayedThmInsts_5677_);
lean_closure_set(v___f_5679_, 10, v_nextDeclIdx_5651_);
lean_closure_set(v___f_5679_, 11, v_enodeMap_5652_);
lean_closure_set(v___f_5679_, 12, v_exprs_5653_);
lean_closure_set(v___f_5679_, 13, v_parents_5654_);
lean_closure_set(v___f_5679_, 14, v_congrTable_5655_);
lean_closure_set(v___f_5679_, 15, v_appMap_5656_);
lean_closure_set(v___f_5679_, 16, v_indicesFound_5657_);
lean_closure_set(v___f_5679_, 17, v_newFacts_5658_);
lean_closure_set(v___f_5679_, 18, v___x_5678_);
lean_closure_set(v___f_5679_, 19, v_nextIdx_5660_);
lean_closure_set(v___f_5679_, 20, v_newRawFacts_5661_);
lean_closure_set(v___f_5679_, 21, v_facts_5662_);
lean_closure_set(v___f_5679_, 22, v_extThms_5663_);
lean_closure_set(v___f_5679_, 23, v_inj_5664_);
lean_closure_set(v___f_5679_, 24, v_split_5665_);
lean_closure_set(v___f_5679_, 25, v_clean_5666_);
lean_closure_set(v___f_5679_, 26, v_sstates_5667_);
lean_closure_set(v___f_5679_, 27, v_mvarId_5647_);
v___x_5680_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_5679_, v___x_5642_, v___y_5615_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_);
if (lean_obj_tag(v___x_5680_) == 0)
{
lean_object* v_a_5681_; lean_object* v___x_5682_; lean_object* v___x_5684_; 
v_a_5681_ = lean_ctor_get(v___x_5680_, 0);
lean_inc(v_a_5681_);
lean_dec_ref_known(v___x_5680_, 1);
v___x_5682_ = lean_box(0);
if (v_isShared_5650_ == 0)
{
lean_ctor_set_tag(v___x_5649_, 1);
lean_ctor_set(v___x_5649_, 1, v___x_5682_);
lean_ctor_set(v___x_5649_, 0, v_a_5681_);
v___x_5684_ = v___x_5649_;
goto v_reusejp_5683_;
}
else
{
lean_object* v_reuseFailAlloc_5694_; 
v_reuseFailAlloc_5694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5694_, 0, v_a_5681_);
lean_ctor_set(v_reuseFailAlloc_5694_, 1, v___x_5682_);
v___x_5684_ = v_reuseFailAlloc_5694_;
goto v_reusejp_5683_;
}
v_reusejp_5683_:
{
lean_object* v___x_5685_; 
v___x_5685_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v___x_5684_, v___y_5615_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_);
if (lean_obj_tag(v___x_5685_) == 0)
{
lean_dec_ref_known(v___x_5685_, 1);
v___y_5590_ = v_a_5623_;
v___y_5591_ = v___x_5642_;
v___y_5592_ = v___y_5615_;
v___y_5593_ = v___y_5616_;
v___y_5594_ = v___y_5617_;
v___y_5595_ = v___y_5618_;
v___y_5596_ = v___y_5619_;
v___y_5597_ = v___y_5620_;
v___y_5598_ = v___y_5621_;
goto v___jp_5589_;
}
else
{
lean_object* v_a_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5693_; 
lean_dec_ref_known(v___x_5642_, 5);
lean_dec(v_a_5623_);
lean_dec_ref(v_k_5579_);
v_a_5686_ = lean_ctor_get(v___x_5685_, 0);
v_isSharedCheck_5693_ = !lean_is_exclusive(v___x_5685_);
if (v_isSharedCheck_5693_ == 0)
{
v___x_5688_ = v___x_5685_;
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_a_5686_);
lean_dec(v___x_5685_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v___x_5691_; 
if (v_isShared_5689_ == 0)
{
v___x_5691_ = v___x_5688_;
goto v_reusejp_5690_;
}
else
{
lean_object* v_reuseFailAlloc_5692_; 
v_reuseFailAlloc_5692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5692_, 0, v_a_5686_);
v___x_5691_ = v_reuseFailAlloc_5692_;
goto v_reusejp_5690_;
}
v_reusejp_5690_:
{
return v___x_5691_;
}
}
}
}
}
else
{
lean_object* v_a_5695_; lean_object* v___x_5697_; uint8_t v_isShared_5698_; uint8_t v_isSharedCheck_5702_; 
lean_del_object(v___x_5649_);
lean_dec_ref_known(v___x_5642_, 5);
lean_dec(v_a_5623_);
lean_dec_ref(v_k_5579_);
v_a_5695_ = lean_ctor_get(v___x_5680_, 0);
v_isSharedCheck_5702_ = !lean_is_exclusive(v___x_5680_);
if (v_isSharedCheck_5702_ == 0)
{
v___x_5697_ = v___x_5680_;
v_isShared_5698_ = v_isSharedCheck_5702_;
goto v_resetjp_5696_;
}
else
{
lean_inc(v_a_5695_);
lean_dec(v___x_5680_);
v___x_5697_ = lean_box(0);
v_isShared_5698_ = v_isSharedCheck_5702_;
goto v_resetjp_5696_;
}
v_resetjp_5696_:
{
lean_object* v___x_5700_; 
if (v_isShared_5698_ == 0)
{
v___x_5700_ = v___x_5697_;
goto v_reusejp_5699_;
}
else
{
lean_object* v_reuseFailAlloc_5701_; 
v_reuseFailAlloc_5701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5701_, 0, v_a_5695_);
v___x_5700_ = v_reuseFailAlloc_5701_;
goto v_reusejp_5699_;
}
v_reusejp_5699_:
{
return v___x_5700_;
}
}
}
}
}
else
{
lean_object* v_a_5705_; lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5712_; 
lean_dec_ref_known(v___x_5642_, 5);
lean_dec(v_a_5623_);
lean_dec_ref(v_k_5579_);
v_a_5705_ = lean_ctor_get(v___x_5643_, 0);
v_isSharedCheck_5712_ = !lean_is_exclusive(v___x_5643_);
if (v_isSharedCheck_5712_ == 0)
{
v___x_5707_ = v___x_5643_;
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
else
{
lean_inc(v_a_5705_);
lean_dec(v___x_5643_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v___x_5710_; 
if (v_isShared_5708_ == 0)
{
v___x_5710_ = v___x_5707_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_a_5705_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
}
}
else
{
lean_object* v_a_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5720_; 
lean_dec_ref(v_k_5579_);
v_a_5713_ = lean_ctor_get(v___x_5622_, 0);
v_isSharedCheck_5720_ = !lean_is_exclusive(v___x_5622_);
if (v_isSharedCheck_5720_ == 0)
{
v___x_5715_ = v___x_5622_;
v_isShared_5716_ = v_isSharedCheck_5720_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_a_5713_);
lean_dec(v___x_5622_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5720_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v___x_5718_; 
if (v_isShared_5716_ == 0)
{
v___x_5718_ = v___x_5715_;
goto v_reusejp_5717_;
}
else
{
lean_object* v_reuseFailAlloc_5719_; 
v_reuseFailAlloc_5719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5719_, 0, v_a_5713_);
v___x_5718_ = v_reuseFailAlloc_5719_;
goto v_reusejp_5717_;
}
v_reusejp_5717_:
{
return v___x_5718_;
}
}
}
}
v___jp_5721_:
{
uint8_t v___x_5723_; 
v___x_5723_ = 1;
if (v_only_5578_ == 0)
{
v___y_5611_ = v___x_5723_;
v___y_5612_ = v___y_5722_;
v_params_5613_ = v_params_5576_;
v___y_5614_ = v_a_5580_;
v___y_5615_ = v_a_5581_;
v___y_5616_ = v_a_5582_;
v___y_5617_ = v_a_5583_;
v___y_5618_ = v_a_5584_;
v___y_5619_ = v_a_5585_;
v___y_5620_ = v_a_5586_;
v___y_5621_ = v_a_5587_;
goto v___jp_5610_;
}
else
{
lean_object* v_config_5724_; lean_object* v_extensions_5725_; lean_object* v_extra_5726_; lean_object* v_extraInj_5727_; lean_object* v_extraFacts_5728_; lean_object* v_symPrios_5729_; lean_object* v_norm_5730_; lean_object* v_normProcs_5731_; lean_object* v___x_5733_; uint8_t v_isShared_5734_; uint8_t v_isSharedCheck_5744_; 
v_config_5724_ = lean_ctor_get(v_params_5576_, 0);
v_extensions_5725_ = lean_ctor_get(v_params_5576_, 1);
v_extra_5726_ = lean_ctor_get(v_params_5576_, 2);
v_extraInj_5727_ = lean_ctor_get(v_params_5576_, 3);
v_extraFacts_5728_ = lean_ctor_get(v_params_5576_, 4);
v_symPrios_5729_ = lean_ctor_get(v_params_5576_, 5);
v_norm_5730_ = lean_ctor_get(v_params_5576_, 6);
v_normProcs_5731_ = lean_ctor_get(v_params_5576_, 7);
v_isSharedCheck_5744_ = !lean_is_exclusive(v_params_5576_);
if (v_isSharedCheck_5744_ == 0)
{
lean_object* v_unused_5745_; 
v_unused_5745_ = lean_ctor_get(v_params_5576_, 8);
lean_dec(v_unused_5745_);
v___x_5733_ = v_params_5576_;
v_isShared_5734_ = v_isSharedCheck_5744_;
goto v_resetjp_5732_;
}
else
{
lean_inc(v_normProcs_5731_);
lean_inc(v_norm_5730_);
lean_inc(v_symPrios_5729_);
lean_inc(v_extraFacts_5728_);
lean_inc(v_extraInj_5727_);
lean_inc(v_extra_5726_);
lean_inc(v_extensions_5725_);
lean_inc(v_config_5724_);
lean_dec(v_params_5576_);
v___x_5733_ = lean_box(0);
v_isShared_5734_ = v_isSharedCheck_5744_;
goto v_resetjp_5732_;
}
v_resetjp_5732_:
{
size_t v_sz_5735_; size_t v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v_params_5742_; 
v_sz_5735_ = lean_array_size(v_extensions_5725_);
v___x_5736_ = ((size_t)0ULL);
v___x_5737_ = l_unsafeCast___redArg(v_extensions_5725_);
lean_dec_ref(v_extensions_5725_);
v___x_5738_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_5735_, v___x_5736_, v___x_5737_);
v___x_5739_ = l_unsafeCast___redArg(v___x_5738_);
lean_dec_ref(v___x_5738_);
v___x_5740_ = lean_box(0);
if (v_isShared_5734_ == 0)
{
lean_ctor_set(v___x_5733_, 8, v___x_5740_);
lean_ctor_set(v___x_5733_, 1, v___x_5739_);
v_params_5742_ = v___x_5733_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v_config_5724_);
lean_ctor_set(v_reuseFailAlloc_5743_, 1, v___x_5739_);
lean_ctor_set(v_reuseFailAlloc_5743_, 2, v_extra_5726_);
lean_ctor_set(v_reuseFailAlloc_5743_, 3, v_extraInj_5727_);
lean_ctor_set(v_reuseFailAlloc_5743_, 4, v_extraFacts_5728_);
lean_ctor_set(v_reuseFailAlloc_5743_, 5, v_symPrios_5729_);
lean_ctor_set(v_reuseFailAlloc_5743_, 6, v_norm_5730_);
lean_ctor_set(v_reuseFailAlloc_5743_, 7, v_normProcs_5731_);
lean_ctor_set(v_reuseFailAlloc_5743_, 8, v___x_5740_);
v_params_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
v___y_5611_ = v___x_5723_;
v___y_5612_ = v___y_5722_;
v_params_5613_ = v_params_5742_;
v___y_5614_ = v_a_5580_;
v___y_5615_ = v_a_5581_;
v___y_5616_ = v_a_5582_;
v___y_5617_ = v_a_5583_;
v___y_5618_ = v_a_5584_;
v___y_5619_ = v_a_5585_;
v___y_5620_ = v_a_5586_;
v___y_5621_ = v_a_5587_;
goto v___jp_5610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object* v_params_5751_, lean_object* v_ps_5752_, lean_object* v_only_5753_, lean_object* v_k_5754_, lean_object* v_a_5755_, lean_object* v_a_5756_, lean_object* v_a_5757_, lean_object* v_a_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_){
_start:
{
uint8_t v_only_boxed_5764_; lean_object* v_res_5765_; 
v_only_boxed_5764_ = lean_unbox(v_only_5753_);
v_res_5765_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_5751_, v_ps_5752_, v_only_boxed_5764_, v_k_5754_, v_a_5755_, v_a_5756_, v_a_5757_, v_a_5758_, v_a_5759_, v_a_5760_, v_a_5761_, v_a_5762_);
lean_dec(v_a_5762_);
lean_dec_ref(v_a_5761_);
lean_dec(v_a_5760_);
lean_dec_ref(v_a_5759_);
lean_dec(v_a_5758_);
lean_dec_ref(v_a_5757_);
lean_dec(v_a_5756_);
lean_dec_ref(v_a_5755_);
lean_dec_ref(v_ps_5752_);
return v_res_5765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object* v_00_u03b1_5766_, lean_object* v_params_5767_, lean_object* v_ps_5768_, uint8_t v_only_5769_, lean_object* v_k_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_, lean_object* v_a_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_){
_start:
{
lean_object* v___x_5780_; 
v___x_5780_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_5767_, v_ps_5768_, v_only_5769_, v_k_5770_, v_a_5771_, v_a_5772_, v_a_5773_, v_a_5774_, v_a_5775_, v_a_5776_, v_a_5777_, v_a_5778_);
return v___x_5780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object* v_00_u03b1_5781_, lean_object* v_params_5782_, lean_object* v_ps_5783_, lean_object* v_only_5784_, lean_object* v_k_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_, lean_object* v_a_5788_, lean_object* v_a_5789_, lean_object* v_a_5790_, lean_object* v_a_5791_, lean_object* v_a_5792_, lean_object* v_a_5793_, lean_object* v_a_5794_){
_start:
{
uint8_t v_only_boxed_5795_; lean_object* v_res_5796_; 
v_only_boxed_5795_ = lean_unbox(v_only_5784_);
v_res_5796_ = l_Lean_Elab_Tactic_Grind_withParams(v_00_u03b1_5781_, v_params_5782_, v_ps_5783_, v_only_boxed_5795_, v_k_5785_, v_a_5786_, v_a_5787_, v_a_5788_, v_a_5789_, v_a_5790_, v_a_5791_, v_a_5792_, v_a_5793_);
lean_dec(v_a_5793_);
lean_dec_ref(v_a_5792_);
lean_dec(v_a_5791_);
lean_dec_ref(v_a_5790_);
lean_dec(v_a_5789_);
lean_dec_ref(v_a_5788_);
lean_dec(v_a_5787_);
lean_dec_ref(v_a_5786_);
lean_dec_ref(v_ps_5783_);
return v_res_5796_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Param(builtin);
}
#ifdef __cplusplus
}
#endif

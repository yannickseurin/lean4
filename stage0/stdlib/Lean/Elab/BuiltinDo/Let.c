// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Let
// Imports: meta import Init.Data.Erased public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic import Lean.Elab.Do.PatternVar
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
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_withErasedProj(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Do_registerMutVarAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_findMutVar_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Do_declareMutVars_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarsDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBindersEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoIdDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "an erased variable takes a plain reassignment, as in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " := e`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Impossible case in elabDoLetOrReassign. This is an elaborator bug.\n"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "`+generalize` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`+postponeValue` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Erased.mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Erased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 74, 233, 12, 85, 169, 163)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "failed to infer `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` declaration type"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "failed to infer universe levels in `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "waitIfTypeMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wait_if_type_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object**);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "let body of "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(221, 9, 221, 202, 9, 173, 58, 127)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value),LEAN_SCALAR_PTR_LITERAL(132, 25, 49, 206, 109, 94, 77, 137)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__4;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__6;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__8;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letEqnsDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value),LEAN_SCALAR_PTR_LITERAL(82, 210, 72, 51, 179, 245, 26, 94)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "configuration options are not allowed with `let mut`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoLet"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 0, 15, 120, 200, 84, 91, 220)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value;
static const lean_array_object l_Lean_Elab_Do_elabDoErased___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoErased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 19, 50, 139, 19, 74, 58, 104)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__5 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "erased"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mut"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__11 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__x"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__12 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value),LEAN_SCALAR_PTR_LITERAL(238, 215, 60, 46, 39, 217, 189, 106)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__13 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__14 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__15 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__16 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__17 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expandDoErasedArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 145, 84, 137, 209, 6, 18, 127)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoHave"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 115, 123, 116, 44, 216, 133, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "letrec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "let rec body of group "};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoLetRec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 245, 136, 148, 64, 2, 202, 185)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoReassign"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 53, 237, 208, 54, 227, 67, 171)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__11;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(182, 237, 62, 79, 212, 57, 236, 253)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "PUnit.unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__18;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__23 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__24 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__25 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__25_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabDoLetElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 42, 180, 235, 57, 50, 131, 26)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "configuration options are not supported with `←`"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoLetArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 6, 18, 178, 201, 235, 246, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "reassignment with `|` (i.e., \"else clause\") is not supported"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabDoReassignArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 247, 22, 101, 121, 153, 219, 18)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Elab_Do_LetOrReassign_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 0)
{
lean_object* v_mutTk_x3f_9_; uint8_t v_erased_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_mutTk_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_mutTk_x3f_9_);
v_erased_10_ = lean_ctor_get_uint8(v_t_7_, sizeof(void*)*1);
lean_dec_ref_known(v_t_7_, 1);
v___x_11_ = lean_box(v_erased_10_);
v___x_12_ = lean_apply_2(v_k_8_, v_mutTk_x3f_9_, v___x_11_);
return v___x_12_;
}
else
{
lean_dec(v_t_7_);
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Elab_Do_LetOrReassign_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object* v_t_25_, lean_object* v_let_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_25_, v_let_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_let_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_29_, v_let_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object* v_t_33_, lean_object* v_have_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_33_, v_have_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_have_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_37_, v_have_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object* v_t_41_, lean_object* v_reassign_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_41_, v_reassign_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_reassign_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_45_, v_reassign_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object* v_letOrReassign_49_){
_start:
{
if (lean_obj_tag(v_letOrReassign_49_) == 0)
{
lean_object* v_mutTk_x3f_50_; 
v_mutTk_x3f_50_ = lean_ctor_get(v_letOrReassign_49_, 0);
lean_inc(v_mutTk_x3f_50_);
return v_mutTk_x3f_50_;
}
else
{
lean_object* v___x_51_; 
v___x_51_ = lean_box(0);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object* v_letOrReassign_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_52_);
lean_dec(v_letOrReassign_52_);
return v_res_53_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object* v_letOrReassign_54_){
_start:
{
if (lean_obj_tag(v_letOrReassign_54_) == 0)
{
uint8_t v_erased_55_; 
v_erased_55_ = lean_ctor_get_uint8(v_letOrReassign_54_, sizeof(void*)*1);
return v_erased_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object* v_letOrReassign_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_57_);
lean_dec(v_letOrReassign_57_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object* v_letOrReassign_60_, lean_object* v_vars_61_, lean_object* v_a_62_){
_start:
{
switch(lean_obj_tag(v_letOrReassign_60_))
{
case 0:
{
uint8_t v_erased_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_erased_64_ = lean_ctor_get_uint8(v_letOrReassign_60_, sizeof(void*)*1);
v___x_65_ = lean_box(v_erased_64_);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
case 2:
{
lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_array_get_size(v_vars_61_);
v___x_69_ = lean_nat_dec_lt(v___x_67_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_box(v___x_69_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_array_fget_borrowed(v_vars_61_, v___x_67_);
v___x_73_ = l_Lean_TSyntax_getId(v___x_72_);
v___x_74_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_73_, v_a_62_);
lean_dec(v___x_73_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_90_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_90_ == 0)
{
v___x_77_ = v___x_74_;
v_isShared_78_ = v_isSharedCheck_90_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_74_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_90_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
if (lean_obj_tag(v_a_75_) == 1)
{
lean_object* v_val_79_; uint8_t v_erased_80_; lean_object* v___x_81_; lean_object* v___x_83_; 
v_val_79_ = lean_ctor_get(v_a_75_, 0);
lean_inc(v_val_79_);
lean_dec_ref_known(v_a_75_, 1);
v_erased_80_ = lean_ctor_get_uint8(v_val_79_, sizeof(void*)*2);
lean_dec(v_val_79_);
v___x_81_ = lean_box(v_erased_80_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v___x_81_);
v___x_83_ = v___x_77_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
else
{
uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_88_; 
lean_dec(v_a_75_);
v___x_85_ = 0;
v___x_86_ = lean_box(v___x_85_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v___x_86_);
v___x_88_ = v___x_77_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
else
{
lean_object* v_a_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_98_; 
v_a_91_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_98_ == 0)
{
v___x_93_ = v___x_74_;
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_a_91_);
lean_dec(v___x_74_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_96_; 
if (v_isShared_94_ == 0)
{
v___x_96_ = v___x_93_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_a_91_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
}
default: 
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = 0;
v___x_100_ = lean_box(v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object* v_letOrReassign_102_, lean_object* v_vars_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_102_, v_vars_103_, v_a_104_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_vars_103_);
lean_dec(v_letOrReassign_102_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object* v_letOrReassign_107_, lean_object* v_vars_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_107_, v_vars_108_, v_a_109_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object* v_letOrReassign_118_, lean_object* v_vars_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Elab_Do_isErased(v_letOrReassign_118_, v_vars_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec_ref(v_a_120_);
lean_dec_ref(v_vars_119_);
lean_dec(v_letOrReassign_118_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object* v_msgData_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v___x_135_; lean_object* v_env_136_; lean_object* v___x_137_; lean_object* v_toCold_138_; lean_object* v_mctx_139_; lean_object* v_lctx_140_; lean_object* v_options_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_135_ = lean_st_ref_get(v___y_133_);
v_env_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc_ref(v_env_136_);
lean_dec(v___x_135_);
v___x_137_ = lean_st_ref_get(v___y_131_);
v_toCold_138_ = lean_ctor_get(v___y_132_, 0);
v_mctx_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc_ref(v_mctx_139_);
lean_dec(v___x_137_);
v_lctx_140_ = lean_ctor_get(v___y_130_, 2);
v_options_141_ = lean_ctor_get(v_toCold_138_, 2);
lean_inc_ref(v_options_141_);
lean_inc_ref(v_lctx_140_);
v___x_142_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_142_, 0, v_env_136_);
lean_ctor_set(v___x_142_, 1, v_mctx_139_);
lean_ctor_set(v___x_142_, 2, v_lctx_140_);
lean_ctor_set(v___x_142_, 3, v_options_141_);
v___x_143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v_msgData_129_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msgData_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object* v_msg_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_ref_158_; lean_object* v___x_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_ref_158_ = lean_ctor_get(v___y_155_, 2);
v___x_159_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_168_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_inc(v_ref_158_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v_ref_158_);
lean_ctor_set(v___x_164_, 1, v_a_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 1);
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object* v_msg_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object* v_ref_176_, lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_toCold_186_; lean_object* v_currRecDepth_187_; lean_object* v_ref_188_; uint8_t v_diag_189_; uint8_t v_suppressElabErrors_190_; lean_object* v_ref_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_toCold_186_ = lean_ctor_get(v___y_183_, 0);
v_currRecDepth_187_ = lean_ctor_get(v___y_183_, 1);
v_ref_188_ = lean_ctor_get(v___y_183_, 2);
v_diag_189_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3);
v_suppressElabErrors_190_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 1);
v_ref_191_ = l_Lean_replaceRef(v_ref_176_, v_ref_188_);
lean_inc(v_currRecDepth_187_);
lean_inc_ref(v_toCold_186_);
v___x_192_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_192_, 0, v_toCold_186_);
lean_ctor_set(v___x_192_, 1, v_currRecDepth_187_);
lean_ctor_set(v___x_192_, 2, v_ref_191_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*3, v_diag_189_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*3 + 1, v_suppressElabErrors_190_);
v___x_193_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_177_, v___y_181_, v___y_182_, v___x_192_, v___y_184_);
lean_dec_ref_known(v___x_192_, 3);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object* v_ref_194_, lean_object* v_msg_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_194_, v_msg_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v_ref_194_);
return v_res_204_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0));
v___x_207_ = l_Lean_stringToMessageData(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2));
v___x_210_ = l_Lean_stringToMessageData(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object* v_as_211_, size_t v_sz_212_, size_t v_i_213_, lean_object* v_b_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_a_224_; uint8_t v___x_228_; 
v___x_228_ = lean_usize_dec_lt(v_i_213_, v_sz_212_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_b_214_);
return v___x_229_;
}
else
{
lean_object* v___x_230_; lean_object* v_a_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_230_ = lean_box(0);
v_a_231_ = lean_array_uget_borrowed(v_as_211_, v_i_213_);
v___x_232_ = l_Lean_TSyntax_getId(v_a_231_);
v___x_233_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_232_, v___y_215_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref_known(v___x_233_, 1);
if (lean_obj_tag(v_a_234_) == 0)
{
lean_dec(v___x_232_);
v_a_224_ = v___x_230_;
goto v___jp_223_;
}
else
{
lean_object* v_val_235_; uint8_t v_erased_236_; 
v_val_235_ = lean_ctor_get(v_a_234_, 0);
lean_inc(v_val_235_);
lean_dec_ref_known(v_a_234_, 1);
v_erased_236_ = lean_ctor_get_uint8(v_val_235_, sizeof(void*)*2);
lean_dec(v_val_235_);
if (v_erased_236_ == 0)
{
lean_dec(v___x_232_);
v_a_224_ = v___x_230_;
goto v___jp_223_;
}
else
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_237_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1);
v___x_238_ = l_Lean_MessageData_ofName(v___x_232_);
v___x_239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3);
v___x_241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_231_, v___x_241_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_dec_ref_known(v___x_242_, 1);
v_a_224_ = v___x_230_;
goto v___jp_223_;
}
else
{
return v___x_242_;
}
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec(v___x_232_);
v_a_243_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_233_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_233_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
v___jp_223_:
{
size_t v___x_225_; size_t v___x_226_; 
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_213_, v___x_225_);
v_i_213_ = v___x_226_;
v_b_214_ = v_a_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object* v_as_251_, lean_object* v_sz_252_, lean_object* v_i_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
size_t v_sz_boxed_263_; size_t v_i_boxed_264_; lean_object* v_res_265_; 
v_sz_boxed_263_ = lean_unbox_usize(v_sz_252_);
lean_dec(v_sz_252_);
v_i_boxed_264_ = lean_unbox_usize(v_i_253_);
lean_dec(v_i_253_);
v_res_265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_as_251_, v_sz_boxed_263_, v_i_boxed_264_, v_b_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec_ref(v_as_251_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object* v_letOrReassign_266_, lean_object* v_vars_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
if (lean_obj_tag(v_letOrReassign_266_) == 2)
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_Elab_Do_throwUnlessMutVarsDeclared(v_vars_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_299_; 
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v___x_276_, 0);
lean_dec(v_unused_300_);
v___x_278_ = v___x_276_;
v_isShared_279_ = v_isSharedCheck_299_;
goto v_resetjp_277_;
}
else
{
lean_dec(v___x_276_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_299_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_array_get_size(v_vars_267_);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_dec_eq(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; size_t v_sz_284_; size_t v___x_285_; lean_object* v___x_286_; 
lean_del_object(v___x_278_);
v___x_283_ = lean_box(0);
v_sz_284_ = lean_array_size(v_vars_267_);
v___x_285_ = ((size_t)0ULL);
v___x_286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_vars_267_, v_sz_284_, v___x_285_, v___x_283_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v___x_286_, 0);
lean_dec(v_unused_294_);
v___x_288_ = v___x_286_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_dec(v___x_286_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_283_);
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_283_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
return v___x_286_;
}
}
else
{
lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_295_ = lean_box(0);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_295_);
v___x_297_ = v___x_278_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
else
{
return v___x_276_;
}
}
else
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v_vars_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object* v_letOrReassign_302_, lean_object* v_vars_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_302_, v_vars_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec_ref(v_vars_303_);
lean_dec(v_letOrReassign_302_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object* v_00_u03b1_313_, lean_object* v_ref_314_, lean_object* v_msg_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_314_, v_msg_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object* v_00_u03b1_325_, lean_object* v_ref_326_, lean_object* v_msg_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(v_00_u03b1_325_, v_ref_326_, v_msg_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v_ref_326_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object* v_00_u03b1_337_, lean_object* v_msg_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_338_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object* v_00_u03b1_348_, lean_object* v_msg_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(v_00_u03b1_348_, v_msg_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object* v_as_359_, size_t v_sz_360_, size_t v_i_361_, lean_object* v_b_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
uint8_t v___x_371_; 
v___x_371_ = lean_usize_dec_lt(v_i_361_, v_sz_360_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v_b_362_);
return v___x_372_;
}
else
{
lean_object* v___x_373_; lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_373_ = lean_box(0);
v_a_374_ = lean_array_uget_borrowed(v_as_359_, v_i_361_);
v___x_375_ = l_Lean_TSyntax_getId(v_a_374_);
v___x_376_ = l_Lean_Elab_Do_registerMutVarAlias(v___x_375_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_376_) == 0)
{
size_t v___x_377_; size_t v___x_378_; 
lean_dec_ref_known(v___x_376_, 1);
v___x_377_ = ((size_t)1ULL);
v___x_378_ = lean_usize_add(v_i_361_, v___x_377_);
v_i_361_ = v___x_378_;
v_b_362_ = v___x_373_;
goto _start;
}
else
{
return v___x_376_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object* v_as_380_, lean_object* v_sz_381_, lean_object* v_i_382_, lean_object* v_b_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
size_t v_sz_boxed_392_; size_t v_i_boxed_393_; lean_object* v_res_394_; 
v_sz_boxed_392_ = lean_unbox_usize(v_sz_381_);
lean_dec(v_sz_381_);
v_i_boxed_393_ = lean_unbox_usize(v_i_382_);
lean_dec(v_i_382_);
v_res_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_as_380_, v_sz_boxed_392_, v_i_boxed_393_, v_b_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec_ref(v_as_380_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object* v_letOrReassign_395_, lean_object* v_vars_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
if (lean_obj_tag(v_letOrReassign_395_) == 2)
{
lean_object* v___x_405_; size_t v_sz_406_; size_t v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_box(0);
v_sz_406_ = lean_array_size(v_vars_396_);
v___x_407_ = ((size_t)0ULL);
v___x_408_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_vars_396_, v_sz_406_, v___x_407_, v___x_405_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; 
v_unused_416_ = lean_ctor_get(v___x_408_, 0);
lean_dec(v_unused_416_);
v___x_410_ = v___x_408_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_dec(v___x_408_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_405_);
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_405_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
return v___x_408_;
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = lean_box(0);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object* v_letOrReassign_419_, lean_object* v_vars_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_419_, v_vars_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec_ref(v_vars_420_);
lean_dec(v_letOrReassign_419_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object* v___x_430_, lean_object* v_b_431_, uint8_t v_a_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Elab_Do_withErasedProj(v___x_430_, v_b_431_, v_a_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object* v___x_442_, lean_object* v_b_443_, lean_object* v_a_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
uint8_t v_a_720__boxed_453_; lean_object* v_res_454_; 
v_a_720__boxed_453_ = lean_unbox(v_a_444_);
v_res_454_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(v___x_442_, v_b_443_, v_a_720__boxed_453_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t v_a_455_, lean_object* v_as_456_, size_t v_i_457_, size_t v_stop_458_, lean_object* v_b_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
uint8_t v___x_468_; 
v___x_468_ = lean_usize_dec_eq(v_i_457_, v_stop_458_);
if (v___x_468_ == 0)
{
size_t v___x_469_; size_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___f_473_; 
v___x_469_ = ((size_t)1ULL);
v___x_470_ = lean_usize_sub(v_i_457_, v___x_469_);
v___x_471_ = lean_array_uget_borrowed(v_as_456_, v___x_470_);
v___x_472_ = lean_box(v_a_455_);
lean_inc(v___x_471_);
v___f_473_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed), 11, 3);
lean_closure_set(v___f_473_, 0, v___x_471_);
lean_closure_set(v___f_473_, 1, v_b_459_);
lean_closure_set(v___f_473_, 2, v___x_472_);
v_i_457_ = v___x_470_;
v_b_459_ = v___f_473_;
goto _start;
}
else
{
lean_object* v___x_475_; 
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
lean_inc(v___y_462_);
lean_inc_ref(v___y_461_);
lean_inc_ref(v___y_460_);
v___x_475_ = lean_apply_8(v_b_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, lean_box(0));
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object* v_a_476_, lean_object* v_as_477_, lean_object* v_i_478_, lean_object* v_stop_479_, lean_object* v_b_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
uint8_t v_a_751__boxed_489_; size_t v_i_boxed_490_; size_t v_stop_boxed_491_; lean_object* v_res_492_; 
v_a_751__boxed_489_ = lean_unbox(v_a_476_);
v_i_boxed_490_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_stop_boxed_491_ = lean_unbox_usize(v_stop_479_);
lean_dec(v_stop_479_);
v_res_492_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v_a_751__boxed_489_, v_as_477_, v_i_boxed_490_, v_stop_boxed_491_, v_b_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v_as_477_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object* v_letOrReassign_493_, lean_object* v_vars_494_, lean_object* v_k_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_493_, v_vars_494_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v___x_505_; 
lean_dec_ref_known(v___x_504_, 1);
v___x_505_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_493_, v_vars_494_, v___y_496_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; uint8_t v___x_507_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_505_, 1);
v___x_507_ = lean_unbox(v_a_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec(v_a_506_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc(v___y_498_);
lean_inc_ref(v___y_497_);
lean_inc_ref(v___y_496_);
v___x_508_ = lean_apply_8(v_k_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, lean_box(0));
return v___x_508_;
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_array_get_size(v_vars_494_);
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = lean_nat_dec_lt(v___x_510_, v___x_509_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_dec(v_a_506_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc(v___y_498_);
lean_inc_ref(v___y_497_);
lean_inc_ref(v___y_496_);
v___x_512_ = lean_apply_8(v_k_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, lean_box(0));
return v___x_512_;
}
else
{
size_t v___x_513_; size_t v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; 
v___x_513_ = lean_usize_of_nat(v___x_509_);
v___x_514_ = ((size_t)0ULL);
v___x_515_ = lean_unbox(v_a_506_);
lean_dec(v_a_506_);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v___x_515_, v_vars_494_, v___x_513_, v___x_514_, v_k_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
return v___x_516_;
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v_k_495_);
v_a_517_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_505_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_505_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_k_495_);
v_a_525_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_504_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_504_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object* v_letOrReassign_533_, lean_object* v_vars_534_, lean_object* v_k_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Elab_Do_elabWithReassignments___lam__0(v_letOrReassign_533_, v_vars_534_, v_k_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec_ref(v_vars_534_);
lean_dec(v_letOrReassign_533_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object* v_letOrReassign_545_, lean_object* v_vars_546_, lean_object* v_k_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___f_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; 
lean_inc_ref(v_vars_546_);
lean_inc(v_letOrReassign_545_);
v___f_556_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed), 11, 3);
lean_closure_set(v___f_556_, 0, v_letOrReassign_545_);
lean_closure_set(v___f_556_, 1, v_vars_546_);
lean_closure_set(v___f_556_, 2, v_k_547_);
v___x_557_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_545_);
v___x_558_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_545_);
lean_dec(v_letOrReassign_545_);
v___x_559_ = l_Lean_Elab_Do_declareMutVars_x3f___redArg(v___x_557_, v_vars_546_, v___x_558_, v___f_556_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_);
lean_dec_ref(v_vars_546_);
lean_dec(v___x_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object* v_letOrReassign_560_, lean_object* v_vars_561_, lean_object* v_k_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_560_, v_vars_561_, v_k_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec_ref(v_a_563_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object* v_a_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object* v_a_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(v_a_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object* v_00_u03b1_590_, lean_object* v_a_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object* v_00_u03b1_600_, lean_object* v_a_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(v_00_u03b1_600_, v_a_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
return v_res_609_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_box(1);
v___x_611_ = l_Lean_MessageData_ofFormat(v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2));
v___x_616_ = l_Lean_MessageData_ofFormat(v___x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
return v_x_617_;
}
else
{
lean_object* v_head_619_; lean_object* v_tail_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_642_; 
v_head_619_ = lean_ctor_get(v_x_618_, 0);
v_tail_620_ = lean_ctor_get(v_x_618_, 1);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_642_ == 0)
{
v___x_622_ = v_x_618_;
v_isShared_623_ = v_isSharedCheck_642_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_tail_620_);
lean_inc(v_head_619_);
lean_dec(v_x_618_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_642_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_before_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_640_; 
v_before_624_ = lean_ctor_get(v_head_619_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_head_619_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v_head_619_, 1);
lean_dec(v_unused_641_);
v___x_626_ = v_head_619_;
v_isShared_627_ = v_isSharedCheck_640_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_before_624_);
lean_dec(v_head_619_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_640_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_628_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_627_ == 0)
{
lean_ctor_set_tag(v___x_626_, 7);
lean_ctor_set(v___x_626_, 1, v___x_628_);
lean_ctor_set(v___x_626_, 0, v_x_617_);
v___x_630_ = v___x_626_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_x_617_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___x_628_);
v___x_630_ = v_reuseFailAlloc_639_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3);
if (v_isShared_623_ == 0)
{
lean_ctor_set_tag(v___x_622_, 7);
lean_ctor_set(v___x_622_, 1, v___x_631_);
lean_ctor_set(v___x_622_, 0, v___x_630_);
v___x_633_ = v___x_622_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v___x_631_);
v___x_633_ = v_reuseFailAlloc_638_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_634_ = l_Lean_MessageData_ofSyntax(v_before_624_);
v___x_635_ = l_Lean_indentD(v___x_634_);
v___x_636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_633_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v_x_617_ = v___x_636_;
v_x_618_ = v_tail_620_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object* v_opts_643_, lean_object* v_opt_644_){
_start:
{
lean_object* v_name_645_; lean_object* v_defValue_646_; lean_object* v_map_647_; lean_object* v___x_648_; 
v_name_645_ = lean_ctor_get(v_opt_644_, 0);
v_defValue_646_ = lean_ctor_get(v_opt_644_, 1);
v_map_647_ = lean_ctor_get(v_opts_643_, 0);
v___x_648_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_647_, v_name_645_);
if (lean_obj_tag(v___x_648_) == 0)
{
uint8_t v___x_649_; 
v___x_649_ = lean_unbox(v_defValue_646_);
return v___x_649_;
}
else
{
lean_object* v_val_650_; 
v_val_650_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v___x_648_, 1);
if (lean_obj_tag(v_val_650_) == 1)
{
uint8_t v_v_651_; 
v_v_651_ = lean_ctor_get_uint8(v_val_650_, 0);
lean_dec_ref_known(v_val_650_, 0);
return v_v_651_;
}
else
{
uint8_t v___x_652_; 
lean_dec(v_val_650_);
v___x_652_ = lean_unbox(v_defValue_646_);
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_653_, lean_object* v_opt_654_){
_start:
{
uint8_t v_res_655_; lean_object* v_r_656_; 
v_res_655_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v_opts_653_, v_opt_654_);
lean_dec_ref(v_opt_654_);
lean_dec_ref(v_opts_653_);
v_r_656_ = lean_box(v_res_655_);
return v_r_656_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1));
v___x_661_ = l_Lean_MessageData_ofFormat(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object* v_msgData_662_, lean_object* v_macroStack_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_toCold_666_; lean_object* v_options_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_toCold_666_ = lean_ctor_get(v___y_664_, 0);
v_options_667_ = lean_ctor_get(v_toCold_666_, 2);
v___x_668_ = l_Lean_Elab_pp_macroStack;
v___x_669_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v_options_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v_macroStack_663_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v_msgData_662_);
return v___x_670_;
}
else
{
if (lean_obj_tag(v_macroStack_663_) == 0)
{
lean_object* v___x_671_; 
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v_msgData_662_);
return v___x_671_;
}
else
{
lean_object* v_head_672_; lean_object* v_after_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_688_; 
v_head_672_ = lean_ctor_get(v_macroStack_663_, 0);
lean_inc(v_head_672_);
v_after_673_ = lean_ctor_get(v_head_672_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_head_672_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v_head_672_, 0);
lean_dec(v_unused_689_);
v___x_675_ = v_head_672_;
v_isShared_676_ = v_isSharedCheck_688_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_after_673_);
lean_dec(v_head_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_688_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_676_ == 0)
{
lean_ctor_set_tag(v___x_675_, 7);
lean_ctor_set(v___x_675_, 1, v___x_677_);
lean_ctor_set(v___x_675_, 0, v_msgData_662_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_msgData_662_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_687_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_msgData_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_680_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2);
v___x_681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_MessageData_ofSyntax(v_after_673_);
v___x_683_ = l_Lean_indentD(v___x_682_);
v_msgData_684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_684_, 0, v___x_681_);
lean_ctor_set(v_msgData_684_, 1, v___x_683_);
v___x_685_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(v_msgData_684_, v_macroStack_663_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_690_, lean_object* v_macroStack_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_690_, v_macroStack_691_, v___y_692_);
lean_dec_ref(v___y_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object* v_msg_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_ref_703_; lean_object* v_macroStack_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v_a_707_; lean_object* v___x_708_; lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_717_; 
v_ref_703_ = lean_ctor_get(v___y_700_, 2);
v_macroStack_704_ = lean_ctor_get(v___y_696_, 1);
v___x_705_ = l_Lean_Elab_getBetterRef(v_ref_703_, v_macroStack_704_);
v___x_706_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_695_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref(v___x_706_);
lean_inc(v_macroStack_704_);
v___x_708_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_a_707_, v_macroStack_704_, v___y_700_);
v_a_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_717_ == 0)
{
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_705_);
lean_ctor_set(v___x_713_, 1, v_a_709_);
if (v_isShared_712_ == 0)
{
lean_ctor_set_tag(v___x_711_, 1);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object* v_msg_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_726_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5));
v___x_738_ = l_Lean_stringToMessageData(v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Array_mkArray0___redArg();
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_774_ = l_String_toRawSubstring_x27(v___x_773_);
return v___x_774_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_box(0);
v___x_776_ = l_unsafeCast___redArg(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object* v_letOrReassign_823_, lean_object* v_decl_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
if (lean_obj_tag(v_letOrReassign_823_) == 2)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_824_);
v___x_833_ = l_Lean_Syntax_isOfKind(v_decl_824_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_834_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_835_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_836_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_837_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = l_Lean_Syntax_getArg(v_decl_824_, v___x_838_);
v___x_840_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_839_);
v___x_841_ = l_Lean_Syntax_isOfKind(v___x_839_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___y_844_; lean_object* v_pattern_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; uint8_t v___x_915_; 
v___x_842_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_839_);
v___x_915_ = l_Lean_Syntax_isOfKind(v___x_839_, v___x_842_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_dec(v___x_839_);
v___x_916_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_917_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_918_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_919_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = l_Lean_Syntax_getArg(v___x_839_, v___x_920_);
v___x_922_ = l_Lean_Syntax_matchesNull(v___x_921_, v___x_838_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v___x_839_);
v___x_923_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_924_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_925_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_926_;
}
else
{
lean_object* v_pattern_927_; lean_object* v_xType_x3f_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___x_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v_pattern_927_ = l_Lean_Syntax_getArg(v___x_839_, v___x_838_);
v___x_963_ = lean_unsigned_to_nat(2u);
v___x_964_ = l_Lean_Syntax_getArg(v___x_839_, v___x_963_);
v___x_965_ = l_Lean_Syntax_isNone(v___x_964_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; 
lean_inc(v___x_964_);
v___x_966_ = l_Lean_Syntax_matchesNull(v___x_964_, v___x_920_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v___x_964_);
lean_dec(v_pattern_927_);
lean_dec(v___x_839_);
v___x_967_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_968_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_967_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
v___x_970_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_969_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_970_;
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_971_ = l_Lean_Syntax_getArg(v___x_964_, v___x_838_);
lean_dec(v___x_964_);
v___x_972_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_971_);
v___x_973_ = l_Lean_Syntax_isOfKind(v___x_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
lean_dec(v___x_971_);
lean_dec(v_pattern_927_);
lean_dec(v___x_839_);
v___x_974_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_975_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_976_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_977_;
}
else
{
lean_object* v_xType_x3f_978_; lean_object* v___x_979_; 
lean_dec(v_decl_824_);
v_xType_x3f_978_ = l_Lean_Syntax_getArg(v___x_971_, v___x_920_);
lean_dec(v___x_971_);
v___x_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_979_, 0, v_xType_x3f_978_);
v_xType_x3f_929_ = v___x_979_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
v___y_934_ = v_a_829_;
v___y_935_ = v_a_830_;
goto v___jp_928_;
}
}
}
else
{
lean_object* v___x_980_; 
lean_dec(v___x_964_);
lean_dec(v_decl_824_);
v___x_980_ = lean_box(0);
v_xType_x3f_929_ = v___x_980_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
v___y_934_ = v_a_829_;
v___y_935_ = v_a_830_;
goto v___jp_928_;
}
v___jp_928_:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(4u);
v___x_937_ = l_Lean_Syntax_getArg(v___x_839_, v___x_936_);
lean_dec(v___x_839_);
if (lean_obj_tag(v_xType_x3f_929_) == 0)
{
v___y_844_ = v___x_937_;
v_pattern_845_ = v_pattern_927_;
v___y_846_ = v___y_930_;
v___y_847_ = v___y_931_;
v___y_848_ = v___y_932_;
v___y_849_ = v___y_933_;
v___y_850_ = v___y_934_;
v___y_851_ = v___y_935_;
goto v___jp_843_;
}
else
{
lean_object* v_toCold_938_; lean_object* v_val_939_; lean_object* v_ref_940_; lean_object* v_quotContext_941_; lean_object* v_currMacroScope_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_toCold_938_ = lean_ctor_get(v___y_934_, 0);
v_val_939_ = lean_ctor_get(v_xType_x3f_929_, 0);
lean_inc(v_val_939_);
lean_dec_ref_known(v_xType_x3f_929_, 1);
v_ref_940_ = lean_ctor_get(v___y_934_, 2);
v_quotContext_941_ = lean_ctor_get(v_toCold_938_, 8);
v_currMacroScope_942_ = lean_ctor_get(v_toCold_938_, 9);
v___x_943_ = l_Lean_SourceInfo_fromRef(v_ref_940_, v___x_841_);
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_945_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_946_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc_n(v___x_943_, 7);
v___x_947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_943_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_949_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_950_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
lean_inc(v_currMacroScope_942_);
lean_inc(v_quotContext_941_);
v___x_951_ = l_Lean_addMacroScope(v_quotContext_941_, v___x_950_, v_currMacroScope_942_);
v___x_952_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_953_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_953_, 0, v___x_943_);
lean_ctor_set(v___x_953_, 1, v___x_949_);
lean_ctor_set(v___x_953_, 2, v___x_951_);
lean_ctor_set(v___x_953_, 3, v___x_952_);
v___x_954_ = l_Lean_Syntax_node1(v___x_943_, v___x_948_, v___x_953_);
v___x_955_ = l_Lean_Syntax_node2(v___x_943_, v___x_945_, v___x_947_, v___x_954_);
v___x_956_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_943_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_959_ = l_Lean_Syntax_node1(v___x_943_, v___x_958_, v_val_939_);
v___x_960_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38));
v___x_961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_943_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = l_Lean_Syntax_node5(v___x_943_, v___x_944_, v___x_955_, v_pattern_927_, v___x_957_, v___x_959_, v___x_961_);
v___y_844_ = v___x_937_;
v_pattern_845_ = v___x_962_;
v___y_846_ = v___y_930_;
v___y_847_ = v___y_931_;
v___y_848_ = v___y_932_;
v___y_849_ = v___y_933_;
v___y_850_ = v___y_934_;
v___y_851_ = v___y_935_;
goto v___jp_843_;
}
}
}
}
v___jp_843_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_852_ = lean_box(0);
v___x_853_ = lean_box(v___x_833_);
v___x_854_ = lean_box(v___x_833_);
lean_inc(v_pattern_845_);
v___x_855_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_855_, 0, v_pattern_845_);
lean_closure_set(v___x_855_, 1, v___x_852_);
lean_closure_set(v___x_855_, 2, v___x_853_);
lean_closure_set(v___x_855_, 3, v___x_854_);
v___x_856_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_855_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
lean_inc(v___y_851_);
lean_inc_ref(v___y_850_);
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
v___x_858_ = lean_infer_type(v_a_857_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = l_Lean_Elab_Term_exprToSyntax(v_a_859_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_toCold_861_; lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_898_; 
v_toCold_861_ = lean_ctor_get(v___y_850_, 0);
v_a_862_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_898_ == 0)
{
v___x_864_ = v___x_860_;
v_isShared_865_ = v_isSharedCheck_898_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_860_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_898_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v_ref_866_; lean_object* v_quotContext_867_; lean_object* v_currMacroScope_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v_ref_866_ = lean_ctor_get(v___y_850_, 2);
v_quotContext_867_ = lean_ctor_get(v_toCold_861_, 8);
v_currMacroScope_868_ = lean_ctor_get(v_toCold_861_, 9);
v___x_869_ = l_Lean_SourceInfo_fromRef(v_ref_866_, v___x_841_);
v___x_870_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_871_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_869_, 11);
v___x_872_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_872_, 0, v___x_869_);
lean_ctor_set(v___x_872_, 1, v___x_870_);
lean_ctor_set(v___x_872_, 2, v___x_871_);
v___x_873_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_874_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_869_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_876_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_877_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_869_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_880_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_881_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
lean_inc(v_currMacroScope_868_);
lean_inc(v_quotContext_867_);
v___x_882_ = l_Lean_addMacroScope(v_quotContext_867_, v___x_881_, v_currMacroScope_868_);
v___x_883_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_884_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_884_, 0, v___x_869_);
lean_ctor_set(v___x_884_, 1, v___x_880_);
lean_ctor_set(v___x_884_, 2, v___x_882_);
lean_ctor_set(v___x_884_, 3, v___x_883_);
v___x_885_ = l_Lean_Syntax_node1(v___x_869_, v___x_879_, v___x_884_);
v___x_886_ = l_Lean_Syntax_node2(v___x_869_, v___x_876_, v___x_878_, v___x_885_);
v___x_887_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_888_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_869_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = l_Lean_Syntax_node1(v___x_869_, v___x_870_, v_a_862_);
v___x_890_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38));
v___x_891_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_869_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = l_Lean_Syntax_node5(v___x_869_, v___x_875_, v___x_886_, v___y_844_, v___x_888_, v___x_889_, v___x_891_);
lean_inc_ref(v___x_872_);
v___x_893_ = l_Lean_Syntax_node5(v___x_869_, v___x_842_, v_pattern_845_, v___x_872_, v___x_872_, v___x_874_, v___x_892_);
v___x_894_ = l_Lean_Syntax_node1(v___x_869_, v___x_832_, v___x_893_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_894_);
v___x_896_ = v___x_864_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_dec(v_pattern_845_);
lean_dec(v___y_844_);
return v___x_860_;
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec(v_pattern_845_);
lean_dec(v___y_844_);
v_a_899_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_858_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_858_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_pattern_845_);
lean_dec(v___y_844_);
v_a_907_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_856_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_856_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_981_ = l_Lean_Syntax_getArg(v___x_839_, v___x_838_);
v___x_982_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc(v___x_981_);
v___x_983_ = l_Lean_Syntax_isOfKind(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
lean_dec(v___x_981_);
lean_dec(v___x_839_);
v___x_984_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_985_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_986_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_987_;
}
else
{
lean_object* v_x_988_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v_a_997_; lean_object* v_xType_x3f_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v_x_988_ = l_Lean_Syntax_getArg(v___x_981_, v___x_838_);
lean_dec(v___x_981_);
v___x_1074_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v_x_988_);
v___x_1075_ = l_Lean_Syntax_isOfKind(v_x_988_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
lean_dec(v_x_988_);
lean_dec(v___x_839_);
v___x_1076_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1077_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_1078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1078_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_1079_;
}
else
{
lean_object* v___x_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = l_Lean_Syntax_getArg(v___x_839_, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_matchesNull(v___x_1081_, v___x_838_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_dec(v_x_988_);
lean_dec(v___x_839_);
v___x_1083_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1084_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1085_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_1086_;
}
else
{
lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1087_ = lean_unsigned_to_nat(2u);
v___x_1088_ = l_Lean_Syntax_getArg(v___x_839_, v___x_1087_);
v___x_1089_ = l_Lean_Syntax_isNone(v___x_1088_);
if (v___x_1089_ == 0)
{
uint8_t v___x_1090_; 
lean_inc(v___x_1088_);
v___x_1090_ = l_Lean_Syntax_matchesNull(v___x_1088_, v___x_1080_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_dec(v___x_1088_);
lean_dec(v_x_988_);
lean_dec(v___x_839_);
v___x_1091_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1092_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1093_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
v___x_1095_ = l_Lean_Syntax_getArg(v___x_1088_, v___x_838_);
lean_dec(v___x_1088_);
v___x_1096_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_1095_);
v___x_1097_ = l_Lean_Syntax_isOfKind(v___x_1095_, v___x_1096_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec(v___x_1095_);
lean_dec(v_x_988_);
lean_dec(v___x_839_);
v___x_1098_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1099_ = l_Lean_MessageData_ofSyntax(v_decl_824_);
v___x_1100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1100_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_1101_;
}
else
{
lean_object* v_xType_x3f_1102_; lean_object* v___x_1103_; 
lean_dec(v_decl_824_);
v_xType_x3f_1102_ = l_Lean_Syntax_getArg(v___x_1095_, v___x_1080_);
lean_dec(v___x_1095_);
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_xType_x3f_1102_);
v_xType_x3f_1046_ = v___x_1103_;
v___y_1047_ = v_a_825_;
v___y_1048_ = v_a_826_;
v___y_1049_ = v_a_827_;
v___y_1050_ = v_a_828_;
v___y_1051_ = v_a_829_;
v___y_1052_ = v_a_830_;
goto v___jp_1045_;
}
}
}
else
{
lean_object* v___x_1104_; 
lean_dec(v___x_1088_);
lean_dec(v_decl_824_);
v___x_1104_ = lean_box(0);
v_xType_x3f_1046_ = v___x_1104_;
v___y_1047_ = v_a_825_;
v___y_1048_ = v_a_826_;
v___y_1049_ = v_a_827_;
v___y_1050_ = v_a_828_;
v___y_1051_ = v_a_829_;
v___y_1052_ = v_a_830_;
goto v___jp_1045_;
}
}
}
v___jp_989_:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_box(0);
lean_inc(v_x_988_);
v___x_999_ = l_Lean_Elab_Term_elabTermEnsuringType(v_x_988_, v_a_997_, v___x_833_, v___x_833_, v___x_998_, v___y_994_, v___y_993_, v___y_991_, v___y_990_, v___y_992_, v___y_996_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_dec_ref_known(v___x_999_, 1);
v___x_1000_ = l_Lean_TSyntax_getId(v_x_988_);
v___x_1001_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_1000_, v___y_991_, v___y_990_, v___y_992_, v___y_996_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 1);
v___x_1003_ = l_Lean_LocalDecl_type(v_a_1002_);
lean_dec(v_a_1002_);
v___x_1004_ = l_Lean_Elab_Term_exprToSyntax(v___x_1003_, v___y_994_, v___y_993_, v___y_991_, v___y_990_, v___y_992_, v___y_996_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1028_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1028_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1028_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v_ref_1009_; uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1026_; 
v_ref_1009_ = lean_ctor_get(v___y_992_, 2);
v___x_1010_ = 0;
v___x_1011_ = l_Lean_SourceInfo_fromRef(v_ref_1009_, v___x_1010_);
lean_inc_n(v___x_1011_, 7);
v___x_1012_ = l_Lean_Syntax_node1(v___x_1011_, v___x_982_, v_x_988_);
v___x_1013_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1014_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1015_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1011_);
lean_ctor_set(v___x_1015_, 1, v___x_1013_);
lean_ctor_set(v___x_1015_, 2, v___x_1014_);
v___x_1016_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
v___x_1017_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_1018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1011_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = l_Lean_Syntax_node2(v___x_1011_, v___x_1016_, v___x_1018_, v_a_1005_);
v___x_1020_ = l_Lean_Syntax_node1(v___x_1011_, v___x_1013_, v___x_1019_);
v___x_1021_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1022_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1011_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = l_Lean_Syntax_node5(v___x_1011_, v___x_840_, v___x_1012_, v___x_1015_, v___x_1020_, v___x_1022_, v___y_995_);
v___x_1024_ = l_Lean_Syntax_node1(v___x_1011_, v___x_832_, v___x_1023_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1024_);
v___x_1026_ = v___x_1007_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
else
{
lean_dec(v___y_995_);
lean_dec(v_x_988_);
return v___x_1004_;
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
lean_dec(v___y_995_);
lean_dec(v_x_988_);
v_a_1029_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_1001_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1001_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec(v___y_995_);
lean_dec(v_x_988_);
v_a_1037_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_999_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_999_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
v___jp_1045_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_unsigned_to_nat(4u);
v___x_1054_ = l_Lean_Syntax_getArg(v___x_839_, v___x_1053_);
lean_dec(v___x_839_);
if (lean_obj_tag(v_xType_x3f_1046_) == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_box(0);
v___y_990_ = v___y_1050_;
v___y_991_ = v___y_1049_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1048_;
v___y_994_ = v___y_1047_;
v___y_995_ = v___x_1054_;
v___y_996_ = v___y_1052_;
v_a_997_ = v___x_1055_;
goto v___jp_989_;
}
else
{
lean_object* v_val_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1073_; 
v_val_1056_ = lean_ctor_get(v_xType_x3f_1046_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_xType_x3f_1046_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1058_ = v_xType_x3f_1046_;
v_isShared_1059_ = v_isSharedCheck_1073_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_val_1056_);
lean_dec(v_xType_x3f_1046_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1073_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_Elab_Term_elabType(v_val_1056_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1060_, 1);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v_a_1061_);
v___x_1063_ = v___x_1058_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
v___y_990_ = v___y_1050_;
v___y_991_ = v___y_1049_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1048_;
v___y_994_ = v___y_1047_;
v___y_995_ = v___x_1054_;
v___y_996_ = v___y_1052_;
v_a_997_ = v___x_1063_;
goto v___jp_989_;
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_del_object(v___x_1058_);
lean_dec(v___x_1054_);
lean_dec(v_x_988_);
v_a_1065_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1060_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1060_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
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
lean_object* v___x_1105_; 
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v_decl_824_);
return v___x_1105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object* v_letOrReassign_1106_, lean_object* v_decl_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_1106_, v_decl_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec(v_letOrReassign_1106_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object* v_00_u03b1_1116_, lean_object* v_msg_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object* v_00_u03b1_1126_, lean_object* v_msg_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(v_00_u03b1_1126_, v_msg_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object* v_msgData_1136_, lean_object* v_macroStack_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_1136_, v_macroStack_1137_, v___y_1142_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object* v_msgData_1146_, lean_object* v_macroStack_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msgData_1146_, v_macroStack_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
return v_res_1155_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0));
v___x_1158_ = l_Lean_stringToMessageData(v___x_1157_);
return v___x_1158_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2));
v___x_1161_ = l_Lean_stringToMessageData(v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object* v_config_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_){
_start:
{
uint8_t v_postponeValue_1168_; uint8_t v_generalize_1169_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; 
v_postponeValue_1168_ = lean_ctor_get_uint8(v_config_1162_, sizeof(void*)*1 + 3);
v_generalize_1169_ = lean_ctor_get_uint8(v_config_1162_, sizeof(void*)*1 + 4);
if (v_postponeValue_1168_ == 0)
{
v___y_1171_ = v_a_1163_;
v___y_1172_ = v_a_1164_;
v___y_1173_ = v_a_1165_;
v___y_1174_ = v_a_1166_;
goto v___jp_1170_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3);
v___x_1180_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1179_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_);
return v___x_1180_;
}
v___jp_1170_:
{
if (v_generalize_1169_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_box(0);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1);
v___x_1178_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1177_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
return v___x_1178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object* v_config_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec_ref(v_config_1181_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object* v_config_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1188_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object* v_config_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_config_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec_ref(v_config_1198_);
return v_res_1207_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = lean_box(0);
v___x_1209_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___x_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg(){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0);
v___x_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object* v_00_u03b1_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object* v_00_u03b1_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(v_00_u03b1_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec_ref(v___y_1227_);
return v_res_1235_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2));
v___x_1244_ = l_String_toRawSubstring_x27(v___x_1243_);
return v___x_1244_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4));
v___x_1257_ = l_String_toRawSubstring_x27(v___x_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object* v_decl_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_){
_start:
{
lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_1280_);
v___x_1290_ = l_Lean_Syntax_isOfKind(v_decl_1280_, v___x_1289_);
if (v___x_1290_ == 0)
{
lean_object* v___x_1291_; 
lean_dec(v_decl_1280_);
v___x_1291_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = l_Lean_Syntax_getArg(v_decl_1280_, v___x_1292_);
lean_dec(v_decl_1280_);
v___x_1294_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_1293_);
v___x_1295_ = l_Lean_Syntax_isOfKind(v___x_1293_, v___x_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
lean_dec(v___x_1293_);
v___x_1296_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1296_;
}
else
{
lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1297_ = l_Lean_Syntax_getArg(v___x_1293_, v___x_1292_);
v___x_1298_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc(v___x_1297_);
v___x_1299_ = l_Lean_Syntax_isOfKind(v___x_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; 
lean_dec(v___x_1297_);
lean_dec(v___x_1293_);
v___x_1300_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1300_;
}
else
{
lean_object* v___x_1301_; lean_object* v_t_x3f_1303_; lean_object* v___y_1304_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1301_ = l_Lean_Syntax_getArg(v___x_1297_, v___x_1292_);
lean_dec(v___x_1297_);
v___x_1387_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v___x_1301_);
v___x_1388_ = l_Lean_Syntax_isOfKind(v___x_1301_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec(v___x_1301_);
lean_dec(v___x_1293_);
v___x_1389_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = l_Lean_Syntax_getArg(v___x_1293_, v___x_1390_);
v___x_1392_ = l_Lean_Syntax_matchesNull(v___x_1391_, v___x_1292_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; 
lean_dec(v___x_1301_);
lean_dec(v___x_1293_);
v___x_1393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1393_;
}
else
{
lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v___x_1394_ = lean_unsigned_to_nat(2u);
v___x_1395_ = l_Lean_Syntax_getArg(v___x_1293_, v___x_1394_);
v___x_1396_ = l_Lean_Syntax_isNone(v___x_1395_);
if (v___x_1396_ == 0)
{
uint8_t v___x_1397_; 
lean_inc(v___x_1395_);
v___x_1397_ = l_Lean_Syntax_matchesNull(v___x_1395_, v___x_1390_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
lean_dec(v___x_1395_);
lean_dec(v___x_1301_);
lean_dec(v___x_1293_);
v___x_1398_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1398_;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = l_Lean_Syntax_getArg(v___x_1395_, v___x_1292_);
lean_dec(v___x_1395_);
v___x_1400_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_1399_);
v___x_1401_ = l_Lean_Syntax_isOfKind(v___x_1399_, v___x_1400_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; 
lean_dec(v___x_1399_);
lean_dec(v___x_1301_);
lean_dec(v___x_1293_);
v___x_1402_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1402_;
}
else
{
lean_object* v_t_x3f_1403_; lean_object* v___x_1404_; 
v_t_x3f_1403_ = l_Lean_Syntax_getArg(v___x_1399_, v___x_1390_);
lean_dec(v___x_1399_);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_t_x3f_1403_);
v_t_x3f_1303_ = v___x_1404_;
v___y_1304_ = v_a_1286_;
goto v___jp_1302_;
}
}
}
else
{
lean_object* v___x_1405_; 
lean_dec(v___x_1395_);
v___x_1405_ = lean_box(0);
v_t_x3f_1303_ = v___x_1405_;
v___y_1304_ = v_a_1286_;
goto v___jp_1302_;
}
}
}
v___jp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_unsigned_to_nat(4u);
v___x_1306_ = l_Lean_Syntax_getArg(v___x_1293_, v___x_1305_);
lean_dec(v___x_1293_);
if (lean_obj_tag(v_t_x3f_1303_) == 0)
{
lean_object* v_toCold_1307_; lean_object* v_ref_1308_; lean_object* v_quotContext_1309_; lean_object* v_currMacroScope_1310_; uint8_t v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v_toCold_1307_ = lean_ctor_get(v___y_1304_, 0);
v_ref_1308_ = lean_ctor_get(v___y_1304_, 2);
v_quotContext_1309_ = lean_ctor_get(v_toCold_1307_, 8);
v_currMacroScope_1310_ = lean_ctor_get(v_toCold_1307_, 9);
v___x_1311_ = 0;
v___x_1312_ = l_Lean_SourceInfo_fromRef(v_ref_1308_, v___x_1311_);
lean_inc_n(v___x_1312_, 7);
v___x_1313_ = l_Lean_Syntax_node1(v___x_1312_, v___x_1298_, v___x_1301_);
v___x_1314_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1315_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1312_);
lean_ctor_set(v___x_1316_, 1, v___x_1314_);
lean_ctor_set(v___x_1316_, 2, v___x_1315_);
v___x_1317_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1312_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1320_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1321_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
lean_inc(v_currMacroScope_1310_);
lean_inc(v_quotContext_1309_);
v___x_1322_ = l_Lean_addMacroScope(v_quotContext_1309_, v___x_1321_, v_currMacroScope_1310_);
v___x_1323_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1324_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1312_);
lean_ctor_set(v___x_1324_, 1, v___x_1320_);
lean_ctor_set(v___x_1324_, 2, v___x_1322_);
lean_ctor_set(v___x_1324_, 3, v___x_1323_);
v___x_1325_ = l_Lean_Syntax_node1(v___x_1312_, v___x_1314_, v___x_1306_);
v___x_1326_ = l_Lean_Syntax_node2(v___x_1312_, v___x_1319_, v___x_1324_, v___x_1325_);
lean_inc_ref(v___x_1316_);
v___x_1327_ = l_Lean_Syntax_node5(v___x_1312_, v___x_1294_, v___x_1313_, v___x_1316_, v___x_1316_, v___x_1318_, v___x_1326_);
v___x_1328_ = l_Lean_Syntax_node1(v___x_1312_, v___x_1289_, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
else
{
lean_object* v_toCold_1330_; lean_object* v_val_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1386_; 
v_toCold_1330_ = lean_ctor_get(v___y_1304_, 0);
v_val_1331_ = lean_ctor_get(v_t_x3f_1303_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_t_x3f_1303_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1333_ = v_t_x3f_1303_;
v_isShared_1334_ = v_isSharedCheck_1386_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_val_1331_);
lean_dec(v_t_x3f_1303_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1386_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v_ref_1335_; lean_object* v_quotContext_1336_; lean_object* v_currMacroScope_1337_; uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1384_; 
v_ref_1335_ = lean_ctor_get(v___y_1304_, 2);
v_quotContext_1336_ = lean_ctor_get(v_toCold_1330_, 8);
v_currMacroScope_1337_ = lean_ctor_get(v_toCold_1330_, 9);
v___x_1338_ = 0;
v___x_1339_ = l_Lean_SourceInfo_fromRef(v_ref_1335_, v___x_1338_);
lean_inc_n(v___x_1339_, 19);
v___x_1340_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1298_, v___x_1301_);
v___x_1341_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1342_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1339_);
lean_ctor_set(v___x_1343_, 1, v___x_1341_);
lean_ctor_set(v___x_1343_, 2, v___x_1342_);
v___x_1344_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
v___x_1345_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_1346_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1339_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1348_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9);
v___x_1349_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10));
lean_inc_n(v_currMacroScope_1337_, 3);
lean_inc_n(v_quotContext_1336_, 3);
v___x_1350_ = l_Lean_addMacroScope(v_quotContext_1336_, v___x_1349_, v_currMacroScope_1337_);
v___x_1351_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14));
v___x_1352_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1339_);
lean_ctor_set(v___x_1352_, 1, v___x_1348_);
lean_ctor_set(v___x_1352_, 2, v___x_1350_);
lean_ctor_set(v___x_1352_, 3, v___x_1351_);
v___x_1353_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1341_, v_val_1331_);
lean_inc(v___x_1353_);
v___x_1354_ = l_Lean_Syntax_node2(v___x_1339_, v___x_1347_, v___x_1352_, v___x_1353_);
lean_inc_ref(v___x_1346_);
v___x_1355_ = l_Lean_Syntax_node2(v___x_1339_, v___x_1344_, v___x_1346_, v___x_1354_);
v___x_1356_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1341_, v___x_1355_);
v___x_1357_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1339_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1360_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
v___x_1361_ = l_Lean_addMacroScope(v_quotContext_1336_, v___x_1360_, v_currMacroScope_1337_);
v___x_1362_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1363_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1339_);
lean_ctor_set(v___x_1363_, 1, v___x_1359_);
lean_ctor_set(v___x_1363_, 2, v___x_1361_);
lean_ctor_set(v___x_1363_, 3, v___x_1362_);
v___x_1364_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_1365_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_1366_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_1367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1339_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_1369_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_1370_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_1371_ = l_Lean_addMacroScope(v_quotContext_1336_, v___x_1370_, v_currMacroScope_1337_);
v___x_1372_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17));
v___x_1373_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1339_);
lean_ctor_set(v___x_1373_, 1, v___x_1369_);
lean_ctor_set(v___x_1373_, 2, v___x_1371_);
lean_ctor_set(v___x_1373_, 3, v___x_1372_);
v___x_1374_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1368_, v___x_1373_);
v___x_1375_ = l_Lean_Syntax_node2(v___x_1339_, v___x_1365_, v___x_1367_, v___x_1374_);
v___x_1376_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38));
v___x_1377_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1339_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
v___x_1378_ = l_Lean_Syntax_node5(v___x_1339_, v___x_1364_, v___x_1375_, v___x_1306_, v___x_1346_, v___x_1353_, v___x_1377_);
v___x_1379_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1341_, v___x_1378_);
v___x_1380_ = l_Lean_Syntax_node2(v___x_1339_, v___x_1347_, v___x_1363_, v___x_1379_);
v___x_1381_ = l_Lean_Syntax_node5(v___x_1339_, v___x_1294_, v___x_1340_, v___x_1343_, v___x_1356_, v___x_1358_, v___x_1380_);
v___x_1382_ = l_Lean_Syntax_node1(v___x_1339_, v___x_1289_, v___x_1381_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set_tag(v___x_1333_, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1382_);
v___x_1384_ = v___x_1333_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object* v_decl_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_decl_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec_ref(v_a_1408_);
lean_dec_ref(v_a_1407_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object* v_lctx_1416_, lean_object* v_x_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_keyedConfig_1425_; uint8_t v_trackZetaDelta_1426_; lean_object* v_zetaDeltaSet_1427_; lean_object* v_localInstances_1428_; lean_object* v_defEqCtx_x3f_1429_; lean_object* v_synthPendingDepth_1430_; lean_object* v_customCanUnfoldPredicate_x3f_1431_; uint8_t v_univApprox_1432_; uint8_t v_inTypeClassResolution_1433_; uint8_t v_cacheInferType_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v_keyedConfig_1425_ = lean_ctor_get(v___y_1420_, 0);
v_trackZetaDelta_1426_ = lean_ctor_get_uint8(v___y_1420_, sizeof(void*)*7);
v_zetaDeltaSet_1427_ = lean_ctor_get(v___y_1420_, 1);
v_localInstances_1428_ = lean_ctor_get(v___y_1420_, 3);
v_defEqCtx_x3f_1429_ = lean_ctor_get(v___y_1420_, 4);
v_synthPendingDepth_1430_ = lean_ctor_get(v___y_1420_, 5);
v_customCanUnfoldPredicate_x3f_1431_ = lean_ctor_get(v___y_1420_, 6);
v_univApprox_1432_ = lean_ctor_get_uint8(v___y_1420_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1433_ = lean_ctor_get_uint8(v___y_1420_, sizeof(void*)*7 + 2);
v_cacheInferType_1434_ = lean_ctor_get_uint8(v___y_1420_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1431_);
lean_inc(v_synthPendingDepth_1430_);
lean_inc(v_defEqCtx_x3f_1429_);
lean_inc_ref(v_localInstances_1428_);
lean_inc(v_zetaDeltaSet_1427_);
lean_inc_ref(v_keyedConfig_1425_);
v___x_1435_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1435_, 0, v_keyedConfig_1425_);
lean_ctor_set(v___x_1435_, 1, v_zetaDeltaSet_1427_);
lean_ctor_set(v___x_1435_, 2, v_lctx_1416_);
lean_ctor_set(v___x_1435_, 3, v_localInstances_1428_);
lean_ctor_set(v___x_1435_, 4, v_defEqCtx_x3f_1429_);
lean_ctor_set(v___x_1435_, 5, v_synthPendingDepth_1430_);
lean_ctor_set(v___x_1435_, 6, v_customCanUnfoldPredicate_x3f_1431_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*7, v_trackZetaDelta_1426_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*7 + 1, v_univApprox_1432_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1433_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*7 + 3, v_cacheInferType_1434_);
lean_inc(v___y_1423_);
lean_inc_ref(v___y_1422_);
lean_inc(v___y_1421_);
lean_inc(v___y_1419_);
lean_inc_ref(v___y_1418_);
v___x_1436_ = lean_apply_7(v_x_1417_, v___y_1418_, v___y_1419_, v___x_1435_, v___y_1421_, v___y_1422_, v___y_1423_, lean_box(0));
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1436_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1436_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
else
{
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object* v_lctx_1445_, lean_object* v_x_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1445_, v_x_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object* v_00_u03b1_1455_, lean_object* v_lctx_1456_, lean_object* v_x_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1456_, v_x_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object* v_00_u03b1_1466_, lean_object* v_lctx_1467_, lean_object* v_x_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(v_00_u03b1_1466_, v_lctx_1467_, v_x_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object* v_k_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v_b_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v___x_1487_; 
lean_inc(v___y_1485_);
lean_inc_ref(v___y_1484_);
lean_inc(v___y_1483_);
lean_inc_ref(v___y_1482_);
lean_inc(v___y_1480_);
lean_inc_ref(v___y_1479_);
lean_inc_ref(v___y_1478_);
v___x_1487_ = lean_apply_9(v_k_1477_, v_b_1481_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, lean_box(0));
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object* v_k_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v_b_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(v_k_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v_b_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object* v_name_1499_, lean_object* v_type_1500_, lean_object* v_val_1501_, lean_object* v_k_1502_, uint8_t v_nondep_1503_, uint8_t v_kind_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___f_1513_; lean_object* v___x_1514_; 
lean_inc(v___y_1507_);
lean_inc_ref(v___y_1506_);
lean_inc_ref(v___y_1505_);
v___f_1513_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1513_, 0, v_k_1502_);
lean_closure_set(v___f_1513_, 1, v___y_1505_);
lean_closure_set(v___f_1513_, 2, v___y_1506_);
lean_closure_set(v___f_1513_, 3, v___y_1507_);
v___x_1514_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1499_, v_type_1500_, v_val_1501_, v___f_1513_, v_nondep_1503_, v_kind_1504_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
if (lean_obj_tag(v___x_1514_) == 0)
{
return v___x_1514_;
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1514_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object* v_name_1523_, lean_object* v_type_1524_, lean_object* v_val_1525_, lean_object* v_k_1526_, lean_object* v_nondep_1527_, lean_object* v_kind_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
uint8_t v_nondep_boxed_1537_; uint8_t v_kind_boxed_1538_; lean_object* v_res_1539_; 
v_nondep_boxed_1537_ = lean_unbox(v_nondep_1527_);
v_kind_boxed_1538_ = lean_unbox(v_kind_1528_);
v_res_1539_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1523_, v_type_1524_, v_val_1525_, v_k_1526_, v_nondep_boxed_1537_, v_kind_boxed_1538_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec_ref(v___y_1529_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object* v_00_u03b1_1540_, lean_object* v_name_1541_, lean_object* v_type_1542_, lean_object* v_val_1543_, lean_object* v_k_1544_, uint8_t v_nondep_1545_, uint8_t v_kind_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1541_, v_type_1542_, v_val_1543_, v_k_1544_, v_nondep_1545_, v_kind_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object* v_00_u03b1_1556_, lean_object* v_name_1557_, lean_object* v_type_1558_, lean_object* v_val_1559_, lean_object* v_k_1560_, lean_object* v_nondep_1561_, lean_object* v_kind_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v_nondep_boxed_1571_; uint8_t v_kind_boxed_1572_; lean_object* v_res_1573_; 
v_nondep_boxed_1571_ = lean_unbox(v_nondep_1561_);
v_kind_boxed_1572_ = lean_unbox(v_kind_1562_);
v_res_1573_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v_00_u03b1_1556_, v_name_1557_, v_type_1558_, v_val_1559_, v_k_1560_, v_nondep_boxed_1571_, v_kind_boxed_1572_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object* v_value_1574_, lean_object* v___x_1575_, uint8_t v___x_1576_, lean_object* v___x_1577_, lean_object* v___x_1578_, uint8_t v___x_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Elab_Term_elabTermEnsuringType(v_value_1574_, v___x_1575_, v___x_1576_, v___x_1576_, v___x_1577_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; uint8_t v___x_1589_; lean_object* v___x_1590_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1589_ = 1;
v___x_1590_ = l_Lean_Meta_mkLambdaFVars(v___x_1578_, v_a_1588_, v___x_1579_, v___x_1579_, v___x_1579_, v___x_1576_, v___x_1589_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
return v___x_1590_;
}
else
{
lean_dec(v___x_1578_);
return v___x_1587_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object* v_value_1591_, lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
uint8_t v___x_88233__boxed_1604_; uint8_t v___x_88236__boxed_1605_; lean_object* v_res_1606_; 
v___x_88233__boxed_1604_ = lean_unbox(v___x_1593_);
v___x_88236__boxed_1605_ = lean_unbox(v___x_1596_);
v_res_1606_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(v_value_1591_, v___x_1592_, v___x_88233__boxed_1604_, v___x_1594_, v___x_1595_, v___x_88236__boxed_1605_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t v_sz_1607_, size_t v_i_1608_, lean_object* v_bs_1609_){
_start:
{
uint8_t v___x_1610_; 
v___x_1610_ = lean_usize_dec_lt(v_i_1608_, v_sz_1607_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = l_unsafeCast___redArg(v_bs_1609_);
lean_dec_ref(v_bs_1609_);
return v___x_1611_;
}
else
{
lean_object* v_v_1612_; lean_object* v___x_1613_; lean_object* v_snd_1614_; lean_object* v___x_1615_; lean_object* v_bs_x27_1616_; size_t v___x_1617_; size_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v_v_1612_ = lean_array_uget_borrowed(v_bs_1609_, v_i_1608_);
v___x_1613_ = l_unsafeCast___redArg(v_v_1612_);
v_snd_1614_ = lean_ctor_get(v___x_1613_, 1);
lean_inc(v_snd_1614_);
lean_dec(v___x_1613_);
v___x_1615_ = lean_unsigned_to_nat(0u);
v_bs_x27_1616_ = lean_array_uset(v_bs_1609_, v_i_1608_, v___x_1615_);
v___x_1617_ = ((size_t)1ULL);
v___x_1618_ = lean_usize_add(v_i_1608_, v___x_1617_);
v___x_1619_ = l_unsafeCast___redArg(v_snd_1614_);
lean_dec(v_snd_1614_);
v___x_1620_ = lean_array_uset(v_bs_x27_1616_, v_i_1608_, v___x_1619_);
v_i_1608_ = v___x_1618_;
v_bs_1609_ = v___x_1620_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object* v_sz_1622_, lean_object* v_i_1623_, lean_object* v_bs_1624_){
_start:
{
size_t v_sz_boxed_1625_; size_t v_i_boxed_1626_; lean_object* v_res_1627_; 
v_sz_boxed_1625_ = lean_unbox_usize(v_sz_1622_);
lean_dec(v_sz_1622_);
v_i_boxed_1626_ = lean_unbox_usize(v_i_1623_);
lean_dec(v_i_1623_);
v_res_1627_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_boxed_1625_, v_i_boxed_1626_, v_bs_1624_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(lean_object* v_x_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_){
_start:
{
lean_object* v_ks_1632_; lean_object* v_vs_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1657_; 
v_ks_1632_ = lean_ctor_get(v_x_1628_, 0);
v_vs_1633_ = lean_ctor_get(v_x_1628_, 1);
v_isSharedCheck_1657_ = !lean_is_exclusive(v_x_1628_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1635_ = v_x_1628_;
v_isShared_1636_ = v_isSharedCheck_1657_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_vs_1633_);
lean_inc(v_ks_1632_);
lean_dec(v_x_1628_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1657_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; uint8_t v___x_1638_; 
v___x_1637_ = lean_array_get_size(v_ks_1632_);
v___x_1638_ = lean_nat_dec_lt(v_x_1629_, v___x_1637_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
lean_dec(v_x_1629_);
v___x_1639_ = lean_array_push(v_ks_1632_, v_x_1630_);
v___x_1640_ = lean_array_push(v_vs_1633_, v_x_1631_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 1, v___x_1640_);
lean_ctor_set(v___x_1635_, 0, v___x_1639_);
v___x_1642_ = v___x_1635_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1639_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
else
{
lean_object* v_k_x27_1644_; uint8_t v___x_1645_; 
v_k_x27_1644_ = lean_array_fget_borrowed(v_ks_1632_, v_x_1629_);
v___x_1645_ = l_Lean_instBEqFVarId_beq(v_x_1630_, v_k_x27_1644_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1647_; 
if (v_isShared_1636_ == 0)
{
v___x_1647_ = v___x_1635_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_ks_1632_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_vs_1633_);
v___x_1647_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = lean_unsigned_to_nat(1u);
v___x_1649_ = lean_nat_add(v_x_1629_, v___x_1648_);
lean_dec(v_x_1629_);
v_x_1628_ = v___x_1647_;
v_x_1629_ = v___x_1649_;
goto _start;
}
}
else
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1655_; 
v___x_1652_ = lean_array_fset(v_ks_1632_, v_x_1629_, v_x_1630_);
v___x_1653_ = lean_array_fset(v_vs_1633_, v_x_1629_, v_x_1631_);
lean_dec(v_x_1629_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 1, v___x_1653_);
lean_ctor_set(v___x_1635_, 0, v___x_1652_);
v___x_1655_ = v___x_1635_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1652_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object* v_n_1658_, lean_object* v_k_1659_, lean_object* v_v_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(v_n_1658_, v___x_1661_, v_k_1659_, v_v_1660_);
return v___x_1662_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_box(0);
v___x_1664_ = l_unsafeCast___redArg(v___x_1663_);
return v___x_1664_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object* v_x_1666_, size_t v_x_1667_, size_t v_x_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
if (lean_obj_tag(v_x_1666_) == 0)
{
lean_object* v_es_1671_; size_t v___x_1672_; size_t v___x_1673_; lean_object* v_j_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; 
v_es_1671_ = lean_ctor_get(v_x_1666_, 0);
v___x_1672_ = ((size_t)31ULL);
v___x_1673_ = lean_usize_land(v_x_1667_, v___x_1672_);
v_j_1674_ = lean_usize_to_nat(v___x_1673_);
v___x_1675_ = lean_array_get_size(v_es_1671_);
v___x_1676_ = lean_nat_dec_lt(v_j_1674_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_dec(v_j_1674_);
lean_dec(v_x_1670_);
lean_dec(v_x_1669_);
return v_x_1666_;
}
else
{
lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1715_; 
lean_inc_ref(v_es_1671_);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_x_1666_);
if (v_isSharedCheck_1715_ == 0)
{
lean_object* v_unused_1716_; 
v_unused_1716_ = lean_ctor_get(v_x_1666_, 0);
lean_dec(v_unused_1716_);
v___x_1678_ = v_x_1666_;
v_isShared_1679_ = v_isSharedCheck_1715_;
goto v_resetjp_1677_;
}
else
{
lean_dec(v_x_1666_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1715_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v_v_1680_; lean_object* v___x_1681_; lean_object* v_xs_x27_1682_; lean_object* v___y_1684_; 
v_v_1680_ = lean_array_fget(v_es_1671_, v_j_1674_);
v___x_1681_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0);
v_xs_x27_1682_ = lean_array_fset(v_es_1671_, v_j_1674_, v___x_1681_);
switch(lean_obj_tag(v_v_1680_))
{
case 0:
{
lean_object* v_key_1689_; lean_object* v_val_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1700_; 
v_key_1689_ = lean_ctor_get(v_v_1680_, 0);
v_val_1690_ = lean_ctor_get(v_v_1680_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_v_1680_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1692_ = v_v_1680_;
v_isShared_1693_ = v_isSharedCheck_1700_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_val_1690_);
lean_inc(v_key_1689_);
lean_dec(v_v_1680_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1700_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
uint8_t v___x_1694_; 
v___x_1694_ = l_Lean_instBEqFVarId_beq(v_x_1669_, v_key_1689_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
lean_del_object(v___x_1692_);
v___x_1695_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1689_, v_val_1690_, v_x_1669_, v_x_1670_);
v___x_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
v___y_1684_ = v___x_1696_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1698_; 
lean_dec(v_val_1690_);
lean_dec(v_key_1689_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 1, v_x_1670_);
lean_ctor_set(v___x_1692_, 0, v_x_1669_);
v___x_1698_ = v___x_1692_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_x_1669_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_x_1670_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
v___y_1684_ = v___x_1698_;
goto v___jp_1683_;
}
}
}
}
case 1:
{
lean_object* v_node_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1713_; 
v_node_1701_ = lean_ctor_get(v_v_1680_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_v_1680_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1703_ = v_v_1680_;
v_isShared_1704_ = v_isSharedCheck_1713_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_node_1701_);
lean_dec(v_v_1680_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1713_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
size_t v___x_1705_; size_t v___x_1706_; size_t v___x_1707_; size_t v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1705_ = ((size_t)5ULL);
v___x_1706_ = lean_usize_shift_right(v_x_1667_, v___x_1705_);
v___x_1707_ = ((size_t)1ULL);
v___x_1708_ = lean_usize_add(v_x_1668_, v___x_1707_);
v___x_1709_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_node_1701_, v___x_1706_, v___x_1708_, v_x_1669_, v_x_1670_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v___x_1709_);
v___x_1711_ = v___x_1703_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
v___y_1684_ = v___x_1711_;
goto v___jp_1683_;
}
}
}
default: 
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1714_, 0, v_x_1669_);
lean_ctor_set(v___x_1714_, 1, v_x_1670_);
v___y_1684_ = v___x_1714_;
goto v___jp_1683_;
}
}
v___jp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1687_; 
v___x_1685_ = lean_array_fset(v_xs_x27_1682_, v_j_1674_, v___y_1684_);
lean_dec(v_j_1674_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1685_);
v___x_1687_ = v___x_1678_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
else
{
lean_object* v_ks_1717_; lean_object* v_vs_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1736_; 
v_ks_1717_ = lean_ctor_get(v_x_1666_, 0);
v_vs_1718_ = lean_ctor_get(v_x_1666_, 1);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_x_1666_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1720_ = v_x_1666_;
v_isShared_1721_ = v_isSharedCheck_1736_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_vs_1718_);
lean_inc(v_ks_1717_);
lean_dec(v_x_1666_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1736_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_ks_1717_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v_vs_1718_);
v___x_1723_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v_newNode_1724_; size_t v___x_1725_; uint8_t v___x_1726_; 
v_newNode_1724_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v___x_1723_, v_x_1669_, v_x_1670_);
v___x_1725_ = ((size_t)7ULL);
v___x_1726_ = lean_usize_dec_le(v___x_1725_, v_x_1668_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1727_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1724_);
v___x_1728_ = lean_unsigned_to_nat(4u);
v___x_1729_ = lean_nat_dec_lt(v___x_1727_, v___x_1728_);
lean_dec(v___x_1727_);
if (v___x_1729_ == 0)
{
lean_object* v_ks_1730_; lean_object* v_vs_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v_ks_1730_ = lean_ctor_get(v_newNode_1724_, 0);
lean_inc_ref(v_ks_1730_);
v_vs_1731_ = lean_ctor_get(v_newNode_1724_, 1);
lean_inc_ref(v_vs_1731_);
lean_dec_ref(v_newNode_1724_);
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1);
v___x_1734_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_x_1668_, v_ks_1730_, v_vs_1731_, v___x_1732_, v___x_1733_);
lean_dec_ref(v_vs_1731_);
lean_dec_ref(v_ks_1730_);
return v___x_1734_;
}
else
{
return v_newNode_1724_;
}
}
else
{
return v_newNode_1724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t v_depth_1737_, lean_object* v_keys_1738_, lean_object* v_vals_1739_, lean_object* v_i_1740_, lean_object* v_entries_1741_){
_start:
{
lean_object* v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = lean_array_get_size(v_keys_1738_);
v___x_1743_ = lean_nat_dec_lt(v_i_1740_, v___x_1742_);
if (v___x_1743_ == 0)
{
lean_dec(v_i_1740_);
return v_entries_1741_;
}
else
{
lean_object* v_k_1744_; lean_object* v_v_1745_; uint64_t v___x_1746_; size_t v_h_1747_; size_t v___x_1748_; lean_object* v___x_1749_; size_t v___x_1750_; size_t v___x_1751_; size_t v___x_1752_; size_t v_h_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v_k_1744_ = lean_array_fget_borrowed(v_keys_1738_, v_i_1740_);
v_v_1745_ = lean_array_fget_borrowed(v_vals_1739_, v_i_1740_);
v___x_1746_ = l_Lean_instHashableFVarId_hash(v_k_1744_);
v_h_1747_ = lean_uint64_to_usize(v___x_1746_);
v___x_1748_ = ((size_t)5ULL);
v___x_1749_ = lean_unsigned_to_nat(1u);
v___x_1750_ = ((size_t)1ULL);
v___x_1751_ = lean_usize_sub(v_depth_1737_, v___x_1750_);
v___x_1752_ = lean_usize_mul(v___x_1748_, v___x_1751_);
v_h_1753_ = lean_usize_shift_right(v_h_1747_, v___x_1752_);
v___x_1754_ = lean_nat_add(v_i_1740_, v___x_1749_);
lean_dec(v_i_1740_);
lean_inc(v_v_1745_);
lean_inc(v_k_1744_);
v___x_1755_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_entries_1741_, v_h_1753_, v_depth_1737_, v_k_1744_, v_v_1745_);
v_i_1740_ = v___x_1754_;
v_entries_1741_ = v___x_1755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_depth_1757_, lean_object* v_keys_1758_, lean_object* v_vals_1759_, lean_object* v_i_1760_, lean_object* v_entries_1761_){
_start:
{
size_t v_depth_boxed_1762_; lean_object* v_res_1763_; 
v_depth_boxed_1762_ = lean_unbox_usize(v_depth_1757_);
lean_dec(v_depth_1757_);
v_res_1763_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_boxed_1762_, v_keys_1758_, v_vals_1759_, v_i_1760_, v_entries_1761_);
lean_dec_ref(v_vals_1759_);
lean_dec_ref(v_keys_1758_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object* v_x_1764_, lean_object* v_x_1765_, lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v_x_1768_){
_start:
{
size_t v_x_88378__boxed_1769_; size_t v_x_88379__boxed_1770_; lean_object* v_res_1771_; 
v_x_88378__boxed_1769_ = lean_unbox_usize(v_x_1765_);
lean_dec(v_x_1765_);
v_x_88379__boxed_1770_ = lean_unbox_usize(v_x_1766_);
lean_dec(v_x_1766_);
v_res_1771_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1764_, v_x_88378__boxed_1769_, v_x_88379__boxed_1770_, v_x_1767_, v_x_1768_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object* v_x_1772_, lean_object* v_x_1773_, lean_object* v_x_1774_){
_start:
{
uint64_t v___x_1775_; size_t v___x_1776_; size_t v___x_1777_; lean_object* v___x_1778_; 
v___x_1775_ = l_Lean_instHashableFVarId_hash(v_x_1773_);
v___x_1776_ = lean_uint64_to_usize(v___x_1775_);
v___x_1777_ = ((size_t)1ULL);
v___x_1778_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1772_, v___x_1776_, v___x_1777_, v_x_1773_, v_x_1774_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object* v_as_1779_, size_t v_i_1780_, size_t v_stop_1781_, lean_object* v_b_1782_){
_start:
{
lean_object* v___y_1784_; uint8_t v___x_1788_; 
v___x_1788_ = lean_usize_dec_eq(v_i_1780_, v_stop_1781_);
if (v___x_1788_ == 0)
{
lean_object* v_fvarIdToDecl_1789_; lean_object* v_decls_1790_; lean_object* v_auxDeclToFullName_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_fvarIdToDecl_1789_ = lean_ctor_get(v_b_1782_, 0);
v_decls_1790_ = lean_ctor_get(v_b_1782_, 1);
v_auxDeclToFullName_1791_ = lean_ctor_get(v_b_1782_, 2);
v___x_1792_ = lean_array_uget_borrowed(v_as_1779_, v_i_1780_);
v___x_1793_ = l_Lean_Expr_fvarId_x21(v___x_1792_);
lean_inc_ref(v_b_1782_);
v___x_1794_ = lean_local_ctx_find(v_b_1782_, v___x_1793_);
if (lean_obj_tag(v___x_1794_) == 0)
{
v___y_1784_ = v_b_1782_;
goto v___jp_1783_;
}
else
{
lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1821_; 
lean_inc(v_auxDeclToFullName_1791_);
lean_inc_ref(v_decls_1790_);
lean_inc_ref(v_fvarIdToDecl_1789_);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_b_1782_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; lean_object* v_unused_1823_; lean_object* v_unused_1824_; 
v_unused_1822_ = lean_ctor_get(v_b_1782_, 2);
lean_dec(v_unused_1822_);
v_unused_1823_ = lean_ctor_get(v_b_1782_, 1);
lean_dec(v_unused_1823_);
v_unused_1824_ = lean_ctor_get(v_b_1782_, 0);
lean_dec(v_unused_1824_);
v___x_1796_ = v_b_1782_;
v_isShared_1797_ = v_isSharedCheck_1821_;
goto v_resetjp_1795_;
}
else
{
lean_dec(v_b_1782_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1821_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v_val_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1820_; 
v_val_1798_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1800_ = v___x_1794_;
v_isShared_1801_ = v_isSharedCheck_1820_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_val_1798_);
lean_dec(v___x_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1820_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1816_; lean_object* v_fvarId_1819_; 
v___x_1802_ = l_Lean_LocalDecl_type(v_val_1798_);
v___x_1803_ = l_Lean_Expr_cleanupAnnotations(v___x_1802_);
v___x_1804_ = l_Lean_LocalDecl_setType(v_val_1798_, v___x_1803_);
v_fvarId_1819_ = lean_ctor_get(v___x_1804_, 1);
lean_inc(v_fvarId_1819_);
v___y_1816_ = v_fvarId_1819_;
goto v___jp_1815_;
v___jp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 0, v___x_1804_);
v___x_1809_ = v___x_1800_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1804_);
v___x_1809_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; lean_object* v___x_1812_; 
v___x_1810_ = l_Lean_PersistentArray_set___redArg(v_decls_1790_, v___y_1807_, v___x_1809_);
lean_dec(v___y_1807_);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 1, v___x_1810_);
lean_ctor_set(v___x_1796_, 0, v___y_1806_);
v___x_1812_ = v___x_1796_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___y_1806_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v___x_1810_);
lean_ctor_set(v_reuseFailAlloc_1813_, 2, v_auxDeclToFullName_1791_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
v___y_1784_ = v___x_1812_;
goto v___jp_1783_;
}
}
}
v___jp_1815_:
{
lean_object* v___x_1817_; lean_object* v_index_1818_; 
lean_inc_ref(v___x_1804_);
v___x_1817_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_fvarIdToDecl_1789_, v___y_1816_, v___x_1804_);
v_index_1818_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_index_1818_);
v___y_1806_ = v___x_1817_;
v___y_1807_ = v_index_1818_;
goto v___jp_1805_;
}
}
}
}
}
else
{
return v_b_1782_;
}
v___jp_1783_:
{
size_t v___x_1785_; size_t v___x_1786_; 
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_add(v_i_1780_, v___x_1785_);
v_i_1780_ = v___x_1786_;
v_b_1782_ = v___y_1784_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object* v_as_1825_, lean_object* v_i_1826_, lean_object* v_stop_1827_, lean_object* v_b_1828_){
_start:
{
size_t v_i_boxed_1829_; size_t v_stop_boxed_1830_; lean_object* v_res_1831_; 
v_i_boxed_1829_ = lean_unbox_usize(v_i_1826_);
lean_dec(v_i_1826_);
v_stop_boxed_1830_ = lean_unbox_usize(v_stop_1827_);
lean_dec(v_stop_1827_);
v_res_1831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v_as_1825_, v_i_boxed_1829_, v_stop_boxed_1830_, v_b_1828_);
lean_dec_ref(v_as_1825_);
return v_res_1831_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0));
v___x_1834_ = l_Lean_stringToMessageData(v___x_1833_);
return v___x_1834_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2));
v___x_1837_ = l_Lean_stringToMessageData(v___x_1836_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4));
v___x_1840_ = l_Lean_stringToMessageData(v___x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object* v_type_1843_, lean_object* v_value_1844_, uint8_t v___x_1845_, uint8_t v___x_1846_, lean_object* v___x_1847_, uint8_t v___y_1848_, lean_object* v_xs_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
size_t v_sz_1857_; size_t v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; lean_object* v___x_1864_; 
v_sz_1857_ = lean_array_size(v_xs_1849_);
v___x_1858_ = ((size_t)0ULL);
v___x_1859_ = l_unsafeCast___redArg(v_xs_1849_);
v___x_1860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_1857_, v___x_1858_, v___x_1859_);
v___x_1861_ = l_unsafeCast___redArg(v___x_1860_);
lean_dec_ref(v___x_1860_);
lean_inc(v_type_1843_);
v___x_1862_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType___boxed), 8, 1);
lean_closure_set(v___x_1862_, 0, v_type_1843_);
v___x_1863_ = 2;
v___x_1864_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1862_, v___x_1863_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___y_1867_; lean_object* v___y_1903_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
if (v___y_1848_ == 0)
{
lean_object* v___x_1939_; 
v___x_1939_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
v___y_1903_ = v___x_1939_;
goto v___jp_1902_;
}
else
{
lean_object* v___x_1940_; 
v___x_1940_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7));
v___y_1903_ = v___x_1940_;
goto v___jp_1902_;
}
v___jp_1866_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___f_1872_; lean_object* v___x_1873_; 
lean_inc(v_a_1865_);
v___x_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1868_, 0, v_a_1865_);
v___x_1869_ = lean_box(0);
v___x_1870_ = lean_box(v___x_1845_);
v___x_1871_ = lean_box(v___x_1846_);
lean_inc(v___x_1861_);
v___f_1872_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1872_, 0, v_value_1844_);
lean_closure_set(v___f_1872_, 1, v___x_1868_);
lean_closure_set(v___f_1872_, 2, v___x_1870_);
lean_closure_set(v___f_1872_, 3, v___x_1869_);
lean_closure_set(v___f_1872_, 4, v___x_1861_);
lean_closure_set(v___f_1872_, 5, v___x_1871_);
v___x_1873_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v___y_1867_, v___f_1872_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; uint8_t v___x_1875_; lean_object* v___x_1876_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1874_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1875_ = 1;
v___x_1876_ = l_Lean_Meta_mkForallFVars(v___x_1861_, v_a_1865_, v___x_1846_, v___x_1845_, v___x_1845_, v___x_1875_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1885_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1879_ = v___x_1876_;
v_isShared_1880_ = v_isSharedCheck_1885_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1876_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1885_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v_a_1877_);
lean_ctor_set(v___x_1881_, 1, v_a_1874_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v___x_1881_);
v___x_1883_ = v___x_1879_;
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
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_a_1874_);
v_a_1886_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1876_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1876_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_a_1865_);
lean_dec(v___x_1861_);
v_a_1894_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1873_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1873_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
v___jp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1904_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1);
lean_inc_ref(v___y_1903_);
v___x_1905_ = l_Lean_stringToMessageData(v___y_1903_);
lean_inc_ref(v___x_1905_);
v___x_1906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1904_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3);
v___x_1908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1906_);
lean_ctor_set(v___x_1908_, 1, v___x_1907_);
lean_inc(v_type_1843_);
v___x_1909_ = l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(v_a_1865_, v_type_1843_, v___x_1908_, v___y_1851_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
lean_dec_ref_known(v___x_1909_, 1);
v___x_1910_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5);
v___x_1911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
lean_ctor_set(v___x_1911_, 1, v___x_1905_);
v___x_1912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
lean_ctor_set(v___x_1912_, 1, v___x_1907_);
v___x_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_inc(v_a_1865_);
v___x_1914_ = l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(v_a_1865_, v_type_1843_, v___x_1913_, v___y_1851_, v___y_1852_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_lctx_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; 
lean_dec_ref_known(v___x_1914_, 1);
v_lctx_1915_ = lean_ctor_get(v___y_1852_, 2);
v___x_1916_ = lean_array_get_size(v___x_1861_);
v___x_1917_ = lean_nat_dec_lt(v___x_1847_, v___x_1916_);
if (v___x_1917_ == 0)
{
lean_inc_ref(v_lctx_1915_);
v___y_1867_ = v_lctx_1915_;
goto v___jp_1866_;
}
else
{
uint8_t v___x_1918_; 
v___x_1918_ = lean_nat_dec_le(v___x_1916_, v___x_1916_);
if (v___x_1918_ == 0)
{
if (v___x_1917_ == 0)
{
lean_inc_ref(v_lctx_1915_);
v___y_1867_ = v_lctx_1915_;
goto v___jp_1866_;
}
else
{
size_t v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = lean_usize_of_nat(v___x_1916_);
lean_inc_ref(v_lctx_1915_);
v___x_1920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v___x_1861_, v___x_1858_, v___x_1919_, v_lctx_1915_);
v___y_1867_ = v___x_1920_;
goto v___jp_1866_;
}
}
else
{
size_t v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = lean_usize_of_nat(v___x_1916_);
lean_inc_ref(v_lctx_1915_);
v___x_1922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v___x_1861_, v___x_1858_, v___x_1921_, v_lctx_1915_);
v___y_1867_ = v___x_1922_;
goto v___jp_1866_;
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec(v_a_1865_);
lean_dec(v___x_1861_);
lean_dec(v_value_1844_);
v_a_1923_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1914_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1914_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec_ref(v___x_1905_);
lean_dec(v_a_1865_);
lean_dec(v___x_1861_);
lean_dec(v_value_1844_);
lean_dec(v_type_1843_);
v_a_1931_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1909_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1909_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec(v___x_1861_);
lean_dec(v_value_1844_);
lean_dec(v_type_1843_);
v_a_1941_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1864_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1864_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object* v_type_1949_, lean_object* v_value_1950_, lean_object* v___x_1951_, lean_object* v___x_1952_, lean_object* v___x_1953_, lean_object* v___y_1954_, lean_object* v_xs_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
uint8_t v___x_88677__boxed_1963_; uint8_t v___x_88678__boxed_1964_; uint8_t v___y_88680__boxed_1965_; lean_object* v_res_1966_; 
v___x_88677__boxed_1963_ = lean_unbox(v___x_1951_);
v___x_88678__boxed_1964_ = lean_unbox(v___x_1952_);
v___y_88680__boxed_1965_ = lean_unbox(v___y_1954_);
v_res_1966_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(v_type_1949_, v_value_1950_, v___x_88677__boxed_1963_, v___x_88678__boxed_1964_, v___x_1953_, v___y_88680__boxed_1965_, v_xs_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec_ref(v_xs_1955_);
lean_dec(v___x_1953_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object* v_val_1967_, lean_object* v_a_1968_, lean_object* v_letOrReassign_1969_, lean_object* v_a_1970_, uint8_t v_zeta_1971_, uint8_t v___y_1972_, lean_object* v_x_1973_, uint8_t v_usedOnly_1974_, uint8_t v___x_1975_, lean_object* v_snd_1976_, lean_object* v_h_x27_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; 
lean_inc_ref(v_h_x27_1977_);
v___x_1986_ = l_Lean_Elab_Term_addLocalVarInfo(v_val_1967_, v_h_x27_1977_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_dec_ref_known(v___x_1986_, 1);
v___x_1987_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1987_, 0, v_a_1968_);
v___x_1988_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_1969_, v_a_1970_, v___x_1987_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_1988_) == 0)
{
if (v_zeta_1971_ == 0)
{
if (v___y_1972_ == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; uint8_t v___x_1994_; lean_object* v___x_1995_; 
lean_dec_ref(v_snd_1976_);
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = lean_unsigned_to_nat(2u);
v___x_1991_ = lean_mk_empty_array_with_capacity(v___x_1990_);
v___x_1992_ = lean_array_push(v___x_1991_, v_x_1973_);
v___x_1993_ = lean_array_push(v___x_1992_, v_h_x27_1977_);
v___x_1994_ = 1;
v___x_1995_ = l_Lean_Meta_mkLetFVars(v___x_1993_, v_a_1989_, v_usedOnly_1974_, v___y_1972_, v___x_1994_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
return v___x_1995_;
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; lean_object* v___x_2002_; 
v_a_1996_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1997_ = lean_unsigned_to_nat(2u);
v___x_1998_ = lean_mk_empty_array_with_capacity(v___x_1997_);
v___x_1999_ = lean_array_push(v___x_1998_, v_x_1973_);
v___x_2000_ = lean_array_push(v___x_1999_, v_h_x27_1977_);
v___x_2001_ = 1;
v___x_2002_ = l_Lean_Meta_mkLambdaFVars(v___x_2000_, v_a_1996_, v_zeta_1971_, v___x_1975_, v_zeta_1971_, v___x_1975_, v___x_2001_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2004_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_a_2003_);
lean_dec_ref_known(v___x_2002_, 1);
lean_inc_ref(v_snd_1976_);
v___x_2004_ = l_Lean_Meta_mkEqRefl(v_snd_1976_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2013_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2011_; 
v___x_2009_ = l_Lean_mkAppB(v_a_2003_, v_snd_1976_, v_a_2005_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2009_);
v___x_2011_ = v___x_2007_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
else
{
lean_dec(v_a_2003_);
lean_dec_ref(v_snd_1976_);
return v___x_2004_;
}
}
else
{
lean_dec_ref(v_snd_1976_);
return v___x_2002_;
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v_a_2014_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_2015_ = lean_unsigned_to_nat(2u);
v___x_2016_ = lean_mk_empty_array_with_capacity(v___x_2015_);
lean_inc_ref(v___x_2016_);
v___x_2017_ = lean_array_push(v___x_2016_, v_x_1973_);
v___x_2018_ = lean_array_push(v___x_2017_, v_h_x27_1977_);
v___x_2019_ = l_Lean_Expr_abstractM(v_a_2014_, v___x_2018_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2021_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2019_, 1);
lean_inc_ref(v_snd_1976_);
v___x_2021_ = l_Lean_Meta_mkEqRefl(v_snd_1976_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2032_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2024_ = v___x_2021_;
v_isShared_2025_ = v_isSharedCheck_2032_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_2021_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2032_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2030_; 
v___x_2026_ = lean_array_push(v___x_2016_, v_snd_1976_);
v___x_2027_ = lean_array_push(v___x_2026_, v_a_2022_);
v___x_2028_ = lean_expr_instantiate_rev(v_a_2020_, v___x_2027_);
lean_dec_ref(v___x_2027_);
lean_dec(v_a_2020_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 0, v___x_2028_);
v___x_2030_ = v___x_2024_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
else
{
lean_dec(v_a_2020_);
lean_dec_ref(v___x_2016_);
lean_dec_ref(v_snd_1976_);
return v___x_2021_;
}
}
else
{
lean_dec_ref(v___x_2016_);
lean_dec_ref(v_snd_1976_);
return v___x_2019_;
}
}
}
else
{
lean_dec_ref(v_h_x27_1977_);
lean_dec_ref(v_snd_1976_);
lean_dec_ref(v_x_1973_);
return v___x_1988_;
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec_ref(v_h_x27_1977_);
lean_dec_ref(v_snd_1976_);
lean_dec_ref(v_x_1973_);
lean_dec_ref(v_a_1970_);
lean_dec(v_letOrReassign_1969_);
lean_dec_ref(v_a_1968_);
v_a_2033_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_1986_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_1986_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object** _args){
lean_object* v_val_2041_ = _args[0];
lean_object* v_a_2042_ = _args[1];
lean_object* v_letOrReassign_2043_ = _args[2];
lean_object* v_a_2044_ = _args[3];
lean_object* v_zeta_2045_ = _args[4];
lean_object* v___y_2046_ = _args[5];
lean_object* v_x_2047_ = _args[6];
lean_object* v_usedOnly_2048_ = _args[7];
lean_object* v___x_2049_ = _args[8];
lean_object* v_snd_2050_ = _args[9];
lean_object* v_h_x27_2051_ = _args[10];
lean_object* v___y_2052_ = _args[11];
lean_object* v___y_2053_ = _args[12];
lean_object* v___y_2054_ = _args[13];
lean_object* v___y_2055_ = _args[14];
lean_object* v___y_2056_ = _args[15];
lean_object* v___y_2057_ = _args[16];
lean_object* v___y_2058_ = _args[17];
lean_object* v___y_2059_ = _args[18];
_start:
{
uint8_t v_zeta_boxed_2060_; uint8_t v___y_88909__boxed_2061_; uint8_t v_usedOnly_boxed_2062_; uint8_t v___x_88910__boxed_2063_; lean_object* v_res_2064_; 
v_zeta_boxed_2060_ = lean_unbox(v_zeta_2045_);
v___y_88909__boxed_2061_ = lean_unbox(v___y_2046_);
v_usedOnly_boxed_2062_ = lean_unbox(v_usedOnly_2048_);
v___x_88910__boxed_2063_ = lean_unbox(v___x_2049_);
v_res_2064_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(v_val_2041_, v_a_2042_, v_letOrReassign_2043_, v_a_2044_, v_zeta_boxed_2060_, v___y_88909__boxed_2061_, v_x_2047_, v_usedOnly_boxed_2062_, v___x_88910__boxed_2063_, v_snd_2050_, v_h_x27_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec_ref(v___y_2052_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object* v_id_2065_, lean_object* v_eq_x3f_2066_, lean_object* v_a_2067_, lean_object* v_letOrReassign_2068_, lean_object* v_a_2069_, uint8_t v_zeta_2070_, uint8_t v_usedOnly_2071_, lean_object* v_snd_2072_, uint8_t v___y_2073_, uint8_t v___x_2074_, lean_object* v_x_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v___x_2084_; 
lean_inc_ref(v_x_2075_);
v___x_2084_ = l_Lean_Elab_Term_addLocalVarInfo(v_id_2065_, v_x_2075_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_dec_ref_known(v___x_2084_, 1);
if (lean_obj_tag(v_eq_x3f_2066_) == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_2085_, 0, v_a_2067_);
v___x_2086_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_2068_, v_a_2069_, v___x_2085_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2086_) == 0)
{
if (v_zeta_2070_ == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; lean_object* v___x_2092_; 
lean_dec_ref(v_snd_2072_);
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
v___x_2088_ = lean_unsigned_to_nat(1u);
v___x_2089_ = lean_mk_empty_array_with_capacity(v___x_2088_);
v___x_2090_ = lean_array_push(v___x_2089_, v_x_2075_);
v___x_2091_ = 1;
v___x_2092_ = l_Lean_Meta_mkLetFVars(v___x_2090_, v_a_2087_, v_usedOnly_2071_, v_zeta_2070_, v___x_2091_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
return v___x_2092_;
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_a_2093_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2086_, 1);
v___x_2094_ = lean_unsigned_to_nat(1u);
v___x_2095_ = lean_mk_empty_array_with_capacity(v___x_2094_);
v___x_2096_ = lean_array_push(v___x_2095_, v_x_2075_);
v___x_2097_ = l_Lean_Expr_abstractM(v_a_2093_, v___x_2096_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2106_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2100_ = v___x_2097_;
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___x_2102_ = lean_expr_instantiate1(v_a_2098_, v_snd_2072_);
lean_dec_ref(v_snd_2072_);
lean_dec(v_a_2098_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 0, v___x_2102_);
v___x_2104_ = v___x_2100_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
else
{
lean_dec_ref(v_snd_2072_);
return v___x_2097_;
}
}
}
else
{
lean_dec_ref(v_x_2075_);
lean_dec_ref(v_snd_2072_);
return v___x_2086_;
}
}
else
{
lean_object* v_val_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___f_2112_; lean_object* v___x_2113_; 
v_val_2107_ = lean_ctor_get(v_eq_x3f_2066_, 0);
lean_inc_n(v_val_2107_, 2);
lean_dec_ref_known(v_eq_x3f_2066_, 1);
v___x_2108_ = lean_box(v_zeta_2070_);
v___x_2109_ = lean_box(v___y_2073_);
v___x_2110_ = lean_box(v_usedOnly_2071_);
v___x_2111_ = lean_box(v___x_2074_);
lean_inc_ref(v_snd_2072_);
lean_inc_ref_n(v_x_2075_, 2);
v___f_2112_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed), 19, 10);
lean_closure_set(v___f_2112_, 0, v_val_2107_);
lean_closure_set(v___f_2112_, 1, v_a_2067_);
lean_closure_set(v___f_2112_, 2, v_letOrReassign_2068_);
lean_closure_set(v___f_2112_, 3, v_a_2069_);
lean_closure_set(v___f_2112_, 4, v___x_2108_);
lean_closure_set(v___f_2112_, 5, v___x_2109_);
lean_closure_set(v___f_2112_, 6, v_x_2075_);
lean_closure_set(v___f_2112_, 7, v___x_2110_);
lean_closure_set(v___f_2112_, 8, v___x_2111_);
lean_closure_set(v___f_2112_, 9, v_snd_2072_);
v___x_2113_ = l_Lean_Meta_mkEq(v_x_2075_, v_snd_2072_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2115_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2113_, 1);
v___x_2115_ = l_Lean_Meta_mkEqRefl(v_x_2075_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
v___x_2117_ = l_Lean_TSyntax_getId(v_val_2107_);
lean_dec(v_val_2107_);
v___x_2118_ = 0;
v___x_2119_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_2117_, v_a_2114_, v_a_2116_, v___f_2112_, v___x_2074_, v___x_2118_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
return v___x_2119_;
}
else
{
lean_dec(v_a_2114_);
lean_dec_ref(v___f_2112_);
lean_dec(v_val_2107_);
return v___x_2115_;
}
}
else
{
lean_dec_ref(v___f_2112_);
lean_dec(v_val_2107_);
lean_dec_ref(v_x_2075_);
return v___x_2113_;
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec_ref(v_x_2075_);
lean_dec_ref(v_snd_2072_);
lean_dec_ref(v_a_2069_);
lean_dec(v_letOrReassign_2068_);
lean_dec_ref(v_a_2067_);
lean_dec(v_eq_x3f_2066_);
v_a_2120_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2084_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2084_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object** _args){
lean_object* v_id_2128_ = _args[0];
lean_object* v_eq_x3f_2129_ = _args[1];
lean_object* v_a_2130_ = _args[2];
lean_object* v_letOrReassign_2131_ = _args[3];
lean_object* v_a_2132_ = _args[4];
lean_object* v_zeta_2133_ = _args[5];
lean_object* v_usedOnly_2134_ = _args[6];
lean_object* v_snd_2135_ = _args[7];
lean_object* v___y_2136_ = _args[8];
lean_object* v___x_2137_ = _args[9];
lean_object* v_x_2138_ = _args[10];
lean_object* v___y_2139_ = _args[11];
lean_object* v___y_2140_ = _args[12];
lean_object* v___y_2141_ = _args[13];
lean_object* v___y_2142_ = _args[14];
lean_object* v___y_2143_ = _args[15];
lean_object* v___y_2144_ = _args[16];
lean_object* v___y_2145_ = _args[17];
lean_object* v___y_2146_ = _args[18];
_start:
{
uint8_t v_zeta_boxed_2147_; uint8_t v_usedOnly_boxed_2148_; uint8_t v___y_89067__boxed_2149_; uint8_t v___x_89068__boxed_2150_; lean_object* v_res_2151_; 
v_zeta_boxed_2147_ = lean_unbox(v_zeta_2133_);
v_usedOnly_boxed_2148_ = lean_unbox(v_usedOnly_2134_);
v___y_89067__boxed_2149_ = lean_unbox(v___y_2136_);
v___x_89068__boxed_2150_ = lean_unbox(v___x_2137_);
v_res_2151_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(v_id_2128_, v_eq_x3f_2129_, v_a_2130_, v_letOrReassign_2131_, v_a_2132_, v_zeta_boxed_2147_, v_usedOnly_boxed_2148_, v_snd_2135_, v___y_89067__boxed_2149_, v___x_89068__boxed_2150_, v_x_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t v___x_2152_, lean_object* v_____do__lift_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = l_Lean_SourceInfo_fromRef(v_____do__lift_2153_, v___x_2152_);
v___x_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object* v___x_2164_, lean_object* v_____do__lift_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
uint8_t v___x_89195__boxed_2174_; lean_object* v_res_2175_; 
v___x_89195__boxed_2174_ = lean_unbox(v___x_2164_);
v_res_2175_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(v___x_89195__boxed_2174_, v_____do__lift_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v_____do__lift_2165_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object* v_term_2176_, lean_object* v___x_2177_, uint8_t v___x_2178_, lean_object* v___x_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Lean_Elab_Term_elabTermEnsuringType(v_term_2176_, v___x_2177_, v___x_2178_, v___x_2178_, v___x_2179_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object* v_term_2189_, lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v___x_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
uint8_t v___x_89230__boxed_2201_; lean_object* v_res_2202_; 
v___x_89230__boxed_2201_ = lean_unbox(v___x_2191_);
v_res_2202_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(v_term_2189_, v___x_2190_, v___x_89230__boxed_2201_, v___x_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec_ref(v___y_2193_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(lean_object* v_stx_2203_, lean_object* v_output_2204_, lean_object* v_trees_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_lctx_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v_lctx_2213_ = lean_ctor_get(v___y_2208_, 2);
lean_inc_ref(v_lctx_2213_);
v___x_2214_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2214_, 0, v_lctx_2213_);
lean_ctor_set(v___x_2214_, 1, v_stx_2203_);
lean_ctor_set(v___x_2214_, 2, v_output_2204_);
v___x_2215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
v___x_2216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
lean_ctor_set(v___x_2216_, 1, v_trees_2205_);
v___x_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v_stx_2218_, lean_object* v_output_2219_, lean_object* v_trees_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(v_stx_2218_, v_output_2219_, v_trees_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
return v_res_2228_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = lean_unsigned_to_nat(32u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1(void){
_start:
{
size_t v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2232_ = ((size_t)5ULL);
v___x_2233_ = lean_unsigned_to_nat(0u);
v___x_2234_ = lean_unsigned_to_nat(32u);
v___x_2235_ = lean_mk_empty_array_with_capacity(v___x_2234_);
v___x_2236_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0);
v___x_2237_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v___x_2235_);
lean_ctor_set(v___x_2237_, 2, v___x_2233_);
lean_ctor_set(v___x_2237_, 3, v___x_2233_);
lean_ctor_set_usize(v___x_2237_, 4, v___x_2232_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(lean_object* v___y_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v_infoState_2241_; lean_object* v_trees_2242_; lean_object* v___x_2243_; lean_object* v_infoState_2244_; lean_object* v_env_2245_; lean_object* v_nextMacroScope_2246_; lean_object* v_ngen_2247_; lean_object* v_auxDeclNGen_2248_; lean_object* v_traceState_2249_; lean_object* v_cache_2250_; lean_object* v_messages_2251_; lean_object* v_snapshotTasks_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2273_; 
v___x_2240_ = lean_st_ref_get(v___y_2238_);
v_infoState_2241_ = lean_ctor_get(v___x_2240_, 7);
lean_inc_ref(v_infoState_2241_);
lean_dec(v___x_2240_);
v_trees_2242_ = lean_ctor_get(v_infoState_2241_, 2);
lean_inc_ref(v_trees_2242_);
lean_dec_ref(v_infoState_2241_);
v___x_2243_ = lean_st_ref_take(v___y_2238_);
v_infoState_2244_ = lean_ctor_get(v___x_2243_, 7);
v_env_2245_ = lean_ctor_get(v___x_2243_, 0);
v_nextMacroScope_2246_ = lean_ctor_get(v___x_2243_, 1);
v_ngen_2247_ = lean_ctor_get(v___x_2243_, 2);
v_auxDeclNGen_2248_ = lean_ctor_get(v___x_2243_, 3);
v_traceState_2249_ = lean_ctor_get(v___x_2243_, 4);
v_cache_2250_ = lean_ctor_get(v___x_2243_, 5);
v_messages_2251_ = lean_ctor_get(v___x_2243_, 6);
v_snapshotTasks_2252_ = lean_ctor_get(v___x_2243_, 8);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2254_ = v___x_2243_;
v_isShared_2255_ = v_isSharedCheck_2273_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_snapshotTasks_2252_);
lean_inc(v_infoState_2244_);
lean_inc(v_messages_2251_);
lean_inc(v_cache_2250_);
lean_inc(v_traceState_2249_);
lean_inc(v_auxDeclNGen_2248_);
lean_inc(v_ngen_2247_);
lean_inc(v_nextMacroScope_2246_);
lean_inc(v_env_2245_);
lean_dec(v___x_2243_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2273_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
uint8_t v_enabled_2256_; lean_object* v_assignment_2257_; lean_object* v_lazyAssignment_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2271_; 
v_enabled_2256_ = lean_ctor_get_uint8(v_infoState_2244_, sizeof(void*)*3);
v_assignment_2257_ = lean_ctor_get(v_infoState_2244_, 0);
v_lazyAssignment_2258_ = lean_ctor_get(v_infoState_2244_, 1);
v_isSharedCheck_2271_ = !lean_is_exclusive(v_infoState_2244_);
if (v_isSharedCheck_2271_ == 0)
{
lean_object* v_unused_2272_; 
v_unused_2272_ = lean_ctor_get(v_infoState_2244_, 2);
lean_dec(v_unused_2272_);
v___x_2260_ = v_infoState_2244_;
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_lazyAssignment_2258_);
lean_inc(v_assignment_2257_);
lean_dec(v_infoState_2244_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2264_; 
v___x_2262_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 2, v___x_2262_);
v___x_2264_ = v___x_2260_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_assignment_2257_);
lean_ctor_set(v_reuseFailAlloc_2270_, 1, v_lazyAssignment_2258_);
lean_ctor_set(v_reuseFailAlloc_2270_, 2, v___x_2262_);
lean_ctor_set_uint8(v_reuseFailAlloc_2270_, sizeof(void*)*3, v_enabled_2256_);
v___x_2264_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2266_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 7, v___x_2264_);
v___x_2266_ = v___x_2254_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_env_2245_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_nextMacroScope_2246_);
lean_ctor_set(v_reuseFailAlloc_2269_, 2, v_ngen_2247_);
lean_ctor_set(v_reuseFailAlloc_2269_, 3, v_auxDeclNGen_2248_);
lean_ctor_set(v_reuseFailAlloc_2269_, 4, v_traceState_2249_);
lean_ctor_set(v_reuseFailAlloc_2269_, 5, v_cache_2250_);
lean_ctor_set(v_reuseFailAlloc_2269_, 6, v_messages_2251_);
lean_ctor_set(v_reuseFailAlloc_2269_, 7, v___x_2264_);
lean_ctor_set(v_reuseFailAlloc_2269_, 8, v_snapshotTasks_2252_);
v___x_2266_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_st_ref_put(v___y_2238_, v___x_2266_);
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_trees_2242_);
return v___x_2268_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___boxed(lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_2274_);
lean_dec(v___y_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(lean_object* v___y_2277_, lean_object* v_mkInfoTree_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v_a_2284_, lean_object* v_a_x3f_2285_){
_start:
{
lean_object* v___x_2287_; lean_object* v_infoState_2288_; lean_object* v_trees_2289_; lean_object* v___x_2290_; 
v___x_2287_ = lean_st_ref_get(v___y_2277_);
v_infoState_2288_ = lean_ctor_get(v___x_2287_, 7);
lean_inc_ref(v_infoState_2288_);
lean_dec(v___x_2287_);
v_trees_2289_ = lean_ctor_get(v_infoState_2288_, 2);
lean_inc_ref(v_trees_2289_);
lean_dec_ref(v_infoState_2288_);
lean_inc(v___y_2277_);
lean_inc_ref(v___y_2283_);
lean_inc(v___y_2282_);
lean_inc_ref(v___y_2281_);
lean_inc(v___y_2280_);
lean_inc_ref(v___y_2279_);
v___x_2290_ = lean_apply_8(v_mkInfoTree_2278_, v_trees_2289_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2277_, lean_box(0));
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2329_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2293_ = v___x_2290_;
v_isShared_2294_ = v_isSharedCheck_2329_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2290_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2329_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2295_; lean_object* v_infoState_2296_; lean_object* v_env_2297_; lean_object* v_nextMacroScope_2298_; lean_object* v_ngen_2299_; lean_object* v_auxDeclNGen_2300_; lean_object* v_traceState_2301_; lean_object* v_cache_2302_; lean_object* v_messages_2303_; lean_object* v_snapshotTasks_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2328_; 
v___x_2295_ = lean_st_ref_take(v___y_2277_);
v_infoState_2296_ = lean_ctor_get(v___x_2295_, 7);
v_env_2297_ = lean_ctor_get(v___x_2295_, 0);
v_nextMacroScope_2298_ = lean_ctor_get(v___x_2295_, 1);
v_ngen_2299_ = lean_ctor_get(v___x_2295_, 2);
v_auxDeclNGen_2300_ = lean_ctor_get(v___x_2295_, 3);
v_traceState_2301_ = lean_ctor_get(v___x_2295_, 4);
v_cache_2302_ = lean_ctor_get(v___x_2295_, 5);
v_messages_2303_ = lean_ctor_get(v___x_2295_, 6);
v_snapshotTasks_2304_ = lean_ctor_get(v___x_2295_, 8);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2306_ = v___x_2295_;
v_isShared_2307_ = v_isSharedCheck_2328_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_snapshotTasks_2304_);
lean_inc(v_infoState_2296_);
lean_inc(v_messages_2303_);
lean_inc(v_cache_2302_);
lean_inc(v_traceState_2301_);
lean_inc(v_auxDeclNGen_2300_);
lean_inc(v_ngen_2299_);
lean_inc(v_nextMacroScope_2298_);
lean_inc(v_env_2297_);
lean_dec(v___x_2295_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2328_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
uint8_t v_enabled_2308_; lean_object* v_assignment_2309_; lean_object* v_lazyAssignment_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2326_; 
v_enabled_2308_ = lean_ctor_get_uint8(v_infoState_2296_, sizeof(void*)*3);
v_assignment_2309_ = lean_ctor_get(v_infoState_2296_, 0);
v_lazyAssignment_2310_ = lean_ctor_get(v_infoState_2296_, 1);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_infoState_2296_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; 
v_unused_2327_ = lean_ctor_get(v_infoState_2296_, 2);
lean_dec(v_unused_2327_);
v___x_2312_ = v_infoState_2296_;
v_isShared_2313_ = v_isSharedCheck_2326_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_lazyAssignment_2310_);
lean_inc(v_assignment_2309_);
lean_dec(v_infoState_2296_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2326_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v___x_2314_ = lean_box(0);
v___x_2315_ = l_Lean_PersistentArray_push___redArg(v_a_2284_, v_a_2291_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 2, v___x_2315_);
v___x_2317_ = v___x_2312_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_assignment_2309_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_lazyAssignment_2310_);
lean_ctor_set(v_reuseFailAlloc_2325_, 2, v___x_2315_);
lean_ctor_set_uint8(v_reuseFailAlloc_2325_, sizeof(void*)*3, v_enabled_2308_);
v___x_2317_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2319_; 
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 7, v___x_2317_);
v___x_2319_ = v___x_2306_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_env_2297_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v_nextMacroScope_2298_);
lean_ctor_set(v_reuseFailAlloc_2324_, 2, v_ngen_2299_);
lean_ctor_set(v_reuseFailAlloc_2324_, 3, v_auxDeclNGen_2300_);
lean_ctor_set(v_reuseFailAlloc_2324_, 4, v_traceState_2301_);
lean_ctor_set(v_reuseFailAlloc_2324_, 5, v_cache_2302_);
lean_ctor_set(v_reuseFailAlloc_2324_, 6, v_messages_2303_);
lean_ctor_set(v_reuseFailAlloc_2324_, 7, v___x_2317_);
lean_ctor_set(v_reuseFailAlloc_2324_, 8, v_snapshotTasks_2304_);
v___x_2319_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2320_ = lean_st_ref_put(v___y_2277_, v___x_2319_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set(v___x_2293_, 0, v___x_2314_);
v___x_2322_ = v___x_2293_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v___x_2314_);
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
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec_ref(v_a_2284_);
v_a_2330_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2290_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2290_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v___y_2338_, lean_object* v_mkInfoTree_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v_a_2345_, lean_object* v_a_x3f_2346_, lean_object* v___y_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2338_, v_mkInfoTree_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v_a_2345_, v_a_x3f_2346_);
lean_dec(v_a_x3f_2346_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2338_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(lean_object* v_x_2349_, lean_object* v_mkInfoTree_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v___x_2358_; lean_object* v_infoState_2359_; uint8_t v_enabled_2360_; 
v___x_2358_ = lean_st_ref_get(v___y_2356_);
v_infoState_2359_ = lean_ctor_get(v___x_2358_, 7);
lean_inc_ref(v_infoState_2359_);
lean_dec(v___x_2358_);
v_enabled_2360_ = lean_ctor_get_uint8(v_infoState_2359_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2359_);
if (v_enabled_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_dec_ref(v_mkInfoTree_2350_);
lean_inc(v___y_2356_);
lean_inc_ref(v___y_2355_);
lean_inc(v___y_2354_);
lean_inc_ref(v___y_2353_);
lean_inc(v___y_2352_);
lean_inc_ref(v___y_2351_);
v___x_2361_ = lean_apply_7(v_x_2349_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, lean_box(0));
return v___x_2361_;
}
else
{
lean_object* v___x_2362_; lean_object* v_a_2363_; lean_object* v_r_2364_; 
v___x_2362_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_2356_);
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref(v___x_2362_);
lean_inc(v___y_2356_);
lean_inc_ref(v___y_2355_);
lean_inc(v___y_2354_);
lean_inc_ref(v___y_2353_);
lean_inc(v___y_2352_);
lean_inc_ref(v___y_2351_);
v_r_2364_ = lean_apply_7(v_x_2349_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, lean_box(0));
if (lean_obj_tag(v_r_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2389_; 
v_a_2365_ = lean_ctor_get(v_r_2364_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v_r_2364_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2367_ = v_r_2364_;
v_isShared_2368_ = v_isSharedCheck_2389_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v_r_2364_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2389_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
lean_inc(v_a_2365_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2356_, v_mkInfoTree_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v_a_2363_, v___x_2370_);
lean_dec_ref(v___x_2370_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2378_ == 0)
{
lean_object* v_unused_2379_; 
v_unused_2379_ = lean_ctor_get(v___x_2371_, 0);
lean_dec(v_unused_2379_);
v___x_2373_ = v___x_2371_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_dec(v___x_2371_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v_a_2365_);
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2365_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2387_; 
lean_dec(v_a_2365_);
v_a_2380_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2382_ = v___x_2371_;
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2371_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
if (v_isShared_2383_ == 0)
{
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2380_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v_a_2390_ = lean_ctor_get(v_r_2364_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v_r_2364_, 1);
v___x_2391_ = lean_box(0);
v___x_2392_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2356_, v_mkInfoTree_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v_a_2363_, v___x_2391_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2399_ == 0)
{
lean_object* v_unused_2400_; 
v_unused_2400_ = lean_ctor_get(v___x_2392_, 0);
lean_dec(v_unused_2400_);
v___x_2394_ = v___x_2392_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_dec(v___x_2392_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
lean_ctor_set_tag(v___x_2394_, 1);
lean_ctor_set(v___x_2394_, 0, v_a_2390_);
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2390_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_dec(v_a_2390_);
v_a_2401_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2392_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2392_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___boxed(lean_object* v_x_2409_, lean_object* v_mkInfoTree_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_2409_, v_mkInfoTree_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object* v_stx_2419_, lean_object* v_output_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v___f_2429_; lean_object* v___x_2430_; 
v___f_2429_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2429_, 0, v_stx_2419_);
lean_closure_set(v___f_2429_, 1, v_output_2420_);
v___x_2430_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_2421_, v___f_2429_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object* v_stx_2431_, lean_object* v_output_2432_, lean_object* v_x_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_stx_2431_, v_output_2432_, v_x_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object* v_x_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v___x_2451_; 
lean_inc_ref(v___y_2443_);
v___x_2451_ = lean_apply_8(v_x_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, lean_box(0));
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object* v_x_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(v_x_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec_ref(v___y_2453_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object* v_beforeStx_2462_, lean_object* v_afterStx_2463_, lean_object* v_x_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v___f_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
lean_inc_ref(v___y_2465_);
v___f_2473_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2473_, 0, v_x_2464_);
lean_closure_set(v___f_2473_, 1, v___y_2465_);
lean_inc(v_afterStx_2463_);
lean_inc(v_beforeStx_2462_);
v___x_2474_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___boxed), 11, 4);
lean_closure_set(v___x_2474_, 0, lean_box(0));
lean_closure_set(v___x_2474_, 1, v_beforeStx_2462_);
lean_closure_set(v___x_2474_, 2, v_afterStx_2463_);
lean_closure_set(v___x_2474_, 3, v___f_2473_);
v___x_2475_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_beforeStx_2462_, v_afterStx_2463_, v___x_2474_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
if (lean_obj_tag(v___x_2475_) == 0)
{
return v___x_2475_;
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2475_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2475_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object* v_beforeStx_2484_, lean_object* v_afterStx_2485_, lean_object* v_x_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_2484_, v_afterStx_2485_, v_x_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec_ref(v___y_2487_);
return v_res_2495_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1));
v___x_2499_ = l_String_toRawSubstring_x27(v___x_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object* v_rhs_2521_, uint8_t v___x_2522_, lean_object* v_config_2523_, lean_object* v_a_2524_, uint8_t v___x_2525_, lean_object* v___x_2526_, lean_object* v___x_2527_, lean_object* v___x_2528_, lean_object* v___f_2529_, lean_object* v___x_2530_, lean_object* v_body_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v_term_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v_ref_2548_; lean_object* v___y_2549_; lean_object* v_toCold_2555_; lean_object* v_ref_2556_; lean_object* v_quotContext_2557_; lean_object* v_currMacroScope_2558_; lean_object* v_ref_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v_eq_x3f_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v_toCold_2555_ = lean_ctor_get(v___y_2537_, 0);
v_ref_2556_ = lean_ctor_get(v___y_2537_, 2);
v_quotContext_2557_ = lean_ctor_get(v_toCold_2555_, 8);
v_currMacroScope_2558_ = lean_ctor_get(v_toCold_2555_, 9);
v_ref_2559_ = l_Lean_replaceRef(v_rhs_2521_, v_ref_2556_);
v___x_2560_ = l_Lean_SourceInfo_fromRef(v_ref_2559_, v___x_2522_);
lean_dec(v_ref_2559_);
v___x_2561_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0));
lean_inc_n(v___x_2560_, 2);
v___x_2562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2560_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2);
v_eq_x3f_2564_ = lean_ctor_get(v_config_2523_, 0);
lean_inc(v_eq_x3f_2564_);
lean_dec_ref(v_config_2523_);
v___x_2565_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3));
lean_inc(v_currMacroScope_2558_);
lean_inc(v_quotContext_2557_);
v___x_2566_ = l_Lean_addMacroScope(v_quotContext_2557_, v___x_2565_, v_currMacroScope_2558_);
v___x_2567_ = lean_box(0);
lean_inc(v___x_2566_);
v___x_2568_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2560_);
lean_ctor_set(v___x_2568_, 1, v___x_2563_);
lean_ctor_set(v___x_2568_, 2, v___x_2566_);
lean_ctor_set(v___x_2568_, 3, v___x_2567_);
v___x_2569_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4));
lean_inc_ref(v___x_2528_);
lean_inc_ref(v___x_2527_);
lean_inc_ref(v___x_2526_);
v___x_2570_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2569_);
v___x_2571_ = l_Lean_Syntax_node2(v___x_2560_, v___x_2570_, v___x_2562_, v___x_2568_);
if (lean_obj_tag(v_eq_x3f_2564_) == 1)
{
lean_object* v_val_2572_; lean_object* v___x_2573_; 
v_val_2572_ = lean_ctor_get(v_eq_x3f_2564_, 0);
lean_inc(v_val_2572_);
lean_dec_ref_known(v_eq_x3f_2564_, 1);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
lean_inc_ref(v___y_2533_);
lean_inc_ref(v___y_2532_);
lean_inc(v_ref_2556_);
v___x_2573_ = lean_apply_9(v___f_2529_, v_ref_2556_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc_n(v_a_2574_, 23);
lean_dec_ref_known(v___x_2573_, 1);
v___x_2575_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2528_, 5);
lean_inc_ref_n(v___x_2527_, 5);
lean_inc_ref_n(v___x_2526_, 5);
v___x_2576_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2575_);
v___x_2577_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2578_, 0, v_a_2574_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2574_);
lean_ctor_set(v___x_2579_, 1, v___x_2561_);
v___x_2580_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2580_, 0, v_a_2574_);
lean_ctor_set(v___x_2580_, 1, v___x_2563_);
lean_ctor_set(v___x_2580_, 2, v___x_2566_);
lean_ctor_set(v___x_2580_, 3, v___x_2567_);
v___x_2581_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2582_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2582_, 0, v_a_2574_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2574_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2586_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2585_);
v___x_2587_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2588_, 0, v_a_2574_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2590_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2589_);
v___x_2591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2591_, 0, v_a_2574_);
lean_ctor_set(v___x_2591_, 1, v___x_2589_);
v___x_2592_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2593_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2594_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2594_, 0, v_a_2574_);
lean_ctor_set(v___x_2594_, 1, v___x_2592_);
lean_ctor_set(v___x_2594_, 2, v___x_2593_);
v___x_2595_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2596_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2595_);
v___x_2597_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_2598_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2598_, 0, v_a_2574_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = l_Lean_Syntax_node2(v_a_2574_, v___x_2592_, v_val_2572_, v___x_2598_);
v___x_2600_ = l_Lean_Syntax_node2(v_a_2574_, v___x_2596_, v___x_2599_, v___x_2571_);
v___x_2601_ = l_Lean_Syntax_node1(v_a_2574_, v___x_2592_, v___x_2600_);
v___x_2602_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2603_, 0, v_a_2574_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2605_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2604_);
v___x_2606_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2607_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2606_);
v___x_2608_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2609_, 0, v_a_2574_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = l_Lean_Syntax_node1(v_a_2574_, v___x_2592_, v___x_2530_);
v___x_2611_ = l_Lean_Syntax_node1(v_a_2574_, v___x_2592_, v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2613_, 0, v_a_2574_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = l_Lean_Syntax_node4(v_a_2574_, v___x_2607_, v___x_2609_, v___x_2611_, v___x_2613_, v_body_2531_);
v___x_2615_ = l_Lean_Syntax_node1(v_a_2574_, v___x_2592_, v___x_2614_);
v___x_2616_ = l_Lean_Syntax_node1(v_a_2574_, v___x_2605_, v___x_2615_);
lean_inc_ref(v___x_2594_);
v___x_2617_ = l_Lean_Syntax_node6(v_a_2574_, v___x_2590_, v___x_2591_, v___x_2594_, v___x_2594_, v___x_2601_, v___x_2603_, v___x_2616_);
lean_inc_ref(v___x_2584_);
lean_inc_ref(v___x_2580_);
lean_inc_ref(v___x_2579_);
v___x_2618_ = l_Lean_Syntax_node5(v_a_2574_, v___x_2586_, v___x_2588_, v___x_2579_, v___x_2580_, v___x_2584_, v___x_2617_);
v___x_2619_ = l_Lean_Syntax_node7(v_a_2574_, v___x_2576_, v___x_2578_, v___x_2579_, v___x_2580_, v___x_2582_, v_rhs_2521_, v___x_2584_, v___x_2618_);
lean_inc(v_ref_2556_);
v_term_2541_ = v___x_2619_;
v___y_2542_ = v___y_2532_;
v___y_2543_ = v___y_2533_;
v___y_2544_ = v___y_2534_;
v___y_2545_ = v___y_2535_;
v___y_2546_ = v___y_2536_;
v___y_2547_ = v___y_2537_;
v_ref_2548_ = v_ref_2556_;
v___y_2549_ = v___y_2538_;
goto v___jp_2540_;
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec(v_val_2572_);
lean_dec(v___x_2571_);
lean_dec(v___x_2566_);
lean_dec(v_body_2531_);
lean_dec(v___x_2530_);
lean_dec_ref(v___x_2528_);
lean_dec_ref(v___x_2527_);
lean_dec_ref(v___x_2526_);
lean_dec_ref(v_a_2524_);
lean_dec(v_rhs_2521_);
v_a_2620_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2573_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2573_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v___x_2628_; 
lean_dec(v_eq_x3f_2564_);
lean_inc_ref(v_a_2524_);
v___x_2628_ = l_Lean_Elab_Term_exprToSyntax(v_a_2524_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
lean_inc_ref(v___y_2533_);
lean_inc_ref(v___y_2532_);
lean_inc(v_ref_2556_);
v___x_2630_ = lean_apply_9(v___f_2529_, v_ref_2556_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc_n(v_a_2631_, 32);
lean_dec_ref_known(v___x_2630_, 1);
v___x_2632_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2528_, 8);
lean_inc_ref_n(v___x_2527_, 8);
lean_inc_ref_n(v___x_2526_, 8);
v___x_2633_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2632_);
v___x_2634_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2635_, 0, v_a_2631_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2636_, 0, v_a_2631_);
lean_ctor_set(v___x_2636_, 1, v___x_2561_);
v___x_2637_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2637_, 0, v_a_2631_);
lean_ctor_set(v___x_2637_, 1, v___x_2563_);
lean_ctor_set(v___x_2637_, 2, v___x_2566_);
lean_ctor_set(v___x_2637_, 3, v___x_2567_);
v___x_2638_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2639_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2639_, 0, v_a_2631_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2641_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2641_, 0, v_a_2631_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2643_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2645_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_a_2631_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2647_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2648_, 0, v_a_2631_);
lean_ctor_set(v___x_2648_, 1, v___x_2646_);
v___x_2649_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2650_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2651_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2651_, 0, v_a_2631_);
lean_ctor_set(v___x_2651_, 1, v___x_2649_);
lean_ctor_set(v___x_2651_, 2, v___x_2650_);
v___x_2652_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17));
v___x_2653_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2652_);
v___x_2654_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_2655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2655_, 0, v_a_2631_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_a_2631_);
lean_ctor_set(v___x_2656_, 1, v___x_2652_);
v___x_2657_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18));
v___x_2658_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2657_);
v___x_2659_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19));
v___x_2660_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2660_, 0, v_a_2631_);
lean_ctor_set(v___x_2660_, 1, v___x_2659_);
v___x_2661_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20));
v___x_2662_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2661_);
v___x_2663_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_2664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2664_, 0, v_a_2631_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2662_, v___x_2664_);
v___x_2666_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2665_);
v___x_2667_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22));
v___x_2668_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2668_, 0, v_a_2631_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
lean_inc_ref_n(v___x_2651_, 2);
v___x_2669_ = l_Lean_Syntax_node5(v_a_2631_, v___x_2658_, v___x_2660_, v___x_2666_, v___x_2651_, v___x_2668_, v_a_2629_);
v___x_2670_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38));
v___x_2671_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2671_, 0, v_a_2631_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
lean_inc_ref(v___x_2639_);
v___x_2672_ = l_Lean_Syntax_node5(v_a_2631_, v___x_2653_, v___x_2655_, v___x_2656_, v___x_2639_, v___x_2669_, v___x_2671_);
v___x_2673_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2675_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2674_);
v___x_2676_ = l_Lean_Syntax_node2(v_a_2631_, v___x_2675_, v___x_2651_, v___x_2571_);
v___x_2677_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2676_);
v___x_2678_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2679_, 0, v_a_2631_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2681_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2683_ = l_Lean_Name_mkStr4(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2682_);
v___x_2684_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2685_, 0, v_a_2631_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2530_);
v___x_2687_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2686_);
v___x_2688_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2689_, 0, v_a_2631_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = l_Lean_Syntax_node4(v_a_2631_, v___x_2683_, v___x_2685_, v___x_2687_, v___x_2689_, v_body_2531_);
v___x_2691_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2649_, v___x_2690_);
v___x_2692_ = l_Lean_Syntax_node1(v_a_2631_, v___x_2681_, v___x_2691_);
v___x_2693_ = l_Lean_Syntax_node6(v_a_2631_, v___x_2647_, v___x_2648_, v___x_2651_, v___x_2673_, v___x_2677_, v___x_2679_, v___x_2692_);
lean_inc_ref(v___x_2641_);
lean_inc_ref(v___x_2637_);
lean_inc_ref(v___x_2636_);
v___x_2694_ = l_Lean_Syntax_node5(v_a_2631_, v___x_2643_, v___x_2645_, v___x_2636_, v___x_2637_, v___x_2641_, v___x_2693_);
v___x_2695_ = l_Lean_Syntax_node7(v_a_2631_, v___x_2633_, v___x_2635_, v___x_2636_, v___x_2637_, v___x_2639_, v_rhs_2521_, v___x_2641_, v___x_2694_);
lean_inc(v_ref_2556_);
v_term_2541_ = v___x_2695_;
v___y_2542_ = v___y_2532_;
v___y_2543_ = v___y_2533_;
v___y_2544_ = v___y_2534_;
v___y_2545_ = v___y_2535_;
v___y_2546_ = v___y_2536_;
v___y_2547_ = v___y_2537_;
v_ref_2548_ = v_ref_2556_;
v___y_2549_ = v___y_2538_;
goto v___jp_2540_;
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec(v_a_2629_);
lean_dec(v___x_2571_);
lean_dec(v___x_2566_);
lean_dec(v_body_2531_);
lean_dec(v___x_2530_);
lean_dec_ref(v___x_2528_);
lean_dec_ref(v___x_2527_);
lean_dec_ref(v___x_2526_);
lean_dec_ref(v_a_2524_);
lean_dec(v_rhs_2521_);
v_a_2696_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2630_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2630_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v___x_2571_);
lean_dec(v___x_2566_);
lean_dec(v_body_2531_);
lean_dec(v___x_2530_);
lean_dec_ref(v___f_2529_);
lean_dec_ref(v___x_2528_);
lean_dec_ref(v___x_2527_);
lean_dec_ref(v___x_2526_);
lean_dec_ref(v_a_2524_);
lean_dec(v_rhs_2521_);
v_a_2704_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2628_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2628_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
v___jp_2540_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___f_2553_; lean_object* v___x_2554_; 
v___x_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_a_2524_);
v___x_2551_ = lean_box(0);
v___x_2552_ = lean_box(v___x_2525_);
lean_inc(v_term_2541_);
v___f_2553_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed), 12, 4);
lean_closure_set(v___f_2553_, 0, v_term_2541_);
lean_closure_set(v___f_2553_, 1, v___x_2550_);
lean_closure_set(v___f_2553_, 2, v___x_2552_);
lean_closure_set(v___f_2553_, 3, v___x_2551_);
v___x_2554_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_ref_2548_, v_term_2541_, v___f_2553_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2549_);
return v___x_2554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object** _args){
lean_object* v_rhs_2712_ = _args[0];
lean_object* v___x_2713_ = _args[1];
lean_object* v_config_2714_ = _args[2];
lean_object* v_a_2715_ = _args[3];
lean_object* v___x_2716_ = _args[4];
lean_object* v___x_2717_ = _args[5];
lean_object* v___x_2718_ = _args[6];
lean_object* v___x_2719_ = _args[7];
lean_object* v___f_2720_ = _args[8];
lean_object* v___x_2721_ = _args[9];
lean_object* v_body_2722_ = _args[10];
lean_object* v___y_2723_ = _args[11];
lean_object* v___y_2724_ = _args[12];
lean_object* v___y_2725_ = _args[13];
lean_object* v___y_2726_ = _args[14];
lean_object* v___y_2727_ = _args[15];
lean_object* v___y_2728_ = _args[16];
lean_object* v___y_2729_ = _args[17];
lean_object* v___y_2730_ = _args[18];
_start:
{
uint8_t v___x_89759__boxed_2731_; uint8_t v___x_89761__boxed_2732_; lean_object* v_res_2733_; 
v___x_89759__boxed_2731_ = lean_unbox(v___x_2713_);
v___x_89761__boxed_2732_ = lean_unbox(v___x_2716_);
v_res_2733_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(v_rhs_2712_, v___x_89759__boxed_2731_, v_config_2714_, v_a_2715_, v___x_89761__boxed_2732_, v___x_2717_, v___x_2718_, v___x_2719_, v___f_2720_, v___x_2721_, v_body_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2728_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec_ref(v___y_2723_);
return v_res_2733_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2734_; double v___x_2735_; 
v___x_2734_ = lean_unsigned_to_nat(0u);
v___x_2735_ = lean_float_of_nat(v___x_2734_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object* v_cls_2738_, lean_object* v_msg_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v_ref_2745_; lean_object* v___x_2746_; lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2791_; 
v_ref_2745_ = lean_ctor_get(v___y_2742_, 2);
v___x_2746_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2791_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2791_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2751_; lean_object* v_traceState_2752_; lean_object* v_env_2753_; lean_object* v_nextMacroScope_2754_; lean_object* v_ngen_2755_; lean_object* v_auxDeclNGen_2756_; lean_object* v_cache_2757_; lean_object* v_messages_2758_; lean_object* v_infoState_2759_; lean_object* v_snapshotTasks_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2790_; 
v___x_2751_ = lean_st_ref_take(v___y_2743_);
v_traceState_2752_ = lean_ctor_get(v___x_2751_, 4);
v_env_2753_ = lean_ctor_get(v___x_2751_, 0);
v_nextMacroScope_2754_ = lean_ctor_get(v___x_2751_, 1);
v_ngen_2755_ = lean_ctor_get(v___x_2751_, 2);
v_auxDeclNGen_2756_ = lean_ctor_get(v___x_2751_, 3);
v_cache_2757_ = lean_ctor_get(v___x_2751_, 5);
v_messages_2758_ = lean_ctor_get(v___x_2751_, 6);
v_infoState_2759_ = lean_ctor_get(v___x_2751_, 7);
v_snapshotTasks_2760_ = lean_ctor_get(v___x_2751_, 8);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2762_ = v___x_2751_;
v_isShared_2763_ = v_isSharedCheck_2790_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_snapshotTasks_2760_);
lean_inc(v_infoState_2759_);
lean_inc(v_messages_2758_);
lean_inc(v_cache_2757_);
lean_inc(v_traceState_2752_);
lean_inc(v_auxDeclNGen_2756_);
lean_inc(v_ngen_2755_);
lean_inc(v_nextMacroScope_2754_);
lean_inc(v_env_2753_);
lean_dec(v___x_2751_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2790_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
uint64_t v_tid_2764_; lean_object* v_traces_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2789_; 
v_tid_2764_ = lean_ctor_get_uint64(v_traceState_2752_, sizeof(void*)*1);
v_traces_2765_ = lean_ctor_get(v_traceState_2752_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_traceState_2752_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2767_ = v_traceState_2752_;
v_isShared_2768_ = v_isSharedCheck_2789_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_traces_2765_);
lean_dec(v_traceState_2752_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2789_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; double v___x_2771_; uint8_t v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2780_; 
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_box(0);
v___x_2771_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0);
v___x_2772_ = 0;
v___x_2773_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_2774_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2774_, 0, v_cls_2738_);
lean_ctor_set(v___x_2774_, 1, v___x_2770_);
lean_ctor_set(v___x_2774_, 2, v___x_2773_);
lean_ctor_set_float(v___x_2774_, sizeof(void*)*3, v___x_2771_);
lean_ctor_set_float(v___x_2774_, sizeof(void*)*3 + 8, v___x_2771_);
lean_ctor_set_uint8(v___x_2774_, sizeof(void*)*3 + 16, v___x_2772_);
v___x_2775_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1));
v___x_2776_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2774_);
lean_ctor_set(v___x_2776_, 1, v_a_2747_);
lean_ctor_set(v___x_2776_, 2, v___x_2775_);
lean_inc(v_ref_2745_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v_ref_2745_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = l_Lean_PersistentArray_push___redArg(v_traces_2765_, v___x_2777_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 0, v___x_2778_);
v___x_2780_ = v___x_2767_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2778_);
lean_ctor_set_uint64(v_reuseFailAlloc_2788_, sizeof(void*)*1, v_tid_2764_);
v___x_2780_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
lean_object* v___x_2782_; 
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 4, v___x_2780_);
v___x_2782_ = v___x_2762_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_env_2753_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v_nextMacroScope_2754_);
lean_ctor_set(v_reuseFailAlloc_2787_, 2, v_ngen_2755_);
lean_ctor_set(v_reuseFailAlloc_2787_, 3, v_auxDeclNGen_2756_);
lean_ctor_set(v_reuseFailAlloc_2787_, 4, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2787_, 5, v_cache_2757_);
lean_ctor_set(v_reuseFailAlloc_2787_, 6, v_messages_2758_);
lean_ctor_set(v_reuseFailAlloc_2787_, 7, v_infoState_2759_);
lean_ctor_set(v_reuseFailAlloc_2787_, 8, v_snapshotTasks_2760_);
v___x_2782_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = lean_st_ref_put(v___y_2743_, v___x_2782_);
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v___x_2769_);
v___x_2785_ = v___x_2749_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v___x_2769_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object* v_cls_2792_, lean_object* v_msg_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_2792_, v_msg_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object* v_env_2800_, lean_object* v_options_2801_, lean_object* v_currNamespace_2802_, lean_object* v_openDecls_2803_, lean_object* v_n_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = l_Lean_ResolveName_resolveGlobalName(v_env_2800_, v_options_2801_, v_currNamespace_2802_, v_openDecls_2803_, v_n_2804_);
v___x_2808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
lean_ctor_set(v___x_2808_, 1, v___y_2806_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object* v_env_2809_, lean_object* v_options_2810_, lean_object* v_currNamespace_2811_, lean_object* v_openDecls_2812_, lean_object* v_n_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(v_env_2809_, v_options_2810_, v_currNamespace_2811_, v_openDecls_2812_, v_n_2813_, v___y_2814_, v___y_2815_);
lean_dec_ref(v___y_2814_);
lean_dec_ref(v_options_2810_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object* v_env_2817_, lean_object* v_currNamespace_2818_, lean_object* v_openDecls_2819_, lean_object* v_n_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = l_Lean_ResolveName_resolveNamespace(v_env_2817_, v_currNamespace_2818_, v_openDecls_2819_, v_n_2820_);
v___x_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
lean_ctor_set(v___x_2824_, 1, v___y_2822_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object* v_env_2825_, lean_object* v_currNamespace_2826_, lean_object* v_openDecls_2827_, lean_object* v_n_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(v_env_2825_, v_currNamespace_2826_, v_openDecls_2827_, v_n_2828_, v___y_2829_, v___y_2830_);
lean_dec_ref(v___y_2829_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(lean_object* v_x_2832_, lean_object* v___y_2833_){
_start:
{
if (lean_obj_tag(v_x_2832_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2835_; 
v_a_2834_ = lean_ctor_get(v_x_2832_, 0);
lean_inc(v_a_2834_);
v___x_2835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2835_, 0, v_a_2834_);
lean_ctor_set(v___x_2835_, 1, v___y_2833_);
return v___x_2835_;
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2837_; 
v_a_2836_ = lean_ctor_get(v_x_2832_, 0);
lean_inc(v_a_2836_);
v___x_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2837_, 0, v_a_2836_);
lean_ctor_set(v___x_2837_, 1, v___y_2833_);
return v___x_2837_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg___boxed(lean_object* v_x_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v_x_2838_, v___y_2839_);
lean_dec_ref(v_x_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object* v_env_2841_, lean_object* v_stx_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_){
_start:
{
lean_object* v___x_2845_; 
v___x_2845_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2841_, v_stx_2842_, v___y_2843_, v___y_2844_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
if (lean_obj_tag(v_a_2846_) == 0)
{
lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2855_; 
v_a_2847_ = lean_ctor_get(v___x_2845_, 1);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; 
v_unused_2856_ = lean_ctor_get(v___x_2845_, 0);
lean_dec(v_unused_2856_);
v___x_2849_ = v___x_2845_;
v_isShared_2850_ = v_isSharedCheck_2855_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_dec(v___x_2845_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2855_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2851_; lean_object* v___x_2853_; 
v___x_2851_ = lean_box(0);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 0, v___x_2851_);
v___x_2853_ = v___x_2849_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_a_2847_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
else
{
lean_object* v_val_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2885_; 
v_val_2857_ = lean_ctor_get(v_a_2846_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_a_2846_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2859_ = v_a_2846_;
v_isShared_2860_ = v_isSharedCheck_2885_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_val_2857_);
lean_dec(v_a_2846_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2885_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v_snd_2861_; 
v_snd_2861_ = lean_ctor_get(v_val_2857_, 1);
lean_inc(v_snd_2861_);
lean_dec(v_val_2857_);
if (lean_obj_tag(v_snd_2861_) == 0)
{
lean_object* v_a_2862_; lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2871_; 
lean_del_object(v___x_2859_);
v_a_2862_ = lean_ctor_get(v___x_2845_, 1);
lean_inc(v_a_2862_);
lean_dec_ref_known(v___x_2845_, 2);
v_a_2863_ = lean_ctor_get(v_snd_2861_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_snd_2861_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2865_ = v_snd_2861_;
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v_snd_2861_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; 
v___x_2869_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v___x_2868_, v_a_2862_);
lean_dec_ref(v___x_2868_);
return v___x_2869_;
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2884_; 
v_a_2872_ = lean_ctor_get(v___x_2845_, 1);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2845_, 2);
v_a_2873_ = lean_ctor_get(v_snd_2861_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_snd_2861_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2875_ = v_snd_2861_;
v_isShared_2876_ = v_isSharedCheck_2884_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v_snd_2861_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2884_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 0, v_a_2873_);
v___x_2878_ = v___x_2859_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2880_; 
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 0, v___x_2878_);
v___x_2880_ = v___x_2875_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v___x_2880_, v_a_2872_);
lean_dec_ref(v___x_2880_);
return v___x_2881_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
v_a_2886_ = lean_ctor_get(v___x_2845_, 0);
v_a_2887_ = lean_ctor_get(v___x_2845_, 1);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2845_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_inc(v_a_2886_);
lean_dec(v___x_2845_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2886_);
lean_ctor_set(v_reuseFailAlloc_2893_, 1, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object* v_env_2895_, lean_object* v_stx_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(v_env_2895_, v_stx_2896_, v___y_2897_, v___y_2898_);
lean_dec_ref(v___y_2897_);
return v_res_2899_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = l_Lean_maxRecDepthErrorMessage;
v___x_2906_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4(void){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3);
v___x_2908_ = l_Lean_MessageData_ofFormat(v___x_2907_);
return v___x_2908_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2909_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4);
v___x_2910_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2));
v___x_2911_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
lean_ctor_set(v___x_2911_, 1, v___x_2909_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(lean_object* v_ref_2912_){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2914_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v_ref_2912_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___boxed(lean_object* v_ref_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_ref_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(lean_object* v_keys_2920_, lean_object* v_i_2921_, lean_object* v_k_2922_){
_start:
{
lean_object* v___x_2923_; uint8_t v___x_2924_; 
v___x_2923_ = lean_array_get_size(v_keys_2920_);
v___x_2924_ = lean_nat_dec_lt(v_i_2921_, v___x_2923_);
if (v___x_2924_ == 0)
{
lean_dec(v_i_2921_);
return v___x_2924_;
}
else
{
lean_object* v_k_x27_2925_; uint8_t v___x_2926_; 
v_k_x27_2925_ = lean_array_fget_borrowed(v_keys_2920_, v_i_2921_);
v___x_2926_ = l_Lean_instBEqExtraModUse_beq(v_k_2922_, v_k_x27_2925_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = lean_unsigned_to_nat(1u);
v___x_2928_ = lean_nat_add(v_i_2921_, v___x_2927_);
lean_dec(v_i_2921_);
v_i_2921_ = v___x_2928_;
goto _start;
}
else
{
lean_dec(v_i_2921_);
return v___x_2924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg___boxed(lean_object* v_keys_2930_, lean_object* v_i_2931_, lean_object* v_k_2932_){
_start:
{
uint8_t v_res_2933_; lean_object* v_r_2934_; 
v_res_2933_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_keys_2930_, v_i_2931_, v_k_2932_);
lean_dec_ref(v_k_2932_);
lean_dec_ref(v_keys_2930_);
v_r_2934_ = lean_box(v_res_2933_);
return v_r_2934_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(lean_object* v_x_2935_, size_t v_x_2936_, lean_object* v_x_2937_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 0)
{
lean_object* v_es_2938_; lean_object* v___x_2939_; size_t v___x_2940_; size_t v___x_2941_; lean_object* v_j_2942_; lean_object* v___x_2943_; 
v_es_2938_ = lean_ctor_get(v_x_2935_, 0);
v___x_2939_ = lean_box(2);
v___x_2940_ = ((size_t)31ULL);
v___x_2941_ = lean_usize_land(v_x_2936_, v___x_2940_);
v_j_2942_ = lean_usize_to_nat(v___x_2941_);
v___x_2943_ = lean_array_get_borrowed(v___x_2939_, v_es_2938_, v_j_2942_);
lean_dec(v_j_2942_);
switch(lean_obj_tag(v___x_2943_))
{
case 0:
{
lean_object* v_key_2944_; uint8_t v___x_2945_; 
v_key_2944_ = lean_ctor_get(v___x_2943_, 0);
v___x_2945_ = l_Lean_instBEqExtraModUse_beq(v_x_2937_, v_key_2944_);
return v___x_2945_;
}
case 1:
{
lean_object* v_node_2946_; size_t v___x_2947_; size_t v___x_2948_; 
v_node_2946_ = lean_ctor_get(v___x_2943_, 0);
v___x_2947_ = ((size_t)5ULL);
v___x_2948_ = lean_usize_shift_right(v_x_2936_, v___x_2947_);
v_x_2935_ = v_node_2946_;
v_x_2936_ = v___x_2948_;
goto _start;
}
default: 
{
uint8_t v___x_2950_; 
v___x_2950_ = 0;
return v___x_2950_;
}
}
}
else
{
lean_object* v_ks_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v_ks_2951_ = lean_ctor_get(v_x_2935_, 0);
v___x_2952_ = lean_unsigned_to_nat(0u);
v___x_2953_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_ks_2951_, v___x_2952_, v_x_2937_);
return v___x_2953_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_x_2954_, lean_object* v_x_2955_, lean_object* v_x_2956_){
_start:
{
size_t v_x_90457__boxed_2957_; uint8_t v_res_2958_; lean_object* v_r_2959_; 
v_x_90457__boxed_2957_ = lean_unbox_usize(v_x_2955_);
lean_dec(v_x_2955_);
v_res_2958_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_2954_, v_x_90457__boxed_2957_, v_x_2956_);
lean_dec_ref(v_x_2956_);
lean_dec_ref(v_x_2954_);
v_r_2959_ = lean_box(v_res_2958_);
return v_r_2959_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(lean_object* v_x_2960_, lean_object* v_x_2961_){
_start:
{
uint64_t v___x_2962_; size_t v___x_2963_; uint8_t v___x_2964_; 
v___x_2962_ = l_Lean_instHashableExtraModUse_hash(v_x_2961_);
v___x_2963_ = lean_uint64_to_usize(v___x_2962_);
v___x_2964_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_2960_, v___x_2963_, v_x_2961_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg___boxed(lean_object* v_x_2965_, lean_object* v_x_2966_){
_start:
{
uint8_t v_res_2967_; lean_object* v_r_2968_; 
v_res_2967_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v_x_2965_, v_x_2966_);
lean_dec_ref(v_x_2966_);
lean_dec_ref(v_x_2965_);
v_r_2968_ = lean_box(v_res_2967_);
return v_r_2968_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0(void){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2969_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2970_; 
v___x_2970_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2970_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2(void){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1);
v___x_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
return v___x_2972_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3(void){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
return v___x_2974_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4(void){
_start:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2);
v___x_2976_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
lean_ctor_set(v___x_2976_, 1, v___x_2975_);
lean_ctor_set(v___x_2976_, 2, v___x_2975_);
lean_ctor_set(v___x_2976_, 3, v___x_2975_);
lean_ctor_set(v___x_2976_, 4, v___x_2975_);
lean_ctor_set(v___x_2976_, 5, v___x_2975_);
return v___x_2976_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8(void){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7));
v___x_2982_ = l_Lean_stringToMessageData(v___x_2981_);
return v___x_2982_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10(void){
_start:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9));
v___x_2985_ = l_Lean_stringToMessageData(v___x_2984_);
return v___x_2985_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11(void){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_2987_ = l_Lean_stringToMessageData(v___x_2986_);
return v___x_2987_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14(void){
_start:
{
lean_object* v_cls_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v_cls_2991_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6));
v___x_2992_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_2993_ = l_Lean_Name_append(v___x_2992_, v_cls_2991_);
return v___x_2993_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16(void){
_start:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2995_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15));
v___x_2996_ = l_Lean_stringToMessageData(v___x_2995_);
return v___x_2996_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18(void){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17));
v___x_2999_ = l_Lean_stringToMessageData(v___x_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(lean_object* v_mod_3004_, uint8_t v_isMeta_3005_, lean_object* v_hint_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v_env_3017_; uint8_t v_isExporting_3018_; lean_object* v_entry_3019_; lean_object* v___x_3020_; lean_object* v_env_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___x_3067_; uint8_t v___x_3068_; 
v___x_3015_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0);
v___x_3016_ = lean_st_ref_get(v___y_3013_);
v_env_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc_ref(v_env_3017_);
lean_dec(v___x_3016_);
v_isExporting_3018_ = lean_ctor_get_uint8(v_env_3017_, sizeof(void*)*8);
lean_dec_ref(v_env_3017_);
lean_inc(v_mod_3004_);
v_entry_3019_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3019_, 0, v_mod_3004_);
lean_ctor_set_uint8(v_entry_3019_, sizeof(void*)*1, v_isExporting_3018_);
lean_ctor_set_uint8(v_entry_3019_, sizeof(void*)*1 + 1, v_isMeta_3005_);
v___x_3020_ = lean_st_ref_get(v___y_3013_);
v_env_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc_ref(v_env_3021_);
lean_dec(v___x_3020_);
v___x_3022_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3023_ = lean_box(1);
v___x_3024_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_3067_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3015_, v___x_3022_, v_env_3021_, v___x_3023_, v___x_3024_);
v___x_3068_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v___x_3067_, v_entry_3019_);
lean_dec(v___x_3067_);
if (v___x_3068_ == 0)
{
lean_object* v_toCold_3069_; lean_object* v_options_3070_; uint8_t v_hasTrace_3071_; 
v_toCold_3069_ = lean_ctor_get(v___y_3012_, 0);
v_options_3070_ = lean_ctor_get(v_toCold_3069_, 2);
v_hasTrace_3071_ = lean_ctor_get_uint8(v_options_3070_, sizeof(void*)*1);
if (v_hasTrace_3071_ == 0)
{
lean_dec(v_hint_3006_);
lean_dec(v_mod_3004_);
v___y_3026_ = v___y_3011_;
v___y_3027_ = v___y_3013_;
goto v___jp_3025_;
}
else
{
lean_object* v_inheritedTraceOptions_3072_; lean_object* v_cls_3073_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v_inheritedTraceOptions_3072_ = lean_ctor_get(v_toCold_3069_, 11);
v_cls_3073_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6));
v___x_3093_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14);
v___x_3094_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3072_, v_options_3070_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_dec(v_hint_3006_);
lean_dec(v_mod_3004_);
v___y_3026_ = v___y_3011_;
v___y_3027_ = v___y_3013_;
goto v___jp_3025_;
}
else
{
lean_object* v___x_3095_; lean_object* v___y_3097_; 
v___x_3095_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16);
if (v_isExporting_3018_ == 0)
{
lean_object* v___x_3104_; 
v___x_3104_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21));
v___y_3097_ = v___x_3104_;
goto v___jp_3096_;
}
else
{
lean_object* v___x_3105_; 
v___x_3105_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22));
v___y_3097_ = v___x_3105_;
goto v___jp_3096_;
}
v___jp_3096_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
lean_inc_ref(v___y_3097_);
v___x_3098_ = l_Lean_stringToMessageData(v___y_3097_);
v___x_3099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3095_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
v___x_3100_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18);
v___x_3101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
if (v_isMeta_3005_ == 0)
{
lean_object* v___x_3102_; 
v___x_3102_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19));
v___y_3080_ = v___x_3101_;
v___y_3081_ = v___x_3102_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3103_; 
v___x_3103_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20));
v___y_3080_ = v___x_3101_;
v___y_3081_ = v___x_3103_;
goto v___jp_3079_;
}
}
}
v___jp_3074_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___y_3075_);
lean_ctor_set(v___x_3077_, 1, v___y_3076_);
v___x_3078_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_3073_, v___x_3077_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_dec_ref_known(v___x_3078_, 1);
v___y_3026_ = v___y_3011_;
v___y_3027_ = v___y_3013_;
goto v___jp_3025_;
}
else
{
lean_dec_ref_known(v_entry_3019_, 1);
return v___x_3078_;
}
}
v___jp_3079_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; 
lean_inc_ref(v___y_3081_);
v___x_3082_ = l_Lean_stringToMessageData(v___y_3081_);
v___x_3083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___y_3080_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8);
v___x_3085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3083_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = l_Lean_MessageData_ofName(v_mod_3004_);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3085_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = l_Lean_Name_isAnonymous(v_hint_3006_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3089_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10);
v___x_3090_ = l_Lean_MessageData_ofName(v_hint_3006_);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___y_3075_ = v___x_3087_;
v___y_3076_ = v___x_3091_;
goto v___jp_3074_;
}
else
{
lean_object* v___x_3092_; 
lean_dec(v_hint_3006_);
v___x_3092_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11);
v___y_3075_ = v___x_3087_;
v___y_3076_ = v___x_3092_;
goto v___jp_3074_;
}
}
}
}
else
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_dec_ref_known(v_entry_3019_, 1);
lean_dec(v_hint_3006_);
lean_dec(v_mod_3004_);
v___x_3106_ = lean_box(0);
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
return v___x_3107_;
}
v___jp_3025_:
{
lean_object* v___x_3028_; lean_object* v_toEnvExtension_3029_; lean_object* v_env_3030_; lean_object* v_nextMacroScope_3031_; lean_object* v_ngen_3032_; lean_object* v_auxDeclNGen_3033_; lean_object* v_traceState_3034_; lean_object* v_messages_3035_; lean_object* v_infoState_3036_; lean_object* v_snapshotTasks_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3065_; 
v___x_3028_ = lean_st_ref_take(v___y_3027_);
v_toEnvExtension_3029_ = lean_ctor_get(v___x_3022_, 0);
v_env_3030_ = lean_ctor_get(v___x_3028_, 0);
v_nextMacroScope_3031_ = lean_ctor_get(v___x_3028_, 1);
v_ngen_3032_ = lean_ctor_get(v___x_3028_, 2);
v_auxDeclNGen_3033_ = lean_ctor_get(v___x_3028_, 3);
v_traceState_3034_ = lean_ctor_get(v___x_3028_, 4);
v_messages_3035_ = lean_ctor_get(v___x_3028_, 6);
v_infoState_3036_ = lean_ctor_get(v___x_3028_, 7);
v_snapshotTasks_3037_ = lean_ctor_get(v___x_3028_, 8);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3065_ == 0)
{
lean_object* v_unused_3066_; 
v_unused_3066_ = lean_ctor_get(v___x_3028_, 5);
lean_dec(v_unused_3066_);
v___x_3039_ = v___x_3028_;
v_isShared_3040_ = v_isSharedCheck_3065_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_snapshotTasks_3037_);
lean_inc(v_infoState_3036_);
lean_inc(v_messages_3035_);
lean_inc(v_traceState_3034_);
lean_inc(v_auxDeclNGen_3033_);
lean_inc(v_ngen_3032_);
lean_inc(v_nextMacroScope_3031_);
lean_inc(v_env_3030_);
lean_dec(v___x_3028_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3065_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v_asyncMode_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
v_asyncMode_3041_ = lean_ctor_get(v_toEnvExtension_3029_, 2);
v___x_3042_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3022_, v_env_3030_, v_entry_3019_, v_asyncMode_3041_, v___x_3024_);
v___x_3043_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 5, v___x_3043_);
lean_ctor_set(v___x_3039_, 0, v___x_3042_);
v___x_3045_ = v___x_3039_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3042_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_nextMacroScope_3031_);
lean_ctor_set(v_reuseFailAlloc_3064_, 2, v_ngen_3032_);
lean_ctor_set(v_reuseFailAlloc_3064_, 3, v_auxDeclNGen_3033_);
lean_ctor_set(v_reuseFailAlloc_3064_, 4, v_traceState_3034_);
lean_ctor_set(v_reuseFailAlloc_3064_, 5, v___x_3043_);
lean_ctor_set(v_reuseFailAlloc_3064_, 6, v_messages_3035_);
lean_ctor_set(v_reuseFailAlloc_3064_, 7, v_infoState_3036_);
lean_ctor_set(v_reuseFailAlloc_3064_, 8, v_snapshotTasks_3037_);
v___x_3045_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v_mctx_3048_; lean_object* v_zetaDeltaFVarIds_3049_; lean_object* v_postponed_3050_; lean_object* v_diag_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3062_; 
v___x_3046_ = lean_st_ref_put(v___y_3027_, v___x_3045_);
v___x_3047_ = lean_st_ref_take(v___y_3026_);
v_mctx_3048_ = lean_ctor_get(v___x_3047_, 0);
v_zetaDeltaFVarIds_3049_ = lean_ctor_get(v___x_3047_, 2);
v_postponed_3050_ = lean_ctor_get(v___x_3047_, 3);
v_diag_3051_ = lean_ctor_get(v___x_3047_, 4);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3062_ == 0)
{
lean_object* v_unused_3063_; 
v_unused_3063_ = lean_ctor_get(v___x_3047_, 1);
lean_dec(v_unused_3063_);
v___x_3053_ = v___x_3047_;
v_isShared_3054_ = v_isSharedCheck_3062_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_diag_3051_);
lean_inc(v_postponed_3050_);
lean_inc(v_zetaDeltaFVarIds_3049_);
lean_inc(v_mctx_3048_);
lean_dec(v___x_3047_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3062_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3055_ = lean_box(0);
v___x_3056_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4);
if (v_isShared_3054_ == 0)
{
lean_ctor_set(v___x_3053_, 1, v___x_3056_);
v___x_3058_ = v___x_3053_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_mctx_3048_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3061_, 2, v_zetaDeltaFVarIds_3049_);
lean_ctor_set(v_reuseFailAlloc_3061_, 3, v_postponed_3050_);
lean_ctor_set(v_reuseFailAlloc_3061_, 4, v_diag_3051_);
v___x_3058_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_st_ref_put(v___y_3026_, v___x_3058_);
v___x_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3055_);
return v___x_3060_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___boxed(lean_object* v_mod_3108_, lean_object* v_isMeta_3109_, lean_object* v_hint_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
uint8_t v_isMeta_boxed_3119_; lean_object* v_res_3120_; 
v_isMeta_boxed_3119_ = lean_unbox(v_isMeta_3109_);
v_res_3120_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_mod_3108_, v_isMeta_boxed_3119_, v_hint_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec_ref(v___y_3111_);
return v_res_3120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(lean_object* v___x_3121_, lean_object* v_declName_3122_, lean_object* v_as_3123_, size_t v_sz_3124_, size_t v_i_3125_, lean_object* v_b_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
uint8_t v___x_3135_; 
v___x_3135_ = lean_usize_dec_lt(v_i_3125_, v_sz_3124_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; 
lean_dec(v_declName_3122_);
v___x_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3136_, 0, v_b_3126_);
return v___x_3136_;
}
else
{
lean_object* v___x_3137_; lean_object* v_modules_3138_; lean_object* v___x_3139_; lean_object* v_a_3140_; lean_object* v___x_3141_; lean_object* v_toImport_3142_; lean_object* v_module_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; 
v___x_3137_ = l_Lean_Environment_header(v___x_3121_);
v_modules_3138_ = lean_ctor_get(v___x_3137_, 3);
lean_inc_ref(v_modules_3138_);
lean_dec_ref(v___x_3137_);
v___x_3139_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3140_ = lean_array_uget_borrowed(v_as_3123_, v_i_3125_);
v___x_3141_ = lean_array_get(v___x_3139_, v_modules_3138_, v_a_3140_);
lean_dec_ref(v_modules_3138_);
v_toImport_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc_ref(v_toImport_3142_);
lean_dec(v___x_3141_);
v_module_3143_ = lean_ctor_get(v_toImport_3142_, 0);
lean_inc(v_module_3143_);
lean_dec_ref(v_toImport_3142_);
v___x_3144_ = lean_box(0);
v___x_3145_ = 0;
lean_inc(v_declName_3122_);
v___x_3146_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_module_3143_, v___x_3145_, v_declName_3122_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
if (lean_obj_tag(v___x_3146_) == 0)
{
size_t v___x_3147_; size_t v___x_3148_; 
lean_dec_ref_known(v___x_3146_, 1);
v___x_3147_ = ((size_t)1ULL);
v___x_3148_ = lean_usize_add(v_i_3125_, v___x_3147_);
v_i_3125_ = v___x_3148_;
v_b_3126_ = v___x_3144_;
goto _start;
}
else
{
lean_dec(v_declName_3122_);
return v___x_3146_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17___boxed(lean_object* v___x_3150_, lean_object* v_declName_3151_, lean_object* v_as_3152_, lean_object* v_sz_3153_, lean_object* v_i_3154_, lean_object* v_b_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
size_t v_sz_boxed_3164_; size_t v_i_boxed_3165_; lean_object* v_res_3166_; 
v_sz_boxed_3164_ = lean_unbox_usize(v_sz_3153_);
lean_dec(v_sz_3153_);
v_i_boxed_3165_ = lean_unbox_usize(v_i_3154_);
lean_dec(v_i_3154_);
v_res_3166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(v___x_3150_, v_declName_3151_, v_as_3152_, v_sz_boxed_3164_, v_i_boxed_3165_, v_b_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v_as_3152_);
lean_dec_ref(v___x_3150_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg(lean_object* v_a_3167_, lean_object* v_x_3168_){
_start:
{
if (lean_obj_tag(v_x_3168_) == 0)
{
lean_object* v___x_3169_; 
v___x_3169_ = lean_box(0);
return v___x_3169_;
}
else
{
lean_object* v_key_3170_; lean_object* v_value_3171_; lean_object* v_tail_3172_; uint8_t v___x_3173_; 
v_key_3170_ = lean_ctor_get(v_x_3168_, 0);
v_value_3171_ = lean_ctor_get(v_x_3168_, 1);
v_tail_3172_ = lean_ctor_get(v_x_3168_, 2);
v___x_3173_ = lean_name_eq(v_key_3170_, v_a_3167_);
if (v___x_3173_ == 0)
{
v_x_3168_ = v_tail_3172_;
goto _start;
}
else
{
lean_object* v___x_3175_; 
lean_inc(v_value_3171_);
v___x_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3175_, 0, v_value_3171_);
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg___boxed(lean_object* v_a_3176_, lean_object* v_x_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg(v_a_3176_, v_x_3177_);
lean_dec(v_x_3177_);
lean_dec(v_a_3176_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(lean_object* v_m_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_buckets_3181_; lean_object* v___x_3182_; uint64_t v___y_3184_; lean_object* v___x_3198_; 
v_buckets_3181_ = lean_ctor_get(v_m_3179_, 1);
v___x_3182_ = lean_array_get_size(v_buckets_3181_);
v___x_3198_ = l_unsafeCast___redArg(v_a_3180_);
if (lean_obj_tag(v___x_3198_) == 0)
{
uint64_t v___x_3199_; 
v___x_3199_ = 1723ULL;
v___y_3184_ = v___x_3199_;
goto v___jp_3183_;
}
else
{
uint64_t v_hash_3200_; 
v_hash_3200_ = lean_ctor_get_uint64(v___x_3198_, sizeof(void*)*2);
lean_dec(v___x_3198_);
v___y_3184_ = v_hash_3200_;
goto v___jp_3183_;
}
v___jp_3183_:
{
uint64_t v___x_3185_; uint64_t v___x_3186_; uint64_t v_fold_3187_; uint64_t v___x_3188_; uint64_t v___x_3189_; uint64_t v___x_3190_; size_t v___x_3191_; size_t v___x_3192_; size_t v___x_3193_; size_t v___x_3194_; size_t v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3185_ = 32ULL;
v___x_3186_ = lean_uint64_shift_right(v___y_3184_, v___x_3185_);
v_fold_3187_ = lean_uint64_xor(v___y_3184_, v___x_3186_);
v___x_3188_ = 16ULL;
v___x_3189_ = lean_uint64_shift_right(v_fold_3187_, v___x_3188_);
v___x_3190_ = lean_uint64_xor(v_fold_3187_, v___x_3189_);
v___x_3191_ = lean_uint64_to_usize(v___x_3190_);
v___x_3192_ = lean_usize_of_nat(v___x_3182_);
v___x_3193_ = ((size_t)1ULL);
v___x_3194_ = lean_usize_sub(v___x_3192_, v___x_3193_);
v___x_3195_ = lean_usize_land(v___x_3191_, v___x_3194_);
v___x_3196_ = lean_array_uget_borrowed(v_buckets_3181_, v___x_3195_);
v___x_3197_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg(v_a_3180_, v___x_3196_);
return v___x_3197_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg___boxed(lean_object* v_m_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v_m_3201_, v_a_3202_);
lean_dec(v_a_3202_);
lean_dec_ref(v_m_3201_);
return v_res_3203_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0(void){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object* v_declName_3207_, uint8_t v_isMeta_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v_env_3222_; lean_object* v___y_3224_; lean_object* v___x_3237_; 
v___x_3217_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0);
v___x_3218_ = lean_st_ref_get(v___y_3215_);
v_env_3222_ = lean_ctor_get(v___x_3218_, 0);
lean_inc_ref(v_env_3222_);
lean_dec(v___x_3218_);
v___x_3237_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3222_, v_declName_3207_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_dec_ref(v_env_3222_);
lean_dec(v_declName_3207_);
goto v___jp_3219_;
}
else
{
lean_object* v_val_3238_; lean_object* v___x_3239_; lean_object* v_modules_3240_; lean_object* v___x_3241_; uint8_t v___x_3242_; 
v_val_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_val_3238_);
lean_dec_ref_known(v___x_3237_, 1);
v___x_3239_ = l_Lean_Environment_header(v_env_3222_);
v_modules_3240_ = lean_ctor_get(v___x_3239_, 3);
lean_inc_ref(v_modules_3240_);
lean_dec_ref(v___x_3239_);
v___x_3241_ = lean_array_get_size(v_modules_3240_);
v___x_3242_ = lean_nat_dec_lt(v_val_3238_, v___x_3241_);
if (v___x_3242_ == 0)
{
lean_dec_ref(v_modules_3240_);
lean_dec(v_val_3238_);
lean_dec_ref(v_env_3222_);
lean_dec(v_declName_3207_);
goto v___jp_3219_;
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3244_; uint8_t v___y_3246_; 
v___x_3243_ = lean_array_fget(v_modules_3240_, v_val_3238_);
lean_dec(v_val_3238_);
lean_dec_ref(v_modules_3240_);
v___x_3244_ = lean_st_ref_get(v___y_3215_);
if (v_isMeta_3208_ == 0)
{
lean_dec(v___x_3244_);
v___y_3246_ = v_isMeta_3208_;
goto v___jp_3245_;
}
else
{
lean_object* v_env_3257_; uint8_t v___x_3258_; 
v_env_3257_ = lean_ctor_get(v___x_3244_, 0);
lean_inc_ref(v_env_3257_);
lean_dec(v___x_3244_);
lean_inc(v_declName_3207_);
v___x_3258_ = l_Lean_isMarkedMeta(v_env_3257_, v_declName_3207_);
if (v___x_3258_ == 0)
{
v___y_3246_ = v_isMeta_3208_;
goto v___jp_3245_;
}
else
{
uint8_t v___x_3259_; 
v___x_3259_ = 0;
v___y_3246_ = v___x_3259_;
goto v___jp_3245_;
}
}
v___jp_3245_:
{
lean_object* v_toImport_3247_; lean_object* v_module_3248_; lean_object* v___x_3249_; 
v_toImport_3247_ = lean_ctor_get(v___x_3243_, 0);
lean_inc_ref(v_toImport_3247_);
lean_dec(v___x_3243_);
v_module_3248_ = lean_ctor_get(v_toImport_3247_, 0);
lean_inc(v_module_3248_);
lean_dec_ref(v_toImport_3247_);
lean_inc(v_declName_3207_);
v___x_3249_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_module_3248_, v___y_3246_, v_declName_3207_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
lean_dec_ref_known(v___x_3249_, 1);
v___x_3250_ = l_Lean_indirectModUseExt;
v___x_3251_ = lean_box(1);
v___x_3252_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
lean_inc_ref(v_env_3222_);
v___x_3253_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3217_, v___x_3250_, v_env_3222_, v___x_3251_, v___x_3252_);
v___x_3254_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v___x_3253_, v_declName_3207_);
lean_dec(v___x_3253_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v___x_3255_; 
v___x_3255_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1));
v___y_3224_ = v___x_3255_;
goto v___jp_3223_;
}
else
{
lean_object* v_val_3256_; 
v_val_3256_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_val_3256_);
lean_dec_ref_known(v___x_3254_, 1);
v___y_3224_ = v_val_3256_;
goto v___jp_3223_;
}
}
else
{
lean_dec_ref(v_env_3222_);
lean_dec(v_declName_3207_);
return v___x_3249_;
}
}
}
}
v___jp_3219_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = lean_box(0);
v___x_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
return v___x_3221_;
}
v___jp_3223_:
{
lean_object* v___x_3225_; size_t v_sz_3226_; size_t v___x_3227_; lean_object* v___x_3228_; 
v___x_3225_ = lean_box(0);
v_sz_3226_ = lean_array_size(v___y_3224_);
v___x_3227_ = ((size_t)0ULL);
v___x_3228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(v_env_3222_, v_declName_3207_, v___y_3224_, v_sz_3226_, v___x_3227_, v___x_3225_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
lean_dec_ref(v___y_3224_);
lean_dec_ref(v_env_3222_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v___x_3228_, 0);
lean_dec(v_unused_3236_);
v___x_3230_ = v___x_3228_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_dec(v___x_3228_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3225_);
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3225_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
else
{
return v___x_3228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object* v_declName_3260_, lean_object* v_isMeta_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_){
_start:
{
uint8_t v_isMeta_boxed_3270_; lean_object* v_res_3271_; 
v_isMeta_boxed_3270_ = lean_unbox(v_isMeta_3261_);
v_res_3271_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(v_declName_3260_, v_isMeta_boxed_3270_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec_ref(v___y_3262_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(lean_object* v_as_x27_3272_, lean_object* v_b_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
if (lean_obj_tag(v_as_x27_3272_) == 0)
{
lean_object* v___x_3282_; 
v___x_3282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_b_3273_);
return v___x_3282_;
}
else
{
lean_object* v_head_3283_; lean_object* v_tail_3284_; lean_object* v___x_3285_; uint8_t v___x_3286_; lean_object* v___x_3287_; 
v_head_3283_ = lean_ctor_get(v_as_x27_3272_, 0);
v_tail_3284_ = lean_ctor_get(v_as_x27_3272_, 1);
v___x_3285_ = lean_box(0);
v___x_3286_ = 1;
lean_inc(v_head_3283_);
v___x_3287_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(v_head_3283_, v___x_3286_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_dec_ref_known(v___x_3287_, 1);
v_as_x27_3272_ = v_tail_3284_;
v_b_3273_ = v___x_3285_;
goto _start;
}
else
{
return v___x_3287_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg___boxed(lean_object* v_as_x27_3289_, lean_object* v_b_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_as_x27_3289_, v_b_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v_as_x27_3289_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object* v_currNamespace_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3303_, 0, v_currNamespace_3300_);
lean_ctor_set(v___x_3303_, 1, v___y_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object* v_currNamespace_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(v_currNamespace_3304_, v___y_3305_, v___y_3306_);
lean_dec_ref(v___y_3305_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object* v_as_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
if (lean_obj_tag(v_as_3308_) == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = lean_box(0);
v___x_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
return v___x_3318_;
}
else
{
lean_object* v_toCold_3319_; lean_object* v_options_3320_; uint8_t v_hasTrace_3321_; 
v_toCold_3319_ = lean_ctor_get(v___y_3314_, 0);
v_options_3320_ = lean_ctor_get(v_toCold_3319_, 2);
v_hasTrace_3321_ = lean_ctor_get_uint8(v_options_3320_, sizeof(void*)*1);
if (v_hasTrace_3321_ == 0)
{
lean_object* v_tail_3322_; 
v_tail_3322_ = lean_ctor_get(v_as_3308_, 1);
lean_inc(v_tail_3322_);
lean_dec_ref_known(v_as_3308_, 2);
v_as_3308_ = v_tail_3322_;
goto _start;
}
else
{
lean_object* v_head_3324_; lean_object* v_tail_3325_; lean_object* v_fst_3326_; lean_object* v_snd_3327_; lean_object* v_inheritedTraceOptions_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; 
v_head_3324_ = lean_ctor_get(v_as_3308_, 0);
lean_inc(v_head_3324_);
v_tail_3325_ = lean_ctor_get(v_as_3308_, 1);
lean_inc(v_tail_3325_);
lean_dec_ref_known(v_as_3308_, 2);
v_fst_3326_ = lean_ctor_get(v_head_3324_, 0);
lean_inc_n(v_fst_3326_, 2);
v_snd_3327_ = lean_ctor_get(v_head_3324_, 1);
lean_inc(v_snd_3327_);
lean_dec(v_head_3324_);
v_inheritedTraceOptions_3328_ = lean_ctor_get(v_toCold_3319_, 11);
v___x_3329_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_3330_ = l_Lean_Name_append(v___x_3329_, v_fst_3326_);
v___x_3331_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3328_, v_options_3320_, v___x_3330_);
lean_dec(v___x_3330_);
if (v___x_3331_ == 0)
{
lean_dec(v_snd_3327_);
lean_dec(v_fst_3326_);
v_as_3308_ = v_tail_3325_;
goto _start;
}
else
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3333_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3333_, 0, v_snd_3327_);
v___x_3334_ = l_Lean_MessageData_ofFormat(v___x_3333_);
v___x_3335_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_fst_3326_, v___x_3334_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_dec_ref_known(v___x_3335_, 1);
v_as_3308_ = v_tail_3325_;
goto _start;
}
else
{
lean_dec(v_tail_3325_);
return v___x_3335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object* v_as_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(v_as_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v___y_3338_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object* v_env_3347_, lean_object* v_declName_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_){
_start:
{
uint8_t v___x_3351_; lean_object* v_env_3352_; lean_object* v___x_3353_; uint8_t v___x_3354_; uint8_t v___x_3355_; 
v___x_3351_ = 0;
v_env_3352_ = l_Lean_Environment_setExporting(v_env_3347_, v___x_3351_);
lean_inc(v_declName_3348_);
v___x_3353_ = l_Lean_mkPrivateName(v_env_3352_, v_declName_3348_);
v___x_3354_ = 1;
lean_inc_ref(v_env_3352_);
v___x_3355_ = l_Lean_Environment_contains(v_env_3352_, v___x_3353_, v___x_3354_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; uint8_t v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3356_ = l_Lean_privateToUserName(v_declName_3348_);
v___x_3357_ = l_Lean_Environment_contains(v_env_3352_, v___x_3356_, v___x_3354_);
v___x_3358_ = lean_box(v___x_3357_);
v___x_3359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_ctor_set(v___x_3359_, 1, v___y_3350_);
return v___x_3359_;
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
lean_dec_ref(v_env_3352_);
lean_dec(v_declName_3348_);
v___x_3360_ = lean_box(v___x_3355_);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
lean_ctor_set(v___x_3361_, 1, v___y_3350_);
return v___x_3361_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object* v_env_3362_, lean_object* v_declName_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(v_env_3362_, v_declName_3363_, v___y_3364_, v___y_3365_);
lean_dec_ref(v___y_3364_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object* v_x_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v___x_3377_; lean_object* v_toCold_3378_; lean_object* v_env_3379_; lean_object* v_currRecDepth_3380_; lean_object* v_ref_3381_; lean_object* v_options_3382_; lean_object* v_maxRecDepth_3383_; lean_object* v_currNamespace_3384_; lean_object* v_openDecls_3385_; lean_object* v_quotContext_3386_; lean_object* v_currMacroScope_3387_; lean_object* v___f_3388_; lean_object* v___f_3389_; lean_object* v___f_3390_; lean_object* v___f_3391_; lean_object* v___f_3392_; lean_object* v___x_3393_; lean_object* v_methods_3394_; lean_object* v___x_3395_; lean_object* v_nextMacroScope_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3377_ = lean_st_ref_get(v___y_3375_);
v_toCold_3378_ = lean_ctor_get(v___y_3374_, 0);
v_env_3379_ = lean_ctor_get(v___x_3377_, 0);
lean_inc_ref_n(v_env_3379_, 4);
lean_dec(v___x_3377_);
v_currRecDepth_3380_ = lean_ctor_get(v___y_3374_, 1);
v_ref_3381_ = lean_ctor_get(v___y_3374_, 2);
v_options_3382_ = lean_ctor_get(v_toCold_3378_, 2);
v_maxRecDepth_3383_ = lean_ctor_get(v_toCold_3378_, 3);
v_currNamespace_3384_ = lean_ctor_get(v_toCold_3378_, 4);
v_openDecls_3385_ = lean_ctor_get(v_toCold_3378_, 5);
v_quotContext_3386_ = lean_ctor_get(v_toCold_3378_, 8);
v_currMacroScope_3387_ = lean_ctor_get(v_toCold_3378_, 9);
v___f_3388_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3388_, 0, v_env_3379_);
v___f_3389_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3389_, 0, v_env_3379_);
lean_inc_n(v_openDecls_3385_, 2);
lean_inc_n(v_currNamespace_3384_, 3);
v___f_3390_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3390_, 0, v_env_3379_);
lean_closure_set(v___f_3390_, 1, v_currNamespace_3384_);
lean_closure_set(v___f_3390_, 2, v_openDecls_3385_);
v___f_3391_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3391_, 0, v_currNamespace_3384_);
lean_inc_ref(v_options_3382_);
v___f_3392_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_3392_, 0, v_env_3379_);
lean_closure_set(v___f_3392_, 1, v_options_3382_);
lean_closure_set(v___f_3392_, 2, v_currNamespace_3384_);
lean_closure_set(v___f_3392_, 3, v_openDecls_3385_);
v___x_3393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3393_, 0, v___f_3388_);
lean_ctor_set(v___x_3393_, 1, v___f_3391_);
lean_ctor_set(v___x_3393_, 2, v___f_3389_);
lean_ctor_set(v___x_3393_, 3, v___f_3390_);
lean_ctor_set(v___x_3393_, 4, v___f_3392_);
v_methods_3394_ = l_unsafeCast___redArg(v___x_3393_);
lean_dec_ref_known(v___x_3393_, 5);
v___x_3395_ = lean_st_ref_get(v___y_3375_);
v_nextMacroScope_3396_ = lean_ctor_get(v___x_3395_, 1);
lean_inc(v_nextMacroScope_3396_);
lean_dec(v___x_3395_);
lean_inc(v_ref_3381_);
lean_inc(v_maxRecDepth_3383_);
lean_inc(v_currRecDepth_3380_);
lean_inc(v_currMacroScope_3387_);
lean_inc(v_quotContext_3386_);
v___x_3397_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3397_, 0, v_methods_3394_);
lean_ctor_set(v___x_3397_, 1, v_quotContext_3386_);
lean_ctor_set(v___x_3397_, 2, v_currMacroScope_3387_);
lean_ctor_set(v___x_3397_, 3, v_currRecDepth_3380_);
lean_ctor_set(v___x_3397_, 4, v_maxRecDepth_3383_);
lean_ctor_set(v___x_3397_, 5, v_ref_3381_);
v___x_3398_ = lean_box(0);
v___x_3399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3399_, 0, v_nextMacroScope_3396_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
lean_ctor_set(v___x_3399_, 2, v___x_3398_);
v___x_3400_ = lean_apply_2(v_x_3368_, v___x_3397_, v___x_3399_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; lean_object* v_a_3402_; lean_object* v_macroScope_3403_; lean_object* v_traceMsgs_3404_; lean_object* v_expandedMacroDecls_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 1);
lean_inc(v_a_3401_);
v_a_3402_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3400_, 2);
v_macroScope_3403_ = lean_ctor_get(v_a_3401_, 0);
lean_inc(v_macroScope_3403_);
v_traceMsgs_3404_ = lean_ctor_get(v_a_3401_, 1);
lean_inc(v_traceMsgs_3404_);
v_expandedMacroDecls_3405_ = lean_ctor_get(v_a_3401_, 2);
lean_inc(v_expandedMacroDecls_3405_);
lean_dec(v_a_3401_);
v___x_3406_ = lean_box(0);
v___x_3407_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_expandedMacroDecls_3405_, v___x_3406_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v_expandedMacroDecls_3405_);
if (lean_obj_tag(v___x_3407_) == 0)
{
lean_object* v___x_3408_; lean_object* v_env_3409_; lean_object* v_ngen_3410_; lean_object* v_auxDeclNGen_3411_; lean_object* v_traceState_3412_; lean_object* v_cache_3413_; lean_object* v_messages_3414_; lean_object* v_infoState_3415_; lean_object* v_snapshotTasks_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3442_; 
lean_dec_ref_known(v___x_3407_, 1);
v___x_3408_ = lean_st_ref_take(v___y_3375_);
v_env_3409_ = lean_ctor_get(v___x_3408_, 0);
v_ngen_3410_ = lean_ctor_get(v___x_3408_, 2);
v_auxDeclNGen_3411_ = lean_ctor_get(v___x_3408_, 3);
v_traceState_3412_ = lean_ctor_get(v___x_3408_, 4);
v_cache_3413_ = lean_ctor_get(v___x_3408_, 5);
v_messages_3414_ = lean_ctor_get(v___x_3408_, 6);
v_infoState_3415_ = lean_ctor_get(v___x_3408_, 7);
v_snapshotTasks_3416_ = lean_ctor_get(v___x_3408_, 8);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3442_ == 0)
{
lean_object* v_unused_3443_; 
v_unused_3443_ = lean_ctor_get(v___x_3408_, 1);
lean_dec(v_unused_3443_);
v___x_3418_ = v___x_3408_;
v_isShared_3419_ = v_isSharedCheck_3442_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_snapshotTasks_3416_);
lean_inc(v_infoState_3415_);
lean_inc(v_messages_3414_);
lean_inc(v_cache_3413_);
lean_inc(v_traceState_3412_);
lean_inc(v_auxDeclNGen_3411_);
lean_inc(v_ngen_3410_);
lean_inc(v_env_3409_);
lean_dec(v___x_3408_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3442_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
lean_ctor_set(v___x_3418_, 1, v_macroScope_3403_);
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_env_3409_);
lean_ctor_set(v_reuseFailAlloc_3441_, 1, v_macroScope_3403_);
lean_ctor_set(v_reuseFailAlloc_3441_, 2, v_ngen_3410_);
lean_ctor_set(v_reuseFailAlloc_3441_, 3, v_auxDeclNGen_3411_);
lean_ctor_set(v_reuseFailAlloc_3441_, 4, v_traceState_3412_);
lean_ctor_set(v_reuseFailAlloc_3441_, 5, v_cache_3413_);
lean_ctor_set(v_reuseFailAlloc_3441_, 6, v_messages_3414_);
lean_ctor_set(v_reuseFailAlloc_3441_, 7, v_infoState_3415_);
lean_ctor_set(v_reuseFailAlloc_3441_, 8, v_snapshotTasks_3416_);
v___x_3421_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_st_ref_put(v___y_3375_, v___x_3421_);
v___x_3423_ = l_List_reverse___redArg(v_traceMsgs_3404_);
v___x_3424_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(v___x_3423_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3431_ == 0)
{
lean_object* v_unused_3432_; 
v_unused_3432_ = lean_ctor_get(v___x_3424_, 0);
lean_dec(v_unused_3432_);
v___x_3426_ = v___x_3424_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_dec(v___x_3424_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
lean_ctor_set(v___x_3426_, 0, v_a_3402_);
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3402_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec(v_a_3402_);
v_a_3433_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3424_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3424_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
}
else
{
lean_object* v_a_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3451_; 
lean_dec(v_traceMsgs_3404_);
lean_dec(v_macroScope_3403_);
lean_dec(v_a_3402_);
v_a_3444_ = lean_ctor_get(v___x_3407_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3407_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3446_ = v___x_3407_;
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_a_3444_);
lean_dec(v___x_3407_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3449_; 
if (v_isShared_3447_ == 0)
{
v___x_3449_ = v___x_3446_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3444_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
else
{
lean_object* v_a_3452_; 
v_a_3452_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v___x_3400_, 2);
if (lean_obj_tag(v_a_3452_) == 0)
{
lean_object* v_a_3453_; lean_object* v_a_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
v_a_3453_ = lean_ctor_get(v_a_3452_, 0);
lean_inc(v_a_3453_);
v_a_3454_ = lean_ctor_get(v_a_3452_, 1);
lean_inc_ref(v_a_3454_);
lean_dec_ref_known(v_a_3452_, 2);
v___x_3455_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0));
v___x_3456_ = lean_string_dec_eq(v_a_3454_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3457_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3457_, 0, v_a_3454_);
v___x_3458_ = l_Lean_MessageData_ofFormat(v___x_3457_);
v___x_3459_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_3453_, v___x_3458_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v_a_3453_);
return v___x_3459_;
}
else
{
lean_object* v___x_3460_; 
lean_dec_ref(v_a_3454_);
v___x_3460_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_a_3453_);
return v___x_3460_;
}
}
else
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object* v_x_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
lean_object* v_res_3471_; 
v_res_3471_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec(v___y_3467_);
lean_dec_ref(v___y_3466_);
lean_dec(v___y_3465_);
lean_dec_ref(v___y_3464_);
lean_dec_ref(v___y_3463_);
return v_res_3471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object* v___x_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_){
_start:
{
lean_object* v_toCold_3476_; lean_object* v_quotContext_3477_; lean_object* v_currMacroScope_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v_toCold_3476_ = lean_ctor_get(v___y_3473_, 0);
lean_inc_ref(v_toCold_3476_);
lean_dec_ref(v___y_3473_);
v_quotContext_3477_ = lean_ctor_get(v_toCold_3476_, 8);
lean_inc(v_quotContext_3477_);
v_currMacroScope_3478_ = lean_ctor_get(v_toCold_3476_, 9);
lean_inc(v_currMacroScope_3478_);
lean_dec_ref(v_toCold_3476_);
v___x_3479_ = l_Lean_addMacroScope(v_quotContext_3477_, v___x_3472_, v_currMacroScope_3478_);
v___x_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3479_);
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v___x_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(v___x_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v___f_3494_; lean_object* v___x_3495_; 
v___f_3494_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2));
v___x_3495_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_3494_, v___y_3491_, v___y_3492_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v_res_3499_; 
v_res_3499_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3496_, v___y_3497_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object* v_ref_3500_, uint8_t v_canonical_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v___x_3510_; 
v___x_3510_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3519_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3515_ = l_Lean_mkIdentFrom(v_ref_3500_, v_a_3511_, v_canonical_3501_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3515_);
v___x_3517_ = v___x_3513_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
v_a_3520_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3510_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3510_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object* v_ref_3528_, lean_object* v_canonical_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
uint8_t v_canonical_boxed_3538_; lean_object* v_res_3539_; 
v_canonical_boxed_3538_ = lean_unbox(v_canonical_3529_);
v_res_3539_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_ref_3528_, v_canonical_boxed_3538_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
lean_dec(v___y_3536_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec_ref(v___y_3530_);
lean_dec(v_ref_3528_);
return v_res_3539_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1(void){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3541_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__0));
v___x_3542_ = l_Lean_stringToMessageData(v___x_3541_);
return v___x_3542_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3548_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3549_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_3550_ = l_Lean_Name_append(v___x_3549_, v___x_3548_);
return v___x_3550_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3552_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__5));
v___x_3553_ = l_Lean_stringToMessageData(v___x_3552_);
return v___x_3553_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__7));
v___x_3556_ = l_Lean_stringToMessageData(v___x_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object* v_config_3563_, lean_object* v_letOrReassign_3564_, lean_object* v_decl_3565_, lean_object* v_tk_3566_, lean_object* v_dec_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_config_3563_, v_letOrReassign_3564_, v_decl_3565_, v_tk_3566_, v_dec_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_);
lean_dec(v_a_3574_);
lean_dec_ref(v_a_3573_);
lean_dec(v_a_3572_);
lean_dec_ref(v_a_3571_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec_ref(v_a_3568_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object* v_config_3577_, lean_object* v_letOrReassign_3578_, lean_object* v_decl_3579_, lean_object* v_tk_3580_, lean_object* v_dec_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_, lean_object* v_a_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_3577_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v___x_3591_; 
lean_dec_ref_known(v___x_3590_, 1);
lean_inc(v_decl_3579_);
v___x_3591_ = l_Lean_Elab_Do_getLetDeclVars(v_decl_3579_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3593_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3591_, 1);
v___x_3593_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_3578_, v_a_3592_, v_a_3582_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v___x_3594_; 
lean_dec_ref_known(v___x_3593_, 1);
v___x_3594_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_3581_, v_tk_3580_, v_a_3582_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3594_) == 0)
{
lean_object* v_a_3595_; lean_object* v___y_3597_; uint8_t v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; uint8_t v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v_rhs_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; uint8_t v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; lean_object* v___y_3628_; lean_object* v___y_3629_; lean_object* v___y_3630_; lean_object* v___y_3631_; uint8_t v___y_3632_; lean_object* v___y_3633_; uint8_t v___y_3634_; lean_object* v___y_3635_; lean_object* v___y_3636_; lean_object* v___y_3637_; lean_object* v_xType_x3f_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; uint8_t v___y_3697_; uint8_t v___y_3698_; uint8_t v___y_3699_; lean_object* v___y_3700_; uint8_t v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; uint8_t v___y_3712_; lean_object* v___y_3771_; lean_object* v___y_3772_; lean_object* v___y_3773_; uint8_t v___y_3774_; lean_object* v___y_3775_; uint8_t v___y_3776_; uint8_t v___y_3777_; uint8_t v___y_3778_; lean_object* v_id_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3798_; uint8_t v___y_3799_; uint8_t v___y_3800_; lean_object* v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; uint8_t v___y_3808_; lean_object* v___y_3809_; uint8_t v___y_3810_; lean_object* v_decl_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___x_3897_; 
v_a_3595_ = lean_ctor_get(v___x_3594_, 0);
lean_inc(v_a_3595_);
lean_dec_ref_known(v___x_3594_, 1);
v___x_3897_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_3578_, v_a_3592_, v_a_3582_);
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3899_; 
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
lean_inc(v_a_3898_);
lean_dec_ref_known(v___x_3897_, 1);
v___x_3899_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_3578_, v_decl_3579_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3899_) == 0)
{
uint8_t v___x_3900_; 
v___x_3900_ = lean_unbox(v_a_3898_);
lean_dec(v_a_3898_);
if (v___x_3900_ == 0)
{
lean_object* v_a_3901_; 
v_a_3901_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_a_3901_);
lean_dec_ref_known(v___x_3899_, 1);
v_decl_3828_ = v_a_3901_;
v___y_3829_ = v_a_3582_;
v___y_3830_ = v_a_3583_;
v___y_3831_ = v_a_3584_;
v___y_3832_ = v_a_3585_;
v___y_3833_ = v_a_3586_;
v___y_3834_ = v_a_3587_;
v___y_3835_ = v_a_3588_;
goto v___jp_3827_;
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3903_; 
v_a_3902_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3899_, 1);
v___x_3903_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_a_3902_, v_a_3582_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v_decl_3828_ = v_a_3904_;
v___y_3829_ = v_a_3582_;
v___y_3830_ = v_a_3583_;
v___y_3831_ = v_a_3584_;
v___y_3832_ = v_a_3585_;
v___y_3833_ = v_a_3586_;
v___y_3834_ = v_a_3587_;
v___y_3835_ = v_a_3588_;
goto v___jp_3827_;
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3905_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3903_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3903_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
}
else
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3920_; 
lean_dec(v_a_3898_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3913_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3915_ = v___x_3899_;
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3899_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_decl_3579_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3921_ = lean_ctor_get(v___x_3897_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3897_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3897_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3897_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
v___jp_3596_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___f_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3614_ = lean_box(v___y_3598_);
v___x_3615_ = lean_box(v___y_3603_);
lean_inc_ref(v___y_3597_);
lean_inc_ref(v___y_3600_);
lean_inc_ref(v___y_3601_);
v___f_3616_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed), 19, 10);
lean_closure_set(v___f_3616_, 0, v_rhs_3606_);
lean_closure_set(v___f_3616_, 1, v___x_3614_);
lean_closure_set(v___f_3616_, 2, v_config_3577_);
lean_closure_set(v___f_3616_, 3, v___y_3604_);
lean_closure_set(v___f_3616_, 4, v___x_3615_);
lean_closure_set(v___f_3616_, 5, v___y_3601_);
lean_closure_set(v___f_3616_, 6, v___y_3600_);
lean_closure_set(v___f_3616_, 7, v___y_3597_);
lean_closure_set(v___f_3616_, 8, v___y_3599_);
lean_closure_set(v___f_3616_, 9, v___y_3602_);
v___x_3617_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_3617_, 0, v_a_3595_);
v___x_3618_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___boxed), 11, 3);
lean_closure_set(v___x_3618_, 0, v_letOrReassign_3578_);
lean_closure_set(v___x_3618_, 1, v_a_3592_);
lean_closure_set(v___x_3618_, 2, v___x_3617_);
v___x_3619_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1);
v___x_3620_ = l_Lean_MessageData_ofSyntax(v___y_3605_);
v___x_3621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = lean_box(0);
v___x_3623_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_3621_, v___x_3618_, v___f_3616_, v___x_3622_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_);
return v___x_3623_;
}
v___jp_3624_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = lean_unsigned_to_nat(4u);
v___x_3647_ = l_Lean_Syntax_getArg(v___y_3637_, v___x_3646_);
lean_dec(v___y_3637_);
if (lean_obj_tag(v_xType_x3f_3638_) == 0)
{
lean_inc(v___y_3630_);
v___y_3597_ = v___y_3626_;
v___y_3598_ = v___y_3625_;
v___y_3599_ = v___y_3629_;
v___y_3600_ = v___y_3628_;
v___y_3601_ = v___y_3627_;
v___y_3602_ = v___y_3630_;
v___y_3603_ = v___y_3632_;
v___y_3604_ = v___y_3631_;
v___y_3605_ = v___y_3630_;
v_rhs_3606_ = v___x_3647_;
v___y_3607_ = v___y_3639_;
v___y_3608_ = v___y_3640_;
v___y_3609_ = v___y_3641_;
v___y_3610_ = v___y_3642_;
v___y_3611_ = v___y_3643_;
v___y_3612_ = v___y_3644_;
v___y_3613_ = v___y_3645_;
goto v___jp_3596_;
}
else
{
lean_object* v_toCold_3648_; lean_object* v_val_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3692_; 
v_toCold_3648_ = lean_ctor_get(v___y_3644_, 0);
v_val_3649_ = lean_ctor_get(v_xType_x3f_3638_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v_xType_x3f_3638_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3651_ = v_xType_x3f_3638_;
v_isShared_3652_ = v_isSharedCheck_3692_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_val_3649_);
lean_dec(v_xType_x3f_3638_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3692_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v_ref_3653_; lean_object* v_quotContext_3654_; lean_object* v_currMacroScope_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v_ref_3653_ = lean_ctor_get(v___y_3644_, 2);
v_quotContext_3654_ = lean_ctor_get(v_toCold_3648_, 8);
v_currMacroScope_3655_ = lean_ctor_get(v_toCold_3648_, 9);
v___x_3656_ = l_Lean_SourceInfo_fromRef(v_ref_3653_, v___y_3634_);
v___x_3657_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15));
lean_inc_ref_n(v___y_3633_, 2);
lean_inc_ref_n(v___y_3635_, 2);
lean_inc_ref_n(v___y_3636_, 3);
v___x_3658_ = l_Lean_Name_mkStr4(v___y_3636_, v___y_3635_, v___y_3633_, v___x_3657_);
v___x_3659_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17));
v___x_3660_ = l_Lean_Name_mkStr4(v___y_3636_, v___y_3635_, v___y_3633_, v___x_3659_);
v___x_3661_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc(v___x_3656_);
v___x_3662_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3656_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_3664_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_3665_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
lean_inc(v_currMacroScope_3655_);
lean_inc(v_quotContext_3654_);
v___x_3666_ = l_Lean_addMacroScope(v_quotContext_3654_, v___x_3665_, v_currMacroScope_3655_);
v___x_3667_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25));
v___x_3668_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26));
v___x_3669_ = l_Lean_Name_mkStr3(v___y_3636_, v___x_3667_, v___x_3668_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set_tag(v___x_3651_, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3669_);
v___x_3671_ = v___x_3651_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3669_);
v___x_3671_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3672_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29));
lean_inc_ref_n(v___y_3636_, 2);
v___x_3673_ = l_Lean_Name_mkStr2(v___y_3636_, v___x_3672_);
v___x_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3673_);
lean_inc_ref(v___y_3633_);
lean_inc_ref(v___y_3635_);
v___x_3675_ = l_Lean_Name_mkStr3(v___y_3636_, v___y_3635_, v___y_3633_);
v___x_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
v___x_3677_ = lean_box(0);
v___x_3678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3676_);
lean_ctor_set(v___x_3678_, 1, v___x_3677_);
v___x_3679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3674_);
lean_ctor_set(v___x_3679_, 1, v___x_3678_);
v___x_3680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3671_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
lean_inc_n(v___x_3656_, 6);
v___x_3681_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3656_);
lean_ctor_set(v___x_3681_, 1, v___x_3664_);
lean_ctor_set(v___x_3681_, 2, v___x_3666_);
lean_ctor_set(v___x_3681_, 3, v___x_3680_);
v___x_3682_ = l_Lean_Syntax_node1(v___x_3656_, v___x_3663_, v___x_3681_);
v___x_3683_ = l_Lean_Syntax_node2(v___x_3656_, v___x_3660_, v___x_3662_, v___x_3682_);
v___x_3684_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_3685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3656_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_3687_ = l_Lean_Syntax_node1(v___x_3656_, v___x_3686_, v_val_3649_);
v___x_3688_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38));
v___x_3689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3656_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = l_Lean_Syntax_node5(v___x_3656_, v___x_3658_, v___x_3683_, v___x_3647_, v___x_3685_, v___x_3687_, v___x_3689_);
lean_inc(v___y_3630_);
v___y_3597_ = v___y_3626_;
v___y_3598_ = v___y_3625_;
v___y_3599_ = v___y_3629_;
v___y_3600_ = v___y_3628_;
v___y_3601_ = v___y_3627_;
v___y_3602_ = v___y_3630_;
v___y_3603_ = v___y_3632_;
v___y_3604_ = v___y_3631_;
v___y_3605_ = v___y_3630_;
v_rhs_3606_ = v___x_3690_;
v___y_3607_ = v___y_3639_;
v___y_3608_ = v___y_3640_;
v___y_3609_ = v___y_3641_;
v___y_3610_ = v___y_3642_;
v___y_3611_ = v___y_3643_;
v___y_3612_ = v___y_3644_;
v___y_3613_ = v___y_3645_;
goto v___jp_3596_;
}
}
}
}
v___jp_3693_:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___f_3716_; lean_object* v___x_3717_; 
v___x_3713_ = lean_box(v___y_3701_);
v___x_3714_ = lean_box(v___y_3699_);
v___x_3715_ = lean_box(v___y_3712_);
v___f_3716_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3716_, 0, v___y_3702_);
lean_closure_set(v___f_3716_, 1, v___y_3696_);
lean_closure_set(v___f_3716_, 2, v___x_3713_);
lean_closure_set(v___f_3716_, 3, v___x_3714_);
lean_closure_set(v___f_3716_, 4, v___y_3694_);
lean_closure_set(v___f_3716_, 5, v___x_3715_);
v___x_3717_ = l_Lean_Elab_Term_elabBindersEx___redArg(v___y_3706_, v___f_3716_, v___y_3704_, v___y_3710_, v___y_3709_, v___y_3705_, v___y_3703_, v___y_3711_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v_toCold_3719_; lean_object* v_options_3720_; lean_object* v_fst_3721_; lean_object* v_snd_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3761_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref_known(v___x_3717_, 1);
v_toCold_3719_ = lean_ctor_get(v___y_3703_, 0);
v_options_3720_ = lean_ctor_get(v_toCold_3719_, 2);
v_fst_3721_ = lean_ctor_get(v_a_3718_, 0);
v_snd_3722_ = lean_ctor_get(v_a_3718_, 1);
v_isSharedCheck_3761_ = !lean_is_exclusive(v_a_3718_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3724_ = v_a_3718_;
v_isShared_3725_ = v_isSharedCheck_3761_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_snd_3722_);
lean_inc(v_fst_3721_);
lean_dec(v_a_3718_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3761_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v_inheritedTraceOptions_3726_; uint8_t v_hasTrace_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___f_3732_; lean_object* v___x_3733_; uint8_t v___x_3734_; 
v_inheritedTraceOptions_3726_ = lean_ctor_get(v_toCold_3719_, 11);
v_hasTrace_3727_ = lean_ctor_get_uint8(v_options_3720_, sizeof(void*)*1);
v___x_3728_ = lean_box(v___y_3697_);
v___x_3729_ = lean_box(v___y_3698_);
v___x_3730_ = lean_box(v___y_3712_);
v___x_3731_ = lean_box(v___y_3701_);
lean_inc(v_snd_3722_);
v___f_3732_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed), 19, 10);
lean_closure_set(v___f_3732_, 0, v___y_3695_);
lean_closure_set(v___f_3732_, 1, v___y_3700_);
lean_closure_set(v___f_3732_, 2, v_a_3595_);
lean_closure_set(v___f_3732_, 3, v_letOrReassign_3578_);
lean_closure_set(v___f_3732_, 4, v_a_3592_);
lean_closure_set(v___f_3732_, 5, v___x_3728_);
lean_closure_set(v___f_3732_, 6, v___x_3729_);
lean_closure_set(v___f_3732_, 7, v_snd_3722_);
lean_closure_set(v___f_3732_, 8, v___x_3730_);
lean_closure_set(v___f_3732_, 9, v___x_3731_);
v___x_3733_ = l_Lean_Syntax_getId(v___y_3707_);
lean_dec(v___y_3707_);
v___x_3734_ = l_Lean_LocalDeclKind_ofBinderName(v___x_3733_);
if (v_hasTrace_3727_ == 0)
{
lean_object* v___x_3735_; 
lean_del_object(v___x_3724_);
v___x_3735_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3733_, v_fst_3721_, v_snd_3722_, v___f_3732_, v___y_3712_, v___x_3734_, v___y_3708_, v___y_3704_, v___y_3710_, v___y_3709_, v___y_3705_, v___y_3703_, v___y_3711_);
return v___x_3735_;
}
else
{
lean_object* v___x_3736_; lean_object* v___x_3737_; uint8_t v___x_3738_; 
v___x_3736_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3737_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4);
v___x_3738_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3726_, v_options_3720_, v___x_3737_);
if (v___x_3738_ == 0)
{
lean_object* v___x_3739_; 
lean_del_object(v___x_3724_);
v___x_3739_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3733_, v_fst_3721_, v_snd_3722_, v___f_3732_, v___y_3712_, v___x_3734_, v___y_3708_, v___y_3704_, v___y_3710_, v___y_3709_, v___y_3705_, v___y_3703_, v___y_3711_);
return v___x_3739_;
}
else
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3743_; 
lean_inc(v___x_3733_);
v___x_3740_ = l_Lean_MessageData_ofName(v___x_3733_);
v___x_3741_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6);
if (v_isShared_3725_ == 0)
{
lean_ctor_set_tag(v___x_3724_, 7);
lean_ctor_set(v___x_3724_, 1, v___x_3741_);
lean_ctor_set(v___x_3724_, 0, v___x_3740_);
v___x_3743_ = v___x_3724_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3740_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v___x_3741_);
v___x_3743_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
lean_inc(v_fst_3721_);
v___x_3744_ = l_Lean_MessageData_ofExpr(v_fst_3721_);
v___x_3745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3743_);
lean_ctor_set(v___x_3745_, 1, v___x_3744_);
v___x_3746_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8);
v___x_3747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3745_);
lean_ctor_set(v___x_3747_, 1, v___x_3746_);
lean_inc(v_snd_3722_);
v___x_3748_ = l_Lean_MessageData_ofExpr(v_snd_3722_);
v___x_3749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3747_);
lean_ctor_set(v___x_3749_, 1, v___x_3748_);
v___x_3750_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3736_, v___x_3749_, v___y_3709_, v___y_3705_, v___y_3703_, v___y_3711_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v___x_3751_; 
lean_dec_ref_known(v___x_3750_, 1);
v___x_3751_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3733_, v_fst_3721_, v_snd_3722_, v___f_3732_, v___y_3712_, v___x_3734_, v___y_3708_, v___y_3704_, v___y_3710_, v___y_3709_, v___y_3705_, v___y_3703_, v___y_3711_);
return v___x_3751_;
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec(v___x_3733_);
lean_dec_ref(v___f_3732_);
lean_dec(v_snd_3722_);
lean_dec(v_fst_3721_);
v_a_3752_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3750_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3750_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
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
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3769_; 
lean_dec(v___y_3707_);
lean_dec(v___y_3700_);
lean_dec(v___y_3695_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
v_a_3762_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3764_ = v___x_3717_;
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3717_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
return v___x_3767_;
}
}
}
}
v___jp_3770_:
{
uint8_t v_nondep_3787_; 
v_nondep_3787_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1);
if (v_nondep_3787_ == 0)
{
if (lean_obj_tag(v_letOrReassign_3578_) == 1)
{
uint8_t v_usedOnly_3788_; uint8_t v_zeta_3789_; lean_object* v_eq_x3f_3790_; 
v_usedOnly_3788_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 1);
v_zeta_3789_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 2);
v_eq_x3f_3790_ = lean_ctor_get(v_config_3577_, 0);
lean_inc(v_eq_x3f_3790_);
lean_dec_ref(v_config_3577_);
lean_inc(v_id_3779_);
v___y_3694_ = v___y_3771_;
v___y_3695_ = v_id_3779_;
v___y_3696_ = v___y_3773_;
v___y_3697_ = v_zeta_3789_;
v___y_3698_ = v_usedOnly_3788_;
v___y_3699_ = v___y_3774_;
v___y_3700_ = v_eq_x3f_3790_;
v___y_3701_ = v___y_3776_;
v___y_3702_ = v___y_3775_;
v___y_3703_ = v___y_3785_;
v___y_3704_ = v___y_3781_;
v___y_3705_ = v___y_3784_;
v___y_3706_ = v___y_3772_;
v___y_3707_ = v_id_3779_;
v___y_3708_ = v___y_3780_;
v___y_3709_ = v___y_3783_;
v___y_3710_ = v___y_3782_;
v___y_3711_ = v___y_3786_;
v___y_3712_ = v___y_3778_;
goto v___jp_3693_;
}
else
{
uint8_t v_usedOnly_3791_; uint8_t v_zeta_3792_; lean_object* v_eq_x3f_3793_; 
v_usedOnly_3791_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 1);
v_zeta_3792_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 2);
v_eq_x3f_3793_ = lean_ctor_get(v_config_3577_, 0);
lean_inc(v_eq_x3f_3793_);
lean_dec_ref(v_config_3577_);
lean_inc(v_id_3779_);
v___y_3694_ = v___y_3771_;
v___y_3695_ = v_id_3779_;
v___y_3696_ = v___y_3773_;
v___y_3697_ = v_zeta_3792_;
v___y_3698_ = v_usedOnly_3791_;
v___y_3699_ = v___y_3774_;
v___y_3700_ = v_eq_x3f_3793_;
v___y_3701_ = v___y_3776_;
v___y_3702_ = v___y_3775_;
v___y_3703_ = v___y_3785_;
v___y_3704_ = v___y_3781_;
v___y_3705_ = v___y_3784_;
v___y_3706_ = v___y_3772_;
v___y_3707_ = v_id_3779_;
v___y_3708_ = v___y_3780_;
v___y_3709_ = v___y_3783_;
v___y_3710_ = v___y_3782_;
v___y_3711_ = v___y_3786_;
v___y_3712_ = v___y_3777_;
goto v___jp_3693_;
}
}
else
{
uint8_t v_usedOnly_3794_; uint8_t v_zeta_3795_; lean_object* v_eq_x3f_3796_; 
v_usedOnly_3794_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 1);
v_zeta_3795_ = lean_ctor_get_uint8(v_config_3577_, sizeof(void*)*1 + 2);
v_eq_x3f_3796_ = lean_ctor_get(v_config_3577_, 0);
lean_inc(v_eq_x3f_3796_);
lean_dec_ref(v_config_3577_);
lean_inc(v_id_3779_);
v___y_3694_ = v___y_3771_;
v___y_3695_ = v_id_3779_;
v___y_3696_ = v___y_3773_;
v___y_3697_ = v_zeta_3795_;
v___y_3698_ = v_usedOnly_3794_;
v___y_3699_ = v___y_3774_;
v___y_3700_ = v_eq_x3f_3796_;
v___y_3701_ = v___y_3776_;
v___y_3702_ = v___y_3775_;
v___y_3703_ = v___y_3785_;
v___y_3704_ = v___y_3781_;
v___y_3705_ = v___y_3784_;
v___y_3706_ = v___y_3772_;
v___y_3707_ = v_id_3779_;
v___y_3708_ = v___y_3780_;
v___y_3709_ = v___y_3783_;
v___y_3710_ = v___y_3782_;
v___y_3711_ = v___y_3786_;
v___y_3712_ = v___y_3778_;
goto v___jp_3693_;
}
}
v___jp_3797_:
{
lean_object* v___x_3811_; lean_object* v_id_3812_; lean_object* v_binders_3813_; lean_object* v_type_3814_; lean_object* v_value_3815_; uint8_t v___x_3816_; 
v___x_3811_ = l_Lean_Elab_Term_mkLetIdDeclView(v___y_3806_);
lean_dec(v___y_3806_);
v_id_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_id_3812_);
v_binders_3813_ = lean_ctor_get(v___x_3811_, 1);
lean_inc_ref(v_binders_3813_);
v_type_3814_ = lean_ctor_get(v___x_3811_, 2);
lean_inc(v_type_3814_);
v_value_3815_ = lean_ctor_get(v___x_3811_, 3);
lean_inc(v_value_3815_);
lean_dec_ref(v___x_3811_);
v___x_3816_ = l_Lean_Syntax_isIdent(v_id_3812_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; 
v___x_3817_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_id_3812_, v___y_3810_, v___y_3803_, v___y_3807_, v___y_3801_, v___y_3809_, v___y_3805_, v___y_3804_, v___y_3802_);
lean_dec(v_id_3812_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
v___y_3771_ = v___y_3798_;
v___y_3772_ = v_binders_3813_;
v___y_3773_ = v_value_3815_;
v___y_3774_ = v___y_3799_;
v___y_3775_ = v_type_3814_;
v___y_3776_ = v___y_3800_;
v___y_3777_ = v___y_3808_;
v___y_3778_ = v___y_3810_;
v_id_3779_ = v_a_3818_;
v___y_3780_ = v___y_3803_;
v___y_3781_ = v___y_3807_;
v___y_3782_ = v___y_3801_;
v___y_3783_ = v___y_3809_;
v___y_3784_ = v___y_3805_;
v___y_3785_ = v___y_3804_;
v___y_3786_ = v___y_3802_;
goto v___jp_3770_;
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
lean_dec(v_value_3815_);
lean_dec(v_type_3814_);
lean_dec_ref(v_binders_3813_);
lean_dec(v___y_3798_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3819_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3817_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3817_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
else
{
v___y_3771_ = v___y_3798_;
v___y_3772_ = v_binders_3813_;
v___y_3773_ = v_value_3815_;
v___y_3774_ = v___y_3799_;
v___y_3775_ = v_type_3814_;
v___y_3776_ = v___y_3800_;
v___y_3777_ = v___y_3808_;
v___y_3778_ = v___y_3810_;
v_id_3779_ = v_id_3812_;
v___y_3780_ = v___y_3803_;
v___y_3781_ = v___y_3807_;
v___y_3782_ = v___y_3801_;
v___y_3783_ = v___y_3809_;
v___y_3784_ = v___y_3805_;
v___y_3785_ = v___y_3804_;
v___y_3786_ = v___y_3802_;
goto v___jp_3770_;
}
}
v___jp_3827_:
{
lean_object* v_doBlockResultType_3836_; lean_object* v___x_3837_; 
v_doBlockResultType_3836_ = lean_ctor_get(v___y_3829_, 3);
lean_inc_ref(v_doBlockResultType_3836_);
v___x_3837_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_3836_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3896_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3840_ = v___x_3837_;
v_isShared_3841_ = v_isSharedCheck_3896_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3837_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3896_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; uint8_t v___x_3846_; 
v___x_3842_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_3843_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_3844_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_3845_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_3828_);
v___x_3846_ = l_Lean_Syntax_isOfKind(v_decl_3828_, v___x_3845_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; 
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
lean_dec(v_decl_3828_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v___x_3847_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3847_;
}
else
{
lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; uint8_t v___x_3851_; 
v___x_3848_ = lean_unsigned_to_nat(0u);
v___x_3849_ = l_Lean_Syntax_getArg(v_decl_3828_, v___x_3848_);
lean_dec(v_decl_3828_);
v___x_3850_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__10));
lean_inc(v___x_3849_);
v___x_3851_ = l_Lean_Syntax_isOfKind(v___x_3849_, v___x_3850_);
if (v___x_3851_ == 0)
{
lean_object* v___x_3852_; uint8_t v___x_3853_; 
lean_dec(v_tk_3580_);
v___x_3852_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_3849_);
v___x_3853_ = l_Lean_Syntax_isOfKind(v___x_3849_, v___x_3852_);
if (v___x_3853_ == 0)
{
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
if (v___x_3853_ == 0)
{
lean_object* v___x_3854_; uint8_t v___x_3855_; 
v___x_3854_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_3849_);
v___x_3855_ = l_Lean_Syntax_isOfKind(v___x_3849_, v___x_3854_);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; 
lean_dec(v___x_3849_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v___x_3856_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3856_;
}
else
{
v___y_3798_ = v___x_3848_;
v___y_3799_ = v___x_3853_;
v___y_3800_ = v___x_3846_;
v___y_3801_ = v___y_3831_;
v___y_3802_ = v___y_3835_;
v___y_3803_ = v___y_3829_;
v___y_3804_ = v___y_3834_;
v___y_3805_ = v___y_3833_;
v___y_3806_ = v___x_3849_;
v___y_3807_ = v___y_3830_;
v___y_3808_ = v___x_3853_;
v___y_3809_ = v___y_3832_;
v___y_3810_ = v___x_3846_;
goto v___jp_3797_;
}
}
else
{
v___y_3798_ = v___x_3848_;
v___y_3799_ = v___x_3853_;
v___y_3800_ = v___x_3846_;
v___y_3801_ = v___y_3831_;
v___y_3802_ = v___y_3835_;
v___y_3803_ = v___y_3829_;
v___y_3804_ = v___y_3834_;
v___y_3805_ = v___y_3833_;
v___y_3806_ = v___x_3849_;
v___y_3807_ = v___y_3830_;
v___y_3808_ = v___x_3853_;
v___y_3809_ = v___y_3832_;
v___y_3810_ = v___x_3846_;
goto v___jp_3797_;
}
}
else
{
lean_object* v___x_3857_; lean_object* v___x_3858_; uint8_t v___x_3859_; 
v___x_3857_ = lean_unsigned_to_nat(1u);
v___x_3858_ = l_Lean_Syntax_getArg(v___x_3849_, v___x_3857_);
v___x_3859_ = l_Lean_Syntax_matchesNull(v___x_3858_, v___x_3848_);
if (v___x_3859_ == 0)
{
lean_object* v___x_3860_; 
lean_dec(v___x_3849_);
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v___x_3860_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3860_;
}
else
{
lean_object* v___x_3861_; lean_object* v___f_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; uint8_t v___x_3866_; 
v___x_3861_ = lean_box(v___x_3851_);
v___f_3862_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed), 10, 1);
lean_closure_set(v___f_3862_, 0, v___x_3861_);
v___x_3863_ = l_Lean_Syntax_getArg(v___x_3849_, v___x_3848_);
v___x_3864_ = lean_unsigned_to_nat(2u);
v___x_3865_ = l_Lean_Syntax_getArg(v___x_3849_, v___x_3864_);
v___x_3866_ = l_Lean_Syntax_isNone(v___x_3865_);
if (v___x_3866_ == 0)
{
uint8_t v___x_3867_; 
lean_inc(v___x_3865_);
v___x_3867_ = l_Lean_Syntax_matchesNull(v___x_3865_, v___x_3857_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; 
lean_dec(v___x_3865_);
lean_dec(v___x_3863_);
lean_dec_ref(v___f_3862_);
lean_dec(v___x_3849_);
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v___x_3868_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3868_;
}
else
{
lean_object* v___x_3869_; lean_object* v___x_3870_; uint8_t v___x_3871_; 
v___x_3869_ = l_Lean_Syntax_getArg(v___x_3865_, v___x_3848_);
lean_dec(v___x_3865_);
v___x_3870_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_3869_);
v___x_3871_ = l_Lean_Syntax_isOfKind(v___x_3869_, v___x_3870_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; 
lean_dec(v___x_3869_);
lean_dec(v___x_3863_);
lean_dec_ref(v___f_3862_);
lean_dec(v___x_3849_);
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v___x_3872_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3872_;
}
else
{
lean_object* v___x_3873_; lean_object* v___x_3875_; 
v___x_3873_ = l_Lean_Syntax_getArg(v___x_3869_, v___x_3857_);
lean_dec(v___x_3869_);
if (v_isShared_3841_ == 0)
{
lean_ctor_set_tag(v___x_3840_, 1);
lean_ctor_set(v___x_3840_, 0, v___x_3873_);
v___x_3875_ = v___x_3840_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v___x_3873_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
v___y_3625_ = v___x_3851_;
v___y_3626_ = v___x_3844_;
v___y_3627_ = v___x_3842_;
v___y_3628_ = v___x_3843_;
v___y_3629_ = v___f_3862_;
v___y_3630_ = v___x_3863_;
v___y_3631_ = v_a_3838_;
v___y_3632_ = v___x_3846_;
v___y_3633_ = v___x_3844_;
v___y_3634_ = v___x_3851_;
v___y_3635_ = v___x_3843_;
v___y_3636_ = v___x_3842_;
v___y_3637_ = v___x_3849_;
v_xType_x3f_3638_ = v___x_3875_;
v___y_3639_ = v___y_3829_;
v___y_3640_ = v___y_3830_;
v___y_3641_ = v___y_3831_;
v___y_3642_ = v___y_3832_;
v___y_3643_ = v___y_3833_;
v___y_3644_ = v___y_3834_;
v___y_3645_ = v___y_3835_;
goto v___jp_3624_;
}
}
}
}
else
{
lean_object* v___x_3877_; 
lean_dec(v___x_3865_);
lean_del_object(v___x_3840_);
v___x_3877_ = lean_box(0);
v___y_3625_ = v___x_3851_;
v___y_3626_ = v___x_3844_;
v___y_3627_ = v___x_3842_;
v___y_3628_ = v___x_3843_;
v___y_3629_ = v___f_3862_;
v___y_3630_ = v___x_3863_;
v___y_3631_ = v_a_3838_;
v___y_3632_ = v___x_3846_;
v___y_3633_ = v___x_3844_;
v___y_3634_ = v___x_3851_;
v___y_3635_ = v___x_3843_;
v___y_3636_ = v___x_3842_;
v___y_3637_ = v___x_3849_;
v_xType_x3f_3638_ = v___x_3877_;
v___y_3639_ = v___y_3829_;
v___y_3640_ = v___y_3830_;
v___y_3641_ = v___y_3831_;
v___y_3642_ = v___y_3832_;
v___y_3643_ = v___y_3833_;
v___y_3644_ = v___y_3834_;
v___y_3645_ = v___y_3835_;
goto v___jp_3624_;
}
}
}
}
else
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
lean_del_object(v___x_3840_);
lean_dec(v_a_3838_);
lean_dec(v_a_3592_);
v___x_3878_ = lean_box(v___x_3846_);
lean_inc(v___x_3849_);
v___x_3879_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetEqnsDecl___boxed), 4, 2);
lean_closure_set(v___x_3879_, 0, v___x_3849_);
lean_closure_set(v___x_3879_, 1, v___x_3878_);
v___x_3880_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v___x_3879_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
if (lean_obj_tag(v___x_3880_) == 0)
{
lean_object* v_a_3881_; lean_object* v_ref_3882_; uint8_t v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v_a_3881_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v___x_3880_, 1);
v_ref_3882_ = lean_ctor_get(v___y_3834_, 2);
v___x_3883_ = 0;
v___x_3884_ = l_Lean_SourceInfo_fromRef(v_ref_3882_, v___x_3883_);
v___x_3885_ = l_Lean_Syntax_node1(v___x_3884_, v___x_3845_, v_a_3881_);
lean_inc(v___x_3885_);
v___x_3886_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___boxed), 13, 5);
lean_closure_set(v___x_3886_, 0, v_config_3577_);
lean_closure_set(v___x_3886_, 1, v_letOrReassign_3578_);
lean_closure_set(v___x_3886_, 2, v___x_3885_);
lean_closure_set(v___x_3886_, 3, v_tk_3580_);
lean_closure_set(v___x_3886_, 4, v_a_3595_);
v___x_3887_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v___x_3849_, v___x_3885_, v___x_3886_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
return v___x_3887_;
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v___x_3849_);
lean_dec(v_a_3595_);
lean_dec(v_tk_3580_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3888_ = lean_ctor_get(v___x_3880_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3880_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3880_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3880_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
}
}
}
else
{
lean_dec(v_decl_3828_);
lean_dec(v_a_3595_);
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
return v___x_3837_;
}
}
}
else
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
lean_dec(v_a_3592_);
lean_dec(v_tk_3580_);
lean_dec(v_decl_3579_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3929_ = lean_ctor_get(v___x_3594_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3594_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3931_ = v___x_3594_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3594_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3929_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
lean_dec(v_a_3592_);
lean_dec_ref(v_dec_3581_);
lean_dec(v_tk_3580_);
lean_dec(v_decl_3579_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3937_ = lean_ctor_get(v___x_3593_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3593_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3939_ = v___x_3593_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3593_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
else
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3952_; 
lean_dec_ref(v_dec_3581_);
lean_dec(v_tk_3580_);
lean_dec(v_decl_3579_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3945_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3947_ = v___x_3591_;
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3591_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3950_; 
if (v_isShared_3948_ == 0)
{
v___x_3950_ = v___x_3947_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3945_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
else
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3960_; 
lean_dec_ref(v_dec_3581_);
lean_dec(v_tk_3580_);
lean_dec(v_decl_3579_);
lean_dec(v_letOrReassign_3578_);
lean_dec_ref(v_config_3577_);
v_a_3953_ = lean_ctor_get(v___x_3590_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3590_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3955_ = v___x_3590_;
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v___x_3590_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3958_; 
if (v_isShared_3956_ == 0)
{
v___x_3958_ = v___x_3955_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v_a_3953_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object* v_00_u03b2_3961_, lean_object* v_x_3962_, lean_object* v_x_3963_, lean_object* v_x_3964_){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_x_3962_, v_x_3963_, v_x_3964_);
return v___x_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object* v_cls_3966_, lean_object* v_msg_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_){
_start:
{
lean_object* v___x_3976_; 
v___x_3976_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_3966_, v_msg_3967_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_);
return v___x_3976_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object* v_cls_3977_, lean_object* v_msg_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(v_cls_3977_, v_msg_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec_ref(v___y_3979_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_){
_start:
{
lean_object* v___x_3996_; 
v___x_3996_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3993_, v___y_3994_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
lean_dec(v___y_4003_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec_ref(v___y_3997_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object* v_00_u03b1_4006_, lean_object* v_beforeStx_4007_, lean_object* v_afterStx_4008_, lean_object* v_x_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_){
_start:
{
lean_object* v___x_4018_; 
v___x_4018_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_4007_, v_afterStx_4008_, v_x_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object* v_00_u03b1_4019_, lean_object* v_beforeStx_4020_, lean_object* v_afterStx_4021_, lean_object* v_x_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v_res_4031_; 
v_res_4031_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(v_00_u03b1_4019_, v_beforeStx_4020_, v_afterStx_4021_, v_x_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec_ref(v___y_4023_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(lean_object* v_00_u03b1_4032_, lean_object* v_x_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v_x_4033_, v___y_4035_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___boxed(lean_object* v_00_u03b1_4037_, lean_object* v_x_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(v_00_u03b1_4037_, v_x_4038_, v___y_4039_, v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec_ref(v_x_4038_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object* v_00_u03b1_4042_, lean_object* v_ref_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_ref_4043_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object* v_00_u03b1_4053_, lean_object* v_ref_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(v_00_u03b1_4053_, v_ref_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec_ref(v___y_4055_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object* v_00_u03b1_4064_, lean_object* v_x_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object* v_00_u03b1_4075_, lean_object* v_x_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(v_00_u03b1_4075_, v_x_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_);
lean_dec(v___y_4083_);
lean_dec_ref(v___y_4082_);
lean_dec(v___y_4081_);
lean_dec_ref(v___y_4080_);
lean_dec(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec_ref(v___y_4077_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object* v_00_u03b2_4086_, lean_object* v_x_4087_, size_t v_x_4088_, size_t v_x_4089_, lean_object* v_x_4090_, lean_object* v_x_4091_){
_start:
{
lean_object* v___x_4092_; 
v___x_4092_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_4087_, v_x_4088_, v_x_4089_, v_x_4090_, v_x_4091_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4093_, lean_object* v_x_4094_, lean_object* v_x_4095_, lean_object* v_x_4096_, lean_object* v_x_4097_, lean_object* v_x_4098_){
_start:
{
size_t v_x_92413__boxed_4099_; size_t v_x_92414__boxed_4100_; lean_object* v_res_4101_; 
v_x_92413__boxed_4099_ = lean_unbox_usize(v_x_4095_);
lean_dec(v_x_4095_);
v_x_92414__boxed_4100_ = lean_unbox_usize(v_x_4096_);
lean_dec(v_x_4096_);
v_res_4101_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(v_00_u03b2_4093_, v_x_4094_, v_x_92413__boxed_4099_, v_x_92414__boxed_4100_, v_x_4097_, v_x_4098_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object* v_00_u03b1_4102_, lean_object* v_stx_4103_, lean_object* v_output_4104_, lean_object* v_x_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_stx_4103_, v_output_4104_, v_x_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4114_, lean_object* v_stx_4115_, lean_object* v_output_4116_, lean_object* v_x_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v_res_4125_; 
v_res_4125_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(v_00_u03b1_4114_, v_stx_4115_, v_output_4116_, v_x_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
lean_dec(v___y_4123_);
lean_dec_ref(v___y_4122_);
lean_dec(v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec(v___y_4119_);
lean_dec_ref(v___y_4118_);
return v_res_4125_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object* v_as_4126_, lean_object* v_as_x27_4127_, lean_object* v_b_4128_, lean_object* v_a_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v___x_4138_; 
v___x_4138_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_as_x27_4127_, v_b_4128_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object* v_as_4139_, lean_object* v_as_x27_4140_, lean_object* v_b_4141_, lean_object* v_a_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(v_as_4139_, v_as_x27_4140_, v_b_4141_, v_a_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
lean_dec(v___y_4145_);
lean_dec_ref(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v_as_x27_4140_);
lean_dec(v_as_4139_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4152_, lean_object* v_n_4153_, lean_object* v_k_4154_, lean_object* v_v_4155_){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v_n_4153_, v_k_4154_, v_v_4155_);
return v___x_4156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_4157_, size_t v_depth_4158_, lean_object* v_keys_4159_, lean_object* v_vals_4160_, lean_object* v_heq_4161_, lean_object* v_i_4162_, lean_object* v_entries_4163_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_4158_, v_keys_4159_, v_vals_4160_, v_i_4162_, v_entries_4163_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_4165_, lean_object* v_depth_4166_, lean_object* v_keys_4167_, lean_object* v_vals_4168_, lean_object* v_heq_4169_, lean_object* v_i_4170_, lean_object* v_entries_4171_){
_start:
{
size_t v_depth_boxed_4172_; lean_object* v_res_4173_; 
v_depth_boxed_4172_ = lean_unbox_usize(v_depth_4166_);
lean_dec(v_depth_4166_);
v_res_4173_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(v_00_u03b2_4165_, v_depth_boxed_4172_, v_keys_4167_, v_vals_4168_, v_heq_4169_, v_i_4170_, v_entries_4171_);
lean_dec_ref(v_vals_4168_);
lean_dec_ref(v_keys_4167_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v___x_4181_; 
v___x_4181_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_4179_);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___boxed(lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_);
lean_dec(v___y_4187_);
lean_dec_ref(v___y_4186_);
lean_dec(v___y_4185_);
lean_dec_ref(v___y_4184_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(lean_object* v_00_u03b1_4190_, lean_object* v_x_4191_, lean_object* v_mkInfoTree_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_){
_start:
{
lean_object* v___x_4200_; 
v___x_4200_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_4191_, v_mkInfoTree_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4201_, lean_object* v_x_4202_, lean_object* v_mkInfoTree_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(v_00_u03b1_4201_, v_x_4202_, v_mkInfoTree_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(lean_object* v_00_u03b2_4212_, lean_object* v_m_4213_, lean_object* v_a_4214_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v_m_4213_, v_a_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___boxed(lean_object* v_00_u03b2_4216_, lean_object* v_m_4217_, lean_object* v_a_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(v_00_u03b2_4216_, v_m_4217_, v_a_4218_);
lean_dec(v_a_4218_);
lean_dec_ref(v_m_4217_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13(lean_object* v_00_u03b2_4220_, lean_object* v_x_4221_, lean_object* v_x_4222_, lean_object* v_x_4223_, lean_object* v_x_4224_){
_start:
{
lean_object* v___x_4225_; 
v___x_4225_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(v_x_4221_, v_x_4222_, v_x_4223_, v_x_4224_);
return v___x_4225_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(lean_object* v_00_u03b2_4226_, lean_object* v_x_4227_, lean_object* v_x_4228_){
_start:
{
uint8_t v___x_4229_; 
v___x_4229_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v_x_4227_, v_x_4228_);
return v___x_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___boxed(lean_object* v_00_u03b2_4230_, lean_object* v_x_4231_, lean_object* v_x_4232_){
_start:
{
uint8_t v_res_4233_; lean_object* v_r_4234_; 
v_res_4233_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(v_00_u03b2_4230_, v_x_4231_, v_x_4232_);
lean_dec_ref(v_x_4232_);
lean_dec_ref(v_x_4231_);
v_r_4234_ = lean_box(v_res_4233_);
return v_r_4234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23(lean_object* v_00_u03b2_4235_, lean_object* v_a_4236_, lean_object* v_x_4237_){
_start:
{
lean_object* v___x_4238_; 
v___x_4238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___redArg(v_a_4236_, v_x_4237_);
return v___x_4238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23___boxed(lean_object* v_00_u03b2_4239_, lean_object* v_a_4240_, lean_object* v_x_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__23(v_00_u03b2_4239_, v_a_4240_, v_x_4241_);
lean_dec(v_x_4241_);
lean_dec(v_a_4240_);
return v_res_4242_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_4243_, lean_object* v_x_4244_, size_t v_x_4245_, lean_object* v_x_4246_){
_start:
{
uint8_t v___x_4247_; 
v___x_4247_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_4244_, v_x_4245_, v_x_4246_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_4248_, lean_object* v_x_4249_, lean_object* v_x_4250_, lean_object* v_x_4251_){
_start:
{
size_t v_x_92557__boxed_4252_; uint8_t v_res_4253_; lean_object* v_r_4254_; 
v_x_92557__boxed_4252_ = lean_unbox_usize(v_x_4250_);
lean_dec(v_x_4250_);
v_res_4253_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(v_00_u03b2_4248_, v_x_4249_, v_x_92557__boxed_4252_, v_x_4251_);
lean_dec_ref(v_x_4251_);
lean_dec_ref(v_x_4249_);
v_r_4254_ = lean_box(v_res_4253_);
return v_r_4254_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(lean_object* v_00_u03b2_4255_, lean_object* v_keys_4256_, lean_object* v_vals_4257_, lean_object* v_heq_4258_, lean_object* v_i_4259_, lean_object* v_k_4260_){
_start:
{
uint8_t v___x_4261_; 
v___x_4261_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_keys_4256_, v_i_4259_, v_k_4260_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___boxed(lean_object* v_00_u03b2_4262_, lean_object* v_keys_4263_, lean_object* v_vals_4264_, lean_object* v_heq_4265_, lean_object* v_i_4266_, lean_object* v_k_4267_){
_start:
{
uint8_t v_res_4268_; lean_object* v_r_4269_; 
v_res_4268_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(v_00_u03b2_4262_, v_keys_4263_, v_vals_4264_, v_heq_4265_, v_i_4266_, v_k_4267_);
lean_dec_ref(v_k_4267_);
lean_dec_ref(v_vals_4264_);
lean_dec_ref(v_keys_4263_);
v_r_4269_ = lean_box(v_res_4268_);
return v_r_4269_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1(void){
_start:
{
lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4271_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0));
v___x_4272_ = l_Lean_stringToMessageData(v___x_4271_);
return v___x_4272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object* v_letConfigStx_4273_, lean_object* v_mutTk_x3f_4274_, lean_object* v_initConfig_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_){
_start:
{
if (lean_obj_tag(v_mutTk_x3f_4274_) == 0)
{
lean_object* v___x_4284_; 
v___x_4284_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4273_, v_initConfig_4275_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_);
return v___x_4284_;
}
else
{
lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; uint8_t v___x_4289_; 
v___x_4285_ = lean_unsigned_to_nat(0u);
v___x_4286_ = l_Lean_Syntax_getArg(v_letConfigStx_4273_, v___x_4285_);
v___x_4287_ = l_Lean_Syntax_getArgs(v___x_4286_);
lean_dec(v___x_4286_);
v___x_4288_ = lean_array_get_size(v___x_4287_);
lean_dec_ref(v___x_4287_);
v___x_4289_ = lean_nat_dec_eq(v___x_4288_, v___x_4285_);
if (v___x_4289_ == 0)
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v_a_4292_; lean_object* v___x_4294_; uint8_t v_isShared_4295_; uint8_t v_isSharedCheck_4299_; 
lean_dec_ref(v_initConfig_4275_);
v___x_4290_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1);
v___x_4291_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_letConfigStx_4273_, v___x_4290_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_);
lean_dec(v_letConfigStx_4273_);
v_a_4292_ = lean_ctor_get(v___x_4291_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v___x_4291_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4294_ = v___x_4291_;
v_isShared_4295_ = v_isSharedCheck_4299_;
goto v_resetjp_4293_;
}
else
{
lean_inc(v_a_4292_);
lean_dec(v___x_4291_);
v___x_4294_ = lean_box(0);
v_isShared_4295_ = v_isSharedCheck_4299_;
goto v_resetjp_4293_;
}
v_resetjp_4293_:
{
lean_object* v___x_4297_; 
if (v_isShared_4295_ == 0)
{
v___x_4297_ = v___x_4294_;
goto v_reusejp_4296_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_a_4292_);
v___x_4297_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4296_;
}
v_reusejp_4296_:
{
return v___x_4297_;
}
}
}
else
{
lean_object* v___x_4300_; 
v___x_4300_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4273_, v_initConfig_4275_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_);
return v___x_4300_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object* v_letConfigStx_4301_, lean_object* v_mutTk_x3f_4302_, lean_object* v_initConfig_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_letConfigStx_4301_, v_mutTk_x3f_4302_, v_initConfig_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_);
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec(v_a_4306_);
lean_dec_ref(v_a_4305_);
lean_dec_ref(v_a_4304_);
lean_dec(v_mutTk_x3f_4302_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object* v_stx_4328_, lean_object* v_dec_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_){
_start:
{
lean_object* v___x_4338_; uint8_t v___x_4339_; 
v___x_4338_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
lean_inc(v_stx_4328_);
v___x_4339_ = l_Lean_Syntax_isOfKind(v_stx_4328_, v___x_4338_);
if (v___x_4339_ == 0)
{
lean_object* v___x_4340_; 
lean_dec_ref(v_dec_4329_);
lean_dec(v_stx_4328_);
v___x_4340_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4340_;
}
else
{
lean_object* v___x_4341_; lean_object* v_tk_4342_; lean_object* v_mutTk_x3f_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___x_4376_; lean_object* v___x_4377_; uint8_t v___x_4378_; 
v___x_4341_ = lean_unsigned_to_nat(0u);
v_tk_4342_ = l_Lean_Syntax_getArg(v_stx_4328_, v___x_4341_);
v___x_4376_ = lean_unsigned_to_nat(1u);
v___x_4377_ = l_Lean_Syntax_getArg(v_stx_4328_, v___x_4376_);
v___x_4378_ = l_Lean_Syntax_isNone(v___x_4377_);
if (v___x_4378_ == 0)
{
uint8_t v___x_4379_; 
lean_inc(v___x_4377_);
v___x_4379_ = l_Lean_Syntax_matchesNull(v___x_4377_, v___x_4376_);
if (v___x_4379_ == 0)
{
lean_object* v___x_4380_; 
lean_dec(v___x_4377_);
lean_dec(v_tk_4342_);
lean_dec_ref(v_dec_4329_);
lean_dec(v_stx_4328_);
v___x_4380_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4380_;
}
else
{
lean_object* v_mutTk_x3f_4381_; lean_object* v___x_4382_; 
v_mutTk_x3f_4381_ = l_Lean_Syntax_getArg(v___x_4377_, v___x_4341_);
lean_dec(v___x_4377_);
v___x_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4382_, 0, v_mutTk_x3f_4381_);
v_mutTk_x3f_4344_ = v___x_4382_;
v___y_4345_ = v_a_4330_;
v___y_4346_ = v_a_4331_;
v___y_4347_ = v_a_4332_;
v___y_4348_ = v_a_4333_;
v___y_4349_ = v_a_4334_;
v___y_4350_ = v_a_4335_;
v___y_4351_ = v_a_4336_;
goto v___jp_4343_;
}
}
else
{
lean_object* v___x_4383_; 
lean_dec(v___x_4377_);
v___x_4383_ = lean_box(0);
v_mutTk_x3f_4344_ = v___x_4383_;
v___y_4345_ = v_a_4330_;
v___y_4346_ = v_a_4331_;
v___y_4347_ = v_a_4332_;
v___y_4348_ = v_a_4333_;
v___y_4349_ = v_a_4334_;
v___y_4350_ = v_a_4335_;
v___y_4351_ = v_a_4336_;
goto v___jp_4343_;
}
v___jp_4343_:
{
lean_object* v___x_4352_; lean_object* v_config_4353_; lean_object* v___x_4354_; uint8_t v___x_4355_; 
v___x_4352_ = lean_unsigned_to_nat(2u);
v_config_4353_ = l_Lean_Syntax_getArg(v_stx_4328_, v___x_4352_);
v___x_4354_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_config_4353_);
v___x_4355_ = l_Lean_Syntax_isOfKind(v_config_4353_, v___x_4354_);
if (v___x_4355_ == 0)
{
lean_object* v___x_4356_; 
lean_dec(v_config_4353_);
lean_dec(v_mutTk_x3f_4344_);
lean_dec(v_tk_4342_);
lean_dec_ref(v_dec_4329_);
lean_dec(v_stx_4328_);
v___x_4356_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4356_;
}
else
{
lean_object* v___x_4357_; lean_object* v_decl_4358_; lean_object* v___x_4359_; uint8_t v___x_4360_; 
v___x_4357_ = lean_unsigned_to_nat(3u);
v_decl_4358_ = l_Lean_Syntax_getArg(v_stx_4328_, v___x_4357_);
lean_dec(v_stx_4328_);
v___x_4359_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4358_);
v___x_4360_ = l_Lean_Syntax_isOfKind(v_decl_4358_, v___x_4359_);
if (v___x_4360_ == 0)
{
lean_object* v___x_4361_; 
lean_dec(v_decl_4358_);
lean_dec(v_config_4353_);
lean_dec(v_mutTk_x3f_4344_);
lean_dec(v_tk_4342_);
lean_dec_ref(v_dec_4329_);
v___x_4361_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4361_;
}
else
{
uint8_t v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = 0;
v___x_4363_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_4364_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_config_4353_, v_mutTk_x3f_4344_, v___x_4363_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4364_) == 0)
{
lean_object* v_a_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
v_a_4365_ = lean_ctor_get(v___x_4364_, 0);
lean_inc(v_a_4365_);
lean_dec_ref_known(v___x_4364_, 1);
v___x_4366_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4366_, 0, v_mutTk_x3f_4344_);
lean_ctor_set_uint8(v___x_4366_, sizeof(void*)*1, v___x_4362_);
v___x_4367_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4365_, v___x_4366_, v_decl_4358_, v_tk_4342_, v_dec_4329_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
return v___x_4367_;
}
else
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4375_; 
lean_dec(v_decl_4358_);
lean_dec(v_mutTk_x3f_4344_);
lean_dec(v_tk_4342_);
lean_dec_ref(v_dec_4329_);
v_a_4368_ = lean_ctor_get(v___x_4364_, 0);
v_isSharedCheck_4375_ = !lean_is_exclusive(v___x_4364_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4370_ = v___x_4364_;
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___x_4364_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4373_; 
if (v_isShared_4371_ == 0)
{
v___x_4373_ = v___x_4370_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_a_4368_);
v___x_4373_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
return v___x_4373_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object* v_stx_4384_, lean_object* v_dec_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lean_Elab_Do_elabDoLet(v_stx_4384_, v_dec_4385_, v_a_4386_, v_a_4387_, v_a_4388_, v_a_4389_, v_a_4390_, v_a_4391_, v_a_4392_);
lean_dec(v_a_4392_);
lean_dec_ref(v_a_4391_);
lean_dec(v_a_4390_);
lean_dec_ref(v_a_4389_);
lean_dec(v_a_4388_);
lean_dec_ref(v_a_4387_);
lean_dec_ref(v_a_4386_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1(){
_start:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
v___x_4402_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4403_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_4404_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1));
v___x_4405_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLet___boxed), 10, 0);
v___x_4406_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4402_, v___x_4403_, v___x_4404_, v___x_4405_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object* v_a_4407_){
_start:
{
lean_object* v_res_4408_; 
v_res_4408_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object* v_stx_4423_, lean_object* v_dec_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_, lean_object* v_a_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_){
_start:
{
lean_object* v___x_4433_; uint8_t v___x_4434_; 
v___x_4433_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
lean_inc(v_stx_4423_);
v___x_4434_ = l_Lean_Syntax_isOfKind(v_stx_4423_, v___x_4433_);
if (v___x_4434_ == 0)
{
lean_object* v___x_4435_; 
lean_dec_ref(v_dec_4424_);
lean_dec(v_stx_4423_);
v___x_4435_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4435_;
}
else
{
lean_object* v___x_4436_; lean_object* v_tk_4437_; uint8_t v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4442_; lean_object* v___y_4443_; lean_object* v___y_4444_; lean_object* v___y_4445_; lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v___y_4448_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4468_; lean_object* v___y_4469_; lean_object* v___y_4470_; lean_object* v___y_4471_; lean_object* v_t_x3f_4472_; lean_object* v___y_4473_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___x_4498_; lean_object* v_mutTk_x3f_4500_; lean_object* v___y_4501_; lean_object* v___y_4502_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v___y_4505_; lean_object* v___y_4506_; lean_object* v___y_4507_; lean_object* v___x_4535_; uint8_t v___x_4536_; 
v___x_4436_ = lean_unsigned_to_nat(0u);
v_tk_4437_ = l_Lean_Syntax_getArg(v_stx_4423_, v___x_4436_);
v___x_4498_ = lean_unsigned_to_nat(1u);
v___x_4535_ = l_Lean_Syntax_getArg(v_stx_4423_, v___x_4498_);
v___x_4536_ = l_Lean_Syntax_isNone(v___x_4535_);
if (v___x_4536_ == 0)
{
uint8_t v___x_4537_; 
lean_inc(v___x_4535_);
v___x_4537_ = l_Lean_Syntax_matchesNull(v___x_4535_, v___x_4498_);
if (v___x_4537_ == 0)
{
lean_object* v___x_4538_; 
lean_dec(v___x_4535_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
lean_dec(v_stx_4423_);
v___x_4538_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4538_;
}
else
{
lean_object* v_mutTk_x3f_4539_; lean_object* v___x_4540_; 
v_mutTk_x3f_4539_ = l_Lean_Syntax_getArg(v___x_4535_, v___x_4436_);
lean_dec(v___x_4535_);
v___x_4540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4540_, 0, v_mutTk_x3f_4539_);
v_mutTk_x3f_4500_ = v___x_4540_;
v___y_4501_ = v_a_4425_;
v___y_4502_ = v_a_4426_;
v___y_4503_ = v_a_4427_;
v___y_4504_ = v_a_4428_;
v___y_4505_ = v_a_4429_;
v___y_4506_ = v_a_4430_;
v___y_4507_ = v_a_4431_;
goto v___jp_4499_;
}
}
else
{
lean_object* v___x_4541_; 
lean_dec(v___x_4535_);
v___x_4541_ = lean_box(0);
v_mutTk_x3f_4500_ = v___x_4541_;
v___y_4501_ = v_a_4425_;
v___y_4502_ = v_a_4426_;
v___y_4503_ = v_a_4427_;
v___y_4504_ = v_a_4428_;
v___y_4505_ = v_a_4429_;
v___y_4506_ = v_a_4430_;
v___y_4507_ = v_a_4431_;
goto v___jp_4499_;
}
v___jp_4438_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
lean_inc_ref(v___y_4452_);
v___x_4457_ = l_Array_append___redArg(v___y_4452_, v___y_4456_);
lean_dec_ref(v___y_4456_);
lean_inc(v___y_4443_);
lean_inc_n(v___y_4454_, 3);
v___x_4458_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4458_, 0, v___y_4454_);
lean_ctor_set(v___x_4458_, 1, v___y_4443_);
lean_ctor_set(v___x_4458_, 2, v___x_4457_);
v___x_4459_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4460_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4460_, 0, v___y_4454_);
lean_ctor_set(v___x_4460_, 1, v___x_4459_);
lean_inc(v___y_4440_);
v___x_4461_ = l_Lean_Syntax_node5(v___y_4454_, v___y_4440_, v___y_4441_, v___y_4447_, v___x_4458_, v___x_4460_, v___y_4446_);
lean_inc(v___y_4451_);
v___x_4462_ = l_Lean_Syntax_node1(v___y_4454_, v___y_4451_, v___x_4461_);
v___x_4463_ = lean_box(0);
v___x_4464_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*1, v___y_4439_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*1 + 1, v___y_4439_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*1 + 2, v___y_4439_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*1 + 3, v___y_4439_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*1 + 4, v___y_4439_);
v___x_4465_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4465_, 0, v___y_4444_);
lean_ctor_set_uint8(v___x_4465_, sizeof(void*)*1, v___x_4434_);
v___x_4466_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_4464_, v___x_4465_, v___x_4462_, v_tk_4437_, v_dec_4424_, v___y_4450_, v___y_4448_, v___y_4442_, v___y_4449_, v___y_4453_, v___y_4445_, v___y_4455_);
return v___x_4466_;
}
v___jp_4467_:
{
lean_object* v_ref_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; uint8_t v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v_ref_4480_ = lean_ctor_get(v___y_4478_, 2);
v___x_4481_ = lean_unsigned_to_nat(4u);
v___x_4482_ = l_Lean_Syntax_getArg(v___y_4470_, v___x_4481_);
lean_dec(v___y_4470_);
v___x_4483_ = 0;
v___x_4484_ = l_Lean_SourceInfo_fromRef(v_ref_4480_, v___x_4483_);
v___x_4485_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_4486_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___y_4469_);
lean_inc_n(v___x_4484_, 2);
v___x_4487_ = l_Lean_Syntax_node1(v___x_4484_, v___y_4469_, v___y_4468_);
v___x_4488_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4489_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_4490_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4484_);
lean_ctor_set(v___x_4490_, 1, v___x_4488_);
lean_ctor_set(v___x_4490_, 2, v___x_4489_);
if (lean_obj_tag(v_t_x3f_4472_) == 1)
{
lean_object* v_val_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v_val_4491_ = lean_ctor_get(v_t_x3f_4472_, 0);
lean_inc(v_val_4491_);
lean_dec_ref_known(v_t_x3f_4472_, 1);
v___x_4492_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
v___x_4493_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
lean_inc_n(v___x_4484_, 2);
v___x_4494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4484_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
v___x_4495_ = l_Lean_Syntax_node2(v___x_4484_, v___x_4492_, v___x_4494_, v_val_4491_);
v___x_4496_ = l_Array_mkArray1___redArg(v___x_4495_);
v___y_4439_ = v___x_4483_;
v___y_4440_ = v___x_4486_;
v___y_4441_ = v___x_4487_;
v___y_4442_ = v___y_4475_;
v___y_4443_ = v___x_4488_;
v___y_4444_ = v___y_4471_;
v___y_4445_ = v___y_4478_;
v___y_4446_ = v___x_4482_;
v___y_4447_ = v___x_4490_;
v___y_4448_ = v___y_4474_;
v___y_4449_ = v___y_4476_;
v___y_4450_ = v___y_4473_;
v___y_4451_ = v___x_4485_;
v___y_4452_ = v___x_4489_;
v___y_4453_ = v___y_4477_;
v___y_4454_ = v___x_4484_;
v___y_4455_ = v___y_4479_;
v___y_4456_ = v___x_4496_;
goto v___jp_4438_;
}
else
{
lean_object* v___x_4497_; 
lean_dec(v_t_x3f_4472_);
v___x_4497_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4439_ = v___x_4483_;
v___y_4440_ = v___x_4486_;
v___y_4441_ = v___x_4487_;
v___y_4442_ = v___y_4475_;
v___y_4443_ = v___x_4488_;
v___y_4444_ = v___y_4471_;
v___y_4445_ = v___y_4478_;
v___y_4446_ = v___x_4482_;
v___y_4447_ = v___x_4490_;
v___y_4448_ = v___y_4474_;
v___y_4449_ = v___y_4476_;
v___y_4450_ = v___y_4473_;
v___y_4451_ = v___x_4485_;
v___y_4452_ = v___x_4489_;
v___y_4453_ = v___y_4477_;
v___y_4454_ = v___x_4484_;
v___y_4455_ = v___y_4479_;
v___y_4456_ = v___x_4497_;
goto v___jp_4438_;
}
}
v___jp_4499_:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; uint8_t v___x_4511_; 
v___x_4508_ = lean_unsigned_to_nat(2u);
v___x_4509_ = l_Lean_Syntax_getArg(v_stx_4423_, v___x_4508_);
lean_dec(v_stx_4423_);
v___x_4510_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_4509_);
v___x_4511_ = l_Lean_Syntax_isOfKind(v___x_4509_, v___x_4510_);
if (v___x_4511_ == 0)
{
lean_object* v___x_4512_; 
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4512_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4512_;
}
else
{
lean_object* v___x_4513_; lean_object* v___x_4514_; uint8_t v___x_4515_; 
v___x_4513_ = l_Lean_Syntax_getArg(v___x_4509_, v___x_4436_);
v___x_4514_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc(v___x_4513_);
v___x_4515_ = l_Lean_Syntax_isOfKind(v___x_4513_, v___x_4514_);
if (v___x_4515_ == 0)
{
lean_object* v___x_4516_; 
lean_dec(v___x_4513_);
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4516_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4516_;
}
else
{
lean_object* v___x_4517_; lean_object* v___x_4518_; uint8_t v___x_4519_; 
v___x_4517_ = l_Lean_Syntax_getArg(v___x_4513_, v___x_4436_);
lean_dec(v___x_4513_);
v___x_4518_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v___x_4517_);
v___x_4519_ = l_Lean_Syntax_isOfKind(v___x_4517_, v___x_4518_);
if (v___x_4519_ == 0)
{
lean_object* v___x_4520_; 
lean_dec(v___x_4517_);
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4520_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4520_;
}
else
{
lean_object* v___x_4521_; uint8_t v___x_4522_; 
v___x_4521_ = l_Lean_Syntax_getArg(v___x_4509_, v___x_4498_);
v___x_4522_ = l_Lean_Syntax_matchesNull(v___x_4521_, v___x_4436_);
if (v___x_4522_ == 0)
{
lean_object* v___x_4523_; 
lean_dec(v___x_4517_);
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4523_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4523_;
}
else
{
lean_object* v___x_4524_; uint8_t v___x_4525_; 
v___x_4524_ = l_Lean_Syntax_getArg(v___x_4509_, v___x_4508_);
v___x_4525_ = l_Lean_Syntax_isNone(v___x_4524_);
if (v___x_4525_ == 0)
{
uint8_t v___x_4526_; 
lean_inc(v___x_4524_);
v___x_4526_ = l_Lean_Syntax_matchesNull(v___x_4524_, v___x_4498_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; 
lean_dec(v___x_4524_);
lean_dec(v___x_4517_);
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4527_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4527_;
}
else
{
lean_object* v___x_4528_; lean_object* v___x_4529_; uint8_t v___x_4530_; 
v___x_4528_ = l_Lean_Syntax_getArg(v___x_4524_, v___x_4436_);
lean_dec(v___x_4524_);
v___x_4529_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_4528_);
v___x_4530_ = l_Lean_Syntax_isOfKind(v___x_4528_, v___x_4529_);
if (v___x_4530_ == 0)
{
lean_object* v___x_4531_; 
lean_dec(v___x_4528_);
lean_dec(v___x_4517_);
lean_dec(v___x_4509_);
lean_dec(v_mutTk_x3f_4500_);
lean_dec(v_tk_4437_);
lean_dec_ref(v_dec_4424_);
v___x_4531_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4531_;
}
else
{
lean_object* v_t_x3f_4532_; lean_object* v___x_4533_; 
v_t_x3f_4532_ = l_Lean_Syntax_getArg(v___x_4528_, v___x_4498_);
lean_dec(v___x_4528_);
v___x_4533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4533_, 0, v_t_x3f_4532_);
v___y_4468_ = v___x_4517_;
v___y_4469_ = v___x_4514_;
v___y_4470_ = v___x_4509_;
v___y_4471_ = v_mutTk_x3f_4500_;
v_t_x3f_4472_ = v___x_4533_;
v___y_4473_ = v___y_4501_;
v___y_4474_ = v___y_4502_;
v___y_4475_ = v___y_4503_;
v___y_4476_ = v___y_4504_;
v___y_4477_ = v___y_4505_;
v___y_4478_ = v___y_4506_;
v___y_4479_ = v___y_4507_;
goto v___jp_4467_;
}
}
}
else
{
lean_object* v___x_4534_; 
lean_dec(v___x_4524_);
v___x_4534_ = lean_box(0);
v___y_4468_ = v___x_4517_;
v___y_4469_ = v___x_4514_;
v___y_4470_ = v___x_4509_;
v___y_4471_ = v_mutTk_x3f_4500_;
v_t_x3f_4472_ = v___x_4534_;
v___y_4473_ = v___y_4501_;
v___y_4474_ = v___y_4502_;
v___y_4475_ = v___y_4503_;
v___y_4476_ = v___y_4504_;
v___y_4477_ = v___y_4505_;
v___y_4478_ = v___y_4506_;
v___y_4479_ = v___y_4507_;
goto v___jp_4467_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object* v_stx_4542_, lean_object* v_dec_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_){
_start:
{
lean_object* v_res_4552_; 
v_res_4552_ = l_Lean_Elab_Do_elabDoErased(v_stx_4542_, v_dec_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_);
lean_dec(v_a_4550_);
lean_dec_ref(v_a_4549_);
lean_dec(v_a_4548_);
lean_dec_ref(v_a_4547_);
lean_dec(v_a_4546_);
lean_dec_ref(v_a_4545_);
lean_dec_ref(v_a_4544_);
return v_res_4552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1(){
_start:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4560_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4561_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4562_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1));
v___x_4563_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoErased___boxed), 10, 0);
v___x_4564_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4560_, v___x_4561_, v___x_4562_, v___x_4563_);
return v___x_4564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object* v_a_4565_){
_start:
{
lean_object* v_res_4566_; 
v_res_4566_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object* v_____do__lift_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_){
_start:
{
uint8_t v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___x_4570_ = 0;
v___x_4571_ = l_Lean_SourceInfo_fromRef(v_____do__lift_4567_, v___x_4570_);
v___x_4572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4572_, 0, v___x_4571_);
lean_ctor_set(v___x_4572_, 1, v___y_4569_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object* v_____do__lift_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_){
_start:
{
lean_object* v_res_4576_; 
v_res_4576_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_____do__lift_4573_, v___y_4574_, v___y_4575_);
lean_dec_ref(v___y_4574_);
lean_dec(v_____do__lift_4573_);
return v_res_4576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object* v_stx_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_){
_start:
{
lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4627_; lean_object* v___y_4628_; lean_object* v___y_4629_; lean_object* v___y_4630_; lean_object* v___y_4631_; lean_object* v___y_4632_; uint8_t v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___x_4662_; uint8_t v___x_4663_; 
v___x_4662_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
lean_inc(v_stx_4620_);
v___x_4663_ = l_Lean_Syntax_isOfKind(v_stx_4620_, v___x_4662_);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; 
lean_dec(v_stx_4620_);
v___x_4664_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4622_);
return v___x_4664_;
}
else
{
lean_object* v___x_4665_; lean_object* v_tk_4666_; lean_object* v___y_4668_; lean_object* v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; lean_object* v___y_4673_; lean_object* v___y_4674_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4680_; lean_object* v___y_4681_; uint8_t v___y_4682_; lean_object* v___y_4683_; lean_object* v___y_4684_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v_t_x3f_4715_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___x_4751_; lean_object* v_mutTk_x3f_4753_; lean_object* v___y_4754_; lean_object* v___y_4755_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v___x_4665_ = lean_unsigned_to_nat(0u);
v_tk_4666_ = l_Lean_Syntax_getArg(v_stx_4620_, v___x_4665_);
v___x_4751_ = lean_unsigned_to_nat(1u);
v___x_4776_ = l_Lean_Syntax_getArg(v_stx_4620_, v___x_4751_);
v___x_4777_ = l_Lean_Syntax_isNone(v___x_4776_);
if (v___x_4777_ == 0)
{
uint8_t v___x_4778_; 
lean_inc(v___x_4776_);
v___x_4778_ = l_Lean_Syntax_matchesNull(v___x_4776_, v___x_4751_);
if (v___x_4778_ == 0)
{
lean_object* v___x_4779_; 
lean_dec(v___x_4776_);
lean_dec(v_tk_4666_);
lean_dec(v_stx_4620_);
v___x_4779_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4622_);
return v___x_4779_;
}
else
{
lean_object* v_mutTk_x3f_4780_; lean_object* v___x_4781_; 
v_mutTk_x3f_4780_ = l_Lean_Syntax_getArg(v___x_4776_, v___x_4665_);
lean_dec(v___x_4776_);
v___x_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4781_, 0, v_mutTk_x3f_4780_);
v_mutTk_x3f_4753_ = v___x_4781_;
v___y_4754_ = v_a_4621_;
v___y_4755_ = v_a_4622_;
goto v___jp_4752_;
}
}
else
{
lean_object* v___x_4782_; 
lean_dec(v___x_4776_);
v___x_4782_ = lean_box(0);
v_mutTk_x3f_4753_ = v___x_4782_;
v___y_4754_ = v_a_4621_;
v___y_4755_ = v_a_4622_;
goto v___jp_4752_;
}
v___jp_4667_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v_a_4688_; lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4709_; 
lean_inc_ref(v___y_4673_);
v___x_4685_ = l_Array_append___redArg(v___y_4673_, v___y_4684_);
lean_dec_ref(v___y_4684_);
lean_inc(v___y_4668_);
lean_inc(v___y_4683_);
v___x_4686_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4686_, 0, v___y_4683_);
lean_ctor_set(v___x_4686_, 1, v___y_4668_);
lean_ctor_set(v___x_4686_, 2, v___x_4685_);
v___x_4687_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v___y_4671_, v___y_4669_, v___y_4676_);
v_a_4688_ = lean_ctor_get(v___x_4687_, 0);
v_a_4689_ = lean_ctor_get(v___x_4687_, 1);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4709_ == 0)
{
v___x_4691_ = v___x_4687_;
v_isShared_4692_ = v_isSharedCheck_4709_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_inc(v_a_4688_);
lean_dec(v___x_4687_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4709_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4693_; lean_object* v___x_4695_; 
v___x_4693_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__9));
lean_inc(v___y_4683_);
if (v_isShared_4692_ == 0)
{
lean_ctor_set_tag(v___x_4691_, 2);
lean_ctor_set(v___x_4691_, 1, v___x_4693_);
lean_ctor_set(v___x_4691_, 0, v___y_4683_);
v___x_4695_ = v___x_4691_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v___y_4683_);
lean_ctor_set(v_reuseFailAlloc_4708_, 1, v___x_4693_);
v___x_4695_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
lean_inc(v___y_4681_);
lean_inc(v___y_4674_);
lean_inc(v___y_4683_);
v___x_4696_ = l_Lean_Syntax_node4(v___y_4683_, v___y_4674_, v___y_4681_, v___x_4686_, v___x_4695_, v___y_4677_);
lean_inc(v___y_4678_);
v___x_4697_ = l_Lean_Syntax_node4(v___y_4683_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4675_, v___x_4696_);
v___x_4698_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4699_ = l_Lean_SourceInfo_fromRef(v_tk_4666_, v___x_4663_);
lean_dec(v_tk_4666_);
v___x_4700_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__10));
v___x_4701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4699_);
lean_ctor_set(v___x_4701_, 1, v___x_4700_);
if (lean_obj_tag(v___y_4670_) == 1)
{
lean_object* v_val_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v_val_4702_ = lean_ctor_get(v___y_4670_, 0);
lean_inc(v_val_4702_);
lean_dec_ref_known(v___y_4670_, 1);
v___x_4703_ = l_Lean_SourceInfo_fromRef(v_val_4702_, v___x_4663_);
lean_dec(v_val_4702_);
v___x_4704_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_4705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4705_, 0, v___x_4703_);
lean_ctor_set(v___x_4705_, 1, v___x_4704_);
v___x_4706_ = l_Array_mkArray1___redArg(v___x_4705_);
v___y_4624_ = v___y_4668_;
v___y_4625_ = v_a_4689_;
v___y_4626_ = v___x_4697_;
v___y_4627_ = v___y_4671_;
v___y_4628_ = v___y_4672_;
v___y_4629_ = v___y_4673_;
v___y_4630_ = v___x_4701_;
v___y_4631_ = v___x_4698_;
v___y_4632_ = v___y_4681_;
v___y_4633_ = v___y_4682_;
v___y_4634_ = v_a_4688_;
v___y_4635_ = v___x_4706_;
goto v___jp_4623_;
}
else
{
lean_object* v___x_4707_; 
lean_dec(v___y_4670_);
v___x_4707_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4624_ = v___y_4668_;
v___y_4625_ = v_a_4689_;
v___y_4626_ = v___x_4697_;
v___y_4627_ = v___y_4671_;
v___y_4628_ = v___y_4672_;
v___y_4629_ = v___y_4673_;
v___y_4630_ = v___x_4701_;
v___y_4631_ = v___x_4698_;
v___y_4632_ = v___y_4681_;
v___y_4633_ = v___y_4682_;
v___y_4634_ = v_a_4688_;
v___y_4635_ = v___x_4707_;
goto v___jp_4623_;
}
}
}
}
v___jp_4710_:
{
lean_object* v_quotContext_4718_; lean_object* v_currMacroScope_4719_; lean_object* v_ref_4720_; lean_object* v___x_4721_; lean_object* v_a_4722_; lean_object* v_a_4723_; lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4750_; 
v_quotContext_4718_ = lean_ctor_get(v___y_4716_, 1);
v_currMacroScope_4719_ = lean_ctor_get(v___y_4716_, 2);
v_ref_4720_ = lean_ctor_get(v___y_4716_, 5);
v___x_4721_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_ref_4720_, v___y_4716_, v___y_4717_);
v_a_4722_ = lean_ctor_get(v___x_4721_, 0);
v_a_4723_ = lean_ctor_get(v___x_4721_, 1);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4721_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4725_ = v___x_4721_;
v_isShared_4726_ = v_isSharedCheck_4750_;
goto v_resetjp_4724_;
}
else
{
lean_inc(v_a_4723_);
lean_inc(v_a_4722_);
lean_dec(v___x_4721_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4750_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; uint8_t v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4736_; 
v___x_4727_ = lean_unsigned_to_nat(3u);
v___x_4728_ = l_Lean_Syntax_getArg(v___y_4714_, v___x_4727_);
lean_dec(v___y_4714_);
v___x_4729_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
lean_inc(v_currMacroScope_4719_);
lean_inc(v_quotContext_4718_);
v___x_4730_ = l_Lean_addMacroScope(v_quotContext_4718_, v___x_4729_, v_currMacroScope_4719_);
v___x_4731_ = 0;
v___x_4732_ = l_Lean_mkIdentFrom(v___y_4713_, v___x_4730_, v___x_4731_);
v___x_4733_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_4734_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v_a_4722_);
if (v_isShared_4726_ == 0)
{
lean_ctor_set_tag(v___x_4725_, 2);
lean_ctor_set(v___x_4725_, 1, v___x_4734_);
v___x_4736_ = v___x_4725_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4722_);
lean_ctor_set(v_reuseFailAlloc_4749_, 1, v___x_4734_);
v___x_4736_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4735_;
}
v_reusejp_4735_:
{
lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; 
v___x_4737_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4738_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v_a_4722_, 2);
v___x_4739_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4739_, 0, v_a_4722_);
lean_ctor_set(v___x_4739_, 1, v___x_4737_);
lean_ctor_set(v___x_4739_, 2, v___x_4738_);
v___x_4740_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc_ref(v___x_4739_);
v___x_4741_ = l_Lean_Syntax_node1(v_a_4722_, v___x_4740_, v___x_4739_);
if (lean_obj_tag(v_t_x3f_4715_) == 1)
{
lean_object* v_val_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; 
v_val_4742_ = lean_ctor_get(v_t_x3f_4715_, 0);
lean_inc(v_val_4742_);
lean_dec_ref_known(v_t_x3f_4715_, 1);
v___x_4743_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
v___x_4744_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
lean_inc_n(v_a_4722_, 2);
v___x_4745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4745_, 0, v_a_4722_);
lean_ctor_set(v___x_4745_, 1, v___x_4744_);
v___x_4746_ = l_Lean_Syntax_node2(v_a_4722_, v___x_4743_, v___x_4745_, v_val_4742_);
v___x_4747_ = l_Array_mkArray1___redArg(v___x_4746_);
v___y_4668_ = v___x_4737_;
v___y_4669_ = v___y_4716_;
v___y_4670_ = v___y_4711_;
v___y_4671_ = v_ref_4720_;
v___y_4672_ = v___y_4713_;
v___y_4673_ = v___x_4738_;
v___y_4674_ = v___y_4712_;
v___y_4675_ = v___x_4741_;
v___y_4676_ = v_a_4723_;
v___y_4677_ = v___x_4728_;
v___y_4678_ = v___x_4733_;
v___y_4679_ = v___x_4736_;
v___y_4680_ = v___x_4739_;
v___y_4681_ = v___x_4732_;
v___y_4682_ = v___x_4731_;
v___y_4683_ = v_a_4722_;
v___y_4684_ = v___x_4747_;
goto v___jp_4667_;
}
else
{
lean_object* v___x_4748_; 
lean_dec(v_t_x3f_4715_);
v___x_4748_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4668_ = v___x_4737_;
v___y_4669_ = v___y_4716_;
v___y_4670_ = v___y_4711_;
v___y_4671_ = v_ref_4720_;
v___y_4672_ = v___y_4713_;
v___y_4673_ = v___x_4738_;
v___y_4674_ = v___y_4712_;
v___y_4675_ = v___x_4741_;
v___y_4676_ = v_a_4723_;
v___y_4677_ = v___x_4728_;
v___y_4678_ = v___x_4733_;
v___y_4679_ = v___x_4736_;
v___y_4680_ = v___x_4739_;
v___y_4681_ = v___x_4732_;
v___y_4682_ = v___x_4731_;
v___y_4683_ = v_a_4722_;
v___y_4684_ = v___x_4748_;
goto v___jp_4667_;
}
}
}
}
v___jp_4752_:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; uint8_t v___x_4759_; 
v___x_4756_ = lean_unsigned_to_nat(2u);
v___x_4757_ = l_Lean_Syntax_getArg(v_stx_4620_, v___x_4756_);
lean_dec(v_stx_4620_);
v___x_4758_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_4757_);
v___x_4759_ = l_Lean_Syntax_isOfKind(v___x_4757_, v___x_4758_);
if (v___x_4759_ == 0)
{
lean_object* v___x_4760_; 
lean_dec(v___x_4757_);
lean_dec(v_mutTk_x3f_4753_);
lean_dec(v_tk_4666_);
v___x_4760_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4755_);
return v___x_4760_;
}
else
{
lean_object* v___x_4761_; lean_object* v___x_4762_; uint8_t v___x_4763_; 
v___x_4761_ = l_Lean_Syntax_getArg(v___x_4757_, v___x_4665_);
v___x_4762_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v___x_4761_);
v___x_4763_ = l_Lean_Syntax_isOfKind(v___x_4761_, v___x_4762_);
if (v___x_4763_ == 0)
{
lean_object* v___x_4764_; 
lean_dec(v___x_4761_);
lean_dec(v___x_4757_);
lean_dec(v_mutTk_x3f_4753_);
lean_dec(v_tk_4666_);
v___x_4764_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4755_);
return v___x_4764_;
}
else
{
lean_object* v___x_4765_; uint8_t v___x_4766_; 
v___x_4765_ = l_Lean_Syntax_getArg(v___x_4757_, v___x_4751_);
v___x_4766_ = l_Lean_Syntax_isNone(v___x_4765_);
if (v___x_4766_ == 0)
{
uint8_t v___x_4767_; 
lean_inc(v___x_4765_);
v___x_4767_ = l_Lean_Syntax_matchesNull(v___x_4765_, v___x_4751_);
if (v___x_4767_ == 0)
{
lean_object* v___x_4768_; 
lean_dec(v___x_4765_);
lean_dec(v___x_4761_);
lean_dec(v___x_4757_);
lean_dec(v_mutTk_x3f_4753_);
lean_dec(v_tk_4666_);
v___x_4768_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4755_);
return v___x_4768_;
}
else
{
lean_object* v___x_4769_; lean_object* v___x_4770_; uint8_t v___x_4771_; 
v___x_4769_ = l_Lean_Syntax_getArg(v___x_4765_, v___x_4665_);
lean_dec(v___x_4765_);
v___x_4770_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_4769_);
v___x_4771_ = l_Lean_Syntax_isOfKind(v___x_4769_, v___x_4770_);
if (v___x_4771_ == 0)
{
lean_object* v___x_4772_; 
lean_dec(v___x_4769_);
lean_dec(v___x_4761_);
lean_dec(v___x_4757_);
lean_dec(v_mutTk_x3f_4753_);
lean_dec(v_tk_4666_);
v___x_4772_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4755_);
return v___x_4772_;
}
else
{
lean_object* v_t_x3f_4773_; lean_object* v___x_4774_; 
v_t_x3f_4773_ = l_Lean_Syntax_getArg(v___x_4769_, v___x_4751_);
lean_dec(v___x_4769_);
v___x_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4774_, 0, v_t_x3f_4773_);
v___y_4711_ = v_mutTk_x3f_4753_;
v___y_4712_ = v___x_4758_;
v___y_4713_ = v___x_4761_;
v___y_4714_ = v___x_4757_;
v_t_x3f_4715_ = v___x_4774_;
v___y_4716_ = v___y_4754_;
v___y_4717_ = v___y_4755_;
goto v___jp_4710_;
}
}
}
else
{
lean_object* v___x_4775_; 
lean_dec(v___x_4765_);
v___x_4775_ = lean_box(0);
v___y_4711_ = v_mutTk_x3f_4753_;
v___y_4712_ = v___x_4758_;
v___y_4713_ = v___x_4761_;
v___y_4714_ = v___x_4757_;
v_t_x3f_4715_ = v___x_4775_;
v___y_4716_ = v___y_4754_;
v___y_4717_ = v___y_4755_;
goto v___jp_4710_;
}
}
}
}
}
v___jp_4623_:
{
lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; 
lean_inc_ref_n(v___y_4629_, 3);
v___x_4636_ = l_Array_append___redArg(v___y_4629_, v___y_4635_);
lean_dec_ref(v___y_4635_);
lean_inc_n(v___y_4624_, 5);
lean_inc_n(v___y_4634_, 5);
v___x_4637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4637_, 0, v___y_4634_);
lean_ctor_set(v___x_4637_, 1, v___y_4624_);
lean_ctor_set(v___x_4637_, 2, v___x_4636_);
v___x_4638_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_4639_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
v___x_4640_ = l_Lean_Syntax_node1(v___y_4634_, v___x_4639_, v___y_4628_);
v___x_4641_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4641_, 0, v___y_4634_);
lean_ctor_set(v___x_4641_, 1, v___y_4624_);
lean_ctor_set(v___x_4641_, 2, v___y_4629_);
v___x_4642_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4643_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___y_4634_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
lean_inc_ref(v___x_4641_);
v___x_4644_ = l_Lean_Syntax_node5(v___y_4634_, v___x_4638_, v___x_4640_, v___x_4641_, v___x_4641_, v___x_4643_, v___y_4632_);
lean_inc(v___y_4631_);
v___x_4645_ = l_Lean_Syntax_node3(v___y_4634_, v___y_4631_, v___y_4630_, v___x_4637_, v___x_4644_);
v___x_4646_ = l_Lean_SourceInfo_fromRef(v___y_4627_, v___y_4633_);
v___x_4647_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_4648_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
lean_inc_n(v___x_4646_, 8);
v___x_4649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4646_);
lean_ctor_set(v___x_4649_, 1, v___x_4648_);
v___x_4650_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_4651_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_4652_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_4653_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4646_);
lean_ctor_set(v___x_4653_, 1, v___x_4652_);
v___x_4654_ = l_Lean_Syntax_node1(v___x_4646_, v___y_4624_, v___x_4653_);
v___x_4655_ = l_Lean_Syntax_node2(v___x_4646_, v___x_4651_, v___y_4626_, v___x_4654_);
v___x_4656_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4656_, 0, v___x_4646_);
lean_ctor_set(v___x_4656_, 1, v___y_4624_);
lean_ctor_set(v___x_4656_, 2, v___y_4629_);
v___x_4657_ = l_Lean_Syntax_node2(v___x_4646_, v___x_4651_, v___x_4645_, v___x_4656_);
v___x_4658_ = l_Lean_Syntax_node2(v___x_4646_, v___y_4624_, v___x_4655_, v___x_4657_);
v___x_4659_ = l_Lean_Syntax_node1(v___x_4646_, v___x_4650_, v___x_4658_);
v___x_4660_ = l_Lean_Syntax_node2(v___x_4646_, v___x_4647_, v___x_4649_, v___x_4659_);
v___x_4661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4661_, 0, v___x_4660_);
lean_ctor_set(v___x_4661_, 1, v___y_4625_);
return v___x_4661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object* v_stx_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Lean_Elab_Do_expandDoErasedArrow(v_stx_4783_, v_a_4784_, v_a_4785_);
lean_dec_ref(v_a_4784_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1(){
_start:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4794_ = l_Lean_Elab_macroAttribute;
v___x_4795_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
v___x_4796_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1));
v___x_4797_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_expandDoErasedArrow___boxed), 3, 0);
v___x_4798_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4794_, v___x_4795_, v___x_4796_, v___x_4797_);
return v___x_4798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object* v_a_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object* v_stx_4807_, lean_object* v_dec_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_, lean_object* v_a_4813_, lean_object* v_a_4814_, lean_object* v_a_4815_){
_start:
{
lean_object* v___x_4817_; uint8_t v___x_4818_; 
v___x_4817_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
lean_inc(v_stx_4807_);
v___x_4818_ = l_Lean_Syntax_isOfKind(v_stx_4807_, v___x_4817_);
if (v___x_4818_ == 0)
{
lean_object* v___x_4819_; 
lean_dec_ref(v_dec_4808_);
lean_dec(v_stx_4807_);
v___x_4819_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4819_;
}
else
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; 
v___x_4820_ = lean_unsigned_to_nat(1u);
v___x_4821_ = l_Lean_Syntax_getArg(v_stx_4807_, v___x_4820_);
v___x_4822_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v___x_4821_);
v___x_4823_ = l_Lean_Syntax_isOfKind(v___x_4821_, v___x_4822_);
if (v___x_4823_ == 0)
{
lean_object* v___x_4824_; 
lean_dec(v___x_4821_);
lean_dec_ref(v_dec_4808_);
lean_dec(v_stx_4807_);
v___x_4824_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4824_;
}
else
{
lean_object* v___x_4825_; lean_object* v_decl_4826_; lean_object* v___x_4827_; uint8_t v___x_4828_; 
v___x_4825_ = lean_unsigned_to_nat(2u);
v_decl_4826_ = l_Lean_Syntax_getArg(v_stx_4807_, v___x_4825_);
v___x_4827_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4826_);
v___x_4828_ = l_Lean_Syntax_isOfKind(v_decl_4826_, v___x_4827_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; 
lean_dec(v_decl_4826_);
lean_dec(v___x_4821_);
lean_dec_ref(v_dec_4808_);
lean_dec(v_stx_4807_);
v___x_4829_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4829_;
}
else
{
lean_object* v___x_4830_; lean_object* v_tk_4831_; uint8_t v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4830_ = lean_unsigned_to_nat(0u);
v_tk_4831_ = l_Lean_Syntax_getArg(v_stx_4807_, v___x_4830_);
lean_dec(v_stx_4807_);
v___x_4832_ = 0;
v___x_4833_ = lean_box(0);
v___x_4834_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4834_, 0, v___x_4833_);
lean_ctor_set_uint8(v___x_4834_, sizeof(void*)*1, v___x_4828_);
lean_ctor_set_uint8(v___x_4834_, sizeof(void*)*1 + 1, v___x_4832_);
lean_ctor_set_uint8(v___x_4834_, sizeof(void*)*1 + 2, v___x_4832_);
lean_ctor_set_uint8(v___x_4834_, sizeof(void*)*1 + 3, v___x_4832_);
lean_ctor_set_uint8(v___x_4834_, sizeof(void*)*1 + 4, v___x_4832_);
v___x_4835_ = l_Lean_Elab_Term_mkLetConfig(v___x_4821_, v___x_4834_, v_a_4810_, v_a_4811_, v_a_4812_, v_a_4813_, v_a_4814_, v_a_4815_);
if (lean_obj_tag(v___x_4835_) == 0)
{
lean_object* v_a_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v_a_4836_ = lean_ctor_get(v___x_4835_, 0);
lean_inc(v_a_4836_);
lean_dec_ref_known(v___x_4835_, 1);
v___x_4837_ = lean_box(1);
v___x_4838_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4836_, v___x_4837_, v_decl_4826_, v_tk_4831_, v_dec_4808_, v_a_4809_, v_a_4810_, v_a_4811_, v_a_4812_, v_a_4813_, v_a_4814_, v_a_4815_);
return v___x_4838_;
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
lean_dec(v_tk_4831_);
lean_dec(v_decl_4826_);
lean_dec_ref(v_dec_4808_);
v_a_4839_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v___x_4835_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_a_4839_);
lean_dec(v___x_4835_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object* v_stx_4847_, lean_object* v_dec_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_, lean_object* v_a_4855_, lean_object* v_a_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l_Lean_Elab_Do_elabDoHave(v_stx_4847_, v_dec_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_);
lean_dec(v_a_4855_);
lean_dec_ref(v_a_4854_);
lean_dec(v_a_4853_);
lean_dec_ref(v_a_4852_);
lean_dec(v_a_4851_);
lean_dec_ref(v_a_4850_);
lean_dec_ref(v_a_4849_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1(){
_start:
{
lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4865_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4866_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
v___x_4867_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1));
v___x_4868_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoHave___boxed), 10, 0);
v___x_4869_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4865_, v___x_4866_, v___x_4867_, v___x_4868_);
return v___x_4869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object* v_a_4870_){
_start:
{
lean_object* v_res_4871_; 
v_res_4871_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object* v___x_4874_, lean_object* v___x_4875_, lean_object* v___x_4876_, lean_object* v___x_4877_, lean_object* v_decls_4878_, lean_object* v_a_4879_, uint8_t v___x_4880_, lean_object* v_body_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
lean_object* v_ref_4890_; uint8_t v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v_ref_4890_ = lean_ctor_get(v___y_4887_, 2);
v___x_4891_ = 0;
v___x_4892_ = l_Lean_SourceInfo_fromRef(v_ref_4890_, v___x_4891_);
v___x_4893_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0));
v___x_4894_ = l_Lean_Name_mkStr4(v___x_4874_, v___x_4875_, v___x_4876_, v___x_4893_);
v___x_4895_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_4892_, 4);
v___x_4896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4896_, 0, v___x_4892_);
lean_ctor_set(v___x_4896_, 1, v___x_4895_);
v___x_4897_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1));
v___x_4898_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4898_, 0, v___x_4892_);
lean_ctor_set(v___x_4898_, 1, v___x_4897_);
v___x_4899_ = l_Lean_Syntax_node2(v___x_4892_, v___x_4877_, v___x_4896_, v___x_4898_);
v___x_4900_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_4901_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4892_);
lean_ctor_set(v___x_4901_, 1, v___x_4900_);
v___x_4902_ = l_Lean_Syntax_node4(v___x_4892_, v___x_4894_, v___x_4899_, v_decls_4878_, v___x_4901_, v_body_4881_);
v___x_4903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4903_, 0, v_a_4879_);
v___x_4904_ = l_Lean_Elab_Term_elabTerm(v___x_4902_, v___x_4903_, v___x_4880_, v___x_4880_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object* v___x_4905_, lean_object* v___x_4906_, lean_object* v___x_4907_, lean_object* v___x_4908_, lean_object* v_decls_4909_, lean_object* v_a_4910_, lean_object* v___x_4911_, lean_object* v_body_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_){
_start:
{
uint8_t v___x_4492__boxed_4921_; lean_object* v_res_4922_; 
v___x_4492__boxed_4921_ = lean_unbox(v___x_4911_);
v_res_4922_ = l_Lean_Elab_Do_elabDoLetRec___lam__0(v___x_4905_, v___x_4906_, v___x_4907_, v___x_4908_, v_decls_4909_, v_a_4910_, v___x_4492__boxed_4921_, v_body_4912_, v___y_4913_, v___y_4914_, v___y_4915_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
lean_dec(v___y_4919_);
lean_dec_ref(v___y_4918_);
lean_dec(v___y_4917_);
lean_dec_ref(v___y_4916_);
lean_dec(v___y_4915_);
lean_dec_ref(v___y_4914_);
lean_dec_ref(v___y_4913_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object* v_a_4923_, lean_object* v_a_4924_){
_start:
{
if (lean_obj_tag(v_a_4923_) == 0)
{
lean_object* v___x_4925_; 
v___x_4925_ = l_List_reverse___redArg(v_a_4924_);
return v___x_4925_;
}
else
{
lean_object* v_head_4926_; lean_object* v_tail_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4936_; 
v_head_4926_ = lean_ctor_get(v_a_4923_, 0);
v_tail_4927_ = lean_ctor_get(v_a_4923_, 1);
v_isSharedCheck_4936_ = !lean_is_exclusive(v_a_4923_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4929_ = v_a_4923_;
v_isShared_4930_ = v_isSharedCheck_4936_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_tail_4927_);
lean_inc(v_head_4926_);
lean_dec(v_a_4923_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4936_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4931_; lean_object* v___x_4933_; 
v___x_4931_ = l_Lean_MessageData_ofSyntax(v_head_4926_);
if (v_isShared_4930_ == 0)
{
lean_ctor_set(v___x_4929_, 1, v_a_4924_);
lean_ctor_set(v___x_4929_, 0, v___x_4931_);
v___x_4933_ = v___x_4929_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v___x_4931_);
lean_ctor_set(v_reuseFailAlloc_4935_, 1, v_a_4924_);
v___x_4933_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
v_a_4923_ = v_tail_4927_;
v_a_4924_ = v___x_4933_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__7(void){
_start:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4953_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__6));
v___x_4954_ = l_Lean_stringToMessageData(v___x_4953_);
return v___x_4954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object* v_stx_4955_, lean_object* v_dec_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v_a_4960_, lean_object* v_a_4961_, lean_object* v_a_4962_, lean_object* v_a_4963_){
_start:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; uint8_t v___x_4969_; 
v___x_4965_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_4966_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_4967_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_4968_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
lean_inc(v_stx_4955_);
v___x_4969_ = l_Lean_Syntax_isOfKind(v_stx_4955_, v___x_4968_);
if (v___x_4969_ == 0)
{
lean_object* v___x_4970_; 
lean_dec_ref(v_dec_4956_);
lean_dec(v_stx_4955_);
v___x_4970_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4970_;
}
else
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; uint8_t v___x_4974_; 
v___x_4971_ = lean_unsigned_to_nat(0u);
v___x_4972_ = l_Lean_Syntax_getArg(v_stx_4955_, v___x_4971_);
v___x_4973_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__3));
lean_inc(v___x_4972_);
v___x_4974_ = l_Lean_Syntax_isOfKind(v___x_4972_, v___x_4973_);
if (v___x_4974_ == 0)
{
lean_object* v___x_4975_; 
lean_dec(v___x_4972_);
lean_dec_ref(v_dec_4956_);
lean_dec(v_stx_4955_);
v___x_4975_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4975_;
}
else
{
lean_object* v___x_4976_; lean_object* v_decls_4977_; lean_object* v___x_4978_; uint8_t v___x_4979_; 
v___x_4976_ = lean_unsigned_to_nat(1u);
v_decls_4977_ = l_Lean_Syntax_getArg(v_stx_4955_, v___x_4976_);
lean_dec(v_stx_4955_);
v___x_4978_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__5));
lean_inc(v_decls_4977_);
v___x_4979_ = l_Lean_Syntax_isOfKind(v_decls_4977_, v___x_4978_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; 
lean_dec(v_decls_4977_);
lean_dec(v___x_4972_);
lean_dec_ref(v_dec_4956_);
v___x_4980_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4980_;
}
else
{
lean_object* v_tk_4981_; lean_object* v___x_4982_; 
v_tk_4981_ = l_Lean_Syntax_getArg(v___x_4972_, v___x_4971_);
lean_dec(v___x_4972_);
v___x_4982_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4956_, v_tk_4981_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_);
lean_dec(v_tk_4981_);
if (lean_obj_tag(v___x_4982_) == 0)
{
lean_object* v_a_4983_; lean_object* v___x_4984_; 
v_a_4983_ = lean_ctor_get(v___x_4982_, 0);
lean_inc(v_a_4983_);
lean_dec_ref_known(v___x_4982_, 1);
lean_inc(v_decls_4977_);
v___x_4984_ = l_Lean_Elab_Do_getLetRecDeclsVars(v_decls_4977_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_);
if (lean_obj_tag(v___x_4984_) == 0)
{
lean_object* v_a_4985_; lean_object* v_doBlockResultType_4986_; lean_object* v___x_4987_; 
v_a_4985_ = lean_ctor_get(v___x_4984_, 0);
lean_inc(v_a_4985_);
lean_dec_ref_known(v___x_4984_, 1);
v_doBlockResultType_4986_ = lean_ctor_get(v_a_4957_, 3);
lean_inc_ref(v_doBlockResultType_4986_);
v___x_4987_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_4986_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_);
if (lean_obj_tag(v___x_4987_) == 0)
{
lean_object* v_a_4988_; lean_object* v___x_4989_; lean_object* v___f_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; 
v_a_4988_ = lean_ctor_get(v___x_4987_, 0);
lean_inc(v_a_4988_);
lean_dec_ref_known(v___x_4987_, 1);
v___x_4989_ = lean_box(v___x_4979_);
v___f_4990_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed), 16, 7);
lean_closure_set(v___f_4990_, 0, v___x_4965_);
lean_closure_set(v___f_4990_, 1, v___x_4966_);
lean_closure_set(v___f_4990_, 2, v___x_4967_);
lean_closure_set(v___f_4990_, 3, v___x_4973_);
lean_closure_set(v___f_4990_, 4, v_decls_4977_);
lean_closure_set(v___f_4990_, 5, v_a_4988_);
lean_closure_set(v___f_4990_, 6, v___x_4989_);
v___x_4991_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__7, &l_Lean_Elab_Do_elabDoLetRec___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__7);
v___x_4992_ = lean_array_to_list(v_a_4985_);
v___x_4993_ = lean_box(0);
v___x_4994_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(v___x_4992_, v___x_4993_);
v___x_4995_ = l_Lean_MessageData_ofList(v___x_4994_);
v___x_4996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4996_, 0, v___x_4991_);
lean_ctor_set(v___x_4996_, 1, v___x_4995_);
v___x_4997_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_4997_, 0, v_a_4983_);
v___x_4998_ = lean_box(0);
v___x_4999_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_4996_, v___x_4997_, v___f_4990_, v___x_4998_, v_a_4957_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_);
return v___x_4999_;
}
else
{
lean_dec(v_a_4985_);
lean_dec(v_a_4983_);
lean_dec(v_decls_4977_);
return v___x_4987_;
}
}
else
{
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5007_; 
lean_dec(v_a_4983_);
lean_dec(v_decls_4977_);
v_a_5000_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_5002_ = v___x_4984_;
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v___x_4984_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_a_5000_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
return v___x_5005_;
}
}
}
}
else
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
lean_dec(v_decls_4977_);
v_a_5008_ = lean_ctor_get(v___x_4982_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5010_ = v___x_4982_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_4982_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5008_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object* v_stx_5016_, lean_object* v_dec_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_, lean_object* v_a_5024_, lean_object* v_a_5025_){
_start:
{
lean_object* v_res_5026_; 
v_res_5026_ = l_Lean_Elab_Do_elabDoLetRec(v_stx_5016_, v_dec_5017_, v_a_5018_, v_a_5019_, v_a_5020_, v_a_5021_, v_a_5022_, v_a_5023_, v_a_5024_);
lean_dec(v_a_5024_);
lean_dec_ref(v_a_5023_);
lean_dec(v_a_5022_);
lean_dec_ref(v_a_5021_);
lean_dec(v_a_5020_);
lean_dec_ref(v_a_5019_);
lean_dec_ref(v_a_5018_);
return v_res_5026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1(){
_start:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; 
v___x_5034_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5035_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
v___x_5036_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1));
v___x_5037_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___boxed), 10, 0);
v___x_5038_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5034_, v___x_5035_, v___x_5036_, v___x_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object* v_a_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object* v_stx_5047_, lean_object* v_dec_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_){
_start:
{
lean_object* v___y_5058_; lean_object* v___y_5059_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5063_; lean_object* v___y_5064_; lean_object* v___y_5065_; lean_object* v___y_5066_; lean_object* v___y_5067_; uint8_t v___y_5068_; lean_object* v___y_5069_; lean_object* v___y_5070_; lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v___y_5073_; lean_object* v___y_5074_; lean_object* v___x_5090_; uint8_t v___x_5091_; 
v___x_5090_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
lean_inc(v_stx_5047_);
v___x_5091_ = l_Lean_Syntax_isOfKind(v_stx_5047_, v___x_5090_);
if (v___x_5091_ == 0)
{
lean_object* v___x_5092_; 
lean_dec_ref(v_dec_5048_);
lean_dec(v_stx_5047_);
v___x_5092_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5092_;
}
else
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; uint8_t v___x_5096_; 
v___x_5093_ = lean_unsigned_to_nat(0u);
v___x_5094_ = l_Lean_Syntax_getArg(v_stx_5047_, v___x_5093_);
lean_dec(v_stx_5047_);
v___x_5095_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_5094_);
v___x_5096_ = l_Lean_Syntax_isOfKind(v___x_5094_, v___x_5095_);
if (v___x_5096_ == 0)
{
if (v___x_5096_ == 0)
{
lean_object* v___x_5108_; uint8_t v___x_5109_; 
v___x_5108_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_5094_);
v___x_5109_ = l_Lean_Syntax_isOfKind(v___x_5094_, v___x_5108_);
if (v___x_5109_ == 0)
{
lean_object* v___x_5110_; 
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5110_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5110_;
}
else
{
goto v___jp_5097_;
}
}
else
{
goto v___jp_5097_;
}
}
else
{
lean_object* v___x_5111_; lean_object* v___x_5112_; uint8_t v___x_5113_; 
v___x_5111_ = l_Lean_Syntax_getArg(v___x_5094_, v___x_5093_);
v___x_5112_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc(v___x_5111_);
v___x_5113_ = l_Lean_Syntax_isOfKind(v___x_5111_, v___x_5112_);
if (v___x_5113_ == 0)
{
lean_object* v___x_5114_; 
lean_dec(v___x_5111_);
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5114_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5114_;
}
else
{
lean_object* v___x_5115_; lean_object* v_xType_x3f_5117_; lean_object* v___y_5118_; lean_object* v___y_5119_; lean_object* v___y_5120_; lean_object* v___y_5121_; lean_object* v___y_5122_; lean_object* v___y_5123_; lean_object* v___y_5124_; lean_object* v___x_5144_; uint8_t v___x_5145_; 
v___x_5115_ = l_Lean_Syntax_getArg(v___x_5111_, v___x_5093_);
lean_dec(v___x_5111_);
v___x_5144_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v___x_5115_);
v___x_5145_ = l_Lean_Syntax_isOfKind(v___x_5115_, v___x_5144_);
if (v___x_5145_ == 0)
{
lean_object* v___x_5146_; 
lean_dec(v___x_5115_);
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5146_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5146_;
}
else
{
lean_object* v___x_5147_; lean_object* v___x_5148_; uint8_t v___x_5149_; 
v___x_5147_ = lean_unsigned_to_nat(1u);
v___x_5148_ = l_Lean_Syntax_getArg(v___x_5094_, v___x_5147_);
v___x_5149_ = l_Lean_Syntax_matchesNull(v___x_5148_, v___x_5093_);
if (v___x_5149_ == 0)
{
lean_object* v___x_5150_; 
lean_dec(v___x_5115_);
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5150_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5150_;
}
else
{
lean_object* v___x_5151_; lean_object* v___x_5152_; uint8_t v___x_5153_; 
v___x_5151_ = lean_unsigned_to_nat(2u);
v___x_5152_ = l_Lean_Syntax_getArg(v___x_5094_, v___x_5151_);
v___x_5153_ = l_Lean_Syntax_isNone(v___x_5152_);
if (v___x_5153_ == 0)
{
uint8_t v___x_5154_; 
lean_inc(v___x_5152_);
v___x_5154_ = l_Lean_Syntax_matchesNull(v___x_5152_, v___x_5147_);
if (v___x_5154_ == 0)
{
lean_object* v___x_5155_; 
lean_dec(v___x_5152_);
lean_dec(v___x_5115_);
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5155_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5155_;
}
else
{
lean_object* v___x_5156_; lean_object* v___x_5157_; uint8_t v___x_5158_; 
v___x_5156_ = l_Lean_Syntax_getArg(v___x_5152_, v___x_5093_);
lean_dec(v___x_5152_);
v___x_5157_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_5156_);
v___x_5158_ = l_Lean_Syntax_isOfKind(v___x_5156_, v___x_5157_);
if (v___x_5158_ == 0)
{
lean_object* v___x_5159_; 
lean_dec(v___x_5156_);
lean_dec(v___x_5115_);
lean_dec(v___x_5094_);
lean_dec_ref(v_dec_5048_);
v___x_5159_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5159_;
}
else
{
lean_object* v_xType_x3f_5160_; lean_object* v___x_5161_; 
v_xType_x3f_5160_ = l_Lean_Syntax_getArg(v___x_5156_, v___x_5147_);
lean_dec(v___x_5156_);
v___x_5161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5161_, 0, v_xType_x3f_5160_);
v_xType_x3f_5117_ = v___x_5161_;
v___y_5118_ = v_a_5049_;
v___y_5119_ = v_a_5050_;
v___y_5120_ = v_a_5051_;
v___y_5121_ = v_a_5052_;
v___y_5122_ = v_a_5053_;
v___y_5123_ = v_a_5054_;
v___y_5124_ = v_a_5055_;
goto v___jp_5116_;
}
}
}
else
{
lean_object* v___x_5162_; 
lean_dec(v___x_5152_);
v___x_5162_ = lean_box(0);
v_xType_x3f_5117_ = v___x_5162_;
v___y_5118_ = v_a_5049_;
v___y_5119_ = v_a_5050_;
v___y_5120_ = v_a_5051_;
v___y_5121_ = v_a_5052_;
v___y_5122_ = v_a_5053_;
v___y_5123_ = v_a_5054_;
v___y_5124_ = v_a_5055_;
goto v___jp_5116_;
}
}
}
v___jp_5116_:
{
lean_object* v_ref_5125_; lean_object* v___x_5126_; lean_object* v_tk_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; uint8_t v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; 
v_ref_5125_ = lean_ctor_get(v___y_5123_, 2);
v___x_5126_ = lean_unsigned_to_nat(3u);
v_tk_5127_ = l_Lean_Syntax_getArg(v___x_5094_, v___x_5126_);
v___x_5128_ = lean_unsigned_to_nat(4u);
v___x_5129_ = l_Lean_Syntax_getArg(v___x_5094_, v___x_5128_);
lean_dec(v___x_5094_);
v___x_5130_ = 0;
v___x_5131_ = l_Lean_SourceInfo_fromRef(v_ref_5125_, v___x_5130_);
v___x_5132_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc_n(v___x_5131_, 2);
v___x_5133_ = l_Lean_Syntax_node1(v___x_5131_, v___x_5112_, v___x_5115_);
v___x_5134_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5135_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5136_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5136_, 0, v___x_5131_);
lean_ctor_set(v___x_5136_, 1, v___x_5134_);
lean_ctor_set(v___x_5136_, 2, v___x_5135_);
if (lean_obj_tag(v_xType_x3f_5117_) == 1)
{
lean_object* v_val_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v_val_5137_ = lean_ctor_get(v_xType_x3f_5117_, 0);
lean_inc(v_val_5137_);
lean_dec_ref_known(v_xType_x3f_5117_, 1);
v___x_5138_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
v___x_5139_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
lean_inc_n(v___x_5131_, 2);
v___x_5140_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5131_);
lean_ctor_set(v___x_5140_, 1, v___x_5139_);
v___x_5141_ = l_Lean_Syntax_node2(v___x_5131_, v___x_5138_, v___x_5140_, v_val_5137_);
v___x_5142_ = l_Array_mkArray1___redArg(v___x_5141_);
v___y_5058_ = v___x_5136_;
v___y_5059_ = v___x_5134_;
v___y_5060_ = v___y_5122_;
v___y_5061_ = v_tk_5127_;
v___y_5062_ = v___y_5119_;
v___y_5063_ = v___y_5121_;
v___y_5064_ = v___x_5131_;
v___y_5065_ = v___y_5123_;
v___y_5066_ = v___x_5133_;
v___y_5067_ = v___y_5118_;
v___y_5068_ = v___x_5130_;
v___y_5069_ = v___x_5135_;
v___y_5070_ = v___y_5120_;
v___y_5071_ = v___y_5124_;
v___y_5072_ = v___x_5132_;
v___y_5073_ = v___x_5129_;
v___y_5074_ = v___x_5142_;
goto v___jp_5057_;
}
else
{
lean_object* v___x_5143_; 
lean_dec(v_xType_x3f_5117_);
v___x_5143_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_5058_ = v___x_5136_;
v___y_5059_ = v___x_5134_;
v___y_5060_ = v___y_5122_;
v___y_5061_ = v_tk_5127_;
v___y_5062_ = v___y_5119_;
v___y_5063_ = v___y_5121_;
v___y_5064_ = v___x_5131_;
v___y_5065_ = v___y_5123_;
v___y_5066_ = v___x_5133_;
v___y_5067_ = v___y_5118_;
v___y_5068_ = v___x_5130_;
v___y_5069_ = v___x_5135_;
v___y_5070_ = v___y_5120_;
v___y_5071_ = v___y_5124_;
v___y_5072_ = v___x_5132_;
v___y_5073_ = v___x_5129_;
v___y_5074_ = v___x_5143_;
goto v___jp_5057_;
}
}
}
}
v___jp_5097_:
{
lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v_decl_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; 
v___x_5098_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5099_ = lean_unsigned_to_nat(1u);
v___x_5100_ = lean_mk_empty_array_with_capacity(v___x_5099_);
v___x_5101_ = lean_array_push(v___x_5100_, v___x_5094_);
v___x_5102_ = lean_box(2);
v_decl_5103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_decl_5103_, 0, v___x_5102_);
lean_ctor_set(v_decl_5103_, 1, v___x_5098_);
lean_ctor_set(v_decl_5103_, 2, v___x_5101_);
v___x_5104_ = lean_box(0);
v___x_5105_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5105_, 0, v___x_5104_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1, v___x_5096_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 1, v___x_5096_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 2, v___x_5096_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 3, v___x_5096_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 4, v___x_5096_);
v___x_5106_ = lean_box(2);
lean_inc_ref(v_decl_5103_);
v___x_5107_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5105_, v___x_5106_, v_decl_5103_, v_decl_5103_, v_dec_5048_, v_a_5049_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_, v_a_5055_);
return v___x_5107_;
}
}
v___jp_5057_:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; 
lean_inc_ref(v___y_5069_);
v___x_5075_ = l_Array_append___redArg(v___y_5069_, v___y_5074_);
lean_dec_ref(v___y_5074_);
lean_inc(v___y_5059_);
lean_inc_n(v___y_5064_, 2);
v___x_5076_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5076_, 0, v___y_5064_);
lean_ctor_set(v___x_5076_, 1, v___y_5059_);
lean_ctor_set(v___x_5076_, 2, v___x_5075_);
v___x_5077_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___y_5064_);
lean_ctor_set(v___x_5078_, 1, v___x_5077_);
lean_inc(v___y_5072_);
v___x_5079_ = l_Lean_Syntax_node5(v___y_5064_, v___y_5072_, v___y_5066_, v___y_5058_, v___x_5076_, v___x_5078_, v___y_5073_);
v___x_5080_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5081_ = lean_unsigned_to_nat(1u);
v___x_5082_ = lean_mk_empty_array_with_capacity(v___x_5081_);
v___x_5083_ = lean_array_push(v___x_5082_, v___x_5079_);
v___x_5084_ = lean_box(2);
v___x_5085_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5084_);
lean_ctor_set(v___x_5085_, 1, v___x_5080_);
lean_ctor_set(v___x_5085_, 2, v___x_5083_);
v___x_5086_ = lean_box(0);
v___x_5087_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5087_, 0, v___x_5086_);
lean_ctor_set_uint8(v___x_5087_, sizeof(void*)*1, v___y_5068_);
lean_ctor_set_uint8(v___x_5087_, sizeof(void*)*1 + 1, v___y_5068_);
lean_ctor_set_uint8(v___x_5087_, sizeof(void*)*1 + 2, v___y_5068_);
lean_ctor_set_uint8(v___x_5087_, sizeof(void*)*1 + 3, v___y_5068_);
lean_ctor_set_uint8(v___x_5087_, sizeof(void*)*1 + 4, v___y_5068_);
v___x_5088_ = lean_box(2);
v___x_5089_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5087_, v___x_5088_, v___x_5085_, v___y_5061_, v_dec_5048_, v___y_5067_, v___y_5062_, v___y_5070_, v___y_5063_, v___y_5060_, v___y_5065_, v___y_5071_);
return v___x_5089_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object* v_stx_5163_, lean_object* v_dec_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_, lean_object* v_a_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l_Lean_Elab_Do_elabDoReassign(v_stx_5163_, v_dec_5164_, v_a_5165_, v_a_5166_, v_a_5167_, v_a_5168_, v_a_5169_, v_a_5170_, v_a_5171_);
lean_dec(v_a_5171_);
lean_dec_ref(v_a_5170_);
lean_dec(v_a_5169_);
lean_dec_ref(v_a_5168_);
lean_dec(v_a_5167_);
lean_dec_ref(v_a_5166_);
lean_dec_ref(v_a_5165_);
return v_res_5173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1(){
_start:
{
lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; 
v___x_5181_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5182_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_5183_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1));
v___x_5184_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassign___boxed), 10, 0);
v___x_5185_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5181_, v___x_5182_, v___x_5183_, v___x_5184_);
return v___x_5185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object* v_a_5186_){
_start:
{
lean_object* v_res_5187_; 
v_res_5187_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object* v_____do__lift_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_){
_start:
{
uint8_t v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v___x_5197_ = 0;
v___x_5198_ = l_Lean_SourceInfo_fromRef(v_____do__lift_5188_, v___x_5197_);
v___x_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
return v___x_5199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object* v_____do__lift_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_){
_start:
{
lean_object* v_res_5209_; 
v_res_5209_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_____do__lift_5200_, v___y_5201_, v___y_5202_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
lean_dec(v___y_5207_);
lean_dec_ref(v___y_5206_);
lean_dec(v___y_5205_);
lean_dec_ref(v___y_5204_);
lean_dec(v___y_5203_);
lean_dec_ref(v___y_5202_);
lean_dec_ref(v___y_5201_);
lean_dec(v_____do__lift_5200_);
return v_res_5209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object* v_as_5210_, size_t v_sz_5211_, size_t v_i_5212_, lean_object* v_b_5213_, lean_object* v___y_5214_){
_start:
{
uint8_t v___x_5216_; 
v___x_5216_ = lean_usize_dec_lt(v_i_5212_, v_sz_5211_);
if (v___x_5216_ == 0)
{
lean_object* v___x_5217_; 
v___x_5217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5217_, 0, v_b_5213_);
return v___x_5217_;
}
else
{
lean_object* v_ref_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v_a_5221_; uint8_t v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; size_t v___x_5255_; size_t v___x_5256_; 
v_ref_5218_ = lean_ctor_get(v___y_5214_, 2);
v___x_5219_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5220_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5221_ = lean_array_uget_borrowed(v_as_5210_, v_i_5212_);
v___x_5222_ = 0;
v___x_5223_ = l_Lean_SourceInfo_fromRef(v_ref_5218_, v___x_5222_);
v___x_5224_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5225_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5226_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5227_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5223_, 17);
v___x_5228_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5228_, 0, v___x_5223_);
lean_ctor_set(v___x_5228_, 1, v___x_5227_);
v___x_5229_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5230_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5230_, 0, v___x_5223_);
lean_ctor_set(v___x_5230_, 1, v___x_5229_);
v___x_5231_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5224_, v___x_5230_);
v___x_5232_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5233_, 0, v___x_5223_);
lean_ctor_set(v___x_5233_, 1, v___x_5224_);
lean_ctor_set(v___x_5233_, 2, v___x_5232_);
lean_inc_ref_n(v___x_5233_, 3);
v___x_5234_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5219_, v___x_5233_);
v___x_5235_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5236_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5237_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc_n(v_a_5221_, 2);
v___x_5238_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5237_, v_a_5221_);
v___x_5239_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5240_, 0, v___x_5223_);
lean_ctor_set(v___x_5240_, 1, v___x_5239_);
v___x_5241_ = l_Lean_Syntax_node5(v___x_5223_, v___x_5236_, v___x_5238_, v___x_5233_, v___x_5233_, v___x_5240_, v_a_5221_);
v___x_5242_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5235_, v___x_5241_);
v___x_5243_ = l_Lean_Syntax_node4(v___x_5223_, v___x_5226_, v___x_5228_, v___x_5231_, v___x_5234_, v___x_5242_);
v___x_5244_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5223_);
lean_ctor_set(v___x_5245_, 1, v___x_5244_);
v___x_5246_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5224_, v___x_5245_);
v___x_5247_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5225_, v___x_5243_, v___x_5246_);
v___x_5248_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5249_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5223_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
v___x_5251_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5248_, v___x_5250_, v_b_5213_);
v___x_5252_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5225_, v___x_5251_, v___x_5233_);
v___x_5253_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5224_, v___x_5247_, v___x_5252_);
v___x_5254_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5220_, v___x_5253_);
v___x_5255_ = ((size_t)1ULL);
v___x_5256_ = lean_usize_add(v_i_5212_, v___x_5255_);
v_i_5212_ = v___x_5256_;
v_b_5213_ = v___x_5254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object* v_as_5258_, lean_object* v_sz_5259_, lean_object* v_i_5260_, lean_object* v_b_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_){
_start:
{
size_t v_sz_boxed_5264_; size_t v_i_boxed_5265_; lean_object* v_res_5266_; 
v_sz_boxed_5264_ = lean_unbox_usize(v_sz_5259_);
lean_dec(v_sz_5259_);
v_i_boxed_5265_ = lean_unbox_usize(v_i_5260_);
lean_dec(v_i_5260_);
v_res_5266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5258_, v_sz_boxed_5264_, v_i_boxed_5265_, v_b_5261_, v___y_5262_);
lean_dec_ref(v___y_5262_);
lean_dec_ref(v_as_5258_);
return v_res_5266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object* v_as_5267_, size_t v_sz_5268_, size_t v_i_5269_, lean_object* v_b_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_){
_start:
{
uint8_t v___x_5279_; 
v___x_5279_ = lean_usize_dec_lt(v_i_5269_, v_sz_5268_);
if (v___x_5279_ == 0)
{
lean_object* v___x_5280_; 
v___x_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5280_, 0, v_b_5270_);
return v___x_5280_;
}
else
{
lean_object* v_ref_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v_a_5284_; uint8_t v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; size_t v___x_5318_; size_t v___x_5319_; lean_object* v___x_5320_; 
v_ref_5281_ = lean_ctor_get(v___y_5276_, 2);
v___x_5282_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5283_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5284_ = lean_array_uget_borrowed(v_as_5267_, v_i_5269_);
v___x_5285_ = 0;
v___x_5286_ = l_Lean_SourceInfo_fromRef(v_ref_5281_, v___x_5285_);
v___x_5287_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5288_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5289_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5290_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5286_, 17);
v___x_5291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5291_, 0, v___x_5286_);
lean_ctor_set(v___x_5291_, 1, v___x_5290_);
v___x_5292_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5293_, 0, v___x_5286_);
lean_ctor_set(v___x_5293_, 1, v___x_5292_);
v___x_5294_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5287_, v___x_5293_);
v___x_5295_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5296_, 0, v___x_5286_);
lean_ctor_set(v___x_5296_, 1, v___x_5287_);
lean_ctor_set(v___x_5296_, 2, v___x_5295_);
lean_inc_ref_n(v___x_5296_, 3);
v___x_5297_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5282_, v___x_5296_);
v___x_5298_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5299_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5300_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc_n(v_a_5284_, 2);
v___x_5301_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5300_, v_a_5284_);
v___x_5302_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5303_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5303_, 0, v___x_5286_);
lean_ctor_set(v___x_5303_, 1, v___x_5302_);
v___x_5304_ = l_Lean_Syntax_node5(v___x_5286_, v___x_5299_, v___x_5301_, v___x_5296_, v___x_5296_, v___x_5303_, v_a_5284_);
v___x_5305_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5298_, v___x_5304_);
v___x_5306_ = l_Lean_Syntax_node4(v___x_5286_, v___x_5289_, v___x_5291_, v___x_5294_, v___x_5297_, v___x_5305_);
v___x_5307_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5308_, 0, v___x_5286_);
lean_ctor_set(v___x_5308_, 1, v___x_5307_);
v___x_5309_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5287_, v___x_5308_);
v___x_5310_ = l_Lean_Syntax_node2(v___x_5286_, v___x_5288_, v___x_5306_, v___x_5309_);
v___x_5311_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5312_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5286_);
lean_ctor_set(v___x_5313_, 1, v___x_5312_);
v___x_5314_ = l_Lean_Syntax_node2(v___x_5286_, v___x_5311_, v___x_5313_, v_b_5270_);
v___x_5315_ = l_Lean_Syntax_node2(v___x_5286_, v___x_5288_, v___x_5314_, v___x_5296_);
v___x_5316_ = l_Lean_Syntax_node2(v___x_5286_, v___x_5287_, v___x_5310_, v___x_5315_);
v___x_5317_ = l_Lean_Syntax_node1(v___x_5286_, v___x_5283_, v___x_5316_);
v___x_5318_ = ((size_t)1ULL);
v___x_5319_ = lean_usize_add(v_i_5269_, v___x_5318_);
v___x_5320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5267_, v_sz_5268_, v___x_5319_, v___x_5317_, v___y_5276_);
return v___x_5320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object* v_as_5321_, lean_object* v_sz_5322_, lean_object* v_i_5323_, lean_object* v_b_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_){
_start:
{
size_t v_sz_boxed_5333_; size_t v_i_boxed_5334_; lean_object* v_res_5335_; 
v_sz_boxed_5333_ = lean_unbox_usize(v_sz_5322_);
lean_dec(v_sz_5322_);
v_i_boxed_5334_ = lean_unbox_usize(v_i_5323_);
lean_dec(v_i_5323_);
v_res_5335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v_as_5321_, v_sz_boxed_5333_, v_i_boxed_5334_, v_b_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_);
lean_dec(v___y_5331_);
lean_dec_ref(v___y_5330_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec_ref(v___y_5325_);
lean_dec_ref(v_as_5321_);
return v_res_5335_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__11(void){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; 
v___x_5375_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__10));
v___x_5376_ = l_String_toRawSubstring_x27(v___x_5375_);
return v___x_5376_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__18(void){
_start:
{
lean_object* v___x_5390_; lean_object* v___x_5391_; 
v___x_5390_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__17));
v___x_5391_ = l_String_toRawSubstring_x27(v___x_5390_);
return v___x_5391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object* v_stx_5408_, lean_object* v_dec_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_, lean_object* v_a_5415_, lean_object* v_a_5416_){
_start:
{
lean_object* v___x_5418_; uint8_t v___x_5419_; 
v___x_5418_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
lean_inc(v_stx_5408_);
v___x_5419_ = l_Lean_Syntax_isOfKind(v_stx_5408_, v___x_5418_);
if (v___x_5419_ == 0)
{
lean_object* v___x_5420_; 
lean_dec_ref(v_dec_5409_);
lean_dec(v_stx_5408_);
v___x_5420_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5420_;
}
else
{
lean_object* v___y_5422_; lean_object* v___y_5423_; uint8_t v___y_5424_; lean_object* v___y_5425_; lean_object* v___y_5426_; lean_object* v_body_5427_; lean_object* v___y_5428_; lean_object* v___y_5429_; lean_object* v___y_5430_; lean_object* v___y_5431_; lean_object* v___y_5432_; lean_object* v___y_5433_; lean_object* v___y_5434_; lean_object* v___y_5508_; lean_object* v___y_5509_; lean_object* v___y_5510_; lean_object* v___y_5511_; lean_object* v___y_5512_; lean_object* v___y_5513_; uint8_t v___y_5514_; lean_object* v___y_5515_; lean_object* v___y_5516_; lean_object* v___y_5517_; lean_object* v___y_5518_; lean_object* v___y_5519_; lean_object* v___y_5520_; lean_object* v___y_5521_; lean_object* v_a_5522_; lean_object* v___y_5536_; lean_object* v___y_5537_; lean_object* v___y_5538_; lean_object* v___y_5539_; lean_object* v___y_5540_; lean_object* v___y_5541_; lean_object* v___y_5542_; lean_object* v___y_5543_; lean_object* v___y_5544_; lean_object* v___y_5545_; lean_object* v___y_5546_; lean_object* v___y_5547_; lean_object* v___y_5548_; lean_object* v_mutTk_x3f_5621_; lean_object* v___y_5622_; lean_object* v___y_5623_; lean_object* v___y_5624_; lean_object* v___y_5625_; lean_object* v___y_5626_; lean_object* v___y_5627_; lean_object* v___y_5628_; lean_object* v___x_5652_; lean_object* v___x_5653_; uint8_t v___x_5654_; 
v___x_5652_ = lean_unsigned_to_nat(1u);
v___x_5653_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5652_);
v___x_5654_ = l_Lean_Syntax_isNone(v___x_5653_);
if (v___x_5654_ == 0)
{
uint8_t v___x_5655_; 
lean_inc(v___x_5653_);
v___x_5655_ = l_Lean_Syntax_matchesNull(v___x_5653_, v___x_5652_);
if (v___x_5655_ == 0)
{
lean_object* v___x_5656_; 
lean_dec(v___x_5653_);
lean_dec_ref(v_dec_5409_);
lean_dec(v_stx_5408_);
v___x_5656_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5656_;
}
else
{
lean_object* v___x_5657_; lean_object* v_mutTk_x3f_5658_; lean_object* v___x_5659_; 
v___x_5657_ = lean_unsigned_to_nat(0u);
v_mutTk_x3f_5658_ = l_Lean_Syntax_getArg(v___x_5653_, v___x_5657_);
lean_dec(v___x_5653_);
v___x_5659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5659_, 0, v_mutTk_x3f_5658_);
v_mutTk_x3f_5621_ = v___x_5659_;
v___y_5622_ = v_a_5410_;
v___y_5623_ = v_a_5411_;
v___y_5624_ = v_a_5412_;
v___y_5625_ = v_a_5413_;
v___y_5626_ = v_a_5414_;
v___y_5627_ = v_a_5415_;
v___y_5628_ = v_a_5416_;
goto v___jp_5620_;
}
}
else
{
lean_object* v___x_5660_; 
lean_dec(v___x_5653_);
v___x_5660_ = lean_box(0);
v_mutTk_x3f_5621_ = v___x_5660_;
v___y_5622_ = v_a_5410_;
v___y_5623_ = v_a_5411_;
v___y_5624_ = v_a_5412_;
v___y_5625_ = v_a_5413_;
v___y_5626_ = v_a_5414_;
v___y_5627_ = v_a_5415_;
v___y_5628_ = v_a_5416_;
goto v___jp_5620_;
}
v___jp_5421_:
{
lean_object* v_eq_x3f_5435_; 
v_eq_x3f_5435_ = lean_ctor_get(v___y_5426_, 0);
lean_inc(v_eq_x3f_5435_);
lean_dec_ref(v___y_5426_);
if (lean_obj_tag(v_eq_x3f_5435_) == 1)
{
lean_object* v_val_5436_; lean_object* v_ref_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; 
v_val_5436_ = lean_ctor_get(v_eq_x3f_5435_, 0);
lean_inc(v_val_5436_);
lean_dec_ref_known(v_eq_x3f_5435_, 1);
v_ref_5437_ = lean_ctor_get(v___y_5433_, 2);
v___x_5438_ = l_Lean_SourceInfo_fromRef(v_ref_5437_, v___y_5424_);
v___x_5439_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5440_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
lean_inc_n(v___x_5438_, 19);
v___x_5441_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5438_);
lean_ctor_set(v___x_5441_, 1, v___x_5440_);
v___x_5442_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5443_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5444_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5444_, 0, v___x_5438_);
lean_ctor_set(v___x_5444_, 1, v___x_5442_);
lean_ctor_set(v___x_5444_, 2, v___x_5443_);
v___x_5445_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
v___x_5446_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_5447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5447_, 0, v___x_5438_);
lean_ctor_set(v___x_5447_, 1, v___x_5446_);
v___x_5448_ = l_Lean_Syntax_node2(v___x_5438_, v___x_5442_, v_val_5436_, v___x_5447_);
v___x_5449_ = l_Lean_Syntax_node2(v___x_5438_, v___x_5445_, v___x_5448_, v___y_5423_);
v___x_5450_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5442_, v___x_5449_);
v___x_5451_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5452_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5438_);
lean_ctor_set(v___x_5452_, 1, v___x_5451_);
v___x_5453_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5454_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5455_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5456_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5456_, 0, v___x_5438_);
lean_ctor_set(v___x_5456_, 1, v___x_5455_);
v___x_5457_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5442_, v___y_5422_);
v___x_5458_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5442_, v___x_5457_);
v___x_5459_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5460_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5460_, 0, v___x_5438_);
lean_ctor_set(v___x_5460_, 1, v___x_5459_);
lean_inc_ref(v___x_5460_);
lean_inc_ref(v___x_5456_);
v___x_5461_ = l_Lean_Syntax_node4(v___x_5438_, v___x_5454_, v___x_5456_, v___x_5458_, v___x_5460_, v_body_5427_);
v___x_5462_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5463_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5464_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5438_);
lean_ctor_set(v___x_5464_, 1, v___x_5463_);
v___x_5465_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5462_, v___x_5464_);
v___x_5466_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5442_, v___x_5465_);
v___x_5467_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5442_, v___x_5466_);
v___x_5468_ = l_Lean_Syntax_node4(v___x_5438_, v___x_5454_, v___x_5456_, v___x_5467_, v___x_5460_, v___y_5425_);
v___x_5469_ = l_Lean_Syntax_node2(v___x_5438_, v___x_5442_, v___x_5461_, v___x_5468_);
v___x_5470_ = l_Lean_Syntax_node1(v___x_5438_, v___x_5453_, v___x_5469_);
lean_inc_ref_n(v___x_5444_, 2);
v___x_5471_ = l_Lean_Syntax_node7(v___x_5438_, v___x_5439_, v___x_5441_, v___x_5444_, v___x_5444_, v___x_5444_, v___x_5450_, v___x_5452_, v___x_5470_);
v___x_5472_ = l_Lean_Elab_Do_elabDoElem(v___x_5471_, v_dec_5409_, v___x_5419_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_);
return v___x_5472_;
}
else
{
lean_object* v_ref_5473_; lean_object* v___x_5474_; lean_object* v_a_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; 
lean_dec(v_eq_x3f_5435_);
v_ref_5473_ = lean_ctor_get(v___y_5433_, 2);
v___x_5474_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5473_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_);
v_a_5475_ = lean_ctor_get(v___x_5474_, 0);
lean_inc_n(v_a_5475_, 18);
lean_dec_ref(v___x_5474_);
v___x_5476_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5477_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_5478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5478_, 0, v_a_5475_);
lean_ctor_set(v___x_5478_, 1, v___x_5477_);
v___x_5479_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5480_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5481_, 0, v_a_5475_);
lean_ctor_set(v___x_5481_, 1, v___x_5479_);
lean_ctor_set(v___x_5481_, 2, v___x_5480_);
v___x_5482_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
lean_inc_ref_n(v___x_5481_, 3);
v___x_5483_ = l_Lean_Syntax_node2(v_a_5475_, v___x_5482_, v___x_5481_, v___y_5423_);
v___x_5484_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5479_, v___x_5483_);
v___x_5485_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5486_, 0, v_a_5475_);
lean_ctor_set(v___x_5486_, 1, v___x_5485_);
v___x_5487_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5488_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5489_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5490_, 0, v_a_5475_);
lean_ctor_set(v___x_5490_, 1, v___x_5489_);
v___x_5491_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5479_, v___y_5422_);
v___x_5492_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5479_, v___x_5491_);
v___x_5493_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5494_, 0, v_a_5475_);
lean_ctor_set(v___x_5494_, 1, v___x_5493_);
lean_inc_ref(v___x_5494_);
lean_inc_ref(v___x_5490_);
v___x_5495_ = l_Lean_Syntax_node4(v_a_5475_, v___x_5488_, v___x_5490_, v___x_5492_, v___x_5494_, v_body_5427_);
v___x_5496_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5497_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5498_, 0, v_a_5475_);
lean_ctor_set(v___x_5498_, 1, v___x_5497_);
v___x_5499_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5496_, v___x_5498_);
v___x_5500_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5479_, v___x_5499_);
v___x_5501_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5479_, v___x_5500_);
v___x_5502_ = l_Lean_Syntax_node4(v_a_5475_, v___x_5488_, v___x_5490_, v___x_5501_, v___x_5494_, v___y_5425_);
v___x_5503_ = l_Lean_Syntax_node2(v_a_5475_, v___x_5479_, v___x_5495_, v___x_5502_);
v___x_5504_ = l_Lean_Syntax_node1(v_a_5475_, v___x_5487_, v___x_5503_);
v___x_5505_ = l_Lean_Syntax_node7(v_a_5475_, v___x_5476_, v___x_5478_, v___x_5481_, v___x_5481_, v___x_5481_, v___x_5484_, v___x_5486_, v___x_5504_);
v___x_5506_ = l_Lean_Elab_Do_elabDoElem(v___x_5505_, v_dec_5409_, v___x_5419_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_);
return v___x_5506_;
}
}
v___jp_5507_:
{
if (lean_obj_tag(v___y_5517_) == 0)
{
lean_dec_ref(v___y_5511_);
v___y_5422_ = v___y_5510_;
v___y_5423_ = v___y_5512_;
v___y_5424_ = v___y_5514_;
v___y_5425_ = v___y_5513_;
v___y_5426_ = v___y_5519_;
v_body_5427_ = v_a_5522_;
v___y_5428_ = v___y_5520_;
v___y_5429_ = v___y_5516_;
v___y_5430_ = v___y_5518_;
v___y_5431_ = v___y_5509_;
v___y_5432_ = v___y_5521_;
v___y_5433_ = v___y_5515_;
v___y_5434_ = v___y_5508_;
goto v___jp_5421_;
}
else
{
lean_dec_ref_known(v___y_5517_, 1);
if (v___x_5419_ == 0)
{
lean_dec_ref(v___y_5511_);
v___y_5422_ = v___y_5510_;
v___y_5423_ = v___y_5512_;
v___y_5424_ = v___y_5514_;
v___y_5425_ = v___y_5513_;
v___y_5426_ = v___y_5519_;
v_body_5427_ = v_a_5522_;
v___y_5428_ = v___y_5520_;
v___y_5429_ = v___y_5516_;
v___y_5430_ = v___y_5518_;
v___y_5431_ = v___y_5509_;
v___y_5432_ = v___y_5521_;
v___y_5433_ = v___y_5515_;
v___y_5434_ = v___y_5508_;
goto v___jp_5421_;
}
else
{
size_t v_sz_5523_; size_t v___x_5524_; lean_object* v___x_5525_; 
v_sz_5523_ = lean_array_size(v___y_5511_);
v___x_5524_ = ((size_t)0ULL);
v___x_5525_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v___y_5511_, v_sz_5523_, v___x_5524_, v_a_5522_, v___y_5520_, v___y_5516_, v___y_5518_, v___y_5509_, v___y_5521_, v___y_5515_, v___y_5508_);
lean_dec_ref(v___y_5511_);
if (lean_obj_tag(v___x_5525_) == 0)
{
lean_object* v_a_5526_; 
v_a_5526_ = lean_ctor_get(v___x_5525_, 0);
lean_inc(v_a_5526_);
lean_dec_ref_known(v___x_5525_, 1);
v___y_5422_ = v___y_5510_;
v___y_5423_ = v___y_5512_;
v___y_5424_ = v___y_5514_;
v___y_5425_ = v___y_5513_;
v___y_5426_ = v___y_5519_;
v_body_5427_ = v_a_5526_;
v___y_5428_ = v___y_5520_;
v___y_5429_ = v___y_5516_;
v___y_5430_ = v___y_5518_;
v___y_5431_ = v___y_5509_;
v___y_5432_ = v___y_5521_;
v___y_5433_ = v___y_5515_;
v___y_5434_ = v___y_5508_;
goto v___jp_5421_;
}
else
{
lean_object* v_a_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5534_; 
lean_dec_ref(v___y_5519_);
lean_dec(v___y_5513_);
lean_dec(v___y_5512_);
lean_dec(v___y_5510_);
lean_dec_ref(v_dec_5409_);
v_a_5527_ = lean_ctor_get(v___x_5525_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___x_5525_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5529_ = v___x_5525_;
v_isShared_5530_ = v_isSharedCheck_5534_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_a_5527_);
lean_dec(v___x_5525_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5534_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
lean_object* v___x_5532_; 
if (v_isShared_5530_ == 0)
{
v___x_5532_ = v___x_5529_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5527_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
}
}
v___jp_5535_:
{
lean_object* v___x_5549_; uint8_t v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5549_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_5550_ = 0;
v___x_5551_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_5552_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v___y_5541_, v___y_5544_, v___x_5551_, v___y_5546_, v___y_5543_, v___y_5545_, v___y_5537_, v___y_5547_, v___y_5542_, v___y_5536_);
if (lean_obj_tag(v___x_5552_) == 0)
{
lean_object* v_a_5553_; lean_object* v___x_5554_; 
v_a_5553_ = lean_ctor_get(v___x_5552_, 0);
lean_inc(v_a_5553_);
lean_dec_ref_known(v___x_5552_, 1);
v___x_5554_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_5553_, v___y_5537_, v___y_5547_, v___y_5542_, v___y_5536_);
if (lean_obj_tag(v___x_5554_) == 0)
{
lean_object* v___x_5555_; lean_object* v___x_5556_; 
lean_dec_ref_known(v___x_5554_, 1);
lean_inc(v___y_5544_);
v___x_5555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5555_, 0, v___y_5544_);
lean_ctor_set_uint8(v___x_5555_, sizeof(void*)*1, v___x_5550_);
lean_inc(v___y_5538_);
v___x_5556_ = l_Lean_Elab_Do_getPatternVarsEx(v___y_5538_, v___y_5543_, v___y_5545_, v___y_5537_, v___y_5547_, v___y_5542_, v___y_5536_);
if (lean_obj_tag(v___x_5556_) == 0)
{
lean_object* v_a_5557_; lean_object* v___x_5558_; 
v_a_5557_ = lean_ctor_get(v___x_5556_, 0);
lean_inc(v_a_5557_);
lean_dec_ref_known(v___x_5556_, 1);
v___x_5558_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v___x_5555_, v_a_5557_, v___y_5546_, v___y_5543_, v___y_5545_, v___y_5537_, v___y_5547_, v___y_5542_, v___y_5536_);
lean_dec_ref_known(v___x_5555_, 1);
if (lean_obj_tag(v___x_5558_) == 0)
{
lean_dec_ref_known(v___x_5558_, 1);
if (lean_obj_tag(v___y_5548_) == 0)
{
lean_object* v_toCold_5559_; lean_object* v_ref_5560_; lean_object* v___x_5561_; lean_object* v_a_5562_; lean_object* v_quotContext_5563_; lean_object* v_currMacroScope_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; 
v_toCold_5559_ = lean_ctor_get(v___y_5542_, 0);
v_ref_5560_ = lean_ctor_get(v___y_5542_, 2);
v___x_5561_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5560_, v___y_5546_, v___y_5543_, v___y_5545_, v___y_5537_, v___y_5547_, v___y_5542_, v___y_5536_);
v_a_5562_ = lean_ctor_get(v___x_5561_, 0);
lean_inc_n(v_a_5562_, 9);
lean_dec_ref(v___x_5561_);
v_quotContext_5563_ = lean_ctor_get(v_toCold_5559_, 8);
v_currMacroScope_5564_ = lean_ctor_get(v_toCold_5559_, 9);
v___x_5565_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5566_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5567_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__9));
v___x_5568_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_5569_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__11, &l_Lean_Elab_Do_elabDoLetElse___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__11);
v___x_5570_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__12));
lean_inc_n(v_currMacroScope_5564_, 2);
lean_inc_n(v_quotContext_5563_, 2);
v___x_5571_ = l_Lean_addMacroScope(v_quotContext_5563_, v___x_5570_, v_currMacroScope_5564_);
v___x_5572_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__16));
v___x_5573_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5573_, 0, v_a_5562_);
lean_ctor_set(v___x_5573_, 1, v___x_5569_);
lean_ctor_set(v___x_5573_, 2, v___x_5571_);
lean_ctor_set(v___x_5573_, 3, v___x_5572_);
v___x_5574_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__18, &l_Lean_Elab_Do_elabDoLetElse___closed__18_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__18);
v___x_5575_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__21));
v___x_5576_ = l_Lean_addMacroScope(v_quotContext_5563_, v___x_5575_, v_currMacroScope_5564_);
v___x_5577_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__25));
v___x_5578_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5578_, 0, v_a_5562_);
lean_ctor_set(v___x_5578_, 1, v___x_5574_);
lean_ctor_set(v___x_5578_, 2, v___x_5576_);
lean_ctor_set(v___x_5578_, 3, v___x_5577_);
v___x_5579_ = l_Lean_Syntax_node1(v_a_5562_, v___x_5565_, v___x_5578_);
v___x_5580_ = l_Lean_Syntax_node2(v_a_5562_, v___x_5568_, v___x_5573_, v___x_5579_);
v___x_5581_ = l_Lean_Syntax_node1(v_a_5562_, v___x_5567_, v___x_5580_);
v___x_5582_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5583_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5583_, 0, v_a_5562_);
lean_ctor_set(v___x_5583_, 1, v___x_5565_);
lean_ctor_set(v___x_5583_, 2, v___x_5582_);
v___x_5584_ = l_Lean_Syntax_node2(v_a_5562_, v___x_5566_, v___x_5581_, v___x_5583_);
v___x_5585_ = l_Lean_Syntax_node1(v_a_5562_, v___x_5565_, v___x_5584_);
v___x_5586_ = l_Lean_Syntax_node1(v_a_5562_, v___x_5549_, v___x_5585_);
v___y_5508_ = v___y_5536_;
v___y_5509_ = v___y_5537_;
v___y_5510_ = v___y_5538_;
v___y_5511_ = v_a_5557_;
v___y_5512_ = v___y_5539_;
v___y_5513_ = v___y_5540_;
v___y_5514_ = v___x_5550_;
v___y_5515_ = v___y_5542_;
v___y_5516_ = v___y_5543_;
v___y_5517_ = v___y_5544_;
v___y_5518_ = v___y_5545_;
v___y_5519_ = v_a_5553_;
v___y_5520_ = v___y_5546_;
v___y_5521_ = v___y_5547_;
v_a_5522_ = v___x_5586_;
goto v___jp_5507_;
}
else
{
lean_object* v_val_5587_; 
v_val_5587_ = lean_ctor_get(v___y_5548_, 0);
lean_inc(v_val_5587_);
lean_dec_ref_known(v___y_5548_, 1);
v___y_5508_ = v___y_5536_;
v___y_5509_ = v___y_5537_;
v___y_5510_ = v___y_5538_;
v___y_5511_ = v_a_5557_;
v___y_5512_ = v___y_5539_;
v___y_5513_ = v___y_5540_;
v___y_5514_ = v___x_5550_;
v___y_5515_ = v___y_5542_;
v___y_5516_ = v___y_5543_;
v___y_5517_ = v___y_5544_;
v___y_5518_ = v___y_5545_;
v___y_5519_ = v_a_5553_;
v___y_5520_ = v___y_5546_;
v___y_5521_ = v___y_5547_;
v_a_5522_ = v_val_5587_;
goto v___jp_5507_;
}
}
else
{
lean_object* v_a_5588_; lean_object* v___x_5590_; uint8_t v_isShared_5591_; uint8_t v_isSharedCheck_5595_; 
lean_dec(v_a_5557_);
lean_dec(v_a_5553_);
lean_dec(v___y_5548_);
lean_dec(v___y_5544_);
lean_dec(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec(v___y_5538_);
lean_dec_ref(v_dec_5409_);
v_a_5588_ = lean_ctor_get(v___x_5558_, 0);
v_isSharedCheck_5595_ = !lean_is_exclusive(v___x_5558_);
if (v_isSharedCheck_5595_ == 0)
{
v___x_5590_ = v___x_5558_;
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
else
{
lean_inc(v_a_5588_);
lean_dec(v___x_5558_);
v___x_5590_ = lean_box(0);
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
v_resetjp_5589_:
{
lean_object* v___x_5593_; 
if (v_isShared_5591_ == 0)
{
v___x_5593_ = v___x_5590_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v_a_5588_);
v___x_5593_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
return v___x_5593_;
}
}
}
}
else
{
lean_object* v_a_5596_; lean_object* v___x_5598_; uint8_t v_isShared_5599_; uint8_t v_isSharedCheck_5603_; 
lean_dec_ref_known(v___x_5555_, 1);
lean_dec(v_a_5553_);
lean_dec(v___y_5548_);
lean_dec(v___y_5544_);
lean_dec(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec(v___y_5538_);
lean_dec_ref(v_dec_5409_);
v_a_5596_ = lean_ctor_get(v___x_5556_, 0);
v_isSharedCheck_5603_ = !lean_is_exclusive(v___x_5556_);
if (v_isSharedCheck_5603_ == 0)
{
v___x_5598_ = v___x_5556_;
v_isShared_5599_ = v_isSharedCheck_5603_;
goto v_resetjp_5597_;
}
else
{
lean_inc(v_a_5596_);
lean_dec(v___x_5556_);
v___x_5598_ = lean_box(0);
v_isShared_5599_ = v_isSharedCheck_5603_;
goto v_resetjp_5597_;
}
v_resetjp_5597_:
{
lean_object* v___x_5601_; 
if (v_isShared_5599_ == 0)
{
v___x_5601_ = v___x_5598_;
goto v_reusejp_5600_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v_a_5596_);
v___x_5601_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5600_;
}
v_reusejp_5600_:
{
return v___x_5601_;
}
}
}
}
else
{
lean_object* v_a_5604_; lean_object* v___x_5606_; uint8_t v_isShared_5607_; uint8_t v_isSharedCheck_5611_; 
lean_dec(v_a_5553_);
lean_dec(v___y_5548_);
lean_dec(v___y_5544_);
lean_dec(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec(v___y_5538_);
lean_dec_ref(v_dec_5409_);
v_a_5604_ = lean_ctor_get(v___x_5554_, 0);
v_isSharedCheck_5611_ = !lean_is_exclusive(v___x_5554_);
if (v_isSharedCheck_5611_ == 0)
{
v___x_5606_ = v___x_5554_;
v_isShared_5607_ = v_isSharedCheck_5611_;
goto v_resetjp_5605_;
}
else
{
lean_inc(v_a_5604_);
lean_dec(v___x_5554_);
v___x_5606_ = lean_box(0);
v_isShared_5607_ = v_isSharedCheck_5611_;
goto v_resetjp_5605_;
}
v_resetjp_5605_:
{
lean_object* v___x_5609_; 
if (v_isShared_5607_ == 0)
{
v___x_5609_ = v___x_5606_;
goto v_reusejp_5608_;
}
else
{
lean_object* v_reuseFailAlloc_5610_; 
v_reuseFailAlloc_5610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5610_, 0, v_a_5604_);
v___x_5609_ = v_reuseFailAlloc_5610_;
goto v_reusejp_5608_;
}
v_reusejp_5608_:
{
return v___x_5609_;
}
}
}
}
else
{
lean_object* v_a_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5619_; 
lean_dec(v___y_5548_);
lean_dec(v___y_5544_);
lean_dec(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec(v___y_5538_);
lean_dec_ref(v_dec_5409_);
v_a_5612_ = lean_ctor_get(v___x_5552_, 0);
v_isSharedCheck_5619_ = !lean_is_exclusive(v___x_5552_);
if (v_isSharedCheck_5619_ == 0)
{
v___x_5614_ = v___x_5552_;
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_a_5612_);
lean_dec(v___x_5552_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v___x_5617_; 
if (v_isShared_5615_ == 0)
{
v___x_5617_ = v___x_5614_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v_a_5612_);
v___x_5617_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
return v___x_5617_;
}
}
}
}
v___jp_5620_:
{
lean_object* v___x_5629_; lean_object* v_cfg_5630_; lean_object* v___x_5631_; uint8_t v___x_5632_; 
v___x_5629_ = lean_unsigned_to_nat(2u);
v_cfg_5630_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5629_);
v___x_5631_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_5630_);
v___x_5632_ = l_Lean_Syntax_isOfKind(v_cfg_5630_, v___x_5631_);
if (v___x_5632_ == 0)
{
lean_object* v___x_5633_; 
lean_dec(v_cfg_5630_);
lean_dec(v_mutTk_x3f_5621_);
lean_dec_ref(v_dec_5409_);
lean_dec(v_stx_5408_);
v___x_5633_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5633_;
}
else
{
lean_object* v___x_5634_; lean_object* v_pattern_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v___x_5634_ = lean_unsigned_to_nat(3u);
v_pattern_5635_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5634_);
v___x_5636_ = lean_unsigned_to_nat(5u);
v___x_5637_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5636_);
v___x_5638_ = lean_unsigned_to_nat(7u);
v___x_5639_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5638_);
v___x_5640_ = lean_unsigned_to_nat(8u);
v___x_5641_ = l_Lean_Syntax_getArg(v_stx_5408_, v___x_5640_);
lean_dec(v_stx_5408_);
v___x_5642_ = l_Lean_Syntax_getOptional_x3f(v___x_5641_);
lean_dec(v___x_5641_);
if (lean_obj_tag(v___x_5642_) == 0)
{
lean_object* v___x_5643_; 
v___x_5643_ = lean_box(0);
v___y_5536_ = v___y_5628_;
v___y_5537_ = v___y_5625_;
v___y_5538_ = v_pattern_5635_;
v___y_5539_ = v___x_5637_;
v___y_5540_ = v___x_5639_;
v___y_5541_ = v_cfg_5630_;
v___y_5542_ = v___y_5627_;
v___y_5543_ = v___y_5623_;
v___y_5544_ = v_mutTk_x3f_5621_;
v___y_5545_ = v___y_5624_;
v___y_5546_ = v___y_5622_;
v___y_5547_ = v___y_5626_;
v___y_5548_ = v___x_5643_;
goto v___jp_5535_;
}
else
{
lean_object* v_val_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5651_; 
v_val_5644_ = lean_ctor_get(v___x_5642_, 0);
v_isSharedCheck_5651_ = !lean_is_exclusive(v___x_5642_);
if (v_isSharedCheck_5651_ == 0)
{
v___x_5646_ = v___x_5642_;
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_val_5644_);
lean_dec(v___x_5642_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5649_; 
if (v_isShared_5647_ == 0)
{
v___x_5649_ = v___x_5646_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v_val_5644_);
v___x_5649_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
v___y_5536_ = v___y_5628_;
v___y_5537_ = v___y_5625_;
v___y_5538_ = v_pattern_5635_;
v___y_5539_ = v___x_5637_;
v___y_5540_ = v___x_5639_;
v___y_5541_ = v_cfg_5630_;
v___y_5542_ = v___y_5627_;
v___y_5543_ = v___y_5623_;
v___y_5544_ = v_mutTk_x3f_5621_;
v___y_5545_ = v___y_5624_;
v___y_5546_ = v___y_5622_;
v___y_5547_ = v___y_5626_;
v___y_5548_ = v___x_5649_;
goto v___jp_5535_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object* v_stx_5661_, lean_object* v_dec_5662_, lean_object* v_a_5663_, lean_object* v_a_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_, lean_object* v_a_5670_){
_start:
{
lean_object* v_res_5671_; 
v_res_5671_ = l_Lean_Elab_Do_elabDoLetElse(v_stx_5661_, v_dec_5662_, v_a_5663_, v_a_5664_, v_a_5665_, v_a_5666_, v_a_5667_, v_a_5668_, v_a_5669_);
lean_dec(v_a_5669_);
lean_dec_ref(v_a_5668_);
lean_dec(v_a_5667_);
lean_dec_ref(v_a_5666_);
lean_dec(v_a_5665_);
lean_dec_ref(v_a_5664_);
lean_dec_ref(v_a_5663_);
return v_res_5671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object* v_as_5672_, size_t v_sz_5673_, size_t v_i_5674_, lean_object* v_b_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_){
_start:
{
lean_object* v___x_5684_; 
v___x_5684_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5672_, v_sz_5673_, v_i_5674_, v_b_5675_, v___y_5681_);
return v___x_5684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object* v_as_5685_, lean_object* v_sz_5686_, lean_object* v_i_5687_, lean_object* v_b_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_){
_start:
{
size_t v_sz_boxed_5697_; size_t v_i_boxed_5698_; lean_object* v_res_5699_; 
v_sz_boxed_5697_ = lean_unbox_usize(v_sz_5686_);
lean_dec(v_sz_5686_);
v_i_boxed_5698_ = lean_unbox_usize(v_i_5687_);
lean_dec(v_i_5687_);
v_res_5699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(v_as_5685_, v_sz_boxed_5697_, v_i_boxed_5698_, v_b_5688_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_, v___y_5693_, v___y_5694_, v___y_5695_);
lean_dec(v___y_5695_);
lean_dec_ref(v___y_5694_);
lean_dec(v___y_5693_);
lean_dec_ref(v___y_5692_);
lean_dec(v___y_5691_);
lean_dec_ref(v___y_5690_);
lean_dec_ref(v___y_5689_);
lean_dec_ref(v_as_5685_);
return v_res_5699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1(){
_start:
{
lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; 
v___x_5707_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5708_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
v___x_5709_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1));
v___x_5710_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetElse___boxed), 10, 0);
v___x_5711_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5707_, v___x_5708_, v___x_5709_, v___x_5710_);
return v___x_5711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object* v_a_5712_){
_start:
{
lean_object* v_res_5713_; 
v_res_5713_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
return v_res_5713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object* v_otherwise_x3f_5714_, uint8_t v___x_5715_, lean_object* v___x_5716_, lean_object* v___x_5717_, lean_object* v___x_5718_, lean_object* v___x_5719_, lean_object* v___x_5720_, lean_object* v___x_5721_, lean_object* v_dec_5722_, uint8_t v___x_5723_, lean_object* v_mutTk_x3f_5724_, lean_object* v___x_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5714_) == 0)
{
lean_object* v_ref_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___y_5744_; 
lean_dec(v___y_5726_);
v_ref_5735_ = lean_ctor_get(v___y_5732_, 2);
v___x_5736_ = l_Lean_SourceInfo_fromRef(v_ref_5735_, v___x_5715_);
v___x_5737_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5718_);
lean_inc_ref(v___x_5717_);
lean_inc_ref(v___x_5716_);
v___x_5738_ = l_Lean_Name_mkStr4(v___x_5716_, v___x_5717_, v___x_5718_, v___x_5737_);
v___x_5739_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5736_);
v___x_5740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5736_);
lean_ctor_set(v___x_5740_, 1, v___x_5739_);
v___x_5741_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5742_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5724_) == 1)
{
lean_object* v_val_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; 
v_val_5759_ = lean_ctor_get(v_mutTk_x3f_5724_, 0);
v___x_5760_ = l_Lean_SourceInfo_fromRef(v_val_5759_, v___x_5723_);
v___x_5761_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5762_, 0, v___x_5760_);
lean_ctor_set(v___x_5762_, 1, v___x_5761_);
v___x_5763_ = l_Array_mkArray1___redArg(v___x_5762_);
v___y_5744_ = v___x_5763_;
goto v___jp_5743_;
}
else
{
lean_object* v___x_5764_; 
v___x_5764_ = lean_mk_empty_array_with_capacity(v___x_5725_);
v___y_5744_ = v___x_5764_;
goto v___jp_5743_;
}
v___jp_5743_:
{
lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; 
v___x_5745_ = l_Array_append___redArg(v___x_5742_, v___y_5744_);
lean_dec_ref(v___y_5744_);
lean_inc_n(v___x_5736_, 6);
v___x_5746_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5746_, 0, v___x_5736_);
lean_ctor_set(v___x_5746_, 1, v___x_5741_);
lean_ctor_set(v___x_5746_, 2, v___x_5745_);
v___x_5747_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5736_);
lean_ctor_set(v___x_5747_, 1, v___x_5741_);
lean_ctor_set(v___x_5747_, 2, v___x_5742_);
lean_inc_ref_n(v___x_5747_, 2);
v___x_5748_ = l_Lean_Syntax_node1(v___x_5736_, v___x_5719_, v___x_5747_);
v___x_5749_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5718_);
lean_inc_ref(v___x_5717_);
lean_inc_ref(v___x_5716_);
v___x_5750_ = l_Lean_Name_mkStr4(v___x_5716_, v___x_5717_, v___x_5718_, v___x_5749_);
v___x_5751_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_5752_ = l_Lean_Name_mkStr4(v___x_5716_, v___x_5717_, v___x_5718_, v___x_5751_);
v___x_5753_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5754_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5754_, 0, v___x_5736_);
lean_ctor_set(v___x_5754_, 1, v___x_5753_);
v___x_5755_ = l_Lean_Syntax_node5(v___x_5736_, v___x_5752_, v___x_5720_, v___x_5747_, v___x_5747_, v___x_5754_, v___x_5721_);
v___x_5756_ = l_Lean_Syntax_node1(v___x_5736_, v___x_5750_, v___x_5755_);
v___x_5757_ = l_Lean_Syntax_node4(v___x_5736_, v___x_5738_, v___x_5740_, v___x_5746_, v___x_5748_, v___x_5756_);
v___x_5758_ = l_Lean_Elab_Do_elabDoElem(v___x_5757_, v_dec_5722_, v___x_5723_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_);
return v___x_5758_;
}
}
else
{
lean_object* v_val_5765_; lean_object* v_ref_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___y_5775_; lean_object* v___y_5776_; lean_object* v___y_5777_; lean_object* v___y_5778_; lean_object* v___y_5779_; lean_object* v___y_5796_; 
v_val_5765_ = lean_ctor_get(v_otherwise_x3f_5714_, 0);
lean_inc(v_val_5765_);
lean_dec_ref_known(v_otherwise_x3f_5714_, 1);
v_ref_5766_ = lean_ctor_get(v___y_5732_, 2);
v___x_5767_ = l_Lean_SourceInfo_fromRef(v_ref_5766_, v___x_5715_);
v___x_5768_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_5769_ = l_Lean_Name_mkStr4(v___x_5716_, v___x_5717_, v___x_5718_, v___x_5768_);
v___x_5770_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5767_);
v___x_5771_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5771_, 0, v___x_5767_);
lean_ctor_set(v___x_5771_, 1, v___x_5770_);
v___x_5772_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5773_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5724_) == 1)
{
lean_object* v_val_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; 
v_val_5809_ = lean_ctor_get(v_mutTk_x3f_5724_, 0);
v___x_5810_ = l_Lean_SourceInfo_fromRef(v_val_5809_, v___x_5723_);
v___x_5811_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5812_, 0, v___x_5810_);
lean_ctor_set(v___x_5812_, 1, v___x_5811_);
v___x_5813_ = l_Array_mkArray1___redArg(v___x_5812_);
v___y_5796_ = v___x_5813_;
goto v___jp_5795_;
}
else
{
lean_object* v___x_5814_; 
v___x_5814_ = lean_mk_empty_array_with_capacity(v___x_5725_);
v___y_5796_ = v___x_5814_;
goto v___jp_5795_;
}
v___jp_5774_:
{
lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; 
v___x_5780_ = l_Array_append___redArg(v___x_5773_, v___y_5779_);
lean_dec_ref(v___y_5779_);
lean_inc(v___x_5767_);
v___x_5781_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5781_, 0, v___x_5767_);
lean_ctor_set(v___x_5781_, 1, v___x_5772_);
lean_ctor_set(v___x_5781_, 2, v___x_5780_);
v___x_5782_ = lean_unsigned_to_nat(9u);
v___x_5783_ = lean_mk_empty_array_with_capacity(v___x_5782_);
v___x_5784_ = lean_array_push(v___x_5783_, v___x_5771_);
v___x_5785_ = lean_array_push(v___x_5784_, v___y_5775_);
v___x_5786_ = lean_array_push(v___x_5785_, v___y_5776_);
v___x_5787_ = lean_array_push(v___x_5786_, v___x_5720_);
v___x_5788_ = lean_array_push(v___x_5787_, v___y_5777_);
v___x_5789_ = lean_array_push(v___x_5788_, v___x_5721_);
v___x_5790_ = lean_array_push(v___x_5789_, v___y_5778_);
v___x_5791_ = lean_array_push(v___x_5790_, v_val_5765_);
v___x_5792_ = lean_array_push(v___x_5791_, v___x_5781_);
v___x_5793_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5793_, 0, v___x_5767_);
lean_ctor_set(v___x_5793_, 1, v___x_5769_);
lean_ctor_set(v___x_5793_, 2, v___x_5792_);
v___x_5794_ = l_Lean_Elab_Do_elabDoElem(v___x_5793_, v_dec_5722_, v___x_5723_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_);
return v___x_5794_;
}
v___jp_5795_:
{
lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; 
v___x_5797_ = l_Array_append___redArg(v___x_5773_, v___y_5796_);
lean_dec_ref(v___y_5796_);
lean_inc_n(v___x_5767_, 5);
v___x_5798_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5798_, 0, v___x_5767_);
lean_ctor_set(v___x_5798_, 1, v___x_5772_);
lean_ctor_set(v___x_5798_, 2, v___x_5797_);
v___x_5799_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5767_);
lean_ctor_set(v___x_5799_, 1, v___x_5772_);
lean_ctor_set(v___x_5799_, 2, v___x_5773_);
v___x_5800_ = l_Lean_Syntax_node1(v___x_5767_, v___x_5719_, v___x_5799_);
v___x_5801_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5802_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5802_, 0, v___x_5767_);
lean_ctor_set(v___x_5802_, 1, v___x_5801_);
v___x_5803_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5804_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5804_, 0, v___x_5767_);
lean_ctor_set(v___x_5804_, 1, v___x_5803_);
if (lean_obj_tag(v___y_5726_) == 0)
{
lean_object* v___x_5805_; 
v___x_5805_ = lean_mk_empty_array_with_capacity(v___x_5725_);
v___y_5775_ = v___x_5798_;
v___y_5776_ = v___x_5800_;
v___y_5777_ = v___x_5802_;
v___y_5778_ = v___x_5804_;
v___y_5779_ = v___x_5805_;
goto v___jp_5774_;
}
else
{
lean_object* v_val_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; 
v_val_5806_ = lean_ctor_get(v___y_5726_, 0);
lean_inc(v_val_5806_);
lean_dec_ref_known(v___y_5726_, 1);
v___x_5807_ = lean_mk_empty_array_with_capacity(v___x_5725_);
v___x_5808_ = lean_array_push(v___x_5807_, v_val_5806_);
v___y_5775_ = v___x_5798_;
v___y_5776_ = v___x_5800_;
v___y_5777_ = v___x_5802_;
v___y_5778_ = v___x_5804_;
v___y_5779_ = v___x_5808_;
goto v___jp_5774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_5815_ = _args[0];
lean_object* v___x_5816_ = _args[1];
lean_object* v___x_5817_ = _args[2];
lean_object* v___x_5818_ = _args[3];
lean_object* v___x_5819_ = _args[4];
lean_object* v___x_5820_ = _args[5];
lean_object* v___x_5821_ = _args[6];
lean_object* v___x_5822_ = _args[7];
lean_object* v_dec_5823_ = _args[8];
lean_object* v___x_5824_ = _args[9];
lean_object* v_mutTk_x3f_5825_ = _args[10];
lean_object* v___x_5826_ = _args[11];
lean_object* v___y_5827_ = _args[12];
lean_object* v___y_5828_ = _args[13];
lean_object* v___y_5829_ = _args[14];
lean_object* v___y_5830_ = _args[15];
lean_object* v___y_5831_ = _args[16];
lean_object* v___y_5832_ = _args[17];
lean_object* v___y_5833_ = _args[18];
lean_object* v___y_5834_ = _args[19];
lean_object* v___y_5835_ = _args[20];
_start:
{
uint8_t v___x_22846__boxed_5836_; uint8_t v___x_22853__boxed_5837_; lean_object* v_res_5838_; 
v___x_22846__boxed_5836_ = lean_unbox(v___x_5816_);
v___x_22853__boxed_5837_ = lean_unbox(v___x_5824_);
v_res_5838_ = l_Lean_Elab_Do_elabDoLetArrow___lam__0(v_otherwise_x3f_5815_, v___x_22846__boxed_5836_, v___x_5817_, v___x_5818_, v___x_5819_, v___x_5820_, v___x_5821_, v___x_5822_, v_dec_5823_, v___x_22853__boxed_5837_, v_mutTk_x3f_5825_, v___x_5826_, v___y_5827_, v___y_5828_, v___y_5829_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
lean_dec(v___y_5834_);
lean_dec_ref(v___y_5833_);
lean_dec(v___y_5832_);
lean_dec_ref(v___y_5831_);
lean_dec(v___y_5830_);
lean_dec_ref(v___y_5829_);
lean_dec_ref(v___y_5828_);
lean_dec(v___x_5826_);
lean_dec(v_mutTk_x3f_5825_);
return v_res_5838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object* v_otherwise_x3f_5839_, uint8_t v___x_5840_, lean_object* v___x_5841_, lean_object* v___x_5842_, lean_object* v___x_5843_, lean_object* v___x_5844_, lean_object* v___x_5845_, lean_object* v___x_5846_, lean_object* v_dec_5847_, uint8_t v___x_5848_, lean_object* v_mutTk_x3f_5849_, lean_object* v___x_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5839_) == 0)
{
lean_object* v_ref_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___y_5869_; 
lean_dec(v___y_5851_);
v_ref_5860_ = lean_ctor_get(v___y_5857_, 2);
v___x_5861_ = l_Lean_SourceInfo_fromRef(v_ref_5860_, v___x_5840_);
v___x_5862_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5843_);
lean_inc_ref(v___x_5842_);
lean_inc_ref(v___x_5841_);
v___x_5863_ = l_Lean_Name_mkStr4(v___x_5841_, v___x_5842_, v___x_5843_, v___x_5862_);
v___x_5864_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5861_);
v___x_5865_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5865_, 0, v___x_5861_);
lean_ctor_set(v___x_5865_, 1, v___x_5864_);
v___x_5866_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5867_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5849_) == 1)
{
lean_object* v_val_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; 
v_val_5884_ = lean_ctor_get(v_mutTk_x3f_5849_, 0);
v___x_5885_ = l_Lean_SourceInfo_fromRef(v_val_5884_, v___x_5848_);
v___x_5886_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5887_, 0, v___x_5885_);
lean_ctor_set(v___x_5887_, 1, v___x_5886_);
v___x_5888_ = l_Array_mkArray1___redArg(v___x_5887_);
v___y_5869_ = v___x_5888_;
goto v___jp_5868_;
}
else
{
lean_object* v___x_5889_; 
v___x_5889_ = lean_mk_empty_array_with_capacity(v___x_5850_);
v___y_5869_ = v___x_5889_;
goto v___jp_5868_;
}
v___jp_5868_:
{
lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; 
v___x_5870_ = l_Array_append___redArg(v___x_5867_, v___y_5869_);
lean_dec_ref(v___y_5869_);
lean_inc_n(v___x_5861_, 6);
v___x_5871_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5871_, 0, v___x_5861_);
lean_ctor_set(v___x_5871_, 1, v___x_5866_);
lean_ctor_set(v___x_5871_, 2, v___x_5870_);
v___x_5872_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5872_, 0, v___x_5861_);
lean_ctor_set(v___x_5872_, 1, v___x_5866_);
lean_ctor_set(v___x_5872_, 2, v___x_5867_);
lean_inc_ref_n(v___x_5872_, 2);
v___x_5873_ = l_Lean_Syntax_node1(v___x_5861_, v___x_5844_, v___x_5872_);
v___x_5874_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5843_);
lean_inc_ref(v___x_5842_);
lean_inc_ref(v___x_5841_);
v___x_5875_ = l_Lean_Name_mkStr4(v___x_5841_, v___x_5842_, v___x_5843_, v___x_5874_);
v___x_5876_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_5877_ = l_Lean_Name_mkStr4(v___x_5841_, v___x_5842_, v___x_5843_, v___x_5876_);
v___x_5878_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5879_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5879_, 0, v___x_5861_);
lean_ctor_set(v___x_5879_, 1, v___x_5878_);
v___x_5880_ = l_Lean_Syntax_node5(v___x_5861_, v___x_5877_, v___x_5845_, v___x_5872_, v___x_5872_, v___x_5879_, v___x_5846_);
v___x_5881_ = l_Lean_Syntax_node1(v___x_5861_, v___x_5875_, v___x_5880_);
v___x_5882_ = l_Lean_Syntax_node4(v___x_5861_, v___x_5863_, v___x_5865_, v___x_5871_, v___x_5873_, v___x_5881_);
v___x_5883_ = l_Lean_Elab_Do_elabDoElem(v___x_5882_, v_dec_5847_, v___x_5848_, v___y_5852_, v___y_5853_, v___y_5854_, v___y_5855_, v___y_5856_, v___y_5857_, v___y_5858_);
return v___x_5883_;
}
}
else
{
lean_object* v_val_5890_; lean_object* v_ref_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___y_5900_; lean_object* v___y_5901_; lean_object* v___y_5902_; lean_object* v___y_5903_; lean_object* v___y_5904_; lean_object* v___y_5921_; 
v_val_5890_ = lean_ctor_get(v_otherwise_x3f_5839_, 0);
lean_inc(v_val_5890_);
lean_dec_ref_known(v_otherwise_x3f_5839_, 1);
v_ref_5891_ = lean_ctor_get(v___y_5857_, 2);
v___x_5892_ = l_Lean_SourceInfo_fromRef(v_ref_5891_, v___x_5840_);
v___x_5893_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_5894_ = l_Lean_Name_mkStr4(v___x_5841_, v___x_5842_, v___x_5843_, v___x_5893_);
v___x_5895_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5892_);
v___x_5896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5892_);
lean_ctor_set(v___x_5896_, 1, v___x_5895_);
v___x_5897_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5898_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5849_) == 1)
{
lean_object* v_val_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; 
v_val_5934_ = lean_ctor_get(v_mutTk_x3f_5849_, 0);
v___x_5935_ = l_Lean_SourceInfo_fromRef(v_val_5934_, v___x_5848_);
v___x_5936_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5937_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5935_);
lean_ctor_set(v___x_5937_, 1, v___x_5936_);
v___x_5938_ = l_Array_mkArray1___redArg(v___x_5937_);
v___y_5921_ = v___x_5938_;
goto v___jp_5920_;
}
else
{
lean_object* v___x_5939_; 
v___x_5939_ = lean_mk_empty_array_with_capacity(v___x_5850_);
v___y_5921_ = v___x_5939_;
goto v___jp_5920_;
}
v___jp_5899_:
{
lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5905_ = l_Array_append___redArg(v___x_5898_, v___y_5904_);
lean_dec_ref(v___y_5904_);
lean_inc(v___x_5892_);
v___x_5906_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5906_, 0, v___x_5892_);
lean_ctor_set(v___x_5906_, 1, v___x_5897_);
lean_ctor_set(v___x_5906_, 2, v___x_5905_);
v___x_5907_ = lean_unsigned_to_nat(9u);
v___x_5908_ = lean_mk_empty_array_with_capacity(v___x_5907_);
v___x_5909_ = lean_array_push(v___x_5908_, v___x_5896_);
v___x_5910_ = lean_array_push(v___x_5909_, v___y_5901_);
v___x_5911_ = lean_array_push(v___x_5910_, v___y_5902_);
v___x_5912_ = lean_array_push(v___x_5911_, v___x_5845_);
v___x_5913_ = lean_array_push(v___x_5912_, v___y_5900_);
v___x_5914_ = lean_array_push(v___x_5913_, v___x_5846_);
v___x_5915_ = lean_array_push(v___x_5914_, v___y_5903_);
v___x_5916_ = lean_array_push(v___x_5915_, v_val_5890_);
v___x_5917_ = lean_array_push(v___x_5916_, v___x_5906_);
v___x_5918_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5918_, 0, v___x_5892_);
lean_ctor_set(v___x_5918_, 1, v___x_5894_);
lean_ctor_set(v___x_5918_, 2, v___x_5917_);
v___x_5919_ = l_Lean_Elab_Do_elabDoElem(v___x_5918_, v_dec_5847_, v___x_5848_, v___y_5852_, v___y_5853_, v___y_5854_, v___y_5855_, v___y_5856_, v___y_5857_, v___y_5858_);
return v___x_5919_;
}
v___jp_5920_:
{
lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; 
v___x_5922_ = l_Array_append___redArg(v___x_5898_, v___y_5921_);
lean_dec_ref(v___y_5921_);
lean_inc_n(v___x_5892_, 5);
v___x_5923_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5892_);
lean_ctor_set(v___x_5923_, 1, v___x_5897_);
lean_ctor_set(v___x_5923_, 2, v___x_5922_);
v___x_5924_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5924_, 0, v___x_5892_);
lean_ctor_set(v___x_5924_, 1, v___x_5897_);
lean_ctor_set(v___x_5924_, 2, v___x_5898_);
v___x_5925_ = l_Lean_Syntax_node1(v___x_5892_, v___x_5844_, v___x_5924_);
v___x_5926_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5927_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5927_, 0, v___x_5892_);
lean_ctor_set(v___x_5927_, 1, v___x_5926_);
v___x_5928_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5929_, 0, v___x_5892_);
lean_ctor_set(v___x_5929_, 1, v___x_5928_);
if (lean_obj_tag(v___y_5851_) == 0)
{
lean_object* v___x_5930_; 
v___x_5930_ = lean_mk_empty_array_with_capacity(v___x_5850_);
v___y_5900_ = v___x_5927_;
v___y_5901_ = v___x_5923_;
v___y_5902_ = v___x_5925_;
v___y_5903_ = v___x_5929_;
v___y_5904_ = v___x_5930_;
goto v___jp_5899_;
}
else
{
lean_object* v_val_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v_val_5931_ = lean_ctor_get(v___y_5851_, 0);
lean_inc(v_val_5931_);
lean_dec_ref_known(v___y_5851_, 1);
v___x_5932_ = lean_mk_empty_array_with_capacity(v___x_5850_);
v___x_5933_ = lean_array_push(v___x_5932_, v_val_5931_);
v___y_5900_ = v___x_5927_;
v___y_5901_ = v___x_5923_;
v___y_5902_ = v___x_5925_;
v___y_5903_ = v___x_5929_;
v___y_5904_ = v___x_5933_;
goto v___jp_5899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_5940_ = _args[0];
lean_object* v___x_5941_ = _args[1];
lean_object* v___x_5942_ = _args[2];
lean_object* v___x_5943_ = _args[3];
lean_object* v___x_5944_ = _args[4];
lean_object* v___x_5945_ = _args[5];
lean_object* v___x_5946_ = _args[6];
lean_object* v___x_5947_ = _args[7];
lean_object* v_dec_5948_ = _args[8];
lean_object* v___x_5949_ = _args[9];
lean_object* v_mutTk_x3f_5950_ = _args[10];
lean_object* v___x_5951_ = _args[11];
lean_object* v___y_5952_ = _args[12];
lean_object* v___y_5953_ = _args[13];
lean_object* v___y_5954_ = _args[14];
lean_object* v___y_5955_ = _args[15];
lean_object* v___y_5956_ = _args[16];
lean_object* v___y_5957_ = _args[17];
lean_object* v___y_5958_ = _args[18];
lean_object* v___y_5959_ = _args[19];
lean_object* v___y_5960_ = _args[20];
_start:
{
uint8_t v___x_23077__boxed_5961_; uint8_t v___x_23084__boxed_5962_; lean_object* v_res_5963_; 
v___x_23077__boxed_5961_ = lean_unbox(v___x_5941_);
v___x_23084__boxed_5962_ = lean_unbox(v___x_5949_);
v_res_5963_ = l_Lean_Elab_Do_elabDoLetArrow___lam__1(v_otherwise_x3f_5940_, v___x_23077__boxed_5961_, v___x_5942_, v___x_5943_, v___x_5944_, v___x_5945_, v___x_5946_, v___x_5947_, v_dec_5948_, v___x_23084__boxed_5962_, v_mutTk_x3f_5950_, v___x_5951_, v___y_5952_, v___y_5953_, v___y_5954_, v___y_5955_, v___y_5956_, v___y_5957_, v___y_5958_, v___y_5959_);
lean_dec(v___y_5959_);
lean_dec_ref(v___y_5958_);
lean_dec(v___y_5957_);
lean_dec_ref(v___y_5956_);
lean_dec(v___y_5955_);
lean_dec_ref(v___y_5954_);
lean_dec_ref(v___y_5953_);
lean_dec(v___x_5951_);
lean_dec(v_mutTk_x3f_5950_);
return v_res_5963_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1(void){
_start:
{
lean_object* v___x_5965_; lean_object* v___x_5966_; 
v___x_5965_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__0));
v___x_5966_ = l_Lean_stringToMessageData(v___x_5965_);
return v___x_5966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object* v_stx_5973_, lean_object* v_dec_5974_, lean_object* v_a_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_a_5979_, lean_object* v_a_5980_, lean_object* v_a_5981_){
_start:
{
lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; uint8_t v___x_5987_; 
v___x_5983_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_5984_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_5985_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_5986_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
lean_inc(v_stx_5973_);
v___x_5987_ = l_Lean_Syntax_isOfKind(v_stx_5973_, v___x_5986_);
if (v___x_5987_ == 0)
{
lean_object* v___x_5988_; 
lean_dec_ref(v_dec_5974_);
lean_dec(v_stx_5973_);
v___x_5988_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5988_;
}
else
{
lean_object* v___x_5989_; lean_object* v___y_5991_; lean_object* v___y_5992_; lean_object* v___y_5993_; lean_object* v___y_5994_; lean_object* v___y_5995_; uint8_t v___y_5996_; uint8_t v___y_5997_; lean_object* v___y_5998_; lean_object* v___y_5999_; lean_object* v___y_6000_; lean_object* v___y_6001_; lean_object* v___y_6002_; lean_object* v___y_6003_; lean_object* v___y_6004_; lean_object* v___y_6005_; lean_object* v___y_6006_; lean_object* v___y_6007_; lean_object* v___y_6026_; lean_object* v___y_6027_; uint8_t v___y_6028_; lean_object* v___y_6029_; lean_object* v___y_6030_; lean_object* v___y_6031_; lean_object* v___y_6032_; uint8_t v___y_6033_; lean_object* v___y_6034_; lean_object* v___y_6035_; lean_object* v___y_6036_; lean_object* v___y_6037_; lean_object* v___y_6038_; lean_object* v___y_6039_; lean_object* v___y_6040_; lean_object* v___y_6041_; lean_object* v___y_6042_; lean_object* v___y_6045_; lean_object* v___y_6046_; lean_object* v___y_6047_; lean_object* v___y_6048_; lean_object* v___y_6049_; lean_object* v___y_6050_; lean_object* v___y_6051_; uint8_t v___y_6052_; lean_object* v___y_6053_; lean_object* v___y_6054_; uint8_t v___y_6055_; lean_object* v___y_6056_; lean_object* v___y_6057_; lean_object* v___y_6058_; lean_object* v___y_6059_; lean_object* v___y_6060_; lean_object* v___y_6061_; lean_object* v___y_6080_; lean_object* v___y_6081_; uint8_t v___y_6082_; lean_object* v___y_6083_; lean_object* v___y_6084_; lean_object* v___y_6085_; uint8_t v___y_6086_; lean_object* v___y_6087_; lean_object* v___y_6088_; lean_object* v___y_6089_; lean_object* v___y_6090_; lean_object* v___y_6091_; lean_object* v___y_6092_; lean_object* v___y_6093_; lean_object* v___y_6094_; lean_object* v___y_6095_; lean_object* v___y_6096_; lean_object* v_tk_6098_; lean_object* v___x_6099_; lean_object* v___y_6101_; lean_object* v___y_6102_; uint8_t v___y_6103_; lean_object* v___y_6104_; lean_object* v___y_6105_; lean_object* v___y_6106_; uint8_t v___y_6107_; lean_object* v___y_6108_; lean_object* v___y_6109_; lean_object* v___y_6110_; lean_object* v___y_6111_; lean_object* v_patType_x3f_6112_; lean_object* v___y_6113_; lean_object* v___y_6114_; lean_object* v___y_6115_; lean_object* v___y_6116_; lean_object* v___y_6117_; lean_object* v___y_6118_; lean_object* v___y_6119_; lean_object* v___y_6164_; lean_object* v___y_6165_; uint8_t v___y_6166_; lean_object* v___y_6167_; lean_object* v___y_6168_; lean_object* v___y_6169_; uint8_t v___y_6170_; lean_object* v___y_6171_; lean_object* v___y_6172_; lean_object* v___y_6173_; lean_object* v_patType_x3f_6174_; lean_object* v___y_6175_; lean_object* v___y_6176_; lean_object* v___y_6177_; lean_object* v___y_6178_; lean_object* v___y_6179_; lean_object* v___y_6180_; lean_object* v___y_6181_; lean_object* v___y_6200_; lean_object* v___y_6201_; lean_object* v___y_6202_; uint8_t v___y_6203_; lean_object* v___y_6204_; lean_object* v_xType_x3f_6205_; lean_object* v___y_6206_; lean_object* v___y_6207_; lean_object* v___y_6208_; lean_object* v___y_6209_; lean_object* v___y_6210_; lean_object* v___y_6211_; lean_object* v___y_6212_; lean_object* v___y_6241_; lean_object* v___y_6242_; lean_object* v___y_6243_; lean_object* v___y_6244_; uint8_t v___y_6245_; lean_object* v___y_6246_; lean_object* v___y_6247_; lean_object* v___y_6248_; lean_object* v___y_6249_; lean_object* v___y_6250_; lean_object* v___y_6251_; lean_object* v___y_6252_; lean_object* v___y_6253_; lean_object* v___y_6254_; lean_object* v___y_6255_; lean_object* v___y_6256_; lean_object* v___y_6257_; lean_object* v___y_6300_; lean_object* v___y_6301_; lean_object* v___y_6302_; lean_object* v___y_6303_; uint8_t v___y_6304_; lean_object* v___y_6305_; lean_object* v___y_6306_; lean_object* v___y_6307_; lean_object* v___y_6308_; lean_object* v___y_6309_; lean_object* v___y_6310_; lean_object* v___y_6311_; lean_object* v___y_6312_; lean_object* v___y_6313_; lean_object* v___y_6314_; lean_object* v___y_6315_; lean_object* v___y_6316_; lean_object* v___y_6317_; lean_object* v___y_6329_; lean_object* v___y_6330_; lean_object* v___y_6331_; lean_object* v___y_6332_; uint8_t v___y_6333_; lean_object* v___y_6334_; lean_object* v___y_6335_; lean_object* v___y_6336_; lean_object* v___y_6337_; lean_object* v___y_6338_; lean_object* v___y_6339_; lean_object* v___y_6340_; lean_object* v___y_6341_; lean_object* v___y_6342_; lean_object* v___y_6343_; lean_object* v___y_6344_; lean_object* v___y_6345_; lean_object* v___y_6346_; lean_object* v___y_6347_; uint8_t v___y_6348_; lean_object* v___y_6351_; lean_object* v___y_6352_; lean_object* v___y_6353_; lean_object* v___y_6354_; uint8_t v___y_6355_; lean_object* v___y_6356_; lean_object* v___y_6357_; lean_object* v___y_6358_; lean_object* v___y_6359_; lean_object* v___y_6360_; lean_object* v___y_6361_; lean_object* v___y_6362_; lean_object* v___y_6363_; lean_object* v___y_6364_; lean_object* v___y_6365_; lean_object* v___y_6366_; lean_object* v___y_6367_; lean_object* v___y_6368_; lean_object* v___y_6369_; uint8_t v___y_6370_; lean_object* v_mutTk_x3f_6373_; lean_object* v___y_6374_; lean_object* v___y_6375_; lean_object* v___y_6376_; lean_object* v___y_6377_; lean_object* v___y_6378_; lean_object* v___y_6379_; lean_object* v___y_6380_; lean_object* v___x_6414_; uint8_t v___x_6415_; 
v___x_5989_ = lean_unsigned_to_nat(0u);
v_tk_6098_ = l_Lean_Syntax_getArg(v_stx_5973_, v___x_5989_);
v___x_6099_ = lean_unsigned_to_nat(1u);
v___x_6414_ = l_Lean_Syntax_getArg(v_stx_5973_, v___x_6099_);
v___x_6415_ = l_Lean_Syntax_isNone(v___x_6414_);
if (v___x_6415_ == 0)
{
uint8_t v___x_6416_; 
lean_inc(v___x_6414_);
v___x_6416_ = l_Lean_Syntax_matchesNull(v___x_6414_, v___x_6099_);
if (v___x_6416_ == 0)
{
lean_object* v___x_6417_; 
lean_dec(v___x_6414_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
lean_dec(v_stx_5973_);
v___x_6417_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6417_;
}
else
{
lean_object* v_mutTk_x3f_6418_; lean_object* v___x_6419_; 
v_mutTk_x3f_6418_ = l_Lean_Syntax_getArg(v___x_6414_, v___x_5989_);
lean_dec(v___x_6414_);
v___x_6419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6419_, 0, v_mutTk_x3f_6418_);
v_mutTk_x3f_6373_ = v___x_6419_;
v___y_6374_ = v_a_5975_;
v___y_6375_ = v_a_5976_;
v___y_6376_ = v_a_5977_;
v___y_6377_ = v_a_5978_;
v___y_6378_ = v_a_5979_;
v___y_6379_ = v_a_5980_;
v___y_6380_ = v_a_5981_;
goto v___jp_6372_;
}
}
else
{
lean_object* v___x_6420_; 
lean_dec(v___x_6414_);
v___x_6420_ = lean_box(0);
v_mutTk_x3f_6373_ = v___x_6420_;
v___y_6374_ = v_a_5975_;
v___y_6375_ = v_a_5976_;
v___y_6376_ = v_a_5977_;
v___y_6377_ = v_a_5978_;
v___y_6378_ = v_a_5979_;
v___y_6379_ = v_a_5980_;
v___y_6380_ = v_a_5981_;
goto v___jp_6372_;
}
v___jp_5990_:
{
lean_object* v___x_6008_; lean_object* v___x_6009_; 
v___x_6008_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6009_ = l_Lean_Core_mkFreshUserName(v___x_6008_, v___y_5991_, v___y_6005_);
if (lean_obj_tag(v___x_6009_) == 0)
{
lean_object* v_a_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___y_6014_; uint8_t v___x_6015_; lean_object* v___x_6016_; 
v_a_6010_ = lean_ctor_get(v___x_6009_, 0);
lean_inc(v_a_6010_);
lean_dec_ref_known(v___x_6009_, 1);
v___x_6011_ = l_Lean_mkIdentFrom(v___y_6001_, v_a_6010_, v___y_5996_);
lean_dec(v___y_6001_);
v___x_6012_ = lean_box(v___y_5997_);
v___x_6013_ = lean_box(v___x_5987_);
lean_inc(v___x_6011_);
lean_inc(v___y_6004_);
v___y_6014_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed), 21, 13);
lean_closure_set(v___y_6014_, 0, v___y_6003_);
lean_closure_set(v___y_6014_, 1, v___x_6012_);
lean_closure_set(v___y_6014_, 2, v___x_5983_);
lean_closure_set(v___y_6014_, 3, v___x_5984_);
lean_closure_set(v___y_6014_, 4, v___x_5985_);
lean_closure_set(v___y_6014_, 5, v___y_6004_);
lean_closure_set(v___y_6014_, 6, v___y_5992_);
lean_closure_set(v___y_6014_, 7, v___x_6011_);
lean_closure_set(v___y_6014_, 8, v_dec_5974_);
lean_closure_set(v___y_6014_, 9, v___x_6013_);
lean_closure_set(v___y_6014_, 10, v___y_5993_);
lean_closure_set(v___y_6014_, 11, v___x_5989_);
lean_closure_set(v___y_6014_, 12, v___y_6007_);
v___x_6015_ = 0;
v___x_6016_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6011_, v___y_5994_, v___y_6006_, v___y_6014_, v___x_6015_, v___y_5995_, v___y_5998_, v___y_5999_, v___y_6000_, v___y_6002_, v___y_5991_, v___y_6005_);
return v___x_6016_;
}
else
{
lean_object* v_a_6017_; lean_object* v___x_6019_; uint8_t v_isShared_6020_; uint8_t v_isSharedCheck_6024_; 
lean_dec(v___y_6007_);
lean_dec(v___y_6006_);
lean_dec(v___y_6003_);
lean_dec(v___y_6001_);
lean_dec(v___y_5994_);
lean_dec(v___y_5993_);
lean_dec(v___y_5992_);
lean_dec_ref(v_dec_5974_);
v_a_6017_ = lean_ctor_get(v___x_6009_, 0);
v_isSharedCheck_6024_ = !lean_is_exclusive(v___x_6009_);
if (v_isSharedCheck_6024_ == 0)
{
v___x_6019_ = v___x_6009_;
v_isShared_6020_ = v_isSharedCheck_6024_;
goto v_resetjp_6018_;
}
else
{
lean_inc(v_a_6017_);
lean_dec(v___x_6009_);
v___x_6019_ = lean_box(0);
v_isShared_6020_ = v_isSharedCheck_6024_;
goto v_resetjp_6018_;
}
v_resetjp_6018_:
{
lean_object* v___x_6022_; 
if (v_isShared_6020_ == 0)
{
v___x_6022_ = v___x_6019_;
goto v_reusejp_6021_;
}
else
{
lean_object* v_reuseFailAlloc_6023_; 
v_reuseFailAlloc_6023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6023_, 0, v_a_6017_);
v___x_6022_ = v_reuseFailAlloc_6023_;
goto v_reusejp_6021_;
}
v_reusejp_6021_:
{
return v___x_6022_;
}
}
}
}
v___jp_6025_:
{
lean_object* v___x_6043_; 
v___x_6043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6043_, 0, v___y_6035_);
v___y_5991_ = v___y_6039_;
v___y_5992_ = v___y_6026_;
v___y_5993_ = v___y_6027_;
v___y_5994_ = v___y_6040_;
v___y_5995_ = v___y_6041_;
v___y_5996_ = v___y_6033_;
v___y_5997_ = v___y_6028_;
v___y_5998_ = v___y_6030_;
v___y_5999_ = v___y_6037_;
v___y_6000_ = v___y_6038_;
v___y_6001_ = v___y_6031_;
v___y_6002_ = v___y_6036_;
v___y_6003_ = v___x_6043_;
v___y_6004_ = v___y_6029_;
v___y_6005_ = v___y_6034_;
v___y_6006_ = v___y_6032_;
v___y_6007_ = v___y_6042_;
goto v___jp_5990_;
}
v___jp_6044_:
{
lean_object* v___x_6062_; lean_object* v___x_6063_; 
v___x_6062_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6063_ = l_Lean_Core_mkFreshUserName(v___x_6062_, v___y_6050_, v___y_6047_);
if (lean_obj_tag(v___x_6063_) == 0)
{
lean_object* v_a_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___y_6068_; uint8_t v___x_6069_; lean_object* v___x_6070_; 
v_a_6064_ = lean_ctor_get(v___x_6063_, 0);
lean_inc(v_a_6064_);
lean_dec_ref_known(v___x_6063_, 1);
v___x_6065_ = l_Lean_mkIdentFrom(v___y_6060_, v_a_6064_, v___y_6052_);
lean_dec(v___y_6060_);
v___x_6066_ = lean_box(v___y_6055_);
v___x_6067_ = lean_box(v___x_5987_);
lean_inc(v___x_6065_);
lean_inc(v___y_6058_);
v___y_6068_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed), 21, 13);
lean_closure_set(v___y_6068_, 0, v___y_6057_);
lean_closure_set(v___y_6068_, 1, v___x_6066_);
lean_closure_set(v___y_6068_, 2, v___x_5983_);
lean_closure_set(v___y_6068_, 3, v___x_5984_);
lean_closure_set(v___y_6068_, 4, v___x_5985_);
lean_closure_set(v___y_6068_, 5, v___y_6058_);
lean_closure_set(v___y_6068_, 6, v___y_6045_);
lean_closure_set(v___y_6068_, 7, v___x_6065_);
lean_closure_set(v___y_6068_, 8, v_dec_5974_);
lean_closure_set(v___y_6068_, 9, v___x_6067_);
lean_closure_set(v___y_6068_, 10, v___y_6046_);
lean_closure_set(v___y_6068_, 11, v___x_5989_);
lean_closure_set(v___y_6068_, 12, v___y_6061_);
v___x_6069_ = 0;
v___x_6070_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6065_, v___y_6056_, v___y_6059_, v___y_6068_, v___x_6069_, v___y_6049_, v___y_6048_, v___y_6054_, v___y_6053_, v___y_6051_, v___y_6050_, v___y_6047_);
return v___x_6070_;
}
else
{
lean_object* v_a_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6078_; 
lean_dec(v___y_6061_);
lean_dec(v___y_6060_);
lean_dec(v___y_6059_);
lean_dec(v___y_6057_);
lean_dec(v___y_6056_);
lean_dec(v___y_6046_);
lean_dec(v___y_6045_);
lean_dec_ref(v_dec_5974_);
v_a_6071_ = lean_ctor_get(v___x_6063_, 0);
v_isSharedCheck_6078_ = !lean_is_exclusive(v___x_6063_);
if (v_isSharedCheck_6078_ == 0)
{
v___x_6073_ = v___x_6063_;
v_isShared_6074_ = v_isSharedCheck_6078_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_a_6071_);
lean_dec(v___x_6063_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6078_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v___x_6076_; 
if (v_isShared_6074_ == 0)
{
v___x_6076_ = v___x_6073_;
goto v_reusejp_6075_;
}
else
{
lean_object* v_reuseFailAlloc_6077_; 
v_reuseFailAlloc_6077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6077_, 0, v_a_6071_);
v___x_6076_ = v_reuseFailAlloc_6077_;
goto v_reusejp_6075_;
}
v_reusejp_6075_:
{
return v___x_6076_;
}
}
}
}
v___jp_6079_:
{
lean_object* v___x_6097_; 
v___x_6097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6097_, 0, v___y_6087_);
v___y_6045_ = v___y_6080_;
v___y_6046_ = v___y_6081_;
v___y_6047_ = v___y_6088_;
v___y_6048_ = v___y_6094_;
v___y_6049_ = v___y_6092_;
v___y_6050_ = v___y_6095_;
v___y_6051_ = v___y_6090_;
v___y_6052_ = v___y_6086_;
v___y_6053_ = v___y_6089_;
v___y_6054_ = v___y_6085_;
v___y_6055_ = v___y_6082_;
v___y_6056_ = v___y_6093_;
v___y_6057_ = v___x_6097_;
v___y_6058_ = v___y_6083_;
v___y_6059_ = v___y_6091_;
v___y_6060_ = v___y_6084_;
v___y_6061_ = v___y_6096_;
goto v___jp_6044_;
}
v___jp_6100_:
{
lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; uint8_t v___x_6123_; 
v___x_6120_ = l_Lean_Syntax_getArg(v___y_6110_, v___y_6106_);
v___x_6121_ = lean_unsigned_to_nat(4u);
v___x_6122_ = l_Lean_Syntax_getArg(v___y_6110_, v___x_6121_);
lean_dec(v___y_6110_);
lean_inc(v___x_6122_);
v___x_6123_ = l_Lean_Syntax_matchesNull(v___x_6122_, v___x_5989_);
if (v___x_6123_ == 0)
{
uint8_t v___x_6124_; 
lean_dec(v___y_6111_);
lean_dec(v_tk_6098_);
v___x_6124_ = l_Lean_Syntax_isNone(v___x_6122_);
if (v___x_6124_ == 0)
{
uint8_t v___x_6125_; 
lean_inc(v___x_6122_);
v___x_6125_ = l_Lean_Syntax_matchesNull(v___x_6122_, v___y_6106_);
if (v___x_6125_ == 0)
{
lean_object* v___x_6126_; 
lean_dec(v___x_6122_);
lean_dec(v___x_6120_);
lean_dec(v_patType_x3f_6112_);
lean_dec(v___y_6105_);
lean_dec(v___y_6102_);
lean_dec(v___y_6101_);
lean_dec_ref(v_dec_5974_);
v___x_6126_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6126_;
}
else
{
lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v___x_6127_ = l_Lean_Syntax_getArg(v___x_6122_, v___x_6099_);
v___x_6128_ = l_Lean_Syntax_getArg(v___x_6122_, v___y_6109_);
lean_dec(v___x_6122_);
v___x_6129_ = l_Lean_Syntax_getOptional_x3f(v___x_6128_);
lean_dec(v___x_6128_);
if (lean_obj_tag(v___x_6129_) == 0)
{
lean_inc(v___y_6108_);
v___y_6026_ = v___y_6102_;
v___y_6027_ = v___y_6101_;
v___y_6028_ = v___y_6103_;
v___y_6029_ = v___y_6104_;
v___y_6030_ = v___y_6114_;
v___y_6031_ = v___y_6105_;
v___y_6032_ = v___x_6120_;
v___y_6033_ = v___y_6107_;
v___y_6034_ = v___y_6119_;
v___y_6035_ = v___x_6127_;
v___y_6036_ = v___y_6117_;
v___y_6037_ = v___y_6115_;
v___y_6038_ = v___y_6116_;
v___y_6039_ = v___y_6118_;
v___y_6040_ = v_patType_x3f_6112_;
v___y_6041_ = v___y_6113_;
v___y_6042_ = v___y_6108_;
goto v___jp_6025_;
}
else
{
lean_object* v_val_6130_; lean_object* v___x_6132_; uint8_t v_isShared_6133_; uint8_t v_isSharedCheck_6137_; 
v_val_6130_ = lean_ctor_get(v___x_6129_, 0);
v_isSharedCheck_6137_ = !lean_is_exclusive(v___x_6129_);
if (v_isSharedCheck_6137_ == 0)
{
v___x_6132_ = v___x_6129_;
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
else
{
lean_inc(v_val_6130_);
lean_dec(v___x_6129_);
v___x_6132_ = lean_box(0);
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
v_resetjp_6131_:
{
lean_object* v___x_6135_; 
if (v_isShared_6133_ == 0)
{
v___x_6135_ = v___x_6132_;
goto v_reusejp_6134_;
}
else
{
lean_object* v_reuseFailAlloc_6136_; 
v_reuseFailAlloc_6136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6136_, 0, v_val_6130_);
v___x_6135_ = v_reuseFailAlloc_6136_;
goto v_reusejp_6134_;
}
v_reusejp_6134_:
{
v___y_6026_ = v___y_6102_;
v___y_6027_ = v___y_6101_;
v___y_6028_ = v___y_6103_;
v___y_6029_ = v___y_6104_;
v___y_6030_ = v___y_6114_;
v___y_6031_ = v___y_6105_;
v___y_6032_ = v___x_6120_;
v___y_6033_ = v___y_6107_;
v___y_6034_ = v___y_6119_;
v___y_6035_ = v___x_6127_;
v___y_6036_ = v___y_6117_;
v___y_6037_ = v___y_6115_;
v___y_6038_ = v___y_6116_;
v___y_6039_ = v___y_6118_;
v___y_6040_ = v_patType_x3f_6112_;
v___y_6041_ = v___y_6113_;
v___y_6042_ = v___x_6135_;
goto v___jp_6025_;
}
}
}
}
}
else
{
lean_dec(v___x_6122_);
lean_inc_n(v___y_6108_, 2);
v___y_5991_ = v___y_6118_;
v___y_5992_ = v___y_6102_;
v___y_5993_ = v___y_6101_;
v___y_5994_ = v_patType_x3f_6112_;
v___y_5995_ = v___y_6113_;
v___y_5996_ = v___y_6107_;
v___y_5997_ = v___y_6103_;
v___y_5998_ = v___y_6114_;
v___y_5999_ = v___y_6115_;
v___y_6000_ = v___y_6116_;
v___y_6001_ = v___y_6105_;
v___y_6002_ = v___y_6117_;
v___y_6003_ = v___y_6108_;
v___y_6004_ = v___y_6104_;
v___y_6005_ = v___y_6119_;
v___y_6006_ = v___x_6120_;
v___y_6007_ = v___y_6108_;
goto v___jp_5990_;
}
}
else
{
lean_object* v___x_6138_; lean_object* v___x_6139_; 
lean_dec(v___x_6122_);
lean_dec(v___y_6105_);
lean_dec(v___y_6102_);
lean_dec(v___y_6101_);
v___x_6138_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6139_ = l_Lean_Core_mkFreshUserName(v___x_6138_, v___y_6118_, v___y_6119_);
if (lean_obj_tag(v___x_6139_) == 0)
{
lean_object* v_a_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; 
v_a_6140_ = lean_ctor_get(v___x_6139_, 0);
lean_inc(v_a_6140_);
lean_dec_ref_known(v___x_6139_, 1);
v___x_6141_ = l_Lean_mkIdentFrom(v___y_6111_, v_a_6140_, v___y_6107_);
lean_dec(v___y_6111_);
v___x_6142_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_5974_, v_tk_6098_, v___y_6113_, v___y_6114_, v___y_6115_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_);
lean_dec(v_tk_6098_);
if (lean_obj_tag(v___x_6142_) == 0)
{
lean_object* v_a_6143_; uint8_t v_kind_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; 
v_a_6143_ = lean_ctor_get(v___x_6142_, 0);
lean_inc(v_a_6143_);
lean_dec_ref_known(v___x_6142_, 1);
v_kind_6144_ = lean_ctor_get_uint8(v_a_6143_, sizeof(void*)*3);
v___x_6145_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6145_, 0, v_a_6143_);
v___x_6146_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6141_, v_patType_x3f_6112_, v___x_6120_, v___x_6145_, v_kind_6144_, v___y_6113_, v___y_6114_, v___y_6115_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_);
return v___x_6146_;
}
else
{
lean_object* v_a_6147_; lean_object* v___x_6149_; uint8_t v_isShared_6150_; uint8_t v_isSharedCheck_6154_; 
lean_dec(v___x_6141_);
lean_dec(v___x_6120_);
lean_dec(v_patType_x3f_6112_);
v_a_6147_ = lean_ctor_get(v___x_6142_, 0);
v_isSharedCheck_6154_ = !lean_is_exclusive(v___x_6142_);
if (v_isSharedCheck_6154_ == 0)
{
v___x_6149_ = v___x_6142_;
v_isShared_6150_ = v_isSharedCheck_6154_;
goto v_resetjp_6148_;
}
else
{
lean_inc(v_a_6147_);
lean_dec(v___x_6142_);
v___x_6149_ = lean_box(0);
v_isShared_6150_ = v_isSharedCheck_6154_;
goto v_resetjp_6148_;
}
v_resetjp_6148_:
{
lean_object* v___x_6152_; 
if (v_isShared_6150_ == 0)
{
v___x_6152_ = v___x_6149_;
goto v_reusejp_6151_;
}
else
{
lean_object* v_reuseFailAlloc_6153_; 
v_reuseFailAlloc_6153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6153_, 0, v_a_6147_);
v___x_6152_ = v_reuseFailAlloc_6153_;
goto v_reusejp_6151_;
}
v_reusejp_6151_:
{
return v___x_6152_;
}
}
}
}
else
{
lean_object* v_a_6155_; lean_object* v___x_6157_; uint8_t v_isShared_6158_; uint8_t v_isSharedCheck_6162_; 
lean_dec(v___x_6120_);
lean_dec(v_patType_x3f_6112_);
lean_dec(v___y_6111_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v_a_6155_ = lean_ctor_get(v___x_6139_, 0);
v_isSharedCheck_6162_ = !lean_is_exclusive(v___x_6139_);
if (v_isSharedCheck_6162_ == 0)
{
v___x_6157_ = v___x_6139_;
v_isShared_6158_ = v_isSharedCheck_6162_;
goto v_resetjp_6156_;
}
else
{
lean_inc(v_a_6155_);
lean_dec(v___x_6139_);
v___x_6157_ = lean_box(0);
v_isShared_6158_ = v_isSharedCheck_6162_;
goto v_resetjp_6156_;
}
v_resetjp_6156_:
{
lean_object* v___x_6160_; 
if (v_isShared_6158_ == 0)
{
v___x_6160_ = v___x_6157_;
goto v_reusejp_6159_;
}
else
{
lean_object* v_reuseFailAlloc_6161_; 
v_reuseFailAlloc_6161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6161_, 0, v_a_6155_);
v___x_6160_ = v_reuseFailAlloc_6161_;
goto v_reusejp_6159_;
}
v_reusejp_6159_:
{
return v___x_6160_;
}
}
}
}
}
v___jp_6163_:
{
lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; uint8_t v___x_6185_; 
v___x_6182_ = l_Lean_Syntax_getArg(v___y_6173_, v___y_6169_);
v___x_6183_ = lean_unsigned_to_nat(4u);
v___x_6184_ = l_Lean_Syntax_getArg(v___y_6173_, v___x_6183_);
lean_dec(v___y_6173_);
v___x_6185_ = l_Lean_Syntax_isNone(v___x_6184_);
if (v___x_6185_ == 0)
{
uint8_t v___x_6186_; 
lean_inc(v___x_6184_);
v___x_6186_ = l_Lean_Syntax_matchesNull(v___x_6184_, v___y_6169_);
if (v___x_6186_ == 0)
{
lean_object* v___x_6187_; 
lean_dec(v___x_6184_);
lean_dec(v___x_6182_);
lean_dec(v_patType_x3f_6174_);
lean_dec(v___y_6168_);
lean_dec(v___y_6165_);
lean_dec(v___y_6164_);
lean_dec_ref(v_dec_5974_);
v___x_6187_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6187_;
}
else
{
lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; 
v___x_6188_ = l_Lean_Syntax_getArg(v___x_6184_, v___x_6099_);
v___x_6189_ = l_Lean_Syntax_getArg(v___x_6184_, v___y_6172_);
lean_dec(v___x_6184_);
v___x_6190_ = l_Lean_Syntax_getOptional_x3f(v___x_6189_);
lean_dec(v___x_6189_);
if (lean_obj_tag(v___x_6190_) == 0)
{
lean_inc(v___y_6171_);
v___y_6080_ = v___y_6165_;
v___y_6081_ = v___y_6164_;
v___y_6082_ = v___y_6166_;
v___y_6083_ = v___y_6167_;
v___y_6084_ = v___y_6168_;
v___y_6085_ = v___y_6177_;
v___y_6086_ = v___y_6170_;
v___y_6087_ = v___x_6188_;
v___y_6088_ = v___y_6181_;
v___y_6089_ = v___y_6178_;
v___y_6090_ = v___y_6179_;
v___y_6091_ = v___x_6182_;
v___y_6092_ = v___y_6175_;
v___y_6093_ = v_patType_x3f_6174_;
v___y_6094_ = v___y_6176_;
v___y_6095_ = v___y_6180_;
v___y_6096_ = v___y_6171_;
goto v___jp_6079_;
}
else
{
lean_object* v_val_6191_; lean_object* v___x_6193_; uint8_t v_isShared_6194_; uint8_t v_isSharedCheck_6198_; 
v_val_6191_ = lean_ctor_get(v___x_6190_, 0);
v_isSharedCheck_6198_ = !lean_is_exclusive(v___x_6190_);
if (v_isSharedCheck_6198_ == 0)
{
v___x_6193_ = v___x_6190_;
v_isShared_6194_ = v_isSharedCheck_6198_;
goto v_resetjp_6192_;
}
else
{
lean_inc(v_val_6191_);
lean_dec(v___x_6190_);
v___x_6193_ = lean_box(0);
v_isShared_6194_ = v_isSharedCheck_6198_;
goto v_resetjp_6192_;
}
v_resetjp_6192_:
{
lean_object* v___x_6196_; 
if (v_isShared_6194_ == 0)
{
v___x_6196_ = v___x_6193_;
goto v_reusejp_6195_;
}
else
{
lean_object* v_reuseFailAlloc_6197_; 
v_reuseFailAlloc_6197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6197_, 0, v_val_6191_);
v___x_6196_ = v_reuseFailAlloc_6197_;
goto v_reusejp_6195_;
}
v_reusejp_6195_:
{
v___y_6080_ = v___y_6165_;
v___y_6081_ = v___y_6164_;
v___y_6082_ = v___y_6166_;
v___y_6083_ = v___y_6167_;
v___y_6084_ = v___y_6168_;
v___y_6085_ = v___y_6177_;
v___y_6086_ = v___y_6170_;
v___y_6087_ = v___x_6188_;
v___y_6088_ = v___y_6181_;
v___y_6089_ = v___y_6178_;
v___y_6090_ = v___y_6179_;
v___y_6091_ = v___x_6182_;
v___y_6092_ = v___y_6175_;
v___y_6093_ = v_patType_x3f_6174_;
v___y_6094_ = v___y_6176_;
v___y_6095_ = v___y_6180_;
v___y_6096_ = v___x_6196_;
goto v___jp_6079_;
}
}
}
}
}
else
{
lean_dec(v___x_6184_);
lean_inc_n(v___y_6171_, 2);
v___y_6045_ = v___y_6165_;
v___y_6046_ = v___y_6164_;
v___y_6047_ = v___y_6181_;
v___y_6048_ = v___y_6176_;
v___y_6049_ = v___y_6175_;
v___y_6050_ = v___y_6180_;
v___y_6051_ = v___y_6179_;
v___y_6052_ = v___y_6170_;
v___y_6053_ = v___y_6178_;
v___y_6054_ = v___y_6177_;
v___y_6055_ = v___y_6166_;
v___y_6056_ = v_patType_x3f_6174_;
v___y_6057_ = v___y_6171_;
v___y_6058_ = v___y_6167_;
v___y_6059_ = v___x_6182_;
v___y_6060_ = v___y_6168_;
v___y_6061_ = v___y_6171_;
goto v___jp_6044_;
}
}
v___jp_6199_:
{
lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; 
v___x_6213_ = l_Lean_Syntax_getArg(v___y_6204_, v___y_6201_);
lean_dec(v___y_6204_);
v___x_6214_ = lean_mk_empty_array_with_capacity(v___x_6099_);
lean_inc(v___y_6202_);
v___x_6215_ = lean_array_push(v___x_6214_, v___y_6202_);
v___x_6216_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_6215_, v___y_6206_, v___y_6207_, v___y_6208_, v___y_6209_, v___y_6210_, v___y_6211_, v___y_6212_);
lean_dec_ref(v___x_6215_);
if (lean_obj_tag(v___x_6216_) == 0)
{
lean_object* v___x_6217_; 
lean_dec_ref_known(v___x_6216_, 1);
v___x_6217_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_5974_, v_tk_6098_, v___y_6206_, v___y_6207_, v___y_6208_, v___y_6209_, v___y_6210_, v___y_6211_, v___y_6212_);
lean_dec(v_tk_6098_);
if (lean_obj_tag(v___x_6217_) == 0)
{
lean_object* v_a_6218_; uint8_t v_kind_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; 
v_a_6218_ = lean_ctor_get(v___x_6217_, 0);
lean_inc(v_a_6218_);
lean_dec_ref_known(v___x_6217_, 1);
v_kind_6219_ = lean_ctor_get_uint8(v_a_6218_, sizeof(void*)*3);
v___x_6220_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6220_, 0, v_a_6218_);
v___x_6221_ = lean_box(v___y_6203_);
lean_inc(v___y_6202_);
v___x_6222_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_declareMutVar_x3f___boxed), 13, 5);
lean_closure_set(v___x_6222_, 0, lean_box(0));
lean_closure_set(v___x_6222_, 1, v___y_6200_);
lean_closure_set(v___x_6222_, 2, v___y_6202_);
lean_closure_set(v___x_6222_, 3, v___x_6221_);
lean_closure_set(v___x_6222_, 4, v___x_6220_);
v___x_6223_ = l_Lean_Elab_Do_elabDoIdDecl(v___y_6202_, v_xType_x3f_6205_, v___x_6213_, v___x_6222_, v_kind_6219_, v___y_6206_, v___y_6207_, v___y_6208_, v___y_6209_, v___y_6210_, v___y_6211_, v___y_6212_);
return v___x_6223_;
}
else
{
lean_object* v_a_6224_; lean_object* v___x_6226_; uint8_t v_isShared_6227_; uint8_t v_isSharedCheck_6231_; 
lean_dec(v___x_6213_);
lean_dec(v_xType_x3f_6205_);
lean_dec(v___y_6202_);
lean_dec(v___y_6200_);
v_a_6224_ = lean_ctor_get(v___x_6217_, 0);
v_isSharedCheck_6231_ = !lean_is_exclusive(v___x_6217_);
if (v_isSharedCheck_6231_ == 0)
{
v___x_6226_ = v___x_6217_;
v_isShared_6227_ = v_isSharedCheck_6231_;
goto v_resetjp_6225_;
}
else
{
lean_inc(v_a_6224_);
lean_dec(v___x_6217_);
v___x_6226_ = lean_box(0);
v_isShared_6227_ = v_isSharedCheck_6231_;
goto v_resetjp_6225_;
}
v_resetjp_6225_:
{
lean_object* v___x_6229_; 
if (v_isShared_6227_ == 0)
{
v___x_6229_ = v___x_6226_;
goto v_reusejp_6228_;
}
else
{
lean_object* v_reuseFailAlloc_6230_; 
v_reuseFailAlloc_6230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6230_, 0, v_a_6224_);
v___x_6229_ = v_reuseFailAlloc_6230_;
goto v_reusejp_6228_;
}
v_reusejp_6228_:
{
return v___x_6229_;
}
}
}
}
else
{
lean_object* v_a_6232_; lean_object* v___x_6234_; uint8_t v_isShared_6235_; uint8_t v_isSharedCheck_6239_; 
lean_dec(v___x_6213_);
lean_dec(v_xType_x3f_6205_);
lean_dec(v___y_6202_);
lean_dec(v___y_6200_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v_a_6232_ = lean_ctor_get(v___x_6216_, 0);
v_isSharedCheck_6239_ = !lean_is_exclusive(v___x_6216_);
if (v_isSharedCheck_6239_ == 0)
{
v___x_6234_ = v___x_6216_;
v_isShared_6235_ = v_isSharedCheck_6239_;
goto v_resetjp_6233_;
}
else
{
lean_inc(v_a_6232_);
lean_dec(v___x_6216_);
v___x_6234_ = lean_box(0);
v_isShared_6235_ = v_isSharedCheck_6239_;
goto v_resetjp_6233_;
}
v_resetjp_6233_:
{
lean_object* v___x_6237_; 
if (v_isShared_6235_ == 0)
{
v___x_6237_ = v___x_6234_;
goto v_reusejp_6236_;
}
else
{
lean_object* v_reuseFailAlloc_6238_; 
v_reuseFailAlloc_6238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6238_, 0, v_a_6232_);
v___x_6237_ = v_reuseFailAlloc_6238_;
goto v_reusejp_6236_;
}
v_reusejp_6236_:
{
return v___x_6237_;
}
}
}
}
v___jp_6240_:
{
uint8_t v___x_6258_; 
lean_inc(v___y_6250_);
v___x_6258_ = l_Lean_Syntax_isOfKind(v___y_6250_, v___y_6246_);
if (v___x_6258_ == 0)
{
uint8_t v___x_6259_; 
lean_dec(v___y_6243_);
lean_inc(v___y_6250_);
v___x_6259_ = l_Lean_Syntax_isOfKind(v___y_6250_, v___y_6247_);
if (v___x_6259_ == 0)
{
lean_object* v___x_6260_; 
lean_dec(v___y_6250_);
lean_dec(v___y_6241_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6260_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6260_;
}
else
{
lean_object* v___x_6261_; lean_object* v___x_6262_; uint8_t v___x_6263_; 
v___x_6261_ = l_Lean_Syntax_getArg(v___y_6250_, v___x_5989_);
v___x_6262_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
lean_inc(v___x_6261_);
v___x_6263_ = l_Lean_Syntax_isOfKind(v___x_6261_, v___x_6262_);
if (v___x_6263_ == 0)
{
lean_object* v___x_6264_; uint8_t v___x_6265_; 
lean_dec(v_tk_6098_);
v___x_6264_ = l_Lean_Syntax_getArg(v___y_6250_, v___x_6099_);
v___x_6265_ = l_Lean_Syntax_isNone(v___x_6264_);
if (v___x_6265_ == 0)
{
uint8_t v___x_6266_; 
lean_inc(v___x_6264_);
v___x_6266_ = l_Lean_Syntax_matchesNull(v___x_6264_, v___x_6099_);
if (v___x_6266_ == 0)
{
lean_object* v___x_6267_; 
lean_dec(v___x_6264_);
lean_dec(v___x_6261_);
lean_dec(v___y_6250_);
lean_dec(v___y_6241_);
lean_dec_ref(v_dec_5974_);
v___x_6267_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6267_;
}
else
{
lean_object* v___x_6268_; lean_object* v___x_6269_; uint8_t v___x_6270_; 
v___x_6268_ = l_Lean_Syntax_getArg(v___x_6264_, v___x_5989_);
lean_dec(v___x_6264_);
v___x_6269_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_6268_);
v___x_6270_ = l_Lean_Syntax_isOfKind(v___x_6268_, v___x_6269_);
if (v___x_6270_ == 0)
{
lean_object* v___x_6271_; 
lean_dec(v___x_6268_);
lean_dec(v___x_6261_);
lean_dec(v___y_6250_);
lean_dec(v___y_6241_);
lean_dec_ref(v_dec_5974_);
v___x_6271_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6271_;
}
else
{
lean_object* v___x_6272_; lean_object* v___x_6273_; 
v___x_6272_ = l_Lean_Syntax_getArg(v___x_6268_, v___x_6099_);
lean_dec(v___x_6268_);
v___x_6273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6273_, 0, v___x_6272_);
lean_inc(v___x_6261_);
v___y_6164_ = v___y_6241_;
v___y_6165_ = v___x_6261_;
v___y_6166_ = v___x_6263_;
v___y_6167_ = v___y_6242_;
v___y_6168_ = v___x_6261_;
v___y_6169_ = v___y_6244_;
v___y_6170_ = v___y_6245_;
v___y_6171_ = v___y_6248_;
v___y_6172_ = v___y_6249_;
v___y_6173_ = v___y_6250_;
v_patType_x3f_6174_ = v___x_6273_;
v___y_6175_ = v___y_6251_;
v___y_6176_ = v___y_6252_;
v___y_6177_ = v___y_6253_;
v___y_6178_ = v___y_6254_;
v___y_6179_ = v___y_6255_;
v___y_6180_ = v___y_6256_;
v___y_6181_ = v___y_6257_;
goto v___jp_6163_;
}
}
}
else
{
lean_dec(v___x_6264_);
lean_inc(v___y_6248_);
lean_inc(v___x_6261_);
v___y_6164_ = v___y_6241_;
v___y_6165_ = v___x_6261_;
v___y_6166_ = v___x_6263_;
v___y_6167_ = v___y_6242_;
v___y_6168_ = v___x_6261_;
v___y_6169_ = v___y_6244_;
v___y_6170_ = v___y_6245_;
v___y_6171_ = v___y_6248_;
v___y_6172_ = v___y_6249_;
v___y_6173_ = v___y_6250_;
v_patType_x3f_6174_ = v___y_6248_;
v___y_6175_ = v___y_6251_;
v___y_6176_ = v___y_6252_;
v___y_6177_ = v___y_6253_;
v___y_6178_ = v___y_6254_;
v___y_6179_ = v___y_6255_;
v___y_6180_ = v___y_6256_;
v___y_6181_ = v___y_6257_;
goto v___jp_6163_;
}
}
else
{
lean_object* v___x_6274_; lean_object* v___x_6275_; uint8_t v___x_6276_; 
v___x_6274_ = l_Lean_Syntax_getArg(v___x_6261_, v___x_5989_);
v___x_6275_ = l_Lean_Syntax_getArg(v___y_6250_, v___x_6099_);
v___x_6276_ = l_Lean_Syntax_isNone(v___x_6275_);
if (v___x_6276_ == 0)
{
uint8_t v___x_6277_; 
lean_inc(v___x_6275_);
v___x_6277_ = l_Lean_Syntax_matchesNull(v___x_6275_, v___x_6099_);
if (v___x_6277_ == 0)
{
lean_object* v___x_6278_; 
lean_dec(v___x_6275_);
lean_dec(v___x_6274_);
lean_dec(v___x_6261_);
lean_dec(v___y_6250_);
lean_dec(v___y_6241_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6278_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6278_;
}
else
{
lean_object* v___x_6279_; lean_object* v___x_6280_; uint8_t v___x_6281_; 
v___x_6279_ = l_Lean_Syntax_getArg(v___x_6275_, v___x_5989_);
lean_dec(v___x_6275_);
v___x_6280_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_6279_);
v___x_6281_ = l_Lean_Syntax_isOfKind(v___x_6279_, v___x_6280_);
if (v___x_6281_ == 0)
{
lean_object* v___x_6282_; 
lean_dec(v___x_6279_);
lean_dec(v___x_6274_);
lean_dec(v___x_6261_);
lean_dec(v___y_6250_);
lean_dec(v___y_6241_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6282_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6282_;
}
else
{
lean_object* v___x_6283_; lean_object* v___x_6284_; 
v___x_6283_ = l_Lean_Syntax_getArg(v___x_6279_, v___x_6099_);
lean_dec(v___x_6279_);
v___x_6284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6284_, 0, v___x_6283_);
lean_inc(v___x_6261_);
v___y_6101_ = v___y_6241_;
v___y_6102_ = v___x_6261_;
v___y_6103_ = v___x_6258_;
v___y_6104_ = v___y_6242_;
v___y_6105_ = v___x_6261_;
v___y_6106_ = v___y_6244_;
v___y_6107_ = v___y_6245_;
v___y_6108_ = v___y_6248_;
v___y_6109_ = v___y_6249_;
v___y_6110_ = v___y_6250_;
v___y_6111_ = v___x_6274_;
v_patType_x3f_6112_ = v___x_6284_;
v___y_6113_ = v___y_6251_;
v___y_6114_ = v___y_6252_;
v___y_6115_ = v___y_6253_;
v___y_6116_ = v___y_6254_;
v___y_6117_ = v___y_6255_;
v___y_6118_ = v___y_6256_;
v___y_6119_ = v___y_6257_;
goto v___jp_6100_;
}
}
}
else
{
lean_dec(v___x_6275_);
lean_inc(v___y_6248_);
lean_inc(v___x_6261_);
v___y_6101_ = v___y_6241_;
v___y_6102_ = v___x_6261_;
v___y_6103_ = v___x_6258_;
v___y_6104_ = v___y_6242_;
v___y_6105_ = v___x_6261_;
v___y_6106_ = v___y_6244_;
v___y_6107_ = v___y_6245_;
v___y_6108_ = v___y_6248_;
v___y_6109_ = v___y_6249_;
v___y_6110_ = v___y_6250_;
v___y_6111_ = v___x_6274_;
v_patType_x3f_6112_ = v___y_6248_;
v___y_6113_ = v___y_6251_;
v___y_6114_ = v___y_6252_;
v___y_6115_ = v___y_6253_;
v___y_6116_ = v___y_6254_;
v___y_6117_ = v___y_6255_;
v___y_6118_ = v___y_6256_;
v___y_6119_ = v___y_6257_;
goto v___jp_6100_;
}
}
}
}
else
{
lean_object* v___x_6285_; lean_object* v___x_6286_; uint8_t v___x_6287_; 
lean_dec(v___y_6241_);
v___x_6285_ = l_Lean_Syntax_getArg(v___y_6250_, v___x_5989_);
v___x_6286_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v___x_6285_);
v___x_6287_ = l_Lean_Syntax_isOfKind(v___x_6285_, v___x_6286_);
if (v___x_6287_ == 0)
{
lean_object* v___x_6288_; 
lean_dec(v___x_6285_);
lean_dec(v___y_6250_);
lean_dec(v___y_6243_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6288_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6288_;
}
else
{
lean_object* v___x_6289_; uint8_t v___x_6290_; 
v___x_6289_ = l_Lean_Syntax_getArg(v___y_6250_, v___x_6099_);
v___x_6290_ = l_Lean_Syntax_isNone(v___x_6289_);
if (v___x_6290_ == 0)
{
uint8_t v___x_6291_; 
lean_inc(v___x_6289_);
v___x_6291_ = l_Lean_Syntax_matchesNull(v___x_6289_, v___x_6099_);
if (v___x_6291_ == 0)
{
lean_object* v___x_6292_; 
lean_dec(v___x_6289_);
lean_dec(v___x_6285_);
lean_dec(v___y_6250_);
lean_dec(v___y_6243_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6292_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6292_;
}
else
{
lean_object* v___x_6293_; lean_object* v___x_6294_; uint8_t v___x_6295_; 
v___x_6293_ = l_Lean_Syntax_getArg(v___x_6289_, v___x_5989_);
lean_dec(v___x_6289_);
v___x_6294_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_6293_);
v___x_6295_ = l_Lean_Syntax_isOfKind(v___x_6293_, v___x_6294_);
if (v___x_6295_ == 0)
{
lean_object* v___x_6296_; 
lean_dec(v___x_6293_);
lean_dec(v___x_6285_);
lean_dec(v___y_6250_);
lean_dec(v___y_6243_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___x_6296_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6296_;
}
else
{
lean_object* v___x_6297_; lean_object* v___x_6298_; 
v___x_6297_ = l_Lean_Syntax_getArg(v___x_6293_, v___x_6099_);
lean_dec(v___x_6293_);
v___x_6298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6298_, 0, v___x_6297_);
v___y_6200_ = v___y_6243_;
v___y_6201_ = v___y_6244_;
v___y_6202_ = v___x_6285_;
v___y_6203_ = v___y_6245_;
v___y_6204_ = v___y_6250_;
v_xType_x3f_6205_ = v___x_6298_;
v___y_6206_ = v___y_6251_;
v___y_6207_ = v___y_6252_;
v___y_6208_ = v___y_6253_;
v___y_6209_ = v___y_6254_;
v___y_6210_ = v___y_6255_;
v___y_6211_ = v___y_6256_;
v___y_6212_ = v___y_6257_;
goto v___jp_6199_;
}
}
}
else
{
lean_dec(v___x_6289_);
lean_inc(v___y_6248_);
v___y_6200_ = v___y_6243_;
v___y_6201_ = v___y_6244_;
v___y_6202_ = v___x_6285_;
v___y_6203_ = v___y_6245_;
v___y_6204_ = v___y_6250_;
v_xType_x3f_6205_ = v___y_6248_;
v___y_6206_ = v___y_6251_;
v___y_6207_ = v___y_6252_;
v___y_6208_ = v___y_6253_;
v___y_6209_ = v___y_6254_;
v___y_6210_ = v___y_6255_;
v___y_6211_ = v___y_6256_;
v___y_6212_ = v___y_6257_;
goto v___jp_6199_;
}
}
}
}
v___jp_6299_:
{
lean_object* v___x_6318_; lean_object* v___x_6319_; lean_object* v_a_6320_; lean_object* v___x_6322_; uint8_t v_isShared_6323_; uint8_t v_isSharedCheck_6327_; 
lean_dec(v___y_6315_);
lean_dec(v___y_6302_);
lean_dec(v___y_6300_);
v___x_6318_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__1, &l_Lean_Elab_Do_elabDoLetArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1);
v___x_6319_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v___y_6317_, v___x_6318_, v___y_6309_, v___y_6313_, v___y_6308_, v___y_6310_, v___y_6311_, v___y_6305_, v___y_6307_);
lean_dec(v___y_6317_);
v_a_6320_ = lean_ctor_get(v___x_6319_, 0);
v_isSharedCheck_6327_ = !lean_is_exclusive(v___x_6319_);
if (v_isSharedCheck_6327_ == 0)
{
v___x_6322_ = v___x_6319_;
v_isShared_6323_ = v_isSharedCheck_6327_;
goto v_resetjp_6321_;
}
else
{
lean_inc(v_a_6320_);
lean_dec(v___x_6319_);
v___x_6322_ = lean_box(0);
v_isShared_6323_ = v_isSharedCheck_6327_;
goto v_resetjp_6321_;
}
v_resetjp_6321_:
{
lean_object* v___x_6325_; 
if (v_isShared_6323_ == 0)
{
v___x_6325_ = v___x_6322_;
goto v_reusejp_6324_;
}
else
{
lean_object* v_reuseFailAlloc_6326_; 
v_reuseFailAlloc_6326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6326_, 0, v_a_6320_);
v___x_6325_ = v_reuseFailAlloc_6326_;
goto v_reusejp_6324_;
}
v_reusejp_6324_:
{
return v___x_6325_;
}
}
}
v___jp_6328_:
{
if (v___y_6348_ == 0)
{
lean_object* v_eq_x3f_6349_; 
v_eq_x3f_6349_ = lean_ctor_get(v___y_6336_, 0);
lean_inc(v_eq_x3f_6349_);
lean_dec_ref(v___y_6336_);
if (lean_obj_tag(v_eq_x3f_6349_) == 0)
{
lean_dec(v___y_6347_);
v___y_6241_ = v___y_6329_;
v___y_6242_ = v___y_6330_;
v___y_6243_ = v___y_6331_;
v___y_6244_ = v___y_6332_;
v___y_6245_ = v___y_6333_;
v___y_6246_ = v___y_6335_;
v___y_6247_ = v___y_6342_;
v___y_6248_ = v___y_6344_;
v___y_6249_ = v___y_6346_;
v___y_6250_ = v___y_6345_;
v___y_6251_ = v___y_6339_;
v___y_6252_ = v___y_6343_;
v___y_6253_ = v___y_6338_;
v___y_6254_ = v___y_6340_;
v___y_6255_ = v___y_6341_;
v___y_6256_ = v___y_6334_;
v___y_6257_ = v___y_6337_;
goto v___jp_6240_;
}
else
{
lean_dec_ref_known(v_eq_x3f_6349_, 1);
if (v___x_5987_ == 0)
{
lean_dec(v___y_6347_);
v___y_6241_ = v___y_6329_;
v___y_6242_ = v___y_6330_;
v___y_6243_ = v___y_6331_;
v___y_6244_ = v___y_6332_;
v___y_6245_ = v___y_6333_;
v___y_6246_ = v___y_6335_;
v___y_6247_ = v___y_6342_;
v___y_6248_ = v___y_6344_;
v___y_6249_ = v___y_6346_;
v___y_6250_ = v___y_6345_;
v___y_6251_ = v___y_6339_;
v___y_6252_ = v___y_6343_;
v___y_6253_ = v___y_6338_;
v___y_6254_ = v___y_6340_;
v___y_6255_ = v___y_6341_;
v___y_6256_ = v___y_6334_;
v___y_6257_ = v___y_6337_;
goto v___jp_6240_;
}
else
{
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___y_6300_ = v___y_6329_;
v___y_6301_ = v___y_6330_;
v___y_6302_ = v___y_6331_;
v___y_6303_ = v___y_6332_;
v___y_6304_ = v___y_6333_;
v___y_6305_ = v___y_6334_;
v___y_6306_ = v___y_6335_;
v___y_6307_ = v___y_6337_;
v___y_6308_ = v___y_6338_;
v___y_6309_ = v___y_6339_;
v___y_6310_ = v___y_6340_;
v___y_6311_ = v___y_6341_;
v___y_6312_ = v___y_6342_;
v___y_6313_ = v___y_6343_;
v___y_6314_ = v___y_6344_;
v___y_6315_ = v___y_6345_;
v___y_6316_ = v___y_6346_;
v___y_6317_ = v___y_6347_;
goto v___jp_6299_;
}
}
}
else
{
lean_dec_ref(v___y_6336_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v___y_6300_ = v___y_6329_;
v___y_6301_ = v___y_6330_;
v___y_6302_ = v___y_6331_;
v___y_6303_ = v___y_6332_;
v___y_6304_ = v___y_6333_;
v___y_6305_ = v___y_6334_;
v___y_6306_ = v___y_6335_;
v___y_6307_ = v___y_6337_;
v___y_6308_ = v___y_6338_;
v___y_6309_ = v___y_6339_;
v___y_6310_ = v___y_6340_;
v___y_6311_ = v___y_6341_;
v___y_6312_ = v___y_6342_;
v___y_6313_ = v___y_6343_;
v___y_6314_ = v___y_6344_;
v___y_6315_ = v___y_6345_;
v___y_6316_ = v___y_6346_;
v___y_6317_ = v___y_6347_;
goto v___jp_6299_;
}
}
v___jp_6350_:
{
if (v___y_6370_ == 0)
{
uint8_t v_zeta_6371_; 
v_zeta_6371_ = lean_ctor_get_uint8(v___y_6358_, sizeof(void*)*1 + 2);
v___y_6329_ = v___y_6351_;
v___y_6330_ = v___y_6352_;
v___y_6331_ = v___y_6353_;
v___y_6332_ = v___y_6354_;
v___y_6333_ = v___y_6355_;
v___y_6334_ = v___y_6356_;
v___y_6335_ = v___y_6357_;
v___y_6336_ = v___y_6358_;
v___y_6337_ = v___y_6359_;
v___y_6338_ = v___y_6360_;
v___y_6339_ = v___y_6361_;
v___y_6340_ = v___y_6362_;
v___y_6341_ = v___y_6363_;
v___y_6342_ = v___y_6365_;
v___y_6343_ = v___y_6364_;
v___y_6344_ = v___y_6366_;
v___y_6345_ = v___y_6368_;
v___y_6346_ = v___y_6367_;
v___y_6347_ = v___y_6369_;
v___y_6348_ = v_zeta_6371_;
goto v___jp_6328_;
}
else
{
v___y_6329_ = v___y_6351_;
v___y_6330_ = v___y_6352_;
v___y_6331_ = v___y_6353_;
v___y_6332_ = v___y_6354_;
v___y_6333_ = v___y_6355_;
v___y_6334_ = v___y_6356_;
v___y_6335_ = v___y_6357_;
v___y_6336_ = v___y_6358_;
v___y_6337_ = v___y_6359_;
v___y_6338_ = v___y_6360_;
v___y_6339_ = v___y_6361_;
v___y_6340_ = v___y_6362_;
v___y_6341_ = v___y_6363_;
v___y_6342_ = v___y_6365_;
v___y_6343_ = v___y_6364_;
v___y_6344_ = v___y_6366_;
v___y_6345_ = v___y_6368_;
v___y_6346_ = v___y_6367_;
v___y_6347_ = v___y_6369_;
v___y_6348_ = v___x_5987_;
goto v___jp_6328_;
}
}
v___jp_6372_:
{
lean_object* v___x_6381_; lean_object* v_cfg_6382_; lean_object* v___x_6383_; uint8_t v___x_6384_; 
v___x_6381_ = lean_unsigned_to_nat(2u);
v_cfg_6382_ = l_Lean_Syntax_getArg(v_stx_5973_, v___x_6381_);
v___x_6383_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_6382_);
v___x_6384_ = l_Lean_Syntax_isOfKind(v_cfg_6382_, v___x_6383_);
if (v___x_6384_ == 0)
{
lean_object* v___x_6385_; 
lean_dec(v_cfg_6382_);
lean_dec(v_mutTk_x3f_6373_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
lean_dec(v_stx_5973_);
v___x_6385_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6385_;
}
else
{
lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; uint8_t v___x_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; lean_object* v___x_6393_; 
v___x_6386_ = lean_unsigned_to_nat(3u);
v___x_6387_ = l_Lean_Syntax_getArg(v_stx_5973_, v___x_6386_);
lean_dec(v_stx_5973_);
v___x_6388_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
v___x_6389_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
v___x_6390_ = 0;
v___x_6391_ = lean_box(0);
v___x_6392_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
lean_inc(v_cfg_6382_);
v___x_6393_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_cfg_6382_, v_mutTk_x3f_6373_, v___x_6392_, v___y_6374_, v___y_6375_, v___y_6376_, v___y_6377_, v___y_6378_, v___y_6379_, v___y_6380_);
if (lean_obj_tag(v___x_6393_) == 0)
{
lean_object* v_a_6394_; lean_object* v___x_6395_; 
v_a_6394_ = lean_ctor_get(v___x_6393_, 0);
lean_inc(v_a_6394_);
lean_dec_ref_known(v___x_6393_, 1);
v___x_6395_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_6394_, v___y_6377_, v___y_6378_, v___y_6379_, v___y_6380_);
if (lean_obj_tag(v___x_6395_) == 0)
{
uint8_t v_nondep_6396_; 
lean_dec_ref_known(v___x_6395_, 1);
v_nondep_6396_ = lean_ctor_get_uint8(v_a_6394_, sizeof(void*)*1);
if (v_nondep_6396_ == 0)
{
uint8_t v_usedOnly_6397_; 
v_usedOnly_6397_ = lean_ctor_get_uint8(v_a_6394_, sizeof(void*)*1 + 1);
lean_inc(v_mutTk_x3f_6373_);
v___y_6351_ = v_mutTk_x3f_6373_;
v___y_6352_ = v___x_6383_;
v___y_6353_ = v_mutTk_x3f_6373_;
v___y_6354_ = v___x_6386_;
v___y_6355_ = v___x_6390_;
v___y_6356_ = v___y_6379_;
v___y_6357_ = v___x_6388_;
v___y_6358_ = v_a_6394_;
v___y_6359_ = v___y_6380_;
v___y_6360_ = v___y_6376_;
v___y_6361_ = v___y_6374_;
v___y_6362_ = v___y_6377_;
v___y_6363_ = v___y_6378_;
v___y_6364_ = v___y_6375_;
v___y_6365_ = v___x_6389_;
v___y_6366_ = v___x_6391_;
v___y_6367_ = v___x_6381_;
v___y_6368_ = v___x_6387_;
v___y_6369_ = v_cfg_6382_;
v___y_6370_ = v_usedOnly_6397_;
goto v___jp_6350_;
}
else
{
lean_inc(v_mutTk_x3f_6373_);
v___y_6351_ = v_mutTk_x3f_6373_;
v___y_6352_ = v___x_6383_;
v___y_6353_ = v_mutTk_x3f_6373_;
v___y_6354_ = v___x_6386_;
v___y_6355_ = v___x_6390_;
v___y_6356_ = v___y_6379_;
v___y_6357_ = v___x_6388_;
v___y_6358_ = v_a_6394_;
v___y_6359_ = v___y_6380_;
v___y_6360_ = v___y_6376_;
v___y_6361_ = v___y_6374_;
v___y_6362_ = v___y_6377_;
v___y_6363_ = v___y_6378_;
v___y_6364_ = v___y_6375_;
v___y_6365_ = v___x_6389_;
v___y_6366_ = v___x_6391_;
v___y_6367_ = v___x_6381_;
v___y_6368_ = v___x_6387_;
v___y_6369_ = v_cfg_6382_;
v___y_6370_ = v___x_5987_;
goto v___jp_6350_;
}
}
else
{
lean_object* v_a_6398_; lean_object* v___x_6400_; uint8_t v_isShared_6401_; uint8_t v_isSharedCheck_6405_; 
lean_dec(v_a_6394_);
lean_dec(v___x_6387_);
lean_dec(v_cfg_6382_);
lean_dec(v_mutTk_x3f_6373_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v_a_6398_ = lean_ctor_get(v___x_6395_, 0);
v_isSharedCheck_6405_ = !lean_is_exclusive(v___x_6395_);
if (v_isSharedCheck_6405_ == 0)
{
v___x_6400_ = v___x_6395_;
v_isShared_6401_ = v_isSharedCheck_6405_;
goto v_resetjp_6399_;
}
else
{
lean_inc(v_a_6398_);
lean_dec(v___x_6395_);
v___x_6400_ = lean_box(0);
v_isShared_6401_ = v_isSharedCheck_6405_;
goto v_resetjp_6399_;
}
v_resetjp_6399_:
{
lean_object* v___x_6403_; 
if (v_isShared_6401_ == 0)
{
v___x_6403_ = v___x_6400_;
goto v_reusejp_6402_;
}
else
{
lean_object* v_reuseFailAlloc_6404_; 
v_reuseFailAlloc_6404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6404_, 0, v_a_6398_);
v___x_6403_ = v_reuseFailAlloc_6404_;
goto v_reusejp_6402_;
}
v_reusejp_6402_:
{
return v___x_6403_;
}
}
}
}
else
{
lean_object* v_a_6406_; lean_object* v___x_6408_; uint8_t v_isShared_6409_; uint8_t v_isSharedCheck_6413_; 
lean_dec(v___x_6387_);
lean_dec(v_cfg_6382_);
lean_dec(v_mutTk_x3f_6373_);
lean_dec(v_tk_6098_);
lean_dec_ref(v_dec_5974_);
v_a_6406_ = lean_ctor_get(v___x_6393_, 0);
v_isSharedCheck_6413_ = !lean_is_exclusive(v___x_6393_);
if (v_isSharedCheck_6413_ == 0)
{
v___x_6408_ = v___x_6393_;
v_isShared_6409_ = v_isSharedCheck_6413_;
goto v_resetjp_6407_;
}
else
{
lean_inc(v_a_6406_);
lean_dec(v___x_6393_);
v___x_6408_ = lean_box(0);
v_isShared_6409_ = v_isSharedCheck_6413_;
goto v_resetjp_6407_;
}
v_resetjp_6407_:
{
lean_object* v___x_6411_; 
if (v_isShared_6409_ == 0)
{
v___x_6411_ = v___x_6408_;
goto v_reusejp_6410_;
}
else
{
lean_object* v_reuseFailAlloc_6412_; 
v_reuseFailAlloc_6412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6412_, 0, v_a_6406_);
v___x_6411_ = v_reuseFailAlloc_6412_;
goto v_reusejp_6410_;
}
v_reusejp_6410_:
{
return v___x_6411_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object* v_stx_6421_, lean_object* v_dec_6422_, lean_object* v_a_6423_, lean_object* v_a_6424_, lean_object* v_a_6425_, lean_object* v_a_6426_, lean_object* v_a_6427_, lean_object* v_a_6428_, lean_object* v_a_6429_, lean_object* v_a_6430_){
_start:
{
lean_object* v_res_6431_; 
v_res_6431_ = l_Lean_Elab_Do_elabDoLetArrow(v_stx_6421_, v_dec_6422_, v_a_6423_, v_a_6424_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_);
lean_dec(v_a_6429_);
lean_dec_ref(v_a_6428_);
lean_dec(v_a_6427_);
lean_dec_ref(v_a_6426_);
lean_dec(v_a_6425_);
lean_dec_ref(v_a_6424_);
lean_dec_ref(v_a_6423_);
return v_res_6431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1(){
_start:
{
lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___x_6441_; lean_object* v___x_6442_; lean_object* v___x_6443_; 
v___x_6439_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6440_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_6441_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1));
v___x_6442_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___boxed), 10, 0);
v___x_6443_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6439_, v___x_6440_, v___x_6441_, v___x_6442_);
return v___x_6443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object* v_a_6444_){
_start:
{
lean_object* v_res_6445_; 
v_res_6445_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
return v_res_6445_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3(void){
_start:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; 
v___x_6453_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__2));
v___x_6454_ = l_Lean_stringToMessageData(v___x_6453_);
return v___x_6454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object* v_stx_6455_, lean_object* v_dec_6456_, lean_object* v_a_6457_, lean_object* v_a_6458_, lean_object* v_a_6459_, lean_object* v_a_6460_, lean_object* v_a_6461_, lean_object* v_a_6462_, lean_object* v_a_6463_){
_start:
{
lean_object* v___x_6465_; uint8_t v___x_6466_; 
v___x_6465_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
lean_inc(v_stx_6455_);
v___x_6466_ = l_Lean_Syntax_isOfKind(v_stx_6455_, v___x_6465_);
if (v___x_6466_ == 0)
{
lean_object* v___x_6467_; 
lean_dec_ref(v_dec_6456_);
lean_dec(v_stx_6455_);
v___x_6467_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6467_;
}
else
{
lean_object* v___x_6468_; lean_object* v___x_6469_; lean_object* v___x_6470_; uint8_t v___x_6471_; 
v___x_6468_ = lean_unsigned_to_nat(0u);
v___x_6469_ = l_Lean_Syntax_getArg(v_stx_6455_, v___x_6468_);
lean_dec(v_stx_6455_);
v___x_6470_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_6469_);
v___x_6471_ = l_Lean_Syntax_isOfKind(v___x_6469_, v___x_6470_);
if (v___x_6471_ == 0)
{
lean_object* v___x_6472_; uint8_t v___x_6473_; 
v___x_6472_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
lean_inc(v___x_6469_);
v___x_6473_ = l_Lean_Syntax_isOfKind(v___x_6469_, v___x_6472_);
if (v___x_6473_ == 0)
{
lean_object* v___x_6474_; 
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6474_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6474_;
}
else
{
lean_object* v___x_6475_; lean_object* v___y_6477_; lean_object* v___y_6478_; lean_object* v___y_6479_; lean_object* v___y_6480_; lean_object* v___y_6481_; lean_object* v___y_6482_; lean_object* v___y_6483_; lean_object* v___y_6484_; lean_object* v___y_6485_; lean_object* v___y_6514_; lean_object* v___y_6515_; lean_object* v___y_6516_; lean_object* v___y_6517_; lean_object* v___y_6518_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6521_; lean_object* v___y_6522_; uint8_t v___y_6523_; lean_object* v___y_6535_; lean_object* v___y_6536_; lean_object* v___y_6537_; lean_object* v___y_6538_; lean_object* v___y_6539_; lean_object* v___y_6540_; lean_object* v___y_6541_; lean_object* v___y_6542_; lean_object* v___y_6543_; lean_object* v___y_6544_; uint8_t v___y_6545_; lean_object* v___y_6548_; lean_object* v___y_6549_; lean_object* v___y_6550_; lean_object* v___y_6551_; lean_object* v___y_6552_; lean_object* v___y_6553_; lean_object* v___y_6554_; lean_object* v___y_6555_; lean_object* v___y_6556_; lean_object* v___y_6557_; lean_object* v___y_6558_; lean_object* v___x_6560_; lean_object* v_t_x3f_6562_; lean_object* v___y_6563_; lean_object* v___y_6564_; lean_object* v___y_6565_; lean_object* v___y_6566_; lean_object* v___y_6567_; lean_object* v___y_6568_; lean_object* v___y_6569_; lean_object* v___x_6591_; uint8_t v___x_6592_; 
v___x_6475_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6468_);
v___x_6560_ = lean_unsigned_to_nat(1u);
v___x_6591_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6560_);
v___x_6592_ = l_Lean_Syntax_isNone(v___x_6591_);
if (v___x_6592_ == 0)
{
uint8_t v___x_6593_; 
lean_inc(v___x_6591_);
v___x_6593_ = l_Lean_Syntax_matchesNull(v___x_6591_, v___x_6560_);
if (v___x_6593_ == 0)
{
lean_object* v___x_6594_; 
lean_dec(v___x_6591_);
lean_dec(v___x_6475_);
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6594_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6594_;
}
else
{
lean_object* v___x_6595_; lean_object* v___x_6596_; uint8_t v___x_6597_; 
v___x_6595_ = l_Lean_Syntax_getArg(v___x_6591_, v___x_6468_);
lean_dec(v___x_6591_);
v___x_6596_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_6595_);
v___x_6597_ = l_Lean_Syntax_isOfKind(v___x_6595_, v___x_6596_);
if (v___x_6597_ == 0)
{
lean_object* v___x_6598_; 
lean_dec(v___x_6595_);
lean_dec(v___x_6475_);
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6598_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6598_;
}
else
{
lean_object* v_t_x3f_6599_; lean_object* v___x_6600_; 
v_t_x3f_6599_ = l_Lean_Syntax_getArg(v___x_6595_, v___x_6560_);
lean_dec(v___x_6595_);
v___x_6600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6600_, 0, v_t_x3f_6599_);
v_t_x3f_6562_ = v___x_6600_;
v___y_6563_ = v_a_6457_;
v___y_6564_ = v_a_6458_;
v___y_6565_ = v_a_6459_;
v___y_6566_ = v_a_6460_;
v___y_6567_ = v_a_6461_;
v___y_6568_ = v_a_6462_;
v___y_6569_ = v_a_6463_;
goto v___jp_6561_;
}
}
}
else
{
lean_object* v___x_6601_; 
lean_dec(v___x_6591_);
v___x_6601_ = lean_box(0);
v_t_x3f_6562_ = v___x_6601_;
v___y_6563_ = v_a_6457_;
v___y_6564_ = v_a_6458_;
v___y_6565_ = v_a_6459_;
v___y_6566_ = v_a_6460_;
v___y_6567_ = v_a_6461_;
v___y_6568_ = v_a_6462_;
v___y_6569_ = v_a_6463_;
goto v___jp_6561_;
}
v___jp_6476_:
{
lean_object* v___x_6486_; lean_object* v___x_6487_; 
v___x_6486_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6487_ = l_Lean_Core_mkFreshUserName(v___x_6486_, v___y_6484_, v___y_6485_);
if (lean_obj_tag(v___x_6487_) == 0)
{
lean_object* v_a_6488_; lean_object* v_ref_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v___x_6499_; uint8_t v_kind_6500_; lean_object* v___x_6501_; lean_object* v___x_6502_; lean_object* v___x_6503_; lean_object* v___x_6504_; 
v_a_6488_ = lean_ctor_get(v___x_6487_, 0);
lean_inc(v_a_6488_);
lean_dec_ref_known(v___x_6487_, 1);
v_ref_6489_ = lean_ctor_get(v___y_6484_, 2);
v___x_6490_ = l_Lean_mkIdentFrom(v___x_6475_, v_a_6488_, v___x_6471_);
v___x_6491_ = l_Lean_SourceInfo_fromRef(v_ref_6489_, v___x_6471_);
v___x_6492_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6493_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
v___x_6494_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6495_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_6491_, 3);
v___x_6496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6496_, 0, v___x_6491_);
lean_ctor_set(v___x_6496_, 1, v___x_6494_);
lean_ctor_set(v___x_6496_, 2, v___x_6495_);
v___x_6497_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6498_, 0, v___x_6491_);
lean_ctor_set(v___x_6498_, 1, v___x_6497_);
lean_inc(v___x_6490_);
lean_inc_ref(v___x_6496_);
v___x_6499_ = l_Lean_Syntax_node5(v___x_6491_, v___x_6493_, v___x_6475_, v___x_6496_, v___x_6496_, v___x_6498_, v___x_6490_);
v_kind_6500_ = lean_ctor_get_uint8(v_dec_6456_, sizeof(void*)*3);
v___x_6501_ = l_Lean_Syntax_node1(v___x_6491_, v___x_6492_, v___x_6499_);
v___x_6502_ = lean_box(v___x_6466_);
v___x_6503_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6503_, 0, v___x_6501_);
lean_closure_set(v___x_6503_, 1, v_dec_6456_);
lean_closure_set(v___x_6503_, 2, v___x_6502_);
v___x_6504_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6490_, v___y_6478_, v___y_6477_, v___x_6503_, v_kind_6500_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, v___y_6484_, v___y_6485_);
return v___x_6504_;
}
else
{
lean_object* v_a_6505_; lean_object* v___x_6507_; uint8_t v_isShared_6508_; uint8_t v_isSharedCheck_6512_; 
lean_dec(v___y_6478_);
lean_dec(v___y_6477_);
lean_dec(v___x_6475_);
lean_dec_ref(v_dec_6456_);
v_a_6505_ = lean_ctor_get(v___x_6487_, 0);
v_isSharedCheck_6512_ = !lean_is_exclusive(v___x_6487_);
if (v_isSharedCheck_6512_ == 0)
{
v___x_6507_ = v___x_6487_;
v_isShared_6508_ = v_isSharedCheck_6512_;
goto v_resetjp_6506_;
}
else
{
lean_inc(v_a_6505_);
lean_dec(v___x_6487_);
v___x_6507_ = lean_box(0);
v_isShared_6508_ = v_isSharedCheck_6512_;
goto v_resetjp_6506_;
}
v_resetjp_6506_:
{
lean_object* v___x_6510_; 
if (v_isShared_6508_ == 0)
{
v___x_6510_ = v___x_6507_;
goto v_reusejp_6509_;
}
else
{
lean_object* v_reuseFailAlloc_6511_; 
v_reuseFailAlloc_6511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6511_, 0, v_a_6505_);
v___x_6510_ = v_reuseFailAlloc_6511_;
goto v_reusejp_6509_;
}
v_reusejp_6509_:
{
return v___x_6510_;
}
}
}
}
v___jp_6513_:
{
if (v___y_6523_ == 0)
{
lean_object* v___x_6524_; lean_object* v___x_6525_; lean_object* v_a_6526_; lean_object* v___x_6528_; uint8_t v_isShared_6529_; uint8_t v_isSharedCheck_6533_; 
lean_dec(v___y_6521_);
lean_dec(v___y_6515_);
lean_dec(v___x_6475_);
lean_dec_ref(v_dec_6456_);
v___x_6524_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__3, &l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3);
v___x_6525_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_6524_, v___y_6518_, v___y_6517_, v___y_6514_, v___y_6520_);
v_a_6526_ = lean_ctor_get(v___x_6525_, 0);
v_isSharedCheck_6533_ = !lean_is_exclusive(v___x_6525_);
if (v_isSharedCheck_6533_ == 0)
{
v___x_6528_ = v___x_6525_;
v_isShared_6529_ = v_isSharedCheck_6533_;
goto v_resetjp_6527_;
}
else
{
lean_inc(v_a_6526_);
lean_dec(v___x_6525_);
v___x_6528_ = lean_box(0);
v_isShared_6529_ = v_isSharedCheck_6533_;
goto v_resetjp_6527_;
}
v_resetjp_6527_:
{
lean_object* v___x_6531_; 
if (v_isShared_6529_ == 0)
{
v___x_6531_ = v___x_6528_;
goto v_reusejp_6530_;
}
else
{
lean_object* v_reuseFailAlloc_6532_; 
v_reuseFailAlloc_6532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6532_, 0, v_a_6526_);
v___x_6531_ = v_reuseFailAlloc_6532_;
goto v_reusejp_6530_;
}
v_reusejp_6530_:
{
return v___x_6531_;
}
}
}
else
{
v___y_6477_ = v___y_6515_;
v___y_6478_ = v___y_6521_;
v___y_6479_ = v___y_6516_;
v___y_6480_ = v___y_6522_;
v___y_6481_ = v___y_6519_;
v___y_6482_ = v___y_6518_;
v___y_6483_ = v___y_6517_;
v___y_6484_ = v___y_6514_;
v___y_6485_ = v___y_6520_;
goto v___jp_6476_;
}
}
v___jp_6534_:
{
if (v___y_6545_ == 0)
{
lean_dec(v___y_6543_);
v___y_6514_ = v___y_6535_;
v___y_6515_ = v___y_6537_;
v___y_6516_ = v___y_6536_;
v___y_6517_ = v___y_6539_;
v___y_6518_ = v___y_6538_;
v___y_6519_ = v___y_6541_;
v___y_6520_ = v___y_6540_;
v___y_6521_ = v___y_6542_;
v___y_6522_ = v___y_6544_;
v___y_6523_ = v___x_6471_;
goto v___jp_6513_;
}
else
{
if (lean_obj_tag(v___y_6543_) == 0)
{
v___y_6514_ = v___y_6535_;
v___y_6515_ = v___y_6537_;
v___y_6516_ = v___y_6536_;
v___y_6517_ = v___y_6539_;
v___y_6518_ = v___y_6538_;
v___y_6519_ = v___y_6541_;
v___y_6520_ = v___y_6540_;
v___y_6521_ = v___y_6542_;
v___y_6522_ = v___y_6544_;
v___y_6523_ = v___x_6473_;
goto v___jp_6513_;
}
else
{
lean_object* v_val_6546_; 
v_val_6546_ = lean_ctor_get(v___y_6543_, 0);
lean_inc(v_val_6546_);
lean_dec_ref_known(v___y_6543_, 1);
if (lean_obj_tag(v_val_6546_) == 0)
{
v___y_6514_ = v___y_6535_;
v___y_6515_ = v___y_6537_;
v___y_6516_ = v___y_6536_;
v___y_6517_ = v___y_6539_;
v___y_6518_ = v___y_6538_;
v___y_6519_ = v___y_6541_;
v___y_6520_ = v___y_6540_;
v___y_6521_ = v___y_6542_;
v___y_6522_ = v___y_6544_;
v___y_6523_ = v___x_6473_;
goto v___jp_6513_;
}
else
{
lean_dec_ref_known(v_val_6546_, 1);
v___y_6514_ = v___y_6535_;
v___y_6515_ = v___y_6537_;
v___y_6516_ = v___y_6536_;
v___y_6517_ = v___y_6539_;
v___y_6518_ = v___y_6538_;
v___y_6519_ = v___y_6541_;
v___y_6520_ = v___y_6540_;
v___y_6521_ = v___y_6542_;
v___y_6522_ = v___y_6544_;
v___y_6523_ = v___x_6471_;
goto v___jp_6513_;
}
}
}
}
v___jp_6547_:
{
lean_object* v___x_6559_; 
lean_dec(v___y_6555_);
v___x_6559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6559_, 0, v___y_6558_);
v___y_6535_ = v___y_6548_;
v___y_6536_ = v___y_6552_;
v___y_6537_ = v___y_6549_;
v___y_6538_ = v___y_6556_;
v___y_6539_ = v___y_6550_;
v___y_6540_ = v___y_6551_;
v___y_6541_ = v___y_6557_;
v___y_6542_ = v___y_6554_;
v___y_6543_ = v___x_6559_;
v___y_6544_ = v___y_6553_;
v___y_6545_ = v___x_6471_;
goto v___jp_6534_;
}
v___jp_6561_:
{
lean_object* v___x_6570_; lean_object* v_rhs_6571_; lean_object* v___x_6572_; lean_object* v___x_6573_; uint8_t v___x_6574_; 
v___x_6570_ = lean_unsigned_to_nat(3u);
v_rhs_6571_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6570_);
v___x_6572_ = lean_unsigned_to_nat(4u);
v___x_6573_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6572_);
lean_dec(v___x_6469_);
v___x_6574_ = l_Lean_Syntax_isNone(v___x_6573_);
if (v___x_6574_ == 0)
{
uint8_t v___x_6575_; 
lean_inc(v___x_6573_);
v___x_6575_ = l_Lean_Syntax_matchesNull(v___x_6573_, v___x_6570_);
if (v___x_6575_ == 0)
{
lean_object* v___x_6576_; 
lean_dec(v___x_6573_);
lean_dec(v_rhs_6571_);
lean_dec(v_t_x3f_6562_);
lean_dec(v___x_6475_);
lean_dec_ref(v_dec_6456_);
v___x_6576_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6576_;
}
else
{
lean_object* v___x_6577_; lean_object* v_otherwise_x3f_6578_; lean_object* v___x_6579_; lean_object* v___x_6580_; 
v___x_6577_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_6578_ = l_Lean_Syntax_getArg(v___x_6573_, v___x_6560_);
v___x_6579_ = l_Lean_Syntax_getArg(v___x_6573_, v___x_6577_);
lean_dec(v___x_6573_);
v___x_6580_ = l_Lean_Syntax_getOptional_x3f(v___x_6579_);
lean_dec(v___x_6579_);
if (lean_obj_tag(v___x_6580_) == 0)
{
lean_object* v___x_6581_; 
v___x_6581_ = lean_box(0);
v___y_6548_ = v___y_6568_;
v___y_6549_ = v_rhs_6571_;
v___y_6550_ = v___y_6567_;
v___y_6551_ = v___y_6569_;
v___y_6552_ = v___y_6563_;
v___y_6553_ = v___y_6564_;
v___y_6554_ = v_t_x3f_6562_;
v___y_6555_ = v_otherwise_x3f_6578_;
v___y_6556_ = v___y_6566_;
v___y_6557_ = v___y_6565_;
v___y_6558_ = v___x_6581_;
goto v___jp_6547_;
}
else
{
lean_object* v_val_6582_; lean_object* v___x_6584_; uint8_t v_isShared_6585_; uint8_t v_isSharedCheck_6589_; 
v_val_6582_ = lean_ctor_get(v___x_6580_, 0);
v_isSharedCheck_6589_ = !lean_is_exclusive(v___x_6580_);
if (v_isSharedCheck_6589_ == 0)
{
v___x_6584_ = v___x_6580_;
v_isShared_6585_ = v_isSharedCheck_6589_;
goto v_resetjp_6583_;
}
else
{
lean_inc(v_val_6582_);
lean_dec(v___x_6580_);
v___x_6584_ = lean_box(0);
v_isShared_6585_ = v_isSharedCheck_6589_;
goto v_resetjp_6583_;
}
v_resetjp_6583_:
{
lean_object* v___x_6587_; 
if (v_isShared_6585_ == 0)
{
v___x_6587_ = v___x_6584_;
goto v_reusejp_6586_;
}
else
{
lean_object* v_reuseFailAlloc_6588_; 
v_reuseFailAlloc_6588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6588_, 0, v_val_6582_);
v___x_6587_ = v_reuseFailAlloc_6588_;
goto v_reusejp_6586_;
}
v_reusejp_6586_:
{
v___y_6548_ = v___y_6568_;
v___y_6549_ = v_rhs_6571_;
v___y_6550_ = v___y_6567_;
v___y_6551_ = v___y_6569_;
v___y_6552_ = v___y_6563_;
v___y_6553_ = v___y_6564_;
v___y_6554_ = v_t_x3f_6562_;
v___y_6555_ = v_otherwise_x3f_6578_;
v___y_6556_ = v___y_6566_;
v___y_6557_ = v___y_6565_;
v___y_6558_ = v___x_6587_;
goto v___jp_6547_;
}
}
}
}
}
else
{
lean_object* v___x_6590_; 
lean_dec(v___x_6573_);
v___x_6590_ = lean_box(0);
v___y_6535_ = v___y_6568_;
v___y_6536_ = v___y_6563_;
v___y_6537_ = v_rhs_6571_;
v___y_6538_ = v___y_6566_;
v___y_6539_ = v___y_6567_;
v___y_6540_ = v___y_6569_;
v___y_6541_ = v___y_6565_;
v___y_6542_ = v_t_x3f_6562_;
v___y_6543_ = v___x_6590_;
v___y_6544_ = v___y_6564_;
v___y_6545_ = v___x_6473_;
goto v___jp_6534_;
}
}
}
}
else
{
lean_object* v_x_6602_; lean_object* v___y_6604_; lean_object* v_t_6605_; lean_object* v___y_6606_; lean_object* v___y_6607_; lean_object* v___y_6608_; lean_object* v___y_6609_; lean_object* v___y_6610_; lean_object* v___y_6611_; lean_object* v___y_6612_; lean_object* v_t_x3f_6645_; lean_object* v___y_6646_; lean_object* v___y_6647_; lean_object* v___y_6648_; lean_object* v___y_6649_; lean_object* v___y_6650_; lean_object* v___y_6651_; lean_object* v___y_6652_; lean_object* v___x_6687_; uint8_t v___x_6688_; 
v_x_6602_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6468_);
v___x_6687_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__44));
lean_inc(v_x_6602_);
v___x_6688_ = l_Lean_Syntax_isOfKind(v_x_6602_, v___x_6687_);
if (v___x_6688_ == 0)
{
lean_object* v___x_6689_; 
lean_dec(v_x_6602_);
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6689_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6689_;
}
else
{
lean_object* v___x_6690_; lean_object* v___x_6691_; uint8_t v___x_6692_; 
v___x_6690_ = lean_unsigned_to_nat(1u);
v___x_6691_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6690_);
v___x_6692_ = l_Lean_Syntax_isNone(v___x_6691_);
if (v___x_6692_ == 0)
{
uint8_t v___x_6693_; 
lean_inc(v___x_6691_);
v___x_6693_ = l_Lean_Syntax_matchesNull(v___x_6691_, v___x_6690_);
if (v___x_6693_ == 0)
{
lean_object* v___x_6694_; 
lean_dec(v___x_6691_);
lean_dec(v_x_6602_);
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6694_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6694_;
}
else
{
lean_object* v___x_6695_; lean_object* v___x_6696_; uint8_t v___x_6697_; 
v___x_6695_ = l_Lean_Syntax_getArg(v___x_6691_, v___x_6468_);
lean_dec(v___x_6691_);
v___x_6696_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40));
lean_inc(v___x_6695_);
v___x_6697_ = l_Lean_Syntax_isOfKind(v___x_6695_, v___x_6696_);
if (v___x_6697_ == 0)
{
lean_object* v___x_6698_; 
lean_dec(v___x_6695_);
lean_dec(v_x_6602_);
lean_dec(v___x_6469_);
lean_dec_ref(v_dec_6456_);
v___x_6698_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6698_;
}
else
{
lean_object* v_t_x3f_6699_; lean_object* v___x_6700_; 
v_t_x3f_6699_ = l_Lean_Syntax_getArg(v___x_6695_, v___x_6690_);
lean_dec(v___x_6695_);
v___x_6700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6700_, 0, v_t_x3f_6699_);
v_t_x3f_6645_ = v___x_6700_;
v___y_6646_ = v_a_6457_;
v___y_6647_ = v_a_6458_;
v___y_6648_ = v_a_6459_;
v___y_6649_ = v_a_6460_;
v___y_6650_ = v_a_6461_;
v___y_6651_ = v_a_6462_;
v___y_6652_ = v_a_6463_;
goto v___jp_6644_;
}
}
}
else
{
lean_object* v___x_6701_; 
lean_dec(v___x_6691_);
v___x_6701_ = lean_box(0);
v_t_x3f_6645_ = v___x_6701_;
v___y_6646_ = v_a_6457_;
v___y_6647_ = v_a_6458_;
v___y_6648_ = v_a_6459_;
v___y_6649_ = v_a_6460_;
v___y_6650_ = v_a_6461_;
v___y_6651_ = v_a_6462_;
v___y_6652_ = v_a_6463_;
goto v___jp_6644_;
}
}
v___jp_6603_:
{
lean_object* v___x_6613_; lean_object* v___x_6614_; 
v___x_6613_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6614_ = l_Lean_Core_mkFreshUserName(v___x_6613_, v___y_6611_, v___y_6612_);
if (lean_obj_tag(v___x_6614_) == 0)
{
lean_object* v_a_6615_; lean_object* v_ref_6616_; uint8_t v___x_6617_; lean_object* v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___x_6621_; lean_object* v___x_6622_; lean_object* v___x_6623_; lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; uint8_t v_kind_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; lean_object* v___x_6634_; lean_object* v___x_6635_; 
v_a_6615_ = lean_ctor_get(v___x_6614_, 0);
lean_inc(v_a_6615_);
lean_dec_ref_known(v___x_6614_, 1);
v_ref_6616_ = lean_ctor_get(v___y_6611_, 2);
v___x_6617_ = 0;
v___x_6618_ = l_Lean_mkIdentFrom(v_x_6602_, v_a_6615_, v___x_6617_);
v___x_6619_ = l_Lean_SourceInfo_fromRef(v_ref_6616_, v___x_6617_);
v___x_6620_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6621_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_6622_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42));
lean_inc_n(v___x_6619_, 4);
v___x_6623_ = l_Lean_Syntax_node1(v___x_6619_, v___x_6622_, v_x_6602_);
v___x_6624_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6625_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_6626_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6626_, 0, v___x_6619_);
lean_ctor_set(v___x_6626_, 1, v___x_6624_);
lean_ctor_set(v___x_6626_, 2, v___x_6625_);
v___x_6627_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6628_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6628_, 0, v___x_6619_);
lean_ctor_set(v___x_6628_, 1, v___x_6627_);
lean_inc(v___x_6618_);
lean_inc_ref(v___x_6626_);
v___x_6629_ = l_Lean_Syntax_node5(v___x_6619_, v___x_6621_, v___x_6623_, v___x_6626_, v___x_6626_, v___x_6628_, v___x_6618_);
v_kind_6630_ = lean_ctor_get_uint8(v_dec_6456_, sizeof(void*)*3);
v___x_6631_ = l_Lean_Syntax_node1(v___x_6619_, v___x_6620_, v___x_6629_);
v___x_6632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6632_, 0, v_t_6605_);
v___x_6633_ = lean_box(v___x_6466_);
v___x_6634_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6634_, 0, v___x_6631_);
lean_closure_set(v___x_6634_, 1, v_dec_6456_);
lean_closure_set(v___x_6634_, 2, v___x_6633_);
v___x_6635_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6618_, v___x_6632_, v___y_6604_, v___x_6634_, v_kind_6630_, v___y_6606_, v___y_6607_, v___y_6608_, v___y_6609_, v___y_6610_, v___y_6611_, v___y_6612_);
return v___x_6635_;
}
else
{
lean_object* v_a_6636_; lean_object* v___x_6638_; uint8_t v_isShared_6639_; uint8_t v_isSharedCheck_6643_; 
lean_dec(v_t_6605_);
lean_dec(v___y_6604_);
lean_dec(v_x_6602_);
lean_dec_ref(v_dec_6456_);
v_a_6636_ = lean_ctor_get(v___x_6614_, 0);
v_isSharedCheck_6643_ = !lean_is_exclusive(v___x_6614_);
if (v_isSharedCheck_6643_ == 0)
{
v___x_6638_ = v___x_6614_;
v_isShared_6639_ = v_isSharedCheck_6643_;
goto v_resetjp_6637_;
}
else
{
lean_inc(v_a_6636_);
lean_dec(v___x_6614_);
v___x_6638_ = lean_box(0);
v_isShared_6639_ = v_isSharedCheck_6643_;
goto v_resetjp_6637_;
}
v_resetjp_6637_:
{
lean_object* v___x_6641_; 
if (v_isShared_6639_ == 0)
{
v___x_6641_ = v___x_6638_;
goto v_reusejp_6640_;
}
else
{
lean_object* v_reuseFailAlloc_6642_; 
v_reuseFailAlloc_6642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6642_, 0, v_a_6636_);
v___x_6641_ = v_reuseFailAlloc_6642_;
goto v_reusejp_6640_;
}
v_reusejp_6640_:
{
return v___x_6641_;
}
}
}
}
v___jp_6644_:
{
lean_object* v___x_6653_; lean_object* v_rhs_6654_; lean_object* v___x_6655_; 
v___x_6653_ = lean_unsigned_to_nat(3u);
v_rhs_6654_ = l_Lean_Syntax_getArg(v___x_6469_, v___x_6653_);
lean_dec(v___x_6469_);
v___x_6655_ = l_Lean_Elab_Do_throwUnlessMutVarDeclared(v_x_6602_, v___y_6646_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_, v___y_6651_, v___y_6652_);
if (lean_obj_tag(v___x_6655_) == 0)
{
lean_dec_ref_known(v___x_6655_, 1);
if (lean_obj_tag(v_t_x3f_6645_) == 0)
{
lean_object* v___x_6656_; lean_object* v___x_6657_; 
v___x_6656_ = l_Lean_TSyntax_getId(v_x_6602_);
v___x_6657_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_6656_, v___y_6649_, v___y_6650_, v___y_6651_, v___y_6652_);
if (lean_obj_tag(v___x_6657_) == 0)
{
lean_object* v_a_6658_; lean_object* v___x_6659_; lean_object* v___x_6660_; 
v_a_6658_ = lean_ctor_get(v___x_6657_, 0);
lean_inc(v_a_6658_);
lean_dec_ref_known(v___x_6657_, 1);
v___x_6659_ = l_Lean_LocalDecl_type(v_a_6658_);
lean_dec(v_a_6658_);
v___x_6660_ = l_Lean_Elab_Term_exprToSyntax(v___x_6659_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_, v___y_6651_, v___y_6652_);
if (lean_obj_tag(v___x_6660_) == 0)
{
lean_object* v_a_6661_; 
v_a_6661_ = lean_ctor_get(v___x_6660_, 0);
lean_inc(v_a_6661_);
lean_dec_ref_known(v___x_6660_, 1);
v___y_6604_ = v_rhs_6654_;
v_t_6605_ = v_a_6661_;
v___y_6606_ = v___y_6646_;
v___y_6607_ = v___y_6647_;
v___y_6608_ = v___y_6648_;
v___y_6609_ = v___y_6649_;
v___y_6610_ = v___y_6650_;
v___y_6611_ = v___y_6651_;
v___y_6612_ = v___y_6652_;
goto v___jp_6603_;
}
else
{
lean_object* v_a_6662_; lean_object* v___x_6664_; uint8_t v_isShared_6665_; uint8_t v_isSharedCheck_6669_; 
lean_dec(v_rhs_6654_);
lean_dec(v_x_6602_);
lean_dec_ref(v_dec_6456_);
v_a_6662_ = lean_ctor_get(v___x_6660_, 0);
v_isSharedCheck_6669_ = !lean_is_exclusive(v___x_6660_);
if (v_isSharedCheck_6669_ == 0)
{
v___x_6664_ = v___x_6660_;
v_isShared_6665_ = v_isSharedCheck_6669_;
goto v_resetjp_6663_;
}
else
{
lean_inc(v_a_6662_);
lean_dec(v___x_6660_);
v___x_6664_ = lean_box(0);
v_isShared_6665_ = v_isSharedCheck_6669_;
goto v_resetjp_6663_;
}
v_resetjp_6663_:
{
lean_object* v___x_6667_; 
if (v_isShared_6665_ == 0)
{
v___x_6667_ = v___x_6664_;
goto v_reusejp_6666_;
}
else
{
lean_object* v_reuseFailAlloc_6668_; 
v_reuseFailAlloc_6668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6668_, 0, v_a_6662_);
v___x_6667_ = v_reuseFailAlloc_6668_;
goto v_reusejp_6666_;
}
v_reusejp_6666_:
{
return v___x_6667_;
}
}
}
}
else
{
lean_object* v_a_6670_; lean_object* v___x_6672_; uint8_t v_isShared_6673_; uint8_t v_isSharedCheck_6677_; 
lean_dec(v_rhs_6654_);
lean_dec(v_x_6602_);
lean_dec_ref(v_dec_6456_);
v_a_6670_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6677_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6677_ == 0)
{
v___x_6672_ = v___x_6657_;
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
else
{
lean_inc(v_a_6670_);
lean_dec(v___x_6657_);
v___x_6672_ = lean_box(0);
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
v_resetjp_6671_:
{
lean_object* v___x_6675_; 
if (v_isShared_6673_ == 0)
{
v___x_6675_ = v___x_6672_;
goto v_reusejp_6674_;
}
else
{
lean_object* v_reuseFailAlloc_6676_; 
v_reuseFailAlloc_6676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6676_, 0, v_a_6670_);
v___x_6675_ = v_reuseFailAlloc_6676_;
goto v_reusejp_6674_;
}
v_reusejp_6674_:
{
return v___x_6675_;
}
}
}
}
else
{
lean_object* v_val_6678_; 
v_val_6678_ = lean_ctor_get(v_t_x3f_6645_, 0);
lean_inc(v_val_6678_);
lean_dec_ref_known(v_t_x3f_6645_, 1);
v___y_6604_ = v_rhs_6654_;
v_t_6605_ = v_val_6678_;
v___y_6606_ = v___y_6646_;
v___y_6607_ = v___y_6647_;
v___y_6608_ = v___y_6648_;
v___y_6609_ = v___y_6649_;
v___y_6610_ = v___y_6650_;
v___y_6611_ = v___y_6651_;
v___y_6612_ = v___y_6652_;
goto v___jp_6603_;
}
}
else
{
lean_object* v_a_6679_; lean_object* v___x_6681_; uint8_t v_isShared_6682_; uint8_t v_isSharedCheck_6686_; 
lean_dec(v_rhs_6654_);
lean_dec(v_t_x3f_6645_);
lean_dec(v_x_6602_);
lean_dec_ref(v_dec_6456_);
v_a_6679_ = lean_ctor_get(v___x_6655_, 0);
v_isSharedCheck_6686_ = !lean_is_exclusive(v___x_6655_);
if (v_isSharedCheck_6686_ == 0)
{
v___x_6681_ = v___x_6655_;
v_isShared_6682_ = v_isSharedCheck_6686_;
goto v_resetjp_6680_;
}
else
{
lean_inc(v_a_6679_);
lean_dec(v___x_6655_);
v___x_6681_ = lean_box(0);
v_isShared_6682_ = v_isSharedCheck_6686_;
goto v_resetjp_6680_;
}
v_resetjp_6680_:
{
lean_object* v___x_6684_; 
if (v_isShared_6682_ == 0)
{
v___x_6684_ = v___x_6681_;
goto v_reusejp_6683_;
}
else
{
lean_object* v_reuseFailAlloc_6685_; 
v_reuseFailAlloc_6685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6685_, 0, v_a_6679_);
v___x_6684_ = v_reuseFailAlloc_6685_;
goto v_reusejp_6683_;
}
v_reusejp_6683_:
{
return v___x_6684_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object* v_stx_6702_, lean_object* v_dec_6703_, lean_object* v_a_6704_, lean_object* v_a_6705_, lean_object* v_a_6706_, lean_object* v_a_6707_, lean_object* v_a_6708_, lean_object* v_a_6709_, lean_object* v_a_6710_, lean_object* v_a_6711_){
_start:
{
lean_object* v_res_6712_; 
v_res_6712_ = l_Lean_Elab_Do_elabDoReassignArrow(v_stx_6702_, v_dec_6703_, v_a_6704_, v_a_6705_, v_a_6706_, v_a_6707_, v_a_6708_, v_a_6709_, v_a_6710_);
lean_dec(v_a_6710_);
lean_dec_ref(v_a_6709_);
lean_dec(v_a_6708_);
lean_dec_ref(v_a_6707_);
lean_dec(v_a_6706_);
lean_dec_ref(v_a_6705_);
lean_dec_ref(v_a_6704_);
return v_res_6712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1(){
_start:
{
lean_object* v___x_6720_; lean_object* v___x_6721_; lean_object* v___x_6722_; lean_object* v___x_6723_; lean_object* v___x_6724_; 
v___x_6720_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6721_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
v___x_6722_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1));
v___x_6723_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassignArrow___boxed), 10, 0);
v___x_6724_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6720_, v___x_6721_, v___x_6722_, v___x_6723_);
return v___x_6724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object* v_a_6725_){
_start:
{
lean_object* v_res_6726_; 
v_res_6726_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
return v_res_6726_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Erased(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Erased(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Let(builtin);
}
#ifdef __cplusplus
}
#endif

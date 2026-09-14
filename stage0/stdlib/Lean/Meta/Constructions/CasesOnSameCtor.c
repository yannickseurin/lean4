// Lean compiler output
// Module: Lean.Meta.Constructions.CasesOnSameCtor
// Imports: public import Lean.Meta.Basic import Lean.Meta.CompletionName import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CtorElim import Lean.Elab.App import Lean.Meta.SameCtorUtils
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
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabAsElim;
lean_object* l_Lean_Meta_Match_Extension_addMatcherInfo(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_mkConstructorElimName(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Meta_markMatcherLike(lean_object*, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_addToCompletionBlackList(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0 = (const lean_object*)&l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object**);
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 10, 150, 230, 97, 79, 179, 234)}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object**);
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Constructions.CasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__0_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.mkCasesOnSameCtorHet"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unexpected universe levels on `casesOn`"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__3;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__4 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__4_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__5;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "could not apply "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " to close\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unifyEqns\? unexpectedly closed goal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "het"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 194, 63, 63, 137, 239, 65, 92)}};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.mkCasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__3;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
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
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object* v_k_78_, lean_object* v_b_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
v___x_85_ = lean_apply_6(v_k_78_, v_b_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, lean_box(0));
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object* v_k_86_, lean_object* v_b_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(v_k_86_, v_b_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object* v_name_94_, uint8_t v_bi_95_, lean_object* v_type_96_, lean_object* v_k_97_, uint8_t v_kind_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___f_104_; lean_object* v___x_105_; 
v___f_104_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_104_, 0, v_k_97_);
v___x_105_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_94_, v_bi_95_, v_type_96_, v___f_104_, v_kind_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_105_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_105_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_105_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object* v_name_122_, lean_object* v_bi_123_, lean_object* v_type_124_, lean_object* v_k_125_, lean_object* v_kind_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_bi_boxed_132_; uint8_t v_kind_boxed_133_; lean_object* v_res_134_; 
v_bi_boxed_132_ = lean_unbox(v_bi_123_);
v_kind_boxed_133_ = lean_unbox(v_kind_126_);
v_res_134_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_122_, v_bi_boxed_132_, v_type_124_, v_k_125_, v_kind_boxed_133_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object* v_00_u03b1_135_, lean_object* v_name_136_, uint8_t v_bi_137_, lean_object* v_type_138_, lean_object* v_k_139_, uint8_t v_kind_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_136_, v_bi_137_, v_type_138_, v_k_139_, v_kind_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object* v_00_u03b1_147_, lean_object* v_name_148_, lean_object* v_bi_149_, lean_object* v_type_150_, lean_object* v_k_151_, lean_object* v_kind_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_bi_boxed_158_; uint8_t v_kind_boxed_159_; lean_object* v_res_160_; 
v_bi_boxed_158_ = lean_unbox(v_bi_149_);
v_kind_boxed_159_ = lean_unbox(v_kind_152_);
v_res_160_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(v_00_u03b1_147_, v_name_148_, v_bi_boxed_158_, v_type_150_, v_k_151_, v_kind_boxed_159_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object* v_type_161_, lean_object* v_maxFVars_x3f_162_, lean_object* v_k_163_, uint8_t v_cleanupAnnotations_164_, uint8_t v_whnfType_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_171_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_171_, 0, v_k_163_);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_161_, v_maxFVars_x3f_162_, v___f_171_, v_cleanupAnnotations_164_, v_whnfType_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_172_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_172_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object* v_type_189_, lean_object* v_maxFVars_x3f_190_, lean_object* v_k_191_, lean_object* v_cleanupAnnotations_192_, lean_object* v_whnfType_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_199_; uint8_t v_whnfType_boxed_200_; lean_object* v_res_201_; 
v_cleanupAnnotations_boxed_199_ = lean_unbox(v_cleanupAnnotations_192_);
v_whnfType_boxed_200_ = lean_unbox(v_whnfType_193_);
v_res_201_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_189_, v_maxFVars_x3f_190_, v_k_191_, v_cleanupAnnotations_boxed_199_, v_whnfType_boxed_200_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object* v_00_u03b1_202_, lean_object* v_type_203_, lean_object* v_maxFVars_x3f_204_, lean_object* v_k_205_, uint8_t v_cleanupAnnotations_206_, uint8_t v_whnfType_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_203_, v_maxFVars_x3f_204_, v_k_205_, v_cleanupAnnotations_206_, v_whnfType_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object* v_00_u03b1_214_, lean_object* v_type_215_, lean_object* v_maxFVars_x3f_216_, lean_object* v_k_217_, lean_object* v_cleanupAnnotations_218_, lean_object* v_whnfType_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_225_; uint8_t v_whnfType_boxed_226_; lean_object* v_res_227_; 
v_cleanupAnnotations_boxed_225_ = lean_unbox(v_cleanupAnnotations_218_);
v_whnfType_boxed_226_ = lean_unbox(v_whnfType_219_);
v_res_227_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(v_00_u03b1_214_, v_type_215_, v_maxFVars_x3f_216_, v_k_217_, v_cleanupAnnotations_boxed_225_, v_whnfType_boxed_226_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object* v_name_228_, lean_object* v_levelParams_229_, lean_object* v_type_230_, lean_object* v_value_231_, lean_object* v_hints_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; uint8_t v___y_237_; uint8_t v___y_244_; lean_object* v_env_247_; uint8_t v___x_248_; 
v___x_235_ = lean_st_ref_get(v___y_233_);
v_env_247_ = lean_ctor_get(v___x_235_, 0);
lean_inc_ref_n(v_env_247_, 2);
lean_dec(v___x_235_);
v___x_248_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_type_230_);
if (v___x_248_ == 0)
{
uint8_t v___x_249_; 
v___x_249_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_value_231_);
v___y_244_ = v___x_249_;
goto v___jp_243_;
}
else
{
lean_dec_ref(v_env_247_);
v___y_244_ = v___x_248_;
goto v___jp_243_;
}
v___jp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_inc(v_name_228_);
v___x_238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_238_, 0, v_name_228_);
lean_ctor_set(v___x_238_, 1, v_levelParams_229_);
lean_ctor_set(v___x_238_, 2, v_type_230_);
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v_name_228_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_241_, 0, v___x_238_);
lean_ctor_set(v___x_241_, 1, v_value_231_);
lean_ctor_set(v___x_241_, 2, v_hints_232_);
lean_ctor_set(v___x_241_, 3, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*4, v___y_237_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
v___jp_243_:
{
if (v___y_244_ == 0)
{
uint8_t v___x_245_; 
v___x_245_ = 1;
v___y_237_ = v___x_245_;
goto v___jp_236_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 0;
v___y_237_ = v___x_246_;
goto v___jp_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object* v_name_250_, lean_object* v_levelParams_251_, lean_object* v_type_252_, lean_object* v_value_253_, lean_object* v_hints_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_250_, v_levelParams_251_, v_type_252_, v_value_253_, v_hints_254_, v___y_255_);
lean_dec(v___y_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object* v_name_258_, lean_object* v_levelParams_259_, lean_object* v_type_260_, lean_object* v_value_261_, lean_object* v_hints_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_258_, v_levelParams_259_, v_type_260_, v_value_261_, v_hints_262_, v___y_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object* v_name_269_, lean_object* v_levelParams_270_, lean_object* v_type_271_, lean_object* v_value_272_, lean_object* v_hints_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(v_name_269_, v_levelParams_270_, v_type_271_, v_value_272_, v_hints_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object* v___y_280_, uint8_t v_isExporting_281_, lean_object* v___x_282_, lean_object* v___y_283_, lean_object* v___x_284_, lean_object* v_a_x3f_285_){
_start:
{
lean_object* v___x_287_; lean_object* v_env_288_; lean_object* v_nextMacroScope_289_; lean_object* v_ngen_290_; lean_object* v_auxDeclNGen_291_; lean_object* v_traceState_292_; lean_object* v_messages_293_; lean_object* v_infoState_294_; lean_object* v_snapshotTasks_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_320_; 
v___x_287_ = lean_st_ref_take(v___y_280_);
v_env_288_ = lean_ctor_get(v___x_287_, 0);
v_nextMacroScope_289_ = lean_ctor_get(v___x_287_, 1);
v_ngen_290_ = lean_ctor_get(v___x_287_, 2);
v_auxDeclNGen_291_ = lean_ctor_get(v___x_287_, 3);
v_traceState_292_ = lean_ctor_get(v___x_287_, 4);
v_messages_293_ = lean_ctor_get(v___x_287_, 6);
v_infoState_294_ = lean_ctor_get(v___x_287_, 7);
v_snapshotTasks_295_ = lean_ctor_get(v___x_287_, 8);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v___x_287_, 5);
lean_dec(v_unused_321_);
v___x_297_ = v___x_287_;
v_isShared_298_ = v_isSharedCheck_320_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_snapshotTasks_295_);
lean_inc(v_infoState_294_);
lean_inc(v_messages_293_);
lean_inc(v_traceState_292_);
lean_inc(v_auxDeclNGen_291_);
lean_inc(v_ngen_290_);
lean_inc(v_nextMacroScope_289_);
lean_inc(v_env_288_);
lean_dec(v___x_287_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_320_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = l_Lean_Environment_setExporting(v_env_288_, v_isExporting_281_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 5, v___x_282_);
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_nextMacroScope_289_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v_ngen_290_);
lean_ctor_set(v_reuseFailAlloc_319_, 3, v_auxDeclNGen_291_);
lean_ctor_set(v_reuseFailAlloc_319_, 4, v_traceState_292_);
lean_ctor_set(v_reuseFailAlloc_319_, 5, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_319_, 6, v_messages_293_);
lean_ctor_set(v_reuseFailAlloc_319_, 7, v_infoState_294_);
lean_ctor_set(v_reuseFailAlloc_319_, 8, v_snapshotTasks_295_);
v___x_301_ = v_reuseFailAlloc_319_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_mctx_304_; lean_object* v_zetaDeltaFVarIds_305_; lean_object* v_postponed_306_; lean_object* v_diag_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v___x_302_ = lean_st_ref_put(v___y_280_, v___x_301_);
v___x_303_ = lean_st_ref_take(v___y_283_);
v_mctx_304_ = lean_ctor_get(v___x_303_, 0);
v_zetaDeltaFVarIds_305_ = lean_ctor_get(v___x_303_, 2);
v_postponed_306_ = lean_ctor_get(v___x_303_, 3);
v_diag_307_ = lean_ctor_get(v___x_303_, 4);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v___x_303_, 1);
lean_dec(v_unused_318_);
v___x_309_ = v___x_303_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_diag_307_);
lean_inc(v_postponed_306_);
lean_inc(v_zetaDeltaFVarIds_305_);
lean_inc(v_mctx_304_);
lean_dec(v___x_303_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = lean_box(0);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v___x_284_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_mctx_304_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_316_, 2, v_zetaDeltaFVarIds_305_);
lean_ctor_set(v_reuseFailAlloc_316_, 3, v_postponed_306_);
lean_ctor_set(v_reuseFailAlloc_316_, 4, v_diag_307_);
v___x_313_ = v_reuseFailAlloc_316_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_st_ref_put(v___y_283_, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_311_);
return v___x_315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object* v___y_322_, lean_object* v_isExporting_323_, lean_object* v___x_324_, lean_object* v___y_325_, lean_object* v___x_326_, lean_object* v_a_x3f_327_, lean_object* v___y_328_){
_start:
{
uint8_t v_isExporting_boxed_329_; lean_object* v_res_330_; 
v_isExporting_boxed_329_ = lean_unbox(v_isExporting_323_);
v_res_330_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_322_, v_isExporting_boxed_329_, v___x_324_, v___y_325_, v___x_326_, v_a_x3f_327_);
lean_dec(v_a_x3f_327_);
lean_dec(v___y_325_);
lean_dec(v___y_322_);
return v_res_330_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_331_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_337_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
lean_ctor_set(v___x_337_, 2, v___x_336_);
lean_ctor_set(v___x_337_, 3, v___x_336_);
lean_ctor_set(v___x_337_, 4, v___x_336_);
lean_ctor_set(v___x_337_, 5, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object* v_x_338_, uint8_t v_isExporting_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; lean_object* v_env_346_; lean_object* v___x_347_; uint8_t v_isModule_348_; 
v___x_345_ = lean_st_ref_get(v___y_343_);
v_env_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_env_346_);
lean_dec(v___x_345_);
v___x_347_ = l_Lean_Environment_header(v_env_346_);
v_isModule_348_ = lean_ctor_get_uint8(v___x_347_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_347_);
if (v_isModule_348_ == 0)
{
lean_object* v___x_349_; 
lean_dec_ref(v_env_346_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_349_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_349_;
}
else
{
uint8_t v_isExporting_350_; 
v_isExporting_350_ = lean_ctor_get_uint8(v_env_346_, sizeof(void*)*8);
lean_dec_ref(v_env_346_);
if (v_isExporting_339_ == 0)
{
if (v_isExporting_350_ == 0)
{
lean_object* v___x_416_; 
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_416_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_416_;
}
else
{
goto v___jp_351_;
}
}
else
{
if (v_isExporting_350_ == 0)
{
goto v___jp_351_;
}
else
{
lean_object* v___x_417_; 
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_417_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_417_;
}
}
v___jp_351_:
{
lean_object* v___x_352_; lean_object* v_env_353_; lean_object* v_nextMacroScope_354_; lean_object* v_ngen_355_; lean_object* v_auxDeclNGen_356_; lean_object* v_traceState_357_; lean_object* v_messages_358_; lean_object* v_infoState_359_; lean_object* v_snapshotTasks_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_414_; 
v___x_352_ = lean_st_ref_take(v___y_343_);
v_env_353_ = lean_ctor_get(v___x_352_, 0);
v_nextMacroScope_354_ = lean_ctor_get(v___x_352_, 1);
v_ngen_355_ = lean_ctor_get(v___x_352_, 2);
v_auxDeclNGen_356_ = lean_ctor_get(v___x_352_, 3);
v_traceState_357_ = lean_ctor_get(v___x_352_, 4);
v_messages_358_ = lean_ctor_get(v___x_352_, 6);
v_infoState_359_ = lean_ctor_get(v___x_352_, 7);
v_snapshotTasks_360_ = lean_ctor_get(v___x_352_, 8);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_352_, 5);
lean_dec(v_unused_415_);
v___x_362_ = v___x_352_;
v_isShared_363_ = v_isSharedCheck_414_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_snapshotTasks_360_);
lean_inc(v_infoState_359_);
lean_inc(v_messages_358_);
lean_inc(v_traceState_357_);
lean_inc(v_auxDeclNGen_356_);
lean_inc(v_ngen_355_);
lean_inc(v_nextMacroScope_354_);
lean_inc(v_env_353_);
lean_dec(v___x_352_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_414_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_364_ = l_Lean_Environment_setExporting(v_env_353_, v_isExporting_339_);
v___x_365_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 5, v___x_365_);
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_nextMacroScope_354_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_ngen_355_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_auxDeclNGen_356_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_traceState_357_);
lean_ctor_set(v_reuseFailAlloc_413_, 5, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_413_, 6, v_messages_358_);
lean_ctor_set(v_reuseFailAlloc_413_, 7, v_infoState_359_);
lean_ctor_set(v_reuseFailAlloc_413_, 8, v_snapshotTasks_360_);
v___x_367_ = v_reuseFailAlloc_413_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_mctx_370_; lean_object* v_zetaDeltaFVarIds_371_; lean_object* v_postponed_372_; lean_object* v_diag_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_411_; 
v___x_368_ = lean_st_ref_put(v___y_343_, v___x_367_);
v___x_369_ = lean_st_ref_take(v___y_341_);
v_mctx_370_ = lean_ctor_get(v___x_369_, 0);
v_zetaDeltaFVarIds_371_ = lean_ctor_get(v___x_369_, 2);
v_postponed_372_ = lean_ctor_get(v___x_369_, 3);
v_diag_373_ = lean_ctor_get(v___x_369_, 4);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_369_, 1);
lean_dec(v_unused_412_);
v___x_375_ = v___x_369_;
v_isShared_376_ = v_isSharedCheck_411_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_diag_373_);
lean_inc(v_postponed_372_);
lean_inc(v_zetaDeltaFVarIds_371_);
lean_inc(v_mctx_370_);
lean_dec(v___x_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_411_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_mctx_370_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_zetaDeltaFVarIds_371_);
lean_ctor_set(v_reuseFailAlloc_410_, 3, v_postponed_372_);
lean_ctor_set(v_reuseFailAlloc_410_, 4, v_diag_373_);
v___x_379_ = v_reuseFailAlloc_410_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_380_; lean_object* v_r_381_; 
v___x_380_ = lean_st_ref_put(v___y_341_, v___x_379_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v_r_381_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
if (lean_obj_tag(v_r_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_398_; 
v_a_382_ = lean_ctor_get(v_r_381_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v_r_381_);
if (v_isSharedCheck_398_ == 0)
{
v___x_384_ = v_r_381_;
v_isShared_385_ = v_isSharedCheck_398_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v_r_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_398_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
lean_inc(v_a_382_);
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 1);
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_397_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v___x_388_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_343_, v_isExporting_350_, v___x_365_, v___y_341_, v___x_377_, v___x_387_);
lean_dec_ref(v___x_387_);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_396_);
v___x_390_ = v___x_388_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_dec(v___x_388_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v_a_382_);
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_382_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_399_ = lean_ctor_get(v_r_381_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v_r_381_, 1);
v___x_400_ = lean_box(0);
v___x_401_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_343_, v_isExporting_350_, v___x_365_, v___y_341_, v___x_377_, v___x_400_);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_401_, 0);
lean_dec(v_unused_409_);
v___x_403_ = v___x_401_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_dec(v___x_401_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 1);
lean_ctor_set(v___x_403_, 0, v_a_399_);
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_399_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
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
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object* v_x_418_, lean_object* v_isExporting_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
uint8_t v_isExporting_boxed_425_; lean_object* v_res_426_; 
v_isExporting_boxed_425_ = lean_unbox(v_isExporting_419_);
v_res_426_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_418_, v_isExporting_boxed_425_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object* v_00_u03b1_427_, lean_object* v_x_428_, uint8_t v_isExporting_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_428_, v_isExporting_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object* v_00_u03b1_436_, lean_object* v_x_437_, lean_object* v_isExporting_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v_isExporting_boxed_444_; lean_object* v_res_445_; 
v_isExporting_boxed_444_ = lean_unbox(v_isExporting_438_);
v_res_445_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(v_00_u03b1_436_, v_x_437_, v_isExporting_boxed_444_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object* v_msg_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___f_453_; lean_object* v___x_15696__overap_454_; lean_object* v___x_455_; 
v___f_453_ = ((lean_object*)(l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0));
v___x_15696__overap_454_ = lean_panic_fn_borrowed(v___f_453_, v_msg_447_);
lean_inc(v___y_451_);
lean_inc_ref(v___y_450_);
lean_inc(v___y_449_);
lean_inc_ref(v___y_448_);
v___x_455_ = lean_apply_5(v___x_15696__overap_454_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, lean_box(0));
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object* v_msg_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v_msg_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object* v_name_463_, lean_object* v_type_464_, lean_object* v_k_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
uint8_t v___x_471_; uint8_t v___x_472_; lean_object* v___x_473_; 
v___x_471_ = 0;
v___x_472_ = 0;
v___x_473_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_463_, v___x_471_, v_type_464_, v_k_465_, v___x_472_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object* v_name_474_, lean_object* v_type_475_, lean_object* v_k_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_474_, v_type_475_, v_k_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object* v___x_483_, lean_object* v_ism2_484_, lean_object* v_motive_485_, uint8_t v___x_486_, uint8_t v___x_487_, uint8_t v___x_488_, lean_object* v_a_489_, lean_object* v___f_490_, lean_object* v_zs1_491_, lean_object* v_val_492_, lean_object* v___x_493_, lean_object* v_indName_494_, lean_object* v___x_495_, lean_object* v___x_496_, lean_object* v_params_497_, lean_object* v___x_498_, lean_object* v_h_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = l_Array_append___redArg(v___x_483_, v_ism2_484_);
v___x_506_ = l_Lean_mkAppN(v_motive_485_, v___x_505_);
lean_dec_ref(v___x_505_);
lean_inc_ref(v_ism2_484_);
v___x_507_ = l_Lean_Meta_mkLambdaFVars(v_ism2_484_, v___x_506_, v___x_486_, v___x_487_, v___x_486_, v___x_487_, v___x_488_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_509_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_507_, 1);
v___x_509_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_489_, v___f_490_, v___x_486_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___y_512_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_509_, 1);
v___x_515_ = l_Lean_InductiveVal_numCtors(v_val_492_);
v___x_516_ = lean_nat_dec_eq(v___x_515_, v___x_493_);
lean_dec(v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v___x_498_);
v___x_517_ = l_Lean_mkConstructorElimName(v_indName_494_, v___x_495_);
v___x_518_ = l_Lean_mkConst(v___x_517_, v___x_496_);
v___x_519_ = lean_mk_empty_array_with_capacity(v___x_493_);
v___x_520_ = lean_array_push(v___x_519_, v_a_508_);
v___x_521_ = l_Array_append___redArg(v_params_497_, v___x_520_);
lean_dec_ref(v___x_520_);
v___x_522_ = l_Array_append___redArg(v___x_521_, v_ism2_484_);
lean_dec_ref(v_ism2_484_);
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = lean_mk_empty_array_with_capacity(v___x_523_);
lean_inc_ref(v_h_499_);
v___x_525_ = lean_array_push(v___x_524_, v_h_499_);
v___x_526_ = lean_array_push(v___x_525_, v_a_510_);
v___x_527_ = l_Array_append___redArg(v___x_522_, v___x_526_);
lean_dec_ref(v___x_526_);
v___x_528_ = l_Lean_mkAppN(v___x_518_, v___x_527_);
lean_dec_ref(v___x_527_);
v___y_512_ = v___x_528_;
goto v___jp_511_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v___x_495_);
v___x_529_ = l_Lean_mkConst(v___x_498_, v___x_496_);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_493_);
lean_inc_ref(v___x_530_);
v___x_531_ = lean_array_push(v___x_530_, v_a_508_);
v___x_532_ = l_Array_append___redArg(v_params_497_, v___x_531_);
lean_dec_ref(v___x_531_);
v___x_533_ = l_Array_append___redArg(v___x_532_, v_ism2_484_);
lean_dec_ref(v_ism2_484_);
v___x_534_ = lean_array_push(v___x_530_, v_a_510_);
v___x_535_ = l_Array_append___redArg(v___x_533_, v___x_534_);
lean_dec_ref(v___x_534_);
v___x_536_ = l_Lean_mkAppN(v___x_529_, v___x_535_);
lean_dec_ref(v___x_535_);
v___y_512_ = v___x_536_;
goto v___jp_511_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_array_push(v_zs1_491_, v_h_499_);
v___x_514_ = l_Lean_Meta_mkLambdaFVars(v___x_513_, v___y_512_, v___x_486_, v___x_487_, v___x_486_, v___x_487_, v___x_488_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
return v___x_514_;
}
}
else
{
lean_dec(v_a_508_);
lean_dec_ref(v_h_499_);
lean_dec(v___x_498_);
lean_dec_ref(v_params_497_);
lean_dec(v___x_496_);
lean_dec(v___x_495_);
lean_dec_ref(v_zs1_491_);
lean_dec_ref(v_ism2_484_);
return v___x_509_;
}
}
else
{
lean_dec_ref(v_h_499_);
lean_dec(v___x_498_);
lean_dec_ref(v_params_497_);
lean_dec(v___x_496_);
lean_dec(v___x_495_);
lean_dec_ref(v_zs1_491_);
lean_dec_ref(v___f_490_);
lean_dec_ref(v_a_489_);
lean_dec_ref(v_ism2_484_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_537_ = _args[0];
lean_object* v_ism2_538_ = _args[1];
lean_object* v_motive_539_ = _args[2];
lean_object* v___x_540_ = _args[3];
lean_object* v___x_541_ = _args[4];
lean_object* v___x_542_ = _args[5];
lean_object* v_a_543_ = _args[6];
lean_object* v___f_544_ = _args[7];
lean_object* v_zs1_545_ = _args[8];
lean_object* v_val_546_ = _args[9];
lean_object* v___x_547_ = _args[10];
lean_object* v_indName_548_ = _args[11];
lean_object* v___x_549_ = _args[12];
lean_object* v___x_550_ = _args[13];
lean_object* v_params_551_ = _args[14];
lean_object* v___x_552_ = _args[15];
lean_object* v_h_553_ = _args[16];
lean_object* v___y_554_ = _args[17];
lean_object* v___y_555_ = _args[18];
lean_object* v___y_556_ = _args[19];
lean_object* v___y_557_ = _args[20];
lean_object* v___y_558_ = _args[21];
_start:
{
uint8_t v___x_20750__boxed_559_; uint8_t v___x_20751__boxed_560_; uint8_t v___x_20752__boxed_561_; lean_object* v_res_562_; 
v___x_20750__boxed_559_ = lean_unbox(v___x_540_);
v___x_20751__boxed_560_ = lean_unbox(v___x_541_);
v___x_20752__boxed_561_ = lean_unbox(v___x_542_);
v_res_562_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(v___x_537_, v_ism2_538_, v_motive_539_, v___x_20750__boxed_559_, v___x_20751__boxed_560_, v___x_20752__boxed_561_, v_a_543_, v___f_544_, v_zs1_545_, v_val_546_, v___x_547_, v_indName_548_, v___x_549_, v___x_550_, v_params_551_, v___x_552_, v_h_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v_indName_548_);
lean_dec(v___x_547_);
lean_dec_ref(v_val_546_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object* v___x_563_, lean_object* v_alts_564_, lean_object* v___x_565_, lean_object* v_zs1_566_, uint8_t v___x_567_, uint8_t v___x_568_, uint8_t v___x_569_, lean_object* v_zs2_570_, lean_object* v_x_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_577_ = lean_array_get_borrowed(v___x_563_, v_alts_564_, v___x_565_);
v___x_578_ = l_Array_append___redArg(v_zs1_566_, v_zs2_570_);
lean_inc(v___x_577_);
v___x_579_ = l_Lean_mkAppN(v___x_577_, v___x_578_);
lean_dec_ref(v___x_578_);
v___x_580_ = l_Lean_Meta_mkLambdaFVars(v_zs2_570_, v___x_579_, v___x_567_, v___x_568_, v___x_567_, v___x_568_, v___x_569_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object* v___x_581_, lean_object* v_alts_582_, lean_object* v___x_583_, lean_object* v_zs1_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_zs2_588_, lean_object* v_x_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
uint8_t v___x_20865__boxed_595_; uint8_t v___x_20866__boxed_596_; uint8_t v___x_20867__boxed_597_; lean_object* v_res_598_; 
v___x_20865__boxed_595_ = lean_unbox(v___x_585_);
v___x_20866__boxed_596_ = lean_unbox(v___x_586_);
v___x_20867__boxed_597_ = lean_unbox(v___x_587_);
v_res_598_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(v___x_581_, v_alts_582_, v___x_583_, v_zs1_584_, v___x_20865__boxed_595_, v___x_20866__boxed_596_, v___x_20867__boxed_597_, v_zs2_588_, v_x_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v_x_589_);
lean_dec(v___x_583_);
lean_dec_ref(v_alts_582_);
lean_dec_ref(v___x_581_);
return v_res_598_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_box(0);
v___x_600_ = l_unsafeCast___redArg(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_601_; lean_object* v_dummy_602_; 
v___x_601_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_dummy_602_ = l_Lean_Expr_sort___override(v___x_601_);
return v_dummy_602_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_box(0);
v___x_610_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5));
v___x_611_ = l_Lean_mkConst(v___x_610_, v___x_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object* v___x_612_, lean_object* v_alts_613_, lean_object* v___x_614_, uint8_t v___x_615_, uint8_t v___x_616_, uint8_t v___x_617_, lean_object* v___x_618_, lean_object* v___x_619_, lean_object* v___x_620_, lean_object* v_ism2_621_, lean_object* v_motive_622_, lean_object* v_a_623_, lean_object* v_val_624_, lean_object* v_indName_625_, lean_object* v___x_626_, lean_object* v___x_627_, lean_object* v_params_628_, lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v___x_631_, lean_object* v_zs1_632_, lean_object* v_ctorRet1_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___f_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_639_ = lean_box(v___x_615_);
v___x_640_ = lean_box(v___x_616_);
v___x_641_ = lean_box(v___x_617_);
lean_inc_ref(v_zs1_632_);
lean_inc(v___x_614_);
v___f_642_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_642_, 0, v___x_612_);
lean_closure_set(v___f_642_, 1, v_alts_613_);
lean_closure_set(v___f_642_, 2, v___x_614_);
lean_closure_set(v___f_642_, 3, v_zs1_632_);
lean_closure_set(v___f_642_, 4, v___x_639_);
lean_closure_set(v___f_642_, 5, v___x_640_);
lean_closure_set(v___f_642_, 6, v___x_641_);
v___x_643_ = l_Lean_mkAppN(v___x_618_, v_zs1_632_);
lean_inc(v___y_637_);
lean_inc_ref(v___y_636_);
lean_inc(v___y_635_);
lean_inc_ref(v___y_634_);
v___x_644_ = lean_whnf(v_ctorRet1_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v_dummy_646_; lean_object* v_nargs_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___f_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v_dummy_646_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1);
v_nargs_647_ = l_Lean_Expr_getAppNumArgs(v_a_645_);
lean_inc(v_nargs_647_);
v___x_648_ = lean_mk_array(v_nargs_647_, v_dummy_646_);
v___x_649_ = lean_nat_sub(v_nargs_647_, v___x_619_);
lean_dec(v_nargs_647_);
v___x_650_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_645_, v___x_648_, v___x_649_);
v___x_651_ = lean_array_get_size(v___x_650_);
v___x_652_ = l_Array_toSubarray___redArg(v___x_650_, v___x_620_, v___x_651_);
v___x_653_ = l_Subarray_copy___redArg(v___x_652_);
v___x_654_ = lean_array_push(v___x_653_, v___x_643_);
v___x_655_ = lean_box(v___x_615_);
v___x_656_ = lean_box(v___x_616_);
v___x_657_ = lean_box(v___x_617_);
lean_inc(v___x_619_);
v___f_658_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed), 22, 16);
lean_closure_set(v___f_658_, 0, v___x_654_);
lean_closure_set(v___f_658_, 1, v_ism2_621_);
lean_closure_set(v___f_658_, 2, v_motive_622_);
lean_closure_set(v___f_658_, 3, v___x_655_);
lean_closure_set(v___f_658_, 4, v___x_656_);
lean_closure_set(v___f_658_, 5, v___x_657_);
lean_closure_set(v___f_658_, 6, v_a_623_);
lean_closure_set(v___f_658_, 7, v___f_642_);
lean_closure_set(v___f_658_, 8, v_zs1_632_);
lean_closure_set(v___f_658_, 9, v_val_624_);
lean_closure_set(v___f_658_, 10, v___x_619_);
lean_closure_set(v___f_658_, 11, v_indName_625_);
lean_closure_set(v___f_658_, 12, v___x_626_);
lean_closure_set(v___f_658_, 13, v___x_627_);
lean_closure_set(v___f_658_, 14, v_params_628_);
lean_closure_set(v___f_658_, 15, v___x_629_);
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3));
v___x_660_ = l_Lean_Level_ofNat(v___x_619_);
lean_dec(v___x_619_);
v___x_661_ = lean_box(0);
v___x_662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = l_Lean_mkConst(v___x_659_, v___x_662_);
v___x_664_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__6);
v___x_665_ = l_Lean_mkRawNatLit(v___x_614_);
v___x_666_ = l_Lean_mkApp3(v___x_663_, v___x_664_, v___x_630_, v___x_665_);
v___x_667_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_631_, v___x_666_, v___f_658_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
return v___x_667_;
}
else
{
lean_dec_ref(v___x_643_);
lean_dec_ref(v___f_642_);
lean_dec_ref(v_zs1_632_);
lean_dec(v___x_631_);
lean_dec_ref(v___x_630_);
lean_dec(v___x_629_);
lean_dec_ref(v_params_628_);
lean_dec(v___x_627_);
lean_dec(v___x_626_);
lean_dec(v_indName_625_);
lean_dec_ref(v_val_624_);
lean_dec_ref(v_a_623_);
lean_dec_ref(v_motive_622_);
lean_dec_ref(v_ism2_621_);
lean_dec(v___x_620_);
lean_dec(v___x_619_);
lean_dec(v___x_614_);
return v___x_644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_668_ = _args[0];
lean_object* v_alts_669_ = _args[1];
lean_object* v___x_670_ = _args[2];
lean_object* v___x_671_ = _args[3];
lean_object* v___x_672_ = _args[4];
lean_object* v___x_673_ = _args[5];
lean_object* v___x_674_ = _args[6];
lean_object* v___x_675_ = _args[7];
lean_object* v___x_676_ = _args[8];
lean_object* v_ism2_677_ = _args[9];
lean_object* v_motive_678_ = _args[10];
lean_object* v_a_679_ = _args[11];
lean_object* v_val_680_ = _args[12];
lean_object* v_indName_681_ = _args[13];
lean_object* v___x_682_ = _args[14];
lean_object* v___x_683_ = _args[15];
lean_object* v_params_684_ = _args[16];
lean_object* v___x_685_ = _args[17];
lean_object* v___x_686_ = _args[18];
lean_object* v___x_687_ = _args[19];
lean_object* v_zs1_688_ = _args[20];
lean_object* v_ctorRet1_689_ = _args[21];
lean_object* v___y_690_ = _args[22];
lean_object* v___y_691_ = _args[23];
lean_object* v___y_692_ = _args[24];
lean_object* v___y_693_ = _args[25];
lean_object* v___y_694_ = _args[26];
_start:
{
uint8_t v___x_20930__boxed_695_; uint8_t v___x_20931__boxed_696_; uint8_t v___x_20932__boxed_697_; lean_object* v_res_698_; 
v___x_20930__boxed_695_ = lean_unbox(v___x_671_);
v___x_20931__boxed_696_ = lean_unbox(v___x_672_);
v___x_20932__boxed_697_ = lean_unbox(v___x_673_);
v_res_698_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(v___x_668_, v_alts_669_, v___x_670_, v___x_20930__boxed_695_, v___x_20931__boxed_696_, v___x_20932__boxed_697_, v___x_674_, v___x_675_, v___x_676_, v_ism2_677_, v_motive_678_, v_a_679_, v_val_680_, v_indName_681_, v___x_682_, v___x_683_, v_params_684_, v___x_685_, v___x_686_, v___x_687_, v_zs1_688_, v_ctorRet1_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object* v_tail_702_, lean_object* v_params_703_, lean_object* v_alts_704_, lean_object* v___x_705_, lean_object* v_ism2_706_, lean_object* v_motive_707_, lean_object* v_val_708_, lean_object* v_indName_709_, lean_object* v___x_710_, lean_object* v___x_711_, lean_object* v___x_712_, size_t v_sz_713_, size_t v_i_714_, lean_object* v_bs_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
uint8_t v___x_721_; 
v___x_721_ = lean_usize_dec_lt(v_i_714_, v_sz_713_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v___x_712_);
lean_dec(v___x_711_);
lean_dec(v___x_710_);
lean_dec(v_indName_709_);
lean_dec_ref(v_val_708_);
lean_dec_ref(v_motive_707_);
lean_dec_ref(v_ism2_706_);
lean_dec(v___x_705_);
lean_dec_ref(v_alts_704_);
lean_dec_ref(v_params_703_);
lean_dec(v_tail_702_);
v___x_722_ = l_unsafeCast___redArg(v_bs_715_);
lean_dec_ref(v_bs_715_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; uint8_t v___x_725_; uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v_v_729_; lean_object* v___x_730_; lean_object* v_bs_x27_731_; lean_object* v___y_733_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_724_ = l_Lean_instInhabitedExpr;
v___x_725_ = 0;
v___x_726_ = 1;
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v_v_729_ = lean_array_uget(v_bs_715_, v_i_714_);
v___x_730_ = lean_unsigned_to_nat(0u);
v_bs_x27_731_ = lean_array_uset(v_bs_715_, v_i_714_, v___x_730_);
v___x_748_ = lean_usize_to_nat(v_i_714_);
v___x_749_ = l_unsafeCast___redArg(v_v_729_);
lean_dec(v_v_729_);
lean_inc(v_tail_702_);
lean_inc(v___x_749_);
v___x_750_ = l_Lean_mkConst(v___x_749_, v_tail_702_);
v___x_751_ = l_Lean_mkAppN(v___x_750_, v_params_703_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_717_);
lean_inc_ref(v___y_716_);
lean_inc_ref(v___x_751_);
v___x_752_ = lean_infer_type(v___x_751_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc_n(v_a_753_, 2);
lean_dec_ref_known(v___x_752_, 1);
v___x_754_ = lean_box(v___x_725_);
v___x_755_ = lean_box(v___x_721_);
v___x_756_ = lean_box(v___x_726_);
lean_inc_ref(v___x_712_);
lean_inc(v___x_711_);
lean_inc_ref(v_params_703_);
lean_inc(v___x_710_);
lean_inc(v_indName_709_);
lean_inc_ref(v_val_708_);
lean_inc_ref(v_motive_707_);
lean_inc_ref(v_ism2_706_);
lean_inc(v___x_705_);
lean_inc_ref(v_alts_704_);
v___f_757_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed), 27, 20);
lean_closure_set(v___f_757_, 0, v___x_724_);
lean_closure_set(v___f_757_, 1, v_alts_704_);
lean_closure_set(v___f_757_, 2, v___x_748_);
lean_closure_set(v___f_757_, 3, v___x_754_);
lean_closure_set(v___f_757_, 4, v___x_755_);
lean_closure_set(v___f_757_, 5, v___x_756_);
lean_closure_set(v___f_757_, 6, v___x_751_);
lean_closure_set(v___f_757_, 7, v___x_727_);
lean_closure_set(v___f_757_, 8, v___x_705_);
lean_closure_set(v___f_757_, 9, v_ism2_706_);
lean_closure_set(v___f_757_, 10, v_motive_707_);
lean_closure_set(v___f_757_, 11, v_a_753_);
lean_closure_set(v___f_757_, 12, v_val_708_);
lean_closure_set(v___f_757_, 13, v_indName_709_);
lean_closure_set(v___f_757_, 14, v___x_749_);
lean_closure_set(v___f_757_, 15, v___x_710_);
lean_closure_set(v___f_757_, 16, v_params_703_);
lean_closure_set(v___f_757_, 17, v___x_711_);
lean_closure_set(v___f_757_, 18, v___x_712_);
lean_closure_set(v___f_757_, 19, v___x_728_);
v___x_758_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_753_, v___f_757_, v___x_725_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
v___y_733_ = v___x_758_;
goto v___jp_732_;
}
else
{
lean_dec_ref(v___x_751_);
lean_dec(v___x_749_);
lean_dec(v___x_748_);
v___y_733_ = v___x_752_;
goto v___jp_732_;
}
v___jp_732_:
{
if (lean_obj_tag(v___y_733_) == 0)
{
lean_object* v_a_734_; size_t v___x_735_; size_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_a_734_ = lean_ctor_get(v___y_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___y_733_, 1);
v___x_735_ = ((size_t)1ULL);
v___x_736_ = lean_usize_add(v_i_714_, v___x_735_);
v___x_737_ = l_unsafeCast___redArg(v_a_734_);
lean_dec(v_a_734_);
v___x_738_ = lean_array_uset(v_bs_x27_731_, v_i_714_, v___x_737_);
v_i_714_ = v___x_736_;
v_bs_715_ = v___x_738_;
goto _start;
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_dec_ref(v_bs_x27_731_);
lean_dec_ref(v___x_712_);
lean_dec(v___x_711_);
lean_dec(v___x_710_);
lean_dec(v_indName_709_);
lean_dec_ref(v_val_708_);
lean_dec_ref(v_motive_707_);
lean_dec_ref(v_ism2_706_);
lean_dec(v___x_705_);
lean_dec_ref(v_alts_704_);
lean_dec_ref(v_params_703_);
lean_dec(v_tail_702_);
v_a_740_ = lean_ctor_get(v___y_733_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___y_733_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___y_733_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___y_733_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_tail_759_ = _args[0];
lean_object* v_params_760_ = _args[1];
lean_object* v_alts_761_ = _args[2];
lean_object* v___x_762_ = _args[3];
lean_object* v_ism2_763_ = _args[4];
lean_object* v_motive_764_ = _args[5];
lean_object* v_val_765_ = _args[6];
lean_object* v_indName_766_ = _args[7];
lean_object* v___x_767_ = _args[8];
lean_object* v___x_768_ = _args[9];
lean_object* v___x_769_ = _args[10];
lean_object* v_sz_770_ = _args[11];
lean_object* v_i_771_ = _args[12];
lean_object* v_bs_772_ = _args[13];
lean_object* v___y_773_ = _args[14];
lean_object* v___y_774_ = _args[15];
lean_object* v___y_775_ = _args[16];
lean_object* v___y_776_ = _args[17];
lean_object* v___y_777_ = _args[18];
_start:
{
size_t v_sz_boxed_778_; size_t v_i_boxed_779_; lean_object* v_res_780_; 
v_sz_boxed_778_ = lean_unbox_usize(v_sz_770_);
lean_dec(v_sz_770_);
v_i_boxed_779_ = lean_unbox_usize(v_i_771_);
lean_dec(v_i_771_);
v_res_780_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_759_, v_params_760_, v_alts_761_, v___x_762_, v_ism2_763_, v_motive_764_, v_val_765_, v_indName_766_, v___x_767_, v___x_768_, v___x_769_, v_sz_boxed_778_, v_i_boxed_779_, v_bs_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object* v_tail_781_, lean_object* v_params_782_, lean_object* v_alts_783_, lean_object* v___x_784_, lean_object* v_ism2_785_, lean_object* v_motive_786_, lean_object* v_val_787_, lean_object* v_indName_788_, lean_object* v___x_789_, lean_object* v___x_790_, lean_object* v___x_791_, lean_object* v_as_792_, size_t v_sz_793_, size_t v_i_794_, lean_object* v_bs_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_781_, v_params_782_, v_alts_783_, v___x_784_, v_ism2_785_, v_motive_786_, v_val_787_, v_indName_788_, v___x_789_, v___x_790_, v___x_791_, v_sz_793_, v_i_794_, v_bs_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object** _args){
lean_object* v_tail_802_ = _args[0];
lean_object* v_params_803_ = _args[1];
lean_object* v_alts_804_ = _args[2];
lean_object* v___x_805_ = _args[3];
lean_object* v_ism2_806_ = _args[4];
lean_object* v_motive_807_ = _args[5];
lean_object* v_val_808_ = _args[6];
lean_object* v_indName_809_ = _args[7];
lean_object* v___x_810_ = _args[8];
lean_object* v___x_811_ = _args[9];
lean_object* v___x_812_ = _args[10];
lean_object* v_as_813_ = _args[11];
lean_object* v_sz_814_ = _args[12];
lean_object* v_i_815_ = _args[13];
lean_object* v_bs_816_ = _args[14];
lean_object* v___y_817_ = _args[15];
lean_object* v___y_818_ = _args[16];
lean_object* v___y_819_ = _args[17];
lean_object* v___y_820_ = _args[18];
lean_object* v___y_821_ = _args[19];
_start:
{
size_t v_sz_boxed_822_; size_t v_i_boxed_823_; lean_object* v_res_824_; 
v_sz_boxed_822_ = lean_unbox_usize(v_sz_814_);
lean_dec(v_sz_814_);
v_i_boxed_823_ = lean_unbox_usize(v_i_815_);
lean_dec(v_i_815_);
v_res_824_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(v_tail_802_, v_params_803_, v_alts_804_, v___x_805_, v_ism2_806_, v_motive_807_, v_val_808_, v_indName_809_, v___x_810_, v___x_811_, v___x_812_, v_as_813_, v_sz_boxed_822_, v_i_boxed_823_, v_bs_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_as_813_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object* v_motive_827_, lean_object* v___x_828_, lean_object* v_a_829_, lean_object* v_ism1_830_, uint8_t v___x_831_, uint8_t v___x_832_, uint8_t v___x_833_, lean_object* v_name_834_, lean_object* v___x_835_, lean_object* v_params_836_, lean_object* v___x_837_, lean_object* v_tail_838_, lean_object* v_alts_839_, lean_object* v_numParams_840_, lean_object* v_ism2_841_, lean_object* v_val_842_, lean_object* v_indName_843_, lean_object* v___x_844_, lean_object* v___x_845_, lean_object* v___x_846_, lean_object* v_heq_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
lean_inc_ref(v_motive_827_);
v___x_853_ = l_Lean_mkAppN(v_motive_827_, v___x_828_);
v___x_854_ = l_Lean_mkArrow(v_a_829_, v___x_853_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
lean_inc_ref(v_ism1_830_);
v___x_856_ = l_Lean_Meta_mkLambdaFVars(v_ism1_830_, v_a_855_, v___x_831_, v___x_832_, v___x_831_, v___x_832_, v___x_833_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; size_t v_sz_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_19758__overap_867_; lean_object* v___x_868_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
lean_inc(v___x_835_);
v___x_858_ = l_Lean_mkConst(v_name_834_, v___x_835_);
v___x_859_ = l_Lean_mkAppN(v___x_858_, v_params_836_);
v___x_860_ = l_Lean_Expr_app___override(v___x_859_, v_a_857_);
v___x_861_ = l_Lean_mkAppN(v___x_860_, v_ism1_830_);
v_sz_862_ = lean_array_size(v___x_837_);
v___x_863_ = l_unsafeCast___redArg(v___x_837_);
v___x_864_ = lean_box_usize(v_sz_862_);
v___x_865_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1));
lean_inc_ref(v_motive_827_);
lean_inc_ref(v_ism2_841_);
lean_inc_ref(v_alts_839_);
lean_inc_ref(v_params_836_);
v___x_866_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed), 20, 15);
lean_closure_set(v___x_866_, 0, v_tail_838_);
lean_closure_set(v___x_866_, 1, v_params_836_);
lean_closure_set(v___x_866_, 2, v_alts_839_);
lean_closure_set(v___x_866_, 3, v_numParams_840_);
lean_closure_set(v___x_866_, 4, v_ism2_841_);
lean_closure_set(v___x_866_, 5, v_motive_827_);
lean_closure_set(v___x_866_, 6, v_val_842_);
lean_closure_set(v___x_866_, 7, v_indName_843_);
lean_closure_set(v___x_866_, 8, v___x_835_);
lean_closure_set(v___x_866_, 9, v___x_844_);
lean_closure_set(v___x_866_, 10, v___x_845_);
lean_closure_set(v___x_866_, 11, v___x_837_);
lean_closure_set(v___x_866_, 12, v___x_864_);
lean_closure_set(v___x_866_, 13, v___x_865_);
lean_closure_set(v___x_866_, 14, v___x_863_);
v___x_19758__overap_867_ = l_unsafeCast___redArg(v___x_866_);
lean_dec_ref(v___x_866_);
lean_inc(v___y_851_);
lean_inc_ref(v___y_850_);
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
v___x_868_ = lean_apply_5(v___x_19758__overap_867_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, lean_box(0));
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = l_Lean_mkAppN(v___x_861_, v_a_869_);
lean_dec(v_a_869_);
lean_inc_ref(v_heq_847_);
v___x_871_ = l_Lean_Meta_mkEqSymm(v_heq_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = l_Lean_Expr_app___override(v___x_870_, v_a_872_);
v___x_874_ = lean_mk_empty_array_with_capacity(v___x_846_);
lean_inc_ref(v___x_874_);
v___x_875_ = lean_array_push(v___x_874_, v_motive_827_);
v___x_876_ = l_Array_append___redArg(v_params_836_, v___x_875_);
lean_dec_ref(v___x_875_);
v___x_877_ = l_Array_append___redArg(v___x_876_, v_ism1_830_);
lean_dec_ref(v_ism1_830_);
v___x_878_ = l_Array_append___redArg(v___x_877_, v_ism2_841_);
lean_dec_ref(v_ism2_841_);
v___x_879_ = lean_array_push(v___x_874_, v_heq_847_);
v___x_880_ = l_Array_append___redArg(v___x_878_, v___x_879_);
lean_dec_ref(v___x_879_);
v___x_881_ = l_Array_append___redArg(v___x_880_, v_alts_839_);
lean_dec_ref(v_alts_839_);
v___x_882_ = l_Lean_Meta_mkLambdaFVars(v___x_881_, v___x_873_, v___x_831_, v___x_832_, v___x_831_, v___x_832_, v___x_833_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
return v___x_882_;
}
else
{
lean_dec_ref(v___x_870_);
lean_dec_ref(v_heq_847_);
lean_dec_ref(v_ism2_841_);
lean_dec_ref(v_alts_839_);
lean_dec_ref(v_params_836_);
lean_dec_ref(v_ism1_830_);
lean_dec_ref(v_motive_827_);
return v___x_871_;
}
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec_ref(v___x_861_);
lean_dec_ref(v_heq_847_);
lean_dec_ref(v_ism2_841_);
lean_dec_ref(v_alts_839_);
lean_dec_ref(v_params_836_);
lean_dec_ref(v_ism1_830_);
lean_dec_ref(v_motive_827_);
v_a_883_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_868_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_868_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_dec_ref(v_heq_847_);
lean_dec_ref(v___x_845_);
lean_dec(v___x_844_);
lean_dec(v_indName_843_);
lean_dec_ref(v_val_842_);
lean_dec_ref(v_ism2_841_);
lean_dec(v_numParams_840_);
lean_dec_ref(v_alts_839_);
lean_dec(v_tail_838_);
lean_dec_ref(v___x_837_);
lean_dec_ref(v_params_836_);
lean_dec(v___x_835_);
lean_dec(v_name_834_);
lean_dec_ref(v_ism1_830_);
lean_dec_ref(v_motive_827_);
return v___x_856_;
}
}
else
{
lean_dec_ref(v_heq_847_);
lean_dec_ref(v___x_845_);
lean_dec(v___x_844_);
lean_dec(v_indName_843_);
lean_dec_ref(v_val_842_);
lean_dec_ref(v_ism2_841_);
lean_dec(v_numParams_840_);
lean_dec_ref(v_alts_839_);
lean_dec(v_tail_838_);
lean_dec_ref(v___x_837_);
lean_dec_ref(v_params_836_);
lean_dec(v___x_835_);
lean_dec(v_name_834_);
lean_dec_ref(v_ism1_830_);
lean_dec_ref(v_motive_827_);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object** _args){
lean_object* v_motive_891_ = _args[0];
lean_object* v___x_892_ = _args[1];
lean_object* v_a_893_ = _args[2];
lean_object* v_ism1_894_ = _args[3];
lean_object* v___x_895_ = _args[4];
lean_object* v___x_896_ = _args[5];
lean_object* v___x_897_ = _args[6];
lean_object* v_name_898_ = _args[7];
lean_object* v___x_899_ = _args[8];
lean_object* v_params_900_ = _args[9];
lean_object* v___x_901_ = _args[10];
lean_object* v_tail_902_ = _args[11];
lean_object* v_alts_903_ = _args[12];
lean_object* v_numParams_904_ = _args[13];
lean_object* v_ism2_905_ = _args[14];
lean_object* v_val_906_ = _args[15];
lean_object* v_indName_907_ = _args[16];
lean_object* v___x_908_ = _args[17];
lean_object* v___x_909_ = _args[18];
lean_object* v___x_910_ = _args[19];
lean_object* v_heq_911_ = _args[20];
lean_object* v___y_912_ = _args[21];
lean_object* v___y_913_ = _args[22];
lean_object* v___y_914_ = _args[23];
lean_object* v___y_915_ = _args[24];
lean_object* v___y_916_ = _args[25];
_start:
{
uint8_t v___x_21207__boxed_917_; uint8_t v___x_21208__boxed_918_; uint8_t v___x_21209__boxed_919_; lean_object* v_res_920_; 
v___x_21207__boxed_917_ = lean_unbox(v___x_895_);
v___x_21208__boxed_918_ = lean_unbox(v___x_896_);
v___x_21209__boxed_919_ = lean_unbox(v___x_897_);
v_res_920_ = l_Lean_mkCasesOnSameCtorHet___lam__0(v_motive_891_, v___x_892_, v_a_893_, v_ism1_894_, v___x_21207__boxed_917_, v___x_21208__boxed_918_, v___x_21209__boxed_919_, v_name_898_, v___x_899_, v_params_900_, v___x_901_, v_tail_902_, v_alts_903_, v_numParams_904_, v_ism2_905_, v_val_906_, v_indName_907_, v___x_908_, v___x_909_, v___x_910_, v_heq_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___x_910_);
lean_dec_ref(v___x_892_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object* v_indName_921_, lean_object* v_tail_922_, lean_object* v_params_923_, lean_object* v_ism1_924_, lean_object* v_ism2_925_, lean_object* v_motive_926_, lean_object* v___x_927_, uint8_t v___x_928_, uint8_t v___x_929_, uint8_t v___x_930_, lean_object* v_name_931_, lean_object* v___x_932_, lean_object* v___x_933_, lean_object* v_numParams_934_, lean_object* v_val_935_, lean_object* v___x_936_, lean_object* v___x_937_, lean_object* v_alts_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
lean_inc(v_indName_921_);
v___x_944_ = l_Lean_mkCtorIdxName(v_indName_921_);
lean_inc(v_tail_922_);
v___x_945_ = l_Lean_mkConst(v___x_944_, v_tail_922_);
lean_inc_ref_n(v_params_923_, 2);
v___x_946_ = l_Array_append___redArg(v_params_923_, v_ism1_924_);
lean_inc_ref(v___x_945_);
v___x_947_ = l_Lean_mkAppN(v___x_945_, v___x_946_);
lean_dec_ref(v___x_946_);
v___x_948_ = l_Array_append___redArg(v_params_923_, v_ism2_925_);
v___x_949_ = l_Lean_mkAppN(v___x_945_, v___x_948_);
lean_dec_ref(v___x_948_);
lean_inc_ref(v___x_949_);
lean_inc_ref(v___x_947_);
v___x_950_ = l_Lean_Meta_mkEq(v___x_947_, v___x_949_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_952_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
lean_inc_ref(v___x_949_);
v___x_952_ = l_Lean_Meta_mkEq(v___x_949_, v___x_947_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___f_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
v___x_954_ = lean_box(v___x_928_);
v___x_955_ = lean_box(v___x_929_);
v___x_956_ = lean_box(v___x_930_);
v___f_957_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed), 26, 20);
lean_closure_set(v___f_957_, 0, v_motive_926_);
lean_closure_set(v___f_957_, 1, v___x_927_);
lean_closure_set(v___f_957_, 2, v_a_953_);
lean_closure_set(v___f_957_, 3, v_ism1_924_);
lean_closure_set(v___f_957_, 4, v___x_954_);
lean_closure_set(v___f_957_, 5, v___x_955_);
lean_closure_set(v___f_957_, 6, v___x_956_);
lean_closure_set(v___f_957_, 7, v_name_931_);
lean_closure_set(v___f_957_, 8, v___x_932_);
lean_closure_set(v___f_957_, 9, v_params_923_);
lean_closure_set(v___f_957_, 10, v___x_933_);
lean_closure_set(v___f_957_, 11, v_tail_922_);
lean_closure_set(v___f_957_, 12, v_alts_938_);
lean_closure_set(v___f_957_, 13, v_numParams_934_);
lean_closure_set(v___f_957_, 14, v_ism2_925_);
lean_closure_set(v___f_957_, 15, v_val_935_);
lean_closure_set(v___f_957_, 16, v_indName_921_);
lean_closure_set(v___f_957_, 17, v___x_936_);
lean_closure_set(v___f_957_, 18, v___x_949_);
lean_closure_set(v___f_957_, 19, v___x_937_);
v___x_958_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_959_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_958_, v_a_951_, v___f_957_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
return v___x_959_;
}
else
{
lean_dec(v_a_951_);
lean_dec_ref(v___x_949_);
lean_dec_ref(v_alts_938_);
lean_dec(v___x_937_);
lean_dec(v___x_936_);
lean_dec_ref(v_val_935_);
lean_dec(v_numParams_934_);
lean_dec_ref(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v_name_931_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_motive_926_);
lean_dec_ref(v_ism2_925_);
lean_dec_ref(v_ism1_924_);
lean_dec_ref(v_params_923_);
lean_dec(v_tail_922_);
lean_dec(v_indName_921_);
return v___x_952_;
}
}
else
{
lean_dec_ref(v___x_949_);
lean_dec_ref(v___x_947_);
lean_dec_ref(v_alts_938_);
lean_dec(v___x_937_);
lean_dec(v___x_936_);
lean_dec_ref(v_val_935_);
lean_dec(v_numParams_934_);
lean_dec_ref(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v_name_931_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_motive_926_);
lean_dec_ref(v_ism2_925_);
lean_dec_ref(v_ism1_924_);
lean_dec_ref(v_params_923_);
lean_dec(v_tail_922_);
lean_dec(v_indName_921_);
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object** _args){
lean_object* v_indName_960_ = _args[0];
lean_object* v_tail_961_ = _args[1];
lean_object* v_params_962_ = _args[2];
lean_object* v_ism1_963_ = _args[3];
lean_object* v_ism2_964_ = _args[4];
lean_object* v_motive_965_ = _args[5];
lean_object* v___x_966_ = _args[6];
lean_object* v___x_967_ = _args[7];
lean_object* v___x_968_ = _args[8];
lean_object* v___x_969_ = _args[9];
lean_object* v_name_970_ = _args[10];
lean_object* v___x_971_ = _args[11];
lean_object* v___x_972_ = _args[12];
lean_object* v_numParams_973_ = _args[13];
lean_object* v_val_974_ = _args[14];
lean_object* v___x_975_ = _args[15];
lean_object* v___x_976_ = _args[16];
lean_object* v_alts_977_ = _args[17];
lean_object* v___y_978_ = _args[18];
lean_object* v___y_979_ = _args[19];
lean_object* v___y_980_ = _args[20];
lean_object* v___y_981_ = _args[21];
lean_object* v___y_982_ = _args[22];
_start:
{
uint8_t v___x_21341__boxed_983_; uint8_t v___x_21342__boxed_984_; uint8_t v___x_21343__boxed_985_; lean_object* v_res_986_; 
v___x_21341__boxed_983_ = lean_unbox(v___x_967_);
v___x_21342__boxed_984_ = lean_unbox(v___x_968_);
v___x_21343__boxed_985_ = lean_unbox(v___x_969_);
v_res_986_ = l_Lean_mkCasesOnSameCtorHet___lam__1(v_indName_960_, v_tail_961_, v_params_962_, v_ism1_963_, v_ism2_964_, v_motive_965_, v___x_966_, v___x_21341__boxed_983_, v___x_21342__boxed_984_, v___x_21343__boxed_985_, v_name_970_, v___x_971_, v___x_972_, v_numParams_973_, v_val_974_, v___x_975_, v___x_976_, v_alts_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object* v_snd_987_, lean_object* v_x_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_994_, 0, v_snd_987_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object* v_snd_995_, lean_object* v_x_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(v_snd_995_, v_x_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec_ref(v_x_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t v_sz_1003_, size_t v_i_1004_, lean_object* v_bs_1005_){
_start:
{
uint8_t v___x_1006_; 
v___x_1006_ = lean_usize_dec_lt(v_i_1004_, v_sz_1003_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = l_unsafeCast___redArg(v_bs_1005_);
lean_dec_ref(v_bs_1005_);
return v___x_1007_;
}
else
{
lean_object* v_v_1008_; lean_object* v___x_1009_; lean_object* v_fst_1010_; lean_object* v_snd_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1026_; 
v_v_1008_ = lean_array_uget_borrowed(v_bs_1005_, v_i_1004_);
v___x_1009_ = l_unsafeCast___redArg(v_v_1008_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
v_snd_1011_ = lean_ctor_get(v___x_1009_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1013_ = v___x_1009_;
v_isShared_1014_ = v_isSharedCheck_1026_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_snd_1011_);
lean_inc(v_fst_1010_);
lean_dec(v___x_1009_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1026_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v_bs_x27_1016_; lean_object* v___f_1017_; lean_object* v___x_1019_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v_bs_x27_1016_ = lean_array_uset(v_bs_1005_, v_i_1004_, v___x_1015_);
v___f_1017_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1017_, 0, v_snd_1011_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 1, v___f_1017_);
v___x_1019_ = v___x_1013_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_fst_1010_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v___f_1017_);
v___x_1019_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
size_t v___x_1020_; size_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1020_ = ((size_t)1ULL);
v___x_1021_ = lean_usize_add(v_i_1004_, v___x_1020_);
v___x_1022_ = l_unsafeCast___redArg(v___x_1019_);
lean_dec_ref(v___x_1019_);
v___x_1023_ = lean_array_uset(v_bs_x27_1016_, v_i_1004_, v___x_1022_);
v_i_1004_ = v___x_1021_;
v_bs_1005_ = v___x_1023_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object* v_sz_1027_, lean_object* v_i_1028_, lean_object* v_bs_1029_){
_start:
{
size_t v_sz_boxed_1030_; size_t v_i_boxed_1031_; lean_object* v_res_1032_; 
v_sz_boxed_1030_ = lean_unbox_usize(v_sz_1027_);
lean_dec(v_sz_1027_);
v_i_boxed_1031_ = lean_unbox_usize(v_i_1028_);
lean_dec(v_i_1028_);
v_res_1032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_boxed_1030_, v_i_boxed_1031_, v_bs_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object* v___x_1033_, lean_object* v___x_1034_, lean_object* v_a_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v___x_20161__overap_1041_; lean_object* v___x_1042_; 
v___x_20161__overap_1041_ = l_instInhabitedOfMonad___redArg(v___x_1033_, v___x_1034_);
lean_inc(v___y_1039_);
lean_inc_ref(v___y_1038_);
lean_inc(v___y_1037_);
lean_inc_ref(v___y_1036_);
v___x_1042_ = lean_apply_5(v___x_20161__overap_1041_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, lean_box(0));
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object* v___x_1043_, lean_object* v___x_1044_, lean_object* v_a_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(v___x_1043_, v___x_1044_, v_a_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec_ref(v_a_1045_);
return v_res_1051_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0(void){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_instMonadEIO___redArg();
return v___x_1052_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0);
v___x_1054_ = l_StateRefT_x27_instMonad___redArg(v___x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object* v_acc_1059_, lean_object* v_declInfos_1060_, lean_object* v_k_1061_, lean_object* v_kind_1062_, lean_object* v_x_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
uint8_t v_kind_boxed_1069_; lean_object* v_res_1070_; 
v_kind_boxed_1069_ = lean_unbox(v_kind_1062_);
v_res_1070_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(v_acc_1059_, v_declInfos_1060_, v_k_1061_, v_kind_boxed_1069_, v_x_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object* v_declInfos_1071_, lean_object* v_k_1072_, uint8_t v_kind_1073_, lean_object* v_acc_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v_toApplicative_1081_; lean_object* v_toFunctor_1082_; lean_object* v_toSeq_1083_; lean_object* v_toSeqLeft_1084_; lean_object* v_toSeqRight_1085_; lean_object* v___f_1086_; lean_object* v___f_1087_; lean_object* v___f_1088_; lean_object* v___f_1089_; lean_object* v___x_1090_; lean_object* v___f_1091_; lean_object* v___f_1092_; lean_object* v___f_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v_toApplicative_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1147_; 
v___x_1080_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_1081_ = lean_ctor_get(v___x_1080_, 0);
v_toFunctor_1082_ = lean_ctor_get(v_toApplicative_1081_, 0);
v_toSeq_1083_ = lean_ctor_get(v_toApplicative_1081_, 2);
v_toSeqLeft_1084_ = lean_ctor_get(v_toApplicative_1081_, 3);
v_toSeqRight_1085_ = lean_ctor_get(v_toApplicative_1081_, 4);
v___f_1086_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2));
v___f_1087_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3));
lean_inc_ref_n(v_toFunctor_1082_, 2);
v___f_1088_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1088_, 0, v_toFunctor_1082_);
v___f_1089_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1089_, 0, v_toFunctor_1082_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___f_1088_);
lean_ctor_set(v___x_1090_, 1, v___f_1089_);
lean_inc(v_toSeqRight_1085_);
v___f_1091_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1091_, 0, v_toSeqRight_1085_);
lean_inc(v_toSeqLeft_1084_);
v___f_1092_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1092_, 0, v_toSeqLeft_1084_);
lean_inc(v_toSeq_1083_);
v___f_1093_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1093_, 0, v_toSeq_1083_);
v___x_1094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1090_);
lean_ctor_set(v___x_1094_, 1, v___f_1086_);
lean_ctor_set(v___x_1094_, 2, v___f_1093_);
lean_ctor_set(v___x_1094_, 3, v___f_1092_);
lean_ctor_set(v___x_1094_, 4, v___f_1091_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v___f_1087_);
v___x_1096_ = l_StateRefT_x27_instMonad___redArg(v___x_1095_);
v_toApplicative_1097_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1147_ == 0)
{
lean_object* v_unused_1148_; 
v_unused_1148_ = lean_ctor_get(v___x_1096_, 1);
lean_dec(v_unused_1148_);
v___x_1099_ = v___x_1096_;
v_isShared_1100_ = v_isSharedCheck_1147_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_toApplicative_1097_);
lean_dec(v___x_1096_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1147_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v_toFunctor_1101_; lean_object* v_toSeq_1102_; lean_object* v_toSeqLeft_1103_; lean_object* v_toSeqRight_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1145_; 
v_toFunctor_1101_ = lean_ctor_get(v_toApplicative_1097_, 0);
v_toSeq_1102_ = lean_ctor_get(v_toApplicative_1097_, 2);
v_toSeqLeft_1103_ = lean_ctor_get(v_toApplicative_1097_, 3);
v_toSeqRight_1104_ = lean_ctor_get(v_toApplicative_1097_, 4);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_toApplicative_1097_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v_toApplicative_1097_, 1);
lean_dec(v_unused_1146_);
v___x_1106_ = v_toApplicative_1097_;
v_isShared_1107_ = v_isSharedCheck_1145_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_toSeqRight_1104_);
lean_inc(v_toSeqLeft_1103_);
lean_inc(v_toSeq_1102_);
lean_inc(v_toFunctor_1101_);
lean_dec(v_toApplicative_1097_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1145_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___f_1108_; lean_object* v___f_1109_; lean_object* v___f_1110_; lean_object* v___f_1111_; lean_object* v___x_1112_; lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___f_1115_; lean_object* v___x_1117_; 
v___f_1108_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4));
v___f_1109_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5));
lean_inc_ref(v_toFunctor_1101_);
v___f_1110_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1110_, 0, v_toFunctor_1101_);
v___f_1111_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1111_, 0, v_toFunctor_1101_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___f_1110_);
lean_ctor_set(v___x_1112_, 1, v___f_1111_);
v___f_1113_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1113_, 0, v_toSeqRight_1104_);
v___f_1114_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1114_, 0, v_toSeqLeft_1103_);
v___f_1115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1115_, 0, v_toSeq_1102_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 4, v___f_1113_);
lean_ctor_set(v___x_1106_, 3, v___f_1114_);
lean_ctor_set(v___x_1106_, 2, v___f_1115_);
lean_ctor_set(v___x_1106_, 1, v___f_1108_);
lean_ctor_set(v___x_1106_, 0, v___x_1112_);
v___x_1117_ = v___x_1106_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v___f_1108_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v___f_1115_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v___f_1114_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v___f_1113_);
v___x_1117_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1119_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 1, v___f_1109_);
lean_ctor_set(v___x_1099_, 0, v___x_1117_);
v___x_1119_ = v___x_1099_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1117_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___f_1109_);
v___x_1119_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v___x_1120_ = lean_array_get_size(v_acc_1074_);
v___x_1121_ = lean_array_get_size(v_declInfos_1071_);
v___x_1122_ = lean_nat_dec_lt(v___x_1120_, v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; 
lean_dec_ref(v___x_1119_);
lean_dec_ref(v_declInfos_1071_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc(v___y_1076_);
lean_inc_ref(v___y_1075_);
v___x_1123_ = lean_apply_6(v_k_1072_, v_acc_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, lean_box(0));
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___f_1127_; lean_object* v___f_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v_snd_1133_; lean_object* v_fst_1134_; lean_object* v_fst_1135_; lean_object* v_snd_1136_; lean_object* v___x_1137_; lean_object* v___f_1138_; lean_object* v___x_1139_; 
v___x_1124_ = l_Lean_instInhabitedName;
v___x_1125_ = 0;
v___x_1126_ = l_Lean_instInhabitedExpr;
v___f_1127_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1127_, 0, v___x_1119_);
lean_closure_set(v___f_1127_, 1, v___x_1126_);
v___f_1128_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1128_, 0, v___f_1127_);
v___x_1129_ = lean_box(v___x_1125_);
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v___f_1128_);
v___x_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1124_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = lean_array_get(v___x_1131_, v_declInfos_1071_, v___x_1120_);
lean_dec_ref_known(v___x_1131_, 2);
v_snd_1133_ = lean_ctor_get(v___x_1132_, 1);
lean_inc(v_snd_1133_);
v_fst_1134_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_fst_1134_);
lean_dec(v___x_1132_);
v_fst_1135_ = lean_ctor_get(v_snd_1133_, 0);
lean_inc(v_fst_1135_);
v_snd_1136_ = lean_ctor_get(v_snd_1133_, 1);
lean_inc(v_snd_1136_);
lean_dec(v_snd_1133_);
v___x_1137_ = lean_box(v_kind_1073_);
lean_inc_ref(v_acc_1074_);
v___f_1138_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed), 10, 4);
lean_closure_set(v___f_1138_, 0, v_acc_1074_);
lean_closure_set(v___f_1138_, 1, v_declInfos_1071_);
lean_closure_set(v___f_1138_, 2, v_k_1072_);
lean_closure_set(v___f_1138_, 3, v___x_1137_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc(v___y_1076_);
lean_inc_ref(v___y_1075_);
v___x_1139_ = lean_apply_6(v_snd_1136_, v_acc_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, lean_box(0));
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = lean_unbox(v_fst_1135_);
lean_dec(v_fst_1135_);
v___x_1142_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_1134_, v___x_1141_, v_a_1140_, v___f_1138_, v_kind_1073_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
return v___x_1142_;
}
else
{
lean_dec_ref(v___f_1138_);
lean_dec(v_fst_1135_);
lean_dec(v_fst_1134_);
return v___x_1139_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object* v_acc_1149_, lean_object* v_declInfos_1150_, lean_object* v_k_1151_, uint8_t v_kind_1152_, lean_object* v_x_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = lean_array_push(v_acc_1149_, v_x_1153_);
v___x_1160_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1150_, v_k_1151_, v_kind_1152_, v___x_1159_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object* v_declInfos_1161_, lean_object* v_k_1162_, lean_object* v_kind_1163_, lean_object* v_acc_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
uint8_t v_kind_boxed_1170_; lean_object* v_res_1171_; 
v_kind_boxed_1170_ = lean_unbox(v_kind_1163_);
v_res_1171_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1161_, v_k_1162_, v_kind_boxed_1170_, v_acc_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object* v_declInfos_1174_, lean_object* v_k_1175_, uint8_t v_kind_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_1183_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1174_, v_k_1175_, v_kind_1176_, v___x_1182_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object* v_declInfos_1184_, lean_object* v_k_1185_, lean_object* v_kind_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
uint8_t v_kind_boxed_1192_; lean_object* v_res_1193_; 
v_kind_boxed_1192_ = lean_unbox(v_kind_1186_);
v_res_1193_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v_declInfos_1184_, v_k_1185_, v_kind_boxed_1192_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t v_sz_1194_, size_t v_i_1195_, lean_object* v_bs_1196_){
_start:
{
uint8_t v___x_1197_; 
v___x_1197_ = lean_usize_dec_lt(v_i_1195_, v_sz_1194_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; 
v___x_1198_ = l_unsafeCast___redArg(v_bs_1196_);
lean_dec_ref(v_bs_1196_);
return v___x_1198_;
}
else
{
lean_object* v_v_1199_; lean_object* v___x_1200_; lean_object* v_fst_1201_; lean_object* v_snd_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1219_; 
v_v_1199_ = lean_array_uget_borrowed(v_bs_1196_, v_i_1195_);
v___x_1200_ = l_unsafeCast___redArg(v_v_1199_);
v_fst_1201_ = lean_ctor_get(v___x_1200_, 0);
v_snd_1202_ = lean_ctor_get(v___x_1200_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1204_ = v___x_1200_;
v_isShared_1205_ = v_isSharedCheck_1219_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_snd_1202_);
lean_inc(v_fst_1201_);
lean_dec(v___x_1200_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1219_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1206_; lean_object* v_bs_x27_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1206_ = lean_unsigned_to_nat(0u);
v_bs_x27_1207_ = lean_array_uset(v_bs_1196_, v_i_1195_, v___x_1206_);
v___x_1208_ = 0;
v___x_1209_ = lean_box(v___x_1208_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1209_);
v___x_1211_ = v___x_1204_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_snd_1202_);
v___x_1211_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; size_t v___x_1213_; size_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v_fst_1201_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = ((size_t)1ULL);
v___x_1214_ = lean_usize_add(v_i_1195_, v___x_1213_);
v___x_1215_ = l_unsafeCast___redArg(v___x_1212_);
lean_dec_ref_known(v___x_1212_, 2);
v___x_1216_ = lean_array_uset(v_bs_x27_1207_, v_i_1195_, v___x_1215_);
v_i_1195_ = v___x_1214_;
v_bs_1196_ = v___x_1216_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object* v_sz_1220_, lean_object* v_i_1221_, lean_object* v_bs_1222_){
_start:
{
size_t v_sz_boxed_1223_; size_t v_i_boxed_1224_; lean_object* v_res_1225_; 
v_sz_boxed_1223_ = lean_unbox_usize(v_sz_1220_);
lean_dec(v_sz_1220_);
v_i_boxed_1224_ = lean_unbox_usize(v_i_1221_);
lean_dec(v_i_1221_);
v_res_1225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_boxed_1223_, v_i_boxed_1224_, v_bs_1222_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object* v_declInfos_1226_, lean_object* v_k_1227_, uint8_t v_kind_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
size_t v_sz_1234_; size_t v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_sz_1234_ = lean_array_size(v_declInfos_1226_);
v___x_1235_ = ((size_t)0ULL);
v___x_1236_ = l_unsafeCast___redArg(v_declInfos_1226_);
v___x_1237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_1234_, v___x_1235_, v___x_1236_);
v___x_1238_ = l_unsafeCast___redArg(v___x_1237_);
lean_dec_ref(v___x_1237_);
v___x_1239_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v___x_1238_, v_k_1227_, v_kind_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object* v_declInfos_1240_, lean_object* v_k_1241_, lean_object* v_kind_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
uint8_t v_kind_boxed_1248_; lean_object* v_res_1249_; 
v_kind_boxed_1248_ = lean_unbox(v_kind_1242_);
v_res_1249_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v_declInfos_1240_, v_k_1241_, v_kind_boxed_1248_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec_ref(v_declInfos_1240_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object* v_declInfos_1250_, lean_object* v_k_1251_, uint8_t v_kind_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
size_t v_sz_1258_; size_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_sz_1258_ = lean_array_size(v_declInfos_1250_);
v___x_1259_ = ((size_t)0ULL);
v___x_1260_ = l_unsafeCast___redArg(v_declInfos_1250_);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_1258_, v___x_1259_, v___x_1260_);
v___x_1262_ = l_unsafeCast___redArg(v___x_1261_);
lean_dec_ref(v___x_1261_);
v___x_1263_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v___x_1262_, v_k_1251_, v_kind_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
lean_dec(v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object* v_declInfos_1264_, lean_object* v_k_1265_, lean_object* v_kind_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
uint8_t v_kind_boxed_1272_; lean_object* v_res_1273_; 
v_kind_boxed_1272_ = lean_unbox(v_kind_1266_);
v_res_1273_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_declInfos_1264_, v_k_1265_, v_kind_boxed_1272_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
lean_dec_ref(v_declInfos_1264_);
return v_res_1273_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_box(0);
v___x_1275_ = l_unsafeCast___redArg(v___x_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object* v___x_1277_, lean_object* v_dummy_1278_, lean_object* v___x_1279_, lean_object* v___x_1280_, lean_object* v___x_1281_, lean_object* v_motive_1282_, lean_object* v_zs1_1283_, uint8_t v___x_1284_, uint8_t v___x_1285_, uint8_t v___x_1286_, lean_object* v___x_1287_, lean_object* v___x_1288_, lean_object* v_zs2_1289_, lean_object* v_ctorRet2_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = l_Lean_mkAppN(v___x_1277_, v_zs2_1289_);
lean_inc(v___y_1294_);
lean_inc_ref(v___y_1293_);
lean_inc(v___y_1292_);
lean_inc_ref(v___y_1291_);
v___x_1297_ = lean_whnf(v_ctorRet2_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v_a_1298_; lean_object* v_nargs_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1298_);
lean_dec_ref_known(v___x_1297_, 1);
v_nargs_1299_ = l_Lean_Expr_getAppNumArgs(v_a_1298_);
lean_inc(v_nargs_1299_);
v___x_1300_ = lean_mk_array(v_nargs_1299_, v_dummy_1278_);
v___x_1301_ = lean_nat_sub(v_nargs_1299_, v___x_1279_);
lean_dec(v_nargs_1299_);
v___x_1302_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1298_, v___x_1300_, v___x_1301_);
v___x_1303_ = lean_array_get_size(v___x_1302_);
v___x_1304_ = l_Array_toSubarray___redArg(v___x_1302_, v___x_1280_, v___x_1303_);
v___x_1305_ = l_Subarray_copy___redArg(v___x_1304_);
v___x_1306_ = lean_array_push(v___x_1305_, v___x_1296_);
v___x_1307_ = l_Array_append___redArg(v___x_1281_, v___x_1306_);
lean_dec_ref(v___x_1306_);
v___x_1308_ = l_Lean_mkAppN(v_motive_1282_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = l_Array_append___redArg(v_zs1_1283_, v_zs2_1289_);
v___x_1310_ = l_Lean_Meta_mkForallFVars(v___x_1309_, v___x_1308_, v___x_1284_, v___x_1285_, v___x_1285_, v___x_1286_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1330_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___y_1316_; 
if (lean_obj_tag(v___x_1287_) == 1)
{
lean_object* v_str_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v_str_1321_ = lean_ctor_get(v___x_1287_, 1);
lean_inc_ref(v_str_1321_);
lean_dec_ref_known(v___x_1287_, 2);
v___x_1322_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_1323_ = l_Lean_Name_str___override(v___x_1322_, v_str_1321_);
v___y_1316_ = v___x_1323_;
goto v___jp_1315_;
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
lean_dec(v___x_1287_);
v___x_1324_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__1));
v___x_1325_ = lean_nat_add(v___x_1288_, v___x_1279_);
v___x_1326_ = l_Nat_reprFast(v___x_1325_);
v___x_1327_ = lean_string_append(v___x_1324_, v___x_1326_);
lean_dec_ref(v___x_1326_);
v___x_1328_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_1329_ = l_Lean_Name_str___override(v___x_1328_, v___x_1327_);
v___y_1316_ = v___x_1329_;
goto v___jp_1315_;
}
v___jp_1315_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___y_1316_);
lean_ctor_set(v___x_1317_, 1, v_a_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1317_);
v___x_1319_ = v___x_1313_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
lean_dec(v___x_1287_);
v_a_1331_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1310_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1310_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec_ref(v___x_1296_);
lean_dec(v___x_1287_);
lean_dec_ref(v_zs1_1283_);
lean_dec_ref(v_motive_1282_);
lean_dec_ref(v___x_1281_);
lean_dec(v___x_1280_);
lean_dec_ref(v_dummy_1278_);
v_a_1339_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1297_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1297_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_1347_ = _args[0];
lean_object* v_dummy_1348_ = _args[1];
lean_object* v___x_1349_ = _args[2];
lean_object* v___x_1350_ = _args[3];
lean_object* v___x_1351_ = _args[4];
lean_object* v_motive_1352_ = _args[5];
lean_object* v_zs1_1353_ = _args[6];
lean_object* v___x_1354_ = _args[7];
lean_object* v___x_1355_ = _args[8];
lean_object* v___x_1356_ = _args[9];
lean_object* v___x_1357_ = _args[10];
lean_object* v___x_1358_ = _args[11];
lean_object* v_zs2_1359_ = _args[12];
lean_object* v_ctorRet2_1360_ = _args[13];
lean_object* v___y_1361_ = _args[14];
lean_object* v___y_1362_ = _args[15];
lean_object* v___y_1363_ = _args[16];
lean_object* v___y_1364_ = _args[17];
lean_object* v___y_1365_ = _args[18];
_start:
{
uint8_t v___x_21806__boxed_1366_; uint8_t v___x_21807__boxed_1367_; uint8_t v___x_21808__boxed_1368_; lean_object* v_res_1369_; 
v___x_21806__boxed_1366_ = lean_unbox(v___x_1354_);
v___x_21807__boxed_1367_ = lean_unbox(v___x_1355_);
v___x_21808__boxed_1368_ = lean_unbox(v___x_1356_);
v_res_1369_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(v___x_1347_, v_dummy_1348_, v___x_1349_, v___x_1350_, v___x_1351_, v_motive_1352_, v_zs1_1353_, v___x_21806__boxed_1366_, v___x_21807__boxed_1367_, v___x_21808__boxed_1368_, v___x_1357_, v___x_1358_, v_zs2_1359_, v_ctorRet2_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec_ref(v_zs2_1359_);
lean_dec(v___x_1358_);
lean_dec(v___x_1349_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object* v___x_1370_, lean_object* v___x_1371_, lean_object* v___x_1372_, lean_object* v_motive_1373_, uint8_t v___x_1374_, uint8_t v___x_1375_, uint8_t v___x_1376_, lean_object* v___x_1377_, lean_object* v___x_1378_, lean_object* v_a_1379_, lean_object* v_zs1_1380_, lean_object* v_ctorRet1_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_inc_ref(v___x_1370_);
v___x_1387_ = l_Lean_mkAppN(v___x_1370_, v_zs1_1380_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
v___x_1388_ = lean_whnf(v_ctorRet1_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v_dummy_1390_; lean_object* v_nargs_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___f_1402_; lean_object* v___x_1403_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1388_, 1);
v_dummy_1390_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1);
v_nargs_1391_ = l_Lean_Expr_getAppNumArgs(v_a_1389_);
lean_inc(v_nargs_1391_);
v___x_1392_ = lean_mk_array(v_nargs_1391_, v_dummy_1390_);
v___x_1393_ = lean_nat_sub(v_nargs_1391_, v___x_1371_);
lean_dec(v_nargs_1391_);
v___x_1394_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1389_, v___x_1392_, v___x_1393_);
v___x_1395_ = lean_array_get_size(v___x_1394_);
lean_inc(v___x_1372_);
v___x_1396_ = l_Array_toSubarray___redArg(v___x_1394_, v___x_1372_, v___x_1395_);
v___x_1397_ = l_Subarray_copy___redArg(v___x_1396_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1387_);
v___x_1399_ = lean_box(v___x_1374_);
v___x_1400_ = lean_box(v___x_1375_);
v___x_1401_ = lean_box(v___x_1376_);
v___f_1402_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed), 19, 12);
lean_closure_set(v___f_1402_, 0, v___x_1370_);
lean_closure_set(v___f_1402_, 1, v_dummy_1390_);
lean_closure_set(v___f_1402_, 2, v___x_1371_);
lean_closure_set(v___f_1402_, 3, v___x_1372_);
lean_closure_set(v___f_1402_, 4, v___x_1398_);
lean_closure_set(v___f_1402_, 5, v_motive_1373_);
lean_closure_set(v___f_1402_, 6, v_zs1_1380_);
lean_closure_set(v___f_1402_, 7, v___x_1399_);
lean_closure_set(v___f_1402_, 8, v___x_1400_);
lean_closure_set(v___f_1402_, 9, v___x_1401_);
lean_closure_set(v___f_1402_, 10, v___x_1377_);
lean_closure_set(v___f_1402_, 11, v___x_1378_);
v___x_1403_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1379_, v___f_1402_, v___x_1374_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
return v___x_1403_;
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v___x_1387_);
lean_dec_ref(v_zs1_1380_);
lean_dec_ref(v_a_1379_);
lean_dec(v___x_1378_);
lean_dec(v___x_1377_);
lean_dec_ref(v_motive_1373_);
lean_dec(v___x_1372_);
lean_dec(v___x_1371_);
lean_dec_ref(v___x_1370_);
v_a_1404_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1388_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1388_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1412_ = _args[0];
lean_object* v___x_1413_ = _args[1];
lean_object* v___x_1414_ = _args[2];
lean_object* v_motive_1415_ = _args[3];
lean_object* v___x_1416_ = _args[4];
lean_object* v___x_1417_ = _args[5];
lean_object* v___x_1418_ = _args[6];
lean_object* v___x_1419_ = _args[7];
lean_object* v___x_1420_ = _args[8];
lean_object* v_a_1421_ = _args[9];
lean_object* v_zs1_1422_ = _args[10];
lean_object* v_ctorRet1_1423_ = _args[11];
lean_object* v___y_1424_ = _args[12];
lean_object* v___y_1425_ = _args[13];
lean_object* v___y_1426_ = _args[14];
lean_object* v___y_1427_ = _args[15];
lean_object* v___y_1428_ = _args[16];
_start:
{
uint8_t v___x_21954__boxed_1429_; uint8_t v___x_21955__boxed_1430_; uint8_t v___x_21956__boxed_1431_; lean_object* v_res_1432_; 
v___x_21954__boxed_1429_ = lean_unbox(v___x_1416_);
v___x_21955__boxed_1430_ = lean_unbox(v___x_1417_);
v___x_21956__boxed_1431_ = lean_unbox(v___x_1418_);
v_res_1432_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(v___x_1412_, v___x_1413_, v___x_1414_, v_motive_1415_, v___x_21954__boxed_1429_, v___x_21955__boxed_1430_, v___x_21956__boxed_1431_, v___x_1419_, v___x_1420_, v_a_1421_, v_zs1_1422_, v_ctorRet1_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object* v_tail_1433_, lean_object* v_params_1434_, lean_object* v___x_1435_, lean_object* v_motive_1436_, size_t v_sz_1437_, size_t v_i_1438_, lean_object* v_bs_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
uint8_t v___x_1445_; 
v___x_1445_ = lean_usize_dec_lt(v_i_1438_, v_sz_1437_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
lean_dec_ref(v_motive_1436_);
lean_dec(v___x_1435_);
lean_dec(v_tail_1433_);
v___x_1446_ = l_unsafeCast___redArg(v_bs_1439_);
lean_dec_ref(v_bs_1439_);
v___x_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
return v___x_1447_;
}
else
{
uint8_t v___x_1448_; uint8_t v___x_1449_; lean_object* v___x_1450_; lean_object* v_v_1451_; lean_object* v___x_1452_; lean_object* v_bs_x27_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1448_ = 0;
v___x_1449_ = 1;
v___x_1450_ = lean_unsigned_to_nat(1u);
v_v_1451_ = lean_array_uget(v_bs_1439_, v_i_1438_);
v___x_1452_ = lean_unsigned_to_nat(0u);
v_bs_x27_1453_ = lean_array_uset(v_bs_1439_, v_i_1438_, v___x_1452_);
v___x_1454_ = lean_usize_to_nat(v_i_1438_);
v___x_1455_ = l_unsafeCast___redArg(v_v_1451_);
lean_dec(v_v_1451_);
lean_inc(v_tail_1433_);
lean_inc(v___x_1455_);
v___x_1456_ = l_Lean_mkConst(v___x_1455_, v_tail_1433_);
v___x_1457_ = l_Lean_mkAppN(v___x_1456_, v_params_1434_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc_ref(v___x_1457_);
v___x_1458_ = lean_infer_type(v___x_1457_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc_n(v_a_1459_, 2);
lean_dec_ref_known(v___x_1458_, 1);
v___x_1460_ = lean_box(v___x_1448_);
v___x_1461_ = lean_box(v___x_1445_);
v___x_1462_ = lean_box(v___x_1449_);
lean_inc_ref(v_motive_1436_);
lean_inc(v___x_1435_);
v___f_1463_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_1463_, 0, v___x_1457_);
lean_closure_set(v___f_1463_, 1, v___x_1450_);
lean_closure_set(v___f_1463_, 2, v___x_1435_);
lean_closure_set(v___f_1463_, 3, v_motive_1436_);
lean_closure_set(v___f_1463_, 4, v___x_1460_);
lean_closure_set(v___f_1463_, 5, v___x_1461_);
lean_closure_set(v___f_1463_, 6, v___x_1462_);
lean_closure_set(v___f_1463_, 7, v___x_1455_);
lean_closure_set(v___f_1463_, 8, v___x_1454_);
lean_closure_set(v___f_1463_, 9, v_a_1459_);
v___x_1464_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1459_, v___f_1463_, v___x_1448_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; size_t v___x_1466_; size_t v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = ((size_t)1ULL);
v___x_1467_ = lean_usize_add(v_i_1438_, v___x_1466_);
v___x_1468_ = l_unsafeCast___redArg(v_a_1465_);
lean_dec(v_a_1465_);
v___x_1469_ = lean_array_uset(v_bs_x27_1453_, v_i_1438_, v___x_1468_);
v_i_1438_ = v___x_1467_;
v_bs_1439_ = v___x_1469_;
goto _start;
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v_bs_x27_1453_);
lean_dec_ref(v_motive_1436_);
lean_dec(v___x_1435_);
lean_dec(v_tail_1433_);
v_a_1471_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1464_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1464_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___x_1457_);
lean_dec(v___x_1455_);
lean_dec(v___x_1454_);
lean_dec_ref(v_bs_x27_1453_);
lean_dec_ref(v_motive_1436_);
lean_dec(v___x_1435_);
lean_dec(v_tail_1433_);
v_a_1479_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1458_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1458_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object* v_tail_1487_, lean_object* v_params_1488_, lean_object* v___x_1489_, lean_object* v_motive_1490_, lean_object* v_sz_1491_, lean_object* v_i_1492_, lean_object* v_bs_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
size_t v_sz_boxed_1499_; size_t v_i_boxed_1500_; lean_object* v_res_1501_; 
v_sz_boxed_1499_ = lean_unbox_usize(v_sz_1491_);
lean_dec(v_sz_1491_);
v_i_boxed_1500_ = lean_unbox_usize(v_i_1492_);
lean_dec(v_i_1492_);
v_res_1501_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1487_, v_params_1488_, v___x_1489_, v_motive_1490_, v_sz_boxed_1499_, v_i_boxed_1500_, v_bs_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec_ref(v_params_1488_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object* v_tail_1502_, lean_object* v_params_1503_, lean_object* v___x_1504_, lean_object* v_motive_1505_, lean_object* v_as_1506_, size_t v_sz_1507_, size_t v_i_1508_, lean_object* v_bs_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1502_, v_params_1503_, v___x_1504_, v_motive_1505_, v_sz_1507_, v_i_1508_, v_bs_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object* v_tail_1516_, lean_object* v_params_1517_, lean_object* v___x_1518_, lean_object* v_motive_1519_, lean_object* v_as_1520_, lean_object* v_sz_1521_, lean_object* v_i_1522_, lean_object* v_bs_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
size_t v_sz_boxed_1529_; size_t v_i_boxed_1530_; lean_object* v_res_1531_; 
v_sz_boxed_1529_ = lean_unbox_usize(v_sz_1521_);
lean_dec(v_sz_1521_);
v_i_boxed_1530_ = lean_unbox_usize(v_i_1522_);
lean_dec(v_i_1522_);
v_res_1531_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(v_tail_1516_, v_params_1517_, v___x_1518_, v_motive_1519_, v_as_1520_, v_sz_boxed_1529_, v_i_boxed_1530_, v_bs_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec_ref(v_as_1520_);
lean_dec_ref(v_params_1517_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object* v_ctors_1532_, lean_object* v_indName_1533_, lean_object* v_tail_1534_, lean_object* v_params_1535_, lean_object* v_ism1_1536_, lean_object* v_ism2_1537_, lean_object* v___x_1538_, uint8_t v___x_1539_, uint8_t v___x_1540_, uint8_t v___x_1541_, lean_object* v_name_1542_, lean_object* v___x_1543_, lean_object* v_numParams_1544_, lean_object* v_val_1545_, lean_object* v___x_1546_, lean_object* v___x_1547_, lean_object* v_motive_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___f_1558_; size_t v_sz_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_19838__overap_1564_; lean_object* v___x_1565_; 
v___x_1554_ = lean_array_mk(v_ctors_1532_);
v___x_1555_ = lean_box(v___x_1539_);
v___x_1556_ = lean_box(v___x_1540_);
v___x_1557_ = lean_box(v___x_1541_);
lean_inc(v_numParams_1544_);
lean_inc_ref(v___x_1554_);
lean_inc_ref(v_motive_1548_);
lean_inc_ref(v_params_1535_);
lean_inc(v_tail_1534_);
v___f_1558_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__1___boxed), 23, 17);
lean_closure_set(v___f_1558_, 0, v_indName_1533_);
lean_closure_set(v___f_1558_, 1, v_tail_1534_);
lean_closure_set(v___f_1558_, 2, v_params_1535_);
lean_closure_set(v___f_1558_, 3, v_ism1_1536_);
lean_closure_set(v___f_1558_, 4, v_ism2_1537_);
lean_closure_set(v___f_1558_, 5, v_motive_1548_);
lean_closure_set(v___f_1558_, 6, v___x_1538_);
lean_closure_set(v___f_1558_, 7, v___x_1555_);
lean_closure_set(v___f_1558_, 8, v___x_1556_);
lean_closure_set(v___f_1558_, 9, v___x_1557_);
lean_closure_set(v___f_1558_, 10, v_name_1542_);
lean_closure_set(v___f_1558_, 11, v___x_1543_);
lean_closure_set(v___f_1558_, 12, v___x_1554_);
lean_closure_set(v___f_1558_, 13, v_numParams_1544_);
lean_closure_set(v___f_1558_, 14, v_val_1545_);
lean_closure_set(v___f_1558_, 15, v___x_1546_);
lean_closure_set(v___f_1558_, 16, v___x_1547_);
v_sz_1559_ = lean_array_size(v___x_1554_);
v___x_1560_ = l_unsafeCast___redArg(v___x_1554_);
v___x_1561_ = lean_box_usize(v_sz_1559_);
v___x_1562_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1));
v___x_1563_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed), 13, 8);
lean_closure_set(v___x_1563_, 0, v_tail_1534_);
lean_closure_set(v___x_1563_, 1, v_params_1535_);
lean_closure_set(v___x_1563_, 2, v_numParams_1544_);
lean_closure_set(v___x_1563_, 3, v_motive_1548_);
lean_closure_set(v___x_1563_, 4, v___x_1554_);
lean_closure_set(v___x_1563_, 5, v___x_1561_);
lean_closure_set(v___x_1563_, 6, v___x_1562_);
lean_closure_set(v___x_1563_, 7, v___x_1560_);
v___x_19838__overap_1564_ = l_unsafeCast___redArg(v___x_1563_);
lean_dec_ref(v___x_1563_);
lean_inc(v___y_1552_);
lean_inc_ref(v___y_1551_);
lean_inc(v___y_1550_);
lean_inc_ref(v___y_1549_);
v___x_1565_ = lean_apply_5(v___x_19838__overap_1564_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, lean_box(0));
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; uint8_t v___x_1567_; lean_object* v___x_1568_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1567_ = 0;
v___x_1568_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_a_1566_, v___f_1558_, v___x_1567_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v_a_1566_);
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec_ref(v___f_1558_);
v_a_1569_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1565_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1565_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object** _args){
lean_object* v_ctors_1577_ = _args[0];
lean_object* v_indName_1578_ = _args[1];
lean_object* v_tail_1579_ = _args[2];
lean_object* v_params_1580_ = _args[3];
lean_object* v_ism1_1581_ = _args[4];
lean_object* v_ism2_1582_ = _args[5];
lean_object* v___x_1583_ = _args[6];
lean_object* v___x_1584_ = _args[7];
lean_object* v___x_1585_ = _args[8];
lean_object* v___x_1586_ = _args[9];
lean_object* v_name_1587_ = _args[10];
lean_object* v___x_1588_ = _args[11];
lean_object* v_numParams_1589_ = _args[12];
lean_object* v_val_1590_ = _args[13];
lean_object* v___x_1591_ = _args[14];
lean_object* v___x_1592_ = _args[15];
lean_object* v_motive_1593_ = _args[16];
lean_object* v___y_1594_ = _args[17];
lean_object* v___y_1595_ = _args[18];
lean_object* v___y_1596_ = _args[19];
lean_object* v___y_1597_ = _args[20];
lean_object* v___y_1598_ = _args[21];
_start:
{
uint8_t v___x_22167__boxed_1599_; uint8_t v___x_22168__boxed_1600_; uint8_t v___x_22169__boxed_1601_; lean_object* v_res_1602_; 
v___x_22167__boxed_1599_ = lean_unbox(v___x_1584_);
v___x_22168__boxed_1600_ = lean_unbox(v___x_1585_);
v___x_22169__boxed_1601_ = lean_unbox(v___x_1586_);
v_res_1602_ = l_Lean_mkCasesOnSameCtorHet___lam__2(v_ctors_1577_, v_indName_1578_, v_tail_1579_, v_params_1580_, v_ism1_1581_, v_ism2_1582_, v___x_1583_, v___x_22167__boxed_1599_, v___x_22168__boxed_1600_, v___x_22169__boxed_1601_, v_name_1587_, v___x_1588_, v_numParams_1589_, v_val_1590_, v___x_1591_, v___x_1592_, v_motive_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object* v_ism1_1606_, lean_object* v_head_1607_, lean_object* v_ctors_1608_, lean_object* v_indName_1609_, lean_object* v_tail_1610_, lean_object* v_params_1611_, lean_object* v_name_1612_, lean_object* v___x_1613_, lean_object* v_numParams_1614_, lean_object* v_val_1615_, lean_object* v___x_1616_, lean_object* v___x_1617_, lean_object* v_ism2_1618_, lean_object* v_x_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; uint8_t v___x_1628_; uint8_t v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___f_1633_; lean_object* v___x_1634_; 
lean_inc_ref(v_ism1_1606_);
v___x_1625_ = l_Array_append___redArg(v_ism1_1606_, v_ism2_1618_);
v___x_1626_ = l_Lean_mkSort(v_head_1607_);
v___x_1627_ = 0;
v___x_1628_ = 1;
v___x_1629_ = 1;
v___x_1630_ = lean_box(v___x_1627_);
v___x_1631_ = lean_box(v___x_1628_);
v___x_1632_ = lean_box(v___x_1629_);
lean_inc_ref(v___x_1625_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__2___boxed), 22, 16);
lean_closure_set(v___f_1633_, 0, v_ctors_1608_);
lean_closure_set(v___f_1633_, 1, v_indName_1609_);
lean_closure_set(v___f_1633_, 2, v_tail_1610_);
lean_closure_set(v___f_1633_, 3, v_params_1611_);
lean_closure_set(v___f_1633_, 4, v_ism1_1606_);
lean_closure_set(v___f_1633_, 5, v_ism2_1618_);
lean_closure_set(v___f_1633_, 6, v___x_1625_);
lean_closure_set(v___f_1633_, 7, v___x_1630_);
lean_closure_set(v___f_1633_, 8, v___x_1631_);
lean_closure_set(v___f_1633_, 9, v___x_1632_);
lean_closure_set(v___f_1633_, 10, v_name_1612_);
lean_closure_set(v___f_1633_, 11, v___x_1613_);
lean_closure_set(v___f_1633_, 12, v_numParams_1614_);
lean_closure_set(v___f_1633_, 13, v_val_1615_);
lean_closure_set(v___f_1633_, 14, v___x_1616_);
lean_closure_set(v___f_1633_, 15, v___x_1617_);
v___x_1634_ = l_Lean_Meta_mkForallFVars(v___x_1625_, v___x_1626_, v___x_1627_, v___x_1628_, v___x_1628_, v___x_1629_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_a_1635_);
lean_dec_ref_known(v___x_1634_, 1);
v___x_1636_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_1637_ = 0;
v___x_1638_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_1636_, v___x_1629_, v_a_1635_, v___f_1633_, v___x_1637_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
return v___x_1638_;
}
else
{
lean_dec_ref(v___f_1633_);
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object** _args){
lean_object* v_ism1_1639_ = _args[0];
lean_object* v_head_1640_ = _args[1];
lean_object* v_ctors_1641_ = _args[2];
lean_object* v_indName_1642_ = _args[3];
lean_object* v_tail_1643_ = _args[4];
lean_object* v_params_1644_ = _args[5];
lean_object* v_name_1645_ = _args[6];
lean_object* v___x_1646_ = _args[7];
lean_object* v_numParams_1647_ = _args[8];
lean_object* v_val_1648_ = _args[9];
lean_object* v___x_1649_ = _args[10];
lean_object* v___x_1650_ = _args[11];
lean_object* v_ism2_1651_ = _args[12];
lean_object* v_x_1652_ = _args[13];
lean_object* v___y_1653_ = _args[14];
lean_object* v___y_1654_ = _args[15];
lean_object* v___y_1655_ = _args[16];
lean_object* v___y_1656_ = _args[17];
lean_object* v___y_1657_ = _args[18];
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_Lean_mkCasesOnSameCtorHet___lam__3(v_ism1_1639_, v_head_1640_, v_ctors_1641_, v_indName_1642_, v_tail_1643_, v_params_1644_, v_name_1645_, v___x_1646_, v_numParams_1647_, v_val_1648_, v___x_1649_, v___x_1650_, v_ism2_1651_, v_x_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec_ref(v_x_1652_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object* v_head_1659_, lean_object* v_ctors_1660_, lean_object* v_indName_1661_, lean_object* v_tail_1662_, lean_object* v_params_1663_, lean_object* v_name_1664_, lean_object* v___x_1665_, lean_object* v_numParams_1666_, lean_object* v_val_1667_, lean_object* v___x_1668_, lean_object* v___x_1669_, lean_object* v_t_1670_, lean_object* v___x_1671_, lean_object* v_ism1_1672_, lean_object* v_x_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v___f_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; 
v___f_1679_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__3___boxed), 19, 12);
lean_closure_set(v___f_1679_, 0, v_ism1_1672_);
lean_closure_set(v___f_1679_, 1, v_head_1659_);
lean_closure_set(v___f_1679_, 2, v_ctors_1660_);
lean_closure_set(v___f_1679_, 3, v_indName_1661_);
lean_closure_set(v___f_1679_, 4, v_tail_1662_);
lean_closure_set(v___f_1679_, 5, v_params_1663_);
lean_closure_set(v___f_1679_, 6, v_name_1664_);
lean_closure_set(v___f_1679_, 7, v___x_1665_);
lean_closure_set(v___f_1679_, 8, v_numParams_1666_);
lean_closure_set(v___f_1679_, 9, v_val_1667_);
lean_closure_set(v___f_1679_, 10, v___x_1668_);
lean_closure_set(v___f_1679_, 11, v___x_1669_);
v___x_1680_ = 0;
v___x_1681_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1670_, v___x_1671_, v___f_1679_, v___x_1680_, v___x_1680_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object** _args){
lean_object* v_head_1682_ = _args[0];
lean_object* v_ctors_1683_ = _args[1];
lean_object* v_indName_1684_ = _args[2];
lean_object* v_tail_1685_ = _args[3];
lean_object* v_params_1686_ = _args[4];
lean_object* v_name_1687_ = _args[5];
lean_object* v___x_1688_ = _args[6];
lean_object* v_numParams_1689_ = _args[7];
lean_object* v_val_1690_ = _args[8];
lean_object* v___x_1691_ = _args[9];
lean_object* v___x_1692_ = _args[10];
lean_object* v_t_1693_ = _args[11];
lean_object* v___x_1694_ = _args[12];
lean_object* v_ism1_1695_ = _args[13];
lean_object* v_x_1696_ = _args[14];
lean_object* v___y_1697_ = _args[15];
lean_object* v___y_1698_ = _args[16];
lean_object* v___y_1699_ = _args[17];
lean_object* v___y_1700_ = _args[18];
lean_object* v___y_1701_ = _args[19];
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_mkCasesOnSameCtorHet___lam__4(v_head_1682_, v_ctors_1683_, v_indName_1684_, v_tail_1685_, v_params_1686_, v_name_1687_, v___x_1688_, v_numParams_1689_, v_val_1690_, v___x_1691_, v___x_1692_, v_t_1693_, v___x_1694_, v_ism1_1695_, v_x_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v_x_1696_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object* v_numIndices_1703_, lean_object* v___x_1704_, lean_object* v_head_1705_, lean_object* v_ctors_1706_, lean_object* v_indName_1707_, lean_object* v_tail_1708_, lean_object* v_params_1709_, lean_object* v_name_1710_, lean_object* v___x_1711_, lean_object* v_numParams_1712_, lean_object* v_val_1713_, lean_object* v___x_1714_, lean_object* v_x_1715_, lean_object* v_t_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___f_1724_; uint8_t v___x_1725_; lean_object* v___x_1726_; 
v___x_1722_ = lean_nat_add(v_numIndices_1703_, v___x_1704_);
v___x_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
lean_inc_ref(v___x_1723_);
lean_inc_ref(v_t_1716_);
v___f_1724_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__4___boxed), 20, 13);
lean_closure_set(v___f_1724_, 0, v_head_1705_);
lean_closure_set(v___f_1724_, 1, v_ctors_1706_);
lean_closure_set(v___f_1724_, 2, v_indName_1707_);
lean_closure_set(v___f_1724_, 3, v_tail_1708_);
lean_closure_set(v___f_1724_, 4, v_params_1709_);
lean_closure_set(v___f_1724_, 5, v_name_1710_);
lean_closure_set(v___f_1724_, 6, v___x_1711_);
lean_closure_set(v___f_1724_, 7, v_numParams_1712_);
lean_closure_set(v___f_1724_, 8, v_val_1713_);
lean_closure_set(v___f_1724_, 9, v___x_1714_);
lean_closure_set(v___f_1724_, 10, v___x_1704_);
lean_closure_set(v___f_1724_, 11, v_t_1716_);
lean_closure_set(v___f_1724_, 12, v___x_1723_);
v___x_1725_ = 0;
v___x_1726_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1716_, v___x_1723_, v___f_1724_, v___x_1725_, v___x_1725_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_1727_ = _args[0];
lean_object* v___x_1728_ = _args[1];
lean_object* v_head_1729_ = _args[2];
lean_object* v_ctors_1730_ = _args[3];
lean_object* v_indName_1731_ = _args[4];
lean_object* v_tail_1732_ = _args[5];
lean_object* v_params_1733_ = _args[6];
lean_object* v_name_1734_ = _args[7];
lean_object* v___x_1735_ = _args[8];
lean_object* v_numParams_1736_ = _args[9];
lean_object* v_val_1737_ = _args[10];
lean_object* v___x_1738_ = _args[11];
lean_object* v_x_1739_ = _args[12];
lean_object* v_t_1740_ = _args[13];
lean_object* v___y_1741_ = _args[14];
lean_object* v___y_1742_ = _args[15];
lean_object* v___y_1743_ = _args[16];
lean_object* v___y_1744_ = _args[17];
lean_object* v___y_1745_ = _args[18];
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_mkCasesOnSameCtorHet___lam__5(v_numIndices_1727_, v___x_1728_, v_head_1729_, v_ctors_1730_, v_indName_1731_, v_tail_1732_, v_params_1733_, v_name_1734_, v___x_1735_, v_numParams_1736_, v_val_1737_, v___x_1738_, v_x_1739_, v_t_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec_ref(v_x_1739_);
lean_dec(v_numIndices_1727_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object* v_numIndices_1749_, lean_object* v_head_1750_, lean_object* v_ctors_1751_, lean_object* v_indName_1752_, lean_object* v_tail_1753_, lean_object* v_name_1754_, lean_object* v___x_1755_, lean_object* v_numParams_1756_, lean_object* v_val_1757_, lean_object* v___x_1758_, lean_object* v_params_1759_, lean_object* v_t_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; lean_object* v___x_1770_; 
v___x_1766_ = lean_unsigned_to_nat(1u);
v___f_1767_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__5___boxed), 19, 12);
lean_closure_set(v___f_1767_, 0, v_numIndices_1749_);
lean_closure_set(v___f_1767_, 1, v___x_1766_);
lean_closure_set(v___f_1767_, 2, v_head_1750_);
lean_closure_set(v___f_1767_, 3, v_ctors_1751_);
lean_closure_set(v___f_1767_, 4, v_indName_1752_);
lean_closure_set(v___f_1767_, 5, v_tail_1753_);
lean_closure_set(v___f_1767_, 6, v_params_1759_);
lean_closure_set(v___f_1767_, 7, v_name_1754_);
lean_closure_set(v___f_1767_, 8, v___x_1755_);
lean_closure_set(v___f_1767_, 9, v_numParams_1756_);
lean_closure_set(v___f_1767_, 10, v_val_1757_);
lean_closure_set(v___f_1767_, 11, v___x_1758_);
v___x_1768_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
v___x_1769_ = 0;
v___x_1770_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1760_, v___x_1768_, v___f_1767_, v___x_1769_, v___x_1769_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object** _args){
lean_object* v_numIndices_1771_ = _args[0];
lean_object* v_head_1772_ = _args[1];
lean_object* v_ctors_1773_ = _args[2];
lean_object* v_indName_1774_ = _args[3];
lean_object* v_tail_1775_ = _args[4];
lean_object* v_name_1776_ = _args[5];
lean_object* v___x_1777_ = _args[6];
lean_object* v_numParams_1778_ = _args[7];
lean_object* v_val_1779_ = _args[8];
lean_object* v___x_1780_ = _args[9];
lean_object* v_params_1781_ = _args[10];
lean_object* v_t_1782_ = _args[11];
lean_object* v___y_1783_ = _args[12];
lean_object* v___y_1784_ = _args[13];
lean_object* v___y_1785_ = _args[14];
lean_object* v___y_1786_ = _args[15];
lean_object* v___y_1787_ = _args[16];
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_mkCasesOnSameCtorHet___lam__6(v_numIndices_1771_, v_head_1772_, v_ctors_1773_, v_indName_1774_, v_tail_1775_, v_name_1776_, v___x_1777_, v_numParams_1778_, v_val_1779_, v___x_1780_, v_params_1781_, v_t_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object* v_a_1789_, lean_object* v_declName_1790_, lean_object* v_levelParams_1791_, uint8_t v___x_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v___x_1798_; 
lean_inc(v___y_1796_);
lean_inc_ref(v___y_1795_);
lean_inc_ref(v_a_1789_);
v___x_1798_ = lean_infer_type(v_a_1789_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1810_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1800_ = lean_box(1);
v___x_1801_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_1790_, v_levelParams_1791_, v_a_1799_, v_a_1789_, v___x_1800_, v___y_1796_);
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1804_ = v___x_1801_;
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1801_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set_tag(v___x_1804_, 1);
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lean_addDecl(v___x_1807_, v___x_1792_, v___y_1795_, v___y_1796_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
return v___x_1808_;
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v_levelParams_1791_);
lean_dec(v_declName_1790_);
lean_dec_ref(v_a_1789_);
v_a_1811_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1798_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1798_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object* v_a_1819_, lean_object* v_declName_1820_, lean_object* v_levelParams_1821_, lean_object* v___x_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
uint8_t v___x_22464__boxed_1828_; lean_object* v_res_1829_; 
v___x_22464__boxed_1828_ = lean_unbox(v___x_1822_);
v_res_1829_ = l_Lean_mkCasesOnSameCtorHet___lam__7(v_a_1819_, v_declName_1820_, v_levelParams_1821_, v___x_22464__boxed_1828_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
if (lean_obj_tag(v_a_1830_) == 0)
{
lean_object* v___x_1832_; 
v___x_1832_ = l_List_reverse___redArg(v_a_1831_);
return v___x_1832_;
}
else
{
lean_object* v_head_1833_; lean_object* v_tail_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1843_; 
v_head_1833_ = lean_ctor_get(v_a_1830_, 0);
v_tail_1834_ = lean_ctor_get(v_a_1830_, 1);
v_isSharedCheck_1843_ = !lean_is_exclusive(v_a_1830_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1836_ = v_a_1830_;
v_isShared_1837_ = v_isSharedCheck_1843_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_tail_1834_);
lean_inc(v_head_1833_);
lean_dec(v_a_1830_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1843_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1840_; 
v___x_1838_ = l_Lean_mkLevelParam(v_head_1833_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_a_1831_);
lean_ctor_set(v___x_1836_, 0, v___x_1838_);
v___x_1840_ = v___x_1836_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1842_, 1, v_a_1831_);
v___x_1840_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
v_a_1830_ = v_tail_1834_;
v_a_1831_ = v___x_1840_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object* v_msgData_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v_env_1851_; lean_object* v___x_1852_; lean_object* v_toCold_1853_; lean_object* v_mctx_1854_; lean_object* v_lctx_1855_; lean_object* v_options_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1850_ = lean_st_ref_get(v___y_1848_);
v_env_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc_ref(v_env_1851_);
lean_dec(v___x_1850_);
v___x_1852_ = lean_st_ref_get(v___y_1846_);
v_toCold_1853_ = lean_ctor_get(v___y_1847_, 0);
v_mctx_1854_ = lean_ctor_get(v___x_1852_, 0);
lean_inc_ref(v_mctx_1854_);
lean_dec(v___x_1852_);
v_lctx_1855_ = lean_ctor_get(v___y_1845_, 2);
v_options_1856_ = lean_ctor_get(v_toCold_1853_, 2);
lean_inc_ref(v_options_1856_);
lean_inc_ref(v_lctx_1855_);
v___x_1857_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1857_, 0, v_env_1851_);
lean_ctor_set(v___x_1857_, 1, v_mctx_1854_);
lean_ctor_set(v___x_1857_, 2, v_lctx_1855_);
lean_ctor_set(v___x_1857_, 3, v_options_1856_);
v___x_1858_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
lean_ctor_set(v___x_1858_, 1, v_msgData_1844_);
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object* v_msgData_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msgData_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object* v_msg_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_ref_1873_; lean_object* v___x_1874_; lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1883_; 
v_ref_1873_ = lean_ctor_get(v___y_1870_, 2);
v___x_1874_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msg_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1883_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1883_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; lean_object* v___x_1881_; 
lean_inc(v_ref_1873_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v_ref_1873_);
lean_ctor_set(v___x_1879_, 1, v_a_1875_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set_tag(v___x_1877_, 1);
lean_ctor_set(v___x_1877_, 0, v___x_1879_);
v___x_1881_ = v___x_1877_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object* v_msg_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object* v_ref_1891_, lean_object* v_msg_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_toCold_1898_; lean_object* v_currRecDepth_1899_; lean_object* v_ref_1900_; uint8_t v_diag_1901_; uint8_t v_suppressElabErrors_1902_; lean_object* v_ref_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v_toCold_1898_ = lean_ctor_get(v___y_1895_, 0);
v_currRecDepth_1899_ = lean_ctor_get(v___y_1895_, 1);
v_ref_1900_ = lean_ctor_get(v___y_1895_, 2);
v_diag_1901_ = lean_ctor_get_uint8(v___y_1895_, sizeof(void*)*3);
v_suppressElabErrors_1902_ = lean_ctor_get_uint8(v___y_1895_, sizeof(void*)*3 + 1);
v_ref_1903_ = l_Lean_replaceRef(v_ref_1891_, v_ref_1900_);
lean_inc(v_currRecDepth_1899_);
lean_inc_ref(v_toCold_1898_);
v___x_1904_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1904_, 0, v_toCold_1898_);
lean_ctor_set(v___x_1904_, 1, v_currRecDepth_1899_);
lean_ctor_set(v___x_1904_, 2, v_ref_1903_);
lean_ctor_set_uint8(v___x_1904_, sizeof(void*)*3, v_diag_1901_);
lean_ctor_set_uint8(v___x_1904_, sizeof(void*)*3 + 1, v_suppressElabErrors_1902_);
v___x_1905_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1892_, v___y_1893_, v___y_1894_, v___x_1904_, v___y_1896_);
lean_dec_ref_known(v___x_1904_, 3);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object* v_ref_1906_, lean_object* v_msg_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1906_, v_msg_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v_ref_1906_);
return v_res_1913_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
return v___x_1915_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1916_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1917_ = lean_unsigned_to_nat(0u);
v___x_1918_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
lean_ctor_set(v___x_1918_, 1, v___x_1917_);
lean_ctor_set(v___x_1918_, 2, v___x_1917_);
lean_ctor_set(v___x_1918_, 3, v___x_1917_);
lean_ctor_set(v___x_1918_, 4, v___x_1916_);
lean_ctor_set(v___x_1918_, 5, v___x_1916_);
lean_ctor_set(v___x_1918_, 6, v___x_1916_);
lean_ctor_set(v___x_1918_, 7, v___x_1916_);
lean_ctor_set(v___x_1918_, 8, v___x_1916_);
lean_ctor_set(v___x_1918_, 9, v___x_1916_);
lean_ctor_set(v___x_1918_, 10, v___x_1916_);
return v___x_1918_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2(void){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = lean_unsigned_to_nat(32u);
v___x_1920_ = lean_mk_empty_array_with_capacity(v___x_1919_);
v___x_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1920_);
return v___x_1921_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3(void){
_start:
{
size_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1922_ = ((size_t)5ULL);
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = lean_unsigned_to_nat(32u);
v___x_1925_ = lean_mk_empty_array_with_capacity(v___x_1924_);
v___x_1926_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2);
v___x_1927_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
lean_ctor_set(v___x_1927_, 1, v___x_1925_);
lean_ctor_set(v___x_1927_, 2, v___x_1923_);
lean_ctor_set(v___x_1927_, 3, v___x_1923_);
lean_ctor_set_usize(v___x_1927_, 4, v___x_1922_);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1928_ = lean_box(1);
v___x_1929_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3);
v___x_1930_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1931_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
lean_ctor_set(v___x_1931_, 1, v___x_1929_);
lean_ctor_set(v___x_1931_, 2, v___x_1928_);
return v___x_1931_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5));
v___x_1934_ = l_Lean_stringToMessageData(v___x_1933_);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7));
v___x_1937_ = l_Lean_stringToMessageData(v___x_1936_);
return v___x_1937_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9));
v___x_1940_ = l_Lean_stringToMessageData(v___x_1939_);
return v___x_1940_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11));
v___x_1943_ = l_Lean_stringToMessageData(v___x_1942_);
return v___x_1943_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13));
v___x_1946_ = l_Lean_stringToMessageData(v___x_1945_);
return v___x_1946_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15));
v___x_1949_ = l_Lean_stringToMessageData(v___x_1948_);
return v___x_1949_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17));
v___x_1952_ = l_Lean_stringToMessageData(v___x_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object* v_msg_1953_, lean_object* v_declHint_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v_env_1959_; uint8_t v___x_1960_; 
v___x_1957_ = l_Lean_instInhabitedName;
v___x_1958_ = lean_st_ref_get(v___y_1955_);
v_env_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc_ref(v_env_1959_);
lean_dec(v___x_1958_);
v___x_1960_ = l_Lean_Name_isAnonymous(v_declHint_1954_);
if (v___x_1960_ == 0)
{
uint8_t v_isExporting_1961_; 
v_isExporting_1961_ = lean_ctor_get_uint8(v_env_1959_, sizeof(void*)*8);
if (v_isExporting_1961_ == 0)
{
lean_object* v___x_1962_; 
lean_dec_ref(v_env_1959_);
lean_dec(v_declHint_1954_);
v___x_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1962_, 0, v_msg_1953_);
return v___x_1962_;
}
else
{
lean_object* v___x_1963_; uint8_t v___x_1964_; 
lean_inc_ref(v_env_1959_);
v___x_1963_ = l_Lean_Environment_setExporting(v_env_1959_, v___x_1960_);
lean_inc(v_declHint_1954_);
lean_inc_ref(v___x_1963_);
v___x_1964_ = l_Lean_Environment_contains(v___x_1963_, v_declHint_1954_, v_isExporting_1961_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_dec_ref(v___x_1963_);
lean_dec_ref(v_env_1959_);
lean_dec(v_declHint_1954_);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_msg_1953_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v_c_1971_; lean_object* v___x_1972_; 
v___x_1966_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1);
v___x_1967_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4);
v___x_1968_ = l_Lean_Options_empty;
v___x_1969_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1963_);
lean_ctor_set(v___x_1969_, 1, v___x_1966_);
lean_ctor_set(v___x_1969_, 2, v___x_1967_);
lean_ctor_set(v___x_1969_, 3, v___x_1968_);
lean_inc(v_declHint_1954_);
v___x_1970_ = l_Lean_MessageData_ofConstName(v_declHint_1954_, v___x_1960_);
v_c_1971_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1971_, 0, v___x_1969_);
lean_ctor_set(v_c_1971_, 1, v___x_1970_);
v___x_1972_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1959_, v_declHint_1954_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_dec_ref(v_env_1959_);
lean_dec(v_declHint_1954_);
v___x_1973_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
lean_ctor_set(v___x_1974_, 1, v_c_1971_);
v___x_1975_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8);
v___x_1976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1974_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___x_1977_ = l_Lean_MessageData_note(v___x_1976_);
v___x_1978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_msg_1953_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
return v___x_1979_;
}
else
{
lean_object* v_val_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2014_; 
v_val_1980_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_1982_ = v___x_1972_;
v_isShared_1983_ = v_isSharedCheck_2014_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_val_1980_);
lean_dec(v___x_1972_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2014_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v_mod_1986_; uint8_t v___x_1987_; 
v___x_1984_ = l_Lean_Environment_header(v_env_1959_);
lean_dec_ref(v_env_1959_);
v___x_1985_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1984_);
lean_dec_ref(v___x_1984_);
v_mod_1986_ = lean_array_get(v___x_1957_, v___x_1985_, v_val_1980_);
lean_dec(v_val_1980_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = l_Lean_isPrivateName(v_declHint_1954_);
lean_dec(v_declHint_1954_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___x_1988_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10);
v___x_1989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
lean_ctor_set(v___x_1989_, 1, v_c_1971_);
v___x_1990_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12);
v___x_1991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1989_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = l_Lean_MessageData_ofName(v_mod_1986_);
v___x_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14);
v___x_1995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1993_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = l_Lean_MessageData_note(v___x_1995_);
v___x_1997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1997_, 0, v_msg_1953_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set_tag(v___x_1982_, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1997_);
v___x_1999_ = v___x_1982_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
else
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_2002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
lean_ctor_set(v___x_2002_, 1, v_c_1971_);
v___x_2003_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16);
v___x_2004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2002_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
v___x_2005_ = l_Lean_MessageData_ofName(v_mod_1986_);
v___x_2006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2004_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18);
v___x_2008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = l_Lean_MessageData_note(v___x_2008_);
v___x_2010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2010_, 0, v_msg_1953_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set_tag(v___x_1982_, 0);
lean_ctor_set(v___x_1982_, 0, v___x_2010_);
v___x_2012_ = v___x_1982_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2015_; 
lean_dec_ref(v_env_1959_);
lean_dec(v_declHint_1954_);
v___x_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2015_, 0, v_msg_1953_);
return v___x_2015_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object* v_msg_2016_, lean_object* v_declHint_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2016_, v_declHint_2017_, v___y_2018_);
lean_dec(v___y_2018_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object* v_msg_2021_, lean_object* v_declHint_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2038_; 
v___x_2028_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2021_, v_declHint_2022_, v___y_2026_);
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2038_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2038_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2033_ = l_Lean_unknownIdentifierMessageTag;
v___x_2034_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
lean_ctor_set(v___x_2034_, 1, v_a_2029_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2034_);
v___x_2036_ = v___x_2031_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object* v_msg_2039_, lean_object* v_declHint_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_2039_, v_declHint_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object* v_ref_2047_, lean_object* v_msg_2048_, lean_object* v_declHint_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v___x_2055_; lean_object* v_a_2056_; lean_object* v___x_2057_; 
v___x_2055_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_2048_, v_declHint_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_a_2056_);
lean_dec_ref(v___x_2055_);
v___x_2057_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_2047_, v_a_2056_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object* v_ref_2058_, lean_object* v_msg_2059_, lean_object* v_declHint_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2058_, v_msg_2059_, v_declHint_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v_ref_2058_);
return v_res_2066_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0));
v___x_2069_ = l_Lean_stringToMessageData(v___x_2068_);
return v___x_2069_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2));
v___x_2072_ = l_Lean_stringToMessageData(v___x_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object* v_ref_2073_, lean_object* v_constName_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v___x_2080_; uint8_t v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2080_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1);
v___x_2081_ = 0;
lean_inc(v_constName_2074_);
v___x_2082_ = l_Lean_MessageData_ofConstName(v_constName_2074_, v___x_2081_);
v___x_2083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2080_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
v___x_2086_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2073_, v___x_2085_, v_constName_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object* v_ref_2087_, lean_object* v_constName_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2087_, v_constName_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
lean_dec(v_ref_2087_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object* v_constName_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_ref_2101_; lean_object* v___x_2102_; 
v_ref_2101_ = lean_ctor_get(v___y_2098_, 2);
v___x_2102_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2101_, v_constName_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object* v_constName_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; lean_object* v_env_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; 
v___x_2116_ = lean_st_ref_get(v___y_2114_);
v_env_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc_ref(v_env_2117_);
lean_dec(v___x_2116_);
v___x_2118_ = 0;
lean_inc(v_constName_2110_);
v___x_2119_ = l_Lean_Environment_findConstVal_x3f(v_env_2117_, v_constName_2110_, v___x_2118_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
return v___x_2120_;
}
else
{
lean_object* v_val_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_constName_2110_);
v_val_2121_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2119_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_val_2121_);
lean_dec(v___x_2119_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 0);
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_val_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object* v_constName_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v_constName_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object* v_declName_2136_, uint8_t v_s_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v___x_2141_; lean_object* v_env_2142_; lean_object* v_nextMacroScope_2143_; lean_object* v_ngen_2144_; lean_object* v_auxDeclNGen_2145_; lean_object* v_traceState_2146_; lean_object* v_messages_2147_; lean_object* v_infoState_2148_; lean_object* v_snapshotTasks_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2178_; 
v___x_2141_ = lean_st_ref_take(v___y_2139_);
v_env_2142_ = lean_ctor_get(v___x_2141_, 0);
v_nextMacroScope_2143_ = lean_ctor_get(v___x_2141_, 1);
v_ngen_2144_ = lean_ctor_get(v___x_2141_, 2);
v_auxDeclNGen_2145_ = lean_ctor_get(v___x_2141_, 3);
v_traceState_2146_ = lean_ctor_get(v___x_2141_, 4);
v_messages_2147_ = lean_ctor_get(v___x_2141_, 6);
v_infoState_2148_ = lean_ctor_get(v___x_2141_, 7);
v_snapshotTasks_2149_ = lean_ctor_get(v___x_2141_, 8);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2178_ == 0)
{
lean_object* v_unused_2179_; 
v_unused_2179_ = lean_ctor_get(v___x_2141_, 5);
lean_dec(v_unused_2179_);
v___x_2151_ = v___x_2141_;
v_isShared_2152_ = v_isSharedCheck_2178_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_snapshotTasks_2149_);
lean_inc(v_infoState_2148_);
lean_inc(v_messages_2147_);
lean_inc(v_traceState_2146_);
lean_inc(v_auxDeclNGen_2145_);
lean_inc(v_ngen_2144_);
lean_inc(v_nextMacroScope_2143_);
lean_inc(v_env_2142_);
lean_dec(v___x_2141_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2178_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
uint8_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2153_ = 0;
v___x_2154_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_2155_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2142_, v_declName_2136_, v_s_2137_, v___x_2153_, v___x_2154_);
v___x_2156_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 5, v___x_2156_);
lean_ctor_set(v___x_2151_, 0, v___x_2155_);
v___x_2158_ = v___x_2151_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2155_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_nextMacroScope_2143_);
lean_ctor_set(v_reuseFailAlloc_2177_, 2, v_ngen_2144_);
lean_ctor_set(v_reuseFailAlloc_2177_, 3, v_auxDeclNGen_2145_);
lean_ctor_set(v_reuseFailAlloc_2177_, 4, v_traceState_2146_);
lean_ctor_set(v_reuseFailAlloc_2177_, 5, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2177_, 6, v_messages_2147_);
lean_ctor_set(v_reuseFailAlloc_2177_, 7, v_infoState_2148_);
lean_ctor_set(v_reuseFailAlloc_2177_, 8, v_snapshotTasks_2149_);
v___x_2158_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v_mctx_2161_; lean_object* v_zetaDeltaFVarIds_2162_; lean_object* v_postponed_2163_; lean_object* v_diag_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2175_; 
v___x_2159_ = lean_st_ref_put(v___y_2139_, v___x_2158_);
v___x_2160_ = lean_st_ref_take(v___y_2138_);
v_mctx_2161_ = lean_ctor_get(v___x_2160_, 0);
v_zetaDeltaFVarIds_2162_ = lean_ctor_get(v___x_2160_, 2);
v_postponed_2163_ = lean_ctor_get(v___x_2160_, 3);
v_diag_2164_ = lean_ctor_get(v___x_2160_, 4);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2175_ == 0)
{
lean_object* v_unused_2176_; 
v_unused_2176_ = lean_ctor_get(v___x_2160_, 1);
lean_dec(v_unused_2176_);
v___x_2166_ = v___x_2160_;
v_isShared_2167_ = v_isSharedCheck_2175_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_diag_2164_);
lean_inc(v_postponed_2163_);
lean_inc(v_zetaDeltaFVarIds_2162_);
lean_inc(v_mctx_2161_);
lean_dec(v___x_2160_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2175_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2168_ = lean_box(0);
v___x_2169_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 1, v___x_2169_);
v___x_2171_ = v___x_2166_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_mctx_2161_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v___x_2169_);
lean_ctor_set(v_reuseFailAlloc_2174_, 2, v_zetaDeltaFVarIds_2162_);
lean_ctor_set(v_reuseFailAlloc_2174_, 3, v_postponed_2163_);
lean_ctor_set(v_reuseFailAlloc_2174_, 4, v_diag_2164_);
v___x_2171_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2172_ = lean_st_ref_put(v___y_2138_, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2168_);
return v___x_2173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object* v_declName_2180_, lean_object* v_s_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
uint8_t v_s_boxed_2185_; lean_object* v_res_2186_; 
v_s_boxed_2185_ = lean_unbox(v_s_2181_);
v_res_2186_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2180_, v_s_boxed_2185_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec(v___y_2182_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object* v_declName_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
uint8_t v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = 0;
v___x_2194_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2187_, v___x_2193_, v___y_2189_, v___y_2191_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object* v_declName_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
return v_res_2201_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0));
v___x_2204_ = l_Lean_stringToMessageData(v___x_2203_);
return v___x_2204_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2));
v___x_2207_ = l_Lean_stringToMessageData(v___x_2206_);
return v___x_2207_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4));
v___x_2210_ = l_Lean_stringToMessageData(v___x_2209_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object* v_attrName_2211_, lean_object* v_declName_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2218_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2219_ = l_Lean_MessageData_ofName(v_attrName_2211_);
v___x_2220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2220_);
lean_ctor_set(v___x_2222_, 1, v___x_2221_);
v___x_2223_ = 0;
v___x_2224_ = l_Lean_MessageData_ofConstName(v_declName_2212_, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2222_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
v___x_2226_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5);
v___x_2227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2225_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2227_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object* v_attrName_2229_, lean_object* v_declName_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2229_, v_declName_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
return v_res_2236_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2238_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0));
v___x_2239_ = l_Lean_stringToMessageData(v___x_2238_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2));
v___x_2242_ = l_Lean_stringToMessageData(v___x_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object* v_attrName_2243_, lean_object* v_declName_2244_, lean_object* v_asyncPrefix_x3f_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v___y_2252_; 
if (lean_obj_tag(v_asyncPrefix_x3f_2245_) == 0)
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_MessageData_nil;
v___y_2252_ = v___x_2265_;
goto v___jp_2251_;
}
else
{
lean_object* v_val_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_val_2266_ = lean_ctor_get(v_asyncPrefix_x3f_2245_, 0);
lean_inc(v_val_2266_);
lean_dec_ref_known(v_asyncPrefix_x3f_2245_, 1);
v___x_2267_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3);
v___x_2268_ = l_Lean_MessageData_ofName(v_val_2266_);
v___x_2269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2267_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2269_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___y_2252_ = v___x_2271_;
goto v___jp_2251_;
}
v___jp_2251_:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; uint8_t v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2253_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2254_ = l_Lean_MessageData_ofName(v_attrName_2243_);
v___x_2255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2253_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = 0;
v___x_2259_ = l_Lean_MessageData_ofConstName(v_declName_2244_, v___x_2258_);
v___x_2260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2257_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1);
v___x_2262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
lean_ctor_set(v___x_2263_, 1, v___y_2252_);
v___x_2264_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2263_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_);
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object* v_attrName_2272_, lean_object* v_declName_2273_, lean_object* v_asyncPrefix_x3f_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2272_, v_declName_2273_, v_asyncPrefix_x3f_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object* v_attr_2281_, lean_object* v_decl_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___y_2289_; lean_object* v___y_2290_; lean_object* v___x_2331_; lean_object* v_env_2332_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v___y_2337_; lean_object* v___x_2347_; 
v___x_2331_ = lean_st_ref_get(v___y_2286_);
v_env_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc_ref(v_env_2332_);
lean_dec(v___x_2331_);
v___x_2347_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2332_, v_decl_2282_);
if (lean_obj_tag(v___x_2347_) == 0)
{
v___y_2334_ = v___y_2283_;
v___y_2335_ = v___y_2284_;
v___y_2336_ = v___y_2285_;
v___y_2337_ = v___y_2286_;
goto v___jp_2333_;
}
else
{
lean_object* v_attr_2348_; lean_object* v_toAttributeImplCore_2349_; lean_object* v_name_2350_; lean_object* v___x_2351_; 
lean_dec_ref_known(v___x_2347_, 1);
lean_dec_ref(v_env_2332_);
v_attr_2348_ = lean_ctor_get(v_attr_2281_, 0);
lean_inc_ref(v_attr_2348_);
lean_dec_ref(v_attr_2281_);
v_toAttributeImplCore_2349_ = lean_ctor_get(v_attr_2348_, 0);
lean_inc_ref(v_toAttributeImplCore_2349_);
lean_dec_ref(v_attr_2348_);
v_name_2350_ = lean_ctor_get(v_toAttributeImplCore_2349_, 1);
lean_inc(v_name_2350_);
lean_dec_ref(v_toAttributeImplCore_2349_);
v___x_2351_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_name_2350_, v_decl_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
return v___x_2351_;
}
v___jp_2288_:
{
lean_object* v___x_2291_; lean_object* v_ext_2292_; lean_object* v_toEnvExtension_2293_; lean_object* v_env_2294_; lean_object* v_nextMacroScope_2295_; lean_object* v_ngen_2296_; lean_object* v_auxDeclNGen_2297_; lean_object* v_traceState_2298_; lean_object* v_messages_2299_; lean_object* v_infoState_2300_; lean_object* v_snapshotTasks_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2329_; 
v___x_2291_ = lean_st_ref_take(v___y_2290_);
v_ext_2292_ = lean_ctor_get(v_attr_2281_, 1);
lean_inc_ref(v_ext_2292_);
lean_dec_ref(v_attr_2281_);
v_toEnvExtension_2293_ = lean_ctor_get(v_ext_2292_, 0);
v_env_2294_ = lean_ctor_get(v___x_2291_, 0);
v_nextMacroScope_2295_ = lean_ctor_get(v___x_2291_, 1);
v_ngen_2296_ = lean_ctor_get(v___x_2291_, 2);
v_auxDeclNGen_2297_ = lean_ctor_get(v___x_2291_, 3);
v_traceState_2298_ = lean_ctor_get(v___x_2291_, 4);
v_messages_2299_ = lean_ctor_get(v___x_2291_, 6);
v_infoState_2300_ = lean_ctor_get(v___x_2291_, 7);
v_snapshotTasks_2301_ = lean_ctor_get(v___x_2291_, 8);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2329_ == 0)
{
lean_object* v_unused_2330_; 
v_unused_2330_ = lean_ctor_get(v___x_2291_, 5);
lean_dec(v_unused_2330_);
v___x_2303_ = v___x_2291_;
v_isShared_2304_ = v_isSharedCheck_2329_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_snapshotTasks_2301_);
lean_inc(v_infoState_2300_);
lean_inc(v_messages_2299_);
lean_inc(v_traceState_2298_);
lean_inc(v_auxDeclNGen_2297_);
lean_inc(v_ngen_2296_);
lean_inc(v_nextMacroScope_2295_);
lean_inc(v_env_2294_);
lean_dec(v___x_2291_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2329_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v_asyncMode_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v_asyncMode_2305_ = lean_ctor_get(v_toEnvExtension_2293_, 2);
lean_inc(v_asyncMode_2305_);
lean_inc(v_decl_2282_);
v___x_2306_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2292_, v_env_2294_, v_decl_2282_, v_asyncMode_2305_, v_decl_2282_);
lean_dec(v_asyncMode_2305_);
v___x_2307_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 5, v___x_2307_);
lean_ctor_set(v___x_2303_, 0, v___x_2306_);
v___x_2309_ = v___x_2303_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v___x_2306_);
lean_ctor_set(v_reuseFailAlloc_2328_, 1, v_nextMacroScope_2295_);
lean_ctor_set(v_reuseFailAlloc_2328_, 2, v_ngen_2296_);
lean_ctor_set(v_reuseFailAlloc_2328_, 3, v_auxDeclNGen_2297_);
lean_ctor_set(v_reuseFailAlloc_2328_, 4, v_traceState_2298_);
lean_ctor_set(v_reuseFailAlloc_2328_, 5, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2328_, 6, v_messages_2299_);
lean_ctor_set(v_reuseFailAlloc_2328_, 7, v_infoState_2300_);
lean_ctor_set(v_reuseFailAlloc_2328_, 8, v_snapshotTasks_2301_);
v___x_2309_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v_mctx_2312_; lean_object* v_zetaDeltaFVarIds_2313_; lean_object* v_postponed_2314_; lean_object* v_diag_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2326_; 
v___x_2310_ = lean_st_ref_put(v___y_2290_, v___x_2309_);
v___x_2311_ = lean_st_ref_take(v___y_2289_);
v_mctx_2312_ = lean_ctor_get(v___x_2311_, 0);
v_zetaDeltaFVarIds_2313_ = lean_ctor_get(v___x_2311_, 2);
v_postponed_2314_ = lean_ctor_get(v___x_2311_, 3);
v_diag_2315_ = lean_ctor_get(v___x_2311_, 4);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; 
v_unused_2327_ = lean_ctor_get(v___x_2311_, 1);
lean_dec(v_unused_2327_);
v___x_2317_ = v___x_2311_;
v_isShared_2318_ = v_isSharedCheck_2326_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_diag_2315_);
lean_inc(v_postponed_2314_);
lean_inc(v_zetaDeltaFVarIds_2313_);
lean_inc(v_mctx_2312_);
lean_dec(v___x_2311_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2326_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2319_ = lean_box(0);
v___x_2320_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 1, v___x_2320_);
v___x_2322_ = v___x_2317_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_mctx_2312_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___x_2320_);
lean_ctor_set(v_reuseFailAlloc_2325_, 2, v_zetaDeltaFVarIds_2313_);
lean_ctor_set(v_reuseFailAlloc_2325_, 3, v_postponed_2314_);
lean_ctor_set(v_reuseFailAlloc_2325_, 4, v_diag_2315_);
v___x_2322_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_st_ref_put(v___y_2289_, v___x_2322_);
v___x_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2319_);
return v___x_2324_;
}
}
}
}
}
v___jp_2333_:
{
lean_object* v_ext_2338_; lean_object* v_toEnvExtension_2339_; lean_object* v_attr_2340_; lean_object* v_asyncMode_2341_; uint8_t v___x_2342_; 
v_ext_2338_ = lean_ctor_get(v_attr_2281_, 1);
v_toEnvExtension_2339_ = lean_ctor_get(v_ext_2338_, 0);
v_attr_2340_ = lean_ctor_get(v_attr_2281_, 0);
v_asyncMode_2341_ = lean_ctor_get(v_toEnvExtension_2339_, 2);
lean_inc(v_decl_2282_);
lean_inc_ref(v_env_2332_);
v___x_2342_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2332_, v_decl_2282_, v_asyncMode_2341_);
if (v___x_2342_ == 0)
{
lean_object* v_toAttributeImplCore_2343_; lean_object* v_name_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
lean_inc_ref(v_attr_2340_);
lean_dec_ref(v_attr_2281_);
v_toAttributeImplCore_2343_ = lean_ctor_get(v_attr_2340_, 0);
lean_inc_ref(v_toAttributeImplCore_2343_);
lean_dec_ref(v_attr_2340_);
v_name_2344_ = lean_ctor_get(v_toAttributeImplCore_2343_, 1);
lean_inc(v_name_2344_);
lean_dec_ref(v_toAttributeImplCore_2343_);
v___x_2345_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2332_);
v___x_2346_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_name_2344_, v_decl_2282_, v___x_2345_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
return v___x_2346_;
}
else
{
lean_dec_ref(v_env_2332_);
v___y_2289_ = v___y_2335_;
v___y_2290_ = v___y_2337_;
goto v___jp_2288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object* v_attr_2352_, lean_object* v_decl_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v_attr_2352_, v_decl_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object* v_constName_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v___x_2366_; lean_object* v_env_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2366_ = lean_st_ref_get(v___y_2364_);
v_env_2367_ = lean_ctor_get(v___x_2366_, 0);
lean_inc_ref(v_env_2367_);
lean_dec(v___x_2366_);
v___x_2368_ = 0;
lean_inc(v_constName_2360_);
v___x_2369_ = l_Lean_Environment_find_x3f(v_env_2367_, v_constName_2360_, v___x_2368_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
return v___x_2370_;
}
else
{
lean_object* v_val_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
lean_dec(v_constName_2360_);
v_val_2371_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2369_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_val_2371_);
lean_dec(v___x_2369_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 0);
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_val_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object* v_constName_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_constName_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
return v_res_2385_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__3(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2389_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_2390_ = lean_unsigned_to_nat(58u);
v___x_2391_ = lean_unsigned_to_nat(33u);
v___x_2392_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2393_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2394_ = l_mkPanicMessageWithDecl(v___x_2393_, v___x_2392_, v___x_2391_, v___x_2390_, v___x_2389_);
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__5(void){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2396_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_2397_ = lean_unsigned_to_nat(60u);
v___x_2398_ = lean_unsigned_to_nat(30u);
v___x_2399_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2400_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2401_ = l_mkPanicMessageWithDecl(v___x_2400_, v___x_2399_, v___x_2398_, v___x_2397_, v___x_2396_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object* v_declName_2402_, lean_object* v_indName_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v___x_2409_; 
lean_inc(v_indName_2403_);
v___x_2409_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; 
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2409_, 1);
if (lean_obj_tag(v_a_2410_) == 5)
{
lean_object* v_val_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2597_; 
v_val_2411_ = lean_ctor_get(v_a_2410_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v_a_2410_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2413_ = v_a_2410_;
v_isShared_2414_ = v_isSharedCheck_2597_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_val_2411_);
lean_dec(v_a_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2597_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_inc(v_indName_2403_);
v___x_2415_ = l_Lean_mkCasesOnName(v_indName_2403_);
lean_inc(v___x_2415_);
v___x_2416_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_2415_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v_name_2418_; lean_object* v_levelParams_2419_; lean_object* v_type_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2416_, 1);
v_name_2418_ = lean_ctor_get(v_a_2417_, 0);
lean_inc(v_name_2418_);
v_levelParams_2419_ = lean_ctor_get(v_a_2417_, 1);
lean_inc_n(v_levelParams_2419_, 2);
v_type_2420_ = lean_ctor_get(v_a_2417_, 2);
lean_inc_ref(v_type_2420_);
lean_dec(v_a_2417_);
v___x_2421_ = lean_box(0);
v___x_2422_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_2419_, v___x_2421_);
if (lean_obj_tag(v___x_2422_) == 1)
{
lean_object* v_head_2423_; lean_object* v_tail_2424_; lean_object* v_numParams_2425_; lean_object* v_numIndices_2426_; lean_object* v_ctors_2427_; lean_object* v___f_2428_; lean_object* v___x_2430_; 
v_head_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_head_2423_);
v_tail_2424_ = lean_ctor_get(v___x_2422_, 1);
lean_inc(v_tail_2424_);
v_numParams_2425_ = lean_ctor_get(v_val_2411_, 1);
lean_inc_n(v_numParams_2425_, 2);
v_numIndices_2426_ = lean_ctor_get(v_val_2411_, 2);
lean_inc(v_numIndices_2426_);
v_ctors_2427_ = lean_ctor_get(v_val_2411_, 4);
lean_inc(v_ctors_2427_);
v___f_2428_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__6___boxed), 17, 10);
lean_closure_set(v___f_2428_, 0, v_numIndices_2426_);
lean_closure_set(v___f_2428_, 1, v_head_2423_);
lean_closure_set(v___f_2428_, 2, v_ctors_2427_);
lean_closure_set(v___f_2428_, 3, v_indName_2403_);
lean_closure_set(v___f_2428_, 4, v_tail_2424_);
lean_closure_set(v___f_2428_, 5, v_name_2418_);
lean_closure_set(v___f_2428_, 6, v___x_2422_);
lean_closure_set(v___f_2428_, 7, v_numParams_2425_);
lean_closure_set(v___f_2428_, 8, v_val_2411_);
lean_closure_set(v___f_2428_, 9, v___x_2415_);
if (v_isShared_2414_ == 0)
{
lean_ctor_set_tag(v___x_2413_, 1);
lean_ctor_set(v___x_2413_, 0, v_numParams_2425_);
v___x_2430_ = v___x_2413_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_numParams_2425_);
v___x_2430_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
uint8_t v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = 0;
v___x_2432_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_2420_, v___x_2430_, v___f_2428_, v___x_2431_, v___x_2431_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2434_; lean_object* v___f_2435_; uint8_t v___y_2437_; uint8_t v___x_2576_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc(v_a_2433_);
lean_dec_ref_known(v___x_2432_, 1);
v___x_2434_ = lean_box(v___x_2431_);
lean_inc(v_declName_2402_);
v___f_2435_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__7___boxed), 9, 4);
lean_closure_set(v___f_2435_, 0, v_a_2433_);
lean_closure_set(v___f_2435_, 1, v_declName_2402_);
lean_closure_set(v___f_2435_, 2, v_levelParams_2419_);
lean_closure_set(v___f_2435_, 3, v___x_2434_);
v___x_2576_ = l_Lean_isPrivateName(v_declName_2402_);
if (v___x_2576_ == 0)
{
uint8_t v___x_2577_; 
v___x_2577_ = 1;
v___y_2437_ = v___x_2577_;
goto v___jp_2436_;
}
else
{
v___y_2437_ = v___x_2431_;
goto v___jp_2436_;
}
v___jp_2436_:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_2435_, v___y_2437_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v___x_2439_; lean_object* v_env_2440_; lean_object* v_nextMacroScope_2441_; lean_object* v_ngen_2442_; lean_object* v_auxDeclNGen_2443_; lean_object* v_traceState_2444_; lean_object* v_messages_2445_; lean_object* v_infoState_2446_; lean_object* v_snapshotTasks_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2574_; 
lean_dec_ref_known(v___x_2438_, 1);
v___x_2439_ = lean_st_ref_take(v_a_2407_);
v_env_2440_ = lean_ctor_get(v___x_2439_, 0);
v_nextMacroScope_2441_ = lean_ctor_get(v___x_2439_, 1);
v_ngen_2442_ = lean_ctor_get(v___x_2439_, 2);
v_auxDeclNGen_2443_ = lean_ctor_get(v___x_2439_, 3);
v_traceState_2444_ = lean_ctor_get(v___x_2439_, 4);
v_messages_2445_ = lean_ctor_get(v___x_2439_, 6);
v_infoState_2446_ = lean_ctor_get(v___x_2439_, 7);
v_snapshotTasks_2447_ = lean_ctor_get(v___x_2439_, 8);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2574_ == 0)
{
lean_object* v_unused_2575_; 
v_unused_2575_ = lean_ctor_get(v___x_2439_, 5);
lean_dec(v_unused_2575_);
v___x_2449_ = v___x_2439_;
v_isShared_2450_ = v_isSharedCheck_2574_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_snapshotTasks_2447_);
lean_inc(v_infoState_2446_);
lean_inc(v_messages_2445_);
lean_inc(v_traceState_2444_);
lean_inc(v_auxDeclNGen_2443_);
lean_inc(v_ngen_2442_);
lean_inc(v_nextMacroScope_2441_);
lean_inc(v_env_2440_);
lean_dec(v___x_2439_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2574_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2454_; 
lean_inc(v_declName_2402_);
v___x_2451_ = l_Lean_Meta_markMatcherLike(v_env_2440_, v_declName_2402_);
v___x_2452_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 5, v___x_2452_);
lean_ctor_set(v___x_2449_, 0, v___x_2451_);
v___x_2454_ = v___x_2449_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2451_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_nextMacroScope_2441_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_ngen_2442_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v_auxDeclNGen_2443_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_traceState_2444_);
lean_ctor_set(v_reuseFailAlloc_2573_, 5, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2573_, 6, v_messages_2445_);
lean_ctor_set(v_reuseFailAlloc_2573_, 7, v_infoState_2446_);
lean_ctor_set(v_reuseFailAlloc_2573_, 8, v_snapshotTasks_2447_);
v___x_2454_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v_mctx_2457_; lean_object* v_zetaDeltaFVarIds_2458_; lean_object* v_postponed_2459_; lean_object* v_diag_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2571_; 
v___x_2455_ = lean_st_ref_put(v_a_2407_, v___x_2454_);
v___x_2456_ = lean_st_ref_take(v_a_2405_);
v_mctx_2457_ = lean_ctor_get(v___x_2456_, 0);
v_zetaDeltaFVarIds_2458_ = lean_ctor_get(v___x_2456_, 2);
v_postponed_2459_ = lean_ctor_get(v___x_2456_, 3);
v_diag_2460_ = lean_ctor_get(v___x_2456_, 4);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2571_ == 0)
{
lean_object* v_unused_2572_; 
v_unused_2572_ = lean_ctor_get(v___x_2456_, 1);
lean_dec(v_unused_2572_);
v___x_2462_ = v___x_2456_;
v_isShared_2463_ = v_isSharedCheck_2571_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_diag_2460_);
lean_inc(v_postponed_2459_);
lean_inc(v_zetaDeltaFVarIds_2458_);
lean_inc(v_mctx_2457_);
lean_dec(v___x_2456_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2571_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2464_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 1, v___x_2464_);
v___x_2466_ = v___x_2462_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_mctx_2457_);
lean_ctor_set(v_reuseFailAlloc_2570_, 1, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2570_, 2, v_zetaDeltaFVarIds_2458_);
lean_ctor_set(v_reuseFailAlloc_2570_, 3, v_postponed_2459_);
lean_ctor_set(v_reuseFailAlloc_2570_, 4, v_diag_2460_);
v___x_2466_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v_env_2469_; lean_object* v_nextMacroScope_2470_; lean_object* v_ngen_2471_; lean_object* v_auxDeclNGen_2472_; lean_object* v_traceState_2473_; lean_object* v_messages_2474_; lean_object* v_infoState_2475_; lean_object* v_snapshotTasks_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2568_; 
v___x_2467_ = lean_st_ref_put(v_a_2405_, v___x_2466_);
v___x_2468_ = lean_st_ref_take(v_a_2407_);
v_env_2469_ = lean_ctor_get(v___x_2468_, 0);
v_nextMacroScope_2470_ = lean_ctor_get(v___x_2468_, 1);
v_ngen_2471_ = lean_ctor_get(v___x_2468_, 2);
v_auxDeclNGen_2472_ = lean_ctor_get(v___x_2468_, 3);
v_traceState_2473_ = lean_ctor_get(v___x_2468_, 4);
v_messages_2474_ = lean_ctor_get(v___x_2468_, 6);
v_infoState_2475_ = lean_ctor_get(v___x_2468_, 7);
v_snapshotTasks_2476_ = lean_ctor_get(v___x_2468_, 8);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2568_ == 0)
{
lean_object* v_unused_2569_; 
v_unused_2569_ = lean_ctor_get(v___x_2468_, 5);
lean_dec(v_unused_2569_);
v___x_2478_ = v___x_2468_;
v_isShared_2479_ = v_isSharedCheck_2568_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_snapshotTasks_2476_);
lean_inc(v_infoState_2475_);
lean_inc(v_messages_2474_);
lean_inc(v_traceState_2473_);
lean_inc(v_auxDeclNGen_2472_);
lean_inc(v_ngen_2471_);
lean_inc(v_nextMacroScope_2470_);
lean_inc(v_env_2469_);
lean_dec(v___x_2468_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2568_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2480_; lean_object* v___x_2482_; 
lean_inc(v_declName_2402_);
v___x_2480_ = l_Lean_markAuxRecursor(v_env_2469_, v_declName_2402_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 5, v___x_2452_);
lean_ctor_set(v___x_2478_, 0, v___x_2480_);
v___x_2482_ = v___x_2478_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2480_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_nextMacroScope_2470_);
lean_ctor_set(v_reuseFailAlloc_2567_, 2, v_ngen_2471_);
lean_ctor_set(v_reuseFailAlloc_2567_, 3, v_auxDeclNGen_2472_);
lean_ctor_set(v_reuseFailAlloc_2567_, 4, v_traceState_2473_);
lean_ctor_set(v_reuseFailAlloc_2567_, 5, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2567_, 6, v_messages_2474_);
lean_ctor_set(v_reuseFailAlloc_2567_, 7, v_infoState_2475_);
lean_ctor_set(v_reuseFailAlloc_2567_, 8, v_snapshotTasks_2476_);
v___x_2482_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v_mctx_2485_; lean_object* v_zetaDeltaFVarIds_2486_; lean_object* v_postponed_2487_; lean_object* v_diag_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2565_; 
v___x_2483_ = lean_st_ref_put(v_a_2407_, v___x_2482_);
v___x_2484_ = lean_st_ref_take(v_a_2405_);
v_mctx_2485_ = lean_ctor_get(v___x_2484_, 0);
v_zetaDeltaFVarIds_2486_ = lean_ctor_get(v___x_2484_, 2);
v_postponed_2487_ = lean_ctor_get(v___x_2484_, 3);
v_diag_2488_ = lean_ctor_get(v___x_2484_, 4);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2565_ == 0)
{
lean_object* v_unused_2566_; 
v_unused_2566_ = lean_ctor_get(v___x_2484_, 1);
lean_dec(v_unused_2566_);
v___x_2490_ = v___x_2484_;
v_isShared_2491_ = v_isSharedCheck_2565_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_diag_2488_);
lean_inc(v_postponed_2487_);
lean_inc(v_zetaDeltaFVarIds_2486_);
lean_inc(v_mctx_2485_);
lean_dec(v___x_2484_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2565_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 1, v___x_2464_);
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_mctx_2485_);
lean_ctor_set(v_reuseFailAlloc_2564_, 1, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2564_, 2, v_zetaDeltaFVarIds_2486_);
lean_ctor_set(v_reuseFailAlloc_2564_, 3, v_postponed_2487_);
lean_ctor_set(v_reuseFailAlloc_2564_, 4, v_diag_2488_);
v___x_2493_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v_env_2496_; lean_object* v_nextMacroScope_2497_; lean_object* v_ngen_2498_; lean_object* v_auxDeclNGen_2499_; lean_object* v_traceState_2500_; lean_object* v_messages_2501_; lean_object* v_infoState_2502_; lean_object* v_snapshotTasks_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2562_; 
v___x_2494_ = lean_st_ref_put(v_a_2405_, v___x_2493_);
v___x_2495_ = lean_st_ref_take(v_a_2407_);
v_env_2496_ = lean_ctor_get(v___x_2495_, 0);
v_nextMacroScope_2497_ = lean_ctor_get(v___x_2495_, 1);
v_ngen_2498_ = lean_ctor_get(v___x_2495_, 2);
v_auxDeclNGen_2499_ = lean_ctor_get(v___x_2495_, 3);
v_traceState_2500_ = lean_ctor_get(v___x_2495_, 4);
v_messages_2501_ = lean_ctor_get(v___x_2495_, 6);
v_infoState_2502_ = lean_ctor_get(v___x_2495_, 7);
v_snapshotTasks_2503_ = lean_ctor_get(v___x_2495_, 8);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; 
v_unused_2563_ = lean_ctor_get(v___x_2495_, 5);
lean_dec(v_unused_2563_);
v___x_2505_ = v___x_2495_;
v_isShared_2506_ = v_isSharedCheck_2562_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_snapshotTasks_2503_);
lean_inc(v_infoState_2502_);
lean_inc(v_messages_2501_);
lean_inc(v_traceState_2500_);
lean_inc(v_auxDeclNGen_2499_);
lean_inc(v_ngen_2498_);
lean_inc(v_nextMacroScope_2497_);
lean_inc(v_env_2496_);
lean_dec(v___x_2495_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2562_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2507_; lean_object* v___x_2509_; 
lean_inc(v_declName_2402_);
v___x_2507_ = l_Lean_Meta_addToCompletionBlackList(v_env_2496_, v_declName_2402_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 5, v___x_2452_);
lean_ctor_set(v___x_2505_, 0, v___x_2507_);
v___x_2509_ = v___x_2505_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v___x_2507_);
lean_ctor_set(v_reuseFailAlloc_2561_, 1, v_nextMacroScope_2497_);
lean_ctor_set(v_reuseFailAlloc_2561_, 2, v_ngen_2498_);
lean_ctor_set(v_reuseFailAlloc_2561_, 3, v_auxDeclNGen_2499_);
lean_ctor_set(v_reuseFailAlloc_2561_, 4, v_traceState_2500_);
lean_ctor_set(v_reuseFailAlloc_2561_, 5, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2561_, 6, v_messages_2501_);
lean_ctor_set(v_reuseFailAlloc_2561_, 7, v_infoState_2502_);
lean_ctor_set(v_reuseFailAlloc_2561_, 8, v_snapshotTasks_2503_);
v___x_2509_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v_mctx_2512_; lean_object* v_zetaDeltaFVarIds_2513_; lean_object* v_postponed_2514_; lean_object* v_diag_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2559_; 
v___x_2510_ = lean_st_ref_put(v_a_2407_, v___x_2509_);
v___x_2511_ = lean_st_ref_take(v_a_2405_);
v_mctx_2512_ = lean_ctor_get(v___x_2511_, 0);
v_zetaDeltaFVarIds_2513_ = lean_ctor_get(v___x_2511_, 2);
v_postponed_2514_ = lean_ctor_get(v___x_2511_, 3);
v_diag_2515_ = lean_ctor_get(v___x_2511_, 4);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2559_ == 0)
{
lean_object* v_unused_2560_; 
v_unused_2560_ = lean_ctor_get(v___x_2511_, 1);
lean_dec(v_unused_2560_);
v___x_2517_ = v___x_2511_;
v_isShared_2518_ = v_isSharedCheck_2559_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_diag_2515_);
lean_inc(v_postponed_2514_);
lean_inc(v_zetaDeltaFVarIds_2513_);
lean_inc(v_mctx_2512_);
lean_dec(v___x_2511_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2559_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 1, v___x_2464_);
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_mctx_2512_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2558_, 2, v_zetaDeltaFVarIds_2513_);
lean_ctor_set(v_reuseFailAlloc_2558_, 3, v_postponed_2514_);
lean_ctor_set(v_reuseFailAlloc_2558_, 4, v_diag_2515_);
v___x_2520_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v_env_2523_; lean_object* v_nextMacroScope_2524_; lean_object* v_ngen_2525_; lean_object* v_auxDeclNGen_2526_; lean_object* v_traceState_2527_; lean_object* v_messages_2528_; lean_object* v_infoState_2529_; lean_object* v_snapshotTasks_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2556_; 
v___x_2521_ = lean_st_ref_put(v_a_2405_, v___x_2520_);
v___x_2522_ = lean_st_ref_take(v_a_2407_);
v_env_2523_ = lean_ctor_get(v___x_2522_, 0);
v_nextMacroScope_2524_ = lean_ctor_get(v___x_2522_, 1);
v_ngen_2525_ = lean_ctor_get(v___x_2522_, 2);
v_auxDeclNGen_2526_ = lean_ctor_get(v___x_2522_, 3);
v_traceState_2527_ = lean_ctor_get(v___x_2522_, 4);
v_messages_2528_ = lean_ctor_get(v___x_2522_, 6);
v_infoState_2529_ = lean_ctor_get(v___x_2522_, 7);
v_snapshotTasks_2530_ = lean_ctor_get(v___x_2522_, 8);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2522_);
if (v_isSharedCheck_2556_ == 0)
{
lean_object* v_unused_2557_; 
v_unused_2557_ = lean_ctor_get(v___x_2522_, 5);
lean_dec(v_unused_2557_);
v___x_2532_ = v___x_2522_;
v_isShared_2533_ = v_isSharedCheck_2556_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_snapshotTasks_2530_);
lean_inc(v_infoState_2529_);
lean_inc(v_messages_2528_);
lean_inc(v_traceState_2527_);
lean_inc(v_auxDeclNGen_2526_);
lean_inc(v_ngen_2525_);
lean_inc(v_nextMacroScope_2524_);
lean_inc(v_env_2523_);
lean_dec(v___x_2522_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2556_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
lean_inc(v_declName_2402_);
v___x_2534_ = l_Lean_addProtected(v_env_2523_, v_declName_2402_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 5, v___x_2452_);
lean_ctor_set(v___x_2532_, 0, v___x_2534_);
v___x_2536_ = v___x_2532_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v___x_2534_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_nextMacroScope_2524_);
lean_ctor_set(v_reuseFailAlloc_2555_, 2, v_ngen_2525_);
lean_ctor_set(v_reuseFailAlloc_2555_, 3, v_auxDeclNGen_2526_);
lean_ctor_set(v_reuseFailAlloc_2555_, 4, v_traceState_2527_);
lean_ctor_set(v_reuseFailAlloc_2555_, 5, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2555_, 6, v_messages_2528_);
lean_ctor_set(v_reuseFailAlloc_2555_, 7, v_infoState_2529_);
lean_ctor_set(v_reuseFailAlloc_2555_, 8, v_snapshotTasks_2530_);
v___x_2536_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v_mctx_2539_; lean_object* v_zetaDeltaFVarIds_2540_; lean_object* v_postponed_2541_; lean_object* v_diag_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2553_; 
v___x_2537_ = lean_st_ref_put(v_a_2407_, v___x_2536_);
v___x_2538_ = lean_st_ref_take(v_a_2405_);
v_mctx_2539_ = lean_ctor_get(v___x_2538_, 0);
v_zetaDeltaFVarIds_2540_ = lean_ctor_get(v___x_2538_, 2);
v_postponed_2541_ = lean_ctor_get(v___x_2538_, 3);
v_diag_2542_ = lean_ctor_get(v___x_2538_, 4);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2553_ == 0)
{
lean_object* v_unused_2554_; 
v_unused_2554_ = lean_ctor_get(v___x_2538_, 1);
lean_dec(v_unused_2554_);
v___x_2544_ = v___x_2538_;
v_isShared_2545_ = v_isSharedCheck_2553_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_diag_2542_);
lean_inc(v_postponed_2541_);
lean_inc(v_zetaDeltaFVarIds_2540_);
lean_inc(v_mctx_2539_);
lean_dec(v___x_2538_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2553_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v___x_2464_);
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_mctx_2539_);
lean_ctor_set(v_reuseFailAlloc_2552_, 1, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2552_, 2, v_zetaDeltaFVarIds_2540_);
lean_ctor_set(v_reuseFailAlloc_2552_, 3, v_postponed_2541_);
lean_ctor_set(v_reuseFailAlloc_2552_, 4, v_diag_2542_);
v___x_2547_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2548_ = lean_st_ref_put(v_a_2405_, v___x_2547_);
v___x_2549_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_2402_);
v___x_2550_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_2549_, v_declName_2402_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v___x_2551_; 
lean_dec_ref_known(v___x_2550_, 1);
v___x_2551_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2402_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2551_;
}
else
{
lean_dec(v_declName_2402_);
return v___x_2550_;
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
lean_dec(v_declName_2402_);
return v___x_2438_;
}
}
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_dec(v_levelParams_2419_);
lean_dec(v_declName_2402_);
v_a_2578_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2432_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2432_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
else
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
lean_dec(v___x_2422_);
lean_dec_ref(v_type_2420_);
lean_dec(v_levelParams_2419_);
lean_dec(v_name_2418_);
lean_dec(v___x_2415_);
lean_del_object(v___x_2413_);
lean_dec_ref(v_val_2411_);
lean_dec(v_indName_2403_);
lean_dec(v_declName_2402_);
v___x_2587_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__3, &l_Lean_mkCasesOnSameCtorHet___closed__3_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__3);
v___x_2588_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2587_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2588_;
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2596_; 
lean_dec(v___x_2415_);
lean_del_object(v___x_2413_);
lean_dec_ref(v_val_2411_);
lean_dec(v_indName_2403_);
lean_dec(v_declName_2402_);
v_a_2589_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2591_ = v___x_2416_;
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2416_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2594_; 
if (v_isShared_2592_ == 0)
{
v___x_2594_ = v___x_2591_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2589_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
}
else
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec(v_a_2410_);
lean_dec(v_indName_2403_);
lean_dec(v_declName_2402_);
v___x_2598_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__5, &l_Lean_mkCasesOnSameCtorHet___closed__5_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__5);
v___x_2599_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2598_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2599_;
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec(v_indName_2403_);
lean_dec(v_declName_2402_);
v_a_2600_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2409_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2409_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object* v_declName_2608_, lean_object* v_indName_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_mkCasesOnSameCtorHet(v_declName_2608_, v_indName_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_);
lean_dec(v_a_2613_);
lean_dec_ref(v_a_2612_);
lean_dec(v_a_2611_);
lean_dec_ref(v_a_2610_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object* v_00_u03b1_2616_, lean_object* v_name_2617_, lean_object* v_type_2618_, lean_object* v_k_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_2617_, v_type_2618_, v_k_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object* v_00_u03b1_2626_, lean_object* v_name_2627_, lean_object* v_type_2628_, lean_object* v_k_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(v_00_u03b1_2626_, v_name_2627_, v_type_2628_, v_k_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object* v_declName_2636_, uint8_t v_s_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2636_, v_s_2637_, v___y_2639_, v___y_2641_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object* v_declName_2644_, lean_object* v_s_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
uint8_t v_s_boxed_2651_; lean_object* v_res_2652_; 
v_s_boxed_2651_ = lean_unbox(v_s_2645_);
v_res_2652_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(v_declName_2644_, v_s_boxed_2651_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object* v_00_u03b1_2653_, lean_object* v_constName_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2661_, lean_object* v_constName_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(v_00_u03b1_2661_, v_constName_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object* v_00_u03b1_2669_, lean_object* v_attrName_2670_, lean_object* v_declName_2671_, lean_object* v_asyncPrefix_x3f_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2670_, v_declName_2671_, v_asyncPrefix_x3f_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2679_, lean_object* v_attrName_2680_, lean_object* v_declName_2681_, lean_object* v_asyncPrefix_x3f_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(v_00_u03b1_2679_, v_attrName_2680_, v_declName_2681_, v_asyncPrefix_x3f_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object* v_00_u03b1_2689_, lean_object* v_attrName_2690_, lean_object* v_declName_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2690_, v_declName_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2698_, lean_object* v_attrName_2699_, lean_object* v_declName_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(v_00_u03b1_2698_, v_attrName_2699_, v_declName_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object* v_00_u03b1_2707_, lean_object* v_ref_2708_, lean_object* v_constName_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2708_, v_constName_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object* v_00_u03b1_2716_, lean_object* v_ref_2717_, lean_object* v_constName_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(v_00_u03b1_2716_, v_ref_2717_, v_constName_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
lean_dec(v___y_2720_);
lean_dec_ref(v___y_2719_);
lean_dec(v_ref_2717_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object* v_00_u03b1_2725_, lean_object* v_msg_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object* v_00_u03b1_2733_, lean_object* v_msg_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(v_00_u03b1_2733_, v_msg_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object* v_00_u03b1_2741_, lean_object* v_ref_2742_, lean_object* v_msg_2743_, lean_object* v_declHint_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2742_, v_msg_2743_, v_declHint_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object* v_00_u03b1_2751_, lean_object* v_ref_2752_, lean_object* v_msg_2753_, lean_object* v_declHint_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(v_00_u03b1_2751_, v_ref_2752_, v_msg_2753_, v_declHint_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v_ref_2752_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object* v_msg_2761_, lean_object* v_declHint_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v___x_2768_; 
v___x_2768_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2761_, v_declHint_2762_, v___y_2766_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object* v_msg_2769_, lean_object* v_declHint_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(v_msg_2769_, v_declHint_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object* v_00_u03b1_2777_, lean_object* v_ref_2778_, lean_object* v_msg_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_2778_, v_msg_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object* v_00_u03b1_2786_, lean_object* v_ref_2787_, lean_object* v_msg_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(v_00_u03b1_2786_, v_ref_2787_, v_msg_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v_ref_2787_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object* v_e_2795_, lean_object* v___y_2796_){
_start:
{
uint8_t v___x_2798_; 
v___x_2798_ = l_Lean_Expr_hasMVar(v_e_2795_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v_e_2795_);
return v___x_2799_;
}
else
{
lean_object* v___x_2800_; lean_object* v_mctx_2801_; lean_object* v___x_2802_; lean_object* v_fst_2803_; lean_object* v_snd_2804_; lean_object* v___x_2805_; lean_object* v_cache_2806_; lean_object* v_zetaDeltaFVarIds_2807_; lean_object* v_postponed_2808_; lean_object* v_diag_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2818_; 
v___x_2800_ = lean_st_ref_get(v___y_2796_);
v_mctx_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc_ref(v_mctx_2801_);
lean_dec(v___x_2800_);
v___x_2802_ = l_Lean_instantiateMVarsCore(v_mctx_2801_, v_e_2795_);
v_fst_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_fst_2803_);
v_snd_2804_ = lean_ctor_get(v___x_2802_, 1);
lean_inc(v_snd_2804_);
lean_dec_ref(v___x_2802_);
v___x_2805_ = lean_st_ref_take(v___y_2796_);
v_cache_2806_ = lean_ctor_get(v___x_2805_, 1);
v_zetaDeltaFVarIds_2807_ = lean_ctor_get(v___x_2805_, 2);
v_postponed_2808_ = lean_ctor_get(v___x_2805_, 3);
v_diag_2809_ = lean_ctor_get(v___x_2805_, 4);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2818_ == 0)
{
lean_object* v_unused_2819_; 
v_unused_2819_ = lean_ctor_get(v___x_2805_, 0);
lean_dec(v_unused_2819_);
v___x_2811_ = v___x_2805_;
v_isShared_2812_ = v_isSharedCheck_2818_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_diag_2809_);
lean_inc(v_postponed_2808_);
lean_inc(v_zetaDeltaFVarIds_2807_);
lean_inc(v_cache_2806_);
lean_dec(v___x_2805_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2818_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v_snd_2804_);
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_snd_2804_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_cache_2806_);
lean_ctor_set(v_reuseFailAlloc_2817_, 2, v_zetaDeltaFVarIds_2807_);
lean_ctor_set(v_reuseFailAlloc_2817_, 3, v_postponed_2808_);
lean_ctor_set(v_reuseFailAlloc_2817_, 4, v_diag_2809_);
v___x_2814_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = lean_st_ref_put(v___y_2796_, v___x_2814_);
v___x_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2816_, 0, v_fst_2803_);
return v___x_2816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object* v_e_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2820_, v___y_2821_);
lean_dec(v___y_2821_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object* v_e_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2824_, v___y_2826_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object* v_e_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(v_e_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object* v_matcherName_2838_, lean_object* v_info_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_){
_start:
{
lean_object* v___x_2843_; lean_object* v_env_2844_; lean_object* v_nextMacroScope_2845_; lean_object* v_ngen_2846_; lean_object* v_auxDeclNGen_2847_; lean_object* v_traceState_2848_; lean_object* v_messages_2849_; lean_object* v_infoState_2850_; lean_object* v_snapshotTasks_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2878_; 
v___x_2843_ = lean_st_ref_take(v___y_2841_);
v_env_2844_ = lean_ctor_get(v___x_2843_, 0);
v_nextMacroScope_2845_ = lean_ctor_get(v___x_2843_, 1);
v_ngen_2846_ = lean_ctor_get(v___x_2843_, 2);
v_auxDeclNGen_2847_ = lean_ctor_get(v___x_2843_, 3);
v_traceState_2848_ = lean_ctor_get(v___x_2843_, 4);
v_messages_2849_ = lean_ctor_get(v___x_2843_, 6);
v_infoState_2850_ = lean_ctor_get(v___x_2843_, 7);
v_snapshotTasks_2851_ = lean_ctor_get(v___x_2843_, 8);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; 
v_unused_2879_ = lean_ctor_get(v___x_2843_, 5);
lean_dec(v_unused_2879_);
v___x_2853_ = v___x_2843_;
v_isShared_2854_ = v_isSharedCheck_2878_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_snapshotTasks_2851_);
lean_inc(v_infoState_2850_);
lean_inc(v_messages_2849_);
lean_inc(v_traceState_2848_);
lean_inc(v_auxDeclNGen_2847_);
lean_inc(v_ngen_2846_);
lean_inc(v_nextMacroScope_2845_);
lean_inc(v_env_2844_);
lean_dec(v___x_2843_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2878_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2858_; 
v___x_2855_ = l_Lean_Meta_Match_Extension_addMatcherInfo(v_env_2844_, v_matcherName_2838_, v_info_2839_);
v___x_2856_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 5, v___x_2856_);
lean_ctor_set(v___x_2853_, 0, v___x_2855_);
v___x_2858_ = v___x_2853_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2855_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_nextMacroScope_2845_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_ngen_2846_);
lean_ctor_set(v_reuseFailAlloc_2877_, 3, v_auxDeclNGen_2847_);
lean_ctor_set(v_reuseFailAlloc_2877_, 4, v_traceState_2848_);
lean_ctor_set(v_reuseFailAlloc_2877_, 5, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2877_, 6, v_messages_2849_);
lean_ctor_set(v_reuseFailAlloc_2877_, 7, v_infoState_2850_);
lean_ctor_set(v_reuseFailAlloc_2877_, 8, v_snapshotTasks_2851_);
v___x_2858_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v_mctx_2861_; lean_object* v_zetaDeltaFVarIds_2862_; lean_object* v_postponed_2863_; lean_object* v_diag_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2875_; 
v___x_2859_ = lean_st_ref_put(v___y_2841_, v___x_2858_);
v___x_2860_ = lean_st_ref_take(v___y_2840_);
v_mctx_2861_ = lean_ctor_get(v___x_2860_, 0);
v_zetaDeltaFVarIds_2862_ = lean_ctor_get(v___x_2860_, 2);
v_postponed_2863_ = lean_ctor_get(v___x_2860_, 3);
v_diag_2864_ = lean_ctor_get(v___x_2860_, 4);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2875_ == 0)
{
lean_object* v_unused_2876_; 
v_unused_2876_ = lean_ctor_get(v___x_2860_, 1);
lean_dec(v_unused_2876_);
v___x_2866_ = v___x_2860_;
v_isShared_2867_ = v_isSharedCheck_2875_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_diag_2864_);
lean_inc(v_postponed_2863_);
lean_inc(v_zetaDeltaFVarIds_2862_);
lean_inc(v_mctx_2861_);
lean_dec(v___x_2860_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2875_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2868_ = lean_box(0);
v___x_2869_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 1, v___x_2869_);
v___x_2871_ = v___x_2866_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_mctx_2861_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2874_, 2, v_zetaDeltaFVarIds_2862_);
lean_ctor_set(v_reuseFailAlloc_2874_, 3, v_postponed_2863_);
lean_ctor_set(v_reuseFailAlloc_2874_, 4, v_diag_2864_);
v___x_2871_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = lean_st_ref_put(v___y_2840_, v___x_2871_);
v___x_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2868_);
return v___x_2873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object* v_matcherName_2880_, lean_object* v_info_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2880_, v_info_2881_, v___y_2882_, v___y_2883_);
lean_dec(v___y_2883_);
lean_dec(v___y_2882_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object* v_matcherName_2886_, lean_object* v_info_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2886_, v_info_2887_, v___y_2889_, v___y_2891_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object* v_matcherName_2894_, lean_object* v_info_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(v_matcherName_2894_, v_info_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object* v_motive_2902_, lean_object* v___x_2903_, lean_object* v_newEqs1_2904_, uint8_t v___x_2905_, uint8_t v___x_2906_, uint8_t v___x_2907_, lean_object* v_ism1_x27_2908_, lean_object* v_ism2_x27_2909_, lean_object* v_newRefls1_2910_, lean_object* v_newEqs2_2911_, lean_object* v_newRefls2_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2918_ = l_Lean_mkAppN(v_motive_2902_, v___x_2903_);
v___x_2919_ = l_Array_append___redArg(v_newEqs1_2904_, v_newEqs2_2911_);
v___x_2920_ = l_Lean_Meta_mkForallFVars(v___x_2919_, v___x_2918_, v___x_2905_, v___x_2906_, v___x_2906_, v___x_2907_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2921_);
lean_dec_ref_known(v___x_2920_, 1);
v___x_2922_ = l_Array_append___redArg(v_ism1_x27_2908_, v_ism2_x27_2909_);
v___x_2923_ = l_Lean_Meta_mkLambdaFVars(v___x_2922_, v_a_2921_, v___x_2905_, v___x_2906_, v___x_2905_, v___x_2906_, v___x_2907_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2933_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2926_ = v___x_2923_;
v_isShared_2927_ = v_isSharedCheck_2933_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2923_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2933_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2931_; 
v___x_2928_ = l_Array_append___redArg(v_newRefls1_2910_, v_newRefls2_2912_);
v___x_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2929_, 0, v_a_2924_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 0, v___x_2929_);
v___x_2931_ = v___x_2926_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v___x_2929_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_dec_ref(v_newRefls1_2910_);
v_a_2934_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2923_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2923_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
else
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v_newRefls1_2910_);
lean_dec_ref(v_ism1_x27_2908_);
v_a_2942_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2920_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2920_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object* v_motive_2950_, lean_object* v___x_2951_, lean_object* v_newEqs1_2952_, lean_object* v___x_2953_, lean_object* v___x_2954_, lean_object* v___x_2955_, lean_object* v_ism1_x27_2956_, lean_object* v_ism2_x27_2957_, lean_object* v_newRefls1_2958_, lean_object* v_newEqs2_2959_, lean_object* v_newRefls2_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_){
_start:
{
uint8_t v___x_15073__boxed_2966_; uint8_t v___x_15074__boxed_2967_; uint8_t v___x_15075__boxed_2968_; lean_object* v_res_2969_; 
v___x_15073__boxed_2966_ = lean_unbox(v___x_2953_);
v___x_15074__boxed_2967_ = lean_unbox(v___x_2954_);
v___x_15075__boxed_2968_ = lean_unbox(v___x_2955_);
v_res_2969_ = l_Lean_mkCasesOnSameCtor___lam__0(v_motive_2950_, v___x_2951_, v_newEqs1_2952_, v___x_15073__boxed_2966_, v___x_15074__boxed_2967_, v___x_15075__boxed_2968_, v_ism1_x27_2956_, v_ism2_x27_2957_, v_newRefls1_2958_, v_newEqs2_2959_, v_newRefls2_2960_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec_ref(v_newRefls2_2960_);
lean_dec_ref(v_newEqs2_2959_);
lean_dec_ref(v_ism2_x27_2957_);
lean_dec_ref(v___x_2951_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object* v_motive_2970_, lean_object* v___x_2971_, uint8_t v___x_2972_, uint8_t v___x_2973_, uint8_t v___x_2974_, lean_object* v_ism1_x27_2975_, lean_object* v_ism2_x27_2976_, lean_object* v_is_2977_, lean_object* v___x_2978_, lean_object* v_newEqs1_2979_, lean_object* v_newRefls1_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___f_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2986_ = lean_box(v___x_2972_);
v___x_2987_ = lean_box(v___x_2973_);
v___x_2988_ = lean_box(v___x_2974_);
lean_inc_ref(v_ism2_x27_2976_);
v___f_2989_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__0___boxed), 16, 9);
lean_closure_set(v___f_2989_, 0, v_motive_2970_);
lean_closure_set(v___f_2989_, 1, v___x_2971_);
lean_closure_set(v___f_2989_, 2, v_newEqs1_2979_);
lean_closure_set(v___f_2989_, 3, v___x_2986_);
lean_closure_set(v___f_2989_, 4, v___x_2987_);
lean_closure_set(v___f_2989_, 5, v___x_2988_);
lean_closure_set(v___f_2989_, 6, v_ism1_x27_2975_);
lean_closure_set(v___f_2989_, 7, v_ism2_x27_2976_);
lean_closure_set(v___f_2989_, 8, v_newRefls1_2980_);
v___x_2990_ = lean_array_push(v_is_2977_, v___x_2978_);
v___x_2991_ = l_Lean_Meta_withNewEqs___redArg(v___x_2990_, v_ism2_x27_2976_, v___f_2989_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object* v_motive_2992_, lean_object* v___x_2993_, lean_object* v___x_2994_, lean_object* v___x_2995_, lean_object* v___x_2996_, lean_object* v_ism1_x27_2997_, lean_object* v_ism2_x27_2998_, lean_object* v_is_2999_, lean_object* v___x_3000_, lean_object* v_newEqs1_3001_, lean_object* v_newRefls1_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
uint8_t v___x_15164__boxed_3008_; uint8_t v___x_15165__boxed_3009_; uint8_t v___x_15166__boxed_3010_; lean_object* v_res_3011_; 
v___x_15164__boxed_3008_ = lean_unbox(v___x_2994_);
v___x_15165__boxed_3009_ = lean_unbox(v___x_2995_);
v___x_15166__boxed_3010_ = lean_unbox(v___x_2996_);
v_res_3011_ = l_Lean_mkCasesOnSameCtor___lam__1(v_motive_2992_, v___x_2993_, v___x_15164__boxed_3008_, v___x_15165__boxed_3009_, v___x_15166__boxed_3010_, v_ism1_x27_2997_, v_ism2_x27_2998_, v_is_2999_, v___x_3000_, v_newEqs1_3001_, v_newRefls1_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object* v___x_3012_, uint8_t v___x_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Lean_addDecl(v___x_3012_, v___x_3013_, v___y_3016_, v___y_3017_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object* v___x_3020_, lean_object* v___x_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_){
_start:
{
uint8_t v___x_15206__boxed_3027_; lean_object* v_res_3028_; 
v___x_15206__boxed_3027_ = lean_unbox(v___x_3021_);
v_res_3028_ = l_Lean_mkCasesOnSameCtor___lam__2(v___x_3020_, v___x_15206__boxed_3027_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
return v_res_3028_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0));
v___x_3031_ = l_Lean_stringToMessageData(v___x_3030_);
return v___x_3031_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2));
v___x_3034_ = l_Lean_stringToMessageData(v___x_3033_);
return v___x_3034_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3040_ = lean_box(0);
v___x_3041_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6));
v___x_3042_ = l_Lean_mkConst(v___x_3041_, v___x_3040_);
return v___x_3042_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3044_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8));
v___x_3045_ = l_Lean_stringToMessageData(v___x_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object* v___x_3046_, lean_object* v_a_3047_, lean_object* v___x_3048_, lean_object* v_zs1_3049_, lean_object* v_snd_3050_, uint8_t v___x_3051_, uint8_t v___x_3052_, uint8_t v___x_3053_, lean_object* v_alts_3054_, lean_object* v_zs2_3055_, lean_object* v___ctorRet2_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3062_ = lean_array_get_borrowed(v___x_3046_, v_a_3047_, v___x_3048_);
lean_inc_ref(v_zs1_3049_);
v___x_3063_ = l_Array_append___redArg(v_zs1_3049_, v_zs2_3055_);
lean_inc(v___x_3062_);
v___x_3064_ = l_Lean_Meta_instantiateForall(v___x_3062_, v___x_3063_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3064_, 1);
v___x_3066_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_3067_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3065_, v___x_3066_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = l_Lean_Expr_mvarId_x21(v_a_3068_);
v___x_3070_ = lean_array_get_size(v_snd_3050_);
v___x_3071_ = lean_box(0);
v___x_3072_ = lean_box(0);
lean_inc_ref(v___y_3059_);
v___x_3073_ = l_Lean_Meta_Cases_unifyEqs_x3f(v___x_3070_, v___x_3069_, v___x_3071_, v___x_3072_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3073_, 1);
if (lean_obj_tag(v_a_3074_) == 1)
{
lean_object* v_val_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3122_; 
v_val_3075_ = lean_ctor_get(v_a_3074_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_a_3074_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3077_ = v_a_3074_;
v_isShared_3078_ = v_isSharedCheck_3122_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_val_3075_);
lean_dec(v_a_3074_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3122_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v_fst_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3120_; 
v_fst_3079_ = lean_ctor_get(v_val_3075_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v_val_3075_);
if (v_isSharedCheck_3120_ == 0)
{
lean_object* v_unused_3121_; 
v_unused_3121_ = lean_ctor_get(v_val_3075_, 1);
lean_dec(v_unused_3121_);
v___x_3081_ = v_val_3075_;
v_isShared_3082_ = v_isSharedCheck_3120_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_fst_3079_);
lean_dec(v_val_3075_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3120_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___y_3084_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
v___x_3112_ = lean_array_get_borrowed(v___x_3046_, v_alts_3054_, v___x_3048_);
v___x_3113_ = lean_array_get_size(v_zs1_3049_);
lean_dec_ref(v_zs1_3049_);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = lean_nat_dec_eq(v___x_3113_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_inc(v___x_3112_);
v___y_3084_ = v___x_3112_;
goto v___jp_3083_;
}
else
{
lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = lean_array_get_size(v_zs2_3055_);
v___x_3117_ = lean_nat_dec_eq(v___x_3116_, v___x_3114_);
if (v___x_3117_ == 0)
{
lean_inc(v___x_3112_);
v___y_3084_ = v___x_3112_;
goto v___jp_3083_;
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3118_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7);
lean_inc(v___x_3112_);
v___x_3119_ = l_Lean_Expr_app___override(v___x_3112_, v___x_3118_);
v___y_3084_ = v___x_3119_;
goto v___jp_3083_;
}
}
v___jp_3083_:
{
uint8_t v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3085_ = 0;
v___x_3086_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3086_, 0, v___x_3085_);
lean_ctor_set_uint8(v___x_3086_, 1, v___x_3051_);
lean_ctor_set_uint8(v___x_3086_, 2, v___x_3052_);
lean_ctor_set_uint8(v___x_3086_, 3, v___x_3051_);
lean_inc_ref(v___y_3084_);
lean_inc(v_fst_3079_);
v___x_3087_ = l_Lean_MVarId_apply(v_fst_3079_, v___y_3084_, v___x_3086_, v___x_3072_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref_known(v___x_3087_, 1);
if (lean_obj_tag(v_a_3088_) == 0)
{
lean_object* v___x_3089_; 
lean_dec_ref(v___y_3084_);
lean_del_object(v___x_3081_);
lean_dec(v_fst_3079_);
lean_del_object(v___x_3077_);
v___x_3089_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_a_3068_, v___y_3058_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = l_Lean_Meta_mkLambdaFVars(v___x_3063_, v_a_3090_, v___x_3052_, v___x_3051_, v___x_3052_, v___x_3051_, v___x_3053_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3091_;
}
else
{
lean_dec_ref(v___x_3063_);
return v___x_3089_;
}
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3095_; 
lean_dec(v_a_3088_);
lean_dec(v_a_3068_);
lean_dec_ref(v___x_3063_);
v___x_3092_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1);
v___x_3093_ = l_Lean_MessageData_ofExpr(v___y_3084_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set_tag(v___x_3081_, 7);
lean_ctor_set(v___x_3081_, 1, v___x_3093_);
lean_ctor_set(v___x_3081_, 0, v___x_3092_);
v___x_3095_ = v___x_3081_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3092_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v___x_3093_);
v___x_3095_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3099_; 
v___x_3096_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3);
v___x_3097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3095_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 0, v_fst_3079_);
v___x_3099_ = v___x_3077_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_fst_3079_);
v___x_3099_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3097_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3100_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3101_;
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
lean_dec_ref(v___y_3084_);
lean_del_object(v___x_3081_);
lean_dec(v_fst_3079_);
lean_del_object(v___x_3077_);
lean_dec(v_a_3068_);
lean_dec_ref(v___x_3063_);
v_a_3104_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3106_ = v___x_3087_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3087_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3107_ == 0)
{
v___x_3109_ = v___x_3106_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3104_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
lean_dec(v_a_3074_);
lean_dec(v_a_3068_);
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_zs1_3049_);
v___x_3123_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9);
v___x_3124_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3123_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3124_;
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v_a_3068_);
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_zs1_3049_);
v_a_3125_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3073_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3073_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_zs1_3049_);
return v___x_3067_;
}
}
else
{
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_zs1_3049_);
return v___x_3064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object* v___x_3133_, lean_object* v_a_3134_, lean_object* v___x_3135_, lean_object* v_zs1_3136_, lean_object* v_snd_3137_, lean_object* v___x_3138_, lean_object* v___x_3139_, lean_object* v___x_3140_, lean_object* v_alts_3141_, lean_object* v_zs2_3142_, lean_object* v___ctorRet2_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
uint8_t v___x_15268__boxed_3149_; uint8_t v___x_15269__boxed_3150_; uint8_t v___x_15270__boxed_3151_; lean_object* v_res_3152_; 
v___x_15268__boxed_3149_ = lean_unbox(v___x_3138_);
v___x_15269__boxed_3150_ = lean_unbox(v___x_3139_);
v___x_15270__boxed_3151_ = lean_unbox(v___x_3140_);
v_res_3152_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(v___x_3133_, v_a_3134_, v___x_3135_, v_zs1_3136_, v_snd_3137_, v___x_15268__boxed_3149_, v___x_15269__boxed_3150_, v___x_15270__boxed_3151_, v_alts_3141_, v_zs2_3142_, v___ctorRet2_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec_ref(v___ctorRet2_3143_);
lean_dec_ref(v_zs2_3142_);
lean_dec_ref(v_alts_3141_);
lean_dec_ref(v_snd_3137_);
lean_dec(v___x_3135_);
lean_dec_ref(v_a_3134_);
lean_dec_ref(v___x_3133_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object* v___x_3153_, lean_object* v_a_3154_, lean_object* v___x_3155_, lean_object* v_snd_3156_, uint8_t v___x_3157_, uint8_t v___x_3158_, uint8_t v___x_3159_, lean_object* v_alts_3160_, lean_object* v_a_3161_, lean_object* v_zs1_3162_, lean_object* v___ctorRet1_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___f_3172_; lean_object* v___x_3173_; 
v___x_3169_ = lean_box(v___x_3157_);
v___x_3170_ = lean_box(v___x_3158_);
v___x_3171_ = lean_box(v___x_3159_);
v___f_3172_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3172_, 0, v___x_3153_);
lean_closure_set(v___f_3172_, 1, v_a_3154_);
lean_closure_set(v___f_3172_, 2, v___x_3155_);
lean_closure_set(v___f_3172_, 3, v_zs1_3162_);
lean_closure_set(v___f_3172_, 4, v_snd_3156_);
lean_closure_set(v___f_3172_, 5, v___x_3169_);
lean_closure_set(v___f_3172_, 6, v___x_3170_);
lean_closure_set(v___f_3172_, 7, v___x_3171_);
lean_closure_set(v___f_3172_, 8, v_alts_3160_);
v___x_3173_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3161_, v___f_3172_, v___x_3158_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object* v___x_3174_, lean_object* v_a_3175_, lean_object* v___x_3176_, lean_object* v_snd_3177_, lean_object* v___x_3178_, lean_object* v___x_3179_, lean_object* v___x_3180_, lean_object* v_alts_3181_, lean_object* v_a_3182_, lean_object* v_zs1_3183_, lean_object* v___ctorRet1_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
uint8_t v___x_15467__boxed_3190_; uint8_t v___x_15468__boxed_3191_; uint8_t v___x_15469__boxed_3192_; lean_object* v_res_3193_; 
v___x_15467__boxed_3190_ = lean_unbox(v___x_3178_);
v___x_15468__boxed_3191_ = lean_unbox(v___x_3179_);
v___x_15469__boxed_3192_ = lean_unbox(v___x_3180_);
v_res_3193_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(v___x_3174_, v_a_3175_, v___x_3176_, v_snd_3177_, v___x_15467__boxed_3190_, v___x_15468__boxed_3191_, v___x_15469__boxed_3192_, v_alts_3181_, v_a_3182_, v_zs1_3183_, v___ctorRet1_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
lean_dec(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec_ref(v___ctorRet1_3184_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object* v_tail_3194_, lean_object* v_params_3195_, lean_object* v_a_3196_, lean_object* v_snd_3197_, lean_object* v_alts_3198_, size_t v_sz_3199_, size_t v_i_3200_, lean_object* v_bs_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
uint8_t v___x_3207_; 
v___x_3207_ = lean_usize_dec_lt(v_i_3200_, v_sz_3199_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
lean_dec_ref(v_alts_3198_);
lean_dec_ref(v_snd_3197_);
lean_dec_ref(v_a_3196_);
lean_dec(v_tail_3194_);
v___x_3208_ = l_unsafeCast___redArg(v_bs_3201_);
lean_dec_ref(v_bs_3201_);
v___x_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
return v___x_3209_;
}
else
{
lean_object* v___x_3210_; uint8_t v___x_3211_; uint8_t v___x_3212_; lean_object* v_v_3213_; lean_object* v___x_3214_; lean_object* v_bs_x27_3215_; lean_object* v___y_3217_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3210_ = l_Lean_instInhabitedExpr;
v___x_3211_ = 0;
v___x_3212_ = 1;
v_v_3213_ = lean_array_uget(v_bs_3201_, v_i_3200_);
v___x_3214_ = lean_unsigned_to_nat(0u);
v_bs_x27_3215_ = lean_array_uset(v_bs_3201_, v_i_3200_, v___x_3214_);
v___x_3232_ = lean_usize_to_nat(v_i_3200_);
v___x_3233_ = l_unsafeCast___redArg(v_v_3213_);
lean_dec(v_v_3213_);
lean_inc(v_tail_3194_);
v___x_3234_ = l_Lean_mkConst(v___x_3233_, v_tail_3194_);
v___x_3235_ = l_Lean_mkAppN(v___x_3234_, v_params_3195_);
lean_inc(v___y_3205_);
lean_inc_ref(v___y_3204_);
lean_inc(v___y_3203_);
lean_inc_ref(v___y_3202_);
v___x_3236_ = lean_infer_type(v___x_3235_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___f_3241_; lean_object* v___x_3242_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc_n(v_a_3237_, 2);
lean_dec_ref_known(v___x_3236_, 1);
v___x_3238_ = lean_box(v___x_3207_);
v___x_3239_ = lean_box(v___x_3211_);
v___x_3240_ = lean_box(v___x_3212_);
lean_inc_ref(v_alts_3198_);
lean_inc_ref(v_snd_3197_);
lean_inc_ref(v_a_3196_);
v___f_3241_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3241_, 0, v___x_3210_);
lean_closure_set(v___f_3241_, 1, v_a_3196_);
lean_closure_set(v___f_3241_, 2, v___x_3232_);
lean_closure_set(v___f_3241_, 3, v_snd_3197_);
lean_closure_set(v___f_3241_, 4, v___x_3238_);
lean_closure_set(v___f_3241_, 5, v___x_3239_);
lean_closure_set(v___f_3241_, 6, v___x_3240_);
lean_closure_set(v___f_3241_, 7, v_alts_3198_);
lean_closure_set(v___f_3241_, 8, v_a_3237_);
v___x_3242_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3237_, v___f_3241_, v___x_3211_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
v___y_3217_ = v___x_3242_;
goto v___jp_3216_;
}
else
{
lean_dec(v___x_3232_);
v___y_3217_ = v___x_3236_;
goto v___jp_3216_;
}
v___jp_3216_:
{
if (lean_obj_tag(v___y_3217_) == 0)
{
lean_object* v_a_3218_; size_t v___x_3219_; size_t v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_a_3218_ = lean_ctor_get(v___y_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___y_3217_, 1);
v___x_3219_ = ((size_t)1ULL);
v___x_3220_ = lean_usize_add(v_i_3200_, v___x_3219_);
v___x_3221_ = l_unsafeCast___redArg(v_a_3218_);
lean_dec(v_a_3218_);
v___x_3222_ = lean_array_uset(v_bs_x27_3215_, v_i_3200_, v___x_3221_);
v_i_3200_ = v___x_3220_;
v_bs_3201_ = v___x_3222_;
goto _start;
}
else
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
lean_dec_ref(v_bs_x27_3215_);
lean_dec_ref(v_alts_3198_);
lean_dec_ref(v_snd_3197_);
lean_dec_ref(v_a_3196_);
lean_dec(v_tail_3194_);
v_a_3224_ = lean_ctor_get(v___y_3217_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___y_3217_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3226_ = v___y_3217_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___y_3217_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_a_3224_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object* v_tail_3243_, lean_object* v_params_3244_, lean_object* v_a_3245_, lean_object* v_snd_3246_, lean_object* v_alts_3247_, lean_object* v_sz_3248_, lean_object* v_i_3249_, lean_object* v_bs_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
size_t v_sz_boxed_3256_; size_t v_i_boxed_3257_; lean_object* v_res_3258_; 
v_sz_boxed_3256_ = lean_unbox_usize(v_sz_3248_);
lean_dec(v_sz_3248_);
v_i_boxed_3257_ = lean_unbox_usize(v_i_3249_);
lean_dec(v_i_3249_);
v_res_3258_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3243_, v_params_3244_, v_a_3245_, v_snd_3246_, v_alts_3247_, v_sz_boxed_3256_, v_i_boxed_3257_, v_bs_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec_ref(v_params_3244_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object* v_tail_3259_, lean_object* v_params_3260_, lean_object* v_a_3261_, lean_object* v_snd_3262_, lean_object* v_alts_3263_, lean_object* v_as_3264_, size_t v_sz_3265_, size_t v_i_3266_, lean_object* v_bs_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v___x_3273_; 
v___x_3273_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3259_, v_params_3260_, v_a_3261_, v_snd_3262_, v_alts_3263_, v_sz_3265_, v_i_3266_, v_bs_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object* v_tail_3274_, lean_object* v_params_3275_, lean_object* v_a_3276_, lean_object* v_snd_3277_, lean_object* v_alts_3278_, lean_object* v_as_3279_, lean_object* v_sz_3280_, lean_object* v_i_3281_, lean_object* v_bs_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_){
_start:
{
size_t v_sz_boxed_3288_; size_t v_i_boxed_3289_; lean_object* v_res_3290_; 
v_sz_boxed_3288_ = lean_unbox_usize(v_sz_3280_);
lean_dec(v_sz_3280_);
v_i_boxed_3289_ = lean_unbox_usize(v_i_3281_);
lean_dec(v_i_3281_);
v_res_3290_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(v_tail_3274_, v_params_3275_, v_a_3276_, v_snd_3277_, v_alts_3278_, v_as_3279_, v_sz_boxed_3288_, v_i_boxed_3289_, v_bs_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_);
lean_dec(v___y_3286_);
lean_dec_ref(v___y_3285_);
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec_ref(v_as_3279_);
lean_dec_ref(v_params_3275_);
return v_res_3290_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = lean_box(0);
v___x_3292_ = lean_unsigned_to_nat(16u);
v___x_3293_ = lean_mk_array(v___x_3292_, v___x_3291_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object* v_motive_3294_, lean_object* v___x_3295_, uint8_t v___x_3296_, uint8_t v___x_3297_, uint8_t v___x_3298_, lean_object* v_ism1_x27_3299_, lean_object* v_is_3300_, lean_object* v___x_3301_, lean_object* v___x_3302_, lean_object* v___x_3303_, lean_object* v___x_3304_, lean_object* v_params_3305_, lean_object* v___x_3306_, lean_object* v___x_3307_, lean_object* v_heq_3308_, lean_object* v_val_3309_, lean_object* v_tail_3310_, lean_object* v_alts_3311_, lean_object* v___x_3312_, size_t v_sz_3313_, size_t v___x_3314_, lean_object* v___x_3315_, lean_object* v___x_3316_, lean_object* v_declName_3317_, lean_object* v_levelParams_3318_, lean_object* v_numIndices_3319_, lean_object* v___x_3320_, lean_object* v___x_3321_, lean_object* v_numParams_3322_, lean_object* v_snd_3323_, lean_object* v_ism2_x27_3324_, lean_object* v_x_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___f_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3331_ = lean_box(v___x_3296_);
v___x_3332_ = lean_box(v___x_3297_);
v___x_3333_ = lean_box(v___x_3298_);
lean_inc_ref(v___x_3301_);
lean_inc_ref_n(v_is_3300_, 2);
lean_inc_ref(v_ism1_x27_3299_);
lean_inc_ref(v_motive_3294_);
v___f_3334_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3334_, 0, v_motive_3294_);
lean_closure_set(v___f_3334_, 1, v___x_3295_);
lean_closure_set(v___f_3334_, 2, v___x_3331_);
lean_closure_set(v___f_3334_, 3, v___x_3332_);
lean_closure_set(v___f_3334_, 4, v___x_3333_);
lean_closure_set(v___f_3334_, 5, v_ism1_x27_3299_);
lean_closure_set(v___f_3334_, 6, v_ism2_x27_3324_);
lean_closure_set(v___f_3334_, 7, v_is_3300_);
lean_closure_set(v___f_3334_, 8, v___x_3301_);
lean_inc_ref(v___x_3302_);
v___x_3335_ = lean_array_push(v_is_3300_, v___x_3302_);
v___x_3336_ = l_Lean_Meta_withNewEqs___redArg(v___x_3335_, v_ism1_x27_3299_, v___f_3334_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v_fst_3338_; lean_object* v_snd_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3444_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3337_);
lean_dec_ref_known(v___x_3336_, 1);
v_fst_3338_ = lean_ctor_get(v_a_3337_, 0);
v_snd_3339_ = lean_ctor_get(v_a_3337_, 1);
v_isSharedCheck_3444_ = !lean_is_exclusive(v_a_3337_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3341_ = v_a_3337_;
v_isShared_3342_ = v_isSharedCheck_3444_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_snd_3339_);
lean_inc(v_fst_3338_);
lean_dec(v_a_3337_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3444_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3343_ = l_Lean_mkConst(v___x_3303_, v___x_3304_);
v___x_3344_ = l_Lean_mkAppN(v___x_3343_, v_params_3305_);
v___x_3345_ = l_Lean_Expr_app___override(v___x_3344_, v_fst_3338_);
lean_inc_ref(v_is_3300_);
v___x_3346_ = l_Array_append___redArg(v_is_3300_, v___x_3306_);
v___x_3347_ = l_Array_append___redArg(v___x_3346_, v_is_3300_);
v___x_3348_ = l_Array_append___redArg(v___x_3347_, v___x_3307_);
v___x_3349_ = l_Lean_mkAppN(v___x_3345_, v___x_3348_);
lean_dec_ref(v___x_3348_);
lean_inc_ref(v_heq_3308_);
v___x_3350_ = l_Lean_Expr_app___override(v___x_3349_, v_heq_3308_);
v___x_3351_ = l_Lean_InductiveVal_numCtors(v_val_3309_);
lean_inc_ref(v___x_3350_);
v___x_3352_ = l_Lean_Meta_inferArgumentTypesN(v___x_3351_, v___x_3350_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_14429__overap_3357_; lean_object* v___x_3358_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v___x_3352_, 1);
v___x_3354_ = lean_box_usize(v_sz_3313_);
v___x_3355_ = lean_box_usize(v___x_3314_);
lean_inc_ref(v_alts_3311_);
lean_inc(v_snd_3339_);
lean_inc_ref(v_params_3305_);
v___x_3356_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed), 14, 9);
lean_closure_set(v___x_3356_, 0, v_tail_3310_);
lean_closure_set(v___x_3356_, 1, v_params_3305_);
lean_closure_set(v___x_3356_, 2, v_a_3353_);
lean_closure_set(v___x_3356_, 3, v_snd_3339_);
lean_closure_set(v___x_3356_, 4, v_alts_3311_);
lean_closure_set(v___x_3356_, 5, v___x_3312_);
lean_closure_set(v___x_3356_, 6, v___x_3354_);
lean_closure_set(v___x_3356_, 7, v___x_3355_);
lean_closure_set(v___x_3356_, 8, v___x_3315_);
v___x_14429__overap_3357_ = l_unsafeCast___redArg(v___x_3356_);
lean_dec_ref(v___x_3356_);
lean_inc(v___y_3329_);
lean_inc_ref(v___y_3328_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3326_);
v___x_3358_ = lean_apply_5(v___x_14429__overap_3357_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, lean_box(0));
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
lean_dec_ref_known(v___x_3358_, 1);
v___x_3360_ = l_Lean_mkAppN(v___x_3350_, v_a_3359_);
lean_dec(v_a_3359_);
v___x_3361_ = l_Lean_mkAppN(v___x_3360_, v_snd_3339_);
lean_dec(v_snd_3339_);
lean_inc_ref(v___x_3316_);
v___x_3362_ = lean_array_push(v___x_3316_, v_motive_3294_);
v___x_3363_ = l_Array_append___redArg(v_params_3305_, v___x_3362_);
lean_dec_ref(v___x_3362_);
v___x_3364_ = l_Array_append___redArg(v___x_3363_, v_is_3300_);
lean_dec_ref(v_is_3300_);
v___x_3365_ = lean_unsigned_to_nat(2u);
v___x_3366_ = lean_mk_empty_array_with_capacity(v___x_3365_);
v___x_3367_ = lean_array_push(v___x_3366_, v___x_3302_);
v___x_3368_ = lean_array_push(v___x_3367_, v___x_3301_);
v___x_3369_ = l_Array_append___redArg(v___x_3364_, v___x_3368_);
lean_dec_ref(v___x_3368_);
v___x_3370_ = lean_array_push(v___x_3316_, v_heq_3308_);
v___x_3371_ = l_Array_append___redArg(v___x_3369_, v___x_3370_);
lean_dec_ref(v___x_3370_);
v___x_3372_ = l_Array_append___redArg(v___x_3371_, v_alts_3311_);
lean_dec_ref(v_alts_3311_);
v___x_3373_ = l_Lean_Meta_mkLambdaFVars(v___x_3372_, v___x_3361_, v___x_3296_, v___x_3297_, v___x_3296_, v___x_3297_, v___x_3298_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3375_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc_n(v_a_3374_, 2);
lean_dec_ref_known(v___x_3373_, 1);
lean_inc(v___y_3329_);
lean_inc_ref(v___y_3328_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3326_);
v___x_3375_ = lean_infer_type(v_a_3374_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3411_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref_known(v___x_3375_, 1);
v___x_3377_ = lean_box(1);
lean_inc(v_declName_3317_);
v___x_3378_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_3317_, v_levelParams_3318_, v_a_3376_, v_a_3374_, v___x_3377_, v___y_3329_);
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3381_ = v___x_3378_;
v_isShared_3382_ = v_isSharedCheck_3411_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3378_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3411_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set_tag(v___x_3381_, 1);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3385_; lean_object* v___f_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3396_; 
v___x_3385_ = lean_box(v___x_3296_);
lean_inc_ref(v___x_3384_);
v___f_3386_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3386_, 0, v___x_3384_);
lean_closure_set(v___f_3386_, 1, v___x_3385_);
v___x_3387_ = lean_nat_add(v_numIndices_3319_, v___x_3320_);
lean_inc(v___x_3321_);
v___x_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3321_);
v___x_3389_ = lean_box(0);
v___x_3390_ = lean_mk_empty_array_with_capacity(v___x_3320_);
v___x_3391_ = lean_array_push(v___x_3390_, v___x_3389_);
v___x_3392_ = lean_array_push(v___x_3391_, v___x_3389_);
v___x_3393_ = lean_array_push(v___x_3392_, v___x_3389_);
v___x_3394_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___lam__3___closed__0, &l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once, _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0);
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 1, v___x_3394_);
lean_ctor_set(v___x_3341_, 0, v___x_3321_);
v___x_3396_ = v___x_3341_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3321_);
lean_ctor_set(v_reuseFailAlloc_3409_, 1, v___x_3394_);
v___x_3396_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
lean_object* v___x_3397_; uint8_t v___y_3399_; uint8_t v___x_3408_; 
v___x_3397_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3397_, 0, v_numParams_3322_);
lean_ctor_set(v___x_3397_, 1, v___x_3387_);
lean_ctor_set(v___x_3397_, 2, v_snd_3323_);
lean_ctor_set(v___x_3397_, 3, v___x_3388_);
lean_ctor_set(v___x_3397_, 4, v___x_3393_);
lean_ctor_set(v___x_3397_, 5, v___x_3396_);
v___x_3408_ = l_Lean_isPrivateName(v_declName_3317_);
if (v___x_3408_ == 0)
{
v___y_3399_ = v___x_3297_;
goto v___jp_3398_;
}
else
{
v___y_3399_ = v___x_3296_;
goto v___jp_3398_;
}
v___jp_3398_:
{
lean_object* v___x_3400_; 
v___x_3400_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_3386_, v___y_3399_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3402_; 
lean_dec_ref_known(v___x_3400_, 1);
v___x_3401_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_3317_);
v___x_3402_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_3401_, v_declName_3317_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v___x_3403_; uint8_t v___x_3404_; lean_object* v___x_3405_; 
lean_dec_ref_known(v___x_3402_, 1);
lean_inc_n(v_declName_3317_, 2);
v___x_3403_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_declName_3317_, v___x_3397_, v___y_3327_, v___y_3329_);
lean_dec_ref(v___x_3403_);
v___x_3404_ = 0;
v___x_3405_ = l_Lean_Meta_setInlineAttribute(v_declName_3317_, v___x_3404_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v___x_3406_; 
lean_dec_ref_known(v___x_3405_, 1);
v___x_3406_ = l_Lean_enableRealizationsForConst(v_declName_3317_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v___x_3407_; 
lean_dec_ref_known(v___x_3406_, 1);
v___x_3407_ = l_Lean_compileDecl(v___x_3384_, v___x_3297_, v___y_3328_, v___y_3329_);
return v___x_3407_;
}
else
{
lean_dec_ref(v___x_3384_);
return v___x_3406_;
}
}
else
{
lean_dec_ref(v___x_3384_);
lean_dec(v_declName_3317_);
return v___x_3405_;
}
}
else
{
lean_dec_ref_known(v___x_3397_, 6);
lean_dec_ref(v___x_3384_);
lean_dec(v_declName_3317_);
return v___x_3402_;
}
}
else
{
lean_dec_ref_known(v___x_3397_, 6);
lean_dec_ref(v___x_3384_);
lean_dec(v_declName_3317_);
return v___x_3400_;
}
}
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_a_3374_);
lean_del_object(v___x_3341_);
lean_dec_ref(v_snd_3323_);
lean_dec(v_numParams_3322_);
lean_dec(v___x_3321_);
lean_dec(v_levelParams_3318_);
lean_dec(v_declName_3317_);
v_a_3412_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3375_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3375_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_del_object(v___x_3341_);
lean_dec_ref(v_snd_3323_);
lean_dec(v_numParams_3322_);
lean_dec(v___x_3321_);
lean_dec(v_levelParams_3318_);
lean_dec(v_declName_3317_);
v_a_3420_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3373_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3373_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v___x_3350_);
lean_del_object(v___x_3341_);
lean_dec(v_snd_3339_);
lean_dec_ref(v_snd_3323_);
lean_dec(v_numParams_3322_);
lean_dec(v___x_3321_);
lean_dec(v_levelParams_3318_);
lean_dec(v_declName_3317_);
lean_dec_ref(v___x_3316_);
lean_dec_ref(v_alts_3311_);
lean_dec_ref(v_heq_3308_);
lean_dec_ref(v_params_3305_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v___x_3301_);
lean_dec_ref(v_is_3300_);
lean_dec_ref(v_motive_3294_);
v_a_3428_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3358_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3358_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
else
{
lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
lean_dec_ref(v___x_3350_);
lean_del_object(v___x_3341_);
lean_dec(v_snd_3339_);
lean_dec_ref(v_snd_3323_);
lean_dec(v_numParams_3322_);
lean_dec(v___x_3321_);
lean_dec(v_levelParams_3318_);
lean_dec(v_declName_3317_);
lean_dec_ref(v___x_3316_);
lean_dec(v___x_3315_);
lean_dec_ref(v___x_3312_);
lean_dec_ref(v_alts_3311_);
lean_dec(v_tail_3310_);
lean_dec_ref(v_heq_3308_);
lean_dec_ref(v_params_3305_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v___x_3301_);
lean_dec_ref(v_is_3300_);
lean_dec_ref(v_motive_3294_);
v_a_3436_ = lean_ctor_get(v___x_3352_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3438_ = v___x_3352_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3352_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
lean_dec_ref(v_snd_3323_);
lean_dec(v_numParams_3322_);
lean_dec(v___x_3321_);
lean_dec(v_levelParams_3318_);
lean_dec(v_declName_3317_);
lean_dec_ref(v___x_3316_);
lean_dec(v___x_3315_);
lean_dec_ref(v___x_3312_);
lean_dec_ref(v_alts_3311_);
lean_dec(v_tail_3310_);
lean_dec_ref(v_heq_3308_);
lean_dec_ref(v_params_3305_);
lean_dec(v___x_3304_);
lean_dec(v___x_3303_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v___x_3301_);
lean_dec_ref(v_is_3300_);
lean_dec_ref(v_motive_3294_);
v_a_3445_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3336_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3336_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object** _args){
lean_object* v_motive_3453_ = _args[0];
lean_object* v___x_3454_ = _args[1];
lean_object* v___x_3455_ = _args[2];
lean_object* v___x_3456_ = _args[3];
lean_object* v___x_3457_ = _args[4];
lean_object* v_ism1_x27_3458_ = _args[5];
lean_object* v_is_3459_ = _args[6];
lean_object* v___x_3460_ = _args[7];
lean_object* v___x_3461_ = _args[8];
lean_object* v___x_3462_ = _args[9];
lean_object* v___x_3463_ = _args[10];
lean_object* v_params_3464_ = _args[11];
lean_object* v___x_3465_ = _args[12];
lean_object* v___x_3466_ = _args[13];
lean_object* v_heq_3467_ = _args[14];
lean_object* v_val_3468_ = _args[15];
lean_object* v_tail_3469_ = _args[16];
lean_object* v_alts_3470_ = _args[17];
lean_object* v___x_3471_ = _args[18];
lean_object* v_sz_3472_ = _args[19];
lean_object* v___x_3473_ = _args[20];
lean_object* v___x_3474_ = _args[21];
lean_object* v___x_3475_ = _args[22];
lean_object* v_declName_3476_ = _args[23];
lean_object* v_levelParams_3477_ = _args[24];
lean_object* v_numIndices_3478_ = _args[25];
lean_object* v___x_3479_ = _args[26];
lean_object* v___x_3480_ = _args[27];
lean_object* v_numParams_3481_ = _args[28];
lean_object* v_snd_3482_ = _args[29];
lean_object* v_ism2_x27_3483_ = _args[30];
lean_object* v_x_3484_ = _args[31];
lean_object* v___y_3485_ = _args[32];
lean_object* v___y_3486_ = _args[33];
lean_object* v___y_3487_ = _args[34];
lean_object* v___y_3488_ = _args[35];
lean_object* v___y_3489_ = _args[36];
_start:
{
uint8_t v___x_15638__boxed_3490_; uint8_t v___x_15639__boxed_3491_; uint8_t v___x_15640__boxed_3492_; size_t v_sz_boxed_3493_; size_t v___x_15650__boxed_3494_; lean_object* v_res_3495_; 
v___x_15638__boxed_3490_ = lean_unbox(v___x_3455_);
v___x_15639__boxed_3491_ = lean_unbox(v___x_3456_);
v___x_15640__boxed_3492_ = lean_unbox(v___x_3457_);
v_sz_boxed_3493_ = lean_unbox_usize(v_sz_3472_);
lean_dec(v_sz_3472_);
v___x_15650__boxed_3494_ = lean_unbox_usize(v___x_3473_);
lean_dec(v___x_3473_);
v_res_3495_ = l_Lean_mkCasesOnSameCtor___lam__3(v_motive_3453_, v___x_3454_, v___x_15638__boxed_3490_, v___x_15639__boxed_3491_, v___x_15640__boxed_3492_, v_ism1_x27_3458_, v_is_3459_, v___x_3460_, v___x_3461_, v___x_3462_, v___x_3463_, v_params_3464_, v___x_3465_, v___x_3466_, v_heq_3467_, v_val_3468_, v_tail_3469_, v_alts_3470_, v___x_3471_, v_sz_boxed_3493_, v___x_15650__boxed_3494_, v___x_3474_, v___x_3475_, v_declName_3476_, v_levelParams_3477_, v_numIndices_3478_, v___x_3479_, v___x_3480_, v_numParams_3481_, v_snd_3482_, v_ism2_x27_3483_, v_x_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
lean_dec(v___y_3486_);
lean_dec_ref(v___y_3485_);
lean_dec_ref(v_x_3484_);
lean_dec(v___x_3479_);
lean_dec(v_numIndices_3478_);
lean_dec_ref(v_val_3468_);
lean_dec_ref(v___x_3466_);
lean_dec_ref(v___x_3465_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object* v_motive_3496_, lean_object* v___x_3497_, uint8_t v___x_3498_, uint8_t v___x_3499_, uint8_t v___x_3500_, lean_object* v_is_3501_, lean_object* v___x_3502_, lean_object* v___x_3503_, lean_object* v___x_3504_, lean_object* v___x_3505_, lean_object* v_params_3506_, lean_object* v___x_3507_, lean_object* v___x_3508_, lean_object* v_heq_3509_, lean_object* v_val_3510_, lean_object* v_tail_3511_, lean_object* v_alts_3512_, lean_object* v___x_3513_, size_t v_sz_3514_, size_t v___x_3515_, lean_object* v___x_3516_, lean_object* v___x_3517_, lean_object* v_declName_3518_, lean_object* v_levelParams_3519_, lean_object* v_numIndices_3520_, lean_object* v___x_3521_, lean_object* v___x_3522_, lean_object* v_numParams_3523_, lean_object* v_snd_3524_, lean_object* v___x_3525_, lean_object* v___x_3526_, lean_object* v_ism1_x27_3527_, lean_object* v_x_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___f_3539_; lean_object* v___x_3540_; 
v___x_3534_ = lean_box(v___x_3498_);
v___x_3535_ = lean_box(v___x_3499_);
v___x_3536_ = lean_box(v___x_3500_);
v___x_3537_ = lean_box_usize(v_sz_3514_);
v___x_3538_ = lean_box_usize(v___x_3515_);
v___f_3539_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__3___boxed), 37, 30);
lean_closure_set(v___f_3539_, 0, v_motive_3496_);
lean_closure_set(v___f_3539_, 1, v___x_3497_);
lean_closure_set(v___f_3539_, 2, v___x_3534_);
lean_closure_set(v___f_3539_, 3, v___x_3535_);
lean_closure_set(v___f_3539_, 4, v___x_3536_);
lean_closure_set(v___f_3539_, 5, v_ism1_x27_3527_);
lean_closure_set(v___f_3539_, 6, v_is_3501_);
lean_closure_set(v___f_3539_, 7, v___x_3502_);
lean_closure_set(v___f_3539_, 8, v___x_3503_);
lean_closure_set(v___f_3539_, 9, v___x_3504_);
lean_closure_set(v___f_3539_, 10, v___x_3505_);
lean_closure_set(v___f_3539_, 11, v_params_3506_);
lean_closure_set(v___f_3539_, 12, v___x_3507_);
lean_closure_set(v___f_3539_, 13, v___x_3508_);
lean_closure_set(v___f_3539_, 14, v_heq_3509_);
lean_closure_set(v___f_3539_, 15, v_val_3510_);
lean_closure_set(v___f_3539_, 16, v_tail_3511_);
lean_closure_set(v___f_3539_, 17, v_alts_3512_);
lean_closure_set(v___f_3539_, 18, v___x_3513_);
lean_closure_set(v___f_3539_, 19, v___x_3537_);
lean_closure_set(v___f_3539_, 20, v___x_3538_);
lean_closure_set(v___f_3539_, 21, v___x_3516_);
lean_closure_set(v___f_3539_, 22, v___x_3517_);
lean_closure_set(v___f_3539_, 23, v_declName_3518_);
lean_closure_set(v___f_3539_, 24, v_levelParams_3519_);
lean_closure_set(v___f_3539_, 25, v_numIndices_3520_);
lean_closure_set(v___f_3539_, 26, v___x_3521_);
lean_closure_set(v___f_3539_, 27, v___x_3522_);
lean_closure_set(v___f_3539_, 28, v_numParams_3523_);
lean_closure_set(v___f_3539_, 29, v_snd_3524_);
v___x_3540_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3525_, v___x_3526_, v___f_3539_, v___x_3498_, v___x_3498_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
return v___x_3540_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object** _args){
lean_object* v_motive_3541_ = _args[0];
lean_object* v___x_3542_ = _args[1];
lean_object* v___x_3543_ = _args[2];
lean_object* v___x_3544_ = _args[3];
lean_object* v___x_3545_ = _args[4];
lean_object* v_is_3546_ = _args[5];
lean_object* v___x_3547_ = _args[6];
lean_object* v___x_3548_ = _args[7];
lean_object* v___x_3549_ = _args[8];
lean_object* v___x_3550_ = _args[9];
lean_object* v_params_3551_ = _args[10];
lean_object* v___x_3552_ = _args[11];
lean_object* v___x_3553_ = _args[12];
lean_object* v_heq_3554_ = _args[13];
lean_object* v_val_3555_ = _args[14];
lean_object* v_tail_3556_ = _args[15];
lean_object* v_alts_3557_ = _args[16];
lean_object* v___x_3558_ = _args[17];
lean_object* v_sz_3559_ = _args[18];
lean_object* v___x_3560_ = _args[19];
lean_object* v___x_3561_ = _args[20];
lean_object* v___x_3562_ = _args[21];
lean_object* v_declName_3563_ = _args[22];
lean_object* v_levelParams_3564_ = _args[23];
lean_object* v_numIndices_3565_ = _args[24];
lean_object* v___x_3566_ = _args[25];
lean_object* v___x_3567_ = _args[26];
lean_object* v_numParams_3568_ = _args[27];
lean_object* v_snd_3569_ = _args[28];
lean_object* v___x_3570_ = _args[29];
lean_object* v___x_3571_ = _args[30];
lean_object* v_ism1_x27_3572_ = _args[31];
lean_object* v_x_3573_ = _args[32];
lean_object* v___y_3574_ = _args[33];
lean_object* v___y_3575_ = _args[34];
lean_object* v___y_3576_ = _args[35];
lean_object* v___y_3577_ = _args[36];
lean_object* v___y_3578_ = _args[37];
_start:
{
uint8_t v___x_15969__boxed_3579_; uint8_t v___x_15970__boxed_3580_; uint8_t v___x_15971__boxed_3581_; size_t v_sz_boxed_3582_; size_t v___x_15981__boxed_3583_; lean_object* v_res_3584_; 
v___x_15969__boxed_3579_ = lean_unbox(v___x_3543_);
v___x_15970__boxed_3580_ = lean_unbox(v___x_3544_);
v___x_15971__boxed_3581_ = lean_unbox(v___x_3545_);
v_sz_boxed_3582_ = lean_unbox_usize(v_sz_3559_);
lean_dec(v_sz_3559_);
v___x_15981__boxed_3583_ = lean_unbox_usize(v___x_3560_);
lean_dec(v___x_3560_);
v_res_3584_ = l_Lean_mkCasesOnSameCtor___lam__4(v_motive_3541_, v___x_3542_, v___x_15969__boxed_3579_, v___x_15970__boxed_3580_, v___x_15971__boxed_3581_, v_is_3546_, v___x_3547_, v___x_3548_, v___x_3549_, v___x_3550_, v_params_3551_, v___x_3552_, v___x_3553_, v_heq_3554_, v_val_3555_, v_tail_3556_, v_alts_3557_, v___x_3558_, v_sz_boxed_3582_, v___x_15981__boxed_3583_, v___x_3561_, v___x_3562_, v_declName_3563_, v_levelParams_3564_, v_numIndices_3565_, v___x_3566_, v___x_3567_, v_numParams_3568_, v_snd_3569_, v___x_3570_, v___x_3571_, v_ism1_x27_3572_, v_x_3573_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_);
lean_dec(v___y_3577_);
lean_dec_ref(v___y_3576_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec_ref(v_x_3573_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object* v_numIndices_3585_, lean_object* v___x_3586_, lean_object* v_motive_3587_, lean_object* v___x_3588_, uint8_t v___x_3589_, uint8_t v___x_3590_, uint8_t v___x_3591_, lean_object* v_is_3592_, lean_object* v___x_3593_, lean_object* v___x_3594_, lean_object* v___x_3595_, lean_object* v___x_3596_, lean_object* v_params_3597_, lean_object* v___x_3598_, lean_object* v___x_3599_, lean_object* v_heq_3600_, lean_object* v_val_3601_, lean_object* v_tail_3602_, lean_object* v___x_3603_, size_t v_sz_3604_, size_t v___x_3605_, lean_object* v___x_3606_, lean_object* v___x_3607_, lean_object* v_declName_3608_, lean_object* v_levelParams_3609_, lean_object* v___x_3610_, lean_object* v___x_3611_, lean_object* v_numParams_3612_, lean_object* v_snd_3613_, lean_object* v___x_3614_, lean_object* v_alts_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___f_3628_; lean_object* v___x_3629_; 
v___x_3621_ = lean_nat_add(v_numIndices_3585_, v___x_3586_);
v___x_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
v___x_3623_ = lean_box(v___x_3589_);
v___x_3624_ = lean_box(v___x_3590_);
v___x_3625_ = lean_box(v___x_3591_);
v___x_3626_ = lean_box_usize(v_sz_3604_);
v___x_3627_ = lean_box_usize(v___x_3605_);
lean_inc_ref(v___x_3622_);
lean_inc_ref(v___x_3614_);
v___f_3628_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__4___boxed), 38, 31);
lean_closure_set(v___f_3628_, 0, v_motive_3587_);
lean_closure_set(v___f_3628_, 1, v___x_3588_);
lean_closure_set(v___f_3628_, 2, v___x_3623_);
lean_closure_set(v___f_3628_, 3, v___x_3624_);
lean_closure_set(v___f_3628_, 4, v___x_3625_);
lean_closure_set(v___f_3628_, 5, v_is_3592_);
lean_closure_set(v___f_3628_, 6, v___x_3593_);
lean_closure_set(v___f_3628_, 7, v___x_3594_);
lean_closure_set(v___f_3628_, 8, v___x_3595_);
lean_closure_set(v___f_3628_, 9, v___x_3596_);
lean_closure_set(v___f_3628_, 10, v_params_3597_);
lean_closure_set(v___f_3628_, 11, v___x_3598_);
lean_closure_set(v___f_3628_, 12, v___x_3599_);
lean_closure_set(v___f_3628_, 13, v_heq_3600_);
lean_closure_set(v___f_3628_, 14, v_val_3601_);
lean_closure_set(v___f_3628_, 15, v_tail_3602_);
lean_closure_set(v___f_3628_, 16, v_alts_3615_);
lean_closure_set(v___f_3628_, 17, v___x_3603_);
lean_closure_set(v___f_3628_, 18, v___x_3626_);
lean_closure_set(v___f_3628_, 19, v___x_3627_);
lean_closure_set(v___f_3628_, 20, v___x_3606_);
lean_closure_set(v___f_3628_, 21, v___x_3607_);
lean_closure_set(v___f_3628_, 22, v_declName_3608_);
lean_closure_set(v___f_3628_, 23, v_levelParams_3609_);
lean_closure_set(v___f_3628_, 24, v_numIndices_3585_);
lean_closure_set(v___f_3628_, 25, v___x_3610_);
lean_closure_set(v___f_3628_, 26, v___x_3611_);
lean_closure_set(v___f_3628_, 27, v_numParams_3612_);
lean_closure_set(v___f_3628_, 28, v_snd_3613_);
lean_closure_set(v___f_3628_, 29, v___x_3614_);
lean_closure_set(v___f_3628_, 30, v___x_3622_);
v___x_3629_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3614_, v___x_3622_, v___f_3628_, v___x_3589_, v___x_3589_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_3630_ = _args[0];
lean_object* v___x_3631_ = _args[1];
lean_object* v_motive_3632_ = _args[2];
lean_object* v___x_3633_ = _args[3];
lean_object* v___x_3634_ = _args[4];
lean_object* v___x_3635_ = _args[5];
lean_object* v___x_3636_ = _args[6];
lean_object* v_is_3637_ = _args[7];
lean_object* v___x_3638_ = _args[8];
lean_object* v___x_3639_ = _args[9];
lean_object* v___x_3640_ = _args[10];
lean_object* v___x_3641_ = _args[11];
lean_object* v_params_3642_ = _args[12];
lean_object* v___x_3643_ = _args[13];
lean_object* v___x_3644_ = _args[14];
lean_object* v_heq_3645_ = _args[15];
lean_object* v_val_3646_ = _args[16];
lean_object* v_tail_3647_ = _args[17];
lean_object* v___x_3648_ = _args[18];
lean_object* v_sz_3649_ = _args[19];
lean_object* v___x_3650_ = _args[20];
lean_object* v___x_3651_ = _args[21];
lean_object* v___x_3652_ = _args[22];
lean_object* v_declName_3653_ = _args[23];
lean_object* v_levelParams_3654_ = _args[24];
lean_object* v___x_3655_ = _args[25];
lean_object* v___x_3656_ = _args[26];
lean_object* v_numParams_3657_ = _args[27];
lean_object* v_snd_3658_ = _args[28];
lean_object* v___x_3659_ = _args[29];
lean_object* v_alts_3660_ = _args[30];
lean_object* v___y_3661_ = _args[31];
lean_object* v___y_3662_ = _args[32];
lean_object* v___y_3663_ = _args[33];
lean_object* v___y_3664_ = _args[34];
lean_object* v___y_3665_ = _args[35];
_start:
{
uint8_t v___x_16065__boxed_3666_; uint8_t v___x_16066__boxed_3667_; uint8_t v___x_16067__boxed_3668_; size_t v_sz_boxed_3669_; size_t v___x_16077__boxed_3670_; lean_object* v_res_3671_; 
v___x_16065__boxed_3666_ = lean_unbox(v___x_3634_);
v___x_16066__boxed_3667_ = lean_unbox(v___x_3635_);
v___x_16067__boxed_3668_ = lean_unbox(v___x_3636_);
v_sz_boxed_3669_ = lean_unbox_usize(v_sz_3649_);
lean_dec(v_sz_3649_);
v___x_16077__boxed_3670_ = lean_unbox_usize(v___x_3650_);
lean_dec(v___x_3650_);
v_res_3671_ = l_Lean_mkCasesOnSameCtor___lam__5(v_numIndices_3630_, v___x_3631_, v_motive_3632_, v___x_3633_, v___x_16065__boxed_3666_, v___x_16066__boxed_3667_, v___x_16067__boxed_3668_, v_is_3637_, v___x_3638_, v___x_3639_, v___x_3640_, v___x_3641_, v_params_3642_, v___x_3643_, v___x_3644_, v_heq_3645_, v_val_3646_, v_tail_3647_, v___x_3648_, v_sz_boxed_3669_, v___x_16077__boxed_3670_, v___x_3651_, v___x_3652_, v_declName_3653_, v_levelParams_3654_, v___x_3655_, v___x_3656_, v_numParams_3657_, v_snd_3658_, v___x_3659_, v_alts_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec(v___y_3662_);
lean_dec_ref(v___y_3661_);
lean_dec(v___x_3631_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v_acc_3672_, lean_object* v_declInfos_3673_, lean_object* v_k_3674_, lean_object* v_kind_3675_, lean_object* v_x_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
uint8_t v_kind_boxed_3682_; lean_object* v_res_3683_; 
v_kind_boxed_3682_ = lean_unbox(v_kind_3675_);
v_res_3683_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(v_acc_3672_, v_declInfos_3673_, v_k_3674_, v_kind_boxed_3682_, v_x_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec_ref(v___y_3677_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object* v_declInfos_3684_, lean_object* v_k_3685_, uint8_t v_kind_3686_, lean_object* v_acc_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; lean_object* v_toApplicative_3694_; lean_object* v_toFunctor_3695_; lean_object* v_toSeq_3696_; lean_object* v_toSeqLeft_3697_; lean_object* v_toSeqRight_3698_; lean_object* v___f_3699_; lean_object* v___f_3700_; lean_object* v___f_3701_; lean_object* v___f_3702_; lean_object* v___x_3703_; lean_object* v___f_3704_; lean_object* v___f_3705_; lean_object* v___f_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v_toApplicative_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3768_; 
v___x_3693_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_3694_ = lean_ctor_get(v___x_3693_, 0);
v_toFunctor_3695_ = lean_ctor_get(v_toApplicative_3694_, 0);
v_toSeq_3696_ = lean_ctor_get(v_toApplicative_3694_, 2);
v_toSeqLeft_3697_ = lean_ctor_get(v_toApplicative_3694_, 3);
v_toSeqRight_3698_ = lean_ctor_get(v_toApplicative_3694_, 4);
v___f_3699_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2));
v___f_3700_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3));
lean_inc_ref_n(v_toFunctor_3695_, 2);
v___f_3701_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3701_, 0, v_toFunctor_3695_);
v___f_3702_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3702_, 0, v_toFunctor_3695_);
v___x_3703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___f_3701_);
lean_ctor_set(v___x_3703_, 1, v___f_3702_);
lean_inc(v_toSeqRight_3698_);
v___f_3704_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3704_, 0, v_toSeqRight_3698_);
lean_inc(v_toSeqLeft_3697_);
v___f_3705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3705_, 0, v_toSeqLeft_3697_);
lean_inc(v_toSeq_3696_);
v___f_3706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3706_, 0, v_toSeq_3696_);
v___x_3707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3703_);
lean_ctor_set(v___x_3707_, 1, v___f_3699_);
lean_ctor_set(v___x_3707_, 2, v___f_3706_);
lean_ctor_set(v___x_3707_, 3, v___f_3705_);
lean_ctor_set(v___x_3707_, 4, v___f_3704_);
v___x_3708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
lean_ctor_set(v___x_3708_, 1, v___f_3700_);
v___x_3709_ = l_StateRefT_x27_instMonad___redArg(v___x_3708_);
v_toApplicative_3710_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; 
v_unused_3769_ = lean_ctor_get(v___x_3709_, 1);
lean_dec(v_unused_3769_);
v___x_3712_ = v___x_3709_;
v_isShared_3713_ = v_isSharedCheck_3768_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_toApplicative_3710_);
lean_dec(v___x_3709_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3768_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v_toFunctor_3714_; lean_object* v_toSeq_3715_; lean_object* v_toSeqLeft_3716_; lean_object* v_toSeqRight_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3766_; 
v_toFunctor_3714_ = lean_ctor_get(v_toApplicative_3710_, 0);
v_toSeq_3715_ = lean_ctor_get(v_toApplicative_3710_, 2);
v_toSeqLeft_3716_ = lean_ctor_get(v_toApplicative_3710_, 3);
v_toSeqRight_3717_ = lean_ctor_get(v_toApplicative_3710_, 4);
v_isSharedCheck_3766_ = !lean_is_exclusive(v_toApplicative_3710_);
if (v_isSharedCheck_3766_ == 0)
{
lean_object* v_unused_3767_; 
v_unused_3767_ = lean_ctor_get(v_toApplicative_3710_, 1);
lean_dec(v_unused_3767_);
v___x_3719_ = v_toApplicative_3710_;
v_isShared_3720_ = v_isSharedCheck_3766_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_toSeqRight_3717_);
lean_inc(v_toSeqLeft_3716_);
lean_inc(v_toSeq_3715_);
lean_inc(v_toFunctor_3714_);
lean_dec(v_toApplicative_3710_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3766_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___f_3721_; lean_object* v___f_3722_; lean_object* v___f_3723_; lean_object* v___f_3724_; lean_object* v___x_3725_; lean_object* v___f_3726_; lean_object* v___f_3727_; lean_object* v___f_3728_; lean_object* v___x_3730_; 
v___f_3721_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4));
v___f_3722_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5));
lean_inc_ref(v_toFunctor_3714_);
v___f_3723_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3723_, 0, v_toFunctor_3714_);
v___f_3724_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3724_, 0, v_toFunctor_3714_);
v___x_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___f_3723_);
lean_ctor_set(v___x_3725_, 1, v___f_3724_);
v___f_3726_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3726_, 0, v_toSeqRight_3717_);
v___f_3727_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3727_, 0, v_toSeqLeft_3716_);
v___f_3728_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3728_, 0, v_toSeq_3715_);
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 4, v___f_3726_);
lean_ctor_set(v___x_3719_, 3, v___f_3727_);
lean_ctor_set(v___x_3719_, 2, v___f_3728_);
lean_ctor_set(v___x_3719_, 1, v___f_3721_);
lean_ctor_set(v___x_3719_, 0, v___x_3725_);
v___x_3730_ = v___x_3719_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3725_);
lean_ctor_set(v_reuseFailAlloc_3765_, 1, v___f_3721_);
lean_ctor_set(v_reuseFailAlloc_3765_, 2, v___f_3728_);
lean_ctor_set(v_reuseFailAlloc_3765_, 3, v___f_3727_);
lean_ctor_set(v_reuseFailAlloc_3765_, 4, v___f_3726_);
v___x_3730_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
lean_object* v___x_3732_; 
if (v_isShared_3713_ == 0)
{
lean_ctor_set(v___x_3712_, 1, v___f_3722_);
lean_ctor_set(v___x_3712_, 0, v___x_3730_);
v___x_3732_ = v___x_3712_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3764_, 1, v___f_3722_);
v___x_3732_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3733_ = lean_array_get_size(v_acc_3687_);
v___x_3734_ = lean_array_get_size(v_declInfos_3684_);
v___x_3735_ = lean_nat_dec_lt(v___x_3733_, v___x_3734_);
if (v___x_3735_ == 0)
{
lean_object* v___x_3736_; 
lean_dec_ref(v___x_3732_);
lean_dec_ref(v_declInfos_3684_);
lean_inc(v___y_3691_);
lean_inc_ref(v___y_3690_);
lean_inc(v___y_3689_);
lean_inc_ref(v___y_3688_);
v___x_3736_ = lean_apply_6(v_k_3685_, v_acc_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_, lean_box(0));
return v___x_3736_;
}
else
{
lean_object* v___x_3737_; uint8_t v___x_3738_; lean_object* v___x_3739_; lean_object* v___f_3740_; lean_object* v___f_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v_snd_3746_; lean_object* v_fst_3747_; lean_object* v_fst_3748_; lean_object* v_snd_3749_; lean_object* v___x_3750_; lean_object* v___f_3751_; lean_object* v___x_3752_; 
v___x_3737_ = l_Lean_instInhabitedName;
v___x_3738_ = 0;
v___x_3739_ = l_Lean_instInhabitedExpr;
v___f_3740_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3740_, 0, v___x_3732_);
lean_closure_set(v___f_3740_, 1, v___x_3739_);
v___f_3741_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3741_, 0, v___f_3740_);
v___x_3742_ = lean_box(v___x_3738_);
v___x_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
lean_ctor_set(v___x_3743_, 1, v___f_3741_);
v___x_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3737_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_array_get(v___x_3744_, v_declInfos_3684_, v___x_3733_);
lean_dec_ref_known(v___x_3744_, 2);
v_snd_3746_ = lean_ctor_get(v___x_3745_, 1);
lean_inc(v_snd_3746_);
v_fst_3747_ = lean_ctor_get(v___x_3745_, 0);
lean_inc(v_fst_3747_);
lean_dec(v___x_3745_);
v_fst_3748_ = lean_ctor_get(v_snd_3746_, 0);
lean_inc(v_fst_3748_);
v_snd_3749_ = lean_ctor_get(v_snd_3746_, 1);
lean_inc(v_snd_3749_);
lean_dec(v_snd_3746_);
v___x_3750_ = lean_box(v_kind_3686_);
lean_inc_ref(v_acc_3687_);
v___f_3751_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3751_, 0, v_acc_3687_);
lean_closure_set(v___f_3751_, 1, v_declInfos_3684_);
lean_closure_set(v___f_3751_, 2, v_k_3685_);
lean_closure_set(v___f_3751_, 3, v___x_3750_);
lean_inc(v___y_3691_);
lean_inc_ref(v___y_3690_);
lean_inc(v___y_3689_);
lean_inc_ref(v___y_3688_);
v___x_3752_ = lean_apply_6(v_snd_3749_, v_acc_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_, lean_box(0));
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; uint8_t v___x_3754_; lean_object* v___x_3755_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_a_3753_);
lean_dec_ref_known(v___x_3752_, 1);
v___x_3754_ = lean_unbox(v_fst_3748_);
lean_dec(v_fst_3748_);
v___x_3755_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_3747_, v___x_3754_, v_a_3753_, v___f_3751_, v_kind_3686_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
return v___x_3755_;
}
else
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3763_; 
lean_dec_ref(v___f_3751_);
lean_dec(v_fst_3748_);
lean_dec(v_fst_3747_);
v_a_3756_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3758_ = v___x_3752_;
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v___x_3752_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v_a_3756_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object* v_acc_3770_, lean_object* v_declInfos_3771_, lean_object* v_k_3772_, uint8_t v_kind_3773_, lean_object* v_x_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3780_ = lean_array_push(v_acc_3770_, v_x_3774_);
v___x_3781_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3771_, v_k_3772_, v_kind_3773_, v___x_3780_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object* v_declInfos_3782_, lean_object* v_k_3783_, lean_object* v_kind_3784_, lean_object* v_acc_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
uint8_t v_kind_boxed_3791_; lean_object* v_res_3792_; 
v_kind_boxed_3791_ = lean_unbox(v_kind_3784_);
v_res_3792_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3782_, v_k_3783_, v_kind_boxed_3791_, v_acc_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_);
lean_dec(v___y_3789_);
lean_dec_ref(v___y_3788_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object* v_declInfos_3793_, lean_object* v_k_3794_, uint8_t v_kind_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3801_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_3802_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3793_, v_k_3794_, v_kind_3795_, v___x_3801_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object* v_declInfos_3803_, lean_object* v_k_3804_, lean_object* v_kind_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
uint8_t v_kind_boxed_3811_; lean_object* v_res_3812_; 
v_kind_boxed_3811_ = lean_unbox(v_kind_3805_);
v_res_3812_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v_declInfos_3803_, v_k_3804_, v_kind_boxed_3811_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object* v_declInfos_3813_, lean_object* v_k_3814_, uint8_t v_kind_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
size_t v_sz_3821_; size_t v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v_sz_3821_ = lean_array_size(v_declInfos_3813_);
v___x_3822_ = ((size_t)0ULL);
v___x_3823_ = l_unsafeCast___redArg(v_declInfos_3813_);
v___x_3824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_3821_, v___x_3822_, v___x_3823_);
v___x_3825_ = l_unsafeCast___redArg(v___x_3824_);
lean_dec_ref(v___x_3824_);
v___x_3826_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v___x_3825_, v_k_3814_, v_kind_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object* v_declInfos_3827_, lean_object* v_k_3828_, lean_object* v_kind_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
uint8_t v_kind_boxed_3835_; lean_object* v_res_3836_; 
v_kind_boxed_3835_ = lean_unbox(v_kind_3829_);
v_res_3836_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v_declInfos_3827_, v_k_3828_, v_kind_boxed_3835_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec_ref(v_declInfos_3827_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object* v_declInfos_3837_, lean_object* v_k_3838_, uint8_t v_kind_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
size_t v_sz_3845_; size_t v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v_sz_3845_ = lean_array_size(v_declInfos_3837_);
v___x_3846_ = ((size_t)0ULL);
v___x_3847_ = l_unsafeCast___redArg(v_declInfos_3837_);
v___x_3848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_3845_, v___x_3846_, v___x_3847_);
v___x_3849_ = l_unsafeCast___redArg(v___x_3848_);
lean_dec_ref(v___x_3848_);
v___x_3850_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v___x_3849_, v_k_3838_, v_kind_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_);
lean_dec(v___x_3849_);
return v___x_3850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object* v_declInfos_3851_, lean_object* v_k_3852_, lean_object* v_kind_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
uint8_t v_kind_boxed_3859_; lean_object* v_res_3860_; 
v_kind_boxed_3859_ = lean_unbox(v_kind_3853_);
v_res_3860_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_declInfos_3851_, v_k_3852_, v_kind_boxed_3859_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec_ref(v_declInfos_3851_);
return v_res_3860_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; 
v___x_3863_ = lean_box(0);
v___x_3864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0));
v___x_3865_ = l_Lean_mkConst(v___x_3864_, v___x_3863_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object* v___x_3866_, lean_object* v___x_3867_, lean_object* v___x_3868_, lean_object* v___x_3869_, lean_object* v___x_3870_, lean_object* v_motive_3871_, uint8_t v___x_3872_, uint8_t v___x_3873_, uint8_t v___x_3874_, lean_object* v_zs12_3875_, lean_object* v_is_3876_, lean_object* v_fields1_3877_, lean_object* v_fields2_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___y_3885_; lean_object* v___y_3886_; lean_object* v_e_3894_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
lean_inc_ref(v___x_3870_);
v___x_3904_ = l_Lean_mkAppN(v___x_3870_, v_fields1_3877_);
v___x_3905_ = l_Lean_mkAppN(v___x_3870_, v_fields2_3878_);
lean_inc(v___x_3868_);
v___x_3906_ = l_Lean_mkNatLit(v___x_3868_);
v___x_3907_ = l_Lean_Meta_mkEqRefl(v___x_3906_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3907_) == 0)
{
lean_object* v_a_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v_a_3908_ = lean_ctor_get(v___x_3907_, 0);
lean_inc(v_a_3908_);
lean_dec_ref_known(v___x_3907_, 1);
v___x_3909_ = lean_unsigned_to_nat(3u);
v___x_3910_ = lean_mk_empty_array_with_capacity(v___x_3909_);
v___x_3911_ = lean_array_push(v___x_3910_, v___x_3904_);
v___x_3912_ = lean_array_push(v___x_3911_, v___x_3905_);
v___x_3913_ = lean_array_push(v___x_3912_, v_a_3908_);
v___x_3914_ = l_Array_append___redArg(v_is_3876_, v___x_3913_);
lean_dec_ref(v___x_3913_);
v___x_3915_ = l_Lean_mkAppN(v_motive_3871_, v___x_3914_);
lean_dec_ref(v___x_3914_);
lean_inc_ref(v_zs12_3875_);
v___x_3916_ = l_Lean_Meta_mkForallFVars(v_zs12_3875_, v___x_3915_, v___x_3872_, v___x_3873_, v___x_3873_, v___x_3874_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3918_; uint8_t v___x_3919_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v___x_3916_, 1);
v___x_3918_ = lean_array_get_size(v_zs12_3875_);
v___x_3919_ = lean_nat_dec_eq(v___x_3918_, v___x_3866_);
if (v___x_3919_ == 0)
{
v_e_3894_ = v_a_3917_;
goto v___jp_3893_;
}
else
{
lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3920_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1);
v___x_3921_ = l_Lean_mkArrow(v___x_3920_, v_a_3917_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v_e_3894_ = v_a_3922_;
goto v___jp_3893_;
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
lean_dec_ref(v_zs12_3875_);
lean_dec(v___x_3868_);
lean_dec(v___x_3867_);
lean_dec(v___x_3866_);
v_a_3923_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3921_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3921_);
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
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec_ref(v_zs12_3875_);
lean_dec(v___x_3868_);
lean_dec(v___x_3867_);
lean_dec(v___x_3866_);
v_a_3931_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3916_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3916_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
lean_dec_ref(v___x_3905_);
lean_dec_ref(v___x_3904_);
lean_dec_ref(v_is_3876_);
lean_dec_ref(v_zs12_3875_);
lean_dec_ref(v_motive_3871_);
lean_dec(v___x_3868_);
lean_dec(v___x_3867_);
lean_dec(v___x_3866_);
v_a_3939_ = lean_ctor_get(v___x_3907_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3907_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3907_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
v___jp_3884_:
{
lean_object* v___x_3887_; uint8_t v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3887_ = lean_array_get_size(v_zs12_3875_);
lean_dec_ref(v_zs12_3875_);
v___x_3888_ = lean_nat_dec_eq(v___x_3887_, v___x_3866_);
v___x_3889_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3889_, 0, v___x_3887_);
lean_ctor_set(v___x_3889_, 1, v___x_3866_);
lean_ctor_set_uint8(v___x_3889_, sizeof(void*)*2, v___x_3888_);
v___x_3890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3890_, 0, v___y_3886_);
lean_ctor_set(v___x_3890_, 1, v___y_3885_);
v___x_3891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3890_);
lean_ctor_set(v___x_3891_, 1, v___x_3889_);
v___x_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
return v___x_3892_;
}
v___jp_3893_:
{
if (lean_obj_tag(v___x_3867_) == 1)
{
lean_object* v_str_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
lean_dec(v___x_3868_);
v_str_3895_ = lean_ctor_get(v___x_3867_, 1);
lean_inc_ref(v_str_3895_);
lean_dec_ref_known(v___x_3867_, 2);
v___x_3896_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_3897_ = l_Lean_Name_str___override(v___x_3896_, v_str_3895_);
v___y_3885_ = v_e_3894_;
v___y_3886_ = v___x_3897_;
goto v___jp_3884_;
}
else
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
lean_dec(v___x_3867_);
v___x_3898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__1));
v___x_3899_ = lean_nat_add(v___x_3868_, v___x_3869_);
lean_dec(v___x_3868_);
v___x_3900_ = l_Nat_reprFast(v___x_3899_);
v___x_3901_ = lean_string_append(v___x_3898_, v___x_3900_);
lean_dec_ref(v___x_3900_);
v___x_3902_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_3903_ = l_Lean_Name_str___override(v___x_3902_, v___x_3901_);
v___y_3885_ = v_e_3894_;
v___y_3886_ = v___x_3903_;
goto v___jp_3884_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3947_ = _args[0];
lean_object* v___x_3948_ = _args[1];
lean_object* v___x_3949_ = _args[2];
lean_object* v___x_3950_ = _args[3];
lean_object* v___x_3951_ = _args[4];
lean_object* v_motive_3952_ = _args[5];
lean_object* v___x_3953_ = _args[6];
lean_object* v___x_3954_ = _args[7];
lean_object* v___x_3955_ = _args[8];
lean_object* v_zs12_3956_ = _args[9];
lean_object* v_is_3957_ = _args[10];
lean_object* v_fields1_3958_ = _args[11];
lean_object* v_fields2_3959_ = _args[12];
lean_object* v___y_3960_ = _args[13];
lean_object* v___y_3961_ = _args[14];
lean_object* v___y_3962_ = _args[15];
lean_object* v___y_3963_ = _args[16];
lean_object* v___y_3964_ = _args[17];
_start:
{
uint8_t v___x_16428__boxed_3965_; uint8_t v___x_16429__boxed_3966_; uint8_t v___x_16430__boxed_3967_; lean_object* v_res_3968_; 
v___x_16428__boxed_3965_ = lean_unbox(v___x_3953_);
v___x_16429__boxed_3966_ = lean_unbox(v___x_3954_);
v___x_16430__boxed_3967_ = lean_unbox(v___x_3955_);
v_res_3968_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(v___x_3947_, v___x_3948_, v___x_3949_, v___x_3950_, v___x_3951_, v_motive_3952_, v___x_16428__boxed_3965_, v___x_16429__boxed_3966_, v___x_16430__boxed_3967_, v_zs12_3956_, v_is_3957_, v_fields1_3958_, v_fields2_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_);
lean_dec(v___y_3963_);
lean_dec_ref(v___y_3962_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec_ref(v_fields2_3959_);
lean_dec_ref(v_fields1_3958_);
lean_dec(v___x_3950_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object* v_tail_3969_, lean_object* v_params_3970_, lean_object* v_motive_3971_, size_t v_sz_3972_, size_t v_i_3973_, lean_object* v_bs_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
uint8_t v___x_3980_; 
v___x_3980_ = lean_usize_dec_lt(v_i_3973_, v_sz_3972_);
if (v___x_3980_ == 0)
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
lean_dec_ref(v_motive_3971_);
lean_dec(v_tail_3969_);
v___x_3981_ = l_unsafeCast___redArg(v_bs_3974_);
lean_dec_ref(v_bs_3974_);
v___x_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3981_);
return v___x_3982_;
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; uint8_t v___x_3985_; uint8_t v___x_3986_; lean_object* v_v_3987_; lean_object* v_bs_x27_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___f_3996_; lean_object* v___x_3997_; 
v___x_3983_ = lean_unsigned_to_nat(0u);
v___x_3984_ = lean_unsigned_to_nat(1u);
v___x_3985_ = 0;
v___x_3986_ = 1;
v_v_3987_ = lean_array_uget(v_bs_3974_, v_i_3973_);
v_bs_x27_3988_ = lean_array_uset(v_bs_3974_, v_i_3973_, v___x_3983_);
v___x_3989_ = lean_usize_to_nat(v_i_3973_);
v___x_3990_ = l_unsafeCast___redArg(v_v_3987_);
lean_dec(v_v_3987_);
lean_inc(v_tail_3969_);
lean_inc(v___x_3990_);
v___x_3991_ = l_Lean_mkConst(v___x_3990_, v_tail_3969_);
v___x_3992_ = l_Lean_mkAppN(v___x_3991_, v_params_3970_);
v___x_3993_ = lean_box(v___x_3985_);
v___x_3994_ = lean_box(v___x_3980_);
v___x_3995_ = lean_box(v___x_3986_);
lean_inc_ref(v_motive_3971_);
lean_inc_ref(v___x_3992_);
v___f_3996_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed), 18, 9);
lean_closure_set(v___f_3996_, 0, v___x_3983_);
lean_closure_set(v___f_3996_, 1, v___x_3990_);
lean_closure_set(v___f_3996_, 2, v___x_3989_);
lean_closure_set(v___f_3996_, 3, v___x_3984_);
lean_closure_set(v___f_3996_, 4, v___x_3992_);
lean_closure_set(v___f_3996_, 5, v_motive_3971_);
lean_closure_set(v___f_3996_, 6, v___x_3993_);
lean_closure_set(v___f_3996_, 7, v___x_3994_);
lean_closure_set(v___f_3996_, 8, v___x_3995_);
v___x_3997_ = l_Lean_Meta_withSharedCtorIndices___redArg(v___x_3992_, v___f_3996_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v_a_3998_; size_t v___x_3999_; size_t v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v_a_3998_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_3998_);
lean_dec_ref_known(v___x_3997_, 1);
v___x_3999_ = ((size_t)1ULL);
v___x_4000_ = lean_usize_add(v_i_3973_, v___x_3999_);
v___x_4001_ = l_unsafeCast___redArg(v_a_3998_);
lean_dec(v_a_3998_);
v___x_4002_ = lean_array_uset(v_bs_x27_3988_, v_i_3973_, v___x_4001_);
v_i_3973_ = v___x_4000_;
v_bs_3974_ = v___x_4002_;
goto _start;
}
else
{
lean_object* v_a_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4011_; 
lean_dec_ref(v_bs_x27_3988_);
lean_dec_ref(v_motive_3971_);
lean_dec(v_tail_3969_);
v_a_4004_ = lean_ctor_get(v___x_3997_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_4006_ = v___x_3997_;
v_isShared_4007_ = v_isSharedCheck_4011_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_a_4004_);
lean_dec(v___x_3997_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4011_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4009_; 
if (v_isShared_4007_ == 0)
{
v___x_4009_ = v___x_4006_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v_a_4004_);
v___x_4009_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
return v___x_4009_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object* v_tail_4012_, lean_object* v_params_4013_, lean_object* v_motive_4014_, lean_object* v_sz_4015_, lean_object* v_i_4016_, lean_object* v_bs_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_){
_start:
{
size_t v_sz_boxed_4023_; size_t v_i_boxed_4024_; lean_object* v_res_4025_; 
v_sz_boxed_4023_ = lean_unbox_usize(v_sz_4015_);
lean_dec(v_sz_4015_);
v_i_boxed_4024_ = lean_unbox_usize(v_i_4016_);
lean_dec(v_i_4016_);
v_res_4025_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4012_, v_params_4013_, v_motive_4014_, v_sz_boxed_4023_, v_i_boxed_4024_, v_bs_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_);
lean_dec(v___y_4021_);
lean_dec_ref(v___y_4020_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
lean_dec_ref(v_params_4013_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object* v_tail_4026_, lean_object* v_params_4027_, lean_object* v_motive_4028_, lean_object* v_as_4029_, size_t v_sz_4030_, size_t v_i_4031_, lean_object* v_bs_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4026_, v_params_4027_, v_motive_4028_, v_sz_4030_, v_i_4031_, v_bs_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object* v_tail_4039_, lean_object* v_params_4040_, lean_object* v_motive_4041_, lean_object* v_as_4042_, lean_object* v_sz_4043_, lean_object* v_i_4044_, lean_object* v_bs_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
size_t v_sz_boxed_4051_; size_t v_i_boxed_4052_; lean_object* v_res_4053_; 
v_sz_boxed_4051_ = lean_unbox_usize(v_sz_4043_);
lean_dec(v_sz_4043_);
v_i_boxed_4052_ = lean_unbox_usize(v_i_4044_);
lean_dec(v_i_4044_);
v_res_4053_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(v_tail_4039_, v_params_4040_, v_motive_4041_, v_as_4042_, v_sz_boxed_4051_, v_i_boxed_4052_, v_bs_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec_ref(v_as_4042_);
lean_dec_ref(v_params_4040_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object* v_ctors_4054_, lean_object* v_tail_4055_, lean_object* v_params_4056_, lean_object* v_numIndices_4057_, lean_object* v___x_4058_, lean_object* v___x_4059_, uint8_t v___x_4060_, uint8_t v___x_4061_, uint8_t v___x_4062_, lean_object* v_is_4063_, lean_object* v___x_4064_, lean_object* v___x_4065_, lean_object* v___x_4066_, lean_object* v___x_4067_, lean_object* v___x_4068_, lean_object* v___x_4069_, lean_object* v_heq_4070_, lean_object* v_val_4071_, lean_object* v___x_4072_, lean_object* v_declName_4073_, lean_object* v_levelParams_4074_, lean_object* v___x_4075_, lean_object* v___x_4076_, lean_object* v_numParams_4077_, lean_object* v___x_4078_, lean_object* v_motive_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v___x_4085_; size_t v_sz_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_14603__overap_4091_; lean_object* v___x_4092_; 
v___x_4085_ = lean_array_mk(v_ctors_4054_);
v_sz_4086_ = lean_array_size(v___x_4085_);
v___x_4087_ = l_unsafeCast___redArg(v___x_4085_);
v___x_4088_ = lean_box_usize(v_sz_4086_);
v___x_4089_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1));
lean_inc(v___x_4087_);
lean_inc_ref(v___x_4085_);
lean_inc_ref(v_motive_4079_);
lean_inc_ref(v_params_4056_);
lean_inc(v_tail_4055_);
v___x_4090_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed), 12, 7);
lean_closure_set(v___x_4090_, 0, v_tail_4055_);
lean_closure_set(v___x_4090_, 1, v_params_4056_);
lean_closure_set(v___x_4090_, 2, v_motive_4079_);
lean_closure_set(v___x_4090_, 3, v___x_4085_);
lean_closure_set(v___x_4090_, 4, v___x_4088_);
lean_closure_set(v___x_4090_, 5, v___x_4089_);
lean_closure_set(v___x_4090_, 6, v___x_4087_);
v___x_14603__overap_4091_ = l_unsafeCast___redArg(v___x_4090_);
lean_dec_ref(v___x_4090_);
lean_inc(v___y_4083_);
lean_inc_ref(v___y_4082_);
lean_inc(v___y_4081_);
lean_inc_ref(v___y_4080_);
v___x_4092_ = lean_apply_5(v___x_14603__overap_4091_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, lean_box(0));
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4094_; lean_object* v_fst_4095_; lean_object* v_snd_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___f_4102_; uint8_t v___x_4103_; lean_object* v___x_4104_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_a_4093_);
lean_dec_ref_known(v___x_4092_, 1);
v___x_4094_ = l_Array_unzip___redArg(v_a_4093_);
lean_dec(v_a_4093_);
v_fst_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_fst_4095_);
v_snd_4096_ = lean_ctor_get(v___x_4094_, 1);
lean_inc(v_snd_4096_);
lean_dec_ref(v___x_4094_);
v___x_4097_ = lean_box(v___x_4060_);
v___x_4098_ = lean_box(v___x_4061_);
v___x_4099_ = lean_box(v___x_4062_);
v___x_4100_ = lean_box_usize(v_sz_4086_);
v___x_4101_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed__const__1));
v___f_4102_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__5___boxed), 36, 30);
lean_closure_set(v___f_4102_, 0, v_numIndices_4057_);
lean_closure_set(v___f_4102_, 1, v___x_4058_);
lean_closure_set(v___f_4102_, 2, v_motive_4079_);
lean_closure_set(v___f_4102_, 3, v___x_4059_);
lean_closure_set(v___f_4102_, 4, v___x_4097_);
lean_closure_set(v___f_4102_, 5, v___x_4098_);
lean_closure_set(v___f_4102_, 6, v___x_4099_);
lean_closure_set(v___f_4102_, 7, v_is_4063_);
lean_closure_set(v___f_4102_, 8, v___x_4064_);
lean_closure_set(v___f_4102_, 9, v___x_4065_);
lean_closure_set(v___f_4102_, 10, v___x_4066_);
lean_closure_set(v___f_4102_, 11, v___x_4067_);
lean_closure_set(v___f_4102_, 12, v_params_4056_);
lean_closure_set(v___f_4102_, 13, v___x_4068_);
lean_closure_set(v___f_4102_, 14, v___x_4069_);
lean_closure_set(v___f_4102_, 15, v_heq_4070_);
lean_closure_set(v___f_4102_, 16, v_val_4071_);
lean_closure_set(v___f_4102_, 17, v_tail_4055_);
lean_closure_set(v___f_4102_, 18, v___x_4085_);
lean_closure_set(v___f_4102_, 19, v___x_4100_);
lean_closure_set(v___f_4102_, 20, v___x_4101_);
lean_closure_set(v___f_4102_, 21, v___x_4087_);
lean_closure_set(v___f_4102_, 22, v___x_4072_);
lean_closure_set(v___f_4102_, 23, v_declName_4073_);
lean_closure_set(v___f_4102_, 24, v_levelParams_4074_);
lean_closure_set(v___f_4102_, 25, v___x_4075_);
lean_closure_set(v___f_4102_, 26, v___x_4076_);
lean_closure_set(v___f_4102_, 27, v_numParams_4077_);
lean_closure_set(v___f_4102_, 28, v_snd_4096_);
lean_closure_set(v___f_4102_, 29, v___x_4078_);
v___x_4103_ = 0;
v___x_4104_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_fst_4095_, v___f_4102_, v___x_4103_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_);
lean_dec(v_fst_4095_);
return v___x_4104_;
}
else
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4112_; 
lean_dec(v___x_4087_);
lean_dec_ref(v___x_4085_);
lean_dec_ref(v_motive_4079_);
lean_dec_ref(v___x_4078_);
lean_dec(v_numParams_4077_);
lean_dec(v___x_4076_);
lean_dec(v___x_4075_);
lean_dec(v_levelParams_4074_);
lean_dec(v_declName_4073_);
lean_dec_ref(v___x_4072_);
lean_dec_ref(v_val_4071_);
lean_dec_ref(v_heq_4070_);
lean_dec_ref(v___x_4069_);
lean_dec_ref(v___x_4068_);
lean_dec(v___x_4067_);
lean_dec(v___x_4066_);
lean_dec_ref(v___x_4065_);
lean_dec_ref(v___x_4064_);
lean_dec_ref(v_is_4063_);
lean_dec_ref(v___x_4059_);
lean_dec(v___x_4058_);
lean_dec(v_numIndices_4057_);
lean_dec_ref(v_params_4056_);
lean_dec(v_tail_4055_);
v_a_4105_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4107_ = v___x_4092_;
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4092_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object** _args){
lean_object* v_ctors_4113_ = _args[0];
lean_object* v_tail_4114_ = _args[1];
lean_object* v_params_4115_ = _args[2];
lean_object* v_numIndices_4116_ = _args[3];
lean_object* v___x_4117_ = _args[4];
lean_object* v___x_4118_ = _args[5];
lean_object* v___x_4119_ = _args[6];
lean_object* v___x_4120_ = _args[7];
lean_object* v___x_4121_ = _args[8];
lean_object* v_is_4122_ = _args[9];
lean_object* v___x_4123_ = _args[10];
lean_object* v___x_4124_ = _args[11];
lean_object* v___x_4125_ = _args[12];
lean_object* v___x_4126_ = _args[13];
lean_object* v___x_4127_ = _args[14];
lean_object* v___x_4128_ = _args[15];
lean_object* v_heq_4129_ = _args[16];
lean_object* v_val_4130_ = _args[17];
lean_object* v___x_4131_ = _args[18];
lean_object* v_declName_4132_ = _args[19];
lean_object* v_levelParams_4133_ = _args[20];
lean_object* v___x_4134_ = _args[21];
lean_object* v___x_4135_ = _args[22];
lean_object* v_numParams_4136_ = _args[23];
lean_object* v___x_4137_ = _args[24];
lean_object* v_motive_4138_ = _args[25];
lean_object* v___y_4139_ = _args[26];
lean_object* v___y_4140_ = _args[27];
lean_object* v___y_4141_ = _args[28];
lean_object* v___y_4142_ = _args[29];
lean_object* v___y_4143_ = _args[30];
_start:
{
uint8_t v___x_16693__boxed_4144_; uint8_t v___x_16694__boxed_4145_; uint8_t v___x_16695__boxed_4146_; lean_object* v_res_4147_; 
v___x_16693__boxed_4144_ = lean_unbox(v___x_4119_);
v___x_16694__boxed_4145_ = lean_unbox(v___x_4120_);
v___x_16695__boxed_4146_ = lean_unbox(v___x_4121_);
v_res_4147_ = l_Lean_mkCasesOnSameCtor___lam__6(v_ctors_4113_, v_tail_4114_, v_params_4115_, v_numIndices_4116_, v___x_4117_, v___x_4118_, v___x_16693__boxed_4144_, v___x_16694__boxed_4145_, v___x_16695__boxed_4146_, v_is_4122_, v___x_4123_, v___x_4124_, v___x_4125_, v___x_4126_, v___x_4127_, v___x_4128_, v_heq_4129_, v_val_4130_, v___x_4131_, v_declName_4132_, v_levelParams_4133_, v___x_4134_, v___x_4135_, v_numParams_4136_, v___x_4137_, v_motive_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object* v___x_4148_, lean_object* v___x_4149_, lean_object* v_is_4150_, lean_object* v_head_4151_, lean_object* v_ctors_4152_, lean_object* v_tail_4153_, lean_object* v_params_4154_, lean_object* v_numIndices_4155_, lean_object* v___x_4156_, lean_object* v___x_4157_, lean_object* v___x_4158_, lean_object* v___x_4159_, lean_object* v___x_4160_, lean_object* v_val_4161_, lean_object* v___x_4162_, lean_object* v_declName_4163_, lean_object* v_levelParams_4164_, lean_object* v___x_4165_, lean_object* v_numParams_4166_, lean_object* v___x_4167_, lean_object* v_heq_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; uint8_t v___x_4181_; uint8_t v___x_4182_; uint8_t v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___f_4187_; lean_object* v___x_4188_; 
v___x_4174_ = lean_unsigned_to_nat(3u);
v___x_4175_ = lean_mk_empty_array_with_capacity(v___x_4174_);
lean_inc_ref(v___x_4148_);
v___x_4176_ = lean_array_push(v___x_4175_, v___x_4148_);
lean_inc_ref(v___x_4149_);
v___x_4177_ = lean_array_push(v___x_4176_, v___x_4149_);
lean_inc_ref(v_heq_4168_);
v___x_4178_ = lean_array_push(v___x_4177_, v_heq_4168_);
lean_inc_ref(v_is_4150_);
v___x_4179_ = l_Array_append___redArg(v_is_4150_, v___x_4178_);
lean_dec_ref(v___x_4178_);
v___x_4180_ = l_Lean_mkSort(v_head_4151_);
v___x_4181_ = 0;
v___x_4182_ = 1;
v___x_4183_ = 1;
v___x_4184_ = lean_box(v___x_4181_);
v___x_4185_ = lean_box(v___x_4182_);
v___x_4186_ = lean_box(v___x_4183_);
lean_inc_ref(v___x_4179_);
v___f_4187_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed), 31, 25);
lean_closure_set(v___f_4187_, 0, v_ctors_4152_);
lean_closure_set(v___f_4187_, 1, v_tail_4153_);
lean_closure_set(v___f_4187_, 2, v_params_4154_);
lean_closure_set(v___f_4187_, 3, v_numIndices_4155_);
lean_closure_set(v___f_4187_, 4, v___x_4156_);
lean_closure_set(v___f_4187_, 5, v___x_4179_);
lean_closure_set(v___f_4187_, 6, v___x_4184_);
lean_closure_set(v___f_4187_, 7, v___x_4185_);
lean_closure_set(v___f_4187_, 8, v___x_4186_);
lean_closure_set(v___f_4187_, 9, v_is_4150_);
lean_closure_set(v___f_4187_, 10, v___x_4149_);
lean_closure_set(v___f_4187_, 11, v___x_4148_);
lean_closure_set(v___f_4187_, 12, v___x_4157_);
lean_closure_set(v___f_4187_, 13, v___x_4158_);
lean_closure_set(v___f_4187_, 14, v___x_4159_);
lean_closure_set(v___f_4187_, 15, v___x_4160_);
lean_closure_set(v___f_4187_, 16, v_heq_4168_);
lean_closure_set(v___f_4187_, 17, v_val_4161_);
lean_closure_set(v___f_4187_, 18, v___x_4162_);
lean_closure_set(v___f_4187_, 19, v_declName_4163_);
lean_closure_set(v___f_4187_, 20, v_levelParams_4164_);
lean_closure_set(v___f_4187_, 21, v___x_4174_);
lean_closure_set(v___f_4187_, 22, v___x_4165_);
lean_closure_set(v___f_4187_, 23, v_numParams_4166_);
lean_closure_set(v___f_4187_, 24, v___x_4167_);
v___x_4188_ = l_Lean_Meta_mkForallFVars(v___x_4179_, v___x_4180_, v___x_4181_, v___x_4182_, v___x_4182_, v___x_4183_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; lean_object* v___x_4192_; 
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___x_4188_, 1);
v___x_4190_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_4191_ = 0;
v___x_4192_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_4190_, v___x_4183_, v_a_4189_, v___f_4187_, v___x_4191_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
return v___x_4192_;
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec_ref(v___f_4187_);
v_a_4193_ = lean_ctor_get(v___x_4188_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4188_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4188_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4188_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object** _args){
lean_object* v___x_4201_ = _args[0];
lean_object* v___x_4202_ = _args[1];
lean_object* v_is_4203_ = _args[2];
lean_object* v_head_4204_ = _args[3];
lean_object* v_ctors_4205_ = _args[4];
lean_object* v_tail_4206_ = _args[5];
lean_object* v_params_4207_ = _args[6];
lean_object* v_numIndices_4208_ = _args[7];
lean_object* v___x_4209_ = _args[8];
lean_object* v___x_4210_ = _args[9];
lean_object* v___x_4211_ = _args[10];
lean_object* v___x_4212_ = _args[11];
lean_object* v___x_4213_ = _args[12];
lean_object* v_val_4214_ = _args[13];
lean_object* v___x_4215_ = _args[14];
lean_object* v_declName_4216_ = _args[15];
lean_object* v_levelParams_4217_ = _args[16];
lean_object* v___x_4218_ = _args[17];
lean_object* v_numParams_4219_ = _args[18];
lean_object* v___x_4220_ = _args[19];
lean_object* v_heq_4221_ = _args[20];
lean_object* v___y_4222_ = _args[21];
lean_object* v___y_4223_ = _args[22];
lean_object* v___y_4224_ = _args[23];
lean_object* v___y_4225_ = _args[24];
lean_object* v___y_4226_ = _args[25];
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l_Lean_mkCasesOnSameCtor___lam__7(v___x_4201_, v___x_4202_, v_is_4203_, v_head_4204_, v_ctors_4205_, v_tail_4206_, v_params_4207_, v_numIndices_4208_, v___x_4209_, v___x_4210_, v___x_4211_, v___x_4212_, v___x_4213_, v_val_4214_, v___x_4215_, v_declName_4216_, v_levelParams_4217_, v___x_4218_, v_numParams_4219_, v___x_4220_, v_heq_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object* v___x_4228_, lean_object* v_x1_4229_, lean_object* v_indName_4230_, lean_object* v_tail_4231_, lean_object* v_params_4232_, lean_object* v_is_4233_, lean_object* v___x_4234_, lean_object* v_head_4235_, lean_object* v_ctors_4236_, lean_object* v_numIndices_4237_, lean_object* v___x_4238_, lean_object* v___x_4239_, lean_object* v_val_4240_, lean_object* v_declName_4241_, lean_object* v_levelParams_4242_, lean_object* v_numParams_4243_, lean_object* v___x_4244_, lean_object* v_x2_4245_, lean_object* v_x_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___f_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4252_ = lean_unsigned_to_nat(0u);
v___x_4253_ = lean_array_get_borrowed(v___x_4228_, v_x1_4229_, v___x_4252_);
v___x_4254_ = lean_array_get_borrowed(v___x_4228_, v_x2_4245_, v___x_4252_);
v___x_4255_ = l_Lean_mkCtorIdxName(v_indName_4230_);
lean_inc(v_tail_4231_);
v___x_4256_ = l_Lean_mkConst(v___x_4255_, v_tail_4231_);
lean_inc_ref(v_params_4232_);
v___x_4257_ = l_Array_append___redArg(v_params_4232_, v_is_4233_);
v___x_4258_ = lean_mk_empty_array_with_capacity(v___x_4234_);
lean_inc_n(v___x_4253_, 2);
lean_inc_ref_n(v___x_4258_, 2);
v___x_4259_ = lean_array_push(v___x_4258_, v___x_4253_);
lean_inc_ref(v___x_4257_);
v___x_4260_ = l_Array_append___redArg(v___x_4257_, v___x_4259_);
lean_inc_ref(v___x_4256_);
v___x_4261_ = l_Lean_mkAppN(v___x_4256_, v___x_4260_);
lean_dec_ref(v___x_4260_);
lean_inc_n(v___x_4254_, 2);
v___x_4262_ = lean_array_push(v___x_4258_, v___x_4254_);
lean_inc_ref(v___x_4262_);
v___f_4263_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__7___boxed), 26, 20);
lean_closure_set(v___f_4263_, 0, v___x_4253_);
lean_closure_set(v___f_4263_, 1, v___x_4254_);
lean_closure_set(v___f_4263_, 2, v_is_4233_);
lean_closure_set(v___f_4263_, 3, v_head_4235_);
lean_closure_set(v___f_4263_, 4, v_ctors_4236_);
lean_closure_set(v___f_4263_, 5, v_tail_4231_);
lean_closure_set(v___f_4263_, 6, v_params_4232_);
lean_closure_set(v___f_4263_, 7, v_numIndices_4237_);
lean_closure_set(v___f_4263_, 8, v___x_4234_);
lean_closure_set(v___f_4263_, 9, v___x_4238_);
lean_closure_set(v___f_4263_, 10, v___x_4239_);
lean_closure_set(v___f_4263_, 11, v___x_4259_);
lean_closure_set(v___f_4263_, 12, v___x_4262_);
lean_closure_set(v___f_4263_, 13, v_val_4240_);
lean_closure_set(v___f_4263_, 14, v___x_4258_);
lean_closure_set(v___f_4263_, 15, v_declName_4241_);
lean_closure_set(v___f_4263_, 16, v_levelParams_4242_);
lean_closure_set(v___f_4263_, 17, v___x_4252_);
lean_closure_set(v___f_4263_, 18, v_numParams_4243_);
lean_closure_set(v___f_4263_, 19, v___x_4244_);
v___x_4264_ = l_Array_append___redArg(v___x_4257_, v___x_4262_);
lean_dec_ref(v___x_4262_);
v___x_4265_ = l_Lean_mkAppN(v___x_4256_, v___x_4264_);
lean_dec_ref(v___x_4264_);
v___x_4266_ = l_Lean_Meta_mkEq(v___x_4261_, v___x_4265_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
lean_dec_ref_known(v___x_4266_, 1);
v___x_4268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_4269_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_4268_, v_a_4267_, v___f_4263_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
return v___x_4269_;
}
else
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4277_; 
lean_dec_ref(v___f_4263_);
v_a_4270_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4277_ == 0)
{
v___x_4272_ = v___x_4266_;
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v___x_4266_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4275_; 
if (v_isShared_4273_ == 0)
{
v___x_4275_ = v___x_4272_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v_a_4270_);
v___x_4275_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
return v___x_4275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object** _args){
lean_object* v___x_4278_ = _args[0];
lean_object* v_x1_4279_ = _args[1];
lean_object* v_indName_4280_ = _args[2];
lean_object* v_tail_4281_ = _args[3];
lean_object* v_params_4282_ = _args[4];
lean_object* v_is_4283_ = _args[5];
lean_object* v___x_4284_ = _args[6];
lean_object* v_head_4285_ = _args[7];
lean_object* v_ctors_4286_ = _args[8];
lean_object* v_numIndices_4287_ = _args[9];
lean_object* v___x_4288_ = _args[10];
lean_object* v___x_4289_ = _args[11];
lean_object* v_val_4290_ = _args[12];
lean_object* v_declName_4291_ = _args[13];
lean_object* v_levelParams_4292_ = _args[14];
lean_object* v_numParams_4293_ = _args[15];
lean_object* v___x_4294_ = _args[16];
lean_object* v_x2_4295_ = _args[17];
lean_object* v_x_4296_ = _args[18];
lean_object* v___y_4297_ = _args[19];
lean_object* v___y_4298_ = _args[20];
lean_object* v___y_4299_ = _args[21];
lean_object* v___y_4300_ = _args[22];
lean_object* v___y_4301_ = _args[23];
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lean_mkCasesOnSameCtor___lam__8(v___x_4278_, v_x1_4279_, v_indName_4280_, v_tail_4281_, v_params_4282_, v_is_4283_, v___x_4284_, v_head_4285_, v_ctors_4286_, v_numIndices_4287_, v___x_4288_, v___x_4289_, v_val_4290_, v_declName_4291_, v_levelParams_4292_, v_numParams_4293_, v___x_4294_, v_x2_4295_, v_x_4296_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec_ref(v_x_4296_);
lean_dec_ref(v_x2_4295_);
lean_dec_ref(v_x1_4279_);
lean_dec_ref(v___x_4278_);
return v_res_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object* v___x_4303_, lean_object* v_indName_4304_, lean_object* v_tail_4305_, lean_object* v_params_4306_, lean_object* v_is_4307_, lean_object* v___x_4308_, lean_object* v_head_4309_, lean_object* v_ctors_4310_, lean_object* v_numIndices_4311_, lean_object* v___x_4312_, lean_object* v___x_4313_, lean_object* v_val_4314_, lean_object* v_declName_4315_, lean_object* v_levelParams_4316_, lean_object* v_numParams_4317_, lean_object* v___x_4318_, lean_object* v_t_4319_, lean_object* v___x_4320_, lean_object* v_x1_4321_, lean_object* v_x_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___f_4328_; uint8_t v___x_4329_; lean_object* v___x_4330_; 
v___f_4328_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__8___boxed), 24, 17);
lean_closure_set(v___f_4328_, 0, v___x_4303_);
lean_closure_set(v___f_4328_, 1, v_x1_4321_);
lean_closure_set(v___f_4328_, 2, v_indName_4304_);
lean_closure_set(v___f_4328_, 3, v_tail_4305_);
lean_closure_set(v___f_4328_, 4, v_params_4306_);
lean_closure_set(v___f_4328_, 5, v_is_4307_);
lean_closure_set(v___f_4328_, 6, v___x_4308_);
lean_closure_set(v___f_4328_, 7, v_head_4309_);
lean_closure_set(v___f_4328_, 8, v_ctors_4310_);
lean_closure_set(v___f_4328_, 9, v_numIndices_4311_);
lean_closure_set(v___f_4328_, 10, v___x_4312_);
lean_closure_set(v___f_4328_, 11, v___x_4313_);
lean_closure_set(v___f_4328_, 12, v_val_4314_);
lean_closure_set(v___f_4328_, 13, v_declName_4315_);
lean_closure_set(v___f_4328_, 14, v_levelParams_4316_);
lean_closure_set(v___f_4328_, 15, v_numParams_4317_);
lean_closure_set(v___f_4328_, 16, v___x_4318_);
v___x_4329_ = 0;
v___x_4330_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4319_, v___x_4320_, v___f_4328_, v___x_4329_, v___x_4329_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
return v___x_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object** _args){
lean_object* v___x_4331_ = _args[0];
lean_object* v_indName_4332_ = _args[1];
lean_object* v_tail_4333_ = _args[2];
lean_object* v_params_4334_ = _args[3];
lean_object* v_is_4335_ = _args[4];
lean_object* v___x_4336_ = _args[5];
lean_object* v_head_4337_ = _args[6];
lean_object* v_ctors_4338_ = _args[7];
lean_object* v_numIndices_4339_ = _args[8];
lean_object* v___x_4340_ = _args[9];
lean_object* v___x_4341_ = _args[10];
lean_object* v_val_4342_ = _args[11];
lean_object* v_declName_4343_ = _args[12];
lean_object* v_levelParams_4344_ = _args[13];
lean_object* v_numParams_4345_ = _args[14];
lean_object* v___x_4346_ = _args[15];
lean_object* v_t_4347_ = _args[16];
lean_object* v___x_4348_ = _args[17];
lean_object* v_x1_4349_ = _args[18];
lean_object* v_x_4350_ = _args[19];
lean_object* v___y_4351_ = _args[20];
lean_object* v___y_4352_ = _args[21];
lean_object* v___y_4353_ = _args[22];
lean_object* v___y_4354_ = _args[23];
lean_object* v___y_4355_ = _args[24];
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = l_Lean_mkCasesOnSameCtor___lam__9(v___x_4331_, v_indName_4332_, v_tail_4333_, v_params_4334_, v_is_4335_, v___x_4336_, v_head_4337_, v_ctors_4338_, v_numIndices_4339_, v___x_4340_, v___x_4341_, v_val_4342_, v_declName_4343_, v_levelParams_4344_, v_numParams_4345_, v___x_4346_, v_t_4347_, v___x_4348_, v_x1_4349_, v_x_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
lean_dec(v___y_4354_);
lean_dec_ref(v___y_4353_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec_ref(v_x_4350_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object* v___x_4357_, lean_object* v_indName_4358_, lean_object* v_tail_4359_, lean_object* v_params_4360_, lean_object* v_head_4361_, lean_object* v_ctors_4362_, lean_object* v_numIndices_4363_, lean_object* v___x_4364_, lean_object* v___x_4365_, lean_object* v_val_4366_, lean_object* v_declName_4367_, lean_object* v_levelParams_4368_, lean_object* v_numParams_4369_, lean_object* v___x_4370_, lean_object* v_is_4371_, lean_object* v_t_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___f_4380_; uint8_t v___x_4381_; lean_object* v___x_4382_; 
v___x_4378_ = lean_unsigned_to_nat(1u);
v___x_4379_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
lean_inc_ref(v_t_4372_);
v___f_4380_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__9___boxed), 25, 18);
lean_closure_set(v___f_4380_, 0, v___x_4357_);
lean_closure_set(v___f_4380_, 1, v_indName_4358_);
lean_closure_set(v___f_4380_, 2, v_tail_4359_);
lean_closure_set(v___f_4380_, 3, v_params_4360_);
lean_closure_set(v___f_4380_, 4, v_is_4371_);
lean_closure_set(v___f_4380_, 5, v___x_4378_);
lean_closure_set(v___f_4380_, 6, v_head_4361_);
lean_closure_set(v___f_4380_, 7, v_ctors_4362_);
lean_closure_set(v___f_4380_, 8, v_numIndices_4363_);
lean_closure_set(v___f_4380_, 9, v___x_4364_);
lean_closure_set(v___f_4380_, 10, v___x_4365_);
lean_closure_set(v___f_4380_, 11, v_val_4366_);
lean_closure_set(v___f_4380_, 12, v_declName_4367_);
lean_closure_set(v___f_4380_, 13, v_levelParams_4368_);
lean_closure_set(v___f_4380_, 14, v_numParams_4369_);
lean_closure_set(v___f_4380_, 15, v___x_4370_);
lean_closure_set(v___f_4380_, 16, v_t_4372_);
lean_closure_set(v___f_4380_, 17, v___x_4379_);
v___x_4381_ = 0;
v___x_4382_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4372_, v___x_4379_, v___f_4380_, v___x_4381_, v___x_4381_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
return v___x_4382_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object** _args){
lean_object* v___x_4383_ = _args[0];
lean_object* v_indName_4384_ = _args[1];
lean_object* v_tail_4385_ = _args[2];
lean_object* v_params_4386_ = _args[3];
lean_object* v_head_4387_ = _args[4];
lean_object* v_ctors_4388_ = _args[5];
lean_object* v_numIndices_4389_ = _args[6];
lean_object* v___x_4390_ = _args[7];
lean_object* v___x_4391_ = _args[8];
lean_object* v_val_4392_ = _args[9];
lean_object* v_declName_4393_ = _args[10];
lean_object* v_levelParams_4394_ = _args[11];
lean_object* v_numParams_4395_ = _args[12];
lean_object* v___x_4396_ = _args[13];
lean_object* v_is_4397_ = _args[14];
lean_object* v_t_4398_ = _args[15];
lean_object* v___y_4399_ = _args[16];
lean_object* v___y_4400_ = _args[17];
lean_object* v___y_4401_ = _args[18];
lean_object* v___y_4402_ = _args[19];
lean_object* v___y_4403_ = _args[20];
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Lean_mkCasesOnSameCtor___lam__10(v___x_4383_, v_indName_4384_, v_tail_4385_, v_params_4386_, v_head_4387_, v_ctors_4388_, v_numIndices_4389_, v___x_4390_, v___x_4391_, v_val_4392_, v_declName_4393_, v_levelParams_4394_, v_numParams_4395_, v___x_4396_, v_is_4397_, v_t_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
lean_dec(v___y_4402_);
lean_dec_ref(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object* v___x_4405_, lean_object* v_indName_4406_, lean_object* v_tail_4407_, lean_object* v_head_4408_, lean_object* v_ctors_4409_, lean_object* v_numIndices_4410_, lean_object* v___x_4411_, lean_object* v___x_4412_, lean_object* v_val_4413_, lean_object* v_declName_4414_, lean_object* v_levelParams_4415_, lean_object* v_numParams_4416_, lean_object* v_params_4417_, lean_object* v_t_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
lean_object* v___x_4424_; lean_object* v___f_4425_; lean_object* v___x_4426_; uint8_t v___x_4427_; lean_object* v___x_4428_; 
v___x_4424_ = l_Lean_Expr_bindingBody_x21(v_t_4418_);
lean_inc_ref(v___x_4424_);
lean_inc(v_numIndices_4410_);
v___f_4425_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__10___boxed), 21, 14);
lean_closure_set(v___f_4425_, 0, v___x_4405_);
lean_closure_set(v___f_4425_, 1, v_indName_4406_);
lean_closure_set(v___f_4425_, 2, v_tail_4407_);
lean_closure_set(v___f_4425_, 3, v_params_4417_);
lean_closure_set(v___f_4425_, 4, v_head_4408_);
lean_closure_set(v___f_4425_, 5, v_ctors_4409_);
lean_closure_set(v___f_4425_, 6, v_numIndices_4410_);
lean_closure_set(v___f_4425_, 7, v___x_4411_);
lean_closure_set(v___f_4425_, 8, v___x_4412_);
lean_closure_set(v___f_4425_, 9, v_val_4413_);
lean_closure_set(v___f_4425_, 10, v_declName_4414_);
lean_closure_set(v___f_4425_, 11, v_levelParams_4415_);
lean_closure_set(v___f_4425_, 12, v_numParams_4416_);
lean_closure_set(v___f_4425_, 13, v___x_4424_);
v___x_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4426_, 0, v_numIndices_4410_);
v___x_4427_ = 0;
v___x_4428_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_4424_, v___x_4426_, v___f_4425_, v___x_4427_, v___x_4427_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object** _args){
lean_object* v___x_4429_ = _args[0];
lean_object* v_indName_4430_ = _args[1];
lean_object* v_tail_4431_ = _args[2];
lean_object* v_head_4432_ = _args[3];
lean_object* v_ctors_4433_ = _args[4];
lean_object* v_numIndices_4434_ = _args[5];
lean_object* v___x_4435_ = _args[6];
lean_object* v___x_4436_ = _args[7];
lean_object* v_val_4437_ = _args[8];
lean_object* v_declName_4438_ = _args[9];
lean_object* v_levelParams_4439_ = _args[10];
lean_object* v_numParams_4440_ = _args[11];
lean_object* v_params_4441_ = _args[12];
lean_object* v_t_4442_ = _args[13];
lean_object* v___y_4443_ = _args[14];
lean_object* v___y_4444_ = _args[15];
lean_object* v___y_4445_ = _args[16];
lean_object* v___y_4446_ = _args[17];
lean_object* v___y_4447_ = _args[18];
_start:
{
lean_object* v_res_4448_; 
v_res_4448_ = l_Lean_mkCasesOnSameCtor___lam__11(v___x_4429_, v_indName_4430_, v_tail_4431_, v_head_4432_, v_ctors_4433_, v_numIndices_4434_, v___x_4435_, v___x_4436_, v_val_4437_, v_declName_4438_, v_levelParams_4439_, v_numParams_4440_, v_params_4441_, v_t_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_);
lean_dec(v___y_4446_);
lean_dec_ref(v___y_4445_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec_ref(v_t_4442_);
return v_res_4448_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__3(void){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4453_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_4454_ = lean_unsigned_to_nat(58u);
v___x_4455_ = lean_unsigned_to_nat(142u);
v___x_4456_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4457_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4458_ = l_mkPanicMessageWithDecl(v___x_4457_, v___x_4456_, v___x_4455_, v___x_4454_, v___x_4453_);
return v___x_4458_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__4(void){
_start:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4459_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_4460_ = lean_unsigned_to_nat(60u);
v___x_4461_ = lean_unsigned_to_nat(136u);
v___x_4462_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4463_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4464_ = l_mkPanicMessageWithDecl(v___x_4463_, v___x_4462_, v___x_4461_, v___x_4460_, v___x_4459_);
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object* v_declName_4465_, lean_object* v_indName_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4472_ = l_Lean_instInhabitedExpr;
lean_inc(v_indName_4466_);
v___x_4473_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref_known(v___x_4473_, 1);
if (lean_obj_tag(v_a_4474_) == 5)
{
lean_object* v_val_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v_val_4475_ = lean_ctor_get(v_a_4474_, 0);
lean_inc_ref(v_val_4475_);
lean_dec_ref_known(v_a_4474_, 1);
v___x_4476_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__1));
lean_inc(v_declName_4465_);
v___x_4477_ = l_Lean_Name_append(v_declName_4465_, v___x_4476_);
lean_inc(v_indName_4466_);
lean_inc(v___x_4477_);
v___x_4478_ = l_Lean_mkCasesOnSameCtorHet(v___x_4477_, v_indName_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4510_; 
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4510_ == 0)
{
lean_object* v_unused_4511_; 
v_unused_4511_ = lean_ctor_get(v___x_4478_, 0);
lean_dec(v_unused_4511_);
v___x_4480_ = v___x_4478_;
v_isShared_4481_ = v_isSharedCheck_4510_;
goto v_resetjp_4479_;
}
else
{
lean_dec(v___x_4478_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4510_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; 
lean_inc(v_indName_4466_);
v___x_4482_ = l_Lean_mkCasesOnName(v_indName_4466_);
v___x_4483_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_4482_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
if (lean_obj_tag(v___x_4483_) == 0)
{
lean_object* v_a_4484_; lean_object* v_levelParams_4485_; lean_object* v_type_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v_a_4484_ = lean_ctor_get(v___x_4483_, 0);
lean_inc(v_a_4484_);
lean_dec_ref_known(v___x_4483_, 1);
v_levelParams_4485_ = lean_ctor_get(v_a_4484_, 1);
lean_inc_n(v_levelParams_4485_, 2);
v_type_4486_ = lean_ctor_get(v_a_4484_, 2);
lean_inc_ref(v_type_4486_);
lean_dec(v_a_4484_);
v___x_4487_ = lean_box(0);
v___x_4488_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_4485_, v___x_4487_);
if (lean_obj_tag(v___x_4488_) == 1)
{
lean_object* v_head_4489_; lean_object* v_tail_4490_; lean_object* v_numParams_4491_; lean_object* v_numIndices_4492_; lean_object* v_ctors_4493_; lean_object* v___f_4494_; lean_object* v___x_4496_; 
v_head_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_head_4489_);
v_tail_4490_ = lean_ctor_get(v___x_4488_, 1);
lean_inc(v_tail_4490_);
v_numParams_4491_ = lean_ctor_get(v_val_4475_, 1);
lean_inc_n(v_numParams_4491_, 2);
v_numIndices_4492_ = lean_ctor_get(v_val_4475_, 2);
lean_inc(v_numIndices_4492_);
v_ctors_4493_ = lean_ctor_get(v_val_4475_, 4);
lean_inc(v_ctors_4493_);
v___f_4494_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__11___boxed), 19, 12);
lean_closure_set(v___f_4494_, 0, v___x_4472_);
lean_closure_set(v___f_4494_, 1, v_indName_4466_);
lean_closure_set(v___f_4494_, 2, v_tail_4490_);
lean_closure_set(v___f_4494_, 3, v_head_4489_);
lean_closure_set(v___f_4494_, 4, v_ctors_4493_);
lean_closure_set(v___f_4494_, 5, v_numIndices_4492_);
lean_closure_set(v___f_4494_, 6, v___x_4477_);
lean_closure_set(v___f_4494_, 7, v___x_4488_);
lean_closure_set(v___f_4494_, 8, v_val_4475_);
lean_closure_set(v___f_4494_, 9, v_declName_4465_);
lean_closure_set(v___f_4494_, 10, v_levelParams_4485_);
lean_closure_set(v___f_4494_, 11, v_numParams_4491_);
if (v_isShared_4481_ == 0)
{
lean_ctor_set_tag(v___x_4480_, 1);
lean_ctor_set(v___x_4480_, 0, v_numParams_4491_);
v___x_4496_ = v___x_4480_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_numParams_4491_);
v___x_4496_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
uint8_t v___x_4497_; lean_object* v___x_4498_; 
v___x_4497_ = 0;
v___x_4498_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_4486_, v___x_4496_, v___f_4494_, v___x_4497_, v___x_4497_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
return v___x_4498_;
}
}
else
{
lean_object* v___x_4500_; lean_object* v___x_4501_; 
lean_dec(v___x_4488_);
lean_dec_ref(v_type_4486_);
lean_dec(v_levelParams_4485_);
lean_del_object(v___x_4480_);
lean_dec(v___x_4477_);
lean_dec_ref(v_val_4475_);
lean_dec(v_indName_4466_);
lean_dec(v_declName_4465_);
v___x_4500_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__3, &l_Lean_mkCasesOnSameCtor___closed__3_once, _init_l_Lean_mkCasesOnSameCtor___closed__3);
v___x_4501_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4500_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
return v___x_4501_;
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
lean_del_object(v___x_4480_);
lean_dec(v___x_4477_);
lean_dec_ref(v_val_4475_);
lean_dec(v_indName_4466_);
lean_dec(v_declName_4465_);
v_a_4502_ = lean_ctor_get(v___x_4483_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4483_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4483_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
}
else
{
lean_dec(v___x_4477_);
lean_dec_ref(v_val_4475_);
lean_dec(v_indName_4466_);
lean_dec(v_declName_4465_);
return v___x_4478_;
}
}
else
{
lean_object* v___x_4512_; lean_object* v___x_4513_; 
lean_dec(v_a_4474_);
lean_dec(v_indName_4466_);
lean_dec(v_declName_4465_);
v___x_4512_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__4, &l_Lean_mkCasesOnSameCtor___closed__4_once, _init_l_Lean_mkCasesOnSameCtor___closed__4);
v___x_4513_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4512_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_);
return v___x_4513_;
}
}
else
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4521_; 
lean_dec(v_indName_4466_);
lean_dec(v_declName_4465_);
v_a_4514_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4516_ = v___x_4473_;
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4473_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4517_ == 0)
{
v___x_4519_ = v___x_4516_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_a_4514_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
return v___x_4519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object* v_declName_4522_, lean_object* v_indName_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Lean_mkCasesOnSameCtor(v_declName_4522_, v_indName_4523_, v_a_4524_, v_a_4525_, v_a_4526_, v_a_4527_);
lean_dec(v_a_4527_);
lean_dec_ref(v_a_4526_);
lean_dec(v_a_4525_);
lean_dec_ref(v_a_4524_);
return v_res_4529_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
}
#ifdef __cplusplus
}
#endif

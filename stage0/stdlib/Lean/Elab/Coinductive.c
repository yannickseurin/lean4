// Lean compiler output
// Module: Lean.Elab.Coinductive
// Imports: public import Lean.Elab.PreDefinition.PartialFixpoint public import Lean.Elab.Tactic.Rewrite public import Lean.Meta.Tactic.Simp public import Lean.Linter.UnusedVariables
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_instInhabitedFVarId_default;
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_replace_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers_default;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Elab_partialFixpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coinductive"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(224, 250, 83, 200, 24, 179, 82, 22)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Coinductive"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2____boxed(lean_object*);
static const lean_array_object l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0 = (const lean_object*)&l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData;
static const lean_string_object l_Lean_Elab_Command_addFunctorPostfix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_functor"};
static const lean_object* l_Lean_Elab_Command_addFunctorPostfix___closed__0 = (const lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_addFunctorPostfix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 229, 169, 91, 229, 240, 88, 134)}};
static const lean_object* l_Lean_Elab_Command_addFunctorPostfix___closed__1 = (const lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addFunctorPostfix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfix(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Elab.Coinductive"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.Elab.Command.removeFunctorPostfixInCtor"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UnexpectedName"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "did not generate unfolding theorem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "existential_equiv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 65, 32, 87, 61, 118, 240, 105)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "functor_unfold"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 202, 245, 227, 23, 206, 217, 112)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "res: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "The conclusion of the constructor "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " is "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "The elaborated constructor is of the type: "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Generating constructor: "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Expected one argument"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cases_eliminator"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(244, 14, 239, 189, 147, 54, 173, 250)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elab_as_elim"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(82, 49, 111, 107, 153, 28, 187, 88)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expected to be quantifier"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed(lean_object**);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "existential"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 178, 56, 87, 59, 132, 244, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabCoinductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Elaborating: "};
static const lean_object* l_Lean_Elab_Command_elabCoinductive___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabCoinductive___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCoinductive___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCoinductive___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_box(0);
v___x_7_ = l_unsafeCast___redArg(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_10_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_11_ = l_Lean_Name_str___override(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_14_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_15_ = l_Lean_Name_str___override(v___x_14_, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_17_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_18_ = l_Lean_Name_str___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_21_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_22_ = l_Lean_Name_str___override(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_unsigned_to_nat(0u);
v___x_24_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_25_ = l_Lean_Name_num___override(v___x_24_, v___x_23_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_27_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_28_ = l_Lean_Name_str___override(v___x_27_, v___x_26_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_30_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_31_ = l_Lean_Name_str___override(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_34_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_38_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_39_ = l_Lean_Name_str___override(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_42_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_43_ = l_Lean_Name_str___override(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_45_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_46_ = l_Lean_Name_str___override(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_48_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_49_ = l_Lean_Name_str___override(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_unsigned_to_nat(793488904u);
v___x_54_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_num___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_58_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_59_ = l_Lean_Name_str___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_63_ = l_Lean_Name_str___override(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_unsigned_to_nat(2u);
v___x_65_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_66_ = l_Lean_Name_num___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_69_ = 0;
v___x_70_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__28_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_71_ = l_Lean_registerTraceClass(v___x_68_, v___x_69_, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2____boxed(lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
return v_res_73_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1(void){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_76_ = lean_box(0);
v___x_77_ = 0;
v___x_78_ = ((lean_object*)(l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0));
v___x_79_ = l_Lean_Elab_instInhabitedModifiers_default;
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_81_ = lean_box(0);
v___x_82_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
lean_ctor_set(v___x_82_, 2, v___x_81_);
lean_ctor_set(v___x_82_, 3, v___x_79_);
lean_ctor_set(v___x_82_, 4, v___x_78_);
lean_ctor_set(v___x_82_, 5, v___x_76_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*6, v___x_77_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_obj_once(&l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1, &l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1_once, _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addFunctorPostfix(lean_object* v_x_88_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(l_Lean_Elab_Command_addFunctorPostfix___closed__1));
v___x_90_ = l_Lean_Name_append(v_x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfix(lean_object* v_x_91_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = l_Lean_Name_hasMacroScopes(v_x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Name_getPrefix(v_x_91_);
lean_dec(v_x_91_);
return v___x_93_;
}
else
{
lean_object* v_view_94_; lean_object* v_name_95_; lean_object* v_imported_96_; lean_object* v_ctx_97_; lean_object* v_scopes_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_107_; 
v_view_94_ = l_Lean_extractMacroScopes(v_x_91_);
v_name_95_ = lean_ctor_get(v_view_94_, 0);
v_imported_96_ = lean_ctor_get(v_view_94_, 1);
v_ctx_97_ = lean_ctor_get(v_view_94_, 2);
v_scopes_98_ = lean_ctor_get(v_view_94_, 3);
v_isSharedCheck_107_ = !lean_is_exclusive(v_view_94_);
if (v_isSharedCheck_107_ == 0)
{
v___x_100_ = v_view_94_;
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_scopes_98_);
lean_inc(v_ctx_97_);
lean_inc(v_imported_96_);
lean_inc(v_name_95_);
lean_dec(v_view_94_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_107_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = l_Lean_Name_getPrefix(v_name_95_);
lean_dec(v_name_95_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_imported_96_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v_ctx_97_);
lean_ctor_set(v_reuseFailAlloc_106_, 3, v_scopes_98_);
v___x_104_ = v_reuseFailAlloc_106_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_MacroScopesView_review(v___x_104_);
return v___x_105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(lean_object* v_msg_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = l_Lean_instInhabitedName;
v___x_110_ = lean_panic_fn_borrowed(v___x_109_, v_msg_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_114_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2));
v___x_115_ = lean_unsigned_to_nat(13u);
v___x_116_ = lean_unsigned_to_nat(126u);
v___x_117_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1));
v___x_118_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0));
v___x_119_ = l_mkPanicMessageWithDecl(v___x_118_, v___x_117_, v___x_116_, v___x_115_, v___x_114_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor(lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 1)
{
lean_object* v_pre_121_; lean_object* v_str_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_pre_121_ = lean_ctor_get(v_x_120_, 0);
lean_inc(v_pre_121_);
v_str_122_ = lean_ctor_get(v_x_120_, 1);
lean_inc_ref(v_str_122_);
lean_dec_ref_known(v_x_120_, 2);
v___x_123_ = l_Lean_Elab_Command_removeFunctorPostfix(v_pre_121_);
v___x_124_ = l_Lean_Name_str___override(v___x_123_, v_str_122_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_x_120_);
v___x_125_ = lean_obj_once(&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3, &l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3_once, _init_l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3);
v___x_126_ = l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(v___x_125_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(lean_object* v_goal_132_, lean_object* v_eq_133_, uint8_t v_symm_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; 
lean_inc(v_goal_132_);
v___x_140_ = l_Lean_MVarId_getType(v_goal_132_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_a_141_);
lean_dec_ref_known(v___x_140_, 1);
v___x_142_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0));
lean_inc(v_goal_132_);
v___x_143_ = l_Lean_MVarId_rewrite(v_goal_132_, v_a_141_, v_eq_133_, v_symm_134_, v___x_142_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; lean_object* v_eNew_145_; lean_object* v_eqProof_146_; lean_object* v___x_147_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_a_144_);
lean_dec_ref_known(v___x_143_, 1);
v_eNew_145_ = lean_ctor_get(v_a_144_, 0);
lean_inc_ref(v_eNew_145_);
v_eqProof_146_ = lean_ctor_get(v_a_144_, 1);
lean_inc_ref(v_eqProof_146_);
lean_dec(v_a_144_);
v___x_147_ = l_Lean_MVarId_replaceTargetEq(v_goal_132_, v_eNew_145_, v_eqProof_146_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
return v___x_147_;
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec(v_goal_132_);
v_a_148_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_143_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_143_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v_eq_133_);
lean_dec(v_goal_132_);
v_a_156_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_140_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_140_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___boxed(lean_object* v_goal_164_, lean_object* v_eq_165_, lean_object* v_symm_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
uint8_t v_symm_boxed_172_; lean_object* v_res_173_; 
v_symm_boxed_172_ = lean_unbox(v_symm_166_);
v_res_173_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v_goal_164_, v_eq_165_, v_symm_boxed_172_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(lean_object* v_e_174_, lean_object* v___y_175_){
_start:
{
uint8_t v___x_177_; 
v___x_177_ = l_Lean_Expr_hasMVar(v_e_174_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v_e_174_);
return v___x_178_;
}
else
{
lean_object* v___x_179_; lean_object* v_mctx_180_; lean_object* v___x_181_; lean_object* v_fst_182_; lean_object* v_snd_183_; lean_object* v___x_184_; lean_object* v_cache_185_; lean_object* v_zetaDeltaFVarIds_186_; lean_object* v_postponed_187_; lean_object* v_diag_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_197_; 
v___x_179_ = lean_st_ref_get(v___y_175_);
v_mctx_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_mctx_180_);
lean_dec(v___x_179_);
v___x_181_ = l_Lean_instantiateMVarsCore(v_mctx_180_, v_e_174_);
v_fst_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_fst_182_);
v_snd_183_ = lean_ctor_get(v___x_181_, 1);
lean_inc(v_snd_183_);
lean_dec_ref(v___x_181_);
v___x_184_ = lean_st_ref_take(v___y_175_);
v_cache_185_ = lean_ctor_get(v___x_184_, 1);
v_zetaDeltaFVarIds_186_ = lean_ctor_get(v___x_184_, 2);
v_postponed_187_ = lean_ctor_get(v___x_184_, 3);
v_diag_188_ = lean_ctor_get(v___x_184_, 4);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; 
v_unused_198_ = lean_ctor_get(v___x_184_, 0);
lean_dec(v_unused_198_);
v___x_190_ = v___x_184_;
v_isShared_191_ = v_isSharedCheck_197_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_diag_188_);
lean_inc(v_postponed_187_);
lean_inc(v_zetaDeltaFVarIds_186_);
lean_inc(v_cache_185_);
lean_dec(v___x_184_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_197_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v_snd_183_);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_snd_183_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_cache_185_);
lean_ctor_set(v_reuseFailAlloc_196_, 2, v_zetaDeltaFVarIds_186_);
lean_ctor_set(v_reuseFailAlloc_196_, 3, v_postponed_187_);
lean_ctor_set(v_reuseFailAlloc_196_, 4, v_diag_188_);
v___x_193_ = v_reuseFailAlloc_196_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_st_ref_put(v___y_175_, v___x_193_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_fst_182_);
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg___boxed(lean_object* v_e_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_e_199_, v___y_200_);
lean_dec(v___y_200_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(lean_object* v_e_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_e_203_, v___y_205_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___boxed(lean_object* v_e_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(v_e_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(lean_object* v_k_217_, lean_object* v_b_218_, lean_object* v_c_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v___x_225_; 
lean_inc(v___y_223_);
lean_inc_ref(v___y_222_);
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
v___x_225_ = lean_apply_7(v_k_217_, v_b_218_, v_c_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, lean_box(0));
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed(lean_object* v_k_226_, lean_object* v_b_227_, lean_object* v_c_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(v_k_226_, v_b_227_, v_c_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(lean_object* v_type_235_, lean_object* v_k_236_, uint8_t v_cleanupAnnotations_237_, uint8_t v_whnfType_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___f_244_; lean_object* v___x_245_; 
v___f_244_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_244_, 0, v_k_236_);
v___x_245_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_235_, v___f_244_, v_cleanupAnnotations_237_, v_whnfType_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_245_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_245_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
v_a_254_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_245_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_245_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___boxed(lean_object* v_type_262_, lean_object* v_k_263_, lean_object* v_cleanupAnnotations_264_, lean_object* v_whnfType_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_271_; uint8_t v_whnfType_boxed_272_; lean_object* v_res_273_; 
v_cleanupAnnotations_boxed_271_ = lean_unbox(v_cleanupAnnotations_264_);
v_whnfType_boxed_272_ = lean_unbox(v_whnfType_265_);
v_res_273_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_262_, v_k_263_, v_cleanupAnnotations_boxed_271_, v_whnfType_boxed_272_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(lean_object* v_00_u03b1_274_, lean_object* v_type_275_, lean_object* v_k_276_, uint8_t v_cleanupAnnotations_277_, uint8_t v_whnfType_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_275_, v_k_276_, v_cleanupAnnotations_277_, v_whnfType_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___boxed(lean_object* v_00_u03b1_285_, lean_object* v_type_286_, lean_object* v_k_287_, lean_object* v_cleanupAnnotations_288_, lean_object* v_whnfType_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_295_; uint8_t v_whnfType_boxed_296_; lean_object* v_res_297_; 
v_cleanupAnnotations_boxed_295_ = lean_unbox(v_cleanupAnnotations_288_);
v_whnfType_boxed_296_ = lean_unbox(v_whnfType_289_);
v_res_297_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(v_00_u03b1_285_, v_type_286_, v_k_287_, v_cleanupAnnotations_boxed_295_, v_whnfType_boxed_296_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(lean_object* v_name_298_, lean_object* v_levelParams_299_, lean_object* v_type_300_, lean_object* v_value_301_, lean_object* v_hints_302_, lean_object* v___y_303_){
_start:
{
lean_object* v___x_305_; uint8_t v___y_307_; uint8_t v___y_314_; lean_object* v_env_317_; uint8_t v___x_318_; 
v___x_305_ = lean_st_ref_get(v___y_303_);
v_env_317_ = lean_ctor_get(v___x_305_, 0);
lean_inc_ref_n(v_env_317_, 2);
lean_dec(v___x_305_);
v___x_318_ = l_Lean_Environment_hasUnsafe(v_env_317_, v_type_300_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; 
v___x_319_ = l_Lean_Environment_hasUnsafe(v_env_317_, v_value_301_);
v___y_314_ = v___x_319_;
goto v___jp_313_;
}
else
{
lean_dec_ref(v_env_317_);
v___y_314_ = v___x_318_;
goto v___jp_313_;
}
v___jp_306_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
lean_inc(v_name_298_);
v___x_308_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_308_, 0, v_name_298_);
lean_ctor_set(v___x_308_, 1, v_levelParams_299_);
lean_ctor_set(v___x_308_, 2, v_type_300_);
v___x_309_ = lean_box(0);
v___x_310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_310_, 0, v_name_298_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_311_, 0, v___x_308_);
lean_ctor_set(v___x_311_, 1, v_value_301_);
lean_ctor_set(v___x_311_, 2, v_hints_302_);
lean_ctor_set(v___x_311_, 3, v___x_310_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*4, v___y_307_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
v___jp_313_:
{
if (v___y_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = 1;
v___y_307_ = v___x_315_;
goto v___jp_306_;
}
else
{
uint8_t v___x_316_; 
v___x_316_ = 0;
v___y_307_ = v___x_316_;
goto v___jp_306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg___boxed(lean_object* v_name_320_, lean_object* v_levelParams_321_, lean_object* v_type_322_, lean_object* v_value_323_, lean_object* v_hints_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v_name_320_, v_levelParams_321_, v_type_322_, v_value_323_, v_hints_324_, v___y_325_);
lean_dec(v___y_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(lean_object* v_name_328_, lean_object* v_levelParams_329_, lean_object* v_type_330_, lean_object* v_value_331_, lean_object* v_hints_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v_name_328_, v_levelParams_329_, v_type_330_, v_value_331_, v_hints_332_, v___y_336_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___boxed(lean_object* v_name_339_, lean_object* v_levelParams_340_, lean_object* v_type_341_, lean_object* v_value_342_, lean_object* v_hints_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(v_name_339_, v_levelParams_340_, v_type_341_, v_value_342_, v_hints_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
if (lean_obj_tag(v_a_350_) == 0)
{
lean_object* v___x_352_; 
v___x_352_ = l_List_reverse___redArg(v_a_351_);
return v___x_352_;
}
else
{
lean_object* v_head_353_; lean_object* v_tail_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_363_; 
v_head_353_ = lean_ctor_get(v_a_350_, 0);
v_tail_354_ = lean_ctor_get(v_a_350_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_a_350_);
if (v_isSharedCheck_363_ == 0)
{
v___x_356_ = v_a_350_;
v_isShared_357_ = v_isSharedCheck_363_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_tail_354_);
lean_inc(v_head_353_);
lean_dec(v_a_350_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_363_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_358_ = l_Lean_mkLevelParam(v_head_353_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 1, v_a_351_);
lean_ctor_set(v___x_356_, 0, v___x_358_);
v___x_360_ = v___x_356_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_358_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_a_351_);
v___x_360_ = v_reuseFailAlloc_362_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v_a_350_ = v_tail_354_;
v_a_351_ = v___x_360_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
lean_object* v_ks_368_; lean_object* v_vs_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_393_; 
v_ks_368_ = lean_ctor_get(v_x_364_, 0);
v_vs_369_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_393_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_393_ == 0)
{
v___x_371_ = v_x_364_;
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_vs_369_);
lean_inc(v_ks_368_);
lean_dec(v_x_364_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_array_get_size(v_ks_368_);
v___x_374_ = lean_nat_dec_lt(v_x_365_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
lean_dec(v_x_365_);
v___x_375_ = lean_array_push(v_ks_368_, v_x_366_);
v___x_376_ = lean_array_push(v_vs_369_, v_x_367_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_376_);
lean_ctor_set(v___x_371_, 0, v___x_375_);
v___x_378_ = v___x_371_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
else
{
lean_object* v_k_x27_380_; uint8_t v___x_381_; 
v_k_x27_380_ = lean_array_fget_borrowed(v_ks_368_, v_x_365_);
v___x_381_ = l_Lean_instBEqMVarId_beq(v_x_366_, v_k_x27_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_383_; 
if (v_isShared_372_ == 0)
{
v___x_383_ = v___x_371_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_ks_368_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_vs_369_);
v___x_383_ = v_reuseFailAlloc_387_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_unsigned_to_nat(1u);
v___x_385_ = lean_nat_add(v_x_365_, v___x_384_);
lean_dec(v_x_365_);
v_x_364_ = v___x_383_;
v_x_365_ = v___x_385_;
goto _start;
}
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_388_ = lean_array_fset(v_ks_368_, v_x_365_, v_x_366_);
v___x_389_ = lean_array_fset(v_vs_369_, v_x_365_, v_x_367_);
lean_dec(v_x_365_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_389_);
lean_ctor_set(v___x_371_, 0, v___x_388_);
v___x_391_ = v___x_371_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(lean_object* v_n_394_, lean_object* v_k_395_, lean_object* v_v_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(v_n_394_, v___x_397_, v_k_395_, v_v_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = lean_box(0);
v___x_400_ = l_unsafeCast___redArg(v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(lean_object* v_x_402_, size_t v_x_403_, size_t v_x_404_, lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
lean_object* v_es_407_; size_t v___x_408_; size_t v___x_409_; lean_object* v_j_410_; lean_object* v___x_411_; uint8_t v___x_412_; 
v_es_407_ = lean_ctor_get(v_x_402_, 0);
v___x_408_ = ((size_t)31ULL);
v___x_409_ = lean_usize_land(v_x_403_, v___x_408_);
v_j_410_ = lean_usize_to_nat(v___x_409_);
v___x_411_ = lean_array_get_size(v_es_407_);
v___x_412_ = lean_nat_dec_lt(v_j_410_, v___x_411_);
if (v___x_412_ == 0)
{
lean_dec(v_j_410_);
lean_dec(v_x_406_);
lean_dec(v_x_405_);
return v_x_402_;
}
else
{
lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_451_; 
lean_inc_ref(v_es_407_);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_402_);
if (v_isSharedCheck_451_ == 0)
{
lean_object* v_unused_452_; 
v_unused_452_ = lean_ctor_get(v_x_402_, 0);
lean_dec(v_unused_452_);
v___x_414_ = v_x_402_;
v_isShared_415_ = v_isSharedCheck_451_;
goto v_resetjp_413_;
}
else
{
lean_dec(v_x_402_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_451_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v_v_416_; lean_object* v___x_417_; lean_object* v_xs_x27_418_; lean_object* v___y_420_; 
v_v_416_ = lean_array_fget(v_es_407_, v_j_410_);
v___x_417_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0);
v_xs_x27_418_ = lean_array_fset(v_es_407_, v_j_410_, v___x_417_);
switch(lean_obj_tag(v_v_416_))
{
case 0:
{
lean_object* v_key_425_; lean_object* v_val_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_436_; 
v_key_425_ = lean_ctor_get(v_v_416_, 0);
v_val_426_ = lean_ctor_get(v_v_416_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_v_416_);
if (v_isSharedCheck_436_ == 0)
{
v___x_428_ = v_v_416_;
v_isShared_429_ = v_isSharedCheck_436_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_val_426_);
lean_inc(v_key_425_);
lean_dec(v_v_416_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_436_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
uint8_t v___x_430_; 
v___x_430_ = l_Lean_instBEqMVarId_beq(v_x_405_, v_key_425_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_del_object(v___x_428_);
v___x_431_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_425_, v_val_426_, v_x_405_, v_x_406_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
v___y_420_ = v___x_432_;
goto v___jp_419_;
}
else
{
lean_object* v___x_434_; 
lean_dec(v_val_426_);
lean_dec(v_key_425_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 1, v_x_406_);
lean_ctor_set(v___x_428_, 0, v_x_405_);
v___x_434_ = v___x_428_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_x_405_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_x_406_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
v___y_420_ = v___x_434_;
goto v___jp_419_;
}
}
}
}
case 1:
{
lean_object* v_node_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_449_; 
v_node_437_ = lean_ctor_get(v_v_416_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v_v_416_);
if (v_isSharedCheck_449_ == 0)
{
v___x_439_ = v_v_416_;
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_node_437_);
lean_dec(v_v_416_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
size_t v___x_441_; size_t v___x_442_; size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_441_ = ((size_t)5ULL);
v___x_442_ = lean_usize_shift_right(v_x_403_, v___x_441_);
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_x_404_, v___x_443_);
v___x_445_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_node_437_, v___x_442_, v___x_444_, v_x_405_, v_x_406_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_445_);
v___x_447_ = v___x_439_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
v___y_420_ = v___x_447_;
goto v___jp_419_;
}
}
}
default: 
{
lean_object* v___x_450_; 
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v_x_405_);
lean_ctor_set(v___x_450_, 1, v_x_406_);
v___y_420_ = v___x_450_;
goto v___jp_419_;
}
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_421_ = lean_array_fset(v_xs_x27_418_, v_j_410_, v___y_420_);
lean_dec(v_j_410_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_421_);
v___x_423_ = v___x_414_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v_ks_453_; lean_object* v_vs_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_472_; 
v_ks_453_ = lean_ctor_get(v_x_402_, 0);
v_vs_454_ = lean_ctor_get(v_x_402_, 1);
v_isSharedCheck_472_ = !lean_is_exclusive(v_x_402_);
if (v_isSharedCheck_472_ == 0)
{
v___x_456_ = v_x_402_;
v_isShared_457_ = v_isSharedCheck_472_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_vs_454_);
lean_inc(v_ks_453_);
lean_dec(v_x_402_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_472_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_ks_453_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_vs_454_);
v___x_459_ = v_reuseFailAlloc_471_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v_newNode_460_; size_t v___x_461_; uint8_t v___x_462_; 
v_newNode_460_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(v___x_459_, v_x_405_, v_x_406_);
v___x_461_ = ((size_t)7ULL);
v___x_462_ = lean_usize_dec_le(v___x_461_, v_x_404_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_463_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_460_);
v___x_464_ = lean_unsigned_to_nat(4u);
v___x_465_ = lean_nat_dec_lt(v___x_463_, v___x_464_);
lean_dec(v___x_463_);
if (v___x_465_ == 0)
{
lean_object* v_ks_466_; lean_object* v_vs_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_ks_466_ = lean_ctor_get(v_newNode_460_, 0);
lean_inc_ref(v_ks_466_);
v_vs_467_ = lean_ctor_get(v_newNode_460_, 1);
lean_inc_ref(v_vs_467_);
lean_dec_ref(v_newNode_460_);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__1);
v___x_470_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_x_404_, v_ks_466_, v_vs_467_, v___x_468_, v___x_469_);
lean_dec_ref(v_vs_467_);
lean_dec_ref(v_ks_466_);
return v___x_470_;
}
else
{
return v_newNode_460_;
}
}
else
{
return v_newNode_460_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(size_t v_depth_473_, lean_object* v_keys_474_, lean_object* v_vals_475_, lean_object* v_i_476_, lean_object* v_entries_477_){
_start:
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = lean_array_get_size(v_keys_474_);
v___x_479_ = lean_nat_dec_lt(v_i_476_, v___x_478_);
if (v___x_479_ == 0)
{
lean_dec(v_i_476_);
return v_entries_477_;
}
else
{
lean_object* v_k_480_; lean_object* v_v_481_; uint64_t v___x_482_; size_t v_h_483_; size_t v___x_484_; lean_object* v___x_485_; size_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v_h_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_k_480_ = lean_array_fget_borrowed(v_keys_474_, v_i_476_);
v_v_481_ = lean_array_fget_borrowed(v_vals_475_, v_i_476_);
v___x_482_ = l_Lean_instHashableMVarId_hash(v_k_480_);
v_h_483_ = lean_uint64_to_usize(v___x_482_);
v___x_484_ = ((size_t)5ULL);
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = ((size_t)1ULL);
v___x_487_ = lean_usize_sub(v_depth_473_, v___x_486_);
v___x_488_ = lean_usize_mul(v___x_484_, v___x_487_);
v_h_489_ = lean_usize_shift_right(v_h_483_, v___x_488_);
v___x_490_ = lean_nat_add(v_i_476_, v___x_485_);
lean_dec(v_i_476_);
lean_inc(v_v_481_);
lean_inc(v_k_480_);
v___x_491_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_entries_477_, v_h_489_, v_depth_473_, v_k_480_, v_v_481_);
v_i_476_ = v___x_490_;
v_entries_477_ = v___x_491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg___boxed(lean_object* v_depth_493_, lean_object* v_keys_494_, lean_object* v_vals_495_, lean_object* v_i_496_, lean_object* v_entries_497_){
_start:
{
size_t v_depth_boxed_498_; lean_object* v_res_499_; 
v_depth_boxed_498_ = lean_unbox_usize(v_depth_493_);
lean_dec(v_depth_493_);
v_res_499_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_depth_boxed_498_, v_keys_494_, v_vals_495_, v_i_496_, v_entries_497_);
lean_dec_ref(v_vals_495_);
lean_dec_ref(v_keys_494_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___boxed(lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
size_t v_x_8825__boxed_505_; size_t v_x_8826__boxed_506_; lean_object* v_res_507_; 
v_x_8825__boxed_505_ = lean_unbox_usize(v_x_501_);
lean_dec(v_x_501_);
v_x_8826__boxed_506_ = lean_unbox_usize(v_x_502_);
lean_dec(v_x_502_);
v_res_507_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_500_, v_x_8825__boxed_505_, v_x_8826__boxed_506_, v_x_503_, v_x_504_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
uint64_t v___x_511_; size_t v___x_512_; size_t v___x_513_; lean_object* v___x_514_; 
v___x_511_ = l_Lean_instHashableMVarId_hash(v_x_509_);
v___x_512_ = lean_uint64_to_usize(v___x_511_);
v___x_513_ = ((size_t)1ULL);
v___x_514_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_508_, v___x_512_, v___x_513_, v_x_509_, v_x_510_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(lean_object* v_mvarId_515_, lean_object* v_val_516_, lean_object* v___y_517_){
_start:
{
lean_object* v___x_519_; lean_object* v_mctx_520_; lean_object* v_cache_521_; lean_object* v_zetaDeltaFVarIds_522_; lean_object* v_postponed_523_; lean_object* v_diag_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_553_; 
v___x_519_ = lean_st_ref_take(v___y_517_);
v_mctx_520_ = lean_ctor_get(v___x_519_, 0);
v_cache_521_ = lean_ctor_get(v___x_519_, 1);
v_zetaDeltaFVarIds_522_ = lean_ctor_get(v___x_519_, 2);
v_postponed_523_ = lean_ctor_get(v___x_519_, 3);
v_diag_524_ = lean_ctor_get(v___x_519_, 4);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_553_ == 0)
{
v___x_526_ = v___x_519_;
v_isShared_527_ = v_isSharedCheck_553_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_diag_524_);
lean_inc(v_postponed_523_);
lean_inc(v_zetaDeltaFVarIds_522_);
lean_inc(v_cache_521_);
lean_inc(v_mctx_520_);
lean_dec(v___x_519_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_553_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v_depth_528_; lean_object* v_levelAssignDepth_529_; lean_object* v_lmvarCounter_530_; lean_object* v_mvarCounter_531_; lean_object* v_lDecls_532_; lean_object* v_decls_533_; lean_object* v_userNames_534_; lean_object* v_lAssignment_535_; lean_object* v_eAssignment_536_; lean_object* v_dAssignment_537_; lean_object* v_instanceTypedMVars_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_552_; 
v_depth_528_ = lean_ctor_get(v_mctx_520_, 0);
v_levelAssignDepth_529_ = lean_ctor_get(v_mctx_520_, 1);
v_lmvarCounter_530_ = lean_ctor_get(v_mctx_520_, 2);
v_mvarCounter_531_ = lean_ctor_get(v_mctx_520_, 3);
v_lDecls_532_ = lean_ctor_get(v_mctx_520_, 4);
v_decls_533_ = lean_ctor_get(v_mctx_520_, 5);
v_userNames_534_ = lean_ctor_get(v_mctx_520_, 6);
v_lAssignment_535_ = lean_ctor_get(v_mctx_520_, 7);
v_eAssignment_536_ = lean_ctor_get(v_mctx_520_, 8);
v_dAssignment_537_ = lean_ctor_get(v_mctx_520_, 9);
v_instanceTypedMVars_538_ = lean_ctor_get(v_mctx_520_, 10);
v_isSharedCheck_552_ = !lean_is_exclusive(v_mctx_520_);
if (v_isSharedCheck_552_ == 0)
{
v___x_540_ = v_mctx_520_;
v_isShared_541_ = v_isSharedCheck_552_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_instanceTypedMVars_538_);
lean_inc(v_dAssignment_537_);
lean_inc(v_eAssignment_536_);
lean_inc(v_lAssignment_535_);
lean_inc(v_userNames_534_);
lean_inc(v_decls_533_);
lean_inc(v_lDecls_532_);
lean_inc(v_mvarCounter_531_);
lean_inc(v_lmvarCounter_530_);
lean_inc(v_levelAssignDepth_529_);
lean_inc(v_depth_528_);
lean_dec(v_mctx_520_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_552_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_542_ = lean_box(0);
v___x_543_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_eAssignment_536_, v_mvarId_515_, v_val_516_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 8, v___x_543_);
v___x_545_ = v___x_540_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_depth_528_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_levelAssignDepth_529_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_lmvarCounter_530_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_mvarCounter_531_);
lean_ctor_set(v_reuseFailAlloc_551_, 4, v_lDecls_532_);
lean_ctor_set(v_reuseFailAlloc_551_, 5, v_decls_533_);
lean_ctor_set(v_reuseFailAlloc_551_, 6, v_userNames_534_);
lean_ctor_set(v_reuseFailAlloc_551_, 7, v_lAssignment_535_);
lean_ctor_set(v_reuseFailAlloc_551_, 8, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_551_, 9, v_dAssignment_537_);
lean_ctor_set(v_reuseFailAlloc_551_, 10, v_instanceTypedMVars_538_);
v___x_545_ = v_reuseFailAlloc_551_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_547_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_545_);
v___x_547_ = v___x_526_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_cache_521_);
lean_ctor_set(v_reuseFailAlloc_550_, 2, v_zetaDeltaFVarIds_522_);
lean_ctor_set(v_reuseFailAlloc_550_, 3, v_postponed_523_);
lean_ctor_set(v_reuseFailAlloc_550_, 4, v_diag_524_);
v___x_547_ = v_reuseFailAlloc_550_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_st_ref_put(v___y_517_, v___x_547_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_542_);
return v___x_549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg___boxed(lean_object* v_mvarId_554_, lean_object* v_val_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_mvarId_554_, v_val_555_, v___y_556_);
lean_dec(v___y_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(lean_object* v_msgData_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; lean_object* v_env_566_; lean_object* v___x_567_; lean_object* v_toCold_568_; lean_object* v_mctx_569_; lean_object* v_lctx_570_; lean_object* v_options_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_565_ = lean_st_ref_get(v___y_563_);
v_env_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc_ref(v_env_566_);
lean_dec(v___x_565_);
v___x_567_ = lean_st_ref_get(v___y_561_);
v_toCold_568_ = lean_ctor_get(v___y_562_, 0);
v_mctx_569_ = lean_ctor_get(v___x_567_, 0);
lean_inc_ref(v_mctx_569_);
lean_dec(v___x_567_);
v_lctx_570_ = lean_ctor_get(v___y_560_, 2);
v_options_571_ = lean_ctor_get(v_toCold_568_, 2);
lean_inc_ref(v_options_571_);
lean_inc_ref(v_lctx_570_);
v___x_572_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_572_, 0, v_env_566_);
lean_ctor_set(v___x_572_, 1, v_mctx_569_);
lean_ctor_set(v___x_572_, 2, v_lctx_570_);
lean_ctor_set(v___x_572_, 3, v_options_571_);
v___x_573_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v_msgData_559_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1___boxed(lean_object* v_msgData_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msgData_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(lean_object* v_msg_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_ref_588_; lean_object* v___x_589_; lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
v_ref_588_ = lean_ctor_get(v___y_585_, 2);
v___x_589_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_598_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
lean_inc(v_ref_588_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v_ref_588_);
lean_ctor_set(v___x_594_, 1, v_a_590_);
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 1);
lean_ctor_set(v___x_592_, 0, v___x_594_);
v___x_596_ = v___x_592_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg___boxed(lean_object* v_msg_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(lean_object* v_a_606_, lean_object* v_b_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_array_613_; lean_object* v_start_614_; lean_object* v_stop_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_630_; 
v_array_613_ = lean_ctor_get(v_a_606_, 0);
v_start_614_ = lean_ctor_get(v_a_606_, 1);
v_stop_615_ = lean_ctor_get(v_a_606_, 2);
v_isSharedCheck_630_ = !lean_is_exclusive(v_a_606_);
if (v_isSharedCheck_630_ == 0)
{
v___x_617_ = v_a_606_;
v_isShared_618_ = v_isSharedCheck_630_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_stop_615_);
lean_inc(v_start_614_);
lean_inc(v_array_613_);
lean_dec(v_a_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_630_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
uint8_t v___x_619_; 
v___x_619_ = lean_nat_dec_lt(v_start_614_, v_stop_615_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; 
lean_del_object(v___x_617_);
lean_dec(v_stop_615_);
lean_dec(v_start_614_);
lean_dec_ref(v_array_613_);
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v_b_607_);
return v___x_620_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = lean_nat_add(v_start_614_, v___x_621_);
lean_inc_ref(v_array_613_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 1, v___x_622_);
v___x_624_ = v___x_617_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_array_613_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v_stop_615_);
v___x_624_ = v_reuseFailAlloc_629_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_array_fget(v_array_613_, v_start_614_);
lean_dec(v_start_614_);
lean_dec_ref(v_array_613_);
v___x_626_ = l_Lean_Meta_mkCongrFun(v_b_607_, v___x_625_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
v_a_606_ = v___x_624_;
v_b_607_ = v_a_627_;
goto _start;
}
else
{
lean_dec_ref(v___x_624_);
return v___x_626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg___boxed(lean_object* v_a_631_, lean_object* v_b_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v_a_631_, v_b_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(lean_object* v_levels_639_, lean_object* v___x_640_, size_t v_sz_641_, size_t v_i_642_, lean_object* v_bs_643_){
_start:
{
uint8_t v___x_644_; 
v___x_644_ = lean_usize_dec_lt(v_i_642_, v_sz_641_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_dec(v_levels_639_);
v___x_645_ = l_unsafeCast___redArg(v_bs_643_);
lean_dec_ref(v_bs_643_);
return v___x_645_;
}
else
{
lean_object* v_v_646_; lean_object* v___x_647_; lean_object* v_toConstantVal_648_; lean_object* v_name_649_; lean_object* v___x_650_; lean_object* v_bs_x27_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; size_t v___x_655_; size_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_v_646_ = lean_array_uget_borrowed(v_bs_643_, v_i_642_);
v___x_647_ = l_unsafeCast___redArg(v_v_646_);
v_toConstantVal_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_ref(v_toConstantVal_648_);
lean_dec(v___x_647_);
v_name_649_ = lean_ctor_get(v_toConstantVal_648_, 0);
lean_inc(v_name_649_);
lean_dec_ref(v_toConstantVal_648_);
v___x_650_ = lean_unsigned_to_nat(0u);
v_bs_x27_651_ = lean_array_uset(v_bs_643_, v_i_642_, v___x_650_);
v___x_652_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_649_);
lean_inc(v_levels_639_);
v___x_653_ = l_Lean_mkConst(v___x_652_, v_levels_639_);
v___x_654_ = l_Lean_mkAppN(v___x_653_, v___x_640_);
v___x_655_ = ((size_t)1ULL);
v___x_656_ = lean_usize_add(v_i_642_, v___x_655_);
v___x_657_ = l_unsafeCast___redArg(v___x_654_);
lean_dec_ref(v___x_654_);
v___x_658_ = lean_array_uset(v_bs_x27_651_, v_i_642_, v___x_657_);
v_i_642_ = v___x_656_;
v_bs_643_ = v___x_658_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2___boxed(lean_object* v_levels_660_, lean_object* v___x_661_, lean_object* v_sz_662_, lean_object* v_i_663_, lean_object* v_bs_664_){
_start:
{
size_t v_sz_boxed_665_; size_t v_i_boxed_666_; lean_object* v_res_667_; 
v_sz_boxed_665_ = lean_unbox_usize(v_sz_662_);
lean_dec(v_sz_662_);
v_i_boxed_666_ = lean_unbox_usize(v_i_663_);
lean_dec(v_i_663_);
v_res_667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(v_levels_660_, v___x_661_, v_sz_boxed_665_, v_i_boxed_666_, v_bs_664_);
lean_dec_ref(v___x_661_);
return v_res_667_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0));
v___x_670_ = l_Lean_stringToMessageData(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(lean_object* v_infos_674_, lean_object* v_numParams_675_, lean_object* v___x_676_, lean_object* v_name_677_, lean_object* v_levels_678_, lean_object* v_args_679_, lean_object* v_x_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; size_t v_sz_704_; size_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_693_ = lean_array_get_size(v_infos_674_);
v___x_694_ = lean_nat_sub(v_numParams_675_, v___x_693_);
lean_inc(v___x_676_);
lean_inc_ref(v_args_679_);
v___x_695_ = l_Array_toSubarray___redArg(v_args_679_, v___x_676_, v___x_694_);
v___x_696_ = lean_array_get_size(v_args_679_);
v___x_697_ = l_Array_toSubarray___redArg(v_args_679_, v_numParams_675_, v___x_696_);
lean_inc_n(v_name_677_, 2);
v___x_698_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_677_);
lean_inc_n(v_levels_678_, 3);
lean_inc(v___x_698_);
v___x_699_ = l_Lean_mkConst(v___x_698_, v_levels_678_);
v___x_700_ = l_Subarray_copy___redArg(v___x_695_);
v___x_701_ = l_Lean_mkAppN(v___x_699_, v___x_700_);
lean_inc_ref(v___x_697_);
v___x_702_ = l_Subarray_copy___redArg(v___x_697_);
v___x_703_ = l_Lean_mkAppN(v___x_701_, v___x_702_);
v_sz_704_ = lean_array_size(v_infos_674_);
v___x_705_ = ((size_t)0ULL);
v___x_706_ = l_unsafeCast___redArg(v_infos_674_);
v___x_707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(v_levels_678_, v___x_700_, v_sz_704_, v___x_705_, v___x_706_);
v___x_708_ = l_unsafeCast___redArg(v___x_707_);
lean_dec_ref(v___x_707_);
v___x_709_ = l_Lean_mkConst(v_name_677_, v_levels_678_);
lean_inc_ref(v___x_700_);
v___x_710_ = l_Array_append___redArg(v___x_700_, v___x_708_);
lean_dec(v___x_708_);
v___x_711_ = l_Array_append___redArg(v___x_710_, v___x_702_);
v___x_712_ = l_Lean_mkAppN(v___x_709_, v___x_711_);
lean_dec_ref(v___x_711_);
v___x_713_ = l_Lean_Meta_mkEq(v___x_703_, v___x_712_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_773_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_773_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_773_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_773_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set_tag(v___x_716_, 1);
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_772_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_720_ = 0;
v___x_721_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_722_ = l_Lean_Meta_mkFreshExprMVar(v___x_719_, v___x_720_, v___x_721_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref_known(v___x_722_, 1);
v___x_724_ = l_Lean_Expr_mvarId_x21(v_a_723_);
v___x_725_ = l_Lean_Meta_getEqnsFor_x3f(v___x_698_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
if (lean_obj_tag(v_a_726_) == 1)
{
lean_object* v_val_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_val_727_ = lean_ctor_get(v_a_726_, 0);
lean_inc(v_val_727_);
lean_dec_ref_known(v_a_726_, 1);
v___x_728_ = lean_array_get_size(v_val_727_);
v___x_729_ = lean_unsigned_to_nat(1u);
v___x_730_ = lean_nat_dec_eq(v___x_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_dec(v_val_727_);
lean_dec(v___x_724_);
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
lean_dec_ref(v___x_697_);
lean_dec(v_levels_678_);
lean_dec(v_name_677_);
lean_dec(v___x_676_);
v___y_687_ = v___y_681_;
v___y_688_ = v___y_682_;
v___y_689_ = v___y_683_;
v___y_690_ = v___y_684_;
goto v___jp_686_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_731_ = lean_array_fget(v_val_727_, v___x_676_);
lean_dec(v___x_676_);
lean_dec(v_val_727_);
v___x_732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3));
v___x_733_ = l_Lean_Name_append(v_name_677_, v___x_732_);
lean_inc(v_levels_678_);
v___x_734_ = l_Lean_mkConst(v___x_733_, v_levels_678_);
v___x_735_ = l_Lean_mkConst(v___x_731_, v_levels_678_);
v___x_736_ = l_Lean_mkAppN(v___x_735_, v___x_700_);
v___x_737_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v___x_697_, v___x_736_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; uint8_t v___x_739_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = 0;
v___x_740_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v___x_724_, v___x_734_, v___x_739_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_a_741_, v_a_738_, v___y_682_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v___x_743_; 
lean_dec_ref_known(v___x_742_, 1);
v___x_743_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_a_723_, v___y_682_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_745_; uint8_t v___x_746_; lean_object* v___x_747_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = l_Array_append___redArg(v___x_700_, v___x_702_);
lean_dec_ref(v___x_702_);
v___x_746_ = 1;
v___x_747_ = l_Lean_Meta_mkLambdaFVars(v___x_745_, v_a_744_, v___x_739_, v___x_730_, v___x_739_, v___x_730_, v___x_746_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
return v___x_747_;
}
else
{
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
return v___x_743_;
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
v_a_748_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_742_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_742_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_a_738_);
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
v_a_756_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_740_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_740_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_dec_ref(v___x_734_);
lean_dec(v___x_724_);
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
return v___x_737_;
}
}
}
else
{
lean_dec(v_a_726_);
lean_dec(v___x_724_);
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
lean_dec_ref(v___x_697_);
lean_dec(v_levels_678_);
lean_dec(v_name_677_);
lean_dec(v___x_676_);
v___y_687_ = v___y_681_;
v___y_688_ = v___y_682_;
v___y_689_ = v___y_683_;
v___y_690_ = v___y_684_;
goto v___jp_686_;
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v___x_724_);
lean_dec(v_a_723_);
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
lean_dec_ref(v___x_697_);
lean_dec(v_levels_678_);
lean_dec(v_name_677_);
lean_dec(v___x_676_);
v_a_764_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_725_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_725_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
else
{
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
lean_dec(v___x_698_);
lean_dec_ref(v___x_697_);
lean_dec(v_levels_678_);
lean_dec(v_name_677_);
lean_dec(v___x_676_);
return v___x_722_;
}
}
}
}
else
{
lean_dec_ref(v___x_702_);
lean_dec_ref(v___x_700_);
lean_dec(v___x_698_);
lean_dec_ref(v___x_697_);
lean_dec(v_levels_678_);
lean_dec(v_name_677_);
lean_dec(v___x_676_);
return v___x_713_;
}
v___jp_686_:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1);
v___x_692_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_691_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed(lean_object* v_infos_774_, lean_object* v_numParams_775_, lean_object* v___x_776_, lean_object* v_name_777_, lean_object* v_levels_778_, lean_object* v_args_779_, lean_object* v_x_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(v_infos_774_, v_numParams_775_, v___x_776_, v_name_777_, v_levels_778_, v_args_779_, v_x_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec_ref(v_x_780_);
lean_dec_ref(v_infos_774_);
return v_res_786_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0(void){
_start:
{
lean_object* v___x_787_; double v___x_788_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lean_float_of_nat(v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(lean_object* v_cls_792_, lean_object* v_msg_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_ref_799_; lean_object* v___x_800_; lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_845_; 
v_ref_799_ = lean_ctor_get(v___y_796_, 2);
v___x_800_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_845_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_845_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_845_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v_traceState_806_; lean_object* v_env_807_; lean_object* v_nextMacroScope_808_; lean_object* v_ngen_809_; lean_object* v_auxDeclNGen_810_; lean_object* v_cache_811_; lean_object* v_messages_812_; lean_object* v_infoState_813_; lean_object* v_snapshotTasks_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_844_; 
v___x_805_ = lean_st_ref_take(v___y_797_);
v_traceState_806_ = lean_ctor_get(v___x_805_, 4);
v_env_807_ = lean_ctor_get(v___x_805_, 0);
v_nextMacroScope_808_ = lean_ctor_get(v___x_805_, 1);
v_ngen_809_ = lean_ctor_get(v___x_805_, 2);
v_auxDeclNGen_810_ = lean_ctor_get(v___x_805_, 3);
v_cache_811_ = lean_ctor_get(v___x_805_, 5);
v_messages_812_ = lean_ctor_get(v___x_805_, 6);
v_infoState_813_ = lean_ctor_get(v___x_805_, 7);
v_snapshotTasks_814_ = lean_ctor_get(v___x_805_, 8);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_844_ == 0)
{
v___x_816_ = v___x_805_;
v_isShared_817_ = v_isSharedCheck_844_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_snapshotTasks_814_);
lean_inc(v_infoState_813_);
lean_inc(v_messages_812_);
lean_inc(v_cache_811_);
lean_inc(v_traceState_806_);
lean_inc(v_auxDeclNGen_810_);
lean_inc(v_ngen_809_);
lean_inc(v_nextMacroScope_808_);
lean_inc(v_env_807_);
lean_dec(v___x_805_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_844_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
uint64_t v_tid_818_; lean_object* v_traces_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_843_; 
v_tid_818_ = lean_ctor_get_uint64(v_traceState_806_, sizeof(void*)*1);
v_traces_819_ = lean_ctor_get(v_traceState_806_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_traceState_806_);
if (v_isSharedCheck_843_ == 0)
{
v___x_821_ = v_traceState_806_;
v_isShared_822_ = v_isSharedCheck_843_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_traces_819_);
lean_dec(v_traceState_806_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_843_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_823_; lean_object* v___x_824_; double v___x_825_; uint8_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_823_ = lean_box(0);
v___x_824_ = lean_box(0);
v___x_825_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0);
v___x_826_ = 0;
v___x_827_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1));
v___x_828_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_828_, 0, v_cls_792_);
lean_ctor_set(v___x_828_, 1, v___x_824_);
lean_ctor_set(v___x_828_, 2, v___x_827_);
lean_ctor_set_float(v___x_828_, sizeof(void*)*3, v___x_825_);
lean_ctor_set_float(v___x_828_, sizeof(void*)*3 + 8, v___x_825_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*3 + 16, v___x_826_);
v___x_829_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2));
v___x_830_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v_a_801_);
lean_ctor_set(v___x_830_, 2, v___x_829_);
lean_inc(v_ref_799_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v_ref_799_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = l_Lean_PersistentArray_push___redArg(v_traces_819_, v___x_831_);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_832_);
v___x_834_ = v___x_821_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_832_);
lean_ctor_set_uint64(v_reuseFailAlloc_842_, sizeof(void*)*1, v_tid_818_);
v___x_834_ = v_reuseFailAlloc_842_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_836_; 
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 4, v___x_834_);
v___x_836_ = v___x_816_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_env_807_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_nextMacroScope_808_);
lean_ctor_set(v_reuseFailAlloc_841_, 2, v_ngen_809_);
lean_ctor_set(v_reuseFailAlloc_841_, 3, v_auxDeclNGen_810_);
lean_ctor_set(v_reuseFailAlloc_841_, 4, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_841_, 5, v_cache_811_);
lean_ctor_set(v_reuseFailAlloc_841_, 6, v_messages_812_);
lean_ctor_set(v_reuseFailAlloc_841_, 7, v_infoState_813_);
lean_ctor_set(v_reuseFailAlloc_841_, 8, v_snapshotTasks_814_);
v___x_836_ = v_reuseFailAlloc_841_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_837_ = lean_st_ref_put(v___y_797_, v___x_836_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_823_);
v___x_839_ = v___x_803_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_823_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___boxed(lean_object* v_cls_846_, lean_object* v_msg_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(v_cls_846_, v_msg_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
return v_res_853_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_860_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
v___x_862_ = l_Lean_Name_append(v___x_861_, v___x_860_);
return v___x_862_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(lean_object* v_infos_866_, lean_object* v_levels_867_, lean_object* v_as_868_, size_t v_sz_869_, size_t v_i_870_, lean_object* v_b_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
uint8_t v___x_877_; 
v___x_877_ = lean_usize_dec_lt(v_i_870_, v_sz_869_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; 
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
v___x_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_878_, 0, v_b_871_);
return v___x_878_;
}
else
{
lean_object* v_a_879_; lean_object* v_toConstantVal_880_; lean_object* v_numParams_881_; lean_object* v_name_882_; lean_object* v_levelParams_883_; lean_object* v_type_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___f_887_; uint8_t v___x_888_; lean_object* v___x_889_; 
v_a_879_ = lean_array_uget_borrowed(v_as_868_, v_i_870_);
v_toConstantVal_880_ = lean_ctor_get(v_a_879_, 0);
v_numParams_881_ = lean_ctor_get(v_a_879_, 1);
v_name_882_ = lean_ctor_get(v_toConstantVal_880_, 0);
v_levelParams_883_ = lean_ctor_get(v_toConstantVal_880_, 1);
v_type_884_ = lean_ctor_get(v_toConstantVal_880_, 2);
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_box(0);
lean_inc(v_levels_867_);
lean_inc(v_name_882_);
lean_inc(v_numParams_881_);
lean_inc_ref(v_infos_866_);
v___f_887_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed), 12, 5);
lean_closure_set(v___f_887_, 0, v_infos_866_);
lean_closure_set(v___f_887_, 1, v_numParams_881_);
lean_closure_set(v___f_887_, 2, v___x_885_);
lean_closure_set(v___f_887_, 3, v_name_882_);
lean_closure_set(v___f_887_, 4, v_levels_867_);
v___x_888_ = 0;
lean_inc_ref(v_type_884_);
v___x_889_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_884_, v___f_887_, v___x_888_, v___x_888_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v_toCold_925_; lean_object* v_options_926_; uint8_t v_hasTrace_927_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
v_toCold_925_ = lean_ctor_get(v___y_874_, 0);
v_options_926_ = lean_ctor_get(v_toCold_925_, 2);
v_hasTrace_927_ = lean_ctor_get_uint8(v_options_926_, sizeof(void*)*1);
if (v_hasTrace_927_ == 0)
{
v___y_892_ = v___y_872_;
v___y_893_ = v___y_873_;
v___y_894_ = v___y_874_;
v___y_895_ = v___y_875_;
goto v___jp_891_;
}
else
{
lean_object* v_inheritedTraceOptions_928_; lean_object* v___x_929_; lean_object* v___x_930_; uint8_t v___x_931_; 
v_inheritedTraceOptions_928_ = lean_ctor_get(v_toCold_925_, 11);
v___x_929_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_930_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4);
v___x_931_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_928_, v_options_926_, v___x_930_);
if (v___x_931_ == 0)
{
v___y_892_ = v___y_872_;
v___y_893_ = v___y_873_;
v___y_894_ = v___y_874_;
v___y_895_ = v___y_875_;
goto v___jp_891_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_932_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6);
lean_inc(v_a_890_);
v___x_933_ = l_Lean_MessageData_ofExpr(v_a_890_);
v___x_934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_932_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(v___x_929_, v___x_934_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_dec_ref_known(v___x_935_, 1);
v___y_892_ = v___y_872_;
v___y_893_ = v___y_873_;
v___y_894_ = v___y_874_;
v___y_895_ = v___y_875_;
goto v___jp_891_;
}
else
{
lean_dec(v_a_890_);
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
return v___x_935_;
}
}
}
v___jp_891_:
{
lean_object* v___x_896_; 
lean_inc(v___y_895_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc_ref(v___y_892_);
lean_inc(v_a_890_);
v___x_896_ = lean_infer_type(v_a_890_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
lean_inc(v_name_882_);
v___x_898_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_882_);
v___x_899_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
v___x_900_ = l_Lean_Name_append(v___x_898_, v___x_899_);
v___x_901_ = lean_box(0);
lean_inc(v_levelParams_883_);
v___x_902_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v___x_900_, v_levelParams_883_, v_a_897_, v_a_890_, v___x_901_, v___y_895_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_904_, 0, v_a_903_);
v___x_905_ = l_Lean_addDecl(v___x_904_, v___x_888_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_905_) == 0)
{
size_t v___x_906_; size_t v___x_907_; 
lean_dec_ref_known(v___x_905_, 1);
v___x_906_ = ((size_t)1ULL);
v___x_907_ = lean_usize_add(v_i_870_, v___x_906_);
v_i_870_ = v___x_907_;
v_b_871_ = v___x_886_;
goto _start;
}
else
{
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
return v___x_905_;
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
v_a_909_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_902_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_902_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_890_);
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
v_a_917_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_896_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_896_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_levels_867_);
lean_dec_ref(v_infos_866_);
v_a_936_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_889_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_889_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___boxed(lean_object* v_infos_944_, lean_object* v_levels_945_, lean_object* v_as_946_, lean_object* v_sz_947_, lean_object* v_i_948_, lean_object* v_b_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
size_t v_sz_boxed_955_; size_t v_i_boxed_956_; lean_object* v_res_957_; 
v_sz_boxed_955_ = lean_unbox_usize(v_sz_947_);
lean_dec(v_sz_947_);
v_i_boxed_956_ = lean_unbox_usize(v_i_948_);
lean_dec(v_i_948_);
v_res_957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(v_infos_944_, v_levels_945_, v_as_946_, v_sz_boxed_955_, v_i_boxed_956_, v_b_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec_ref(v_as_946_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(lean_object* v_infos_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v_toConstantVal_967_; lean_object* v_levelParams_968_; lean_object* v___x_969_; lean_object* v_levels_970_; lean_object* v___x_971_; size_t v_sz_972_; size_t v___x_973_; lean_object* v___x_974_; 
v___x_964_ = l_Lean_instInhabitedInductiveVal_default;
v___x_965_ = lean_unsigned_to_nat(0u);
v___x_966_ = lean_array_get_borrowed(v___x_964_, v_infos_958_, v___x_965_);
v_toConstantVal_967_ = lean_ctor_get(v___x_966_, 0);
v_levelParams_968_ = lean_ctor_get(v_toConstantVal_967_, 1);
v___x_969_ = lean_box(0);
lean_inc(v_levelParams_968_);
v_levels_970_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_968_, v___x_969_);
v___x_971_ = lean_box(0);
v_sz_972_ = lean_array_size(v_infos_958_);
v___x_973_ = ((size_t)0ULL);
lean_inc_ref(v_infos_958_);
v___x_974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(v_infos_958_, v_levels_970_, v_infos_958_, v_sz_972_, v___x_973_, v___x_971_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
lean_dec_ref(v_infos_958_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; 
v_unused_982_ = lean_ctor_get(v___x_974_, 0);
lean_dec(v_unused_982_);
v___x_976_ = v___x_974_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_dec(v___x_974_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_971_);
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_971_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
else
{
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas___boxed(lean_object* v_infos_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(v_infos_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(lean_object* v_00_u03b1_990_, lean_object* v_msg_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___boxed(lean_object* v_00_u03b1_998_, lean_object* v_msg_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(v_00_u03b1_998_, v_msg_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(lean_object* v_inst_1006_, lean_object* v_R_1007_, lean_object* v_a_1008_, lean_object* v_b_1009_, lean_object* v_c_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v_a_1008_, v_b_1009_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___boxed(lean_object* v_inst_1017_, lean_object* v_R_1018_, lean_object* v_a_1019_, lean_object* v_b_1020_, lean_object* v_c_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(v_inst_1017_, v_R_1018_, v_a_1019_, v_b_1020_, v_c_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(lean_object* v_mvarId_1028_, lean_object* v_val_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_mvarId_1028_, v_val_1029_, v___y_1031_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___boxed(lean_object* v_mvarId_1036_, lean_object* v_val_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(v_mvarId_1036_, v_val_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5(lean_object* v_00_u03b2_1044_, lean_object* v_x_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_x_1045_, v_x_1046_, v_x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(lean_object* v_00_u03b2_1049_, lean_object* v_x_1050_, size_t v_x_1051_, size_t v_x_1052_, lean_object* v_x_1053_, lean_object* v_x_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_1050_, v_x_1051_, v_x_1052_, v_x_1053_, v_x_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_, lean_object* v_x_1061_){
_start:
{
size_t v_x_9763__boxed_1062_; size_t v_x_9764__boxed_1063_; lean_object* v_res_1064_; 
v_x_9763__boxed_1062_ = lean_unbox_usize(v_x_1058_);
lean_dec(v_x_1058_);
v_x_9764__boxed_1063_ = lean_unbox_usize(v_x_1059_);
lean_dec(v_x_1059_);
v_res_1064_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(v_00_u03b2_1056_, v_x_1057_, v_x_9763__boxed_1062_, v_x_9764__boxed_1063_, v_x_1060_, v_x_1061_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12(lean_object* v_00_u03b2_1065_, lean_object* v_n_1066_, lean_object* v_k_1067_, lean_object* v_v_1068_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(v_n_1066_, v_k_1067_, v_v_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(lean_object* v_00_u03b2_1070_, size_t v_depth_1071_, lean_object* v_keys_1072_, lean_object* v_vals_1073_, lean_object* v_heq_1074_, lean_object* v_i_1075_, lean_object* v_entries_1076_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_depth_1071_, v_keys_1072_, v_vals_1073_, v_i_1075_, v_entries_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___boxed(lean_object* v_00_u03b2_1078_, lean_object* v_depth_1079_, lean_object* v_keys_1080_, lean_object* v_vals_1081_, lean_object* v_heq_1082_, lean_object* v_i_1083_, lean_object* v_entries_1084_){
_start:
{
size_t v_depth_boxed_1085_; lean_object* v_res_1086_; 
v_depth_boxed_1085_ = lean_unbox_usize(v_depth_1079_);
lean_dec(v_depth_1079_);
v_res_1086_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(v_00_u03b2_1078_, v_depth_boxed_1085_, v_keys_1080_, v_vals_1081_, v_heq_1082_, v_i_1083_, v_entries_1084_);
lean_dec_ref(v_vals_1081_);
lean_dec_ref(v_keys_1080_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13(lean_object* v_00_u03b2_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_, lean_object* v_x_1090_, lean_object* v_x_1091_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(v_x_1088_, v_x_1089_, v_x_1090_, v_x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(lean_object* v_e_1093_, lean_object* v___y_1094_){
_start:
{
uint8_t v___x_1096_; 
v___x_1096_ = l_Lean_Expr_hasMVar(v_e_1093_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_e_1093_);
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; lean_object* v_mctx_1099_; lean_object* v___x_1100_; lean_object* v_fst_1101_; lean_object* v_snd_1102_; lean_object* v___x_1103_; lean_object* v_cache_1104_; lean_object* v_zetaDeltaFVarIds_1105_; lean_object* v_postponed_1106_; lean_object* v_diag_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1116_; 
v___x_1098_ = lean_st_ref_get(v___y_1094_);
v_mctx_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc_ref(v_mctx_1099_);
lean_dec(v___x_1098_);
v___x_1100_ = l_Lean_instantiateMVarsCore(v_mctx_1099_, v_e_1093_);
v_fst_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_fst_1101_);
v_snd_1102_ = lean_ctor_get(v___x_1100_, 1);
lean_inc(v_snd_1102_);
lean_dec_ref(v___x_1100_);
v___x_1103_ = lean_st_ref_take(v___y_1094_);
v_cache_1104_ = lean_ctor_get(v___x_1103_, 1);
v_zetaDeltaFVarIds_1105_ = lean_ctor_get(v___x_1103_, 2);
v_postponed_1106_ = lean_ctor_get(v___x_1103_, 3);
v_diag_1107_ = lean_ctor_get(v___x_1103_, 4);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; 
v_unused_1117_ = lean_ctor_get(v___x_1103_, 0);
lean_dec(v_unused_1117_);
v___x_1109_ = v___x_1103_;
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_diag_1107_);
lean_inc(v_postponed_1106_);
lean_inc(v_zetaDeltaFVarIds_1105_);
lean_inc(v_cache_1104_);
lean_dec(v___x_1103_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v_snd_1102_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_snd_1102_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_cache_1104_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_zetaDeltaFVarIds_1105_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_postponed_1106_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_diag_1107_);
v___x_1112_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_st_ref_put(v___y_1094_, v___x_1112_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v_fst_1101_);
return v___x_1114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg___boxed(lean_object* v_e_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_e_1118_, v___y_1119_);
lean_dec(v___y_1119_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(lean_object* v_e_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_e_1122_, v___y_1126_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___boxed(lean_object* v_e_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(v_e_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(lean_object* v_k_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v_b_1143_, lean_object* v_c_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; 
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc(v___y_1146_);
lean_inc_ref(v___y_1145_);
lean_inc(v___y_1142_);
lean_inc_ref(v___y_1141_);
v___x_1150_ = lean_apply_9(v_k_1140_, v_b_1143_, v_c_1144_, v___y_1141_, v___y_1142_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, lean_box(0));
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed(lean_object* v_k_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v_b_1154_, lean_object* v_c_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(v_k_1151_, v___y_1152_, v___y_1153_, v_b_1154_, v_c_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(lean_object* v_type_1162_, lean_object* v_k_1163_, uint8_t v_cleanupAnnotations_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___f_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
v___f_1172_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1172_, 0, v_k_1163_);
lean_closure_set(v___f_1172_, 1, v___y_1165_);
lean_closure_set(v___f_1172_, 2, v___y_1166_);
v___x_1173_ = 0;
v___x_1174_ = lean_box(0);
v___x_1175_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1173_, v___x_1174_, v_type_1162_, v___f_1172_, v_cleanupAnnotations_1164_, v___x_1173_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
if (lean_obj_tag(v___x_1175_) == 0)
{
return v___x_1175_;
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___boxed(lean_object* v_type_1184_, lean_object* v_k_1185_, lean_object* v_cleanupAnnotations_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1194_; lean_object* v_res_1195_; 
v_cleanupAnnotations_boxed_1194_ = lean_unbox(v_cleanupAnnotations_1186_);
v_res_1195_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_1184_, v_k_1185_, v_cleanupAnnotations_boxed_1194_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(lean_object* v_00_u03b1_1196_, lean_object* v_type_1197_, lean_object* v_k_1198_, uint8_t v_cleanupAnnotations_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_1197_, v_k_1198_, v_cleanupAnnotations_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___boxed(lean_object* v_00_u03b1_1208_, lean_object* v_type_1209_, lean_object* v_k_1210_, lean_object* v_cleanupAnnotations_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1219_; lean_object* v_res_1220_; 
v_cleanupAnnotations_boxed_1219_ = lean_unbox(v_cleanupAnnotations_1211_);
v_res_1220_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(v_00_u03b1_1208_, v_type_1209_, v_k_1210_, v_cleanupAnnotations_boxed_1219_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(lean_object* v_name_1221_, lean_object* v_levelParams_1222_, lean_object* v_type_1223_, lean_object* v_value_1224_, lean_object* v_hints_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v___x_1228_; uint8_t v___y_1230_; uint8_t v___y_1237_; lean_object* v_env_1240_; uint8_t v___x_1241_; 
v___x_1228_ = lean_st_ref_get(v___y_1226_);
v_env_1240_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_ref_n(v_env_1240_, 2);
lean_dec(v___x_1228_);
v___x_1241_ = l_Lean_Environment_hasUnsafe(v_env_1240_, v_type_1223_);
if (v___x_1241_ == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = l_Lean_Environment_hasUnsafe(v_env_1240_, v_value_1224_);
v___y_1237_ = v___x_1242_;
goto v___jp_1236_;
}
else
{
lean_dec_ref(v_env_1240_);
v___y_1237_ = v___x_1241_;
goto v___jp_1236_;
}
v___jp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_inc(v_name_1221_);
v___x_1231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1231_, 0, v_name_1221_);
lean_ctor_set(v___x_1231_, 1, v_levelParams_1222_);
lean_ctor_set(v___x_1231_, 2, v_type_1223_);
v___x_1232_ = lean_box(0);
v___x_1233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_name_1221_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1234_, 0, v___x_1231_);
lean_ctor_set(v___x_1234_, 1, v_value_1224_);
lean_ctor_set(v___x_1234_, 2, v_hints_1225_);
lean_ctor_set(v___x_1234_, 3, v___x_1233_);
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*4, v___y_1230_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
v___jp_1236_:
{
if (v___y_1237_ == 0)
{
uint8_t v___x_1238_; 
v___x_1238_ = 1;
v___y_1230_ = v___x_1238_;
goto v___jp_1229_;
}
else
{
uint8_t v___x_1239_; 
v___x_1239_ = 0;
v___y_1230_ = v___x_1239_;
goto v___jp_1229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg___boxed(lean_object* v_name_1243_, lean_object* v_levelParams_1244_, lean_object* v_type_1245_, lean_object* v_value_1246_, lean_object* v_hints_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v_name_1243_, v_levelParams_1244_, v_type_1245_, v_value_1246_, v_hints_1247_, v___y_1248_);
lean_dec(v___y_1248_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(lean_object* v_name_1251_, lean_object* v_levelParams_1252_, lean_object* v_type_1253_, lean_object* v_value_1254_, lean_object* v_hints_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v_name_1251_, v_levelParams_1252_, v_type_1253_, v_value_1254_, v_hints_1255_, v___y_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___boxed(lean_object* v_name_1264_, lean_object* v_levelParams_1265_, lean_object* v_type_1266_, lean_object* v_value_1267_, lean_object* v_hints_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(v_name_1264_, v_levelParams_1265_, v_type_1266_, v_value_1267_, v_hints_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(lean_object* v_type_1277_, lean_object* v_maxFVars_x3f_1278_, lean_object* v_k_1279_, uint8_t v_cleanupAnnotations_1280_, uint8_t v_whnfType_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v___f_1289_; lean_object* v___x_1290_; 
lean_inc(v___y_1283_);
lean_inc_ref(v___y_1282_);
v___f_1289_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1289_, 0, v_k_1279_);
lean_closure_set(v___f_1289_, 1, v___y_1282_);
lean_closure_set(v___f_1289_, 2, v___y_1283_);
v___x_1290_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1277_, v_maxFVars_x3f_1278_, v___f_1289_, v_cleanupAnnotations_1280_, v_whnfType_1281_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
if (lean_obj_tag(v___x_1290_) == 0)
{
return v___x_1290_;
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg___boxed(lean_object* v_type_1299_, lean_object* v_maxFVars_x3f_1300_, lean_object* v_k_1301_, lean_object* v_cleanupAnnotations_1302_, lean_object* v_whnfType_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1311_; uint8_t v_whnfType_boxed_1312_; lean_object* v_res_1313_; 
v_cleanupAnnotations_boxed_1311_ = lean_unbox(v_cleanupAnnotations_1302_);
v_whnfType_boxed_1312_ = lean_unbox(v_whnfType_1303_);
v_res_1313_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1299_, v_maxFVars_x3f_1300_, v_k_1301_, v_cleanupAnnotations_boxed_1311_, v_whnfType_boxed_1312_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(lean_object* v_00_u03b1_1314_, lean_object* v_type_1315_, lean_object* v_maxFVars_x3f_1316_, lean_object* v_k_1317_, uint8_t v_cleanupAnnotations_1318_, uint8_t v_whnfType_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1315_, v_maxFVars_x3f_1316_, v_k_1317_, v_cleanupAnnotations_1318_, v_whnfType_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___boxed(lean_object* v_00_u03b1_1328_, lean_object* v_type_1329_, lean_object* v_maxFVars_x3f_1330_, lean_object* v_k_1331_, lean_object* v_cleanupAnnotations_1332_, lean_object* v_whnfType_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1341_; uint8_t v_whnfType_boxed_1342_; lean_object* v_res_1343_; 
v_cleanupAnnotations_boxed_1341_ = lean_unbox(v_cleanupAnnotations_1332_);
v_whnfType_boxed_1342_ = lean_unbox(v_whnfType_1333_);
v_res_1343_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(v_00_u03b1_1328_, v_type_1329_, v_maxFVars_x3f_1330_, v_k_1331_, v_cleanupAnnotations_boxed_1341_, v_whnfType_boxed_1342_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(lean_object* v_cls_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v_toCold_1352_; lean_object* v_options_1353_; uint8_t v_hasTrace_1354_; 
v_toCold_1352_ = lean_ctor_get(v___y_1349_, 0);
v_options_1353_ = lean_ctor_get(v_toCold_1352_, 2);
v_hasTrace_1354_ = lean_ctor_get_uint8(v_options_1353_, sizeof(void*)*1);
if (v_hasTrace_1354_ == 0)
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
lean_dec(v_cls_1344_);
v___x_1355_ = lean_box(v_hasTrace_1354_);
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
return v___x_1356_;
}
else
{
lean_object* v_inheritedTraceOptions_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_inheritedTraceOptions_1357_ = lean_ctor_get(v_toCold_1352_, 11);
v___x_1358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
v___x_1359_ = l_Lean_Name_append(v___x_1358_, v_cls_1344_);
v___x_1360_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1357_, v_options_1353_, v___x_1359_);
lean_dec(v___x_1359_);
v___x_1361_ = lean_box(v___x_1360_);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed(lean_object* v_cls_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(v_cls_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(lean_object* v_mvarId_1372_, lean_object* v_val_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___x_1376_; lean_object* v_mctx_1377_; lean_object* v_cache_1378_; lean_object* v_zetaDeltaFVarIds_1379_; lean_object* v_postponed_1380_; lean_object* v_diag_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1410_; 
v___x_1376_ = lean_st_ref_take(v___y_1374_);
v_mctx_1377_ = lean_ctor_get(v___x_1376_, 0);
v_cache_1378_ = lean_ctor_get(v___x_1376_, 1);
v_zetaDeltaFVarIds_1379_ = lean_ctor_get(v___x_1376_, 2);
v_postponed_1380_ = lean_ctor_get(v___x_1376_, 3);
v_diag_1381_ = lean_ctor_get(v___x_1376_, 4);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1383_ = v___x_1376_;
v_isShared_1384_ = v_isSharedCheck_1410_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_diag_1381_);
lean_inc(v_postponed_1380_);
lean_inc(v_zetaDeltaFVarIds_1379_);
lean_inc(v_cache_1378_);
lean_inc(v_mctx_1377_);
lean_dec(v___x_1376_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1410_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v_depth_1385_; lean_object* v_levelAssignDepth_1386_; lean_object* v_lmvarCounter_1387_; lean_object* v_mvarCounter_1388_; lean_object* v_lDecls_1389_; lean_object* v_decls_1390_; lean_object* v_userNames_1391_; lean_object* v_lAssignment_1392_; lean_object* v_eAssignment_1393_; lean_object* v_dAssignment_1394_; lean_object* v_instanceTypedMVars_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1409_; 
v_depth_1385_ = lean_ctor_get(v_mctx_1377_, 0);
v_levelAssignDepth_1386_ = lean_ctor_get(v_mctx_1377_, 1);
v_lmvarCounter_1387_ = lean_ctor_get(v_mctx_1377_, 2);
v_mvarCounter_1388_ = lean_ctor_get(v_mctx_1377_, 3);
v_lDecls_1389_ = lean_ctor_get(v_mctx_1377_, 4);
v_decls_1390_ = lean_ctor_get(v_mctx_1377_, 5);
v_userNames_1391_ = lean_ctor_get(v_mctx_1377_, 6);
v_lAssignment_1392_ = lean_ctor_get(v_mctx_1377_, 7);
v_eAssignment_1393_ = lean_ctor_get(v_mctx_1377_, 8);
v_dAssignment_1394_ = lean_ctor_get(v_mctx_1377_, 9);
v_instanceTypedMVars_1395_ = lean_ctor_get(v_mctx_1377_, 10);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_mctx_1377_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1397_ = v_mctx_1377_;
v_isShared_1398_ = v_isSharedCheck_1409_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_instanceTypedMVars_1395_);
lean_inc(v_dAssignment_1394_);
lean_inc(v_eAssignment_1393_);
lean_inc(v_lAssignment_1392_);
lean_inc(v_userNames_1391_);
lean_inc(v_decls_1390_);
lean_inc(v_lDecls_1389_);
lean_inc(v_mvarCounter_1388_);
lean_inc(v_lmvarCounter_1387_);
lean_inc(v_levelAssignDepth_1386_);
lean_inc(v_depth_1385_);
lean_dec(v_mctx_1377_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1409_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1402_; 
v___x_1399_ = lean_box(0);
v___x_1400_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_eAssignment_1393_, v_mvarId_1372_, v_val_1373_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 8, v___x_1400_);
v___x_1402_ = v___x_1397_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_depth_1385_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_levelAssignDepth_1386_);
lean_ctor_set(v_reuseFailAlloc_1408_, 2, v_lmvarCounter_1387_);
lean_ctor_set(v_reuseFailAlloc_1408_, 3, v_mvarCounter_1388_);
lean_ctor_set(v_reuseFailAlloc_1408_, 4, v_lDecls_1389_);
lean_ctor_set(v_reuseFailAlloc_1408_, 5, v_decls_1390_);
lean_ctor_set(v_reuseFailAlloc_1408_, 6, v_userNames_1391_);
lean_ctor_set(v_reuseFailAlloc_1408_, 7, v_lAssignment_1392_);
lean_ctor_set(v_reuseFailAlloc_1408_, 8, v___x_1400_);
lean_ctor_set(v_reuseFailAlloc_1408_, 9, v_dAssignment_1394_);
lean_ctor_set(v_reuseFailAlloc_1408_, 10, v_instanceTypedMVars_1395_);
v___x_1402_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1404_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 0, v___x_1402_);
v___x_1404_ = v___x_1383_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1402_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v_cache_1378_);
lean_ctor_set(v_reuseFailAlloc_1407_, 2, v_zetaDeltaFVarIds_1379_);
lean_ctor_set(v_reuseFailAlloc_1407_, 3, v_postponed_1380_);
lean_ctor_set(v_reuseFailAlloc_1407_, 4, v_diag_1381_);
v___x_1404_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_st_ref_put(v___y_1374_, v___x_1404_);
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1399_);
return v___x_1406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg___boxed(lean_object* v_mvarId_1411_, lean_object* v_val_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_mvarId_1411_, v_val_1412_, v___y_1413_);
lean_dec(v___y_1413_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(lean_object* v_cls_1416_, lean_object* v_msg_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_ref_1423_; lean_object* v___x_1424_; lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1469_; 
v_ref_1423_ = lean_ctor_get(v___y_1420_, 2);
v___x_1424_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1469_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1469_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1429_; lean_object* v_traceState_1430_; lean_object* v_env_1431_; lean_object* v_nextMacroScope_1432_; lean_object* v_ngen_1433_; lean_object* v_auxDeclNGen_1434_; lean_object* v_cache_1435_; lean_object* v_messages_1436_; lean_object* v_infoState_1437_; lean_object* v_snapshotTasks_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1468_; 
v___x_1429_ = lean_st_ref_take(v___y_1421_);
v_traceState_1430_ = lean_ctor_get(v___x_1429_, 4);
v_env_1431_ = lean_ctor_get(v___x_1429_, 0);
v_nextMacroScope_1432_ = lean_ctor_get(v___x_1429_, 1);
v_ngen_1433_ = lean_ctor_get(v___x_1429_, 2);
v_auxDeclNGen_1434_ = lean_ctor_get(v___x_1429_, 3);
v_cache_1435_ = lean_ctor_get(v___x_1429_, 5);
v_messages_1436_ = lean_ctor_get(v___x_1429_, 6);
v_infoState_1437_ = lean_ctor_get(v___x_1429_, 7);
v_snapshotTasks_1438_ = lean_ctor_get(v___x_1429_, 8);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1440_ = v___x_1429_;
v_isShared_1441_ = v_isSharedCheck_1468_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_snapshotTasks_1438_);
lean_inc(v_infoState_1437_);
lean_inc(v_messages_1436_);
lean_inc(v_cache_1435_);
lean_inc(v_traceState_1430_);
lean_inc(v_auxDeclNGen_1434_);
lean_inc(v_ngen_1433_);
lean_inc(v_nextMacroScope_1432_);
lean_inc(v_env_1431_);
lean_dec(v___x_1429_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1468_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
uint64_t v_tid_1442_; lean_object* v_traces_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1467_; 
v_tid_1442_ = lean_ctor_get_uint64(v_traceState_1430_, sizeof(void*)*1);
v_traces_1443_ = lean_ctor_get(v_traceState_1430_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_traceState_1430_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1445_ = v_traceState_1430_;
v_isShared_1446_ = v_isSharedCheck_1467_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_traces_1443_);
lean_dec(v_traceState_1430_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1467_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; double v___x_1449_; uint8_t v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1447_ = lean_box(0);
v___x_1448_ = lean_box(0);
v___x_1449_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0);
v___x_1450_ = 0;
v___x_1451_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1));
v___x_1452_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1452_, 0, v_cls_1416_);
lean_ctor_set(v___x_1452_, 1, v___x_1448_);
lean_ctor_set(v___x_1452_, 2, v___x_1451_);
lean_ctor_set_float(v___x_1452_, sizeof(void*)*3, v___x_1449_);
lean_ctor_set_float(v___x_1452_, sizeof(void*)*3 + 8, v___x_1449_);
lean_ctor_set_uint8(v___x_1452_, sizeof(void*)*3 + 16, v___x_1450_);
v___x_1453_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2));
v___x_1454_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v_a_1425_);
lean_ctor_set(v___x_1454_, 2, v___x_1453_);
lean_inc(v_ref_1423_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v_ref_1423_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = l_Lean_PersistentArray_push___redArg(v_traces_1443_, v___x_1455_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 0, v___x_1456_);
v___x_1458_ = v___x_1445_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1456_);
lean_ctor_set_uint64(v_reuseFailAlloc_1466_, sizeof(void*)*1, v_tid_1442_);
v___x_1458_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v___x_1460_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 4, v___x_1458_);
v___x_1460_ = v___x_1440_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_env_1431_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_nextMacroScope_1432_);
lean_ctor_set(v_reuseFailAlloc_1465_, 2, v_ngen_1433_);
lean_ctor_set(v_reuseFailAlloc_1465_, 3, v_auxDeclNGen_1434_);
lean_ctor_set(v_reuseFailAlloc_1465_, 4, v___x_1458_);
lean_ctor_set(v_reuseFailAlloc_1465_, 5, v_cache_1435_);
lean_ctor_set(v_reuseFailAlloc_1465_, 6, v_messages_1436_);
lean_ctor_set(v_reuseFailAlloc_1465_, 7, v_infoState_1437_);
lean_ctor_set(v_reuseFailAlloc_1465_, 8, v_snapshotTasks_1438_);
v___x_1460_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1461_ = lean_st_ref_put(v___y_1421_, v___x_1460_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1447_);
v___x_1463_ = v___x_1427_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1447_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg___boxed(lean_object* v_cls_1470_, lean_object* v_msg_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1470_, v_msg_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
return v_res_1477_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_box(0);
v___x_1479_ = l_unsafeCast___redArg(v___x_1478_);
return v___x_1479_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1480_; lean_object* v_dummy_1481_; 
v___x_1480_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0);
v_dummy_1481_ = l_Lean_Expr_sort___override(v___x_1480_);
return v_dummy_1481_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1483_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2));
v___x_1484_ = l_Lean_stringToMessageData(v___x_1483_);
return v___x_1484_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1486_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4));
v___x_1487_ = l_Lean_stringToMessageData(v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(lean_object* v_numParams_1488_, lean_object* v___x_1489_, lean_object* v_name_1490_, lean_object* v___x_1491_, lean_object* v___x_1492_, lean_object* v_name_1493_, lean_object* v___x_1494_, lean_object* v_cls_1495_, lean_object* v_fields_1496_, lean_object* v_bodyExpr_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_toCold_1505_; lean_object* v_options_1506_; lean_object* v_inheritedTraceOptions_1507_; uint8_t v_hasTrace_1508_; lean_object* v_nargs_1509_; lean_object* v_dummy_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; 
v_toCold_1505_ = lean_ctor_get(v___y_1502_, 0);
v_options_1506_ = lean_ctor_get(v_toCold_1505_, 2);
v_inheritedTraceOptions_1507_ = lean_ctor_get(v_toCold_1505_, 11);
v_hasTrace_1508_ = lean_ctor_get_uint8(v_options_1506_, sizeof(void*)*1);
v_nargs_1509_ = l_Lean_Expr_getAppNumArgs(v_bodyExpr_1497_);
v_dummy_1510_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1);
lean_inc(v_nargs_1509_);
v___x_1511_ = lean_mk_array(v_nargs_1509_, v_dummy_1510_);
v___x_1512_ = lean_unsigned_to_nat(1u);
v___x_1513_ = lean_nat_sub(v_nargs_1509_, v___x_1512_);
lean_dec(v_nargs_1509_);
v___x_1514_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_bodyExpr_1497_, v___x_1511_, v___x_1513_);
v___x_1515_ = lean_array_get_size(v___x_1514_);
v___x_1516_ = lean_nat_add(v_numParams_1488_, v___x_1489_);
v___x_1517_ = l_Array_toSubarray___redArg(v___x_1514_, v___x_1516_, v___x_1515_);
v___x_1518_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_1490_);
lean_inc(v___x_1491_);
lean_inc(v___x_1518_);
v___x_1519_ = l_Lean_mkConst(v___x_1518_, v___x_1491_);
v___x_1520_ = l_Lean_mkAppN(v___x_1519_, v___x_1492_);
v___x_1521_ = l_Subarray_copy___redArg(v___x_1517_);
v___x_1522_ = l_Lean_mkAppN(v___x_1520_, v___x_1521_);
lean_dec_ref(v___x_1521_);
if (v_hasTrace_1508_ == 0)
{
lean_dec(v_cls_1495_);
v___y_1524_ = v___y_1498_;
v___y_1525_ = v___y_1499_;
v___y_1526_ = v___y_1500_;
v___y_1527_ = v___y_1501_;
v___y_1528_ = v___y_1502_;
v___y_1529_ = v___y_1503_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
lean_inc(v_cls_1495_);
v___x_1579_ = l_Lean_Name_append(v___x_1578_, v_cls_1495_);
v___x_1580_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1507_, v_options_1506_, v___x_1579_);
lean_dec(v___x_1579_);
if (v___x_1580_ == 0)
{
lean_dec(v_cls_1495_);
v___y_1524_ = v___y_1498_;
v___y_1525_ = v___y_1499_;
v___y_1526_ = v___y_1500_;
v___y_1527_ = v___y_1501_;
v___y_1528_ = v___y_1502_;
v___y_1529_ = v___y_1503_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1581_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3);
lean_inc(v_name_1493_);
v___x_1582_ = l_Lean_MessageData_ofName(v_name_1493_);
v___x_1583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__5);
v___x_1585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1583_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
lean_inc_ref(v___x_1522_);
v___x_1586_ = l_Lean_MessageData_ofExpr(v___x_1522_);
v___x_1587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1585_);
lean_ctor_set(v___x_1587_, 1, v___x_1586_);
v___x_1588_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1495_, v___x_1587_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_dec_ref_known(v___x_1588_, 1);
v___y_1524_ = v___y_1498_;
v___y_1525_ = v___y_1499_;
v___y_1526_ = v___y_1500_;
v___y_1527_ = v___y_1501_;
v___y_1528_ = v___y_1502_;
v___y_1529_ = v___y_1503_;
goto v___jp_1523_;
}
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_dec_ref(v___x_1522_);
lean_dec(v___x_1518_);
lean_dec_ref(v_fields_1496_);
lean_dec(v_name_1493_);
lean_dec_ref(v___x_1492_);
lean_dec(v___x_1491_);
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1588_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1588_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
}
v___jp_1523_:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1522_);
v___x_1531_ = 0;
v___x_1532_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_1533_ = l_Lean_Meta_mkFreshExprMVar(v___x_1530_, v___x_1531_, v___x_1532_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = l_Lean_Expr_mvarId_x21(v_a_1534_);
v___x_1536_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
v___x_1537_ = l_Lean_Name_append(v___x_1518_, v___x_1536_);
lean_inc(v___x_1491_);
v___x_1538_ = l_Lean_mkConst(v___x_1537_, v___x_1491_);
v___x_1539_ = l_Lean_mkAppN(v___x_1538_, v___x_1492_);
lean_inc(v___x_1535_);
v___x_1540_ = l_Lean_MVarId_getType(v___x_1535_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; uint8_t v___x_1542_; uint8_t v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1542_ = 0;
v___x_1543_ = 1;
v___x_1544_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0));
lean_inc(v___x_1535_);
v___x_1545_ = l_Lean_MVarId_rewrite(v___x_1535_, v_a_1541_, v___x_1539_, v___x_1542_, v___x_1544_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v_eNew_1547_; lean_object* v_eqProof_1548_; lean_object* v___x_1549_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v___x_1545_, 1);
v_eNew_1547_ = lean_ctor_get(v_a_1546_, 0);
lean_inc_ref(v_eNew_1547_);
v_eqProof_1548_ = lean_ctor_get(v_a_1546_, 1);
lean_inc_ref(v_eqProof_1548_);
lean_dec(v_a_1546_);
v___x_1549_ = l_Lean_MVarId_replaceTargetEq(v___x_1535_, v_eNew_1547_, v_eqProof_1548_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v_a_1557_; uint8_t v___x_1558_; lean_object* v___x_1559_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
v___x_1551_ = l_Lean_mkConst(v_name_1493_, v___x_1491_);
v___x_1552_ = l_Lean_mkAppN(v___x_1551_, v___x_1492_);
v___x_1553_ = l_Lean_mkAppN(v___x_1552_, v___x_1494_);
v___x_1554_ = l_Lean_mkAppN(v___x_1553_, v_fields_1496_);
v___x_1555_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_a_1550_, v___x_1554_, v___y_1527_);
lean_dec_ref(v___x_1555_);
v___x_1556_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_a_1534_, v___y_1527_);
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = 1;
v___x_1559_ = l_Lean_Meta_mkLambdaFVars(v_fields_1496_, v_a_1557_, v___x_1542_, v___x_1543_, v___x_1542_, v___x_1543_, v___x_1558_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1561_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v___x_1559_, 1);
v___x_1561_ = l_Lean_Meta_mkLambdaFVars(v___x_1492_, v_a_1560_, v___x_1542_, v___x_1543_, v___x_1542_, v___x_1543_, v___x_1558_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
return v___x_1561_;
}
else
{
lean_dec_ref(v___x_1492_);
return v___x_1559_;
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_dec(v_a_1534_);
lean_dec_ref(v_fields_1496_);
lean_dec(v_name_1493_);
lean_dec_ref(v___x_1492_);
lean_dec(v___x_1491_);
v_a_1562_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1549_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1549_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec(v___x_1535_);
lean_dec(v_a_1534_);
lean_dec_ref(v_fields_1496_);
lean_dec(v_name_1493_);
lean_dec_ref(v___x_1492_);
lean_dec(v___x_1491_);
v_a_1570_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1545_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1545_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
else
{
lean_dec_ref(v___x_1539_);
lean_dec(v___x_1535_);
lean_dec(v_a_1534_);
lean_dec_ref(v_fields_1496_);
lean_dec(v_name_1493_);
lean_dec_ref(v___x_1492_);
lean_dec(v___x_1491_);
return v___x_1540_;
}
}
else
{
lean_dec(v___x_1518_);
lean_dec_ref(v_fields_1496_);
lean_dec(v_name_1493_);
lean_dec_ref(v___x_1492_);
lean_dec(v___x_1491_);
return v___x_1533_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed(lean_object** _args){
lean_object* v_numParams_1597_ = _args[0];
lean_object* v___x_1598_ = _args[1];
lean_object* v_name_1599_ = _args[2];
lean_object* v___x_1600_ = _args[3];
lean_object* v___x_1601_ = _args[4];
lean_object* v_name_1602_ = _args[5];
lean_object* v___x_1603_ = _args[6];
lean_object* v_cls_1604_ = _args[7];
lean_object* v_fields_1605_ = _args[8];
lean_object* v_bodyExpr_1606_ = _args[9];
lean_object* v___y_1607_ = _args[10];
lean_object* v___y_1608_ = _args[11];
lean_object* v___y_1609_ = _args[12];
lean_object* v___y_1610_ = _args[13];
lean_object* v___y_1611_ = _args[14];
lean_object* v___y_1612_ = _args[15];
lean_object* v___y_1613_ = _args[16];
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(v_numParams_1597_, v___x_1598_, v_name_1599_, v___x_1600_, v___x_1601_, v_name_1602_, v___x_1603_, v_cls_1604_, v_fields_1605_, v_bodyExpr_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___x_1603_);
lean_dec(v___x_1598_);
lean_dec(v_numParams_1597_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(lean_object* v___x_1615_, size_t v_sz_1616_, size_t v_i_1617_, lean_object* v_bs_1618_){
_start:
{
uint8_t v___x_1619_; 
v___x_1619_ = lean_usize_dec_lt(v_i_1617_, v_sz_1616_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
v___x_1620_ = l_unsafeCast___redArg(v_bs_1618_);
lean_dec_ref(v_bs_1618_);
return v___x_1620_;
}
else
{
lean_object* v_v_1621_; lean_object* v___x_1622_; lean_object* v_bs_x27_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; size_t v___x_1626_; size_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v_v_1621_ = lean_array_uget(v_bs_1618_, v_i_1617_);
v___x_1622_ = lean_unsigned_to_nat(0u);
v_bs_x27_1623_ = lean_array_uset(v_bs_1618_, v_i_1617_, v___x_1622_);
v___x_1624_ = l_unsafeCast___redArg(v_v_1621_);
lean_dec(v_v_1621_);
v___x_1625_ = l_Lean_mkAppN(v___x_1624_, v___x_1615_);
v___x_1626_ = ((size_t)1ULL);
v___x_1627_ = lean_usize_add(v_i_1617_, v___x_1626_);
v___x_1628_ = l_unsafeCast___redArg(v___x_1625_);
lean_dec_ref(v___x_1625_);
v___x_1629_ = lean_array_uset(v_bs_x27_1623_, v_i_1617_, v___x_1628_);
v_i_1617_ = v___x_1627_;
v_bs_1618_ = v___x_1629_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2___boxed(lean_object* v___x_1631_, lean_object* v_sz_1632_, lean_object* v_i_1633_, lean_object* v_bs_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; lean_object* v_res_1637_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1632_);
lean_dec(v_sz_1632_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1633_);
lean_dec(v_i_1633_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v___x_1631_, v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1634_);
lean_dec_ref(v___x_1631_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(lean_object* v___x_1638_, size_t v_sz_1639_, size_t v_i_1640_, lean_object* v_bs_1641_){
_start:
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_usize_dec_lt(v_i_1640_, v_sz_1639_);
if (v___x_1642_ == 0)
{
lean_object* v___x_1643_; 
lean_dec(v___x_1638_);
v___x_1643_ = l_unsafeCast___redArg(v_bs_1641_);
lean_dec_ref(v_bs_1641_);
return v___x_1643_;
}
else
{
lean_object* v_v_1644_; lean_object* v___x_1645_; lean_object* v_bs_x27_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; size_t v___x_1649_; size_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v_v_1644_ = lean_array_uget(v_bs_1641_, v_i_1640_);
v___x_1645_ = lean_unsigned_to_nat(0u);
v_bs_x27_1646_ = lean_array_uset(v_bs_1641_, v_i_1640_, v___x_1645_);
v___x_1647_ = l_unsafeCast___redArg(v_v_1644_);
lean_dec(v_v_1644_);
lean_inc(v___x_1638_);
v___x_1648_ = l_Lean_mkConst(v___x_1647_, v___x_1638_);
v___x_1649_ = ((size_t)1ULL);
v___x_1650_ = lean_usize_add(v_i_1640_, v___x_1649_);
v___x_1651_ = l_unsafeCast___redArg(v___x_1648_);
lean_dec_ref(v___x_1648_);
v___x_1652_ = lean_array_uset(v_bs_x27_1646_, v_i_1640_, v___x_1651_);
v_i_1640_ = v___x_1650_;
v_bs_1641_ = v___x_1652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1___boxed(lean_object* v___x_1654_, lean_object* v_sz_1655_, lean_object* v_i_1656_, lean_object* v_bs_1657_){
_start:
{
size_t v_sz_boxed_1658_; size_t v_i_boxed_1659_; lean_object* v_res_1660_; 
v_sz_boxed_1658_ = lean_unbox_usize(v_sz_1655_);
lean_dec(v_sz_1655_);
v_i_boxed_1659_ = lean_unbox_usize(v_i_1656_);
lean_dec(v_i_1656_);
v_res_1660_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(v___x_1654_, v_sz_boxed_1658_, v_i_boxed_1659_, v_bs_1657_);
return v_res_1660_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0));
v___x_1663_ = l_Lean_stringToMessageData(v___x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(lean_object* v___x_1664_, lean_object* v_numParams_1665_, lean_object* v___x_1666_, lean_object* v___x_1667_, size_t v___x_1668_, lean_object* v___x_1669_, lean_object* v_name_1670_, lean_object* v_name_1671_, lean_object* v_cls_1672_, lean_object* v_levelParams_1673_, lean_object* v_ctorSyntax_1674_, lean_object* v___f_1675_, lean_object* v_args_1676_, lean_object* v_body_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; size_t v_sz_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; size_t v_sz_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___f_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; lean_object* v___x_1700_; 
lean_inc_n(v_numParams_1665_, 2);
v___x_1685_ = l_Array_extract___redArg(v_args_1676_, v___x_1664_, v_numParams_1665_);
v___x_1686_ = lean_array_get_size(v_args_1676_);
v___x_1687_ = l_Array_toSubarray___redArg(v_args_1676_, v_numParams_1665_, v___x_1686_);
v_sz_1688_ = lean_array_size(v___x_1666_);
v___x_1689_ = l_unsafeCast___redArg(v___x_1666_);
lean_inc(v___x_1667_);
v___x_1690_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(v___x_1667_, v_sz_1688_, v___x_1668_, v___x_1689_);
v___x_1691_ = l_unsafeCast___redArg(v___x_1690_);
lean_dec_ref(v___x_1690_);
v_sz_1692_ = lean_array_size(v___x_1691_);
v___x_1693_ = l_unsafeCast___redArg(v___x_1691_);
lean_dec(v___x_1691_);
v___x_1694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v___x_1685_, v_sz_1692_, v___x_1668_, v___x_1693_);
v___x_1695_ = l_unsafeCast___redArg(v___x_1694_);
lean_dec_ref(v___x_1694_);
lean_inc(v_cls_1672_);
lean_inc(v___x_1695_);
lean_inc(v_name_1671_);
v___f_1696_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed), 17, 8);
lean_closure_set(v___f_1696_, 0, v_numParams_1665_);
lean_closure_set(v___f_1696_, 1, v___x_1669_);
lean_closure_set(v___f_1696_, 2, v_name_1670_);
lean_closure_set(v___f_1696_, 3, v___x_1667_);
lean_closure_set(v___f_1696_, 4, v___x_1685_);
lean_closure_set(v___f_1696_, 5, v_name_1671_);
lean_closure_set(v___f_1696_, 6, v___x_1695_);
lean_closure_set(v___f_1696_, 7, v_cls_1672_);
v___x_1697_ = l_Subarray_copy___redArg(v___x_1687_);
v___x_1698_ = l_Lean_Expr_replaceFVars(v_body_1677_, v___x_1697_, v___x_1695_);
lean_dec(v___x_1695_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = 0;
v___x_1700_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v___x_1698_, v___f_1696_, v___x_1699_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1702_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc_n(v_a_1701_, 2);
lean_dec_ref_known(v___x_1700_, 1);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
lean_inc(v___y_1681_);
lean_inc_ref(v___y_1680_);
v___x_1702_ = lean_infer_type(v_a_1701_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___x_1727_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
lean_inc(v___y_1681_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1679_);
lean_inc_ref(v___y_1678_);
v___x_1727_ = lean_apply_7(v___f_1675_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, lean_box(0));
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; uint8_t v___x_1729_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_unbox(v_a_1728_);
lean_dec(v_a_1728_);
if (v___x_1729_ == 0)
{
lean_dec(v_cls_1672_);
v___y_1705_ = v___y_1678_;
v___y_1706_ = v___y_1679_;
v___y_1707_ = v___y_1680_;
v___y_1708_ = v___y_1681_;
v___y_1709_ = v___y_1682_;
v___y_1710_ = v___y_1683_;
goto v___jp_1704_;
}
else
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1730_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1);
lean_inc(v_a_1703_);
v___x_1731_ = l_Lean_MessageData_ofExpr(v_a_1703_);
v___x_1732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1672_, v___x_1732_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_dec_ref_known(v___x_1733_, 1);
v___y_1705_ = v___y_1678_;
v___y_1706_ = v___y_1679_;
v___y_1707_ = v___y_1680_;
v___y_1708_ = v___y_1681_;
v___y_1709_ = v___y_1682_;
v___y_1710_ = v___y_1683_;
goto v___jp_1704_;
}
else
{
lean_dec(v_a_1703_);
lean_dec(v_a_1701_);
lean_dec(v_ctorSyntax_1674_);
lean_dec(v_levelParams_1673_);
lean_dec(v_name_1671_);
return v___x_1733_;
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v_a_1703_);
lean_dec(v_a_1701_);
lean_dec(v_ctorSyntax_1674_);
lean_dec(v_levelParams_1673_);
lean_dec(v_cls_1672_);
lean_dec(v_name_1671_);
v_a_1734_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1727_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1727_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
v___jp_1704_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1726_; 
v___x_1711_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v_name_1671_);
v___x_1712_ = lean_box(0);
lean_inc(v_a_1701_);
v___x_1713_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v___x_1711_, v_levelParams_1673_, v_a_1703_, v_a_1701_, v___x_1712_, v___y_1710_);
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1726_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1726_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set_tag(v___x_1716_, 1);
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_addDecl(v___x_1719_, v___x_1699_, v___y_1709_, v___y_1710_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; 
lean_dec_ref_known(v___x_1720_, 1);
v___x_1721_ = lean_box(0);
v___x_1722_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_1723_ = 1;
v___x_1724_ = l_Lean_Elab_Term_addTermInfo_x27(v_ctorSyntax_1674_, v_a_1701_, v___x_1721_, v___x_1721_, v___x_1722_, v___x_1723_, v___x_1699_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_);
return v___x_1724_;
}
else
{
lean_dec(v_a_1701_);
lean_dec(v_ctorSyntax_1674_);
return v___x_1720_;
}
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v_a_1701_);
lean_dec_ref(v___f_1675_);
lean_dec(v_ctorSyntax_1674_);
lean_dec(v_levelParams_1673_);
lean_dec(v_cls_1672_);
lean_dec(v_name_1671_);
v_a_1742_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1702_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1702_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v___f_1675_);
lean_dec(v_ctorSyntax_1674_);
lean_dec(v_levelParams_1673_);
lean_dec(v_cls_1672_);
lean_dec(v_name_1671_);
v_a_1750_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1700_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1700_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed(lean_object** _args){
lean_object* v___x_1758_ = _args[0];
lean_object* v_numParams_1759_ = _args[1];
lean_object* v___x_1760_ = _args[2];
lean_object* v___x_1761_ = _args[3];
lean_object* v___x_1762_ = _args[4];
lean_object* v___x_1763_ = _args[5];
lean_object* v_name_1764_ = _args[6];
lean_object* v_name_1765_ = _args[7];
lean_object* v_cls_1766_ = _args[8];
lean_object* v_levelParams_1767_ = _args[9];
lean_object* v_ctorSyntax_1768_ = _args[10];
lean_object* v___f_1769_ = _args[11];
lean_object* v_args_1770_ = _args[12];
lean_object* v_body_1771_ = _args[13];
lean_object* v___y_1772_ = _args[14];
lean_object* v___y_1773_ = _args[15];
lean_object* v___y_1774_ = _args[16];
lean_object* v___y_1775_ = _args[17];
lean_object* v___y_1776_ = _args[18];
lean_object* v___y_1777_ = _args[19];
lean_object* v___y_1778_ = _args[20];
_start:
{
size_t v___x_8958__boxed_1779_; lean_object* v_res_1780_; 
v___x_8958__boxed_1779_ = lean_unbox_usize(v___x_1762_);
lean_dec(v___x_1762_);
v_res_1780_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(v___x_1758_, v_numParams_1759_, v___x_1760_, v___x_1761_, v___x_8958__boxed_1779_, v___x_1763_, v_name_1764_, v_name_1765_, v_cls_1766_, v_levelParams_1767_, v_ctorSyntax_1768_, v___f_1769_, v_args_1770_, v_body_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec_ref(v_body_1771_);
lean_dec(v___x_1760_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(size_t v_sz_1781_, size_t v_i_1782_, lean_object* v_bs_1783_){
_start:
{
uint8_t v___x_1784_; 
v___x_1784_ = lean_usize_dec_lt(v_i_1782_, v_sz_1781_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
v___x_1785_ = l_unsafeCast___redArg(v_bs_1783_);
lean_dec_ref(v_bs_1783_);
return v___x_1785_;
}
else
{
lean_object* v_v_1786_; lean_object* v___x_1787_; lean_object* v_toConstantVal_1788_; lean_object* v_name_1789_; lean_object* v___x_1790_; lean_object* v_bs_x27_1791_; lean_object* v___x_1792_; size_t v___x_1793_; size_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_v_1786_ = lean_array_uget_borrowed(v_bs_1783_, v_i_1782_);
v___x_1787_ = l_unsafeCast___redArg(v_v_1786_);
v_toConstantVal_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc_ref(v_toConstantVal_1788_);
lean_dec(v___x_1787_);
v_name_1789_ = lean_ctor_get(v_toConstantVal_1788_, 0);
lean_inc(v_name_1789_);
lean_dec_ref(v_toConstantVal_1788_);
v___x_1790_ = lean_unsigned_to_nat(0u);
v_bs_x27_1791_ = lean_array_uset(v_bs_1783_, v_i_1782_, v___x_1790_);
v___x_1792_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_1789_);
v___x_1793_ = ((size_t)1ULL);
v___x_1794_ = lean_usize_add(v_i_1782_, v___x_1793_);
v___x_1795_ = l_unsafeCast___redArg(v___x_1792_);
lean_dec(v___x_1792_);
v___x_1796_ = lean_array_uset(v_bs_x27_1791_, v_i_1782_, v___x_1795_);
v_i_1782_ = v___x_1794_;
v_bs_1783_ = v___x_1796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0___boxed(lean_object* v_sz_1798_, lean_object* v_i_1799_, lean_object* v_bs_1800_){
_start:
{
size_t v_sz_boxed_1801_; size_t v_i_boxed_1802_; lean_object* v_res_1803_; 
v_sz_boxed_1801_ = lean_unbox_usize(v_sz_1798_);
lean_dec(v_sz_1798_);
v_i_boxed_1802_ = lean_unbox_usize(v_i_1799_);
lean_dec(v_i_1799_);
v_res_1803_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(v_sz_boxed_1801_, v_i_boxed_1802_, v_bs_1800_);
return v_res_1803_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1));
v___x_1808_ = l_Lean_stringToMessageData(v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(lean_object* v_infos_1811_, lean_object* v_ctorSyntax_1812_, lean_object* v_numParams_1813_, lean_object* v_name_1814_, lean_object* v_ctor_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v___x_1823_; lean_object* v_cls_1824_; lean_object* v___f_1825_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___x_1855_; lean_object* v_a_1856_; uint8_t v___x_1857_; 
v___x_1823_ = l_Lean_instInhabitedInductiveVal_default;
v_cls_1824_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___f_1825_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0));
v___x_1855_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(v_cls_1824_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref(v___x_1855_);
v___x_1857_ = lean_unbox(v_a_1856_);
lean_dec(v_a_1856_);
if (v___x_1857_ == 0)
{
v___y_1827_ = v_a_1816_;
v___y_1828_ = v_a_1817_;
v___y_1829_ = v_a_1818_;
v___y_1830_ = v_a_1819_;
v___y_1831_ = v_a_1820_;
v___y_1832_ = v_a_1821_;
goto v___jp_1826_;
}
else
{
lean_object* v_toConstantVal_1858_; lean_object* v_name_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_toConstantVal_1858_ = lean_ctor_get(v_ctor_1815_, 0);
v_name_1859_ = lean_ctor_get(v_toConstantVal_1858_, 0);
v___x_1860_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2);
lean_inc(v_name_1859_);
v___x_1861_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v_name_1859_);
v___x_1862_ = l_Lean_MessageData_ofName(v___x_1861_);
v___x_1863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1860_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
v___x_1864_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1824_, v___x_1863_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_dec_ref_known(v___x_1864_, 1);
v___y_1827_ = v_a_1816_;
v___y_1828_ = v_a_1817_;
v___y_1829_ = v_a_1818_;
v___y_1830_ = v_a_1819_;
v___y_1831_ = v_a_1820_;
v___y_1832_ = v_a_1821_;
goto v___jp_1826_;
}
else
{
lean_dec_ref(v_ctor_1815_);
lean_dec(v_name_1814_);
lean_dec(v_numParams_1813_);
lean_dec(v_ctorSyntax_1812_);
return v___x_1864_;
}
}
v___jp_1826_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v_toConstantVal_1835_; lean_object* v_toConstantVal_1836_; lean_object* v_levelParams_1837_; lean_object* v_name_1838_; lean_object* v_levelParams_1839_; lean_object* v_type_1840_; lean_object* v___x_1841_; size_t v_sz_1842_; size_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___f_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; lean_object* v___x_1854_; 
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = lean_array_get_borrowed(v___x_1823_, v_infos_1811_, v___x_1833_);
v_toConstantVal_1835_ = lean_ctor_get(v___x_1834_, 0);
v_toConstantVal_1836_ = lean_ctor_get(v_ctor_1815_, 0);
lean_inc_ref(v_toConstantVal_1836_);
lean_dec_ref(v_ctor_1815_);
v_levelParams_1837_ = lean_ctor_get(v_toConstantVal_1835_, 1);
v_name_1838_ = lean_ctor_get(v_toConstantVal_1836_, 0);
lean_inc(v_name_1838_);
v_levelParams_1839_ = lean_ctor_get(v_toConstantVal_1836_, 1);
lean_inc(v_levelParams_1839_);
v_type_1840_ = lean_ctor_get(v_toConstantVal_1836_, 2);
lean_inc_ref(v_type_1840_);
lean_dec_ref(v_toConstantVal_1836_);
v___x_1841_ = lean_array_get_size(v_infos_1811_);
v_sz_1842_ = lean_array_size(v_infos_1811_);
v___x_1843_ = ((size_t)0ULL);
v___x_1844_ = l_unsafeCast___redArg(v_infos_1811_);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(v_sz_1842_, v___x_1843_, v___x_1844_);
v___x_1846_ = l_unsafeCast___redArg(v___x_1845_);
lean_dec_ref(v___x_1845_);
v___x_1847_ = lean_box(0);
lean_inc(v_levelParams_1837_);
v___x_1848_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_1837_, v___x_1847_);
v___x_1849_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
lean_inc(v_numParams_1813_);
v___f_1850_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed), 21, 12);
lean_closure_set(v___f_1850_, 0, v___x_1833_);
lean_closure_set(v___f_1850_, 1, v_numParams_1813_);
lean_closure_set(v___f_1850_, 2, v___x_1846_);
lean_closure_set(v___f_1850_, 3, v___x_1848_);
lean_closure_set(v___f_1850_, 4, v___x_1849_);
lean_closure_set(v___f_1850_, 5, v___x_1841_);
lean_closure_set(v___f_1850_, 6, v_name_1814_);
lean_closure_set(v___f_1850_, 7, v_name_1838_);
lean_closure_set(v___f_1850_, 8, v_cls_1824_);
lean_closure_set(v___f_1850_, 9, v_levelParams_1839_);
lean_closure_set(v___f_1850_, 10, v_ctorSyntax_1812_);
lean_closure_set(v___f_1850_, 11, v___f_1825_);
v___x_1851_ = lean_nat_add(v_numParams_1813_, v___x_1841_);
lean_dec(v_numParams_1813_);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
v___x_1853_ = 0;
v___x_1854_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1840_, v___x_1852_, v___f_1850_, v___x_1853_, v___x_1853_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
return v___x_1854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed(lean_object* v_infos_1865_, lean_object* v_ctorSyntax_1866_, lean_object* v_numParams_1867_, lean_object* v_name_1868_, lean_object* v_ctor_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(v_infos_1865_, v_ctorSyntax_1866_, v_numParams_1867_, v_name_1868_, v_ctor_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
lean_dec_ref(v_a_1872_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec_ref(v_infos_1865_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(lean_object* v_mvarId_1878_, lean_object* v_val_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_mvarId_1878_, v_val_1879_, v___y_1883_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___boxed(lean_object* v_mvarId_1888_, lean_object* v_val_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(v_mvarId_1888_, v_val_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(lean_object* v_cls_1898_, lean_object* v_msg_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1898_, v_msg_1899_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___boxed(lean_object* v_cls_1908_, lean_object* v_msg_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(v_cls_1908_, v_msg_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
lean_dec(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
return v_res_1917_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_instMonadEIO___redArg();
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(lean_object* v_msg_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v_toApplicative_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_2026_; 
v___x_1933_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0);
v___x_1934_ = l_StateRefT_x27_instMonad___redArg(v___x_1933_);
v_toApplicative_1935_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_2026_ == 0)
{
lean_object* v_unused_2027_; 
v_unused_2027_ = lean_ctor_get(v___x_1934_, 1);
lean_dec(v_unused_2027_);
v___x_1937_ = v___x_1934_;
v_isShared_1938_ = v_isSharedCheck_2026_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_toApplicative_1935_);
lean_dec(v___x_1934_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_2026_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v_toFunctor_1939_; lean_object* v_toSeq_1940_; lean_object* v_toSeqLeft_1941_; lean_object* v_toSeqRight_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_2024_; 
v_toFunctor_1939_ = lean_ctor_get(v_toApplicative_1935_, 0);
v_toSeq_1940_ = lean_ctor_get(v_toApplicative_1935_, 2);
v_toSeqLeft_1941_ = lean_ctor_get(v_toApplicative_1935_, 3);
v_toSeqRight_1942_ = lean_ctor_get(v_toApplicative_1935_, 4);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_toApplicative_1935_);
if (v_isSharedCheck_2024_ == 0)
{
lean_object* v_unused_2025_; 
v_unused_2025_ = lean_ctor_get(v_toApplicative_1935_, 1);
lean_dec(v_unused_2025_);
v___x_1944_ = v_toApplicative_1935_;
v_isShared_1945_ = v_isSharedCheck_2024_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_toSeqRight_1942_);
lean_inc(v_toSeqLeft_1941_);
lean_inc(v_toSeq_1940_);
lean_inc(v_toFunctor_1939_);
lean_dec(v_toApplicative_1935_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_2024_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___f_1946_; lean_object* v___f_1947_; lean_object* v___f_1948_; lean_object* v___f_1949_; lean_object* v___x_1950_; lean_object* v___f_1951_; lean_object* v___f_1952_; lean_object* v___f_1953_; lean_object* v___x_1955_; 
v___f_1946_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1));
v___f_1947_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1939_);
v___f_1948_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1948_, 0, v_toFunctor_1939_);
v___f_1949_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1949_, 0, v_toFunctor_1939_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___f_1948_);
lean_ctor_set(v___x_1950_, 1, v___f_1949_);
v___f_1951_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1951_, 0, v_toSeqRight_1942_);
v___f_1952_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1952_, 0, v_toSeqLeft_1941_);
v___f_1953_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1953_, 0, v_toSeq_1940_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 4, v___f_1951_);
lean_ctor_set(v___x_1944_, 3, v___f_1952_);
lean_ctor_set(v___x_1944_, 2, v___f_1953_);
lean_ctor_set(v___x_1944_, 1, v___f_1946_);
lean_ctor_set(v___x_1944_, 0, v___x_1950_);
v___x_1955_ = v___x_1944_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_1950_);
lean_ctor_set(v_reuseFailAlloc_2023_, 1, v___f_1946_);
lean_ctor_set(v_reuseFailAlloc_2023_, 2, v___f_1953_);
lean_ctor_set(v_reuseFailAlloc_2023_, 3, v___f_1952_);
lean_ctor_set(v_reuseFailAlloc_2023_, 4, v___f_1951_);
v___x_1955_ = v_reuseFailAlloc_2023_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1957_; 
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 1, v___f_1947_);
lean_ctor_set(v___x_1937_, 0, v___x_1955_);
v___x_1957_ = v___x_1937_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v___x_1955_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v___f_1947_);
v___x_1957_ = v_reuseFailAlloc_2022_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
lean_object* v___x_1958_; lean_object* v_toApplicative_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_2020_; 
v___x_1958_ = l_StateRefT_x27_instMonad___redArg(v___x_1957_);
v_toApplicative_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; 
v_unused_2021_ = lean_ctor_get(v___x_1958_, 1);
lean_dec(v_unused_2021_);
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_2020_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_toApplicative_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_2020_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v_toFunctor_1963_; lean_object* v_toSeq_1964_; lean_object* v_toSeqLeft_1965_; lean_object* v_toSeqRight_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_2018_; 
v_toFunctor_1963_ = lean_ctor_get(v_toApplicative_1959_, 0);
v_toSeq_1964_ = lean_ctor_get(v_toApplicative_1959_, 2);
v_toSeqLeft_1965_ = lean_ctor_get(v_toApplicative_1959_, 3);
v_toSeqRight_1966_ = lean_ctor_get(v_toApplicative_1959_, 4);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_toApplicative_1959_);
if (v_isSharedCheck_2018_ == 0)
{
lean_object* v_unused_2019_; 
v_unused_2019_ = lean_ctor_get(v_toApplicative_1959_, 1);
lean_dec(v_unused_2019_);
v___x_1968_ = v_toApplicative_1959_;
v_isShared_1969_ = v_isSharedCheck_2018_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_toSeqRight_1966_);
lean_inc(v_toSeqLeft_1965_);
lean_inc(v_toSeq_1964_);
lean_inc(v_toFunctor_1963_);
lean_dec(v_toApplicative_1959_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_2018_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___f_1970_; lean_object* v___f_1971_; lean_object* v___f_1972_; lean_object* v___f_1973_; lean_object* v___x_1974_; lean_object* v___f_1975_; lean_object* v___f_1976_; lean_object* v___f_1977_; lean_object* v___x_1979_; 
v___f_1970_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3));
v___f_1971_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1963_);
v___f_1972_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1972_, 0, v_toFunctor_1963_);
v___f_1973_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1973_, 0, v_toFunctor_1963_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___f_1972_);
lean_ctor_set(v___x_1974_, 1, v___f_1973_);
v___f_1975_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1975_, 0, v_toSeqRight_1966_);
v___f_1976_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1976_, 0, v_toSeqLeft_1965_);
v___f_1977_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1977_, 0, v_toSeq_1964_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 4, v___f_1975_);
lean_ctor_set(v___x_1968_, 3, v___f_1976_);
lean_ctor_set(v___x_1968_, 2, v___f_1977_);
lean_ctor_set(v___x_1968_, 1, v___f_1970_);
lean_ctor_set(v___x_1968_, 0, v___x_1974_);
v___x_1979_ = v___x_1968_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v___f_1970_);
lean_ctor_set(v_reuseFailAlloc_2017_, 2, v___f_1977_);
lean_ctor_set(v_reuseFailAlloc_2017_, 3, v___f_1976_);
lean_ctor_set(v_reuseFailAlloc_2017_, 4, v___f_1975_);
v___x_1979_ = v_reuseFailAlloc_2017_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1981_; 
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___f_1971_);
lean_ctor_set(v___x_1961_, 0, v___x_1979_);
v___x_1981_ = v___x_1961_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_2016_, 1, v___f_1971_);
v___x_1981_ = v_reuseFailAlloc_2016_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; lean_object* v_toApplicative_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2014_; 
v___x_1982_ = l_StateRefT_x27_instMonad___redArg(v___x_1981_);
v_toApplicative_1983_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v___x_1982_, 1);
lean_dec(v_unused_2015_);
v___x_1985_ = v___x_1982_;
v_isShared_1986_ = v_isSharedCheck_2014_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_toApplicative_1983_);
lean_dec(v___x_1982_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2014_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v_toFunctor_1987_; lean_object* v_toSeq_1988_; lean_object* v_toSeqLeft_1989_; lean_object* v_toSeqRight_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2012_; 
v_toFunctor_1987_ = lean_ctor_get(v_toApplicative_1983_, 0);
v_toSeq_1988_ = lean_ctor_get(v_toApplicative_1983_, 2);
v_toSeqLeft_1989_ = lean_ctor_get(v_toApplicative_1983_, 3);
v_toSeqRight_1990_ = lean_ctor_get(v_toApplicative_1983_, 4);
v_isSharedCheck_2012_ = !lean_is_exclusive(v_toApplicative_1983_);
if (v_isSharedCheck_2012_ == 0)
{
lean_object* v_unused_2013_; 
v_unused_2013_ = lean_ctor_get(v_toApplicative_1983_, 1);
lean_dec(v_unused_2013_);
v___x_1992_ = v_toApplicative_1983_;
v_isShared_1993_ = v_isSharedCheck_2012_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_toSeqRight_1990_);
lean_inc(v_toSeqLeft_1989_);
lean_inc(v_toSeq_1988_);
lean_inc(v_toFunctor_1987_);
lean_dec(v_toApplicative_1983_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2012_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___f_1994_; lean_object* v___f_1995_; lean_object* v___f_1996_; lean_object* v___f_1997_; lean_object* v___x_1998_; lean_object* v___f_1999_; lean_object* v___f_2000_; lean_object* v___f_2001_; lean_object* v___x_2003_; 
v___f_1994_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5));
v___f_1995_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6));
lean_inc_ref(v_toFunctor_1987_);
v___f_1996_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1996_, 0, v_toFunctor_1987_);
v___f_1997_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1997_, 0, v_toFunctor_1987_);
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___f_1996_);
lean_ctor_set(v___x_1998_, 1, v___f_1997_);
v___f_1999_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1999_, 0, v_toSeqRight_1990_);
v___f_2000_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2000_, 0, v_toSeqLeft_1989_);
v___f_2001_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2001_, 0, v_toSeq_1988_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 4, v___f_1999_);
lean_ctor_set(v___x_1992_, 3, v___f_2000_);
lean_ctor_set(v___x_1992_, 2, v___f_2001_);
lean_ctor_set(v___x_1992_, 1, v___f_1994_);
lean_ctor_set(v___x_1992_, 0, v___x_1998_);
v___x_2003_ = v___x_1992_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v___f_1994_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v___f_2001_);
lean_ctor_set(v_reuseFailAlloc_2011_, 3, v___f_2000_);
lean_ctor_set(v_reuseFailAlloc_2011_, 4, v___f_1999_);
v___x_2003_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2005_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 1, v___f_1995_);
lean_ctor_set(v___x_1985_, 0, v___x_2003_);
v___x_2005_ = v___x_1985_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2003_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v___f_1995_);
v___x_2005_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_3782__overap_2008_; lean_object* v___x_2009_; 
v___x_2006_ = lean_box(0);
v___x_2007_ = l_instInhabitedOfMonad___redArg(v___x_2005_, v___x_2006_);
v___x_3782__overap_2008_ = lean_panic_fn_borrowed(v___x_2007_, v_msg_1925_);
lean_dec(v___x_2007_);
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
lean_inc(v___y_1929_);
lean_inc_ref(v___y_1928_);
lean_inc(v___y_1927_);
lean_inc_ref(v___y_1926_);
v___x_2009_ = lean_apply_7(v___x_3782__overap_2008_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, lean_box(0));
return v___x_2009_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___boxed(lean_object* v_msg_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(v_msg_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
lean_dec(v___y_2034_);
lean_dec_ref(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
return v_res_2036_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_2037_, lean_object* v_opt_2038_){
_start:
{
lean_object* v_name_2039_; lean_object* v_defValue_2040_; lean_object* v_map_2041_; lean_object* v___x_2042_; 
v_name_2039_ = lean_ctor_get(v_opt_2038_, 0);
v_defValue_2040_ = lean_ctor_get(v_opt_2038_, 1);
v_map_2041_ = lean_ctor_get(v_opts_2037_, 0);
v___x_2042_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2041_, v_name_2039_);
if (lean_obj_tag(v___x_2042_) == 0)
{
uint8_t v___x_2043_; 
v___x_2043_ = lean_unbox(v_defValue_2040_);
return v___x_2043_;
}
else
{
lean_object* v_val_2044_; 
v_val_2044_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_val_2044_);
lean_dec_ref_known(v___x_2042_, 1);
if (lean_obj_tag(v_val_2044_) == 1)
{
uint8_t v_v_2045_; 
v_v_2045_ = lean_ctor_get_uint8(v_val_2044_, 0);
lean_dec_ref_known(v_val_2044_, 0);
return v_v_2045_;
}
else
{
uint8_t v___x_2046_; 
lean_dec(v_val_2044_);
v___x_2046_ = lean_unbox(v_defValue_2040_);
return v___x_2046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_2047_, lean_object* v_opt_2048_){
_start:
{
uint8_t v_res_2049_; lean_object* v_r_2050_; 
v_res_2049_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(v_opts_2047_, v_opt_2048_);
lean_dec_ref(v_opt_2048_);
lean_dec_ref(v_opts_2047_);
v_r_2050_ = lean_box(v_res_2049_);
return v_r_2050_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_box(1);
v___x_2052_ = l_Lean_MessageData_ofFormat(v___x_2051_);
return v___x_2052_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2));
v___x_2057_ = l_Lean_MessageData_ofFormat(v___x_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(lean_object* v_x_2058_, lean_object* v_x_2059_){
_start:
{
if (lean_obj_tag(v_x_2059_) == 0)
{
return v_x_2058_;
}
else
{
lean_object* v_head_2060_; lean_object* v_tail_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2083_; 
v_head_2060_ = lean_ctor_get(v_x_2059_, 0);
v_tail_2061_ = lean_ctor_get(v_x_2059_, 1);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_x_2059_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2063_ = v_x_2059_;
v_isShared_2064_ = v_isSharedCheck_2083_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_tail_2061_);
lean_inc(v_head_2060_);
lean_dec(v_x_2059_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2083_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v_before_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2081_; 
v_before_2065_ = lean_ctor_get(v_head_2060_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_head_2060_);
if (v_isSharedCheck_2081_ == 0)
{
lean_object* v_unused_2082_; 
v_unused_2082_ = lean_ctor_get(v_head_2060_, 1);
lean_dec(v_unused_2082_);
v___x_2067_ = v_head_2060_;
v_isShared_2068_ = v_isSharedCheck_2081_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_before_2065_);
lean_dec(v_head_2060_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2081_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2069_; lean_object* v___x_2071_; 
v___x_2069_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0);
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 7);
lean_ctor_set(v___x_2067_, 1, v___x_2069_);
lean_ctor_set(v___x_2067_, 0, v_x_2058_);
v___x_2071_ = v___x_2067_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_x_2058_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v___x_2069_);
v___x_2071_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
lean_object* v___x_2072_; lean_object* v___x_2074_; 
v___x_2072_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3);
if (v_isShared_2064_ == 0)
{
lean_ctor_set_tag(v___x_2063_, 7);
lean_ctor_set(v___x_2063_, 1, v___x_2072_);
lean_ctor_set(v___x_2063_, 0, v___x_2071_);
v___x_2074_ = v___x_2063_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = l_Lean_MessageData_ofSyntax(v_before_2065_);
v___x_2076_ = l_Lean_indentD(v___x_2075_);
v___x_2077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2074_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v_x_2058_ = v___x_2077_;
v_x_2059_ = v_tail_2061_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_2088_ = l_Lean_MessageData_ofFormat(v___x_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(lean_object* v_msgData_2089_, lean_object* v_macroStack_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v_toCold_2093_; lean_object* v_options_2094_; lean_object* v___x_2095_; uint8_t v___x_2096_; 
v_toCold_2093_ = lean_ctor_get(v___y_2091_, 0);
v_options_2094_ = lean_ctor_get(v_toCold_2093_, 2);
v___x_2095_ = l_Lean_Elab_pp_macroStack;
v___x_2096_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(v_options_2094_, v___x_2095_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
lean_dec(v_macroStack_2090_);
v___x_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_msgData_2089_);
return v___x_2097_;
}
else
{
if (lean_obj_tag(v_macroStack_2090_) == 0)
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v_msgData_2089_);
return v___x_2098_;
}
else
{
lean_object* v_head_2099_; lean_object* v_after_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2115_; 
v_head_2099_ = lean_ctor_get(v_macroStack_2090_, 0);
lean_inc(v_head_2099_);
v_after_2100_ = lean_ctor_get(v_head_2099_, 1);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_head_2099_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v_head_2099_, 0);
lean_dec(v_unused_2116_);
v___x_2102_ = v_head_2099_;
v_isShared_2103_ = v_isSharedCheck_2115_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_after_2100_);
lean_dec(v_head_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2115_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2106_; 
v___x_2104_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0);
if (v_isShared_2103_ == 0)
{
lean_ctor_set_tag(v___x_2102_, 7);
lean_ctor_set(v___x_2102_, 1, v___x_2104_);
lean_ctor_set(v___x_2102_, 0, v_msgData_2089_);
v___x_2106_ = v___x_2102_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_msgData_2089_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v___x_2104_);
v___x_2106_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v_msgData_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2107_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_2108_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2106_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
v___x_2109_ = l_Lean_MessageData_ofSyntax(v_after_2100_);
v___x_2110_ = l_Lean_indentD(v___x_2109_);
v_msgData_2111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2111_, 0, v___x_2108_);
lean_ctor_set(v_msgData_2111_, 1, v___x_2110_);
v___x_2112_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(v_msgData_2111_, v_macroStack_2090_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_2117_, lean_object* v_macroStack_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_msgData_2117_, v_macroStack_2118_, v___y_2119_);
lean_dec_ref(v___y_2119_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(lean_object* v_msg_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_ref_2130_; lean_object* v_macroStack_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v_a_2134_; lean_object* v___x_2135_; lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2144_; 
v_ref_2130_ = lean_ctor_get(v___y_2127_, 2);
v_macroStack_2131_ = lean_ctor_get(v___y_2123_, 1);
v___x_2132_ = l_Lean_Elab_getBetterRef(v_ref_2130_, v_macroStack_2131_);
v___x_2133_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_2122_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref(v___x_2133_);
lean_inc(v_macroStack_2131_);
v___x_2135_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_a_2134_, v_macroStack_2131_, v___y_2127_);
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2138_ = v___x_2135_;
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2135_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2132_);
lean_ctor_set(v___x_2140_, 1, v_a_2136_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 1);
lean_ctor_set(v___x_2138_, 0, v___x_2140_);
v___x_2142_ = v___x_2138_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v_msg_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
lean_dec(v___y_2151_);
lean_dec_ref(v___y_2150_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
return v_res_2153_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2155_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0));
v___x_2156_ = l_Lean_stringToMessageData(v___x_2155_);
return v___x_2156_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2));
v___x_2159_ = l_Lean_stringToMessageData(v___x_2158_);
return v___x_2159_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7(void){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2163_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6));
v___x_2164_ = lean_unsigned_to_nat(11u);
v___x_2165_ = lean_unsigned_to_nat(122u);
v___x_2166_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5));
v___x_2167_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4));
v___x_2168_ = l_mkPanicMessageWithDecl(v___x_2167_, v___x_2166_, v___x_2165_, v___x_2164_, v___x_2163_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(lean_object* v_constName_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v___x_2185_; lean_object* v_env_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2185_ = lean_st_ref_get(v___y_2175_);
v_env_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc_ref(v_env_2186_);
lean_dec(v___x_2185_);
v___x_2187_ = 0;
lean_inc(v_constName_2169_);
v___x_2188_ = l_Lean_Environment_findAsync_x3f(v_env_2186_, v_constName_2169_, v___x_2187_);
if (lean_obj_tag(v___x_2188_) == 1)
{
lean_object* v_val_2189_; uint8_t v_kind_2190_; 
v_val_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_val_2189_);
lean_dec_ref_known(v___x_2188_, 1);
v_kind_2190_ = lean_ctor_get_uint8(v_val_2189_, sizeof(void*)*3);
if (v_kind_2190_ == 6)
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2189_);
if (lean_obj_tag(v___x_2191_) == 6)
{
lean_object* v_val_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_dec(v_constName_2169_);
v_val_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_val_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
lean_ctor_set_tag(v___x_2194_, 0);
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_val_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
else
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec_ref(v___x_2191_);
v___x_2200_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7);
v___x_2201_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(v___x_2200_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2210_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
if (lean_obj_tag(v_a_2202_) == 0)
{
lean_del_object(v___x_2204_);
goto v___jp_2177_;
}
else
{
lean_object* v_val_2206_; lean_object* v___x_2208_; 
lean_dec(v_constName_2169_);
v_val_2206_ = lean_ctor_get(v_a_2202_, 0);
lean_inc(v_val_2206_);
lean_dec_ref_known(v_a_2202_, 1);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v_val_2206_);
v___x_2208_ = v___x_2204_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_val_2206_);
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
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_dec(v_constName_2169_);
v_a_2211_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2201_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2201_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
}
else
{
lean_dec(v_val_2189_);
goto v___jp_2177_;
}
}
else
{
lean_dec(v___x_2188_);
goto v___jp_2177_;
}
v___jp_2177_:
{
lean_object* v___x_2178_; uint8_t v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2178_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_2179_ = 0;
v___x_2180_ = l_Lean_MessageData_ofConstName(v_constName_2169_, v___x_2179_);
v___x_2181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2178_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3);
v___x_2183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2181_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v___x_2183_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
return v___x_2184_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___boxed(lean_object* v_constName_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(v_constName_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(lean_object* v_a_2228_, lean_object* v_infos_2229_, lean_object* v_numParams_2230_, lean_object* v_as_x27_2231_, lean_object* v_b_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
if (lean_obj_tag(v_as_x27_2231_) == 0)
{
lean_object* v___x_2240_; 
lean_dec(v_numParams_2230_);
lean_dec_ref(v_a_2228_);
v___x_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2240_, 0, v_b_2232_);
return v___x_2240_;
}
else
{
lean_object* v_head_2241_; lean_object* v_tail_2242_; lean_object* v_array_2243_; lean_object* v_start_2244_; lean_object* v_stop_2245_; uint8_t v___x_2246_; 
v_head_2241_ = lean_ctor_get(v_as_x27_2231_, 0);
v_tail_2242_ = lean_ctor_get(v_as_x27_2231_, 1);
v_array_2243_ = lean_ctor_get(v_b_2232_, 0);
v_start_2244_ = lean_ctor_get(v_b_2232_, 1);
v_stop_2245_ = lean_ctor_get(v_b_2232_, 2);
v___x_2246_ = lean_nat_dec_lt(v_start_2244_, v_stop_2245_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; 
lean_dec(v_numParams_2230_);
lean_dec_ref(v_a_2228_);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v_b_2232_);
return v___x_2247_;
}
else
{
lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2279_; 
lean_inc(v_stop_2245_);
lean_inc(v_start_2244_);
lean_inc_ref(v_array_2243_);
v_isSharedCheck_2279_ = !lean_is_exclusive(v_b_2232_);
if (v_isSharedCheck_2279_ == 0)
{
lean_object* v_unused_2280_; lean_object* v_unused_2281_; lean_object* v_unused_2282_; 
v_unused_2280_ = lean_ctor_get(v_b_2232_, 2);
lean_dec(v_unused_2280_);
v_unused_2281_ = lean_ctor_get(v_b_2232_, 1);
lean_dec(v_unused_2281_);
v_unused_2282_ = lean_ctor_get(v_b_2232_, 0);
lean_dec(v_unused_2282_);
v___x_2249_ = v_b_2232_;
v_isShared_2250_ = v_isSharedCheck_2279_;
goto v_resetjp_2248_;
}
else
{
lean_dec(v_b_2232_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2279_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2251_ = lean_array_fget(v_array_2243_, v_start_2244_);
v___x_2252_ = lean_unsigned_to_nat(1u);
v___x_2253_ = lean_nat_add(v_start_2244_, v___x_2252_);
lean_dec(v_start_2244_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2253_);
v___x_2255_ = v___x_2249_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_array_2243_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2278_, 2, v_stop_2245_);
v___x_2255_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2256_; 
lean_inc(v_head_2241_);
v___x_2256_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(v_head_2241_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_toConstantVal_2257_; lean_object* v_a_2258_; lean_object* v_name_2259_; lean_object* v___x_2260_; 
v_toConstantVal_2257_ = lean_ctor_get(v_a_2228_, 0);
v_a_2258_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v___x_2256_, 1);
v_name_2259_ = lean_ctor_get(v_toConstantVal_2257_, 0);
lean_inc(v_name_2259_);
lean_inc(v_numParams_2230_);
v___x_2260_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(v_infos_2229_, v___x_2251_, v_numParams_2230_, v_name_2259_, v_a_2258_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_dec_ref_known(v___x_2260_, 1);
v_as_x27_2231_ = v_tail_2242_;
v_b_2232_ = v___x_2255_;
goto _start;
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2269_; 
lean_dec_ref(v___x_2255_);
lean_dec(v_numParams_2230_);
lean_dec_ref(v_a_2228_);
v_a_2262_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2264_ = v___x_2260_;
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v___x_2260_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2262_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2277_; 
lean_dec_ref(v___x_2255_);
lean_dec(v___x_2251_);
lean_dec(v_numParams_2230_);
lean_dec_ref(v_a_2228_);
v_a_2270_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2272_ = v___x_2256_;
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2256_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2273_ == 0)
{
v___x_2275_ = v___x_2272_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2270_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg___boxed(lean_object* v_a_2283_, lean_object* v_infos_2284_, lean_object* v_numParams_2285_, lean_object* v_as_x27_2286_, lean_object* v_b_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2283_, v_infos_2284_, v_numParams_2285_, v_as_x27_2286_, v_b_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v_as_x27_2286_);
lean_dec_ref(v_infos_2284_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(lean_object* v_infos_2296_, lean_object* v_numParams_2297_, lean_object* v_as_2298_, size_t v_sz_2299_, size_t v_i_2300_, lean_object* v_b_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
uint8_t v___x_2309_; 
v___x_2309_ = lean_usize_dec_lt(v_i_2300_, v_sz_2299_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; 
lean_dec(v_numParams_2297_);
v___x_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2310_, 0, v_b_2301_);
return v___x_2310_;
}
else
{
lean_object* v_array_2311_; lean_object* v_start_2312_; lean_object* v_stop_2313_; uint8_t v___x_2314_; 
v_array_2311_ = lean_ctor_get(v_b_2301_, 0);
v_start_2312_ = lean_ctor_get(v_b_2301_, 1);
v_stop_2313_ = lean_ctor_get(v_b_2301_, 2);
v___x_2314_ = lean_nat_dec_lt(v_start_2312_, v_stop_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; 
lean_dec(v_numParams_2297_);
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v_b_2301_);
return v___x_2315_;
}
else
{
lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2343_; 
lean_inc(v_stop_2313_);
lean_inc(v_start_2312_);
lean_inc_ref(v_array_2311_);
v_isSharedCheck_2343_ = !lean_is_exclusive(v_b_2301_);
if (v_isSharedCheck_2343_ == 0)
{
lean_object* v_unused_2344_; lean_object* v_unused_2345_; lean_object* v_unused_2346_; 
v_unused_2344_ = lean_ctor_get(v_b_2301_, 2);
lean_dec(v_unused_2344_);
v_unused_2345_ = lean_ctor_get(v_b_2301_, 1);
lean_dec(v_unused_2345_);
v_unused_2346_ = lean_ctor_get(v_b_2301_, 0);
lean_dec(v_unused_2346_);
v___x_2317_ = v_b_2301_;
v_isShared_2318_ = v_isSharedCheck_2343_;
goto v_resetjp_2316_;
}
else
{
lean_dec(v_b_2301_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2343_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v_ctorSyntax_2320_; lean_object* v_a_2321_; lean_object* v_ctors_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
v___x_2319_ = lean_array_fget_borrowed(v_array_2311_, v_start_2312_);
v_ctorSyntax_2320_ = lean_ctor_get(v___x_2319_, 4);
lean_inc_ref(v_ctorSyntax_2320_);
v_a_2321_ = lean_array_uget_borrowed(v_as_2298_, v_i_2300_);
v_ctors_2322_ = lean_ctor_get(v_a_2321_, 4);
v___x_2323_ = lean_array_get_size(v_ctorSyntax_2320_);
v___x_2324_ = lean_unsigned_to_nat(1u);
v___x_2325_ = lean_nat_add(v_start_2312_, v___x_2324_);
lean_dec(v_start_2312_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 1, v___x_2325_);
v___x_2327_ = v___x_2317_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_array_2311_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2342_, 2, v_stop_2313_);
v___x_2327_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2328_ = lean_unsigned_to_nat(0u);
v___x_2329_ = l_Array_toSubarray___redArg(v_ctorSyntax_2320_, v___x_2328_, v___x_2323_);
lean_inc(v_numParams_2297_);
lean_inc(v_a_2321_);
v___x_2330_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2321_, v_infos_2296_, v_numParams_2297_, v_ctors_2322_, v___x_2329_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
if (lean_obj_tag(v___x_2330_) == 0)
{
size_t v___x_2331_; size_t v___x_2332_; 
lean_dec_ref_known(v___x_2330_, 1);
v___x_2331_ = ((size_t)1ULL);
v___x_2332_ = lean_usize_add(v_i_2300_, v___x_2331_);
v_i_2300_ = v___x_2332_;
v_b_2301_ = v___x_2327_;
goto _start;
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
lean_dec_ref(v___x_2327_);
lean_dec(v_numParams_2297_);
v_a_2334_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2336_ = v___x_2330_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2330_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_a_2334_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2___boxed(lean_object* v_infos_2347_, lean_object* v_numParams_2348_, lean_object* v_as_2349_, lean_object* v_sz_2350_, lean_object* v_i_2351_, lean_object* v_b_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
size_t v_sz_boxed_2360_; size_t v_i_boxed_2361_; lean_object* v_res_2362_; 
v_sz_boxed_2360_ = lean_unbox_usize(v_sz_2350_);
lean_dec(v_sz_2350_);
v_i_boxed_2361_ = lean_unbox_usize(v_i_2351_);
lean_dec(v_i_2351_);
v_res_2362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(v_infos_2347_, v_numParams_2348_, v_as_2349_, v_sz_boxed_2360_, v_i_boxed_2361_, v_b_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec_ref(v_as_2349_);
lean_dec_ref(v_infos_2347_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(lean_object* v_numParams_2363_, lean_object* v_infos_2364_, lean_object* v_coinductiveElabData_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; size_t v_sz_2376_; size_t v___x_2377_; lean_object* v___x_2378_; 
v___x_2373_ = lean_unsigned_to_nat(0u);
v___x_2374_ = lean_array_get_size(v_coinductiveElabData_2365_);
v___x_2375_ = l_Array_toSubarray___redArg(v_coinductiveElabData_2365_, v___x_2373_, v___x_2374_);
v_sz_2376_ = lean_array_size(v_infos_2364_);
v___x_2377_ = ((size_t)0ULL);
v___x_2378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(v_infos_2364_, v_numParams_2363_, v_infos_2364_, v_sz_2376_, v___x_2377_, v___x_2375_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2386_; 
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2386_ == 0)
{
lean_object* v_unused_2387_; 
v_unused_2387_ = lean_ctor_get(v___x_2378_, 0);
lean_dec(v_unused_2387_);
v___x_2380_ = v___x_2378_;
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
else
{
lean_dec(v___x_2378_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2382_; lean_object* v___x_2384_; 
v___x_2382_ = lean_box(0);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 0, v___x_2382_);
v___x_2384_ = v___x_2380_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2382_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_a_2388_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2378_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2378_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors___boxed(lean_object* v_numParams_2396_, lean_object* v_infos_2397_, lean_object* v_coinductiveElabData_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(v_numParams_2396_, v_infos_2397_, v_coinductiveElabData_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_);
lean_dec(v_a_2404_);
lean_dec_ref(v_a_2403_);
lean_dec(v_a_2402_);
lean_dec_ref(v_a_2401_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec_ref(v_infos_2397_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(lean_object* v_a_2407_, lean_object* v_infos_2408_, lean_object* v_numParams_2409_, lean_object* v_as_2410_, lean_object* v_as_x27_2411_, lean_object* v_b_2412_, lean_object* v_a_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2407_, v_infos_2408_, v_numParams_2409_, v_as_x27_2411_, v_b_2412_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___boxed(lean_object* v_a_2422_, lean_object* v_infos_2423_, lean_object* v_numParams_2424_, lean_object* v_as_2425_, lean_object* v_as_x27_2426_, lean_object* v_b_2427_, lean_object* v_a_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(v_a_2422_, v_infos_2423_, v_numParams_2424_, v_as_2425_, v_as_x27_2426_, v_b_2427_, v_a_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v_as_x27_2426_);
lean_dec(v_as_2425_);
lean_dec_ref(v_infos_2423_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(lean_object* v_00_u03b1_2437_, lean_object* v_msg_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v_msg_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2447_, lean_object* v_msg_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(v_00_u03b1_2447_, v_msg_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(lean_object* v_msgData_2457_, lean_object* v_macroStack_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_msgData_2457_, v_macroStack_2458_, v___y_2463_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_2467_, lean_object* v_macroStack_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(v_msgData_2467_, v_macroStack_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(lean_object* v_mvarId_2477_, lean_object* v_x_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2477_, v_x_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2484_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2484_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2500_; 
v_a_2493_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2495_ = v___x_2484_;
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_a_2493_);
lean_dec(v___x_2484_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v___x_2498_; 
if (v_isShared_2496_ == 0)
{
v___x_2498_ = v___x_2495_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_a_2493_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg___boxed(lean_object* v_mvarId_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_mvarId_2501_, v_x_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(lean_object* v_00_u03b1_2509_, lean_object* v_mvarId_2510_, lean_object* v_x_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_mvarId_2510_, v_x_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___boxed(lean_object* v_00_u03b1_2518_, lean_object* v_mvarId_2519_, lean_object* v_x_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(v_00_u03b1_2518_, v_mvarId_2519_, v_x_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(lean_object* v_type_2527_, lean_object* v_maxFVars_x3f_2528_, lean_object* v_k_2529_, uint8_t v_cleanupAnnotations_2530_, uint8_t v_whnfType_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v___f_2537_; lean_object* v___x_2538_; 
v___f_2537_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2537_, 0, v_k_2529_);
v___x_2538_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_2527_, v_maxFVars_x3f_2528_, v___f_2537_, v_cleanupAnnotations_2530_, v_whnfType_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_a_2547_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2538_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2538_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg___boxed(lean_object* v_type_2555_, lean_object* v_maxFVars_x3f_2556_, lean_object* v_k_2557_, lean_object* v_cleanupAnnotations_2558_, lean_object* v_whnfType_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2565_; uint8_t v_whnfType_boxed_2566_; lean_object* v_res_2567_; 
v_cleanupAnnotations_boxed_2565_ = lean_unbox(v_cleanupAnnotations_2558_);
v_whnfType_boxed_2566_ = lean_unbox(v_whnfType_2559_);
v_res_2567_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_2555_, v_maxFVars_x3f_2556_, v_k_2557_, v_cleanupAnnotations_boxed_2565_, v_whnfType_boxed_2566_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(lean_object* v_00_u03b1_2568_, lean_object* v_type_2569_, lean_object* v_maxFVars_x3f_2570_, lean_object* v_k_2571_, uint8_t v_cleanupAnnotations_2572_, uint8_t v_whnfType_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_2569_, v_maxFVars_x3f_2570_, v_k_2571_, v_cleanupAnnotations_2572_, v_whnfType_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___boxed(lean_object* v_00_u03b1_2580_, lean_object* v_type_2581_, lean_object* v_maxFVars_x3f_2582_, lean_object* v_k_2583_, lean_object* v_cleanupAnnotations_2584_, lean_object* v_whnfType_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2591_; uint8_t v_whnfType_boxed_2592_; lean_object* v_res_2593_; 
v_cleanupAnnotations_boxed_2591_ = lean_unbox(v_cleanupAnnotations_2584_);
v_whnfType_boxed_2592_ = lean_unbox(v_whnfType_2585_);
v_res_2593_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(v_00_u03b1_2580_, v_type_2581_, v_maxFVars_x3f_2582_, v_k_2583_, v_cleanupAnnotations_boxed_2591_, v_whnfType_boxed_2592_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(lean_object* v_ref_2594_, lean_object* v_msg_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_toCold_2601_; lean_object* v_currRecDepth_2602_; lean_object* v_ref_2603_; uint8_t v_diag_2604_; uint8_t v_suppressElabErrors_2605_; lean_object* v_ref_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v_toCold_2601_ = lean_ctor_get(v___y_2598_, 0);
v_currRecDepth_2602_ = lean_ctor_get(v___y_2598_, 1);
v_ref_2603_ = lean_ctor_get(v___y_2598_, 2);
v_diag_2604_ = lean_ctor_get_uint8(v___y_2598_, sizeof(void*)*3);
v_suppressElabErrors_2605_ = lean_ctor_get_uint8(v___y_2598_, sizeof(void*)*3 + 1);
v_ref_2606_ = l_Lean_replaceRef(v_ref_2594_, v_ref_2603_);
lean_inc(v_currRecDepth_2602_);
lean_inc_ref(v_toCold_2601_);
v___x_2607_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2607_, 0, v_toCold_2601_);
lean_ctor_set(v___x_2607_, 1, v_currRecDepth_2602_);
lean_ctor_set(v___x_2607_, 2, v_ref_2606_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*3, v_diag_2604_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*3 + 1, v_suppressElabErrors_2605_);
v___x_2608_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_2595_, v___y_2596_, v___y_2597_, v___x_2607_, v___y_2599_);
lean_dec_ref_known(v___x_2607_, 3);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg___boxed(lean_object* v_ref_2609_, lean_object* v_msg_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_2609_, v_msg_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec(v_ref_2609_);
return v_res_2616_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2617_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0);
v___x_2619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
return v___x_2619_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1);
v___x_2621_ = lean_unsigned_to_nat(0u);
v___x_2622_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2621_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
lean_ctor_set(v___x_2622_, 2, v___x_2621_);
lean_ctor_set(v___x_2622_, 3, v___x_2621_);
lean_ctor_set(v___x_2622_, 4, v___x_2620_);
lean_ctor_set(v___x_2622_, 5, v___x_2620_);
lean_ctor_set(v___x_2622_, 6, v___x_2620_);
lean_ctor_set(v___x_2622_, 7, v___x_2620_);
lean_ctor_set(v___x_2622_, 8, v___x_2620_);
lean_ctor_set(v___x_2622_, 9, v___x_2620_);
lean_ctor_set(v___x_2622_, 10, v___x_2620_);
return v___x_2622_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = lean_unsigned_to_nat(32u);
v___x_2624_ = lean_mk_empty_array_with_capacity(v___x_2623_);
v___x_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
return v___x_2625_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4(void){
_start:
{
size_t v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2626_ = ((size_t)5ULL);
v___x_2627_ = lean_unsigned_to_nat(0u);
v___x_2628_ = lean_unsigned_to_nat(32u);
v___x_2629_ = lean_mk_empty_array_with_capacity(v___x_2628_);
v___x_2630_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3);
v___x_2631_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
lean_ctor_set(v___x_2631_, 1, v___x_2629_);
lean_ctor_set(v___x_2631_, 2, v___x_2627_);
lean_ctor_set(v___x_2631_, 3, v___x_2627_);
lean_ctor_set_usize(v___x_2631_, 4, v___x_2626_);
return v___x_2631_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2632_ = lean_box(1);
v___x_2633_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4);
v___x_2634_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1);
v___x_2635_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
lean_ctor_set(v___x_2635_, 1, v___x_2633_);
lean_ctor_set(v___x_2635_, 2, v___x_2632_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6));
v___x_2638_ = l_Lean_stringToMessageData(v___x_2637_);
return v___x_2638_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8));
v___x_2641_ = l_Lean_stringToMessageData(v___x_2640_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11(void){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10));
v___x_2644_ = l_Lean_stringToMessageData(v___x_2643_);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2646_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12));
v___x_2647_ = l_Lean_stringToMessageData(v___x_2646_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14));
v___x_2650_ = l_Lean_stringToMessageData(v___x_2649_);
return v___x_2650_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16));
v___x_2653_ = l_Lean_stringToMessageData(v___x_2652_);
return v___x_2653_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19(void){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18));
v___x_2656_ = l_Lean_stringToMessageData(v___x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(lean_object* v_msg_2657_, lean_object* v_declHint_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v_env_2663_; uint8_t v___x_2664_; 
v___x_2661_ = l_Lean_instInhabitedName;
v___x_2662_ = lean_st_ref_get(v___y_2659_);
v_env_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc_ref(v_env_2663_);
lean_dec(v___x_2662_);
v___x_2664_ = l_Lean_Name_isAnonymous(v_declHint_2658_);
if (v___x_2664_ == 0)
{
uint8_t v_isExporting_2665_; 
v_isExporting_2665_ = lean_ctor_get_uint8(v_env_2663_, sizeof(void*)*8);
if (v_isExporting_2665_ == 0)
{
lean_object* v___x_2666_; 
lean_dec_ref(v_env_2663_);
lean_dec(v_declHint_2658_);
v___x_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2666_, 0, v_msg_2657_);
return v___x_2666_;
}
else
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
lean_inc_ref(v_env_2663_);
v___x_2667_ = l_Lean_Environment_setExporting(v_env_2663_, v___x_2664_);
lean_inc(v_declHint_2658_);
lean_inc_ref(v___x_2667_);
v___x_2668_ = l_Lean_Environment_contains(v___x_2667_, v_declHint_2658_, v_isExporting_2665_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; 
lean_dec_ref(v___x_2667_);
lean_dec_ref(v_env_2663_);
lean_dec(v_declHint_2658_);
v___x_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2669_, 0, v_msg_2657_);
return v___x_2669_;
}
else
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v_c_2675_; lean_object* v___x_2676_; 
v___x_2670_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2);
v___x_2671_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5);
v___x_2672_ = l_Lean_Options_empty;
v___x_2673_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2667_);
lean_ctor_set(v___x_2673_, 1, v___x_2670_);
lean_ctor_set(v___x_2673_, 2, v___x_2671_);
lean_ctor_set(v___x_2673_, 3, v___x_2672_);
lean_inc(v_declHint_2658_);
v___x_2674_ = l_Lean_MessageData_ofConstName(v_declHint_2658_, v___x_2664_);
v_c_2675_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2675_, 0, v___x_2673_);
lean_ctor_set(v_c_2675_, 1, v___x_2674_);
v___x_2676_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2663_, v_declHint_2658_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_dec_ref(v_env_2663_);
lean_dec(v_declHint_2658_);
v___x_2677_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7);
v___x_2678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v_c_2675_);
v___x_2679_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9);
v___x_2680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
v___x_2681_ = l_Lean_MessageData_note(v___x_2680_);
v___x_2682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2682_, 0, v_msg_2657_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
return v___x_2683_;
}
else
{
lean_object* v_val_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2718_; 
v_val_2684_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2686_ = v___x_2676_;
v_isShared_2687_ = v_isSharedCheck_2718_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_val_2684_);
lean_dec(v___x_2676_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2718_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v_mod_2690_; uint8_t v___x_2691_; 
v___x_2688_ = l_Lean_Environment_header(v_env_2663_);
lean_dec_ref(v_env_2663_);
v___x_2689_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2688_);
lean_dec_ref(v___x_2688_);
v_mod_2690_ = lean_array_get(v___x_2661_, v___x_2689_, v_val_2684_);
lean_dec(v_val_2684_);
lean_dec_ref(v___x_2689_);
v___x_2691_ = l_Lean_isPrivateName(v_declHint_2658_);
lean_dec(v_declHint_2658_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2692_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11);
v___x_2693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
lean_ctor_set(v___x_2693_, 1, v_c_2675_);
v___x_2694_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13);
v___x_2695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2693_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
v___x_2696_ = l_Lean_MessageData_ofName(v_mod_2690_);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15);
v___x_2699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = l_Lean_MessageData_note(v___x_2699_);
v___x_2701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2701_, 0, v_msg_2657_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
if (v_isShared_2687_ == 0)
{
lean_ctor_set_tag(v___x_2686_, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2701_);
v___x_2703_ = v___x_2686_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2705_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7);
v___x_2706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
lean_ctor_set(v___x_2706_, 1, v_c_2675_);
v___x_2707_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17);
v___x_2708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = l_Lean_MessageData_ofName(v_mod_2690_);
v___x_2710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2708_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19);
v___x_2712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = l_Lean_MessageData_note(v___x_2712_);
v___x_2714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2714_, 0, v_msg_2657_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
if (v_isShared_2687_ == 0)
{
lean_ctor_set_tag(v___x_2686_, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2714_);
v___x_2716_ = v___x_2686_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2719_; 
lean_dec_ref(v_env_2663_);
lean_dec(v_declHint_2658_);
v___x_2719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_msg_2657_);
return v___x_2719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___boxed(lean_object* v_msg_2720_, lean_object* v_declHint_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_2720_, v_declHint_2721_, v___y_2722_);
lean_dec(v___y_2722_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(lean_object* v_msg_2725_, lean_object* v_declHint_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v___x_2732_; lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2742_; 
v___x_2732_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_2725_, v_declHint_2726_, v___y_2730_);
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = l_Lean_unknownIdentifierMessageTag;
v___x_2738_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
lean_ctor_set(v___x_2738_, 1, v_a_2733_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11___boxed(lean_object* v_msg_2743_, lean_object* v_declHint_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(v_msg_2743_, v_declHint_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(lean_object* v_ref_2751_, lean_object* v_msg_2752_, lean_object* v_declHint_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v___x_2759_; lean_object* v_a_2760_; lean_object* v___x_2761_; 
v___x_2759_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(v_msg_2752_, v_declHint_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_);
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2760_);
lean_dec_ref(v___x_2759_);
v___x_2761_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_2751_, v_a_2760_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_ref_2762_, lean_object* v_msg_2763_, lean_object* v_declHint_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_2762_, v_msg_2763_, v_declHint_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v_ref_2762_);
return v_res_2770_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0));
v___x_2773_ = l_Lean_stringToMessageData(v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(lean_object* v_ref_2774_, lean_object* v_constName_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___x_2781_; uint8_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2781_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_2782_ = 0;
lean_inc(v_constName_2775_);
v___x_2783_ = l_Lean_MessageData_ofConstName(v_constName_2775_, v___x_2782_);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2781_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_2786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2784_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_2774_, v___x_2786_, v_constName_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_ref_2788_, lean_object* v_constName_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_2788_, v_constName_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v_ref_2788_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(lean_object* v_constName_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_){
_start:
{
lean_object* v_ref_2802_; lean_object* v___x_2803_; 
v_ref_2802_ = lean_ctor_get(v___y_2799_, 2);
v___x_2803_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_2802_, v_constName_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg___boxed(lean_object* v_constName_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(lean_object* v_constName_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v_env_2818_; uint8_t v___x_2819_; lean_object* v___x_2820_; 
v___x_2817_ = lean_st_ref_get(v___y_2815_);
v_env_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc_ref(v_env_2818_);
lean_dec(v___x_2817_);
v___x_2819_ = 0;
lean_inc(v_constName_2811_);
v___x_2820_ = l_Lean_Environment_find_x3f(v_env_2818_, v_constName_2811_, v___x_2819_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_);
return v___x_2821_;
}
else
{
lean_object* v_val_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2829_; 
lean_dec(v_constName_2811_);
v_val_2822_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2824_ = v___x_2820_;
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_val_2822_);
lean_dec(v___x_2820_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2827_; 
if (v_isShared_2825_ == 0)
{
lean_ctor_set_tag(v___x_2824_, 0);
v___x_2827_ = v___x_2824_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_val_2822_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2___boxed(lean_object* v_constName_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(v_constName_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
return v_res_2836_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(lean_object* v_e_2837_, lean_object* v_as_2838_, size_t v_i_2839_, size_t v_stop_2840_){
_start:
{
uint8_t v___x_2841_; 
v___x_2841_ = lean_usize_dec_eq(v_i_2839_, v_stop_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; uint8_t v___x_2843_; 
v___x_2842_ = lean_array_uget_borrowed(v_as_2838_, v_i_2839_);
v___x_2843_ = l_Lean_Expr_isAppOf(v_e_2837_, v___x_2842_);
if (v___x_2843_ == 0)
{
size_t v___x_2844_; size_t v___x_2845_; 
v___x_2844_ = ((size_t)1ULL);
v___x_2845_ = lean_usize_add(v_i_2839_, v___x_2844_);
v_i_2839_ = v___x_2845_;
goto _start;
}
else
{
return v___x_2843_;
}
}
else
{
uint8_t v___x_2847_; 
v___x_2847_ = 0;
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1___boxed(lean_object* v_e_2848_, lean_object* v_as_2849_, lean_object* v_i_2850_, lean_object* v_stop_2851_){
_start:
{
size_t v_i_boxed_2852_; size_t v_stop_boxed_2853_; uint8_t v_res_2854_; lean_object* v_r_2855_; 
v_i_boxed_2852_ = lean_unbox_usize(v_i_2850_);
lean_dec(v_i_2850_);
v_stop_boxed_2853_ = lean_unbox_usize(v_stop_2851_);
lean_dec(v_stop_2851_);
v_res_2854_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(v_e_2848_, v_as_2849_, v_i_boxed_2852_, v_stop_boxed_2853_);
lean_dec_ref(v_as_2849_);
lean_dec_ref(v_e_2848_);
v_r_2855_ = lean_box(v_res_2854_);
return v_r_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(lean_object* v_numParams_2856_, lean_object* v_name_2857_, lean_object* v___y_2858_, lean_object* v___x_2859_, lean_object* v_levels_2860_, lean_object* v_params_2861_, lean_object* v_e_2862_){
_start:
{
uint8_t v___x_2863_; 
v___x_2863_ = l_Lean_Expr_isApp(v_e_2862_);
if (v___x_2863_ == 0)
{
lean_object* v___x_2864_; 
lean_dec_ref(v_e_2862_);
lean_dec_ref(v_params_2861_);
lean_dec(v_levels_2860_);
lean_dec(v_name_2857_);
lean_dec(v_numParams_2856_);
v___x_2864_ = lean_box(0);
return v___x_2864_;
}
else
{
lean_object* v_dummy_2865_; lean_object* v_nargs_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v_dummy_2865_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1);
v_nargs_2866_ = l_Lean_Expr_getAppNumArgs(v_e_2862_);
lean_inc(v_nargs_2866_);
v___x_2867_ = lean_mk_array(v_nargs_2866_, v_dummy_2865_);
v___x_2868_ = lean_unsigned_to_nat(1u);
v___x_2869_ = lean_nat_sub(v_nargs_2866_, v___x_2868_);
lean_dec(v_nargs_2866_);
lean_inc_ref(v_e_2862_);
v___x_2870_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2862_, v___x_2867_, v___x_2869_);
v___x_2871_ = lean_array_get_size(v___x_2870_);
v___x_2872_ = l_Array_toSubarray___redArg(v___x_2870_, v_numParams_2856_, v___x_2871_);
v___x_2873_ = l_Lean_Expr_isAppOf(v_e_2862_, v_name_2857_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; uint8_t v___x_2875_; 
lean_dec(v_name_2857_);
v___x_2874_ = lean_array_get_size(v___y_2858_);
v___x_2875_ = lean_nat_dec_lt(v___x_2859_, v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; 
lean_dec_ref(v___x_2872_);
lean_dec_ref(v_e_2862_);
lean_dec_ref(v_params_2861_);
lean_dec(v_levels_2860_);
v___x_2876_ = lean_box(0);
return v___x_2876_;
}
else
{
if (v___x_2875_ == 0)
{
lean_object* v___x_2877_; 
lean_dec_ref(v___x_2872_);
lean_dec_ref(v_e_2862_);
lean_dec_ref(v_params_2861_);
lean_dec(v_levels_2860_);
v___x_2877_ = lean_box(0);
return v___x_2877_;
}
else
{
size_t v___x_2878_; size_t v___x_2879_; uint8_t v___x_2880_; 
v___x_2878_ = ((size_t)0ULL);
v___x_2879_ = lean_usize_of_nat(v___x_2874_);
v___x_2880_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(v_e_2862_, v___y_2858_, v___x_2878_, v___x_2879_);
if (v___x_2880_ == 0)
{
lean_object* v___x_2881_; 
lean_dec_ref(v___x_2872_);
lean_dec_ref(v_e_2862_);
lean_dec_ref(v_params_2861_);
lean_dec(v_levels_2860_);
v___x_2881_ = lean_box(0);
return v___x_2881_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2882_ = l_Lean_Expr_getAppFn(v_e_2862_);
lean_dec_ref(v_e_2862_);
v___x_2883_ = l_Lean_Expr_constName(v___x_2882_);
lean_dec_ref(v___x_2882_);
v___x_2884_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v___x_2883_);
v___x_2885_ = l_Lean_mkConst(v___x_2884_, v_levels_2860_);
v___x_2886_ = l_Subarray_copy___redArg(v___x_2872_);
v___x_2887_ = l_Array_append___redArg(v_params_2861_, v___x_2886_);
lean_dec_ref(v___x_2886_);
v___x_2888_ = l_Lean_mkAppN(v___x_2885_, v___x_2887_);
lean_dec_ref(v___x_2887_);
v___x_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2888_);
return v___x_2889_;
}
}
}
}
else
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
lean_dec_ref(v_e_2862_);
v___x_2890_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_2857_);
v___x_2891_ = l_Lean_mkConst(v___x_2890_, v_levels_2860_);
v___x_2892_ = l_Subarray_copy___redArg(v___x_2872_);
v___x_2893_ = l_Array_append___redArg(v_params_2861_, v___x_2892_);
lean_dec_ref(v___x_2892_);
v___x_2894_ = l_Lean_mkAppN(v___x_2891_, v___x_2893_);
lean_dec_ref(v___x_2893_);
v___x_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2894_);
return v___x_2895_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed(lean_object* v_numParams_2896_, lean_object* v_name_2897_, lean_object* v___y_2898_, lean_object* v___x_2899_, lean_object* v_levels_2900_, lean_object* v_params_2901_, lean_object* v_e_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(v_numParams_2896_, v_name_2897_, v___y_2898_, v___x_2899_, v_levels_2900_, v_params_2901_, v_e_2902_);
lean_dec(v___x_2899_);
lean_dec_ref(v___y_2898_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(lean_object* v_eqProof_2904_, lean_object* v___x_2905_, lean_object* v_eNew_2906_, lean_object* v_snd_2907_, lean_object* v___x_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v___x_2914_; 
v___x_2914_ = l_Lean_Meta_mkEqMP(v_eqProof_2904_, v___x_2905_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
v___x_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2916_, 0, v_eNew_2906_);
v___x_2917_ = lean_box(0);
v___x_2918_ = l_Lean_MVarId_replace(v_snd_2907_, v___x_2908_, v_a_2915_, v___x_2916_, v___x_2917_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
return v___x_2918_;
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v___x_2908_);
lean_dec(v_snd_2907_);
lean_dec_ref(v_eNew_2906_);
v_a_2919_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2914_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2914_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed(lean_object* v_eqProof_2927_, lean_object* v___x_2928_, lean_object* v_eNew_2929_, lean_object* v_snd_2930_, lean_object* v___x_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v_res_2937_; 
v_res_2937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(v_eqProof_2927_, v___x_2928_, v_eNew_2929_, v_snd_2930_, v___x_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
return v_res_2937_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2939_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0));
v___x_2940_ = l_Lean_stringToMessageData(v___x_2939_);
return v___x_2940_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10(void){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9));
v___x_2963_ = l_Lean_stringToMessageData(v___x_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(lean_object* v___x_2964_, lean_object* v___x_2965_, lean_object* v___x_2966_, uint8_t v___x_2967_, lean_object* v___x_2968_, lean_object* v___x_2969_, uint8_t v___x_2970_, lean_object* v_params_2971_, lean_object* v_args_2972_, lean_object* v_indices_2973_, uint8_t v___x_2974_, lean_object* v_a_2975_, lean_object* v___x_2976_, lean_object* v___x_2977_, lean_object* v___f_2978_, lean_object* v___x_2979_, lean_object* v_targetArgs_2980_, lean_object* v_x_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = lean_array_get_size(v_targetArgs_2980_);
v___x_2988_ = lean_nat_dec_eq(v___x_2987_, v___x_2964_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2969_);
lean_dec(v___x_2968_);
lean_dec_ref(v___x_2966_);
v___x_2989_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1);
v___x_2990_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_2989_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
return v___x_2990_;
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_array_fget_borrowed(v_targetArgs_2980_, v___x_2965_);
lean_inc(v___y_2985_);
lean_inc_ref(v___y_2984_);
lean_inc(v___y_2983_);
lean_inc_ref(v___y_2982_);
lean_inc_ref(v___x_2966_);
v___x_2992_ = lean_infer_type(v___x_2966_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v_a_2993_; 
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
lean_inc(v_a_2993_);
lean_dec_ref_known(v___x_2992_, 1);
if (lean_obj_tag(v_a_2993_) == 7)
{
lean_object* v_binderType_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v_binderType_2994_ = lean_ctor_get(v_a_2993_, 1);
lean_inc_ref(v_binderType_2994_);
lean_dec_ref_known(v_a_2993_, 3);
v___x_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2995_, 0, v_binderType_2994_);
v___x_2996_ = l_Lean_Meta_mkFreshExprMVar(v___x_2995_, v___x_2967_, v___x_2968_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_2998_ = l_Lean_Expr_mvarId_x21(v_a_2997_);
v___x_2999_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v___x_2998_, v___x_2969_, v___x_2970_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3001_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
lean_inc(v___x_2991_);
v___x_3001_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_a_3000_, v___x_2991_, v___y_2983_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3083_; 
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3083_ == 0)
{
lean_object* v_unused_3084_; 
v_unused_3084_ = lean_ctor_get(v___x_3001_, 0);
lean_dec(v_unused_3084_);
v___x_3003_ = v___x_3001_;
v_isShared_3004_ = v_isSharedCheck_3083_;
goto v_resetjp_3002_;
}
else
{
lean_dec(v___x_3001_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3083_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; uint8_t v___x_3009_; lean_object* v___x_3010_; 
v___x_3005_ = l_Lean_Expr_app___override(v___x_2966_, v_a_2997_);
lean_inc_ref(v_params_2971_);
v___x_3006_ = l_Array_append___redArg(v_params_2971_, v_args_2972_);
v___x_3007_ = l_Array_append___redArg(v___x_3006_, v_indices_2973_);
v___x_3008_ = l_Array_append___redArg(v___x_3007_, v_targetArgs_2980_);
v___x_3009_ = 1;
v___x_3010_ = l_Lean_Meta_mkLambdaFVars(v___x_3008_, v___x_3005_, v___x_2974_, v___x_2970_, v___x_2974_, v___x_2970_, v___x_3009_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3012_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_a_3011_);
lean_dec_ref_known(v___x_3010_, 1);
v___x_3012_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_a_3011_, v___y_2983_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3012_, 1);
v___x_3014_ = l_Lean_ConstantInfo_levelParams(v_a_2975_);
v___x_3015_ = l_Lean_mkCasesOnName(v___x_2976_);
v___x_3016_ = l_Lean_Meta_mkForallFVars(v_params_2971_, v___x_2977_, v___x_2974_, v___x_2970_, v___x_2970_, v___x_3009_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
lean_dec_ref_known(v___x_3016_, 1);
v___x_3018_ = lean_box(0);
lean_inc(v___x_3015_);
v___x_3019_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v___x_3015_, v___x_3014_, v_a_3017_, v_a_3013_, v___x_3018_, v___y_2985_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3022_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 1);
lean_ctor_set(v___x_3003_, 0, v_a_3020_);
v___x_3022_ = v___x_3003_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3020_);
v___x_3022_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v___x_3023_; 
v___x_3023_ = l_Lean_addDecl(v___x_3022_, v___x_2974_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
lean_dec_ref_known(v___x_3023_, 1);
v___x_3024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8));
v___x_3025_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_applyAttributes___boxed), 9, 2);
lean_closure_set(v___x_3025_, 0, v___x_3015_);
lean_closure_set(v___x_3025_, 1, v___x_3024_);
v___x_3026_ = lean_box(0);
v___x_3027_ = lean_box(0);
v___x_3028_ = lean_box(1);
v___x_3029_ = lean_mk_empty_array_with_capacity(v___x_2965_);
v___x_3030_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_3030_, 0, v___x_3026_);
lean_ctor_set(v___x_3030_, 1, v___x_3027_);
lean_ctor_set(v___x_3030_, 2, v___x_3026_);
lean_ctor_set(v___x_3030_, 3, v___f_2978_);
lean_ctor_set(v___x_3030_, 4, v___x_3028_);
lean_ctor_set(v___x_3030_, 5, v___x_3028_);
lean_ctor_set(v___x_3030_, 6, v___x_3026_);
lean_ctor_set(v___x_3030_, 7, v___x_3029_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8, v___x_2970_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 1, v___x_2970_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 2, v___x_2970_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 3, v___x_2970_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 4, v___x_2974_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 5, v___x_2974_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 6, v___x_2974_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 7, v___x_2974_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 8, v___x_2970_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 9, v___x_2974_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*8 + 10, v___x_2970_);
v___x_3031_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3031_, 0, v___x_2979_);
lean_ctor_set(v___x_3031_, 1, v___x_3028_);
lean_ctor_set(v___x_3031_, 2, v___x_3027_);
lean_ctor_set(v___x_3031_, 3, v___x_3027_);
lean_ctor_set(v___x_3031_, 4, v___x_3027_);
lean_ctor_set(v___x_3031_, 5, v___x_3028_);
lean_ctor_set(v___x_3031_, 6, v___x_3027_);
v___x_3032_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_3025_, v___x_3030_, v___x_3031_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3041_; 
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3035_ = v___x_3032_;
v_isShared_3036_ = v_isSharedCheck_3041_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3032_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3041_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v_fst_3037_; lean_object* v___x_3039_; 
v_fst_3037_ = lean_ctor_get(v_a_3033_, 0);
lean_inc(v_fst_3037_);
lean_dec(v_a_3033_);
if (v_isShared_3036_ == 0)
{
lean_ctor_set(v___x_3035_, 0, v_fst_3037_);
v___x_3039_ = v___x_3035_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_fst_3037_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
v_a_3042_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3032_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3032_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
else
{
lean_dec(v___x_3015_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
return v___x_3023_;
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
lean_dec(v___x_3015_);
lean_del_object(v___x_3003_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
v_a_3051_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3019_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3019_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec(v___x_3015_);
lean_dec(v___x_3014_);
lean_dec(v_a_3013_);
lean_del_object(v___x_3003_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
v_a_3059_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3016_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3016_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_del_object(v___x_3003_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
v_a_3067_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3012_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3012_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_del_object(v___x_3003_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
v_a_3075_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3010_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3010_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
}
else
{
lean_dec(v_a_2997_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2966_);
return v___x_3001_;
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec(v_a_2997_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2966_);
v_a_3085_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_2999_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_2999_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2969_);
lean_dec_ref(v___x_2966_);
v_a_3093_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_2996_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_2996_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
lean_dec(v_a_2993_);
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2969_);
lean_dec(v___x_2968_);
lean_dec_ref(v___x_2966_);
v___x_3101_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10);
v___x_3102_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3101_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
return v___x_3102_;
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v___x_2979_);
lean_dec_ref(v___f_2978_);
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec_ref(v_params_2971_);
lean_dec_ref(v___x_2969_);
lean_dec(v___x_2968_);
lean_dec_ref(v___x_2966_);
v_a_3103_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_2992_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_2992_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed(lean_object** _args){
lean_object* v___x_3111_ = _args[0];
lean_object* v___x_3112_ = _args[1];
lean_object* v___x_3113_ = _args[2];
lean_object* v___x_3114_ = _args[3];
lean_object* v___x_3115_ = _args[4];
lean_object* v___x_3116_ = _args[5];
lean_object* v___x_3117_ = _args[6];
lean_object* v_params_3118_ = _args[7];
lean_object* v_args_3119_ = _args[8];
lean_object* v_indices_3120_ = _args[9];
lean_object* v___x_3121_ = _args[10];
lean_object* v_a_3122_ = _args[11];
lean_object* v___x_3123_ = _args[12];
lean_object* v___x_3124_ = _args[13];
lean_object* v___f_3125_ = _args[14];
lean_object* v___x_3126_ = _args[15];
lean_object* v_targetArgs_3127_ = _args[16];
lean_object* v_x_3128_ = _args[17];
lean_object* v___y_3129_ = _args[18];
lean_object* v___y_3130_ = _args[19];
lean_object* v___y_3131_ = _args[20];
lean_object* v___y_3132_ = _args[21];
lean_object* v___y_3133_ = _args[22];
_start:
{
uint8_t v___x_16347__boxed_3134_; uint8_t v___x_16350__boxed_3135_; uint8_t v___x_16351__boxed_3136_; lean_object* v_res_3137_; 
v___x_16347__boxed_3134_ = lean_unbox(v___x_3114_);
v___x_16350__boxed_3135_ = lean_unbox(v___x_3117_);
v___x_16351__boxed_3136_ = lean_unbox(v___x_3121_);
v_res_3137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(v___x_3111_, v___x_3112_, v___x_3113_, v___x_16347__boxed_3134_, v___x_3115_, v___x_3116_, v___x_16350__boxed_3135_, v_params_3118_, v_args_3119_, v_indices_3120_, v___x_16351__boxed_3136_, v_a_3122_, v___x_3123_, v___x_3124_, v___f_3125_, v___x_3126_, v_targetArgs_3127_, v_x_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec_ref(v_x_3128_);
lean_dec_ref(v_targetArgs_3127_);
lean_dec_ref(v_a_3122_);
lean_dec_ref(v_indices_3120_);
lean_dec_ref(v_args_3119_);
lean_dec(v___x_3112_);
lean_dec(v___x_3111_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(lean_object* v___x_3138_, lean_object* v___x_3139_, lean_object* v___x_3140_, uint8_t v___x_3141_, lean_object* v___x_3142_, lean_object* v___x_3143_, uint8_t v___x_3144_, lean_object* v_params_3145_, lean_object* v_args_3146_, uint8_t v___x_3147_, lean_object* v_a_3148_, lean_object* v___x_3149_, lean_object* v___x_3150_, lean_object* v___f_3151_, lean_object* v___x_3152_, lean_object* v___x_3153_, lean_object* v_indices_3154_, lean_object* v_goalType_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___f_3165_; lean_object* v___x_3166_; 
v___x_3161_ = l_Lean_mkAppN(v___x_3138_, v_indices_3154_);
v___x_3162_ = lean_box(v___x_3141_);
v___x_3163_ = lean_box(v___x_3144_);
v___x_3164_ = lean_box(v___x_3147_);
v___f_3165_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed), 23, 16);
lean_closure_set(v___f_3165_, 0, v___x_3139_);
lean_closure_set(v___f_3165_, 1, v___x_3140_);
lean_closure_set(v___f_3165_, 2, v___x_3161_);
lean_closure_set(v___f_3165_, 3, v___x_3162_);
lean_closure_set(v___f_3165_, 4, v___x_3142_);
lean_closure_set(v___f_3165_, 5, v___x_3143_);
lean_closure_set(v___f_3165_, 6, v___x_3163_);
lean_closure_set(v___f_3165_, 7, v_params_3145_);
lean_closure_set(v___f_3165_, 8, v_args_3146_);
lean_closure_set(v___f_3165_, 9, v_indices_3154_);
lean_closure_set(v___f_3165_, 10, v___x_3164_);
lean_closure_set(v___f_3165_, 11, v_a_3148_);
lean_closure_set(v___f_3165_, 12, v___x_3149_);
lean_closure_set(v___f_3165_, 13, v___x_3150_);
lean_closure_set(v___f_3165_, 14, v___f_3151_);
lean_closure_set(v___f_3165_, 15, v___x_3152_);
v___x_3166_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_goalType_3155_, v___x_3153_, v___f_3165_, v___x_3147_, v___x_3147_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
return v___x_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed(lean_object** _args){
lean_object* v___x_3167_ = _args[0];
lean_object* v___x_3168_ = _args[1];
lean_object* v___x_3169_ = _args[2];
lean_object* v___x_3170_ = _args[3];
lean_object* v___x_3171_ = _args[4];
lean_object* v___x_3172_ = _args[5];
lean_object* v___x_3173_ = _args[6];
lean_object* v_params_3174_ = _args[7];
lean_object* v_args_3175_ = _args[8];
lean_object* v___x_3176_ = _args[9];
lean_object* v_a_3177_ = _args[10];
lean_object* v___x_3178_ = _args[11];
lean_object* v___x_3179_ = _args[12];
lean_object* v___f_3180_ = _args[13];
lean_object* v___x_3181_ = _args[14];
lean_object* v___x_3182_ = _args[15];
lean_object* v_indices_3183_ = _args[16];
lean_object* v_goalType_3184_ = _args[17];
lean_object* v___y_3185_ = _args[18];
lean_object* v___y_3186_ = _args[19];
lean_object* v___y_3187_ = _args[20];
lean_object* v___y_3188_ = _args[21];
lean_object* v___y_3189_ = _args[22];
_start:
{
uint8_t v___x_16683__boxed_3190_; uint8_t v___x_16686__boxed_3191_; uint8_t v___x_16687__boxed_3192_; lean_object* v_res_3193_; 
v___x_16683__boxed_3190_ = lean_unbox(v___x_3170_);
v___x_16686__boxed_3191_ = lean_unbox(v___x_3173_);
v___x_16687__boxed_3192_ = lean_unbox(v___x_3176_);
v_res_3193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(v___x_3167_, v___x_3168_, v___x_3169_, v___x_16683__boxed_3190_, v___x_3171_, v___x_3172_, v___x_16686__boxed_3191_, v_params_3174_, v_args_3175_, v___x_16687__boxed_3192_, v_a_3177_, v___x_3178_, v___x_3179_, v___f_3180_, v___x_3181_, v___x_3182_, v_indices_3183_, v_goalType_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
lean_dec(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec(v___y_3186_);
lean_dec_ref(v___y_3185_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(lean_object* v___x_3194_, uint8_t v___x_3195_, lean_object* v_snd_3196_, lean_object* v___x_3197_, uint8_t v___x_3198_, lean_object* v___x_3199_, lean_object* v___x_3200_, lean_object* v_a_3201_, lean_object* v___x_3202_, lean_object* v___x_3203_, uint8_t v___x_3204_, lean_object* v___x_3205_, lean_object* v_params_3206_, lean_object* v_args_3207_, lean_object* v_a_3208_, lean_object* v___x_3209_, lean_object* v___x_3210_, lean_object* v___f_3211_, lean_object* v___x_3212_, lean_object* v___x_3213_, lean_object* v_numIndices_3214_, lean_object* v_goalType_3215_, lean_object* v___x_3216_, lean_object* v___x_3217_, lean_object* v_fst_3218_, lean_object* v___x_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v_lctx_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; uint8_t v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_lctx_3225_ = lean_ctor_get(v___y_3220_, 2);
lean_inc(v___x_3194_);
lean_inc_ref(v_lctx_3225_);
v___x_3226_ = l_Lean_LocalContext_get_x21(v_lctx_3225_, v___x_3194_);
v___x_3227_ = l_Lean_LocalDecl_type(v___x_3226_);
lean_dec_ref(v___x_3226_);
v___x_3228_ = 2;
v___x_3229_ = lean_box(0);
v___x_3230_ = 0;
v___x_3231_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3231_, 0, v___x_3229_);
lean_ctor_set_uint8(v___x_3231_, sizeof(void*)*1, v___x_3228_);
lean_ctor_set_uint8(v___x_3231_, sizeof(void*)*1 + 1, v___x_3195_);
lean_ctor_set_uint8(v___x_3231_, sizeof(void*)*1 + 2, v___x_3230_);
lean_inc_ref(v___x_3197_);
lean_inc(v_snd_3196_);
v___x_3232_ = l_Lean_MVarId_rewrite(v_snd_3196_, v___x_3227_, v___x_3197_, v___x_3195_, v___x_3231_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v_eNew_3234_; lean_object* v_eqProof_3235_; lean_object* v___x_3236_; lean_object* v___f_3237_; lean_object* v___x_3238_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
v_eNew_3234_ = lean_ctor_get(v_a_3233_, 0);
lean_inc_ref(v_eNew_3234_);
v_eqProof_3235_ = lean_ctor_get(v_a_3233_, 1);
lean_inc_ref(v_eqProof_3235_);
lean_dec(v_a_3233_);
lean_inc(v___x_3194_);
v___x_3236_ = l_Lean_mkFVar(v___x_3194_);
lean_inc(v_snd_3196_);
v___f_3237_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed), 10, 5);
lean_closure_set(v___f_3237_, 0, v_eqProof_3235_);
lean_closure_set(v___f_3237_, 1, v___x_3236_);
lean_closure_set(v___f_3237_, 2, v_eNew_3234_);
lean_closure_set(v___f_3237_, 3, v_snd_3196_);
lean_closure_set(v___f_3237_, 4, v___x_3194_);
v___x_3238_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_snd_3196_, v___f_3237_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___y_3241_; uint8_t v___x_3269_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3238_, 1);
v___x_3269_ = lean_nat_dec_lt(v___x_3216_, v___x_3217_);
if (v___x_3269_ == 0)
{
v___y_3241_ = v_fst_3218_;
goto v___jp_3240_;
}
else
{
lean_object* v_fvarId_3270_; lean_object* v___x_3271_; lean_object* v_xs_x27_3272_; lean_object* v___x_3273_; 
v_fvarId_3270_ = lean_ctor_get(v_a_3239_, 0);
v___x_3271_ = l_unsafeCast___redArg(v___x_3219_);
v_xs_x27_3272_ = lean_array_fset(v_fst_3218_, v___x_3216_, v___x_3271_);
lean_inc(v_fvarId_3270_);
v___x_3273_ = lean_array_fset(v_xs_x27_3272_, v___x_3216_, v_fvarId_3270_);
v___y_3241_ = v___x_3273_;
goto v___jp_3240_;
}
v___jp_3240_:
{
lean_object* v_mvarId_3242_; lean_object* v___x_3243_; 
v_mvarId_3242_ = lean_ctor_get(v_a_3239_, 1);
lean_inc(v_mvarId_3242_);
lean_dec(v_a_3239_);
v___x_3243_ = l_Lean_MVarId_revert(v_mvarId_3242_, v___y_3241_, v___x_3198_, v___x_3198_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; lean_object* v_snd_3245_; lean_object* v___x_3246_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
v_snd_3245_ = lean_ctor_get(v_a_3244_, 1);
lean_inc(v_snd_3245_);
lean_dec(v_a_3244_);
v___x_3246_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_snd_3245_, v___x_3199_, v___y_3221_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3259_; 
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3259_ == 0)
{
lean_object* v_unused_3260_; 
v_unused_3260_ = lean_ctor_get(v___x_3246_, 0);
lean_dec(v_unused_3260_);
v___x_3248_ = v___x_3246_;
v_isShared_3249_ = v_isSharedCheck_3259_;
goto v_resetjp_3247_;
}
else
{
lean_dec(v___x_3246_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3259_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___f_3254_; lean_object* v___x_3256_; 
v___x_3250_ = l_Lean_Expr_app___override(v___x_3200_, v_a_3201_);
v___x_3251_ = lean_box(v___x_3204_);
v___x_3252_ = lean_box(v___x_3195_);
v___x_3253_ = lean_box(v___x_3198_);
v___f_3254_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed), 23, 16);
lean_closure_set(v___f_3254_, 0, v___x_3250_);
lean_closure_set(v___f_3254_, 1, v___x_3202_);
lean_closure_set(v___f_3254_, 2, v___x_3203_);
lean_closure_set(v___f_3254_, 3, v___x_3251_);
lean_closure_set(v___f_3254_, 4, v___x_3205_);
lean_closure_set(v___f_3254_, 5, v___x_3197_);
lean_closure_set(v___f_3254_, 6, v___x_3252_);
lean_closure_set(v___f_3254_, 7, v_params_3206_);
lean_closure_set(v___f_3254_, 8, v_args_3207_);
lean_closure_set(v___f_3254_, 9, v___x_3253_);
lean_closure_set(v___f_3254_, 10, v_a_3208_);
lean_closure_set(v___f_3254_, 11, v___x_3209_);
lean_closure_set(v___f_3254_, 12, v___x_3210_);
lean_closure_set(v___f_3254_, 13, v___f_3211_);
lean_closure_set(v___f_3254_, 14, v___x_3212_);
lean_closure_set(v___f_3254_, 15, v___x_3213_);
if (v_isShared_3249_ == 0)
{
lean_ctor_set_tag(v___x_3248_, 1);
lean_ctor_set(v___x_3248_, 0, v_numIndices_3214_);
v___x_3256_ = v___x_3248_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_numIndices_3214_);
v___x_3256_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_goalType_3215_, v___x_3256_, v___f_3254_, v___x_3198_, v___x_3198_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
lean_dec_ref(v___y_3220_);
return v___x_3257_;
}
}
}
else
{
lean_dec_ref(v___y_3220_);
lean_dec_ref(v_goalType_3215_);
lean_dec(v_numIndices_3214_);
lean_dec(v___x_3213_);
lean_dec(v___x_3212_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___x_3210_);
lean_dec(v___x_3209_);
lean_dec_ref(v_a_3208_);
lean_dec_ref(v_args_3207_);
lean_dec_ref(v_params_3206_);
lean_dec(v___x_3205_);
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
lean_dec_ref(v_a_3201_);
lean_dec_ref(v___x_3200_);
lean_dec_ref(v___x_3197_);
return v___x_3246_;
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec_ref(v___y_3220_);
lean_dec_ref(v_goalType_3215_);
lean_dec(v_numIndices_3214_);
lean_dec(v___x_3213_);
lean_dec(v___x_3212_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___x_3210_);
lean_dec(v___x_3209_);
lean_dec_ref(v_a_3208_);
lean_dec_ref(v_args_3207_);
lean_dec_ref(v_params_3206_);
lean_dec(v___x_3205_);
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
lean_dec_ref(v_a_3201_);
lean_dec_ref(v___x_3200_);
lean_dec_ref(v___x_3199_);
lean_dec_ref(v___x_3197_);
v_a_3261_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3243_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3243_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec_ref(v___y_3220_);
lean_dec_ref(v_fst_3218_);
lean_dec_ref(v_goalType_3215_);
lean_dec(v_numIndices_3214_);
lean_dec(v___x_3213_);
lean_dec(v___x_3212_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___x_3210_);
lean_dec(v___x_3209_);
lean_dec_ref(v_a_3208_);
lean_dec_ref(v_args_3207_);
lean_dec_ref(v_params_3206_);
lean_dec(v___x_3205_);
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
lean_dec_ref(v_a_3201_);
lean_dec_ref(v___x_3200_);
lean_dec_ref(v___x_3199_);
lean_dec_ref(v___x_3197_);
v_a_3274_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3238_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3238_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
lean_dec_ref(v___y_3220_);
lean_dec_ref(v_fst_3218_);
lean_dec_ref(v_goalType_3215_);
lean_dec(v_numIndices_3214_);
lean_dec(v___x_3213_);
lean_dec(v___x_3212_);
lean_dec_ref(v___f_3211_);
lean_dec_ref(v___x_3210_);
lean_dec(v___x_3209_);
lean_dec_ref(v_a_3208_);
lean_dec_ref(v_args_3207_);
lean_dec_ref(v_params_3206_);
lean_dec(v___x_3205_);
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
lean_dec_ref(v_a_3201_);
lean_dec_ref(v___x_3200_);
lean_dec_ref(v___x_3199_);
lean_dec_ref(v___x_3197_);
lean_dec(v_snd_3196_);
lean_dec(v___x_3194_);
v_a_3282_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3232_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3232_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed(lean_object** _args){
lean_object* v___x_3290_ = _args[0];
lean_object* v___x_3291_ = _args[1];
lean_object* v_snd_3292_ = _args[2];
lean_object* v___x_3293_ = _args[3];
lean_object* v___x_3294_ = _args[4];
lean_object* v___x_3295_ = _args[5];
lean_object* v___x_3296_ = _args[6];
lean_object* v_a_3297_ = _args[7];
lean_object* v___x_3298_ = _args[8];
lean_object* v___x_3299_ = _args[9];
lean_object* v___x_3300_ = _args[10];
lean_object* v___x_3301_ = _args[11];
lean_object* v_params_3302_ = _args[12];
lean_object* v_args_3303_ = _args[13];
lean_object* v_a_3304_ = _args[14];
lean_object* v___x_3305_ = _args[15];
lean_object* v___x_3306_ = _args[16];
lean_object* v___f_3307_ = _args[17];
lean_object* v___x_3308_ = _args[18];
lean_object* v___x_3309_ = _args[19];
lean_object* v_numIndices_3310_ = _args[20];
lean_object* v_goalType_3311_ = _args[21];
lean_object* v___x_3312_ = _args[22];
lean_object* v___x_3313_ = _args[23];
lean_object* v_fst_3314_ = _args[24];
lean_object* v___x_3315_ = _args[25];
lean_object* v___y_3316_ = _args[26];
lean_object* v___y_3317_ = _args[27];
lean_object* v___y_3318_ = _args[28];
lean_object* v___y_3319_ = _args[29];
lean_object* v___y_3320_ = _args[30];
_start:
{
uint8_t v___x_16750__boxed_3321_; uint8_t v___x_16753__boxed_3322_; uint8_t v___x_16759__boxed_3323_; lean_object* v_res_3324_; 
v___x_16750__boxed_3321_ = lean_unbox(v___x_3291_);
v___x_16753__boxed_3322_ = lean_unbox(v___x_3294_);
v___x_16759__boxed_3323_ = lean_unbox(v___x_3300_);
v_res_3324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(v___x_3290_, v___x_16750__boxed_3321_, v_snd_3292_, v___x_3293_, v___x_16753__boxed_3322_, v___x_3295_, v___x_3296_, v_a_3297_, v___x_3298_, v___x_3299_, v___x_16759__boxed_3323_, v___x_3301_, v_params_3302_, v_args_3303_, v_a_3304_, v___x_3305_, v___x_3306_, v___f_3307_, v___x_3308_, v___x_3309_, v_numIndices_3310_, v_goalType_3311_, v___x_3312_, v___x_3313_, v_fst_3314_, v___x_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
lean_dec(v___y_3319_);
lean_dec_ref(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec(v___x_3313_);
lean_dec(v___x_3312_);
return v_res_3324_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(uint8_t v___x_3325_, lean_object* v_x_3326_){
_start:
{
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed(lean_object* v___x_3327_, lean_object* v_x_3328_){
_start:
{
uint8_t v___x_16951__boxed_3329_; uint8_t v_res_3330_; lean_object* v_r_3331_; 
v___x_16951__boxed_3329_ = lean_unbox(v___x_3327_);
v_res_3330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(v___x_16951__boxed_3329_, v_x_3328_);
lean_dec(v_x_3328_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(lean_object* v___x_3335_, lean_object* v_a_3336_, lean_object* v___x_3337_, lean_object* v_numIndices_3338_, lean_object* v___x_3339_, lean_object* v___x_3340_, lean_object* v___x_3341_, lean_object* v_params_3342_, lean_object* v_a_3343_, lean_object* v___x_3344_, lean_object* v___x_3345_, lean_object* v___x_3346_, lean_object* v___x_3347_, lean_object* v_args_3348_, lean_object* v_goalType_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v___x_3355_; uint8_t v___x_3356_; 
v___x_3355_ = lean_array_get_size(v_args_3348_);
v___x_3356_ = lean_nat_dec_eq(v___x_3355_, v___x_3335_);
if (v___x_3356_ == 0)
{
lean_object* v___x_3357_; lean_object* v___x_3358_; 
lean_dec_ref(v_goalType_3349_);
lean_dec_ref(v_args_3348_);
lean_dec(v___x_3346_);
lean_dec_ref(v___x_3345_);
lean_dec(v___x_3344_);
lean_dec_ref(v_a_3343_);
lean_dec_ref(v_params_3342_);
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3340_);
lean_dec(v_numIndices_3338_);
lean_dec(v___x_3337_);
lean_dec(v___x_3335_);
v___x_3357_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1);
v___x_3358_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3357_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
return v___x_3358_;
}
else
{
if (lean_obj_tag(v_a_3336_) == 7)
{
lean_object* v_binderType_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v_binderType_3359_ = lean_ctor_get(v_a_3336_, 1);
v___x_3360_ = lean_array_fget(v_args_3348_, v___x_3337_);
lean_inc_ref(v_binderType_3359_);
v___x_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3361_, 0, v_binderType_3359_);
v___x_3362_ = 0;
v___x_3363_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_);
v___x_3364_ = l_Lean_Meta_mkFreshExprMVar(v___x_3361_, v___x_3362_, v___x_3363_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; lean_object* v___f_3370_; lean_object* v___x_3371_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3364_, 1);
v___x_3366_ = l_Lean_Expr_mvarId_x21(v_a_3365_);
v___x_3367_ = lean_nat_add(v_numIndices_3338_, v___x_3335_);
v___x_3368_ = lean_box(0);
v___x_3369_ = 0;
v___f_3370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0));
v___x_3371_ = l_Lean_Meta_introNCore(v___x_3366_, v___x_3367_, v___x_3368_, v___x_3369_, v___x_3369_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v_fst_3373_; lean_object* v_snd_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v_fst_3373_ = lean_ctor_get(v_a_3372_, 0);
lean_inc(v_fst_3373_);
v_snd_3374_ = lean_ctor_get(v_a_3372_, 1);
lean_inc_n(v_snd_3374_, 2);
lean_dec(v_a_3372_);
v___x_3375_ = lean_array_get_size(v_fst_3373_);
v___x_3376_ = lean_nat_sub(v___x_3375_, v___x_3335_);
v___x_3377_ = lean_array_get(v___x_3339_, v_fst_3373_, v___x_3376_);
v___x_3378_ = lean_box(v___x_3356_);
v___x_3379_ = lean_box(v___x_3369_);
v___x_3380_ = lean_box(v___x_3362_);
v___f_3381_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed), 31, 26);
lean_closure_set(v___f_3381_, 0, v___x_3377_);
lean_closure_set(v___f_3381_, 1, v___x_3378_);
lean_closure_set(v___f_3381_, 2, v_snd_3374_);
lean_closure_set(v___f_3381_, 3, v___x_3340_);
lean_closure_set(v___f_3381_, 4, v___x_3379_);
lean_closure_set(v___f_3381_, 5, v___x_3360_);
lean_closure_set(v___f_3381_, 6, v___x_3341_);
lean_closure_set(v___f_3381_, 7, v_a_3365_);
lean_closure_set(v___f_3381_, 8, v___x_3335_);
lean_closure_set(v___f_3381_, 9, v___x_3337_);
lean_closure_set(v___f_3381_, 10, v___x_3380_);
lean_closure_set(v___f_3381_, 11, v___x_3363_);
lean_closure_set(v___f_3381_, 12, v_params_3342_);
lean_closure_set(v___f_3381_, 13, v_args_3348_);
lean_closure_set(v___f_3381_, 14, v_a_3343_);
lean_closure_set(v___f_3381_, 15, v___x_3344_);
lean_closure_set(v___f_3381_, 16, v___x_3345_);
lean_closure_set(v___f_3381_, 17, v___f_3370_);
lean_closure_set(v___f_3381_, 18, v___x_3368_);
lean_closure_set(v___f_3381_, 19, v___x_3346_);
lean_closure_set(v___f_3381_, 20, v_numIndices_3338_);
lean_closure_set(v___f_3381_, 21, v_goalType_3349_);
lean_closure_set(v___f_3381_, 22, v___x_3376_);
lean_closure_set(v___f_3381_, 23, v___x_3375_);
lean_closure_set(v___f_3381_, 24, v_fst_3373_);
lean_closure_set(v___f_3381_, 25, v___x_3347_);
v___x_3382_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_snd_3374_, v___f_3381_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
return v___x_3382_;
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
lean_dec(v_a_3365_);
lean_dec(v___x_3360_);
lean_dec_ref(v_goalType_3349_);
lean_dec_ref(v_args_3348_);
lean_dec(v___x_3346_);
lean_dec_ref(v___x_3345_);
lean_dec(v___x_3344_);
lean_dec_ref(v_a_3343_);
lean_dec_ref(v_params_3342_);
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3340_);
lean_dec(v_numIndices_3338_);
lean_dec(v___x_3337_);
lean_dec(v___x_3335_);
v_a_3383_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3371_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3371_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_a_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
else
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3398_; 
lean_dec(v___x_3360_);
lean_dec_ref(v_goalType_3349_);
lean_dec_ref(v_args_3348_);
lean_dec(v___x_3346_);
lean_dec_ref(v___x_3345_);
lean_dec(v___x_3344_);
lean_dec_ref(v_a_3343_);
lean_dec_ref(v_params_3342_);
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3340_);
lean_dec(v_numIndices_3338_);
lean_dec(v___x_3337_);
lean_dec(v___x_3335_);
v_a_3391_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3393_ = v___x_3364_;
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3364_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3396_; 
if (v_isShared_3394_ == 0)
{
v___x_3396_ = v___x_3393_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3391_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
else
{
lean_object* v___x_3399_; lean_object* v___x_3400_; 
lean_dec_ref(v_goalType_3349_);
lean_dec_ref(v_args_3348_);
lean_dec(v___x_3346_);
lean_dec_ref(v___x_3345_);
lean_dec(v___x_3344_);
lean_dec_ref(v_a_3343_);
lean_dec_ref(v_params_3342_);
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3340_);
lean_dec(v_numIndices_3338_);
lean_dec(v___x_3337_);
lean_dec(v___x_3335_);
v___x_3399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10);
v___x_3400_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3399_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
return v___x_3400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed(lean_object** _args){
lean_object* v___x_3401_ = _args[0];
lean_object* v_a_3402_ = _args[1];
lean_object* v___x_3403_ = _args[2];
lean_object* v_numIndices_3404_ = _args[3];
lean_object* v___x_3405_ = _args[4];
lean_object* v___x_3406_ = _args[5];
lean_object* v___x_3407_ = _args[6];
lean_object* v_params_3408_ = _args[7];
lean_object* v_a_3409_ = _args[8];
lean_object* v___x_3410_ = _args[9];
lean_object* v___x_3411_ = _args[10];
lean_object* v___x_3412_ = _args[11];
lean_object* v___x_3413_ = _args[12];
lean_object* v_args_3414_ = _args[13];
lean_object* v_goalType_3415_ = _args[14];
lean_object* v___y_3416_ = _args[15];
lean_object* v___y_3417_ = _args[16];
lean_object* v___y_3418_ = _args[17];
lean_object* v___y_3419_ = _args[18];
lean_object* v___y_3420_ = _args[19];
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(v___x_3401_, v_a_3402_, v___x_3403_, v_numIndices_3404_, v___x_3405_, v___x_3406_, v___x_3407_, v_params_3408_, v_a_3409_, v___x_3410_, v___x_3411_, v___x_3412_, v___x_3413_, v_args_3414_, v_goalType_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___x_3405_);
lean_dec_ref(v_a_3402_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(lean_object* v_constName_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v___x_3428_; lean_object* v_env_3429_; uint8_t v___x_3430_; lean_object* v___x_3431_; 
v___x_3428_ = lean_st_ref_get(v___y_3426_);
v_env_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc_ref(v_env_3429_);
lean_dec(v___x_3428_);
v___x_3430_ = 0;
lean_inc(v_constName_3422_);
v___x_3431_ = l_Lean_Environment_findConstVal_x3f(v_env_3429_, v_constName_3422_, v___x_3430_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v___x_3432_; 
v___x_3432_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
return v___x_3432_;
}
else
{
lean_object* v_val_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec(v_constName_3422_);
v_val_3433_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3431_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_val_3433_);
lean_dec(v___x_3431_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
lean_ctor_set_tag(v___x_3435_, 0);
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_val_3433_);
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
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4___boxed(lean_object* v_constName_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(v_constName_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(lean_object* v_constName_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; 
lean_inc(v_constName_3448_);
v___x_3454_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(v_constName_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3466_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3466_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3466_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v_levelParams_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3464_; 
v_levelParams_3459_ = lean_ctor_get(v_a_3455_, 1);
lean_inc(v_levelParams_3459_);
lean_dec(v_a_3455_);
v___x_3460_ = lean_box(0);
v___x_3461_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_3459_, v___x_3460_);
v___x_3462_ = l_Lean_mkConst(v_constName_3448_, v___x_3461_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v___x_3462_);
v___x_3464_ = v___x_3457_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec(v_constName_3448_);
v_a_3467_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3454_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3454_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3___boxed(lean_object* v_constName_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(v_constName_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(lean_object* v___y_3484_, lean_object* v_levels_3485_, lean_object* v_params_3486_, lean_object* v_predicates_3487_, lean_object* v_as_3488_, size_t v_sz_3489_, size_t v_i_3490_, lean_object* v_b_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
uint8_t v___x_3497_; 
v___x_3497_ = lean_usize_dec_lt(v_i_3490_, v_sz_3489_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; 
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
v___x_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3498_, 0, v_b_3491_);
return v___x_3498_;
}
else
{
lean_object* v_a_3499_; lean_object* v_toConstantVal_3500_; lean_object* v_numParams_3501_; lean_object* v_numIndices_3502_; lean_object* v_name_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___f_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v_a_3499_ = lean_array_uget_borrowed(v_as_3488_, v_i_3490_);
v_toConstantVal_3500_ = lean_ctor_get(v_a_3499_, 0);
v_numParams_3501_ = lean_ctor_get(v_a_3499_, 1);
v_numIndices_3502_ = lean_ctor_get(v_a_3499_, 2);
v_name_3503_ = lean_ctor_get(v_toConstantVal_3500_, 0);
v___x_3504_ = lean_unsigned_to_nat(0u);
v___x_3505_ = l_Lean_instInhabitedFVarId_default;
v___x_3506_ = lean_box(0);
lean_inc_ref(v_params_3486_);
lean_inc(v_levels_3485_);
lean_inc_ref(v___y_3484_);
lean_inc_n(v_name_3503_, 2);
lean_inc(v_numParams_3501_);
v___f_3507_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed), 7, 6);
lean_closure_set(v___f_3507_, 0, v_numParams_3501_);
lean_closure_set(v___f_3507_, 1, v_name_3503_);
lean_closure_set(v___f_3507_, 2, v___y_3484_);
lean_closure_set(v___f_3507_, 3, v___x_3504_);
lean_closure_set(v___f_3507_, 4, v_levels_3485_);
lean_closure_set(v___f_3507_, 5, v_params_3486_);
v___x_3508_ = l_Lean_mkCasesOnName(v_name_3503_);
lean_inc(v___x_3508_);
v___x_3509_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(v___x_3508_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; lean_object* v___x_3511_; 
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v___x_3511_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(v___x_3508_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3512_);
lean_dec_ref_known(v___x_3511_, 1);
lean_inc_ref(v_params_3486_);
v___x_3513_ = l_Array_append___redArg(v_params_3486_, v_predicates_3487_);
v___x_3514_ = l_Lean_mkAppN(v_a_3512_, v___x_3513_);
lean_dec_ref(v___x_3513_);
lean_inc(v___y_3495_);
lean_inc_ref(v___y_3494_);
lean_inc(v___y_3493_);
lean_inc_ref(v___y_3492_);
lean_inc_ref(v___x_3514_);
v___x_3515_ = lean_infer_type(v___x_3514_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3515_, 1);
v___x_3517_ = lean_replace_expr(v___f_3507_, v_a_3516_);
lean_dec(v_a_3516_);
lean_dec_ref(v___f_3507_);
lean_inc(v___y_3495_);
lean_inc_ref(v___y_3494_);
lean_inc(v___y_3493_);
lean_inc_ref(v___y_3492_);
lean_inc_ref(v___x_3514_);
v___x_3518_ = lean_infer_type(v___x_3514_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_a_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___f_3526_; uint8_t v___x_3527_; lean_object* v___x_3528_; 
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_a_3519_);
lean_dec_ref_known(v___x_3518_, 1);
lean_inc(v_name_3503_);
v___x_3520_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_3503_);
v___x_3521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
lean_inc(v___x_3520_);
v___x_3522_ = l_Lean_Name_append(v___x_3520_, v___x_3521_);
lean_inc(v_levels_3485_);
v___x_3523_ = l_Lean_mkConst(v___x_3522_, v_levels_3485_);
v___x_3524_ = lean_unsigned_to_nat(1u);
v___x_3525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0));
lean_inc_ref(v___x_3517_);
lean_inc_ref(v_params_3486_);
lean_inc(v_numIndices_3502_);
v___f_3526_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed), 20, 13);
lean_closure_set(v___f_3526_, 0, v___x_3524_);
lean_closure_set(v___f_3526_, 1, v_a_3519_);
lean_closure_set(v___f_3526_, 2, v___x_3504_);
lean_closure_set(v___f_3526_, 3, v_numIndices_3502_);
lean_closure_set(v___f_3526_, 4, v___x_3505_);
lean_closure_set(v___f_3526_, 5, v___x_3523_);
lean_closure_set(v___f_3526_, 6, v___x_3514_);
lean_closure_set(v___f_3526_, 7, v_params_3486_);
lean_closure_set(v___f_3526_, 8, v_a_3510_);
lean_closure_set(v___f_3526_, 9, v___x_3520_);
lean_closure_set(v___f_3526_, 10, v___x_3517_);
lean_closure_set(v___f_3526_, 11, v___x_3525_);
lean_closure_set(v___f_3526_, 12, v___x_3506_);
v___x_3527_ = 0;
v___x_3528_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v___x_3517_, v___x_3525_, v___f_3526_, v___x_3527_, v___x_3527_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3528_) == 0)
{
size_t v___x_3529_; size_t v___x_3530_; 
lean_dec_ref_known(v___x_3528_, 1);
v___x_3529_ = ((size_t)1ULL);
v___x_3530_ = lean_usize_add(v_i_3490_, v___x_3529_);
v_i_3490_ = v___x_3530_;
v_b_3491_ = v___x_3506_;
goto _start;
}
else
{
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
return v___x_3528_;
}
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
lean_dec_ref(v___x_3517_);
lean_dec_ref(v___x_3514_);
lean_dec(v_a_3510_);
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
v_a_3532_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3518_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3518_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
lean_dec_ref(v___x_3514_);
lean_dec(v_a_3510_);
lean_dec_ref(v___f_3507_);
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
v_a_3540_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3515_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3515_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
else
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3555_; 
lean_dec(v_a_3510_);
lean_dec_ref(v___f_3507_);
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
v_a_3548_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3550_ = v___x_3511_;
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3511_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3553_; 
if (v_isShared_3551_ == 0)
{
v___x_3553_ = v___x_3550_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_a_3548_);
v___x_3553_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
return v___x_3553_;
}
}
}
}
else
{
lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3563_; 
lean_dec(v___x_3508_);
lean_dec_ref(v___f_3507_);
lean_dec_ref(v_params_3486_);
lean_dec(v_levels_3485_);
lean_dec_ref(v___y_3484_);
v_a_3556_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3558_ = v___x_3509_;
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3509_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3561_; 
if (v_isShared_3559_ == 0)
{
v___x_3561_ = v___x_3558_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_a_3556_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___boxed(lean_object* v___y_3564_, lean_object* v_levels_3565_, lean_object* v_params_3566_, lean_object* v_predicates_3567_, lean_object* v_as_3568_, lean_object* v_sz_3569_, lean_object* v_i_3570_, lean_object* v_b_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
size_t v_sz_boxed_3577_; size_t v_i_boxed_3578_; lean_object* v_res_3579_; 
v_sz_boxed_3577_ = lean_unbox_usize(v_sz_3569_);
lean_dec(v_sz_3569_);
v_i_boxed_3578_ = lean_unbox_usize(v_i_3570_);
lean_dec(v_i_3570_);
v_res_3579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(v___y_3564_, v_levels_3565_, v_params_3566_, v_predicates_3567_, v_as_3568_, v_sz_boxed_3577_, v_i_boxed_3578_, v_b_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec_ref(v_as_3568_);
lean_dec_ref(v_predicates_3567_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(lean_object* v_levels_3580_, size_t v_sz_3581_, size_t v_i_3582_, lean_object* v_bs_3583_){
_start:
{
uint8_t v___x_3584_; 
v___x_3584_ = lean_usize_dec_lt(v_i_3582_, v_sz_3581_);
if (v___x_3584_ == 0)
{
lean_object* v___x_3585_; 
lean_dec(v_levels_3580_);
v___x_3585_ = l_unsafeCast___redArg(v_bs_3583_);
lean_dec_ref(v_bs_3583_);
return v___x_3585_;
}
else
{
lean_object* v_v_3586_; lean_object* v___x_3587_; lean_object* v_toConstantVal_3588_; lean_object* v_name_3589_; lean_object* v___x_3590_; lean_object* v_bs_x27_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; size_t v___x_3594_; size_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v_v_3586_ = lean_array_uget_borrowed(v_bs_3583_, v_i_3582_);
v___x_3587_ = l_unsafeCast___redArg(v_v_3586_);
v_toConstantVal_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc_ref(v_toConstantVal_3588_);
lean_dec(v___x_3587_);
v_name_3589_ = lean_ctor_get(v_toConstantVal_3588_, 0);
lean_inc(v_name_3589_);
lean_dec_ref(v_toConstantVal_3588_);
v___x_3590_ = lean_unsigned_to_nat(0u);
v_bs_x27_3591_ = lean_array_uset(v_bs_3583_, v_i_3582_, v___x_3590_);
v___x_3592_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_3589_);
lean_inc(v_levels_3580_);
v___x_3593_ = l_Lean_mkConst(v___x_3592_, v_levels_3580_);
v___x_3594_ = ((size_t)1ULL);
v___x_3595_ = lean_usize_add(v_i_3582_, v___x_3594_);
v___x_3596_ = l_unsafeCast___redArg(v___x_3593_);
lean_dec_ref(v___x_3593_);
v___x_3597_ = lean_array_uset(v_bs_x27_3591_, v_i_3582_, v___x_3596_);
v_i_3582_ = v___x_3595_;
v_bs_3583_ = v___x_3597_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0___boxed(lean_object* v_levels_3599_, lean_object* v_sz_3600_, lean_object* v_i_3601_, lean_object* v_bs_3602_){
_start:
{
size_t v_sz_boxed_3603_; size_t v_i_boxed_3604_; lean_object* v_res_3605_; 
v_sz_boxed_3603_ = lean_unbox_usize(v_sz_3600_);
lean_dec(v_sz_3600_);
v_i_boxed_3604_ = lean_unbox_usize(v_i_3601_);
lean_dec(v_i_3601_);
v_res_3605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(v_levels_3599_, v_sz_boxed_3603_, v_i_boxed_3604_, v_bs_3602_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(lean_object* v_infos_3606_, lean_object* v_levels_3607_, lean_object* v___y_3608_, lean_object* v_params_3609_, lean_object* v_x_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
size_t v_sz_3616_; size_t v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v_predicates_3620_; size_t v_sz_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v_predicates_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v_sz_3616_ = lean_array_size(v_infos_3606_);
v___x_3617_ = ((size_t)0ULL);
v___x_3618_ = l_unsafeCast___redArg(v_infos_3606_);
lean_inc(v_levels_3607_);
v___x_3619_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(v_levels_3607_, v_sz_3616_, v___x_3617_, v___x_3618_);
v_predicates_3620_ = l_unsafeCast___redArg(v___x_3619_);
lean_dec_ref(v___x_3619_);
v_sz_3621_ = lean_array_size(v_predicates_3620_);
v___x_3622_ = l_unsafeCast___redArg(v_predicates_3620_);
lean_dec(v_predicates_3620_);
v___x_3623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v_params_3609_, v_sz_3621_, v___x_3617_, v___x_3622_);
v_predicates_3624_ = l_unsafeCast___redArg(v___x_3623_);
lean_dec_ref(v___x_3623_);
v___x_3625_ = lean_box(0);
v___x_3626_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(v___y_3608_, v_levels_3607_, v_params_3609_, v_predicates_3624_, v_infos_3606_, v_sz_3616_, v___x_3617_, v___x_3625_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
lean_dec(v_predicates_3624_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3633_ == 0)
{
lean_object* v_unused_3634_; 
v_unused_3634_ = lean_ctor_get(v___x_3626_, 0);
lean_dec(v_unused_3634_);
v___x_3628_ = v___x_3626_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_dec(v___x_3626_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 0, v___x_3625_);
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3625_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
else
{
return v___x_3626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed(lean_object* v_infos_3635_, lean_object* v_levels_3636_, lean_object* v___y_3637_, lean_object* v_params_3638_, lean_object* v_x_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(v_infos_3635_, v_levels_3636_, v___y_3637_, v_params_3638_, v_x_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec_ref(v_x_3639_);
lean_dec_ref(v_infos_3635_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(lean_object* v_as_3646_, size_t v_i_3647_, size_t v_stop_3648_, lean_object* v_b_3649_){
_start:
{
uint8_t v___x_3650_; 
v___x_3650_ = lean_usize_dec_eq(v_i_3647_, v_stop_3648_);
if (v___x_3650_ == 0)
{
lean_object* v___x_3651_; lean_object* v_ctors_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; size_t v___x_3655_; size_t v___x_3656_; 
v___x_3651_ = lean_array_uget_borrowed(v_as_3646_, v_i_3647_);
v_ctors_3652_ = lean_ctor_get(v___x_3651_, 4);
lean_inc(v_ctors_3652_);
v___x_3653_ = lean_array_mk(v_ctors_3652_);
v___x_3654_ = l_Array_append___redArg(v_b_3649_, v___x_3653_);
lean_dec_ref(v___x_3653_);
v___x_3655_ = ((size_t)1ULL);
v___x_3656_ = lean_usize_add(v_i_3647_, v___x_3655_);
v_i_3647_ = v___x_3656_;
v_b_3649_ = v___x_3654_;
goto _start;
}
else
{
return v_b_3649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7___boxed(lean_object* v_as_3658_, lean_object* v_i_3659_, lean_object* v_stop_3660_, lean_object* v_b_3661_){
_start:
{
size_t v_i_boxed_3662_; size_t v_stop_boxed_3663_; lean_object* v_res_3664_; 
v_i_boxed_3662_ = lean_unbox_usize(v_i_3659_);
lean_dec(v_i_3659_);
v_stop_boxed_3663_ = lean_unbox_usize(v_stop_3660_);
lean_dec(v_stop_3660_);
v_res_3664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(v_as_3658_, v_i_boxed_3662_, v_stop_boxed_3663_, v_b_3661_);
lean_dec_ref(v_as_3658_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(lean_object* v_infos_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v_toConstantVal_3676_; lean_object* v_numParams_3677_; lean_object* v_levelParams_3678_; lean_object* v_type_3679_; lean_object* v___x_3680_; lean_object* v_levels_3681_; lean_object* v___y_3683_; lean_object* v___x_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; 
v___x_3673_ = l_Lean_instInhabitedInductiveVal_default;
v___x_3674_ = lean_unsigned_to_nat(0u);
v___x_3675_ = lean_array_get_borrowed(v___x_3673_, v_infos_3667_, v___x_3674_);
v_toConstantVal_3676_ = lean_ctor_get(v___x_3675_, 0);
v_numParams_3677_ = lean_ctor_get(v___x_3675_, 1);
lean_inc(v_numParams_3677_);
v_levelParams_3678_ = lean_ctor_get(v_toConstantVal_3676_, 1);
v_type_3679_ = lean_ctor_get(v_toConstantVal_3676_, 2);
lean_inc_ref(v_type_3679_);
v___x_3680_ = lean_box(0);
lean_inc(v_levelParams_3678_);
v_levels_3681_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_3678_, v___x_3680_);
v___x_3690_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0));
v___x_3691_ = lean_array_get_size(v_infos_3667_);
v___x_3692_ = lean_nat_dec_lt(v___x_3674_, v___x_3691_);
if (v___x_3692_ == 0)
{
v___y_3683_ = v___x_3690_;
goto v___jp_3682_;
}
else
{
size_t v___x_3693_; size_t v___x_3694_; lean_object* v___x_3695_; 
v___x_3693_ = ((size_t)0ULL);
v___x_3694_ = lean_usize_of_nat(v___x_3691_);
v___x_3695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(v_infos_3667_, v___x_3693_, v___x_3694_, v___x_3690_);
v___y_3683_ = v___x_3695_;
goto v___jp_3682_;
}
v___jp_3682_:
{
lean_object* v___f_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; uint8_t v___x_3688_; lean_object* v___x_3689_; 
lean_inc_ref(v_infos_3667_);
v___f_3684_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3684_, 0, v_infos_3667_);
lean_closure_set(v___f_3684_, 1, v_levels_3681_);
lean_closure_set(v___f_3684_, 2, v___y_3683_);
v___x_3685_ = lean_array_get_size(v_infos_3667_);
lean_dec_ref(v_infos_3667_);
v___x_3686_ = lean_nat_sub(v_numParams_3677_, v___x_3685_);
lean_dec(v_numParams_3677_);
v___x_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
v___x_3688_ = 0;
v___x_3689_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_3679_, v___x_3687_, v___f_3684_, v___x_3688_, v___x_3688_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_);
return v___x_3689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___boxed(lean_object* v_infos_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(v_infos_3696_, v_a_3697_, v_a_3698_, v_a_3699_, v_a_3700_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
lean_dec(v_a_3698_);
lean_dec_ref(v_a_3697_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(lean_object* v_00_u03b1_3703_, lean_object* v_constName_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___boxed(lean_object* v_00_u03b1_3711_, lean_object* v_constName_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(v_00_u03b1_3711_, v_constName_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(lean_object* v_00_u03b1_3719_, lean_object* v_ref_3720_, lean_object* v_constName_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_3720_, v_constName_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___boxed(lean_object* v_00_u03b1_3728_, lean_object* v_ref_3729_, lean_object* v_constName_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(v_00_u03b1_3728_, v_ref_3729_, v_constName_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
lean_dec(v_ref_3729_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(lean_object* v_00_u03b1_3737_, lean_object* v_ref_3738_, lean_object* v_msg_3739_, lean_object* v_declHint_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v___x_3746_; 
v___x_3746_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_3738_, v_msg_3739_, v_declHint_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b1_3747_, lean_object* v_ref_3748_, lean_object* v_msg_3749_, lean_object* v_declHint_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(v_00_u03b1_3747_, v_ref_3748_, v_msg_3749_, v_declHint_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
lean_dec(v_ref_3748_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(lean_object* v_msg_3757_, lean_object* v_declHint_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
lean_object* v___x_3764_; 
v___x_3764_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_3757_, v_declHint_3758_, v___y_3762_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___boxed(lean_object* v_msg_3765_, lean_object* v_declHint_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(v_msg_3765_, v_declHint_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec(v___y_3768_);
lean_dec_ref(v___y_3767_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(lean_object* v_00_u03b1_3773_, lean_object* v_ref_3774_, lean_object* v_msg_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_3774_, v_msg_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___boxed(lean_object* v_00_u03b1_3782_, lean_object* v_ref_3783_, lean_object* v_msg_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(v_00_u03b1_3782_, v_ref_3783_, v_msg_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
lean_dec(v_ref_3783_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(lean_object* v___x_3794_, lean_object* v___x_3795_, lean_object* v_params_3796_, size_t v_sz_3797_, size_t v_i_3798_, lean_object* v_bs_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_){
_start:
{
uint8_t v___x_3805_; 
v___x_3805_ = lean_usize_dec_lt(v_i_3798_, v_sz_3797_);
if (v___x_3805_ == 0)
{
lean_object* v___x_3806_; lean_object* v___x_3807_; 
lean_dec_ref(v_params_3796_);
lean_dec(v___x_3794_);
v___x_3806_ = l_unsafeCast___redArg(v_bs_3799_);
lean_dec_ref(v_bs_3799_);
v___x_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
return v___x_3807_;
}
else
{
lean_object* v_v_3808_; lean_object* v___x_3809_; lean_object* v_toConstantVal_3810_; lean_object* v_name_3811_; lean_object* v___x_3812_; lean_object* v_bs_x27_3813_; lean_object* v___y_3815_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v_v_3808_ = lean_array_uget_borrowed(v_bs_3799_, v_i_3798_);
v___x_3809_ = l_unsafeCast___redArg(v_v_3808_);
v_toConstantVal_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc_ref(v_toConstantVal_3810_);
lean_dec(v___x_3809_);
v_name_3811_ = lean_ctor_get(v_toConstantVal_3810_, 0);
lean_inc(v_name_3811_);
lean_dec_ref(v_toConstantVal_3810_);
v___x_3812_ = lean_unsigned_to_nat(0u);
v_bs_x27_3813_ = lean_array_uset(v_bs_3799_, v_i_3798_, v___x_3812_);
v___x_3830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1));
v___x_3831_ = l_Lean_Name_append(v_name_3811_, v___x_3830_);
lean_inc(v___x_3794_);
v___x_3832_ = l_Lean_mkConst(v___x_3831_, v___x_3794_);
v___x_3833_ = l_Lean_Meta_unfoldDefinition(v___x_3832_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; size_t v_sz_3835_; size_t v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; uint8_t v___x_3842_; uint8_t v___x_3843_; lean_object* v___x_3844_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3833_, 1);
v_sz_3835_ = lean_array_size(v___x_3795_);
v___x_3836_ = ((size_t)0ULL);
v___x_3837_ = l_unsafeCast___redArg(v___x_3795_);
v___x_3838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v_params_3796_, v_sz_3835_, v___x_3836_, v___x_3837_);
v___x_3839_ = l_unsafeCast___redArg(v___x_3838_);
lean_dec_ref(v___x_3838_);
lean_inc_ref_n(v_params_3796_, 2);
v___x_3840_ = l_Array_append___redArg(v_params_3796_, v___x_3839_);
lean_dec(v___x_3839_);
v___x_3841_ = l_Lean_mkAppN(v_a_3834_, v___x_3840_);
lean_dec_ref(v___x_3840_);
v___x_3842_ = 0;
v___x_3843_ = 1;
v___x_3844_ = l_Lean_Meta_mkLambdaFVars(v_params_3796_, v___x_3841_, v___x_3842_, v___x_3805_, v___x_3842_, v___x_3805_, v___x_3843_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_);
v___y_3815_ = v___x_3844_;
goto v___jp_3814_;
}
else
{
v___y_3815_ = v___x_3833_;
goto v___jp_3814_;
}
v___jp_3814_:
{
if (lean_obj_tag(v___y_3815_) == 0)
{
lean_object* v_a_3816_; size_t v___x_3817_; size_t v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v_a_3816_ = lean_ctor_get(v___y_3815_, 0);
lean_inc(v_a_3816_);
lean_dec_ref_known(v___y_3815_, 1);
v___x_3817_ = ((size_t)1ULL);
v___x_3818_ = lean_usize_add(v_i_3798_, v___x_3817_);
v___x_3819_ = l_unsafeCast___redArg(v_a_3816_);
lean_dec(v_a_3816_);
v___x_3820_ = lean_array_uset(v_bs_x27_3813_, v_i_3798_, v___x_3819_);
v_i_3798_ = v___x_3818_;
v_bs_3799_ = v___x_3820_;
goto _start;
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec_ref(v_bs_x27_3813_);
lean_dec_ref(v_params_3796_);
lean_dec(v___x_3794_);
v_a_3822_ = lean_ctor_get(v___y_3815_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___y_3815_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___y_3815_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___y_3815_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___boxed(lean_object* v___x_3845_, lean_object* v___x_3846_, lean_object* v_params_3847_, lean_object* v_sz_3848_, lean_object* v_i_3849_, lean_object* v_bs_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
size_t v_sz_boxed_3856_; size_t v_i_boxed_3857_; lean_object* v_res_3858_; 
v_sz_boxed_3856_ = lean_unbox_usize(v_sz_3848_);
lean_dec(v_sz_3848_);
v_i_boxed_3857_ = lean_unbox_usize(v_i_3849_);
lean_dec(v_i_3849_);
v_res_3858_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(v___x_3845_, v___x_3846_, v_params_3847_, v_sz_boxed_3856_, v_i_boxed_3857_, v_bs_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec_ref(v___x_3846_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(lean_object* v___x_3859_, lean_object* v___x_3860_, lean_object* v_params_3861_, size_t v_sz_3862_, size_t v_i_3863_, lean_object* v_bs_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(v___x_3859_, v___x_3860_, v_params_3861_, v_sz_3862_, v_i_3863_, v_bs_3864_, v___y_3867_, v___y_3868_, v___y_3869_, v___y_3870_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___boxed(lean_object* v___x_3873_, lean_object* v___x_3874_, lean_object* v_params_3875_, lean_object* v_sz_3876_, lean_object* v_i_3877_, lean_object* v_bs_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
size_t v_sz_boxed_3886_; size_t v_i_boxed_3887_; lean_object* v_res_3888_; 
v_sz_boxed_3886_ = lean_unbox_usize(v_sz_3876_);
lean_dec(v_sz_3876_);
v_i_boxed_3887_ = lean_unbox_usize(v_i_3877_);
lean_dec(v_i_3877_);
v_res_3888_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(v___x_3873_, v___x_3874_, v_params_3875_, v_sz_boxed_3886_, v_i_boxed_3887_, v_bs_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
lean_dec(v___y_3882_);
lean_dec_ref(v___y_3881_);
lean_dec(v___y_3880_);
lean_dec_ref(v___y_3879_);
lean_dec_ref(v___x_3874_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0(lean_object* v___x_3889_, lean_object* v___x_3890_, size_t v_sz_3891_, size_t v___x_3892_, lean_object* v___x_3893_, lean_object* v_params_3894_, lean_object* v_x_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_5770__overap_3906_; lean_object* v___x_3907_; 
v___x_3903_ = lean_box_usize(v_sz_3891_);
v___x_3904_ = lean_box_usize(v___x_3892_);
v___x_3905_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___boxed), 13, 6);
lean_closure_set(v___x_3905_, 0, v___x_3889_);
lean_closure_set(v___x_3905_, 1, v___x_3890_);
lean_closure_set(v___x_3905_, 2, v_params_3894_);
lean_closure_set(v___x_3905_, 3, v___x_3903_);
lean_closure_set(v___x_3905_, 4, v___x_3904_);
lean_closure_set(v___x_3905_, 5, v___x_3893_);
v___x_5770__overap_3906_ = l_unsafeCast___redArg(v___x_3905_);
lean_dec_ref(v___x_3905_);
lean_inc(v___y_3901_);
lean_inc_ref(v___y_3900_);
lean_inc(v___y_3899_);
lean_inc_ref(v___y_3898_);
lean_inc(v___y_3897_);
lean_inc_ref(v___y_3896_);
v___x_3907_ = lean_apply_7(v___x_5770__overap_3906_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_, lean_box(0));
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0___boxed(lean_object* v___x_3908_, lean_object* v___x_3909_, lean_object* v_sz_3910_, lean_object* v___x_3911_, lean_object* v___x_3912_, lean_object* v_params_3913_, lean_object* v_x_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
size_t v_sz_boxed_3922_; size_t v___x_5931__boxed_3923_; lean_object* v_res_3924_; 
v_sz_boxed_3922_ = lean_unbox_usize(v_sz_3910_);
lean_dec(v_sz_3910_);
v___x_5931__boxed_3923_ = lean_unbox_usize(v___x_3911_);
lean_dec(v___x_3911_);
v_res_3924_ = l_Lean_Elab_Command_elabCoinductive___lam__0(v___x_3908_, v___x_3909_, v_sz_boxed_3922_, v___x_5931__boxed_3923_, v___x_3912_, v_params_3913_, v_x_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec(v___y_3916_);
lean_dec_ref(v___y_3915_);
lean_dec_ref(v_x_3914_);
return v_res_3924_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(lean_object* v___x_3925_, uint8_t v___x_3926_, lean_object* v_attr_3927_){
_start:
{
lean_object* v_name_3928_; lean_object* v___x_3929_; 
v_name_3928_ = lean_ctor_get(v_attr_3927_, 0);
lean_inc(v_name_3928_);
lean_dec_ref(v_attr_3927_);
v___x_3929_ = l_Lean_getAttributeImpl(v___x_3925_, v_name_3928_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_dec_ref_known(v___x_3929_, 1);
return v___x_3926_;
}
else
{
lean_object* v_a_3930_; lean_object* v_toAttributeImplCore_3931_; uint8_t v_applicationTime_3932_; uint8_t v___x_3933_; uint8_t v___x_3934_; 
v_a_3930_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_a_3930_);
lean_dec_ref_known(v___x_3929_, 1);
v_toAttributeImplCore_3931_ = lean_ctor_get(v_a_3930_, 0);
lean_inc_ref(v_toAttributeImplCore_3931_);
lean_dec(v_a_3930_);
v_applicationTime_3932_ = lean_ctor_get_uint8(v_toAttributeImplCore_3931_, sizeof(void*)*3);
lean_dec_ref(v_toAttributeImplCore_3931_);
v___x_3933_ = 1;
v___x_3934_ = l_Lean_instBEqAttributeApplicationTime_beq(v_applicationTime_3932_, v___x_3933_);
if (v___x_3934_ == 0)
{
return v___x_3926_;
}
else
{
uint8_t v___x_3935_; 
v___x_3935_ = 0;
return v___x_3935_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed(lean_object* v___x_3936_, lean_object* v___x_3937_, lean_object* v_attr_3938_){
_start:
{
uint8_t v___x_5974__boxed_3939_; uint8_t v_res_3940_; lean_object* v_r_3941_; 
v___x_5974__boxed_3939_ = lean_unbox(v___x_3937_);
v_res_3940_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(v___x_3936_, v___x_5974__boxed_3939_, v_attr_3938_);
v_r_3941_ = lean_box(v_res_3940_);
return v_r_3941_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; 
v___x_3942_ = l_Lean_instInhabitedExpr;
v___x_3943_ = l_Lean_instInhabitedName;
v___x_3944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
lean_ctor_set(v___x_3944_, 1, v___x_3942_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(lean_object* v_coinductiveElabData_3945_, lean_object* v___x_3946_, lean_object* v_a_3947_, lean_object* v___x_3948_, size_t v_sz_3949_, size_t v_i_3950_, lean_object* v_bs_3951_){
_start:
{
uint8_t v___x_3952_; 
v___x_3952_ = lean_usize_dec_lt(v_i_3950_, v_sz_3949_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; 
lean_dec(v___x_3948_);
lean_dec_ref(v___x_3946_);
v___x_3953_ = l_unsafeCast___redArg(v_bs_3951_);
lean_dec_ref(v_bs_3951_);
return v___x_3953_;
}
else
{
lean_object* v___x_3954_; lean_object* v_v_3955_; lean_object* v___x_3956_; lean_object* v_bs_x27_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v_modifiers_3960_; lean_object* v_ref_3961_; uint8_t v_isGreatest_3962_; lean_object* v_monotonicity_x3f_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_4007_; 
v___x_3954_ = l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
v_v_3955_ = lean_array_uget(v_bs_3951_, v_i_3950_);
v___x_3956_ = lean_unsigned_to_nat(0u);
v_bs_x27_3957_ = lean_array_uset(v_bs_3951_, v_i_3950_, v___x_3956_);
v___x_3958_ = lean_usize_to_nat(v_i_3950_);
v___x_3959_ = lean_array_get(v___x_3954_, v_coinductiveElabData_3945_, v___x_3958_);
v_modifiers_3960_ = lean_ctor_get(v___x_3959_, 3);
v_ref_3961_ = lean_ctor_get(v___x_3959_, 2);
v_isGreatest_3962_ = lean_ctor_get_uint8(v___x_3959_, sizeof(void*)*6);
v_monotonicity_x3f_3963_ = lean_ctor_get(v___x_3959_, 5);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_4007_ == 0)
{
lean_object* v_unused_4008_; lean_object* v_unused_4009_; lean_object* v_unused_4010_; 
v_unused_4008_ = lean_ctor_get(v___x_3959_, 4);
lean_dec(v_unused_4008_);
v_unused_4009_ = lean_ctor_get(v___x_3959_, 1);
lean_dec(v_unused_4009_);
v_unused_4010_ = lean_ctor_get(v___x_3959_, 0);
lean_dec(v_unused_4010_);
v___x_3965_ = v___x_3959_;
v_isShared_3966_ = v_isSharedCheck_4007_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_monotonicity_x3f_3963_);
lean_inc(v_modifiers_3960_);
lean_inc(v_ref_3961_);
lean_dec(v___x_3959_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_4007_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v_stx_3967_; uint8_t v_visibility_3968_; uint8_t v_isProtected_3969_; uint8_t v_computeKind_3970_; uint8_t v_recKind_3971_; uint8_t v_isUnsafe_3972_; lean_object* v_attrs_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_4005_; 
v_stx_3967_ = lean_ctor_get(v_modifiers_3960_, 0);
v_visibility_3968_ = lean_ctor_get_uint8(v_modifiers_3960_, sizeof(void*)*3);
v_isProtected_3969_ = lean_ctor_get_uint8(v_modifiers_3960_, sizeof(void*)*3 + 1);
v_computeKind_3970_ = lean_ctor_get_uint8(v_modifiers_3960_, sizeof(void*)*3 + 2);
v_recKind_3971_ = lean_ctor_get_uint8(v_modifiers_3960_, sizeof(void*)*3 + 3);
v_isUnsafe_3972_ = lean_ctor_get_uint8(v_modifiers_3960_, sizeof(void*)*3 + 4);
v_attrs_3973_ = lean_ctor_get(v_modifiers_3960_, 2);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_modifiers_3960_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v_modifiers_3960_, 1);
lean_dec(v_unused_4006_);
v___x_3975_ = v_modifiers_3960_;
v_isShared_3976_ = v_isSharedCheck_4005_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_attrs_3973_);
lean_inc(v_stx_3967_);
lean_dec(v_modifiers_3960_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_4005_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v_fst_3979_; lean_object* v_snd_3980_; lean_object* v___x_3981_; lean_object* v___f_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3986_; 
v___x_3977_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0);
v___x_3978_ = lean_array_get_borrowed(v___x_3977_, v_a_3947_, v___x_3958_);
lean_dec(v___x_3958_);
v_fst_3979_ = lean_ctor_get(v___x_3978_, 0);
v_snd_3980_ = lean_ctor_get(v___x_3978_, 1);
v___x_3981_ = lean_box(v___x_3952_);
lean_inc_ref(v___x_3946_);
v___f_3982_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3982_, 0, v___x_3946_);
lean_closure_set(v___f_3982_, 1, v___x_3981_);
v___x_3983_ = l_unsafeCast___redArg(v_v_3955_);
lean_dec(v_v_3955_);
v___x_3984_ = lean_box(0);
if (v_isShared_3976_ == 0)
{
lean_ctor_set(v___x_3975_, 1, v___x_3984_);
v___x_3986_ = v___x_3975_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_stx_3967_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_4004_, 2, v_attrs_3973_);
lean_ctor_set_uint8(v_reuseFailAlloc_4004_, sizeof(void*)*3, v_visibility_3968_);
lean_ctor_set_uint8(v_reuseFailAlloc_4004_, sizeof(void*)*3 + 1, v_isProtected_3969_);
lean_ctor_set_uint8(v_reuseFailAlloc_4004_, sizeof(void*)*3 + 2, v_computeKind_3970_);
lean_ctor_set_uint8(v_reuseFailAlloc_4004_, sizeof(void*)*3 + 3, v_recKind_3971_);
lean_ctor_set_uint8(v_reuseFailAlloc_4004_, sizeof(void*)*3 + 4, v_isUnsafe_3972_);
v___x_3986_ = v_reuseFailAlloc_4004_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
lean_object* v___x_3987_; uint8_t v___x_3988_; uint8_t v___y_3990_; 
v___x_3987_ = l_Lean_Elab_Modifiers_filterAttrs(v___x_3986_, v___f_3982_);
v___x_3988_ = 0;
if (v_isGreatest_3962_ == 0)
{
uint8_t v___x_4002_; 
v___x_4002_ = 2;
v___y_3990_ = v___x_4002_;
goto v___jp_3989_;
}
else
{
uint8_t v___x_4003_; 
v___x_4003_ = 1;
v___y_3990_ = v___x_4003_;
goto v___jp_3989_;
}
v___jp_3989_:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3994_; 
lean_inc_n(v_ref_3961_, 2);
v___x_3991_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3991_, 0, v_ref_3961_);
lean_ctor_set(v___x_3991_, 1, v_monotonicity_x3f_3963_);
lean_ctor_set_uint8(v___x_3991_, sizeof(void*)*2, v___y_3990_);
v___x_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3991_);
if (v_isShared_3966_ == 0)
{
lean_ctor_set(v___x_3965_, 5, v___x_3956_);
lean_ctor_set(v___x_3965_, 4, v___x_3984_);
lean_ctor_set(v___x_3965_, 3, v___x_3992_);
lean_ctor_set(v___x_3965_, 2, v___x_3984_);
lean_ctor_set(v___x_3965_, 1, v___x_3984_);
lean_ctor_set(v___x_3965_, 0, v_ref_3961_);
v___x_3994_ = v___x_3965_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_ref_3961_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_4001_, 2, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_4001_, 3, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4001_, 4, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_4001_, 5, v___x_3956_);
v___x_3994_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3995_; size_t v___x_3996_; size_t v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
lean_ctor_set_uint8(v___x_3994_, sizeof(void*)*6, v___x_3952_);
lean_inc(v_snd_3980_);
lean_inc(v_fst_3979_);
lean_inc(v___x_3948_);
lean_inc(v_ref_3961_);
v___x_3995_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_3995_, 0, v_ref_3961_);
lean_ctor_set(v___x_3995_, 1, v___x_3948_);
lean_ctor_set(v___x_3995_, 2, v___x_3987_);
lean_ctor_set(v___x_3995_, 3, v_fst_3979_);
lean_ctor_set(v___x_3995_, 4, v_ref_3961_);
lean_ctor_set(v___x_3995_, 5, v___x_3956_);
lean_ctor_set(v___x_3995_, 6, v_snd_3980_);
lean_ctor_set(v___x_3995_, 7, v___x_3983_);
lean_ctor_set(v___x_3995_, 8, v___x_3994_);
lean_ctor_set_uint8(v___x_3995_, sizeof(void*)*9, v___x_3988_);
v___x_3996_ = ((size_t)1ULL);
v___x_3997_ = lean_usize_add(v_i_3950_, v___x_3996_);
v___x_3998_ = l_unsafeCast___redArg(v___x_3995_);
lean_dec_ref_known(v___x_3995_, 9);
v___x_3999_ = lean_array_uset(v_bs_x27_3957_, v_i_3950_, v___x_3998_);
v_i_3950_ = v___x_3997_;
v_bs_3951_ = v___x_3999_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___boxed(lean_object* v_coinductiveElabData_4011_, lean_object* v___x_4012_, lean_object* v_a_4013_, lean_object* v___x_4014_, lean_object* v_sz_4015_, lean_object* v_i_4016_, lean_object* v_bs_4017_){
_start:
{
size_t v_sz_boxed_4018_; size_t v_i_boxed_4019_; lean_object* v_res_4020_; 
v_sz_boxed_4018_ = lean_unbox_usize(v_sz_4015_);
lean_dec(v_sz_4015_);
v_i_boxed_4019_ = lean_unbox_usize(v_i_4016_);
lean_dec(v_i_4016_);
v_res_4020_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_4011_, v___x_4012_, v_a_4013_, v___x_4014_, v_sz_boxed_4018_, v_i_boxed_4019_, v_bs_4017_);
lean_dec_ref(v_a_4013_);
lean_dec_ref(v_coinductiveElabData_4011_);
return v_res_4020_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4022_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0));
v___x_4023_ = l_Lean_stringToMessageData(v___x_4022_);
return v___x_4023_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(lean_object* v_constName_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v___x_4032_; lean_object* v_env_4033_; lean_object* v___x_4034_; 
v___x_4032_ = lean_st_ref_get(v___y_4030_);
v_env_4033_ = lean_ctor_get(v___x_4032_, 0);
lean_inc_ref(v_env_4033_);
lean_dec(v___x_4032_);
lean_inc(v_constName_4024_);
v___x_4034_ = l_Lean_isInductiveCore_x3f(v_env_4033_, v_constName_4024_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v___x_4035_; uint8_t v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4035_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_4036_ = 0;
v___x_4037_ = l_Lean_MessageData_ofConstName(v_constName_4024_, v___x_4036_);
v___x_4038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4035_);
lean_ctor_set(v___x_4038_, 1, v___x_4037_);
v___x_4039_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1);
v___x_4040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4038_);
lean_ctor_set(v___x_4040_, 1, v___x_4039_);
v___x_4041_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v___x_4040_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
return v___x_4041_;
}
else
{
lean_object* v_val_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
lean_dec(v_constName_4024_);
v_val_4042_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_4034_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_val_4042_);
lean_dec(v___x_4034_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
lean_ctor_set_tag(v___x_4044_, 0);
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_val_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___boxed(lean_object* v_constName_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(v_constName_4050_, v___y_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec_ref(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(size_t v_sz_4059_, size_t v_i_4060_, lean_object* v_bs_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
uint8_t v___x_4069_; 
v___x_4069_ = lean_usize_dec_lt(v_i_4060_, v_sz_4059_);
if (v___x_4069_ == 0)
{
lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___x_4070_ = l_unsafeCast___redArg(v_bs_4061_);
lean_dec_ref(v_bs_4061_);
v___x_4071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4070_);
return v___x_4071_;
}
else
{
lean_object* v_v_4072_; lean_object* v___x_4073_; lean_object* v_declName_4074_; lean_object* v___x_4075_; lean_object* v_bs_x27_4076_; lean_object* v___x_4077_; 
v_v_4072_ = lean_array_uget_borrowed(v_bs_4061_, v_i_4060_);
v___x_4073_ = l_unsafeCast___redArg(v_v_4072_);
v_declName_4074_ = lean_ctor_get(v___x_4073_, 1);
lean_inc(v_declName_4074_);
lean_dec(v___x_4073_);
v___x_4075_ = lean_unsigned_to_nat(0u);
v_bs_x27_4076_ = lean_array_uset(v_bs_4061_, v_i_4060_, v___x_4075_);
v___x_4077_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(v_declName_4074_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_a_4078_; size_t v___x_4079_; size_t v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
lean_inc(v_a_4078_);
lean_dec_ref_known(v___x_4077_, 1);
v___x_4079_ = ((size_t)1ULL);
v___x_4080_ = lean_usize_add(v_i_4060_, v___x_4079_);
v___x_4081_ = l_unsafeCast___redArg(v_a_4078_);
lean_dec(v_a_4078_);
v___x_4082_ = lean_array_uset(v_bs_x27_4076_, v_i_4060_, v___x_4081_);
v_i_4060_ = v___x_4080_;
v_bs_4061_ = v___x_4082_;
goto _start;
}
else
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
lean_dec_ref(v_bs_x27_4076_);
v_a_4084_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_4077_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_4077_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4084_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1___boxed(lean_object* v_sz_4092_, lean_object* v_i_4093_, lean_object* v_bs_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
size_t v_sz_boxed_4102_; size_t v_i_boxed_4103_; lean_object* v_res_4104_; 
v_sz_boxed_4102_ = lean_unbox_usize(v_sz_4092_);
lean_dec(v_sz_4092_);
v_i_boxed_4103_ = lean_unbox_usize(v_i_4093_);
lean_dec(v_i_4093_);
v_res_4104_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(v_sz_boxed_4102_, v_i_boxed_4103_, v_bs_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(lean_object* v_a_4105_, lean_object* v_a_4106_){
_start:
{
if (lean_obj_tag(v_a_4105_) == 0)
{
lean_object* v___x_4107_; 
v___x_4107_ = l_List_reverse___redArg(v_a_4106_);
return v___x_4107_;
}
else
{
lean_object* v_head_4108_; lean_object* v_tail_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4118_; 
v_head_4108_ = lean_ctor_get(v_a_4105_, 0);
v_tail_4109_ = lean_ctor_get(v_a_4105_, 1);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_a_4105_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4111_ = v_a_4105_;
v_isShared_4112_ = v_isSharedCheck_4118_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_tail_4109_);
lean_inc(v_head_4108_);
lean_dec(v_a_4105_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4118_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4113_; lean_object* v___x_4115_; 
v___x_4113_ = l_Lean_MessageData_ofName(v_head_4108_);
if (v_isShared_4112_ == 0)
{
lean_ctor_set(v___x_4111_, 1, v_a_4106_);
lean_ctor_set(v___x_4111_, 0, v___x_4113_);
v___x_4115_ = v___x_4111_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4113_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_a_4106_);
v___x_4115_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
v_a_4105_ = v_tail_4109_;
v_a_4106_ = v___x_4115_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(size_t v_sz_4119_, size_t v_i_4120_, lean_object* v_bs_4121_){
_start:
{
uint8_t v___x_4122_; 
v___x_4122_ = lean_usize_dec_lt(v_i_4120_, v_sz_4119_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; 
v___x_4123_ = l_unsafeCast___redArg(v_bs_4121_);
lean_dec_ref(v_bs_4121_);
return v___x_4123_;
}
else
{
lean_object* v_v_4124_; lean_object* v___x_4125_; lean_object* v_declName_4126_; lean_object* v___x_4127_; lean_object* v_bs_x27_4128_; size_t v___x_4129_; size_t v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
v_v_4124_ = lean_array_uget_borrowed(v_bs_4121_, v_i_4120_);
v___x_4125_ = l_unsafeCast___redArg(v_v_4124_);
v_declName_4126_ = lean_ctor_get(v___x_4125_, 1);
lean_inc(v_declName_4126_);
lean_dec(v___x_4125_);
v___x_4127_ = lean_unsigned_to_nat(0u);
v_bs_x27_4128_ = lean_array_uset(v_bs_4121_, v_i_4120_, v___x_4127_);
v___x_4129_ = ((size_t)1ULL);
v___x_4130_ = lean_usize_add(v_i_4120_, v___x_4129_);
v___x_4131_ = l_unsafeCast___redArg(v_declName_4126_);
lean_dec(v_declName_4126_);
v___x_4132_ = lean_array_uset(v_bs_x27_4128_, v_i_4120_, v___x_4131_);
v_i_4120_ = v___x_4130_;
v_bs_4121_ = v___x_4132_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6___boxed(lean_object* v_sz_4134_, lean_object* v_i_4135_, lean_object* v_bs_4136_){
_start:
{
size_t v_sz_boxed_4137_; size_t v_i_boxed_4138_; lean_object* v_res_4139_; 
v_sz_boxed_4137_ = lean_unbox_usize(v_sz_4134_);
lean_dec(v_sz_4134_);
v_i_boxed_4138_ = lean_unbox_usize(v_i_4135_);
lean_dec(v_i_4135_);
v_res_4139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(v_sz_boxed_4137_, v_i_boxed_4138_, v_bs_4136_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(lean_object* v___x_4140_, lean_object* v___x_4141_, lean_object* v___x_4142_, uint8_t v___x_4143_, lean_object* v_args_4144_, lean_object* v_body_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_){
_start:
{
lean_object* v_numParams_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; uint8_t v___x_4160_; uint8_t v___x_4161_; lean_object* v___x_4162_; 
v_numParams_4153_ = lean_ctor_get(v___x_4140_, 1);
lean_inc(v_numParams_4153_);
lean_dec(v___x_4140_);
lean_inc_ref(v_args_4144_);
v___x_4154_ = l_Array_toSubarray___redArg(v_args_4144_, v___x_4141_, v___x_4142_);
v___x_4155_ = l_Subarray_copy___redArg(v___x_4154_);
v___x_4156_ = lean_array_get_size(v_args_4144_);
v___x_4157_ = l_Array_toSubarray___redArg(v_args_4144_, v_numParams_4153_, v___x_4156_);
v___x_4158_ = l_Subarray_copy___redArg(v___x_4157_);
v___x_4159_ = l_Array_append___redArg(v___x_4155_, v___x_4158_);
lean_dec_ref(v___x_4158_);
v___x_4160_ = 0;
v___x_4161_ = 1;
v___x_4162_ = l_Lean_Meta_mkForallFVars(v___x_4159_, v_body_4145_, v___x_4160_, v___x_4143_, v___x_4143_, v___x_4161_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
return v___x_4162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed(lean_object* v___x_4163_, lean_object* v___x_4164_, lean_object* v___x_4165_, lean_object* v___x_4166_, lean_object* v_args_4167_, lean_object* v_body_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
uint8_t v___x_6273__boxed_4176_; lean_object* v_res_4177_; 
v___x_6273__boxed_4176_ = lean_unbox(v___x_4166_);
v_res_4177_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(v___x_4163_, v___x_4164_, v___x_4165_, v___x_6273__boxed_4176_, v_args_4167_, v_body_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(lean_object* v___x_4178_, size_t v_sz_4179_, size_t v_i_4180_, lean_object* v_bs_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
uint8_t v___x_4189_; 
v___x_4189_ = lean_usize_dec_lt(v_i_4180_, v_sz_4179_);
if (v___x_4189_ == 0)
{
lean_object* v___x_4190_; lean_object* v___x_4191_; 
lean_dec(v___x_4178_);
v___x_4190_ = l_unsafeCast___redArg(v_bs_4181_);
lean_dec_ref(v_bs_4181_);
v___x_4191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4191_, 0, v___x_4190_);
return v___x_4191_;
}
else
{
lean_object* v_v_4192_; lean_object* v___x_4193_; lean_object* v_toConstantVal_4194_; lean_object* v_name_4195_; lean_object* v_type_4196_; lean_object* v___x_4197_; lean_object* v_bs_x27_4198_; lean_object* v___x_4199_; lean_object* v___f_4200_; uint8_t v___x_4201_; lean_object* v___x_4202_; 
v_v_4192_ = lean_array_uget_borrowed(v_bs_4181_, v_i_4180_);
v___x_4193_ = l_unsafeCast___redArg(v_v_4192_);
v_toConstantVal_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc_ref(v_toConstantVal_4194_);
v_name_4195_ = lean_ctor_get(v_toConstantVal_4194_, 0);
lean_inc(v_name_4195_);
v_type_4196_ = lean_ctor_get(v_toConstantVal_4194_, 2);
lean_inc_ref(v_type_4196_);
lean_dec_ref(v_toConstantVal_4194_);
v___x_4197_ = lean_unsigned_to_nat(0u);
v_bs_x27_4198_ = lean_array_uset(v_bs_4181_, v_i_4180_, v___x_4197_);
v___x_4199_ = lean_box(v___x_4189_);
lean_inc(v___x_4178_);
v___f_4200_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed), 13, 4);
lean_closure_set(v___f_4200_, 0, v___x_4193_);
lean_closure_set(v___f_4200_, 1, v___x_4197_);
lean_closure_set(v___f_4200_, 2, v___x_4178_);
lean_closure_set(v___f_4200_, 3, v___x_4199_);
v___x_4201_ = 0;
v___x_4202_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_4196_, v___f_4200_, v___x_4201_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; size_t v___x_4206_; size_t v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
lean_inc(v_a_4203_);
lean_dec_ref_known(v___x_4202_, 1);
v___x_4204_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_4195_);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4204_);
lean_ctor_set(v___x_4205_, 1, v_a_4203_);
v___x_4206_ = ((size_t)1ULL);
v___x_4207_ = lean_usize_add(v_i_4180_, v___x_4206_);
v___x_4208_ = l_unsafeCast___redArg(v___x_4205_);
lean_dec_ref_known(v___x_4205_, 2);
v___x_4209_ = lean_array_uset(v_bs_x27_4198_, v_i_4180_, v___x_4208_);
v_i_4180_ = v___x_4207_;
v_bs_4181_ = v___x_4209_;
goto _start;
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4218_; 
lean_dec_ref(v_bs_x27_4198_);
lean_dec(v_name_4195_);
lean_dec(v___x_4178_);
v_a_4211_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4213_ = v___x_4202_;
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4202_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4216_; 
if (v_isShared_4214_ == 0)
{
v___x_4216_ = v___x_4213_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4211_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___boxed(lean_object* v___x_4219_, lean_object* v_sz_4220_, lean_object* v_i_4221_, lean_object* v_bs_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
size_t v_sz_boxed_4230_; size_t v_i_boxed_4231_; lean_object* v_res_4232_; 
v_sz_boxed_4230_ = lean_unbox_usize(v_sz_4220_);
lean_dec(v_sz_4220_);
v_i_boxed_4231_ = lean_unbox_usize(v_i_4221_);
lean_dec(v_i_4221_);
v_res_4232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(v___x_4219_, v_sz_boxed_4230_, v_i_boxed_4231_, v_bs_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(lean_object* v___x_4233_, size_t v_sz_4234_, size_t v_i_4235_, lean_object* v_bs_4236_){
_start:
{
uint8_t v___x_4237_; 
v___x_4237_ = lean_usize_dec_lt(v_i_4235_, v_sz_4234_);
if (v___x_4237_ == 0)
{
lean_object* v___x_4238_; 
lean_dec(v___x_4233_);
v___x_4238_ = l_unsafeCast___redArg(v_bs_4236_);
lean_dec_ref(v_bs_4236_);
return v___x_4238_;
}
else
{
lean_object* v_v_4239_; lean_object* v___x_4240_; lean_object* v_fst_4241_; lean_object* v___x_4242_; lean_object* v_bs_x27_4243_; lean_object* v___x_4244_; size_t v___x_4245_; size_t v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v_v_4239_ = lean_array_uget_borrowed(v_bs_4236_, v_i_4235_);
v___x_4240_ = l_unsafeCast___redArg(v_v_4239_);
v_fst_4241_ = lean_ctor_get(v___x_4240_, 0);
lean_inc(v_fst_4241_);
lean_dec(v___x_4240_);
v___x_4242_ = lean_unsigned_to_nat(0u);
v_bs_x27_4243_ = lean_array_uset(v_bs_4236_, v_i_4235_, v___x_4242_);
lean_inc(v___x_4233_);
v___x_4244_ = l_Lean_mkConst(v_fst_4241_, v___x_4233_);
v___x_4245_ = ((size_t)1ULL);
v___x_4246_ = lean_usize_add(v_i_4235_, v___x_4245_);
v___x_4247_ = l_unsafeCast___redArg(v___x_4244_);
lean_dec_ref(v___x_4244_);
v___x_4248_ = lean_array_uset(v_bs_x27_4243_, v_i_4235_, v___x_4247_);
v_i_4235_ = v___x_4246_;
v_bs_4236_ = v___x_4248_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3___boxed(lean_object* v___x_4250_, lean_object* v_sz_4251_, lean_object* v_i_4252_, lean_object* v_bs_4253_){
_start:
{
size_t v_sz_boxed_4254_; size_t v_i_boxed_4255_; lean_object* v_res_4256_; 
v_sz_boxed_4254_ = lean_unbox_usize(v_sz_4251_);
lean_dec(v_sz_4251_);
v_i_boxed_4255_ = lean_unbox_usize(v_i_4252_);
lean_dec(v_i_4252_);
v_res_4256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(v___x_4250_, v_sz_boxed_4254_, v_i_boxed_4255_, v_bs_4253_);
return v_res_4256_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCoinductive___closed__1(void){
_start:
{
lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___x_4258_ = ((lean_object*)(l_Lean_Elab_Command_elabCoinductive___closed__0));
v___x_4259_ = l_Lean_stringToMessageData(v___x_4258_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive(lean_object* v_coinductiveElabData_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_){
_start:
{
lean_object* v_toCold_4268_; lean_object* v_options_4269_; lean_object* v_inheritedTraceOptions_4270_; uint8_t v_hasTrace_4271_; lean_object* v___x_4272_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; 
v_toCold_4268_ = lean_ctor_get(v_a_4265_, 0);
v_options_4269_ = lean_ctor_get(v_toCold_4268_, 2);
v_inheritedTraceOptions_4270_ = lean_ctor_get(v_toCold_4268_, 11);
v_hasTrace_4271_ = lean_ctor_get_uint8(v_options_4269_, sizeof(void*)*1);
v___x_4272_ = l_Lean_instInhabitedInductiveVal_default;
if (v_hasTrace_4271_ == 0)
{
v___y_4274_ = v_a_4261_;
v___y_4275_ = v_a_4262_;
v___y_4276_ = v_a_4263_;
v___y_4277_ = v_a_4264_;
v___y_4278_ = v_a_4265_;
v___y_4279_ = v_a_4266_;
goto v___jp_4273_;
}
else
{
lean_object* v_cls_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; 
v_cls_4355_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_4356_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4);
v___x_4357_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4270_, v_options_4269_, v___x_4356_);
if (v___x_4357_ == 0)
{
v___y_4274_ = v_a_4261_;
v___y_4275_ = v_a_4262_;
v___y_4276_ = v_a_4263_;
v___y_4277_ = v_a_4264_;
v___y_4278_ = v_a_4265_;
v___y_4279_ = v_a_4266_;
goto v___jp_4273_;
}
else
{
lean_object* v___x_4358_; size_t v_sz_4359_; size_t v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; 
v___x_4358_ = lean_obj_once(&l_Lean_Elab_Command_elabCoinductive___closed__1, &l_Lean_Elab_Command_elabCoinductive___closed__1_once, _init_l_Lean_Elab_Command_elabCoinductive___closed__1);
v_sz_4359_ = lean_array_size(v_coinductiveElabData_4260_);
v___x_4360_ = ((size_t)0ULL);
v___x_4361_ = l_unsafeCast___redArg(v_coinductiveElabData_4260_);
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(v_sz_4359_, v___x_4360_, v___x_4361_);
v___x_4363_ = l_unsafeCast___redArg(v___x_4362_);
lean_dec_ref(v___x_4362_);
v___x_4364_ = lean_array_to_list(v___x_4363_);
v___x_4365_ = lean_box(0);
v___x_4366_ = l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(v___x_4364_, v___x_4365_);
v___x_4367_ = l_Lean_MessageData_ofList(v___x_4366_);
v___x_4368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4358_);
lean_ctor_set(v___x_4368_, 1, v___x_4367_);
v___x_4369_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_4355_, v___x_4368_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_);
if (lean_obj_tag(v___x_4369_) == 0)
{
lean_dec_ref_known(v___x_4369_, 1);
v___y_4274_ = v_a_4261_;
v___y_4275_ = v_a_4262_;
v___y_4276_ = v_a_4263_;
v___y_4277_ = v_a_4264_;
v___y_4278_ = v_a_4265_;
v___y_4279_ = v_a_4266_;
goto v___jp_4273_;
}
else
{
lean_dec_ref(v_coinductiveElabData_4260_);
return v___x_4369_;
}
}
}
v___jp_4273_:
{
size_t v_sz_4280_; size_t v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_5691__overap_4286_; lean_object* v___x_4287_; 
v_sz_4280_ = lean_array_size(v_coinductiveElabData_4260_);
v___x_4281_ = ((size_t)0ULL);
v___x_4282_ = l_unsafeCast___redArg(v_coinductiveElabData_4260_);
v___x_4283_ = lean_box_usize(v_sz_4280_);
v___x_4284_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
v___x_4285_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1___boxed), 10, 3);
lean_closure_set(v___x_4285_, 0, v___x_4283_);
lean_closure_set(v___x_4285_, 1, v___x_4284_);
lean_closure_set(v___x_4285_, 2, v___x_4282_);
v___x_5691__overap_4286_ = l_unsafeCast___redArg(v___x_4285_);
lean_dec_ref(v___x_4285_);
lean_inc(v___y_4279_);
lean_inc_ref(v___y_4278_);
lean_inc(v___y_4277_);
lean_inc_ref(v___y_4276_);
lean_inc(v___y_4275_);
lean_inc_ref(v___y_4274_);
v___x_4287_ = lean_apply_7(v___x_5691__overap_4286_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, lean_box(0));
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v_toConstantVal_4291_; lean_object* v_numParams_4292_; lean_object* v_levelParams_4293_; lean_object* v_type_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; size_t v_sz_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_5694__overap_4304_; lean_object* v___x_4305_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4287_, 1);
v___x_4289_ = lean_unsigned_to_nat(0u);
v___x_4290_ = lean_array_get_borrowed(v___x_4272_, v_a_4288_, v___x_4289_);
v_toConstantVal_4291_ = lean_ctor_get(v___x_4290_, 0);
v_numParams_4292_ = lean_ctor_get(v___x_4290_, 1);
v_levelParams_4293_ = lean_ctor_get(v_toConstantVal_4291_, 1);
v_type_4294_ = lean_ctor_get(v_toConstantVal_4291_, 2);
v___x_4295_ = lean_box(0);
lean_inc(v_levelParams_4293_);
v___x_4296_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_4293_, v___x_4295_);
v___x_4297_ = lean_array_get_size(v_a_4288_);
v___x_4298_ = lean_nat_sub(v_numParams_4292_, v___x_4297_);
v_sz_4299_ = lean_array_size(v_a_4288_);
v___x_4300_ = l_unsafeCast___redArg(v_a_4288_);
v___x_4301_ = lean_box_usize(v_sz_4299_);
v___x_4302_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
lean_inc(v___x_4300_);
lean_inc(v___x_4298_);
v___x_4303_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___boxed), 11, 4);
lean_closure_set(v___x_4303_, 0, v___x_4298_);
lean_closure_set(v___x_4303_, 1, v___x_4301_);
lean_closure_set(v___x_4303_, 2, v___x_4302_);
lean_closure_set(v___x_4303_, 3, v___x_4300_);
v___x_5694__overap_4304_ = l_unsafeCast___redArg(v___x_4303_);
lean_dec_ref(v___x_4303_);
lean_inc(v___y_4279_);
lean_inc_ref(v___y_4278_);
lean_inc(v___y_4277_);
lean_inc_ref(v___y_4276_);
lean_inc(v___y_4275_);
lean_inc_ref(v___y_4274_);
v___x_4305_ = lean_apply_7(v___x_5694__overap_4304_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, lean_box(0));
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_object* v_a_4306_; size_t v_sz_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___f_4313_; lean_object* v___x_4314_; uint8_t v___x_4315_; lean_object* v___x_4316_; 
v_a_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_a_4306_);
lean_dec_ref_known(v___x_4305_, 1);
v_sz_4307_ = lean_array_size(v_a_4306_);
v___x_4308_ = l_unsafeCast___redArg(v_a_4306_);
lean_inc(v___x_4296_);
v___x_4309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(v___x_4296_, v_sz_4307_, v___x_4281_, v___x_4308_);
v___x_4310_ = l_unsafeCast___redArg(v___x_4309_);
lean_dec_ref(v___x_4309_);
v___x_4311_ = lean_box_usize(v_sz_4299_);
v___x_4312_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
v___f_4313_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCoinductive___lam__0___boxed), 14, 5);
lean_closure_set(v___f_4313_, 0, v___x_4296_);
lean_closure_set(v___f_4313_, 1, v___x_4310_);
lean_closure_set(v___f_4313_, 2, v___x_4311_);
lean_closure_set(v___f_4313_, 3, v___x_4312_);
lean_closure_set(v___f_4313_, 4, v___x_4300_);
lean_inc(v___x_4298_);
v___x_4314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4298_);
v___x_4315_ = 0;
lean_inc_ref(v_type_4294_);
v___x_4316_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_4294_, v___x_4314_, v___f_4313_, v___x_4315_, v___x_4315_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4318_; lean_object* v_env_4319_; lean_object* v_lctx_4320_; lean_object* v_localInstances_4321_; size_t v_sz_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4317_);
lean_dec_ref_known(v___x_4316_, 1);
v___x_4318_ = lean_st_ref_get(v___y_4279_);
v_env_4319_ = lean_ctor_get(v___x_4318_, 0);
lean_inc_ref(v_env_4319_);
lean_dec(v___x_4318_);
v_lctx_4320_ = lean_ctor_get(v___y_4276_, 2);
v_localInstances_4321_ = lean_ctor_get(v___y_4276_, 3);
v_sz_4322_ = lean_array_size(v_a_4317_);
v___x_4323_ = l_unsafeCast___redArg(v_a_4317_);
lean_dec(v_a_4317_);
lean_inc(v_levelParams_4293_);
v___x_4324_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_4260_, v_env_4319_, v_a_4306_, v_levelParams_4293_, v_sz_4322_, v___x_4281_, v___x_4323_);
lean_dec(v_a_4306_);
v___x_4325_ = l_unsafeCast___redArg(v___x_4324_);
lean_dec_ref(v___x_4324_);
lean_inc_ref(v_localInstances_4321_);
lean_inc_ref(v_lctx_4320_);
v___x_4326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4326_, 0, v_lctx_4320_);
lean_ctor_set(v___x_4326_, 1, v_localInstances_4321_);
v___x_4327_ = l_Lean_Elab_partialFixpoint(v___x_4326_, v___x_4325_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4327_) == 0)
{
lean_object* v___x_4328_; 
lean_dec_ref_known(v___x_4327_, 1);
lean_inc(v_a_4288_);
v___x_4328_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(v_a_4288_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v___x_4329_; 
lean_dec_ref_known(v___x_4328_, 1);
v___x_4329_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(v___x_4298_, v_a_4288_, v_coinductiveElabData_4260_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_object* v___x_4330_; 
lean_dec_ref_known(v___x_4329_, 1);
v___x_4330_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(v_a_4288_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4330_;
}
else
{
lean_dec(v_a_4288_);
return v___x_4329_;
}
}
else
{
lean_dec(v___x_4298_);
lean_dec(v_a_4288_);
lean_dec_ref(v_coinductiveElabData_4260_);
return v___x_4328_;
}
}
else
{
lean_dec(v___x_4298_);
lean_dec(v_a_4288_);
lean_dec_ref(v_coinductiveElabData_4260_);
return v___x_4327_;
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec(v_a_4306_);
lean_dec(v___x_4298_);
lean_dec(v_a_4288_);
lean_dec_ref(v_coinductiveElabData_4260_);
v_a_4331_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4316_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4316_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
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
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
lean_dec(v___x_4300_);
lean_dec(v___x_4298_);
lean_dec(v___x_4296_);
lean_dec(v_a_4288_);
lean_dec_ref(v_coinductiveElabData_4260_);
v_a_4339_ = lean_ctor_get(v___x_4305_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4305_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4305_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4305_);
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
lean_dec_ref(v_coinductiveElabData_4260_);
v_a_4347_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4287_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4287_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___boxed(lean_object* v_coinductiveElabData_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Lean_Elab_Command_elabCoinductive(v_coinductiveElabData_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_, v_a_4376_);
lean_dec(v_a_4376_);
lean_dec_ref(v_a_4375_);
lean_dec(v_a_4374_);
lean_dec_ref(v_a_4373_);
lean_dec(v_a_4372_);
lean_dec_ref(v_a_4371_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(lean_object* v_coinductiveElabData_4379_, lean_object* v___x_4380_, lean_object* v_a_4381_, lean_object* v___x_4382_, lean_object* v_as_4383_, size_t v_sz_4384_, size_t v_i_4385_, lean_object* v_bs_4386_){
_start:
{
lean_object* v___x_4387_; 
v___x_4387_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_4379_, v___x_4380_, v_a_4381_, v___x_4382_, v_sz_4384_, v_i_4385_, v_bs_4386_);
return v___x_4387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___boxed(lean_object* v_coinductiveElabData_4388_, lean_object* v___x_4389_, lean_object* v_a_4390_, lean_object* v___x_4391_, lean_object* v_as_4392_, lean_object* v_sz_4393_, lean_object* v_i_4394_, lean_object* v_bs_4395_){
_start:
{
size_t v_sz_boxed_4396_; size_t v_i_boxed_4397_; lean_object* v_res_4398_; 
v_sz_boxed_4396_ = lean_unbox_usize(v_sz_4393_);
lean_dec(v_sz_4393_);
v_i_boxed_4397_ = lean_unbox_usize(v_i_4394_);
lean_dec(v_i_4394_);
v_res_4398_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(v_coinductiveElabData_4388_, v___x_4389_, v_a_4390_, v___x_4391_, v_as_4392_, v_sz_boxed_4396_, v_i_boxed_4397_, v_bs_4395_);
lean_dec_ref(v_as_4392_);
lean_dec_ref(v_a_4390_);
lean_dec_ref(v_coinductiveElabData_4388_);
return v_res_4398_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default = _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default);
l_Lean_Elab_Command_instInhabitedCoinductiveElabData = _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedCoinductiveElabData);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_PartialFixpoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Coinductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Coinductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Coinductive(builtin);
}
#ifdef __cplusplus
}
#endif

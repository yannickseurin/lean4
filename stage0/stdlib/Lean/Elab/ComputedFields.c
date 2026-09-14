// Lean compiler output
// Module: Lean.Elab.ComputedFields
// Imports: public import Lean.Meta.Constructions.CasesOn public import Lean.Compiler.ImplementedByAttr public import Lean.Elab.PreDefinition.WF.Eqns import Lean.Compiler.ExternAttr
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
lean_object* lean_array_push(lean_object*, lean_object*);
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_WF_instInhabitedEqnInfo_default;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addZetaDeltaFVarId___redArg(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_WF_eqnInfoExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_setImplementedBy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getInlineAttribute_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_mkCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "The `[computed_field]` attribute can only be used in the with-block of an inductive"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elaboratingComputedFields"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 7, 196, 5, 246, 241, 200, 84)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "computed_field"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 37, 61, 12, 59, 99, 42, 244)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Marks a function as a computed field of an inductive"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ComputedFields"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "computedFieldAttr"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 233, 103, 138, 4, 51, 157, 24)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 92, 222, 191, 91, 60, 99, 108)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_computedFieldAttr;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 538, .m_capacity = 538, .m_length = 529, .m_data = "Marks a function as a computed field of an inductive.\n\nComputed fields are specified in the with-block of an inductive type declaration. They can be used\nto allow certain values to be computed only once at the time of construction and then later be\naccessed immediately.\n\nExample:\n```\ninductive NatList where\n  | nil\n  | cons : Nat → NatList → NatList\nwith\n  @[computed_field] sum : NatList → Nat\n  | .nil => 0\n  | .cons x l => x + l.sum\n  @[computed_field] length : NatList → Nat\n  | .nil => 0\n  | .cons _ l => l.length + 1\n```\n"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(66) << 1) | 1)),((lean_object*)(((size_t)(102) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(102) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unsafeCast"};
static const lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 168, 242, 108, 36, 6, 114, 127)}};
static const lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "loose bvar in expression"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2_value;
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.whnfEasyCases"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.WHNF"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "computed field "};
static const lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1;
static const lean_string_object l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " does not reduce for constructor "};
static const lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2 = (const lean_object*)&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "'s type must not depend on indices"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "'s type must not depend on value"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 78, 106, 49, 240, 167, 66, 80)}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isDefn\?"};
static const lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_override"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 29, 17, 63, 243, 44, 199, 82)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "computed fields require at least two constructors"};
static const lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "' must be tagged with @[computed_field]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_ComputedFields_setComputedFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ComputedFields_setComputedFields___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_setComputedFields___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
lean_ctor_set(v___x_6_, 2, v___x_5_);
lean_ctor_set(v___x_6_, 3, v___x_5_);
lean_ctor_set(v___x_6_, 4, v___x_4_);
lean_ctor_set(v___x_6_, 5, v___x_4_);
lean_ctor_set(v___x_6_, 6, v___x_4_);
lean_ctor_set(v___x_6_, 7, v___x_4_);
lean_ctor_set(v___x_6_, 8, v___x_4_);
lean_ctor_set(v___x_6_, 9, v___x_4_);
lean_ctor_set(v___x_6_, 10, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(32u);
v___x_8_ = lean_mk_empty_array_with_capacity(v___x_7_);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_10_ = ((size_t)5ULL);
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_unsigned_to_nat(32u);
v___x_13_ = lean_mk_empty_array_with_capacity(v___x_12_);
v___x_14_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_15_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set(v___x_15_, 2, v___x_11_);
lean_ctor_set(v___x_15_, 3, v___x_11_);
lean_ctor_set_usize(v___x_15_, 4, v___x_10_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = lean_box(1);
v___x_17_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_18_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_19_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
lean_ctor_set(v___x_19_, 2, v___x_16_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; lean_object* v_toCold_25_; lean_object* v_env_26_; lean_object* v_options_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_24_ = lean_st_ref_get(v___y_22_);
v_toCold_25_ = lean_ctor_get(v___y_21_, 0);
v_env_26_ = lean_ctor_get(v___x_24_, 0);
lean_inc_ref(v_env_26_);
lean_dec(v___x_24_);
v_options_27_ = lean_ctor_get(v_toCold_25_, 2);
v___x_28_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_29_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_27_);
v___x_30_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_30_, 0, v_env_26_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_29_);
lean_ctor_set(v___x_30_, 3, v_options_27_);
v___x_31_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v_msgData_20_);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msgData_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_ref_42_; lean_object* v___x_43_; lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_ref_42_ = lean_ctor_get(v___y_39_, 2);
v___x_43_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msg_38_, v___y_39_, v___y_40_);
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_52_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
lean_inc(v_ref_42_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v_ref_42_);
lean_ctor_set(v___x_48_, 1, v_a_44_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 1);
lean_ctor_set(v___x_46_, 0, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
return v_res_57_;
}
}
static lean_object* _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_60_ = l_Lean_stringToMessageData(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(lean_object* v_x_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_toCold_71_; lean_object* v_options_72_; lean_object* v_map_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_toCold_71_ = lean_ctor_get(v___y_65_, 0);
v_options_72_ = lean_ctor_get(v_toCold_71_, 2);
v_map_73_ = lean_ctor_get(v_options_72_, 0);
v___x_74_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_75_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_73_, v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
goto v___jp_68_;
}
else
{
lean_object* v_val_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_85_; 
v_val_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_85_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_85_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_val_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_85_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
if (lean_obj_tag(v_val_76_) == 1)
{
uint8_t v_v_80_; 
v_v_80_ = lean_ctor_get_uint8(v_val_76_, 0);
lean_dec_ref_known(v_val_76_, 0);
if (v_v_80_ == 0)
{
lean_del_object(v___x_78_);
goto v___jp_68_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_83_; 
v___x_81_ = lean_box(0);
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 0);
lean_ctor_set(v___x_78_, 0, v___x_81_);
v___x_83_ = v___x_78_;
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
}
else
{
lean_del_object(v___x_78_);
lean_dec(v_val_76_);
goto v___jp_68_;
}
}
}
v___jp_68_:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_, &l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_);
v___x_70_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_69_, v___y_65_, v___y_66_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(v_x_86_, v___y_87_, v___y_88_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v_x_86_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___f_106_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_110_ = 0;
v___x_111_ = lean_box(2);
v___x_112_ = l_Lean_registerTagAttribute(v___x_107_, v___x_108_, v___f_106_, v___x_109_, v___x_110_, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_115_, lean_object* v_msg_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_116_, v___y_117_, v___y_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_121_, lean_object* v_msg_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(v_00_u03b1_121_, v_msg_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1(){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_130_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0));
v___x_131_ = l_Lean_addBuiltinDocString(v___x_129_, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3(){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6));
v___x_162_ = l_Lean_addBuiltinDeclarationRanges(v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
return v_res_164_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_box(0);
v___x_169_ = lean_unsigned_to_nat(3u);
v___x_170_ = lean_mk_empty_array_with_capacity(v___x_169_);
v___x_171_ = lean_array_push(v___x_170_, v___x_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object* v_expectedType_172_, lean_object* v_e_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_179_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1));
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v_expectedType_172_);
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v_e_173_);
v___x_182_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2, &l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2_once, _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2);
v___x_183_ = lean_array_push(v___x_182_, v___x_180_);
v___x_184_ = lean_array_push(v___x_183_, v___x_181_);
v___x_185_ = l_Lean_Meta_mkAppOptM(v___x_179_, v___x_184_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object* v_expectedType_186_, lean_object* v_e_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_expectedType_186_, v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
return v_res_193_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_instMonadEIO___redArg();
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v_toApplicative_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_234_; 
v___x_201_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_202_ = l_StateRefT_x27_instMonad___redArg(v___x_201_);
v_toApplicative_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_234_ == 0)
{
lean_object* v_unused_235_; 
v_unused_235_ = lean_ctor_get(v___x_202_, 1);
lean_dec(v_unused_235_);
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_234_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_toApplicative_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_234_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_toFunctor_207_; lean_object* v_toSeq_208_; lean_object* v_toSeqLeft_209_; lean_object* v_toSeqRight_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_232_; 
v_toFunctor_207_ = lean_ctor_get(v_toApplicative_203_, 0);
v_toSeq_208_ = lean_ctor_get(v_toApplicative_203_, 2);
v_toSeqLeft_209_ = lean_ctor_get(v_toApplicative_203_, 3);
v_toSeqRight_210_ = lean_ctor_get(v_toApplicative_203_, 4);
v_isSharedCheck_232_ = !lean_is_exclusive(v_toApplicative_203_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_toApplicative_203_, 1);
lean_dec(v_unused_233_);
v___x_212_ = v_toApplicative_203_;
v_isShared_213_ = v_isSharedCheck_232_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_toSeqRight_210_);
lean_inc(v_toSeqLeft_209_);
lean_inc(v_toSeq_208_);
lean_inc(v_toFunctor_207_);
lean_dec(v_toApplicative_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_232_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___f_214_; lean_object* v___f_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_223_; 
v___f_214_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_215_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_207_);
v___f_216_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_216_, 0, v_toFunctor_207_);
v___f_217_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_217_, 0, v_toFunctor_207_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___f_216_);
lean_ctor_set(v___x_218_, 1, v___f_217_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_219_, 0, v_toSeqRight_210_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_220_, 0, v_toSeqLeft_209_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_221_, 0, v_toSeq_208_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v___f_219_);
lean_ctor_set(v___x_212_, 3, v___f_220_);
lean_ctor_set(v___x_212_, 2, v___f_221_);
lean_ctor_set(v___x_212_, 1, v___f_214_);
lean_ctor_set(v___x_212_, 0, v___x_218_);
v___x_223_ = v___x_212_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v___f_214_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v___f_221_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v___f_220_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v___f_219_);
v___x_223_ = v_reuseFailAlloc_231_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_225_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v___f_215_);
lean_ctor_set(v___x_205_, 0, v___x_223_);
v___x_225_ = v___x_205_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v___f_215_);
v___x_225_ = v_reuseFailAlloc_230_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_665__overap_228_; lean_object* v___x_229_; 
v___x_226_ = lean_box(0);
v___x_227_ = l_instInhabitedOfMonad___redArg(v___x_225_, v___x_226_);
v___x_665__overap_228_ = lean_panic_fn_borrowed(v___x_227_, v_msg_197_);
lean_dec(v___x_227_);
lean_inc(v___y_199_);
lean_inc_ref(v___y_198_);
v___x_229_ = lean_apply_3(v___x_665__overap_228_, v___y_198_, v___y_199_, lean_box(0));
return v___x_229_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object* v_msg_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v_msg_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
return v_res_240_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0));
v___x_243_ = l_Lean_stringToMessageData(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_250_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_251_ = lean_unsigned_to_nat(11u);
v___x_252_ = lean_unsigned_to_nat(122u);
v___x_253_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5));
v___x_254_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_255_ = l_mkPanicMessageWithDecl(v___x_254_, v___x_253_, v___x_252_, v___x_251_, v___x_250_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object* v_constName_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_268_; lean_object* v_env_269_; uint8_t v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_st_ref_get(v___y_258_);
v_env_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc_ref(v_env_269_);
lean_dec(v___x_268_);
v___x_270_ = 0;
lean_inc(v_constName_256_);
v___x_271_ = l_Lean_Environment_findAsync_x3f(v_env_269_, v_constName_256_, v___x_270_);
if (lean_obj_tag(v___x_271_) == 1)
{
lean_object* v_val_272_; uint8_t v_kind_273_; 
v_val_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_val_272_);
lean_dec_ref_known(v___x_271_, 1);
v_kind_273_ = lean_ctor_get_uint8(v_val_272_, sizeof(void*)*3);
if (v_kind_273_ == 6)
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_272_);
if (lean_obj_tag(v___x_274_) == 6)
{
lean_object* v_val_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec(v_constName_256_);
v_val_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_val_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
lean_ctor_set_tag(v___x_277_, 0);
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_val_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec_ref(v___x_274_);
v___x_283_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_284_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v___x_283_, v___y_257_, v___y_258_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_293_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
if (lean_obj_tag(v_a_285_) == 0)
{
lean_del_object(v___x_287_);
goto v___jp_260_;
}
else
{
lean_object* v_val_289_; lean_object* v___x_291_; 
lean_dec(v_constName_256_);
v_val_289_ = lean_ctor_get(v_a_285_, 0);
lean_inc(v_val_289_);
lean_dec_ref_known(v_a_285_, 1);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v_val_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_val_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec(v_constName_256_);
v_a_294_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_284_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_284_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
}
else
{
lean_dec(v_val_272_);
goto v___jp_260_;
}
}
else
{
lean_dec(v___x_271_);
goto v___jp_260_;
}
v___jp_260_:
{
lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_261_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_262_ = 0;
v___x_263_ = l_Lean_MessageData_ofConstName(v_constName_256_, v___x_262_);
v___x_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_261_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_266_, v___y_257_, v___y_258_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object* v_constName_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_constName_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object* v_ctor_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_ctor_307_, v_a_308_, v_a_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_323_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_323_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v_numFields_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v_numFields_316_ = lean_ctor_get(v_a_312_, 4);
lean_inc(v_numFields_316_);
lean_dec(v_a_312_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v_numFields_316_, v___x_317_);
lean_dec(v_numFields_316_);
v___x_319_ = lean_box(v___x_318_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_319_);
v___x_321_ = v___x_314_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_311_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_311_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object* v_ctor_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_Elab_ComputedFields_isScalarField(v_ctor_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object* v_msgData_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v_env_344_; lean_object* v___x_345_; lean_object* v_toCold_346_; lean_object* v_mctx_347_; lean_object* v_lctx_348_; lean_object* v_options_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_343_ = lean_st_ref_get(v___y_341_);
v_env_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc_ref(v_env_344_);
lean_dec(v___x_343_);
v___x_345_ = lean_st_ref_get(v___y_339_);
v_toCold_346_ = lean_ctor_get(v___y_340_, 0);
v_mctx_347_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_mctx_347_);
lean_dec(v___x_345_);
v_lctx_348_ = lean_ctor_get(v___y_338_, 2);
v_options_349_ = lean_ctor_get(v_toCold_346_, 2);
lean_inc_ref(v_options_349_);
lean_inc_ref(v_lctx_348_);
v___x_350_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_350_, 0, v_env_344_);
lean_ctor_set(v___x_350_, 1, v_mctx_347_);
lean_ctor_set(v___x_350_, 2, v_lctx_348_);
lean_ctor_set(v___x_350_, 3, v_options_349_);
v___x_351_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_msgData_337_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object* v_msgData_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msgData_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_ref_366_; lean_object* v___x_367_; lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_ref_366_ = lean_ctor_get(v___y_363_, 2);
v___x_367_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_374_; 
lean_inc(v_ref_366_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v_ref_366_);
lean_ctor_set(v___x_372_, 1, v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 1);
lean_ctor_set(v___x_370_, 0, v___x_372_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object* v_msg_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object* v_k_384_, lean_object* v_t_385_){
_start:
{
if (lean_obj_tag(v_t_385_) == 0)
{
lean_object* v_k_386_; lean_object* v_l_387_; lean_object* v_r_388_; uint8_t v___x_389_; 
v_k_386_ = lean_ctor_get(v_t_385_, 1);
v_l_387_ = lean_ctor_get(v_t_385_, 3);
v_r_388_ = lean_ctor_get(v_t_385_, 4);
v___x_389_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_384_, v_k_386_);
switch(v___x_389_)
{
case 0:
{
v_t_385_ = v_l_387_;
goto _start;
}
case 1:
{
uint8_t v___x_391_; 
v___x_391_ = 1;
return v___x_391_;
}
default: 
{
v_t_385_ = v_r_388_;
goto _start;
}
}
}
else
{
uint8_t v___x_393_; 
v___x_393_ = 0;
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_k_394_, lean_object* v_t_395_){
_start:
{
uint8_t v_res_396_; lean_object* v_r_397_; 
v_res_396_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_k_394_, v_t_395_);
lean_dec(v_t_395_);
lean_dec(v_k_394_);
v_r_397_ = lean_box(v_res_396_);
return v_r_397_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object* v_msg_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_3881__overap_406_; lean_object* v___x_407_; 
v___f_405_ = ((lean_object*)(l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0));
v___x_3881__overap_406_ = lean_panic_fn_borrowed(v___f_405_, v_msg_399_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
v___x_407_ = lean_apply_5(v___x_3881__overap_406_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, lean_box(0));
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v_msg_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(lean_object* v_mvarId_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; lean_object* v_mctx_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_418_ = lean_st_ref_get(v___y_416_);
v_mctx_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc_ref(v_mctx_419_);
lean_dec(v___x_418_);
v___x_420_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_419_, v_mvarId_415_);
lean_dec_ref(v_mctx_419_);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_mvarId_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec(v_mvarId_422_);
return v_res_425_;
}
}
static lean_object* _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_429_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2));
v___x_430_ = lean_unsigned_to_nat(22u);
v___x_431_ = lean_unsigned_to_nat(391u);
v___x_432_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1));
v___x_433_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0));
v___x_434_ = l_mkPanicMessageWithDecl(v___x_433_, v___x_432_, v___x_431_, v___x_430_, v___x_429_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object* v_ctorTerm_435_, lean_object* v_e_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
switch(lean_obj_tag(v_e_436_))
{
case 0:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec_ref_known(v_e_436_, 1);
lean_dec_ref(v_ctorTerm_435_);
v___x_442_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_443_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_442_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
return v___x_443_;
}
case 1:
{
lean_object* v_fvarId_444_; lean_object* v___x_445_; 
v_fvarId_444_ = lean_ctor_get(v_e_436_, 0);
lean_inc(v_fvarId_444_);
v___x_445_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_444_, v_a_437_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_490_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_490_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_490_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_490_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
if (lean_obj_tag(v_a_446_) == 1)
{
lean_object* v_value_450_; uint8_t v_nondep_451_; lean_object* v___y_453_; uint8_t v_trackZetaDelta_454_; lean_object* v___y_455_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; 
v_value_450_ = lean_ctor_get(v_a_446_, 4);
lean_inc_ref(v_value_450_);
v_nondep_451_ = lean_ctor_get_uint8(v_a_446_, sizeof(void*)*5);
if (v_nondep_451_ == 0)
{
uint8_t v___x_475_; 
v___x_475_ = l_Lean_LocalDecl_isImplementationDetail(v_a_446_);
lean_dec_ref_known(v_a_446_, 5);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; uint8_t v_zetaDelta_477_; 
v___x_476_ = l_Lean_Meta_Context_config(v_a_437_);
v_zetaDelta_477_ = lean_ctor_get_uint8(v___x_476_, 16);
lean_dec_ref(v___x_476_);
if (v_zetaDelta_477_ == 0)
{
uint8_t v_trackZetaDelta_478_; lean_object* v_zetaDeltaSet_479_; uint8_t v___x_480_; 
v_trackZetaDelta_478_ = lean_ctor_get_uint8(v_a_437_, sizeof(void*)*7);
v_zetaDeltaSet_479_ = lean_ctor_get(v_a_437_, 1);
v___x_480_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_fvarId_444_, v_zetaDeltaSet_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_482_; 
lean_dec_ref(v_value_450_);
lean_dec_ref(v_ctorTerm_435_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v_e_436_);
v___x_482_ = v___x_448_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_e_436_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
else
{
lean_inc(v_fvarId_444_);
lean_del_object(v___x_448_);
lean_dec_ref_known(v_e_436_, 1);
v___y_453_ = v_a_437_;
v_trackZetaDelta_454_ = v_trackZetaDelta_478_;
v___y_455_ = v_a_438_;
v___y_456_ = v_a_439_;
v___y_457_ = v_a_440_;
goto v___jp_452_;
}
}
else
{
lean_inc(v_fvarId_444_);
lean_del_object(v___x_448_);
lean_dec_ref_known(v_e_436_, 1);
v___y_470_ = v_a_437_;
v___y_471_ = v_a_438_;
v___y_472_ = v_a_439_;
v___y_473_ = v_a_440_;
goto v___jp_469_;
}
}
else
{
lean_inc(v_fvarId_444_);
lean_del_object(v___x_448_);
lean_dec_ref_known(v_e_436_, 1);
v___y_470_ = v_a_437_;
v___y_471_ = v_a_438_;
v___y_472_ = v_a_439_;
v___y_473_ = v_a_440_;
goto v___jp_469_;
}
}
else
{
lean_object* v___x_485_; 
lean_dec_ref_known(v_a_446_, 5);
lean_dec_ref(v_value_450_);
lean_dec_ref(v_ctorTerm_435_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v_e_436_);
v___x_485_ = v___x_448_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_e_436_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
v___jp_452_:
{
if (v_trackZetaDelta_454_ == 0)
{
lean_dec(v_fvarId_444_);
v_e_436_ = v_value_450_;
v_a_437_ = v___y_453_;
v_a_438_ = v___y_455_;
v_a_439_ = v___y_456_;
v_a_440_ = v___y_457_;
goto _start;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_444_, v___y_455_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_dec_ref_known(v___x_459_, 1);
v_e_436_ = v_value_450_;
v_a_437_ = v___y_453_;
v_a_438_ = v___y_455_;
v_a_439_ = v___y_456_;
v_a_440_ = v___y_457_;
goto _start;
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec_ref(v_value_450_);
lean_dec_ref(v_ctorTerm_435_);
v_a_461_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_459_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_459_);
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
}
v___jp_469_:
{
uint8_t v_trackZetaDelta_474_; 
v_trackZetaDelta_474_ = lean_ctor_get_uint8(v___y_470_, sizeof(void*)*7);
v___y_453_ = v___y_470_;
v_trackZetaDelta_454_ = v_trackZetaDelta_474_;
v___y_455_ = v___y_471_;
v___y_456_ = v___y_472_;
v___y_457_ = v___y_473_;
goto v___jp_452_;
}
}
else
{
lean_object* v___x_488_; 
lean_dec(v_a_446_);
lean_dec_ref(v_ctorTerm_435_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v_e_436_);
v___x_488_ = v___x_448_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_e_436_);
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
lean_dec_ref_known(v_e_436_, 1);
lean_dec_ref(v_ctorTerm_435_);
v_a_491_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_445_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_445_);
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
case 2:
{
lean_object* v_mvarId_499_; lean_object* v___x_500_; 
v_mvarId_499_ = lean_ctor_get(v_e_436_, 0);
v___x_500_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_499_, v_a_438_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_510_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_510_ == 0)
{
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_510_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_510_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
if (lean_obj_tag(v_a_501_) == 0)
{
lean_object* v___x_506_; 
lean_dec_ref(v_ctorTerm_435_);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v_e_436_);
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_e_436_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
else
{
lean_object* v_val_508_; 
lean_del_object(v___x_503_);
lean_dec_ref_known(v_e_436_, 1);
v_val_508_ = lean_ctor_get(v_a_501_, 0);
lean_inc(v_val_508_);
lean_dec_ref_known(v_a_501_, 1);
v_e_436_ = v_val_508_;
goto _start;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec_ref_known(v_e_436_, 1);
lean_dec_ref(v_ctorTerm_435_);
v_a_511_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_500_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_500_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
case 3:
{
lean_object* v___x_519_; 
lean_dec_ref(v_ctorTerm_435_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v_e_436_);
return v___x_519_;
}
case 6:
{
lean_object* v___x_520_; 
lean_dec_ref(v_ctorTerm_435_);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v_e_436_);
return v___x_520_;
}
case 7:
{
lean_object* v___x_521_; 
lean_dec_ref(v_ctorTerm_435_);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v_e_436_);
return v___x_521_;
}
case 9:
{
lean_object* v___x_522_; 
lean_dec_ref(v_ctorTerm_435_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v_e_436_);
return v___x_522_;
}
case 10:
{
lean_object* v_expr_523_; 
v_expr_523_ = lean_ctor_get(v_e_436_, 1);
lean_inc_ref(v_expr_523_);
lean_dec_ref_known(v_e_436_, 2);
v_e_436_ = v_expr_523_;
goto _start;
}
default: 
{
lean_object* v___x_525_; 
v___x_525_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; uint8_t v___x_527_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_inc_ref(v_ctorTerm_435_);
v___x_527_ = l_Lean_Expr_occurs(v_ctorTerm_435_, v_a_526_);
if (v___x_527_ == 0)
{
lean_dec(v_a_526_);
lean_dec_ref(v_ctorTerm_435_);
return v___x_525_;
}
else
{
uint8_t v___x_528_; lean_object* v___x_529_; 
lean_dec_ref_known(v___x_525_, 1);
v___x_528_ = 0;
lean_inc(v_a_526_);
v___x_529_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_526_, v___x_528_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_539_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_539_ == 0)
{
v___x_532_ = v___x_529_;
v_isShared_533_ = v_isSharedCheck_539_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_529_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_539_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
if (lean_obj_tag(v_a_530_) == 0)
{
lean_object* v___x_535_; 
lean_dec_ref(v_ctorTerm_435_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v_a_526_);
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_526_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
else
{
lean_object* v_val_537_; lean_object* v___x_538_; 
lean_del_object(v___x_532_);
lean_dec(v_a_526_);
v_val_537_ = lean_ctor_get(v_a_530_, 0);
lean_inc(v_val_537_);
lean_dec_ref_known(v_a_530_, 1);
v___x_538_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_435_, v_val_537_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
return v___x_538_;
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec(v_a_526_);
lean_dec_ref(v_ctorTerm_435_);
v_a_540_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_529_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_529_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_435_);
return v___x_525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object* v_ctorTerm_548_, lean_object* v_e_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
switch(lean_obj_tag(v_e_549_))
{
case 0:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec_ref_known(v_e_549_, 1);
lean_dec_ref(v_ctorTerm_548_);
v___x_555_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_556_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_555_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
return v___x_556_;
}
case 1:
{
lean_object* v_fvarId_557_; lean_object* v___x_558_; 
v_fvarId_557_ = lean_ctor_get(v_e_549_, 0);
lean_inc(v_fvarId_557_);
v___x_558_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_557_, v_a_550_, v_a_552_, v_a_553_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_603_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_603_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_603_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_603_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
if (lean_obj_tag(v_a_559_) == 1)
{
lean_object* v_value_563_; uint8_t v_nondep_564_; lean_object* v___y_566_; uint8_t v_trackZetaDelta_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; 
v_value_563_ = lean_ctor_get(v_a_559_, 4);
lean_inc_ref(v_value_563_);
v_nondep_564_ = lean_ctor_get_uint8(v_a_559_, sizeof(void*)*5);
if (v_nondep_564_ == 0)
{
uint8_t v___x_588_; 
v___x_588_ = l_Lean_LocalDecl_isImplementationDetail(v_a_559_);
lean_dec_ref_known(v_a_559_, 5);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; uint8_t v_zetaDelta_590_; 
v___x_589_ = l_Lean_Meta_Context_config(v_a_550_);
v_zetaDelta_590_ = lean_ctor_get_uint8(v___x_589_, 16);
lean_dec_ref(v___x_589_);
if (v_zetaDelta_590_ == 0)
{
uint8_t v_trackZetaDelta_591_; lean_object* v_zetaDeltaSet_592_; uint8_t v___x_593_; 
v_trackZetaDelta_591_ = lean_ctor_get_uint8(v_a_550_, sizeof(void*)*7);
v_zetaDeltaSet_592_ = lean_ctor_get(v_a_550_, 1);
v___x_593_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_fvarId_557_, v_zetaDeltaSet_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_595_; 
lean_dec_ref(v_value_563_);
lean_dec_ref(v_ctorTerm_548_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v_e_549_);
v___x_595_ = v___x_561_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_e_549_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
else
{
lean_inc(v_fvarId_557_);
lean_del_object(v___x_561_);
lean_dec_ref_known(v_e_549_, 1);
v___y_566_ = v_a_550_;
v_trackZetaDelta_567_ = v_trackZetaDelta_591_;
v___y_568_ = v_a_551_;
v___y_569_ = v_a_552_;
v___y_570_ = v_a_553_;
goto v___jp_565_;
}
}
else
{
lean_inc(v_fvarId_557_);
lean_del_object(v___x_561_);
lean_dec_ref_known(v_e_549_, 1);
v___y_583_ = v_a_550_;
v___y_584_ = v_a_551_;
v___y_585_ = v_a_552_;
v___y_586_ = v_a_553_;
goto v___jp_582_;
}
}
else
{
lean_inc(v_fvarId_557_);
lean_del_object(v___x_561_);
lean_dec_ref_known(v_e_549_, 1);
v___y_583_ = v_a_550_;
v___y_584_ = v_a_551_;
v___y_585_ = v_a_552_;
v___y_586_ = v_a_553_;
goto v___jp_582_;
}
}
else
{
lean_object* v___x_598_; 
lean_dec_ref(v_value_563_);
lean_dec_ref_known(v_a_559_, 5);
lean_dec_ref(v_ctorTerm_548_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v_e_549_);
v___x_598_ = v___x_561_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_e_549_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
v___jp_565_:
{
if (v_trackZetaDelta_567_ == 0)
{
lean_object* v___x_571_; 
lean_dec(v_fvarId_557_);
v___x_571_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_548_, v_value_563_, v___y_566_, v___y_568_, v___y_569_, v___y_570_);
return v___x_571_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_557_, v___y_568_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; 
lean_dec_ref_known(v___x_572_, 1);
v___x_573_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_548_, v_value_563_, v___y_566_, v___y_568_, v___y_569_, v___y_570_);
return v___x_573_;
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_dec_ref(v_value_563_);
lean_dec_ref(v_ctorTerm_548_);
v_a_574_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_572_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_572_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
v___jp_582_:
{
uint8_t v_trackZetaDelta_587_; 
v_trackZetaDelta_587_ = lean_ctor_get_uint8(v___y_583_, sizeof(void*)*7);
v___y_566_ = v___y_583_;
v_trackZetaDelta_567_ = v_trackZetaDelta_587_;
v___y_568_ = v___y_584_;
v___y_569_ = v___y_585_;
v___y_570_ = v___y_586_;
goto v___jp_565_;
}
}
else
{
lean_object* v___x_601_; 
lean_dec(v_a_559_);
lean_dec_ref(v_ctorTerm_548_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v_e_549_);
v___x_601_ = v___x_561_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_e_549_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
lean_dec_ref_known(v_e_549_, 1);
lean_dec_ref(v_ctorTerm_548_);
v_a_604_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_558_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_558_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_612_; lean_object* v___x_613_; 
v_mvarId_612_ = lean_ctor_get(v_e_549_, 0);
v___x_613_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_612_, v_a_551_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_623_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_623_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
if (lean_obj_tag(v_a_614_) == 0)
{
lean_object* v___x_619_; 
lean_dec_ref(v_ctorTerm_548_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v_e_549_);
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_e_549_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
else
{
lean_object* v_val_621_; lean_object* v___x_622_; 
lean_del_object(v___x_616_);
lean_dec_ref_known(v_e_549_, 1);
v_val_621_ = lean_ctor_get(v_a_614_, 0);
lean_inc(v_val_621_);
lean_dec_ref_known(v_a_614_, 1);
v___x_622_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_548_, v_val_621_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
return v___x_622_;
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec_ref_known(v_e_549_, 1);
lean_dec_ref(v_ctorTerm_548_);
v_a_624_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_613_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_613_);
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
case 3:
{
lean_object* v___x_632_; 
lean_dec_ref(v_ctorTerm_548_);
v___x_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_632_, 0, v_e_549_);
return v___x_632_;
}
case 6:
{
lean_object* v___x_633_; 
lean_dec_ref(v_ctorTerm_548_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v_e_549_);
return v___x_633_;
}
case 7:
{
lean_object* v___x_634_; 
lean_dec_ref(v_ctorTerm_548_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v_e_549_);
return v___x_634_;
}
case 9:
{
lean_object* v___x_635_; 
lean_dec_ref(v_ctorTerm_548_);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v_e_549_);
return v___x_635_;
}
case 10:
{
lean_object* v_expr_636_; lean_object* v___x_637_; 
v_expr_636_ = lean_ctor_get(v_e_549_, 1);
lean_inc_ref(v_expr_636_);
lean_dec_ref_known(v_e_549_, 2);
v___x_637_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_548_, v_expr_636_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
return v___x_637_;
}
default: 
{
lean_object* v___x_638_; 
v___x_638_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; uint8_t v___x_640_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_inc_ref(v_ctorTerm_548_);
v___x_640_ = l_Lean_Expr_occurs(v_ctorTerm_548_, v_a_639_);
if (v___x_640_ == 0)
{
lean_dec(v_a_639_);
lean_dec_ref(v_ctorTerm_548_);
return v___x_638_;
}
else
{
uint8_t v___x_641_; lean_object* v___x_642_; 
lean_dec_ref_known(v___x_638_, 1);
v___x_641_ = 0;
lean_inc(v_a_639_);
v___x_642_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_639_, v___x_641_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_652_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_652_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
if (lean_obj_tag(v_a_643_) == 0)
{
lean_object* v___x_648_; 
lean_dec_ref(v_ctorTerm_548_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v_a_639_);
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_639_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
else
{
lean_object* v_val_650_; lean_object* v___x_651_; 
lean_del_object(v___x_645_);
lean_dec(v_a_639_);
v_val_650_ = lean_ctor_get(v_a_643_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v_a_643_, 1);
v___x_651_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_548_, v_val_650_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
return v___x_651_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec(v_a_639_);
lean_dec_ref(v_ctorTerm_548_);
v_a_653_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_642_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_642_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_548_);
return v___x_638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object* v_ctorTerm_661_, lean_object* v_e_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_661_, v_e_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object* v_ctorTerm_669_, lean_object* v_e_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_669_, v_e_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
lean_dec(v_a_672_);
lean_dec_ref(v_a_671_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object* v_ctorTerm_677_, lean_object* v_e_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_677_, v_e_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object* v_ctorTerm_685_, lean_object* v_e_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_685_, v_e_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
return v_res_692_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0));
v___x_695_ = l_Lean_stringToMessageData(v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object* v_constName_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; lean_object* v_env_703_; lean_object* v___x_704_; 
v___x_702_ = lean_st_ref_get(v___y_700_);
v_env_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc_ref(v_env_703_);
lean_dec(v___x_702_);
lean_inc(v_constName_696_);
v___x_704_ = l_Lean_isInductiveCore_x3f(v_env_703_, v_constName_696_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_705_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_706_ = 0;
v___x_707_ = l_Lean_MessageData_ofConstName(v_constName_696_, v___x_706_);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_705_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1);
v___x_710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_710_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
return v___x_711_;
}
else
{
lean_object* v_val_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v_constName_696_);
v_val_712_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_704_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_val_712_);
lean_dec(v___x_704_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_val_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object* v_constName_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_constName_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object* v_msg_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_toApplicative_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_798_; 
v___x_735_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_736_ = l_StateRefT_x27_instMonad___redArg(v___x_735_);
v_toApplicative_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; 
v_unused_799_ = lean_ctor_get(v___x_736_, 1);
lean_dec(v_unused_799_);
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_798_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_toApplicative_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_798_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v_toFunctor_741_; lean_object* v_toSeq_742_; lean_object* v_toSeqLeft_743_; lean_object* v_toSeqRight_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_796_; 
v_toFunctor_741_ = lean_ctor_get(v_toApplicative_737_, 0);
v_toSeq_742_ = lean_ctor_get(v_toApplicative_737_, 2);
v_toSeqLeft_743_ = lean_ctor_get(v_toApplicative_737_, 3);
v_toSeqRight_744_ = lean_ctor_get(v_toApplicative_737_, 4);
v_isSharedCheck_796_ = !lean_is_exclusive(v_toApplicative_737_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v_toApplicative_737_, 1);
lean_dec(v_unused_797_);
v___x_746_ = v_toApplicative_737_;
v_isShared_747_ = v_isSharedCheck_796_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_toSeqRight_744_);
lean_inc(v_toSeqLeft_743_);
lean_inc(v_toSeq_742_);
lean_inc(v_toFunctor_741_);
lean_dec(v_toApplicative_737_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_796_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___f_748_; lean_object* v___f_749_; lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___x_752_; lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___f_755_; lean_object* v___x_757_; 
v___f_748_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_749_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_741_);
v___f_750_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_750_, 0, v_toFunctor_741_);
v___f_751_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_751_, 0, v_toFunctor_741_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___f_750_);
lean_ctor_set(v___x_752_, 1, v___f_751_);
v___f_753_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_753_, 0, v_toSeqRight_744_);
v___f_754_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_754_, 0, v_toSeqLeft_743_);
v___f_755_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_755_, 0, v_toSeq_742_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 4, v___f_753_);
lean_ctor_set(v___x_746_, 3, v___f_754_);
lean_ctor_set(v___x_746_, 2, v___f_755_);
lean_ctor_set(v___x_746_, 1, v___f_748_);
lean_ctor_set(v___x_746_, 0, v___x_752_);
v___x_757_ = v___x_746_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v___f_748_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v___f_755_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v___f_754_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v___f_753_);
v___x_757_ = v_reuseFailAlloc_795_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_759_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___f_749_);
lean_ctor_set(v___x_739_, 0, v___x_757_);
v___x_759_ = v___x_739_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___f_749_);
v___x_759_ = v_reuseFailAlloc_794_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; lean_object* v_toApplicative_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_792_; 
v___x_760_ = l_StateRefT_x27_instMonad___redArg(v___x_759_);
v_toApplicative_761_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_760_, 1);
lean_dec(v_unused_793_);
v___x_763_ = v___x_760_;
v_isShared_764_ = v_isSharedCheck_792_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_toApplicative_761_);
lean_dec(v___x_760_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_792_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v_toFunctor_765_; lean_object* v_toSeq_766_; lean_object* v_toSeqLeft_767_; lean_object* v_toSeqRight_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_790_; 
v_toFunctor_765_ = lean_ctor_get(v_toApplicative_761_, 0);
v_toSeq_766_ = lean_ctor_get(v_toApplicative_761_, 2);
v_toSeqLeft_767_ = lean_ctor_get(v_toApplicative_761_, 3);
v_toSeqRight_768_ = lean_ctor_get(v_toApplicative_761_, 4);
v_isSharedCheck_790_ = !lean_is_exclusive(v_toApplicative_761_);
if (v_isSharedCheck_790_ == 0)
{
lean_object* v_unused_791_; 
v_unused_791_ = lean_ctor_get(v_toApplicative_761_, 1);
lean_dec(v_unused_791_);
v___x_770_ = v_toApplicative_761_;
v_isShared_771_ = v_isSharedCheck_790_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_toSeqRight_768_);
lean_inc(v_toSeqLeft_767_);
lean_inc(v_toSeq_766_);
lean_inc(v_toFunctor_765_);
lean_dec(v_toApplicative_761_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_790_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___x_776_; lean_object* v___f_777_; lean_object* v___f_778_; lean_object* v___f_779_; lean_object* v___x_781_; 
v___f_772_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_773_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_765_);
v___f_774_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_774_, 0, v_toFunctor_765_);
v___f_775_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_775_, 0, v_toFunctor_765_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___f_774_);
lean_ctor_set(v___x_776_, 1, v___f_775_);
v___f_777_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_777_, 0, v_toSeqRight_768_);
v___f_778_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_778_, 0, v_toSeqLeft_767_);
v___f_779_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_779_, 0, v_toSeq_766_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 4, v___f_777_);
lean_ctor_set(v___x_770_, 3, v___f_778_);
lean_ctor_set(v___x_770_, 2, v___f_779_);
lean_ctor_set(v___x_770_, 1, v___f_772_);
lean_ctor_set(v___x_770_, 0, v___x_776_);
v___x_781_ = v___x_770_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v___f_772_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v___f_779_);
lean_ctor_set(v_reuseFailAlloc_789_, 3, v___f_778_);
lean_ctor_set(v_reuseFailAlloc_789_, 4, v___f_777_);
v___x_781_ = v_reuseFailAlloc_789_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_783_; 
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v___f_773_);
lean_ctor_set(v___x_763_, 0, v___x_781_);
v___x_783_ = v___x_763_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___f_773_);
v___x_783_ = v_reuseFailAlloc_788_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_3871__overap_786_; lean_object* v___x_787_; 
v___x_784_ = lean_box(0);
v___x_785_ = l_instInhabitedOfMonad___redArg(v___x_783_, v___x_784_);
v___x_3871__overap_786_ = lean_panic_fn_borrowed(v___x_785_, v_msg_729_);
lean_dec(v___x_785_);
lean_inc(v___y_733_);
lean_inc_ref(v___y_732_);
lean_inc(v___y_731_);
lean_inc_ref(v___y_730_);
v___x_787_ = lean_apply_5(v___x_3871__overap_786_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, lean_box(0));
return v___x_787_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object* v_msg_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v_msg_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object* v_constName_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_821_; lean_object* v_env_822_; uint8_t v___x_823_; lean_object* v___x_824_; 
v___x_821_ = lean_st_ref_get(v___y_811_);
v_env_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc_ref(v_env_822_);
lean_dec(v___x_821_);
v___x_823_ = 0;
lean_inc(v_constName_807_);
v___x_824_ = l_Lean_Environment_findAsync_x3f(v_env_822_, v_constName_807_, v___x_823_);
if (lean_obj_tag(v___x_824_) == 1)
{
lean_object* v_val_825_; uint8_t v_kind_826_; 
v_val_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_val_825_);
lean_dec_ref_known(v___x_824_, 1);
v_kind_826_ = lean_ctor_get_uint8(v_val_825_, sizeof(void*)*3);
if (v_kind_826_ == 6)
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_825_);
if (lean_obj_tag(v___x_827_) == 6)
{
lean_object* v_val_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_dec(v_constName_807_);
v_val_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_val_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 0);
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_val_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; 
lean_dec_ref(v___x_827_);
v___x_836_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_837_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v___x_836_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_846_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_846_ == 0)
{
v___x_840_ = v___x_837_;
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_837_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
if (lean_obj_tag(v_a_838_) == 0)
{
lean_del_object(v___x_840_);
goto v___jp_813_;
}
else
{
lean_object* v_val_842_; lean_object* v___x_844_; 
lean_dec(v_constName_807_);
v_val_842_ = lean_ctor_get(v_a_838_, 0);
lean_inc(v_val_842_);
lean_dec_ref_known(v_a_838_, 1);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v_val_842_);
v___x_844_ = v___x_840_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_val_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec(v_constName_807_);
v_a_847_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_837_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_837_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
else
{
lean_dec(v_val_825_);
goto v___jp_813_;
}
}
else
{
lean_dec(v___x_824_);
goto v___jp_813_;
}
v___jp_813_:
{
lean_object* v___x_814_; uint8_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_814_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_815_ = 0;
v___x_816_ = l_Lean_MessageData_ofConstName(v_constName_807_, v___x_815_);
v___x_817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_814_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_819_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object* v_constName_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_constName_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
return v_res_861_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0));
v___x_864_ = l_Lean_stringToMessageData(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_box(0);
v___x_869_ = l_unsafeCast___redArg(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5(void){
_start:
{
lean_object* v___x_870_; lean_object* v_dummy_871_; 
v___x_870_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_dummy_871_ = l_Lean_Expr_sort___override(v___x_870_);
return v_dummy_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object* v_computedField_872_, lean_object* v_ctorTerm_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v_ctorName_881_; lean_object* v_val_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___x_899_; 
v___x_879_ = l_Lean_Elab_WF_instInhabitedEqnInfo_default;
v___x_880_ = l_Lean_Expr_getAppFn(v_ctorTerm_873_);
v_ctorName_881_ = l_Lean_Expr_constName_x21(v___x_880_);
lean_dec_ref(v___x_880_);
lean_inc(v_ctorName_881_);
v___x_899_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_ctorName_881_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v_induct_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v_induct_901_ = lean_ctor_get(v_a_900_, 1);
lean_inc(v_induct_901_);
lean_dec(v_a_900_);
v___x_902_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_induct_901_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v_numParams_904_; lean_object* v_numIndices_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v_numParams_904_ = lean_ctor_get(v_a_903_, 1);
lean_inc(v_numParams_904_);
v_numIndices_905_ = lean_ctor_get(v_a_903_, 2);
lean_inc(v_numIndices_905_);
lean_dec(v_a_903_);
v___x_906_ = lean_nat_add(v_numParams_904_, v_numIndices_905_);
lean_dec(v_numIndices_905_);
lean_dec(v_numParams_904_);
v___x_907_ = lean_box(0);
v___x_908_ = lean_mk_array(v___x_906_, v___x_907_);
lean_inc_ref(v_ctorTerm_873_);
v___x_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_909_, 0, v_ctorTerm_873_);
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_mk_empty_array_with_capacity(v___x_910_);
v___x_912_ = lean_array_push(v___x_911_, v___x_909_);
v___x_913_ = l_Array_append___redArg(v___x_908_, v___x_912_);
lean_dec_ref(v___x_912_);
lean_inc(v_computedField_872_);
v___x_914_ = l_Lean_Meta_mkAppOptM(v_computedField_872_, v___x_913_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v_env_917_; lean_object* v___x_918_; lean_object* v_toEnvExtension_919_; lean_object* v_asyncMode_920_; uint8_t v___x_921_; lean_object* v___x_922_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = lean_st_ref_get(v_a_877_);
v_env_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc_ref(v_env_917_);
lean_dec(v___x_916_);
v___x_918_ = l_Lean_Elab_WF_eqnInfoExt;
v_toEnvExtension_919_ = lean_ctor_get(v___x_918_, 0);
v_asyncMode_920_ = lean_ctor_get(v_toEnvExtension_919_, 2);
v___x_921_ = 0;
lean_inc(v_computedField_872_);
v___x_922_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_879_, v___x_918_, v_env_917_, v_computedField_872_, v_asyncMode_920_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 1)
{
lean_object* v_val_923_; lean_object* v_levelParams_924_; lean_object* v_value_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v_dummy_929_; lean_object* v_nargs_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_val_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_val_923_);
lean_dec_ref_known(v___x_922_, 1);
v_levelParams_924_ = lean_ctor_get(v_val_923_, 1);
lean_inc(v_levelParams_924_);
v_value_925_ = lean_ctor_get(v_val_923_, 3);
lean_inc_ref(v_value_925_);
lean_dec(v_val_923_);
v___x_926_ = l_Lean_Expr_getAppFn(v_a_915_);
v___x_927_ = l_Lean_Expr_constLevels_x21(v___x_926_);
lean_dec_ref(v___x_926_);
v___x_928_ = l_Lean_Expr_instantiateLevelParams(v_value_925_, v_levelParams_924_, v___x_927_);
lean_dec_ref(v_value_925_);
v_dummy_929_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5);
v_nargs_930_ = l_Lean_Expr_getAppNumArgs(v_a_915_);
lean_inc(v_nargs_930_);
v___x_931_ = lean_mk_array(v_nargs_930_, v_dummy_929_);
v___x_932_ = lean_nat_sub(v_nargs_930_, v___x_910_);
lean_dec(v_nargs_930_);
v___x_933_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_915_, v___x_931_, v___x_932_);
v___x_934_ = l_Lean_mkAppN(v___x_928_, v___x_933_);
lean_dec_ref(v___x_933_);
v_val_883_ = v___x_934_;
v___y_884_ = v_a_874_;
v___y_885_ = v_a_875_;
v___y_886_ = v_a_876_;
v___y_887_ = v_a_877_;
goto v___jp_882_;
}
else
{
lean_object* v___x_935_; 
lean_dec(v___x_922_);
v___x_935_ = l_Lean_Meta_unfoldDefinition(v_a_915_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v_val_883_ = v_a_936_;
v___y_884_ = v_a_874_;
v___y_885_ = v_a_875_;
v___y_886_ = v_a_876_;
v___y_887_ = v_a_877_;
goto v___jp_882_;
}
else
{
lean_dec(v_ctorName_881_);
lean_dec_ref(v_ctorTerm_873_);
lean_dec(v_computedField_872_);
return v___x_935_;
}
}
}
else
{
lean_dec(v_ctorName_881_);
lean_dec_ref(v_ctorTerm_873_);
lean_dec(v_computedField_872_);
return v___x_914_;
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_ctorName_881_);
lean_dec_ref(v_ctorTerm_873_);
lean_dec(v_computedField_872_);
v_a_937_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_902_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_902_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_ctorName_881_);
lean_dec_ref(v_ctorTerm_873_);
lean_dec(v_computedField_872_);
v_a_945_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_899_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_899_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
v___jp_882_:
{
lean_object* v___x_888_; 
lean_inc_ref(v_ctorTerm_873_);
v___x_888_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_873_, v_val_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; uint8_t v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
v___x_890_ = l_Lean_Expr_occurs(v_ctorTerm_873_, v_a_889_);
lean_dec(v_a_889_);
if (v___x_890_ == 0)
{
lean_dec(v_ctorName_881_);
lean_dec(v_computedField_872_);
return v___x_888_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec_ref_known(v___x_888_, 1);
v___x_891_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
v___x_892_ = l_Lean_MessageData_ofName(v_computedField_872_);
v___x_893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_891_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3);
v___x_895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = l_Lean_MessageData_ofName(v_ctorName_881_);
v___x_897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_897_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_898_;
}
}
else
{
lean_dec(v_ctorName_881_);
lean_dec_ref(v_ctorTerm_873_);
lean_dec(v_computedField_872_);
return v___x_888_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object* v_computedField_953_, lean_object* v_ctorTerm_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_computedField_953_, v_ctorTerm_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object* v_00_u03b1_961_, lean_object* v_msg_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object* v_00_u03b1_969_, lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(v_00_u03b1_969_, v_msg_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(lean_object* v_mvarId_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_977_, v___y_979_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___boxed(lean_object* v_mvarId_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(v_mvarId_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v_mvarId_984_);
return v_res_990_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_991_, lean_object* v_k_992_, lean_object* v_t_993_){
_start:
{
uint8_t v___x_994_; 
v___x_994_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_k_992_, v_t_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_995_, lean_object* v_k_996_, lean_object* v_t_997_){
_start:
{
uint8_t v_res_998_; lean_object* v_r_999_; 
v_res_998_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(v_00_u03b2_995_, v_k_996_, v_t_997_);
lean_dec(v_t_997_);
lean_dec(v_k_996_);
v_r_999_ = lean_box(v_res_998_);
return v_r_999_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object* v_a_1000_, lean_object* v_as_1001_, size_t v_i_1002_, size_t v_stop_1003_){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_eq(v_i_1002_, v_stop_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1005_ = lean_array_uget_borrowed(v_as_1001_, v_i_1002_);
v___x_1006_ = l_Lean_Expr_fvarId_x21(v___x_1005_);
v___x_1007_ = l_Lean_Expr_containsFVar(v_a_1000_, v___x_1006_);
lean_dec(v___x_1006_);
if (v___x_1007_ == 0)
{
size_t v___x_1008_; size_t v___x_1009_; 
v___x_1008_ = ((size_t)1ULL);
v___x_1009_ = lean_usize_add(v_i_1002_, v___x_1008_);
v_i_1002_ = v___x_1009_;
goto _start;
}
else
{
return v___x_1007_;
}
}
else
{
uint8_t v___x_1011_; 
v___x_1011_ = 0;
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object* v_a_1012_, lean_object* v_as_1013_, lean_object* v_i_1014_, lean_object* v_stop_1015_){
_start:
{
size_t v_i_boxed_1016_; size_t v_stop_boxed_1017_; uint8_t v_res_1018_; lean_object* v_r_1019_; 
v_i_boxed_1016_ = lean_unbox_usize(v_i_1014_);
lean_dec(v_i_1014_);
v_stop_boxed_1017_ = lean_unbox_usize(v_stop_1015_);
lean_dec(v_stop_1015_);
v_res_1018_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1012_, v_as_1013_, v_i_boxed_1016_, v_stop_boxed_1017_);
lean_dec_ref(v_as_1013_);
lean_dec_ref(v_a_1012_);
v_r_1019_ = lean_box(v_res_1018_);
return v_r_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object* v_msg_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_ref_1026_; lean_object* v___x_1027_; lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1036_; 
v_ref_1026_ = lean_ctor_get(v___y_1023_, 2);
v___x_1027_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
lean_inc(v_ref_1026_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_ref_1026_);
lean_ctor_set(v___x_1032_, 1, v_a_1028_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 1);
lean_ctor_set(v___x_1030_, 0, v___x_1032_);
v___x_1034_ = v___x_1030_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1043_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2));
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object* v_indices_1050_, lean_object* v_val_1051_, lean_object* v_as_1052_, size_t v_sz_1053_, size_t v_i_1054_, lean_object* v_b_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_a_1063_; uint8_t v___x_1067_; 
v___x_1067_ = lean_usize_dec_lt(v_i_1054_, v_sz_1053_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_b_1055_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v_a_1070_; lean_object* v___x_1071_; 
v___x_1069_ = lean_box(0);
v_a_1070_ = lean_array_uget_borrowed(v_as_1052_, v_i_1054_);
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v_a_1070_);
v___x_1071_ = lean_infer_type(v_a_1070_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___x_1093_; uint8_t v___x_1094_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1093_ = l_Lean_Expr_fvarId_x21(v_val_1051_);
v___x_1094_ = l_Lean_Expr_containsFVar(v_a_1072_, v___x_1093_);
lean_dec(v___x_1093_);
if (v___x_1094_ == 0)
{
v___y_1074_ = v___y_1056_;
v___y_1075_ = v___y_1057_;
v___y_1076_ = v___y_1058_;
v___y_1077_ = v___y_1059_;
v___y_1078_ = v___y_1060_;
goto v___jp_1073_;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1095_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1070_);
v___x_1096_ = l_Lean_MessageData_ofExpr(v_a_1070_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3);
v___x_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
lean_inc(v_a_1072_);
v___x_1100_ = l_Lean_indentExpr(v_a_1072_);
v___x_1101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1101_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_dec_ref_known(v___x_1102_, 1);
v___y_1074_ = v___y_1056_;
v___y_1075_ = v___y_1057_;
v___y_1076_ = v___y_1058_;
v___y_1077_ = v___y_1059_;
v___y_1078_ = v___y_1060_;
goto v___jp_1073_;
}
else
{
lean_dec(v_a_1072_);
return v___x_1102_;
}
}
v___jp_1073_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = lean_array_get_size(v_indices_1050_);
v___x_1081_ = lean_nat_dec_lt(v___x_1079_, v___x_1080_);
if (v___x_1081_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
if (v___x_1081_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
size_t v___x_1082_; size_t v___x_1083_; uint8_t v___x_1084_; 
v___x_1082_ = ((size_t)0ULL);
v___x_1083_ = lean_usize_of_nat(v___x_1080_);
v___x_1084_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1072_, v_indices_1050_, v___x_1082_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1085_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1070_);
v___x_1086_ = l_Lean_MessageData_ofExpr(v_a_1070_);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1);
v___x_1089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = l_Lean_indentExpr(v_a_1072_);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1091_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_dec_ref_known(v___x_1092_, 1);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
return v___x_1092_;
}
}
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1071_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1071_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
v___jp_1062_:
{
size_t v___x_1064_; size_t v___x_1065_; 
v___x_1064_ = ((size_t)1ULL);
v___x_1065_ = lean_usize_add(v_i_1054_, v___x_1064_);
v_i_1054_ = v___x_1065_;
v_b_1055_ = v_a_1063_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object* v_indices_1111_, lean_object* v_val_1112_, lean_object* v_as_1113_, lean_object* v_sz_1114_, lean_object* v_i_1115_, lean_object* v_b_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
size_t v_sz_boxed_1123_; size_t v_i_boxed_1124_; lean_object* v_res_1125_; 
v_sz_boxed_1123_ = lean_unbox_usize(v_sz_1114_);
lean_dec(v_sz_1114_);
v_i_boxed_1124_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_res_1125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1111_, v_val_1112_, v_as_1113_, v_sz_boxed_1123_, v_i_boxed_1124_, v_b_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec_ref(v_as_1113_);
lean_dec_ref(v_val_1112_);
lean_dec_ref(v_indices_1111_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_compFieldVars_1132_; lean_object* v_indices_1133_; lean_object* v_val_1134_; lean_object* v___x_1135_; size_t v_sz_1136_; size_t v___x_1137_; lean_object* v___x_1138_; 
v_compFieldVars_1132_ = lean_ctor_get(v_a_1126_, 4);
v_indices_1133_ = lean_ctor_get(v_a_1126_, 5);
v_val_1134_ = lean_ctor_get(v_a_1126_, 6);
v___x_1135_ = lean_box(0);
v_sz_1136_ = lean_array_size(v_compFieldVars_1132_);
v___x_1137_ = ((size_t)0ULL);
v___x_1138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1133_, v_val_1134_, v_compFieldVars_1132_, v_sz_1136_, v___x_1137_, v___x_1135_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1146_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1135_);
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1135_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
else
{
return v___x_1138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Elab_ComputedFields_validateComputedFields(v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
lean_dec_ref(v_a_1147_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object* v_00_u03b1_1154_, lean_object* v_msg_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1155_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object* v_00_u03b1_1163_, lean_object* v_msg_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(v_00_u03b1_1163_, v_msg_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object* v_k_1172_, lean_object* v___y_1173_, lean_object* v_b_1174_, lean_object* v_c_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; 
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc_ref(v___y_1173_);
v___x_1181_ = lean_apply_8(v_k_1172_, v_b_1174_, v_c_1175_, v___y_1173_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, lean_box(0));
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object* v_k_1182_, lean_object* v___y_1183_, lean_object* v_b_1184_, lean_object* v_c_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(v_k_1182_, v___y_1183_, v_b_1184_, v_c_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec_ref(v___y_1183_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object* v_type_1192_, lean_object* v_k_1193_, uint8_t v_cleanupAnnotations_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___f_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_inc_ref(v___y_1195_);
v___f_1201_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1201_, 0, v_k_1193_);
lean_closure_set(v___f_1201_, 1, v___y_1195_);
v___x_1202_ = 0;
v___x_1203_ = lean_box(0);
v___x_1204_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1202_, v___x_1203_, v_type_1192_, v___f_1201_, v_cleanupAnnotations_1194_, v___x_1202_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
if (lean_obj_tag(v___x_1204_) == 0)
{
return v___x_1204_;
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object* v_type_1213_, lean_object* v_k_1214_, lean_object* v_cleanupAnnotations_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1222_; lean_object* v_res_1223_; 
v_cleanupAnnotations_boxed_1222_ = lean_unbox(v_cleanupAnnotations_1215_);
v_res_1223_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1213_, v_k_1214_, v_cleanupAnnotations_boxed_1222_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec_ref(v___y_1216_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object* v_00_u03b1_1224_, lean_object* v_type_1225_, lean_object* v_k_1226_, uint8_t v_cleanupAnnotations_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1225_, v_k_1226_, v_cleanupAnnotations_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object* v_00_u03b1_1235_, lean_object* v_type_1236_, lean_object* v_k_1237_, lean_object* v_cleanupAnnotations_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1245_; lean_object* v_res_1246_; 
v_cleanupAnnotations_boxed_1245_ = lean_unbox(v_cleanupAnnotations_1238_);
v_res_1246_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(v_00_u03b1_1235_, v_type_1236_, v_k_1237_, v_cleanupAnnotations_boxed_1245_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec_ref(v___y_1239_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object* v___x_1249_, lean_object* v_lparams_1250_, lean_object* v_head_1251_, lean_object* v_params_1252_, lean_object* v___x_1253_, lean_object* v_compFieldVars_1254_, lean_object* v_fields_1255_, lean_object* v_retTy_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; lean_object* v_dummy_1264_; lean_object* v_nargs_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1263_ = l_Lean_mkConst(v___x_1249_, v_lparams_1250_);
v_dummy_1264_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__5);
v_nargs_1265_ = l_Lean_Expr_getAppNumArgs(v_retTy_1256_);
lean_inc(v_nargs_1265_);
v___x_1266_ = lean_mk_array(v_nargs_1265_, v_dummy_1264_);
v___x_1267_ = lean_unsigned_to_nat(1u);
v___x_1268_ = lean_nat_sub(v_nargs_1265_, v___x_1267_);
lean_dec(v_nargs_1265_);
v___x_1269_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_retTy_1256_, v___x_1266_, v___x_1268_);
v___x_1270_ = l_Lean_mkAppN(v___x_1263_, v___x_1269_);
lean_dec_ref(v___x_1269_);
lean_inc(v_head_1251_);
v___x_1271_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_1251_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; uint8_t v___x_1273_; lean_object* v___y_1275_; uint8_t v___x_1299_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1272_);
lean_dec_ref_known(v___x_1271_, 1);
v___x_1273_ = 1;
v___x_1299_ = lean_unbox(v_a_1272_);
lean_dec(v_a_1272_);
if (v___x_1299_ == 0)
{
v___y_1275_ = v_compFieldVars_1254_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1300_; 
v___x_1300_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1275_ = v___x_1300_;
goto v___jp_1274_;
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; 
v___x_1276_ = l_Array_append___redArg(v_params_1252_, v___y_1275_);
v___x_1277_ = l_Array_append___redArg(v___x_1276_, v_fields_1255_);
v___x_1278_ = 0;
v___x_1279_ = 1;
v___x_1280_ = l_Lean_Meta_mkForallFVars(v___x_1277_, v___x_1270_, v___x_1278_, v___x_1273_, v___x_1273_, v___x_1279_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1290_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1283_ = v___x_1280_;
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1285_ = l_Lean_Name_append(v_head_1251_, v___x_1253_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set(v___x_1286_, 1, v_a_1281_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1286_);
v___x_1288_ = v___x_1283_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec(v___x_1253_);
lean_dec(v_head_1251_);
v_a_1291_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1280_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1280_);
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
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v___x_1270_);
lean_dec(v___x_1253_);
lean_dec_ref(v_params_1252_);
lean_dec(v_head_1251_);
v_a_1301_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1271_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1271_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object* v___x_1309_, lean_object* v_lparams_1310_, lean_object* v_head_1311_, lean_object* v_params_1312_, lean_object* v___x_1313_, lean_object* v_compFieldVars_1314_, lean_object* v_fields_1315_, lean_object* v_retTy_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(v___x_1309_, v_lparams_1310_, v_head_1311_, v_params_1312_, v___x_1313_, v_compFieldVars_1314_, v_fields_1315_, v_retTy_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec_ref(v_fields_1315_);
lean_dec_ref(v_compFieldVars_1314_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object* v___x_1327_, lean_object* v_lparams_1328_, lean_object* v_params_1329_, lean_object* v_compFieldVars_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
if (lean_obj_tag(v_x_1331_) == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v___x_1339_ = l_List_reverse___redArg(v_x_1332_);
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
return v___x_1340_;
}
else
{
lean_object* v_head_1341_; lean_object* v_tail_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1375_; 
v_head_1341_ = lean_ctor_get(v_x_1331_, 0);
v_tail_1342_ = lean_ctor_get(v_x_1331_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_x_1331_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1344_ = v_x_1331_;
v_isShared_1345_ = v_isSharedCheck_1375_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_tail_1342_);
lean_inc(v_head_1341_);
lean_dec(v_x_1331_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1375_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; lean_object* v___f_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1346_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc_ref(v_compFieldVars_1330_);
lean_inc_ref(v_params_1329_);
lean_inc(v_head_1341_);
lean_inc_n(v_lparams_1328_, 2);
lean_inc(v___x_1327_);
v___f_1347_ = lean_alloc_closure((void*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1347_, 0, v___x_1327_);
lean_closure_set(v___f_1347_, 1, v_lparams_1328_);
lean_closure_set(v___f_1347_, 2, v_head_1341_);
lean_closure_set(v___f_1347_, 3, v_params_1329_);
lean_closure_set(v___f_1347_, 4, v___x_1346_);
lean_closure_set(v___f_1347_, 5, v_compFieldVars_1330_);
v___x_1348_ = l_Lean_mkConst(v_head_1341_, v_lparams_1328_);
v___x_1349_ = l_Lean_mkAppN(v___x_1348_, v_params_1329_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1335_);
lean_inc_ref(v___y_1334_);
v___x_1350_ = lean_infer_type(v___x_1349_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = 0;
v___x_1353_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1351_, v___f_1347_, v___x_1352_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1356_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v_x_1332_);
lean_ctor_set(v___x_1344_, 0, v_a_1354_);
v___x_1356_ = v___x_1344_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1354_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_x_1332_);
v___x_1356_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
v_x_1331_ = v_tail_1342_;
v_x_1332_ = v___x_1356_;
goto _start;
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_del_object(v___x_1344_);
lean_dec(v_tail_1342_);
lean_dec(v_x_1332_);
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v_a_1359_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1353_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1353_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec_ref(v___f_1347_);
lean_del_object(v___x_1344_);
lean_dec(v_tail_1342_);
lean_dec(v_x_1332_);
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v_a_1367_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1350_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1350_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object* v___x_1376_, lean_object* v_lparams_1377_, lean_object* v_params_1378_, lean_object* v_compFieldVars_1379_, lean_object* v_x_1380_, lean_object* v_x_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1376_, v_lparams_1377_, v_params_1378_, v_compFieldVars_1379_, v_x_1380_, v_x_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v_toInductiveVal_1395_; lean_object* v_toConstantVal_1396_; lean_object* v_lparams_1397_; lean_object* v_params_1398_; lean_object* v_compFieldVars_1399_; lean_object* v_numParams_1400_; lean_object* v_ctors_1401_; uint8_t v_isUnsafe_1402_; lean_object* v_name_1403_; lean_object* v_levelParams_1404_; lean_object* v_type_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_toInductiveVal_1395_ = lean_ctor_get(v_a_1389_, 0);
v_toConstantVal_1396_ = lean_ctor_get(v_toInductiveVal_1395_, 0);
v_lparams_1397_ = lean_ctor_get(v_a_1389_, 1);
v_params_1398_ = lean_ctor_get(v_a_1389_, 2);
v_compFieldVars_1399_ = lean_ctor_get(v_a_1389_, 4);
v_numParams_1400_ = lean_ctor_get(v_toInductiveVal_1395_, 1);
v_ctors_1401_ = lean_ctor_get(v_toInductiveVal_1395_, 4);
v_isUnsafe_1402_ = lean_ctor_get_uint8(v_toInductiveVal_1395_, sizeof(void*)*6 + 1);
v_name_1403_ = lean_ctor_get(v_toConstantVal_1396_, 0);
v_levelParams_1404_ = lean_ctor_get(v_toConstantVal_1396_, 1);
v_type_1405_ = lean_ctor_get(v_toConstantVal_1396_, 2);
v___x_1406_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_1403_);
v___x_1407_ = l_Lean_Name_append(v_name_1403_, v___x_1406_);
v___x_1408_ = lean_box(0);
lean_inc(v_ctors_1401_);
lean_inc_ref(v_compFieldVars_1399_);
lean_inc_ref(v_params_1398_);
lean_inc(v_lparams_1397_);
lean_inc(v___x_1407_);
v___x_1409_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1407_, v_lparams_1397_, v_params_1398_, v_compFieldVars_1399_, v_ctors_1401_, v___x_1408_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1410_);
lean_dec_ref_known(v___x_1409_, 1);
lean_inc_ref(v_type_1405_);
lean_inc(v___x_1407_);
v___x_1411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1407_);
lean_ctor_set(v___x_1411_, 1, v_type_1405_);
lean_ctor_set(v___x_1411_, 2, v_a_1410_);
v___x_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
lean_ctor_set(v___x_1412_, 1, v___x_1408_);
lean_inc(v_numParams_1400_);
lean_inc(v_levelParams_1404_);
v___x_1413_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_1413_, 0, v_levelParams_1404_);
lean_ctor_set(v___x_1413_, 1, v_numParams_1400_);
lean_ctor_set(v___x_1413_, 2, v___x_1412_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3, v_isUnsafe_1402_);
v___x_1414_ = 0;
v___x_1415_ = l_Lean_addDecl(v___x_1413_, v___x_1414_, v_a_1392_, v_a_1393_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1422_ == 0)
{
lean_object* v_unused_1423_; 
v_unused_1423_ = lean_ctor_get(v___x_1415_, 0);
lean_dec(v_unused_1423_);
v___x_1417_ = v___x_1415_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_dec(v___x_1415_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1407_);
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1407_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec(v___x_1407_);
v_a_1424_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1415_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1415_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v___x_1407_);
v_a_1432_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1409_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1409_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Elab_ComputedFields_mkImplType(v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec_ref(v_a_1440_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object* v_k_1447_, lean_object* v___y_1448_, lean_object* v_b_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1455_; 
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
lean_inc(v___y_1451_);
lean_inc_ref(v___y_1450_);
lean_inc_ref(v___y_1448_);
v___x_1455_ = lean_apply_7(v_k_1447_, v_b_1449_, v___y_1448_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, lean_box(0));
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object* v_k_1456_, lean_object* v___y_1457_, lean_object* v_b_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(v_k_1456_, v___y_1457_, v_b_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec_ref(v___y_1457_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object* v_name_1465_, lean_object* v_type_1466_, lean_object* v_val_1467_, lean_object* v_k_1468_, uint8_t v_nondep_1469_, uint8_t v_kind_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___f_1477_; lean_object* v___x_1478_; 
lean_inc_ref(v___y_1471_);
v___f_1477_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1477_, 0, v_k_1468_);
lean_closure_set(v___f_1477_, 1, v___y_1471_);
v___x_1478_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1465_, v_type_1466_, v_val_1467_, v___f_1477_, v_nondep_1469_, v_kind_1470_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1478_) == 0)
{
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object* v_name_1487_, lean_object* v_type_1488_, lean_object* v_val_1489_, lean_object* v_k_1490_, lean_object* v_nondep_1491_, lean_object* v_kind_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v_nondep_boxed_1499_; uint8_t v_kind_boxed_1500_; lean_object* v_res_1501_; 
v_nondep_boxed_1499_ = lean_unbox(v_nondep_1491_);
v_kind_boxed_1500_ = lean_unbox(v_kind_1492_);
v_res_1501_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1487_, v_type_1488_, v_val_1489_, v_k_1490_, v_nondep_boxed_1499_, v_kind_boxed_1500_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object* v_00_u03b1_1502_, lean_object* v_name_1503_, lean_object* v_type_1504_, lean_object* v_val_1505_, lean_object* v_k_1506_, uint8_t v_nondep_1507_, uint8_t v_kind_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1503_, v_type_1504_, v_val_1505_, v_k_1506_, v_nondep_1507_, v_kind_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_name_1517_, lean_object* v_type_1518_, lean_object* v_val_1519_, lean_object* v_k_1520_, lean_object* v_nondep_1521_, lean_object* v_kind_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
uint8_t v_nondep_boxed_1529_; uint8_t v_kind_boxed_1530_; lean_object* v_res_1531_; 
v_nondep_boxed_1529_ = lean_unbox(v_nondep_1521_);
v_kind_boxed_1530_ = lean_unbox(v_kind_1522_);
v_res_1531_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(v_00_u03b1_1516_, v_name_1517_, v_type_1518_, v_val_1519_, v_k_1520_, v_nondep_boxed_1529_, v_kind_boxed_1530_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v_majorImpl_1534_, lean_object* v_m_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; uint8_t v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; 
v___x_1542_ = lean_mk_empty_array_with_capacity(v___x_1532_);
lean_inc_ref(v_m_1535_);
lean_inc_ref(v___x_1542_);
v___x_1543_ = lean_array_push(v___x_1542_, v_m_1535_);
v___x_1544_ = l_Array_append___redArg(v___x_1543_, v___x_1533_);
v___x_1545_ = lean_array_push(v___x_1542_, v_majorImpl_1534_);
v___x_1546_ = l_Array_append___redArg(v___x_1544_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = 0;
v___x_1548_ = 1;
v___x_1549_ = 1;
v___x_1550_ = l_Lean_Meta_mkLambdaFVars(v___x_1546_, v_m_1535_, v___x_1547_, v___x_1548_, v___x_1547_, v___x_1548_, v___x_1549_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object* v___x_1551_, lean_object* v___x_1552_, lean_object* v_majorImpl_1553_, lean_object* v_m_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(v___x_1551_, v___x_1552_, v_majorImpl_1553_, v_m_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec_ref(v___x_1552_);
lean_dec(v___x_1551_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object* v___x_1565_, lean_object* v___x_1566_, lean_object* v_constMotive_1567_, lean_object* v_majorImpl_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v___f_1575_; lean_object* v___x_1576_; 
v___f_1575_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1575_, 0, v___x_1565_);
lean_closure_set(v___f_1575_, 1, v___x_1566_);
lean_closure_set(v___f_1575_, 2, v_majorImpl_1568_);
lean_inc(v___y_1573_);
lean_inc_ref(v___y_1572_);
lean_inc(v___y_1571_);
lean_inc_ref(v___y_1570_);
lean_inc_ref(v_constMotive_1567_);
v___x_1576_ = lean_infer_type(v_constMotive_1567_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; uint8_t v___x_1580_; lean_object* v___x_1581_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1));
v___x_1579_ = 0;
v___x_1580_ = 0;
v___x_1581_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v___x_1578_, v_a_1577_, v_constMotive_1567_, v___f_1575_, v___x_1579_, v___x_1580_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
return v___x_1581_;
}
else
{
lean_dec_ref(v___f_1575_);
lean_dec_ref(v_constMotive_1567_);
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object* v___x_1582_, lean_object* v___x_1583_, lean_object* v_constMotive_1584_, lean_object* v_majorImpl_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(v___x_1582_, v___x_1583_, v_constMotive_1584_, v_majorImpl_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object* v_name_1593_, uint8_t v_bi_1594_, lean_object* v_type_1595_, lean_object* v_k_1596_, uint8_t v_kind_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v___f_1604_; lean_object* v___x_1605_; 
lean_inc_ref(v___y_1598_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1604_, 0, v_k_1596_);
lean_closure_set(v___f_1604_, 1, v___y_1598_);
v___x_1605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1593_, v_bi_1594_, v_type_1595_, v___f_1604_, v_kind_1597_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1605_) == 0)
{
return v___x_1605_;
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1605_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1605_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object* v_name_1614_, lean_object* v_bi_1615_, lean_object* v_type_1616_, lean_object* v_k_1617_, lean_object* v_kind_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
uint8_t v_bi_boxed_1625_; uint8_t v_kind_boxed_1626_; lean_object* v_res_1627_; 
v_bi_boxed_1625_ = lean_unbox(v_bi_1615_);
v_kind_boxed_1626_ = lean_unbox(v_kind_1618_);
v_res_1627_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1614_, v_bi_boxed_1625_, v_type_1616_, v_k_1617_, v_kind_boxed_1626_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec_ref(v___y_1619_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object* v_name_1628_, lean_object* v_type_1629_, lean_object* v_k_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
uint8_t v___x_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; 
v___x_1637_ = 0;
v___x_1638_ = 0;
v___x_1639_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1628_, v___x_1637_, v_type_1629_, v_k_1630_, v___x_1638_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object* v_name_1640_, lean_object* v_type_1641_, lean_object* v_k_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_1640_, v_type_1641_, v_k_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
if (lean_obj_tag(v_a_1650_) == 0)
{
lean_object* v___x_1652_; 
v___x_1652_ = l_List_reverse___redArg(v_a_1651_);
return v___x_1652_;
}
else
{
lean_object* v_head_1653_; lean_object* v_tail_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1663_; 
v_head_1653_ = lean_ctor_get(v_a_1650_, 0);
v_tail_1654_ = lean_ctor_get(v_a_1650_, 1);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_a_1650_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1656_ = v_a_1650_;
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_tail_1654_);
lean_inc(v_head_1653_);
lean_dec(v_a_1650_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = l_Lean_mkLevelParam(v_head_1653_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 1, v_a_1651_);
lean_ctor_set(v___x_1656_, 0, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_a_1651_);
v___x_1660_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
v_a_1650_ = v_tail_1654_;
v_a_1651_ = v___x_1660_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object* v_a_1664_, lean_object* v_b_1665_){
_start:
{
lean_object* v_array_1666_; lean_object* v_start_1667_; lean_object* v_stop_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1681_; 
v_array_1666_ = lean_ctor_get(v_a_1664_, 0);
v_start_1667_ = lean_ctor_get(v_a_1664_, 1);
v_stop_1668_ = lean_ctor_get(v_a_1664_, 2);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_a_1664_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1670_ = v_a_1664_;
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_stop_1668_);
lean_inc(v_start_1667_);
lean_inc(v_array_1666_);
lean_dec(v_a_1664_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
uint8_t v___x_1672_; 
v___x_1672_ = lean_nat_dec_lt(v_start_1667_, v_stop_1668_);
if (v___x_1672_ == 0)
{
lean_del_object(v___x_1670_);
lean_dec(v_stop_1668_);
lean_dec(v_start_1667_);
lean_dec_ref(v_array_1666_);
return v_b_1665_;
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_nat_add(v_start_1667_, v___x_1673_);
lean_inc_ref(v_array_1666_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 1, v___x_1674_);
v___x_1676_ = v___x_1670_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_array_1666_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___x_1674_);
lean_ctor_set(v_reuseFailAlloc_1680_, 2, v_stop_1668_);
v___x_1676_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = lean_array_fget(v_array_1666_, v_start_1667_);
lean_dec(v_start_1667_);
lean_dec_ref(v_array_1666_);
v___x_1678_ = lean_array_push(v_b_1665_, v___x_1677_);
v_a_1664_ = v___x_1676_;
v_b_1665_ = v___x_1678_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object* v_b_1682_, lean_object* v_a_1683_, lean_object* v_constMotive_1684_, uint8_t v___x_1685_, lean_object* v_compFieldVars_1686_, lean_object* v_args_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_Elab_ComputedFields_isScalarField(v_b_1682_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = l_Lean_mkAppN(v_a_1683_, v_args_1687_);
v___x_1698_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_constMotive_1684_, v___x_1697_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___y_1701_; uint8_t v___x_1706_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v___x_1706_ = lean_unbox(v_a_1696_);
lean_dec(v_a_1696_);
if (v___x_1706_ == 0)
{
v___y_1701_ = v_compFieldVars_1686_;
goto v___jp_1700_;
}
else
{
lean_object* v___x_1707_; 
lean_dec_ref(v_compFieldVars_1686_);
v___x_1707_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1701_ = v___x_1707_;
goto v___jp_1700_;
}
v___jp_1700_:
{
lean_object* v___x_1702_; uint8_t v___x_1703_; uint8_t v___x_1704_; lean_object* v___x_1705_; 
v___x_1702_ = l_Array_append___redArg(v___y_1701_, v_args_1687_);
v___x_1703_ = 0;
v___x_1704_ = 1;
v___x_1705_ = l_Lean_Meta_mkLambdaFVars(v___x_1702_, v_a_1699_, v___x_1703_, v___x_1685_, v___x_1703_, v___x_1685_, v___x_1704_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
return v___x_1705_;
}
}
else
{
lean_dec(v_a_1696_);
lean_dec_ref(v_compFieldVars_1686_);
return v___x_1698_;
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
lean_dec_ref(v_compFieldVars_1686_);
lean_dec_ref(v_constMotive_1684_);
lean_dec_ref(v_a_1683_);
v_a_1708_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1695_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1695_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object* v_b_1716_, lean_object* v_a_1717_, lean_object* v_constMotive_1718_, lean_object* v___x_1719_, lean_object* v_compFieldVars_1720_, lean_object* v_args_1721_, lean_object* v_x_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v___x_12520__boxed_1729_; lean_object* v_res_1730_; 
v___x_12520__boxed_1729_ = lean_unbox(v___x_1719_);
v_res_1730_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(v_b_1716_, v_a_1717_, v_constMotive_1718_, v___x_12520__boxed_1729_, v_compFieldVars_1720_, v_args_1721_, v_x_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v_x_1722_);
lean_dec_ref(v_args_1721_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object* v_constMotive_1731_, lean_object* v_compFieldVars_1732_, lean_object* v_as_1733_, lean_object* v_bs_1734_, lean_object* v_i_1735_, lean_object* v_cs_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v___y_1744_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = lean_array_get_size(v_as_1733_);
v___x_1759_ = lean_nat_dec_lt(v_i_1735_, v___x_1758_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v_cs_1736_);
return v___x_1760_;
}
else
{
lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = lean_array_get_size(v_bs_1734_);
v___x_1762_ = lean_nat_dec_lt(v_i_1735_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; 
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_cs_1736_);
return v___x_1763_;
}
else
{
lean_object* v_a_1764_; lean_object* v_b_1765_; lean_object* v___x_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; 
v_a_1764_ = lean_array_fget_borrowed(v_as_1733_, v_i_1735_);
v_b_1765_ = lean_array_fget_borrowed(v_bs_1734_, v_i_1735_);
v___x_1766_ = lean_box(v___x_1762_);
lean_inc_ref(v_compFieldVars_1732_);
lean_inc_ref(v_constMotive_1731_);
lean_inc_n(v_a_1764_, 2);
lean_inc(v_b_1765_);
v___f_1767_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1767_, 0, v_b_1765_);
lean_closure_set(v___f_1767_, 1, v_a_1764_);
lean_closure_set(v___f_1767_, 2, v_constMotive_1731_);
lean_closure_set(v___f_1767_, 3, v___x_1766_);
lean_closure_set(v___f_1767_, 4, v_compFieldVars_1732_);
lean_inc(v___y_1741_);
lean_inc_ref(v___y_1740_);
lean_inc(v___y_1739_);
lean_inc_ref(v___y_1738_);
v___x_1768_ = lean_infer_type(v_a_1764_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; uint8_t v___x_1770_; lean_object* v___x_1771_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = 0;
v___x_1771_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1769_, v___f_1767_, v___x_1770_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
v___y_1744_ = v___x_1771_;
goto v___jp_1743_;
}
else
{
lean_dec_ref(v___f_1767_);
v___y_1744_ = v___x_1768_;
goto v___jp_1743_;
}
}
}
v___jp_1743_:
{
if (lean_obj_tag(v___y_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1745_ = lean_ctor_get(v___y_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___y_1744_, 1);
v___x_1746_ = lean_unsigned_to_nat(1u);
v___x_1747_ = lean_nat_add(v_i_1735_, v___x_1746_);
lean_dec(v_i_1735_);
v___x_1748_ = lean_array_push(v_cs_1736_, v_a_1745_);
v_i_1735_ = v___x_1747_;
v_cs_1736_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v_cs_1736_);
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v_a_1750_ = lean_ctor_get(v___y_1744_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___y_1744_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___y_1744_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___y_1744_);
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
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object* v_constMotive_1772_, lean_object* v_compFieldVars_1773_, lean_object* v_as_1774_, lean_object* v_bs_1775_, lean_object* v_i_1776_, lean_object* v_cs_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1772_, v_compFieldVars_1773_, v_as_1774_, v_bs_1775_, v_i_1776_, v_cs_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_bs_1775_);
lean_dec_ref(v_as_1774_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object* v_numIndices_1788_, lean_object* v___x_1789_, lean_object* v___x_1790_, lean_object* v_lparams_1791_, lean_object* v_params_1792_, lean_object* v_ctors_1793_, lean_object* v_compFieldVars_1794_, lean_object* v_levelParams_1795_, lean_object* v_xs_1796_, lean_object* v_constMotive_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___f_1810_; lean_object* v___x_1811_; lean_object* v_lower_1813_; lean_object* v_upper_1814_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1804_ = lean_unsigned_to_nat(1u);
v___x_1805_ = lean_nat_add(v_numIndices_1788_, v___x_1804_);
lean_inc(v___x_1805_);
lean_inc_ref(v_xs_1796_);
v___x_1806_ = l_Array_toSubarray___redArg(v_xs_1796_, v___x_1804_, v___x_1805_);
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_1809_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1806_, v___x_1808_);
lean_inc_ref(v_constMotive_1797_);
lean_inc_ref(v___x_1809_);
v___f_1810_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1810_, 0, v___x_1804_);
lean_closure_set(v___f_1810_, 1, v___x_1809_);
lean_closure_set(v___f_1810_, 2, v_constMotive_1797_);
v___x_1811_ = lean_array_get_borrowed(v___x_1789_, v_xs_1796_, v___x_1805_);
lean_dec(v___x_1805_);
v___x_1853_ = lean_unsigned_to_nat(2u);
v___x_1854_ = lean_nat_add(v_numIndices_1788_, v___x_1853_);
v___x_1855_ = lean_array_get_size(v_xs_1796_);
v___x_1856_ = lean_nat_dec_le(v___x_1854_, v___x_1807_);
if (v___x_1856_ == 0)
{
v_lower_1813_ = v___x_1854_;
v_upper_1814_ = v___x_1855_;
goto v___jp_1812_;
}
else
{
lean_dec(v___x_1854_);
v_lower_1813_ = v___x_1807_;
v_upper_1814_ = v___x_1855_;
goto v___jp_1812_;
}
v___jp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_inc_ref(v_xs_1796_);
v___x_1815_ = l_Array_toSubarray___redArg(v_xs_1796_, v_lower_1813_, v_upper_1814_);
v___x_1816_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1815_, v___x_1808_);
lean_inc(v___x_1790_);
v___x_1817_ = l_Lean_mkConst(v___x_1790_, v_lparams_1791_);
lean_inc_ref(v_params_1792_);
v___x_1818_ = l_Array_append___redArg(v_params_1792_, v___x_1809_);
v___x_1819_ = l_Lean_mkAppN(v___x_1817_, v___x_1818_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1));
lean_inc_ref(v___x_1819_);
v___x_1821_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_1820_, v___x_1819_, v___f_1810_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1823_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
lean_inc(v___x_1811_);
v___x_1823_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v___x_1819_, v___x_1811_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = lean_array_mk(v_ctors_1793_);
v___x_1826_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1797_, v_compFieldVars_1794_, v___x_1816_, v___x_1825_, v___x_1807_, v___x_1808_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___x_1825_);
lean_dec_ref(v___x_1816_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; uint8_t v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
lean_inc_ref(v_params_1792_);
v___x_1828_ = l_Array_append___redArg(v_params_1792_, v_xs_1796_);
lean_dec_ref(v_xs_1796_);
v___x_1829_ = l_Lean_mkCasesOnName(v___x_1790_);
v___x_1830_ = lean_box(0);
v___x_1831_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_1795_, v___x_1830_);
v___x_1832_ = l_Lean_mkConst(v___x_1829_, v___x_1831_);
v___x_1833_ = lean_mk_empty_array_with_capacity(v___x_1804_);
lean_inc_ref(v___x_1833_);
v___x_1834_ = lean_array_push(v___x_1833_, v_a_1822_);
v___x_1835_ = l_Array_append___redArg(v_params_1792_, v___x_1834_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = l_Array_append___redArg(v___x_1835_, v___x_1809_);
lean_dec_ref(v___x_1809_);
v___x_1837_ = lean_array_push(v___x_1833_, v_a_1824_);
v___x_1838_ = l_Array_append___redArg(v___x_1836_, v___x_1837_);
lean_dec_ref(v___x_1837_);
v___x_1839_ = l_Array_append___redArg(v___x_1838_, v_a_1827_);
lean_dec(v_a_1827_);
v___x_1840_ = l_Lean_mkAppN(v___x_1832_, v___x_1839_);
lean_dec_ref(v___x_1839_);
v___x_1841_ = 0;
v___x_1842_ = 1;
v___x_1843_ = 1;
v___x_1844_ = l_Lean_Meta_mkLambdaFVars(v___x_1828_, v___x_1840_, v___x_1841_, v___x_1842_, v___x_1841_, v___x_1842_, v___x_1843_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
return v___x_1844_;
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec(v_a_1824_);
lean_dec(v_a_1822_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
v_a_1845_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1826_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1826_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_dec(v_a_1822_);
lean_dec_ref(v___x_1816_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_constMotive_1797_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_compFieldVars_1794_);
lean_dec(v_ctors_1793_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
return v___x_1823_;
}
}
else
{
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1816_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_constMotive_1797_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_compFieldVars_1794_);
lean_dec(v_ctors_1793_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
return v___x_1821_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object* v_numIndices_1857_, lean_object* v___x_1858_, lean_object* v___x_1859_, lean_object* v_lparams_1860_, lean_object* v_params_1861_, lean_object* v_ctors_1862_, lean_object* v_compFieldVars_1863_, lean_object* v_levelParams_1864_, lean_object* v_xs_1865_, lean_object* v_constMotive_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(v_numIndices_1857_, v___x_1858_, v___x_1859_, v_lparams_1860_, v_params_1861_, v_ctors_1862_, v_compFieldVars_1863_, v_levelParams_1864_, v_xs_1865_, v_constMotive_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec_ref(v___x_1858_);
lean_dec(v_numIndices_1857_);
return v_res_1873_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
lean_ctor_set(v___x_1877_, 1, v___x_1876_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1879_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
lean_ctor_set(v___x_1879_, 2, v___x_1878_);
lean_ctor_set(v___x_1879_, 3, v___x_1878_);
lean_ctor_set(v___x_1879_, 4, v___x_1878_);
lean_ctor_set(v___x_1879_, 5, v___x_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object* v_env_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v___x_1884_; lean_object* v_nextMacroScope_1885_; lean_object* v_ngen_1886_; lean_object* v_auxDeclNGen_1887_; lean_object* v_traceState_1888_; lean_object* v_messages_1889_; lean_object* v_infoState_1890_; lean_object* v_snapshotTasks_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1917_; 
v___x_1884_ = lean_st_ref_take(v___y_1882_);
v_nextMacroScope_1885_ = lean_ctor_get(v___x_1884_, 1);
v_ngen_1886_ = lean_ctor_get(v___x_1884_, 2);
v_auxDeclNGen_1887_ = lean_ctor_get(v___x_1884_, 3);
v_traceState_1888_ = lean_ctor_get(v___x_1884_, 4);
v_messages_1889_ = lean_ctor_get(v___x_1884_, 6);
v_infoState_1890_ = lean_ctor_get(v___x_1884_, 7);
v_snapshotTasks_1891_ = lean_ctor_get(v___x_1884_, 8);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; lean_object* v_unused_1919_; 
v_unused_1918_ = lean_ctor_get(v___x_1884_, 5);
lean_dec(v_unused_1918_);
v_unused_1919_ = lean_ctor_get(v___x_1884_, 0);
lean_dec(v_unused_1919_);
v___x_1893_ = v___x_1884_;
v_isShared_1894_ = v_isSharedCheck_1917_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_snapshotTasks_1891_);
lean_inc(v_infoState_1890_);
lean_inc(v_messages_1889_);
lean_inc(v_traceState_1888_);
lean_inc(v_auxDeclNGen_1887_);
lean_inc(v_ngen_1886_);
lean_inc(v_nextMacroScope_1885_);
lean_dec(v___x_1884_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1917_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1895_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 5, v___x_1895_);
lean_ctor_set(v___x_1893_, 0, v_env_1880_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_env_1880_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v_nextMacroScope_1885_);
lean_ctor_set(v_reuseFailAlloc_1916_, 2, v_ngen_1886_);
lean_ctor_set(v_reuseFailAlloc_1916_, 3, v_auxDeclNGen_1887_);
lean_ctor_set(v_reuseFailAlloc_1916_, 4, v_traceState_1888_);
lean_ctor_set(v_reuseFailAlloc_1916_, 5, v___x_1895_);
lean_ctor_set(v_reuseFailAlloc_1916_, 6, v_messages_1889_);
lean_ctor_set(v_reuseFailAlloc_1916_, 7, v_infoState_1890_);
lean_ctor_set(v_reuseFailAlloc_1916_, 8, v_snapshotTasks_1891_);
v___x_1897_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v_mctx_1900_; lean_object* v_zetaDeltaFVarIds_1901_; lean_object* v_postponed_1902_; lean_object* v_diag_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1914_; 
v___x_1898_ = lean_st_ref_put(v___y_1882_, v___x_1897_);
v___x_1899_ = lean_st_ref_take(v___y_1881_);
v_mctx_1900_ = lean_ctor_get(v___x_1899_, 0);
v_zetaDeltaFVarIds_1901_ = lean_ctor_get(v___x_1899_, 2);
v_postponed_1902_ = lean_ctor_get(v___x_1899_, 3);
v_diag_1903_ = lean_ctor_get(v___x_1899_, 4);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; 
v_unused_1915_ = lean_ctor_get(v___x_1899_, 1);
lean_dec(v_unused_1915_);
v___x_1905_ = v___x_1899_;
v_isShared_1906_ = v_isSharedCheck_1914_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_diag_1903_);
lean_inc(v_postponed_1902_);
lean_inc(v_zetaDeltaFVarIds_1901_);
lean_inc(v_mctx_1900_);
lean_dec(v___x_1899_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1914_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1907_ = lean_box(0);
v___x_1908_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v___x_1908_);
v___x_1910_ = v___x_1905_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_mctx_1900_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1908_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v_zetaDeltaFVarIds_1901_);
lean_ctor_set(v_reuseFailAlloc_1913_, 3, v_postponed_1902_);
lean_ctor_set(v_reuseFailAlloc_1913_, 4, v_diag_1903_);
v___x_1910_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_st_ref_put(v___y_1881_, v___x_1910_);
v___x_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1907_);
return v___x_1912_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object* v_env_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec(v___y_1921_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object* v_declName_1925_, lean_object* v_impName_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; lean_object* v_env_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_st_ref_get(v___y_1931_);
v_env_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc_ref(v_env_1934_);
lean_dec(v___x_1933_);
v___x_1935_ = l_Lean_Compiler_setImplementedBy(v_env_1934_, v_declName_1925_, v_impName_1926_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1945_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 3);
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = l_Lean_MessageData_ofFormat(v___x_1941_);
v___x_1943_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1942_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
return v___x_1943_;
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1947_; 
v_a_1946_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1947_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_a_1946_, v___y_1929_, v___y_1931_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object* v_declName_1948_, lean_object* v_impName_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_declName_1948_, v_impName_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec_ref(v___y_1950_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object* v_msg_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v_toApplicative_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_2028_; 
v___x_1964_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_1965_ = l_StateRefT_x27_instMonad___redArg(v___x_1964_);
v_toApplicative_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; 
v_unused_2029_ = lean_ctor_get(v___x_1965_, 1);
lean_dec(v_unused_2029_);
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_2028_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_toApplicative_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_2028_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v_toFunctor_1970_; lean_object* v_toSeq_1971_; lean_object* v_toSeqLeft_1972_; lean_object* v_toSeqRight_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_2026_; 
v_toFunctor_1970_ = lean_ctor_get(v_toApplicative_1966_, 0);
v_toSeq_1971_ = lean_ctor_get(v_toApplicative_1966_, 2);
v_toSeqLeft_1972_ = lean_ctor_get(v_toApplicative_1966_, 3);
v_toSeqRight_1973_ = lean_ctor_get(v_toApplicative_1966_, 4);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_toApplicative_1966_);
if (v_isSharedCheck_2026_ == 0)
{
lean_object* v_unused_2027_; 
v_unused_2027_ = lean_ctor_get(v_toApplicative_1966_, 1);
lean_dec(v_unused_2027_);
v___x_1975_ = v_toApplicative_1966_;
v_isShared_1976_ = v_isSharedCheck_2026_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_toSeqRight_1973_);
lean_inc(v_toSeqLeft_1972_);
lean_inc(v_toSeq_1971_);
lean_inc(v_toFunctor_1970_);
lean_dec(v_toApplicative_1966_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_2026_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___f_1977_; lean_object* v___f_1978_; lean_object* v___f_1979_; lean_object* v___f_1980_; lean_object* v___x_1981_; lean_object* v___f_1982_; lean_object* v___f_1983_; lean_object* v___f_1984_; lean_object* v___x_1986_; 
v___f_1977_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_1978_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1970_);
v___f_1979_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1979_, 0, v_toFunctor_1970_);
v___f_1980_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1980_, 0, v_toFunctor_1970_);
v___x_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___f_1979_);
lean_ctor_set(v___x_1981_, 1, v___f_1980_);
v___f_1982_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1982_, 0, v_toSeqRight_1973_);
v___f_1983_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1983_, 0, v_toSeqLeft_1972_);
v___f_1984_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1984_, 0, v_toSeq_1971_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 4, v___f_1982_);
lean_ctor_set(v___x_1975_, 3, v___f_1983_);
lean_ctor_set(v___x_1975_, 2, v___f_1984_);
lean_ctor_set(v___x_1975_, 1, v___f_1977_);
lean_ctor_set(v___x_1975_, 0, v___x_1981_);
v___x_1986_ = v___x_1975_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v___f_1977_);
lean_ctor_set(v_reuseFailAlloc_2025_, 2, v___f_1984_);
lean_ctor_set(v_reuseFailAlloc_2025_, 3, v___f_1983_);
lean_ctor_set(v_reuseFailAlloc_2025_, 4, v___f_1982_);
v___x_1986_ = v_reuseFailAlloc_2025_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
lean_object* v___x_1988_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 1, v___f_1978_);
lean_ctor_set(v___x_1968_, 0, v___x_1986_);
v___x_1988_ = v___x_1968_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_1986_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v___f_1978_);
v___x_1988_ = v_reuseFailAlloc_2024_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1989_; lean_object* v_toApplicative_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2022_; 
v___x_1989_ = l_StateRefT_x27_instMonad___redArg(v___x_1988_);
v_toApplicative_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; 
v_unused_2023_ = lean_ctor_get(v___x_1989_, 1);
lean_dec(v_unused_2023_);
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_2022_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_toApplicative_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2022_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v_toFunctor_1994_; lean_object* v_toSeq_1995_; lean_object* v_toSeqLeft_1996_; lean_object* v_toSeqRight_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2020_; 
v_toFunctor_1994_ = lean_ctor_get(v_toApplicative_1990_, 0);
v_toSeq_1995_ = lean_ctor_get(v_toApplicative_1990_, 2);
v_toSeqLeft_1996_ = lean_ctor_get(v_toApplicative_1990_, 3);
v_toSeqRight_1997_ = lean_ctor_get(v_toApplicative_1990_, 4);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_toApplicative_1990_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; 
v_unused_2021_ = lean_ctor_get(v_toApplicative_1990_, 1);
lean_dec(v_unused_2021_);
v___x_1999_ = v_toApplicative_1990_;
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_toSeqRight_1997_);
lean_inc(v_toSeqLeft_1996_);
lean_inc(v_toSeq_1995_);
lean_inc(v_toFunctor_1994_);
lean_dec(v_toApplicative_1990_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___f_2001_; lean_object* v___f_2002_; lean_object* v___f_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; lean_object* v___f_2006_; lean_object* v___f_2007_; lean_object* v___f_2008_; lean_object* v___x_2010_; 
v___f_2001_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_2002_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_1994_);
v___f_2003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2003_, 0, v_toFunctor_1994_);
v___f_2004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2004_, 0, v_toFunctor_1994_);
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___f_2003_);
lean_ctor_set(v___x_2005_, 1, v___f_2004_);
v___f_2006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2006_, 0, v_toSeqRight_1997_);
v___f_2007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2007_, 0, v_toSeqLeft_1996_);
v___f_2008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2008_, 0, v_toSeq_1995_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 4, v___f_2006_);
lean_ctor_set(v___x_1999_, 3, v___f_2007_);
lean_ctor_set(v___x_1999_, 2, v___f_2008_);
lean_ctor_set(v___x_1999_, 1, v___f_2001_);
lean_ctor_set(v___x_1999_, 0, v___x_2005_);
v___x_2010_ = v___x_1999_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v___f_2001_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v___f_2008_);
lean_ctor_set(v_reuseFailAlloc_2019_, 3, v___f_2007_);
lean_ctor_set(v_reuseFailAlloc_2019_, 4, v___f_2006_);
v___x_2010_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2012_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 1, v___f_2002_);
lean_ctor_set(v___x_1992_, 0, v___x_2010_);
v___x_2012_ = v___x_1992_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2010_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v___f_2002_);
v___x_2012_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_11015__overap_2016_; lean_object* v___x_2017_; 
v___x_2013_ = l_ReaderT_instMonad___redArg(v___x_2012_);
v___x_2014_ = lean_box(0);
v___x_2015_ = l_instInhabitedOfMonad___redArg(v___x_2013_, v___x_2014_);
v___x_11015__overap_2016_ = lean_panic_fn_borrowed(v___x_2015_, v_msg_1957_);
lean_dec(v___x_2015_);
lean_inc(v___y_1962_);
lean_inc_ref(v___y_1961_);
lean_inc(v___y_1960_);
lean_inc_ref(v___y_1959_);
lean_inc_ref(v___y_1958_);
v___x_2017_ = lean_apply_6(v___x_11015__overap_2016_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, lean_box(0));
return v___x_2017_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v_msg_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2031_);
return v_res_2037_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0));
v___x_2040_ = l_Lean_stringToMessageData(v___x_2039_);
return v___x_2040_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2042_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_2043_ = lean_unsigned_to_nat(11u);
v___x_2044_ = lean_unsigned_to_nat(115u);
v___x_2045_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2));
v___x_2046_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_2047_ = l_mkPanicMessageWithDecl(v___x_2046_, v___x_2045_, v___x_2044_, v___x_2043_, v___x_2042_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object* v_constName_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v___x_2063_; lean_object* v_env_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; 
v___x_2063_ = lean_st_ref_get(v___y_2053_);
v_env_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc_ref(v_env_2064_);
lean_dec(v___x_2063_);
v___x_2065_ = 0;
lean_inc(v_constName_2048_);
v___x_2066_ = l_Lean_Environment_findAsync_x3f(v_env_2064_, v_constName_2048_, v___x_2065_);
if (lean_obj_tag(v___x_2066_) == 1)
{
lean_object* v_val_2067_; uint8_t v_kind_2068_; 
v_val_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_val_2067_);
lean_dec_ref_known(v___x_2066_, 1);
v_kind_2068_ = lean_ctor_get_uint8(v_val_2067_, sizeof(void*)*3);
if (v_kind_2068_ == 0)
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2067_);
if (lean_obj_tag(v___x_2069_) == 1)
{
lean_object* v_val_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_constName_2048_);
v_val_2070_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2069_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_val_2070_);
lean_dec(v___x_2069_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set_tag(v___x_2072_, 0);
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_val_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
else
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
lean_dec_ref(v___x_2069_);
v___x_2078_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3);
v___x_2079_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v___x_2078_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2088_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2082_ = v___x_2079_;
v_isShared_2083_ = v_isSharedCheck_2088_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2079_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2088_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
if (lean_obj_tag(v_a_2080_) == 0)
{
lean_del_object(v___x_2082_);
goto v___jp_2055_;
}
else
{
lean_object* v_val_2084_; lean_object* v___x_2086_; 
lean_dec(v_constName_2048_);
v_val_2084_ = lean_ctor_get(v_a_2080_, 0);
lean_inc(v_val_2084_);
lean_dec_ref_known(v_a_2080_, 1);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 0, v_val_2084_);
v___x_2086_ = v___x_2082_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_val_2084_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v_constName_2048_);
v_a_2089_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2079_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2079_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
else
{
lean_dec(v_val_2067_);
goto v___jp_2055_;
}
}
else
{
lean_dec(v___x_2066_);
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v___x_2056_; uint8_t v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2056_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_2057_ = 0;
v___x_2058_ = l_Lean_MessageData_ofConstName(v_constName_2048_, v___x_2057_);
v___x_2059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2056_);
lean_ctor_set(v___x_2059_, 1, v___x_2058_);
v___x_2060_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1);
v___x_2061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2059_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_2061_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
return v___x_2062_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object* v_constName_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v_constName_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec_ref(v___y_2098_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_toInductiveVal_2114_; lean_object* v_toConstantVal_2115_; lean_object* v_lparams_2116_; lean_object* v_params_2117_; lean_object* v_compFieldVars_2118_; lean_object* v_numIndices_2119_; lean_object* v_ctors_2120_; lean_object* v_name_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v_toInductiveVal_2114_ = lean_ctor_get(v_a_2108_, 0);
v_toConstantVal_2115_ = lean_ctor_get(v_toInductiveVal_2114_, 0);
v_lparams_2116_ = lean_ctor_get(v_a_2108_, 1);
v_params_2117_ = lean_ctor_get(v_a_2108_, 2);
v_compFieldVars_2118_ = lean_ctor_get(v_a_2108_, 4);
v_numIndices_2119_ = lean_ctor_get(v_toInductiveVal_2114_, 2);
v_ctors_2120_ = lean_ctor_get(v_toInductiveVal_2114_, 4);
v_name_2121_ = lean_ctor_get(v_toConstantVal_2115_, 0);
v___x_2122_ = l_Lean_instInhabitedExpr;
lean_inc(v_name_2121_);
v___x_2123_ = l_Lean_mkCasesOnName(v_name_2121_);
lean_inc(v___x_2123_);
v___x_2124_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v___x_2123_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v___x_2124_, 1);
v___x_2126_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_2121_);
v___x_2127_ = l_Lean_Name_append(v_name_2121_, v___x_2126_);
lean_inc(v___x_2127_);
v___x_2128_ = l_Lean_mkCasesOn(v___x_2127_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2188_; 
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; 
v_unused_2189_ = lean_ctor_get(v___x_2128_, 0);
lean_dec(v_unused_2189_);
v___x_2130_ = v___x_2128_;
v_isShared_2131_ = v_isSharedCheck_2188_;
goto v_resetjp_2129_;
}
else
{
lean_dec(v___x_2128_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2188_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v_toConstantVal_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2184_; 
v_toConstantVal_2132_ = lean_ctor_get(v_a_2125_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_a_2125_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; lean_object* v_unused_2186_; lean_object* v_unused_2187_; 
v_unused_2185_ = lean_ctor_get(v_a_2125_, 3);
lean_dec(v_unused_2185_);
v_unused_2186_ = lean_ctor_get(v_a_2125_, 2);
lean_dec(v_unused_2186_);
v_unused_2187_ = lean_ctor_get(v_a_2125_, 1);
lean_dec(v_unused_2187_);
v___x_2134_ = v_a_2125_;
v_isShared_2135_ = v_isSharedCheck_2184_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_toConstantVal_2132_);
lean_dec(v_a_2125_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2184_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v_levelParams_2136_; lean_object* v_type_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2182_; 
v_levelParams_2136_ = lean_ctor_get(v_toConstantVal_2132_, 1);
v_type_2137_ = lean_ctor_get(v_toConstantVal_2132_, 2);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_toConstantVal_2132_);
if (v_isSharedCheck_2182_ == 0)
{
lean_object* v_unused_2183_; 
v_unused_2183_ = lean_ctor_get(v_toConstantVal_2132_, 0);
lean_dec(v_unused_2183_);
v___x_2139_ = v_toConstantVal_2132_;
v_isShared_2140_ = v_isSharedCheck_2182_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_type_2137_);
lean_inc(v_levelParams_2136_);
lean_dec(v_toConstantVal_2132_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2182_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___f_2141_; lean_object* v___x_2142_; 
lean_inc(v_levelParams_2136_);
lean_inc_ref(v_compFieldVars_2118_);
lean_inc(v_ctors_2120_);
lean_inc_ref(v_params_2117_);
lean_inc(v_lparams_2116_);
lean_inc(v_numIndices_2119_);
v___f_2141_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed), 16, 8);
lean_closure_set(v___f_2141_, 0, v_numIndices_2119_);
lean_closure_set(v___f_2141_, 1, v___x_2122_);
lean_closure_set(v___f_2141_, 2, v___x_2127_);
lean_closure_set(v___f_2141_, 3, v_lparams_2116_);
lean_closure_set(v___f_2141_, 4, v_params_2117_);
lean_closure_set(v___f_2141_, 5, v_ctors_2120_);
lean_closure_set(v___f_2141_, 6, v_compFieldVars_2118_);
lean_closure_set(v___f_2141_, 7, v_levelParams_2136_);
lean_inc_ref(v_type_2137_);
v___x_2142_ = l_Lean_Meta_instantiateForall(v_type_2137_, v_params_2117_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v_a_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2142_, 1);
v___x_2144_ = 0;
v___x_2145_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2143_, v___f_2141_, v___x_2144_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2150_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
v___x_2147_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v___x_2123_);
v___x_2148_ = l_Lean_Name_append(v___x_2123_, v___x_2147_);
lean_inc(v___x_2148_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2148_);
v___x_2150_ = v___x_2139_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_levelParams_2136_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v_type_2137_);
v___x_2150_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2151_ = lean_box(0);
v___x_2152_ = 0;
v___x_2153_ = lean_box(0);
lean_inc(v___x_2148_);
v___x_2154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2148_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 3, v___x_2154_);
lean_ctor_set(v___x_2134_, 2, v___x_2151_);
lean_ctor_set(v___x_2134_, 1, v_a_2146_);
lean_ctor_set(v___x_2134_, 0, v___x_2150_);
v___x_2156_ = v___x_2134_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2150_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_a_2146_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2158_; 
lean_ctor_set_uint8(v___x_2156_, sizeof(void*)*4, v___x_2152_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 1);
lean_ctor_set(v___x_2130_, 0, v___x_2156_);
v___x_2158_ = v___x_2130_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2159_; 
v___x_2159_ = l_Lean_addDecl(v___x_2158_, v___x_2144_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2159_) == 0)
{
uint8_t v___x_2160_; lean_object* v___x_2161_; 
lean_dec_ref_known(v___x_2159_, 1);
v___x_2160_ = 0;
lean_inc(v___x_2148_);
v___x_2161_ = l_Lean_Meta_setInlineAttribute(v___x_2148_, v___x_2160_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v___x_2162_; 
lean_dec_ref_known(v___x_2161_, 1);
v___x_2162_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v___x_2123_, v___x_2148_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
return v___x_2162_;
}
else
{
lean_dec(v___x_2148_);
lean_dec(v___x_2123_);
return v___x_2161_;
}
}
else
{
lean_dec(v___x_2148_);
lean_dec(v___x_2123_);
return v___x_2159_;
}
}
}
}
}
else
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
lean_del_object(v___x_2139_);
lean_dec_ref(v_type_2137_);
lean_dec(v_levelParams_2136_);
lean_del_object(v___x_2134_);
lean_del_object(v___x_2130_);
lean_dec(v___x_2123_);
v_a_2166_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2168_ = v___x_2145_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v___x_2145_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2166_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec_ref(v___f_2141_);
lean_del_object(v___x_2139_);
lean_dec_ref(v_type_2137_);
lean_dec(v_levelParams_2136_);
lean_del_object(v___x_2134_);
lean_del_object(v___x_2130_);
lean_dec(v___x_2123_);
v_a_2174_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2142_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2142_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_2127_);
lean_dec(v_a_2125_);
lean_dec(v___x_2123_);
return v___x_2128_;
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v___x_2123_);
v_a_2190_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2124_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2124_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec(v_a_2200_);
lean_dec_ref(v_a_2199_);
lean_dec_ref(v_a_2198_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object* v_inst_2205_, lean_object* v_R_2206_, lean_object* v_a_2207_, lean_object* v_b_2208_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v_a_2207_, v_b_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object* v_00_u03b1_2210_, lean_object* v_name_2211_, uint8_t v_bi_2212_, lean_object* v_type_2213_, lean_object* v_k_2214_, uint8_t v_kind_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_2211_, v_bi_2212_, v_type_2213_, v_k_2214_, v_kind_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2223_, lean_object* v_name_2224_, lean_object* v_bi_2225_, lean_object* v_type_2226_, lean_object* v_k_2227_, lean_object* v_kind_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_){
_start:
{
uint8_t v_bi_boxed_2235_; uint8_t v_kind_boxed_2236_; lean_object* v_res_2237_; 
v_bi_boxed_2235_ = lean_unbox(v_bi_2225_);
v_kind_boxed_2236_ = lean_unbox(v_kind_2228_);
v_res_2237_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(v_00_u03b1_2223_, v_name_2224_, v_bi_boxed_2235_, v_type_2226_, v_k_2227_, v_kind_boxed_2236_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec_ref(v___y_2229_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object* v_00_u03b1_2238_, lean_object* v_name_2239_, lean_object* v_type_2240_, lean_object* v_k_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_2239_, v_type_2240_, v_k_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object* v_00_u03b1_2249_, lean_object* v_name_2250_, lean_object* v_type_2251_, lean_object* v_k_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(v_00_u03b1_2249_, v_name_2250_, v_type_2251_, v_k_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec_ref(v___y_2253_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object* v_env_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_2260_, v___y_2263_, v___y_2265_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object* v_env_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(v_env_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec_ref(v___y_2269_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object* v___x_2276_, size_t v_sz_2277_, size_t v_i_2278_, lean_object* v_bs_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
uint8_t v___x_2285_; 
v___x_2285_ = lean_usize_dec_lt(v_i_2278_, v_sz_2277_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
lean_dec_ref(v___x_2276_);
v___x_2286_ = l_unsafeCast___redArg(v_bs_2279_);
lean_dec_ref(v_bs_2279_);
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2286_);
return v___x_2287_;
}
else
{
lean_object* v_v_2288_; lean_object* v___x_2289_; lean_object* v_bs_x27_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_v_2288_ = lean_array_uget(v_bs_2279_, v_i_2278_);
v___x_2289_ = lean_unsigned_to_nat(0u);
v_bs_x27_2290_ = lean_array_uset(v_bs_2279_, v_i_2278_, v___x_2289_);
v___x_2291_ = l_unsafeCast___redArg(v_v_2288_);
lean_dec(v_v_2288_);
lean_inc_ref(v___x_2276_);
v___x_2292_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v___x_2291_, v___x_2276_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; size_t v___x_2294_; size_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2294_ = ((size_t)1ULL);
v___x_2295_ = lean_usize_add(v_i_2278_, v___x_2294_);
v___x_2296_ = l_unsafeCast___redArg(v_a_2293_);
lean_dec(v_a_2293_);
v___x_2297_ = lean_array_uset(v_bs_x27_2290_, v_i_2278_, v___x_2296_);
v_i_2278_ = v___x_2295_;
v_bs_2279_ = v___x_2297_;
goto _start;
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec_ref(v_bs_x27_2290_);
lean_dec_ref(v___x_2276_);
v_a_2299_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2292_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2292_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object* v___x_2307_, lean_object* v_sz_2308_, lean_object* v_i_2309_, lean_object* v_bs_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
size_t v_sz_boxed_2316_; size_t v_i_boxed_2317_; lean_object* v_res_2318_; 
v_sz_boxed_2316_ = lean_unbox_usize(v_sz_2308_);
lean_dec(v_sz_2308_);
v_i_boxed_2317_ = lean_unbox_usize(v_i_2309_);
lean_dec(v_i_2309_);
v_res_2318_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2307_, v_sz_boxed_2316_, v_i_boxed_2317_, v_bs_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object* v___x_2319_, size_t v_sz_2320_, size_t v_i_2321_, lean_object* v_bs_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v___x_2329_; 
v___x_2329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2319_, v_sz_2320_, v_i_2321_, v_bs_2322_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object* v___x_2330_, lean_object* v_sz_2331_, lean_object* v_i_2332_, lean_object* v_bs_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
size_t v_sz_boxed_2340_; size_t v_i_boxed_2341_; lean_object* v_res_2342_; 
v_sz_boxed_2340_ = lean_unbox_usize(v_sz_2331_);
lean_dec(v_sz_2331_);
v_i_boxed_2341_ = lean_unbox_usize(v_i_2332_);
lean_dec(v_i_2332_);
v_res_2342_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(v___x_2330_, v_sz_boxed_2340_, v_i_boxed_2341_, v_bs_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v___y_2334_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object* v_head_2345_, lean_object* v_compFields_2346_, lean_object* v___x_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2345_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2371_; 
v_a_2355_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2357_ = v___x_2354_;
v_isShared_2358_ = v_isSharedCheck_2371_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2354_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2371_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
uint8_t v___x_2359_; 
v___x_2359_ = lean_unbox(v_a_2355_);
lean_dec(v_a_2355_);
if (v___x_2359_ == 0)
{
size_t v_sz_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_9826__overap_2365_; lean_object* v___x_2366_; 
lean_del_object(v___x_2357_);
v_sz_2360_ = lean_array_size(v_compFields_2346_);
v___x_2361_ = l_unsafeCast___redArg(v_compFields_2346_);
v___x_2362_ = lean_box_usize(v_sz_2360_);
v___x_2363_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1));
v___x_2364_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed), 10, 4);
lean_closure_set(v___x_2364_, 0, v___x_2347_);
lean_closure_set(v___x_2364_, 1, v___x_2362_);
lean_closure_set(v___x_2364_, 2, v___x_2363_);
lean_closure_set(v___x_2364_, 3, v___x_2361_);
v___x_9826__overap_2365_ = l_unsafeCast___redArg(v___x_2364_);
lean_dec_ref(v___x_2364_);
lean_inc(v___y_2352_);
lean_inc_ref(v___y_2351_);
lean_inc(v___y_2350_);
lean_inc_ref(v___y_2349_);
lean_inc_ref(v___y_2348_);
v___x_2366_ = lean_apply_6(v___x_9826__overap_2365_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, lean_box(0));
return v___x_2366_;
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
lean_dec_ref(v___x_2347_);
v___x_2367_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 0, v___x_2367_);
v___x_2369_ = v___x_2357_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
lean_dec_ref(v___x_2347_);
v_a_2372_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2354_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2354_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object* v_head_2380_, lean_object* v_compFields_2381_, lean_object* v___x_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(v_head_2380_, v_compFields_2381_, v___x_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec_ref(v_compFields_2381_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2390_, uint8_t v_isExporting_2391_, lean_object* v___x_2392_, lean_object* v___y_2393_, lean_object* v___x_2394_, lean_object* v_a_x3f_2395_){
_start:
{
lean_object* v___x_2397_; lean_object* v_env_2398_; lean_object* v_nextMacroScope_2399_; lean_object* v_ngen_2400_; lean_object* v_auxDeclNGen_2401_; lean_object* v_traceState_2402_; lean_object* v_messages_2403_; lean_object* v_infoState_2404_; lean_object* v_snapshotTasks_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2430_; 
v___x_2397_ = lean_st_ref_take(v___y_2390_);
v_env_2398_ = lean_ctor_get(v___x_2397_, 0);
v_nextMacroScope_2399_ = lean_ctor_get(v___x_2397_, 1);
v_ngen_2400_ = lean_ctor_get(v___x_2397_, 2);
v_auxDeclNGen_2401_ = lean_ctor_get(v___x_2397_, 3);
v_traceState_2402_ = lean_ctor_get(v___x_2397_, 4);
v_messages_2403_ = lean_ctor_get(v___x_2397_, 6);
v_infoState_2404_ = lean_ctor_get(v___x_2397_, 7);
v_snapshotTasks_2405_ = lean_ctor_get(v___x_2397_, 8);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2430_ == 0)
{
lean_object* v_unused_2431_; 
v_unused_2431_ = lean_ctor_get(v___x_2397_, 5);
lean_dec(v_unused_2431_);
v___x_2407_ = v___x_2397_;
v_isShared_2408_ = v_isSharedCheck_2430_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_snapshotTasks_2405_);
lean_inc(v_infoState_2404_);
lean_inc(v_messages_2403_);
lean_inc(v_traceState_2402_);
lean_inc(v_auxDeclNGen_2401_);
lean_inc(v_ngen_2400_);
lean_inc(v_nextMacroScope_2399_);
lean_inc(v_env_2398_);
lean_dec(v___x_2397_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2430_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2409_ = l_Lean_Environment_setExporting(v_env_2398_, v_isExporting_2391_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 5, v___x_2392_);
lean_ctor_set(v___x_2407_, 0, v___x_2409_);
v___x_2411_ = v___x_2407_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2409_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v_nextMacroScope_2399_);
lean_ctor_set(v_reuseFailAlloc_2429_, 2, v_ngen_2400_);
lean_ctor_set(v_reuseFailAlloc_2429_, 3, v_auxDeclNGen_2401_);
lean_ctor_set(v_reuseFailAlloc_2429_, 4, v_traceState_2402_);
lean_ctor_set(v_reuseFailAlloc_2429_, 5, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2429_, 6, v_messages_2403_);
lean_ctor_set(v_reuseFailAlloc_2429_, 7, v_infoState_2404_);
lean_ctor_set(v_reuseFailAlloc_2429_, 8, v_snapshotTasks_2405_);
v___x_2411_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v_mctx_2414_; lean_object* v_zetaDeltaFVarIds_2415_; lean_object* v_postponed_2416_; lean_object* v_diag_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2427_; 
v___x_2412_ = lean_st_ref_put(v___y_2390_, v___x_2411_);
v___x_2413_ = lean_st_ref_take(v___y_2393_);
v_mctx_2414_ = lean_ctor_get(v___x_2413_, 0);
v_zetaDeltaFVarIds_2415_ = lean_ctor_get(v___x_2413_, 2);
v_postponed_2416_ = lean_ctor_get(v___x_2413_, 3);
v_diag_2417_ = lean_ctor_get(v___x_2413_, 4);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2427_ == 0)
{
lean_object* v_unused_2428_; 
v_unused_2428_ = lean_ctor_get(v___x_2413_, 1);
lean_dec(v_unused_2428_);
v___x_2419_ = v___x_2413_;
v_isShared_2420_ = v_isSharedCheck_2427_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_diag_2417_);
lean_inc(v_postponed_2416_);
lean_inc(v_zetaDeltaFVarIds_2415_);
lean_inc(v_mctx_2414_);
lean_dec(v___x_2413_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2427_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = lean_box(0);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 1, v___x_2394_);
v___x_2423_ = v___x_2419_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_mctx_2414_);
lean_ctor_set(v_reuseFailAlloc_2426_, 1, v___x_2394_);
lean_ctor_set(v_reuseFailAlloc_2426_, 2, v_zetaDeltaFVarIds_2415_);
lean_ctor_set(v_reuseFailAlloc_2426_, 3, v_postponed_2416_);
lean_ctor_set(v_reuseFailAlloc_2426_, 4, v_diag_2417_);
v___x_2423_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = lean_st_ref_put(v___y_2393_, v___x_2423_);
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2421_);
return v___x_2425_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2432_, lean_object* v_isExporting_2433_, lean_object* v___x_2434_, lean_object* v___y_2435_, lean_object* v___x_2436_, lean_object* v_a_x3f_2437_, lean_object* v___y_2438_){
_start:
{
uint8_t v_isExporting_boxed_2439_; lean_object* v_res_2440_; 
v_isExporting_boxed_2439_ = lean_unbox(v_isExporting_2433_);
v_res_2440_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2432_, v_isExporting_boxed_2439_, v___x_2434_, v___y_2435_, v___x_2436_, v_a_x3f_2437_);
lean_dec(v_a_x3f_2437_);
lean_dec(v___y_2435_);
lean_dec(v___y_2432_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object* v_x_2441_, uint8_t v_isExporting_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v___x_2449_; lean_object* v_env_2450_; lean_object* v___x_2451_; uint8_t v_isModule_2452_; 
v___x_2449_ = lean_st_ref_get(v___y_2447_);
v_env_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc_ref(v_env_2450_);
lean_dec(v___x_2449_);
v___x_2451_ = l_Lean_Environment_header(v_env_2450_);
v_isModule_2452_ = lean_ctor_get_uint8(v___x_2451_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2451_);
if (v_isModule_2452_ == 0)
{
lean_object* v___x_2453_; 
lean_dec_ref(v_env_2450_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
lean_inc_ref(v___y_2443_);
v___x_2453_ = lean_apply_6(v_x_2441_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, lean_box(0));
return v___x_2453_;
}
else
{
uint8_t v_isExporting_2454_; 
v_isExporting_2454_ = lean_ctor_get_uint8(v_env_2450_, sizeof(void*)*8);
lean_dec_ref(v_env_2450_);
if (v_isExporting_2442_ == 0)
{
if (v_isExporting_2454_ == 0)
{
lean_object* v___x_2520_; 
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
lean_inc_ref(v___y_2443_);
v___x_2520_ = lean_apply_6(v_x_2441_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, lean_box(0));
return v___x_2520_;
}
else
{
goto v___jp_2455_;
}
}
else
{
if (v_isExporting_2454_ == 0)
{
goto v___jp_2455_;
}
else
{
lean_object* v___x_2521_; 
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
lean_inc_ref(v___y_2443_);
v___x_2521_ = lean_apply_6(v_x_2441_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, lean_box(0));
return v___x_2521_;
}
}
v___jp_2455_:
{
lean_object* v___x_2456_; lean_object* v_env_2457_; lean_object* v_nextMacroScope_2458_; lean_object* v_ngen_2459_; lean_object* v_auxDeclNGen_2460_; lean_object* v_traceState_2461_; lean_object* v_messages_2462_; lean_object* v_infoState_2463_; lean_object* v_snapshotTasks_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2518_; 
v___x_2456_ = lean_st_ref_take(v___y_2447_);
v_env_2457_ = lean_ctor_get(v___x_2456_, 0);
v_nextMacroScope_2458_ = lean_ctor_get(v___x_2456_, 1);
v_ngen_2459_ = lean_ctor_get(v___x_2456_, 2);
v_auxDeclNGen_2460_ = lean_ctor_get(v___x_2456_, 3);
v_traceState_2461_ = lean_ctor_get(v___x_2456_, 4);
v_messages_2462_ = lean_ctor_get(v___x_2456_, 6);
v_infoState_2463_ = lean_ctor_get(v___x_2456_, 7);
v_snapshotTasks_2464_ = lean_ctor_get(v___x_2456_, 8);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2518_ == 0)
{
lean_object* v_unused_2519_; 
v_unused_2519_ = lean_ctor_get(v___x_2456_, 5);
lean_dec(v_unused_2519_);
v___x_2466_ = v___x_2456_;
v_isShared_2467_ = v_isSharedCheck_2518_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_snapshotTasks_2464_);
lean_inc(v_infoState_2463_);
lean_inc(v_messages_2462_);
lean_inc(v_traceState_2461_);
lean_inc(v_auxDeclNGen_2460_);
lean_inc(v_ngen_2459_);
lean_inc(v_nextMacroScope_2458_);
lean_inc(v_env_2457_);
lean_dec(v___x_2456_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2518_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2471_; 
v___x_2468_ = l_Lean_Environment_setExporting(v_env_2457_, v_isExporting_2442_);
v___x_2469_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 5, v___x_2469_);
lean_ctor_set(v___x_2466_, 0, v___x_2468_);
v___x_2471_ = v___x_2466_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2468_);
lean_ctor_set(v_reuseFailAlloc_2517_, 1, v_nextMacroScope_2458_);
lean_ctor_set(v_reuseFailAlloc_2517_, 2, v_ngen_2459_);
lean_ctor_set(v_reuseFailAlloc_2517_, 3, v_auxDeclNGen_2460_);
lean_ctor_set(v_reuseFailAlloc_2517_, 4, v_traceState_2461_);
lean_ctor_set(v_reuseFailAlloc_2517_, 5, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2517_, 6, v_messages_2462_);
lean_ctor_set(v_reuseFailAlloc_2517_, 7, v_infoState_2463_);
lean_ctor_set(v_reuseFailAlloc_2517_, 8, v_snapshotTasks_2464_);
v___x_2471_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v_mctx_2474_; lean_object* v_zetaDeltaFVarIds_2475_; lean_object* v_postponed_2476_; lean_object* v_diag_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2515_; 
v___x_2472_ = lean_st_ref_put(v___y_2447_, v___x_2471_);
v___x_2473_ = lean_st_ref_take(v___y_2445_);
v_mctx_2474_ = lean_ctor_get(v___x_2473_, 0);
v_zetaDeltaFVarIds_2475_ = lean_ctor_get(v___x_2473_, 2);
v_postponed_2476_ = lean_ctor_get(v___x_2473_, 3);
v_diag_2477_ = lean_ctor_get(v___x_2473_, 4);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2515_ == 0)
{
lean_object* v_unused_2516_; 
v_unused_2516_ = lean_ctor_get(v___x_2473_, 1);
lean_dec(v_unused_2516_);
v___x_2479_ = v___x_2473_;
v_isShared_2480_ = v_isSharedCheck_2515_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_diag_2477_);
lean_inc(v_postponed_2476_);
lean_inc(v_zetaDeltaFVarIds_2475_);
lean_inc(v_mctx_2474_);
lean_dec(v___x_2473_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2515_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2481_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 1, v___x_2481_);
v___x_2483_ = v___x_2479_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_mctx_2474_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v___x_2481_);
lean_ctor_set(v_reuseFailAlloc_2514_, 2, v_zetaDeltaFVarIds_2475_);
lean_ctor_set(v_reuseFailAlloc_2514_, 3, v_postponed_2476_);
lean_ctor_set(v_reuseFailAlloc_2514_, 4, v_diag_2477_);
v___x_2483_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2484_; lean_object* v_r_2485_; 
v___x_2484_ = lean_st_ref_put(v___y_2445_, v___x_2483_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
lean_inc_ref(v___y_2443_);
v_r_2485_ = lean_apply_6(v_x_2441_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, lean_box(0));
if (lean_obj_tag(v_r_2485_) == 0)
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2502_; 
v_a_2486_ = lean_ctor_get(v_r_2485_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v_r_2485_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2488_ = v_r_2485_;
v_isShared_2489_ = v_isSharedCheck_2502_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v_r_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2502_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
lean_inc(v_a_2486_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set_tag(v___x_2488_, 1);
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
lean_object* v___x_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
v___x_2492_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2447_, v_isExporting_2454_, v___x_2469_, v___y_2445_, v___x_2481_, v___x_2491_);
lean_dec_ref(v___x_2491_);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2499_ == 0)
{
lean_object* v_unused_2500_; 
v_unused_2500_ = lean_ctor_get(v___x_2492_, 0);
lean_dec(v_unused_2500_);
v___x_2494_ = v___x_2492_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_dec(v___x_2492_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v_a_2486_);
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2486_);
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
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2512_; 
v_a_2503_ = lean_ctor_get(v_r_2485_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v_r_2485_, 1);
v___x_2504_ = lean_box(0);
v___x_2505_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2447_, v_isExporting_2454_, v___x_2469_, v___y_2445_, v___x_2481_, v___x_2504_);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2512_ == 0)
{
lean_object* v_unused_2513_; 
v_unused_2513_ = lean_ctor_get(v___x_2505_, 0);
lean_dec(v_unused_2513_);
v___x_2507_ = v___x_2505_;
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
else
{
lean_dec(v___x_2505_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
lean_ctor_set_tag(v___x_2507_, 1);
lean_ctor_set(v___x_2507_, 0, v_a_2503_);
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_a_2503_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object* v_x_2522_, lean_object* v_isExporting_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
uint8_t v_isExporting_boxed_2530_; lean_object* v_res_2531_; 
v_isExporting_boxed_2530_ = lean_unbox(v_isExporting_2523_);
v_res_2531_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2522_, v_isExporting_boxed_2530_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec_ref(v___y_2524_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object* v_x_2532_, uint8_t v_when_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
if (v_when_2533_ == 0)
{
lean_object* v___x_2540_; 
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc_ref(v___y_2534_);
v___x_2540_ = lean_apply_6(v_x_2532_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
return v___x_2540_;
}
else
{
uint8_t v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = 0;
v___x_2542_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2532_, v___x_2541_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object* v_x_2543_, lean_object* v_when_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
uint8_t v_when_boxed_2551_; lean_object* v_res_2552_; 
v_when_boxed_2551_ = lean_unbox(v_when_2544_);
v_res_2552_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2543_, v_when_boxed_2551_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec_ref(v___y_2545_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object* v_params_2553_, lean_object* v___x_2554_, lean_object* v_head_2555_, lean_object* v_compFields_2556_, lean_object* v_lparams_2557_, lean_object* v_levelParams_2558_, lean_object* v___x_2559_, lean_object* v_fields_2560_, lean_object* v_retTy_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___f_2570_; uint8_t v___x_2571_; lean_object* v___x_2572_; 
lean_inc_ref(v_params_2553_);
v___x_2568_ = l_Array_append___redArg(v_params_2553_, v_fields_2560_);
lean_inc_ref(v___x_2554_);
v___x_2569_ = l_Lean_mkAppN(v___x_2554_, v___x_2568_);
lean_inc(v_head_2555_);
v___f_2570_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2570_, 0, v_head_2555_);
lean_closure_set(v___f_2570_, 1, v_compFields_2556_);
lean_closure_set(v___f_2570_, 2, v___x_2569_);
v___x_2571_ = 1;
v___x_2572_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___f_2570_, v___x_2571_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2574_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc_ref(v___y_2563_);
v___x_2574_ = lean_infer_type(v___x_2554_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v___x_2576_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_head_2555_);
v___x_2577_ = l_Lean_Name_append(v_head_2555_, v___x_2576_);
v___x_2578_ = l_Lean_mkConst(v___x_2577_, v_lparams_2557_);
v___x_2579_ = l_Array_append___redArg(v_params_2553_, v_a_2573_);
lean_dec(v_a_2573_);
v___x_2580_ = l_Array_append___redArg(v___x_2579_, v_fields_2560_);
v___x_2581_ = l_Lean_mkAppN(v___x_2578_, v___x_2580_);
lean_dec_ref(v___x_2580_);
v___x_2582_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_retTy_2561_, v___x_2581_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; uint8_t v___x_2584_; uint8_t v___x_2585_; lean_object* v___x_2586_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = 0;
v___x_2585_ = 1;
v___x_2586_ = l_Lean_Meta_mkLambdaFVars(v___x_2568_, v_a_2583_, v___x_2584_, v___x_2571_, v___x_2584_, v___x_2571_, v___x_2585_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; uint8_t v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v___x_2588_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_2555_);
v___x_2589_ = l_Lean_Name_append(v_head_2555_, v___x_2588_);
lean_inc_n(v___x_2589_, 2);
v___x_2590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
lean_ctor_set(v___x_2590_, 1, v_levelParams_2558_);
lean_ctor_set(v___x_2590_, 2, v_a_2575_);
v___x_2591_ = lean_box(0);
v___x_2592_ = 0;
v___x_2593_ = lean_box(0);
v___x_2594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2589_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2595_, 0, v___x_2590_);
lean_ctor_set(v___x_2595_, 1, v_a_2587_);
lean_ctor_set(v___x_2595_, 2, v___x_2591_);
lean_ctor_set(v___x_2595_, 3, v___x_2594_);
lean_ctor_set_uint8(v___x_2595_, sizeof(void*)*4, v___x_2592_);
v___x_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
v___x_2597_ = l_Lean_addDecl(v___x_2596_, v___x_2584_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v___x_2598_; 
lean_dec_ref_known(v___x_2597_, 1);
lean_inc(v___x_2589_);
lean_inc(v_head_2555_);
v___x_2598_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_head_2555_, v___x_2589_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v___x_2599_; 
lean_dec_ref_known(v___x_2598_, 1);
v___x_2599_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2555_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2610_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2602_ = v___x_2599_;
v_isShared_2603_ = v_isSharedCheck_2610_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2599_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2610_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
uint8_t v___x_2604_; 
v___x_2604_ = lean_unbox(v_a_2600_);
lean_dec(v_a_2600_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2606_; 
lean_dec(v___x_2589_);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2559_);
v___x_2606_ = v___x_2602_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2559_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
else
{
uint8_t v___x_2608_; lean_object* v___x_2609_; 
lean_del_object(v___x_2602_);
v___x_2608_ = 0;
v___x_2609_ = l_Lean_Meta_setInlineAttribute(v___x_2589_, v___x_2608_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
return v___x_2609_;
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v___x_2589_);
v_a_2611_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2599_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2599_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_dec(v___x_2589_);
lean_dec(v_head_2555_);
return v___x_2598_;
}
}
else
{
lean_dec(v___x_2589_);
lean_dec(v_head_2555_);
return v___x_2597_;
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec(v_a_2575_);
lean_dec(v_levelParams_2558_);
lean_dec(v_head_2555_);
v_a_2619_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2586_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2586_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec(v_a_2575_);
lean_dec_ref(v___x_2568_);
lean_dec(v_levelParams_2558_);
lean_dec(v_head_2555_);
v_a_2627_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2582_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2582_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
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
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
lean_dec(v_a_2573_);
lean_dec_ref(v___x_2568_);
lean_dec_ref(v_retTy_2561_);
lean_dec(v_levelParams_2558_);
lean_dec(v_lparams_2557_);
lean_dec(v_head_2555_);
lean_dec_ref(v_params_2553_);
v_a_2635_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___x_2574_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2574_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec_ref(v___x_2568_);
lean_dec_ref(v_retTy_2561_);
lean_dec(v_levelParams_2558_);
lean_dec(v_lparams_2557_);
lean_dec(v_head_2555_);
lean_dec_ref(v___x_2554_);
lean_dec_ref(v_params_2553_);
v_a_2643_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2572_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2572_);
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object* v_params_2651_, lean_object* v___x_2652_, lean_object* v_head_2653_, lean_object* v_compFields_2654_, lean_object* v_lparams_2655_, lean_object* v_levelParams_2656_, lean_object* v___x_2657_, lean_object* v_fields_2658_, lean_object* v_retTy_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(v_params_2651_, v___x_2652_, v_head_2653_, v_compFields_2654_, v_lparams_2655_, v_levelParams_2656_, v___x_2657_, v_fields_2658_, v_retTy_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec_ref(v_fields_2658_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object* v_lparams_2667_, lean_object* v_params_2668_, lean_object* v_compFields_2669_, lean_object* v_levelParams_2670_, lean_object* v_as_x27_2671_, lean_object* v_b_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
if (lean_obj_tag(v_as_x27_2671_) == 0)
{
lean_object* v___x_2679_; 
lean_dec(v_levelParams_2670_);
lean_dec_ref(v_compFields_2669_);
lean_dec_ref(v_params_2668_);
lean_dec(v_lparams_2667_);
v___x_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2679_, 0, v_b_2672_);
return v___x_2679_;
}
else
{
lean_object* v_head_2680_; lean_object* v_tail_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___f_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v_head_2680_ = lean_ctor_get(v_as_x27_2671_, 0);
v_tail_2681_ = lean_ctor_get(v_as_x27_2671_, 1);
v___x_2682_ = lean_box(0);
lean_inc_n(v_lparams_2667_, 2);
lean_inc_n(v_head_2680_, 2);
v___x_2683_ = l_Lean_mkConst(v_head_2680_, v_lparams_2667_);
lean_inc(v_levelParams_2670_);
lean_inc_ref(v_compFields_2669_);
lean_inc_ref(v___x_2683_);
lean_inc_ref(v_params_2668_);
v___f_2684_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2684_, 0, v_params_2668_);
lean_closure_set(v___f_2684_, 1, v___x_2683_);
lean_closure_set(v___f_2684_, 2, v_head_2680_);
lean_closure_set(v___f_2684_, 3, v_compFields_2669_);
lean_closure_set(v___f_2684_, 4, v_lparams_2667_);
lean_closure_set(v___f_2684_, 5, v_levelParams_2670_);
lean_closure_set(v___f_2684_, 6, v___x_2682_);
v___x_2685_ = l_Lean_mkAppN(v___x_2683_, v_params_2668_);
lean_inc(v___y_2677_);
lean_inc_ref(v___y_2676_);
lean_inc(v___y_2675_);
lean_inc_ref(v___y_2674_);
v___x_2686_ = lean_infer_type(v___x_2685_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; uint8_t v___x_2688_; lean_object* v___x_2689_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2688_ = 0;
v___x_2689_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2687_, v___f_2684_, v___x_2688_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_dec_ref_known(v___x_2689_, 1);
v_as_x27_2671_ = v_tail_2681_;
v_b_2672_ = v___x_2682_;
goto _start;
}
else
{
lean_dec(v_levelParams_2670_);
lean_dec_ref(v_compFields_2669_);
lean_dec_ref(v_params_2668_);
lean_dec(v_lparams_2667_);
return v___x_2689_;
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v___f_2684_);
lean_dec(v_levelParams_2670_);
lean_dec_ref(v_compFields_2669_);
lean_dec_ref(v_params_2668_);
lean_dec(v_lparams_2667_);
v_a_2691_ = lean_ctor_get(v___x_2686_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2686_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2686_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object* v_lparams_2699_, lean_object* v_params_2700_, lean_object* v_compFields_2701_, lean_object* v_levelParams_2702_, lean_object* v_as_x27_2703_, lean_object* v_b_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2699_, v_params_2700_, v_compFields_2701_, v_levelParams_2702_, v_as_x27_2703_, v_b_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v_as_x27_2703_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v_toInductiveVal_2718_; lean_object* v_toConstantVal_2719_; lean_object* v_lparams_2720_; lean_object* v_params_2721_; lean_object* v_compFields_2722_; lean_object* v_ctors_2723_; lean_object* v_levelParams_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_toInductiveVal_2718_ = lean_ctor_get(v_a_2712_, 0);
v_toConstantVal_2719_ = lean_ctor_get(v_toInductiveVal_2718_, 0);
v_lparams_2720_ = lean_ctor_get(v_a_2712_, 1);
v_params_2721_ = lean_ctor_get(v_a_2712_, 2);
v_compFields_2722_ = lean_ctor_get(v_a_2712_, 3);
v_ctors_2723_ = lean_ctor_get(v_toInductiveVal_2718_, 4);
v_levelParams_2724_ = lean_ctor_get(v_toConstantVal_2719_, 1);
v___x_2725_ = lean_box(0);
lean_inc(v_levelParams_2724_);
lean_inc_ref(v_compFields_2722_);
lean_inc_ref(v_params_2721_);
lean_inc(v_lparams_2720_);
v___x_2726_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2720_, v_params_2721_, v_compFields_2722_, v_levelParams_2724_, v_ctors_2723_, v___x_2725_, v_a_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_);
if (lean_obj_tag(v___x_2726_) == 0)
{
lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v___x_2726_, 0);
lean_dec(v_unused_2734_);
v___x_2728_ = v___x_2726_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_dec(v___x_2726_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 0, v___x_2725_);
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2725_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
else
{
return v___x_2726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_Elab_ComputedFields_overrideConstructors(v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
lean_dec_ref(v_a_2735_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object* v_00_u03b1_2742_, lean_object* v_x_2743_, uint8_t v_isExporting_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2743_, v_isExporting_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2752_, lean_object* v_x_2753_, lean_object* v_isExporting_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
uint8_t v_isExporting_boxed_2761_; lean_object* v_res_2762_; 
v_isExporting_boxed_2761_ = lean_unbox(v_isExporting_2754_);
v_res_2762_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(v_00_u03b1_2752_, v_x_2753_, v_isExporting_boxed_2761_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object* v_00_u03b1_2763_, lean_object* v_x_2764_, uint8_t v_when_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2764_, v_when_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object* v_00_u03b1_2773_, lean_object* v_x_2774_, lean_object* v_when_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_){
_start:
{
uint8_t v_when_boxed_2782_; lean_object* v_res_2783_; 
v_when_boxed_2782_ = lean_unbox(v_when_2775_);
v_res_2783_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(v_00_u03b1_2773_, v_x_2774_, v_when_boxed_2782_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
lean_dec(v___y_2778_);
lean_dec_ref(v___y_2777_);
lean_dec_ref(v___y_2776_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object* v_lparams_2784_, lean_object* v_params_2785_, lean_object* v_compFields_2786_, lean_object* v_levelParams_2787_, lean_object* v_as_2788_, lean_object* v_as_x27_2789_, lean_object* v_b_2790_, lean_object* v_a_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2784_, v_params_2785_, v_compFields_2786_, v_levelParams_2787_, v_as_x27_2789_, v_b_2790_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object* v_lparams_2799_, lean_object* v_params_2800_, lean_object* v_compFields_2801_, lean_object* v_levelParams_2802_, lean_object* v_as_2803_, lean_object* v_as_x27_2804_, lean_object* v_b_2805_, lean_object* v_a_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(v_lparams_2799_, v_params_2800_, v_compFields_2801_, v_levelParams_2802_, v_as_2803_, v_as_x27_2804_, v_b_2805_, v_a_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v_as_x27_2804_);
lean_dec(v_as_2803_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object* v___x_2814_, lean_object* v_compFieldVars_2815_, lean_object* v___x_2816_, uint8_t v___x_2817_, lean_object* v_params_2818_, lean_object* v___x_2819_, lean_object* v_a_2820_, uint8_t v___x_2821_, lean_object* v_fields_2822_, lean_object* v_x_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Lean_Elab_ComputedFields_isScalarField(v___x_2814_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; uint8_t v___x_2832_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_a_2831_);
lean_dec_ref_known(v___x_2830_, 1);
v___x_2832_ = lean_unbox(v_a_2831_);
if (v___x_2832_ == 0)
{
lean_object* v___x_2833_; uint8_t v___x_2834_; uint8_t v___x_2835_; uint8_t v___x_2836_; lean_object* v___x_2837_; 
lean_dec(v_a_2820_);
lean_dec_ref(v___x_2819_);
lean_dec_ref(v_params_2818_);
v___x_2833_ = l_Array_append___redArg(v_compFieldVars_2815_, v_fields_2822_);
lean_dec_ref(v_fields_2822_);
v___x_2834_ = 1;
v___x_2835_ = lean_unbox(v_a_2831_);
v___x_2836_ = lean_unbox(v_a_2831_);
lean_dec(v_a_2831_);
v___x_2837_ = l_Lean_Meta_mkLambdaFVars(v___x_2833_, v___x_2816_, v___x_2835_, v___x_2817_, v___x_2836_, v___x_2817_, v___x_2834_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
return v___x_2837_;
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
lean_dec(v_a_2831_);
lean_dec_ref(v___x_2816_);
lean_dec_ref(v_compFieldVars_2815_);
v___x_2838_ = l_Array_append___redArg(v_params_2818_, v_fields_2822_);
v___x_2839_ = l_Lean_mkAppN(v___x_2819_, v___x_2838_);
lean_dec_ref(v___x_2838_);
v___x_2840_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_a_2820_, v___x_2839_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; uint8_t v___x_2842_; lean_object* v___x_2843_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2840_, 1);
v___x_2842_ = 1;
v___x_2843_ = l_Lean_Meta_mkLambdaFVars(v_fields_2822_, v_a_2841_, v___x_2821_, v___x_2817_, v___x_2821_, v___x_2817_, v___x_2842_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
return v___x_2843_;
}
else
{
lean_dec_ref(v_fields_2822_);
return v___x_2840_;
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec_ref(v_fields_2822_);
lean_dec(v_a_2820_);
lean_dec_ref(v___x_2819_);
lean_dec_ref(v_params_2818_);
lean_dec_ref(v___x_2816_);
lean_dec_ref(v_compFieldVars_2815_);
v_a_2844_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2830_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2830_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object* v___x_2852_, lean_object* v_compFieldVars_2853_, lean_object* v___x_2854_, lean_object* v___x_2855_, lean_object* v_params_2856_, lean_object* v___x_2857_, lean_object* v_a_2858_, lean_object* v___x_2859_, lean_object* v_fields_2860_, lean_object* v_x_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
uint8_t v___x_12817__boxed_2868_; uint8_t v___x_12820__boxed_2869_; lean_object* v_res_2870_; 
v___x_12817__boxed_2868_ = lean_unbox(v___x_2855_);
v___x_12820__boxed_2869_ = lean_unbox(v___x_2859_);
v_res_2870_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(v___x_2852_, v_compFieldVars_2853_, v___x_2854_, v___x_12817__boxed_2868_, v_params_2856_, v___x_2857_, v_a_2858_, v___x_12820__boxed_2869_, v_fields_2860_, v_x_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec_ref(v_x_2861_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object* v_lparams_2871_, lean_object* v_compFieldVars_2872_, lean_object* v___x_2873_, lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v_params_2876_, lean_object* v_a_2877_, uint8_t v___x_2878_, size_t v_sz_2879_, size_t v_i_2880_, lean_object* v_bs_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
uint8_t v___x_2888_; 
v___x_2888_ = lean_usize_dec_lt(v_i_2880_, v_sz_2879_);
if (v___x_2888_ == 0)
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v_a_2877_);
lean_dec_ref(v_params_2876_);
lean_dec_ref(v___x_2873_);
lean_dec_ref(v_compFieldVars_2872_);
lean_dec(v_lparams_2871_);
v___x_2889_ = l_unsafeCast___redArg(v_bs_2881_);
lean_dec_ref(v_bs_2881_);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
return v___x_2890_;
}
else
{
uint8_t v___x_2891_; lean_object* v_v_2892_; lean_object* v___x_2893_; lean_object* v_bs_x27_2894_; lean_object* v___y_2896_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___f_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2891_ = lean_nat_dec_lt(v___x_2874_, v___x_2875_);
v_v_2892_ = lean_array_uget(v_bs_2881_, v_i_2880_);
v___x_2893_ = lean_unsigned_to_nat(0u);
v_bs_x27_2894_ = lean_array_uset(v_bs_2881_, v_i_2880_, v___x_2893_);
v___x_2911_ = l_unsafeCast___redArg(v_v_2892_);
lean_dec(v_v_2892_);
lean_inc(v_lparams_2871_);
lean_inc(v___x_2911_);
v___x_2912_ = l_Lean_mkConst(v___x_2911_, v_lparams_2871_);
v___x_2913_ = lean_box(v___x_2891_);
v___x_2914_ = lean_box(v___x_2878_);
lean_inc(v_a_2877_);
lean_inc_ref(v___x_2912_);
lean_inc_ref(v_params_2876_);
lean_inc_ref(v___x_2873_);
lean_inc_ref(v_compFieldVars_2872_);
v___f_2915_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed), 16, 8);
lean_closure_set(v___f_2915_, 0, v___x_2911_);
lean_closure_set(v___f_2915_, 1, v_compFieldVars_2872_);
lean_closure_set(v___f_2915_, 2, v___x_2873_);
lean_closure_set(v___f_2915_, 3, v___x_2913_);
lean_closure_set(v___f_2915_, 4, v_params_2876_);
lean_closure_set(v___f_2915_, 5, v___x_2912_);
lean_closure_set(v___f_2915_, 6, v_a_2877_);
lean_closure_set(v___f_2915_, 7, v___x_2914_);
v___x_2916_ = l_Lean_mkAppN(v___x_2912_, v_params_2876_);
lean_inc(v___y_2886_);
lean_inc_ref(v___y_2885_);
lean_inc(v___y_2884_);
lean_inc_ref(v___y_2883_);
v___x_2917_ = lean_infer_type(v___x_2916_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2919_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
lean_inc(v_a_2918_);
lean_dec_ref_known(v___x_2917_, 1);
v___x_2919_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2918_, v___f_2915_, v___x_2878_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
v___y_2896_ = v___x_2919_;
goto v___jp_2895_;
}
else
{
lean_dec_ref(v___f_2915_);
v___y_2896_ = v___x_2917_;
goto v___jp_2895_;
}
v___jp_2895_:
{
if (lean_obj_tag(v___y_2896_) == 0)
{
lean_object* v_a_2897_; size_t v___x_2898_; size_t v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v_a_2897_ = lean_ctor_get(v___y_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___y_2896_, 1);
v___x_2898_ = ((size_t)1ULL);
v___x_2899_ = lean_usize_add(v_i_2880_, v___x_2898_);
v___x_2900_ = l_unsafeCast___redArg(v_a_2897_);
lean_dec(v_a_2897_);
v___x_2901_ = lean_array_uset(v_bs_x27_2894_, v_i_2880_, v___x_2900_);
v_i_2880_ = v___x_2899_;
v_bs_2881_ = v___x_2901_;
goto _start;
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec_ref(v_bs_x27_2894_);
lean_dec(v_a_2877_);
lean_dec_ref(v_params_2876_);
lean_dec_ref(v___x_2873_);
lean_dec_ref(v_compFieldVars_2872_);
lean_dec(v_lparams_2871_);
v_a_2903_ = lean_ctor_get(v___y_2896_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___y_2896_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___y_2896_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___y_2896_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object** _args){
lean_object* v_lparams_2920_ = _args[0];
lean_object* v_compFieldVars_2921_ = _args[1];
lean_object* v___x_2922_ = _args[2];
lean_object* v___x_2923_ = _args[3];
lean_object* v___x_2924_ = _args[4];
lean_object* v_params_2925_ = _args[5];
lean_object* v_a_2926_ = _args[6];
lean_object* v___x_2927_ = _args[7];
lean_object* v_sz_2928_ = _args[8];
lean_object* v_i_2929_ = _args[9];
lean_object* v_bs_2930_ = _args[10];
lean_object* v___y_2931_ = _args[11];
lean_object* v___y_2932_ = _args[12];
lean_object* v___y_2933_ = _args[13];
lean_object* v___y_2934_ = _args[14];
lean_object* v___y_2935_ = _args[15];
lean_object* v___y_2936_ = _args[16];
_start:
{
uint8_t v___x_12907__boxed_2937_; size_t v_sz_boxed_2938_; size_t v_i_boxed_2939_; lean_object* v_res_2940_; 
v___x_12907__boxed_2937_ = lean_unbox(v___x_2927_);
v_sz_boxed_2938_ = lean_unbox_usize(v_sz_2928_);
lean_dec(v_sz_2928_);
v_i_boxed_2939_ = lean_unbox_usize(v_i_2929_);
lean_dec(v_i_2929_);
v_res_2940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(v_lparams_2920_, v_compFieldVars_2921_, v___x_2922_, v___x_2923_, v___x_2924_, v_params_2925_, v_a_2926_, v___x_12907__boxed_2937_, v_sz_boxed_2938_, v_i_boxed_2939_, v_bs_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v___x_2924_);
lean_dec(v___x_2923_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t v_sz_2941_, size_t v_i_2942_, lean_object* v_bs_2943_){
_start:
{
uint8_t v___x_2944_; 
v___x_2944_ = lean_usize_dec_lt(v_i_2942_, v_sz_2941_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; 
v___x_2945_ = l_unsafeCast___redArg(v_bs_2943_);
lean_dec_ref(v_bs_2943_);
return v___x_2945_;
}
else
{
lean_object* v_v_2946_; lean_object* v___x_2947_; lean_object* v_bs_x27_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; size_t v___x_2951_; size_t v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_v_2946_ = lean_array_uget(v_bs_2943_, v_i_2942_);
v___x_2947_ = lean_unsigned_to_nat(0u);
v_bs_x27_2948_ = lean_array_uset(v_bs_2943_, v_i_2942_, v___x_2947_);
v___x_2949_ = l_unsafeCast___redArg(v_v_2946_);
lean_dec(v_v_2946_);
v___x_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
v___x_2951_ = ((size_t)1ULL);
v___x_2952_ = lean_usize_add(v_i_2942_, v___x_2951_);
v___x_2953_ = l_unsafeCast___redArg(v___x_2950_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2954_ = lean_array_uset(v_bs_x27_2948_, v_i_2942_, v___x_2953_);
v_i_2942_ = v___x_2952_;
v_bs_2943_ = v___x_2954_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object* v_sz_2956_, lean_object* v_i_2957_, lean_object* v_bs_2958_){
_start:
{
size_t v_sz_boxed_2959_; size_t v_i_boxed_2960_; lean_object* v_res_2961_; 
v_sz_boxed_2959_ = lean_unbox_usize(v_sz_2956_);
lean_dec(v_sz_2956_);
v_i_boxed_2960_ = lean_unbox_usize(v_i_2957_);
lean_dec(v_i_2957_);
v_res_2961_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_boxed_2959_, v_i_boxed_2960_, v_bs_2958_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object* v_ctors_2962_, lean_object* v_lparams_2963_, lean_object* v_compFieldVars_2964_, lean_object* v_params_2965_, lean_object* v_val_2966_, lean_object* v___x_2967_, lean_object* v_indices_2968_, lean_object* v_xImpl_2969_, lean_object* v___x_2970_, lean_object* v_levelParams_2971_, lean_object* v_as_2972_, size_t v_sz_2973_, size_t v_i_2974_, lean_object* v_b_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
lean_object* v_a_2983_; uint8_t v___x_2987_; 
v___x_2987_ = lean_usize_dec_lt(v_i_2974_, v_sz_2973_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2988_; 
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_b_2975_);
return v___x_2988_;
}
else
{
lean_object* v_array_2989_; lean_object* v_start_2990_; lean_object* v_stop_2991_; uint8_t v___x_2992_; 
v_array_2989_ = lean_ctor_get(v_b_2975_, 0);
v_start_2990_ = lean_ctor_get(v_b_2975_, 1);
v_stop_2991_ = lean_ctor_get(v_b_2975_, 2);
v___x_2992_ = lean_nat_dec_lt(v_start_2990_, v_stop_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; 
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v___x_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2993_, 0, v_b_2975_);
return v___x_2993_;
}
else
{
lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3180_; 
lean_inc(v_stop_2991_);
lean_inc(v_start_2990_);
lean_inc_ref(v_array_2989_);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_b_2975_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; lean_object* v_unused_3182_; lean_object* v_unused_3183_; 
v_unused_3181_ = lean_ctor_get(v_b_2975_, 2);
lean_dec(v_unused_3181_);
v_unused_3182_ = lean_ctor_get(v_b_2975_, 1);
lean_dec(v_unused_3182_);
v_unused_3183_ = lean_ctor_get(v_b_2975_, 0);
lean_dec(v_unused_3183_);
v___x_2995_ = v_b_2975_;
v_isShared_2996_ = v_isSharedCheck_3180_;
goto v_resetjp_2994_;
}
else
{
lean_dec(v_b_2975_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3180_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v_a_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3002_; 
v_a_2997_ = lean_array_uget_borrowed(v_as_2972_, v_i_2974_);
v___x_2998_ = lean_array_fget(v_array_2989_, v_start_2990_);
v___x_2999_ = lean_unsigned_to_nat(1u);
v___x_3000_ = lean_nat_add(v_start_2990_, v___x_2999_);
lean_inc(v_stop_2991_);
if (v_isShared_2996_ == 0)
{
lean_ctor_set(v___x_2995_, 1, v___x_3000_);
v___x_3002_ = v___x_2995_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_array_2989_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v___x_3000_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v_stop_2991_);
v___x_3002_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3003_; lean_object* v_env_3004_; uint8_t v___x_3005_; 
v___x_3003_ = lean_st_ref_get(v___y_2980_);
v_env_3004_ = lean_ctor_get(v___x_3003_, 0);
lean_inc_ref(v_env_3004_);
lean_dec(v___x_3003_);
lean_inc(v_a_2997_);
v___x_3005_ = l_Lean_isExtern(v_env_3004_, v_a_2997_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3006_; size_t v_sz_3007_; size_t v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
lean_inc(v_ctors_2962_);
v___x_3006_ = lean_array_mk(v_ctors_2962_);
v_sz_3007_ = lean_array_size(v___x_3006_);
v___x_3008_ = ((size_t)0ULL);
v___x_3009_ = l_unsafeCast___redArg(v___x_3006_);
lean_dec_ref(v___x_3006_);
v___x_3010_ = lean_box(v___x_3005_);
v___x_3011_ = lean_box_usize(v_sz_3007_);
v___x_3012_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1));
lean_inc(v_a_2997_);
lean_inc_ref(v_params_2965_);
lean_inc(v___x_2998_);
lean_inc_ref(v_compFieldVars_2964_);
lean_inc(v_lparams_2963_);
v___x_3013_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3013_, 0, v_lparams_2963_);
lean_closure_set(v___x_3013_, 1, v_compFieldVars_2964_);
lean_closure_set(v___x_3013_, 2, v___x_2998_);
lean_closure_set(v___x_3013_, 3, v_start_2990_);
lean_closure_set(v___x_3013_, 4, v_stop_2991_);
lean_closure_set(v___x_3013_, 5, v_params_2965_);
lean_closure_set(v___x_3013_, 6, v_a_2997_);
lean_closure_set(v___x_3013_, 7, v___x_3010_);
lean_closure_set(v___x_3013_, 8, v___x_3011_);
lean_closure_set(v___x_3013_, 9, v___x_3012_);
lean_closure_set(v___x_3013_, 10, v___x_3009_);
v___x_3014_ = l_unsafeCast___redArg(v___x_3013_);
lean_dec_ref(v___x_3013_);
v___x_3015_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3014_, v___x_2992_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___x_3034_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3015_, 1);
v___x_3017_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_2997_);
v___x_3018_ = l_Lean_Name_append(v_a_2997_, v___x_3017_);
lean_inc(v___y_2980_);
lean_inc_ref(v___y_2979_);
lean_inc(v___y_2978_);
lean_inc_ref(v___y_2977_);
lean_inc(v___x_2998_);
v___x_3034_ = lean_infer_type(v___x_2998_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; uint8_t v___x_3039_; lean_object* v___x_3040_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3034_, 1);
v___x_3036_ = lean_mk_empty_array_with_capacity(v___x_2999_);
lean_inc_ref(v_val_2966_);
lean_inc_ref(v___x_3036_);
v___x_3037_ = lean_array_push(v___x_3036_, v_val_2966_);
lean_inc_ref(v___x_2967_);
v___x_3038_ = l_Array_append___redArg(v___x_2967_, v___x_3037_);
lean_dec_ref(v___x_3037_);
v___x_3039_ = 1;
lean_inc_ref(v___x_3038_);
v___x_3040_ = l_Lean_Meta_mkForallFVars(v___x_3038_, v_a_3035_, v___x_3005_, v___x_2992_, v___x_2992_, v___x_3039_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3042_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___x_3040_, 1);
lean_inc(v___y_2980_);
lean_inc_ref(v___y_2979_);
lean_inc(v___y_2978_);
lean_inc_ref(v___y_2977_);
v___x_3042_ = lean_infer_type(v___x_2998_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
lean_inc_ref(v_xImpl_2969_);
lean_inc_ref(v_indices_2968_);
v___x_3044_ = lean_array_push(v_indices_2968_, v_xImpl_2969_);
v___x_3045_ = l_Lean_Meta_mkLambdaFVars(v___x_3044_, v_a_3043_, v___x_3005_, v___x_2992_, v___x_3005_, v___x_2992_, v___x_3039_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v_a_3046_; lean_object* v___x_3047_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3045_, 1);
lean_inc(v___y_2980_);
lean_inc_ref(v___y_2979_);
lean_inc(v___y_2978_);
lean_inc_ref(v___y_2977_);
lean_inc_ref(v_xImpl_2969_);
v___x_3047_ = lean_infer_type(v_xImpl_2969_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3049_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v___x_3047_, 1);
lean_inc_ref(v_val_2966_);
v___x_3049_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3048_, v_val_2966_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; size_t v_sz_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
lean_inc(v___x_2970_);
v___x_3051_ = l_Lean_mkCasesOnName(v___x_2970_);
lean_inc_ref(v___x_3036_);
v___x_3052_ = lean_array_push(v___x_3036_, v_a_3046_);
lean_inc_ref(v_params_2965_);
v___x_3053_ = l_Array_append___redArg(v_params_2965_, v___x_3052_);
lean_dec_ref(v___x_3052_);
v___x_3054_ = l_Array_append___redArg(v___x_3053_, v_indices_2968_);
v___x_3055_ = lean_array_push(v___x_3036_, v_a_3050_);
v___x_3056_ = l_Array_append___redArg(v___x_3054_, v___x_3055_);
lean_dec_ref(v___x_3055_);
v___x_3057_ = l_Array_append___redArg(v___x_3056_, v_a_3016_);
lean_dec(v_a_3016_);
v_sz_3058_ = lean_array_size(v___x_3057_);
v___x_3059_ = l_unsafeCast___redArg(v___x_3057_);
lean_dec_ref(v___x_3057_);
v___x_3060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3058_, v___x_3008_, v___x_3059_);
v___x_3061_ = l_unsafeCast___redArg(v___x_3060_);
lean_dec_ref(v___x_3060_);
v___x_3062_ = l_Lean_Meta_mkAppOptM(v___x_3051_, v___x_3061_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v_a_3063_; lean_object* v___x_3064_; 
v_a_3063_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3063_);
lean_dec_ref_known(v___x_3062_, 1);
v___x_3064_ = l_Lean_Meta_mkLambdaFVars(v___x_3038_, v_a_3063_, v___x_3005_, v___x_2992_, v___x_3005_, v___x_2992_, v___x_3039_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; uint8_t v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3064_, 1);
lean_inc(v_levelParams_2971_);
lean_inc_n(v___x_3018_, 2);
v___x_3066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3018_);
lean_ctor_set(v___x_3066_, 1, v_levelParams_2971_);
lean_ctor_set(v___x_3066_, 2, v_a_3041_);
v___x_3067_ = lean_box(0);
v___x_3068_ = 0;
v___x_3069_ = lean_box(0);
v___x_3070_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3018_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
v___x_3071_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3071_, 0, v___x_3066_);
lean_ctor_set(v___x_3071_, 1, v_a_3065_);
lean_ctor_set(v___x_3071_, 2, v___x_3067_);
lean_ctor_set(v___x_3071_, 3, v___x_3070_);
lean_ctor_set_uint8(v___x_3071_, sizeof(void*)*4, v___x_3068_);
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = l_Lean_addDecl(v___x_3072_, v___x_3005_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v___x_3074_; lean_object* v_env_3075_; lean_object* v___x_3076_; 
lean_dec_ref_known(v___x_3073_, 1);
v___x_3074_ = lean_st_ref_get(v___y_2980_);
v_env_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc_ref(v_env_3075_);
lean_dec(v___x_3074_);
lean_inc(v_a_2997_);
v___x_3076_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3075_, v_a_2997_);
if (lean_obj_tag(v___x_3076_) == 1)
{
lean_object* v_val_3077_; uint8_t v___x_3078_; lean_object* v___x_3079_; 
v_val_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_val_3077_);
lean_dec_ref_known(v___x_3076_, 1);
v___x_3078_ = lean_unbox(v_val_3077_);
lean_dec(v_val_3077_);
lean_inc(v___x_3018_);
v___x_3079_ = l_Lean_Meta_setInlineAttribute(v___x_3018_, v___x_3078_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_dec_ref_known(v___x_3079_, 1);
v___y_3020_ = v___y_2976_;
v___y_3021_ = v___y_2977_;
v___y_3022_ = v___y_2978_;
v___y_3023_ = v___y_2979_;
v___y_3024_ = v___y_2980_;
goto v___jp_3019_;
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v___x_3018_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3080_ = lean_ctor_get(v___x_3079_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3079_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___x_3079_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___x_3079_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
else
{
lean_dec(v___x_3076_);
v___y_3020_ = v___y_2976_;
v___y_3021_ = v___y_2977_;
v___y_3022_ = v___y_2978_;
v___y_3023_ = v___y_2979_;
v___y_3024_ = v___y_2980_;
goto v___jp_3019_;
}
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
lean_dec(v___x_3018_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3088_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3073_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3073_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
lean_dec(v_a_3041_);
lean_dec(v___x_3018_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3096_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3098_ = v___x_3064_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3064_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
lean_dec(v_a_3041_);
lean_dec_ref(v___x_3038_);
lean_dec(v___x_3018_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3104_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3106_ = v___x_3062_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3062_);
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
else
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec(v_a_3046_);
lean_dec(v_a_3041_);
lean_dec_ref(v___x_3038_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3112_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3049_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3049_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec(v_a_3046_);
lean_dec(v_a_3041_);
lean_dec_ref(v___x_3038_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3120_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3047_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3047_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec(v_a_3041_);
lean_dec_ref(v___x_3038_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3128_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3045_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3045_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_a_3041_);
lean_dec_ref(v___x_3038_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3136_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3042_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3042_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref(v___x_3038_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v___x_2998_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3144_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3040_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3040_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec(v___x_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v___x_3002_);
lean_dec(v___x_2998_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3152_ = lean_ctor_get(v___x_3034_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3034_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3034_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3034_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
v___jp_3019_:
{
lean_object* v___x_3025_; 
lean_inc(v_a_2997_);
v___x_3025_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_2997_, v___x_3018_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_dec_ref_known(v___x_3025_, 1);
v_a_2983_ = v___x_3002_;
goto v___jp_2982_;
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3025_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
}
else
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3167_; 
lean_dec_ref(v___x_3002_);
lean_dec(v___x_2998_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3160_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3162_ = v___x_3015_;
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3015_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
else
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
lean_dec(v___x_2998_);
lean_dec(v_stop_2991_);
lean_dec(v_start_2990_);
v___x_3168_ = lean_mk_empty_array_with_capacity(v___x_2999_);
lean_inc(v_a_2997_);
v___x_3169_ = lean_array_push(v___x_3168_, v_a_2997_);
v___x_3170_ = l_Lean_compileDecls(v___x_3169_, v___x_2992_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_dec_ref_known(v___x_3170_, 1);
v_a_2983_ = v___x_3002_;
goto v___jp_2982_;
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec_ref(v___x_3002_);
lean_dec(v_levelParams_2971_);
lean_dec(v___x_2970_);
lean_dec_ref(v_xImpl_2969_);
lean_dec_ref(v_indices_2968_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_val_2966_);
lean_dec_ref(v_params_2965_);
lean_dec_ref(v_compFieldVars_2964_);
lean_dec(v_lparams_2963_);
lean_dec(v_ctors_2962_);
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3170_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3170_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
}
}
}
v___jp_2982_:
{
size_t v___x_2984_; size_t v___x_2985_; 
v___x_2984_ = ((size_t)1ULL);
v___x_2985_ = lean_usize_add(v_i_2974_, v___x_2984_);
v_i_2974_ = v___x_2985_;
v_b_2975_ = v_a_2983_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object** _args){
lean_object* v_ctors_3184_ = _args[0];
lean_object* v_lparams_3185_ = _args[1];
lean_object* v_compFieldVars_3186_ = _args[2];
lean_object* v_params_3187_ = _args[3];
lean_object* v_val_3188_ = _args[4];
lean_object* v___x_3189_ = _args[5];
lean_object* v_indices_3190_ = _args[6];
lean_object* v_xImpl_3191_ = _args[7];
lean_object* v___x_3192_ = _args[8];
lean_object* v_levelParams_3193_ = _args[9];
lean_object* v_as_3194_ = _args[10];
lean_object* v_sz_3195_ = _args[11];
lean_object* v_i_3196_ = _args[12];
lean_object* v_b_3197_ = _args[13];
lean_object* v___y_3198_ = _args[14];
lean_object* v___y_3199_ = _args[15];
lean_object* v___y_3200_ = _args[16];
lean_object* v___y_3201_ = _args[17];
lean_object* v___y_3202_ = _args[18];
lean_object* v___y_3203_ = _args[19];
_start:
{
size_t v_sz_boxed_3204_; size_t v_i_boxed_3205_; lean_object* v_res_3206_; 
v_sz_boxed_3204_ = lean_unbox_usize(v_sz_3195_);
lean_dec(v_sz_3195_);
v_i_boxed_3205_ = lean_unbox_usize(v_i_3196_);
lean_dec(v_i_3196_);
v_res_3206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3184_, v_lparams_3185_, v_compFieldVars_3186_, v_params_3187_, v_val_3188_, v___x_3189_, v_indices_3190_, v_xImpl_3191_, v___x_3192_, v_levelParams_3193_, v_as_3194_, v_sz_boxed_3204_, v_i_boxed_3205_, v_b_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec_ref(v_as_3194_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object* v_lparams_3207_, lean_object* v_compFieldVars_3208_, lean_object* v_params_3209_, lean_object* v_ctors_3210_, lean_object* v_val_3211_, lean_object* v___x_3212_, lean_object* v_indices_3213_, lean_object* v_xImpl_3214_, lean_object* v___x_3215_, lean_object* v_levelParams_3216_, lean_object* v_as_3217_, size_t v_sz_3218_, size_t v_i_3219_, lean_object* v_b_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v_a_3228_; uint8_t v___x_3232_; 
v___x_3232_ = lean_usize_dec_lt(v_i_3219_, v_sz_3218_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; 
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v_b_3220_);
return v___x_3233_;
}
else
{
lean_object* v_array_3234_; lean_object* v_start_3235_; lean_object* v_stop_3236_; uint8_t v___x_3237_; 
v_array_3234_ = lean_ctor_get(v_b_3220_, 0);
v_start_3235_ = lean_ctor_get(v_b_3220_, 1);
v_stop_3236_ = lean_ctor_get(v_b_3220_, 2);
v___x_3237_ = lean_nat_dec_lt(v_start_3235_, v_stop_3236_);
if (v___x_3237_ == 0)
{
lean_object* v___x_3238_; 
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v___x_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3238_, 0, v_b_3220_);
return v___x_3238_;
}
else
{
lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3425_; 
lean_inc(v_stop_3236_);
lean_inc(v_start_3235_);
lean_inc_ref(v_array_3234_);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_b_3220_);
if (v_isSharedCheck_3425_ == 0)
{
lean_object* v_unused_3426_; lean_object* v_unused_3427_; lean_object* v_unused_3428_; 
v_unused_3426_ = lean_ctor_get(v_b_3220_, 2);
lean_dec(v_unused_3426_);
v_unused_3427_ = lean_ctor_get(v_b_3220_, 1);
lean_dec(v_unused_3427_);
v_unused_3428_ = lean_ctor_get(v_b_3220_, 0);
lean_dec(v_unused_3428_);
v___x_3240_ = v_b_3220_;
v_isShared_3241_ = v_isSharedCheck_3425_;
goto v_resetjp_3239_;
}
else
{
lean_dec(v_b_3220_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3425_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v_a_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3247_; 
v_a_3242_ = lean_array_uget_borrowed(v_as_3217_, v_i_3219_);
v___x_3243_ = lean_array_fget(v_array_3234_, v_start_3235_);
v___x_3244_ = lean_unsigned_to_nat(1u);
v___x_3245_ = lean_nat_add(v_start_3235_, v___x_3244_);
lean_inc(v_stop_3236_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v___x_3245_);
v___x_3247_ = v___x_3240_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_array_3234_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v___x_3245_);
lean_ctor_set(v_reuseFailAlloc_3424_, 2, v_stop_3236_);
v___x_3247_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3248_; lean_object* v_env_3249_; uint8_t v___x_3250_; 
v___x_3248_ = lean_st_ref_get(v___y_3225_);
v_env_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc_ref(v_env_3249_);
lean_dec(v___x_3248_);
lean_inc(v_a_3242_);
v___x_3250_ = l_Lean_isExtern(v_env_3249_, v_a_3242_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; size_t v_sz_3252_; size_t v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
lean_inc(v_ctors_3210_);
v___x_3251_ = lean_array_mk(v_ctors_3210_);
v_sz_3252_ = lean_array_size(v___x_3251_);
v___x_3253_ = ((size_t)0ULL);
v___x_3254_ = l_unsafeCast___redArg(v___x_3251_);
lean_dec_ref(v___x_3251_);
v___x_3255_ = lean_box(v___x_3250_);
v___x_3256_ = lean_box_usize(v_sz_3252_);
v___x_3257_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed__const__1));
lean_inc(v_a_3242_);
lean_inc_ref(v_params_3209_);
lean_inc(v___x_3243_);
lean_inc_ref(v_compFieldVars_3208_);
lean_inc(v_lparams_3207_);
v___x_3258_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3258_, 0, v_lparams_3207_);
lean_closure_set(v___x_3258_, 1, v_compFieldVars_3208_);
lean_closure_set(v___x_3258_, 2, v___x_3243_);
lean_closure_set(v___x_3258_, 3, v_start_3235_);
lean_closure_set(v___x_3258_, 4, v_stop_3236_);
lean_closure_set(v___x_3258_, 5, v_params_3209_);
lean_closure_set(v___x_3258_, 6, v_a_3242_);
lean_closure_set(v___x_3258_, 7, v___x_3255_);
lean_closure_set(v___x_3258_, 8, v___x_3256_);
lean_closure_set(v___x_3258_, 9, v___x_3257_);
lean_closure_set(v___x_3258_, 10, v___x_3254_);
v___x_3259_ = l_unsafeCast___redArg(v___x_3258_);
lean_dec_ref(v___x_3258_);
v___x_3260_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3259_, v___x_3237_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___x_3279_; 
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3260_, 1);
v___x_3262_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_3242_);
v___x_3263_ = l_Lean_Name_append(v_a_3242_, v___x_3262_);
lean_inc(v___y_3225_);
lean_inc_ref(v___y_3224_);
lean_inc(v___y_3223_);
lean_inc_ref(v___y_3222_);
lean_inc(v___x_3243_);
v___x_3279_ = lean_infer_type(v___x_3243_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; uint8_t v___x_3284_; lean_object* v___x_3285_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc(v_a_3280_);
lean_dec_ref_known(v___x_3279_, 1);
v___x_3281_ = lean_mk_empty_array_with_capacity(v___x_3244_);
lean_inc_ref(v_val_3211_);
lean_inc_ref(v___x_3281_);
v___x_3282_ = lean_array_push(v___x_3281_, v_val_3211_);
lean_inc_ref(v___x_3212_);
v___x_3283_ = l_Array_append___redArg(v___x_3212_, v___x_3282_);
lean_dec_ref(v___x_3282_);
v___x_3284_ = 1;
lean_inc_ref(v___x_3283_);
v___x_3285_ = l_Lean_Meta_mkForallFVars(v___x_3283_, v_a_3280_, v___x_3250_, v___x_3237_, v___x_3237_, v___x_3284_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3287_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3286_);
lean_dec_ref_known(v___x_3285_, 1);
lean_inc(v___y_3225_);
lean_inc_ref(v___y_3224_);
lean_inc(v___y_3223_);
lean_inc_ref(v___y_3222_);
v___x_3287_ = lean_infer_type(v___x_3243_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3287_, 1);
lean_inc_ref(v_xImpl_3214_);
lean_inc_ref(v_indices_3213_);
v___x_3289_ = lean_array_push(v_indices_3213_, v_xImpl_3214_);
v___x_3290_ = l_Lean_Meta_mkLambdaFVars(v___x_3289_, v_a_3288_, v___x_3250_, v___x_3237_, v___x_3250_, v___x_3237_, v___x_3284_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3291_; lean_object* v___x_3292_; 
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
lean_inc(v_a_3291_);
lean_dec_ref_known(v___x_3290_, 1);
lean_inc(v___y_3225_);
lean_inc_ref(v___y_3224_);
lean_inc(v___y_3223_);
lean_inc_ref(v___y_3222_);
lean_inc_ref(v_xImpl_3214_);
v___x_3292_ = lean_infer_type(v_xImpl_3214_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v___x_3294_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___x_3292_, 1);
lean_inc_ref(v_val_3211_);
v___x_3294_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3293_, v_val_3211_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; size_t v_sz_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3294_, 1);
lean_inc(v___x_3215_);
v___x_3296_ = l_Lean_mkCasesOnName(v___x_3215_);
lean_inc_ref(v___x_3281_);
v___x_3297_ = lean_array_push(v___x_3281_, v_a_3291_);
lean_inc_ref(v_params_3209_);
v___x_3298_ = l_Array_append___redArg(v_params_3209_, v___x_3297_);
lean_dec_ref(v___x_3297_);
v___x_3299_ = l_Array_append___redArg(v___x_3298_, v_indices_3213_);
v___x_3300_ = lean_array_push(v___x_3281_, v_a_3295_);
v___x_3301_ = l_Array_append___redArg(v___x_3299_, v___x_3300_);
lean_dec_ref(v___x_3300_);
v___x_3302_ = l_Array_append___redArg(v___x_3301_, v_a_3261_);
lean_dec(v_a_3261_);
v_sz_3303_ = lean_array_size(v___x_3302_);
v___x_3304_ = l_unsafeCast___redArg(v___x_3302_);
lean_dec_ref(v___x_3302_);
v___x_3305_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3303_, v___x_3253_, v___x_3304_);
v___x_3306_ = l_unsafeCast___redArg(v___x_3305_);
lean_dec_ref(v___x_3305_);
v___x_3307_ = l_Lean_Meta_mkAppOptM(v___x_3296_, v___x_3306_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3309_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3307_, 1);
v___x_3309_ = l_Lean_Meta_mkLambdaFVars(v___x_3283_, v_a_3308_, v___x_3250_, v___x_3237_, v___x_3250_, v___x_3237_, v___x_3284_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3309_, 1);
lean_inc(v_levelParams_3216_);
lean_inc_n(v___x_3263_, 2);
v___x_3311_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3263_);
lean_ctor_set(v___x_3311_, 1, v_levelParams_3216_);
lean_ctor_set(v___x_3311_, 2, v_a_3286_);
v___x_3312_ = lean_box(0);
v___x_3313_ = 0;
v___x_3314_ = lean_box(0);
v___x_3315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3263_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3316_, 0, v___x_3311_);
lean_ctor_set(v___x_3316_, 1, v_a_3310_);
lean_ctor_set(v___x_3316_, 2, v___x_3312_);
lean_ctor_set(v___x_3316_, 3, v___x_3315_);
lean_ctor_set_uint8(v___x_3316_, sizeof(void*)*4, v___x_3313_);
v___x_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
v___x_3318_ = l_Lean_addDecl(v___x_3317_, v___x_3250_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v___x_3319_; lean_object* v_env_3320_; lean_object* v___x_3321_; 
lean_dec_ref_known(v___x_3318_, 1);
v___x_3319_ = lean_st_ref_get(v___y_3225_);
v_env_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc_ref(v_env_3320_);
lean_dec(v___x_3319_);
lean_inc(v_a_3242_);
v___x_3321_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3320_, v_a_3242_);
if (lean_obj_tag(v___x_3321_) == 1)
{
lean_object* v_val_3322_; uint8_t v___x_3323_; lean_object* v___x_3324_; 
v_val_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_val_3322_);
lean_dec_ref_known(v___x_3321_, 1);
v___x_3323_ = lean_unbox(v_val_3322_);
lean_dec(v_val_3322_);
lean_inc(v___x_3263_);
v___x_3324_ = l_Lean_Meta_setInlineAttribute(v___x_3263_, v___x_3323_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_dec_ref_known(v___x_3324_, 1);
v___y_3265_ = v___y_3221_;
v___y_3266_ = v___y_3222_;
v___y_3267_ = v___y_3223_;
v___y_3268_ = v___y_3224_;
v___y_3269_ = v___y_3225_;
goto v___jp_3264_;
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
lean_dec(v___x_3263_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3324_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3324_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
else
{
lean_dec(v___x_3321_);
v___y_3265_ = v___y_3221_;
v___y_3266_ = v___y_3222_;
v___y_3267_ = v___y_3223_;
v___y_3268_ = v___y_3224_;
v___y_3269_ = v___y_3225_;
goto v___jp_3264_;
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3340_; 
lean_dec(v___x_3263_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3333_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3335_ = v___x_3318_;
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3318_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
lean_dec(v_a_3286_);
lean_dec(v___x_3263_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3341_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_3309_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3309_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
else
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3356_; 
lean_dec(v_a_3286_);
lean_dec_ref(v___x_3283_);
lean_dec(v___x_3263_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3349_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3351_ = v___x_3307_;
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3307_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3354_; 
if (v_isShared_3352_ == 0)
{
v___x_3354_ = v___x_3351_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_a_3349_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v_a_3291_);
lean_dec(v_a_3286_);
lean_dec_ref(v___x_3283_);
lean_dec_ref(v___x_3281_);
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3357_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3294_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3294_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_a_3291_);
lean_dec(v_a_3286_);
lean_dec_ref(v___x_3283_);
lean_dec_ref(v___x_3281_);
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3365_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3292_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3292_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
lean_dec(v_a_3286_);
lean_dec_ref(v___x_3283_);
lean_dec_ref(v___x_3281_);
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3373_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3290_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3290_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_a_3286_);
lean_dec_ref(v___x_3283_);
lean_dec_ref(v___x_3281_);
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3381_ = lean_ctor_get(v___x_3287_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3287_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3287_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref(v___x_3283_);
lean_dec_ref(v___x_3281_);
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v___x_3243_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3389_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3285_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3285_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
lean_dec(v___x_3263_);
lean_dec(v_a_3261_);
lean_dec_ref(v___x_3247_);
lean_dec(v___x_3243_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3397_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3279_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3279_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
v___jp_3264_:
{
lean_object* v___x_3270_; 
lean_inc(v_a_3242_);
v___x_3270_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_3242_, v___x_3263_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_dec_ref_known(v___x_3270_, 1);
v_a_3228_ = v___x_3247_;
goto v___jp_3227_;
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_3270_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3270_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
lean_dec_ref(v___x_3247_);
lean_dec(v___x_3243_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3405_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3260_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3260_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
else
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
lean_dec(v___x_3243_);
lean_dec(v_stop_3236_);
lean_dec(v_start_3235_);
v___x_3413_ = lean_mk_empty_array_with_capacity(v___x_3244_);
lean_inc(v_a_3242_);
v___x_3414_ = lean_array_push(v___x_3413_, v_a_3242_);
v___x_3415_ = l_Lean_compileDecls(v___x_3414_, v___x_3237_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3415_) == 0)
{
lean_dec_ref_known(v___x_3415_, 1);
v_a_3228_ = v___x_3247_;
goto v___jp_3227_;
}
else
{
lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
lean_dec_ref(v___x_3247_);
lean_dec(v_levelParams_3216_);
lean_dec(v___x_3215_);
lean_dec_ref(v_xImpl_3214_);
lean_dec_ref(v_indices_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v_val_3211_);
lean_dec(v_ctors_3210_);
lean_dec_ref(v_params_3209_);
lean_dec_ref(v_compFieldVars_3208_);
lean_dec(v_lparams_3207_);
v_a_3416_ = lean_ctor_get(v___x_3415_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v___x_3415_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v___x_3415_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v___x_3415_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
}
}
}
}
v___jp_3227_:
{
size_t v___x_3229_; size_t v___x_3230_; lean_object* v___x_3231_; 
v___x_3229_ = ((size_t)1ULL);
v___x_3230_ = lean_usize_add(v_i_3219_, v___x_3229_);
v___x_3231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3210_, v_lparams_3207_, v_compFieldVars_3208_, v_params_3209_, v_val_3211_, v___x_3212_, v_indices_3213_, v_xImpl_3214_, v___x_3215_, v_levelParams_3216_, v_as_3217_, v_sz_3218_, v___x_3230_, v_a_3228_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
return v___x_3231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object** _args){
lean_object* v_lparams_3429_ = _args[0];
lean_object* v_compFieldVars_3430_ = _args[1];
lean_object* v_params_3431_ = _args[2];
lean_object* v_ctors_3432_ = _args[3];
lean_object* v_val_3433_ = _args[4];
lean_object* v___x_3434_ = _args[5];
lean_object* v_indices_3435_ = _args[6];
lean_object* v_xImpl_3436_ = _args[7];
lean_object* v___x_3437_ = _args[8];
lean_object* v_levelParams_3438_ = _args[9];
lean_object* v_as_3439_ = _args[10];
lean_object* v_sz_3440_ = _args[11];
lean_object* v_i_3441_ = _args[12];
lean_object* v_b_3442_ = _args[13];
lean_object* v___y_3443_ = _args[14];
lean_object* v___y_3444_ = _args[15];
lean_object* v___y_3445_ = _args[16];
lean_object* v___y_3446_ = _args[17];
lean_object* v___y_3447_ = _args[18];
lean_object* v___y_3448_ = _args[19];
_start:
{
size_t v_sz_boxed_3449_; size_t v_i_boxed_3450_; lean_object* v_res_3451_; 
v_sz_boxed_3449_ = lean_unbox_usize(v_sz_3440_);
lean_dec(v_sz_3440_);
v_i_boxed_3450_ = lean_unbox_usize(v_i_3441_);
lean_dec(v_i_3441_);
v_res_3451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3429_, v_compFieldVars_3430_, v_params_3431_, v_ctors_3432_, v_val_3433_, v___x_3434_, v_indices_3435_, v_xImpl_3436_, v___x_3437_, v_levelParams_3438_, v_as_3439_, v_sz_boxed_3449_, v_i_boxed_3450_, v_b_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec_ref(v_as_3439_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object* v_compFieldVars_3452_, lean_object* v_compFields_3453_, lean_object* v_lparams_3454_, lean_object* v_params_3455_, lean_object* v_ctors_3456_, lean_object* v_val_3457_, lean_object* v___x_3458_, lean_object* v_indices_3459_, lean_object* v___x_3460_, lean_object* v_levelParams_3461_, lean_object* v_xImpl_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; size_t v_sz_3472_; size_t v___x_3473_; lean_object* v___x_3474_; 
v___x_3469_ = lean_unsigned_to_nat(0u);
v___x_3470_ = lean_array_get_size(v_compFieldVars_3452_);
lean_inc_ref(v_compFieldVars_3452_);
v___x_3471_ = l_Array_toSubarray___redArg(v_compFieldVars_3452_, v___x_3469_, v___x_3470_);
v_sz_3472_ = lean_array_size(v_compFields_3453_);
v___x_3473_ = ((size_t)0ULL);
v___x_3474_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3454_, v_compFieldVars_3452_, v_params_3455_, v_ctors_3456_, v_val_3457_, v___x_3458_, v_indices_3459_, v_xImpl_3462_, v___x_3460_, v_levelParams_3461_, v_compFields_3453_, v_sz_3472_, v___x_3473_, v___x_3471_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3482_; 
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3482_ == 0)
{
lean_object* v_unused_3483_; 
v_unused_3483_ = lean_ctor_get(v___x_3474_, 0);
lean_dec(v_unused_3483_);
v___x_3476_ = v___x_3474_;
v_isShared_3477_ = v_isSharedCheck_3482_;
goto v_resetjp_3475_;
}
else
{
lean_dec(v___x_3474_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3482_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3478_ = lean_box(0);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v___x_3478_);
v___x_3480_ = v___x_3476_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
v_a_3484_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3474_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3474_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object** _args){
lean_object* v_compFieldVars_3492_ = _args[0];
lean_object* v_compFields_3493_ = _args[1];
lean_object* v_lparams_3494_ = _args[2];
lean_object* v_params_3495_ = _args[3];
lean_object* v_ctors_3496_ = _args[4];
lean_object* v_val_3497_ = _args[5];
lean_object* v___x_3498_ = _args[6];
lean_object* v_indices_3499_ = _args[7];
lean_object* v___x_3500_ = _args[8];
lean_object* v_levelParams_3501_ = _args[9];
lean_object* v_xImpl_3502_ = _args[10];
lean_object* v___y_3503_ = _args[11];
lean_object* v___y_3504_ = _args[12];
lean_object* v___y_3505_ = _args[13];
lean_object* v___y_3506_ = _args[14];
lean_object* v___y_3507_ = _args[15];
lean_object* v___y_3508_ = _args[16];
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(v_compFieldVars_3492_, v_compFields_3493_, v_lparams_3494_, v_params_3495_, v_ctors_3496_, v_val_3497_, v___x_3498_, v_indices_3499_, v___x_3500_, v_levelParams_3501_, v_xImpl_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec(v___y_3505_);
lean_dec_ref(v___y_3504_);
lean_dec_ref(v___y_3503_);
lean_dec_ref(v_compFields_3493_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_toInductiveVal_3519_; lean_object* v_toConstantVal_3520_; lean_object* v_lparams_3521_; lean_object* v_params_3522_; lean_object* v_compFields_3523_; lean_object* v_compFieldVars_3524_; lean_object* v_indices_3525_; lean_object* v_val_3526_; lean_object* v_ctors_3527_; lean_object* v_name_3528_; lean_object* v_levelParams_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___f_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v_toInductiveVal_3519_ = lean_ctor_get(v_a_3513_, 0);
v_toConstantVal_3520_ = lean_ctor_get(v_toInductiveVal_3519_, 0);
v_lparams_3521_ = lean_ctor_get(v_a_3513_, 1);
v_params_3522_ = lean_ctor_get(v_a_3513_, 2);
v_compFields_3523_ = lean_ctor_get(v_a_3513_, 3);
v_compFieldVars_3524_ = lean_ctor_get(v_a_3513_, 4);
v_indices_3525_ = lean_ctor_get(v_a_3513_, 5);
v_val_3526_ = lean_ctor_get(v_a_3513_, 6);
v_ctors_3527_ = lean_ctor_get(v_toInductiveVal_3519_, 4);
v_name_3528_ = lean_ctor_get(v_toConstantVal_3520_, 0);
v_levelParams_3529_ = lean_ctor_get(v_toConstantVal_3520_, 1);
v___x_3530_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_3531_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_3528_);
v___x_3532_ = l_Lean_Name_append(v_name_3528_, v___x_3531_);
lean_inc_n(v_lparams_3521_, 2);
lean_inc(v___x_3532_);
v___x_3533_ = l_Lean_mkConst(v___x_3532_, v_lparams_3521_);
lean_inc_ref_n(v_params_3522_, 2);
v___x_3534_ = l_Array_append___redArg(v_params_3522_, v_indices_3525_);
lean_inc(v_levelParams_3529_);
lean_inc_ref(v_indices_3525_);
lean_inc_ref(v___x_3534_);
lean_inc_ref(v_val_3526_);
lean_inc(v_ctors_3527_);
lean_inc_ref(v_compFields_3523_);
lean_inc_ref(v_compFieldVars_3524_);
v___f_3535_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed), 17, 10);
lean_closure_set(v___f_3535_, 0, v_compFieldVars_3524_);
lean_closure_set(v___f_3535_, 1, v_compFields_3523_);
lean_closure_set(v___f_3535_, 2, v_lparams_3521_);
lean_closure_set(v___f_3535_, 3, v_params_3522_);
lean_closure_set(v___f_3535_, 4, v_ctors_3527_);
lean_closure_set(v___f_3535_, 5, v_val_3526_);
lean_closure_set(v___f_3535_, 6, v___x_3534_);
lean_closure_set(v___f_3535_, 7, v_indices_3525_);
lean_closure_set(v___f_3535_, 8, v___x_3532_);
lean_closure_set(v___f_3535_, 9, v_levelParams_3529_);
v___x_3536_ = l_Lean_mkAppN(v___x_3533_, v___x_3534_);
lean_dec_ref(v___x_3534_);
v___x_3537_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_3530_, v___x_3536_, v___f_3535_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_, v_a_3517_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v_a_3538_, v_a_3539_, v_a_3540_, v_a_3541_, v_a_3542_);
lean_dec(v_a_3542_);
lean_dec_ref(v_a_3541_);
lean_dec(v_a_3540_);
lean_dec_ref(v_a_3539_);
lean_dec_ref(v_a_3538_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object* v_k_3545_, lean_object* v_b_3546_, lean_object* v_c_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v___x_3553_; 
lean_inc(v___y_3551_);
lean_inc_ref(v___y_3550_);
lean_inc(v___y_3549_);
lean_inc_ref(v___y_3548_);
v___x_3553_ = lean_apply_7(v_k_3545_, v_b_3546_, v_c_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, lean_box(0));
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object* v_k_3554_, lean_object* v_b_3555_, lean_object* v_c_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(v_k_3554_, v_b_3555_, v_c_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3557_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object* v_type_3563_, lean_object* v_k_3564_, uint8_t v_cleanupAnnotations_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v___f_3571_; uint8_t v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___f_3571_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3571_, 0, v_k_3564_);
v___x_3572_ = 0;
v___x_3573_ = lean_box(0);
v___x_3574_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3572_, v___x_3573_, v_type_3563_, v___f_3571_, v_cleanupAnnotations_3565_, v___x_3572_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
v_a_3583_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3574_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3574_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object* v_type_3591_, lean_object* v_k_3592_, lean_object* v_cleanupAnnotations_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3599_; lean_object* v_res_3600_; 
v_cleanupAnnotations_boxed_3599_ = lean_unbox(v_cleanupAnnotations_3593_);
v_res_3600_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3591_, v_k_3592_, v_cleanupAnnotations_boxed_3599_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_);
lean_dec(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec(v___y_3595_);
lean_dec_ref(v___y_3594_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object* v_00_u03b1_3601_, lean_object* v_type_3602_, lean_object* v_k_3603_, uint8_t v_cleanupAnnotations_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
lean_object* v___x_3610_; 
v___x_3610_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3602_, v_k_3603_, v_cleanupAnnotations_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object* v_00_u03b1_3611_, lean_object* v_type_3612_, lean_object* v_k_3613_, lean_object* v_cleanupAnnotations_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3620_; lean_object* v_res_3621_; 
v_cleanupAnnotations_boxed_3620_ = lean_unbox(v_cleanupAnnotations_3614_);
v_res_3621_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(v_00_u03b1_3611_, v_type_3612_, v_k_3613_, v_cleanupAnnotations_boxed_3620_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object* v_a_3622_, lean_object* v___x_3623_, lean_object* v___x_3624_, lean_object* v_compFields_3625_, lean_object* v___x_3626_, lean_object* v_val_3627_, lean_object* v_compFieldVars_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3634_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3634_, 0, v_a_3622_);
lean_ctor_set(v___x_3634_, 1, v___x_3623_);
lean_ctor_set(v___x_3634_, 2, v___x_3624_);
lean_ctor_set(v___x_3634_, 3, v_compFields_3625_);
lean_ctor_set(v___x_3634_, 4, v_compFieldVars_3628_);
lean_ctor_set(v___x_3634_, 5, v___x_3626_);
lean_ctor_set(v___x_3634_, 6, v_val_3627_);
v___x_3635_ = l_Lean_Elab_ComputedFields_validateComputedFields(v___x_3634_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v___x_3636_; 
lean_dec_ref_known(v___x_3635_, 1);
v___x_3636_ = l_Lean_Elab_ComputedFields_mkImplType(v___x_3634_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; uint8_t v___x_3641_; lean_object* v___x_3642_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = lean_unsigned_to_nat(1u);
v___x_3639_ = lean_mk_empty_array_with_capacity(v___x_3638_);
v___x_3640_ = lean_array_push(v___x_3639_, v_a_3637_);
v___x_3641_ = 1;
v___x_3642_ = l_Lean_compileDecls(v___x_3640_, v___x_3641_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v___x_3643_; 
lean_dec_ref_known(v___x_3642_, 1);
v___x_3643_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v___x_3634_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v___x_3644_; 
lean_dec_ref_known(v___x_3643_, 1);
v___x_3644_ = l_Lean_Elab_ComputedFields_overrideConstructors(v___x_3634_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v___x_3645_; 
lean_dec_ref_known(v___x_3644_, 1);
v___x_3645_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v___x_3634_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
lean_dec_ref_known(v___x_3634_, 7);
return v___x_3645_;
}
else
{
lean_dec_ref_known(v___x_3634_, 7);
return v___x_3644_;
}
}
else
{
lean_dec_ref_known(v___x_3634_, 7);
return v___x_3643_;
}
}
else
{
lean_dec_ref_known(v___x_3634_, 7);
return v___x_3642_;
}
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec_ref_known(v___x_3634_, 7);
v_a_3646_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3636_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3636_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_3634_, 7);
return v___x_3635_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object* v_a_3654_, lean_object* v___x_3655_, lean_object* v___x_3656_, lean_object* v_compFields_3657_, lean_object* v___x_3658_, lean_object* v_val_3659_, lean_object* v_compFieldVars_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(v_a_3654_, v___x_3655_, v___x_3656_, v_compFields_3657_, v___x_3658_, v_val_3659_, v_compFieldVars_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec(v___y_3662_);
lean_dec_ref(v___y_3661_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object* v___x_3667_, lean_object* v___x_3668_, lean_object* v_val_3669_, lean_object* v___x_3670_, lean_object* v_x_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3677_ = l_Array_append___redArg(v___x_3667_, v___x_3668_);
v___x_3678_ = lean_unsigned_to_nat(1u);
v___x_3679_ = lean_mk_empty_array_with_capacity(v___x_3678_);
v___x_3680_ = lean_array_push(v___x_3679_, v_val_3669_);
v___x_3681_ = l_Array_append___redArg(v___x_3677_, v___x_3680_);
lean_dec_ref(v___x_3680_);
v___x_3682_ = l_Lean_Meta_mkAppM(v___x_3670_, v___x_3681_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3684_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3682_, 1);
lean_inc(v___y_3675_);
lean_inc_ref(v___y_3674_);
lean_inc(v___y_3673_);
lean_inc_ref(v___y_3672_);
v___x_3684_ = lean_infer_type(v_a_3683_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
return v___x_3684_;
}
else
{
return v___x_3682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object* v___x_3685_, lean_object* v___x_3686_, lean_object* v_val_3687_, lean_object* v___x_3688_, lean_object* v_x_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(v___x_3685_, v___x_3686_, v_val_3687_, v___x_3688_, v_x_3689_, v___y_3690_, v___y_3691_, v___y_3692_, v___y_3693_);
lean_dec(v___y_3693_);
lean_dec_ref(v___y_3692_);
lean_dec(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v_x_3689_);
lean_dec_ref(v___x_3686_);
return v_res_3695_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; 
v___x_3696_ = lean_box(0);
v___x_3697_ = l_unsafeCast___redArg(v___x_3696_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object* v___x_3698_, lean_object* v___x_3699_, lean_object* v_val_3700_, size_t v_sz_3701_, size_t v_i_3702_, lean_object* v_bs_3703_){
_start:
{
uint8_t v___x_3704_; 
v___x_3704_ = lean_usize_dec_lt(v_i_3702_, v_sz_3701_);
if (v___x_3704_ == 0)
{
lean_object* v___x_3705_; 
lean_dec_ref(v_val_3700_);
lean_dec_ref(v___x_3699_);
lean_dec_ref(v___x_3698_);
v___x_3705_ = l_unsafeCast___redArg(v_bs_3703_);
lean_dec_ref(v_bs_3703_);
return v___x_3705_;
}
else
{
lean_object* v_v_3706_; lean_object* v___x_3707_; lean_object* v_bs_x27_3708_; lean_object* v___x_3709_; lean_object* v___f_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; size_t v___x_3714_; size_t v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v_v_3706_ = lean_array_uget(v_bs_3703_, v_i_3702_);
v___x_3707_ = lean_unsigned_to_nat(0u);
v_bs_x27_3708_ = lean_array_uset(v_bs_3703_, v_i_3702_, v___x_3707_);
v___x_3709_ = l_unsafeCast___redArg(v_v_3706_);
lean_dec(v_v_3706_);
lean_inc(v___x_3709_);
lean_inc_ref(v_val_3700_);
lean_inc_ref(v___x_3699_);
lean_inc_ref(v___x_3698_);
v___f_3710_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3710_, 0, v___x_3698_);
lean_closure_set(v___f_3710_, 1, v___x_3699_);
lean_closure_set(v___f_3710_, 2, v_val_3700_);
lean_closure_set(v___f_3710_, 3, v___x_3709_);
v___x_3711_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___closed__0);
v___x_3712_ = l_Lean_Name_updatePrefix(v___x_3709_, v___x_3711_);
v___x_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set(v___x_3713_, 1, v___f_3710_);
v___x_3714_ = ((size_t)1ULL);
v___x_3715_ = lean_usize_add(v_i_3702_, v___x_3714_);
v___x_3716_ = l_unsafeCast___redArg(v___x_3713_);
lean_dec_ref_known(v___x_3713_, 2);
v___x_3717_ = lean_array_uset(v_bs_x27_3708_, v_i_3702_, v___x_3716_);
v_i_3702_ = v___x_3715_;
v_bs_3703_ = v___x_3717_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object* v___x_3719_, lean_object* v___x_3720_, lean_object* v_val_3721_, lean_object* v_sz_3722_, lean_object* v_i_3723_, lean_object* v_bs_3724_){
_start:
{
size_t v_sz_boxed_3725_; size_t v_i_boxed_3726_; lean_object* v_res_3727_; 
v_sz_boxed_3725_ = lean_unbox_usize(v_sz_3722_);
lean_dec(v_sz_3722_);
v_i_boxed_3726_ = lean_unbox_usize(v_i_3723_);
lean_dec(v_i_3723_);
v_res_3727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_3719_, v___x_3720_, v_val_3721_, v_sz_boxed_3725_, v_i_boxed_3726_, v_bs_3724_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t v_sz_3728_, size_t v_i_3729_, lean_object* v_bs_3730_){
_start:
{
uint8_t v___x_3731_; 
v___x_3731_ = lean_usize_dec_lt(v_i_3729_, v_sz_3728_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; 
v___x_3732_ = l_unsafeCast___redArg(v_bs_3730_);
lean_dec_ref(v_bs_3730_);
return v___x_3732_;
}
else
{
lean_object* v_v_3733_; lean_object* v___x_3734_; lean_object* v_fst_3735_; lean_object* v_snd_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3753_; 
v_v_3733_ = lean_array_uget_borrowed(v_bs_3730_, v_i_3729_);
v___x_3734_ = l_unsafeCast___redArg(v_v_3733_);
v_fst_3735_ = lean_ctor_get(v___x_3734_, 0);
v_snd_3736_ = lean_ctor_get(v___x_3734_, 1);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3738_ = v___x_3734_;
v_isShared_3739_ = v_isSharedCheck_3753_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_snd_3736_);
lean_inc(v_fst_3735_);
lean_dec(v___x_3734_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3753_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3740_; lean_object* v_bs_x27_3741_; uint8_t v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3745_; 
v___x_3740_ = lean_unsigned_to_nat(0u);
v_bs_x27_3741_ = lean_array_uset(v_bs_3730_, v_i_3729_, v___x_3740_);
v___x_3742_ = 0;
v___x_3743_ = lean_box(v___x_3742_);
if (v_isShared_3739_ == 0)
{
lean_ctor_set(v___x_3738_, 0, v___x_3743_);
v___x_3745_ = v___x_3738_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3743_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_snd_3736_);
v___x_3745_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
lean_object* v___x_3746_; size_t v___x_3747_; size_t v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3746_, 0, v_fst_3735_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = ((size_t)1ULL);
v___x_3748_ = lean_usize_add(v_i_3729_, v___x_3747_);
v___x_3749_ = l_unsafeCast___redArg(v___x_3746_);
lean_dec_ref_known(v___x_3746_, 2);
v___x_3750_ = lean_array_uset(v_bs_x27_3741_, v_i_3729_, v___x_3749_);
v_i_3729_ = v___x_3748_;
v_bs_3730_ = v___x_3750_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object* v_sz_3754_, lean_object* v_i_3755_, lean_object* v_bs_3756_){
_start:
{
size_t v_sz_boxed_3757_; size_t v_i_boxed_3758_; lean_object* v_res_3759_; 
v_sz_boxed_3757_ = lean_unbox_usize(v_sz_3754_);
lean_dec(v_sz_3754_);
v_i_boxed_3758_ = lean_unbox_usize(v_i_3755_);
lean_dec(v_i_3755_);
v_res_3759_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_boxed_3757_, v_i_boxed_3758_, v_bs_3756_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object* v___x_3760_, lean_object* v___x_3761_, lean_object* v_a_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
lean_object* v___x_3407__overap_3768_; lean_object* v___x_3769_; 
v___x_3407__overap_3768_ = l_instInhabitedOfMonad___redArg(v___x_3760_, v___x_3761_);
lean_inc(v___y_3766_);
lean_inc_ref(v___y_3765_);
lean_inc(v___y_3764_);
lean_inc_ref(v___y_3763_);
v___x_3769_ = lean_apply_5(v___x_3407__overap_3768_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_, lean_box(0));
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object* v___x_3770_, lean_object* v___x_3771_, lean_object* v_a_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(v___x_3770_, v___x_3771_, v_a_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
lean_dec_ref(v_a_3772_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v_acc_3779_, lean_object* v_declInfos_3780_, lean_object* v_k_3781_, lean_object* v_kind_3782_, lean_object* v_b_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
uint8_t v_kind_boxed_3789_; lean_object* v_res_3790_; 
v_kind_boxed_3789_ = lean_unbox(v_kind_3782_);
v_res_3790_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(v_acc_3779_, v_declInfos_3780_, v_k_3781_, v_kind_boxed_3789_, v_b_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object* v_acc_3791_, lean_object* v_declInfos_3792_, lean_object* v_k_3793_, uint8_t v_kind_3794_, lean_object* v_name_3795_, uint8_t v_bi_3796_, lean_object* v_type_3797_, uint8_t v_kind_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
lean_object* v___x_3804_; lean_object* v___f_3805_; lean_object* v___x_3806_; 
v___x_3804_ = lean_box(v_kind_3794_);
v___f_3805_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3805_, 0, v_acc_3791_);
lean_closure_set(v___f_3805_, 1, v_declInfos_3792_);
lean_closure_set(v___f_3805_, 2, v_k_3793_);
lean_closure_set(v___f_3805_, 3, v___x_3804_);
v___x_3806_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3795_, v_bi_3796_, v_type_3797_, v___f_3805_, v_kind_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3814_; 
v_a_3807_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3809_ = v___x_3806_;
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3806_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3812_; 
if (v_isShared_3810_ == 0)
{
v___x_3812_ = v___x_3809_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_a_3807_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
v_a_3815_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3817_ = v___x_3806_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3806_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object* v_declInfos_3823_, lean_object* v_k_3824_, uint8_t v_kind_3825_, lean_object* v_acc_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v_toApplicative_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3920_; 
v___x_3832_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_3833_ = l_StateRefT_x27_instMonad___redArg(v___x_3832_);
v_toApplicative_3834_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3920_ == 0)
{
lean_object* v_unused_3921_; 
v_unused_3921_ = lean_ctor_get(v___x_3833_, 1);
lean_dec(v_unused_3921_);
v___x_3836_ = v___x_3833_;
v_isShared_3837_ = v_isSharedCheck_3920_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_toApplicative_3834_);
lean_dec(v___x_3833_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3920_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v_toFunctor_3838_; lean_object* v_toSeq_3839_; lean_object* v_toSeqLeft_3840_; lean_object* v_toSeqRight_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3918_; 
v_toFunctor_3838_ = lean_ctor_get(v_toApplicative_3834_, 0);
v_toSeq_3839_ = lean_ctor_get(v_toApplicative_3834_, 2);
v_toSeqLeft_3840_ = lean_ctor_get(v_toApplicative_3834_, 3);
v_toSeqRight_3841_ = lean_ctor_get(v_toApplicative_3834_, 4);
v_isSharedCheck_3918_ = !lean_is_exclusive(v_toApplicative_3834_);
if (v_isSharedCheck_3918_ == 0)
{
lean_object* v_unused_3919_; 
v_unused_3919_ = lean_ctor_get(v_toApplicative_3834_, 1);
lean_dec(v_unused_3919_);
v___x_3843_ = v_toApplicative_3834_;
v_isShared_3844_ = v_isSharedCheck_3918_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_toSeqRight_3841_);
lean_inc(v_toSeqLeft_3840_);
lean_inc(v_toSeq_3839_);
lean_inc(v_toFunctor_3838_);
lean_dec(v_toApplicative_3834_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3918_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___f_3845_; lean_object* v___f_3846_; lean_object* v___f_3847_; lean_object* v___f_3848_; lean_object* v___x_3849_; lean_object* v___f_3850_; lean_object* v___f_3851_; lean_object* v___f_3852_; lean_object* v___x_3854_; 
v___f_3845_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_3846_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_3838_);
v___f_3847_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3847_, 0, v_toFunctor_3838_);
v___f_3848_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3848_, 0, v_toFunctor_3838_);
v___x_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3849_, 0, v___f_3847_);
lean_ctor_set(v___x_3849_, 1, v___f_3848_);
v___f_3850_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3850_, 0, v_toSeqRight_3841_);
v___f_3851_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3851_, 0, v_toSeqLeft_3840_);
v___f_3852_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3852_, 0, v_toSeq_3839_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 4, v___f_3850_);
lean_ctor_set(v___x_3843_, 3, v___f_3851_);
lean_ctor_set(v___x_3843_, 2, v___f_3852_);
lean_ctor_set(v___x_3843_, 1, v___f_3845_);
lean_ctor_set(v___x_3843_, 0, v___x_3849_);
v___x_3854_ = v___x_3843_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v___x_3849_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v___f_3845_);
lean_ctor_set(v_reuseFailAlloc_3917_, 2, v___f_3852_);
lean_ctor_set(v_reuseFailAlloc_3917_, 3, v___f_3851_);
lean_ctor_set(v_reuseFailAlloc_3917_, 4, v___f_3850_);
v___x_3854_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
lean_object* v___x_3856_; 
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 1, v___f_3846_);
lean_ctor_set(v___x_3836_, 0, v___x_3854_);
v___x_3856_ = v___x_3836_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v___x_3854_);
lean_ctor_set(v_reuseFailAlloc_3916_, 1, v___f_3846_);
v___x_3856_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
lean_object* v___x_3857_; lean_object* v_toApplicative_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3914_; 
v___x_3857_ = l_StateRefT_x27_instMonad___redArg(v___x_3856_);
v_toApplicative_3858_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3914_ == 0)
{
lean_object* v_unused_3915_; 
v_unused_3915_ = lean_ctor_get(v___x_3857_, 1);
lean_dec(v_unused_3915_);
v___x_3860_ = v___x_3857_;
v_isShared_3861_ = v_isSharedCheck_3914_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_toApplicative_3858_);
lean_dec(v___x_3857_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3914_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v_toFunctor_3862_; lean_object* v_toSeq_3863_; lean_object* v_toSeqLeft_3864_; lean_object* v_toSeqRight_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3912_; 
v_toFunctor_3862_ = lean_ctor_get(v_toApplicative_3858_, 0);
v_toSeq_3863_ = lean_ctor_get(v_toApplicative_3858_, 2);
v_toSeqLeft_3864_ = lean_ctor_get(v_toApplicative_3858_, 3);
v_toSeqRight_3865_ = lean_ctor_get(v_toApplicative_3858_, 4);
v_isSharedCheck_3912_ = !lean_is_exclusive(v_toApplicative_3858_);
if (v_isSharedCheck_3912_ == 0)
{
lean_object* v_unused_3913_; 
v_unused_3913_ = lean_ctor_get(v_toApplicative_3858_, 1);
lean_dec(v_unused_3913_);
v___x_3867_ = v_toApplicative_3858_;
v_isShared_3868_ = v_isSharedCheck_3912_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_toSeqRight_3865_);
lean_inc(v_toSeqLeft_3864_);
lean_inc(v_toSeq_3863_);
lean_inc(v_toFunctor_3862_);
lean_dec(v_toApplicative_3858_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3912_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___f_3869_; lean_object* v___f_3870_; lean_object* v___f_3871_; lean_object* v___f_3872_; lean_object* v___x_3873_; lean_object* v___f_3874_; lean_object* v___f_3875_; lean_object* v___f_3876_; lean_object* v___x_3878_; 
v___f_3869_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_3870_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_3862_);
v___f_3871_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3871_, 0, v_toFunctor_3862_);
v___f_3872_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3872_, 0, v_toFunctor_3862_);
v___x_3873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3873_, 0, v___f_3871_);
lean_ctor_set(v___x_3873_, 1, v___f_3872_);
v___f_3874_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3874_, 0, v_toSeqRight_3865_);
v___f_3875_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3875_, 0, v_toSeqLeft_3864_);
v___f_3876_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3876_, 0, v_toSeq_3863_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 4, v___f_3874_);
lean_ctor_set(v___x_3867_, 3, v___f_3875_);
lean_ctor_set(v___x_3867_, 2, v___f_3876_);
lean_ctor_set(v___x_3867_, 1, v___f_3869_);
lean_ctor_set(v___x_3867_, 0, v___x_3873_);
v___x_3878_ = v___x_3867_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v___x_3873_);
lean_ctor_set(v_reuseFailAlloc_3911_, 1, v___f_3869_);
lean_ctor_set(v_reuseFailAlloc_3911_, 2, v___f_3876_);
lean_ctor_set(v_reuseFailAlloc_3911_, 3, v___f_3875_);
lean_ctor_set(v_reuseFailAlloc_3911_, 4, v___f_3874_);
v___x_3878_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
lean_object* v___x_3880_; 
if (v_isShared_3861_ == 0)
{
lean_ctor_set(v___x_3860_, 1, v___f_3870_);
lean_ctor_set(v___x_3860_, 0, v___x_3878_);
v___x_3880_ = v___x_3860_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v___x_3878_);
lean_ctor_set(v_reuseFailAlloc_3910_, 1, v___f_3870_);
v___x_3880_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; 
v___x_3881_ = lean_array_get_size(v_acc_3826_);
v___x_3882_ = lean_array_get_size(v_declInfos_3823_);
v___x_3883_ = lean_nat_dec_lt(v___x_3881_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; 
lean_dec_ref(v___x_3880_);
lean_dec_ref(v_declInfos_3823_);
lean_inc(v___y_3830_);
lean_inc_ref(v___y_3829_);
lean_inc(v___y_3828_);
lean_inc_ref(v___y_3827_);
v___x_3884_ = lean_apply_6(v_k_3824_, v_acc_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, lean_box(0));
return v___x_3884_;
}
else
{
lean_object* v___x_3885_; uint8_t v___x_3886_; lean_object* v___x_3887_; lean_object* v___f_3888_; lean_object* v___f_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v_snd_3894_; lean_object* v_fst_3895_; lean_object* v_fst_3896_; lean_object* v_snd_3897_; lean_object* v___x_3898_; 
v___x_3885_ = l_Lean_instInhabitedName;
v___x_3886_ = 0;
v___x_3887_ = l_Lean_instInhabitedExpr;
v___f_3888_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3888_, 0, v___x_3880_);
lean_closure_set(v___f_3888_, 1, v___x_3887_);
v___f_3889_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3889_, 0, v___f_3888_);
v___x_3890_ = lean_box(v___x_3886_);
v___x_3891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3890_);
lean_ctor_set(v___x_3891_, 1, v___f_3889_);
v___x_3892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3885_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
v___x_3893_ = lean_array_get(v___x_3892_, v_declInfos_3823_, v___x_3881_);
lean_dec_ref_known(v___x_3892_, 2);
v_snd_3894_ = lean_ctor_get(v___x_3893_, 1);
lean_inc(v_snd_3894_);
v_fst_3895_ = lean_ctor_get(v___x_3893_, 0);
lean_inc(v_fst_3895_);
lean_dec(v___x_3893_);
v_fst_3896_ = lean_ctor_get(v_snd_3894_, 0);
lean_inc(v_fst_3896_);
v_snd_3897_ = lean_ctor_get(v_snd_3894_, 1);
lean_inc(v_snd_3897_);
lean_dec(v_snd_3894_);
lean_inc(v___y_3830_);
lean_inc_ref(v___y_3829_);
lean_inc(v___y_3828_);
lean_inc_ref(v___y_3827_);
lean_inc_ref(v_acc_3826_);
v___x_3898_ = lean_apply_6(v_snd_3897_, v_acc_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, lean_box(0));
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; uint8_t v___x_3900_; lean_object* v___x_3901_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_a_3899_);
lean_dec_ref_known(v___x_3898_, 1);
v___x_3900_ = lean_unbox(v_fst_3896_);
lean_dec(v_fst_3896_);
v___x_3901_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3826_, v_declInfos_3823_, v_k_3824_, v_kind_3825_, v_fst_3895_, v___x_3900_, v_a_3899_, v_kind_3825_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
return v___x_3901_;
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
lean_dec(v_fst_3896_);
lean_dec(v_fst_3895_);
lean_dec_ref(v_acc_3826_);
lean_dec_ref(v_k_3824_);
lean_dec_ref(v_declInfos_3823_);
v_a_3902_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3898_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3898_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object* v_acc_3922_, lean_object* v_declInfos_3923_, lean_object* v_k_3924_, uint8_t v_kind_3925_, lean_object* v_b_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3932_ = lean_array_push(v_acc_3922_, v_b_3926_);
v___x_3933_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3923_, v_k_3924_, v_kind_3925_, v___x_3932_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_acc_3934_, lean_object* v_declInfos_3935_, lean_object* v_k_3936_, lean_object* v_kind_3937_, lean_object* v_name_3938_, lean_object* v_bi_3939_, lean_object* v_type_3940_, lean_object* v_kind_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_){
_start:
{
uint8_t v_kind_boxed_3947_; uint8_t v_bi_boxed_3948_; uint8_t v_kind_boxed_3949_; lean_object* v_res_3950_; 
v_kind_boxed_3947_ = lean_unbox(v_kind_3937_);
v_bi_boxed_3948_ = lean_unbox(v_bi_3939_);
v_kind_boxed_3949_ = lean_unbox(v_kind_3941_);
v_res_3950_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3934_, v_declInfos_3935_, v_k_3936_, v_kind_boxed_3947_, v_name_3938_, v_bi_boxed_3948_, v_type_3940_, v_kind_boxed_3949_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
lean_dec(v___y_3945_);
lean_dec_ref(v___y_3944_);
lean_dec(v___y_3943_);
lean_dec_ref(v___y_3942_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object* v_declInfos_3951_, lean_object* v_k_3952_, lean_object* v_kind_3953_, lean_object* v_acc_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
uint8_t v_kind_boxed_3960_; lean_object* v_res_3961_; 
v_kind_boxed_3960_ = lean_unbox(v_kind_3953_);
v_res_3961_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3951_, v_k_3952_, v_kind_boxed_3960_, v_acc_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
lean_dec(v___y_3958_);
lean_dec_ref(v___y_3957_);
lean_dec(v___y_3956_);
lean_dec_ref(v___y_3955_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object* v_declInfos_3962_, lean_object* v_k_3963_, uint8_t v_kind_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3970_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_3971_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3962_, v_k_3963_, v_kind_3964_, v___x_3970_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object* v_declInfos_3972_, lean_object* v_k_3973_, lean_object* v_kind_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
uint8_t v_kind_boxed_3980_; lean_object* v_res_3981_; 
v_kind_boxed_3980_ = lean_unbox(v_kind_3974_);
v_res_3981_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v_declInfos_3972_, v_k_3973_, v_kind_boxed_3980_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
lean_dec(v___y_3976_);
lean_dec_ref(v___y_3975_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object* v_declInfos_3982_, lean_object* v_k_3983_, uint8_t v_kind_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
size_t v_sz_3990_; size_t v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; 
v_sz_3990_ = lean_array_size(v_declInfos_3982_);
v___x_3991_ = ((size_t)0ULL);
v___x_3992_ = l_unsafeCast___redArg(v_declInfos_3982_);
v___x_3993_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_3990_, v___x_3991_, v___x_3992_);
v___x_3994_ = l_unsafeCast___redArg(v___x_3993_);
lean_dec_ref(v___x_3993_);
v___x_3995_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v___x_3994_, v_k_3983_, v_kind_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object* v_declInfos_3996_, lean_object* v_k_3997_, lean_object* v_kind_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v_kind_boxed_4004_; lean_object* v_res_4005_; 
v_kind_boxed_4004_ = lean_unbox(v_kind_3998_);
v_res_4005_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v_declInfos_3996_, v_k_3997_, v_kind_boxed_4004_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec_ref(v_declInfos_3996_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object* v_paramsIndices_4006_, lean_object* v_numParams_4007_, lean_object* v_a_4008_, lean_object* v___x_4009_, lean_object* v_compFields_4010_, lean_object* v_val_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_){
_start:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v_lower_4022_; lean_object* v_upper_4023_; lean_object* v___x_4034_; uint8_t v___x_4035_; 
v___x_4017_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_4007_);
lean_inc_ref(v_paramsIndices_4006_);
v___x_4018_ = l_Array_toSubarray___redArg(v_paramsIndices_4006_, v___x_4017_, v_numParams_4007_);
v___x_4019_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_4020_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4018_, v___x_4019_);
v___x_4034_ = lean_array_get_size(v_paramsIndices_4006_);
v___x_4035_ = lean_nat_dec_le(v_numParams_4007_, v___x_4017_);
if (v___x_4035_ == 0)
{
v_lower_4022_ = v_numParams_4007_;
v_upper_4023_ = v___x_4034_;
goto v___jp_4021_;
}
else
{
lean_dec(v_numParams_4007_);
v_lower_4022_ = v___x_4017_;
v_upper_4023_ = v___x_4034_;
goto v___jp_4021_;
}
v___jp_4021_:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___f_4026_; size_t v_sz_4027_; size_t v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; uint8_t v___x_4032_; lean_object* v___x_4033_; 
v___x_4024_ = l_Array_toSubarray___redArg(v_paramsIndices_4006_, v_lower_4022_, v_upper_4023_);
v___x_4025_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4024_, v___x_4019_);
lean_inc_ref(v_val_4011_);
lean_inc_ref(v___x_4025_);
lean_inc_ref(v_compFields_4010_);
lean_inc_ref(v___x_4020_);
v___f_4026_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed), 12, 6);
lean_closure_set(v___f_4026_, 0, v_a_4008_);
lean_closure_set(v___f_4026_, 1, v___x_4009_);
lean_closure_set(v___f_4026_, 2, v___x_4020_);
lean_closure_set(v___f_4026_, 3, v_compFields_4010_);
lean_closure_set(v___f_4026_, 4, v___x_4025_);
lean_closure_set(v___f_4026_, 5, v_val_4011_);
v_sz_4027_ = lean_array_size(v_compFields_4010_);
v___x_4028_ = ((size_t)0ULL);
v___x_4029_ = l_unsafeCast___redArg(v_compFields_4010_);
lean_dec_ref(v_compFields_4010_);
v___x_4030_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_4020_, v___x_4025_, v_val_4011_, v_sz_4027_, v___x_4028_, v___x_4029_);
v___x_4031_ = l_unsafeCast___redArg(v___x_4030_);
lean_dec_ref(v___x_4030_);
v___x_4032_ = 0;
v___x_4033_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v___x_4031_, v___f_4026_, v___x_4032_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_);
lean_dec(v___x_4031_);
return v___x_4033_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object* v_paramsIndices_4036_, lean_object* v_numParams_4037_, lean_object* v_a_4038_, lean_object* v___x_4039_, lean_object* v_compFields_4040_, lean_object* v_val_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(v_paramsIndices_4036_, v_numParams_4037_, v_a_4038_, v___x_4039_, v_compFields_4040_, v_val_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object* v_k_4048_, lean_object* v_b_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v___x_4055_; 
lean_inc(v___y_4053_);
lean_inc_ref(v___y_4052_);
lean_inc(v___y_4051_);
lean_inc_ref(v___y_4050_);
v___x_4055_ = lean_apply_6(v_k_4048_, v_b_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_, lean_box(0));
return v___x_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object* v_k_4056_, lean_object* v_b_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(v_k_4056_, v_b_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object* v_name_4064_, uint8_t v_bi_4065_, lean_object* v_type_4066_, lean_object* v_k_4067_, uint8_t v_kind_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___f_4074_; lean_object* v___x_4075_; 
v___f_4074_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4074_, 0, v_k_4067_);
v___x_4075_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4064_, v_bi_4065_, v_type_4066_, v___f_4074_, v_kind_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4083_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4078_ = v___x_4075_;
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4075_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4081_; 
if (v_isShared_4079_ == 0)
{
v___x_4081_ = v___x_4078_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_a_4076_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
else
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
v_a_4084_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_4075_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_4075_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object* v_name_4092_, lean_object* v_bi_4093_, lean_object* v_type_4094_, lean_object* v_k_4095_, lean_object* v_kind_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
uint8_t v_bi_boxed_4102_; uint8_t v_kind_boxed_4103_; lean_object* v_res_4104_; 
v_bi_boxed_4102_ = lean_unbox(v_bi_4093_);
v_kind_boxed_4103_ = lean_unbox(v_kind_4096_);
v_res_4104_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4092_, v_bi_boxed_4102_, v_type_4094_, v_k_4095_, v_kind_boxed_4103_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object* v_name_4105_, lean_object* v_type_4106_, lean_object* v_k_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
uint8_t v___x_4113_; uint8_t v___x_4114_; lean_object* v___x_4115_; 
v___x_4113_ = 0;
v___x_4114_ = 0;
v___x_4115_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4105_, v___x_4113_, v_type_4106_, v_k_4107_, v___x_4114_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object* v_name_4116_, lean_object* v_type_4117_, lean_object* v_k_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4116_, v_type_4117_, v_k_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object* v_numParams_4125_, lean_object* v_a_4126_, lean_object* v___x_4127_, lean_object* v_compFields_4128_, lean_object* v_name_4129_, lean_object* v_paramsIndices_4130_, lean_object* v_x_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___f_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
lean_inc(v___x_4127_);
lean_inc_ref(v_paramsIndices_4130_);
v___f_4137_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed), 11, 5);
lean_closure_set(v___f_4137_, 0, v_paramsIndices_4130_);
lean_closure_set(v___f_4137_, 1, v_numParams_4125_);
lean_closure_set(v___f_4137_, 2, v_a_4126_);
lean_closure_set(v___f_4137_, 3, v___x_4127_);
lean_closure_set(v___f_4137_, 4, v_compFields_4128_);
v___x_4138_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_4139_ = l_Lean_mkConst(v_name_4129_, v___x_4127_);
v___x_4140_ = l_Lean_mkAppN(v___x_4139_, v_paramsIndices_4130_);
lean_dec_ref(v_paramsIndices_4130_);
v___x_4141_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v___x_4138_, v___x_4140_, v___f_4137_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object* v_numParams_4142_, lean_object* v_a_4143_, lean_object* v___x_4144_, lean_object* v_compFields_4145_, lean_object* v_name_4146_, lean_object* v_paramsIndices_4147_, lean_object* v_x_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(v_numParams_4142_, v_a_4143_, v___x_4144_, v_compFields_4145_, v_name_4146_, v_paramsIndices_4147_, v_x_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
lean_dec_ref(v_x_4148_);
return v_res_4154_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1(void){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0));
v___x_4157_ = l_Lean_stringToMessageData(v___x_4156_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object* v_declName_4158_, lean_object* v_compFields_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_declName_4158_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v_toConstantVal_4167_; lean_object* v_numParams_4168_; lean_object* v_ctors_4169_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v___x_4165_, 1);
v_toConstantVal_4167_ = lean_ctor_get(v_a_4166_, 0);
v_numParams_4168_ = lean_ctor_get(v_a_4166_, 1);
lean_inc(v_numParams_4168_);
v_ctors_4169_ = lean_ctor_get(v_a_4166_, 4);
v___x_4183_ = l_List_lengthTR___redArg(v_ctors_4169_);
v___x_4184_ = lean_unsigned_to_nat(2u);
v___x_4185_ = lean_nat_dec_lt(v___x_4183_, v___x_4184_);
lean_dec(v___x_4183_);
if (v___x_4185_ == 0)
{
v___y_4171_ = v_a_4160_;
v___y_4172_ = v_a_4161_;
v___y_4173_ = v_a_4162_;
v___y_4174_ = v_a_4163_;
goto v___jp_4170_;
}
else
{
lean_object* v___x_4186_; lean_object* v___x_4187_; 
lean_dec(v_numParams_4168_);
lean_dec(v_a_4166_);
lean_dec_ref(v_compFields_4159_);
v___x_4186_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1, &l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once, _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1);
v___x_4187_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_4186_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_);
return v___x_4187_;
}
v___jp_4170_:
{
lean_object* v_name_4175_; lean_object* v_levelParams_4176_; lean_object* v_type_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___f_4180_; uint8_t v___x_4181_; lean_object* v___x_4182_; 
v_name_4175_ = lean_ctor_get(v_toConstantVal_4167_, 0);
lean_inc(v_name_4175_);
v_levelParams_4176_ = lean_ctor_get(v_toConstantVal_4167_, 1);
v_type_4177_ = lean_ctor_get(v_toConstantVal_4167_, 2);
lean_inc_ref(v_type_4177_);
v___x_4178_ = lean_box(0);
lean_inc(v_levelParams_4176_);
v___x_4179_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_4176_, v___x_4178_);
v___f_4180_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4180_, 0, v_numParams_4168_);
lean_closure_set(v___f_4180_, 1, v_a_4166_);
lean_closure_set(v___f_4180_, 2, v___x_4179_);
lean_closure_set(v___f_4180_, 3, v_compFields_4159_);
lean_closure_set(v___f_4180_, 4, v_name_4175_);
v___x_4181_ = 0;
v___x_4182_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_4177_, v___f_4180_, v___x_4181_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
return v___x_4182_;
}
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4195_; 
lean_dec_ref(v_compFields_4159_);
v_a_4188_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4190_ = v___x_4165_;
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4165_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object* v_declName_4196_, lean_object* v_compFields_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_){
_start:
{
lean_object* v_res_4203_; 
v_res_4203_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_declName_4196_, v_compFields_4197_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_);
lean_dec(v_a_4201_);
lean_dec_ref(v_a_4200_);
lean_dec(v_a_4199_);
lean_dec_ref(v_a_4198_);
return v_res_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object* v_00_u03b1_4204_, lean_object* v_name_4205_, uint8_t v_bi_4206_, lean_object* v_type_4207_, lean_object* v_k_4208_, uint8_t v_kind_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4205_, v_bi_4206_, v_type_4207_, v_k_4208_, v_kind_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4216_, lean_object* v_name_4217_, lean_object* v_bi_4218_, lean_object* v_type_4219_, lean_object* v_k_4220_, lean_object* v_kind_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
uint8_t v_bi_boxed_4227_; uint8_t v_kind_boxed_4228_; lean_object* v_res_4229_; 
v_bi_boxed_4227_ = lean_unbox(v_bi_4218_);
v_kind_boxed_4228_ = lean_unbox(v_kind_4221_);
v_res_4229_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(v_00_u03b1_4216_, v_name_4217_, v_bi_boxed_4227_, v_type_4219_, v_k_4220_, v_kind_boxed_4228_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object* v_00_u03b1_4230_, lean_object* v_name_4231_, lean_object* v_type_4232_, lean_object* v_k_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4231_, v_type_4232_, v_k_4233_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object* v_00_u03b1_4240_, lean_object* v_name_4241_, lean_object* v_type_4242_, lean_object* v_k_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_){
_start:
{
lean_object* v_res_4249_; 
v_res_4249_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(v_00_u03b1_4240_, v_name_4241_, v_type_4242_, v_k_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
return v_res_4249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object* v_as_4250_, size_t v_sz_4251_, size_t v_i_4252_, lean_object* v_b_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_a_4257_; uint8_t v___x_4261_; 
v___x_4261_ = lean_usize_dec_lt(v_i_4252_, v_sz_4251_);
if (v___x_4261_ == 0)
{
lean_object* v___x_4262_; 
v___x_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4262_, 0, v_b_4253_);
return v___x_4262_;
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4264_; lean_object* v_env_4265_; uint8_t v___x_4266_; 
v_a_4263_ = lean_array_uget_borrowed(v_as_4250_, v_i_4252_);
v___x_4264_ = lean_st_ref_get(v___y_4254_);
v_env_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc_ref(v_env_4265_);
lean_dec(v___x_4264_);
lean_inc(v_a_4263_);
v___x_4266_ = l_Lean_isExtern(v_env_4265_, v_a_4263_);
if (v___x_4266_ == 0)
{
lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4267_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_4263_);
v___x_4268_ = l_Lean_Name_append(v_a_4263_, v___x_4267_);
v___x_4269_ = lean_array_push(v_b_4253_, v___x_4268_);
v_a_4257_ = v___x_4269_;
goto v___jp_4256_;
}
else
{
v_a_4257_ = v_b_4253_;
goto v___jp_4256_;
}
}
v___jp_4256_:
{
size_t v___x_4258_; size_t v___x_4259_; 
v___x_4258_ = ((size_t)1ULL);
v___x_4259_ = lean_usize_add(v_i_4252_, v___x_4258_);
v_i_4252_ = v___x_4259_;
v_b_4253_ = v_a_4257_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object* v_as_4270_, lean_object* v_sz_4271_, lean_object* v_i_4272_, lean_object* v_b_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
size_t v_sz_boxed_4276_; size_t v_i_boxed_4277_; lean_object* v_res_4278_; 
v_sz_boxed_4276_ = lean_unbox_usize(v_sz_4271_);
lean_dec(v_sz_4271_);
v_i_boxed_4277_ = lean_unbox_usize(v_i_4272_);
lean_dec(v_i_4272_);
v_res_4278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4270_, v_sz_boxed_4276_, v_i_boxed_4277_, v_b_4273_, v___y_4274_);
lean_dec(v___y_4274_);
lean_dec_ref(v_as_4270_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object* v_as_x27_4279_, lean_object* v_b_4280_){
_start:
{
if (lean_obj_tag(v_as_x27_4279_) == 0)
{
lean_object* v___x_4282_; 
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v_b_4280_);
return v___x_4282_;
}
else
{
lean_object* v_head_4283_; lean_object* v_tail_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v_head_4283_ = lean_ctor_get(v_as_x27_4279_, 0);
v_tail_4284_ = lean_ctor_get(v_as_x27_4279_, 1);
v___x_4285_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_4283_);
v___x_4286_ = l_Lean_Name_append(v_head_4283_, v___x_4285_);
v___x_4287_ = lean_array_push(v_b_4280_, v___x_4286_);
v_as_x27_4279_ = v_tail_4284_;
v_b_4280_ = v___x_4287_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object* v_as_x27_4289_, lean_object* v_b_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4289_, v_b_4290_);
lean_dec(v_as_x27_4289_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object* v_as_4293_, size_t v_sz_4294_, size_t v_i_4295_, lean_object* v_b_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
uint8_t v___x_4302_; 
v___x_4302_ = lean_usize_dec_lt(v_i_4295_, v_sz_4294_);
if (v___x_4302_ == 0)
{
lean_object* v___x_4303_; 
v___x_4303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4303_, 0, v_b_4296_);
return v___x_4303_;
}
else
{
lean_object* v_a_4304_; lean_object* v_fst_4305_; lean_object* v_snd_4306_; lean_object* v___x_4307_; 
v_a_4304_ = lean_array_uget_borrowed(v_as_4293_, v_i_4295_);
v_fst_4305_ = lean_ctor_get(v_a_4304_, 0);
v_snd_4306_ = lean_ctor_get(v_a_4304_, 1);
lean_inc(v_fst_4305_);
v___x_4307_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_fst_4305_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
if (lean_obj_tag(v___x_4307_) == 0)
{
lean_object* v_a_4308_; lean_object* v_ctors_4309_; lean_object* v___x_4310_; 
v_a_4308_ = lean_ctor_get(v___x_4307_, 0);
lean_inc(v_a_4308_);
lean_dec_ref_known(v___x_4307_, 1);
v_ctors_4309_ = lean_ctor_get(v_a_4308_, 4);
lean_inc(v_ctors_4309_);
lean_dec(v_a_4308_);
v___x_4310_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_ctors_4309_, v_b_4296_);
lean_dec(v_ctors_4309_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; size_t v_sz_4312_; size_t v___x_4313_; lean_object* v___x_4314_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_a_4311_);
lean_dec_ref_known(v___x_4310_, 1);
v_sz_4312_ = lean_array_size(v_snd_4306_);
v___x_4313_ = ((size_t)0ULL);
v___x_4314_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_snd_4306_, v_sz_4312_, v___x_4313_, v_a_4311_, v___y_4300_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; size_t v___x_4316_; size_t v___x_4317_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
v___x_4316_ = ((size_t)1ULL);
v___x_4317_ = lean_usize_add(v_i_4295_, v___x_4316_);
v_i_4295_ = v___x_4317_;
v_b_4296_ = v_a_4315_;
goto _start;
}
else
{
return v___x_4314_;
}
}
else
{
return v___x_4310_;
}
}
else
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4326_; 
lean_dec_ref(v_b_4296_);
v_a_4319_ = lean_ctor_get(v___x_4307_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4307_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4321_ = v___x_4307_;
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v___x_4307_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4324_; 
if (v_isShared_4322_ == 0)
{
v___x_4324_ = v___x_4321_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_a_4319_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object* v_as_4327_, lean_object* v_sz_4328_, lean_object* v_i_4329_, lean_object* v_b_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
size_t v_sz_boxed_4336_; size_t v_i_boxed_4337_; lean_object* v_res_4338_; 
v_sz_boxed_4336_ = lean_unbox_usize(v_sz_4328_);
lean_dec(v_sz_4328_);
v_i_boxed_4337_ = lean_unbox_usize(v_i_4329_);
lean_dec(v_i_4329_);
v_res_4338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_as_4327_, v_sz_boxed_4336_, v_i_boxed_4337_, v_b_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec_ref(v_as_4327_);
return v_res_4338_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t v_suppressElabErrors_4346_, uint8_t v___y_4347_, lean_object* v_x_4348_){
_start:
{
if (lean_obj_tag(v_x_4348_) == 1)
{
lean_object* v_pre_4349_; 
v_pre_4349_ = lean_ctor_get(v_x_4348_, 0);
switch(lean_obj_tag(v_pre_4349_))
{
case 1:
{
lean_object* v_pre_4350_; 
v_pre_4350_ = lean_ctor_get(v_pre_4349_, 0);
switch(lean_obj_tag(v_pre_4350_))
{
case 0:
{
lean_object* v_str_4351_; lean_object* v_str_4352_; lean_object* v___x_4353_; uint8_t v___x_4354_; 
v_str_4351_ = lean_ctor_get(v_x_4348_, 1);
v_str_4352_ = lean_ctor_get(v_pre_4349_, 1);
v___x_4353_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_4354_ = lean_string_dec_eq(v_str_4352_, v___x_4353_);
if (v___x_4354_ == 0)
{
lean_object* v___x_4355_; uint8_t v___x_4356_; 
v___x_4355_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0));
v___x_4356_ = lean_string_dec_eq(v_str_4352_, v___x_4355_);
if (v___x_4356_ == 0)
{
return v___x_4356_;
}
else
{
lean_object* v___x_4357_; uint8_t v___x_4358_; 
v___x_4357_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1));
v___x_4358_ = lean_string_dec_eq(v_str_4351_, v___x_4357_);
if (v___x_4358_ == 0)
{
return v___x_4358_;
}
else
{
return v_suppressElabErrors_4346_;
}
}
}
else
{
lean_object* v___x_4359_; uint8_t v___x_4360_; 
v___x_4359_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2));
v___x_4360_ = lean_string_dec_eq(v_str_4351_, v___x_4359_);
if (v___x_4360_ == 0)
{
return v___x_4360_;
}
else
{
return v_suppressElabErrors_4346_;
}
}
}
case 1:
{
lean_object* v_pre_4361_; 
v_pre_4361_ = lean_ctor_get(v_pre_4350_, 0);
if (lean_obj_tag(v_pre_4361_) == 0)
{
lean_object* v_str_4362_; lean_object* v_str_4363_; lean_object* v_str_4364_; lean_object* v___x_4365_; uint8_t v___x_4366_; 
v_str_4362_ = lean_ctor_get(v_x_4348_, 1);
v_str_4363_ = lean_ctor_get(v_pre_4349_, 1);
v_str_4364_ = lean_ctor_get(v_pre_4350_, 1);
v___x_4365_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3));
v___x_4366_ = lean_string_dec_eq(v_str_4364_, v___x_4365_);
if (v___x_4366_ == 0)
{
return v___x_4366_;
}
else
{
lean_object* v___x_4367_; uint8_t v___x_4368_; 
v___x_4367_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4));
v___x_4368_ = lean_string_dec_eq(v_str_4363_, v___x_4367_);
if (v___x_4368_ == 0)
{
return v___x_4368_;
}
else
{
lean_object* v___x_4369_; uint8_t v___x_4370_; 
v___x_4369_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5));
v___x_4370_ = lean_string_dec_eq(v_str_4362_, v___x_4369_);
if (v___x_4370_ == 0)
{
return v___x_4370_;
}
else
{
return v_suppressElabErrors_4346_;
}
}
}
}
else
{
return v___y_4347_;
}
}
default: 
{
return v___y_4347_;
}
}
}
case 0:
{
lean_object* v_str_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; 
v_str_4371_ = lean_ctor_get(v_x_4348_, 1);
v___x_4372_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6));
v___x_4373_ = lean_string_dec_eq(v_str_4371_, v___x_4372_);
if (v___x_4373_ == 0)
{
return v___x_4373_;
}
else
{
return v_suppressElabErrors_4346_;
}
}
default: 
{
return v___y_4347_;
}
}
}
else
{
return v___y_4347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object* v_suppressElabErrors_4374_, lean_object* v___y_4375_, lean_object* v_x_4376_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4377_; uint8_t v___y_7489__boxed_4378_; uint8_t v_res_4379_; lean_object* v_r_4380_; 
v_suppressElabErrors_boxed_4377_ = lean_unbox(v_suppressElabErrors_4374_);
v___y_7489__boxed_4378_ = lean_unbox(v___y_4375_);
v_res_4379_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(v_suppressElabErrors_boxed_4377_, v___y_7489__boxed_4378_, v_x_4376_);
lean_dec(v_x_4376_);
v_r_4380_ = lean_box(v_res_4379_);
return v_r_4380_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object* v_opts_4381_, lean_object* v_opt_4382_){
_start:
{
lean_object* v_name_4383_; lean_object* v_defValue_4384_; lean_object* v_map_4385_; lean_object* v___x_4386_; 
v_name_4383_ = lean_ctor_get(v_opt_4382_, 0);
v_defValue_4384_ = lean_ctor_get(v_opt_4382_, 1);
v_map_4385_ = lean_ctor_get(v_opts_4381_, 0);
v___x_4386_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4385_, v_name_4383_);
if (lean_obj_tag(v___x_4386_) == 0)
{
uint8_t v___x_4387_; 
v___x_4387_ = lean_unbox(v_defValue_4384_);
return v___x_4387_;
}
else
{
lean_object* v_val_4388_; 
v_val_4388_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_val_4388_);
lean_dec_ref_known(v___x_4386_, 1);
if (lean_obj_tag(v_val_4388_) == 1)
{
uint8_t v_v_4389_; 
v_v_4389_ = lean_ctor_get_uint8(v_val_4388_, 0);
lean_dec_ref_known(v_val_4388_, 0);
return v_v_4389_;
}
else
{
uint8_t v___x_4390_; 
lean_dec(v_val_4388_);
v___x_4390_ = lean_unbox(v_defValue_4384_);
return v___x_4390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object* v_opts_4391_, lean_object* v_opt_4392_){
_start:
{
uint8_t v_res_4393_; lean_object* v_r_4394_; 
v_res_4393_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_opts_4391_, v_opt_4392_);
lean_dec_ref(v_opt_4392_);
lean_dec_ref(v_opts_4391_);
v_r_4394_ = lean_box(v_res_4393_);
return v_r_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object* v_ref_4396_, lean_object* v_msgData_4397_, uint8_t v_severity_4398_, uint8_t v_isSilent_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_){
_start:
{
lean_object* v___y_4406_; uint8_t v___y_4407_; lean_object* v___y_4408_; uint8_t v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v_currNamespace_4413_; lean_object* v_openDecls_4414_; lean_object* v___y_4415_; lean_object* v___y_4441_; lean_object* v___y_4442_; lean_object* v___y_4443_; uint8_t v___y_4444_; uint8_t v___y_4445_; lean_object* v___y_4446_; lean_object* v___y_4447_; uint8_t v___y_4448_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4468_; lean_object* v___y_4469_; lean_object* v___y_4470_; uint8_t v___y_4471_; uint8_t v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4474_; uint8_t v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; uint8_t v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; uint8_t v___y_4487_; lean_object* v___y_4488_; uint8_t v___y_4489_; uint8_t v___x_4494_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4500_; uint8_t v___y_4501_; lean_object* v___y_4502_; uint8_t v___y_4503_; uint8_t v___y_4504_; uint8_t v___y_4506_; uint8_t v___x_4524_; 
v___x_4494_ = 2;
v___x_4524_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4398_, v___x_4494_);
if (v___x_4524_ == 0)
{
v___y_4506_ = v___x_4524_;
goto v___jp_4505_;
}
else
{
uint8_t v___x_4525_; 
lean_inc_ref(v_msgData_4397_);
v___x_4525_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4397_);
v___y_4506_ = v___x_4525_;
goto v___jp_4505_;
}
v___jp_4405_:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v_env_4420_; lean_object* v_nextMacroScope_4421_; lean_object* v_ngen_4422_; lean_object* v_auxDeclNGen_4423_; lean_object* v_traceState_4424_; lean_object* v_cache_4425_; lean_object* v_messages_4426_; lean_object* v_infoState_4427_; lean_object* v_snapshotTasks_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4439_; 
lean_inc(v_openDecls_4414_);
lean_inc(v_currNamespace_4413_);
v___x_4416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4416_, 0, v_currNamespace_4413_);
lean_ctor_set(v___x_4416_, 1, v_openDecls_4414_);
v___x_4417_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
lean_ctor_set(v___x_4417_, 1, v___y_4408_);
lean_inc_ref(v___y_4406_);
lean_inc_ref(v___y_4410_);
v___x_4418_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4418_, 0, v___y_4410_);
lean_ctor_set(v___x_4418_, 1, v___y_4411_);
lean_ctor_set(v___x_4418_, 2, v___y_4412_);
lean_ctor_set(v___x_4418_, 3, v___y_4406_);
lean_ctor_set(v___x_4418_, 4, v___x_4417_);
lean_ctor_set_uint8(v___x_4418_, sizeof(void*)*5, v___y_4409_);
lean_ctor_set_uint8(v___x_4418_, sizeof(void*)*5 + 1, v___y_4407_);
lean_ctor_set_uint8(v___x_4418_, sizeof(void*)*5 + 2, v_isSilent_4399_);
v___x_4419_ = lean_st_ref_take(v___y_4415_);
v_env_4420_ = lean_ctor_get(v___x_4419_, 0);
v_nextMacroScope_4421_ = lean_ctor_get(v___x_4419_, 1);
v_ngen_4422_ = lean_ctor_get(v___x_4419_, 2);
v_auxDeclNGen_4423_ = lean_ctor_get(v___x_4419_, 3);
v_traceState_4424_ = lean_ctor_get(v___x_4419_, 4);
v_cache_4425_ = lean_ctor_get(v___x_4419_, 5);
v_messages_4426_ = lean_ctor_get(v___x_4419_, 6);
v_infoState_4427_ = lean_ctor_get(v___x_4419_, 7);
v_snapshotTasks_4428_ = lean_ctor_get(v___x_4419_, 8);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4430_ = v___x_4419_;
v_isShared_4431_ = v_isSharedCheck_4439_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_snapshotTasks_4428_);
lean_inc(v_infoState_4427_);
lean_inc(v_messages_4426_);
lean_inc(v_cache_4425_);
lean_inc(v_traceState_4424_);
lean_inc(v_auxDeclNGen_4423_);
lean_inc(v_ngen_4422_);
lean_inc(v_nextMacroScope_4421_);
lean_inc(v_env_4420_);
lean_dec(v___x_4419_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4439_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4435_; 
v___x_4432_ = lean_box(0);
v___x_4433_ = l_Lean_MessageLog_add(v___x_4418_, v_messages_4426_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 6, v___x_4433_);
v___x_4435_ = v___x_4430_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_env_4420_);
lean_ctor_set(v_reuseFailAlloc_4438_, 1, v_nextMacroScope_4421_);
lean_ctor_set(v_reuseFailAlloc_4438_, 2, v_ngen_4422_);
lean_ctor_set(v_reuseFailAlloc_4438_, 3, v_auxDeclNGen_4423_);
lean_ctor_set(v_reuseFailAlloc_4438_, 4, v_traceState_4424_);
lean_ctor_set(v_reuseFailAlloc_4438_, 5, v_cache_4425_);
lean_ctor_set(v_reuseFailAlloc_4438_, 6, v___x_4433_);
lean_ctor_set(v_reuseFailAlloc_4438_, 7, v_infoState_4427_);
lean_ctor_set(v_reuseFailAlloc_4438_, 8, v_snapshotTasks_4428_);
v___x_4435_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4436_ = lean_st_ref_put(v___y_4415_, v___x_4435_);
v___x_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4432_);
return v___x_4437_;
}
}
}
v___jp_4440_:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4466_; 
v___x_4451_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4397_);
v___x_4452_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v___x_4451_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_);
v_a_4453_ = lean_ctor_get(v___x_4452_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4452_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4455_ = v___x_4452_;
v_isShared_4456_ = v_isSharedCheck_4466_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4452_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4466_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
lean_inc_ref_n(v___y_4449_, 2);
v___x_4457_ = l_Lean_FileMap_toPosition(v___y_4449_, v___y_4446_);
lean_dec(v___y_4446_);
v___x_4458_ = l_Lean_FileMap_toPosition(v___y_4449_, v___y_4450_);
lean_dec(v___y_4450_);
v___x_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
v___x_4460_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0));
if (v___y_4448_ == 0)
{
lean_del_object(v___x_4455_);
lean_dec_ref(v___y_4441_);
v___y_4406_ = v___x_4460_;
v___y_4407_ = v___y_4444_;
v___y_4408_ = v_a_4453_;
v___y_4409_ = v___y_4445_;
v___y_4410_ = v___y_4447_;
v___y_4411_ = v___x_4457_;
v___y_4412_ = v___x_4459_;
v_currNamespace_4413_ = v___y_4442_;
v_openDecls_4414_ = v___y_4443_;
v___y_4415_ = v___y_4403_;
goto v___jp_4405_;
}
else
{
uint8_t v___x_4461_; 
lean_inc(v_a_4453_);
v___x_4461_ = l_Lean_MessageData_hasTag(v___y_4441_, v_a_4453_);
if (v___x_4461_ == 0)
{
lean_object* v___x_4462_; lean_object* v___x_4464_; 
lean_dec_ref_known(v___x_4459_, 1);
lean_dec_ref(v___x_4457_);
lean_dec(v_a_4453_);
v___x_4462_ = lean_box(0);
if (v_isShared_4456_ == 0)
{
lean_ctor_set(v___x_4455_, 0, v___x_4462_);
v___x_4464_ = v___x_4455_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v___x_4462_);
v___x_4464_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
return v___x_4464_;
}
}
else
{
lean_del_object(v___x_4455_);
v___y_4406_ = v___x_4460_;
v___y_4407_ = v___y_4444_;
v___y_4408_ = v_a_4453_;
v___y_4409_ = v___y_4445_;
v___y_4410_ = v___y_4447_;
v___y_4411_ = v___x_4457_;
v___y_4412_ = v___x_4459_;
v_currNamespace_4413_ = v___y_4442_;
v_openDecls_4414_ = v___y_4443_;
v___y_4415_ = v___y_4403_;
goto v___jp_4405_;
}
}
}
}
v___jp_4467_:
{
lean_object* v___x_4478_; 
v___x_4478_ = l_Lean_Syntax_getTailPos_x3f(v___y_4476_, v___y_4472_);
lean_dec(v___y_4476_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_inc(v___y_4477_);
v___y_4441_ = v___y_4469_;
v___y_4442_ = v___y_4468_;
v___y_4443_ = v___y_4470_;
v___y_4444_ = v___y_4471_;
v___y_4445_ = v___y_4472_;
v___y_4446_ = v___y_4477_;
v___y_4447_ = v___y_4473_;
v___y_4448_ = v___y_4475_;
v___y_4449_ = v___y_4474_;
v___y_4450_ = v___y_4477_;
goto v___jp_4440_;
}
else
{
lean_object* v_val_4479_; 
v_val_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_val_4479_);
lean_dec_ref_known(v___x_4478_, 1);
v___y_4441_ = v___y_4469_;
v___y_4442_ = v___y_4468_;
v___y_4443_ = v___y_4470_;
v___y_4444_ = v___y_4471_;
v___y_4445_ = v___y_4472_;
v___y_4446_ = v___y_4477_;
v___y_4447_ = v___y_4473_;
v___y_4448_ = v___y_4475_;
v___y_4449_ = v___y_4474_;
v___y_4450_ = v_val_4479_;
goto v___jp_4440_;
}
}
v___jp_4480_:
{
lean_object* v_ref_4490_; lean_object* v___x_4491_; 
v_ref_4490_ = l_Lean_replaceRef(v_ref_4396_, v___y_4486_);
v___x_4491_ = l_Lean_Syntax_getPos_x3f(v_ref_4490_, v___y_4484_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v___x_4492_; 
v___x_4492_ = lean_unsigned_to_nat(0u);
v___y_4468_ = v___y_4482_;
v___y_4469_ = v___y_4481_;
v___y_4470_ = v___y_4483_;
v___y_4471_ = v___y_4489_;
v___y_4472_ = v___y_4484_;
v___y_4473_ = v___y_4485_;
v___y_4474_ = v___y_4488_;
v___y_4475_ = v___y_4487_;
v___y_4476_ = v_ref_4490_;
v___y_4477_ = v___x_4492_;
goto v___jp_4467_;
}
else
{
lean_object* v_val_4493_; 
v_val_4493_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_val_4493_);
lean_dec_ref_known(v___x_4491_, 1);
v___y_4468_ = v___y_4482_;
v___y_4469_ = v___y_4481_;
v___y_4470_ = v___y_4483_;
v___y_4471_ = v___y_4489_;
v___y_4472_ = v___y_4484_;
v___y_4473_ = v___y_4485_;
v___y_4474_ = v___y_4488_;
v___y_4475_ = v___y_4487_;
v___y_4476_ = v_ref_4490_;
v___y_4477_ = v_val_4493_;
goto v___jp_4467_;
}
}
v___jp_4495_:
{
if (v___y_4504_ == 0)
{
v___y_4481_ = v___y_4498_;
v___y_4482_ = v___y_4497_;
v___y_4483_ = v___y_4499_;
v___y_4484_ = v___y_4501_;
v___y_4485_ = v___y_4496_;
v___y_4486_ = v___y_4502_;
v___y_4487_ = v___y_4503_;
v___y_4488_ = v___y_4500_;
v___y_4489_ = v_severity_4398_;
goto v___jp_4480_;
}
else
{
v___y_4481_ = v___y_4498_;
v___y_4482_ = v___y_4497_;
v___y_4483_ = v___y_4499_;
v___y_4484_ = v___y_4501_;
v___y_4485_ = v___y_4496_;
v___y_4486_ = v___y_4502_;
v___y_4487_ = v___y_4503_;
v___y_4488_ = v___y_4500_;
v___y_4489_ = v___x_4494_;
goto v___jp_4480_;
}
}
v___jp_4505_:
{
if (v___y_4506_ == 0)
{
lean_object* v_toCold_4507_; lean_object* v_ref_4508_; uint8_t v_suppressElabErrors_4509_; lean_object* v_fileName_4510_; lean_object* v_fileMap_4511_; lean_object* v_options_4512_; lean_object* v_currNamespace_4513_; lean_object* v_openDecls_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___f_4517_; uint8_t v___x_4518_; uint8_t v___x_4519_; 
v_toCold_4507_ = lean_ctor_get(v___y_4402_, 0);
v_ref_4508_ = lean_ctor_get(v___y_4402_, 2);
v_suppressElabErrors_4509_ = lean_ctor_get_uint8(v___y_4402_, sizeof(void*)*3 + 1);
v_fileName_4510_ = lean_ctor_get(v_toCold_4507_, 0);
v_fileMap_4511_ = lean_ctor_get(v_toCold_4507_, 1);
v_options_4512_ = lean_ctor_get(v_toCold_4507_, 2);
v_currNamespace_4513_ = lean_ctor_get(v_toCold_4507_, 4);
v_openDecls_4514_ = lean_ctor_get(v_toCold_4507_, 5);
v___x_4515_ = lean_box(v_suppressElabErrors_4509_);
v___x_4516_ = lean_box(v___y_4506_);
v___f_4517_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4517_, 0, v___x_4515_);
lean_closure_set(v___f_4517_, 1, v___x_4516_);
v___x_4518_ = 1;
v___x_4519_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4398_, v___x_4518_);
if (v___x_4519_ == 0)
{
v___y_4496_ = v_fileName_4510_;
v___y_4497_ = v_currNamespace_4513_;
v___y_4498_ = v___f_4517_;
v___y_4499_ = v_openDecls_4514_;
v___y_4500_ = v_fileMap_4511_;
v___y_4501_ = v___y_4506_;
v___y_4502_ = v_ref_4508_;
v___y_4503_ = v_suppressElabErrors_4509_;
v___y_4504_ = v___x_4519_;
goto v___jp_4495_;
}
else
{
lean_object* v___x_4520_; uint8_t v___x_4521_; 
v___x_4520_ = l_Lean_warningAsError;
v___x_4521_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_options_4512_, v___x_4520_);
v___y_4496_ = v_fileName_4510_;
v___y_4497_ = v_currNamespace_4513_;
v___y_4498_ = v___f_4517_;
v___y_4499_ = v_openDecls_4514_;
v___y_4500_ = v_fileMap_4511_;
v___y_4501_ = v___y_4506_;
v___y_4502_ = v_ref_4508_;
v___y_4503_ = v_suppressElabErrors_4509_;
v___y_4504_ = v___x_4521_;
goto v___jp_4495_;
}
}
else
{
lean_object* v___x_4522_; lean_object* v___x_4523_; 
lean_dec_ref(v_msgData_4397_);
v___x_4522_ = lean_box(0);
v___x_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4522_);
return v___x_4523_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_4526_, lean_object* v_msgData_4527_, lean_object* v_severity_4528_, lean_object* v_isSilent_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
uint8_t v_severity_boxed_4535_; uint8_t v_isSilent_boxed_4536_; lean_object* v_res_4537_; 
v_severity_boxed_4535_ = lean_unbox(v_severity_4528_);
v_isSilent_boxed_4536_ = lean_unbox(v_isSilent_4529_);
v_res_4537_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4526_, v_msgData_4527_, v_severity_boxed_4535_, v_isSilent_boxed_4536_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v_ref_4526_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object* v_msgData_4538_, uint8_t v_severity_4539_, uint8_t v_isSilent_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_){
_start:
{
lean_object* v_ref_4546_; lean_object* v___x_4547_; 
v_ref_4546_ = lean_ctor_get(v___y_4543_, 2);
v___x_4547_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4546_, v_msgData_4538_, v_severity_4539_, v_isSilent_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_);
return v___x_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object* v_msgData_4548_, lean_object* v_severity_4549_, lean_object* v_isSilent_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_){
_start:
{
uint8_t v_severity_boxed_4556_; uint8_t v_isSilent_boxed_4557_; lean_object* v_res_4558_; 
v_severity_boxed_4556_ = lean_unbox(v_severity_4549_);
v_isSilent_boxed_4557_ = lean_unbox(v_isSilent_4550_);
v_res_4558_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4548_, v_severity_boxed_4556_, v_isSilent_boxed_4557_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
lean_dec(v___y_4552_);
lean_dec_ref(v___y_4551_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object* v_msgData_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
uint8_t v___x_4565_; uint8_t v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = 2;
v___x_4566_ = 0;
v___x_4567_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4559_, v___x_4565_, v___x_4566_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object* v_msgData_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v_msgData_4568_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_);
lean_dec(v___y_4572_);
lean_dec_ref(v___y_4571_);
lean_dec(v___y_4570_);
lean_dec_ref(v___y_4569_);
return v_res_4574_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0));
v___x_4577_ = l_Lean_stringToMessageData(v___x_4576_);
return v___x_4577_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; 
v___x_4579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2));
v___x_4580_ = l_Lean_stringToMessageData(v___x_4579_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object* v_as_4581_, size_t v_sz_4582_, size_t v_i_4583_, lean_object* v_b_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v_a_4591_; uint8_t v___x_4595_; 
v___x_4595_ = lean_usize_dec_lt(v_i_4583_, v_sz_4582_);
if (v___x_4595_ == 0)
{
lean_object* v___x_4596_; 
v___x_4596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4596_, 0, v_b_4584_);
return v___x_4596_;
}
else
{
lean_object* v___x_4597_; lean_object* v_a_4598_; lean_object* v___x_4599_; lean_object* v_env_4600_; lean_object* v___x_4601_; uint8_t v___x_4602_; 
v___x_4597_ = lean_box(0);
v_a_4598_ = lean_array_uget_borrowed(v_as_4581_, v_i_4583_);
v___x_4599_ = lean_st_ref_get(v___y_4588_);
v_env_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc_ref(v_env_4600_);
lean_dec(v___x_4599_);
v___x_4601_ = l_Lean_Elab_ComputedFields_computedFieldAttr;
lean_inc(v_a_4598_);
v___x_4602_ = l_Lean_TagAttribute_hasTag(v___x_4601_, v_env_4600_, v_a_4598_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4603_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1);
lean_inc(v_a_4598_);
v___x_4604_ = l_Lean_MessageData_ofName(v_a_4598_);
v___x_4605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4603_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3);
v___x_4607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4607_, 0, v___x_4605_);
lean_ctor_set(v___x_4607_, 1, v___x_4606_);
v___x_4608_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v___x_4607_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
if (lean_obj_tag(v___x_4608_) == 0)
{
lean_dec_ref_known(v___x_4608_, 1);
v_a_4591_ = v___x_4597_;
goto v___jp_4590_;
}
else
{
return v___x_4608_;
}
}
else
{
v_a_4591_ = v___x_4597_;
goto v___jp_4590_;
}
}
v___jp_4590_:
{
size_t v___x_4592_; size_t v___x_4593_; 
v___x_4592_ = ((size_t)1ULL);
v___x_4593_ = lean_usize_add(v_i_4583_, v___x_4592_);
v_i_4583_ = v___x_4593_;
v_b_4584_ = v_a_4591_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object* v_as_4609_, lean_object* v_sz_4610_, lean_object* v_i_4611_, lean_object* v_b_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
size_t v_sz_boxed_4618_; size_t v_i_boxed_4619_; lean_object* v_res_4620_; 
v_sz_boxed_4618_ = lean_unbox_usize(v_sz_4610_);
lean_dec(v_sz_4610_);
v_i_boxed_4619_ = lean_unbox_usize(v_i_4611_);
lean_dec(v_i_4611_);
v_res_4620_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_as_4609_, v_sz_boxed_4618_, v_i_boxed_4619_, v_b_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec_ref(v_as_4609_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object* v_as_4621_, size_t v_sz_4622_, size_t v_i_4623_, lean_object* v_b_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
uint8_t v___x_4630_; 
v___x_4630_ = lean_usize_dec_lt(v_i_4623_, v_sz_4622_);
if (v___x_4630_ == 0)
{
lean_object* v___x_4631_; 
v___x_4631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4631_, 0, v_b_4624_);
return v___x_4631_;
}
else
{
lean_object* v_a_4632_; lean_object* v_fst_4633_; lean_object* v_snd_4634_; lean_object* v___x_4635_; size_t v_sz_4636_; size_t v___x_4637_; lean_object* v___x_4638_; 
v_a_4632_ = lean_array_uget_borrowed(v_as_4621_, v_i_4623_);
v_fst_4633_ = lean_ctor_get(v_a_4632_, 0);
v_snd_4634_ = lean_ctor_get(v_a_4632_, 1);
v___x_4635_ = lean_box(0);
v_sz_4636_ = lean_array_size(v_snd_4634_);
v___x_4637_ = ((size_t)0ULL);
v___x_4638_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_snd_4634_, v_sz_4636_, v___x_4637_, v___x_4635_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_);
if (lean_obj_tag(v___x_4638_) == 0)
{
lean_object* v___x_4639_; 
lean_dec_ref_known(v___x_4638_, 1);
lean_inc(v_snd_4634_);
lean_inc(v_fst_4633_);
v___x_4639_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_fst_4633_, v_snd_4634_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_);
if (lean_obj_tag(v___x_4639_) == 0)
{
size_t v___x_4640_; size_t v___x_4641_; 
lean_dec_ref_known(v___x_4639_, 1);
v___x_4640_ = ((size_t)1ULL);
v___x_4641_ = lean_usize_add(v_i_4623_, v___x_4640_);
v_i_4623_ = v___x_4641_;
v_b_4624_ = v___x_4635_;
goto _start;
}
else
{
return v___x_4639_;
}
}
else
{
return v___x_4638_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object* v_as_4643_, lean_object* v_sz_4644_, lean_object* v_i_4645_, lean_object* v_b_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
size_t v_sz_boxed_4652_; size_t v_i_boxed_4653_; lean_object* v_res_4654_; 
v_sz_boxed_4652_ = lean_unbox_usize(v_sz_4644_);
lean_dec(v_sz_4644_);
v_i_boxed_4653_ = lean_unbox_usize(v_i_4645_);
lean_dec(v_i_4645_);
v_res_4654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_as_4643_, v_sz_boxed_4652_, v_i_boxed_4653_, v_b_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec_ref(v_as_4643_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t v_sz_4655_, size_t v_i_4656_, lean_object* v_bs_4657_){
_start:
{
uint8_t v___x_4658_; 
v___x_4658_ = lean_usize_dec_lt(v_i_4656_, v_sz_4655_);
if (v___x_4658_ == 0)
{
lean_object* v___x_4659_; 
v___x_4659_ = l_unsafeCast___redArg(v_bs_4657_);
lean_dec_ref(v_bs_4657_);
return v___x_4659_;
}
else
{
lean_object* v_v_4660_; lean_object* v___x_4661_; lean_object* v_fst_4662_; lean_object* v___x_4663_; lean_object* v_bs_x27_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; size_t v___x_4668_; size_t v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v_v_4660_ = lean_array_uget_borrowed(v_bs_4657_, v_i_4656_);
v___x_4661_ = l_unsafeCast___redArg(v_v_4660_);
v_fst_4662_ = lean_ctor_get(v___x_4661_, 0);
lean_inc(v_fst_4662_);
lean_dec(v___x_4661_);
v___x_4663_ = lean_unsigned_to_nat(0u);
v_bs_x27_4664_ = lean_array_uset(v_bs_4657_, v_i_4656_, v___x_4663_);
v___x_4665_ = l_Lean_mkCasesOnName(v_fst_4662_);
v___x_4666_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
v___x_4667_ = l_Lean_Name_append(v___x_4665_, v___x_4666_);
v___x_4668_ = ((size_t)1ULL);
v___x_4669_ = lean_usize_add(v_i_4656_, v___x_4668_);
v___x_4670_ = l_unsafeCast___redArg(v___x_4667_);
lean_dec(v___x_4667_);
v___x_4671_ = lean_array_uset(v_bs_x27_4664_, v_i_4656_, v___x_4670_);
v_i_4656_ = v___x_4669_;
v_bs_4657_ = v___x_4671_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object* v_sz_4673_, lean_object* v_i_4674_, lean_object* v_bs_4675_){
_start:
{
size_t v_sz_boxed_4676_; size_t v_i_boxed_4677_; lean_object* v_res_4678_; 
v_sz_boxed_4676_ = lean_unbox_usize(v_sz_4673_);
lean_dec(v_sz_4673_);
v_i_boxed_4677_ = lean_unbox_usize(v_i_4674_);
lean_dec(v_i_4674_);
v_res_4678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_boxed_4676_, v_i_boxed_4677_, v_bs_4675_);
return v_res_4678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object* v_computedFields_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_){
_start:
{
lean_object* v___x_4687_; size_t v_sz_4688_; size_t v___x_4689_; lean_object* v___x_4690_; 
v___x_4687_ = lean_box(0);
v_sz_4688_ = lean_array_size(v_computedFields_4681_);
v___x_4689_ = ((size_t)0ULL);
v___x_4690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_computedFields_4681_, v_sz_4688_, v___x_4689_, v___x_4687_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_);
if (lean_obj_tag(v___x_4690_) == 0)
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; uint8_t v___x_4694_; lean_object* v___x_4695_; 
lean_dec_ref_known(v___x_4690_, 1);
v___x_4691_ = l_unsafeCast___redArg(v_computedFields_4681_);
v___x_4692_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_4688_, v___x_4689_, v___x_4691_);
v___x_4693_ = l_unsafeCast___redArg(v___x_4692_);
lean_dec_ref(v___x_4692_);
v___x_4694_ = 1;
v___x_4695_ = l_Lean_compileDecls(v___x_4693_, v___x_4694_, v_a_4684_, v_a_4685_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v___x_4696_; lean_object* v___x_4697_; 
lean_dec_ref_known(v___x_4695_, 1);
v___x_4696_ = ((lean_object*)(l_Lean_Elab_ComputedFields_setComputedFields___closed__0));
v___x_4697_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_computedFields_4681_, v_sz_4688_, v___x_4689_, v___x_4696_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_);
if (lean_obj_tag(v___x_4697_) == 0)
{
lean_object* v_a_4698_; lean_object* v___x_4699_; 
v_a_4698_ = lean_ctor_get(v___x_4697_, 0);
lean_inc(v_a_4698_);
lean_dec_ref_known(v___x_4697_, 1);
v___x_4699_ = l_Lean_compileDecls(v_a_4698_, v___x_4694_, v_a_4684_, v_a_4685_);
return v___x_4699_;
}
else
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4707_; 
v_a_4700_ = lean_ctor_get(v___x_4697_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4702_ = v___x_4697_;
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v___x_4697_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4705_; 
if (v_isShared_4703_ == 0)
{
v___x_4705_ = v___x_4702_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_a_4700_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
else
{
return v___x_4695_;
}
}
else
{
return v___x_4690_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object* v_computedFields_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_){
_start:
{
lean_object* v_res_4714_; 
v_res_4714_ = l_Lean_Elab_ComputedFields_setComputedFields(v_computedFields_4708_, v_a_4709_, v_a_4710_, v_a_4711_, v_a_4712_);
lean_dec(v_a_4712_);
lean_dec_ref(v_a_4711_);
lean_dec(v_a_4710_);
lean_dec_ref(v_a_4709_);
lean_dec_ref(v_computedFields_4708_);
return v_res_4714_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object* v_as_4715_, lean_object* v_as_x27_4716_, lean_object* v_b_4717_, lean_object* v_a_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v___x_4724_; 
v___x_4724_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4716_, v_b_4717_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object* v_as_4725_, lean_object* v_as_x27_4726_, lean_object* v_b_4727_, lean_object* v_a_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_){
_start:
{
lean_object* v_res_4734_; 
v_res_4734_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(v_as_4725_, v_as_x27_4726_, v_b_4727_, v_a_4728_, v___y_4729_, v___y_4730_, v___y_4731_, v___y_4732_);
lean_dec(v___y_4732_);
lean_dec_ref(v___y_4731_);
lean_dec(v___y_4730_);
lean_dec_ref(v___y_4729_);
lean_dec(v_as_x27_4726_);
lean_dec(v_as_4725_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object* v_as_4735_, size_t v_sz_4736_, size_t v_i_4737_, lean_object* v_b_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_){
_start:
{
lean_object* v___x_4744_; 
v___x_4744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4735_, v_sz_4736_, v_i_4737_, v_b_4738_, v___y_4742_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object* v_as_4745_, lean_object* v_sz_4746_, lean_object* v_i_4747_, lean_object* v_b_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_){
_start:
{
size_t v_sz_boxed_4754_; size_t v_i_boxed_4755_; lean_object* v_res_4756_; 
v_sz_boxed_4754_ = lean_unbox_usize(v_sz_4746_);
lean_dec(v_sz_4746_);
v_i_boxed_4755_ = lean_unbox_usize(v_i_4747_);
lean_dec(v_i_4747_);
v_res_4756_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(v_as_4745_, v_sz_boxed_4754_, v_i_boxed_4755_, v_b_4748_, v___y_4749_, v___y_4750_, v___y_4751_, v___y_4752_);
lean_dec(v___y_4752_);
lean_dec_ref(v___y_4751_);
lean_dec(v___y_4750_);
lean_dec_ref(v___y_4749_);
lean_dec_ref(v_as_4745_);
return v_res_4756_;
}
}
lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Constructions_CasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_ComputedFields_computedFieldAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_ComputedFields_computedFieldAttr);
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Constructions_CasesOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Constructions_CasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ComputedFields(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ComputedFields(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ComputedFields(builtin);
}
#ifdef __cplusplus
}
#endif

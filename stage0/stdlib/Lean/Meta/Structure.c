// Lean compiler output
// Module: Lean.Meta.Structure
// Imports: public import Lean.AddDecl public import Lean.Meta.AppBuilder import Lean.Structure import Lean.Meta.Transform
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_isOutParam(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getStructureName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getStructureName___closed__0 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__1;
static const lean_string_object l_Lean_Meta_getStructureName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not a structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__2 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__3;
static const lean_string_object l_Lean_Meta_getStructureName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__4 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to generate projection `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`, not enough constructor fields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` for the 'Prop'-valued type `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, field must be a proof, but it has type"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, too many structure parameter overrides"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkProjections___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "projection generation failed, `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` is an ill-formed inductive datatype"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "cannot generate projections for `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`, does not have exactly one constructor"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__3;
static const lean_array_object l_Lean_Meta_mkProjections___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkProjections___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_etaStructReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_etaStructReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_etaStructReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaStructReduce___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_etaStructReduce___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Structure"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.instantiateStructDefaultValueFn\?"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: us.length == cinfo.levelParams.length\n  "};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 2);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__0));
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__2));
v___x_53_ = l_Lean_stringToMessageData(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__5(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__4));
v___x_56_ = l_Lean_stringToMessageData(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object* v_struct_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Expr_getAppFn(v_struct_57_);
if (lean_obj_tag(v___x_63_) == 4)
{
lean_object* v_declName_64_; lean_object* v___x_65_; lean_object* v_env_66_; uint8_t v___x_67_; 
v_declName_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc_n(v_declName_64_, 2);
lean_dec_ref_known(v___x_63_, 2);
v___x_65_ = lean_st_ref_get(v_a_61_);
v_env_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_ref(v_env_66_);
lean_dec(v___x_65_);
v___x_67_ = l_Lean_isStructure(v_env_66_, v_declName_64_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v___x_68_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_69_ = l_Lean_MessageData_ofConstName(v_declName_64_, v___x_67_);
v___x_70_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__3, &l_Lean_Meta_getStructureName___closed__3_once, _init_l_Lean_Meta_getStructureName___closed__3);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_72_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_declName_64_);
return v___x_82_;
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec_ref(v___x_63_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__5, &l_Lean_Meta_getStructureName___closed__5_once, _init_l_Lean_Meta_getStructureName___closed__5);
v___x_84_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_83_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object* v_struct_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_Meta_getStructureName(v_struct_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
lean_dec_ref(v_struct_85_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_msg_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(v_00_u03b1_100_, v_msg_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object* v_name_108_, lean_object* v_levelParams_109_, lean_object* v_type_110_, lean_object* v_value_111_, lean_object* v_hints_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; uint8_t v___y_117_; uint8_t v___y_124_; lean_object* v_env_127_; uint8_t v___x_128_; 
v___x_115_ = lean_st_ref_get(v___y_113_);
v_env_127_ = lean_ctor_get(v___x_115_, 0);
lean_inc_ref_n(v_env_127_, 2);
lean_dec(v___x_115_);
v___x_128_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_type_110_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_value_111_);
v___y_124_ = v___x_129_;
goto v___jp_123_;
}
else
{
lean_dec_ref(v_env_127_);
v___y_124_ = v___x_128_;
goto v___jp_123_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_inc(v_name_108_);
v___x_118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_118_, 0, v_name_108_);
lean_ctor_set(v___x_118_, 1, v_levelParams_109_);
lean_ctor_set(v___x_118_, 2, v_type_110_);
v___x_119_ = lean_box(0);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v_name_108_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v_value_111_);
lean_ctor_set(v___x_121_, 2, v_hints_112_);
lean_ctor_set(v___x_121_, 3, v___x_120_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*4, v___y_117_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
return v___x_122_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
uint8_t v___x_125_; 
v___x_125_ = 1;
v___y_117_ = v___x_125_;
goto v___jp_116_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
v___y_117_ = v___x_126_;
goto v___jp_116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object* v_name_130_, lean_object* v_levelParams_131_, lean_object* v_type_132_, lean_object* v_value_133_, lean_object* v_hints_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_130_, v_levelParams_131_, v_type_132_, v_value_133_, v_hints_134_, v___y_135_);
lean_dec(v___y_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object* v_name_138_, lean_object* v_levelParams_139_, lean_object* v_type_140_, lean_object* v_value_141_, lean_object* v_hints_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_138_, v_levelParams_139_, v_type_140_, v_value_141_, v_hints_142_, v___y_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object* v_name_149_, lean_object* v_levelParams_150_, lean_object* v_type_151_, lean_object* v_value_152_, lean_object* v_hints_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(v_name_149_, v_levelParams_150_, v_type_151_, v_value_152_, v_hints_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object* v_k_160_, lean_object* v_b_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
v___x_167_ = lean_apply_6(v_k_160_, v_b_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object* v_k_168_, lean_object* v_b_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(v_k_168_, v_b_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object* v_name_176_, uint8_t v_bi_177_, lean_object* v_type_178_, lean_object* v_k_179_, uint8_t v_kind_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_186_, 0, v_k_179_);
v___x_187_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_176_, v_bi_177_, v_type_178_, v___f_186_, v_kind_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_187_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_187_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object* v_name_204_, lean_object* v_bi_205_, lean_object* v_type_206_, lean_object* v_k_207_, lean_object* v_kind_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
uint8_t v_bi_boxed_214_; uint8_t v_kind_boxed_215_; lean_object* v_res_216_; 
v_bi_boxed_214_ = lean_unbox(v_bi_205_);
v_kind_boxed_215_ = lean_unbox(v_kind_208_);
v_res_216_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_204_, v_bi_boxed_214_, v_type_206_, v_k_207_, v_kind_boxed_215_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object* v_00_u03b1_217_, lean_object* v_name_218_, uint8_t v_bi_219_, lean_object* v_type_220_, lean_object* v_k_221_, uint8_t v_kind_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_218_, v_bi_219_, v_type_220_, v_k_221_, v_kind_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object* v_00_u03b1_229_, lean_object* v_name_230_, lean_object* v_bi_231_, lean_object* v_type_232_, lean_object* v_k_233_, lean_object* v_kind_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v_bi_boxed_240_; uint8_t v_kind_boxed_241_; lean_object* v_res_242_; 
v_bi_boxed_240_ = lean_unbox(v_bi_231_);
v_kind_boxed_241_ = lean_unbox(v_kind_234_);
v_res_242_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(v_00_u03b1_229_, v_name_230_, v_bi_boxed_240_, v_type_232_, v_k_233_, v_kind_boxed_241_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object* v_k_243_, lean_object* v_b_244_, lean_object* v_c_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v___x_251_; 
lean_inc(v___y_249_);
lean_inc_ref(v___y_248_);
lean_inc(v___y_247_);
lean_inc_ref(v___y_246_);
v___x_251_ = lean_apply_7(v_k_243_, v_b_244_, v_c_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, lean_box(0));
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object* v_k_252_, lean_object* v_b_253_, lean_object* v_c_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(v_k_252_, v_b_253_, v_c_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object* v_type_261_, lean_object* v_maxFVars_x3f_262_, lean_object* v_k_263_, uint8_t v_cleanupAnnotations_264_, uint8_t v_whnfType_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___f_271_; lean_object* v___x_272_; 
v___f_271_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_271_, 0, v_k_263_);
v___x_272_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_261_, v_maxFVars_x3f_262_, v___f_271_, v_cleanupAnnotations_264_, v_whnfType_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_272_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_272_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
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
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object* v_type_289_, lean_object* v_maxFVars_x3f_290_, lean_object* v_k_291_, lean_object* v_cleanupAnnotations_292_, lean_object* v_whnfType_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_299_; uint8_t v_whnfType_boxed_300_; lean_object* v_res_301_; 
v_cleanupAnnotations_boxed_299_ = lean_unbox(v_cleanupAnnotations_292_);
v_whnfType_boxed_300_ = lean_unbox(v_whnfType_293_);
v_res_301_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_289_, v_maxFVars_x3f_290_, v_k_291_, v_cleanupAnnotations_boxed_299_, v_whnfType_boxed_300_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object* v_00_u03b1_302_, lean_object* v_type_303_, lean_object* v_maxFVars_x3f_304_, lean_object* v_k_305_, uint8_t v_cleanupAnnotations_306_, uint8_t v_whnfType_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_303_, v_maxFVars_x3f_304_, v_k_305_, v_cleanupAnnotations_306_, v_whnfType_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object* v_00_u03b1_314_, lean_object* v_type_315_, lean_object* v_maxFVars_x3f_316_, lean_object* v_k_317_, lean_object* v_cleanupAnnotations_318_, lean_object* v_whnfType_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_325_; uint8_t v_whnfType_boxed_326_; lean_object* v_res_327_; 
v_cleanupAnnotations_boxed_325_ = lean_unbox(v_cleanupAnnotations_318_);
v_whnfType_boxed_326_ = lean_unbox(v_whnfType_319_);
v_res_327_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(v_00_u03b1_314_, v_type_315_, v_maxFVars_x3f_316_, v_k_317_, v_cleanupAnnotations_boxed_325_, v_whnfType_boxed_326_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object* v_lctx_328_, lean_object* v_localInsts_329_, lean_object* v_x_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_328_, v_localInsts_329_, v_x_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
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
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object* v_lctx_353_, lean_object* v_localInsts_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_353_, v_localInsts_354_, v_x_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object* v_00_u03b1_362_, lean_object* v_lctx_363_, lean_object* v_localInsts_364_, lean_object* v_x_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_363_, v_localInsts_364_, v_x_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object* v_00_u03b1_372_, lean_object* v_lctx_373_, lean_object* v_localInsts_374_, lean_object* v_x_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(v_00_u03b1_372_, v_lctx_373_, v_localInsts_374_, v_x_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object* v_ref_382_, lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_toCold_389_; lean_object* v_currRecDepth_390_; lean_object* v_ref_391_; uint8_t v_diag_392_; uint8_t v_suppressElabErrors_393_; lean_object* v_ref_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_toCold_389_ = lean_ctor_get(v___y_386_, 0);
v_currRecDepth_390_ = lean_ctor_get(v___y_386_, 1);
v_ref_391_ = lean_ctor_get(v___y_386_, 2);
v_diag_392_ = lean_ctor_get_uint8(v___y_386_, sizeof(void*)*3);
v_suppressElabErrors_393_ = lean_ctor_get_uint8(v___y_386_, sizeof(void*)*3 + 1);
v_ref_394_ = l_Lean_replaceRef(v_ref_382_, v_ref_391_);
lean_inc(v_currRecDepth_390_);
lean_inc_ref(v_toCold_389_);
v___x_395_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_395_, 0, v_toCold_389_);
lean_ctor_set(v___x_395_, 1, v_currRecDepth_390_);
lean_ctor_set(v___x_395_, 2, v_ref_394_);
lean_ctor_set_uint8(v___x_395_, sizeof(void*)*3, v_diag_392_);
lean_ctor_set_uint8(v___x_395_, sizeof(void*)*3 + 1, v_suppressElabErrors_393_);
v___x_396_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_383_, v___y_384_, v___y_385_, v___x_395_, v___y_387_);
lean_dec_ref_known(v___x_395_, 3);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object* v_ref_397_, lean_object* v_msg_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_397_, v_msg_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v_ref_397_);
return v_res_404_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0));
v___x_407_ = l_Lean_stringToMessageData(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4));
v___x_413_ = l_Lean_stringToMessageData(v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t v___x_414_, lean_object* v_projName_415_, lean_object* v_n_416_, lean_object* v_ref_417_, lean_object* v___f_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
if (v___x_414_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_424_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
v___x_425_ = l_Lean_MessageData_ofName(v_projName_415_);
v___x_426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = l_Lean_MessageData_ofConstName(v_n_416_, v___x_414_);
v___x_430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_417_, v___x_432_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
v___x_435_ = lean_apply_6(v___f_418_, v_a_434_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, lean_box(0));
return v___x_435_;
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___f_418_);
v_a_436_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_433_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_433_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v___x_444_; lean_object* v___x_445_; 
lean_dec(v_n_416_);
lean_dec(v_projName_415_);
v___x_444_ = lean_box(0);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
v___x_445_ = lean_apply_6(v___f_418_, v___x_444_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, lean_box(0));
return v___x_445_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object* v___x_446_, lean_object* v_projName_447_, lean_object* v_n_448_, lean_object* v_ref_449_, lean_object* v___f_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
uint8_t v___x_16933__boxed_456_; lean_object* v_res_457_; 
v___x_16933__boxed_456_ = lean_unbox(v___x_446_);
v_res_457_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(v___x_16933__boxed_456_, v_projName_447_, v_n_448_, v_ref_449_, v___f_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v_ref_449_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_box(0);
v___x_459_ = l_unsafeCast___redArg(v___x_458_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_460_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
v___x_466_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
lean_ctor_set(v___x_466_, 2, v___x_465_);
lean_ctor_set(v___x_466_, 3, v___x_465_);
lean_ctor_set(v___x_466_, 4, v___x_465_);
lean_ctor_set(v___x_466_, 5, v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object* v_declName_467_, uint8_t v_s_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v_env_473_; lean_object* v_nextMacroScope_474_; lean_object* v_ngen_475_; lean_object* v_auxDeclNGen_476_; lean_object* v_traceState_477_; lean_object* v_messages_478_; lean_object* v_infoState_479_; lean_object* v_snapshotTasks_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_509_; 
v___x_472_ = lean_st_ref_take(v___y_470_);
v_env_473_ = lean_ctor_get(v___x_472_, 0);
v_nextMacroScope_474_ = lean_ctor_get(v___x_472_, 1);
v_ngen_475_ = lean_ctor_get(v___x_472_, 2);
v_auxDeclNGen_476_ = lean_ctor_get(v___x_472_, 3);
v_traceState_477_ = lean_ctor_get(v___x_472_, 4);
v_messages_478_ = lean_ctor_get(v___x_472_, 6);
v_infoState_479_ = lean_ctor_get(v___x_472_, 7);
v_snapshotTasks_480_ = lean_ctor_get(v___x_472_, 8);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v___x_472_, 5);
lean_dec(v_unused_510_);
v___x_482_ = v___x_472_;
v_isShared_483_ = v_isSharedCheck_509_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_snapshotTasks_480_);
lean_inc(v_infoState_479_);
lean_inc(v_messages_478_);
lean_inc(v_traceState_477_);
lean_inc(v_auxDeclNGen_476_);
lean_inc(v_ngen_475_);
lean_inc(v_nextMacroScope_474_);
lean_inc(v_env_473_);
lean_dec(v___x_472_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_509_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_484_ = 0;
v___x_485_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0);
v___x_486_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_473_, v_declName_467_, v_s_468_, v___x_484_, v___x_485_);
v___x_487_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 5, v___x_487_);
lean_ctor_set(v___x_482_, 0, v___x_486_);
v___x_489_ = v___x_482_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_nextMacroScope_474_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_ngen_475_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_auxDeclNGen_476_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_traceState_477_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_messages_478_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v_infoState_479_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_snapshotTasks_480_);
v___x_489_ = v_reuseFailAlloc_508_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_mctx_492_; lean_object* v_zetaDeltaFVarIds_493_; lean_object* v_postponed_494_; lean_object* v_diag_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_506_; 
v___x_490_ = lean_st_ref_put(v___y_470_, v___x_489_);
v___x_491_ = lean_st_ref_take(v___y_469_);
v_mctx_492_ = lean_ctor_get(v___x_491_, 0);
v_zetaDeltaFVarIds_493_ = lean_ctor_get(v___x_491_, 2);
v_postponed_494_ = lean_ctor_get(v___x_491_, 3);
v_diag_495_ = lean_ctor_get(v___x_491_, 4);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v___x_491_, 1);
lean_dec(v_unused_507_);
v___x_497_ = v___x_491_;
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_diag_495_);
lean_inc(v_postponed_494_);
lean_inc(v_zetaDeltaFVarIds_493_);
lean_inc(v_mctx_492_);
lean_dec(v___x_491_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_502_; 
v___x_499_ = lean_box(0);
v___x_500_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_500_);
v___x_502_ = v___x_497_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_mctx_492_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_zetaDeltaFVarIds_493_);
lean_ctor_set(v_reuseFailAlloc_505_, 3, v_postponed_494_);
lean_ctor_set(v_reuseFailAlloc_505_, 4, v_diag_495_);
v___x_502_ = v_reuseFailAlloc_505_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_st_ref_put(v___y_469_, v___x_502_);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_499_);
return v___x_504_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object* v_declName_511_, lean_object* v_s_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
uint8_t v_s_boxed_516_; lean_object* v_res_517_; 
v_s_boxed_516_ = lean_unbox(v_s_512_);
v_res_517_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_511_, v_s_boxed_516_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec(v___y_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object* v_declName_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
uint8_t v___x_524_; lean_object* v___x_525_; 
v___x_524_ = 0;
v___x_525_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_518_, v___x_524_, v___y_520_, v___y_522_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object* v_declName_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_declName_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
return v_res_532_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0));
v___x_535_ = l_Lean_stringToMessageData(v___x_534_);
return v___x_535_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2));
v___x_538_ = l_Lean_stringToMessageData(v___x_537_);
return v___x_538_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4));
v___x_541_ = l_Lean_stringToMessageData(v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object* v___x_542_, lean_object* v_projName_543_, lean_object* v___x_544_, lean_object* v_a_545_, uint8_t v_instImplicit_546_, lean_object* v___x_547_, lean_object* v_params_548_, lean_object* v_self_549_, lean_object* v_b_550_, uint8_t v___x_551_, lean_object* v_a_552_, lean_object* v___x_553_, lean_object* v_paramInfoOverrides_554_, lean_object* v_n_555_, lean_object* v_ref_556_, lean_object* v___x_557_, uint8_t v_a_558_, lean_object* v_____r_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_611_; lean_object* v___y_612_; lean_object* v___y_613_; lean_object* v___y_623_; lean_object* v___y_624_; uint8_t v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; uint8_t v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_717_ = l_List_lengthTR___redArg(v_paramInfoOverrides_554_);
v___x_718_ = lean_array_get_size(v_params_548_);
v___x_719_ = lean_nat_dec_le(v___x_717_, v___x_718_);
lean_dec(v___x_717_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_720_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_543_);
v___x_721_ = l_Lean_MessageData_ofName(v_projName_543_);
v___x_722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_722_);
lean_ctor_set(v___x_724_, 1, v___x_723_);
lean_inc(v_n_555_);
v___x_725_ = l_Lean_MessageData_ofConstName(v_n_555_, v___x_719_);
v___x_726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5);
v___x_728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_726_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_556_, v___x_728_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_dec_ref_known(v___x_729_, 1);
goto v___jp_678_;
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec(v___x_557_);
lean_dec(v_n_555_);
lean_dec_ref(v_a_552_);
lean_dec_ref(v_self_549_);
lean_dec(v___x_547_);
lean_dec(v_a_545_);
lean_dec(v___x_544_);
lean_dec(v_projName_543_);
lean_dec_ref(v___x_542_);
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
else
{
goto v___jp_678_;
}
v___jp_565_:
{
lean_object* v___x_568_; lean_object* v_env_569_; lean_object* v_nextMacroScope_570_; lean_object* v_ngen_571_; lean_object* v_auxDeclNGen_572_; lean_object* v_traceState_573_; lean_object* v_messages_574_; lean_object* v_infoState_575_; lean_object* v_snapshotTasks_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_608_; 
v___x_568_ = lean_st_ref_take(v___y_566_);
v_env_569_ = lean_ctor_get(v___x_568_, 0);
v_nextMacroScope_570_ = lean_ctor_get(v___x_568_, 1);
v_ngen_571_ = lean_ctor_get(v___x_568_, 2);
v_auxDeclNGen_572_ = lean_ctor_get(v___x_568_, 3);
v_traceState_573_ = lean_ctor_get(v___x_568_, 4);
v_messages_574_ = lean_ctor_get(v___x_568_, 6);
v_infoState_575_ = lean_ctor_get(v___x_568_, 7);
v_snapshotTasks_576_ = lean_ctor_get(v___x_568_, 8);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v___x_568_, 5);
lean_dec(v_unused_609_);
v___x_578_ = v___x_568_;
v_isShared_579_ = v_isSharedCheck_608_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_snapshotTasks_576_);
lean_inc(v_infoState_575_);
lean_inc(v_messages_574_);
lean_inc(v_traceState_573_);
lean_inc(v_auxDeclNGen_572_);
lean_inc(v_ngen_571_);
lean_inc(v_nextMacroScope_570_);
lean_inc(v_env_569_);
lean_dec(v___x_568_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_608_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_name_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v_name_580_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_name_580_);
lean_dec_ref(v___x_542_);
lean_inc(v_projName_543_);
v___x_581_ = l_Lean_addProjectionFnInfo(v_env_569_, v_projName_543_, v_name_580_, v___x_544_, v_a_545_, v_instImplicit_546_);
v___x_582_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 5, v___x_582_);
lean_ctor_set(v___x_578_, 0, v___x_581_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_nextMacroScope_570_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_ngen_571_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_auxDeclNGen_572_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_traceState_573_);
lean_ctor_set(v_reuseFailAlloc_607_, 5, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_607_, 6, v_messages_574_);
lean_ctor_set(v_reuseFailAlloc_607_, 7, v_infoState_575_);
lean_ctor_set(v_reuseFailAlloc_607_, 8, v_snapshotTasks_576_);
v___x_584_ = v_reuseFailAlloc_607_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_mctx_587_; lean_object* v_zetaDeltaFVarIds_588_; lean_object* v_postponed_589_; lean_object* v_diag_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_605_; 
v___x_585_ = lean_st_ref_put(v___y_566_, v___x_584_);
v___x_586_ = lean_st_ref_take(v___y_567_);
v_mctx_587_ = lean_ctor_get(v___x_586_, 0);
v_zetaDeltaFVarIds_588_ = lean_ctor_get(v___x_586_, 2);
v_postponed_589_ = lean_ctor_get(v___x_586_, 3);
v_diag_590_ = lean_ctor_get(v___x_586_, 4);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_605_ == 0)
{
lean_object* v_unused_606_; 
v_unused_606_ = lean_ctor_get(v___x_586_, 1);
lean_dec(v_unused_606_);
v___x_592_ = v___x_586_;
v_isShared_593_ = v_isSharedCheck_605_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_diag_590_);
lean_inc(v_postponed_589_);
lean_inc(v_zetaDeltaFVarIds_588_);
lean_inc(v_mctx_587_);
lean_dec(v___x_586_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_605_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_594_);
v___x_596_ = v___x_592_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_mctx_587_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_604_, 2, v_zetaDeltaFVarIds_588_);
lean_ctor_set(v_reuseFailAlloc_604_, 3, v_postponed_589_);
lean_ctor_set(v_reuseFailAlloc_604_, 4, v_diag_590_);
v___x_596_ = v_reuseFailAlloc_604_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_597_ = lean_st_ref_put(v___y_567_, v___x_596_);
v___x_598_ = l_Lean_Expr_const___override(v_projName_543_, v___x_547_);
v___x_599_ = l_Lean_mkAppN(v___x_598_, v_params_548_);
v___x_600_ = l_Lean_Expr_app___override(v___x_599_, v_self_549_);
v___x_601_ = l_Lean_Expr_bindingBody_x21(v_b_550_);
v___x_602_ = lean_expr_instantiate1(v___x_601_, v___x_600_);
lean_dec_ref(v___x_600_);
lean_dec_ref(v___x_601_);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
}
}
}
}
v___jp_610_:
{
if (lean_obj_tag(v___y_613_) == 0)
{
lean_dec_ref_known(v___y_613_, 1);
v___y_566_ = v___y_611_;
v___y_567_ = v___y_612_;
goto v___jp_565_;
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v_self_549_);
lean_dec(v___x_547_);
lean_dec(v_a_545_);
lean_dec(v___x_544_);
lean_dec(v_projName_543_);
lean_dec_ref(v___x_542_);
v_a_614_ = lean_ctor_get(v___y_613_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___y_613_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___y_613_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___y_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
v___jp_622_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_629_ = lean_box(0);
lean_inc(v_projName_543_);
v___x_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_630_, 0, v_projName_543_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_631_, 0, v___y_623_);
lean_ctor_set(v___x_631_, 1, v___y_627_);
lean_ctor_set(v___x_631_, 2, v___x_630_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*3, v___x_551_);
v___x_632_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
v___x_633_ = l_Lean_addDecl(v___x_632_, v___y_625_, v___y_628_, v___y_624_);
lean_dec_ref(v___y_628_);
v___y_611_ = v___y_624_;
v___y_612_ = v___y_626_;
v___y_613_ = v___x_633_;
goto v___jp_610_;
}
v___jp_634_:
{
uint8_t v___x_641_; lean_object* v___x_642_; lean_object* v_toCold_643_; lean_object* v_currRecDepth_644_; lean_object* v_ref_645_; uint8_t v_diag_646_; uint8_t v_suppressElabErrors_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v_ref_652_; lean_object* v___x_653_; 
v___x_641_ = 0;
lean_inc_ref(v_a_552_);
v___x_642_ = l_Lean_LocalContext_mkForall(v_a_552_, v___x_553_, v___y_636_, v___x_551_, v___x_641_);
lean_dec_ref(v___y_636_);
v_toCold_643_ = lean_ctor_get(v___y_639_, 0);
v_currRecDepth_644_ = lean_ctor_get(v___y_639_, 1);
v_ref_645_ = lean_ctor_get(v___y_639_, 2);
v_diag_646_ = lean_ctor_get_uint8(v___y_639_, sizeof(void*)*3);
v_suppressElabErrors_647_ = lean_ctor_get_uint8(v___y_639_, sizeof(void*)*3 + 1);
v___x_648_ = l_Lean_Expr_inferImplicit(v___x_642_, v___x_544_, v___x_551_);
v___x_649_ = l_Lean_Expr_updateForallBinderInfos(v___x_648_, v_paramInfoOverrides_554_);
lean_inc_ref(v_self_549_);
lean_inc(v_a_545_);
v___x_650_ = l_Lean_Expr_proj___override(v_n_555_, v_a_545_, v_self_549_);
v___x_651_ = l_Lean_LocalContext_mkLambda(v_a_552_, v___x_553_, v___x_650_, v___x_551_, v___x_641_);
lean_dec_ref(v___x_650_);
v_ref_652_ = l_Lean_replaceRef(v_ref_556_, v_ref_645_);
lean_inc(v_currRecDepth_644_);
lean_inc_ref(v_toCold_643_);
v___x_653_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_653_, 0, v_toCold_643_);
lean_ctor_set(v___x_653_, 1, v_currRecDepth_644_);
lean_ctor_set(v___x_653_, 2, v_ref_652_);
lean_ctor_set_uint8(v___x_653_, sizeof(void*)*3, v_diag_646_);
lean_ctor_set_uint8(v___x_653_, sizeof(void*)*3 + 1, v_suppressElabErrors_647_);
if (v___y_635_ == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_box(1);
lean_inc(v_projName_543_);
v___x_655_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_projName_543_, v___x_557_, v___x_649_, v___x_651_, v___x_654_, v___y_640_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_657_, 0, v_a_656_);
v___x_658_ = l_Lean_addDecl(v___x_657_, v___x_641_, v___x_653_, v___y_640_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_dec_ref_known(v___x_658_, 1);
if (v_instImplicit_546_ == 0)
{
lean_object* v___x_659_; 
lean_inc(v_projName_543_);
v___x_659_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_projName_543_, v___y_637_, v___y_638_, v___x_653_, v___y_640_);
lean_dec_ref_known(v___x_653_, 3);
v___y_611_ = v___y_640_;
v___y_612_ = v___y_638_;
v___y_613_ = v___x_659_;
goto v___jp_610_;
}
else
{
lean_dec_ref_known(v___x_653_, 3);
v___y_566_ = v___y_640_;
v___y_567_ = v___y_638_;
goto v___jp_565_;
}
}
else
{
lean_dec_ref_known(v___x_653_, 3);
v___y_611_ = v___y_640_;
v___y_612_ = v___y_638_;
v___y_613_ = v___x_658_;
goto v___jp_610_;
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec_ref_known(v___x_653_, 3);
lean_dec_ref(v_self_549_);
lean_dec(v___x_547_);
lean_dec(v_a_545_);
lean_dec(v___x_544_);
lean_dec(v_projName_543_);
lean_dec_ref(v___x_542_);
v_a_660_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_655_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_655_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_env_670_; uint8_t v___x_671_; 
lean_inc_ref(v___x_649_);
lean_inc(v_projName_543_);
v___x_668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_668_, 0, v_projName_543_);
lean_ctor_set(v___x_668_, 1, v___x_557_);
lean_ctor_set(v___x_668_, 2, v___x_649_);
v___x_669_ = lean_st_ref_get(v___y_640_);
v_env_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc_ref_n(v_env_670_, 2);
lean_dec(v___x_669_);
v___x_671_ = l_Lean_Environment_hasUnsafe(v_env_670_, v___x_649_);
lean_dec_ref(v___x_649_);
if (v___x_671_ == 0)
{
uint8_t v___x_672_; 
v___x_672_ = l_Lean_Environment_hasUnsafe(v_env_670_, v___x_651_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_673_ = lean_box(0);
lean_inc(v_projName_543_);
v___x_674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_674_, 0, v_projName_543_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_675_, 0, v___x_668_);
lean_ctor_set(v___x_675_, 1, v___x_651_);
lean_ctor_set(v___x_675_, 2, v___x_674_);
v___x_676_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
v___x_677_ = l_Lean_addDecl(v___x_676_, v___x_641_, v___x_653_, v___y_640_);
lean_dec_ref_known(v___x_653_, 3);
v___y_611_ = v___y_640_;
v___y_612_ = v___y_638_;
v___y_613_ = v___x_677_;
goto v___jp_610_;
}
else
{
v___y_623_ = v___x_668_;
v___y_624_ = v___y_640_;
v___y_625_ = v___x_641_;
v___y_626_ = v___y_638_;
v___y_627_ = v___x_651_;
v___y_628_ = v___x_653_;
goto v___jp_622_;
}
}
else
{
lean_dec_ref(v_env_670_);
v___y_623_ = v___x_668_;
v___y_624_ = v___y_640_;
v___y_625_ = v___x_641_;
v___y_626_ = v___y_638_;
v___y_627_ = v___x_651_;
v___y_628_ = v___x_653_;
goto v___jp_622_;
}
}
}
v___jp_678_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = l_Lean_Expr_bindingDomain_x21(v_b_550_);
v___x_680_ = lean_expr_consume_type_annotations(v___x_679_);
lean_inc_ref(v___x_680_);
v___x_681_ = l_Lean_Meta_isProp(v___x_680_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_681_) == 0)
{
if (v_a_558_ == 0)
{
lean_object* v_a_682_; uint8_t v___x_683_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
v___x_683_ = lean_unbox(v_a_682_);
lean_dec(v_a_682_);
v___y_635_ = v___x_683_;
v___y_636_ = v___x_680_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
v___y_639_ = v___y_562_;
v___y_640_ = v___y_563_;
goto v___jp_634_;
}
else
{
lean_object* v_a_684_; uint8_t v___x_685_; 
v_a_684_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v___x_681_, 1);
v___x_685_ = lean_unbox(v_a_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_686_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_543_);
v___x_687_ = l_Lean_MessageData_ofName(v_projName_543_);
v___x_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
v___x_690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_unbox(v_a_684_);
lean_inc(v_n_555_);
v___x_692_ = l_Lean_MessageData_ofConstName(v_n_555_, v___x_691_);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_690_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3);
v___x_695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
lean_inc_ref(v___x_680_);
v___x_696_ = l_Lean_indentExpr(v___x_680_);
v___x_697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_556_, v___x_697_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_698_) == 0)
{
uint8_t v___x_699_; 
lean_dec_ref_known(v___x_698_, 1);
v___x_699_ = lean_unbox(v_a_684_);
lean_dec(v_a_684_);
v___y_635_ = v___x_699_;
v___y_636_ = v___x_680_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
v___y_639_ = v___y_562_;
v___y_640_ = v___y_563_;
goto v___jp_634_;
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_dec(v_a_684_);
lean_dec_ref(v___x_680_);
lean_dec(v___x_557_);
lean_dec(v_n_555_);
lean_dec_ref(v_a_552_);
lean_dec_ref(v_self_549_);
lean_dec(v___x_547_);
lean_dec(v_a_545_);
lean_dec(v___x_544_);
lean_dec(v_projName_543_);
lean_dec_ref(v___x_542_);
v_a_700_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_698_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_698_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
uint8_t v___x_708_; 
v___x_708_ = lean_unbox(v_a_684_);
lean_dec(v_a_684_);
v___y_635_ = v___x_708_;
v___y_636_ = v___x_680_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
v___y_639_ = v___y_562_;
v___y_640_ = v___y_563_;
goto v___jp_634_;
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec_ref(v___x_680_);
lean_dec(v___x_557_);
lean_dec(v_n_555_);
lean_dec_ref(v_a_552_);
lean_dec_ref(v_self_549_);
lean_dec(v___x_547_);
lean_dec(v_a_545_);
lean_dec(v___x_544_);
lean_dec(v_projName_543_);
lean_dec_ref(v___x_542_);
v_a_709_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_681_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_681_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_738_ = _args[0];
lean_object* v_projName_739_ = _args[1];
lean_object* v___x_740_ = _args[2];
lean_object* v_a_741_ = _args[3];
lean_object* v_instImplicit_742_ = _args[4];
lean_object* v___x_743_ = _args[5];
lean_object* v_params_744_ = _args[6];
lean_object* v_self_745_ = _args[7];
lean_object* v_b_746_ = _args[8];
lean_object* v___x_747_ = _args[9];
lean_object* v_a_748_ = _args[10];
lean_object* v___x_749_ = _args[11];
lean_object* v_paramInfoOverrides_750_ = _args[12];
lean_object* v_n_751_ = _args[13];
lean_object* v_ref_752_ = _args[14];
lean_object* v___x_753_ = _args[15];
lean_object* v_a_754_ = _args[16];
lean_object* v_____r_755_ = _args[17];
lean_object* v___y_756_ = _args[18];
lean_object* v___y_757_ = _args[19];
lean_object* v___y_758_ = _args[20];
lean_object* v___y_759_ = _args[21];
lean_object* v___y_760_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_761_; uint8_t v___x_17178__boxed_762_; uint8_t v_a_17184__boxed_763_; lean_object* v_res_764_; 
v_instImplicit_boxed_761_ = lean_unbox(v_instImplicit_742_);
v___x_17178__boxed_762_ = lean_unbox(v___x_747_);
v_a_17184__boxed_763_ = lean_unbox(v_a_754_);
v_res_764_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(v___x_738_, v_projName_739_, v___x_740_, v_a_741_, v_instImplicit_boxed_761_, v___x_743_, v_params_744_, v_self_745_, v_b_746_, v___x_17178__boxed_762_, v_a_748_, v___x_749_, v_paramInfoOverrides_750_, v_n_751_, v_ref_752_, v___x_753_, v_a_17184__boxed_763_, v_____r_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v_ref_752_);
lean_dec(v_paramInfoOverrides_750_);
lean_dec_ref(v___x_749_);
lean_dec_ref(v_b_746_);
lean_dec_ref(v_params_744_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object* v___y_765_, uint8_t v_isExporting_766_, lean_object* v___x_767_, lean_object* v___y_768_, lean_object* v___x_769_, lean_object* v_a_x3f_770_){
_start:
{
lean_object* v___x_772_; lean_object* v_env_773_; lean_object* v_nextMacroScope_774_; lean_object* v_ngen_775_; lean_object* v_auxDeclNGen_776_; lean_object* v_traceState_777_; lean_object* v_messages_778_; lean_object* v_infoState_779_; lean_object* v_snapshotTasks_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_805_; 
v___x_772_ = lean_st_ref_take(v___y_765_);
v_env_773_ = lean_ctor_get(v___x_772_, 0);
v_nextMacroScope_774_ = lean_ctor_get(v___x_772_, 1);
v_ngen_775_ = lean_ctor_get(v___x_772_, 2);
v_auxDeclNGen_776_ = lean_ctor_get(v___x_772_, 3);
v_traceState_777_ = lean_ctor_get(v___x_772_, 4);
v_messages_778_ = lean_ctor_get(v___x_772_, 6);
v_infoState_779_ = lean_ctor_get(v___x_772_, 7);
v_snapshotTasks_780_ = lean_ctor_get(v___x_772_, 8);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_805_ == 0)
{
lean_object* v_unused_806_; 
v_unused_806_ = lean_ctor_get(v___x_772_, 5);
lean_dec(v_unused_806_);
v___x_782_ = v___x_772_;
v_isShared_783_ = v_isSharedCheck_805_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_snapshotTasks_780_);
lean_inc(v_infoState_779_);
lean_inc(v_messages_778_);
lean_inc(v_traceState_777_);
lean_inc(v_auxDeclNGen_776_);
lean_inc(v_ngen_775_);
lean_inc(v_nextMacroScope_774_);
lean_inc(v_env_773_);
lean_dec(v___x_772_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_805_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_784_ = l_Lean_Environment_setExporting(v_env_773_, v_isExporting_766_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 5, v___x_767_);
lean_ctor_set(v___x_782_, 0, v___x_784_);
v___x_786_ = v___x_782_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_nextMacroScope_774_);
lean_ctor_set(v_reuseFailAlloc_804_, 2, v_ngen_775_);
lean_ctor_set(v_reuseFailAlloc_804_, 3, v_auxDeclNGen_776_);
lean_ctor_set(v_reuseFailAlloc_804_, 4, v_traceState_777_);
lean_ctor_set(v_reuseFailAlloc_804_, 5, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_804_, 6, v_messages_778_);
lean_ctor_set(v_reuseFailAlloc_804_, 7, v_infoState_779_);
lean_ctor_set(v_reuseFailAlloc_804_, 8, v_snapshotTasks_780_);
v___x_786_ = v_reuseFailAlloc_804_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v_mctx_789_; lean_object* v_zetaDeltaFVarIds_790_; lean_object* v_postponed_791_; lean_object* v_diag_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_802_; 
v___x_787_ = lean_st_ref_put(v___y_765_, v___x_786_);
v___x_788_ = lean_st_ref_take(v___y_768_);
v_mctx_789_ = lean_ctor_get(v___x_788_, 0);
v_zetaDeltaFVarIds_790_ = lean_ctor_get(v___x_788_, 2);
v_postponed_791_ = lean_ctor_get(v___x_788_, 3);
v_diag_792_ = lean_ctor_get(v___x_788_, 4);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; 
v_unused_803_ = lean_ctor_get(v___x_788_, 1);
lean_dec(v_unused_803_);
v___x_794_ = v___x_788_;
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_diag_792_);
lean_inc(v_postponed_791_);
lean_inc(v_zetaDeltaFVarIds_790_);
lean_inc(v_mctx_789_);
lean_dec(v___x_788_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_box(0);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 1, v___x_769_);
v___x_798_ = v___x_794_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_mctx_789_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_801_, 2, v_zetaDeltaFVarIds_790_);
lean_ctor_set(v_reuseFailAlloc_801_, 3, v_postponed_791_);
lean_ctor_set(v_reuseFailAlloc_801_, 4, v_diag_792_);
v___x_798_ = v_reuseFailAlloc_801_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_st_ref_put(v___y_768_, v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_796_);
return v___x_800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v___y_807_, lean_object* v_isExporting_808_, lean_object* v___x_809_, lean_object* v___y_810_, lean_object* v___x_811_, lean_object* v_a_x3f_812_, lean_object* v___y_813_){
_start:
{
uint8_t v_isExporting_boxed_814_; lean_object* v_res_815_; 
v_isExporting_boxed_814_ = lean_unbox(v_isExporting_808_);
v_res_815_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_807_, v_isExporting_boxed_814_, v___x_809_, v___y_810_, v___x_811_, v_a_x3f_812_);
lean_dec(v_a_x3f_812_);
lean_dec(v___y_810_);
lean_dec(v___y_807_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object* v_x_816_, uint8_t v_isExporting_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; lean_object* v_env_824_; lean_object* v___x_825_; uint8_t v_isModule_826_; 
v___x_823_ = lean_st_ref_get(v___y_821_);
v_env_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc_ref(v_env_824_);
lean_dec(v___x_823_);
v___x_825_ = l_Lean_Environment_header(v_env_824_);
v_isModule_826_ = lean_ctor_get_uint8(v___x_825_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_825_);
if (v_isModule_826_ == 0)
{
lean_object* v___x_827_; 
lean_dec_ref(v_env_824_);
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
v___x_827_ = lean_apply_5(v_x_816_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, lean_box(0));
return v___x_827_;
}
else
{
uint8_t v_isExporting_828_; 
v_isExporting_828_ = lean_ctor_get_uint8(v_env_824_, sizeof(void*)*8);
lean_dec_ref(v_env_824_);
if (v_isExporting_817_ == 0)
{
if (v_isExporting_828_ == 0)
{
lean_object* v___x_894_; 
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
v___x_894_ = lean_apply_5(v_x_816_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, lean_box(0));
return v___x_894_;
}
else
{
goto v___jp_829_;
}
}
else
{
if (v_isExporting_828_ == 0)
{
goto v___jp_829_;
}
else
{
lean_object* v___x_895_; 
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
v___x_895_ = lean_apply_5(v_x_816_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, lean_box(0));
return v___x_895_;
}
}
v___jp_829_:
{
lean_object* v___x_830_; lean_object* v_env_831_; lean_object* v_nextMacroScope_832_; lean_object* v_ngen_833_; lean_object* v_auxDeclNGen_834_; lean_object* v_traceState_835_; lean_object* v_messages_836_; lean_object* v_infoState_837_; lean_object* v_snapshotTasks_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_892_; 
v___x_830_ = lean_st_ref_take(v___y_821_);
v_env_831_ = lean_ctor_get(v___x_830_, 0);
v_nextMacroScope_832_ = lean_ctor_get(v___x_830_, 1);
v_ngen_833_ = lean_ctor_get(v___x_830_, 2);
v_auxDeclNGen_834_ = lean_ctor_get(v___x_830_, 3);
v_traceState_835_ = lean_ctor_get(v___x_830_, 4);
v_messages_836_ = lean_ctor_get(v___x_830_, 6);
v_infoState_837_ = lean_ctor_get(v___x_830_, 7);
v_snapshotTasks_838_ = lean_ctor_get(v___x_830_, 8);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v___x_830_, 5);
lean_dec(v_unused_893_);
v___x_840_ = v___x_830_;
v_isShared_841_ = v_isSharedCheck_892_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_snapshotTasks_838_);
lean_inc(v_infoState_837_);
lean_inc(v_messages_836_);
lean_inc(v_traceState_835_);
lean_inc(v_auxDeclNGen_834_);
lean_inc(v_ngen_833_);
lean_inc(v_nextMacroScope_832_);
lean_inc(v_env_831_);
lean_dec(v___x_830_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_892_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_842_ = l_Lean_Environment_setExporting(v_env_831_, v_isExporting_817_);
v___x_843_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 5, v___x_843_);
lean_ctor_set(v___x_840_, 0, v___x_842_);
v___x_845_ = v___x_840_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_nextMacroScope_832_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_ngen_833_);
lean_ctor_set(v_reuseFailAlloc_891_, 3, v_auxDeclNGen_834_);
lean_ctor_set(v_reuseFailAlloc_891_, 4, v_traceState_835_);
lean_ctor_set(v_reuseFailAlloc_891_, 5, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_891_, 6, v_messages_836_);
lean_ctor_set(v_reuseFailAlloc_891_, 7, v_infoState_837_);
lean_ctor_set(v_reuseFailAlloc_891_, 8, v_snapshotTasks_838_);
v___x_845_ = v_reuseFailAlloc_891_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v_mctx_848_; lean_object* v_zetaDeltaFVarIds_849_; lean_object* v_postponed_850_; lean_object* v_diag_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_889_; 
v___x_846_ = lean_st_ref_put(v___y_821_, v___x_845_);
v___x_847_ = lean_st_ref_take(v___y_819_);
v_mctx_848_ = lean_ctor_get(v___x_847_, 0);
v_zetaDeltaFVarIds_849_ = lean_ctor_get(v___x_847_, 2);
v_postponed_850_ = lean_ctor_get(v___x_847_, 3);
v_diag_851_ = lean_ctor_get(v___x_847_, 4);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_847_, 1);
lean_dec(v_unused_890_);
v___x_853_ = v___x_847_;
v_isShared_854_ = v_isSharedCheck_889_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_diag_851_);
lean_inc(v_postponed_850_);
lean_inc(v_zetaDeltaFVarIds_849_);
lean_inc(v_mctx_848_);
lean_dec(v___x_847_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_889_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_855_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__4);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 1, v___x_855_);
v___x_857_ = v___x_853_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_mctx_848_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v___x_855_);
lean_ctor_set(v_reuseFailAlloc_888_, 2, v_zetaDeltaFVarIds_849_);
lean_ctor_set(v_reuseFailAlloc_888_, 3, v_postponed_850_);
lean_ctor_set(v_reuseFailAlloc_888_, 4, v_diag_851_);
v___x_857_ = v_reuseFailAlloc_888_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_858_; lean_object* v_r_859_; 
v___x_858_ = lean_st_ref_put(v___y_819_, v___x_857_);
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
v_r_859_ = lean_apply_5(v_x_816_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, lean_box(0));
if (lean_obj_tag(v_r_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_876_; 
v_a_860_ = lean_ctor_get(v_r_859_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_r_859_);
if (v_isSharedCheck_876_ == 0)
{
v___x_862_ = v_r_859_;
v_isShared_863_ = v_isSharedCheck_876_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v_r_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_876_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
lean_inc(v_a_860_);
if (v_isShared_863_ == 0)
{
lean_ctor_set_tag(v___x_862_, 1);
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_875_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
v___x_866_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_821_, v_isExporting_828_, v___x_843_, v___y_819_, v___x_855_, v___x_865_);
lean_dec_ref(v___x_865_);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; 
v_unused_874_ = lean_ctor_get(v___x_866_, 0);
lean_dec(v_unused_874_);
v___x_868_ = v___x_866_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_dec(v___x_866_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v_a_860_);
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_860_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v_a_877_ = lean_ctor_get(v_r_859_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v_r_859_, 1);
v___x_878_ = lean_box(0);
v___x_879_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_821_, v_isExporting_828_, v___x_843_, v___y_819_, v___x_855_, v___x_878_);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v___x_879_, 0);
lean_dec(v_unused_887_);
v___x_881_ = v___x_879_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_dec(v___x_879_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set_tag(v___x_881_, 1);
lean_ctor_set(v___x_881_, 0, v_a_877_);
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_877_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object* v_x_896_, lean_object* v_isExporting_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
uint8_t v_isExporting_boxed_903_; lean_object* v_res_904_; 
v_isExporting_boxed_903_ = lean_unbox(v_isExporting_897_);
v_res_904_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_896_, v_isExporting_boxed_903_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object* v_x_905_, uint8_t v_when_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
if (v_when_906_ == 0)
{
lean_object* v___x_912_; 
lean_inc(v___y_910_);
lean_inc_ref(v___y_909_);
lean_inc(v___y_908_);
lean_inc_ref(v___y_907_);
v___x_912_ = lean_apply_5(v_x_905_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, lean_box(0));
return v___x_912_;
}
else
{
uint8_t v___x_913_; lean_object* v___x_914_; 
v___x_913_ = 0;
v___x_914_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_905_, v___x_913_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object* v_x_915_, lean_object* v_when_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
uint8_t v_when_boxed_922_; lean_object* v_res_923_; 
v_when_boxed_922_ = lean_unbox(v_when_916_);
v_res_923_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_915_, v_when_boxed_922_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object* v_upperBound_924_, lean_object* v_projDecls_925_, lean_object* v___x_926_, lean_object* v___x_927_, uint8_t v_instImplicit_928_, lean_object* v___x_929_, lean_object* v_params_930_, lean_object* v_self_931_, lean_object* v_a_932_, lean_object* v___x_933_, lean_object* v_n_934_, lean_object* v___x_935_, uint8_t v_a_936_, lean_object* v_a_937_, lean_object* v_b_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
uint8_t v___x_944_; 
v___x_944_ = lean_nat_dec_lt(v_a_937_, v_upperBound_924_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
lean_dec(v_a_937_);
lean_dec(v___x_935_);
lean_dec(v_n_934_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v_a_932_);
lean_dec_ref(v_self_931_);
lean_dec_ref(v_params_930_);
lean_dec(v___x_929_);
lean_dec(v___x_927_);
lean_dec_ref(v___x_926_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_b_938_);
return v___x_945_;
}
else
{
lean_object* v___x_946_; lean_object* v_ref_947_; lean_object* v_projName_948_; lean_object* v_paramInfoOverrides_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___f_953_; uint8_t v___x_954_; lean_object* v___x_955_; lean_object* v___y_956_; uint8_t v___x_957_; lean_object* v___x_958_; 
v___x_946_ = lean_array_fget_borrowed(v_projDecls_925_, v_a_937_);
v_ref_947_ = lean_ctor_get(v___x_946_, 0);
v_projName_948_ = lean_ctor_get(v___x_946_, 1);
v_paramInfoOverrides_949_ = lean_ctor_get(v___x_946_, 2);
v___x_950_ = lean_box(v_instImplicit_928_);
v___x_951_ = lean_box(v___x_944_);
v___x_952_ = lean_box(v_a_936_);
lean_inc(v___x_935_);
lean_inc_n(v_ref_947_, 2);
lean_inc_n(v_n_934_, 2);
lean_inc(v_paramInfoOverrides_949_);
lean_inc_ref(v___x_933_);
lean_inc_ref(v_a_932_);
lean_inc_ref(v_b_938_);
lean_inc_ref(v_self_931_);
lean_inc_ref(v_params_930_);
lean_inc(v___x_929_);
lean_inc(v_a_937_);
lean_inc(v___x_927_);
lean_inc_n(v_projName_948_, 2);
lean_inc_ref(v___x_926_);
v___f_953_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed), 23, 17);
lean_closure_set(v___f_953_, 0, v___x_926_);
lean_closure_set(v___f_953_, 1, v_projName_948_);
lean_closure_set(v___f_953_, 2, v___x_927_);
lean_closure_set(v___f_953_, 3, v_a_937_);
lean_closure_set(v___f_953_, 4, v___x_950_);
lean_closure_set(v___f_953_, 5, v___x_929_);
lean_closure_set(v___f_953_, 6, v_params_930_);
lean_closure_set(v___f_953_, 7, v_self_931_);
lean_closure_set(v___f_953_, 8, v_b_938_);
lean_closure_set(v___f_953_, 9, v___x_951_);
lean_closure_set(v___f_953_, 10, v_a_932_);
lean_closure_set(v___f_953_, 11, v___x_933_);
lean_closure_set(v___f_953_, 12, v_paramInfoOverrides_949_);
lean_closure_set(v___f_953_, 13, v_n_934_);
lean_closure_set(v___f_953_, 14, v_ref_947_);
lean_closure_set(v___f_953_, 15, v___x_935_);
lean_closure_set(v___f_953_, 16, v___x_952_);
v___x_954_ = l_Lean_Expr_isForall(v_b_938_);
lean_dec_ref(v_b_938_);
v___x_955_ = lean_box(v___x_954_);
v___y_956_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed), 10, 5);
lean_closure_set(v___y_956_, 0, v___x_955_);
lean_closure_set(v___y_956_, 1, v_projName_948_);
lean_closure_set(v___y_956_, 2, v_n_934_);
lean_closure_set(v___y_956_, 3, v_ref_947_);
lean_closure_set(v___y_956_, 4, v___f_953_);
v___x_957_ = l_Lean_isPrivateName(v_projName_948_);
v___x_958_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v___y_956_, v___x_957_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref_known(v___x_958_, 1);
v___x_960_ = lean_unsigned_to_nat(1u);
v___x_961_ = lean_nat_add(v_a_937_, v___x_960_);
lean_dec(v_a_937_);
v_a_937_ = v___x_961_;
v_b_938_ = v_a_959_;
goto _start;
}
else
{
lean_dec(v_a_937_);
lean_dec(v___x_935_);
lean_dec(v_n_934_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v_a_932_);
lean_dec_ref(v_self_931_);
lean_dec_ref(v_params_930_);
lean_dec(v___x_929_);
lean_dec(v___x_927_);
lean_dec_ref(v___x_926_);
return v___x_958_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_963_ = _args[0];
lean_object* v_projDecls_964_ = _args[1];
lean_object* v___x_965_ = _args[2];
lean_object* v___x_966_ = _args[3];
lean_object* v_instImplicit_967_ = _args[4];
lean_object* v___x_968_ = _args[5];
lean_object* v_params_969_ = _args[6];
lean_object* v_self_970_ = _args[7];
lean_object* v_a_971_ = _args[8];
lean_object* v___x_972_ = _args[9];
lean_object* v_n_973_ = _args[10];
lean_object* v___x_974_ = _args[11];
lean_object* v_a_975_ = _args[12];
lean_object* v_a_976_ = _args[13];
lean_object* v_b_977_ = _args[14];
lean_object* v___y_978_ = _args[15];
lean_object* v___y_979_ = _args[16];
lean_object* v___y_980_ = _args[17];
lean_object* v___y_981_ = _args[18];
lean_object* v___y_982_ = _args[19];
_start:
{
uint8_t v_instImplicit_boxed_983_; uint8_t v_a_17781__boxed_984_; lean_object* v_res_985_; 
v_instImplicit_boxed_983_ = lean_unbox(v_instImplicit_967_);
v_a_17781__boxed_984_ = lean_unbox(v_a_975_);
v_res_985_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_963_, v_projDecls_964_, v___x_965_, v___x_966_, v_instImplicit_boxed_983_, v___x_968_, v_params_969_, v_self_970_, v_a_971_, v___x_972_, v_n_973_, v___x_974_, v_a_17781__boxed_984_, v_a_976_, v_b_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec_ref(v_projDecls_964_);
lean_dec(v_upperBound_963_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t v_instImplicit_986_, lean_object* v_as_987_, size_t v_sz_988_, size_t v_i_989_, lean_object* v_b_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_a_996_; uint8_t v___x_1000_; 
v___x_1000_ = lean_usize_dec_lt(v_i_989_, v_sz_988_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v_b_990_);
return v___x_1001_;
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_a_1002_ = lean_array_uget_borrowed(v_as_987_, v_i_989_);
v___x_1003_ = l_Lean_Expr_fvarId_x21(v_a_1002_);
lean_inc(v___x_1003_);
v___x_1004_ = l_Lean_FVarId_getDecl___redArg(v___x_1003_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; uint8_t v___y_1007_; uint8_t v___x_1010_; uint8_t v___x_1011_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1010_ = l_Lean_LocalDecl_binderInfo(v_a_1005_);
v___x_1011_ = l_Lean_BinderInfo_isInstImplicit(v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = l_Lean_LocalDecl_type(v_a_1005_);
lean_dec(v_a_1005_);
v___x_1014_ = l_Lean_Expr_isOutParam(v___x_1013_);
lean_dec_ref(v___x_1013_);
if (v___x_1014_ == 0)
{
uint8_t v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = 0;
v___x_1016_ = l_Lean_LocalContext_setBinderInfo(v_b_990_, v___x_1003_, v___x_1015_);
v_a_996_ = v___x_1016_;
goto v___jp_995_;
}
else
{
goto v___jp_1012_;
}
}
else
{
lean_dec(v_a_1005_);
goto v___jp_1012_;
}
v___jp_1006_:
{
if (v___y_1007_ == 0)
{
lean_dec(v___x_1003_);
v_a_996_ = v_b_990_;
goto v___jp_995_;
}
else
{
uint8_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = 1;
v___x_1009_ = l_Lean_LocalContext_setBinderInfo(v_b_990_, v___x_1003_, v___x_1008_);
v_a_996_ = v___x_1009_;
goto v___jp_995_;
}
}
v___jp_1012_:
{
if (v___x_1011_ == 0)
{
v___y_1007_ = v___x_1011_;
goto v___jp_1006_;
}
else
{
v___y_1007_ = v_instImplicit_986_;
goto v___jp_1006_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v___x_1003_);
lean_dec_ref(v_b_990_);
v_a_1017_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1004_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1004_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
v___jp_995_:
{
size_t v___x_997_; size_t v___x_998_; 
v___x_997_ = ((size_t)1ULL);
v___x_998_ = lean_usize_add(v_i_989_, v___x_997_);
v_i_989_ = v___x_998_;
v_b_990_ = v_a_996_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object* v_instImplicit_1025_, lean_object* v_as_1026_, lean_object* v_sz_1027_, lean_object* v_i_1028_, lean_object* v_b_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
uint8_t v_instImplicit_boxed_1034_; size_t v_sz_boxed_1035_; size_t v_i_boxed_1036_; lean_object* v_res_1037_; 
v_instImplicit_boxed_1034_ = lean_unbox(v_instImplicit_1025_);
v_sz_boxed_1035_ = lean_unbox_usize(v_sz_1027_);
lean_dec(v_sz_1027_);
v_i_boxed_1036_ = lean_unbox_usize(v_i_1028_);
lean_dec(v_i_1028_);
v_res_1037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_boxed_1034_, v_as_1026_, v_sz_boxed_1035_, v_i_boxed_1036_, v_b_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec_ref(v_as_1026_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object* v_params_1038_, uint8_t v_instImplicit_1039_, lean_object* v_projDecls_1040_, lean_object* v_toConstantVal_1041_, lean_object* v_numParams_1042_, lean_object* v___x_1043_, lean_object* v_n_1044_, lean_object* v_levelParams_1045_, uint8_t v_a_1046_, lean_object* v_ctorType_1047_, lean_object* v_self_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_lctx_1054_; lean_object* v___x_1055_; size_t v_sz_1056_; size_t v___x_1057_; lean_object* v___x_1058_; 
v_lctx_1054_ = lean_ctor_get(v___y_1049_, 2);
lean_inc_ref(v_self_1048_);
lean_inc_ref(v_params_1038_);
v___x_1055_ = lean_array_push(v_params_1038_, v_self_1048_);
v_sz_1056_ = lean_array_size(v_params_1038_);
v___x_1057_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1054_);
v___x_1058_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1039_, v_params_1038_, v_sz_1056_, v___x_1057_, v_lctx_1054_, v___y_1049_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
v___x_1060_ = lean_array_get_size(v_projDecls_1040_);
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v___x_1060_, v_projDecls_1040_, v_toConstantVal_1041_, v_numParams_1042_, v_instImplicit_1039_, v___x_1043_, v_params_1038_, v_self_1048_, v_a_1059_, v___x_1055_, v_n_1044_, v_levelParams_1045_, v_a_1046_, v___x_1061_, v_ctorType_1047_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1070_; 
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v___x_1062_, 0);
lean_dec(v_unused_1071_);
v___x_1064_ = v___x_1062_;
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
else
{
lean_dec(v___x_1062_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1066_ = lean_box(0);
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v___x_1066_);
v___x_1068_ = v___x_1064_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1062_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1062_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec_ref(v___x_1055_);
lean_dec_ref(v_self_1048_);
lean_dec_ref(v_ctorType_1047_);
lean_dec(v_levelParams_1045_);
lean_dec(v_n_1044_);
lean_dec(v___x_1043_);
lean_dec(v_numParams_1042_);
lean_dec_ref(v_toConstantVal_1041_);
lean_dec_ref(v_params_1038_);
v_a_1080_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1058_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1058_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object* v_params_1088_, lean_object* v_instImplicit_1089_, lean_object* v_projDecls_1090_, lean_object* v_toConstantVal_1091_, lean_object* v_numParams_1092_, lean_object* v___x_1093_, lean_object* v_n_1094_, lean_object* v_levelParams_1095_, lean_object* v_a_1096_, lean_object* v_ctorType_1097_, lean_object* v_self_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
uint8_t v_instImplicit_boxed_1104_; uint8_t v_a_17923__boxed_1105_; lean_object* v_res_1106_; 
v_instImplicit_boxed_1104_ = lean_unbox(v_instImplicit_1089_);
v_a_17923__boxed_1105_ = lean_unbox(v_a_1096_);
v_res_1106_ = l_Lean_Meta_mkProjections___lam__0(v_params_1088_, v_instImplicit_boxed_1104_, v_projDecls_1090_, v_toConstantVal_1091_, v_numParams_1092_, v___x_1093_, v_n_1094_, v_levelParams_1095_, v_a_17923__boxed_1105_, v_ctorType_1097_, v_self_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v_projDecls_1090_);
return v_res_1106_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__2));
v___x_1112_ = l_Lean_stringToMessageData(v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__4));
v___x_1115_ = l_Lean_stringToMessageData(v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t v_instImplicit_1116_, lean_object* v_projDecls_1117_, lean_object* v_toConstantVal_1118_, lean_object* v_numParams_1119_, lean_object* v___x_1120_, lean_object* v_n_1121_, lean_object* v_levelParams_1122_, uint8_t v_a_1123_, lean_object* v_params_1124_, lean_object* v_ctorType_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; uint8_t v___y_1138_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___f_1144_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1142_ = lean_box(v_instImplicit_1116_);
v___x_1143_ = lean_box(v_a_1123_);
lean_inc(v_n_1121_);
lean_inc(v___x_1120_);
lean_inc(v_numParams_1119_);
lean_inc_ref(v_params_1124_);
v___f_1144_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__0___boxed), 16, 10);
lean_closure_set(v___f_1144_, 0, v_params_1124_);
lean_closure_set(v___f_1144_, 1, v___x_1142_);
lean_closure_set(v___f_1144_, 2, v_projDecls_1117_);
lean_closure_set(v___f_1144_, 3, v_toConstantVal_1118_);
lean_closure_set(v___f_1144_, 4, v_numParams_1119_);
lean_closure_set(v___f_1144_, 5, v___x_1120_);
lean_closure_set(v___f_1144_, 6, v_n_1121_);
lean_closure_set(v___f_1144_, 7, v_levelParams_1122_);
lean_closure_set(v___f_1144_, 8, v___x_1143_);
lean_closure_set(v___f_1144_, 9, v_ctorType_1125_);
v___x_1150_ = lean_array_get_size(v_params_1124_);
v___x_1151_ = lean_nat_dec_eq(v___x_1150_, v_numParams_1119_);
lean_dec(v_numParams_1119_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
lean_dec_ref(v___f_1144_);
lean_dec_ref(v_params_1124_);
lean_dec(v___x_1120_);
v___x_1152_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__3, &l_Lean_Meta_mkProjections___lam__1___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__3);
v___x_1153_ = l_Lean_MessageData_ofConstName(v_n_1121_, v___x_1151_);
v___x_1154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__5, &l_Lean_Meta_mkProjections___lam__1___closed__5_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__5);
v___x_1156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1154_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1156_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
return v___x_1157_;
}
else
{
goto v___jp_1145_;
}
v___jp_1131_:
{
lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__1));
v___x_1140_ = 0;
v___x_1141_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v___x_1139_, v___y_1138_, v___y_1134_, v___y_1136_, v___x_1140_, v___y_1137_, v___y_1132_, v___y_1135_, v___y_1133_);
return v___x_1141_;
}
v___jp_1145_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = l_Lean_Expr_const___override(v_n_1121_, v___x_1120_);
v___x_1147_ = l_Lean_mkAppN(v___x_1146_, v_params_1124_);
lean_dec_ref(v_params_1124_);
if (v_instImplicit_1116_ == 0)
{
uint8_t v___x_1148_; 
v___x_1148_ = 0;
v___y_1132_ = v___y_1127_;
v___y_1133_ = v___y_1129_;
v___y_1134_ = v___x_1147_;
v___y_1135_ = v___y_1128_;
v___y_1136_ = v___f_1144_;
v___y_1137_ = v___y_1126_;
v___y_1138_ = v___x_1148_;
goto v___jp_1131_;
}
else
{
uint8_t v___x_1149_; 
v___x_1149_ = 3;
v___y_1132_ = v___y_1127_;
v___y_1133_ = v___y_1129_;
v___y_1134_ = v___x_1147_;
v___y_1135_ = v___y_1128_;
v___y_1136_ = v___f_1144_;
v___y_1137_ = v___y_1126_;
v___y_1138_ = v___x_1149_;
goto v___jp_1131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object* v_instImplicit_1158_, lean_object* v_projDecls_1159_, lean_object* v_toConstantVal_1160_, lean_object* v_numParams_1161_, lean_object* v___x_1162_, lean_object* v_n_1163_, lean_object* v_levelParams_1164_, lean_object* v_a_1165_, lean_object* v_params_1166_, lean_object* v_ctorType_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_instImplicit_boxed_1173_; uint8_t v_a_18027__boxed_1174_; lean_object* v_res_1175_; 
v_instImplicit_boxed_1173_ = lean_unbox(v_instImplicit_1158_);
v_a_18027__boxed_1174_ = lean_unbox(v_a_1165_);
v_res_1175_ = l_Lean_Meta_mkProjections___lam__1(v_instImplicit_boxed_1173_, v_projDecls_1159_, v_toConstantVal_1160_, v_numParams_1161_, v___x_1162_, v_n_1163_, v_levelParams_1164_, v_a_18027__boxed_1174_, v_params_1166_, v_ctorType_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object* v_a_1176_, lean_object* v_a_1177_){
_start:
{
if (lean_obj_tag(v_a_1176_) == 0)
{
lean_object* v___x_1178_; 
v___x_1178_ = l_List_reverse___redArg(v_a_1177_);
return v___x_1178_;
}
else
{
lean_object* v_head_1179_; lean_object* v_tail_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1189_; 
v_head_1179_ = lean_ctor_get(v_a_1176_, 0);
v_tail_1180_ = lean_ctor_get(v_a_1176_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_a_1176_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1182_ = v_a_1176_;
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_tail_1180_);
lean_inc(v_head_1179_);
lean_dec(v_a_1176_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = l_Lean_mkLevelParam(v_head_1179_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 1, v_a_1177_);
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1177_);
v___x_1186_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
v_a_1176_ = v_tail_1180_;
v_a_1177_ = v___x_1186_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = l_instMonadEIO___redArg();
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object* v_msg_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_toApplicative_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1264_; 
v___x_1201_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0);
v___x_1202_ = l_StateRefT_x27_instMonad___redArg(v___x_1201_);
v_toApplicative_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1264_ == 0)
{
lean_object* v_unused_1265_; 
v_unused_1265_ = lean_ctor_get(v___x_1202_, 1);
lean_dec(v_unused_1265_);
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1264_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_toApplicative_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1264_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v_toFunctor_1207_; lean_object* v_toSeq_1208_; lean_object* v_toSeqLeft_1209_; lean_object* v_toSeqRight_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1262_; 
v_toFunctor_1207_ = lean_ctor_get(v_toApplicative_1203_, 0);
v_toSeq_1208_ = lean_ctor_get(v_toApplicative_1203_, 2);
v_toSeqLeft_1209_ = lean_ctor_get(v_toApplicative_1203_, 3);
v_toSeqRight_1210_ = lean_ctor_get(v_toApplicative_1203_, 4);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_toApplicative_1203_);
if (v_isSharedCheck_1262_ == 0)
{
lean_object* v_unused_1263_; 
v_unused_1263_ = lean_ctor_get(v_toApplicative_1203_, 1);
lean_dec(v_unused_1263_);
v___x_1212_ = v_toApplicative_1203_;
v_isShared_1213_ = v_isSharedCheck_1262_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_toSeqRight_1210_);
lean_inc(v_toSeqLeft_1209_);
lean_inc(v_toSeq_1208_);
lean_inc(v_toFunctor_1207_);
lean_dec(v_toApplicative_1203_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1262_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___f_1214_; lean_object* v___f_1215_; lean_object* v___f_1216_; lean_object* v___f_1217_; lean_object* v___x_1218_; lean_object* v___f_1219_; lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___x_1223_; 
v___f_1214_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1));
v___f_1215_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1207_);
v___f_1216_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1216_, 0, v_toFunctor_1207_);
v___f_1217_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1217_, 0, v_toFunctor_1207_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___f_1216_);
lean_ctor_set(v___x_1218_, 1, v___f_1217_);
v___f_1219_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1219_, 0, v_toSeqRight_1210_);
v___f_1220_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1220_, 0, v_toSeqLeft_1209_);
v___f_1221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1221_, 0, v_toSeq_1208_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 4, v___f_1219_);
lean_ctor_set(v___x_1212_, 3, v___f_1220_);
lean_ctor_set(v___x_1212_, 2, v___f_1221_);
lean_ctor_set(v___x_1212_, 1, v___f_1214_);
lean_ctor_set(v___x_1212_, 0, v___x_1218_);
v___x_1223_ = v___x_1212_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1218_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___f_1214_);
lean_ctor_set(v_reuseFailAlloc_1261_, 2, v___f_1221_);
lean_ctor_set(v_reuseFailAlloc_1261_, 3, v___f_1220_);
lean_ctor_set(v_reuseFailAlloc_1261_, 4, v___f_1219_);
v___x_1223_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1225_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 1, v___f_1215_);
lean_ctor_set(v___x_1205_, 0, v___x_1223_);
v___x_1225_ = v___x_1205_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v___f_1215_);
v___x_1225_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v_toApplicative_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1258_; 
v___x_1226_ = l_StateRefT_x27_instMonad___redArg(v___x_1225_);
v_toApplicative_1227_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1258_ == 0)
{
lean_object* v_unused_1259_; 
v_unused_1259_ = lean_ctor_get(v___x_1226_, 1);
lean_dec(v_unused_1259_);
v___x_1229_ = v___x_1226_;
v_isShared_1230_ = v_isSharedCheck_1258_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_toApplicative_1227_);
lean_dec(v___x_1226_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1258_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v_toFunctor_1231_; lean_object* v_toSeq_1232_; lean_object* v_toSeqLeft_1233_; lean_object* v_toSeqRight_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1256_; 
v_toFunctor_1231_ = lean_ctor_get(v_toApplicative_1227_, 0);
v_toSeq_1232_ = lean_ctor_get(v_toApplicative_1227_, 2);
v_toSeqLeft_1233_ = lean_ctor_get(v_toApplicative_1227_, 3);
v_toSeqRight_1234_ = lean_ctor_get(v_toApplicative_1227_, 4);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_toApplicative_1227_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v_toApplicative_1227_, 1);
lean_dec(v_unused_1257_);
v___x_1236_ = v_toApplicative_1227_;
v_isShared_1237_ = v_isSharedCheck_1256_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_toSeqRight_1234_);
lean_inc(v_toSeqLeft_1233_);
lean_inc(v_toSeq_1232_);
lean_inc(v_toFunctor_1231_);
lean_dec(v_toApplicative_1227_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1256_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___f_1238_; lean_object* v___f_1239_; lean_object* v___f_1240_; lean_object* v___f_1241_; lean_object* v___x_1242_; lean_object* v___f_1243_; lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___x_1247_; 
v___f_1238_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3));
v___f_1239_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1231_);
v___f_1240_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1240_, 0, v_toFunctor_1231_);
v___f_1241_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1241_, 0, v_toFunctor_1231_);
v___x_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___f_1240_);
lean_ctor_set(v___x_1242_, 1, v___f_1241_);
v___f_1243_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1243_, 0, v_toSeqRight_1234_);
v___f_1244_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1244_, 0, v_toSeqLeft_1233_);
v___f_1245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1245_, 0, v_toSeq_1232_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v___f_1243_);
lean_ctor_set(v___x_1236_, 3, v___f_1244_);
lean_ctor_set(v___x_1236_, 2, v___f_1245_);
lean_ctor_set(v___x_1236_, 1, v___f_1238_);
lean_ctor_set(v___x_1236_, 0, v___x_1242_);
v___x_1247_ = v___x_1236_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v___f_1238_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v___f_1245_);
lean_ctor_set(v_reuseFailAlloc_1255_, 3, v___f_1244_);
lean_ctor_set(v_reuseFailAlloc_1255_, 4, v___f_1243_);
v___x_1247_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1249_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 1, v___f_1239_);
lean_ctor_set(v___x_1229_, 0, v___x_1247_);
v___x_1249_ = v___x_1229_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v___f_1239_);
v___x_1249_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_13037__overap_1252_; lean_object* v___x_1253_; 
v___x_1250_ = lean_box(0);
v___x_1251_ = l_instInhabitedOfMonad___redArg(v___x_1249_, v___x_1250_);
v___x_13037__overap_1252_ = lean_panic_fn_borrowed(v___x_1251_, v_msg_1195_);
lean_dec(v___x_1251_);
lean_inc(v___y_1199_);
lean_inc_ref(v___y_1198_);
lean_inc(v___y_1197_);
lean_inc_ref(v___y_1196_);
v___x_1253_ = lean_apply_5(v___x_13037__overap_1252_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, lean_box(0));
return v___x_1253_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object* v_msg_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v_msg_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1272_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0));
v___x_1275_ = l_Lean_stringToMessageData(v___x_1274_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1279_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4));
v___x_1280_ = lean_unsigned_to_nat(11u);
v___x_1281_ = lean_unsigned_to_nat(122u);
v___x_1282_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3));
v___x_1283_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2));
v___x_1284_ = l_mkPanicMessageWithDecl(v___x_1283_, v___x_1282_, v___x_1281_, v___x_1280_, v___x_1279_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object* v_constName_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v___x_1299_; lean_object* v_env_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1299_ = lean_st_ref_get(v___y_1289_);
v_env_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc_ref(v_env_1300_);
lean_dec(v___x_1299_);
v___x_1301_ = 0;
lean_inc(v_constName_1285_);
v___x_1302_ = l_Lean_Environment_findAsync_x3f(v_env_1300_, v_constName_1285_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 1)
{
lean_object* v_val_1303_; uint8_t v_kind_1304_; 
v_val_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_val_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v_kind_1304_ = lean_ctor_get_uint8(v_val_1303_, sizeof(void*)*3);
if (v_kind_1304_ == 6)
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1303_);
if (lean_obj_tag(v___x_1305_) == 6)
{
lean_object* v_val_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec(v_constName_1285_);
v_val_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_val_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 0);
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_val_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec_ref(v___x_1305_);
v___x_1314_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_1315_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_1314_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1324_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1324_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1324_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
if (lean_obj_tag(v_a_1316_) == 0)
{
lean_del_object(v___x_1318_);
goto v___jp_1291_;
}
else
{
lean_object* v_val_1320_; lean_object* v___x_1322_; 
lean_dec(v_constName_1285_);
v_val_1320_ = lean_ctor_get(v_a_1316_, 0);
lean_inc(v_val_1320_);
lean_dec_ref_known(v_a_1316_, 1);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v_val_1320_);
v___x_1322_ = v___x_1318_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_val_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_constName_1285_);
v_a_1325_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1315_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1315_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
else
{
lean_dec(v_val_1303_);
goto v___jp_1291_;
}
}
else
{
lean_dec(v___x_1302_);
goto v___jp_1291_;
}
v___jp_1291_:
{
lean_object* v___x_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1292_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1293_ = 0;
v___x_1294_ = l_Lean_MessageData_ofConstName(v_constName_1285_, v___x_1293_);
v___x_1295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1292_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1);
v___x_1297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1295_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1297_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object* v_constName_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v_constName_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
return v_res_1339_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0));
v___x_1342_ = l_Lean_stringToMessageData(v___x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object* v_constName_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v_env_1350_; lean_object* v___x_1351_; 
v___x_1349_ = lean_st_ref_get(v___y_1347_);
v_env_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc_ref(v_env_1350_);
lean_dec(v___x_1349_);
lean_inc(v_constName_1343_);
v___x_1351_ = l_Lean_isInductiveCore_x3f(v_env_1350_, v_constName_1343_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1352_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1353_ = 0;
v___x_1354_ = l_Lean_MessageData_ofConstName(v_constName_1343_, v___x_1353_);
v___x_1355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1352_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1);
v___x_1357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1355_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1357_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
return v___x_1358_;
}
else
{
lean_object* v_val_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec(v_constName_1343_);
v_val_1359_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1351_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_val_1359_);
lean_dec(v___x_1351_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set_tag(v___x_1361_, 0);
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_val_1359_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object* v_constName_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_constName_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
return v_res_1373_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__0));
v___x_1376_ = l_Lean_stringToMessageData(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__2));
v___x_1379_ = l_Lean_stringToMessageData(v___x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object* v_n_1380_, lean_object* v___x_1381_, uint8_t v_instImplicit_1382_, lean_object* v_projDecls_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v___x_1389_; 
lean_inc(v_n_1380_);
v___x_1389_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_n_1380_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___x_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_a_1390_);
lean_dec_ref_known(v___x_1389_, 1);
v___x_1431_ = l_Lean_InductiveVal_numCtors(v_a_1390_);
v___x_1432_ = lean_unsigned_to_nat(1u);
v___x_1433_ = lean_nat_dec_eq(v___x_1431_, v___x_1432_);
lean_dec(v___x_1431_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
lean_dec(v_a_1390_);
lean_dec_ref(v_projDecls_1383_);
v___x_1434_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__1, &l_Lean_Meta_mkProjections___lam__2___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__1);
v___x_1435_ = l_Lean_MessageData_ofConstName(v_n_1380_, v___x_1433_);
v___x_1436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1434_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__3, &l_Lean_Meta_mkProjections___lam__2___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__3);
v___x_1438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1438_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
return v___x_1439_;
}
else
{
v___y_1392_ = v___y_1384_;
v___y_1393_ = v___y_1385_;
v___y_1394_ = v___y_1386_;
v___y_1395_ = v___y_1387_;
goto v___jp_1391_;
}
v___jp_1391_:
{
lean_object* v_toConstantVal_1396_; lean_object* v_numParams_1397_; lean_object* v_ctors_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_toConstantVal_1396_ = lean_ctor_get(v_a_1390_, 0);
lean_inc_ref(v_toConstantVal_1396_);
v_numParams_1397_ = lean_ctor_get(v_a_1390_, 1);
lean_inc(v_numParams_1397_);
v_ctors_1398_ = lean_ctor_get(v_a_1390_, 4);
lean_inc(v_ctors_1398_);
lean_dec(v_a_1390_);
v___x_1399_ = l_List_head_x21___redArg(v___x_1381_, v_ctors_1398_);
lean_dec(v_ctors_1398_);
v___x_1400_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v___x_1399_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v_levelParams_1402_; lean_object* v_type_1403_; lean_object* v___x_1404_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1401_);
lean_dec_ref_known(v___x_1400_, 1);
v_levelParams_1402_ = lean_ctor_get(v_toConstantVal_1396_, 1);
lean_inc(v_levelParams_1402_);
v_type_1403_ = lean_ctor_get(v_toConstantVal_1396_, 2);
lean_inc_ref(v_type_1403_);
lean_dec_ref(v_toConstantVal_1396_);
v___x_1404_ = l_Lean_Meta_isPropFormerType(v_type_1403_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_toConstantVal_1405_; lean_object* v_a_1406_; lean_object* v_type_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___f_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; lean_object* v___x_1414_; 
v_toConstantVal_1405_ = lean_ctor_get(v_a_1401_, 0);
lean_inc_ref(v_toConstantVal_1405_);
lean_dec(v_a_1401_);
v_a_1406_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1406_);
lean_dec_ref_known(v___x_1404_, 1);
v_type_1407_ = lean_ctor_get(v_toConstantVal_1405_, 2);
lean_inc_ref(v_type_1407_);
v___x_1408_ = lean_box(0);
lean_inc(v_levelParams_1402_);
v___x_1409_ = l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(v_levelParams_1402_, v___x_1408_);
v___x_1410_ = lean_box(v_instImplicit_1382_);
lean_inc(v_numParams_1397_);
v___f_1411_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__1___boxed), 15, 8);
lean_closure_set(v___f_1411_, 0, v___x_1410_);
lean_closure_set(v___f_1411_, 1, v_projDecls_1383_);
lean_closure_set(v___f_1411_, 2, v_toConstantVal_1405_);
lean_closure_set(v___f_1411_, 3, v_numParams_1397_);
lean_closure_set(v___f_1411_, 4, v___x_1409_);
lean_closure_set(v___f_1411_, 5, v_n_1380_);
lean_closure_set(v___f_1411_, 6, v_levelParams_1402_);
lean_closure_set(v___f_1411_, 7, v_a_1406_);
v___x_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_numParams_1397_);
v___x_1413_ = 0;
v___x_1414_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_1407_, v___x_1412_, v___f_1411_, v___x_1413_, v___x_1413_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
return v___x_1414_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_levelParams_1402_);
lean_dec(v_a_1401_);
lean_dec(v_numParams_1397_);
lean_dec_ref(v_projDecls_1383_);
lean_dec(v_n_1380_);
v_a_1415_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1404_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1404_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_numParams_1397_);
lean_dec_ref(v_toConstantVal_1396_);
lean_dec_ref(v_projDecls_1383_);
lean_dec(v_n_1380_);
v_a_1423_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1400_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1400_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec_ref(v_projDecls_1383_);
lean_dec(v_n_1380_);
v_a_1440_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1389_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1389_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object* v_n_1448_, lean_object* v___x_1449_, lean_object* v_instImplicit_1450_, lean_object* v_projDecls_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
uint8_t v_instImplicit_boxed_1457_; lean_object* v_res_1458_; 
v_instImplicit_boxed_1457_ = lean_unbox(v_instImplicit_1450_);
v_res_1458_ = l_Lean_Meta_mkProjections___lam__2(v_n_1448_, v___x_1449_, v_instImplicit_boxed_1457_, v_projDecls_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___x_1449_);
return v_res_1458_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__0(void){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1459_);
return v___x_1460_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__1(void){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1461_ = lean_unsigned_to_nat(32u);
v___x_1462_ = lean_mk_empty_array_with_capacity(v___x_1461_);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
return v___x_1463_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__2(void){
_start:
{
size_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1464_ = ((size_t)5ULL);
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_unsigned_to_nat(32u);
v___x_1467_ = lean_mk_empty_array_with_capacity(v___x_1466_);
v___x_1468_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__1, &l_Lean_Meta_mkProjections___closed__1_once, _init_l_Lean_Meta_mkProjections___closed__1);
v___x_1469_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
lean_ctor_set(v___x_1469_, 1, v___x_1467_);
lean_ctor_set(v___x_1469_, 2, v___x_1465_);
lean_ctor_set(v___x_1469_, 3, v___x_1465_);
lean_ctor_set_usize(v___x_1469_, 4, v___x_1464_);
return v___x_1469_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__3(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1470_ = lean_box(1);
v___x_1471_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__2, &l_Lean_Meta_mkProjections___closed__2_once, _init_l_Lean_Meta_mkProjections___closed__2);
v___x_1472_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__0, &l_Lean_Meta_mkProjections___closed__0_once, _init_l_Lean_Meta_mkProjections___closed__0);
v___x_1473_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
lean_ctor_set(v___x_1473_, 1, v___x_1471_);
lean_ctor_set(v___x_1473_, 2, v___x_1470_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object* v_n_1476_, lean_object* v_projDecls_1477_, uint8_t v_instImplicit_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___f_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1484_ = l_Lean_instInhabitedName;
v___x_1485_ = lean_box(v_instImplicit_1478_);
v___f_1486_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1486_, 0, v_n_1476_);
lean_closure_set(v___f_1486_, 1, v___x_1484_);
lean_closure_set(v___f_1486_, 2, v___x_1485_);
lean_closure_set(v___f_1486_, 3, v_projDecls_1477_);
v___x_1487_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__3, &l_Lean_Meta_mkProjections___closed__3_once, _init_l_Lean_Meta_mkProjections___closed__3);
v___x_1488_ = ((lean_object*)(l_Lean_Meta_mkProjections___closed__4));
v___x_1489_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v___x_1487_, v___x_1488_, v___f_1486_, v_a_1479_, v_a_1480_, v_a_1481_, v_a_1482_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object* v_n_1490_, lean_object* v_projDecls_1491_, lean_object* v_instImplicit_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
uint8_t v_instImplicit_boxed_1498_; lean_object* v_res_1499_; 
v_instImplicit_boxed_1498_ = lean_unbox(v_instImplicit_1492_);
v_res_1499_ = l_Lean_Meta_mkProjections(v_n_1490_, v_projDecls_1491_, v_instImplicit_boxed_1498_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t v_instImplicit_1500_, lean_object* v_as_1501_, size_t v_sz_1502_, size_t v_i_1503_, lean_object* v_b_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v___x_1510_; 
v___x_1510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1500_, v_as_1501_, v_sz_1502_, v_i_1503_, v_b_1504_, v___y_1505_, v___y_1507_, v___y_1508_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object* v_instImplicit_1511_, lean_object* v_as_1512_, lean_object* v_sz_1513_, lean_object* v_i_1514_, lean_object* v_b_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
uint8_t v_instImplicit_boxed_1521_; size_t v_sz_boxed_1522_; size_t v_i_boxed_1523_; lean_object* v_res_1524_; 
v_instImplicit_boxed_1521_ = lean_unbox(v_instImplicit_1511_);
v_sz_boxed_1522_ = lean_unbox_usize(v_sz_1513_);
lean_dec(v_sz_1513_);
v_i_boxed_1523_ = lean_unbox_usize(v_i_1514_);
lean_dec(v_i_1514_);
v_res_1524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(v_instImplicit_boxed_1521_, v_as_1512_, v_sz_boxed_1522_, v_i_boxed_1523_, v_b_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec_ref(v_as_1512_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object* v_declName_1525_, uint8_t v_s_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_1525_, v_s_1526_, v___y_1528_, v___y_1530_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object* v_declName_1533_, lean_object* v_s_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
uint8_t v_s_boxed_1540_; lean_object* v_res_1541_; 
v_s_boxed_1540_ = lean_unbox(v_s_1534_);
v_res_1541_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(v_declName_1533_, v_s_boxed_1540_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object* v_00_u03b1_1542_, lean_object* v_ref_1543_, lean_object* v_msg_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_1543_, v_msg_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object* v_00_u03b1_1551_, lean_object* v_ref_1552_, lean_object* v_msg_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(v_00_u03b1_1551_, v_ref_1552_, v_msg_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v_ref_1552_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object* v_00_u03b1_1560_, lean_object* v_x_1561_, uint8_t v_isExporting_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_1561_, v_isExporting_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1569_, lean_object* v_x_1570_, lean_object* v_isExporting_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
uint8_t v_isExporting_boxed_1577_; lean_object* v_res_1578_; 
v_isExporting_boxed_1577_ = lean_unbox(v_isExporting_1571_);
v_res_1578_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(v_00_u03b1_1569_, v_x_1570_, v_isExporting_boxed_1577_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object* v_00_u03b1_1579_, lean_object* v_x_1580_, uint8_t v_when_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_1580_, v_when_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object* v_00_u03b1_1588_, lean_object* v_x_1589_, lean_object* v_when_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
uint8_t v_when_boxed_1596_; lean_object* v_res_1597_; 
v_when_boxed_1596_ = lean_unbox(v_when_1590_);
v_res_1597_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(v_00_u03b1_1588_, v_x_1589_, v_when_boxed_1596_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object* v_upperBound_1598_, lean_object* v_projDecls_1599_, lean_object* v___x_1600_, lean_object* v___x_1601_, uint8_t v_instImplicit_1602_, lean_object* v___x_1603_, lean_object* v_params_1604_, lean_object* v_self_1605_, lean_object* v_a_1606_, lean_object* v___x_1607_, lean_object* v_n_1608_, lean_object* v___x_1609_, uint8_t v_a_1610_, lean_object* v_inst_1611_, lean_object* v_R_1612_, lean_object* v_a_1613_, lean_object* v_b_1614_, lean_object* v_c_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_1598_, v_projDecls_1599_, v___x_1600_, v___x_1601_, v_instImplicit_1602_, v___x_1603_, v_params_1604_, v_self_1605_, v_a_1606_, v___x_1607_, v_n_1608_, v___x_1609_, v_a_1610_, v_a_1613_, v_b_1614_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1622_ = _args[0];
lean_object* v_projDecls_1623_ = _args[1];
lean_object* v___x_1624_ = _args[2];
lean_object* v___x_1625_ = _args[3];
lean_object* v_instImplicit_1626_ = _args[4];
lean_object* v___x_1627_ = _args[5];
lean_object* v_params_1628_ = _args[6];
lean_object* v_self_1629_ = _args[7];
lean_object* v_a_1630_ = _args[8];
lean_object* v___x_1631_ = _args[9];
lean_object* v_n_1632_ = _args[10];
lean_object* v___x_1633_ = _args[11];
lean_object* v_a_1634_ = _args[12];
lean_object* v_inst_1635_ = _args[13];
lean_object* v_R_1636_ = _args[14];
lean_object* v_a_1637_ = _args[15];
lean_object* v_b_1638_ = _args[16];
lean_object* v_c_1639_ = _args[17];
lean_object* v___y_1640_ = _args[18];
lean_object* v___y_1641_ = _args[19];
lean_object* v___y_1642_ = _args[20];
lean_object* v___y_1643_ = _args[21];
lean_object* v___y_1644_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_1645_; uint8_t v_a_18778__boxed_1646_; lean_object* v_res_1647_; 
v_instImplicit_boxed_1645_ = lean_unbox(v_instImplicit_1626_);
v_a_18778__boxed_1646_ = lean_unbox(v_a_1634_);
v_res_1647_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(v_upperBound_1622_, v_projDecls_1623_, v___x_1624_, v___x_1625_, v_instImplicit_boxed_1645_, v___x_1627_, v_params_1628_, v_self_1629_, v_a_1630_, v___x_1631_, v_n_1632_, v___x_1633_, v_a_18778__boxed_1646_, v_inst_1635_, v_R_1636_, v_a_1637_, v_b_1638_, v_c_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec_ref(v_projDecls_1623_);
lean_dec(v_upperBound_1622_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object* v_k_1648_, uint8_t v_allowLevelAssignments_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1649_, v_k_1648_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1655_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1655_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
v_a_1664_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1655_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1655_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object* v_k_1672_, lean_object* v_allowLevelAssignments_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1679_; lean_object* v_res_1680_; 
v_allowLevelAssignments_boxed_1679_ = lean_unbox(v_allowLevelAssignments_1673_);
v_res_1680_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1672_, v_allowLevelAssignments_boxed_1679_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object* v_00_u03b1_1681_, lean_object* v_k_1682_, uint8_t v_allowLevelAssignments_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1682_, v_allowLevelAssignments_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object* v_00_u03b1_1690_, lean_object* v_k_1691_, lean_object* v_allowLevelAssignments_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1698_; lean_object* v_res_1699_; 
v_allowLevelAssignments_boxed_1698_ = lean_unbox(v_allowLevelAssignments_1692_);
v_res_1699_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(v_00_u03b1_1690_, v_k_1691_, v_allowLevelAssignments_boxed_1698_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object* v_as_1700_, size_t v_sz_1701_, size_t v_i_1702_, lean_object* v_b_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
uint8_t v___x_1709_; 
v___x_1709_ = lean_usize_dec_lt(v_i_1702_, v_sz_1701_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v_b_1703_);
return v___x_1710_;
}
else
{
lean_object* v_snd_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1766_; 
v_snd_1711_ = lean_ctor_get(v_b_1703_, 1);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_b_1703_);
if (v_isSharedCheck_1766_ == 0)
{
lean_object* v_unused_1767_; 
v_unused_1767_ = lean_ctor_get(v_b_1703_, 0);
lean_dec(v_unused_1767_);
v___x_1713_ = v_b_1703_;
v_isShared_1714_ = v_isSharedCheck_1766_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_snd_1711_);
lean_dec(v_b_1703_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1766_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_array_1715_; lean_object* v_start_1716_; lean_object* v_stop_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v_array_1715_ = lean_ctor_get(v_snd_1711_, 0);
v_start_1716_ = lean_ctor_get(v_snd_1711_, 1);
v_stop_1717_ = lean_ctor_get(v_snd_1711_, 2);
v___x_1718_ = lean_box(0);
v___x_1719_ = lean_nat_dec_lt(v_start_1716_, v_stop_1717_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1721_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1718_);
v___x_1721_ = v___x_1713_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_snd_1711_);
v___x_1721_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1722_; 
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
return v___x_1722_;
}
}
else
{
lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1762_; 
lean_inc(v_stop_1717_);
lean_inc(v_start_1716_);
lean_inc_ref(v_array_1715_);
v_isSharedCheck_1762_ = !lean_is_exclusive(v_snd_1711_);
if (v_isSharedCheck_1762_ == 0)
{
lean_object* v_unused_1763_; lean_object* v_unused_1764_; lean_object* v_unused_1765_; 
v_unused_1763_ = lean_ctor_get(v_snd_1711_, 2);
lean_dec(v_unused_1763_);
v_unused_1764_ = lean_ctor_get(v_snd_1711_, 1);
lean_dec(v_unused_1764_);
v_unused_1765_ = lean_ctor_get(v_snd_1711_, 0);
lean_dec(v_unused_1765_);
v___x_1725_ = v_snd_1711_;
v_isShared_1726_ = v_isSharedCheck_1762_;
goto v_resetjp_1724_;
}
else
{
lean_dec(v_snd_1711_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1762_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v_a_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; 
v_a_1727_ = lean_array_uget_borrowed(v_as_1700_, v_i_1702_);
v___x_1728_ = lean_array_fget(v_array_1715_, v_start_1716_);
v___x_1729_ = lean_unsigned_to_nat(1u);
v___x_1730_ = lean_nat_add(v_start_1716_, v___x_1729_);
lean_dec(v_start_1716_);
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 1, v___x_1730_);
v___x_1732_ = v___x_1725_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_array_1715_);
lean_ctor_set(v_reuseFailAlloc_1761_, 1, v___x_1730_);
lean_ctor_set(v_reuseFailAlloc_1761_, 2, v_stop_1717_);
v___x_1732_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; 
lean_inc(v_a_1727_);
v___x_1733_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1727_, v___x_1728_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1752_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1752_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1752_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
uint8_t v___x_1738_; 
v___x_1738_ = lean_unbox(v_a_1734_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1739_, 0, v_a_1734_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 1, v___x_1732_);
lean_ctor_set(v___x_1713_, 0, v___x_1739_);
v___x_1741_ = v___x_1713_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1739_);
lean_ctor_set(v_reuseFailAlloc_1745_, 1, v___x_1732_);
v___x_1741_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
lean_object* v___x_1743_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v___x_1741_);
v___x_1743_ = v___x_1736_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1741_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
else
{
lean_object* v___x_1747_; 
lean_del_object(v___x_1736_);
lean_dec(v_a_1734_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 1, v___x_1732_);
lean_ctor_set(v___x_1713_, 0, v___x_1718_);
v___x_1747_ = v___x_1713_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v___x_1732_);
v___x_1747_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
size_t v___x_1748_; size_t v___x_1749_; 
v___x_1748_ = ((size_t)1ULL);
v___x_1749_ = lean_usize_add(v_i_1702_, v___x_1748_);
v_i_1702_ = v___x_1749_;
v_b_1703_ = v___x_1747_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1713_);
v_a_1753_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1733_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1733_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object* v_as_1768_, lean_object* v_sz_1769_, lean_object* v_i_1770_, lean_object* v_b_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
size_t v_sz_boxed_1777_; size_t v_i_boxed_1778_; lean_object* v_res_1779_; 
v_sz_boxed_1777_ = lean_unbox_usize(v_sz_1769_);
lean_dec(v_sz_1769_);
v_i_boxed_1778_ = lean_unbox_usize(v_i_1770_);
lean_dec(v_i_1770_);
v_res_1779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_as_1768_, v_sz_boxed_1777_, v_i_boxed_1778_, v_b_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec_ref(v_as_1768_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t v___x_1780_, lean_object* v_params2_1781_, lean_object* v___x_1782_, lean_object* v_params1_1783_, uint8_t v___x_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
if (v___x_1780_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec(v___x_1782_);
lean_dec_ref(v_params2_1781_);
v___x_1790_ = lean_box(v___x_1780_);
v___x_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
return v___x_1791_;
}
else
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; size_t v_sz_1796_; size_t v___x_1797_; lean_object* v___x_1798_; 
v___x_1792_ = lean_unsigned_to_nat(0u);
v___x_1793_ = l_Array_toSubarray___redArg(v_params2_1781_, v___x_1792_, v___x_1782_);
v___x_1794_ = lean_box(0);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
lean_ctor_set(v___x_1795_, 1, v___x_1793_);
v_sz_1796_ = lean_array_size(v_params1_1783_);
v___x_1797_ = ((size_t)0ULL);
v___x_1798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_params1_1783_, v_sz_1796_, v___x_1797_, v___x_1795_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1812_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1801_ = v___x_1798_;
v_isShared_1802_ = v_isSharedCheck_1812_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1798_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1812_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v_fst_1803_; 
v_fst_1803_ = lean_ctor_get(v_a_1799_, 0);
lean_inc(v_fst_1803_);
lean_dec(v_a_1799_);
if (lean_obj_tag(v_fst_1803_) == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___x_1804_ = lean_box(v___x_1784_);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v___x_1804_);
v___x_1806_ = v___x_1801_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v___x_1804_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
return v___x_1806_;
}
}
else
{
lean_object* v_val_1808_; lean_object* v___x_1810_; 
v_val_1808_ = lean_ctor_get(v_fst_1803_, 0);
lean_inc(v_val_1808_);
lean_dec_ref_known(v_fst_1803_, 1);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v_val_1808_);
v___x_1810_ = v___x_1801_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_val_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
v_a_1813_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1798_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1798_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object* v___x_1821_, lean_object* v_params2_1822_, lean_object* v___x_1823_, lean_object* v_params1_1824_, lean_object* v___x_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
uint8_t v___x_2007__boxed_1831_; uint8_t v___x_2009__boxed_1832_; lean_object* v_res_1833_; 
v___x_2007__boxed_1831_ = lean_unbox(v___x_1821_);
v___x_2009__boxed_1832_ = lean_unbox(v___x_1825_);
v_res_1833_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(v___x_2007__boxed_1831_, v_params2_1822_, v___x_1823_, v_params1_1824_, v___x_2009__boxed_1832_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec_ref(v_params1_1824_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object* v_params1_1834_, lean_object* v_params2_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___y_1847_; uint8_t v___x_1848_; lean_object* v___x_1849_; 
v___x_1841_ = lean_array_get_size(v_params1_1834_);
v___x_1842_ = lean_array_get_size(v_params2_1835_);
v___x_1843_ = lean_nat_dec_eq(v___x_1841_, v___x_1842_);
v___x_1844_ = 1;
v___x_1845_ = lean_box(v___x_1843_);
v___x_1846_ = lean_box(v___x_1844_);
v___y_1847_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed), 10, 5);
lean_closure_set(v___y_1847_, 0, v___x_1845_);
lean_closure_set(v___y_1847_, 1, v_params2_1835_);
lean_closure_set(v___y_1847_, 2, v___x_1842_);
lean_closure_set(v___y_1847_, 3, v_params1_1834_);
lean_closure_set(v___y_1847_, 4, v___x_1846_);
v___x_1848_ = 0;
v___x_1849_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v___y_1847_, v___x_1848_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object* v_params1_1850_, lean_object* v_params2_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params1_1850_, v_params2_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
lean_dec(v_a_1855_);
lean_dec_ref(v_a_1854_);
lean_dec(v_a_1853_);
lean_dec_ref(v_a_1852_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object* v_declName_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v___x_1861_; lean_object* v_env_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1861_ = lean_st_ref_get(v___y_1859_);
v_env_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc_ref(v_env_1862_);
lean_dec(v___x_1861_);
v___x_1863_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1862_, v_declName_1858_);
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object* v_declName_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1865_, v___y_1866_);
lean_dec(v___y_1866_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object* v_declName_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v___x_1875_; 
v___x_1875_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1869_, v___y_1873_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object* v_declName_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(v_declName_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
lean_dec(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
return v_res_1882_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0(void){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_box(0);
v___x_1884_ = l_unsafeCast___redArg(v___x_1883_);
return v___x_1884_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1(void){
_start:
{
lean_object* v___x_1885_; lean_object* v_dummy_1886_; 
v___x_1885_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_dummy_1886_ = l_Lean_Expr_sort___override(v___x_1885_);
return v_dummy_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object* v_ctor_1887_, lean_object* v_induct_1888_, lean_object* v_params_1889_, lean_object* v_idx_1890_, lean_object* v_e_1891_, lean_object* v_x_x3f_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
if (lean_obj_tag(v_e_1891_) == 11)
{
lean_object* v_typeName_1904_; lean_object* v_idx_1905_; lean_object* v_struct_1906_; uint8_t v___x_1953_; 
v_typeName_1904_ = lean_ctor_get(v_e_1891_, 0);
v_idx_1905_ = lean_ctor_get(v_e_1891_, 1);
v_struct_1906_ = lean_ctor_get(v_e_1891_, 2);
lean_inc_ref(v_struct_1906_);
v___x_1953_ = lean_nat_dec_eq(v_idx_1905_, v_idx_1890_);
if (v___x_1953_ == 0)
{
lean_dec_ref(v_struct_1906_);
lean_dec_ref_known(v_e_1891_, 3);
lean_dec_ref(v_params_1889_);
goto v___jp_1898_;
}
else
{
uint8_t v___x_1954_; 
v___x_1954_ = lean_name_eq(v_induct_1888_, v_typeName_1904_);
if (v___x_1954_ == 0)
{
lean_dec_ref(v_struct_1906_);
lean_dec_ref_known(v_e_1891_, 3);
lean_dec_ref(v_params_1889_);
goto v___jp_1898_;
}
else
{
if (lean_obj_tag(v_x_x3f_1892_) == 0)
{
goto v___jp_1907_;
}
else
{
lean_object* v_val_1955_; uint8_t v___x_1956_; 
v_val_1955_ = lean_ctor_get(v_x_x3f_1892_, 0);
v___x_1956_ = lean_expr_eqv(v_val_1955_, v_struct_1906_);
if (v___x_1956_ == 0)
{
lean_dec_ref(v_struct_1906_);
lean_dec_ref_known(v_e_1891_, 3);
lean_dec_ref(v_params_1889_);
goto v___jp_1898_;
}
else
{
goto v___jp_1907_;
}
}
}
}
v___jp_1907_:
{
lean_object* v___x_1908_; 
lean_inc(v_a_1896_);
lean_inc_ref(v_a_1895_);
lean_inc(v_a_1894_);
lean_inc_ref(v_a_1893_);
v___x_1908_ = lean_infer_type(v_e_1891_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
lean_inc(v_a_1896_);
lean_inc_ref(v_a_1895_);
lean_inc(v_a_1894_);
lean_inc_ref(v_a_1893_);
v___x_1910_ = lean_whnf(v_a_1909_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v_dummy_1912_; lean_object* v_nargs_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v_dummy_1912_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1);
v_nargs_1913_ = l_Lean_Expr_getAppNumArgs(v_a_1911_);
lean_inc(v_nargs_1913_);
v___x_1914_ = lean_mk_array(v_nargs_1913_, v_dummy_1912_);
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = lean_nat_sub(v_nargs_1913_, v___x_1915_);
lean_dec(v_nargs_1913_);
v___x_1917_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1911_, v___x_1914_, v___x_1916_);
v___x_1918_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1889_, v___x_1917_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1928_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1928_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1928_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_unbox(v_a_1919_);
lean_dec(v_a_1919_);
if (v___x_1923_ == 0)
{
lean_del_object(v___x_1921_);
lean_dec_ref(v_struct_1906_);
goto v___jp_1898_;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_struct_1906_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1924_);
v___x_1926_ = v___x_1921_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec_ref(v_struct_1906_);
v_a_1929_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1918_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1918_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec_ref(v_struct_1906_);
lean_dec_ref(v_params_1889_);
v_a_1937_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1910_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1910_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec_ref(v_struct_1906_);
lean_dec_ref(v_params_1889_);
v_a_1945_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1908_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1908_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
else
{
lean_object* v___x_1957_; 
v___x_1957_ = l_Lean_Expr_getAppFn(v_e_1891_);
if (lean_obj_tag(v___x_1957_) == 4)
{
lean_object* v_declName_1958_; lean_object* v___x_1959_; lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_2009_; 
v_declName_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_declName_1958_);
lean_dec_ref_known(v___x_1957_, 2);
v___x_1959_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1958_, v_a_1896_);
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_1962_ = v___x_1959_;
v_isShared_1963_ = v_isSharedCheck_2009_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_2009_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___y_1965_; lean_object* v___y_1966_; 
if (lean_obj_tag(v_a_1960_) == 1)
{
lean_object* v_val_1994_; lean_object* v_ctorName_1995_; lean_object* v_numParams_1996_; lean_object* v_i_1997_; uint8_t v___y_1999_; uint8_t v___x_2007_; 
v_val_1994_ = lean_ctor_get(v_a_1960_, 0);
lean_inc(v_val_1994_);
lean_dec_ref_known(v_a_1960_, 1);
v_ctorName_1995_ = lean_ctor_get(v_val_1994_, 0);
lean_inc(v_ctorName_1995_);
v_numParams_1996_ = lean_ctor_get(v_val_1994_, 1);
lean_inc(v_numParams_1996_);
v_i_1997_ = lean_ctor_get(v_val_1994_, 2);
lean_inc(v_i_1997_);
lean_dec(v_val_1994_);
v___x_2007_ = lean_name_eq(v_ctorName_1995_, v_ctor_1887_);
lean_dec(v_ctorName_1995_);
if (v___x_2007_ == 0)
{
lean_dec(v_i_1997_);
v___y_1999_ = v___x_2007_;
goto v___jp_1998_;
}
else
{
uint8_t v___x_2008_; 
v___x_2008_ = lean_nat_dec_eq(v_i_1997_, v_idx_1890_);
lean_dec(v_i_1997_);
v___y_1999_ = v___x_2008_;
goto v___jp_1998_;
}
v___jp_1998_:
{
if (v___y_1999_ == 0)
{
lean_dec(v_numParams_1996_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_e_1891_);
lean_dec_ref(v_params_1889_);
goto v___jp_1901_;
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2000_ = l_Lean_Expr_getAppNumArgs(v_e_1891_);
v___x_2001_ = lean_unsigned_to_nat(1u);
v___x_2002_ = lean_nat_add(v_numParams_1996_, v___x_2001_);
lean_dec(v_numParams_1996_);
v___x_2003_ = lean_nat_dec_eq(v___x_2000_, v___x_2002_);
lean_dec(v___x_2002_);
lean_dec(v___x_2000_);
if (v___x_2003_ == 0)
{
lean_del_object(v___x_1962_);
lean_dec_ref(v_e_1891_);
lean_dec_ref(v_params_1889_);
goto v___jp_1901_;
}
else
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lean_Expr_appArg_x21(v_e_1891_);
if (lean_obj_tag(v_x_x3f_1892_) == 0)
{
v___y_1965_ = v___x_2004_;
v___y_1966_ = v___x_2001_;
goto v___jp_1964_;
}
else
{
lean_object* v_val_2005_; uint8_t v___x_2006_; 
v_val_2005_ = lean_ctor_get(v_x_x3f_1892_, 0);
v___x_2006_ = lean_expr_eqv(v_val_2005_, v___x_2004_);
if (v___x_2006_ == 0)
{
lean_dec_ref(v___x_2004_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_e_1891_);
lean_dec_ref(v_params_1889_);
goto v___jp_1901_;
}
else
{
v___y_1965_ = v___x_2004_;
v___y_1966_ = v___x_2001_;
goto v___jp_1964_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1962_);
lean_dec(v_a_1960_);
lean_dec_ref(v_e_1891_);
lean_dec_ref(v_params_1889_);
goto v___jp_1901_;
}
v___jp_1964_:
{
lean_object* v___x_1967_; lean_object* v_dummy_1968_; lean_object* v_nargs_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1967_ = l_Lean_Expr_appFn_x21(v_e_1891_);
lean_dec_ref(v_e_1891_);
v_dummy_1968_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1);
v_nargs_1969_ = l_Lean_Expr_getAppNumArgs(v___x_1967_);
lean_inc(v_nargs_1969_);
v___x_1970_ = lean_mk_array(v_nargs_1969_, v_dummy_1968_);
v___x_1971_ = lean_nat_sub(v_nargs_1969_, v___y_1966_);
lean_dec(v_nargs_1969_);
v___x_1972_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1967_, v___x_1970_, v___x_1971_);
v___x_1973_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1889_, v___x_1972_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1985_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1985_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1985_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
uint8_t v___x_1978_; 
v___x_1978_ = lean_unbox(v_a_1974_);
lean_dec(v_a_1974_);
if (v___x_1978_ == 0)
{
lean_del_object(v___x_1976_);
lean_dec_ref(v___y_1965_);
lean_del_object(v___x_1962_);
goto v___jp_1901_;
}
else
{
lean_object* v___x_1980_; 
if (v_isShared_1963_ == 0)
{
lean_ctor_set_tag(v___x_1962_, 1);
lean_ctor_set(v___x_1962_, 0, v___y_1965_);
v___x_1980_ = v___x_1962_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___y_1965_);
v___x_1980_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1982_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1980_);
v___x_1982_ = v___x_1976_;
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
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v___y_1965_);
lean_del_object(v___x_1962_);
v_a_1986_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1973_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1973_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1957_);
lean_dec_ref(v_e_1891_);
lean_dec_ref(v_params_1889_);
goto v___jp_1901_;
}
}
v___jp_1898_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = lean_box(0);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
return v___x_1900_;
}
v___jp_1901_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object* v_ctor_2010_, lean_object* v_induct_2011_, lean_object* v_params_2012_, lean_object* v_idx_2013_, lean_object* v_e_2014_, lean_object* v_x_x3f_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_ctor_2010_, v_induct_2011_, v_params_2012_, v_idx_2013_, v_e_2014_, v_x_x3f_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_);
lean_dec(v_a_2019_);
lean_dec_ref(v_a_2018_);
lean_dec(v_a_2017_);
lean_dec_ref(v_a_2016_);
lean_dec(v_x_x3f_2015_);
lean_dec(v_idx_2013_);
lean_dec(v_induct_2011_);
lean_dec(v_ctor_2010_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object* v_constName_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; lean_object* v_env_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; 
v___x_2028_ = lean_st_ref_get(v___y_2026_);
v_env_2032_ = lean_ctor_get(v___x_2028_, 0);
lean_inc_ref(v_env_2032_);
lean_dec(v___x_2028_);
v___x_2033_ = 0;
v___x_2034_ = l_Lean_Environment_findAsync_x3f(v_env_2032_, v_constName_2022_, v___x_2033_);
if (lean_obj_tag(v___x_2034_) == 1)
{
lean_object* v_val_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2054_; 
v_val_2035_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2037_ = v___x_2034_;
v_isShared_2038_ = v_isSharedCheck_2054_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_val_2035_);
lean_dec(v___x_2034_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2054_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
uint8_t v_kind_2039_; 
v_kind_2039_ = lean_ctor_get_uint8(v_val_2035_, sizeof(void*)*3);
if (v_kind_2039_ == 6)
{
lean_object* v___x_2040_; 
v___x_2040_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2035_);
if (lean_obj_tag(v___x_2040_) == 6)
{
lean_object* v_val_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2051_; 
v_val_2041_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2043_ = v___x_2040_;
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_val_2041_);
lean_dec(v___x_2040_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v_val_2041_);
v___x_2046_ = v___x_2037_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_val_2041_);
v___x_2046_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v___x_2048_; 
if (v_isShared_2044_ == 0)
{
lean_ctor_set_tag(v___x_2043_, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2046_);
v___x_2048_ = v___x_2043_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
lean_dec_ref(v___x_2040_);
lean_del_object(v___x_2037_);
v___x_2052_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_2053_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_2052_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
return v___x_2053_;
}
}
else
{
lean_del_object(v___x_2037_);
lean_dec(v_val_2035_);
goto v___jp_2029_;
}
}
}
else
{
lean_dec(v___x_2034_);
goto v___jp_2029_;
}
v___jp_2029_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object* v_constName_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_constName_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object* v_upperBound_2070_, lean_object* v___x_2071_, lean_object* v___x_2072_, lean_object* v_declName_2073_, lean_object* v___x_2074_, lean_object* v___x_2075_, lean_object* v_a_2076_, lean_object* v_val_2077_, lean_object* v_a_2078_, lean_object* v_b_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
uint8_t v___x_2085_; 
v___x_2085_ = lean_nat_dec_lt(v_a_2078_, v_upperBound_2070_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; 
lean_dec(v_a_2078_);
lean_dec_ref(v___x_2075_);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v_b_2079_);
return v___x_2086_;
}
else
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
lean_dec_ref(v_b_2079_);
v___x_2087_ = l_Lean_instInhabitedExpr;
v___x_2088_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2089_ = lean_nat_add(v___x_2071_, v_a_2078_);
v___x_2090_ = lean_array_get_borrowed(v___x_2087_, v___x_2072_, v___x_2089_);
lean_dec(v___x_2089_);
lean_inc(v___x_2090_);
lean_inc_ref(v___x_2075_);
v___x_2091_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2073_, v___x_2074_, v___x_2075_, v_a_2078_, v___x_2090_, v_a_2076_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2109_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2109_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2109_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
if (lean_obj_tag(v_a_2092_) == 1)
{
lean_object* v_val_2096_; uint8_t v___x_2097_; 
v_val_2096_ = lean_ctor_get(v_a_2092_, 0);
lean_inc(v_val_2096_);
lean_dec_ref_known(v_a_2092_, 1);
v___x_2097_ = lean_expr_eqv(v_val_2096_, v_val_2077_);
lean_dec(v_val_2096_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; lean_object* v___x_2100_; 
lean_dec(v_a_2078_);
lean_dec_ref(v___x_2075_);
v___x_2098_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2098_);
v___x_2100_ = v___x_2094_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_del_object(v___x_2094_);
v___x_2102_ = lean_unsigned_to_nat(1u);
v___x_2103_ = lean_nat_add(v_a_2078_, v___x_2102_);
lean_dec(v_a_2078_);
v_a_2078_ = v___x_2103_;
v_b_2079_ = v___x_2088_;
goto _start;
}
}
else
{
lean_object* v___x_2105_; lean_object* v___x_2107_; 
lean_dec(v_a_2092_);
lean_dec(v_a_2078_);
lean_dec_ref(v___x_2075_);
v___x_2105_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2105_);
v___x_2107_ = v___x_2094_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_dec(v_a_2078_);
lean_dec_ref(v___x_2075_);
v_a_2110_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2091_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2091_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_2118_, lean_object* v___x_2119_, lean_object* v___x_2120_, lean_object* v_declName_2121_, lean_object* v___x_2122_, lean_object* v___x_2123_, lean_object* v_a_2124_, lean_object* v_val_2125_, lean_object* v_a_2126_, lean_object* v_b_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v_res_2133_; 
v_res_2133_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2118_, v___x_2119_, v___x_2120_, v_declName_2121_, v___x_2122_, v___x_2123_, v_a_2124_, v_val_2125_, v_a_2126_, v_b_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec_ref(v_val_2125_);
lean_dec(v_a_2124_);
lean_dec(v___x_2122_);
lean_dec(v_declName_2121_);
lean_dec_ref(v___x_2120_);
lean_dec(v___x_2119_);
lean_dec(v_upperBound_2118_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object* v_e_2134_, lean_object* v_p_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_Lean_Expr_getAppFn(v_e_2134_);
if (lean_obj_tag(v___x_2141_) == 4)
{
lean_object* v_declName_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v_declName_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc_n(v_declName_2142_, 2);
lean_dec_ref_known(v___x_2141_, 2);
v___x_2143_ = l_Lean_instInhabitedExpr;
v___x_2144_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_declName_2142_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2216_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2216_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2216_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
if (lean_obj_tag(v_a_2145_) == 1)
{
lean_object* v_val_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2213_; 
v_val_2154_ = lean_ctor_get(v_a_2145_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_a_2145_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2156_ = v_a_2145_;
v_isShared_2157_ = v_isSharedCheck_2213_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_val_2154_);
lean_dec(v_a_2145_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2213_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v_induct_2158_; lean_object* v_numParams_2159_; lean_object* v_numFields_2160_; lean_object* v___x_2161_; uint8_t v___x_2162_; 
v_induct_2158_ = lean_ctor_get(v_val_2154_, 1);
lean_inc_n(v_induct_2158_, 2);
v_numParams_2159_ = lean_ctor_get(v_val_2154_, 3);
lean_inc(v_numParams_2159_);
v_numFields_2160_ = lean_ctor_get(v_val_2154_, 4);
lean_inc(v_numFields_2160_);
lean_dec(v_val_2154_);
v___x_2161_ = lean_apply_1(v_p_2135_, v_induct_2158_);
v___x_2162_ = lean_unbox(v___x_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
lean_dec(v_numFields_2160_);
lean_dec(v_numParams_2159_);
lean_dec(v_induct_2158_);
lean_del_object(v___x_2147_);
lean_dec(v_declName_2142_);
lean_dec_ref(v_e_2134_);
v___x_2163_ = lean_box(0);
if (v_isShared_2157_ == 0)
{
lean_ctor_set_tag(v___x_2156_, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2163_);
v___x_2165_ = v___x_2156_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
else
{
lean_object* v___x_2167_; uint8_t v___x_2168_; 
lean_del_object(v___x_2156_);
v___x_2167_ = lean_unsigned_to_nat(0u);
v___x_2168_ = lean_nat_dec_lt(v___x_2167_, v_numFields_2160_);
if (v___x_2168_ == 0)
{
lean_dec(v_numFields_2160_);
lean_dec(v_numParams_2159_);
lean_dec(v_induct_2158_);
lean_dec(v_declName_2142_);
lean_dec_ref(v_e_2134_);
goto v___jp_2149_;
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v___x_2169_ = l_Lean_Expr_getAppNumArgs(v_e_2134_);
v___x_2170_ = lean_nat_add(v_numParams_2159_, v_numFields_2160_);
v___x_2171_ = lean_nat_dec_eq(v___x_2169_, v___x_2170_);
lean_dec(v___x_2170_);
if (v___x_2171_ == 0)
{
lean_dec(v___x_2169_);
lean_dec(v_numFields_2160_);
lean_dec(v_numParams_2159_);
lean_dec(v_induct_2158_);
lean_dec(v_declName_2142_);
lean_dec_ref(v_e_2134_);
goto v___jp_2149_;
}
else
{
lean_object* v_dummy_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
lean_del_object(v___x_2147_);
v_dummy_2172_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1);
lean_inc(v___x_2169_);
v___x_2173_ = lean_mk_array(v___x_2169_, v_dummy_2172_);
v___x_2174_ = lean_unsigned_to_nat(1u);
v___x_2175_ = lean_nat_sub(v___x_2169_, v___x_2174_);
lean_dec(v___x_2169_);
v___x_2176_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2134_, v___x_2173_, v___x_2175_);
lean_inc(v_numParams_2159_);
v___x_2177_ = l_Array_extract___redArg(v___x_2176_, v___x_2167_, v_numParams_2159_);
v___x_2178_ = lean_array_get(v___x_2143_, v___x_2176_, v_numParams_2159_);
v___x_2179_ = lean_box(0);
lean_inc_ref(v___x_2177_);
v___x_2180_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2142_, v_induct_2158_, v___x_2177_, v___x_2167_, v___x_2178_, v___x_2179_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2212_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2183_ = v___x_2180_;
v_isShared_2184_ = v_isSharedCheck_2212_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2180_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2212_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
if (lean_obj_tag(v_a_2181_) == 1)
{
lean_object* v_val_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
lean_del_object(v___x_2183_);
v_val_2185_ = lean_ctor_get(v_a_2181_, 0);
v___x_2186_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2187_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_numFields_2160_, v_numParams_2159_, v___x_2176_, v_declName_2142_, v_induct_2158_, v___x_2177_, v_a_2181_, v_val_2185_, v___x_2174_, v___x_2186_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
lean_dec(v_induct_2158_);
lean_dec(v_declName_2142_);
lean_dec_ref(v___x_2176_);
lean_dec(v_numParams_2159_);
lean_dec(v_numFields_2160_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2200_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2190_ = v___x_2187_;
v_isShared_2191_ = v_isSharedCheck_2200_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2187_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2200_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v_fst_2192_; 
v_fst_2192_ = lean_ctor_get(v_a_2188_, 0);
lean_inc(v_fst_2192_);
lean_dec(v_a_2188_);
if (lean_obj_tag(v_fst_2192_) == 0)
{
lean_object* v___x_2194_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 0, v_a_2181_);
v___x_2194_ = v___x_2190_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2181_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
else
{
lean_object* v_val_2196_; lean_object* v___x_2198_; 
lean_dec_ref_known(v_a_2181_, 1);
v_val_2196_ = lean_ctor_get(v_fst_2192_, 0);
lean_inc(v_val_2196_);
lean_dec_ref_known(v_fst_2192_, 1);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 0, v_val_2196_);
v___x_2198_ = v___x_2190_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_val_2196_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_dec_ref_known(v_a_2181_, 1);
v_a_2201_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2187_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2187_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
else
{
lean_object* v___x_2210_; 
lean_dec(v_a_2181_);
lean_dec_ref(v___x_2177_);
lean_dec_ref(v___x_2176_);
lean_dec(v_numFields_2160_);
lean_dec(v_numParams_2159_);
lean_dec(v_induct_2158_);
lean_dec(v_declName_2142_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 0, v___x_2179_);
v___x_2210_ = v___x_2183_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2179_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
else
{
lean_dec_ref(v___x_2177_);
lean_dec_ref(v___x_2176_);
lean_dec(v_numFields_2160_);
lean_dec(v_numParams_2159_);
lean_dec(v_induct_2158_);
lean_dec(v_declName_2142_);
return v___x_2180_;
}
}
}
}
}
}
else
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_del_object(v___x_2147_);
lean_dec(v_a_2145_);
lean_dec(v_declName_2142_);
lean_dec_ref(v_p_2135_);
lean_dec_ref(v_e_2134_);
v___x_2214_ = lean_box(0);
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
return v___x_2215_;
}
v___jp_2149_:
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = lean_box(0);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2150_);
v___x_2152_ = v___x_2147_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
lean_dec(v_declName_2142_);
lean_dec_ref(v_p_2135_);
lean_dec_ref(v_e_2134_);
v_a_2217_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2144_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2144_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_object* v___x_2225_; lean_object* v___x_2226_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v_p_2135_);
lean_dec_ref(v_e_2134_);
v___x_2225_ = lean_box(0);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object* v_e_2227_, lean_object* v_p_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Meta_etaStruct_x3f(v_e_2227_, v_p_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
lean_dec(v_a_2232_);
lean_dec_ref(v_a_2231_);
lean_dec(v_a_2230_);
lean_dec_ref(v_a_2229_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object* v_upperBound_2235_, lean_object* v___x_2236_, lean_object* v___x_2237_, lean_object* v_declName_2238_, lean_object* v___x_2239_, lean_object* v___x_2240_, lean_object* v_a_2241_, lean_object* v_val_2242_, lean_object* v_inst_2243_, lean_object* v_R_2244_, lean_object* v_a_2245_, lean_object* v_b_2246_, lean_object* v_c_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2235_, v___x_2236_, v___x_2237_, v_declName_2238_, v___x_2239_, v___x_2240_, v_a_2241_, v_val_2242_, v_a_2245_, v_b_2246_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2254_ = _args[0];
lean_object* v___x_2255_ = _args[1];
lean_object* v___x_2256_ = _args[2];
lean_object* v_declName_2257_ = _args[3];
lean_object* v___x_2258_ = _args[4];
lean_object* v___x_2259_ = _args[5];
lean_object* v_a_2260_ = _args[6];
lean_object* v_val_2261_ = _args[7];
lean_object* v_inst_2262_ = _args[8];
lean_object* v_R_2263_ = _args[9];
lean_object* v_a_2264_ = _args[10];
lean_object* v_b_2265_ = _args[11];
lean_object* v_c_2266_ = _args[12];
lean_object* v___y_2267_ = _args[13];
lean_object* v___y_2268_ = _args[14];
lean_object* v___y_2269_ = _args[15];
lean_object* v___y_2270_ = _args[16];
lean_object* v___y_2271_ = _args[17];
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(v_upperBound_2254_, v___x_2255_, v___x_2256_, v_declName_2257_, v___x_2258_, v___x_2259_, v_a_2260_, v_val_2261_, v_inst_2262_, v_R_2263_, v_a_2264_, v_b_2265_, v_c_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec_ref(v_val_2261_);
lean_dec(v_a_2260_);
lean_dec(v___x_2258_);
lean_dec(v_declName_2257_);
lean_dec_ref(v___x_2256_);
lean_dec(v___x_2255_);
lean_dec(v_upperBound_2254_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object* v_e_2273_, lean_object* v___y_2274_){
_start:
{
uint8_t v___x_2276_; 
v___x_2276_ = l_Lean_Expr_hasMVar(v_e_2273_);
if (v___x_2276_ == 0)
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_e_2273_);
return v___x_2277_;
}
else
{
lean_object* v___x_2278_; lean_object* v_mctx_2279_; lean_object* v___x_2280_; lean_object* v_fst_2281_; lean_object* v_snd_2282_; lean_object* v___x_2283_; lean_object* v_cache_2284_; lean_object* v_zetaDeltaFVarIds_2285_; lean_object* v_postponed_2286_; lean_object* v_diag_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2296_; 
v___x_2278_ = lean_st_ref_get(v___y_2274_);
v_mctx_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc_ref(v_mctx_2279_);
lean_dec(v___x_2278_);
v___x_2280_ = l_Lean_instantiateMVarsCore(v_mctx_2279_, v_e_2273_);
v_fst_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_fst_2281_);
v_snd_2282_ = lean_ctor_get(v___x_2280_, 1);
lean_inc(v_snd_2282_);
lean_dec_ref(v___x_2280_);
v___x_2283_ = lean_st_ref_take(v___y_2274_);
v_cache_2284_ = lean_ctor_get(v___x_2283_, 1);
v_zetaDeltaFVarIds_2285_ = lean_ctor_get(v___x_2283_, 2);
v_postponed_2286_ = lean_ctor_get(v___x_2283_, 3);
v_diag_2287_ = lean_ctor_get(v___x_2283_, 4);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2296_ == 0)
{
lean_object* v_unused_2297_; 
v_unused_2297_ = lean_ctor_get(v___x_2283_, 0);
lean_dec(v_unused_2297_);
v___x_2289_ = v___x_2283_;
v_isShared_2290_ = v_isSharedCheck_2296_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_diag_2287_);
lean_inc(v_postponed_2286_);
lean_inc(v_zetaDeltaFVarIds_2285_);
lean_inc(v_cache_2284_);
lean_dec(v___x_2283_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2296_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v_snd_2282_);
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_snd_2282_);
lean_ctor_set(v_reuseFailAlloc_2295_, 1, v_cache_2284_);
lean_ctor_set(v_reuseFailAlloc_2295_, 2, v_zetaDeltaFVarIds_2285_);
lean_ctor_set(v_reuseFailAlloc_2295_, 3, v_postponed_2286_);
lean_ctor_set(v_reuseFailAlloc_2295_, 4, v_diag_2287_);
v___x_2292_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2293_ = lean_st_ref_put(v___y_2274_, v___x_2292_);
v___x_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2294_, 0, v_fst_2281_);
return v___x_2294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object* v_e_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2298_, v___y_2299_);
lean_dec(v___y_2299_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object* v_e_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2302_, v___y_2304_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object* v_e_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(v_e_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object* v_x_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object* v_x_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_Meta_etaStructReduce___lam__0(v_x_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_x_2326_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object* v_p_2333_, lean_object* v_e_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v___x_2340_; 
v___x_2340_ = l_Lean_Meta_etaStruct_x3f(v_e_2334_, v_p_2333_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2360_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2360_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2360_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
if (lean_obj_tag(v_a_2341_) == 1)
{
lean_object* v_val_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2355_; 
v_val_2345_ = lean_ctor_get(v_a_2341_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_a_2341_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2347_ = v_a_2341_;
v_isShared_2348_ = v_isSharedCheck_2355_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_val_2345_);
lean_dec(v_a_2341_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2355_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
lean_ctor_set_tag(v___x_2347_, 0);
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_val_2345_);
v___x_2350_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2352_; 
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v___x_2350_);
v___x_2352_ = v___x_2343_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
else
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
lean_dec(v_a_2341_);
v___x_2356_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v___x_2356_);
v___x_2358_ = v___x_2343_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
v_a_2361_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2340_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2340_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object* v_p_2369_, lean_object* v_e_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lean_Meta_etaStructReduce___lam__1(v_p_2369_, v_e_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object* v_00_u03b1_2377_, lean_object* v_x_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = lean_apply_1(v_x_2378_, lean_box(0));
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2386_, lean_object* v_x_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(v_00_u03b1_2386_, v_x_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_2394_, lean_object* v_b_2395_, lean_object* v_x_2396_){
_start:
{
if (lean_obj_tag(v_x_2396_) == 0)
{
lean_dec(v_b_2395_);
lean_dec_ref(v_a_2394_);
return v_x_2396_;
}
else
{
lean_object* v_key_2397_; lean_object* v_value_2398_; lean_object* v_tail_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2411_; 
v_key_2397_ = lean_ctor_get(v_x_2396_, 0);
v_value_2398_ = lean_ctor_get(v_x_2396_, 1);
v_tail_2399_ = lean_ctor_get(v_x_2396_, 2);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_x_2396_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2401_ = v_x_2396_;
v_isShared_2402_ = v_isSharedCheck_2411_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_tail_2399_);
lean_inc(v_value_2398_);
lean_inc(v_key_2397_);
lean_dec(v_x_2396_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2411_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
uint8_t v___x_2403_; 
v___x_2403_ = l_Lean_ExprStructEq_beq(v_key_2397_, v_a_2394_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2404_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2394_, v_b_2395_, v_tail_2399_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 2, v___x_2404_);
v___x_2406_ = v___x_2401_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_key_2397_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v_value_2398_);
lean_ctor_set(v_reuseFailAlloc_2407_, 2, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
else
{
lean_object* v___x_2409_; 
lean_dec(v_value_2398_);
lean_dec(v_key_2397_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 1, v_b_2395_);
lean_ctor_set(v___x_2401_, 0, v_a_2394_);
v___x_2409_ = v___x_2401_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2394_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_b_2395_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_tail_2399_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_2412_, lean_object* v_x_2413_){
_start:
{
if (lean_obj_tag(v_x_2413_) == 0)
{
return v_x_2412_;
}
else
{
lean_object* v_key_2414_; lean_object* v_value_2415_; lean_object* v_tail_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2439_; 
v_key_2414_ = lean_ctor_get(v_x_2413_, 0);
v_value_2415_ = lean_ctor_get(v_x_2413_, 1);
v_tail_2416_ = lean_ctor_get(v_x_2413_, 2);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_x_2413_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2418_ = v_x_2413_;
v_isShared_2419_ = v_isSharedCheck_2439_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_tail_2416_);
lean_inc(v_value_2415_);
lean_inc(v_key_2414_);
lean_dec(v_x_2413_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2439_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2420_; uint64_t v___x_2421_; uint64_t v___x_2422_; uint64_t v___x_2423_; uint64_t v_fold_2424_; uint64_t v___x_2425_; uint64_t v___x_2426_; uint64_t v___x_2427_; size_t v___x_2428_; size_t v___x_2429_; size_t v___x_2430_; size_t v___x_2431_; size_t v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2420_ = lean_array_get_size(v_x_2412_);
v___x_2421_ = l_Lean_ExprStructEq_hash(v_key_2414_);
v___x_2422_ = 32ULL;
v___x_2423_ = lean_uint64_shift_right(v___x_2421_, v___x_2422_);
v_fold_2424_ = lean_uint64_xor(v___x_2421_, v___x_2423_);
v___x_2425_ = 16ULL;
v___x_2426_ = lean_uint64_shift_right(v_fold_2424_, v___x_2425_);
v___x_2427_ = lean_uint64_xor(v_fold_2424_, v___x_2426_);
v___x_2428_ = lean_uint64_to_usize(v___x_2427_);
v___x_2429_ = lean_usize_of_nat(v___x_2420_);
v___x_2430_ = ((size_t)1ULL);
v___x_2431_ = lean_usize_sub(v___x_2429_, v___x_2430_);
v___x_2432_ = lean_usize_land(v___x_2428_, v___x_2431_);
v___x_2433_ = lean_array_uget_borrowed(v_x_2412_, v___x_2432_);
lean_inc(v___x_2433_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 2, v___x_2433_);
v___x_2435_ = v___x_2418_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_key_2414_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v_value_2415_);
lean_ctor_set(v_reuseFailAlloc_2438_, 2, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_array_uset(v_x_2412_, v___x_2432_, v___x_2435_);
v_x_2412_ = v___x_2436_;
v_x_2413_ = v_tail_2416_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2440_, lean_object* v_source_2441_, lean_object* v_target_2442_){
_start:
{
lean_object* v___x_2443_; uint8_t v___x_2444_; 
v___x_2443_ = lean_array_get_size(v_source_2441_);
v___x_2444_ = lean_nat_dec_lt(v_i_2440_, v___x_2443_);
if (v___x_2444_ == 0)
{
lean_dec_ref(v_source_2441_);
lean_dec(v_i_2440_);
return v_target_2442_;
}
else
{
lean_object* v_es_2445_; lean_object* v___x_2446_; lean_object* v_source_2447_; lean_object* v_target_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_es_2445_ = lean_array_fget(v_source_2441_, v_i_2440_);
v___x_2446_ = lean_box(0);
v_source_2447_ = lean_array_fset(v_source_2441_, v_i_2440_, v___x_2446_);
v_target_2448_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2442_, v_es_2445_);
v___x_2449_ = lean_unsigned_to_nat(1u);
v___x_2450_ = lean_nat_add(v_i_2440_, v___x_2449_);
lean_dec(v_i_2440_);
v_i_2440_ = v___x_2450_;
v_source_2441_ = v_source_2447_;
v_target_2442_ = v_target_2448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2452_){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v_nbuckets_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2453_ = lean_array_get_size(v_data_2452_);
v___x_2454_ = lean_unsigned_to_nat(2u);
v_nbuckets_2455_ = lean_nat_mul(v___x_2453_, v___x_2454_);
v___x_2456_ = lean_unsigned_to_nat(0u);
v___x_2457_ = lean_box(0);
v___x_2458_ = lean_mk_array(v_nbuckets_2455_, v___x_2457_);
v___x_2459_ = lean_array_propagate_mark(v_data_2452_, v___x_2458_);
v___x_2460_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2456_, v_data_2452_, v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_2461_, lean_object* v_x_2462_){
_start:
{
if (lean_obj_tag(v_x_2462_) == 0)
{
uint8_t v___x_2463_; 
v___x_2463_ = 0;
return v___x_2463_;
}
else
{
lean_object* v_key_2464_; lean_object* v_tail_2465_; uint8_t v___x_2466_; 
v_key_2464_ = lean_ctor_get(v_x_2462_, 0);
v_tail_2465_ = lean_ctor_get(v_x_2462_, 2);
v___x_2466_ = l_Lean_ExprStructEq_beq(v_key_2464_, v_a_2461_);
if (v___x_2466_ == 0)
{
v_x_2462_ = v_tail_2465_;
goto _start;
}
else
{
return v___x_2466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_2468_, lean_object* v_x_2469_){
_start:
{
uint8_t v_res_2470_; lean_object* v_r_2471_; 
v_res_2470_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2468_, v_x_2469_);
lean_dec(v_x_2469_);
lean_dec_ref(v_a_2468_);
v_r_2471_ = lean_box(v_res_2470_);
return v_r_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2472_, lean_object* v_a_2473_, lean_object* v_b_2474_){
_start:
{
lean_object* v_size_2475_; lean_object* v_buckets_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2519_; 
v_size_2475_ = lean_ctor_get(v_m_2472_, 0);
v_buckets_2476_ = lean_ctor_get(v_m_2472_, 1);
v_isSharedCheck_2519_ = !lean_is_exclusive(v_m_2472_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2478_ = v_m_2472_;
v_isShared_2479_ = v_isSharedCheck_2519_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_buckets_2476_);
lean_inc(v_size_2475_);
lean_dec(v_m_2472_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2519_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2480_; uint64_t v___x_2481_; uint64_t v___x_2482_; uint64_t v___x_2483_; uint64_t v_fold_2484_; uint64_t v___x_2485_; uint64_t v___x_2486_; uint64_t v___x_2487_; size_t v___x_2488_; size_t v___x_2489_; size_t v___x_2490_; size_t v___x_2491_; size_t v___x_2492_; lean_object* v_bkt_2493_; uint8_t v___x_2494_; 
v___x_2480_ = lean_array_get_size(v_buckets_2476_);
v___x_2481_ = l_Lean_ExprStructEq_hash(v_a_2473_);
v___x_2482_ = 32ULL;
v___x_2483_ = lean_uint64_shift_right(v___x_2481_, v___x_2482_);
v_fold_2484_ = lean_uint64_xor(v___x_2481_, v___x_2483_);
v___x_2485_ = 16ULL;
v___x_2486_ = lean_uint64_shift_right(v_fold_2484_, v___x_2485_);
v___x_2487_ = lean_uint64_xor(v_fold_2484_, v___x_2486_);
v___x_2488_ = lean_uint64_to_usize(v___x_2487_);
v___x_2489_ = lean_usize_of_nat(v___x_2480_);
v___x_2490_ = ((size_t)1ULL);
v___x_2491_ = lean_usize_sub(v___x_2489_, v___x_2490_);
v___x_2492_ = lean_usize_land(v___x_2488_, v___x_2491_);
v_bkt_2493_ = lean_array_uget_borrowed(v_buckets_2476_, v___x_2492_);
v___x_2494_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2473_, v_bkt_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v_size_x27_2496_; lean_object* v___x_2497_; lean_object* v_buckets_x27_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v___x_2495_ = lean_unsigned_to_nat(1u);
v_size_x27_2496_ = lean_nat_add(v_size_2475_, v___x_2495_);
lean_dec(v_size_2475_);
lean_inc(v_bkt_2493_);
v___x_2497_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2497_, 0, v_a_2473_);
lean_ctor_set(v___x_2497_, 1, v_b_2474_);
lean_ctor_set(v___x_2497_, 2, v_bkt_2493_);
v_buckets_x27_2498_ = lean_array_uset(v_buckets_2476_, v___x_2492_, v___x_2497_);
v___x_2499_ = lean_unsigned_to_nat(4u);
v___x_2500_ = lean_nat_mul(v_size_x27_2496_, v___x_2499_);
v___x_2501_ = lean_unsigned_to_nat(3u);
v___x_2502_ = lean_nat_div(v___x_2500_, v___x_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_array_get_size(v_buckets_x27_2498_);
v___x_2504_ = lean_nat_dec_le(v___x_2502_, v___x_2503_);
lean_dec(v___x_2502_);
if (v___x_2504_ == 0)
{
lean_object* v_val_2505_; lean_object* v___x_2507_; 
v_val_2505_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2498_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 1, v_val_2505_);
lean_ctor_set(v___x_2478_, 0, v_size_x27_2496_);
v___x_2507_ = v___x_2478_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_size_x27_2496_);
lean_ctor_set(v_reuseFailAlloc_2508_, 1, v_val_2505_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
else
{
lean_object* v___x_2510_; 
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 1, v_buckets_x27_2498_);
lean_ctor_set(v___x_2478_, 0, v_size_x27_2496_);
v___x_2510_ = v___x_2478_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_size_x27_2496_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_buckets_x27_2498_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
lean_object* v___x_2512_; lean_object* v_buckets_x27_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2517_; 
lean_inc(v_bkt_2493_);
v___x_2512_ = lean_box(0);
v_buckets_x27_2513_ = lean_array_uset(v_buckets_2476_, v___x_2492_, v___x_2512_);
v___x_2514_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2473_, v_b_2474_, v_bkt_2493_);
v___x_2515_ = lean_array_uset(v_buckets_x27_2513_, v___x_2492_, v___x_2514_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 1, v___x_2515_);
v___x_2517_ = v___x_2478_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_size_2475_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object* v_a_2520_, lean_object* v_e_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2524_ = lean_st_ref_take(v_a_2520_);
v___x_2525_ = lean_box(0);
v___x_2526_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v___x_2524_, v_e_2521_, v_a_2522_);
v___x_2527_ = lean_st_ref_put(v_a_2520_, v___x_2526_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2528_, lean_object* v_e_2529_, lean_object* v_a_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(v_a_2528_, v_e_2529_, v_a_2530_);
lean_dec(v_a_2528_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2533_, lean_object* v_x_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = lean_apply_1(v_x_2534_, lean_box(0));
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2542_, lean_object* v_x_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(v_00_u03b1_2542_, v_x_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_2550_, lean_object* v_x_2551_){
_start:
{
if (lean_obj_tag(v_x_2551_) == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_box(0);
return v___x_2552_;
}
else
{
lean_object* v_key_2553_; lean_object* v_value_2554_; lean_object* v_tail_2555_; uint8_t v___x_2556_; 
v_key_2553_ = lean_ctor_get(v_x_2551_, 0);
v_value_2554_ = lean_ctor_get(v_x_2551_, 1);
v_tail_2555_ = lean_ctor_get(v_x_2551_, 2);
v___x_2556_ = l_Lean_ExprStructEq_beq(v_key_2553_, v_a_2550_);
if (v___x_2556_ == 0)
{
v_x_2551_ = v_tail_2555_;
goto _start;
}
else
{
lean_object* v___x_2558_; 
lean_inc(v_value_2554_);
v___x_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2558_, 0, v_value_2554_);
return v___x_2558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_2559_, lean_object* v_x_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2559_, v_x_2560_);
lean_dec(v_x_2560_);
lean_dec_ref(v_a_2559_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object* v_m_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v_buckets_2564_; lean_object* v___x_2565_; uint64_t v___x_2566_; uint64_t v___x_2567_; uint64_t v___x_2568_; uint64_t v_fold_2569_; uint64_t v___x_2570_; uint64_t v___x_2571_; uint64_t v___x_2572_; size_t v___x_2573_; size_t v___x_2574_; size_t v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v_buckets_2564_ = lean_ctor_get(v_m_2562_, 1);
v___x_2565_ = lean_array_get_size(v_buckets_2564_);
v___x_2566_ = l_Lean_ExprStructEq_hash(v_a_2563_);
v___x_2567_ = 32ULL;
v___x_2568_ = lean_uint64_shift_right(v___x_2566_, v___x_2567_);
v_fold_2569_ = lean_uint64_xor(v___x_2566_, v___x_2568_);
v___x_2570_ = 16ULL;
v___x_2571_ = lean_uint64_shift_right(v_fold_2569_, v___x_2570_);
v___x_2572_ = lean_uint64_xor(v_fold_2569_, v___x_2571_);
v___x_2573_ = lean_uint64_to_usize(v___x_2572_);
v___x_2574_ = lean_usize_of_nat(v___x_2565_);
v___x_2575_ = ((size_t)1ULL);
v___x_2576_ = lean_usize_sub(v___x_2574_, v___x_2575_);
v___x_2577_ = lean_usize_land(v___x_2573_, v___x_2576_);
v___x_2578_ = lean_array_uget_borrowed(v_buckets_2564_, v___x_2577_);
v___x_2579_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2563_, v___x_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_2580_, v_a_2581_);
lean_dec_ref(v_a_2581_);
lean_dec_ref(v_m_2580_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_2583_, lean_object* v___y_2584_, lean_object* v_b_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v___x_2591_; 
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v___y_2584_);
v___x_2591_ = lean_apply_7(v_k_2583_, v_b_2585_, v___y_2584_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, lean_box(0));
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_2592_, lean_object* v___y_2593_, lean_object* v_b_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_2592_, v___y_2593_, v_b_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2593_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_2601_, uint8_t v_bi_2602_, lean_object* v_type_2603_, lean_object* v_k_2604_, uint8_t v_kind_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v___f_2612_; lean_object* v___x_2613_; 
lean_inc(v___y_2606_);
v___f_2612_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2612_, 0, v_k_2604_);
lean_closure_set(v___f_2612_, 1, v___y_2606_);
v___x_2613_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2601_, v_bi_2602_, v_type_2603_, v___f_2612_, v_kind_2605_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2613_) == 0)
{
return v___x_2613_;
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_2622_, lean_object* v_bi_2623_, lean_object* v_type_2624_, lean_object* v_k_2625_, lean_object* v_kind_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
uint8_t v_bi_boxed_2633_; uint8_t v_kind_boxed_2634_; lean_object* v_res_2635_; 
v_bi_boxed_2633_ = lean_unbox(v_bi_2623_);
v_kind_boxed_2634_ = lean_unbox(v_kind_2626_);
v_res_2635_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_2622_, v_bi_boxed_2633_, v_type_2624_, v_k_2625_, v_kind_boxed_2634_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2636_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_2650_, lean_object* v_type_2651_, lean_object* v_val_2652_, lean_object* v_k_2653_, uint8_t v_nondep_2654_, uint8_t v_kind_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v___f_2662_; lean_object* v___x_2663_; 
lean_inc(v___y_2656_);
v___f_2662_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2662_, 0, v_k_2653_);
lean_closure_set(v___f_2662_, 1, v___y_2656_);
v___x_2663_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2650_, v_type_2651_, v_val_2652_, v___f_2662_, v_nondep_2654_, v_kind_2655_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2663_) == 0)
{
return v___x_2663_;
}
else
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_2672_, lean_object* v_type_2673_, lean_object* v_val_2674_, lean_object* v_k_2675_, lean_object* v_nondep_2676_, lean_object* v_kind_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_){
_start:
{
uint8_t v_nondep_boxed_2684_; uint8_t v_kind_boxed_2685_; lean_object* v_res_2686_; 
v_nondep_boxed_2684_ = lean_unbox(v_nondep_2676_);
v_kind_boxed_2685_ = lean_unbox(v_kind_2677_);
v_res_2686_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_2672_, v_type_2673_, v_val_2674_, v_k_2675_, v_nondep_boxed_2684_, v_kind_boxed_2685_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2678_);
return v_res_2686_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = l_Lean_maxRecDepthErrorMessage;
v___x_2693_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
return v___x_2693_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; 
v___x_2694_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_2695_ = l_Lean_MessageData_ofFormat(v___x_2694_);
return v___x_2695_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2696_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_2697_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2));
v___x_2698_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2697_);
lean_ctor_set(v___x_2698_, 1, v___x_2696_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_2699_){
_start:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2701_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2702_, 0, v_ref_2699_);
lean_ctor_set(v___x_2702_, 1, v___x_2701_);
v___x_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2704_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object* v_x_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v___y_2715_; lean_object* v_toCold_2724_; lean_object* v_currRecDepth_2725_; lean_object* v_ref_2726_; uint8_t v_diag_2727_; uint8_t v_suppressElabErrors_2728_; lean_object* v_maxRecDepth_2734_; lean_object* v___x_2735_; uint8_t v___x_2736_; 
v_toCold_2724_ = lean_ctor_get(v___y_2711_, 0);
v_currRecDepth_2725_ = lean_ctor_get(v___y_2711_, 1);
v_ref_2726_ = lean_ctor_get(v___y_2711_, 2);
v_diag_2727_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*3);
v_suppressElabErrors_2728_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*3 + 1);
v_maxRecDepth_2734_ = lean_ctor_get(v_toCold_2724_, 3);
v___x_2735_ = lean_unsigned_to_nat(0u);
v___x_2736_ = lean_nat_dec_eq(v_maxRecDepth_2734_, v___x_2735_);
if (v___x_2736_ == 0)
{
uint8_t v___x_2737_; 
v___x_2737_ = lean_nat_dec_eq(v_currRecDepth_2725_, v_maxRecDepth_2734_);
if (v___x_2737_ == 0)
{
goto v___jp_2729_;
}
else
{
lean_object* v___x_2738_; 
lean_dec_ref(v_x_2707_);
lean_inc(v_ref_2726_);
v___x_2738_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2726_);
v___y_2715_ = v___x_2738_;
goto v___jp_2714_;
}
}
else
{
goto v___jp_2729_;
}
v___jp_2714_:
{
if (lean_obj_tag(v___y_2715_) == 0)
{
return v___y_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
v_a_2716_ = lean_ctor_get(v___y_2715_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___y_2715_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___y_2715_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___y_2715_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
v___jp_2729_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2730_ = lean_unsigned_to_nat(1u);
v___x_2731_ = lean_nat_add(v_currRecDepth_2725_, v___x_2730_);
lean_inc(v_ref_2726_);
lean_inc_ref(v_toCold_2724_);
v___x_2732_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2732_, 0, v_toCold_2724_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
lean_ctor_set(v___x_2732_, 2, v_ref_2726_);
lean_ctor_set_uint8(v___x_2732_, sizeof(void*)*3, v_diag_2727_);
lean_ctor_set_uint8(v___x_2732_, sizeof(void*)*3 + 1, v_suppressElabErrors_2728_);
lean_inc(v___y_2712_);
lean_inc(v___y_2710_);
lean_inc_ref(v___y_2709_);
lean_inc(v___y_2708_);
v___x_2733_ = lean_apply_6(v_x_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___x_2732_, v___y_2712_, lean_box(0));
v___y_2715_ = v___x_2733_;
goto v___jp_2714_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_2747_, lean_object* v_pre_2748_, lean_object* v_post_2749_, lean_object* v_usedLetOnly_2750_, lean_object* v_skipConstInApp_2751_, lean_object* v_skipInstances_2752_, lean_object* v_body_2753_, lean_object* v_x_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
uint8_t v_usedLetOnly_boxed_2761_; uint8_t v_skipConstInApp_boxed_2762_; uint8_t v_skipInstances_boxed_2763_; lean_object* v_res_2764_; 
v_usedLetOnly_boxed_2761_ = lean_unbox(v_usedLetOnly_2750_);
v_skipConstInApp_boxed_2762_ = lean_unbox(v_skipConstInApp_2751_);
v_skipInstances_boxed_2763_ = lean_unbox(v_skipInstances_2752_);
v_res_2764_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_2747_, v_pre_2748_, v_post_2749_, v_usedLetOnly_boxed_2761_, v_skipConstInApp_boxed_2762_, v_skipInstances_boxed_2763_, v_body_2753_, v_x_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec(v___y_2755_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2768_, lean_object* v_pre_2769_, lean_object* v_post_2770_, uint8_t v_usedLetOnly_2771_, uint8_t v_skipConstInApp_2772_, uint8_t v_skipInstances_2773_, lean_object* v_body_2774_, lean_object* v_x_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = lean_array_push(v_fvars_2768_, v_x_2775_);
v___x_2783_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_2769_, v_post_2770_, v_usedLetOnly_2771_, v_skipConstInApp_2772_, v_skipInstances_2773_, v___x_2782_, v_body_2774_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2784_, lean_object* v_pre_2785_, lean_object* v_post_2786_, lean_object* v_usedLetOnly_2787_, lean_object* v_skipConstInApp_2788_, lean_object* v_skipInstances_2789_, lean_object* v_body_2790_, lean_object* v_x_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
uint8_t v_usedLetOnly_boxed_2798_; uint8_t v_skipConstInApp_boxed_2799_; uint8_t v_skipInstances_boxed_2800_; lean_object* v_res_2801_; 
v_usedLetOnly_boxed_2798_ = lean_unbox(v_usedLetOnly_2787_);
v_skipConstInApp_boxed_2799_ = lean_unbox(v_skipConstInApp_2788_);
v_skipInstances_boxed_2800_ = lean_unbox(v_skipInstances_2789_);
v_res_2801_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_2784_, v_pre_2785_, v_post_2786_, v_usedLetOnly_boxed_2798_, v_skipConstInApp_boxed_2799_, v_skipInstances_boxed_2800_, v_body_2790_, v_x_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object* v_pre_2802_, lean_object* v_post_2803_, uint8_t v_usedLetOnly_2804_, uint8_t v_skipConstInApp_2805_, uint8_t v_skipInstances_2806_, lean_object* v_e_2807_, lean_object* v_a_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; 
lean_inc_ref(v_post_2803_);
lean_inc(v___y_2812_);
lean_inc_ref(v___y_2811_);
lean_inc(v___y_2810_);
lean_inc_ref(v___y_2809_);
lean_inc_ref(v_e_2807_);
v___x_2814_ = lean_apply_6(v_post_2803_, v_e_2807_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, lean_box(0));
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2833_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2817_ = v___x_2814_;
v_isShared_2818_ = v_isSharedCheck_2833_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2814_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2833_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
switch(lean_obj_tag(v_a_2815_))
{
case 0:
{
lean_object* v_e_2819_; lean_object* v___x_2821_; 
lean_dec_ref(v_e_2807_);
lean_dec_ref(v_post_2803_);
lean_dec_ref(v_pre_2802_);
v_e_2819_ = lean_ctor_get(v_a_2815_, 0);
lean_inc_ref(v_e_2819_);
lean_dec_ref_known(v_a_2815_, 1);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_e_2819_);
v___x_2821_ = v___x_2817_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_e_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
case 1:
{
lean_object* v_e_2823_; lean_object* v___x_2824_; 
lean_del_object(v___x_2817_);
lean_dec_ref(v_e_2807_);
v_e_2823_ = lean_ctor_get(v_a_2815_, 0);
lean_inc_ref(v_e_2823_);
lean_dec_ref_known(v_a_2815_, 1);
v___x_2824_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2802_, v_post_2803_, v_usedLetOnly_2804_, v_skipConstInApp_2805_, v_skipInstances_2806_, v_e_2823_, v_a_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
return v___x_2824_;
}
default: 
{
lean_object* v_e_x3f_2825_; 
lean_dec_ref(v_post_2803_);
lean_dec_ref(v_pre_2802_);
v_e_x3f_2825_ = lean_ctor_get(v_a_2815_, 0);
lean_inc(v_e_x3f_2825_);
lean_dec_ref_known(v_a_2815_, 1);
if (lean_obj_tag(v_e_x3f_2825_) == 0)
{
lean_object* v___x_2827_; 
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_e_2807_);
v___x_2827_ = v___x_2817_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_e_2807_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
else
{
lean_object* v_val_2829_; lean_object* v___x_2831_; 
lean_dec_ref(v_e_2807_);
v_val_2829_ = lean_ctor_get(v_e_x3f_2825_, 0);
lean_inc(v_val_2829_);
lean_dec_ref_known(v_e_x3f_2825_, 1);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_val_2829_);
v___x_2831_ = v___x_2817_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_val_2829_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_e_2807_);
lean_dec_ref(v_post_2803_);
lean_dec_ref(v_pre_2802_);
v_a_2834_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2814_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2814_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object* v_pre_2842_, lean_object* v_post_2843_, uint8_t v_usedLetOnly_2844_, uint8_t v_skipConstInApp_2845_, uint8_t v_skipInstances_2846_, lean_object* v_fvars_2847_, lean_object* v_e_2848_, lean_object* v_a_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
if (lean_obj_tag(v_e_2848_) == 6)
{
lean_object* v_binderName_2855_; lean_object* v_binderType_2856_; lean_object* v_body_2857_; uint8_t v_binderInfo_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___f_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v_binderName_2855_ = lean_ctor_get(v_e_2848_, 0);
lean_inc(v_binderName_2855_);
v_binderType_2856_ = lean_ctor_get(v_e_2848_, 1);
lean_inc_ref(v_binderType_2856_);
v_body_2857_ = lean_ctor_get(v_e_2848_, 2);
lean_inc_ref(v_body_2857_);
v_binderInfo_2858_ = lean_ctor_get_uint8(v_e_2848_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2848_, 3);
v___x_2859_ = lean_box(v_usedLetOnly_2844_);
v___x_2860_ = lean_box(v_skipConstInApp_2845_);
v___x_2861_ = lean_box(v_skipInstances_2846_);
lean_inc_ref(v_post_2843_);
lean_inc_ref(v_pre_2842_);
lean_inc_ref(v_fvars_2847_);
v___f_2862_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2862_, 0, v_fvars_2847_);
lean_closure_set(v___f_2862_, 1, v_pre_2842_);
lean_closure_set(v___f_2862_, 2, v_post_2843_);
lean_closure_set(v___f_2862_, 3, v___x_2859_);
lean_closure_set(v___f_2862_, 4, v___x_2860_);
lean_closure_set(v___f_2862_, 5, v___x_2861_);
lean_closure_set(v___f_2862_, 6, v_body_2857_);
v___x_2863_ = lean_expr_instantiate_rev(v_binderType_2856_, v_fvars_2847_);
lean_dec_ref(v_fvars_2847_);
lean_dec_ref(v_binderType_2856_);
v___x_2864_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2842_, v_post_2843_, v_usedLetOnly_2844_, v_skipConstInApp_2845_, v_skipInstances_2846_, v___x_2863_, v_a_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; uint8_t v___x_2866_; lean_object* v___x_2867_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v___x_2864_, 1);
v___x_2866_ = 0;
v___x_2867_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2855_, v_binderInfo_2858_, v_a_2865_, v___f_2862_, v___x_2866_, v_a_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
return v___x_2867_;
}
else
{
lean_dec_ref(v___f_2862_);
lean_dec(v_binderName_2855_);
return v___x_2864_;
}
}
else
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_expr_instantiate_rev(v_e_2848_, v_fvars_2847_);
lean_dec_ref(v_e_2848_);
lean_inc_ref(v_post_2843_);
lean_inc_ref(v_pre_2842_);
v___x_2869_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2842_, v_post_2843_, v_usedLetOnly_2844_, v_skipConstInApp_2845_, v_skipInstances_2846_, v___x_2868_, v_a_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; uint8_t v___x_2871_; uint8_t v___x_2872_; uint8_t v___x_2873_; lean_object* v___x_2874_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v___x_2871_ = 0;
v___x_2872_ = 1;
v___x_2873_ = 1;
v___x_2874_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2847_, v_a_2870_, v___x_2871_, v_usedLetOnly_2844_, v___x_2871_, v___x_2872_, v___x_2873_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2874_) == 0)
{
lean_object* v_a_2875_; lean_object* v___x_2876_; 
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_a_2875_);
lean_dec_ref_known(v___x_2874_, 1);
v___x_2876_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2842_, v_post_2843_, v_usedLetOnly_2844_, v_skipConstInApp_2845_, v_skipInstances_2846_, v_a_2875_, v_a_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
return v___x_2876_;
}
else
{
lean_dec_ref(v_post_2843_);
lean_dec_ref(v_pre_2842_);
return v___x_2874_;
}
}
else
{
lean_dec_ref(v_fvars_2847_);
lean_dec_ref(v_post_2843_);
lean_dec_ref(v_pre_2842_);
return v___x_2869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2877_, lean_object* v_pre_2878_, lean_object* v_post_2879_, uint8_t v_usedLetOnly_2880_, uint8_t v_skipConstInApp_2881_, uint8_t v_skipInstances_2882_, lean_object* v_body_2883_, lean_object* v_x_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2891_ = lean_array_push(v_fvars_2877_, v_x_2884_);
v___x_2892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_2878_, v_post_2879_, v_usedLetOnly_2880_, v_skipConstInApp_2881_, v_skipInstances_2882_, v___x_2891_, v_body_2883_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2893_, lean_object* v_pre_2894_, lean_object* v_post_2895_, lean_object* v_usedLetOnly_2896_, lean_object* v_skipConstInApp_2897_, lean_object* v_skipInstances_2898_, lean_object* v_body_2899_, lean_object* v_x_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
uint8_t v_usedLetOnly_boxed_2907_; uint8_t v_skipConstInApp_boxed_2908_; uint8_t v_skipInstances_boxed_2909_; lean_object* v_res_2910_; 
v_usedLetOnly_boxed_2907_ = lean_unbox(v_usedLetOnly_2896_);
v_skipConstInApp_boxed_2908_ = lean_unbox(v_skipConstInApp_2897_);
v_skipInstances_boxed_2909_ = lean_unbox(v_skipInstances_2898_);
v_res_2910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(v_fvars_2893_, v_pre_2894_, v_post_2895_, v_usedLetOnly_boxed_2907_, v_skipConstInApp_boxed_2908_, v_skipInstances_boxed_2909_, v_body_2899_, v_x_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec(v___y_2901_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object* v_pre_2911_, lean_object* v_post_2912_, uint8_t v_usedLetOnly_2913_, uint8_t v_skipConstInApp_2914_, uint8_t v_skipInstances_2915_, lean_object* v_fvars_2916_, lean_object* v_e_2917_, lean_object* v_a_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
if (lean_obj_tag(v_e_2917_) == 8)
{
lean_object* v_declName_2924_; lean_object* v_type_2925_; lean_object* v_value_2926_; lean_object* v_body_2927_; uint8_t v_nondep_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___f_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v_declName_2924_ = lean_ctor_get(v_e_2917_, 0);
lean_inc(v_declName_2924_);
v_type_2925_ = lean_ctor_get(v_e_2917_, 1);
lean_inc_ref(v_type_2925_);
v_value_2926_ = lean_ctor_get(v_e_2917_, 2);
lean_inc_ref(v_value_2926_);
v_body_2927_ = lean_ctor_get(v_e_2917_, 3);
lean_inc_ref(v_body_2927_);
v_nondep_2928_ = lean_ctor_get_uint8(v_e_2917_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2917_, 4);
v___x_2929_ = lean_box(v_usedLetOnly_2913_);
v___x_2930_ = lean_box(v_skipConstInApp_2914_);
v___x_2931_ = lean_box(v_skipInstances_2915_);
lean_inc_ref_n(v_post_2912_, 2);
lean_inc_ref_n(v_pre_2911_, 2);
lean_inc_ref(v_fvars_2916_);
v___f_2932_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2932_, 0, v_fvars_2916_);
lean_closure_set(v___f_2932_, 1, v_pre_2911_);
lean_closure_set(v___f_2932_, 2, v_post_2912_);
lean_closure_set(v___f_2932_, 3, v___x_2929_);
lean_closure_set(v___f_2932_, 4, v___x_2930_);
lean_closure_set(v___f_2932_, 5, v___x_2931_);
lean_closure_set(v___f_2932_, 6, v_body_2927_);
v___x_2933_ = lean_expr_instantiate_rev(v_type_2925_, v_fvars_2916_);
lean_dec_ref(v_type_2925_);
v___x_2934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2911_, v_post_2912_, v_usedLetOnly_2913_, v_skipConstInApp_2914_, v_skipInstances_2915_, v___x_2933_, v_a_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v___x_2934_, 1);
v___x_2936_ = lean_expr_instantiate_rev(v_value_2926_, v_fvars_2916_);
lean_dec_ref(v_fvars_2916_);
lean_dec_ref(v_value_2926_);
v___x_2937_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2911_, v_post_2912_, v_usedLetOnly_2913_, v_skipConstInApp_2914_, v_skipInstances_2915_, v___x_2936_, v_a_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v_a_2938_; uint8_t v___x_2939_; lean_object* v___x_2940_; 
v_a_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_a_2938_);
lean_dec_ref_known(v___x_2937_, 1);
v___x_2939_ = 0;
v___x_2940_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2924_, v_a_2935_, v_a_2938_, v___f_2932_, v_nondep_2928_, v___x_2939_, v_a_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
return v___x_2940_;
}
else
{
lean_dec(v_a_2935_);
lean_dec_ref(v___f_2932_);
lean_dec(v_declName_2924_);
return v___x_2937_;
}
}
else
{
lean_dec_ref(v___f_2932_);
lean_dec_ref(v_value_2926_);
lean_dec(v_declName_2924_);
lean_dec_ref(v_fvars_2916_);
lean_dec_ref(v_post_2912_);
lean_dec_ref(v_pre_2911_);
return v___x_2934_;
}
}
else
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = lean_expr_instantiate_rev(v_e_2917_, v_fvars_2916_);
lean_dec_ref(v_e_2917_);
lean_inc_ref(v_post_2912_);
lean_inc_ref(v_pre_2911_);
v___x_2942_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2911_, v_post_2912_, v_usedLetOnly_2913_, v_skipConstInApp_2914_, v_skipInstances_2915_, v___x_2941_, v_a_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; uint8_t v___x_2944_; uint8_t v___x_2945_; lean_object* v___x_2946_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = 0;
v___x_2945_ = 1;
v___x_2946_ = l_Lean_Meta_mkLetFVars(v_fvars_2916_, v_a_2943_, v_usedLetOnly_2913_, v___x_2944_, v___x_2945_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2948_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2911_, v_post_2912_, v_usedLetOnly_2913_, v_skipConstInApp_2914_, v_skipInstances_2915_, v_a_2947_, v_a_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
return v___x_2948_;
}
else
{
lean_dec_ref(v_post_2912_);
lean_dec_ref(v_pre_2911_);
return v___x_2946_;
}
}
else
{
lean_dec_ref(v_fvars_2916_);
lean_dec_ref(v_post_2912_);
lean_dec_ref(v_pre_2911_);
return v___x_2942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object* v_pre_2951_, lean_object* v_post_2952_, uint8_t v_usedLetOnly_2953_, uint8_t v_skipConstInApp_2954_, uint8_t v_skipInstances_2955_, size_t v_sz_2956_, size_t v_i_2957_, lean_object* v_bs_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
uint8_t v___x_2965_; 
v___x_2965_ = lean_usize_dec_lt(v_i_2957_, v_sz_2956_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
lean_dec_ref(v_post_2952_);
lean_dec_ref(v_pre_2951_);
v___x_2966_ = l_unsafeCast___redArg(v_bs_2958_);
lean_dec_ref(v_bs_2958_);
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
return v___x_2967_;
}
else
{
lean_object* v_v_2968_; lean_object* v___x_2969_; lean_object* v_bs_x27_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v_v_2968_ = lean_array_uget(v_bs_2958_, v_i_2957_);
v___x_2969_ = lean_unsigned_to_nat(0u);
v_bs_x27_2970_ = lean_array_uset(v_bs_2958_, v_i_2957_, v___x_2969_);
v___x_2971_ = l_unsafeCast___redArg(v_v_2968_);
lean_dec(v_v_2968_);
lean_inc_ref(v_post_2952_);
lean_inc_ref(v_pre_2951_);
v___x_2972_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2951_, v_post_2952_, v_usedLetOnly_2953_, v_skipConstInApp_2954_, v_skipInstances_2955_, v___x_2971_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; size_t v___x_2974_; size_t v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2974_ = ((size_t)1ULL);
v___x_2975_ = lean_usize_add(v_i_2957_, v___x_2974_);
v___x_2976_ = l_unsafeCast___redArg(v_a_2973_);
lean_dec(v_a_2973_);
v___x_2977_ = lean_array_uset(v_bs_x27_2970_, v_i_2957_, v___x_2976_);
v_i_2957_ = v___x_2975_;
v_bs_2958_ = v___x_2977_;
goto _start;
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2986_; 
lean_dec_ref(v_bs_x27_2970_);
lean_dec_ref(v_post_2952_);
lean_dec_ref(v_pre_2951_);
v_a_2979_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2981_ = v___x_2972_;
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2972_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2979_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_2987_, lean_object* v_post_2988_, lean_object* v_usedLetOnly_2989_, lean_object* v_skipConstInApp_2990_, lean_object* v_skipInstances_2991_, lean_object* v_sz_2992_, lean_object* v_i_2993_, lean_object* v_bs_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
uint8_t v_usedLetOnly_boxed_3001_; uint8_t v_skipConstInApp_boxed_3002_; uint8_t v_skipInstances_boxed_3003_; size_t v_sz_boxed_3004_; size_t v_i_boxed_3005_; lean_object* v_res_3006_; 
v_usedLetOnly_boxed_3001_ = lean_unbox(v_usedLetOnly_2989_);
v_skipConstInApp_boxed_3002_ = lean_unbox(v_skipConstInApp_2990_);
v_skipInstances_boxed_3003_ = lean_unbox(v_skipInstances_2991_);
v_sz_boxed_3004_ = lean_unbox_usize(v_sz_2992_);
lean_dec(v_sz_2992_);
v_i_boxed_3005_ = lean_unbox_usize(v_i_2993_);
lean_dec(v_i_2993_);
v_res_3006_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_2987_, v_post_2988_, v_usedLetOnly_boxed_3001_, v_skipConstInApp_boxed_3002_, v_skipInstances_boxed_3003_, v_sz_boxed_3004_, v_i_boxed_3005_, v_bs_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_3007_, lean_object* v_post_3008_, uint8_t v_usedLetOnly_3009_, uint8_t v_skipConstInApp_3010_, uint8_t v_skipInstances_3011_, lean_object* v___x_3012_, lean_object* v___y_3013_, lean_object* v_b_3014_, lean_object* v_a_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v___x_3021_; 
v___x_3021_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3007_, v_post_3008_, v_usedLetOnly_3009_, v_skipConstInApp_3010_, v_skipInstances_3011_, v___x_3012_, v___y_3013_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3031_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
v___x_3026_ = lean_array_fset(v_b_3014_, v_a_3015_, v_a_3022_);
v___x_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v___x_3027_);
v___x_3029_ = v___x_3024_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec_ref(v_b_3014_);
v_a_3032_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_3021_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3021_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3040_, lean_object* v_post_3041_, lean_object* v_usedLetOnly_3042_, lean_object* v_skipConstInApp_3043_, lean_object* v_skipInstances_3044_, lean_object* v___x_3045_, lean_object* v___y_3046_, lean_object* v_b_3047_, lean_object* v_a_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
uint8_t v_usedLetOnly_boxed_3054_; uint8_t v_skipConstInApp_boxed_3055_; uint8_t v_skipInstances_boxed_3056_; lean_object* v_res_3057_; 
v_usedLetOnly_boxed_3054_ = lean_unbox(v_usedLetOnly_3042_);
v_skipConstInApp_boxed_3055_ = lean_unbox(v_skipConstInApp_3043_);
v_skipInstances_boxed_3056_ = lean_unbox(v_skipInstances_3044_);
v_res_3057_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3040_, v_post_3041_, v_usedLetOnly_boxed_3054_, v_skipConstInApp_boxed_3055_, v_skipInstances_boxed_3056_, v___x_3045_, v___y_3046_, v_b_3047_, v_a_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v_a_3048_);
lean_dec(v___y_3046_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3058_, lean_object* v___x_3059_, lean_object* v_pre_3060_, lean_object* v_post_3061_, uint8_t v_usedLetOnly_3062_, uint8_t v_skipConstInApp_3063_, uint8_t v_skipInstances_3064_, lean_object* v_a_3065_, lean_object* v_b_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v___y_3074_; uint8_t v___x_3097_; 
v___x_3097_ = lean_nat_dec_lt(v_a_3065_, v_upperBound_3058_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; 
lean_dec(v_a_3065_);
lean_dec_ref(v_post_3061_);
lean_dec_ref(v_pre_3060_);
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v_b_3066_);
return v___x_3098_;
}
else
{
lean_object* v___x_3099_; lean_object* v___x_3100_; uint8_t v___x_3101_; 
v___x_3099_ = lean_array_fget_borrowed(v_b_3066_, v_a_3065_);
v___x_3100_ = lean_array_get_size(v___x_3059_);
v___x_3101_ = lean_nat_dec_lt(v_a_3065_, v___x_3100_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___f_3105_; 
lean_inc(v___x_3099_);
v___x_3102_ = lean_box(v_usedLetOnly_3062_);
v___x_3103_ = lean_box(v_skipConstInApp_3063_);
v___x_3104_ = lean_box(v_skipInstances_3064_);
lean_inc(v_a_3065_);
lean_inc(v___y_3067_);
lean_inc_ref(v_post_3061_);
lean_inc_ref(v_pre_3060_);
v___f_3105_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3105_, 0, v_pre_3060_);
lean_closure_set(v___f_3105_, 1, v_post_3061_);
lean_closure_set(v___f_3105_, 2, v___x_3102_);
lean_closure_set(v___f_3105_, 3, v___x_3103_);
lean_closure_set(v___f_3105_, 4, v___x_3104_);
lean_closure_set(v___f_3105_, 5, v___x_3099_);
lean_closure_set(v___f_3105_, 6, v___y_3067_);
lean_closure_set(v___f_3105_, 7, v_b_3066_);
lean_closure_set(v___f_3105_, 8, v_a_3065_);
v___y_3074_ = v___f_3105_;
goto v___jp_3073_;
}
else
{
lean_object* v___x_3106_; uint8_t v_isInstance_3107_; 
v___x_3106_ = lean_array_fget_borrowed(v___x_3059_, v_a_3065_);
v_isInstance_3107_ = lean_ctor_get_uint8(v___x_3106_, sizeof(void*)*1 + 4);
if (v_isInstance_3107_ == 0)
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___f_3111_; 
lean_inc(v___x_3099_);
v___x_3108_ = lean_box(v_usedLetOnly_3062_);
v___x_3109_ = lean_box(v_skipConstInApp_3063_);
v___x_3110_ = lean_box(v_skipInstances_3064_);
lean_inc(v_a_3065_);
lean_inc(v___y_3067_);
lean_inc_ref(v_post_3061_);
lean_inc_ref(v_pre_3060_);
v___f_3111_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3111_, 0, v_pre_3060_);
lean_closure_set(v___f_3111_, 1, v_post_3061_);
lean_closure_set(v___f_3111_, 2, v___x_3108_);
lean_closure_set(v___f_3111_, 3, v___x_3109_);
lean_closure_set(v___f_3111_, 4, v___x_3110_);
lean_closure_set(v___f_3111_, 5, v___x_3099_);
lean_closure_set(v___f_3111_, 6, v___y_3067_);
lean_closure_set(v___f_3111_, 7, v_b_3066_);
lean_closure_set(v___f_3111_, 8, v_a_3065_);
v___y_3074_ = v___f_3111_;
goto v___jp_3073_;
}
else
{
lean_object* v___x_3112_; lean_object* v___f_3113_; 
v___x_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3112_, 0, v_b_3066_);
v___f_3113_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3113_, 0, v___x_3112_);
v___y_3074_ = v___f_3113_;
goto v___jp_3073_;
}
}
}
v___jp_3073_:
{
lean_object* v___x_3075_; 
lean_inc(v___y_3071_);
lean_inc_ref(v___y_3070_);
lean_inc(v___y_3069_);
lean_inc_ref(v___y_3068_);
v___x_3075_ = lean_apply_5(v___y_3074_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, lean_box(0));
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3088_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3088_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3088_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
if (lean_obj_tag(v_a_3076_) == 0)
{
lean_object* v_a_3080_; lean_object* v___x_3082_; 
lean_dec(v_a_3065_);
lean_dec_ref(v_post_3061_);
lean_dec_ref(v_pre_3060_);
v_a_3080_ = lean_ctor_get(v_a_3076_, 0);
lean_inc(v_a_3080_);
lean_dec_ref_known(v_a_3076_, 1);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v_a_3080_);
v___x_3082_ = v___x_3078_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3080_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_del_object(v___x_3078_);
v_a_3084_ = lean_ctor_get(v_a_3076_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v_a_3076_, 1);
v___x_3085_ = lean_unsigned_to_nat(1u);
v___x_3086_ = lean_nat_add(v_a_3065_, v___x_3085_);
lean_dec(v_a_3065_);
v_a_3065_ = v___x_3086_;
v_b_3066_ = v_a_3084_;
goto _start;
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_dec(v_a_3065_);
lean_dec_ref(v_post_3061_);
lean_dec_ref(v_pre_3060_);
v_a_3089_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3075_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3075_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t v_skipInstances_3114_, lean_object* v_pre_3115_, lean_object* v_post_3116_, uint8_t v_usedLetOnly_3117_, uint8_t v_skipConstInApp_3118_, lean_object* v_x_3119_, lean_object* v_x_3120_, lean_object* v_x_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v_f_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; 
if (lean_obj_tag(v_x_3119_) == 5)
{
lean_object* v_fn_3184_; lean_object* v_arg_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_fn_3184_ = lean_ctor_get(v_x_3119_, 0);
lean_inc_ref(v_fn_3184_);
v_arg_3185_ = lean_ctor_get(v_x_3119_, 1);
lean_inc_ref(v_arg_3185_);
lean_dec_ref_known(v_x_3119_, 2);
v___x_3186_ = lean_array_set(v_x_3120_, v_x_3121_, v_arg_3185_);
v___x_3187_ = lean_unsigned_to_nat(1u);
v___x_3188_ = lean_nat_sub(v_x_3121_, v___x_3187_);
lean_dec(v_x_3121_);
v_x_3119_ = v_fn_3184_;
v_x_3120_ = v___x_3186_;
v_x_3121_ = v___x_3188_;
goto _start;
}
else
{
lean_dec(v_x_3121_);
if (v_skipConstInApp_3118_ == 0)
{
goto v___jp_3181_;
}
else
{
uint8_t v___x_3190_; 
v___x_3190_ = l_Lean_Expr_isConst(v_x_3119_);
if (v___x_3190_ == 0)
{
goto v___jp_3181_;
}
else
{
v_f_3129_ = v_x_3119_;
v___y_3130_ = v___y_3122_;
v___y_3131_ = v___y_3123_;
v___y_3132_ = v___y_3124_;
v___y_3133_ = v___y_3125_;
v___y_3134_ = v___y_3126_;
goto v___jp_3128_;
}
}
}
v___jp_3128_:
{
if (v_skipInstances_3114_ == 0)
{
size_t v_sz_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_8761__overap_3143_; lean_object* v___x_3144_; 
v_sz_3135_ = lean_array_size(v_x_3120_);
v___x_3136_ = l_unsafeCast___redArg(v_x_3120_);
lean_dec_ref(v_x_3120_);
v___x_3137_ = lean_box(v_usedLetOnly_3117_);
v___x_3138_ = lean_box(v_skipConstInApp_3118_);
v___x_3139_ = lean_box(v_skipInstances_3114_);
v___x_3140_ = lean_box_usize(v_sz_3135_);
v___x_3141_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed__const__1));
lean_inc_ref(v_post_3116_);
lean_inc_ref(v_pre_3115_);
v___x_3142_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed), 14, 8);
lean_closure_set(v___x_3142_, 0, v_pre_3115_);
lean_closure_set(v___x_3142_, 1, v_post_3116_);
lean_closure_set(v___x_3142_, 2, v___x_3137_);
lean_closure_set(v___x_3142_, 3, v___x_3138_);
lean_closure_set(v___x_3142_, 4, v___x_3139_);
lean_closure_set(v___x_3142_, 5, v___x_3140_);
lean_closure_set(v___x_3142_, 6, v___x_3141_);
lean_closure_set(v___x_3142_, 7, v___x_3136_);
v___x_8761__overap_3143_ = l_unsafeCast___redArg(v___x_3142_);
lean_dec_ref(v___x_3142_);
lean_inc(v___y_3134_);
lean_inc_ref(v___y_3133_);
lean_inc(v___y_3132_);
lean_inc_ref(v___y_3131_);
lean_inc(v___y_3130_);
v___x_3144_ = lean_apply_6(v___x_8761__overap_3143_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, lean_box(0));
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
lean_inc(v_a_3145_);
lean_dec_ref_known(v___x_3144_, 1);
v___x_3146_ = l_Lean_mkAppN(v_f_3129_, v_a_3145_);
lean_dec(v_a_3145_);
v___x_3147_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3115_, v_post_3116_, v_usedLetOnly_3117_, v_skipConstInApp_3118_, v_skipInstances_3114_, v___x_3146_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
return v___x_3147_;
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec_ref(v_f_3129_);
lean_dec_ref(v_post_3116_);
lean_dec_ref(v_pre_3115_);
v_a_3148_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3144_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3144_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
else
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_array_get_size(v_x_3120_);
lean_inc_ref(v_f_3129_);
v___x_3157_ = l_Lean_Meta_getFunInfoNArgs(v_f_3129_, v___x_3156_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v_paramInfo_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
lean_inc(v_a_3158_);
lean_dec_ref_known(v___x_3157_, 1);
v_paramInfo_3159_ = lean_ctor_get(v_a_3158_, 0);
lean_inc_ref(v_paramInfo_3159_);
lean_dec(v_a_3158_);
v___x_3160_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3116_);
lean_inc_ref(v_pre_3115_);
v___x_3161_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v___x_3156_, v_paramInfo_3159_, v_pre_3115_, v_post_3116_, v_usedLetOnly_3117_, v_skipConstInApp_3118_, v_skipInstances_3114_, v___x_3160_, v_x_3120_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
lean_dec_ref(v_paramInfo_3159_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
v___x_3163_ = l_Lean_mkAppN(v_f_3129_, v_a_3162_);
lean_dec(v_a_3162_);
v___x_3164_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3115_, v_post_3116_, v_usedLetOnly_3117_, v_skipConstInApp_3118_, v_skipInstances_3114_, v___x_3163_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
return v___x_3164_;
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_dec_ref(v_f_3129_);
lean_dec_ref(v_post_3116_);
lean_dec_ref(v_pre_3115_);
v_a_3165_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3161_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3161_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
else
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
lean_dec_ref(v_f_3129_);
lean_dec_ref(v_x_3120_);
lean_dec_ref(v_post_3116_);
lean_dec_ref(v_pre_3115_);
v_a_3173_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3157_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3157_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
}
v___jp_3181_:
{
lean_object* v___x_3182_; 
lean_inc_ref(v_post_3116_);
lean_inc_ref(v_pre_3115_);
v___x_3182_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3115_, v_post_3116_, v_usedLetOnly_3117_, v_skipConstInApp_3118_, v_skipInstances_3114_, v_x_3119_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3182_, 1);
v_f_3129_ = v_a_3183_;
v___y_3130_ = v___y_3122_;
v___y_3131_ = v___y_3123_;
v___y_3132_ = v___y_3124_;
v___y_3133_ = v___y_3125_;
v___y_3134_ = v___y_3126_;
goto v___jp_3128_;
}
else
{
lean_dec_ref(v_x_3120_);
lean_dec_ref(v_post_3116_);
lean_dec_ref(v_pre_3115_);
return v___x_3182_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object* v___x_3191_, lean_object* v_pre_3192_, lean_object* v_e_3193_, lean_object* v_post_3194_, uint8_t v_usedLetOnly_3195_, uint8_t v_skipConstInApp_3196_, uint8_t v_skipInstances_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Lean_Core_checkSystem(v___x_3191_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3205_; 
lean_dec_ref_known(v___x_3204_, 1);
lean_inc_ref(v_pre_3192_);
lean_inc(v___y_3202_);
lean_inc_ref(v___y_3201_);
lean_inc(v___y_3200_);
lean_inc_ref(v___y_3199_);
lean_inc_ref(v_e_3193_);
v___x_3205_ = lean_apply_6(v_pre_3192_, v_e_3193_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_, lean_box(0));
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3254_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3208_ = v___x_3205_;
v_isShared_3209_ = v_isSharedCheck_3254_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_a_3206_);
lean_dec(v___x_3205_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3254_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___y_3211_; 
switch(lean_obj_tag(v_a_3206_))
{
case 0:
{
lean_object* v_e_3246_; lean_object* v___x_3248_; 
lean_dec_ref(v_post_3194_);
lean_dec_ref(v_e_3193_);
lean_dec_ref(v_pre_3192_);
v_e_3246_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_e_3246_);
lean_dec_ref_known(v_a_3206_, 1);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v_e_3246_);
v___x_3248_ = v___x_3208_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_e_3246_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
case 1:
{
lean_object* v_e_3250_; lean_object* v___x_3251_; 
lean_del_object(v___x_3208_);
lean_dec_ref(v_e_3193_);
v_e_3250_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_e_3250_);
lean_dec_ref_known(v_a_3206_, 1);
v___x_3251_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v_e_3250_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3251_;
}
default: 
{
lean_object* v_e_x3f_3252_; 
lean_del_object(v___x_3208_);
v_e_x3f_3252_ = lean_ctor_get(v_a_3206_, 0);
lean_inc(v_e_x3f_3252_);
lean_dec_ref_known(v_a_3206_, 1);
if (lean_obj_tag(v_e_x3f_3252_) == 0)
{
v___y_3211_ = v_e_3193_;
goto v___jp_3210_;
}
else
{
lean_object* v_val_3253_; 
lean_dec_ref(v_e_3193_);
v_val_3253_ = lean_ctor_get(v_e_x3f_3252_, 0);
lean_inc(v_val_3253_);
lean_dec_ref_known(v_e_x3f_3252_, 1);
v___y_3211_ = v_val_3253_;
goto v___jp_3210_;
}
}
}
v___jp_3210_:
{
switch(lean_obj_tag(v___y_3211_))
{
case 7:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3213_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___x_3212_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3213_;
}
case 6:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3214_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3215_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___x_3214_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3215_;
}
case 8:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3216_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3217_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___x_3216_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3217_;
}
case 5:
{
lean_object* v_dummy_3218_; lean_object* v_nargs_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_dummy_3218_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__1);
v_nargs_3219_ = l_Lean_Expr_getAppNumArgs(v___y_3211_);
lean_inc(v_nargs_3219_);
v___x_3220_ = lean_mk_array(v_nargs_3219_, v_dummy_3218_);
v___x_3221_ = lean_unsigned_to_nat(1u);
v___x_3222_ = lean_nat_sub(v_nargs_3219_, v___x_3221_);
lean_dec(v_nargs_3219_);
v___x_3223_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_3197_, v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v___y_3211_, v___x_3220_, v___x_3222_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3223_;
}
case 10:
{
lean_object* v_data_3224_; lean_object* v_expr_3225_; lean_object* v___x_3226_; 
v_data_3224_ = lean_ctor_get(v___y_3211_, 0);
v_expr_3225_ = lean_ctor_get(v___y_3211_, 1);
lean_inc_ref(v_expr_3225_);
lean_inc_ref(v_post_3194_);
lean_inc_ref(v_pre_3192_);
v___x_3226_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v_expr_3225_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v_a_3227_; size_t v___x_3228_; size_t v___x_3229_; uint8_t v___x_3230_; 
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
lean_inc(v_a_3227_);
lean_dec_ref_known(v___x_3226_, 1);
v___x_3228_ = lean_ptr_addr(v_expr_3225_);
v___x_3229_ = lean_ptr_addr(v_a_3227_);
v___x_3230_ = lean_usize_dec_eq(v___x_3228_, v___x_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
lean_inc(v_data_3224_);
lean_dec_ref_known(v___y_3211_, 2);
v___x_3231_ = l_Lean_Expr_mdata___override(v_data_3224_, v_a_3227_);
v___x_3232_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___x_3231_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3232_;
}
else
{
lean_object* v___x_3233_; 
lean_dec(v_a_3227_);
v___x_3233_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3233_;
}
}
else
{
lean_dec_ref_known(v___y_3211_, 2);
lean_dec_ref(v_post_3194_);
lean_dec_ref(v_pre_3192_);
return v___x_3226_;
}
}
case 11:
{
lean_object* v_typeName_3234_; lean_object* v_idx_3235_; lean_object* v_struct_3236_; lean_object* v___x_3237_; 
v_typeName_3234_ = lean_ctor_get(v___y_3211_, 0);
v_idx_3235_ = lean_ctor_get(v___y_3211_, 1);
v_struct_3236_ = lean_ctor_get(v___y_3211_, 2);
lean_inc_ref(v_struct_3236_);
lean_inc_ref(v_post_3194_);
lean_inc_ref(v_pre_3192_);
v___x_3237_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v_struct_3236_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; size_t v___x_3239_; size_t v___x_3240_; uint8_t v___x_3241_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_a_3238_);
lean_dec_ref_known(v___x_3237_, 1);
v___x_3239_ = lean_ptr_addr(v_struct_3236_);
v___x_3240_ = lean_ptr_addr(v_a_3238_);
v___x_3241_ = lean_usize_dec_eq(v___x_3239_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
lean_inc(v_idx_3235_);
lean_inc(v_typeName_3234_);
lean_dec_ref_known(v___y_3211_, 3);
v___x_3242_ = l_Lean_Expr_proj___override(v_typeName_3234_, v_idx_3235_, v_a_3238_);
v___x_3243_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___x_3242_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3243_;
}
else
{
lean_object* v___x_3244_; 
lean_dec(v_a_3238_);
v___x_3244_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3244_;
}
}
else
{
lean_dec_ref_known(v___y_3211_, 3);
lean_dec_ref(v_post_3194_);
lean_dec_ref(v_pre_3192_);
return v___x_3237_;
}
}
default: 
{
lean_object* v___x_3245_; 
v___x_3245_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3192_, v_post_3194_, v_usedLetOnly_3195_, v_skipConstInApp_3196_, v_skipInstances_3197_, v___y_3211_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3245_;
}
}
}
}
}
else
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec_ref(v_post_3194_);
lean_dec_ref(v_e_3193_);
lean_dec_ref(v_pre_3192_);
v_a_3255_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3205_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3205_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec_ref(v_post_3194_);
lean_dec_ref(v_e_3193_);
lean_dec_ref(v_pre_3192_);
v_a_3263_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3204_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3204_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_3271_, lean_object* v_pre_3272_, lean_object* v_e_3273_, lean_object* v_post_3274_, lean_object* v_usedLetOnly_3275_, lean_object* v_skipConstInApp_3276_, lean_object* v_skipInstances_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
uint8_t v_usedLetOnly_boxed_3284_; uint8_t v_skipConstInApp_boxed_3285_; uint8_t v_skipInstances_boxed_3286_; lean_object* v_res_3287_; 
v_usedLetOnly_boxed_3284_ = lean_unbox(v_usedLetOnly_3275_);
v_skipConstInApp_boxed_3285_ = lean_unbox(v_skipConstInApp_3276_);
v_skipInstances_boxed_3286_ = lean_unbox(v_skipInstances_3277_);
v_res_3287_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(v___x_3271_, v_pre_3272_, v_e_3273_, v_post_3274_, v_usedLetOnly_boxed_3284_, v_skipConstInApp_boxed_3285_, v_skipInstances_boxed_3286_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object* v_pre_3288_, lean_object* v_post_3289_, uint8_t v_usedLetOnly_3290_, uint8_t v_skipConstInApp_3291_, uint8_t v_skipInstances_3292_, lean_object* v_e_3293_, lean_object* v_a_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
lean_inc(v_a_3294_);
v___x_3300_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3300_, 0, lean_box(0));
lean_closure_set(v___x_3300_, 1, lean_box(0));
lean_closure_set(v___x_3300_, 2, v_a_3294_);
v___x_3301_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3300_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3336_; 
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3336_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3336_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_a_3302_, v_e_3293_);
lean_dec(v_a_3302_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___f_3311_; lean_object* v___x_3312_; 
lean_del_object(v___x_3304_);
v___x_3307_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0));
v___x_3308_ = lean_box(v_usedLetOnly_3290_);
v___x_3309_ = lean_box(v_skipConstInApp_3291_);
v___x_3310_ = lean_box(v_skipInstances_3292_);
lean_inc_ref(v_e_3293_);
v___f_3311_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3311_, 0, v___x_3307_);
lean_closure_set(v___f_3311_, 1, v_pre_3288_);
lean_closure_set(v___f_3311_, 2, v_e_3293_);
lean_closure_set(v___f_3311_, 3, v_post_3289_);
lean_closure_set(v___f_3311_, 4, v___x_3308_);
lean_closure_set(v___f_3311_, 5, v___x_3309_);
lean_closure_set(v___f_3311_, 6, v___x_3310_);
v___x_3312_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v___f_3311_, v_a_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v___f_3314_; lean_object* v___x_3315_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc_n(v_a_3313_, 2);
lean_dec_ref_known(v___x_3312_, 1);
lean_inc(v_a_3294_);
v___f_3314_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3314_, 0, v_a_3294_);
lean_closure_set(v___f_3314_, 1, v_e_3293_);
lean_closure_set(v___f_3314_, 2, v_a_3313_);
v___x_3315_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3314_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3322_ == 0)
{
lean_object* v_unused_3323_; 
v_unused_3323_ = lean_ctor_get(v___x_3315_, 0);
lean_dec(v_unused_3323_);
v___x_3317_ = v___x_3315_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_dec(v___x_3315_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 0, v_a_3313_);
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3313_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec(v_a_3313_);
v_a_3324_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3315_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3315_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
else
{
lean_dec_ref(v_e_3293_);
return v___x_3312_;
}
}
else
{
lean_object* v_val_3332_; lean_object* v___x_3334_; 
lean_dec_ref(v_e_3293_);
lean_dec_ref(v_post_3289_);
lean_dec_ref(v_pre_3288_);
v_val_3332_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_val_3332_);
lean_dec_ref_known(v___x_3306_, 1);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v_val_3332_);
v___x_3334_ = v___x_3304_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_val_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
else
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3344_; 
lean_dec_ref(v_e_3293_);
lean_dec_ref(v_post_3289_);
lean_dec_ref(v_pre_3288_);
v_a_3337_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3339_ = v___x_3301_;
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3301_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3342_; 
if (v_isShared_3340_ == 0)
{
v___x_3342_ = v___x_3339_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3337_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3345_, lean_object* v_post_3346_, uint8_t v_usedLetOnly_3347_, uint8_t v_skipConstInApp_3348_, uint8_t v_skipInstances_3349_, lean_object* v_fvars_3350_, lean_object* v_e_3351_, lean_object* v_a_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
if (lean_obj_tag(v_e_3351_) == 7)
{
lean_object* v_binderName_3358_; lean_object* v_binderType_3359_; lean_object* v_body_3360_; uint8_t v_binderInfo_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___f_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_binderName_3358_ = lean_ctor_get(v_e_3351_, 0);
lean_inc(v_binderName_3358_);
v_binderType_3359_ = lean_ctor_get(v_e_3351_, 1);
lean_inc_ref(v_binderType_3359_);
v_body_3360_ = lean_ctor_get(v_e_3351_, 2);
lean_inc_ref(v_body_3360_);
v_binderInfo_3361_ = lean_ctor_get_uint8(v_e_3351_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3351_, 3);
v___x_3362_ = lean_box(v_usedLetOnly_3347_);
v___x_3363_ = lean_box(v_skipConstInApp_3348_);
v___x_3364_ = lean_box(v_skipInstances_3349_);
lean_inc_ref(v_post_3346_);
lean_inc_ref(v_pre_3345_);
lean_inc_ref(v_fvars_3350_);
v___f_3365_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3365_, 0, v_fvars_3350_);
lean_closure_set(v___f_3365_, 1, v_pre_3345_);
lean_closure_set(v___f_3365_, 2, v_post_3346_);
lean_closure_set(v___f_3365_, 3, v___x_3362_);
lean_closure_set(v___f_3365_, 4, v___x_3363_);
lean_closure_set(v___f_3365_, 5, v___x_3364_);
lean_closure_set(v___f_3365_, 6, v_body_3360_);
v___x_3366_ = lean_expr_instantiate_rev(v_binderType_3359_, v_fvars_3350_);
lean_dec_ref(v_fvars_3350_);
lean_dec_ref(v_binderType_3359_);
v___x_3367_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3345_, v_post_3346_, v_usedLetOnly_3347_, v_skipConstInApp_3348_, v_skipInstances_3349_, v___x_3366_, v_a_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; uint8_t v___x_3369_; lean_object* v___x_3370_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v___x_3369_ = 0;
v___x_3370_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_3358_, v_binderInfo_3361_, v_a_3368_, v___f_3365_, v___x_3369_, v_a_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
return v___x_3370_;
}
else
{
lean_dec_ref(v___f_3365_);
lean_dec(v_binderName_3358_);
return v___x_3367_;
}
}
else
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = lean_expr_instantiate_rev(v_e_3351_, v_fvars_3350_);
lean_dec_ref(v_e_3351_);
lean_inc_ref(v_post_3346_);
lean_inc_ref(v_pre_3345_);
v___x_3372_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3345_, v_post_3346_, v_usedLetOnly_3347_, v_skipConstInApp_3348_, v_skipInstances_3349_, v___x_3371_, v_a_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; uint8_t v___x_3374_; uint8_t v___x_3375_; uint8_t v___x_3376_; lean_object* v___x_3377_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3374_ = 0;
v___x_3375_ = 1;
v___x_3376_ = 1;
v___x_3377_ = l_Lean_Meta_mkForallFVars(v_fvars_3350_, v_a_3373_, v___x_3374_, v_usedLetOnly_3347_, v___x_3375_, v___x_3376_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; lean_object* v___x_3379_; 
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3378_);
lean_dec_ref_known(v___x_3377_, 1);
v___x_3379_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3345_, v_post_3346_, v_usedLetOnly_3347_, v_skipConstInApp_3348_, v_skipInstances_3349_, v_a_3378_, v_a_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
return v___x_3379_;
}
else
{
lean_dec_ref(v_post_3346_);
lean_dec_ref(v_pre_3345_);
return v___x_3377_;
}
}
else
{
lean_dec_ref(v_fvars_3350_);
lean_dec_ref(v_post_3346_);
lean_dec_ref(v_pre_3345_);
return v___x_3372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3380_, lean_object* v_pre_3381_, lean_object* v_post_3382_, uint8_t v_usedLetOnly_3383_, uint8_t v_skipConstInApp_3384_, uint8_t v_skipInstances_3385_, lean_object* v_body_3386_, lean_object* v_x_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_array_push(v_fvars_3380_, v_x_3387_);
v___x_3395_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3381_, v_post_3382_, v_usedLetOnly_3383_, v_skipConstInApp_3384_, v_skipInstances_3385_, v___x_3394_, v_body_3386_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_3396_, lean_object* v_post_3397_, lean_object* v_usedLetOnly_3398_, lean_object* v_skipConstInApp_3399_, lean_object* v_skipInstances_3400_, lean_object* v_e_3401_, lean_object* v_a_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
uint8_t v_usedLetOnly_boxed_3408_; uint8_t v_skipConstInApp_boxed_3409_; uint8_t v_skipInstances_boxed_3410_; lean_object* v_res_3411_; 
v_usedLetOnly_boxed_3408_ = lean_unbox(v_usedLetOnly_3398_);
v_skipConstInApp_boxed_3409_ = lean_unbox(v_skipConstInApp_3399_);
v_skipInstances_boxed_3410_ = lean_unbox(v_skipInstances_3400_);
v_res_3411_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3396_, v_post_3397_, v_usedLetOnly_boxed_3408_, v_skipConstInApp_boxed_3409_, v_skipInstances_boxed_3410_, v_e_3401_, v_a_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v_a_3402_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object* v_pre_3412_, lean_object* v_post_3413_, lean_object* v_usedLetOnly_3414_, lean_object* v_skipConstInApp_3415_, lean_object* v_skipInstances_3416_, lean_object* v_e_3417_, lean_object* v_a_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
uint8_t v_usedLetOnly_boxed_3424_; uint8_t v_skipConstInApp_boxed_3425_; uint8_t v_skipInstances_boxed_3426_; lean_object* v_res_3427_; 
v_usedLetOnly_boxed_3424_ = lean_unbox(v_usedLetOnly_3414_);
v_skipConstInApp_boxed_3425_ = lean_unbox(v_skipConstInApp_3415_);
v_skipInstances_boxed_3426_ = lean_unbox(v_skipInstances_3416_);
v_res_3427_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3412_, v_post_3413_, v_usedLetOnly_boxed_3424_, v_skipConstInApp_boxed_3425_, v_skipInstances_boxed_3426_, v_e_3417_, v_a_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v_a_3418_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_3428_, lean_object* v_post_3429_, lean_object* v_usedLetOnly_3430_, lean_object* v_skipConstInApp_3431_, lean_object* v_skipInstances_3432_, lean_object* v_fvars_3433_, lean_object* v_e_3434_, lean_object* v_a_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
uint8_t v_usedLetOnly_boxed_3441_; uint8_t v_skipConstInApp_boxed_3442_; uint8_t v_skipInstances_boxed_3443_; lean_object* v_res_3444_; 
v_usedLetOnly_boxed_3441_ = lean_unbox(v_usedLetOnly_3430_);
v_skipConstInApp_boxed_3442_ = lean_unbox(v_skipConstInApp_3431_);
v_skipInstances_boxed_3443_ = lean_unbox(v_skipInstances_3432_);
v_res_3444_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3428_, v_post_3429_, v_usedLetOnly_boxed_3441_, v_skipConstInApp_boxed_3442_, v_skipInstances_boxed_3443_, v_fvars_3433_, v_e_3434_, v_a_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec(v_a_3435_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_3445_, lean_object* v_post_3446_, lean_object* v_usedLetOnly_3447_, lean_object* v_skipConstInApp_3448_, lean_object* v_skipInstances_3449_, lean_object* v_fvars_3450_, lean_object* v_e_3451_, lean_object* v_a_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
uint8_t v_usedLetOnly_boxed_3458_; uint8_t v_skipConstInApp_boxed_3459_; uint8_t v_skipInstances_boxed_3460_; lean_object* v_res_3461_; 
v_usedLetOnly_boxed_3458_ = lean_unbox(v_usedLetOnly_3447_);
v_skipConstInApp_boxed_3459_ = lean_unbox(v_skipConstInApp_3448_);
v_skipInstances_boxed_3460_ = lean_unbox(v_skipInstances_3449_);
v_res_3461_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3445_, v_post_3446_, v_usedLetOnly_boxed_3458_, v_skipConstInApp_boxed_3459_, v_skipInstances_boxed_3460_, v_fvars_3450_, v_e_3451_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v_a_3452_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_3462_, lean_object* v_post_3463_, lean_object* v_usedLetOnly_3464_, lean_object* v_skipConstInApp_3465_, lean_object* v_skipInstances_3466_, lean_object* v_fvars_3467_, lean_object* v_e_3468_, lean_object* v_a_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_){
_start:
{
uint8_t v_usedLetOnly_boxed_3475_; uint8_t v_skipConstInApp_boxed_3476_; uint8_t v_skipInstances_boxed_3477_; lean_object* v_res_3478_; 
v_usedLetOnly_boxed_3475_ = lean_unbox(v_usedLetOnly_3464_);
v_skipConstInApp_boxed_3476_ = lean_unbox(v_skipConstInApp_3465_);
v_skipInstances_boxed_3477_ = lean_unbox(v_skipInstances_3466_);
v_res_3478_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3462_, v_post_3463_, v_usedLetOnly_boxed_3475_, v_skipConstInApp_boxed_3476_, v_skipInstances_boxed_3477_, v_fvars_3467_, v_e_3468_, v_a_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v_a_3469_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_3479_, lean_object* v___x_3480_, lean_object* v_pre_3481_, lean_object* v_post_3482_, lean_object* v_usedLetOnly_3483_, lean_object* v_skipConstInApp_3484_, lean_object* v_skipInstances_3485_, lean_object* v_a_3486_, lean_object* v_b_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
uint8_t v_usedLetOnly_boxed_3494_; uint8_t v_skipConstInApp_boxed_3495_; uint8_t v_skipInstances_boxed_3496_; lean_object* v_res_3497_; 
v_usedLetOnly_boxed_3494_ = lean_unbox(v_usedLetOnly_3483_);
v_skipConstInApp_boxed_3495_ = lean_unbox(v_skipConstInApp_3484_);
v_skipInstances_boxed_3496_ = lean_unbox(v_skipInstances_3485_);
v_res_3497_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3479_, v___x_3480_, v_pre_3481_, v_post_3482_, v_usedLetOnly_boxed_3494_, v_skipConstInApp_boxed_3495_, v_skipInstances_boxed_3496_, v_a_3486_, v_b_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
lean_dec(v___y_3488_);
lean_dec_ref(v___x_3480_);
lean_dec(v_upperBound_3479_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_3498_, lean_object* v_pre_3499_, lean_object* v_post_3500_, lean_object* v_usedLetOnly_3501_, lean_object* v_skipConstInApp_3502_, lean_object* v_x_3503_, lean_object* v_x_3504_, lean_object* v_x_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
uint8_t v_skipInstances_boxed_3512_; uint8_t v_usedLetOnly_boxed_3513_; uint8_t v_skipConstInApp_boxed_3514_; lean_object* v_res_3515_; 
v_skipInstances_boxed_3512_ = lean_unbox(v_skipInstances_3498_);
v_usedLetOnly_boxed_3513_ = lean_unbox(v_usedLetOnly_3501_);
v_skipConstInApp_boxed_3514_ = lean_unbox(v_skipConstInApp_3502_);
v_res_3515_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_boxed_3512_, v_pre_3499_, v_post_3500_, v_usedLetOnly_boxed_3513_, v_skipConstInApp_boxed_3514_, v_x_3503_, v_x_3504_, v_x_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
return v_res_3515_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3516_ = lean_box(0);
v___x_3517_ = lean_unsigned_to_nat(16u);
v___x_3518_ = lean_mk_array(v___x_3517_, v___x_3516_);
return v___x_3518_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3519_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0);
v___x_3520_ = lean_unsigned_to_nat(0u);
v___x_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_ctor_set(v___x_3521_, 1, v___x_3519_);
return v___x_3521_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1);
v___x_3523_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3523_, 0, lean_box(0));
lean_closure_set(v___x_3523_, 1, lean_box(0));
lean_closure_set(v___x_3523_, 2, v___x_3522_);
return v___x_3523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object* v_input_3524_, lean_object* v_pre_3525_, lean_object* v_post_3526_, uint8_t v_usedLetOnly_3527_, uint8_t v_skipConstInApp_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
uint8_t v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v_a_3537_; lean_object* v___x_3538_; 
v___x_3534_ = 0;
v___x_3535_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2);
v___x_3536_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3535_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3537_);
lean_dec_ref(v___x_3536_);
v___x_3538_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3525_, v_post_3526_, v_usedLetOnly_3527_, v_skipConstInApp_3528_, v___x_3534_, v_input_3524_, v_a_3537_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3540_, 0, lean_box(0));
lean_closure_set(v___x_3540_, 1, lean_box(0));
lean_closure_set(v___x_3540_, 2, v_a_3537_);
v___x_3541_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3540_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3548_ == 0)
{
lean_object* v_unused_3549_; 
v_unused_3549_ = lean_ctor_get(v___x_3541_, 0);
lean_dec(v_unused_3549_);
v___x_3543_ = v___x_3541_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_dec(v___x_3541_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 0, v_a_3539_);
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3539_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
else
{
lean_dec(v_a_3537_);
return v___x_3538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object* v_input_3550_, lean_object* v_pre_3551_, lean_object* v_post_3552_, lean_object* v_usedLetOnly_3553_, lean_object* v_skipConstInApp_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_){
_start:
{
uint8_t v_usedLetOnly_boxed_3560_; uint8_t v_skipConstInApp_boxed_3561_; lean_object* v_res_3562_; 
v_usedLetOnly_boxed_3560_ = lean_unbox(v_usedLetOnly_3553_);
v_skipConstInApp_boxed_3561_ = lean_unbox(v_skipConstInApp_3554_);
v_res_3562_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_input_3550_, v_pre_3551_, v_post_3552_, v_usedLetOnly_boxed_3560_, v_skipConstInApp_boxed_3561_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_);
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3557_);
lean_dec(v___y_3556_);
lean_dec_ref(v___y_3555_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object* v_e_3564_, lean_object* v_p_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v___f_3571_; lean_object* v___f_3572_; lean_object* v___x_3573_; lean_object* v_a_3574_; uint8_t v___x_3575_; lean_object* v___x_3576_; 
v___f_3571_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___closed__0));
v___f_3572_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3572_, 0, v_p_3565_);
v___x_3573_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_3564_, v_a_3567_);
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref(v___x_3573_);
v___x_3575_ = 0;
v___x_3576_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_a_3574_, v___f_3571_, v___f_3572_, v___x_3575_, v___x_3575_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object* v_e_3577_, lean_object* v_p_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lean_Meta_etaStructReduce(v_e_3577_, v_p_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
lean_dec(v_a_3582_);
lean_dec_ref(v_a_3581_);
lean_dec(v_a_3580_);
lean_dec_ref(v_a_3579_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_3585_, lean_object* v___x_3586_, lean_object* v_pre_3587_, lean_object* v_post_3588_, uint8_t v_usedLetOnly_3589_, uint8_t v_skipConstInApp_3590_, uint8_t v_skipInstances_3591_, lean_object* v___x_3592_, lean_object* v_inst_3593_, lean_object* v_R_3594_, lean_object* v_a_3595_, lean_object* v_b_3596_, lean_object* v_c_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3585_, v___x_3586_, v_pre_3587_, v_post_3588_, v_usedLetOnly_3589_, v_skipConstInApp_3590_, v_skipInstances_3591_, v_a_3595_, v_b_3596_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3605_ = _args[0];
lean_object* v___x_3606_ = _args[1];
lean_object* v_pre_3607_ = _args[2];
lean_object* v_post_3608_ = _args[3];
lean_object* v_usedLetOnly_3609_ = _args[4];
lean_object* v_skipConstInApp_3610_ = _args[5];
lean_object* v_skipInstances_3611_ = _args[6];
lean_object* v___x_3612_ = _args[7];
lean_object* v_inst_3613_ = _args[8];
lean_object* v_R_3614_ = _args[9];
lean_object* v_a_3615_ = _args[10];
lean_object* v_b_3616_ = _args[11];
lean_object* v_c_3617_ = _args[12];
lean_object* v___y_3618_ = _args[13];
lean_object* v___y_3619_ = _args[14];
lean_object* v___y_3620_ = _args[15];
lean_object* v___y_3621_ = _args[16];
lean_object* v___y_3622_ = _args[17];
lean_object* v___y_3623_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3624_; uint8_t v_skipConstInApp_boxed_3625_; uint8_t v_skipInstances_boxed_3626_; lean_object* v_res_3627_; 
v_usedLetOnly_boxed_3624_ = lean_unbox(v_usedLetOnly_3609_);
v_skipConstInApp_boxed_3625_ = lean_unbox(v_skipConstInApp_3610_);
v_skipInstances_boxed_3626_ = lean_unbox(v_skipInstances_3611_);
v_res_3627_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(v_upperBound_3605_, v___x_3606_, v_pre_3607_, v_post_3608_, v_usedLetOnly_boxed_3624_, v_skipConstInApp_boxed_3625_, v_skipInstances_boxed_3626_, v___x_3612_, v_inst_3613_, v_R_3614_, v_a_3615_, v_b_3616_, v_c_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec(v___x_3612_);
lean_dec_ref(v___x_3606_);
lean_dec(v_upperBound_3605_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3628_, lean_object* v_m_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v___x_3631_; 
v___x_3631_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_3629_, v_a_3630_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3632_, lean_object* v_m_3633_, lean_object* v_a_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(v_00_u03b2_3632_, v_m_3633_, v_a_3634_);
lean_dec_ref(v_a_3634_);
lean_dec_ref(v_m_3633_);
return v_res_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3636_, lean_object* v_name_3637_, uint8_t v_bi_3638_, lean_object* v_type_3639_, lean_object* v_k_3640_, uint8_t v_kind_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3637_, v_bi_3638_, v_type_3639_, v_k_3640_, v_kind_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3649_, lean_object* v_name_3650_, lean_object* v_bi_3651_, lean_object* v_type_3652_, lean_object* v_k_3653_, lean_object* v_kind_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
uint8_t v_bi_boxed_3661_; uint8_t v_kind_boxed_3662_; lean_object* v_res_3663_; 
v_bi_boxed_3661_ = lean_unbox(v_bi_3651_);
v_kind_boxed_3662_ = lean_unbox(v_kind_3654_);
v_res_3663_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3649_, v_name_3650_, v_bi_boxed_3661_, v_type_3652_, v_k_3653_, v_kind_boxed_3662_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3664_, lean_object* v_name_3665_, lean_object* v_type_3666_, lean_object* v_val_3667_, lean_object* v_k_3668_, uint8_t v_nondep_3669_, uint8_t v_kind_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3665_, v_type_3666_, v_val_3667_, v_k_3668_, v_nondep_3669_, v_kind_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3678_, lean_object* v_name_3679_, lean_object* v_type_3680_, lean_object* v_val_3681_, lean_object* v_k_3682_, lean_object* v_nondep_3683_, lean_object* v_kind_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_){
_start:
{
uint8_t v_nondep_boxed_3691_; uint8_t v_kind_boxed_3692_; lean_object* v_res_3693_; 
v_nondep_boxed_3691_ = lean_unbox(v_nondep_3683_);
v_kind_boxed_3692_ = lean_unbox(v_kind_3684_);
v_res_3693_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3678_, v_name_3679_, v_type_3680_, v_val_3681_, v_k_3682_, v_nondep_boxed_3691_, v_kind_boxed_3692_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_, v___y_3689_);
lean_dec(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec(v___y_3687_);
lean_dec_ref(v___y_3686_);
lean_dec(v___y_3685_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3694_, lean_object* v_ref_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_){
_start:
{
lean_object* v___x_3701_; 
v___x_3701_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3695_);
return v___x_3701_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3702_, lean_object* v_ref_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3702_, v_ref_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3710_, lean_object* v_x_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3719_, lean_object* v_x_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(v_00_u03b1_3719_, v_x_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec(v___y_3723_);
lean_dec_ref(v___y_3722_);
lean_dec(v___y_3721_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3728_, lean_object* v_m_3729_, lean_object* v_a_3730_, lean_object* v_b_3731_){
_start:
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v_m_3729_, v_a_3730_, v_b_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3733_, lean_object* v_a_3734_, lean_object* v_x_3735_){
_start:
{
lean_object* v___x_3736_; 
v___x_3736_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3734_, v_x_3735_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3737_, lean_object* v_a_3738_, lean_object* v_x_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3737_, v_a_3738_, v_x_3739_);
lean_dec(v_x_3739_);
lean_dec_ref(v_a_3738_);
return v_res_3740_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3741_, lean_object* v_a_3742_, lean_object* v_x_3743_){
_start:
{
uint8_t v___x_3744_; 
v___x_3744_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3742_, v_x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3745_, lean_object* v_a_3746_, lean_object* v_x_3747_){
_start:
{
uint8_t v_res_3748_; lean_object* v_r_3749_; 
v_res_3748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3745_, v_a_3746_, v_x_3747_);
lean_dec(v_x_3747_);
lean_dec_ref(v_a_3746_);
v_r_3749_ = lean_box(v_res_3748_);
return v_r_3749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3750_, lean_object* v_data_3751_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3751_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3753_, lean_object* v_a_3754_, lean_object* v_b_3755_, lean_object* v_x_3756_){
_start:
{
lean_object* v___x_3757_; 
v___x_3757_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3754_, v_b_3755_, v_x_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3758_, lean_object* v_i_3759_, lean_object* v_source_3760_, lean_object* v_target_3761_){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3759_, v_source_3760_, v_target_3761_);
return v___x_3762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3763_, lean_object* v_x_3764_, lean_object* v_x_3765_){
_start:
{
lean_object* v___x_3766_; 
v___x_3766_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3764_, v_x_3765_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object* v_binderType_3767_, lean_object* v_inst_3768_, lean_object* v_toBind_3769_, lean_object* v___f_3770_, lean_object* v_____do__lift_3771_){
_start:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3772_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3772_, 0, v_____do__lift_3771_);
lean_closure_set(v___x_3772_, 1, v_binderType_3767_);
v___x_3773_ = lean_apply_2(v_inst_3768_, lean_box(0), v___x_3772_);
v___x_3774_ = lean_apply_4(v_toBind_3769_, lean_box(0), lean_box(0), v___x_3773_, v___f_3770_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object* v_toPure_3775_, lean_object* v_usedFields_3776_, lean_object* v_binderName_3777_, lean_object* v_body_3778_, lean_object* v_val_3779_, lean_object* v_inst_3780_, lean_object* v_inst_3781_, lean_object* v_fieldVal_x3f_3782_, lean_object* v_____do__lift_3783_){
_start:
{
uint8_t v_____do__lift_291__boxed_3784_; lean_object* v_res_3785_; 
v_____do__lift_291__boxed_3784_ = lean_unbox(v_____do__lift_3783_);
v_res_3785_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(v_toPure_3775_, v_usedFields_3776_, v_binderName_3777_, v_body_3778_, v_val_3779_, v_inst_3780_, v_inst_3781_, v_fieldVal_x3f_3782_, v_____do__lift_291__boxed_3784_);
lean_dec_ref(v_val_3779_);
lean_dec_ref(v_body_3778_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object* v_toPure_3786_, lean_object* v_usedFields_3787_, lean_object* v_binderName_3788_, lean_object* v_body_3789_, lean_object* v_inst_3790_, lean_object* v_inst_3791_, lean_object* v_fieldVal_x3f_3792_, lean_object* v_binderType_3793_, lean_object* v_toBind_3794_, lean_object* v_____x_3795_){
_start:
{
if (lean_obj_tag(v_____x_3795_) == 1)
{
lean_object* v_val_3796_; lean_object* v___f_3797_; lean_object* v___f_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v_val_3796_ = lean_ctor_get(v_____x_3795_, 0);
lean_inc_n(v_val_3796_, 2);
lean_dec_ref_known(v_____x_3795_, 1);
lean_inc_n(v_inst_3791_, 2);
v___f_3797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3797_, 0, v_toPure_3786_);
lean_closure_set(v___f_3797_, 1, v_usedFields_3787_);
lean_closure_set(v___f_3797_, 2, v_binderName_3788_);
lean_closure_set(v___f_3797_, 3, v_body_3789_);
lean_closure_set(v___f_3797_, 4, v_val_3796_);
lean_closure_set(v___f_3797_, 5, v_inst_3790_);
lean_closure_set(v___f_3797_, 6, v_inst_3791_);
lean_closure_set(v___f_3797_, 7, v_fieldVal_x3f_3792_);
lean_inc(v_toBind_3794_);
v___f_3798_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3798_, 0, v_binderType_3793_);
lean_closure_set(v___f_3798_, 1, v_inst_3791_);
lean_closure_set(v___f_3798_, 2, v_toBind_3794_);
lean_closure_set(v___f_3798_, 3, v___f_3797_);
v___x_3799_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3799_, 0, v_val_3796_);
v___x_3800_ = lean_apply_2(v_inst_3791_, lean_box(0), v___x_3799_);
v___x_3801_ = lean_apply_4(v_toBind_3794_, lean_box(0), lean_box(0), v___x_3800_, v___f_3798_);
return v___x_3801_;
}
else
{
lean_object* v___x_3802_; lean_object* v___x_3803_; 
lean_dec(v_____x_3795_);
lean_dec(v_toBind_3794_);
lean_dec_ref(v_binderType_3793_);
lean_dec(v_fieldVal_x3f_3792_);
lean_dec(v_inst_3791_);
lean_dec_ref(v_inst_3790_);
lean_dec_ref(v_body_3789_);
lean_dec(v_binderName_3788_);
lean_dec(v_usedFields_3787_);
v___x_3802_ = lean_box(0);
v___x_3803_ = lean_apply_2(v_toPure_3786_, lean_box(0), v___x_3802_);
return v___x_3803_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object* v_inst_3807_, lean_object* v_inst_3808_, lean_object* v_fieldVal_x3f_3809_, lean_object* v_usedFields_3810_, lean_object* v_e_3811_){
_start:
{
lean_object* v_toApplicative_3812_; lean_object* v_toBind_3813_; lean_object* v_toPure_3814_; 
v_toApplicative_3812_ = lean_ctor_get(v_inst_3807_, 0);
v_toBind_3813_ = lean_ctor_get(v_inst_3807_, 1);
v_toPure_3814_ = lean_ctor_get(v_toApplicative_3812_, 1);
lean_inc(v_toPure_3814_);
if (lean_obj_tag(v_e_3811_) == 6)
{
lean_object* v_binderName_3819_; lean_object* v_binderType_3820_; lean_object* v_body_3821_; lean_object* v___f_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_inc_n(v_toBind_3813_, 2);
v_binderName_3819_ = lean_ctor_get(v_e_3811_, 0);
lean_inc_n(v_binderName_3819_, 2);
v_binderType_3820_ = lean_ctor_get(v_e_3811_, 1);
lean_inc_ref(v_binderType_3820_);
v_body_3821_ = lean_ctor_get(v_e_3811_, 2);
lean_inc_ref(v_body_3821_);
lean_dec_ref_known(v_e_3811_, 3);
lean_inc(v_fieldVal_x3f_3809_);
v___f_3822_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3822_, 0, v_toPure_3814_);
lean_closure_set(v___f_3822_, 1, v_usedFields_3810_);
lean_closure_set(v___f_3822_, 2, v_binderName_3819_);
lean_closure_set(v___f_3822_, 3, v_body_3821_);
lean_closure_set(v___f_3822_, 4, v_inst_3807_);
lean_closure_set(v___f_3822_, 5, v_inst_3808_);
lean_closure_set(v___f_3822_, 6, v_fieldVal_x3f_3809_);
lean_closure_set(v___f_3822_, 7, v_binderType_3820_);
lean_closure_set(v___f_3822_, 8, v_toBind_3813_);
v___x_3823_ = lean_apply_1(v_fieldVal_x3f_3809_, v_binderName_3819_);
v___x_3824_ = lean_apply_4(v_toBind_3813_, lean_box(0), lean_box(0), v___x_3823_, v___f_3822_);
return v___x_3824_;
}
else
{
lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3841_; 
lean_dec(v_fieldVal_x3f_3809_);
lean_dec(v_inst_3808_);
v_isSharedCheck_3841_ = !lean_is_exclusive(v_inst_3807_);
if (v_isSharedCheck_3841_ == 0)
{
lean_object* v_unused_3842_; lean_object* v_unused_3843_; 
v_unused_3842_ = lean_ctor_get(v_inst_3807_, 1);
lean_dec(v_unused_3842_);
v_unused_3843_ = lean_ctor_get(v_inst_3807_, 0);
lean_dec(v_unused_3843_);
v___x_3826_ = v_inst_3807_;
v_isShared_3827_ = v_isSharedCheck_3841_;
goto v_resetjp_3825_;
}
else
{
lean_dec(v_inst_3807_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3841_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3828_; uint8_t v___x_3829_; 
lean_inc_ref(v_e_3811_);
v___x_3828_ = l_Lean_Expr_cleanupAnnotations(v_e_3811_);
v___x_3829_ = l_Lean_Expr_isApp(v___x_3828_);
if (v___x_3829_ == 0)
{
lean_dec_ref(v___x_3828_);
lean_del_object(v___x_3826_);
goto v___jp_3815_;
}
else
{
lean_object* v_arg_3830_; lean_object* v___x_3831_; uint8_t v___x_3832_; 
v_arg_3830_ = lean_ctor_get(v___x_3828_, 1);
lean_inc_ref(v_arg_3830_);
v___x_3831_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3828_);
v___x_3832_ = l_Lean_Expr_isApp(v___x_3831_);
if (v___x_3832_ == 0)
{
lean_dec_ref(v___x_3831_);
lean_dec_ref(v_arg_3830_);
lean_del_object(v___x_3826_);
goto v___jp_3815_;
}
else
{
lean_object* v___x_3833_; lean_object* v___x_3834_; uint8_t v___x_3835_; 
v___x_3833_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3831_);
v___x_3834_ = ((lean_object*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1));
v___x_3835_ = l_Lean_Expr_isConstOf(v___x_3833_, v___x_3834_);
lean_dec_ref(v___x_3833_);
if (v___x_3835_ == 0)
{
lean_dec_ref(v_arg_3830_);
lean_del_object(v___x_3826_);
goto v___jp_3815_;
}
else
{
lean_object* v___x_3837_; 
lean_dec_ref(v_e_3811_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 1, v_arg_3830_);
lean_ctor_set(v___x_3826_, 0, v_usedFields_3810_);
v___x_3837_ = v___x_3826_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_usedFields_3810_);
lean_ctor_set(v_reuseFailAlloc_3840_, 1, v_arg_3830_);
v___x_3837_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
v___x_3839_ = lean_apply_2(v_toPure_3814_, lean_box(0), v___x_3838_);
return v___x_3839_;
}
}
}
}
}
}
v___jp_3815_:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3816_, 0, v_usedFields_3810_);
lean_ctor_set(v___x_3816_, 1, v_e_3811_);
v___x_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
v___x_3818_ = lean_apply_2(v_toPure_3814_, lean_box(0), v___x_3817_);
return v___x_3818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object* v_toPure_3844_, lean_object* v_usedFields_3845_, lean_object* v_binderName_3846_, lean_object* v_body_3847_, lean_object* v_val_3848_, lean_object* v_inst_3849_, lean_object* v_inst_3850_, lean_object* v_fieldVal_x3f_3851_, uint8_t v_____do__lift_3852_){
_start:
{
if (v_____do__lift_3852_ == 0)
{
lean_object* v___x_3853_; lean_object* v___x_3854_; 
lean_dec(v_fieldVal_x3f_3851_);
lean_dec(v_inst_3850_);
lean_dec_ref(v_inst_3849_);
lean_dec(v_binderName_3846_);
lean_dec(v_usedFields_3845_);
v___x_3853_ = lean_box(0);
v___x_3854_ = lean_apply_2(v_toPure_3844_, lean_box(0), v___x_3853_);
return v___x_3854_;
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; 
lean_dec(v_toPure_3844_);
v___x_3855_ = l_Lean_NameSet_insert(v_usedFields_3845_, v_binderName_3846_);
v___x_3856_ = lean_expr_instantiate1(v_body_3847_, v_val_3848_);
v___x_3857_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3849_, v_inst_3850_, v_fieldVal_x3f_3851_, v___x_3855_, v___x_3856_);
return v___x_3857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object* v_m_3858_, lean_object* v_inst_3859_, lean_object* v_inst_3860_, lean_object* v_fieldVal_x3f_3861_, lean_object* v_usedFields_3862_, lean_object* v_e_3863_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3859_, v_inst_3860_, v_fieldVal_x3f_3861_, v_usedFields_3862_, v_e_3863_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object* v_inst_3865_, lean_object* v_inst_3866_, lean_object* v_fieldVal_x3f_3867_, lean_object* v_toPure_3868_, lean_object* v_____s_3869_){
_start:
{
lean_object* v_fst_3870_; 
v_fst_3870_ = lean_ctor_get(v_____s_3869_, 0);
if (lean_obj_tag(v_fst_3870_) == 0)
{
lean_object* v_snd_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
lean_dec(v_toPure_3868_);
v_snd_3871_ = lean_ctor_get(v_____s_3869_, 1);
lean_inc(v_snd_3871_);
lean_dec_ref(v_____s_3869_);
v___x_3872_ = l_Lean_NameSet_empty;
v___x_3873_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3865_, v_inst_3866_, v_fieldVal_x3f_3867_, v___x_3872_, v_snd_3871_);
return v___x_3873_;
}
else
{
lean_object* v_val_3874_; lean_object* v___x_3875_; 
lean_inc_ref(v_fst_3870_);
lean_dec_ref(v_____s_3869_);
lean_dec(v_fieldVal_x3f_3867_);
lean_dec(v_inst_3866_);
lean_dec_ref(v_inst_3865_);
v_val_3874_ = lean_ctor_get(v_fst_3870_, 0);
lean_inc(v_val_3874_);
lean_dec_ref_known(v_fst_3870_, 1);
v___x_3875_ = lean_apply_2(v_toPure_3868_, lean_box(0), v_val_3874_);
return v___x_3875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object* v_body_3876_, lean_object* v_a_3877_, lean_object* v___x_3878_, lean_object* v_toPure_3879_, lean_object* v_____r_3880_){
_start:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3881_ = lean_expr_instantiate1(v_body_3876_, v_a_3877_);
v___x_3882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3878_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
v___x_3884_ = lean_apply_2(v_toPure_3879_, lean_box(0), v___x_3883_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object* v_body_3885_, lean_object* v_a_3886_, lean_object* v___x_3887_, lean_object* v_toPure_3888_, lean_object* v_____r_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3885_, v_a_3886_, v___x_3887_, v_toPure_3888_, v_____r_3889_);
lean_dec_ref(v_a_3886_);
lean_dec_ref(v_body_3885_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object* v_snd_3893_, lean_object* v_toPure_3894_, lean_object* v___f_3895_, uint8_t v_____do__lift_3896_){
_start:
{
if (v_____do__lift_3896_ == 0)
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
lean_dec(v___f_3895_);
v___x_3897_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
v___x_3898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
lean_ctor_set(v___x_3898_, 1, v_snd_3893_);
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
v___x_3900_ = lean_apply_2(v_toPure_3894_, lean_box(0), v___x_3899_);
return v___x_3900_;
}
else
{
lean_object* v___x_3901_; lean_object* v___x_3902_; 
lean_dec(v_toPure_3894_);
lean_dec(v_snd_3893_);
v___x_3901_ = lean_box(0);
v___x_3902_ = lean_apply_1(v___f_3895_, v___x_3901_);
return v___x_3902_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object* v_snd_3903_, lean_object* v_toPure_3904_, lean_object* v___f_3905_, lean_object* v_____do__lift_3906_){
_start:
{
uint8_t v_____do__lift_566__boxed_3907_; lean_object* v_res_3908_; 
v_____do__lift_566__boxed_3907_ = lean_unbox(v_____do__lift_3906_);
v_res_3908_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(v_snd_3903_, v_toPure_3904_, v___f_3905_, v_____do__lift_566__boxed_3907_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object* v_binderType_3909_, lean_object* v_inst_3910_, lean_object* v_toBind_3911_, lean_object* v___f_3912_, lean_object* v_____do__lift_3913_){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v___x_3914_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3914_, 0, v_____do__lift_3913_);
lean_closure_set(v___x_3914_, 1, v_binderType_3909_);
v___x_3915_ = lean_apply_2(v_inst_3910_, lean_box(0), v___x_3914_);
v___x_3916_ = lean_apply_4(v_toBind_3911_, lean_box(0), lean_box(0), v___x_3915_, v___f_3912_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object* v___x_3917_, lean_object* v_toPure_3918_, lean_object* v_levels_x3f_3919_, lean_object* v_inst_3920_, lean_object* v_toBind_3921_, lean_object* v_a_3922_, lean_object* v_x_3923_, lean_object* v___y_3924_){
_start:
{
lean_object* v_snd_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3945_; 
v_snd_3925_ = lean_ctor_get(v___y_3924_, 1);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___y_3924_);
if (v_isSharedCheck_3945_ == 0)
{
lean_object* v_unused_3946_; 
v_unused_3946_ = lean_ctor_get(v___y_3924_, 0);
lean_dec(v_unused_3946_);
v___x_3927_ = v___y_3924_;
v_isShared_3928_ = v_isSharedCheck_3945_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_snd_3925_);
lean_dec(v___y_3924_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3945_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
if (lean_obj_tag(v_snd_3925_) == 6)
{
lean_object* v_binderType_3929_; lean_object* v_body_3930_; lean_object* v___f_3931_; 
lean_del_object(v___x_3927_);
v_binderType_3929_ = lean_ctor_get(v_snd_3925_, 1);
lean_inc_ref(v_binderType_3929_);
v_body_3930_ = lean_ctor_get(v_snd_3925_, 2);
lean_inc(v_toPure_3918_);
lean_inc(v___x_3917_);
lean_inc_ref(v_a_3922_);
lean_inc_ref(v_body_3930_);
v___f_3931_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3931_, 0, v_body_3930_);
lean_closure_set(v___f_3931_, 1, v_a_3922_);
lean_closure_set(v___f_3931_, 2, v___x_3917_);
lean_closure_set(v___f_3931_, 3, v_toPure_3918_);
if (lean_obj_tag(v_levels_x3f_3919_) == 0)
{
lean_object* v___f_3932_; lean_object* v___f_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
lean_dec(v___x_3917_);
v___f_3932_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3932_, 0, v_snd_3925_);
lean_closure_set(v___f_3932_, 1, v_toPure_3918_);
lean_closure_set(v___f_3932_, 2, v___f_3931_);
lean_inc(v_toBind_3921_);
lean_inc(v_inst_3920_);
v___f_3933_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3933_, 0, v_binderType_3929_);
lean_closure_set(v___f_3933_, 1, v_inst_3920_);
lean_closure_set(v___f_3933_, 2, v_toBind_3921_);
lean_closure_set(v___f_3933_, 3, v___f_3932_);
v___x_3934_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3934_, 0, v_a_3922_);
v___x_3935_ = lean_apply_2(v_inst_3920_, lean_box(0), v___x_3934_);
v___x_3936_ = lean_apply_4(v_toBind_3921_, lean_box(0), lean_box(0), v___x_3935_, v___f_3933_);
return v___x_3936_;
}
else
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
lean_inc_ref(v_body_3930_);
lean_dec_ref(v___f_3931_);
lean_dec_ref(v_binderType_3929_);
lean_dec_ref_known(v_snd_3925_, 3);
lean_dec(v_toBind_3921_);
lean_dec(v_inst_3920_);
v___x_3937_ = lean_box(0);
v___x_3938_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3930_, v_a_3922_, v___x_3917_, v_toPure_3918_, v___x_3937_);
lean_dec_ref(v_a_3922_);
lean_dec_ref(v_body_3930_);
return v___x_3938_;
}
}
else
{
lean_object* v___x_3939_; lean_object* v___x_3941_; 
lean_dec_ref(v_a_3922_);
lean_dec(v_toBind_3921_);
lean_dec(v_inst_3920_);
lean_dec(v___x_3917_);
v___x_3939_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 0, v___x_3939_);
v___x_3941_ = v___x_3927_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v___x_3939_);
lean_ctor_set(v_reuseFailAlloc_3944_, 1, v_snd_3925_);
v___x_3941_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3941_);
v___x_3943_ = lean_apply_2(v_toPure_3918_, lean_box(0), v___x_3942_);
return v___x_3943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object* v___x_3947_, lean_object* v_toPure_3948_, lean_object* v_levels_x3f_3949_, lean_object* v_inst_3950_, lean_object* v_toBind_3951_, lean_object* v_a_3952_, lean_object* v_x_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(v___x_3947_, v_toPure_3948_, v_levels_x3f_3949_, v_inst_3950_, v_toBind_3951_, v_a_3952_, v_x_3953_, v___y_3954_);
lean_dec(v_levels_x3f_3949_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object* v_toPure_3956_, lean_object* v_levels_x3f_3957_, lean_object* v_inst_3958_, lean_object* v_toBind_3959_, lean_object* v_params_3960_, lean_object* v_inst_3961_, lean_object* v___f_3962_, lean_object* v_val_3963_){
_start:
{
lean_object* v___x_3964_; lean_object* v___f_3965_; lean_object* v___x_3966_; size_t v_sz_3967_; size_t v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3964_ = lean_box(0);
lean_inc(v_toBind_3959_);
v___f_3965_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed), 8, 5);
lean_closure_set(v___f_3965_, 0, v___x_3964_);
lean_closure_set(v___f_3965_, 1, v_toPure_3956_);
lean_closure_set(v___f_3965_, 2, v_levels_x3f_3957_);
lean_closure_set(v___f_3965_, 3, v_inst_3958_);
lean_closure_set(v___f_3965_, 4, v_toBind_3959_);
v___x_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
lean_ctor_set(v___x_3966_, 1, v_val_3963_);
v_sz_3967_ = lean_array_size(v_params_3960_);
v___x_3968_ = ((size_t)0ULL);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3961_, v_params_3960_, v___f_3965_, v_sz_3967_, v___x_3968_, v___x_3966_);
v___x_3970_ = lean_apply_4(v_toBind_3959_, lean_box(0), lean_box(0), v___x_3969_, v___f_3962_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object* v_cinfo_3971_, lean_object* v_us_3972_, uint8_t v___x_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
lean_object* v___x_3979_; 
v___x_3979_ = l_Lean_Core_instantiateValueLevelParams(v_cinfo_3971_, v_us_3972_, v___x_3973_, v___y_3976_, v___y_3977_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object* v_cinfo_3980_, lean_object* v_us_3981_, lean_object* v___x_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
uint8_t v___x_677__boxed_3988_; lean_object* v_res_3989_; 
v___x_677__boxed_3988_ = lean_unbox(v___x_3982_);
v_res_3989_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(v_cinfo_3980_, v_us_3981_, v___x_677__boxed_3988_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec_ref(v_cinfo_3980_);
return v_res_3989_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3993_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2));
v___x_3994_ = lean_unsigned_to_nat(2u);
v___x_3995_ = lean_unsigned_to_nat(202u);
v___x_3996_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1));
v___x_3997_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0));
v___x_3998_ = l_mkPanicMessageWithDecl(v___x_3997_, v___x_3996_, v___x_3995_, v___x_3994_, v___x_3993_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object* v_cinfo_3999_, lean_object* v___x_4000_, lean_object* v_inst_4001_, lean_object* v_toBind_4002_, lean_object* v___f_4003_, lean_object* v_us_4004_){
_start:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; 
v___x_4005_ = l_List_lengthTR___redArg(v_us_4004_);
v___x_4006_ = l_Lean_ConstantInfo_levelParams(v_cinfo_3999_);
v___x_4007_ = l_List_lengthTR___redArg(v___x_4006_);
lean_dec(v___x_4006_);
v___x_4008_ = lean_nat_dec_eq(v___x_4005_, v___x_4007_);
lean_dec(v___x_4007_);
lean_dec(v___x_4005_);
if (v___x_4008_ == 0)
{
lean_object* v___x_4009_; lean_object* v___x_4010_; 
lean_dec(v_us_4004_);
lean_dec(v___f_4003_);
lean_dec(v_toBind_4002_);
lean_dec(v_inst_4001_);
lean_dec_ref(v_cinfo_3999_);
v___x_4009_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3);
v___x_4010_ = l_panic___redArg(v___x_4000_, v___x_4009_);
return v___x_4010_;
}
else
{
uint8_t v___x_4011_; lean_object* v___x_4012_; lean_object* v___f_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4011_ = 0;
v___x_4012_ = lean_box(v___x_4011_);
v___f_4013_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_4013_, 0, v_cinfo_3999_);
lean_closure_set(v___f_4013_, 1, v_us_4004_);
lean_closure_set(v___f_4013_, 2, v___x_4012_);
v___x_4014_ = lean_apply_2(v_inst_4001_, lean_box(0), v___f_4013_);
v___x_4015_ = lean_apply_4(v_toBind_4002_, lean_box(0), lean_box(0), v___x_4014_, v___f_4003_);
return v___x_4015_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object* v_cinfo_4016_, lean_object* v___x_4017_, lean_object* v_inst_4018_, lean_object* v_toBind_4019_, lean_object* v___f_4020_, lean_object* v_us_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(v_cinfo_4016_, v___x_4017_, v_inst_4018_, v_toBind_4019_, v___f_4020_, v_us_4021_);
lean_dec(v___x_4017_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object* v___x_4023_, lean_object* v_inst_4024_, lean_object* v_toBind_4025_, lean_object* v___f_4026_, lean_object* v_levels_x3f_4027_, lean_object* v_toPure_4028_, lean_object* v_cinfo_4029_){
_start:
{
lean_object* v___f_4030_; 
lean_inc(v_toBind_4025_);
lean_inc(v_inst_4024_);
lean_inc_ref(v_cinfo_4029_);
v___f_4030_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_4030_, 0, v_cinfo_4029_);
lean_closure_set(v___f_4030_, 1, v___x_4023_);
lean_closure_set(v___f_4030_, 2, v_inst_4024_);
lean_closure_set(v___f_4030_, 3, v_toBind_4025_);
lean_closure_set(v___f_4030_, 4, v___f_4026_);
if (lean_obj_tag(v_levels_x3f_4027_) == 0)
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
lean_dec(v_toPure_4028_);
v___x_4031_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVarsFor___boxed), 6, 1);
lean_closure_set(v___x_4031_, 0, v_cinfo_4029_);
v___x_4032_ = lean_apply_2(v_inst_4024_, lean_box(0), v___x_4031_);
v___x_4033_ = lean_apply_4(v_toBind_4025_, lean_box(0), lean_box(0), v___x_4032_, v___f_4030_);
return v___x_4033_;
}
else
{
lean_object* v_val_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; 
lean_dec_ref(v_cinfo_4029_);
lean_dec(v_inst_4024_);
v_val_4034_ = lean_ctor_get(v_levels_x3f_4027_, 0);
lean_inc(v_val_4034_);
lean_dec_ref_known(v_levels_x3f_4027_, 1);
v___x_4035_ = lean_apply_2(v_toPure_4028_, lean_box(0), v_val_4034_);
v___x_4036_ = lean_apply_4(v_toBind_4025_, lean_box(0), lean_box(0), v___x_4035_, v___f_4030_);
return v___x_4036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object* v_inst_4037_, lean_object* v_inst_4038_, lean_object* v_inst_4039_, lean_object* v_inst_4040_, lean_object* v_defaultFn_4041_, lean_object* v_levels_x3f_4042_, lean_object* v_params_4043_, lean_object* v_fieldVal_x3f_4044_){
_start:
{
lean_object* v_toApplicative_4045_; lean_object* v_toBind_4046_; lean_object* v_toPure_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___f_4050_; lean_object* v___f_4051_; lean_object* v___x_4052_; lean_object* v___f_4053_; lean_object* v___x_4054_; 
v_toApplicative_4045_ = lean_ctor_get(v_inst_4037_, 0);
v_toBind_4046_ = lean_ctor_get(v_inst_4037_, 1);
lean_inc_n(v_toBind_4046_, 3);
v_toPure_4047_ = lean_ctor_get(v_toApplicative_4045_, 1);
lean_inc_n(v_toPure_4047_, 3);
v___x_4048_ = lean_box(0);
lean_inc_ref_n(v_inst_4037_, 3);
v___x_4049_ = l_Lean_getConstInfo___redArg(v_inst_4037_, v_inst_4038_, v_inst_4039_, v_defaultFn_4041_);
lean_inc_n(v_inst_4040_, 2);
v___f_4050_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4050_, 0, v_inst_4037_);
lean_closure_set(v___f_4050_, 1, v_inst_4040_);
lean_closure_set(v___f_4050_, 2, v_fieldVal_x3f_4044_);
lean_closure_set(v___f_4050_, 3, v_toPure_4047_);
lean_inc(v_levels_x3f_4042_);
v___f_4051_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5), 8, 7);
lean_closure_set(v___f_4051_, 0, v_toPure_4047_);
lean_closure_set(v___f_4051_, 1, v_levels_x3f_4042_);
lean_closure_set(v___f_4051_, 2, v_inst_4040_);
lean_closure_set(v___f_4051_, 3, v_toBind_4046_);
lean_closure_set(v___f_4051_, 4, v_params_4043_);
lean_closure_set(v___f_4051_, 5, v_inst_4037_);
lean_closure_set(v___f_4051_, 6, v___f_4050_);
v___x_4052_ = l_instInhabitedOfMonad___redArg(v_inst_4037_, v___x_4048_);
v___f_4053_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8), 7, 6);
lean_closure_set(v___f_4053_, 0, v___x_4052_);
lean_closure_set(v___f_4053_, 1, v_inst_4040_);
lean_closure_set(v___f_4053_, 2, v_toBind_4046_);
lean_closure_set(v___f_4053_, 3, v___f_4051_);
lean_closure_set(v___f_4053_, 4, v_levels_x3f_4042_);
lean_closure_set(v___f_4053_, 5, v_toPure_4047_);
v___x_4054_ = lean_apply_4(v_toBind_4046_, lean_box(0), lean_box(0), v___x_4049_, v___f_4053_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object* v_m_4055_, lean_object* v_inst_4056_, lean_object* v_inst_4057_, lean_object* v_inst_4058_, lean_object* v_inst_4059_, lean_object* v_inst_4060_, lean_object* v_defaultFn_4061_, lean_object* v_levels_x3f_4062_, lean_object* v_params_4063_, lean_object* v_fieldVal_x3f_4064_){
_start:
{
lean_object* v___x_4065_; 
v___x_4065_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(v_inst_4056_, v_inst_4057_, v_inst_4058_, v_inst_4059_, v_defaultFn_4061_, v_levels_x3f_4062_, v_params_4063_, v_fieldVal_x3f_4064_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object* v_m_4066_, lean_object* v_inst_4067_, lean_object* v_inst_4068_, lean_object* v_inst_4069_, lean_object* v_inst_4070_, lean_object* v_inst_4071_, lean_object* v_defaultFn_4072_, lean_object* v_levels_x3f_4073_, lean_object* v_params_4074_, lean_object* v_fieldVal_x3f_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f(v_m_4066_, v_inst_4067_, v_inst_4068_, v_inst_4069_, v_inst_4070_, v_inst_4071_, v_defaultFn_4072_, v_levels_x3f_4073_, v_params_4074_, v_fieldVal_x3f_4075_);
lean_dec_ref(v_inst_4071_);
return v_res_4076_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Structure(builtin);
}
#ifdef __cplusplus
}
#endif

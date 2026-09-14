// Lean compiler output
// Module: Lean.Meta.AppBuilder
// Imports: public import Lean.Meta.SynthInstance public import Lean.Meta.DecLevel import Lean.Meta.CtorRecognizer public import Lean.Meta.HasAssignableMVar import Lean.Structure import Init.Omega
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
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
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
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_constructorApp_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Expr_getNumHeadForalls(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Meta_mkId___closed__0 = (const lean_object*)&l_Lean_Meta_mkId___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l_Lean_Meta_mkId___closed__1 = (const lean_object*)&l_Lean_Meta_mkId___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHintCore(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkExpectedPropHint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkExpectedPropHint___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_mkEq___closed__0 = (const lean_object*)&l_Lean_Meta_mkEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_mkEq___closed__1 = (const lean_object*)&l_Lean_Meta_mkEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkHEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_mkHEq___closed__0 = (const lean_object*)&l_Lean_Meta_mkHEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkHEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkHEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_mkHEq___closed__1 = (const lean_object*)&l_Lean_Meta_mkHEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqRefl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Meta_mkEqRefl___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqRefl___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqRefl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqRefl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqRefl___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqRefl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Meta_mkEqRefl___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqRefl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkHEqRefl___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkHEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_mkHEqRefl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkHEqRefl___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqRefl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 202, 227, 45, 204, 223, 127, 41)}};
static const lean_object* l_Lean_Meta_mkHEqRefl___closed__0 = (const lean_object*)&l_Lean_Meta_mkHEqRefl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkAbsurd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* l_Lean_Meta_mkAbsurd___closed__0 = (const lean_object*)&l_Lean_Meta_mkAbsurd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkAbsurd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkAbsurd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* l_Lean_Meta_mkAbsurd___closed__1 = (const lean_object*)&l_Lean_Meta_mkAbsurd___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAbsurd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_Meta_mkFalseElim___closed__0 = (const lean_object*)&l_Lean_Meta_mkFalseElim___closed__0_value;
static const lean_string_object l_Lean_Meta_mkFalseElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_Meta_mkFalseElim___closed__1 = (const lean_object*)&l_Lean_Meta_mkFalseElim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkFalseElim___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkFalseElim___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l_Lean_Meta_mkFalseElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFalseElim___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkFalseElim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l_Lean_Meta_mkFalseElim___closed__2 = (const lean_object*)&l_Lean_Meta_mkFalseElim___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nhas type"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "AppBuilder for `"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`, "};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqSymm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l_Lean_Meta_mkEqSymm___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqSymm___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqSymm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqSymm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqSymm___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqSymm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* l_Lean_Meta_mkEqSymm___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqSymm___closed__1_value;
static const lean_string_object l_Lean_Meta_mkEqSymm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "equality proof expected"};
static const lean_object* l_Lean_Meta_mkEqSymm___closed__2 = (const lean_object*)&l_Lean_Meta_mkEqSymm___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkEqSymm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqSymm___closed__2_value)}};
static const lean_object* l_Lean_Meta_mkEqSymm___closed__3 = (const lean_object*)&l_Lean_Meta_mkEqSymm___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkEqSymm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqSymm___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqTrans___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l_Lean_Meta_mkEqTrans___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqTrans___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqTrans___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqTrans___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqTrans___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqTrans___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l_Lean_Meta_mkEqTrans___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqTrans___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkHEqSymm___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkHEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_mkHEqSymm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkHEqSymm___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqSymm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 163, 143, 122, 204, 41, 227, 16)}};
static const lean_object* l_Lean_Meta_mkHEqSymm___closed__0 = (const lean_object*)&l_Lean_Meta_mkHEqSymm___closed__0_value;
static const lean_string_object l_Lean_Meta_mkHEqSymm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "heterogeneous equality proof expected"};
static const lean_object* l_Lean_Meta_mkHEqSymm___closed__1 = (const lean_object*)&l_Lean_Meta_mkHEqSymm___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkHEqSymm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkHEqSymm___closed__1_value)}};
static const lean_object* l_Lean_Meta_mkHEqSymm___closed__2 = (const lean_object*)&l_Lean_Meta_mkHEqSymm___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkHEqSymm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHEqSymm___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkHEqTrans___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkHEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_mkHEqTrans___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkHEqTrans___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqTrans___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 23, 102, 245, 235, 101, 160, 50)}};
static const lean_object* l_Lean_Meta_mkHEqTrans___closed__0 = (const lean_object*)&l_Lean_Meta_mkHEqTrans___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqOfHEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_of_heq"};
static const lean_object* l_Lean_Meta_mkEqOfHEq___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqOfHEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqOfHEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEqOfHEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 61, 104, 192, 47, 1, 246, 178)}};
static const lean_object* l_Lean_Meta_mkEqOfHEq___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqOfHEq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkEqOfHEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqOfHEq___closed__2;
static const lean_string_object l_Lean_Meta_mkEqOfHEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "heterogeneous equality types are not definitionally equal"};
static const lean_object* l_Lean_Meta_mkEqOfHEq___closed__3 = (const lean_object*)&l_Lean_Meta_mkEqOfHEq___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkEqOfHEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqOfHEq___closed__4;
static const lean_string_object l_Lean_Meta_mkEqOfHEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\nis not definitionally equal to"};
static const lean_object* l_Lean_Meta_mkEqOfHEq___closed__5 = (const lean_object*)&l_Lean_Meta_mkEqOfHEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_mkEqOfHEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqOfHEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqOfHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkHEqOfEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "heq_of_eq"};
static const lean_object* l_Lean_Meta_mkHEqOfEq___closed__0 = (const lean_object*)&l_Lean_Meta_mkHEqOfEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkHEqOfEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkHEqOfEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 243, 206, 193, 60, 85, 181, 135)}};
static const lean_object* l_Lean_Meta_mkHEqOfEq___closed__1 = (const lean_object*)&l_Lean_Meta_mkHEqOfEq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkHEqOfEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHEqOfEq___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isRefl_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isRefl_x3f___boxed(lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_congrArg_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_congrArg_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_congrArg_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Meta_congrArg_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_congrArg_x3f___closed__2;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Meta.AppBuilder"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__3_value;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.congrArg\?"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__4_value;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_congrArg_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_congrArg_x3f___closed__6;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__7_value;
static const lean_ctor_object l_Lean_Meta_congrArg_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_congrArg_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__8_value;
static lean_once_cell_t l_Lean_Meta_congrArg_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_congrArg_x3f___closed__9;
static lean_once_cell_t l_Lean_Meta_congrArg_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_congrArg_x3f___closed__10;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__11 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__11_value;
static const lean_ctor_object l_Lean_Meta_congrArg_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_congrArg_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__12 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__12_value;
static const lean_string_object l_Lean_Meta_congrArg_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__13 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__13_value;
static const lean_ctor_object l_Lean_Meta_congrArg_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_congrArg_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_congrArg_x3f___closed__14 = (const lean_object*)&l_Lean_Meta_congrArg_x3f___closed__14_value;
static lean_once_cell_t l_Lean_Meta_congrArg_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_congrArg_x3f___closed__15;
LEAN_EXPORT lean_object* l_Lean_Meta_congrArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_congrArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkCongrArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "non-dependent function expected"};
static const lean_object* l_Lean_Meta_mkCongrArg___closed__0 = (const lean_object*)&l_Lean_Meta_mkCongrArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkCongrArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkCongrArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_mkCongrArg___closed__1 = (const lean_object*)&l_Lean_Meta_mkCongrArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkCongrArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkCongrFun___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrFun___closed__0;
static const lean_string_object l_Lean_Meta_mkCongrFun___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "equality proof between functions expected"};
static const lean_object* l_Lean_Meta_mkCongrFun___closed__1 = (const lean_object*)&l_Lean_Meta_mkCongrFun___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkCongrFun___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkCongrFun___closed__1_value)}};
static const lean_object* l_Lean_Meta_mkCongrFun___closed__2 = (const lean_object*)&l_Lean_Meta_mkCongrFun___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkCongrFun___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrFun___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l_Lean_Meta_mkCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_object* l_Lean_Meta_mkCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "result contains metavariables"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__1 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mkAppM"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 168, 61, 153, 3, 196, 143, 146)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__1 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__1_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "too many explicit arguments provided to"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\narguments"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__4 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__6 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__7 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "f: "};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", xs: "};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "appBuilder"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__21 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(68, 214, 164, 127, 225, 162, 166, 248)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(54, 138, 27, 160, 212, 155, 243, 43)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__23 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25;
static const lean_closure_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__26 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(68, 214, 164, 127, 225, 162, 166, 248)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "result"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__31 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(68, 214, 164, 127, 225, 162, 166, 248)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value_aux_1),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__31_value),LEAN_SCALAR_PTR_LITERAL(183, 173, 214, 125, 197, 91, 46, 196)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mkAppOptM"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(172, 166, 217, 169, 142, 163, 216, 85)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "too many arguments provided to"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__3 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "arguments"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__6 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__7 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqNDRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_Meta_mkEqNDRec___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqNDRec___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqNDRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqNDRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqNDRec___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqNDRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 164, 251, 202, 217, 58, 77, 179)}};
static const lean_object* l_Lean_Meta_mkEqNDRec___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqNDRec___closed__1_value;
static const lean_string_object l_Lean_Meta_mkEqNDRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid motive"};
static const lean_object* l_Lean_Meta_mkEqNDRec___closed__2 = (const lean_object*)&l_Lean_Meta_mkEqNDRec___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkEqNDRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqNDRec___closed__2_value)}};
static const lean_object* l_Lean_Meta_mkEqNDRec___closed__3 = (const lean_object*)&l_Lean_Meta_mkEqNDRec___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkEqNDRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqNDRec___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqNDRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l_Lean_Meta_mkEqRec___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqRec___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqRec___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 17, 7, 2, 233, 148, 36, 75)}};
static const lean_object* l_Lean_Meta_mkEqRec___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqRec___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqMP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_mkEqMP___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqMP___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqMP___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqMP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqMP___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqMP___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_mkEqMP___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqMP___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqMPR___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* l_Lean_Meta_mkEqMPR___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqMPR___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqMPR___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_mkEqMPR___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkEqMPR___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkEqMPR___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 109, 21, 40, 70, 113, 251, 6)}};
static const lean_object* l_Lean_Meta_mkEqMPR___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqMPR___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMPR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkNoConfusion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkNoConfusion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "mkNoConfusion: unexpected equality `"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` as next argument to"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__0 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkNoConfusion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNoConfusion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 156, 154, 136, 239, 72, 108, 239)}};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__1 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__1_value;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equality expected"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__2 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkNoConfusion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkNoConfusion___closed__2_value)}};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__3 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__4;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "mkNoConfusion: No manifest constructors in "};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__5 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__5_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__6;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__7 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__7_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__8;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "inductive type expected"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__9 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__9_value;
static const lean_ctor_object l_Lean_Meta_mkNoConfusion___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkNoConfusion___closed__9_value)}};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__10 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__10_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__11;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.mkNoConfusion"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__12 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__12_value;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 81, .m_data = "assertion violation: arity ≥ xs.size + fields1.size + fields2.size + 3\n          "};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__13 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__13_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__14;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "mkNoConfusion: Missing "};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__15 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__15_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__16;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "P"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__17 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__17_value;
static const lean_ctor_object l_Lean_Meta_mkNoConfusion___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNoConfusion___closed__17_value),LEAN_SCALAR_PTR_LITERAL(160, 230, 119, 31, 245, 11, 149, 236)}};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__18 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__18_value;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctorIdx"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__19 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__19_value;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "noConfusion_of_Nat"};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__20 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__20_value;
static const lean_ctor_object l_Lean_Meta_mkNoConfusion___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNoConfusion___closed__20_value),LEAN_SCALAR_PTR_LITERAL(151, 214, 13, 141, 28, 69, 207, 64)}};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__21 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__21_value;
static const lean_string_object l_Lean_Meta_mkNoConfusion___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l_Lean_Meta_mkNoConfusion___closed__22 = (const lean_object*)&l_Lean_Meta_mkNoConfusion___closed__22_value;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__23;
static lean_once_cell_t l_Lean_Meta_mkNoConfusion___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkNoConfusion___closed__24;
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Meta_mkPure___closed__0 = (const lean_object*)&l_Lean_Meta_mkPure___closed__0_value;
static const lean_string_object l_Lean_Meta_mkPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Meta_mkPure___closed__1 = (const lean_object*)&l_Lean_Meta_mkPure___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkPure___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l_Lean_Meta_mkPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkPure___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l_Lean_Meta_mkPure___closed__2 = (const lean_object*)&l_Lean_Meta_mkPure___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_mkProjection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mkProjection"};
static const lean_object* l_Lean_Meta_mkProjection___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkProjection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkProjection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 195, 245, 38, 210, 93, 144, 108)}};
static const lean_object* l_Lean_Meta_mkProjection___closed__1 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__1_value;
static const lean_string_object l_Lean_Meta_mkProjection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid field name '"};
static const lean_object* l_Lean_Meta_mkProjection___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkProjection___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkProjection___closed__2_value)}};
static const lean_object* l_Lean_Meta_mkProjection___closed__3 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__3_value;
static lean_once_cell_t l_Lean_Meta_mkProjection___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjection___closed__4;
static const lean_string_object l_Lean_Meta_mkProjection___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "' for"};
static const lean_object* l_Lean_Meta_mkProjection___closed__5 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__5_value;
static const lean_ctor_object l_Lean_Meta_mkProjection___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkProjection___closed__5_value)}};
static const lean_object* l_Lean_Meta_mkProjection___closed__6 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__6_value;
static lean_once_cell_t l_Lean_Meta_mkProjection___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjection___closed__7;
static const lean_string_object l_Lean_Meta_mkProjection___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structure expected"};
static const lean_object* l_Lean_Meta_mkProjection___closed__8 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__8_value;
static const lean_ctor_object l_Lean_Meta_mkProjection___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_mkProjection___closed__8_value)}};
static const lean_object* l_Lean_Meta_mkProjection___closed__9 = (const lean_object*)&l_Lean_Meta_mkProjection___closed__9_value;
static lean_once_cell_t l_Lean_Meta_mkProjection___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjection___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkListLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_mkListLit___closed__0 = (const lean_object*)&l_Lean_Meta_mkListLit___closed__0_value;
static const lean_string_object l_Lean_Meta_mkListLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Meta_mkListLit___closed__1 = (const lean_object*)&l_Lean_Meta_mkListLit___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkListLit___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkListLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkListLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkListLit___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkListLit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Meta_mkListLit___closed__2 = (const lean_object*)&l_Lean_Meta_mkListLit___closed__2_value;
static const lean_string_object l_Lean_Meta_mkListLit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Meta_mkListLit___closed__3 = (const lean_object*)&l_Lean_Meta_mkListLit___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkListLit___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkListLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkListLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkListLit___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkListLit___closed__3_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Meta_mkListLit___closed__4 = (const lean_object*)&l_Lean_Meta_mkListLit___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkListLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkArrayLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lean_Meta_mkArrayLit___closed__0 = (const lean_object*)&l_Lean_Meta_mkArrayLit___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkArrayLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkListLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkArrayLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkArrayLit___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkArrayLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l_Lean_Meta_mkArrayLit___closed__1 = (const lean_object*)&l_Lean_Meta_mkArrayLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkArrayLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkNone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Meta_mkNone___closed__0 = (const lean_object*)&l_Lean_Meta_mkNone___closed__0_value;
static const lean_string_object l_Lean_Meta_mkNone___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Meta_mkNone___closed__1 = (const lean_object*)&l_Lean_Meta_mkNone___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkNone___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNone___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Meta_mkNone___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkNone___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkNone___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Meta_mkNone___closed__2 = (const lean_object*)&l_Lean_Meta_mkNone___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSome___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Meta_mkSome___closed__0 = (const lean_object*)&l_Lean_Meta_mkSome___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkSome___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNone___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Meta_mkSome___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkSome___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkSome___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Meta_mkSome___closed__1 = (const lean_object*)&l_Lean_Meta_mkSome___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSome(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSome___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkDecide___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Meta_mkDecide___closed__0 = (const lean_object*)&l_Lean_Meta_mkDecide___closed__0_value;
static const lean_string_object l_Lean_Meta_mkDecide___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_mkDecide___closed__1 = (const lean_object*)&l_Lean_Meta_mkDecide___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkDecide___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkDecide___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Meta_mkDecide___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkDecide___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkDecide___closed__1_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l_Lean_Meta_mkDecide___closed__2 = (const lean_object*)&l_Lean_Meta_mkDecide___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecide___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkDecideProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_mkDecideProof___closed__0 = (const lean_object*)&l_Lean_Meta_mkDecideProof___closed__0_value;
static const lean_string_object l_Lean_Meta_mkDecideProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_mkDecideProof___closed__1 = (const lean_object*)&l_Lean_Meta_mkDecideProof___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkDecideProof___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkDecideProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_mkDecideProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkDecideProof___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkDecideProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_mkDecideProof___closed__2 = (const lean_object*)&l_Lean_Meta_mkDecideProof___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkDecideProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkDecideProof___closed__3;
static const lean_string_object l_Lean_Meta_mkDecideProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l_Lean_Meta_mkDecideProof___closed__4 = (const lean_object*)&l_Lean_Meta_mkDecideProof___closed__4_value;
static const lean_ctor_object l_Lean_Meta_mkDecideProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkDecideProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l_Lean_Meta_mkDecideProof___closed__5 = (const lean_object*)&l_Lean_Meta_mkDecideProof___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecideProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Meta_mkLt___closed__0 = (const lean_object*)&l_Lean_Meta_mkLt___closed__0_value;
static const lean_string_object l_Lean_Meta_mkLt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Meta_mkLt___closed__1 = (const lean_object*)&l_Lean_Meta_mkLt___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkLt___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Meta_mkLt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkLt___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkLt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Meta_mkLt___closed__2 = (const lean_object*)&l_Lean_Meta_mkLt___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Meta_mkLe___closed__0 = (const lean_object*)&l_Lean_Meta_mkLe___closed__0_value;
static const lean_string_object l_Lean_Meta_mkLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Meta_mkLe___closed__1 = (const lean_object*)&l_Lean_Meta_mkLe___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkLe___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Meta_mkLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkLe___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Meta_mkLe___closed__2 = (const lean_object*)&l_Lean_Meta_mkLe___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l_Lean_Meta_mkDefault___closed__0 = (const lean_object*)&l_Lean_Meta_mkDefault___closed__0_value;
static const lean_string_object l_Lean_Meta_mkDefault___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_Meta_mkDefault___closed__1 = (const lean_object*)&l_Lean_Meta_mkDefault___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkDefault___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_ctor_object l_Lean_Meta_mkDefault___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkDefault___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkDefault___closed__1_value),LEAN_SCALAR_PTR_LITERAL(174, 152, 115, 107, 166, 56, 116, 8)}};
static const lean_object* l_Lean_Meta_mkDefault___closed__2 = (const lean_object*)&l_Lean_Meta_mkDefault___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkOfNonempty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l_Lean_Meta_mkOfNonempty___closed__0 = (const lean_object*)&l_Lean_Meta_mkOfNonempty___closed__0_value;
static const lean_string_object l_Lean_Meta_mkOfNonempty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ofNonempty"};
static const lean_object* l_Lean_Meta_mkOfNonempty___closed__1 = (const lean_object*)&l_Lean_Meta_mkOfNonempty___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkOfNonempty___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkOfNonempty___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l_Lean_Meta_mkOfNonempty___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkOfNonempty___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkOfNonempty___closed__1_value),LEAN_SCALAR_PTR_LITERAL(197, 41, 144, 91, 215, 43, 73, 12)}};
static const lean_object* l_Lean_Meta_mkOfNonempty___closed__2 = (const lean_object*)&l_Lean_Meta_mkOfNonempty___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfNonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfNonempty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkFunExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "funext"};
static const lean_object* l_Lean_Meta_mkFunExt___closed__0 = (const lean_object*)&l_Lean_Meta_mkFunExt___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkFunExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkFunExt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 251, 226, 140, 5, 134, 146, 130)}};
static const lean_object* l_Lean_Meta_mkFunExt___closed__1 = (const lean_object*)&l_Lean_Meta_mkFunExt___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFunExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFunExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkPropExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_Meta_mkPropExt___closed__0 = (const lean_object*)&l_Lean_Meta_mkPropExt___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkPropExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkPropExt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_Meta_mkPropExt___closed__1 = (const lean_object*)&l_Lean_Meta_mkPropExt___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLetCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_congr"};
static const lean_object* l_Lean_Meta_mkLetCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkLetCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkLetCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLetCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 187, 63, 239, 0, 76, 154, 156)}};
static const lean_object* l_Lean_Meta_mkLetCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkLetCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLetValCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "let_val_congr"};
static const lean_object* l_Lean_Meta_mkLetValCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkLetValCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkLetValCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLetValCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 241, 199, 153, 91, 27, 42, 122)}};
static const lean_object* l_Lean_Meta_mkLetValCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkLetValCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetValCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetValCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLetBodyCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "let_body_congr"};
static const lean_object* l_Lean_Meta_mkLetBodyCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkLetBodyCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkLetBodyCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLetBodyCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 115, 150, 132, 106, 100, 45, 219)}};
static const lean_object* l_Lean_Meta_mkLetBodyCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkLetBodyCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetBodyCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetBodyCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkOfEqFalseCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "of_eq_false"};
static const lean_object* l_Lean_Meta_mkOfEqFalseCore___closed__0 = (const lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkOfEqFalseCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 110, 142, 77, 120, 210, 227, 9)}};
static const lean_object* l_Lean_Meta_mkOfEqFalseCore___closed__1 = (const lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkOfEqFalseCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkOfEqFalseCore___closed__2;
static const lean_string_object l_Lean_Meta_mkOfEqFalseCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eq_false"};
static const lean_object* l_Lean_Meta_mkOfEqFalseCore___closed__3 = (const lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkOfEqFalseCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(242, 127, 91, 199, 130, 171, 29, 27)}};
static const lean_object* l_Lean_Meta_mkOfEqFalseCore___closed__4 = (const lean_object*)&l_Lean_Meta_mkOfEqFalseCore___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkOfEqTrueCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "of_eq_true"};
static const lean_object* l_Lean_Meta_mkOfEqTrueCore___closed__0 = (const lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkOfEqTrueCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 216, 190, 52, 49, 30, 207, 178)}};
static const lean_object* l_Lean_Meta_mkOfEqTrueCore___closed__1 = (const lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkOfEqTrueCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkOfEqTrueCore___closed__2;
static const lean_string_object l_Lean_Meta_mkOfEqTrueCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_true"};
static const lean_object* l_Lean_Meta_mkOfEqTrueCore___closed__3 = (const lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkOfEqTrueCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 213, 255, 45, 151, 209, 83, 175)}};
static const lean_object* l_Lean_Meta_mkOfEqTrueCore___closed__4 = (const lean_object*)&l_Lean_Meta_mkOfEqTrueCore___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkEqTrueCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkEqTrueCore___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrueCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkEqFalse_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_false'"};
static const lean_object* l_Lean_Meta_mkEqFalse_x27___closed__0 = (const lean_object*)&l_Lean_Meta_mkEqFalse_x27___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkEqFalse_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkEqFalse_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 24, 186, 138, 47, 9, 234, 218)}};
static const lean_object* l_Lean_Meta_mkEqFalse_x27___closed__1 = (const lean_object*)&l_Lean_Meta_mkEqFalse_x27___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkImpCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "implies_congr"};
static const lean_object* l_Lean_Meta_mkImpCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkImpCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkImpCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkImpCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 71, 54, 187, 9, 73, 178, 153)}};
static const lean_object* l_Lean_Meta_mkImpCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkImpCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkImpCongrCtx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "implies_congr_ctx"};
static const lean_object* l_Lean_Meta_mkImpCongrCtx___closed__0 = (const lean_object*)&l_Lean_Meta_mkImpCongrCtx___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkImpCongrCtx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkImpCongrCtx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 145, 179, 180, 34, 42, 7, 230)}};
static const lean_object* l_Lean_Meta_mkImpCongrCtx___closed__1 = (const lean_object*)&l_Lean_Meta_mkImpCongrCtx___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongrCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongrCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkImpDepCongrCtx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "implies_dep_congr_ctx"};
static const lean_object* l_Lean_Meta_mkImpDepCongrCtx___closed__0 = (const lean_object*)&l_Lean_Meta_mkImpDepCongrCtx___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkImpDepCongrCtx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkImpDepCongrCtx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 151, 212, 25, 231, 139, 56, 165)}};
static const lean_object* l_Lean_Meta_mkImpDepCongrCtx___closed__1 = (const lean_object*)&l_Lean_Meta_mkImpDepCongrCtx___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpDepCongrCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpDepCongrCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkForallCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_congr"};
static const lean_object* l_Lean_Meta_mkForallCongr___closed__0 = (const lean_object*)&l_Lean_Meta_mkForallCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkForallCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkForallCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 145, 235, 56, 9, 236, 160, 253)}};
static const lean_object* l_Lean_Meta_mkForallCongr___closed__1 = (const lean_object*)&l_Lean_Meta_mkForallCongr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_isMonad_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Monad"};
static const lean_object* l_Lean_Meta_isMonad_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_isMonad_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_isMonad_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isMonad_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 218, 3, 131, 37, 173, 20, 218)}};
static const lean_object* l_Lean_Meta_isMonad_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_isMonad_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonad_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_mkNumeral___closed__0 = (const lean_object*)&l_Lean_Meta_mkNumeral___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_Meta_mkNumeral___closed__1 = (const lean_object*)&l_Lean_Meta_mkNumeral___closed__1_value;
static const lean_string_object l_Lean_Meta_mkNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_mkNumeral___closed__2 = (const lean_object*)&l_Lean_Meta_mkNumeral___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkNumeral___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_mkNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkNumeral___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkNumeral___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_mkNumeral___closed__3 = (const lean_object*)&l_Lean_Meta_mkNumeral___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkNumeral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_mkAdd___closed__0 = (const lean_object*)&l_Lean_Meta_mkAdd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkAdd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l_Lean_Meta_mkAdd___closed__1 = (const lean_object*)&l_Lean_Meta_mkAdd___closed__1_value;
static const lean_string_object l_Lean_Meta_mkAdd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_mkAdd___closed__2 = (const lean_object*)&l_Lean_Meta_mkAdd___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkAdd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkAdd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_mkAdd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkAdd___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkAdd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_mkAdd___closed__3 = (const lean_object*)&l_Lean_Meta_mkAdd___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Meta_mkSub___closed__0 = (const lean_object*)&l_Lean_Meta_mkSub___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkSub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_object* l_Lean_Meta_mkSub___closed__1 = (const lean_object*)&l_Lean_Meta_mkSub___closed__1_value;
static const lean_string_object l_Lean_Meta_mkSub___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Meta_mkSub___closed__2 = (const lean_object*)&l_Lean_Meta_mkSub___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkSub___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l_Lean_Meta_mkSub___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkSub___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkSub___closed__2_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l_Lean_Meta_mkSub___closed__3 = (const lean_object*)&l_Lean_Meta_mkSub___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_mkMul___closed__0 = (const lean_object*)&l_Lean_Meta_mkMul___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_mkMul___closed__1 = (const lean_object*)&l_Lean_Meta_mkMul___closed__1_value;
static const lean_string_object l_Lean_Meta_mkMul___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_mkMul___closed__2 = (const lean_object*)&l_Lean_Meta_mkMul___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkMul___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_mkMul___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkMul___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkMul___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_mkMul___closed__3 = (const lean_object*)&l_Lean_Meta_mkMul___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_object* l_Lean_Meta_mkLE___closed__0 = (const lean_object*)&l_Lean_Meta_mkLE___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkLT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_object* l_Lean_Meta_mkLT___closed__0 = (const lean_object*)&l_Lean_Meta_mkLT___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkIffOfEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l_Lean_Meta_mkIffOfEq___closed__0 = (const lean_object*)&l_Lean_Meta_mkIffOfEq___closed__0_value;
static const lean_string_object l_Lean_Meta_mkIffOfEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "of_eq"};
static const lean_object* l_Lean_Meta_mkIffOfEq___closed__1 = (const lean_object*)&l_Lean_Meta_mkIffOfEq___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkIffOfEq___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkIffOfEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l_Lean_Meta_mkIffOfEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkIffOfEq___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkIffOfEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 38, 134, 223, 103, 86, 218, 33)}};
static const lean_object* l_Lean_Meta_mkIffOfEq___closed__2 = (const lean_object*)&l_Lean_Meta_mkIffOfEq___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkIffOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkIffOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__7_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9;
static const lean_ctor_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__7_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__10 = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAndIntroN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAndIntroN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "AppBuilder"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkId(lean_object* v_e_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc_ref(v_e_4_);
v___x_10_ = lean_infer_type(v_e_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc_n(v_a_11_, 2);
lean_dec_ref_known(v___x_10_, 1);
v___x_12_ = l_Lean_Meta_getLevel(v_a_11_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_25_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_25_ == 0)
{
v___x_15_ = v___x_12_;
v_isShared_16_ = v_isSharedCheck_25_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_12_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_25_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_17_ = ((lean_object*)(l_Lean_Meta_mkId___closed__1));
v___x_18_ = lean_box(0);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v_a_13_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = l_Lean_mkConst(v___x_17_, v___x_19_);
v___x_21_ = l_Lean_mkAppB(v___x_20_, v_a_11_, v_e_4_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_21_);
v___x_23_ = v___x_15_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
else
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_33_; 
lean_dec(v_a_11_);
lean_dec_ref(v_e_4_);
v_a_26_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_33_ == 0)
{
v___x_28_ = v___x_12_;
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v___x_12_);
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
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec_ref(v_e_4_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkId___boxed(lean_object* v_e_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Meta_mkId(v_e_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHintCore(lean_object* v_e_41_, lean_object* v_expectedType_42_, lean_object* v_expectedTypeUniv_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_44_ = ((lean_object*)(l_Lean_Meta_mkId___closed__1));
v___x_45_ = lean_box(0);
v___x_46_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_46_, 0, v_expectedTypeUniv_43_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = l_Lean_mkConst(v___x_44_, v___x_46_);
v___x_48_ = l_Lean_mkAppB(v___x_47_, v_expectedType_42_, v_e_41_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_mkExpectedPropHint___closed__0(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_box(0);
v___x_50_ = l_unsafeCast___redArg(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object* v_proof_51_, lean_object* v_expectedProp_52_){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&l_Lean_Meta_mkExpectedPropHint___closed__0, &l_Lean_Meta_mkExpectedPropHint___closed__0_once, _init_l_Lean_Meta_mkExpectedPropHint___closed__0);
v___x_54_ = l_Lean_Meta_mkExpectedTypeHintCore(v_proof_51_, v_expectedProp_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object* v_e_55_, lean_object* v_expectedType_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; 
lean_inc_ref(v_expectedType_56_);
v___x_62_ = l_Lean_Meta_getLevel(v_expectedType_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_71_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_71_ == 0)
{
v___x_65_ = v___x_62_;
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_62_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_67_ = l_Lean_Meta_mkExpectedTypeHintCore(v_e_55_, v_expectedType_56_, v_a_63_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_67_);
v___x_69_ = v___x_65_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
lean_dec_ref(v_expectedType_56_);
lean_dec_ref(v_e_55_);
v_a_72_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v___x_62_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_62_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkExpectedTypeHint___boxed(lean_object* v_e_80_, lean_object* v_expectedType_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Meta_mkExpectedTypeHint(v_e_80_, v_expectedType_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_);
lean_dec(v_a_85_);
lean_dec_ref(v_a_84_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEq(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; 
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
lean_inc(v_a_94_);
lean_inc_ref(v_a_93_);
lean_inc_ref(v_a_91_);
v___x_98_ = lean_infer_type(v_a_91_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc_n(v_a_99_, 2);
lean_dec_ref_known(v___x_98_, 1);
v___x_100_ = l_Lean_Meta_getLevel(v_a_99_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_113_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_113_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_113_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_113_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_105_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_106_ = lean_box(0);
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v_a_101_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Lean_mkConst(v___x_105_, v___x_107_);
v___x_109_ = l_Lean_mkApp3(v___x_108_, v_a_99_, v_a_91_, v_b_92_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_109_);
v___x_111_ = v___x_103_;
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
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
lean_dec(v_a_99_);
lean_dec_ref(v_b_92_);
lean_dec_ref(v_a_91_);
v_a_114_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_100_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_100_);
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
else
{
lean_dec_ref(v_b_92_);
lean_dec_ref(v_a_91_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEq___boxed(lean_object* v_a_122_, lean_object* v_b_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_Meta_mkEq(v_a_122_, v_b_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEq(lean_object* v_a_133_, lean_object* v_b_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; 
lean_inc(v_a_138_);
lean_inc_ref(v_a_137_);
lean_inc(v_a_136_);
lean_inc_ref(v_a_135_);
lean_inc_ref(v_a_133_);
v___x_140_ = lean_infer_type(v_a_133_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_142_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_a_141_);
lean_dec_ref_known(v___x_140_, 1);
lean_inc(v_a_138_);
lean_inc_ref(v_a_137_);
lean_inc(v_a_136_);
lean_inc_ref(v_a_135_);
lean_inc_ref(v_b_134_);
v___x_142_ = lean_infer_type(v_b_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_144_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref_known(v___x_142_, 1);
lean_inc(v_a_141_);
v___x_144_ = l_Lean_Meta_getLevel(v_a_141_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_157_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_157_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_157_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_157_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_149_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_150_ = lean_box(0);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v_a_145_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = l_Lean_mkConst(v___x_149_, v___x_151_);
v___x_153_ = l_Lean_mkApp4(v___x_152_, v_a_141_, v_a_133_, v_a_143_, v_b_134_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_153_);
v___x_155_ = v___x_147_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec(v_a_143_);
lean_dec(v_a_141_);
lean_dec_ref(v_b_134_);
lean_dec_ref(v_a_133_);
v_a_158_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_144_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_144_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
else
{
lean_dec(v_a_141_);
lean_dec_ref(v_b_134_);
lean_dec_ref(v_a_133_);
return v___x_142_;
}
}
else
{
lean_dec_ref(v_b_134_);
lean_dec_ref(v_a_133_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEq___boxed(lean_object* v_a_166_, lean_object* v_b_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_Meta_mkHEq(v_a_166_, v_b_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
lean_dec(v_a_171_);
lean_dec_ref(v_a_170_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqHEq(lean_object* v_a_174_, lean_object* v_b_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v___x_181_; 
lean_inc(v_a_179_);
lean_inc_ref(v_a_178_);
lean_inc(v_a_177_);
lean_inc_ref(v_a_176_);
lean_inc_ref(v_a_174_);
v___x_181_ = lean_infer_type(v_a_174_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_183_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
lean_inc(v_a_179_);
lean_inc_ref(v_a_178_);
lean_inc(v_a_177_);
lean_inc_ref(v_a_176_);
lean_inc_ref(v_b_175_);
v___x_183_ = lean_infer_type(v_b_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_185_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
lean_inc(v_a_182_);
v___x_185_ = l_Lean_Meta_getLevel(v_a_182_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v___x_187_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
lean_inc(v_a_184_);
lean_inc(v_a_182_);
v___x_187_ = l_Lean_Meta_isExprDefEq(v_a_182_, v_a_184_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_209_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_209_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_209_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_209_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
uint8_t v___x_192_; 
v___x_192_ = lean_unbox(v_a_188_);
lean_dec(v_a_188_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_193_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_194_ = lean_box(0);
v___x_195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_195_, 0, v_a_186_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = l_Lean_mkConst(v___x_193_, v___x_195_);
v___x_197_ = l_Lean_mkApp4(v___x_196_, v_a_182_, v_a_174_, v_a_184_, v_b_175_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_197_);
v___x_199_ = v___x_190_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_197_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_207_; 
lean_dec(v_a_184_);
v___x_201_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_202_ = lean_box(0);
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_186_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = l_Lean_mkConst(v___x_201_, v___x_203_);
v___x_205_ = l_Lean_mkApp3(v___x_204_, v_a_182_, v_a_174_, v_b_175_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_205_);
v___x_207_ = v___x_190_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec(v_a_186_);
lean_dec(v_a_184_);
lean_dec(v_a_182_);
lean_dec_ref(v_b_175_);
lean_dec_ref(v_a_174_);
v_a_210_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_187_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_187_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v_a_184_);
lean_dec(v_a_182_);
lean_dec_ref(v_b_175_);
lean_dec_ref(v_a_174_);
v_a_218_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_185_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_185_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
else
{
lean_dec(v_a_182_);
lean_dec_ref(v_b_175_);
lean_dec_ref(v_a_174_);
return v___x_183_;
}
}
else
{
lean_dec_ref(v_b_175_);
lean_dec_ref(v_a_174_);
return v___x_181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object* v_a_226_, lean_object* v_b_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_Meta_mkEqHEq(v_a_226_, v_b_227_, v_a_228_, v_a_229_, v_a_230_, v_a_231_);
lean_dec(v_a_231_);
lean_dec_ref(v_a_230_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRefl(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v___x_244_; 
lean_inc(v_a_242_);
lean_inc_ref(v_a_241_);
lean_inc(v_a_240_);
lean_inc_ref(v_a_239_);
lean_inc_ref(v_a_238_);
v___x_244_ = lean_infer_type(v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc_n(v_a_245_, 2);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = l_Lean_Meta_getLevel(v_a_245_, v_a_239_, v_a_240_, v_a_241_, v_a_242_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_259_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_259_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_251_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_253_, 0, v_a_247_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = l_Lean_mkConst(v___x_251_, v___x_253_);
v___x_255_ = l_Lean_mkAppB(v___x_254_, v_a_245_, v_a_238_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_255_);
v___x_257_ = v___x_249_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
else
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
lean_dec(v_a_245_);
lean_dec_ref(v_a_238_);
v_a_260_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_267_ == 0)
{
v___x_262_ = v___x_246_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v___x_246_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
else
{
lean_dec_ref(v_a_238_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRefl___boxed(lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Meta_mkEqRefl(v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqRefl(lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; 
lean_inc(v_a_282_);
lean_inc_ref(v_a_281_);
lean_inc(v_a_280_);
lean_inc_ref(v_a_279_);
lean_inc_ref(v_a_278_);
v___x_284_ = lean_infer_type(v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc_n(v_a_285_, 2);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = l_Lean_Meta_getLevel(v_a_285_, v_a_279_, v_a_280_, v_a_281_, v_a_282_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_299_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_299_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_291_ = ((lean_object*)(l_Lean_Meta_mkHEqRefl___closed__0));
v___x_292_ = lean_box(0);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v_a_287_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = l_Lean_mkConst(v___x_291_, v___x_293_);
v___x_295_ = l_Lean_mkAppB(v___x_294_, v_a_285_, v_a_278_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_295_);
v___x_297_ = v___x_289_;
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
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_285_);
lean_dec_ref(v_a_278_);
v_a_300_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_286_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_286_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_dec_ref(v_a_278_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqRefl___boxed(lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Meta_mkHEqRefl(v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAbsurd(lean_object* v_e_318_, lean_object* v_hp_319_, lean_object* v_hnp_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v___x_326_; 
lean_inc(v_a_324_);
lean_inc_ref(v_a_323_);
lean_inc(v_a_322_);
lean_inc_ref(v_a_321_);
lean_inc_ref(v_hp_319_);
v___x_326_ = lean_infer_type(v_hp_319_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
lean_inc_ref(v_e_318_);
v___x_328_ = l_Lean_Meta_getLevel(v_e_318_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_341_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_341_ == 0)
{
v___x_331_ = v___x_328_;
v_isShared_332_ = v_isSharedCheck_341_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_328_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_341_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_333_ = ((lean_object*)(l_Lean_Meta_mkAbsurd___closed__1));
v___x_334_ = lean_box(0);
v___x_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_335_, 0, v_a_329_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = l_Lean_mkConst(v___x_333_, v___x_335_);
v___x_337_ = l_Lean_mkApp4(v___x_336_, v_a_327_, v_e_318_, v_hp_319_, v_hnp_320_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_337_);
v___x_339_ = v___x_331_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v_a_327_);
lean_dec_ref(v_hnp_320_);
lean_dec_ref(v_hp_319_);
lean_dec_ref(v_e_318_);
v_a_342_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_328_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_328_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
else
{
lean_dec_ref(v_hnp_320_);
lean_dec_ref(v_hp_319_);
lean_dec_ref(v_e_318_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAbsurd___boxed(lean_object* v_e_350_, lean_object* v_hp_351_, lean_object* v_hnp_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Meta_mkAbsurd(v_e_350_, v_hp_351_, v_hnp_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFalseElim(lean_object* v_e_364_, lean_object* v_h_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v___x_371_; 
lean_inc_ref(v_e_364_);
v___x_371_ = l_Lean_Meta_getLevel(v_e_364_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_384_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_384_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_384_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_376_ = ((lean_object*)(l_Lean_Meta_mkFalseElim___closed__2));
v___x_377_ = lean_box(0);
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v_a_372_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = l_Lean_mkConst(v___x_376_, v___x_378_);
v___x_380_ = l_Lean_mkAppB(v___x_379_, v_e_364_, v_h_365_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_380_);
v___x_382_ = v___x_374_;
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
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec_ref(v_h_365_);
lean_dec_ref(v_e_364_);
v_a_385_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_371_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_371_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFalseElim___boxed(lean_object* v_e_393_, lean_object* v_h_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Meta_mkFalseElim(v_e_393_, v_h_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_);
lean_dec(v_a_398_);
lean_dec_ref(v_a_397_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(lean_object* v_h_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v___x_407_; 
lean_inc(v_a_405_);
lean_inc_ref(v_a_404_);
lean_inc(v_a_403_);
lean_inc_ref(v_a_402_);
v___x_407_ = lean_infer_type(v_h_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_409_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_408_);
lean_dec_ref_known(v___x_407_, 1);
v___x_409_ = l_Lean_Meta_whnfD(v_a_408_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
return v___x_409_;
}
else
{
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer___boxed(lean_object* v_h_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
return v_res_416_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__0));
v___x_419_ = l_Lean_stringToMessageData(v___x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(lean_object* v_e_420_, lean_object* v_type_421_){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_422_ = l_Lean_indentExpr(v_e_420_);
v___x_423_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg___closed__1);
v___x_424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = l_Lean_indentExpr(v_type_421_);
v___x_426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(lean_object* v_msgData_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; lean_object* v_env_434_; lean_object* v___x_435_; lean_object* v_toCold_436_; lean_object* v_mctx_437_; lean_object* v_lctx_438_; lean_object* v_options_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_433_ = lean_st_ref_get(v___y_431_);
v_env_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc_ref(v_env_434_);
lean_dec(v___x_433_);
v___x_435_ = lean_st_ref_get(v___y_429_);
v_toCold_436_ = lean_ctor_get(v___y_430_, 0);
v_mctx_437_ = lean_ctor_get(v___x_435_, 0);
lean_inc_ref(v_mctx_437_);
lean_dec(v___x_435_);
v_lctx_438_ = lean_ctor_get(v___y_428_, 2);
v_options_439_ = lean_ctor_get(v_toCold_436_, 2);
lean_inc_ref(v_options_439_);
lean_inc_ref(v_lctx_438_);
v___x_440_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_440_, 0, v_env_434_);
lean_ctor_set(v___x_440_, 1, v_mctx_437_);
lean_ctor_set(v___x_440_, 2, v_lctx_438_);
lean_ctor_set(v___x_440_, 3, v_options_439_);
v___x_441_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v_msgData_427_);
v___x_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0___boxed(lean_object* v_msgData_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(v_msgData_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(lean_object* v_msg_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_ref_456_; lean_object* v___x_457_; lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_ref_456_ = lean_ctor_get(v___y_453_, 2);
v___x_457_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(v_msg_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_466_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
lean_inc(v_ref_456_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v_ref_456_);
lean_ctor_set(v___x_462_, 1, v_a_458_);
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg___boxed(lean_object* v_msg_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v_msg_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_473_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__0));
v___x_476_ = l_Lean_stringToMessageData(v___x_475_);
return v___x_476_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__2));
v___x_479_ = l_Lean_stringToMessageData(v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(lean_object* v_op_480_, lean_object* v_msg_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_487_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__1);
v___x_488_ = l_Lean_MessageData_ofName(v_op_480_);
v___x_489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___closed__3);
v___x_491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v_msg_481_);
v___x_493_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v___x_492_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg___boxed(lean_object* v_op_494_, lean_object* v_msg_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v_op_494_, v_msg_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException(lean_object* v_00_u03b1_502_, lean_object* v_op_503_, lean_object* v_msg_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v_op_503_, v_msg_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___boxed(lean_object* v_00_u03b1_511_, lean_object* v_op_512_, lean_object* v_msg_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException(v_00_u03b1_511_, v_op_512_, v_msg_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0(lean_object* v_00_u03b1_520_, lean_object* v_msg_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v_msg_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___boxed(lean_object* v_00_u03b1_528_, lean_object* v_msg_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0(v_00_u03b1_528_, v_msg_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
return v_res_535_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqSymm___closed__4(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = ((lean_object*)(l_Lean_Meta_mkEqSymm___closed__3));
v___x_544_ = l_Lean_MessageData_ofFormat(v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqSymm(lean_object* v_h_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_551_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_552_ = l_Lean_Expr_isAppOf(v_h_545_, v___x_551_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
lean_inc_ref(v_h_545_);
v___x_553_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
v___x_555_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_556_ = lean_unsigned_to_nat(3u);
v___x_557_ = l_Lean_Expr_isAppOfArity(v_a_554_, v___x_555_, v___x_556_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_558_ = ((lean_object*)(l_Lean_Meta_mkEqSymm___closed__1));
v___x_559_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_560_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_545_, v_a_554_);
v___x_561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_558_, v___x_561_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
return v___x_562_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_563_ = l_Lean_Expr_appFn_x21(v_a_554_);
v___x_564_ = l_Lean_Expr_appFn_x21(v___x_563_);
v___x_565_ = l_Lean_Expr_appArg_x21(v___x_564_);
lean_dec_ref(v___x_564_);
v___x_566_ = l_Lean_Expr_appArg_x21(v___x_563_);
lean_dec_ref(v___x_563_);
v___x_567_ = l_Lean_Expr_appArg_x21(v_a_554_);
lean_dec(v_a_554_);
lean_inc_ref(v___x_565_);
v___x_568_ = l_Lean_Meta_getLevel(v___x_565_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_581_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_581_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_581_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_581_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_573_ = ((lean_object*)(l_Lean_Meta_mkEqSymm___closed__1));
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v_a_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = l_Lean_mkConst(v___x_573_, v___x_575_);
v___x_577_ = l_Lean_mkApp4(v___x_576_, v___x_565_, v___x_566_, v___x_567_, v_h_545_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_577_);
v___x_579_ = v___x_571_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_dec_ref(v___x_567_);
lean_dec_ref(v___x_566_);
lean_dec_ref(v___x_565_);
lean_dec_ref(v_h_545_);
v_a_582_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_568_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_568_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
else
{
lean_dec_ref(v_h_545_);
return v___x_553_;
}
}
else
{
lean_object* v___x_590_; 
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v_h_545_);
return v___x_590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqSymm___boxed(lean_object* v_h_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Meta_mkEqSymm(v_h_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_);
lean_dec(v_a_595_);
lean_dec_ref(v_a_594_);
lean_dec(v_a_593_);
lean_dec_ref(v_a_592_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans(lean_object* v_h_u2081_602_, lean_object* v_h_u2082_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_610_ = l_Lean_Expr_isAppOf(v_h_u2081_602_, v___x_609_);
if (v___x_610_ == 0)
{
uint8_t v___x_611_; 
v___x_611_ = l_Lean_Expr_isAppOf(v_h_u2082_603_, v___x_609_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
lean_inc_ref(v_h_u2081_602_);
v___x_612_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2081_602_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_614_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref_known(v___x_612_, 1);
lean_inc_ref(v_h_u2082_603_);
v___x_614_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2082_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_617_ = lean_unsigned_to_nat(3u);
v___x_618_ = l_Lean_Expr_isAppOfArity(v_a_613_, v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec(v_a_615_);
lean_dec_ref(v_h_u2082_603_);
v___x_619_ = ((lean_object*)(l_Lean_Meta_mkEqTrans___closed__1));
v___x_620_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_621_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2081_602_, v_a_613_);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_619_, v___x_622_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
return v___x_623_;
}
else
{
uint8_t v___x_624_; 
v___x_624_ = l_Lean_Expr_isAppOfArity(v_a_615_, v___x_616_, v___x_617_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
lean_dec(v_a_613_);
lean_dec_ref(v_h_u2081_602_);
v___x_625_ = ((lean_object*)(l_Lean_Meta_mkEqTrans___closed__1));
v___x_626_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_627_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2082_603_, v_a_615_);
v___x_628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_625_, v___x_628_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
return v___x_629_;
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_630_ = l_Lean_Expr_appFn_x21(v_a_613_);
v___x_631_ = l_Lean_Expr_appFn_x21(v___x_630_);
v___x_632_ = l_Lean_Expr_appArg_x21(v___x_631_);
lean_dec_ref(v___x_631_);
v___x_633_ = l_Lean_Expr_appArg_x21(v___x_630_);
lean_dec_ref(v___x_630_);
v___x_634_ = l_Lean_Expr_appArg_x21(v_a_613_);
lean_dec(v_a_613_);
v___x_635_ = l_Lean_Expr_appArg_x21(v_a_615_);
lean_dec(v_a_615_);
lean_inc_ref(v___x_632_);
v___x_636_ = l_Lean_Meta_getLevel(v___x_632_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_649_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_649_ == 0)
{
v___x_639_ = v___x_636_;
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_641_ = ((lean_object*)(l_Lean_Meta_mkEqTrans___closed__1));
v___x_642_ = lean_box(0);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v_a_637_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = l_Lean_mkConst(v___x_641_, v___x_643_);
v___x_645_ = l_Lean_mkApp6(v___x_644_, v___x_632_, v___x_633_, v___x_634_, v___x_635_, v_h_u2081_602_, v_h_u2082_603_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_645_);
v___x_647_ = v___x_639_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_h_u2082_603_);
lean_dec_ref(v_h_u2081_602_);
v_a_650_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_636_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_636_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
else
{
lean_dec(v_a_613_);
lean_dec_ref(v_h_u2082_603_);
lean_dec_ref(v_h_u2081_602_);
return v___x_614_;
}
}
else
{
lean_dec_ref(v_h_u2082_603_);
lean_dec_ref(v_h_u2081_602_);
return v___x_612_;
}
}
else
{
lean_object* v___x_658_; 
lean_dec_ref(v_h_u2082_603_);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v_h_u2081_602_);
return v___x_658_;
}
}
else
{
lean_object* v___x_659_; 
lean_dec_ref(v_h_u2081_602_);
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v_h_u2082_603_);
return v___x_659_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans___boxed(lean_object* v_h_u2081_660_, lean_object* v_h_u2082_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Meta_mkEqTrans(v_h_u2081_660_, v_h_u2082_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans_x3f(lean_object* v_h_u2081_x3f_668_, lean_object* v_h_u2082_x3f_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_h_676_; 
if (lean_obj_tag(v_h_u2081_x3f_668_) == 0)
{
if (lean_obj_tag(v_h_u2082_x3f_669_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v_h_u2082_x3f_669_);
return v___x_679_;
}
else
{
lean_object* v_val_680_; 
v_val_680_ = lean_ctor_get(v_h_u2082_x3f_669_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v_h_u2082_x3f_669_, 1);
v_h_676_ = v_val_680_;
goto v___jp_675_;
}
}
else
{
if (lean_obj_tag(v_h_u2082_x3f_669_) == 0)
{
lean_object* v_val_681_; 
v_val_681_ = lean_ctor_get(v_h_u2081_x3f_668_, 0);
lean_inc(v_val_681_);
lean_dec_ref_known(v_h_u2081_x3f_668_, 1);
v_h_676_ = v_val_681_;
goto v___jp_675_;
}
else
{
lean_object* v_val_682_; lean_object* v_val_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_707_; 
v_val_682_ = lean_ctor_get(v_h_u2081_x3f_668_, 0);
lean_inc(v_val_682_);
lean_dec_ref_known(v_h_u2081_x3f_668_, 1);
v_val_683_ = lean_ctor_get(v_h_u2082_x3f_669_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v_h_u2082_x3f_669_);
if (v_isSharedCheck_707_ == 0)
{
v___x_685_ = v_h_u2082_x3f_669_;
v_isShared_686_ = v_isSharedCheck_707_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_val_683_);
lean_dec(v_h_u2082_x3f_669_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_707_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lean_Meta_mkEqTrans(v_val_682_, v_val_683_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_698_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_698_ == 0)
{
v___x_690_ = v___x_687_;
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_687_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v_a_688_);
v___x_693_ = v___x_685_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_697_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_693_);
v___x_695_ = v___x_690_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_del_object(v___x_685_);
v_a_699_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_687_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_687_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_h_676_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrans_x3f___boxed(lean_object* v_h_u2081_x3f_708_, lean_object* v_h_u2082_x3f_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_Meta_mkEqTrans_x3f(v_h_u2081_x3f_708_, v_h_u2082_x3f_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
return v_res_715_;
}
}
static lean_object* _init_l_Lean_Meta_mkHEqSymm___closed__3(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lean_Meta_mkHEqSymm___closed__2));
v___x_723_ = l_Lean_MessageData_ofFormat(v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqSymm(lean_object* v_h_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lean_Meta_mkHEqRefl___closed__0));
v___x_731_ = l_Lean_Expr_isAppOf(v_h_724_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_inc_ref(v_h_724_);
v___x_732_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_735_ = lean_unsigned_to_nat(4u);
v___x_736_ = l_Lean_Expr_isAppOfArity(v_a_733_, v___x_734_, v___x_735_);
if (v___x_736_ == 0)
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_737_ = ((lean_object*)(l_Lean_Meta_mkHEqSymm___closed__0));
v___x_738_ = lean_obj_once(&l_Lean_Meta_mkHEqSymm___closed__3, &l_Lean_Meta_mkHEqSymm___closed__3_once, _init_l_Lean_Meta_mkHEqSymm___closed__3);
v___x_739_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_724_, v_a_733_);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_737_, v___x_740_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
return v___x_741_;
}
else
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_742_ = l_Lean_Expr_appFn_x21(v_a_733_);
v___x_743_ = l_Lean_Expr_appFn_x21(v___x_742_);
v___x_744_ = l_Lean_Expr_appFn_x21(v___x_743_);
v___x_745_ = l_Lean_Expr_appArg_x21(v___x_744_);
lean_dec_ref(v___x_744_);
v___x_746_ = l_Lean_Expr_appArg_x21(v___x_743_);
lean_dec_ref(v___x_743_);
v___x_747_ = l_Lean_Expr_appArg_x21(v___x_742_);
lean_dec_ref(v___x_742_);
v___x_748_ = l_Lean_Expr_appArg_x21(v_a_733_);
lean_dec(v_a_733_);
lean_inc_ref(v___x_745_);
v___x_749_ = l_Lean_Meta_getLevel(v___x_745_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_762_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_762_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_754_ = ((lean_object*)(l_Lean_Meta_mkHEqSymm___closed__0));
v___x_755_ = lean_box(0);
v___x_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_756_, 0, v_a_750_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = l_Lean_mkConst(v___x_754_, v___x_756_);
v___x_758_ = l_Lean_mkApp5(v___x_757_, v___x_745_, v___x_747_, v___x_746_, v___x_748_, v_h_724_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_758_);
v___x_760_ = v___x_752_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec_ref(v___x_748_);
lean_dec_ref(v___x_747_);
lean_dec_ref(v___x_746_);
lean_dec_ref(v___x_745_);
lean_dec_ref(v_h_724_);
v_a_763_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_749_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_749_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
else
{
lean_dec_ref(v_h_724_);
return v___x_732_;
}
}
else
{
lean_object* v___x_771_; 
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v_h_724_);
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqSymm___boxed(lean_object* v_h_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Meta_mkHEqSymm(v_h_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqTrans(lean_object* v_h_u2081_782_, lean_object* v_h_u2082_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_Meta_mkHEqRefl___closed__0));
v___x_790_ = l_Lean_Expr_isAppOf(v_h_u2081_782_, v___x_789_);
if (v___x_790_ == 0)
{
uint8_t v___x_791_; 
v___x_791_ = l_Lean_Expr_isAppOf(v_h_u2082_783_, v___x_789_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
lean_inc_ref(v_h_u2081_782_);
v___x_792_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2081_782_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_794_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
lean_inc_ref(v_h_u2082_783_);
v___x_794_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2082_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_794_, 1);
v___x_796_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_797_ = lean_unsigned_to_nat(4u);
v___x_798_ = l_Lean_Expr_isAppOfArity(v_a_793_, v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec(v_a_795_);
lean_dec_ref(v_h_u2082_783_);
v___x_799_ = ((lean_object*)(l_Lean_Meta_mkHEqTrans___closed__0));
v___x_800_ = lean_obj_once(&l_Lean_Meta_mkHEqSymm___closed__3, &l_Lean_Meta_mkHEqSymm___closed__3_once, _init_l_Lean_Meta_mkHEqSymm___closed__3);
v___x_801_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2081_782_, v_a_793_);
v___x_802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_799_, v___x_802_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
return v___x_803_;
}
else
{
uint8_t v___x_804_; 
v___x_804_ = l_Lean_Expr_isAppOfArity(v_a_795_, v___x_796_, v___x_797_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
lean_dec(v_a_793_);
lean_dec_ref(v_h_u2081_782_);
v___x_805_ = ((lean_object*)(l_Lean_Meta_mkHEqTrans___closed__0));
v___x_806_ = lean_obj_once(&l_Lean_Meta_mkHEqSymm___closed__3, &l_Lean_Meta_mkHEqSymm___closed__3_once, _init_l_Lean_Meta_mkHEqSymm___closed__3);
v___x_807_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2082_783_, v_a_795_);
v___x_808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_805_, v___x_808_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
return v___x_809_;
}
else
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_810_ = l_Lean_Expr_appFn_x21(v_a_793_);
v___x_811_ = l_Lean_Expr_appFn_x21(v___x_810_);
v___x_812_ = l_Lean_Expr_appFn_x21(v___x_811_);
v___x_813_ = l_Lean_Expr_appArg_x21(v___x_812_);
lean_dec_ref(v___x_812_);
v___x_814_ = l_Lean_Expr_appArg_x21(v___x_811_);
lean_dec_ref(v___x_811_);
v___x_815_ = l_Lean_Expr_appArg_x21(v___x_810_);
lean_dec_ref(v___x_810_);
v___x_816_ = l_Lean_Expr_appArg_x21(v_a_793_);
lean_dec(v_a_793_);
v___x_817_ = l_Lean_Expr_appFn_x21(v_a_795_);
v___x_818_ = l_Lean_Expr_appArg_x21(v___x_817_);
lean_dec_ref(v___x_817_);
v___x_819_ = l_Lean_Expr_appArg_x21(v_a_795_);
lean_dec(v_a_795_);
lean_inc_ref(v___x_813_);
v___x_820_ = l_Lean_Meta_getLevel(v___x_813_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_833_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_833_ == 0)
{
v___x_823_ = v___x_820_;
v_isShared_824_ = v_isSharedCheck_833_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_833_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_825_ = ((lean_object*)(l_Lean_Meta_mkHEqTrans___closed__0));
v___x_826_ = lean_box(0);
v___x_827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_827_, 0, v_a_821_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = l_Lean_mkConst(v___x_825_, v___x_827_);
v___x_829_ = l_Lean_mkApp8(v___x_828_, v___x_813_, v___x_815_, v___x_818_, v___x_814_, v___x_816_, v___x_819_, v_h_u2081_782_, v_h_u2082_783_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v___x_829_);
v___x_831_ = v___x_823_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec_ref(v___x_819_);
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_815_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_813_);
lean_dec_ref(v_h_u2082_783_);
lean_dec_ref(v_h_u2081_782_);
v_a_834_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_820_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_820_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
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
else
{
lean_dec(v_a_793_);
lean_dec_ref(v_h_u2082_783_);
lean_dec_ref(v_h_u2081_782_);
return v___x_794_;
}
}
else
{
lean_dec_ref(v_h_u2082_783_);
lean_dec_ref(v_h_u2081_782_);
return v___x_792_;
}
}
else
{
lean_object* v___x_842_; 
lean_dec_ref(v_h_u2082_783_);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v_h_u2081_782_);
return v___x_842_;
}
}
else
{
lean_object* v___x_843_; 
lean_dec_ref(v_h_u2081_782_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v_h_u2082_783_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqTrans___boxed(lean_object* v_h_u2081_844_, lean_object* v_h_u2082_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_Meta_mkHEqTrans(v_h_u2081_844_, v_h_u2082_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
return v_res_851_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqOfHEq___closed__2(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = ((lean_object*)(l_Lean_Meta_mkHEqSymm___closed__1));
v___x_856_ = l_Lean_stringToMessageData(v___x_855_);
return v___x_856_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqOfHEq___closed__4(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = ((lean_object*)(l_Lean_Meta_mkEqOfHEq___closed__3));
v___x_859_ = l_Lean_stringToMessageData(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqOfHEq___closed__6(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lean_Meta_mkEqOfHEq___closed__5));
v___x_862_ = l_Lean_stringToMessageData(v___x_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqOfHEq(lean_object* v_h_863_, uint8_t v_check_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v___x_870_; 
lean_inc_ref(v_h_863_);
v___x_870_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_863_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_873_ = lean_unsigned_to_nat(4u);
v___x_874_ = l_Lean_Expr_isAppOfArity(v_a_871_, v___x_872_, v___x_873_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec(v_a_871_);
v___x_875_ = ((lean_object*)(l_Lean_Meta_mkEqOfHEq___closed__1));
v___x_876_ = lean_obj_once(&l_Lean_Meta_mkEqOfHEq___closed__2, &l_Lean_Meta_mkEqOfHEq___closed__2_once, _init_l_Lean_Meta_mkEqOfHEq___closed__2);
v___x_877_ = l_Lean_indentExpr(v_h_863_);
v___x_878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_876_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_875_, v___x_878_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
return v___x_879_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; 
v___x_880_ = l_Lean_Expr_appFn_x21(v_a_871_);
v___x_881_ = l_Lean_Expr_appFn_x21(v___x_880_);
v___x_882_ = l_Lean_Expr_appFn_x21(v___x_881_);
v___x_883_ = l_Lean_Expr_appArg_x21(v___x_882_);
lean_dec_ref(v___x_882_);
v___x_884_ = l_Lean_Expr_appArg_x21(v___x_881_);
lean_dec_ref(v___x_881_);
v___x_885_ = l_Lean_Expr_appArg_x21(v_a_871_);
lean_dec(v_a_871_);
if (v_check_864_ == 0)
{
lean_dec_ref(v___x_880_);
v___y_887_ = v_a_865_;
v___y_888_ = v_a_866_;
v___y_889_ = v_a_867_;
v___y_890_ = v_a_868_;
goto v___jp_886_;
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = l_Lean_Expr_appArg_x21(v___x_880_);
lean_dec_ref(v___x_880_);
lean_inc_ref(v___x_913_);
lean_inc_ref(v___x_883_);
v___x_914_ = l_Lean_Meta_isExprDefEq(v___x_883_, v___x_913_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; uint8_t v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = lean_unbox(v_a_915_);
lean_dec(v_a_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_884_);
lean_dec_ref(v_h_863_);
v___x_917_ = ((lean_object*)(l_Lean_Meta_mkEqOfHEq___closed__1));
v___x_918_ = lean_obj_once(&l_Lean_Meta_mkEqOfHEq___closed__4, &l_Lean_Meta_mkEqOfHEq___closed__4_once, _init_l_Lean_Meta_mkEqOfHEq___closed__4);
v___x_919_ = l_Lean_indentExpr(v___x_883_);
v___x_920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_obj_once(&l_Lean_Meta_mkEqOfHEq___closed__6, &l_Lean_Meta_mkEqOfHEq___closed__6_once, _init_l_Lean_Meta_mkEqOfHEq___closed__6);
v___x_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = l_Lean_indentExpr(v___x_913_);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_917_, v___x_924_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_dec_ref(v___x_913_);
v___y_887_ = v_a_865_;
v___y_888_ = v_a_866_;
v___y_889_ = v_a_867_;
v___y_890_ = v_a_868_;
goto v___jp_886_;
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v___x_913_);
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_884_);
lean_dec_ref(v___x_883_);
lean_dec_ref(v_h_863_);
v_a_934_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_914_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_914_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
v___jp_886_:
{
lean_object* v___x_891_; 
lean_inc_ref(v___x_883_);
v___x_891_ = l_Lean_Meta_getLevel(v___x_883_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_904_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_904_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_896_ = ((lean_object*)(l_Lean_Meta_mkEqOfHEq___closed__1));
v___x_897_ = lean_box(0);
v___x_898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_898_, 0, v_a_892_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = l_Lean_mkConst(v___x_896_, v___x_898_);
v___x_900_ = l_Lean_mkApp4(v___x_899_, v___x_883_, v___x_884_, v___x_885_, v_h_863_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_900_);
v___x_902_ = v___x_894_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_884_);
lean_dec_ref(v___x_883_);
lean_dec_ref(v_h_863_);
v_a_905_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_891_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_891_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_863_);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqOfHEq___boxed(lean_object* v_h_942_, lean_object* v_check_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_){
_start:
{
uint8_t v_check_boxed_949_; lean_object* v_res_950_; 
v_check_boxed_949_ = lean_unbox(v_check_943_);
v_res_950_ = l_Lean_Meta_mkEqOfHEq(v_h_942_, v_check_boxed_949_, v_a_944_, v_a_945_, v_a_946_, v_a_947_);
lean_dec(v_a_947_);
lean_dec_ref(v_a_946_);
lean_dec(v_a_945_);
lean_dec_ref(v_a_944_);
return v_res_950_;
}
}
static lean_object* _init_l_Lean_Meta_mkHEqOfEq___closed__2(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = ((lean_object*)(l_Lean_Meta_mkEqSymm___closed__2));
v___x_955_ = l_Lean_stringToMessageData(v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqOfEq(lean_object* v_h_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_962_; 
lean_inc_ref(v_h_956_);
v___x_962_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_962_, 1);
v___x_964_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_965_ = lean_unsigned_to_nat(3u);
v___x_966_ = l_Lean_Expr_isAppOfArity(v_a_963_, v___x_964_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec(v_a_963_);
v___x_967_ = ((lean_object*)(l_Lean_Meta_mkHEqOfEq___closed__1));
v___x_968_ = lean_obj_once(&l_Lean_Meta_mkHEqOfEq___closed__2, &l_Lean_Meta_mkHEqOfEq___closed__2_once, _init_l_Lean_Meta_mkHEqOfEq___closed__2);
v___x_969_ = l_Lean_indentExpr(v_h_956_);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_967_, v___x_970_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
return v___x_971_;
}
else
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_972_ = l_Lean_Expr_appFn_x21(v_a_963_);
v___x_973_ = l_Lean_Expr_appFn_x21(v___x_972_);
v___x_974_ = l_Lean_Expr_appArg_x21(v___x_973_);
lean_dec_ref(v___x_973_);
v___x_975_ = l_Lean_Expr_appArg_x21(v___x_972_);
lean_dec_ref(v___x_972_);
v___x_976_ = l_Lean_Expr_appArg_x21(v_a_963_);
lean_dec(v_a_963_);
lean_inc_ref(v___x_974_);
v___x_977_ = l_Lean_Meta_getLevel(v___x_974_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_990_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_990_ == 0)
{
v___x_980_ = v___x_977_;
v_isShared_981_ = v_isSharedCheck_990_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_977_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_990_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_982_ = ((lean_object*)(l_Lean_Meta_mkHEqOfEq___closed__1));
v___x_983_ = lean_box(0);
v___x_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_984_, 0, v_a_978_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lean_mkConst(v___x_982_, v___x_984_);
v___x_986_ = l_Lean_mkApp4(v___x_985_, v___x_974_, v___x_975_, v___x_976_, v_h_956_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v___x_986_);
v___x_988_ = v___x_980_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v___x_976_);
lean_dec_ref(v___x_975_);
lean_dec_ref(v___x_974_);
lean_dec_ref(v_h_956_);
v_a_991_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_977_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_977_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
else
{
lean_dec_ref(v_h_956_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHEqOfEq___boxed(lean_object* v_h_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_Meta_mkHEqOfEq(v_h_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isRefl_x3f(lean_object* v_e_1006_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1007_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_1008_ = lean_unsigned_to_nat(2u);
v___x_1009_ = l_Lean_Expr_isAppOfArity(v_e_1006_, v___x_1007_, v___x_1008_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_box(0);
return v___x_1010_;
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = l_Lean_Expr_appArg_x21(v_e_1006_);
v___x_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isRefl_x3f___boxed(lean_object* v_e_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_Meta_isRefl_x3f(v_e_1013_);
lean_dec_ref(v_e_1013_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_congrArg_x3f_spec__0(lean_object* v_msg_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v___f_1022_; lean_object* v___x_854__overap_1023_; lean_object* v___x_1024_; 
v___f_1022_ = ((lean_object*)(l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___closed__0));
v___x_854__overap_1023_ = lean_panic_fn_borrowed(v___f_1022_, v_msg_1016_);
lean_inc(v___y_1020_);
lean_inc_ref(v___y_1019_);
lean_inc(v___y_1018_);
lean_inc_ref(v___y_1017_);
v___x_1024_ = lean_apply_5(v___x_854__overap_1023_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, lean_box(0));
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___boxed(lean_object* v_msg_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_panic___at___00Lean_Meta_congrArg_x3f_spec__0(v_msg_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
return v_res_1031_;
}
}
static lean_object* _init_l_Lean_Meta_congrArg_x3f___closed__2(void){
_start:
{
lean_object* v___x_1035_; lean_object* v_dummy_1036_; 
v___x_1035_ = lean_obj_once(&l_Lean_Meta_mkExpectedPropHint___closed__0, &l_Lean_Meta_mkExpectedPropHint___closed__0_once, _init_l_Lean_Meta_mkExpectedPropHint___closed__0);
v_dummy_1036_ = l_Lean_Expr_sort___override(v___x_1035_);
return v_dummy_1036_;
}
}
static lean_object* _init_l_Lean_Meta_congrArg_x3f___closed__6(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1040_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__5));
v___x_1041_ = lean_unsigned_to_nat(48u);
v___x_1042_ = lean_unsigned_to_nat(204u);
v___x_1043_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__4));
v___x_1044_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__3));
v___x_1045_ = l_mkPanicMessageWithDecl(v___x_1044_, v___x_1043_, v___x_1042_, v___x_1041_, v___x_1040_);
return v___x_1045_;
}
}
static lean_object* _init_l_Lean_Meta_congrArg_x3f___closed__9(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_unsigned_to_nat(0u);
v___x_1050_ = l_Lean_Expr_bvar___override(v___x_1049_);
return v___x_1050_;
}
}
static lean_object* _init_l_Lean_Meta_congrArg_x3f___closed__10(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1051_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__9, &l_Lean_Meta_congrArg_x3f___closed__9_once, _init_l_Lean_Meta_congrArg_x3f___closed__9);
v___x_1052_ = lean_unsigned_to_nat(1u);
v___x_1053_ = lean_mk_empty_array_with_capacity(v___x_1052_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_1051_);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_Meta_congrArg_x3f___closed__15(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1061_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__5));
v___x_1062_ = lean_unsigned_to_nat(49u);
v___x_1063_ = lean_unsigned_to_nat(201u);
v___x_1064_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__4));
v___x_1065_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__3));
v___x_1066_ = l_mkPanicMessageWithDecl(v___x_1065_, v___x_1064_, v___x_1063_, v___x_1062_, v___x_1061_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_congrArg_x3f(lean_object* v_e_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_){
_start:
{
lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1122_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__14));
v___x_1123_ = lean_unsigned_to_nat(6u);
v___x_1124_ = l_Lean_Expr_isAppOfArity(v_e_1067_, v___x_1122_, v___x_1123_);
if (v___x_1124_ == 0)
{
v___y_1077_ = v_a_1068_;
v___y_1078_ = v_a_1069_;
v___y_1079_ = v_a_1070_;
v___y_1080_ = v_a_1071_;
goto v___jp_1076_;
}
else
{
lean_object* v_dummy_1125_; lean_object* v_nargs_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v_dummy_1125_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__2, &l_Lean_Meta_congrArg_x3f___closed__2_once, _init_l_Lean_Meta_congrArg_x3f___closed__2);
v_nargs_1126_ = l_Lean_Expr_getAppNumArgs(v_e_1067_);
lean_inc(v_nargs_1126_);
v___x_1127_ = lean_mk_array(v_nargs_1126_, v_dummy_1125_);
v___x_1128_ = lean_unsigned_to_nat(1u);
v___x_1129_ = lean_nat_sub(v_nargs_1126_, v___x_1128_);
lean_dec(v_nargs_1126_);
lean_inc_ref(v_e_1067_);
v___x_1130_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1067_, v___x_1127_, v___x_1129_);
v___x_1131_ = lean_array_get_size(v___x_1130_);
v___x_1132_ = lean_nat_dec_eq(v___x_1131_, v___x_1123_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec_ref(v___x_1130_);
v___x_1133_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__15, &l_Lean_Meta_congrArg_x3f___closed__15_once, _init_l_Lean_Meta_congrArg_x3f___closed__15);
v___x_1134_ = l_panic___at___00Lean_Meta_congrArg_x3f_spec__0(v___x_1133_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_dec_ref_known(v___x_1134_, 1);
v___y_1077_ = v_a_1068_;
v___y_1078_ = v_a_1069_;
v___y_1079_ = v_a_1070_;
v___y_1080_ = v_a_1071_;
goto v___jp_1076_;
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v_e_1067_);
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
lean_dec_ref(v_e_1067_);
v___x_1143_ = lean_unsigned_to_nat(0u);
v___x_1144_ = lean_array_fget(v___x_1130_, v___x_1143_);
v___x_1145_ = lean_unsigned_to_nat(4u);
v___x_1146_ = lean_array_fget(v___x_1130_, v___x_1145_);
v___x_1147_ = lean_unsigned_to_nat(5u);
v___x_1148_ = lean_array_fget(v___x_1130_, v___x_1147_);
lean_dec_ref(v___x_1130_);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1146_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1144_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
v___x_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
return v___x_1152_;
}
}
v___jp_1073_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_box(0);
v___x_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
v___jp_1076_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1081_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__1));
v___x_1082_ = lean_unsigned_to_nat(6u);
v___x_1083_ = l_Lean_Expr_isAppOfArity(v_e_1067_, v___x_1081_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_dec_ref(v_e_1067_);
goto v___jp_1073_;
}
else
{
lean_object* v_dummy_1084_; lean_object* v_nargs_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; uint8_t v___x_1091_; 
v_dummy_1084_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__2, &l_Lean_Meta_congrArg_x3f___closed__2_once, _init_l_Lean_Meta_congrArg_x3f___closed__2);
v_nargs_1085_ = l_Lean_Expr_getAppNumArgs(v_e_1067_);
lean_inc(v_nargs_1085_);
v___x_1086_ = lean_mk_array(v_nargs_1085_, v_dummy_1084_);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_sub(v_nargs_1085_, v___x_1087_);
lean_dec(v_nargs_1085_);
v___x_1089_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1067_, v___x_1086_, v___x_1088_);
v___x_1090_ = lean_array_get_size(v___x_1089_);
v___x_1091_ = lean_nat_dec_eq(v___x_1090_, v___x_1082_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec_ref(v___x_1089_);
v___x_1092_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__6, &l_Lean_Meta_congrArg_x3f___closed__6_once, _init_l_Lean_Meta_congrArg_x3f___closed__6);
v___x_1093_ = l_panic___at___00Lean_Meta_congrArg_x3f_spec__0(v___x_1092_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_dec_ref_known(v___x_1093_, 1);
goto v___jp_1073_;
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1093_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v_00_u03b1_x27_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v_f_x27_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = lean_array_fget(v___x_1089_, v___x_1102_);
v___x_1104_ = lean_array_fget(v___x_1089_, v___x_1087_);
v___x_1105_ = lean_unsigned_to_nat(4u);
v___x_1106_ = lean_array_fget(v___x_1089_, v___x_1105_);
v___x_1107_ = lean_unsigned_to_nat(5u);
v___x_1108_ = lean_array_fget(v___x_1089_, v___x_1107_);
lean_dec_ref(v___x_1089_);
v___x_1109_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__8));
v___x_1110_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__9, &l_Lean_Meta_congrArg_x3f___closed__9_once, _init_l_Lean_Meta_congrArg_x3f___closed__9);
v___x_1111_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__10, &l_Lean_Meta_congrArg_x3f___closed__10_once, _init_l_Lean_Meta_congrArg_x3f___closed__10);
v___x_1112_ = l_Lean_Expr_beta(v___x_1104_, v___x_1111_);
v___x_1113_ = 0;
v_00_u03b1_x27_1114_ = l_Lean_Expr_forallE___override(v___x_1109_, v___x_1103_, v___x_1112_, v___x_1113_);
v___x_1115_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__12));
v___x_1116_ = l_Lean_Expr_app___override(v___x_1110_, v___x_1108_);
lean_inc_ref(v_00_u03b1_x27_1114_);
v_f_x27_1117_ = l_Lean_Expr_lam___override(v___x_1115_, v_00_u03b1_x27_1114_, v___x_1116_, v___x_1113_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v_f_x27_1117_);
lean_ctor_set(v___x_1118_, 1, v___x_1106_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v_00_u03b1_x27_1114_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_congrArg_x3f___boxed(lean_object* v_e_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_Meta_congrArg_x3f(v_e_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
return v_res_1159_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrArg___closed__2(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lean_Meta_mkCongrArg___closed__1));
v___x_1164_ = l_Lean_MessageData_ofFormat(v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrArg(lean_object* v_f_1165_, lean_object* v_h_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lean_Meta_isRefl_x3f(v_h_1166_);
if (lean_obj_tag(v___x_1172_) == 1)
{
lean_object* v_val_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec_ref(v_h_1166_);
v_val_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_val_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = l_Lean_Expr_app___override(v_f_1165_, v_val_1173_);
v___x_1175_ = l_Lean_Meta_mkEqRefl(v___x_1174_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; 
lean_dec(v___x_1172_);
lean_inc_ref(v_h_1166_);
v___x_1176_ = l_Lean_Meta_congrArg_x3f(v_h_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1176_, 1);
if (lean_obj_tag(v_a_1177_) == 1)
{
lean_object* v_val_1178_; lean_object* v_snd_1179_; lean_object* v_fst_1180_; lean_object* v_fst_1181_; lean_object* v_snd_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; lean_object* v___x_1191_; 
lean_dec_ref(v_h_1166_);
v_val_1178_ = lean_ctor_get(v_a_1177_, 0);
lean_inc(v_val_1178_);
lean_dec_ref_known(v_a_1177_, 1);
v_snd_1179_ = lean_ctor_get(v_val_1178_, 1);
lean_inc(v_snd_1179_);
v_fst_1180_ = lean_ctor_get(v_val_1178_, 0);
lean_inc(v_fst_1180_);
lean_dec(v_val_1178_);
v_fst_1181_ = lean_ctor_get(v_snd_1179_, 0);
lean_inc(v_fst_1181_);
v_snd_1182_ = lean_ctor_get(v_snd_1179_, 1);
lean_inc(v_snd_1182_);
lean_dec(v_snd_1179_);
v___x_1183_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__8));
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_mk_empty_array_with_capacity(v___x_1184_);
v___x_1186_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__10, &l_Lean_Meta_congrArg_x3f___closed__10_once, _init_l_Lean_Meta_congrArg_x3f___closed__10);
v___x_1187_ = l_Lean_Expr_beta(v_fst_1181_, v___x_1186_);
v___x_1188_ = lean_array_push(v___x_1185_, v___x_1187_);
v___x_1189_ = l_Lean_Expr_beta(v_f_1165_, v___x_1188_);
v___x_1190_ = 0;
v___x_1191_ = l_Lean_Expr_lam___override(v___x_1183_, v_fst_1180_, v___x_1189_, v___x_1190_);
v_f_1165_ = v___x_1191_;
v_h_1166_ = v_snd_1182_;
goto _start;
}
else
{
lean_object* v___x_1193_; 
lean_dec(v_a_1177_);
lean_inc_ref(v_h_1166_);
v___x_1193_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1195_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v___x_1193_, 1);
lean_inc_ref(v_f_1165_);
v___x_1195_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_f_1165_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1195_, 1);
if (lean_obj_tag(v_a_1196_) == 7)
{
lean_object* v_binderType_1203_; lean_object* v_body_1204_; uint8_t v___x_1205_; 
v_binderType_1203_ = lean_ctor_get(v_a_1196_, 1);
v_body_1204_ = lean_ctor_get(v_a_1196_, 2);
v___x_1205_ = l_Lean_Expr_hasLooseBVars(v_body_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; 
lean_inc_ref(v_body_1204_);
lean_inc_ref(v_binderType_1203_);
lean_dec_ref_known(v_a_1196_, 3);
v___x_1206_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_1207_ = lean_unsigned_to_nat(3u);
v___x_1208_ = l_Lean_Expr_isAppOfArity(v_a_1194_, v___x_1206_, v___x_1207_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_dec_ref(v_body_1204_);
lean_dec_ref(v_binderType_1203_);
lean_dec_ref(v_f_1165_);
v___x_1209_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__14));
v___x_1210_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_1211_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_1166_, v_a_1194_);
v___x_1212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1209_, v___x_1212_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
return v___x_1213_;
}
else
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1214_ = l_Lean_Expr_appFn_x21(v_a_1194_);
v___x_1215_ = l_Lean_Expr_appArg_x21(v___x_1214_);
lean_dec_ref(v___x_1214_);
v___x_1216_ = l_Lean_Expr_appArg_x21(v_a_1194_);
lean_dec(v_a_1194_);
lean_inc_ref(v_binderType_1203_);
v___x_1217_ = l_Lean_Meta_getLevel(v_binderType_1203_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1219_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v___x_1217_, 1);
lean_inc_ref(v_body_1204_);
v___x_1219_ = l_Lean_Meta_getLevel(v_body_1204_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1233_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1233_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1233_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1224_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__14));
v___x_1225_ = lean_box(0);
v___x_1226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1226_, 0, v_a_1220_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
v___x_1227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1227_, 0, v_a_1218_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = l_Lean_mkConst(v___x_1224_, v___x_1227_);
v___x_1229_ = l_Lean_mkApp6(v___x_1228_, v_binderType_1203_, v_body_1204_, v___x_1215_, v___x_1216_, v_f_1165_, v_h_1166_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1229_);
v___x_1231_ = v___x_1222_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v_a_1218_);
lean_dec_ref(v___x_1216_);
lean_dec_ref(v___x_1215_);
lean_dec_ref(v_body_1204_);
lean_dec_ref(v_binderType_1203_);
lean_dec_ref(v_h_1166_);
lean_dec_ref(v_f_1165_);
v_a_1234_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1219_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1219_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec_ref(v___x_1216_);
lean_dec_ref(v___x_1215_);
lean_dec_ref(v_body_1204_);
lean_dec_ref(v_binderType_1203_);
lean_dec_ref(v_h_1166_);
lean_dec_ref(v_f_1165_);
v_a_1242_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1217_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1217_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
else
{
lean_dec(v_a_1194_);
lean_dec_ref(v_h_1166_);
goto v___jp_1197_;
}
}
else
{
lean_dec(v_a_1194_);
lean_dec_ref(v_h_1166_);
goto v___jp_1197_;
}
v___jp_1197_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1198_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__14));
v___x_1199_ = lean_obj_once(&l_Lean_Meta_mkCongrArg___closed__2, &l_Lean_Meta_mkCongrArg___closed__2_once, _init_l_Lean_Meta_mkCongrArg___closed__2);
v___x_1200_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_f_1165_, v_a_1196_);
v___x_1201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1198_, v___x_1201_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
return v___x_1202_;
}
}
else
{
lean_dec(v_a_1194_);
lean_dec_ref(v_h_1166_);
lean_dec_ref(v_f_1165_);
return v___x_1195_;
}
}
else
{
lean_dec_ref(v_h_1166_);
lean_dec_ref(v_f_1165_);
return v___x_1193_;
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_h_1166_);
lean_dec_ref(v_f_1165_);
v_a_1250_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1176_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1176_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrArg___boxed(lean_object* v_f_1258_, lean_object* v_h_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lean_Meta_mkCongrArg(v_f_1258_, v_h_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
return v_res_1265_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrFun___closed__0(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1266_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__9, &l_Lean_Meta_congrArg_x3f___closed__9_once, _init_l_Lean_Meta_congrArg_x3f___closed__9);
v___x_1267_ = lean_unsigned_to_nat(2u);
v___x_1268_ = lean_mk_empty_array_with_capacity(v___x_1267_);
v___x_1269_ = lean_array_push(v___x_1268_, v___x_1266_);
return v___x_1269_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrFun___closed__3(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = ((lean_object*)(l_Lean_Meta_mkCongrFun___closed__2));
v___x_1274_ = l_Lean_MessageData_ofFormat(v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrFun(lean_object* v_h_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_Meta_isRefl_x3f(v_h_1275_);
if (lean_obj_tag(v___x_1282_) == 1)
{
lean_object* v_val_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec_ref(v_h_1275_);
v_val_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_val_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = l_Lean_Expr_app___override(v_val_1283_, v_a_1276_);
v___x_1285_ = l_Lean_Meta_mkEqRefl(v___x_1284_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
return v___x_1285_;
}
else
{
lean_object* v___x_1286_; 
lean_dec(v___x_1282_);
lean_inc_ref(v_h_1275_);
v___x_1286_ = l_Lean_Meta_congrArg_x3f(v_h_1275_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
if (lean_obj_tag(v_a_1287_) == 1)
{
lean_object* v_val_1288_; lean_object* v_snd_1289_; lean_object* v_fst_1290_; lean_object* v_fst_1291_; lean_object* v_snd_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_dec_ref(v_h_1275_);
v_val_1288_ = lean_ctor_get(v_a_1287_, 0);
lean_inc(v_val_1288_);
lean_dec_ref_known(v_a_1287_, 1);
v_snd_1289_ = lean_ctor_get(v_val_1288_, 1);
lean_inc(v_snd_1289_);
v_fst_1290_ = lean_ctor_get(v_val_1288_, 0);
lean_inc(v_fst_1290_);
lean_dec(v_val_1288_);
v_fst_1291_ = lean_ctor_get(v_snd_1289_, 0);
lean_inc(v_fst_1291_);
v_snd_1292_ = lean_ctor_get(v_snd_1289_, 1);
lean_inc(v_snd_1292_);
lean_dec(v_snd_1289_);
v___x_1293_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__8));
v___x_1294_ = lean_obj_once(&l_Lean_Meta_mkCongrFun___closed__0, &l_Lean_Meta_mkCongrFun___closed__0_once, _init_l_Lean_Meta_mkCongrFun___closed__0);
v___x_1295_ = lean_array_push(v___x_1294_, v_a_1276_);
v___x_1296_ = l_Lean_Expr_beta(v_fst_1291_, v___x_1295_);
v___x_1297_ = 0;
v___x_1298_ = l_Lean_Expr_lam___override(v___x_1293_, v_fst_1290_, v___x_1296_, v___x_1297_);
v___x_1299_ = l_Lean_Meta_mkCongrArg(v___x_1298_, v_snd_1292_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
return v___x_1299_;
}
else
{
lean_object* v___x_1300_; 
lean_dec(v_a_1287_);
lean_inc_ref(v_h_1275_);
v___x_1300_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_1275_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1300_, 1);
v___x_1302_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_1303_ = lean_unsigned_to_nat(3u);
v___x_1304_ = l_Lean_Expr_isAppOfArity(v_a_1301_, v___x_1302_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec_ref(v_a_1276_);
v___x_1305_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__1));
v___x_1306_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_1307_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_1275_, v_a_1301_);
v___x_1308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1305_, v___x_1308_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
return v___x_1309_;
}
else
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1310_ = l_Lean_Expr_appFn_x21(v_a_1301_);
v___x_1311_ = l_Lean_Expr_appFn_x21(v___x_1310_);
v___x_1312_ = l_Lean_Expr_appArg_x21(v___x_1311_);
lean_dec_ref(v___x_1311_);
v___x_1313_ = l_Lean_Expr_appArg_x21(v___x_1310_);
lean_dec_ref(v___x_1310_);
v___x_1314_ = l_Lean_Expr_appArg_x21(v_a_1301_);
v___x_1315_ = l_Lean_Meta_whnfD(v___x_1312_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref_known(v___x_1315_, 1);
if (lean_obj_tag(v_a_1316_) == 7)
{
lean_object* v_binderName_1317_; lean_object* v_binderType_1318_; lean_object* v_body_1319_; uint8_t v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec(v_a_1301_);
v_binderName_1317_ = lean_ctor_get(v_a_1316_, 0);
lean_inc(v_binderName_1317_);
v_binderType_1318_ = lean_ctor_get(v_a_1316_, 1);
lean_inc_ref_n(v_binderType_1318_, 3);
v_body_1319_ = lean_ctor_get(v_a_1316_, 2);
lean_inc_ref(v_body_1319_);
lean_dec_ref_known(v_a_1316_, 3);
v___x_1320_ = 0;
v___x_1321_ = l_Lean_mkLambda(v_binderName_1317_, v___x_1320_, v_binderType_1318_, v_body_1319_);
v___x_1322_ = l_Lean_Meta_getLevel(v_binderType_1318_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1322_, 1);
lean_inc_ref(v_a_1276_);
lean_inc_ref(v___x_1321_);
v___x_1324_ = l_Lean_Expr_app___override(v___x_1321_, v_a_1276_);
v___x_1325_ = l_Lean_Meta_getLevel(v___x_1324_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1339_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1328_ = v___x_1325_;
v_isShared_1329_ = v_isSharedCheck_1339_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1325_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1339_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1330_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__1));
v___x_1331_ = lean_box(0);
v___x_1332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1332_, 0, v_a_1326_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1333_, 0, v_a_1323_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = l_Lean_mkConst(v___x_1330_, v___x_1333_);
v___x_1335_ = l_Lean_mkApp6(v___x_1334_, v_binderType_1318_, v___x_1321_, v___x_1313_, v___x_1314_, v_h_1275_, v_a_1276_);
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1335_);
v___x_1337_ = v___x_1328_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_a_1323_);
lean_dec_ref(v___x_1321_);
lean_dec_ref(v_binderType_1318_);
lean_dec_ref(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_h_1275_);
v_a_1340_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1325_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1325_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec_ref(v___x_1321_);
lean_dec_ref(v_binderType_1318_);
lean_dec_ref(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_h_1275_);
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
else
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v_a_1316_);
lean_dec_ref(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec_ref(v_a_1276_);
v___x_1356_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__1));
v___x_1357_ = lean_obj_once(&l_Lean_Meta_mkCongrFun___closed__3, &l_Lean_Meta_mkCongrFun___closed__3_once, _init_l_Lean_Meta_mkCongrFun___closed__3);
v___x_1358_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_1275_, v_a_1301_);
v___x_1359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1357_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
v___x_1360_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1356_, v___x_1359_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
return v___x_1360_;
}
}
else
{
lean_dec_ref(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_h_1275_);
return v___x_1315_;
}
}
}
else
{
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_h_1275_);
return v___x_1300_;
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_h_1275_);
v_a_1361_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1286_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1286_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrFun___boxed(lean_object* v_h_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lean_Meta_mkCongrFun(v_h_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_);
lean_dec(v_a_1374_);
lean_dec_ref(v_a_1373_);
lean_dec(v_a_1372_);
lean_dec_ref(v_a_1371_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongr(lean_object* v_h_u2081_1380_, lean_object* v_h_u2082_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_1388_ = l_Lean_Expr_isAppOf(v_h_u2081_1380_, v___x_1387_);
if (v___x_1388_ == 0)
{
uint8_t v___x_1389_; 
v___x_1389_ = l_Lean_Expr_isAppOf(v_h_u2082_1381_, v___x_1387_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; 
lean_inc_ref(v_h_u2081_1380_);
v___x_1390_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2081_1380_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
lean_inc_ref(v_h_u2082_1381_);
v___x_1392_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h_u2082_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1394_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_1395_ = lean_unsigned_to_nat(3u);
v___x_1396_ = l_Lean_Expr_isAppOfArity(v_a_1391_, v___x_1394_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_dec(v_a_1393_);
lean_dec_ref(v_h_u2082_1381_);
v___x_1397_ = ((lean_object*)(l_Lean_Meta_mkCongr___closed__1));
v___x_1398_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_1399_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2081_1380_, v_a_1391_);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1397_, v___x_1400_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
return v___x_1401_;
}
else
{
uint8_t v___x_1402_; 
v___x_1402_ = l_Lean_Expr_isAppOfArity(v_a_1393_, v___x_1394_, v___x_1395_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
lean_dec(v_a_1391_);
lean_dec_ref(v_h_u2081_1380_);
v___x_1403_ = ((lean_object*)(l_Lean_Meta_mkCongr___closed__1));
v___x_1404_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_1405_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2082_1381_, v_a_1393_);
v___x_1406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1404_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1403_, v___x_1406_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
return v___x_1407_;
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1408_ = l_Lean_Expr_appFn_x21(v_a_1391_);
v___x_1409_ = l_Lean_Expr_appFn_x21(v___x_1408_);
v___x_1410_ = l_Lean_Expr_appArg_x21(v___x_1409_);
lean_dec_ref(v___x_1409_);
v___x_1411_ = l_Lean_Expr_appArg_x21(v___x_1408_);
lean_dec_ref(v___x_1408_);
v___x_1412_ = l_Lean_Expr_appArg_x21(v_a_1391_);
v___x_1413_ = l_Lean_Expr_appFn_x21(v_a_1393_);
v___x_1414_ = l_Lean_Expr_appFn_x21(v___x_1413_);
v___x_1415_ = l_Lean_Expr_appArg_x21(v___x_1414_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = l_Lean_Expr_appArg_x21(v___x_1413_);
lean_dec_ref(v___x_1413_);
v___x_1417_ = l_Lean_Expr_appArg_x21(v_a_1393_);
lean_dec(v_a_1393_);
v___x_1418_ = l_Lean_Meta_whnfD(v___x_1410_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
if (lean_obj_tag(v_a_1419_) == 7)
{
lean_object* v_body_1426_; uint8_t v___x_1427_; 
v_body_1426_ = lean_ctor_get(v_a_1419_, 2);
lean_inc_ref(v_body_1426_);
lean_dec_ref_known(v_a_1419_, 3);
v___x_1427_ = l_Lean_Expr_hasLooseBVars(v_body_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; 
lean_dec(v_a_1391_);
lean_inc_ref(v___x_1415_);
v___x_1428_ = l_Lean_Meta_getLevel(v___x_1415_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1430_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
lean_inc_ref(v_body_1426_);
v___x_1430_ = l_Lean_Meta_getLevel(v_body_1426_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1444_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1444_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1444_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1435_ = ((lean_object*)(l_Lean_Meta_mkCongr___closed__1));
v___x_1436_ = lean_box(0);
v___x_1437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1437_, 0, v_a_1431_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1438_, 0, v_a_1429_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = l_Lean_mkConst(v___x_1435_, v___x_1438_);
v___x_1440_ = l_Lean_mkApp8(v___x_1439_, v___x_1415_, v_body_1426_, v___x_1411_, v___x_1412_, v___x_1416_, v___x_1417_, v_h_u2081_1380_, v_h_u2082_1381_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1440_);
v___x_1442_ = v___x_1433_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
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
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_dec(v_a_1429_);
lean_dec_ref(v_body_1426_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_h_u2082_1381_);
lean_dec_ref(v_h_u2081_1380_);
v_a_1445_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1430_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1430_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v_body_1426_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_h_u2082_1381_);
lean_dec_ref(v_h_u2081_1380_);
v_a_1453_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1428_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1428_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
lean_dec_ref(v_body_1426_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_h_u2082_1381_);
goto v___jp_1420_;
}
}
else
{
lean_dec(v_a_1419_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_h_u2082_1381_);
goto v___jp_1420_;
}
v___jp_1420_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1421_ = ((lean_object*)(l_Lean_Meta_mkCongr___closed__1));
v___x_1422_ = lean_obj_once(&l_Lean_Meta_mkCongrArg___closed__2, &l_Lean_Meta_mkCongrArg___closed__2_once, _init_l_Lean_Meta_mkCongrArg___closed__2);
v___x_1423_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_u2081_1380_, v_a_1391_);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_1421_, v___x_1424_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
return v___x_1425_;
}
}
else
{
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec(v_a_1391_);
lean_dec_ref(v_h_u2082_1381_);
lean_dec_ref(v_h_u2081_1380_);
return v___x_1418_;
}
}
}
}
else
{
lean_dec(v_a_1391_);
lean_dec_ref(v_h_u2082_1381_);
lean_dec_ref(v_h_u2081_1380_);
return v___x_1392_;
}
}
else
{
lean_dec_ref(v_h_u2082_1381_);
lean_dec_ref(v_h_u2081_1380_);
return v___x_1390_;
}
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = l_Lean_Expr_appArg_x21(v_h_u2082_1381_);
lean_dec_ref(v_h_u2082_1381_);
v___x_1462_ = l_Lean_Meta_mkCongrFun(v_h_u2081_1380_, v___x_1461_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
return v___x_1462_;
}
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = l_Lean_Expr_appArg_x21(v_h_u2081_1380_);
lean_dec_ref(v_h_u2081_1380_);
v___x_1464_ = l_Lean_Meta_mkCongrArg(v___x_1463_, v_h_u2082_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
return v___x_1464_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongr___boxed(lean_object* v_h_u2081_1465_, lean_object* v_h_u2082_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lean_Meta_mkCongr(v_h_u2081_1465_, v_h_u2082_1466_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg(lean_object* v_e_1473_, lean_object* v___y_1474_){
_start:
{
uint8_t v___x_1476_; 
v___x_1476_ = l_Lean_Expr_hasMVar(v_e_1473_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1477_, 0, v_e_1473_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; lean_object* v_mctx_1479_; lean_object* v___x_1480_; lean_object* v_fst_1481_; lean_object* v_snd_1482_; lean_object* v___x_1483_; lean_object* v_cache_1484_; lean_object* v_zetaDeltaFVarIds_1485_; lean_object* v_postponed_1486_; lean_object* v_diag_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1496_; 
v___x_1478_ = lean_st_ref_get(v___y_1474_);
v_mctx_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc_ref(v_mctx_1479_);
lean_dec(v___x_1478_);
v___x_1480_ = l_Lean_instantiateMVarsCore(v_mctx_1479_, v_e_1473_);
v_fst_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_fst_1481_);
v_snd_1482_ = lean_ctor_get(v___x_1480_, 1);
lean_inc(v_snd_1482_);
lean_dec_ref(v___x_1480_);
v___x_1483_ = lean_st_ref_take(v___y_1474_);
v_cache_1484_ = lean_ctor_get(v___x_1483_, 1);
v_zetaDeltaFVarIds_1485_ = lean_ctor_get(v___x_1483_, 2);
v_postponed_1486_ = lean_ctor_get(v___x_1483_, 3);
v_diag_1487_ = lean_ctor_get(v___x_1483_, 4);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1496_ == 0)
{
lean_object* v_unused_1497_; 
v_unused_1497_ = lean_ctor_get(v___x_1483_, 0);
lean_dec(v_unused_1497_);
v___x_1489_ = v___x_1483_;
v_isShared_1490_ = v_isSharedCheck_1496_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_diag_1487_);
lean_inc(v_postponed_1486_);
lean_inc(v_zetaDeltaFVarIds_1485_);
lean_inc(v_cache_1484_);
lean_dec(v___x_1483_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1496_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v_snd_1482_);
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_snd_1482_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_cache_1484_);
lean_ctor_set(v_reuseFailAlloc_1495_, 2, v_zetaDeltaFVarIds_1485_);
lean_ctor_set(v_reuseFailAlloc_1495_, 3, v_postponed_1486_);
lean_ctor_set(v_reuseFailAlloc_1495_, 4, v_diag_1487_);
v___x_1492_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = lean_st_ref_put(v___y_1474_, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_fst_1481_);
return v___x_1494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg___boxed(lean_object* v_e_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg(v_e_1498_, v___y_1499_);
lean_dec(v___y_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1(lean_object* v_e_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg(v_e_1502_, v___y_1504_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___boxed(lean_object* v_e_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1(v_e_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1516_, lean_object* v_x_1517_, lean_object* v_x_1518_, lean_object* v_x_1519_){
_start:
{
lean_object* v_ks_1520_; lean_object* v_vs_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1545_; 
v_ks_1520_ = lean_ctor_get(v_x_1516_, 0);
v_vs_1521_ = lean_ctor_get(v_x_1516_, 1);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1523_ = v_x_1516_;
v_isShared_1524_ = v_isSharedCheck_1545_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_vs_1521_);
lean_inc(v_ks_1520_);
lean_dec(v_x_1516_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1545_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = lean_array_get_size(v_ks_1520_);
v___x_1526_ = lean_nat_dec_lt(v_x_1517_, v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1530_; 
lean_dec(v_x_1517_);
v___x_1527_ = lean_array_push(v_ks_1520_, v_x_1518_);
v___x_1528_ = lean_array_push(v_vs_1521_, v_x_1519_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1528_);
lean_ctor_set(v___x_1523_, 0, v___x_1527_);
v___x_1530_ = v___x_1523_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___x_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
else
{
lean_object* v_k_x27_1532_; uint8_t v___x_1533_; 
v_k_x27_1532_ = lean_array_fget_borrowed(v_ks_1520_, v_x_1517_);
v___x_1533_ = l_Lean_instBEqMVarId_beq(v_x_1518_, v_k_x27_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1535_; 
if (v_isShared_1524_ == 0)
{
v___x_1535_ = v___x_1523_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_ks_1520_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_vs_1521_);
v___x_1535_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_nat_add(v_x_1517_, v___x_1536_);
lean_dec(v_x_1517_);
v_x_1516_ = v___x_1535_;
v_x_1517_ = v___x_1537_;
goto _start;
}
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v___x_1540_ = lean_array_fset(v_ks_1520_, v_x_1517_, v_x_1518_);
v___x_1541_ = lean_array_fset(v_vs_1521_, v_x_1517_, v_x_1519_);
lean_dec(v_x_1517_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1541_);
lean_ctor_set(v___x_1523_, 0, v___x_1540_);
v___x_1543_ = v___x_1523_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_1546_, lean_object* v_k_1547_, lean_object* v_v_1548_){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_unsigned_to_nat(0u);
v___x_1550_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_1546_, v___x_1549_, v_k_1547_, v_v_1548_);
return v___x_1550_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = lean_box(0);
v___x_1552_ = l_unsafeCast___redArg(v___x_1551_);
return v___x_1552_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(lean_object* v_x_1554_, size_t v_x_1555_, size_t v_x_1556_, lean_object* v_x_1557_, lean_object* v_x_1558_){
_start:
{
if (lean_obj_tag(v_x_1554_) == 0)
{
lean_object* v_es_1559_; size_t v___x_1560_; size_t v___x_1561_; lean_object* v_j_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_es_1559_ = lean_ctor_get(v_x_1554_, 0);
v___x_1560_ = ((size_t)31ULL);
v___x_1561_ = lean_usize_land(v_x_1555_, v___x_1560_);
v_j_1562_ = lean_usize_to_nat(v___x_1561_);
v___x_1563_ = lean_array_get_size(v_es_1559_);
v___x_1564_ = lean_nat_dec_lt(v_j_1562_, v___x_1563_);
if (v___x_1564_ == 0)
{
lean_dec(v_j_1562_);
lean_dec(v_x_1558_);
lean_dec(v_x_1557_);
return v_x_1554_;
}
else
{
lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1603_; 
lean_inc_ref(v_es_1559_);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_x_1554_);
if (v_isSharedCheck_1603_ == 0)
{
lean_object* v_unused_1604_; 
v_unused_1604_ = lean_ctor_get(v_x_1554_, 0);
lean_dec(v_unused_1604_);
v___x_1566_ = v_x_1554_;
v_isShared_1567_ = v_isSharedCheck_1603_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v_x_1554_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1603_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v_v_1568_; lean_object* v___x_1569_; lean_object* v_xs_x27_1570_; lean_object* v___y_1572_; 
v_v_1568_ = lean_array_fget(v_es_1559_, v_j_1562_);
v___x_1569_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__0);
v_xs_x27_1570_ = lean_array_fset(v_es_1559_, v_j_1562_, v___x_1569_);
switch(lean_obj_tag(v_v_1568_))
{
case 0:
{
lean_object* v_key_1577_; lean_object* v_val_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1588_; 
v_key_1577_ = lean_ctor_get(v_v_1568_, 0);
v_val_1578_ = lean_ctor_get(v_v_1568_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_v_1568_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1580_ = v_v_1568_;
v_isShared_1581_ = v_isSharedCheck_1588_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_val_1578_);
lean_inc(v_key_1577_);
lean_dec(v_v_1568_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1588_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
uint8_t v___x_1582_; 
v___x_1582_ = l_Lean_instBEqMVarId_beq(v_x_1557_, v_key_1577_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_del_object(v___x_1580_);
v___x_1583_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1577_, v_val_1578_, v_x_1557_, v_x_1558_);
v___x_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
v___y_1572_ = v___x_1584_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1586_; 
lean_dec(v_val_1578_);
lean_dec(v_key_1577_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 1, v_x_1558_);
lean_ctor_set(v___x_1580_, 0, v_x_1557_);
v___x_1586_ = v___x_1580_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_x_1557_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_x_1558_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
v___y_1572_ = v___x_1586_;
goto v___jp_1571_;
}
}
}
}
case 1:
{
lean_object* v_node_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1601_; 
v_node_1589_ = lean_ctor_get(v_v_1568_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_v_1568_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1591_ = v_v_1568_;
v_isShared_1592_ = v_isSharedCheck_1601_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_node_1589_);
lean_dec(v_v_1568_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1601_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
size_t v___x_1593_; size_t v___x_1594_; size_t v___x_1595_; size_t v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1599_; 
v___x_1593_ = ((size_t)5ULL);
v___x_1594_ = lean_usize_shift_right(v_x_1555_, v___x_1593_);
v___x_1595_ = ((size_t)1ULL);
v___x_1596_ = lean_usize_add(v_x_1556_, v___x_1595_);
v___x_1597_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(v_node_1589_, v___x_1594_, v___x_1596_, v_x_1557_, v_x_1558_);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v___x_1597_);
v___x_1599_ = v___x_1591_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
v___y_1572_ = v___x_1599_;
goto v___jp_1571_;
}
}
}
default: 
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v_x_1557_);
lean_ctor_set(v___x_1602_, 1, v_x_1558_);
v___y_1572_ = v___x_1602_;
goto v___jp_1571_;
}
}
v___jp_1571_:
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = lean_array_fset(v_xs_x27_1570_, v_j_1562_, v___y_1572_);
lean_dec(v_j_1562_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1573_);
v___x_1575_ = v___x_1566_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1573_);
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
}
else
{
lean_object* v_ks_1605_; lean_object* v_vs_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1624_; 
v_ks_1605_ = lean_ctor_get(v_x_1554_, 0);
v_vs_1606_ = lean_ctor_get(v_x_1554_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1554_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1608_ = v_x_1554_;
v_isShared_1609_ = v_isSharedCheck_1624_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_vs_1606_);
lean_inc(v_ks_1605_);
lean_dec(v_x_1554_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1624_;
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
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_ks_1605_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v_vs_1606_);
v___x_1611_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v_newNode_1612_; size_t v___x_1613_; uint8_t v___x_1614_; 
v_newNode_1612_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4___redArg(v___x_1611_, v_x_1557_, v_x_1558_);
v___x_1613_ = ((size_t)7ULL);
v___x_1614_ = lean_usize_dec_le(v___x_1613_, v_x_1556_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1615_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1612_);
v___x_1616_ = lean_unsigned_to_nat(4u);
v___x_1617_ = lean_nat_dec_lt(v___x_1615_, v___x_1616_);
lean_dec(v___x_1615_);
if (v___x_1617_ == 0)
{
lean_object* v_ks_1618_; lean_object* v_vs_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_ks_1618_ = lean_ctor_get(v_newNode_1612_, 0);
lean_inc_ref(v_ks_1618_);
v_vs_1619_ = lean_ctor_get(v_newNode_1612_, 1);
lean_inc_ref(v_vs_1619_);
lean_dec_ref(v_newNode_1612_);
v___x_1620_ = lean_unsigned_to_nat(0u);
v___x_1621_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1622_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg(v_x_1556_, v_ks_1618_, v_vs_1619_, v___x_1620_, v___x_1621_);
lean_dec_ref(v_vs_1619_);
lean_dec_ref(v_ks_1618_);
return v___x_1622_;
}
else
{
return v_newNode_1612_;
}
}
else
{
return v_newNode_1612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_1625_, lean_object* v_keys_1626_, lean_object* v_vals_1627_, lean_object* v_i_1628_, lean_object* v_entries_1629_){
_start:
{
lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1630_ = lean_array_get_size(v_keys_1626_);
v___x_1631_ = lean_nat_dec_lt(v_i_1628_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_dec(v_i_1628_);
return v_entries_1629_;
}
else
{
lean_object* v_k_1632_; lean_object* v_v_1633_; uint64_t v___x_1634_; size_t v_h_1635_; size_t v___x_1636_; lean_object* v___x_1637_; size_t v___x_1638_; size_t v___x_1639_; size_t v___x_1640_; size_t v_h_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_k_1632_ = lean_array_fget_borrowed(v_keys_1626_, v_i_1628_);
v_v_1633_ = lean_array_fget_borrowed(v_vals_1627_, v_i_1628_);
v___x_1634_ = l_Lean_instHashableMVarId_hash(v_k_1632_);
v_h_1635_ = lean_uint64_to_usize(v___x_1634_);
v___x_1636_ = ((size_t)5ULL);
v___x_1637_ = lean_unsigned_to_nat(1u);
v___x_1638_ = ((size_t)1ULL);
v___x_1639_ = lean_usize_sub(v_depth_1625_, v___x_1638_);
v___x_1640_ = lean_usize_mul(v___x_1636_, v___x_1639_);
v_h_1641_ = lean_usize_shift_right(v_h_1635_, v___x_1640_);
v___x_1642_ = lean_nat_add(v_i_1628_, v___x_1637_);
lean_dec(v_i_1628_);
lean_inc(v_v_1633_);
lean_inc(v_k_1632_);
v___x_1643_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(v_entries_1629_, v_h_1641_, v_depth_1625_, v_k_1632_, v_v_1633_);
v_i_1628_ = v___x_1642_;
v_entries_1629_ = v___x_1643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1645_, lean_object* v_keys_1646_, lean_object* v_vals_1647_, lean_object* v_i_1648_, lean_object* v_entries_1649_){
_start:
{
size_t v_depth_boxed_1650_; lean_object* v_res_1651_; 
v_depth_boxed_1650_ = lean_unbox_usize(v_depth_1645_);
lean_dec(v_depth_1645_);
v_res_1651_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_1650_, v_keys_1646_, v_vals_1647_, v_i_1648_, v_entries_1649_);
lean_dec_ref(v_vals_1647_);
lean_dec_ref(v_keys_1646_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v_x_1654_, lean_object* v_x_1655_, lean_object* v_x_1656_){
_start:
{
size_t v_x_1978__boxed_1657_; size_t v_x_1979__boxed_1658_; lean_object* v_res_1659_; 
v_x_1978__boxed_1657_ = lean_unbox_usize(v_x_1653_);
lean_dec(v_x_1653_);
v_x_1979__boxed_1658_ = lean_unbox_usize(v_x_1654_);
lean_dec(v_x_1654_);
v_res_1659_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(v_x_1652_, v_x_1978__boxed_1657_, v_x_1979__boxed_1658_, v_x_1655_, v_x_1656_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0___redArg(lean_object* v_x_1660_, lean_object* v_x_1661_, lean_object* v_x_1662_){
_start:
{
uint64_t v___x_1663_; size_t v___x_1664_; size_t v___x_1665_; lean_object* v___x_1666_; 
v___x_1663_ = l_Lean_instHashableMVarId_hash(v_x_1661_);
v___x_1664_ = lean_uint64_to_usize(v___x_1663_);
v___x_1665_ = ((size_t)1ULL);
v___x_1666_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(v_x_1660_, v___x_1664_, v___x_1665_, v_x_1661_, v_x_1662_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg(lean_object* v_mvarId_1667_, lean_object* v_val_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___x_1671_; lean_object* v_mctx_1672_; lean_object* v_cache_1673_; lean_object* v_zetaDeltaFVarIds_1674_; lean_object* v_postponed_1675_; lean_object* v_diag_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1705_; 
v___x_1671_ = lean_st_ref_take(v___y_1669_);
v_mctx_1672_ = lean_ctor_get(v___x_1671_, 0);
v_cache_1673_ = lean_ctor_get(v___x_1671_, 1);
v_zetaDeltaFVarIds_1674_ = lean_ctor_get(v___x_1671_, 2);
v_postponed_1675_ = lean_ctor_get(v___x_1671_, 3);
v_diag_1676_ = lean_ctor_get(v___x_1671_, 4);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1678_ = v___x_1671_;
v_isShared_1679_ = v_isSharedCheck_1705_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_diag_1676_);
lean_inc(v_postponed_1675_);
lean_inc(v_zetaDeltaFVarIds_1674_);
lean_inc(v_cache_1673_);
lean_inc(v_mctx_1672_);
lean_dec(v___x_1671_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1705_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v_depth_1680_; lean_object* v_levelAssignDepth_1681_; lean_object* v_lmvarCounter_1682_; lean_object* v_mvarCounter_1683_; lean_object* v_lDecls_1684_; lean_object* v_decls_1685_; lean_object* v_userNames_1686_; lean_object* v_lAssignment_1687_; lean_object* v_eAssignment_1688_; lean_object* v_dAssignment_1689_; lean_object* v_instanceTypedMVars_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1704_; 
v_depth_1680_ = lean_ctor_get(v_mctx_1672_, 0);
v_levelAssignDepth_1681_ = lean_ctor_get(v_mctx_1672_, 1);
v_lmvarCounter_1682_ = lean_ctor_get(v_mctx_1672_, 2);
v_mvarCounter_1683_ = lean_ctor_get(v_mctx_1672_, 3);
v_lDecls_1684_ = lean_ctor_get(v_mctx_1672_, 4);
v_decls_1685_ = lean_ctor_get(v_mctx_1672_, 5);
v_userNames_1686_ = lean_ctor_get(v_mctx_1672_, 6);
v_lAssignment_1687_ = lean_ctor_get(v_mctx_1672_, 7);
v_eAssignment_1688_ = lean_ctor_get(v_mctx_1672_, 8);
v_dAssignment_1689_ = lean_ctor_get(v_mctx_1672_, 9);
v_instanceTypedMVars_1690_ = lean_ctor_get(v_mctx_1672_, 10);
v_isSharedCheck_1704_ = !lean_is_exclusive(v_mctx_1672_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1692_ = v_mctx_1672_;
v_isShared_1693_ = v_isSharedCheck_1704_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_instanceTypedMVars_1690_);
lean_inc(v_dAssignment_1689_);
lean_inc(v_eAssignment_1688_);
lean_inc(v_lAssignment_1687_);
lean_inc(v_userNames_1686_);
lean_inc(v_decls_1685_);
lean_inc(v_lDecls_1684_);
lean_inc(v_mvarCounter_1683_);
lean_inc(v_lmvarCounter_1682_);
lean_inc(v_levelAssignDepth_1681_);
lean_inc(v_depth_1680_);
lean_dec(v_mctx_1672_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1704_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1694_ = lean_box(0);
v___x_1695_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0___redArg(v_eAssignment_1688_, v_mvarId_1667_, v_val_1668_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 8, v___x_1695_);
v___x_1697_ = v___x_1692_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_depth_1680_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v_levelAssignDepth_1681_);
lean_ctor_set(v_reuseFailAlloc_1703_, 2, v_lmvarCounter_1682_);
lean_ctor_set(v_reuseFailAlloc_1703_, 3, v_mvarCounter_1683_);
lean_ctor_set(v_reuseFailAlloc_1703_, 4, v_lDecls_1684_);
lean_ctor_set(v_reuseFailAlloc_1703_, 5, v_decls_1685_);
lean_ctor_set(v_reuseFailAlloc_1703_, 6, v_userNames_1686_);
lean_ctor_set(v_reuseFailAlloc_1703_, 7, v_lAssignment_1687_);
lean_ctor_set(v_reuseFailAlloc_1703_, 8, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1703_, 9, v_dAssignment_1689_);
lean_ctor_set(v_reuseFailAlloc_1703_, 10, v_instanceTypedMVars_1690_);
v___x_1697_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1699_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1697_);
v___x_1699_ = v___x_1678_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1697_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_cache_1673_);
lean_ctor_set(v_reuseFailAlloc_1702_, 2, v_zetaDeltaFVarIds_1674_);
lean_ctor_set(v_reuseFailAlloc_1702_, 3, v_postponed_1675_);
lean_ctor_set(v_reuseFailAlloc_1702_, 4, v_diag_1676_);
v___x_1699_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_st_ref_put(v___y_1669_, v___x_1699_);
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1694_);
return v___x_1701_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg___boxed(lean_object* v_mvarId_1706_, lean_object* v_val_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg(v_mvarId_1706_, v_val_1707_, v___y_1708_);
lean_dec(v___y_1708_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2(lean_object* v_as_1711_, size_t v_i_1712_, size_t v_stop_1713_, lean_object* v_b_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_usize_dec_eq(v_i_1712_, v_stop_1713_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_array_uget_borrowed(v_as_1711_, v_i_1712_);
lean_inc(v___x_1721_);
v___x_1722_ = l_Lean_MVarId_getDecl(v___x_1721_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v_type_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v_type_1724_ = lean_ctor_get(v_a_1723_, 2);
lean_inc_ref(v_type_1724_);
lean_dec(v_a_1723_);
v___x_1725_ = lean_box(0);
v___x_1726_ = l_Lean_Meta_synthInstance(v_type_1724_, v___x_1725_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
lean_inc(v___x_1721_);
v___x_1728_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg(v___x_1721_, v_a_1727_, v___y_1716_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; size_t v___x_1730_; size_t v___x_1731_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = ((size_t)1ULL);
v___x_1731_ = lean_usize_add(v_i_1712_, v___x_1730_);
v_i_1712_ = v___x_1731_;
v_b_1714_ = v_a_1729_;
goto _start;
}
else
{
return v___x_1728_;
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
v_a_1733_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1726_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1726_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
v_a_1741_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1722_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1722_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1746_; 
if (v_isShared_1744_ == 0)
{
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1741_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
else
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1749_, 0, v_b_1714_);
return v___x_1749_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2___boxed(lean_object* v_as_1750_, lean_object* v_i_1751_, lean_object* v_stop_1752_, lean_object* v_b_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
size_t v_i_boxed_1759_; size_t v_stop_boxed_1760_; lean_object* v_res_1761_; 
v_i_boxed_1759_ = lean_unbox_usize(v_i_1751_);
lean_dec(v_i_1751_);
v_stop_boxed_1760_ = lean_unbox_usize(v_stop_1752_);
lean_dec(v_stop_1752_);
v_res_1761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2(v_as_1750_, v_i_boxed_1759_, v_stop_boxed_1760_, v_b_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
lean_dec_ref(v_as_1750_);
return v_res_1761_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__1));
v___x_1766_ = l_Lean_MessageData_ofFormat(v___x_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(lean_object* v_methodName_1767_, lean_object* v_f_1768_, lean_object* v_args_1769_, lean_object* v_instMVars_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
lean_object* v___y_1811_; lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v___x_1822_; 
v___x_1820_ = lean_unsigned_to_nat(0u);
v___x_1821_ = lean_array_get_size(v_instMVars_1770_);
v___x_1822_ = lean_nat_dec_lt(v___x_1820_, v___x_1821_);
if (v___x_1822_ == 0)
{
goto v___jp_1776_;
}
else
{
lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = lean_box(0);
v___x_1824_ = lean_nat_dec_le(v___x_1821_, v___x_1821_);
if (v___x_1824_ == 0)
{
if (v___x_1822_ == 0)
{
goto v___jp_1776_;
}
else
{
size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
v___x_1825_ = ((size_t)0ULL);
v___x_1826_ = lean_usize_of_nat(v___x_1821_);
v___x_1827_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2(v_instMVars_1770_, v___x_1825_, v___x_1826_, v___x_1823_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
v___y_1811_ = v___x_1827_;
goto v___jp_1810_;
}
}
else
{
size_t v___x_1828_; size_t v___x_1829_; lean_object* v___x_1830_; 
v___x_1828_ = ((size_t)0ULL);
v___x_1829_ = lean_usize_of_nat(v___x_1821_);
v___x_1830_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__2(v_instMVars_1770_, v___x_1828_, v___x_1829_, v___x_1823_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
v___y_1811_ = v___x_1830_;
goto v___jp_1810_;
}
}
v___jp_1776_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v_a_1779_; lean_object* v___x_1780_; 
v___x_1777_ = l_Lean_mkAppN(v_f_1768_, v_args_1769_);
v___x_1778_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__1___redArg(v___x_1777_, v_a_1772_);
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc_n(v_a_1779_, 2);
lean_dec_ref(v___x_1778_);
v___x_1780_ = l_Lean_Meta_hasAssignableMVar(v_a_1779_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1801_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1783_ = v___x_1780_;
v_isShared_1784_ = v_isSharedCheck_1801_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1801_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
uint8_t v___x_1785_; 
v___x_1785_ = lean_unbox(v_a_1781_);
lean_dec(v_a_1781_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1787_; 
lean_dec(v_methodName_1767_);
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v_a_1779_);
v___x_1787_ = v___x_1783_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1779_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_del_object(v___x_1783_);
v___x_1789_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___closed__2);
v___x_1790_ = l_Lean_indentExpr(v_a_1779_);
v___x_1791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1789_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
v___x_1792_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v_methodName_1767_, v___x_1791_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v_a_1779_);
lean_dec(v_methodName_1767_);
v_a_1802_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1780_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1780_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
v___jp_1810_:
{
if (lean_obj_tag(v___y_1811_) == 0)
{
lean_dec_ref_known(v___y_1811_, 1);
goto v___jp_1776_;
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v_f_1768_);
lean_dec(v_methodName_1767_);
v_a_1812_ = lean_ctor_get(v___y_1811_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___y_1811_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___y_1811_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___y_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal___boxed(lean_object* v_methodName_1831_, lean_object* v_f_1832_, lean_object* v_args_1833_, lean_object* v_instMVars_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(v_methodName_1831_, v_f_1832_, v_args_1833_, v_instMVars_1834_, v_a_1835_, v_a_1836_, v_a_1837_, v_a_1838_);
lean_dec(v_a_1838_);
lean_dec_ref(v_a_1837_);
lean_dec(v_a_1836_);
lean_dec_ref(v_a_1835_);
lean_dec_ref(v_instMVars_1834_);
lean_dec_ref(v_args_1833_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0(lean_object* v_mvarId_1841_, lean_object* v_val_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___redArg(v_mvarId_1841_, v_val_1842_, v___y_1844_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0___boxed(lean_object* v_mvarId_1849_, lean_object* v_val_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0(v_mvarId_1849_, v_val_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0(lean_object* v_00_u03b2_1857_, lean_object* v_x_1858_, lean_object* v_x_1859_, lean_object* v_x_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0___redArg(v_x_1858_, v_x_1859_, v_x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1862_, lean_object* v_x_1863_, size_t v_x_1864_, size_t v_x_1865_, lean_object* v_x_1866_, lean_object* v_x_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___redArg(v_x_1863_, v_x_1864_, v_x_1865_, v_x_1866_, v_x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1869_, lean_object* v_x_1870_, lean_object* v_x_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_, lean_object* v_x_1874_){
_start:
{
size_t v_x_2420__boxed_1875_; size_t v_x_2421__boxed_1876_; lean_object* v_res_1877_; 
v_x_2420__boxed_1875_ = lean_unbox_usize(v_x_1871_);
lean_dec(v_x_1871_);
v_x_2421__boxed_1876_ = lean_unbox_usize(v_x_1872_);
lean_dec(v_x_1872_);
v_res_1877_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2(v_00_u03b2_1869_, v_x_1870_, v_x_2420__boxed_1875_, v_x_2421__boxed_1876_, v_x_1873_, v_x_1874_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1878_, lean_object* v_n_1879_, lean_object* v_k_1880_, lean_object* v_v_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4___redArg(v_n_1879_, v_k_1880_, v_v_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1883_, size_t v_depth_1884_, lean_object* v_keys_1885_, lean_object* v_vals_1886_, lean_object* v_heq_1887_, lean_object* v_i_1888_, lean_object* v_entries_1889_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_1884_, v_keys_1885_, v_vals_1886_, v_i_1888_, v_entries_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1891_, lean_object* v_depth_1892_, lean_object* v_keys_1893_, lean_object* v_vals_1894_, lean_object* v_heq_1895_, lean_object* v_i_1896_, lean_object* v_entries_1897_){
_start:
{
size_t v_depth_boxed_1898_; lean_object* v_res_1899_; 
v_depth_boxed_1898_ = lean_unbox_usize(v_depth_1892_);
lean_dec(v_depth_1892_);
v_res_1899_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_1891_, v_depth_boxed_1898_, v_keys_1893_, v_vals_1894_, v_heq_1895_, v_i_1896_, v_entries_1897_);
lean_dec_ref(v_vals_1894_);
lean_dec_ref(v_keys_1893_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1900_, lean_object* v_x_1901_, lean_object* v_x_1902_, lean_object* v_x_1903_, lean_object* v_x_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_1901_, v_x_1902_, v_x_1903_, v_x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3(void){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__2));
v___x_1911_ = l_Lean_stringToMessageData(v___x_1910_);
return v___x_1911_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__4));
v___x_1914_ = l_Lean_stringToMessageData(v___x_1913_);
return v___x_1914_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8(void){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1918_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__7));
v___x_1919_ = l_Lean_MessageData_ofFormat(v___x_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop(lean_object* v_f_1920_, lean_object* v_xs_1921_, lean_object* v_type_1922_, lean_object* v_i_1923_, lean_object* v_j_1924_, lean_object* v_args_1925_, lean_object* v_instMVars_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = lean_array_get_size(v_xs_1921_);
v___x_1933_ = lean_nat_dec_le(v___x_1932_, v_i_1923_);
if (v___x_1933_ == 0)
{
if (lean_obj_tag(v_type_1922_) == 7)
{
lean_object* v_binderName_1934_; lean_object* v_binderType_1935_; lean_object* v_body_1936_; uint8_t v_binderInfo_1937_; lean_object* v___x_1938_; lean_object* v_d_1939_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; 
v_binderName_1934_ = lean_ctor_get(v_type_1922_, 0);
lean_inc(v_binderName_1934_);
v_binderType_1935_ = lean_ctor_get(v_type_1922_, 1);
lean_inc_ref(v_binderType_1935_);
v_body_1936_ = lean_ctor_get(v_type_1922_, 2);
lean_inc_ref(v_body_1936_);
v_binderInfo_1937_ = lean_ctor_get_uint8(v_type_1922_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_1922_, 3);
v___x_1938_ = lean_array_get_size(v_args_1925_);
v_d_1939_ = lean_expr_instantiate_rev_range(v_binderType_1935_, v_j_1924_, v___x_1938_, v_args_1925_);
lean_dec_ref(v_binderType_1935_);
switch(v_binderInfo_1937_)
{
case 1:
{
v___y_1941_ = v_a_1927_;
v___y_1942_ = v_a_1928_;
v___y_1943_ = v_a_1929_;
v___y_1944_ = v_a_1930_;
goto v___jp_1940_;
}
case 2:
{
v___y_1941_ = v_a_1927_;
v___y_1942_ = v_a_1928_;
v___y_1943_ = v_a_1929_;
v___y_1944_ = v_a_1930_;
goto v___jp_1940_;
}
case 3:
{
lean_object* v___x_1951_; uint8_t v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_d_1939_);
v___x_1952_ = 1;
v___x_1953_ = l_Lean_Meta_mkFreshExprMVar(v___x_1951_, v___x_1952_, v_binderName_1934_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc_n(v_a_1954_, 2);
lean_dec_ref_known(v___x_1953_, 1);
v___x_1955_ = lean_array_push(v_args_1925_, v_a_1954_);
v___x_1956_ = l_Lean_Expr_mvarId_x21(v_a_1954_);
lean_dec(v_a_1954_);
v___x_1957_ = lean_array_push(v_instMVars_1926_, v___x_1956_);
v_type_1922_ = v_body_1936_;
v_args_1925_ = v___x_1955_;
v_instMVars_1926_ = v___x_1957_;
goto _start;
}
else
{
lean_dec_ref(v_body_1936_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
lean_dec_ref(v_f_1920_);
return v___x_1953_;
}
}
default: 
{
lean_object* v_x_1959_; lean_object* v___y_1961_; lean_object* v___x_1978_; 
lean_dec(v_binderName_1934_);
v_x_1959_ = lean_array_fget_borrowed(v_xs_1921_, v_i_1923_);
lean_inc(v_a_1930_);
lean_inc_ref(v_a_1929_);
lean_inc(v_a_1928_);
lean_inc_ref(v_a_1927_);
lean_inc(v_x_1959_);
v___x_1978_ = lean_infer_type(v_x_1959_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1980_; uint8_t v_transparency_1981_; uint8_t v___x_1982_; uint8_t v___x_1983_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v___x_1980_ = l_Lean_Meta_Context_config(v_a_1927_);
v_transparency_1981_ = lean_ctor_get_uint8(v___x_1980_, 9);
lean_dec_ref(v___x_1980_);
v___x_1982_ = 1;
v___x_1983_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1981_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_Meta_isExprDefEq(v_d_1939_, v_a_1979_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
v___y_1961_ = v___x_1984_;
goto v___jp_1960_;
}
else
{
lean_object* v_keyedConfig_1985_; uint8_t v_trackZetaDelta_1986_; lean_object* v_zetaDeltaSet_1987_; lean_object* v_lctx_1988_; lean_object* v_localInstances_1989_; lean_object* v_defEqCtx_x3f_1990_; lean_object* v_synthPendingDepth_1991_; lean_object* v_customCanUnfoldPredicate_x3f_1992_; uint8_t v_univApprox_1993_; uint8_t v_inTypeClassResolution_1994_; uint8_t v_cacheInferType_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v_keyedConfig_1985_ = lean_ctor_get(v_a_1927_, 0);
v_trackZetaDelta_1986_ = lean_ctor_get_uint8(v_a_1927_, sizeof(void*)*7);
v_zetaDeltaSet_1987_ = lean_ctor_get(v_a_1927_, 1);
v_lctx_1988_ = lean_ctor_get(v_a_1927_, 2);
v_localInstances_1989_ = lean_ctor_get(v_a_1927_, 3);
v_defEqCtx_x3f_1990_ = lean_ctor_get(v_a_1927_, 4);
v_synthPendingDepth_1991_ = lean_ctor_get(v_a_1927_, 5);
v_customCanUnfoldPredicate_x3f_1992_ = lean_ctor_get(v_a_1927_, 6);
v_univApprox_1993_ = lean_ctor_get_uint8(v_a_1927_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1994_ = lean_ctor_get_uint8(v_a_1927_, sizeof(void*)*7 + 2);
v_cacheInferType_1995_ = lean_ctor_get_uint8(v_a_1927_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1985_);
v___x_1996_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1982_, v_keyedConfig_1985_);
lean_inc(v_customCanUnfoldPredicate_x3f_1992_);
lean_inc(v_synthPendingDepth_1991_);
lean_inc(v_defEqCtx_x3f_1990_);
lean_inc_ref(v_localInstances_1989_);
lean_inc_ref(v_lctx_1988_);
lean_inc(v_zetaDeltaSet_1987_);
v___x_1997_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
lean_ctor_set(v___x_1997_, 1, v_zetaDeltaSet_1987_);
lean_ctor_set(v___x_1997_, 2, v_lctx_1988_);
lean_ctor_set(v___x_1997_, 3, v_localInstances_1989_);
lean_ctor_set(v___x_1997_, 4, v_defEqCtx_x3f_1990_);
lean_ctor_set(v___x_1997_, 5, v_synthPendingDepth_1991_);
lean_ctor_set(v___x_1997_, 6, v_customCanUnfoldPredicate_x3f_1992_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*7, v_trackZetaDelta_1986_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*7 + 1, v_univApprox_1993_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1994_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*7 + 3, v_cacheInferType_1995_);
v___x_1998_ = l_Lean_Meta_isExprDefEq(v_d_1939_, v_a_1979_, v___x_1997_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec_ref_known(v___x_1997_, 7);
v___y_1961_ = v___x_1998_;
goto v___jp_1960_;
}
}
else
{
lean_dec_ref(v_d_1939_);
lean_dec_ref(v_body_1936_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
lean_dec_ref(v_f_1920_);
return v___x_1978_;
}
v___jp_1960_:
{
if (lean_obj_tag(v___y_1961_) == 0)
{
lean_object* v_a_1962_; uint8_t v___x_1963_; 
v_a_1962_ = lean_ctor_get(v___y_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___y_1961_, 1);
v___x_1963_ = lean_unbox(v_a_1962_);
lean_dec(v_a_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
lean_dec_ref(v_body_1936_);
lean_dec_ref(v_instMVars_1926_);
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
v___x_1964_ = l_Lean_mkAppN(v_f_1920_, v_args_1925_);
lean_dec_ref(v_args_1925_);
lean_inc(v_x_1959_);
v___x_1965_ = l_Lean_Meta_throwAppTypeMismatch___redArg(v___x_1964_, v_x_1959_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_unsigned_to_nat(1u);
v___x_1967_ = lean_nat_add(v_i_1923_, v___x_1966_);
lean_dec(v_i_1923_);
lean_inc(v_x_1959_);
v___x_1968_ = lean_array_push(v_args_1925_, v_x_1959_);
v_type_1922_ = v_body_1936_;
v_i_1923_ = v___x_1967_;
v_args_1925_ = v___x_1968_;
goto _start;
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec_ref(v_body_1936_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
lean_dec_ref(v_f_1920_);
v_a_1970_ = lean_ctor_get(v___y_1961_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___y_1961_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___y_1961_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___y_1961_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
}
}
v___jp_1940_:
{
lean_object* v___x_1945_; uint8_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_d_1939_);
v___x_1946_ = 0;
v___x_1947_ = l_Lean_Meta_mkFreshExprMVar(v___x_1945_, v___x_1946_, v_binderName_1934_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v___x_1949_ = lean_array_push(v_args_1925_, v_a_1948_);
v_type_1922_ = v_body_1936_;
v_args_1925_ = v___x_1949_;
v_a_1927_ = v___y_1941_;
v_a_1928_ = v___y_1942_;
v_a_1929_ = v___y_1943_;
v_a_1930_ = v___y_1944_;
goto _start;
}
else
{
lean_dec_ref(v_body_1936_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
lean_dec_ref(v_f_1920_);
return v___x_1947_;
}
}
}
else
{
lean_object* v___x_1999_; lean_object* v_type_2000_; lean_object* v___x_2001_; 
v___x_1999_ = lean_array_get_size(v_args_1925_);
v_type_2000_ = lean_expr_instantiate_rev_range(v_type_1922_, v_j_1924_, v___x_1999_, v_args_1925_);
lean_dec(v_j_1924_);
lean_dec_ref(v_type_1922_);
v___x_2001_ = l_Lean_Meta_whnfD(v_type_2000_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; uint8_t v___x_2003_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_2001_, 1);
v___x_2003_ = l_Lean_Expr_isForall(v_a_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
lean_dec(v_a_2002_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_i_1923_);
v___x_2004_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__1));
v___x_2005_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__3);
v___x_2006_ = l_Lean_indentExpr(v_f_1920_);
v___x_2007_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2005_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
v___x_2008_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__5);
v___x_2009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
v___x_2010_ = lean_unsigned_to_nat(0u);
v___x_2011_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8);
v___x_2012_ = l_Lean_MessageData_arrayExpr_toMessageData(v_xs_1921_, v___x_2010_, v___x_2011_);
v___x_2013_ = l_Lean_indentD(v___x_2012_);
v___x_2014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2009_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_2004_, v___x_2014_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
return v___x_2015_;
}
else
{
v_type_1922_ = v_a_2002_;
v_j_1924_ = v___x_1999_;
goto _start;
}
}
else
{
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
lean_dec(v_i_1923_);
lean_dec_ref(v_f_1920_);
return v___x_2001_;
}
}
}
else
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_dec(v_j_1924_);
lean_dec(v_i_1923_);
lean_dec_ref(v_type_1922_);
v___x_2017_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__1));
v___x_2018_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(v___x_2017_, v_f_1920_, v_args_1925_, v_instMVars_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec_ref(v_instMVars_1926_);
lean_dec_ref(v_args_1925_);
return v___x_2018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___boxed(lean_object* v_f_2019_, lean_object* v_xs_2020_, lean_object* v_type_2021_, lean_object* v_i_2022_, lean_object* v_j_2023_, lean_object* v_args_2024_, lean_object* v_instMVars_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop(v_f_2019_, v_xs_2020_, v_type_2021_, v_i_2022_, v_j_2023_, v_args_2024_, v_instMVars_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_);
lean_dec(v_a_2029_);
lean_dec_ref(v_a_2028_);
lean_dec(v_a_2027_);
lean_dec_ref(v_a_2026_);
lean_dec_ref(v_xs_2020_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs(lean_object* v_f_2034_, lean_object* v_fType_2035_, lean_object* v_xs_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2042_ = lean_unsigned_to_nat(0u);
v___x_2043_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0));
v___x_2044_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop(v_f_2034_, v_xs_2036_, v_fType_2035_, v___x_2042_, v___x_2042_, v___x_2043_, v___x_2043_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___boxed(lean_object* v_f_2045_, lean_object* v_fType_2046_, lean_object* v_xs_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs(v_f_2045_, v_fType_2046_, v_xs_2047_, v_a_2048_, v_a_2049_, v_a_2050_, v_a_2051_);
lean_dec(v_a_2051_);
lean_dec_ref(v_a_2050_);
lean_dec(v_a_2049_);
lean_dec_ref(v_a_2048_);
lean_dec_ref(v_xs_2047_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1(lean_object* v_x_2054_, lean_object* v_x_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
if (lean_obj_tag(v_x_2054_) == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = l_List_reverse___redArg(v_x_2055_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
else
{
lean_object* v_tail_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2081_; 
v_tail_2063_ = lean_ctor_get(v_x_2054_, 1);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_x_2054_);
if (v_isSharedCheck_2081_ == 0)
{
lean_object* v_unused_2082_; 
v_unused_2082_ = lean_ctor_get(v_x_2054_, 0);
lean_dec(v_unused_2082_);
v___x_2065_ = v_x_2054_;
v_isShared_2066_ = v_isSharedCheck_2081_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_tail_2063_);
lean_dec(v_x_2054_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2081_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; 
v___x_2067_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2070_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_a_2068_);
lean_dec_ref_known(v___x_2067_, 1);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 1, v_x_2055_);
lean_ctor_set(v___x_2065_, 0, v_a_2068_);
v___x_2070_ = v___x_2065_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2068_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_x_2055_);
v___x_2070_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
v_x_2054_ = v_tail_2063_;
v_x_2055_ = v___x_2070_;
goto _start;
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_del_object(v___x_2065_);
lean_dec(v_tail_2063_);
lean_dec(v_x_2055_);
v_a_2073_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2067_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2067_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1___boxed(lean_object* v_x_2083_, lean_object* v_x_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1(v_x_2083_, v_x_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
return v_res_2090_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2091_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2094_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_2095_ = lean_unsigned_to_nat(0u);
v___x_2096_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
lean_ctor_set(v___x_2096_, 2, v___x_2095_);
lean_ctor_set(v___x_2096_, 3, v___x_2095_);
lean_ctor_set(v___x_2096_, 4, v___x_2094_);
lean_ctor_set(v___x_2096_, 5, v___x_2094_);
lean_ctor_set(v___x_2096_, 6, v___x_2094_);
lean_ctor_set(v___x_2096_, 7, v___x_2094_);
lean_ctor_set(v___x_2096_, 8, v___x_2094_);
lean_ctor_set(v___x_2096_, 9, v___x_2094_);
lean_ctor_set(v___x_2096_, 10, v___x_2094_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2097_ = lean_unsigned_to_nat(32u);
v___x_2098_ = lean_mk_empty_array_with_capacity(v___x_2097_);
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2100_ = ((size_t)5ULL);
v___x_2101_ = lean_unsigned_to_nat(0u);
v___x_2102_ = lean_unsigned_to_nat(32u);
v___x_2103_ = lean_mk_empty_array_with_capacity(v___x_2102_);
v___x_2104_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_2105_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
lean_ctor_set(v___x_2105_, 1, v___x_2103_);
lean_ctor_set(v___x_2105_, 2, v___x_2101_);
lean_ctor_set(v___x_2105_, 3, v___x_2101_);
lean_ctor_set_usize(v___x_2105_, 4, v___x_2100_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2106_ = lean_box(1);
v___x_2107_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4);
v___x_2108_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_2109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
lean_ctor_set(v___x_2109_, 1, v___x_2107_);
lean_ctor_set(v___x_2109_, 2, v___x_2106_);
return v___x_2109_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6));
v___x_2112_ = l_Lean_stringToMessageData(v___x_2111_);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8));
v___x_2115_ = l_Lean_stringToMessageData(v___x_2114_);
return v___x_2115_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10));
v___x_2118_ = l_Lean_stringToMessageData(v___x_2117_);
return v___x_2118_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12));
v___x_2121_ = l_Lean_stringToMessageData(v___x_2120_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__14));
v___x_2124_ = l_Lean_stringToMessageData(v___x_2123_);
return v___x_2124_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2126_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__16));
v___x_2127_ = l_Lean_stringToMessageData(v___x_2126_);
return v___x_2127_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__18));
v___x_2130_ = l_Lean_stringToMessageData(v___x_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_2131_, lean_object* v_declHint_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v_env_2137_; uint8_t v___x_2138_; 
v___x_2135_ = l_Lean_instInhabitedName;
v___x_2136_ = lean_st_ref_get(v___y_2133_);
v_env_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc_ref(v_env_2137_);
lean_dec(v___x_2136_);
v___x_2138_ = l_Lean_Name_isAnonymous(v_declHint_2132_);
if (v___x_2138_ == 0)
{
uint8_t v_isExporting_2139_; 
v_isExporting_2139_ = lean_ctor_get_uint8(v_env_2137_, sizeof(void*)*8);
if (v_isExporting_2139_ == 0)
{
lean_object* v___x_2140_; 
lean_dec_ref(v_env_2137_);
lean_dec(v_declHint_2132_);
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v_msg_2131_);
return v___x_2140_;
}
else
{
lean_object* v___x_2141_; uint8_t v___x_2142_; 
lean_inc_ref(v_env_2137_);
v___x_2141_ = l_Lean_Environment_setExporting(v_env_2137_, v___x_2138_);
lean_inc(v_declHint_2132_);
lean_inc_ref(v___x_2141_);
v___x_2142_ = l_Lean_Environment_contains(v___x_2141_, v_declHint_2132_, v_isExporting_2139_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2143_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v_env_2137_);
lean_dec(v_declHint_2132_);
v___x_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2143_, 0, v_msg_2131_);
return v___x_2143_;
}
else
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v_c_2149_; lean_object* v___x_2150_; 
v___x_2144_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2);
v___x_2145_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_2146_ = l_Lean_Options_empty;
v___x_2147_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2141_);
lean_ctor_set(v___x_2147_, 1, v___x_2144_);
lean_ctor_set(v___x_2147_, 2, v___x_2145_);
lean_ctor_set(v___x_2147_, 3, v___x_2146_);
lean_inc(v_declHint_2132_);
v___x_2148_ = l_Lean_MessageData_ofConstName(v_declHint_2132_, v___x_2138_);
v_c_2149_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2149_, 0, v___x_2147_);
lean_ctor_set(v_c_2149_, 1, v___x_2148_);
v___x_2150_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2137_, v_declHint_2132_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
lean_dec_ref(v_env_2137_);
lean_dec(v_declHint_2132_);
v___x_2151_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_2152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
lean_ctor_set(v___x_2152_, 1, v_c_2149_);
v___x_2153_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_2154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2152_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
v___x_2155_ = l_Lean_MessageData_note(v___x_2154_);
v___x_2156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2156_, 0, v_msg_2131_);
lean_ctor_set(v___x_2156_, 1, v___x_2155_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
return v___x_2157_;
}
else
{
lean_object* v_val_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2192_; 
v_val_2158_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2160_ = v___x_2150_;
v_isShared_2161_ = v_isSharedCheck_2192_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_val_2158_);
lean_dec(v___x_2150_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2192_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v_mod_2164_; uint8_t v___x_2165_; 
v___x_2162_ = l_Lean_Environment_header(v_env_2137_);
lean_dec_ref(v_env_2137_);
v___x_2163_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2162_);
lean_dec_ref(v___x_2162_);
v_mod_2164_ = lean_array_get(v___x_2135_, v___x_2163_, v_val_2158_);
lean_dec(v_val_2158_);
lean_dec_ref(v___x_2163_);
v___x_2165_ = l_Lean_isPrivateName(v_declHint_2132_);
lean_dec(v_declHint_2132_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2177_; 
v___x_2166_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_2167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v_c_2149_);
v___x_2168_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2167_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = l_Lean_MessageData_ofName(v_mod_2164_);
v___x_2171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__15);
v___x_2173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = l_Lean_MessageData_note(v___x_2173_);
v___x_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2175_, 0, v_msg_2131_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2175_);
v___x_2177_ = v___x_2160_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2175_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2179_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_2180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v_c_2149_);
v___x_2181_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__17);
v___x_2182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2180_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = l_Lean_MessageData_ofName(v_mod_2164_);
v___x_2184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2182_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__19);
v___x_2186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2184_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = l_Lean_MessageData_note(v___x_2186_);
v___x_2188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2188_, 0, v_msg_2131_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2188_);
v___x_2190_ = v___x_2160_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2193_; 
lean_dec_ref(v_env_2137_);
lean_dec(v_declHint_2132_);
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v_msg_2131_);
return v___x_2193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_2194_, lean_object* v_declHint_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_2194_, v_declHint_2195_, v___y_2196_);
lean_dec(v___y_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_msg_2199_, lean_object* v_declHint_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___x_2206_; lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2216_; 
v___x_2206_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_2199_, v_declHint_2200_, v___y_2204_);
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2209_ = v___x_2206_;
v_isShared_2210_ = v_isSharedCheck_2216_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2206_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2216_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2214_; 
v___x_2211_ = l_Lean_unknownIdentifierMessageTag;
v___x_2212_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
lean_ctor_set(v___x_2212_, 1, v_a_2207_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 0, v___x_2212_);
v___x_2214_ = v___x_2209_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_msg_2217_, lean_object* v_declHint_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4(v_msg_2217_, v_declHint_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_ref_2225_, lean_object* v_msg_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v_toCold_2232_; lean_object* v_currRecDepth_2233_; lean_object* v_ref_2234_; uint8_t v_diag_2235_; uint8_t v_suppressElabErrors_2236_; lean_object* v_ref_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_toCold_2232_ = lean_ctor_get(v___y_2229_, 0);
v_currRecDepth_2233_ = lean_ctor_get(v___y_2229_, 1);
v_ref_2234_ = lean_ctor_get(v___y_2229_, 2);
v_diag_2235_ = lean_ctor_get_uint8(v___y_2229_, sizeof(void*)*3);
v_suppressElabErrors_2236_ = lean_ctor_get_uint8(v___y_2229_, sizeof(void*)*3 + 1);
v_ref_2237_ = l_Lean_replaceRef(v_ref_2225_, v_ref_2234_);
lean_inc(v_currRecDepth_2233_);
lean_inc_ref(v_toCold_2232_);
v___x_2238_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2238_, 0, v_toCold_2232_);
lean_ctor_set(v___x_2238_, 1, v_currRecDepth_2233_);
lean_ctor_set(v___x_2238_, 2, v_ref_2237_);
lean_ctor_set_uint8(v___x_2238_, sizeof(void*)*3, v_diag_2235_);
lean_ctor_set_uint8(v___x_2238_, sizeof(void*)*3 + 1, v_suppressElabErrors_2236_);
v___x_2239_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v_msg_2226_, v___y_2227_, v___y_2228_, v___x_2238_, v___y_2230_);
lean_dec_ref_known(v___x_2238_, 3);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_ref_2240_, lean_object* v_msg_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_2240_, v_msg_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v_ref_2240_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_ref_2248_, lean_object* v_msg_2249_, lean_object* v_declHint_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v_a_2257_; lean_object* v___x_2258_; 
v___x_2256_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4(v_msg_2249_, v_declHint_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref(v___x_2256_);
v___x_2258_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_2248_, v_a_2257_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_ref_2259_, lean_object* v_msg_2260_, lean_object* v_declHint_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_2259_, v_msg_2260_, v_declHint_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v_ref_2259_);
return v_res_2267_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_2270_ = l_Lean_stringToMessageData(v___x_2269_);
return v___x_2270_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_2273_ = l_Lean_stringToMessageData(v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2274_, lean_object* v_constName_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v___x_2281_; uint8_t v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2281_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2282_ = 0;
lean_inc(v_constName_2275_);
v___x_2283_ = l_Lean_MessageData_ofConstName(v_constName_2275_, v___x_2282_);
v___x_2284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2281_);
lean_ctor_set(v___x_2284_, 1, v___x_2283_);
v___x_2285_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_2286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_2274_, v___x_2286_, v_constName_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2288_, lean_object* v_constName_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg(v_ref_2288_, v_constName_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v_ref_2288_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg(lean_object* v_constName_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_ref_2302_; lean_object* v___x_2303_; 
v_ref_2302_ = lean_ctor_get(v___y_2299_, 2);
v___x_2303_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg(v_ref_2302_, v_constName_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg(v_constName_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0(lean_object* v_constName_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v___x_2317_; lean_object* v_env_2318_; uint8_t v___x_2319_; lean_object* v___x_2320_; 
v___x_2317_ = lean_st_ref_get(v___y_2315_);
v_env_2318_ = lean_ctor_get(v___x_2317_, 0);
lean_inc_ref(v_env_2318_);
lean_dec(v___x_2317_);
v___x_2319_ = 0;
lean_inc(v_constName_2311_);
v___x_2320_ = l_Lean_Environment_findConstVal_x3f(v_env_2318_, v_constName_2311_, v___x_2319_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg(v_constName_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
return v___x_2321_;
}
else
{
lean_object* v_val_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec(v_constName_2311_);
v_val_2322_ = lean_ctor_get(v___x_2320_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2320_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2320_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_val_2322_);
lean_dec(v___x_2320_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
lean_ctor_set_tag(v___x_2324_, 0);
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_val_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0___boxed(lean_object* v_constName_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0(v_constName_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun(lean_object* v_constName_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v___x_2343_; 
lean_inc(v_constName_2337_);
v___x_2343_ = l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0(v_constName_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v_levelParams_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v_levelParams_2345_ = lean_ctor_get(v_a_2344_, 1);
v___x_2346_ = lean_box(0);
lean_inc(v_levelParams_2345_);
v___x_2347_ = l_List_mapM_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__1(v_levelParams_2345_, v___x_2346_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc_n(v_a_2348_, 2);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2349_ = l_Lean_mkConst(v_constName_2337_, v_a_2348_);
v___x_2350_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_2344_, v_a_2348_, v_a_2341_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2359_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2353_ = v___x_2350_;
v_isShared_2354_ = v_isSharedCheck_2359_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2350_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2359_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2349_);
lean_ctor_set(v___x_2355_, 1, v_a_2351_);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2355_);
v___x_2357_ = v___x_2353_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec_ref(v___x_2349_);
v_a_2360_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2350_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2350_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2344_);
lean_dec(v_constName_2337_);
v_a_2368_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2347_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2347_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec(v_constName_2337_);
v_a_2376_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2343_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2343_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___boxed(lean_object* v_constName_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun(v_constName_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
lean_dec(v_a_2388_);
lean_dec_ref(v_a_2387_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0(lean_object* v_00_u03b1_2391_, lean_object* v_constName_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___redArg(v_constName_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2399_, lean_object* v_constName_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0(v_00_u03b1_2399_, v_constName_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2407_, lean_object* v_ref_2408_, lean_object* v_constName_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___redArg(v_ref_2408_, v_constName_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2416_, lean_object* v_ref_2417_, lean_object* v_constName_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1(v_00_u03b1_2416_, v_ref_2417_, v_constName_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v_ref_2417_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_2425_, lean_object* v_ref_2426_, lean_object* v_msg_2427_, lean_object* v_declHint_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_2426_, v_msg_2427_, v_declHint_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2435_, lean_object* v_ref_2436_, lean_object* v_msg_2437_, lean_object* v_declHint_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_2435_, v_ref_2436_, v_msg_2437_, v_declHint_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v_ref_2436_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object* v_msg_2445_, lean_object* v_declHint_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_2445_, v_declHint_2446_, v___y_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_2453_, lean_object* v_declHint_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(v_msg_2453_, v_declHint_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b1_2461_, lean_object* v_ref_2462_, lean_object* v_msg_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v___x_2469_; 
v___x_2469_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_2462_, v_msg_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2470_, lean_object* v_ref_2471_, lean_object* v_msg_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03b1_2470_, v_ref_2471_, v_msg_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec(v_ref_2471_);
return v_res_2478_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__0));
v___x_2481_ = l_Lean_stringToMessageData(v___x_2480_);
return v___x_2481_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__2));
v___x_2484_ = l_Lean_stringToMessageData(v___x_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0(lean_object* v_inst_2485_, lean_object* v_f_2486_, lean_object* v_inst_2487_, lean_object* v_xs_2488_, lean_object* v_x_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2495_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1);
v___x_2496_ = lean_apply_1(v_inst_2485_, v_f_2486_);
v___x_2497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2495_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3);
v___x_2499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2497_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = lean_apply_1(v_inst_2487_, v_xs_2488_);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___boxed(lean_object* v_inst_2503_, lean_object* v_f_2504_, lean_object* v_inst_2505_, lean_object* v_xs_2506_, lean_object* v_x_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0(v_inst_2503_, v_f_2504_, v_inst_2505_, v_xs_2506_, v_x_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec_ref(v_x_2507_);
return v_res_2513_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0(void){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l_instMonadEIO___redArg();
return v___x_2514_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__0);
v___x_2516_ = l_StateRefT_x27_instMonad___redArg(v___x_2515_);
return v___x_2516_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = l_Lean_Core_instMonadTraceCoreM;
v___x_2524_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__7));
v___x_2525_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2524_, v___x_2523_);
return v___x_2525_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9(void){
_start:
{
lean_object* v___x_2526_; lean_object* v___f_2527_; lean_object* v___x_2528_; 
v___x_2526_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__8);
v___f_2527_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__6));
v___x_2528_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2527_, v___x_2526_);
return v___x_2528_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2531_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2532_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__7));
v___x_2533_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__11));
v___x_2534_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2533_, v___x_2532_, v___x_2531_);
return v___x_2534_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___f_2536_; lean_object* v___f_2537_; lean_object* v___x_2538_; 
v___x_2535_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__12);
v___f_2536_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__6));
v___f_2537_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__10));
v___x_2538_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2537_, v___f_2536_, v___x_2535_);
return v___x_2538_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14(void){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_instMonadExceptOfEIO___redArg();
return v___x_2539_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15(void){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__14);
v___x_2541_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_2540_);
return v___x_2541_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__15);
v___x_2543_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_2542_);
return v___x_2543_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__16);
v___x_2545_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_2544_);
return v___x_2545_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__17);
v___x_2547_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_2546_);
return v___x_2547_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2558_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_2559_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24));
v___x_2560_ = l_Lean_Name_append(v___x_2559_, v___x_2558_);
return v___x_2560_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29(void){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2566_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_2567_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24));
v___x_2568_ = l_Lean_Name_append(v___x_2567_, v___x_2566_);
return v___x_2568_;
}
}
static double _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30(void){
_start:
{
lean_object* v___x_2569_; double v___x_2570_; 
v___x_2569_ = lean_unsigned_to_nat(1000000000u);
v___x_2570_ = lean_float_of_nat(v___x_2569_);
return v___x_2570_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33(void){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2576_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_2577_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__24));
v___x_2578_ = l_Lean_Name_append(v___x_2577_, v___x_2576_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg(lean_object* v_inst_2579_, lean_object* v_inst_2580_, lean_object* v_f_2581_, lean_object* v_xs_2582_, lean_object* v_k_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_){
_start:
{
lean_object* v___x_2589_; lean_object* v_toApplicative_2590_; lean_object* v_toFunctor_2591_; lean_object* v_toSeq_2592_; lean_object* v_toSeqLeft_2593_; lean_object* v_toSeqRight_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___f_2597_; lean_object* v___f_2598_; lean_object* v___x_2599_; lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___f_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v_toApplicative_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2845_; 
v___x_2589_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__1);
v_toApplicative_2590_ = lean_ctor_get(v___x_2589_, 0);
v_toFunctor_2591_ = lean_ctor_get(v_toApplicative_2590_, 0);
v_toSeq_2592_ = lean_ctor_get(v_toApplicative_2590_, 2);
v_toSeqLeft_2593_ = lean_ctor_get(v_toApplicative_2590_, 3);
v_toSeqRight_2594_ = lean_ctor_get(v_toApplicative_2590_, 4);
v___f_2595_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__2));
v___f_2596_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2591_, 2);
v___f_2597_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2597_, 0, v_toFunctor_2591_);
v___f_2598_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2598_, 0, v_toFunctor_2591_);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___f_2597_);
lean_ctor_set(v___x_2599_, 1, v___f_2598_);
lean_inc(v_toSeqRight_2594_);
v___f_2600_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2600_, 0, v_toSeqRight_2594_);
lean_inc(v_toSeqLeft_2593_);
v___f_2601_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2601_, 0, v_toSeqLeft_2593_);
lean_inc(v_toSeq_2592_);
v___f_2602_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2602_, 0, v_toSeq_2592_);
v___x_2603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2599_);
lean_ctor_set(v___x_2603_, 1, v___f_2595_);
lean_ctor_set(v___x_2603_, 2, v___f_2602_);
lean_ctor_set(v___x_2603_, 3, v___f_2601_);
lean_ctor_set(v___x_2603_, 4, v___f_2600_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v___f_2596_);
v___x_2605_ = l_StateRefT_x27_instMonad___redArg(v___x_2604_);
v_toApplicative_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2845_ == 0)
{
lean_object* v_unused_2846_; 
v_unused_2846_ = lean_ctor_get(v___x_2605_, 1);
lean_dec(v_unused_2846_);
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2845_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_toApplicative_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2845_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_toFunctor_2610_; lean_object* v_toSeq_2611_; lean_object* v_toSeqLeft_2612_; lean_object* v_toSeqRight_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2843_; 
v_toFunctor_2610_ = lean_ctor_get(v_toApplicative_2606_, 0);
v_toSeq_2611_ = lean_ctor_get(v_toApplicative_2606_, 2);
v_toSeqLeft_2612_ = lean_ctor_get(v_toApplicative_2606_, 3);
v_toSeqRight_2613_ = lean_ctor_get(v_toApplicative_2606_, 4);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_toApplicative_2606_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; 
v_unused_2844_ = lean_ctor_get(v_toApplicative_2606_, 1);
lean_dec(v_unused_2844_);
v___x_2615_ = v_toApplicative_2606_;
v_isShared_2616_ = v_isSharedCheck_2843_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_toSeqRight_2613_);
lean_inc(v_toSeqLeft_2612_);
lean_inc(v_toSeq_2611_);
lean_inc(v_toFunctor_2610_);
lean_dec(v_toApplicative_2606_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2843_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___f_2617_; lean_object* v___f_2618_; lean_object* v___f_2619_; lean_object* v___f_2620_; lean_object* v___x_2621_; lean_object* v___f_2622_; lean_object* v___f_2623_; lean_object* v___f_2624_; lean_object* v___x_2626_; 
v___f_2617_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__4));
v___f_2618_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__5));
lean_inc_ref(v_toFunctor_2610_);
v___f_2619_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2619_, 0, v_toFunctor_2610_);
v___f_2620_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2620_, 0, v_toFunctor_2610_);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___f_2619_);
lean_ctor_set(v___x_2621_, 1, v___f_2620_);
v___f_2622_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2622_, 0, v_toSeqRight_2613_);
v___f_2623_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2623_, 0, v_toSeqLeft_2612_);
v___f_2624_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2624_, 0, v_toSeq_2611_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 4, v___f_2622_);
lean_ctor_set(v___x_2615_, 3, v___f_2623_);
lean_ctor_set(v___x_2615_, 2, v___f_2624_);
lean_ctor_set(v___x_2615_, 1, v___f_2617_);
lean_ctor_set(v___x_2615_, 0, v___x_2621_);
v___x_2626_ = v___x_2615_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v___f_2617_);
lean_ctor_set(v_reuseFailAlloc_2842_, 2, v___f_2624_);
lean_ctor_set(v_reuseFailAlloc_2842_, 3, v___f_2623_);
lean_ctor_set(v_reuseFailAlloc_2842_, 4, v___f_2622_);
v___x_2626_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2628_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___f_2618_);
lean_ctor_set(v___x_2608_, 0, v___x_2626_);
v___x_2628_ = v___x_2608_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v___f_2618_);
v___x_2628_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v_toMonadRef_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v_toCold_2634_; lean_object* v_options_2635_; uint8_t v_hasTrace_2636_; 
v___x_2629_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__9);
v___x_2630_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__13);
v_toMonadRef_2631_ = lean_ctor_get(v___x_2630_, 0);
v___x_2632_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__18);
v___x_2633_ = l_Lean_KVMap_instValueBool;
v_toCold_2634_ = lean_ctor_get(v_a_2586_, 0);
v_options_2635_ = lean_ctor_get(v_toCold_2634_, 2);
v_hasTrace_2636_ = lean_ctor_get_uint8(v_options_2635_, sizeof(void*)*1);
if (v_hasTrace_2636_ == 0)
{
lean_object* v___x_2637_; 
lean_dec_ref(v___x_2628_);
lean_dec(v_xs_2582_);
lean_dec(v_f_2581_);
lean_dec_ref(v_inst_2580_);
lean_dec_ref(v_inst_2579_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2637_ = lean_apply_5(v_k_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2637_) == 0)
{
return v___x_2637_;
}
else
{
lean_object* v_a_2638_; uint8_t v___y_2640_; uint8_t v___x_2649_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
v___x_2649_ = l_Lean_Exception_isInterrupt(v_a_2638_);
if (v___x_2649_ == 0)
{
uint8_t v___x_2650_; 
lean_inc(v_a_2638_);
v___x_2650_ = l_Lean_Exception_isRuntime(v_a_2638_);
v___y_2640_ = v___x_2650_;
goto v___jp_2639_;
}
else
{
v___y_2640_ = v___x_2649_;
goto v___jp_2639_;
}
v___jp_2639_:
{
if (v___y_2640_ == 0)
{
lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2647_ == 0)
{
lean_object* v_unused_2648_; 
v_unused_2648_ = lean_ctor_get(v___x_2637_, 0);
lean_dec(v_unused_2648_);
v___x_2642_ = v___x_2637_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_dec(v___x_2637_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2638_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
else
{
lean_dec(v_a_2638_);
return v___x_2637_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_2651_; lean_object* v___x_2652_; lean_object* v___y_2654_; lean_object* v___y_2655_; uint8_t v___y_2656_; lean_object* v___y_2681_; lean_object* v_a_2682_; lean_object* v___f_2685_; lean_object* v___f_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v_a_2694_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v_a_2710_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; uint8_t v___y_2716_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v_a_2727_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v_a_2733_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v_a_2738_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v_a_2751_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; uint8_t v___y_2757_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v_a_2768_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v_a_2774_; 
v_inheritedTraceOptions_2651_ = lean_ctor_get(v_toCold_2634_, 11);
v___x_2652_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2685_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2685_, 0, v_inst_2579_);
lean_closure_set(v___f_2685_, 1, v_f_2581_);
lean_closure_set(v___f_2685_, 2, v_inst_2580_);
lean_closure_set(v___f_2685_, 3, v_xs_2582_);
v___f_2686_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__26));
v___x_2687_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_2688_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_2689_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29);
v___x_2690_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2689_);
if (v___x_2690_ == 0)
{
lean_object* v___x_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2813_ = l_Lean_trace_profiler;
v___x_2814_ = l_Lean_Option_get___redArg(v___x_2633_, v_options_2635_, v___x_2813_);
v___x_2815_ = lean_unbox(v___x_2814_);
lean_dec(v___x_2814_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; 
lean_dec_ref(v___f_2685_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2816_ = lean_apply_5(v_k_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
v___x_2818_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_2819_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_2820_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2819_);
if (v___x_2820_ == 0)
{
lean_dec(v_a_2817_);
lean_dec_ref(v___x_2628_);
return v___x_2816_;
}
else
{
lean_object* v___x_2821_; lean_object* v___x_8950__overap_2822_; lean_object* v___x_2823_; 
lean_dec_ref_known(v___x_2816_, 1);
lean_inc(v_a_2817_);
v___x_2821_ = l_Lean_MessageData_ofExpr(v_a_2817_);
lean_inc_ref(v_toMonadRef_2631_);
lean_inc_ref(v___x_2628_);
v___x_8950__overap_2822_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2818_, v___x_2821_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2823_ = lean_apply_5(v___x_8950__overap_2822_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec_ref(v___x_2628_);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v___x_2823_, 0);
lean_dec(v_unused_2831_);
v___x_2825_ = v___x_2823_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_dec(v___x_2823_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v_a_2817_);
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2817_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_dec(v_a_2817_);
v_a_2832_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2823_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2823_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
lean_inc(v_a_2832_);
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
v___y_2681_ = v___x_2837_;
v_a_2682_ = v_a_2832_;
goto v___jp_2680_;
}
}
}
}
}
else
{
lean_object* v_a_2840_; 
v_a_2840_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2840_);
v___y_2681_ = v___x_2816_;
v_a_2682_ = v_a_2840_;
goto v___jp_2680_;
}
}
else
{
goto v___jp_2776_;
}
}
else
{
goto v___jp_2776_;
}
v___jp_2653_:
{
if (v___y_2656_ == 0)
{
lean_object* v___x_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; 
lean_dec_ref(v___y_2654_);
v___x_2657_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_2658_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_2659_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2658_);
if (v___x_2659_ == 0)
{
lean_object* v___x_2660_; 
lean_dec_ref(v___x_2628_);
v___x_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2660_, 0, v___y_2655_);
return v___x_2660_;
}
else
{
lean_object* v___x_2661_; lean_object* v___x_8761__overap_2662_; lean_object* v___x_2663_; 
lean_inc_ref(v___y_2655_);
v___x_2661_ = l_Lean_Exception_toMessageData(v___y_2655_);
lean_inc_ref(v_toMonadRef_2631_);
v___x_8761__overap_2662_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2657_, v___x_2661_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2663_ = lean_apply_5(v___x_8761__overap_2662_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2670_ == 0)
{
lean_object* v_unused_2671_; 
v_unused_2671_ = lean_ctor_get(v___x_2663_, 0);
lean_dec(v_unused_2671_);
v___x_2665_ = v___x_2663_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_dec(v___x_2663_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set_tag(v___x_2665_, 1);
lean_ctor_set(v___x_2665_, 0, v___y_2655_);
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___y_2655_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec_ref(v___y_2655_);
v_a_2672_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2663_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2663_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_2655_);
lean_dec_ref(v___x_2628_);
return v___y_2654_;
}
}
v___jp_2680_:
{
uint8_t v___x_2683_; 
v___x_2683_ = l_Lean_Exception_isInterrupt(v_a_2682_);
if (v___x_2683_ == 0)
{
uint8_t v___x_2684_; 
lean_inc_ref(v_a_2682_);
v___x_2684_ = l_Lean_Exception_isRuntime(v_a_2682_);
v___y_2654_ = v___y_2681_;
v___y_2655_ = v_a_2682_;
v___y_2656_ = v___x_2684_;
goto v___jp_2653_;
}
else
{
v___y_2654_ = v___y_2681_;
v___y_2655_ = v_a_2682_;
v___y_2656_ = v___x_2683_;
goto v___jp_2653_;
}
}
v___jp_2691_:
{
lean_object* v___x_2695_; double v___x_2696_; double v___x_2697_; double v___x_2698_; double v___x_2699_; double v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_8822__overap_2705_; lean_object* v___x_2706_; 
v___x_2695_ = lean_io_mono_nanos_now();
v___x_2696_ = lean_float_of_nat(v___y_2693_);
v___x_2697_ = lean_float_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30);
v___x_2698_ = lean_float_div(v___x_2696_, v___x_2697_);
v___x_2699_ = lean_float_of_nat(v___x_2695_);
v___x_2700_ = lean_float_div(v___x_2699_, v___x_2697_);
v___x_2701_ = lean_box_float(v___x_2698_);
v___x_2702_ = lean_box_float(v___x_2700_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v_a_2694_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
lean_inc_ref(v_toMonadRef_2631_);
v___x_8822__overap_2705_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, lean_box(0), v___x_2632_, v___f_2686_, v___x_2687_, v_hasTrace_2636_, v___x_2688_, v_options_2635_, v___x_2690_, v___y_2692_, v___f_2685_, v___x_2704_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2706_ = lean_apply_5(v___x_8822__overap_2705_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
return v___x_2706_;
}
v___jp_2707_:
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2711_, 0, v_a_2710_);
v___y_2692_ = v___y_2708_;
v___y_2693_ = v___y_2709_;
v_a_2694_ = v___x_2711_;
goto v___jp_2691_;
}
v___jp_2712_:
{
if (v___y_2716_ == 0)
{
lean_object* v___x_2717_; lean_object* v___x_2718_; uint8_t v___x_2719_; 
v___x_2717_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_2718_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_2719_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2718_);
if (v___x_2719_ == 0)
{
v___y_2708_ = v___y_2713_;
v___y_2709_ = v___y_2714_;
v_a_2710_ = v___y_2715_;
goto v___jp_2707_;
}
else
{
lean_object* v___x_2720_; lean_object* v___x_8841__overap_2721_; lean_object* v___x_2722_; 
lean_inc_ref(v___y_2715_);
v___x_2720_ = l_Lean_Exception_toMessageData(v___y_2715_);
lean_inc_ref(v_toMonadRef_2631_);
lean_inc_ref(v___x_2628_);
v___x_8841__overap_2721_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2717_, v___x_2720_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2722_ = lean_apply_5(v___x_8841__overap_2721_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_dec_ref_known(v___x_2722_, 1);
v___y_2708_ = v___y_2713_;
v___y_2709_ = v___y_2714_;
v_a_2710_ = v___y_2715_;
goto v___jp_2707_;
}
else
{
lean_object* v_a_2723_; 
lean_dec_ref(v___y_2715_);
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2722_, 1);
v___y_2708_ = v___y_2713_;
v___y_2709_ = v___y_2714_;
v_a_2710_ = v_a_2723_;
goto v___jp_2707_;
}
}
}
else
{
v___y_2708_ = v___y_2713_;
v___y_2709_ = v___y_2714_;
v_a_2710_ = v___y_2715_;
goto v___jp_2707_;
}
}
v___jp_2724_:
{
uint8_t v___x_2728_; 
v___x_2728_ = l_Lean_Exception_isInterrupt(v_a_2727_);
if (v___x_2728_ == 0)
{
uint8_t v___x_2729_; 
lean_inc_ref(v_a_2727_);
v___x_2729_ = l_Lean_Exception_isRuntime(v_a_2727_);
v___y_2713_ = v___y_2725_;
v___y_2714_ = v___y_2726_;
v___y_2715_ = v_a_2727_;
v___y_2716_ = v___x_2729_;
goto v___jp_2712_;
}
else
{
v___y_2713_ = v___y_2725_;
v___y_2714_ = v___y_2726_;
v___y_2715_ = v_a_2727_;
v___y_2716_ = v___x_2728_;
goto v___jp_2712_;
}
}
v___jp_2730_:
{
lean_object* v___x_2734_; 
v___x_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2734_, 0, v_a_2733_);
v___y_2692_ = v___y_2731_;
v___y_2693_ = v___y_2732_;
v_a_2694_ = v___x_2734_;
goto v___jp_2691_;
}
v___jp_2735_:
{
lean_object* v___x_2739_; double v___x_2740_; double v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_8884__overap_2746_; lean_object* v___x_2747_; 
v___x_2739_ = lean_io_get_num_heartbeats();
v___x_2740_ = lean_float_of_nat(v___y_2736_);
v___x_2741_ = lean_float_of_nat(v___x_2739_);
v___x_2742_ = lean_box_float(v___x_2740_);
v___x_2743_ = lean_box_float(v___x_2741_);
v___x_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2745_, 0, v_a_2738_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
lean_inc_ref(v_toMonadRef_2631_);
v___x_8884__overap_2746_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, lean_box(0), v___x_2632_, v___f_2686_, v___x_2687_, v_hasTrace_2636_, v___x_2688_, v_options_2635_, v___x_2690_, v___y_2737_, v___f_2685_, v___x_2745_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2747_ = lean_apply_5(v___x_8884__overap_2746_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
return v___x_2747_;
}
v___jp_2748_:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2751_);
v___y_2736_ = v___y_2749_;
v___y_2737_ = v___y_2750_;
v_a_2738_ = v___x_2752_;
goto v___jp_2735_;
}
v___jp_2753_:
{
if (v___y_2757_ == 0)
{
lean_object* v___x_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2758_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_2759_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_2760_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2759_);
if (v___x_2760_ == 0)
{
v___y_2749_ = v___y_2754_;
v___y_2750_ = v___y_2756_;
v_a_2751_ = v___y_2755_;
goto v___jp_2748_;
}
else
{
lean_object* v___x_2761_; lean_object* v___x_8903__overap_2762_; lean_object* v___x_2763_; 
lean_inc_ref(v___y_2755_);
v___x_2761_ = l_Lean_Exception_toMessageData(v___y_2755_);
lean_inc_ref(v_toMonadRef_2631_);
lean_inc_ref(v___x_2628_);
v___x_8903__overap_2762_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2758_, v___x_2761_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2763_ = lean_apply_5(v___x_8903__overap_2762_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_dec_ref_known(v___x_2763_, 1);
v___y_2749_ = v___y_2754_;
v___y_2750_ = v___y_2756_;
v_a_2751_ = v___y_2755_;
goto v___jp_2748_;
}
else
{
lean_object* v_a_2764_; 
lean_dec_ref(v___y_2755_);
v_a_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2763_, 1);
v___y_2749_ = v___y_2754_;
v___y_2750_ = v___y_2756_;
v_a_2751_ = v_a_2764_;
goto v___jp_2748_;
}
}
}
else
{
v___y_2749_ = v___y_2754_;
v___y_2750_ = v___y_2756_;
v_a_2751_ = v___y_2755_;
goto v___jp_2748_;
}
}
v___jp_2765_:
{
uint8_t v___x_2769_; 
v___x_2769_ = l_Lean_Exception_isInterrupt(v_a_2768_);
if (v___x_2769_ == 0)
{
uint8_t v___x_2770_; 
lean_inc_ref(v_a_2768_);
v___x_2770_ = l_Lean_Exception_isRuntime(v_a_2768_);
v___y_2754_ = v___y_2766_;
v___y_2755_ = v_a_2768_;
v___y_2756_ = v___y_2767_;
v___y_2757_ = v___x_2770_;
goto v___jp_2753_;
}
else
{
v___y_2754_ = v___y_2766_;
v___y_2755_ = v_a_2768_;
v___y_2756_ = v___y_2767_;
v___y_2757_ = v___x_2769_;
goto v___jp_2753_;
}
}
v___jp_2771_:
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2775_, 0, v_a_2774_);
v___y_2736_ = v___y_2772_;
v___y_2737_ = v___y_2773_;
v_a_2738_ = v___x_2775_;
goto v___jp_2735_;
}
v___jp_2776_:
{
lean_object* v___x_8800__overap_2777_; lean_object* v___x_2778_; 
lean_inc_ref(v___x_2628_);
v___x_8800__overap_2777_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_2628_, v___x_2629_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2778_ = lean_apply_5(v___x_8800__overap_2777_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; uint8_t v___x_2782_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
v___x_2780_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2781_ = l_Lean_Option_get___redArg(v___x_2633_, v_options_2635_, v___x_2780_);
v___x_2782_ = lean_unbox(v___x_2781_);
lean_dec(v___x_2781_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = lean_io_mono_nanos_now();
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2784_ = lean_apply_5(v_k_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; uint8_t v___x_2788_; 
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2784_, 1);
v___x_2786_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_2787_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_2788_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2787_);
if (v___x_2788_ == 0)
{
v___y_2731_ = v_a_2779_;
v___y_2732_ = v___x_2783_;
v_a_2733_ = v_a_2785_;
goto v___jp_2730_;
}
else
{
lean_object* v___x_2789_; lean_object* v___x_8864__overap_2790_; lean_object* v___x_2791_; 
lean_inc(v_a_2785_);
v___x_2789_ = l_Lean_MessageData_ofExpr(v_a_2785_);
lean_inc_ref(v_toMonadRef_2631_);
lean_inc_ref(v___x_2628_);
v___x_8864__overap_2790_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2786_, v___x_2789_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2791_ = lean_apply_5(v___x_8864__overap_2790_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_dec_ref_known(v___x_2791_, 1);
v___y_2731_ = v_a_2779_;
v___y_2732_ = v___x_2783_;
v_a_2733_ = v_a_2785_;
goto v___jp_2730_;
}
else
{
lean_object* v_a_2792_; 
lean_dec(v_a_2785_);
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___y_2725_ = v_a_2779_;
v___y_2726_ = v___x_2783_;
v_a_2727_ = v_a_2792_;
goto v___jp_2724_;
}
}
}
else
{
lean_object* v_a_2793_; 
v_a_2793_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2784_, 1);
v___y_2725_ = v_a_2779_;
v___y_2726_ = v___x_2783_;
v_a_2727_ = v_a_2793_;
goto v___jp_2724_;
}
}
else
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2795_ = lean_apply_5(v_k_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2797_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_2798_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_2799_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2651_, v_options_2635_, v___x_2798_);
if (v___x_2799_ == 0)
{
v___y_2772_ = v___x_2794_;
v___y_2773_ = v_a_2779_;
v_a_2774_ = v_a_2796_;
goto v___jp_2771_;
}
else
{
lean_object* v___x_2800_; lean_object* v___x_8926__overap_2801_; lean_object* v___x_2802_; 
lean_inc(v_a_2796_);
v___x_2800_ = l_Lean_MessageData_ofExpr(v_a_2796_);
lean_inc_ref(v_toMonadRef_2631_);
lean_inc_ref(v___x_2628_);
v___x_8926__overap_2801_ = l_Lean_addTrace___redArg(v___x_2628_, v___x_2629_, v_toMonadRef_2631_, v___x_2652_, v___x_2797_, v___x_2800_);
lean_inc(v_a_2587_);
lean_inc_ref(v_a_2586_);
lean_inc(v_a_2585_);
lean_inc_ref(v_a_2584_);
v___x_2802_ = lean_apply_5(v___x_8926__overap_2801_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, lean_box(0));
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_dec_ref_known(v___x_2802_, 1);
v___y_2772_ = v___x_2794_;
v___y_2773_ = v_a_2779_;
v_a_2774_ = v_a_2796_;
goto v___jp_2771_;
}
else
{
lean_object* v_a_2803_; 
lean_dec(v_a_2796_);
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___y_2766_ = v___x_2794_;
v___y_2767_ = v_a_2779_;
v_a_2768_ = v_a_2803_;
goto v___jp_2765_;
}
}
}
else
{
lean_object* v_a_2804_; 
v_a_2804_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2795_, 1);
v___y_2766_ = v___x_2794_;
v___y_2767_ = v_a_2779_;
v_a_2768_ = v_a_2804_;
goto v___jp_2765_;
}
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_dec_ref(v___f_2685_);
lean_dec_ref(v___x_2628_);
lean_dec_ref(v_k_2583_);
v_a_2805_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2807_ = v___x_2778_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2778_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___boxed(lean_object* v_inst_2847_, lean_object* v_inst_2848_, lean_object* v_f_2849_, lean_object* v_xs_2850_, lean_object* v_k_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg(v_inst_2847_, v_inst_2848_, v_f_2849_, v_xs_2850_, v_k_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_);
lean_dec(v_a_2855_);
lean_dec_ref(v_a_2854_);
lean_dec(v_a_2853_);
lean_dec_ref(v_a_2852_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace(lean_object* v_00_u03b1_2858_, lean_object* v_00_u03b2_2859_, lean_object* v_inst_2860_, lean_object* v_inst_2861_, lean_object* v_f_2862_, lean_object* v_xs_2863_, lean_object* v_k_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg(v_inst_2860_, v_inst_2861_, v_f_2862_, v_xs_2863_, v_k_2864_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___boxed(lean_object* v_00_u03b1_2871_, lean_object* v_00_u03b2_2872_, lean_object* v_inst_2873_, lean_object* v_inst_2874_, lean_object* v_f_2875_, lean_object* v_xs_2876_, lean_object* v_k_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace(v_00_u03b1_2871_, v_00_u03b2_2872_, v_inst_2873_, v_inst_2874_, v_f_2875_, v_xs_2876_, v_k_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_);
lean_dec(v_a_2881_);
lean_dec_ref(v_a_2880_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg(lean_object* v_k_2884_, uint8_t v_allowLevelAssignments_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2885_, v_k_2884_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2891_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2891_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
v_a_2900_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2891_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2891_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg___boxed(lean_object* v_k_2908_, lean_object* v_allowLevelAssignments_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2915_; lean_object* v_res_2916_; 
v_allowLevelAssignments_boxed_2915_ = lean_unbox(v_allowLevelAssignments_2909_);
v_res_2916_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg(v_k_2908_, v_allowLevelAssignments_boxed_2915_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0(lean_object* v_00_u03b1_2917_, lean_object* v_k_2918_, uint8_t v_allowLevelAssignments_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___redArg(v_k_2918_, v_allowLevelAssignments_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed(lean_object* v_00_u03b1_2926_, lean_object* v_k_2927_, lean_object* v_allowLevelAssignments_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2934_; lean_object* v_res_2935_; 
v_allowLevelAssignments_boxed_2934_ = lean_unbox(v_allowLevelAssignments_2928_);
v_res_2935_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0(v_00_u03b1_2926_, v_k_2927_, v_allowLevelAssignments_boxed_2934_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___lam__0(lean_object* v_constName_2936_, lean_object* v_xs_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v___x_2943_; 
v___x_2943_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun(v_constName_2936_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v_fst_2945_; lean_object* v_snd_2946_; lean_object* v___x_2947_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2944_);
lean_dec_ref_known(v___x_2943_, 1);
v_fst_2945_ = lean_ctor_get(v_a_2944_, 0);
lean_inc(v_fst_2945_);
v_snd_2946_ = lean_ctor_get(v_a_2944_, 1);
lean_inc(v_snd_2946_);
lean_dec(v_a_2944_);
v___x_2947_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs(v_fst_2945_, v_snd_2946_, v_xs_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
return v___x_2947_;
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_a_2948_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2943_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2943_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___lam__0___boxed(lean_object* v_constName_2956_, lean_object* v_xs_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v_res_2963_; 
v_res_2963_ = l_Lean_Meta_mkAppM___lam__0(v_constName_2956_, v_xs_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec_ref(v_xs_2957_);
return v_res_2963_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2964_ = lean_unsigned_to_nat(32u);
v___x_2965_ = lean_mk_empty_array_with_capacity(v___x_2964_);
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
return v___x_2966_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2967_ = ((size_t)5ULL);
v___x_2968_ = lean_unsigned_to_nat(0u);
v___x_2969_ = lean_unsigned_to_nat(32u);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
v___x_2971_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__0);
v___x_2972_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
lean_ctor_set(v___x_2972_, 1, v___x_2970_);
lean_ctor_set(v___x_2972_, 2, v___x_2968_);
lean_ctor_set(v___x_2972_, 3, v___x_2968_);
lean_ctor_set_usize(v___x_2972_, 4, v___x_2967_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(lean_object* v___y_2973_){
_start:
{
lean_object* v___x_2975_; lean_object* v_traceState_2976_; lean_object* v_traces_2977_; lean_object* v___x_2978_; lean_object* v_traceState_2979_; lean_object* v_env_2980_; lean_object* v_nextMacroScope_2981_; lean_object* v_ngen_2982_; lean_object* v_auxDeclNGen_2983_; lean_object* v_cache_2984_; lean_object* v_messages_2985_; lean_object* v_infoState_2986_; lean_object* v_snapshotTasks_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_3006_; 
v___x_2975_ = lean_st_ref_get(v___y_2973_);
v_traceState_2976_ = lean_ctor_get(v___x_2975_, 4);
lean_inc_ref(v_traceState_2976_);
lean_dec(v___x_2975_);
v_traces_2977_ = lean_ctor_get(v_traceState_2976_, 0);
lean_inc_ref(v_traces_2977_);
lean_dec_ref(v_traceState_2976_);
v___x_2978_ = lean_st_ref_take(v___y_2973_);
v_traceState_2979_ = lean_ctor_get(v___x_2978_, 4);
v_env_2980_ = lean_ctor_get(v___x_2978_, 0);
v_nextMacroScope_2981_ = lean_ctor_get(v___x_2978_, 1);
v_ngen_2982_ = lean_ctor_get(v___x_2978_, 2);
v_auxDeclNGen_2983_ = lean_ctor_get(v___x_2978_, 3);
v_cache_2984_ = lean_ctor_get(v___x_2978_, 5);
v_messages_2985_ = lean_ctor_get(v___x_2978_, 6);
v_infoState_2986_ = lean_ctor_get(v___x_2978_, 7);
v_snapshotTasks_2987_ = lean_ctor_get(v___x_2978_, 8);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_2989_ = v___x_2978_;
v_isShared_2990_ = v_isSharedCheck_3006_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_snapshotTasks_2987_);
lean_inc(v_infoState_2986_);
lean_inc(v_messages_2985_);
lean_inc(v_cache_2984_);
lean_inc(v_traceState_2979_);
lean_inc(v_auxDeclNGen_2983_);
lean_inc(v_ngen_2982_);
lean_inc(v_nextMacroScope_2981_);
lean_inc(v_env_2980_);
lean_dec(v___x_2978_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_3006_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
uint64_t v_tid_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3004_; 
v_tid_2991_ = lean_ctor_get_uint64(v_traceState_2979_, sizeof(void*)*1);
v_isSharedCheck_3004_ = !lean_is_exclusive(v_traceState_2979_);
if (v_isSharedCheck_3004_ == 0)
{
lean_object* v_unused_3005_; 
v_unused_3005_ = lean_ctor_get(v_traceState_2979_, 0);
lean_dec(v_unused_3005_);
v___x_2993_ = v_traceState_2979_;
v_isShared_2994_ = v_isSharedCheck_3004_;
goto v_resetjp_2992_;
}
else
{
lean_dec(v_traceState_2979_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3004_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2995_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___closed__1);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_2995_);
v___x_2997_ = v___x_2993_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2995_);
lean_ctor_set_uint64(v_reuseFailAlloc_3003_, sizeof(void*)*1, v_tid_2991_);
v___x_2997_ = v_reuseFailAlloc_3003_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2999_; 
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 4, v___x_2997_);
v___x_2999_ = v___x_2989_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_env_2980_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v_nextMacroScope_2981_);
lean_ctor_set(v_reuseFailAlloc_3002_, 2, v_ngen_2982_);
lean_ctor_set(v_reuseFailAlloc_3002_, 3, v_auxDeclNGen_2983_);
lean_ctor_set(v_reuseFailAlloc_3002_, 4, v___x_2997_);
lean_ctor_set(v_reuseFailAlloc_3002_, 5, v_cache_2984_);
lean_ctor_set(v_reuseFailAlloc_3002_, 6, v_messages_2985_);
lean_ctor_set(v_reuseFailAlloc_3002_, 7, v_infoState_2986_);
lean_ctor_set(v_reuseFailAlloc_3002_, 8, v_snapshotTasks_2987_);
v___x_2999_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = lean_st_ref_put(v___y_2973_, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v_traces_2977_);
return v___x_3001_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg___boxed(lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v___y_3007_);
lean_dec(v___y_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9(lean_object* v_opts_3010_, lean_object* v_opt_3011_){
_start:
{
lean_object* v_name_3012_; lean_object* v_defValue_3013_; lean_object* v_map_3014_; lean_object* v___x_3015_; 
v_name_3012_ = lean_ctor_get(v_opt_3011_, 0);
v_defValue_3013_ = lean_ctor_get(v_opt_3011_, 1);
v_map_3014_ = lean_ctor_get(v_opts_3010_, 0);
v___x_3015_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3014_, v_name_3012_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_inc(v_defValue_3013_);
return v_defValue_3013_;
}
else
{
lean_object* v_val_3016_; 
v_val_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_val_3016_);
lean_dec_ref_known(v___x_3015_, 1);
if (lean_obj_tag(v_val_3016_) == 3)
{
lean_object* v_v_3017_; 
v_v_3017_ = lean_ctor_get(v_val_3016_, 0);
lean_inc(v_v_3017_);
lean_dec_ref_known(v_val_3016_, 1);
return v_v_3017_;
}
else
{
lean_dec(v_val_3016_);
lean_inc(v_defValue_3013_);
return v_defValue_3013_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9___boxed(lean_object* v_opts_3018_, lean_object* v_opt_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9(v_opts_3018_, v_opt_3019_);
lean_dec_ref(v_opt_3019_);
lean_dec_ref(v_opts_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(lean_object* v_opts_3021_, lean_object* v_opt_3022_){
_start:
{
lean_object* v_name_3023_; lean_object* v_defValue_3024_; lean_object* v_map_3025_; lean_object* v___x_3026_; 
v_name_3023_ = lean_ctor_get(v_opt_3022_, 0);
v_defValue_3024_ = lean_ctor_get(v_opt_3022_, 1);
v_map_3025_ = lean_ctor_get(v_opts_3021_, 0);
v___x_3026_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3025_, v_name_3023_);
if (lean_obj_tag(v___x_3026_) == 0)
{
uint8_t v___x_3027_; 
v___x_3027_ = lean_unbox(v_defValue_3024_);
return v___x_3027_;
}
else
{
lean_object* v_val_3028_; 
v_val_3028_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_val_3028_);
lean_dec_ref_known(v___x_3026_, 1);
if (lean_obj_tag(v_val_3028_) == 1)
{
uint8_t v_v_3029_; 
v_v_3029_ = lean_ctor_get_uint8(v_val_3028_, 0);
lean_dec_ref_known(v_val_3028_, 0);
return v_v_3029_;
}
else
{
uint8_t v___x_3030_; 
lean_dec(v_val_3028_);
v___x_3030_ = lean_unbox(v_defValue_3024_);
return v___x_3030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4___boxed(lean_object* v_opts_3031_, lean_object* v_opt_3032_){
_start:
{
uint8_t v_res_3033_; lean_object* v_r_3034_; 
v_res_3033_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_opts_3031_, v_opt_3032_);
lean_dec_ref(v_opt_3032_);
lean_dec_ref(v_opts_3031_);
v_r_3034_ = lean_box(v_res_3033_);
return v_r_3034_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8(lean_object* v_e_3035_){
_start:
{
if (lean_obj_tag(v_e_3035_) == 0)
{
uint8_t v___x_3036_; 
v___x_3036_ = 2;
return v___x_3036_;
}
else
{
lean_object* v_a_3037_; uint8_t v___x_3038_; 
v_a_3037_ = lean_ctor_get(v_e_3035_, 0);
v___x_3038_ = l_Lean_Expr_hasSyntheticSorry(v_a_3037_);
if (v___x_3038_ == 0)
{
uint8_t v___x_3039_; 
v___x_3039_ = 0;
return v___x_3039_;
}
else
{
uint8_t v___x_3040_; 
v___x_3040_ = 1;
return v___x_3040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8___boxed(lean_object* v_e_3041_){
_start:
{
uint8_t v_res_3042_; lean_object* v_r_3043_; 
v_res_3042_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8(v_e_3041_);
lean_dec_ref(v_e_3041_);
v_r_3043_ = lean_box(v_res_3042_);
return v_r_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7(size_t v_sz_3044_, size_t v_i_3045_, lean_object* v_bs_3046_){
_start:
{
uint8_t v___x_3047_; 
v___x_3047_ = lean_usize_dec_lt(v_i_3045_, v_sz_3044_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; 
v___x_3048_ = l_unsafeCast___redArg(v_bs_3046_);
lean_dec_ref(v_bs_3046_);
return v___x_3048_;
}
else
{
lean_object* v_v_3049_; lean_object* v___x_3050_; lean_object* v_msg_3051_; lean_object* v___x_3052_; lean_object* v_bs_x27_3053_; size_t v___x_3054_; size_t v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_v_3049_ = lean_array_uget_borrowed(v_bs_3046_, v_i_3045_);
v___x_3050_ = l_unsafeCast___redArg(v_v_3049_);
v_msg_3051_ = lean_ctor_get(v___x_3050_, 1);
lean_inc_ref(v_msg_3051_);
lean_dec(v___x_3050_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v_bs_x27_3053_ = lean_array_uset(v_bs_3046_, v_i_3045_, v___x_3052_);
v___x_3054_ = ((size_t)1ULL);
v___x_3055_ = lean_usize_add(v_i_3045_, v___x_3054_);
v___x_3056_ = l_unsafeCast___redArg(v_msg_3051_);
lean_dec_ref(v_msg_3051_);
v___x_3057_ = lean_array_uset(v_bs_x27_3053_, v_i_3045_, v___x_3056_);
v_i_3045_ = v___x_3055_;
v_bs_3046_ = v___x_3057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7___boxed(lean_object* v_sz_3059_, lean_object* v_i_3060_, lean_object* v_bs_3061_){
_start:
{
size_t v_sz_boxed_3062_; size_t v_i_boxed_3063_; lean_object* v_res_3064_; 
v_sz_boxed_3062_ = lean_unbox_usize(v_sz_3059_);
lean_dec(v_sz_3059_);
v_i_boxed_3063_ = lean_unbox_usize(v_i_3060_);
lean_dec(v_i_3060_);
v_res_3064_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7(v_sz_boxed_3062_, v_i_boxed_3063_, v_bs_3061_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6(lean_object* v_oldTraces_3065_, lean_object* v_data_3066_, lean_object* v_ref_3067_, lean_object* v_msg_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v_toCold_3074_; lean_object* v_currRecDepth_3075_; lean_object* v_ref_3076_; uint8_t v_diag_3077_; uint8_t v_suppressElabErrors_3078_; lean_object* v_ref_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v_traceState_3082_; lean_object* v_traces_3083_; lean_object* v___x_3084_; size_t v_sz_3085_; size_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v_msg_3090_; lean_object* v___x_3091_; lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3129_; 
v_toCold_3074_ = lean_ctor_get(v___y_3071_, 0);
v_currRecDepth_3075_ = lean_ctor_get(v___y_3071_, 1);
v_ref_3076_ = lean_ctor_get(v___y_3071_, 2);
v_diag_3077_ = lean_ctor_get_uint8(v___y_3071_, sizeof(void*)*3);
v_suppressElabErrors_3078_ = lean_ctor_get_uint8(v___y_3071_, sizeof(void*)*3 + 1);
v_ref_3079_ = l_Lean_replaceRef(v_ref_3067_, v_ref_3076_);
lean_inc(v_currRecDepth_3075_);
lean_inc_ref(v_toCold_3074_);
v___x_3080_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3080_, 0, v_toCold_3074_);
lean_ctor_set(v___x_3080_, 1, v_currRecDepth_3075_);
lean_ctor_set(v___x_3080_, 2, v_ref_3079_);
lean_ctor_set_uint8(v___x_3080_, sizeof(void*)*3, v_diag_3077_);
lean_ctor_set_uint8(v___x_3080_, sizeof(void*)*3 + 1, v_suppressElabErrors_3078_);
v___x_3081_ = lean_st_ref_get(v___y_3072_);
v_traceState_3082_ = lean_ctor_get(v___x_3081_, 4);
lean_inc_ref(v_traceState_3082_);
lean_dec(v___x_3081_);
v_traces_3083_ = lean_ctor_get(v_traceState_3082_, 0);
lean_inc_ref(v_traces_3083_);
lean_dec_ref(v_traceState_3082_);
v___x_3084_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3083_);
lean_dec_ref(v_traces_3083_);
v_sz_3085_ = lean_array_size(v___x_3084_);
v___x_3086_ = ((size_t)0ULL);
v___x_3087_ = l_unsafeCast___redArg(v___x_3084_);
lean_dec_ref(v___x_3084_);
v___x_3088_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6_spec__7(v_sz_3085_, v___x_3086_, v___x_3087_);
v___x_3089_ = l_unsafeCast___redArg(v___x_3088_);
lean_dec_ref(v___x_3088_);
v_msg_3090_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3090_, 0, v_data_3066_);
lean_ctor_set(v_msg_3090_, 1, v_msg_3068_);
lean_ctor_set(v_msg_3090_, 2, v___x_3089_);
v___x_3091_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(v_msg_3090_, v___y_3069_, v___y_3070_, v___x_3080_, v___y_3072_);
lean_dec_ref_known(v___x_3080_, 3);
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3094_ = v___x_3091_;
v_isShared_3095_ = v_isSharedCheck_3129_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3091_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3129_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3096_; lean_object* v_traceState_3097_; lean_object* v_env_3098_; lean_object* v_nextMacroScope_3099_; lean_object* v_ngen_3100_; lean_object* v_auxDeclNGen_3101_; lean_object* v_cache_3102_; lean_object* v_messages_3103_; lean_object* v_infoState_3104_; lean_object* v_snapshotTasks_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3128_; 
v___x_3096_ = lean_st_ref_take(v___y_3072_);
v_traceState_3097_ = lean_ctor_get(v___x_3096_, 4);
v_env_3098_ = lean_ctor_get(v___x_3096_, 0);
v_nextMacroScope_3099_ = lean_ctor_get(v___x_3096_, 1);
v_ngen_3100_ = lean_ctor_get(v___x_3096_, 2);
v_auxDeclNGen_3101_ = lean_ctor_get(v___x_3096_, 3);
v_cache_3102_ = lean_ctor_get(v___x_3096_, 5);
v_messages_3103_ = lean_ctor_get(v___x_3096_, 6);
v_infoState_3104_ = lean_ctor_get(v___x_3096_, 7);
v_snapshotTasks_3105_ = lean_ctor_get(v___x_3096_, 8);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3107_ = v___x_3096_;
v_isShared_3108_ = v_isSharedCheck_3128_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_snapshotTasks_3105_);
lean_inc(v_infoState_3104_);
lean_inc(v_messages_3103_);
lean_inc(v_cache_3102_);
lean_inc(v_traceState_3097_);
lean_inc(v_auxDeclNGen_3101_);
lean_inc(v_ngen_3100_);
lean_inc(v_nextMacroScope_3099_);
lean_inc(v_env_3098_);
lean_dec(v___x_3096_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3128_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
uint64_t v_tid_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3126_; 
v_tid_3109_ = lean_ctor_get_uint64(v_traceState_3097_, sizeof(void*)*1);
v_isSharedCheck_3126_ = !lean_is_exclusive(v_traceState_3097_);
if (v_isSharedCheck_3126_ == 0)
{
lean_object* v_unused_3127_; 
v_unused_3127_ = lean_ctor_get(v_traceState_3097_, 0);
lean_dec(v_unused_3127_);
v___x_3111_ = v_traceState_3097_;
v_isShared_3112_ = v_isSharedCheck_3126_;
goto v_resetjp_3110_;
}
else
{
lean_dec(v_traceState_3097_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3126_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3117_; 
v___x_3113_ = lean_box(0);
v___x_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3114_, 0, v_ref_3067_);
lean_ctor_set(v___x_3114_, 1, v_a_3092_);
v___x_3115_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3065_, v___x_3114_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 0, v___x_3115_);
v___x_3117_ = v___x_3111_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3115_);
lean_ctor_set_uint64(v_reuseFailAlloc_3125_, sizeof(void*)*1, v_tid_3109_);
v___x_3117_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
lean_object* v___x_3119_; 
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 4, v___x_3117_);
v___x_3119_ = v___x_3107_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_env_3098_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v_nextMacroScope_3099_);
lean_ctor_set(v_reuseFailAlloc_3124_, 2, v_ngen_3100_);
lean_ctor_set(v_reuseFailAlloc_3124_, 3, v_auxDeclNGen_3101_);
lean_ctor_set(v_reuseFailAlloc_3124_, 4, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3124_, 5, v_cache_3102_);
lean_ctor_set(v_reuseFailAlloc_3124_, 6, v_messages_3103_);
lean_ctor_set(v_reuseFailAlloc_3124_, 7, v_infoState_3104_);
lean_ctor_set(v_reuseFailAlloc_3124_, 8, v_snapshotTasks_3105_);
v___x_3119_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = lean_st_ref_put(v___y_3072_, v___x_3119_);
if (v_isShared_3095_ == 0)
{
lean_ctor_set(v___x_3094_, 0, v___x_3113_);
v___x_3122_ = v___x_3094_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3113_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6___boxed(lean_object* v_oldTraces_3130_, lean_object* v_data_3131_, lean_object* v_ref_3132_, lean_object* v_msg_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6(v_oldTraces_3130_, v_data_3131_, v_ref_3132_, v_msg_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(lean_object* v_x_3140_){
_start:
{
if (lean_obj_tag(v_x_3140_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
v_a_3142_ = lean_ctor_get(v_x_3140_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_x_3140_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3144_ = v_x_3140_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v_x_3140_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
lean_ctor_set_tag(v___x_3144_, 1);
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
v_a_3150_ = lean_ctor_get(v_x_3140_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v_x_3140_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v_x_3140_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v_x_3140_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
lean_ctor_set_tag(v___x_3152_, 0);
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg___boxed(lean_object* v_x_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(v_x_3158_);
return v_res_3160_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_3161_; double v___x_3162_; 
v___x_3161_ = lean_unsigned_to_nat(0u);
v___x_3162_ = lean_float_of_nat(v___x_3161_);
return v___x_3162_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2(void){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__1));
v___x_3165_ = l_Lean_stringToMessageData(v___x_3164_);
return v___x_3165_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3(void){
_start:
{
lean_object* v___x_3166_; double v___x_3167_; 
v___x_3166_ = lean_unsigned_to_nat(1000u);
v___x_3167_ = lean_float_of_nat(v___x_3166_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(lean_object* v_cls_3168_, uint8_t v_collapsed_3169_, lean_object* v_tag_3170_, lean_object* v_opts_3171_, uint8_t v_clsEnabled_3172_, lean_object* v_oldTraces_3173_, lean_object* v_msg_3174_, lean_object* v_resStartStop_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v_fst_3181_; lean_object* v_snd_3182_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v_data_3186_; lean_object* v_fst_3197_; lean_object* v_snd_3198_; lean_object* v___x_3199_; uint8_t v___x_3200_; lean_object* v___y_3202_; lean_object* v_a_3203_; uint8_t v___y_3218_; double v___y_3249_; 
v_fst_3181_ = lean_ctor_get(v_resStartStop_3175_, 0);
lean_inc(v_fst_3181_);
v_snd_3182_ = lean_ctor_get(v_resStartStop_3175_, 1);
lean_inc(v_snd_3182_);
lean_dec_ref(v_resStartStop_3175_);
v_fst_3197_ = lean_ctor_get(v_snd_3182_, 0);
lean_inc(v_fst_3197_);
v_snd_3198_ = lean_ctor_get(v_snd_3182_, 1);
lean_inc(v_snd_3198_);
lean_dec(v_snd_3182_);
v___x_3199_ = l_Lean_trace_profiler;
v___x_3200_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_opts_3171_, v___x_3199_);
if (v___x_3200_ == 0)
{
v___y_3218_ = v___x_3200_;
goto v___jp_3217_;
}
else
{
lean_object* v___x_3254_; uint8_t v___x_3255_; 
v___x_3254_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3255_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_opts_3171_, v___x_3254_);
if (v___x_3255_ == 0)
{
lean_object* v___x_3256_; lean_object* v___x_3257_; double v___x_3258_; double v___x_3259_; double v___x_3260_; 
v___x_3256_ = l_Lean_trace_profiler_threshold;
v___x_3257_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9(v_opts_3171_, v___x_3256_);
v___x_3258_ = lean_float_of_nat(v___x_3257_);
v___x_3259_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__3);
v___x_3260_ = lean_float_div(v___x_3258_, v___x_3259_);
v___y_3249_ = v___x_3260_;
goto v___jp_3248_;
}
else
{
lean_object* v___x_3261_; lean_object* v___x_3262_; double v___x_3263_; 
v___x_3261_ = l_Lean_trace_profiler_threshold;
v___x_3262_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__9(v_opts_3171_, v___x_3261_);
v___x_3263_ = lean_float_of_nat(v___x_3262_);
v___y_3249_ = v___x_3263_;
goto v___jp_3248_;
}
}
v___jp_3183_:
{
lean_object* v___x_3187_; 
lean_inc(v___y_3184_);
v___x_3187_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__6(v_oldTraces_3173_, v_data_3186_, v___y_3184_, v___y_3185_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
if (lean_obj_tag(v___x_3187_) == 0)
{
lean_object* v___x_3188_; 
lean_dec_ref_known(v___x_3187_, 1);
v___x_3188_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(v_fst_3181_);
return v___x_3188_;
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec(v_fst_3181_);
v_a_3189_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3187_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3187_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
v___jp_3201_:
{
uint8_t v_result_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; double v___x_3207_; lean_object* v_data_3208_; 
v_result_3204_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__8(v_fst_3181_);
v___x_3205_ = lean_box(v_result_3204_);
v___x_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
v___x_3207_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0);
lean_inc_ref(v_tag_3170_);
lean_inc_ref(v___x_3206_);
lean_inc(v_cls_3168_);
v_data_3208_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3208_, 0, v_cls_3168_);
lean_ctor_set(v_data_3208_, 1, v___x_3206_);
lean_ctor_set(v_data_3208_, 2, v_tag_3170_);
lean_ctor_set_float(v_data_3208_, sizeof(void*)*3, v___x_3207_);
lean_ctor_set_float(v_data_3208_, sizeof(void*)*3 + 8, v___x_3207_);
lean_ctor_set_uint8(v_data_3208_, sizeof(void*)*3 + 16, v_collapsed_3169_);
if (v___x_3200_ == 0)
{
lean_dec_ref_known(v___x_3206_, 1);
lean_dec(v_snd_3198_);
lean_dec(v_fst_3197_);
lean_dec_ref(v_tag_3170_);
lean_dec(v_cls_3168_);
v___y_3184_ = v___y_3202_;
v___y_3185_ = v_a_3203_;
v_data_3186_ = v_data_3208_;
goto v___jp_3183_;
}
else
{
lean_object* v_data_3209_; double v___x_3210_; double v___x_3211_; 
lean_dec_ref_known(v_data_3208_, 3);
v_data_3209_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3209_, 0, v_cls_3168_);
lean_ctor_set(v_data_3209_, 1, v___x_3206_);
lean_ctor_set(v_data_3209_, 2, v_tag_3170_);
v___x_3210_ = lean_unbox_float(v_fst_3197_);
lean_dec(v_fst_3197_);
lean_ctor_set_float(v_data_3209_, sizeof(void*)*3, v___x_3210_);
v___x_3211_ = lean_unbox_float(v_snd_3198_);
lean_dec(v_snd_3198_);
lean_ctor_set_float(v_data_3209_, sizeof(void*)*3 + 8, v___x_3211_);
lean_ctor_set_uint8(v_data_3209_, sizeof(void*)*3 + 16, v_collapsed_3169_);
v___y_3184_ = v___y_3202_;
v___y_3185_ = v_a_3203_;
v_data_3186_ = v_data_3209_;
goto v___jp_3183_;
}
}
v___jp_3212_:
{
lean_object* v_ref_3213_; lean_object* v___x_3214_; 
v_ref_3213_ = lean_ctor_get(v___y_3178_, 2);
lean_inc(v___y_3179_);
lean_inc_ref(v___y_3178_);
lean_inc(v___y_3177_);
lean_inc_ref(v___y_3176_);
lean_inc(v_fst_3181_);
v___x_3214_ = lean_apply_6(v_msg_3174_, v_fst_3181_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, lean_box(0));
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3214_, 1);
v___y_3202_ = v_ref_3213_;
v_a_3203_ = v_a_3215_;
goto v___jp_3201_;
}
else
{
lean_object* v___x_3216_; 
lean_dec_ref_known(v___x_3214_, 1);
v___x_3216_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__2);
v___y_3202_ = v_ref_3213_;
v_a_3203_ = v___x_3216_;
goto v___jp_3201_;
}
}
v___jp_3217_:
{
if (v_clsEnabled_3172_ == 0)
{
if (v___y_3218_ == 0)
{
lean_object* v___x_3219_; lean_object* v_traceState_3220_; lean_object* v_env_3221_; lean_object* v_nextMacroScope_3222_; lean_object* v_ngen_3223_; lean_object* v_auxDeclNGen_3224_; lean_object* v_cache_3225_; lean_object* v_messages_3226_; lean_object* v_infoState_3227_; lean_object* v_snapshotTasks_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3247_; 
lean_dec(v_snd_3198_);
lean_dec(v_fst_3197_);
lean_dec_ref(v_msg_3174_);
lean_dec_ref(v_tag_3170_);
lean_dec(v_cls_3168_);
v___x_3219_ = lean_st_ref_take(v___y_3179_);
v_traceState_3220_ = lean_ctor_get(v___x_3219_, 4);
v_env_3221_ = lean_ctor_get(v___x_3219_, 0);
v_nextMacroScope_3222_ = lean_ctor_get(v___x_3219_, 1);
v_ngen_3223_ = lean_ctor_get(v___x_3219_, 2);
v_auxDeclNGen_3224_ = lean_ctor_get(v___x_3219_, 3);
v_cache_3225_ = lean_ctor_get(v___x_3219_, 5);
v_messages_3226_ = lean_ctor_get(v___x_3219_, 6);
v_infoState_3227_ = lean_ctor_get(v___x_3219_, 7);
v_snapshotTasks_3228_ = lean_ctor_get(v___x_3219_, 8);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3230_ = v___x_3219_;
v_isShared_3231_ = v_isSharedCheck_3247_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_snapshotTasks_3228_);
lean_inc(v_infoState_3227_);
lean_inc(v_messages_3226_);
lean_inc(v_cache_3225_);
lean_inc(v_traceState_3220_);
lean_inc(v_auxDeclNGen_3224_);
lean_inc(v_ngen_3223_);
lean_inc(v_nextMacroScope_3222_);
lean_inc(v_env_3221_);
lean_dec(v___x_3219_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3247_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
uint64_t v_tid_3232_; lean_object* v_traces_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3246_; 
v_tid_3232_ = lean_ctor_get_uint64(v_traceState_3220_, sizeof(void*)*1);
v_traces_3233_ = lean_ctor_get(v_traceState_3220_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v_traceState_3220_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3235_ = v_traceState_3220_;
v_isShared_3236_ = v_isSharedCheck_3246_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_traces_3233_);
lean_dec(v_traceState_3220_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3246_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; lean_object* v___x_3239_; 
v___x_3237_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3173_, v_traces_3233_);
lean_dec_ref(v_traces_3233_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3237_);
v___x_3239_ = v___x_3235_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3237_);
lean_ctor_set_uint64(v_reuseFailAlloc_3245_, sizeof(void*)*1, v_tid_3232_);
v___x_3239_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3241_; 
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 4, v___x_3239_);
v___x_3241_ = v___x_3230_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_env_3221_);
lean_ctor_set(v_reuseFailAlloc_3244_, 1, v_nextMacroScope_3222_);
lean_ctor_set(v_reuseFailAlloc_3244_, 2, v_ngen_3223_);
lean_ctor_set(v_reuseFailAlloc_3244_, 3, v_auxDeclNGen_3224_);
lean_ctor_set(v_reuseFailAlloc_3244_, 4, v___x_3239_);
lean_ctor_set(v_reuseFailAlloc_3244_, 5, v_cache_3225_);
lean_ctor_set(v_reuseFailAlloc_3244_, 6, v_messages_3226_);
lean_ctor_set(v_reuseFailAlloc_3244_, 7, v_infoState_3227_);
lean_ctor_set(v_reuseFailAlloc_3244_, 8, v_snapshotTasks_3228_);
v___x_3241_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = lean_st_ref_put(v___y_3179_, v___x_3241_);
v___x_3243_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(v_fst_3181_);
return v___x_3243_;
}
}
}
}
}
else
{
goto v___jp_3212_;
}
}
else
{
goto v___jp_3212_;
}
}
v___jp_3248_:
{
double v___x_3250_; double v___x_3251_; double v___x_3252_; uint8_t v___x_3253_; 
v___x_3250_ = lean_unbox_float(v_snd_3198_);
v___x_3251_ = lean_unbox_float(v_fst_3197_);
v___x_3252_ = lean_float_sub(v___x_3250_, v___x_3251_);
v___x_3253_ = lean_float_decLt(v___y_3249_, v___x_3252_);
v___y_3218_ = v___x_3253_;
goto v___jp_3217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___boxed(lean_object* v_cls_3264_, lean_object* v_collapsed_3265_, lean_object* v_tag_3266_, lean_object* v_opts_3267_, lean_object* v_clsEnabled_3268_, lean_object* v_oldTraces_3269_, lean_object* v_msg_3270_, lean_object* v_resStartStop_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
uint8_t v_collapsed_boxed_3277_; uint8_t v_clsEnabled_boxed_3278_; lean_object* v_res_3279_; 
v_collapsed_boxed_3277_ = lean_unbox(v_collapsed_3265_);
v_clsEnabled_boxed_3278_ = lean_unbox(v_clsEnabled_3268_);
v_res_3279_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v_cls_3264_, v_collapsed_boxed_3277_, v_tag_3266_, v_opts_3267_, v_clsEnabled_boxed_3278_, v_oldTraces_3269_, v_msg_3270_, v_resStartStop_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec_ref(v_opts_3267_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__1(lean_object* v_a_3280_, lean_object* v_a_3281_){
_start:
{
if (lean_obj_tag(v_a_3280_) == 0)
{
lean_object* v___x_3282_; 
v___x_3282_ = l_List_reverse___redArg(v_a_3281_);
return v___x_3282_;
}
else
{
lean_object* v_head_3283_; lean_object* v_tail_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3293_; 
v_head_3283_ = lean_ctor_get(v_a_3280_, 0);
v_tail_3284_ = lean_ctor_get(v_a_3280_, 1);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_a_3280_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3286_ = v_a_3280_;
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_tail_3284_);
lean_inc(v_head_3283_);
lean_dec(v_a_3280_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3288_; lean_object* v___x_3290_; 
v___x_3288_ = l_Lean_MessageData_ofExpr(v_head_3283_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 1, v_a_3281_);
lean_ctor_set(v___x_3286_, 0, v___x_3288_);
v___x_3290_ = v___x_3286_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3288_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v_a_3281_);
v___x_3290_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
v_a_3280_ = v_tail_3284_;
v_a_3281_ = v___x_3290_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0(lean_object* v_f_3294_, lean_object* v_xs_3295_, lean_object* v_x_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3302_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1);
v___x_3303_ = l_Lean_MessageData_ofName(v_f_3294_);
v___x_3304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3);
v___x_3306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3304_);
lean_ctor_set(v___x_3306_, 1, v___x_3305_);
v___x_3307_ = lean_array_to_list(v_xs_3295_);
v___x_3308_ = lean_box(0);
v___x_3309_ = l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__1(v___x_3307_, v___x_3308_);
v___x_3310_ = l_Lean_MessageData_ofList(v___x_3309_);
v___x_3311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3306_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
v___x_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3311_);
return v___x_3312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0___boxed(lean_object* v_f_3313_, lean_object* v_xs_3314_, lean_object* v_x_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0(v_f_3313_, v_xs_3314_, v_x_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
lean_dec(v___y_3319_);
lean_dec_ref(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec_ref(v_x_3315_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(lean_object* v_cls_3324_, lean_object* v_msg_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v_ref_3331_; lean_object* v___x_3332_; lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3377_; 
v_ref_3331_ = lean_ctor_get(v___y_3328_, 2);
v___x_3332_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0_spec__0(v_msg_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3335_ = v___x_3332_;
v_isShared_3336_ = v_isSharedCheck_3377_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3332_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3377_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3337_; lean_object* v_traceState_3338_; lean_object* v_env_3339_; lean_object* v_nextMacroScope_3340_; lean_object* v_ngen_3341_; lean_object* v_auxDeclNGen_3342_; lean_object* v_cache_3343_; lean_object* v_messages_3344_; lean_object* v_infoState_3345_; lean_object* v_snapshotTasks_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3376_; 
v___x_3337_ = lean_st_ref_take(v___y_3329_);
v_traceState_3338_ = lean_ctor_get(v___x_3337_, 4);
v_env_3339_ = lean_ctor_get(v___x_3337_, 0);
v_nextMacroScope_3340_ = lean_ctor_get(v___x_3337_, 1);
v_ngen_3341_ = lean_ctor_get(v___x_3337_, 2);
v_auxDeclNGen_3342_ = lean_ctor_get(v___x_3337_, 3);
v_cache_3343_ = lean_ctor_get(v___x_3337_, 5);
v_messages_3344_ = lean_ctor_get(v___x_3337_, 6);
v_infoState_3345_ = lean_ctor_get(v___x_3337_, 7);
v_snapshotTasks_3346_ = lean_ctor_get(v___x_3337_, 8);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3348_ = v___x_3337_;
v_isShared_3349_ = v_isSharedCheck_3376_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_snapshotTasks_3346_);
lean_inc(v_infoState_3345_);
lean_inc(v_messages_3344_);
lean_inc(v_cache_3343_);
lean_inc(v_traceState_3338_);
lean_inc(v_auxDeclNGen_3342_);
lean_inc(v_ngen_3341_);
lean_inc(v_nextMacroScope_3340_);
lean_inc(v_env_3339_);
lean_dec(v___x_3337_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3376_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
uint64_t v_tid_3350_; lean_object* v_traces_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3375_; 
v_tid_3350_ = lean_ctor_get_uint64(v_traceState_3338_, sizeof(void*)*1);
v_traces_3351_ = lean_ctor_get(v_traceState_3338_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v_traceState_3338_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3353_ = v_traceState_3338_;
v_isShared_3354_ = v_isSharedCheck_3375_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_traces_3351_);
lean_dec(v_traceState_3338_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3375_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; double v___x_3357_; uint8_t v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3355_ = lean_box(0);
v___x_3356_ = lean_box(0);
v___x_3357_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5___closed__0);
v___x_3358_ = 0;
v___x_3359_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_3360_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3360_, 0, v_cls_3324_);
lean_ctor_set(v___x_3360_, 1, v___x_3356_);
lean_ctor_set(v___x_3360_, 2, v___x_3359_);
lean_ctor_set_float(v___x_3360_, sizeof(void*)*3, v___x_3357_);
lean_ctor_set_float(v___x_3360_, sizeof(void*)*3 + 8, v___x_3357_);
lean_ctor_set_uint8(v___x_3360_, sizeof(void*)*3 + 16, v___x_3358_);
v___x_3361_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___closed__0));
v___x_3362_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3360_);
lean_ctor_set(v___x_3362_, 1, v_a_3333_);
lean_ctor_set(v___x_3362_, 2, v___x_3361_);
lean_inc(v_ref_3331_);
v___x_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3363_, 0, v_ref_3331_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
v___x_3364_ = l_Lean_PersistentArray_push___redArg(v_traces_3351_, v___x_3363_);
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 0, v___x_3364_);
v___x_3366_ = v___x_3353_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v___x_3364_);
lean_ctor_set_uint64(v_reuseFailAlloc_3374_, sizeof(void*)*1, v_tid_3350_);
v___x_3366_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3368_; 
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 4, v___x_3366_);
v___x_3368_ = v___x_3348_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_env_3339_);
lean_ctor_set(v_reuseFailAlloc_3373_, 1, v_nextMacroScope_3340_);
lean_ctor_set(v_reuseFailAlloc_3373_, 2, v_ngen_3341_);
lean_ctor_set(v_reuseFailAlloc_3373_, 3, v_auxDeclNGen_3342_);
lean_ctor_set(v_reuseFailAlloc_3373_, 4, v___x_3366_);
lean_ctor_set(v_reuseFailAlloc_3373_, 5, v_cache_3343_);
lean_ctor_set(v_reuseFailAlloc_3373_, 6, v_messages_3344_);
lean_ctor_set(v_reuseFailAlloc_3373_, 7, v_infoState_3345_);
lean_ctor_set(v_reuseFailAlloc_3373_, 8, v_snapshotTasks_3346_);
v___x_3368_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3369_; lean_object* v___x_3371_; 
v___x_3369_ = lean_st_ref_put(v___y_3329_, v___x_3368_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v___x_3355_);
v___x_3371_ = v___x_3335_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3355_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2___boxed(lean_object* v_cls_3378_, lean_object* v_msg_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v_cls_3378_, v_msg_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1(lean_object* v_f_3386_, lean_object* v_xs_3387_, lean_object* v_k_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_toCold_3394_; lean_object* v_options_3395_; uint8_t v_hasTrace_3396_; 
v_toCold_3394_ = lean_ctor_get(v_a_3391_, 0);
v_options_3395_ = lean_ctor_get(v_toCold_3394_, 2);
v_hasTrace_3396_ = lean_ctor_get_uint8(v_options_3395_, sizeof(void*)*1);
if (v_hasTrace_3396_ == 0)
{
lean_object* v___x_3397_; 
lean_dec_ref(v_xs_3387_);
lean_dec(v_f_3386_);
lean_inc(v_a_3392_);
lean_inc_ref(v_a_3391_);
lean_inc(v_a_3390_);
lean_inc_ref(v_a_3389_);
v___x_3397_ = lean_apply_5(v_k_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, lean_box(0));
return v___x_3397_;
}
else
{
lean_object* v_inheritedTraceOptions_3398_; lean_object* v___f_3399_; lean_object* v___y_3401_; lean_object* v___y_3402_; uint8_t v___y_3403_; lean_object* v___y_3427_; lean_object* v_a_3428_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v_a_3438_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v_a_3453_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; uint8_t v___y_3459_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v_a_3469_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v_a_3475_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v_a_3480_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v_a_3492_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; uint8_t v___y_3498_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v_a_3508_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v_a_3514_; 
v_inheritedTraceOptions_3398_ = lean_ctor_get(v_toCold_3394_, 11);
v___f_3399_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3399_, 0, v_f_3386_);
lean_closure_set(v___f_3399_, 1, v_xs_3387_);
v___x_3431_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_3432_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_3433_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29);
v___x_3434_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3433_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3541_; uint8_t v___x_3542_; 
v___x_3541_ = l_Lean_trace_profiler;
v___x_3542_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_3395_, v___x_3541_);
if (v___x_3542_ == 0)
{
lean_object* v___x_3543_; 
lean_dec_ref(v___f_3399_);
lean_inc(v_a_3392_);
lean_inc_ref(v_a_3391_);
lean_inc(v_a_3390_);
lean_inc_ref(v_a_3389_);
v___x_3543_ = lean_apply_5(v_k_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, lean_box(0));
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v_a_3544_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3544_);
v___x_3545_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3546_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3547_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3546_);
if (v___x_3547_ == 0)
{
lean_dec(v_a_3544_);
return v___x_3543_;
}
else
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
lean_dec_ref_known(v___x_3543_, 1);
lean_inc(v_a_3544_);
v___x_3548_ = l_Lean_MessageData_ofExpr(v_a_3544_);
v___x_3549_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3545_, v___x_3548_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; 
v_unused_3557_ = lean_ctor_get(v___x_3549_, 0);
lean_dec(v_unused_3557_);
v___x_3551_ = v___x_3549_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_dec(v___x_3549_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v_a_3544_);
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3544_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec(v_a_3544_);
v_a_3558_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3549_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3549_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
lean_inc(v_a_3558_);
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
v___y_3427_ = v___x_3563_;
v_a_3428_ = v_a_3558_;
goto v___jp_3426_;
}
}
}
}
}
else
{
lean_object* v_a_3566_; 
v_a_3566_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3566_);
v___y_3427_ = v___x_3543_;
v_a_3428_ = v_a_3566_;
goto v___jp_3426_;
}
}
else
{
goto v___jp_3516_;
}
}
else
{
goto v___jp_3516_;
}
v___jp_3400_:
{
if (v___y_3403_ == 0)
{
lean_object* v___x_3404_; lean_object* v___x_3405_; uint8_t v___x_3406_; 
lean_dec_ref(v___y_3401_);
v___x_3404_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3405_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3406_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3405_);
if (v___x_3406_ == 0)
{
lean_object* v___x_3407_; 
v___x_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___y_3402_);
return v___x_3407_;
}
else
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
lean_inc_ref(v___y_3402_);
v___x_3408_ = l_Lean_Exception_toMessageData(v___y_3402_);
v___x_3409_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3404_, v___x_3408_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3416_; 
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3416_ == 0)
{
lean_object* v_unused_3417_; 
v_unused_3417_ = lean_ctor_get(v___x_3409_, 0);
lean_dec(v_unused_3417_);
v___x_3411_ = v___x_3409_;
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
else
{
lean_dec(v___x_3409_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set_tag(v___x_3411_, 1);
lean_ctor_set(v___x_3411_, 0, v___y_3402_);
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___y_3402_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
lean_dec_ref(v___y_3402_);
v_a_3418_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3409_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3409_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_3402_);
return v___y_3401_;
}
}
v___jp_3426_:
{
uint8_t v___x_3429_; 
v___x_3429_ = l_Lean_Exception_isInterrupt(v_a_3428_);
if (v___x_3429_ == 0)
{
uint8_t v___x_3430_; 
lean_inc_ref(v_a_3428_);
v___x_3430_ = l_Lean_Exception_isRuntime(v_a_3428_);
v___y_3401_ = v___y_3427_;
v___y_3402_ = v_a_3428_;
v___y_3403_ = v___x_3430_;
goto v___jp_3400_;
}
else
{
v___y_3401_ = v___y_3427_;
v___y_3402_ = v_a_3428_;
v___y_3403_ = v___x_3429_;
goto v___jp_3400_;
}
}
v___jp_3435_:
{
lean_object* v___x_3439_; double v___x_3440_; double v___x_3441_; double v___x_3442_; double v___x_3443_; double v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3439_ = lean_io_mono_nanos_now();
v___x_3440_ = lean_float_of_nat(v___y_3437_);
v___x_3441_ = lean_float_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30);
v___x_3442_ = lean_float_div(v___x_3440_, v___x_3441_);
v___x_3443_ = lean_float_of_nat(v___x_3439_);
v___x_3444_ = lean_float_div(v___x_3443_, v___x_3441_);
v___x_3445_ = lean_box_float(v___x_3442_);
v___x_3446_ = lean_box_float(v___x_3444_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3445_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v_a_3438_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_3431_, v_hasTrace_3396_, v___x_3432_, v_options_3395_, v___x_3434_, v___y_3436_, v___f_3399_, v___x_3448_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
return v___x_3449_;
}
v___jp_3450_:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v_a_3453_);
v___y_3436_ = v___y_3452_;
v___y_3437_ = v___y_3451_;
v_a_3438_ = v___x_3454_;
goto v___jp_3435_;
}
v___jp_3455_:
{
if (v___y_3459_ == 0)
{
lean_object* v___x_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; 
v___x_3460_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3461_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3462_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3461_);
if (v___x_3462_ == 0)
{
v___y_3451_ = v___y_3458_;
v___y_3452_ = v___y_3457_;
v_a_3453_ = v___y_3456_;
goto v___jp_3450_;
}
else
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
lean_inc_ref(v___y_3456_);
v___x_3463_ = l_Lean_Exception_toMessageData(v___y_3456_);
v___x_3464_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3460_, v___x_3463_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_dec_ref_known(v___x_3464_, 1);
v___y_3451_ = v___y_3458_;
v___y_3452_ = v___y_3457_;
v_a_3453_ = v___y_3456_;
goto v___jp_3450_;
}
else
{
lean_object* v_a_3465_; 
lean_dec_ref(v___y_3456_);
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___y_3451_ = v___y_3458_;
v___y_3452_ = v___y_3457_;
v_a_3453_ = v_a_3465_;
goto v___jp_3450_;
}
}
}
else
{
v___y_3451_ = v___y_3458_;
v___y_3452_ = v___y_3457_;
v_a_3453_ = v___y_3456_;
goto v___jp_3450_;
}
}
v___jp_3466_:
{
uint8_t v___x_3470_; 
v___x_3470_ = l_Lean_Exception_isInterrupt(v_a_3469_);
if (v___x_3470_ == 0)
{
uint8_t v___x_3471_; 
lean_inc_ref(v_a_3469_);
v___x_3471_ = l_Lean_Exception_isRuntime(v_a_3469_);
v___y_3456_ = v_a_3469_;
v___y_3457_ = v___y_3468_;
v___y_3458_ = v___y_3467_;
v___y_3459_ = v___x_3471_;
goto v___jp_3455_;
}
else
{
v___y_3456_ = v_a_3469_;
v___y_3457_ = v___y_3468_;
v___y_3458_ = v___y_3467_;
v___y_3459_ = v___x_3470_;
goto v___jp_3455_;
}
}
v___jp_3472_:
{
lean_object* v___x_3476_; 
v___x_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3476_, 0, v_a_3475_);
v___y_3436_ = v___y_3474_;
v___y_3437_ = v___y_3473_;
v_a_3438_ = v___x_3476_;
goto v___jp_3435_;
}
v___jp_3477_:
{
lean_object* v___x_3481_; double v___x_3482_; double v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3481_ = lean_io_get_num_heartbeats();
v___x_3482_ = lean_float_of_nat(v___y_3478_);
v___x_3483_ = lean_float_of_nat(v___x_3481_);
v___x_3484_ = lean_box_float(v___x_3482_);
v___x_3485_ = lean_box_float(v___x_3483_);
v___x_3486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3484_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
v___x_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3487_, 0, v_a_3480_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_3431_, v_hasTrace_3396_, v___x_3432_, v_options_3395_, v___x_3434_, v___y_3479_, v___f_3399_, v___x_3487_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
return v___x_3488_;
}
v___jp_3489_:
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3493_, 0, v_a_3492_);
v___y_3478_ = v___y_3490_;
v___y_3479_ = v___y_3491_;
v_a_3480_ = v___x_3493_;
goto v___jp_3477_;
}
v___jp_3494_:
{
if (v___y_3498_ == 0)
{
lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
v___x_3499_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3500_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3501_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3500_);
if (v___x_3501_ == 0)
{
v___y_3490_ = v___y_3495_;
v___y_3491_ = v___y_3497_;
v_a_3492_ = v___y_3496_;
goto v___jp_3489_;
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
lean_inc_ref(v___y_3496_);
v___x_3502_ = l_Lean_Exception_toMessageData(v___y_3496_);
v___x_3503_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3499_, v___x_3502_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_dec_ref_known(v___x_3503_, 1);
v___y_3490_ = v___y_3495_;
v___y_3491_ = v___y_3497_;
v_a_3492_ = v___y_3496_;
goto v___jp_3489_;
}
else
{
lean_object* v_a_3504_; 
lean_dec_ref(v___y_3496_);
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v___y_3490_ = v___y_3495_;
v___y_3491_ = v___y_3497_;
v_a_3492_ = v_a_3504_;
goto v___jp_3489_;
}
}
}
else
{
v___y_3490_ = v___y_3495_;
v___y_3491_ = v___y_3497_;
v_a_3492_ = v___y_3496_;
goto v___jp_3489_;
}
}
v___jp_3505_:
{
uint8_t v___x_3509_; 
v___x_3509_ = l_Lean_Exception_isInterrupt(v_a_3508_);
if (v___x_3509_ == 0)
{
uint8_t v___x_3510_; 
lean_inc_ref(v_a_3508_);
v___x_3510_ = l_Lean_Exception_isRuntime(v_a_3508_);
v___y_3495_ = v___y_3506_;
v___y_3496_ = v_a_3508_;
v___y_3497_ = v___y_3507_;
v___y_3498_ = v___x_3510_;
goto v___jp_3494_;
}
else
{
v___y_3495_ = v___y_3506_;
v___y_3496_ = v_a_3508_;
v___y_3497_ = v___y_3507_;
v___y_3498_ = v___x_3509_;
goto v___jp_3494_;
}
}
v___jp_3511_:
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3515_, 0, v_a_3514_);
v___y_3478_ = v___y_3512_;
v___y_3479_ = v___y_3513_;
v_a_3480_ = v___x_3515_;
goto v___jp_3477_;
}
v___jp_3516_:
{
lean_object* v___x_3517_; lean_object* v_a_3518_; lean_object* v___x_3519_; uint8_t v___x_3520_; 
v___x_3517_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v_a_3392_);
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3518_);
lean_dec_ref(v___x_3517_);
v___x_3519_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3520_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_3395_, v___x_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = lean_io_mono_nanos_now();
lean_inc(v_a_3392_);
lean_inc_ref(v_a_3391_);
lean_inc(v_a_3390_);
lean_inc_ref(v_a_3389_);
v___x_3522_ = lean_apply_5(v_k_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, lean_box(0));
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; uint8_t v___x_3526_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3524_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3525_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3526_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3525_);
if (v___x_3526_ == 0)
{
v___y_3473_ = v___x_3521_;
v___y_3474_ = v_a_3518_;
v_a_3475_ = v_a_3523_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_inc(v_a_3523_);
v___x_3527_ = l_Lean_MessageData_ofExpr(v_a_3523_);
v___x_3528_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3524_, v___x_3527_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_dec_ref_known(v___x_3528_, 1);
v___y_3473_ = v___x_3521_;
v___y_3474_ = v_a_3518_;
v_a_3475_ = v_a_3523_;
goto v___jp_3472_;
}
else
{
lean_object* v_a_3529_; 
lean_dec(v_a_3523_);
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___y_3467_ = v___x_3521_;
v___y_3468_ = v_a_3518_;
v_a_3469_ = v_a_3529_;
goto v___jp_3466_;
}
}
}
else
{
lean_object* v_a_3530_; 
v_a_3530_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3522_, 1);
v___y_3467_ = v___x_3521_;
v___y_3468_ = v_a_3518_;
v_a_3469_ = v_a_3530_;
goto v___jp_3466_;
}
}
else
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3392_);
lean_inc_ref(v_a_3391_);
lean_inc(v_a_3390_);
lean_inc_ref(v_a_3389_);
v___x_3532_ = lean_apply_5(v_k_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, lean_box(0));
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; uint8_t v___x_3536_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3534_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3535_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3536_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3398_, v_options_3395_, v___x_3535_);
if (v___x_3536_ == 0)
{
v___y_3512_ = v___x_3531_;
v___y_3513_ = v_a_3518_;
v_a_3514_ = v_a_3533_;
goto v___jp_3511_;
}
else
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
lean_inc(v_a_3533_);
v___x_3537_ = l_Lean_MessageData_ofExpr(v_a_3533_);
v___x_3538_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3534_, v___x_3537_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_dec_ref_known(v___x_3538_, 1);
v___y_3512_ = v___x_3531_;
v___y_3513_ = v_a_3518_;
v_a_3514_ = v_a_3533_;
goto v___jp_3511_;
}
else
{
lean_object* v_a_3539_; 
lean_dec(v_a_3533_);
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___y_3506_ = v___x_3531_;
v___y_3507_ = v_a_3518_;
v_a_3508_ = v_a_3539_;
goto v___jp_3505_;
}
}
}
else
{
lean_object* v_a_3540_; 
v_a_3540_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3540_);
lean_dec_ref_known(v___x_3532_, 1);
v___y_3506_ = v___x_3531_;
v___y_3507_ = v_a_3518_;
v_a_3508_ = v_a_3540_;
goto v___jp_3505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1___boxed(lean_object* v_f_3567_, lean_object* v_xs_3568_, lean_object* v_k_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1(v_f_3567_, v_xs_3568_, v_k_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_);
lean_dec(v_a_3573_);
lean_dec_ref(v_a_3572_);
lean_dec(v_a_3571_);
lean_dec_ref(v_a_3570_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM(lean_object* v_constName_3576_, lean_object* v_xs_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_){
_start:
{
lean_object* v___f_3583_; uint8_t v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
lean_inc_ref(v_xs_3577_);
lean_inc(v_constName_3576_);
v___f_3583_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3583_, 0, v_constName_3576_);
lean_closure_set(v___f_3583_, 1, v_xs_3577_);
v___x_3584_ = 0;
v___x_3585_ = lean_box(v___x_3584_);
v___x_3586_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3586_, 0, lean_box(0));
lean_closure_set(v___x_3586_, 1, v___f_3583_);
lean_closure_set(v___x_3586_, 2, v___x_3585_);
v___x_3587_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1(v_constName_3576_, v_xs_3577_, v___x_3586_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM___boxed(lean_object* v_constName_3588_, lean_object* v_xs_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lean_Meta_mkAppM(v_constName_3588_, v_xs_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_);
lean_dec(v_a_3593_);
lean_dec_ref(v_a_3592_);
lean_dec(v_a_3591_);
lean_dec_ref(v_a_3590_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3(lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v___x_3601_; 
v___x_3601_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v___y_3599_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___boxed(lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3(v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec(v___y_3603_);
lean_dec_ref(v___y_3602_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7(lean_object* v_00_u03b1_3608_, lean_object* v_x_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___redArg(v_x_3609_);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7___boxed(lean_object* v_00_u03b1_3616_, lean_object* v_x_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5_spec__7(v_00_u03b1_3616_, v_x_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0(lean_object* v_f_3624_, lean_object* v_xs_3625_, lean_object* v_x_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3632_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1);
v___x_3633_ = l_Lean_MessageData_ofExpr(v_f_3624_);
v___x_3634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3632_);
lean_ctor_set(v___x_3634_, 1, v___x_3633_);
v___x_3635_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3);
v___x_3636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3634_);
lean_ctor_set(v___x_3636_, 1, v___x_3635_);
v___x_3637_ = lean_array_to_list(v_xs_3625_);
v___x_3638_ = lean_box(0);
v___x_3639_ = l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__1(v___x_3637_, v___x_3638_);
v___x_3640_ = l_Lean_MessageData_ofList(v___x_3639_);
v___x_3641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3636_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
v___x_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
return v___x_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0___boxed(lean_object* v_f_3643_, lean_object* v_xs_3644_, lean_object* v_x_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0(v_f_3643_, v_xs_3644_, v_x_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec_ref(v_x_3645_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0(lean_object* v_f_3652_, lean_object* v_xs_3653_, lean_object* v_k_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_){
_start:
{
lean_object* v_toCold_3660_; lean_object* v_options_3661_; uint8_t v_hasTrace_3662_; 
v_toCold_3660_ = lean_ctor_get(v_a_3657_, 0);
v_options_3661_ = lean_ctor_get(v_toCold_3660_, 2);
v_hasTrace_3662_ = lean_ctor_get_uint8(v_options_3661_, sizeof(void*)*1);
if (v_hasTrace_3662_ == 0)
{
lean_object* v___x_3663_; 
lean_dec_ref(v_xs_3653_);
lean_dec_ref(v_f_3652_);
lean_inc(v_a_3658_);
lean_inc_ref(v_a_3657_);
lean_inc(v_a_3656_);
lean_inc_ref(v_a_3655_);
v___x_3663_ = lean_apply_5(v_k_3654_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_, lean_box(0));
return v___x_3663_;
}
else
{
lean_object* v_inheritedTraceOptions_3664_; lean_object* v___f_3665_; lean_object* v___y_3667_; lean_object* v___y_3668_; uint8_t v___y_3669_; lean_object* v___y_3693_; lean_object* v_a_3694_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v_a_3704_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v_a_3719_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; uint8_t v___y_3725_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v_a_3735_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v_a_3741_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v_a_3746_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v_a_3758_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3763_; uint8_t v___y_3764_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v_a_3774_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v_a_3780_; 
v_inheritedTraceOptions_3664_ = lean_ctor_get(v_toCold_3660_, 11);
v___f_3665_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3665_, 0, v_f_3652_);
lean_closure_set(v___f_3665_, 1, v_xs_3653_);
v___x_3697_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_3698_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_3699_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29);
v___x_3700_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3699_);
if (v___x_3700_ == 0)
{
lean_object* v___x_3807_; uint8_t v___x_3808_; 
v___x_3807_ = l_Lean_trace_profiler;
v___x_3808_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_3661_, v___x_3807_);
if (v___x_3808_ == 0)
{
lean_object* v___x_3809_; 
lean_dec_ref(v___f_3665_);
lean_inc(v_a_3658_);
lean_inc_ref(v_a_3657_);
lean_inc(v_a_3656_);
lean_inc_ref(v_a_3655_);
v___x_3809_ = lean_apply_5(v_k_3654_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_, lean_box(0));
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; uint8_t v___x_3813_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_a_3810_);
v___x_3811_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3812_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3813_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3812_);
if (v___x_3813_ == 0)
{
lean_dec(v_a_3810_);
return v___x_3809_;
}
else
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
lean_dec_ref_known(v___x_3809_, 1);
lean_inc(v_a_3810_);
v___x_3814_ = l_Lean_MessageData_ofExpr(v_a_3810_);
v___x_3815_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3811_, v___x_3814_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3822_ == 0)
{
lean_object* v_unused_3823_; 
v_unused_3823_ = lean_ctor_get(v___x_3815_, 0);
lean_dec(v_unused_3823_);
v___x_3817_ = v___x_3815_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_dec(v___x_3815_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_a_3810_);
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3810_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3831_; 
lean_dec(v_a_3810_);
v_a_3824_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3826_ = v___x_3815_;
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v___x_3815_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3829_; 
lean_inc(v_a_3824_);
if (v_isShared_3827_ == 0)
{
v___x_3829_ = v___x_3826_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_a_3824_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
v___y_3693_ = v___x_3829_;
v_a_3694_ = v_a_3824_;
goto v___jp_3692_;
}
}
}
}
}
else
{
lean_object* v_a_3832_; 
v_a_3832_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_a_3832_);
v___y_3693_ = v___x_3809_;
v_a_3694_ = v_a_3832_;
goto v___jp_3692_;
}
}
else
{
goto v___jp_3782_;
}
}
else
{
goto v___jp_3782_;
}
v___jp_3666_:
{
if (v___y_3669_ == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3671_; uint8_t v___x_3672_; 
lean_dec_ref(v___y_3668_);
v___x_3670_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3671_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3672_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3671_);
if (v___x_3672_ == 0)
{
lean_object* v___x_3673_; 
v___x_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3673_, 0, v___y_3667_);
return v___x_3673_;
}
else
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
lean_inc_ref(v___y_3667_);
v___x_3674_ = l_Lean_Exception_toMessageData(v___y_3667_);
v___x_3675_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3670_, v___x_3674_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3682_ == 0)
{
lean_object* v_unused_3683_; 
v_unused_3683_ = lean_ctor_get(v___x_3675_, 0);
lean_dec(v_unused_3683_);
v___x_3677_ = v___x_3675_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_dec(v___x_3675_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
lean_ctor_set_tag(v___x_3677_, 1);
lean_ctor_set(v___x_3677_, 0, v___y_3667_);
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___y_3667_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
else
{
lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3691_; 
lean_dec_ref(v___y_3667_);
v_a_3684_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3686_ = v___x_3675_;
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3675_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3684_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_3667_);
return v___y_3668_;
}
}
v___jp_3692_:
{
uint8_t v___x_3695_; 
v___x_3695_ = l_Lean_Exception_isInterrupt(v_a_3694_);
if (v___x_3695_ == 0)
{
uint8_t v___x_3696_; 
lean_inc_ref(v_a_3694_);
v___x_3696_ = l_Lean_Exception_isRuntime(v_a_3694_);
v___y_3667_ = v_a_3694_;
v___y_3668_ = v___y_3693_;
v___y_3669_ = v___x_3696_;
goto v___jp_3666_;
}
else
{
v___y_3667_ = v_a_3694_;
v___y_3668_ = v___y_3693_;
v___y_3669_ = v___x_3695_;
goto v___jp_3666_;
}
}
v___jp_3701_:
{
lean_object* v___x_3705_; double v___x_3706_; double v___x_3707_; double v___x_3708_; double v___x_3709_; double v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3705_ = lean_io_mono_nanos_now();
v___x_3706_ = lean_float_of_nat(v___y_3702_);
v___x_3707_ = lean_float_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30);
v___x_3708_ = lean_float_div(v___x_3706_, v___x_3707_);
v___x_3709_ = lean_float_of_nat(v___x_3705_);
v___x_3710_ = lean_float_div(v___x_3709_, v___x_3707_);
v___x_3711_ = lean_box_float(v___x_3708_);
v___x_3712_ = lean_box_float(v___x_3710_);
v___x_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3711_);
lean_ctor_set(v___x_3713_, 1, v___x_3712_);
v___x_3714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3714_, 0, v_a_3704_);
lean_ctor_set(v___x_3714_, 1, v___x_3713_);
v___x_3715_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_3697_, v_hasTrace_3662_, v___x_3698_, v_options_3661_, v___x_3700_, v___y_3703_, v___f_3665_, v___x_3714_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
return v___x_3715_;
}
v___jp_3716_:
{
lean_object* v___x_3720_; 
v___x_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3720_, 0, v_a_3719_);
v___y_3702_ = v___y_3717_;
v___y_3703_ = v___y_3718_;
v_a_3704_ = v___x_3720_;
goto v___jp_3701_;
}
v___jp_3721_:
{
if (v___y_3725_ == 0)
{
lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3726_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3727_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3728_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3727_);
if (v___x_3728_ == 0)
{
v___y_3717_ = v___y_3722_;
v___y_3718_ = v___y_3723_;
v_a_3719_ = v___y_3724_;
goto v___jp_3716_;
}
else
{
lean_object* v___x_3729_; lean_object* v___x_3730_; 
lean_inc_ref(v___y_3724_);
v___x_3729_ = l_Lean_Exception_toMessageData(v___y_3724_);
v___x_3730_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3726_, v___x_3729_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_dec_ref_known(v___x_3730_, 1);
v___y_3717_ = v___y_3722_;
v___y_3718_ = v___y_3723_;
v_a_3719_ = v___y_3724_;
goto v___jp_3716_;
}
else
{
lean_object* v_a_3731_; 
lean_dec_ref(v___y_3724_);
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3730_, 1);
v___y_3717_ = v___y_3722_;
v___y_3718_ = v___y_3723_;
v_a_3719_ = v_a_3731_;
goto v___jp_3716_;
}
}
}
else
{
v___y_3717_ = v___y_3722_;
v___y_3718_ = v___y_3723_;
v_a_3719_ = v___y_3724_;
goto v___jp_3716_;
}
}
v___jp_3732_:
{
uint8_t v___x_3736_; 
v___x_3736_ = l_Lean_Exception_isInterrupt(v_a_3735_);
if (v___x_3736_ == 0)
{
uint8_t v___x_3737_; 
lean_inc_ref(v_a_3735_);
v___x_3737_ = l_Lean_Exception_isRuntime(v_a_3735_);
v___y_3722_ = v___y_3733_;
v___y_3723_ = v___y_3734_;
v___y_3724_ = v_a_3735_;
v___y_3725_ = v___x_3737_;
goto v___jp_3721_;
}
else
{
v___y_3722_ = v___y_3733_;
v___y_3723_ = v___y_3734_;
v___y_3724_ = v_a_3735_;
v___y_3725_ = v___x_3736_;
goto v___jp_3721_;
}
}
v___jp_3738_:
{
lean_object* v___x_3742_; 
v___x_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3742_, 0, v_a_3741_);
v___y_3702_ = v___y_3739_;
v___y_3703_ = v___y_3740_;
v_a_3704_ = v___x_3742_;
goto v___jp_3701_;
}
v___jp_3743_:
{
lean_object* v___x_3747_; double v___x_3748_; double v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3747_ = lean_io_get_num_heartbeats();
v___x_3748_ = lean_float_of_nat(v___y_3745_);
v___x_3749_ = lean_float_of_nat(v___x_3747_);
v___x_3750_ = lean_box_float(v___x_3748_);
v___x_3751_ = lean_box_float(v___x_3749_);
v___x_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3750_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v_a_3746_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_3697_, v_hasTrace_3662_, v___x_3698_, v_options_3661_, v___x_3700_, v___y_3744_, v___f_3665_, v___x_3753_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
return v___x_3754_;
}
v___jp_3755_:
{
lean_object* v___x_3759_; 
v___x_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3759_, 0, v_a_3758_);
v___y_3744_ = v___y_3756_;
v___y_3745_ = v___y_3757_;
v_a_3746_ = v___x_3759_;
goto v___jp_3743_;
}
v___jp_3760_:
{
if (v___y_3764_ == 0)
{
lean_object* v___x_3765_; lean_object* v___x_3766_; uint8_t v___x_3767_; 
v___x_3765_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_3766_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_3767_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3766_);
if (v___x_3767_ == 0)
{
v___y_3756_ = v___y_3761_;
v___y_3757_ = v___y_3763_;
v_a_3758_ = v___y_3762_;
goto v___jp_3755_;
}
else
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
lean_inc_ref(v___y_3762_);
v___x_3768_ = l_Lean_Exception_toMessageData(v___y_3762_);
v___x_3769_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3765_, v___x_3768_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_dec_ref_known(v___x_3769_, 1);
v___y_3756_ = v___y_3761_;
v___y_3757_ = v___y_3763_;
v_a_3758_ = v___y_3762_;
goto v___jp_3755_;
}
else
{
lean_object* v_a_3770_; 
lean_dec_ref(v___y_3762_);
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v___x_3769_, 1);
v___y_3756_ = v___y_3761_;
v___y_3757_ = v___y_3763_;
v_a_3758_ = v_a_3770_;
goto v___jp_3755_;
}
}
}
else
{
v___y_3756_ = v___y_3761_;
v___y_3757_ = v___y_3763_;
v_a_3758_ = v___y_3762_;
goto v___jp_3755_;
}
}
v___jp_3771_:
{
uint8_t v___x_3775_; 
v___x_3775_ = l_Lean_Exception_isInterrupt(v_a_3774_);
if (v___x_3775_ == 0)
{
uint8_t v___x_3776_; 
lean_inc_ref(v_a_3774_);
v___x_3776_ = l_Lean_Exception_isRuntime(v_a_3774_);
v___y_3761_ = v___y_3772_;
v___y_3762_ = v_a_3774_;
v___y_3763_ = v___y_3773_;
v___y_3764_ = v___x_3776_;
goto v___jp_3760_;
}
else
{
v___y_3761_ = v___y_3772_;
v___y_3762_ = v_a_3774_;
v___y_3763_ = v___y_3773_;
v___y_3764_ = v___x_3775_;
goto v___jp_3760_;
}
}
v___jp_3777_:
{
lean_object* v___x_3781_; 
v___x_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3781_, 0, v_a_3780_);
v___y_3744_ = v___y_3778_;
v___y_3745_ = v___y_3779_;
v_a_3746_ = v___x_3781_;
goto v___jp_3743_;
}
v___jp_3782_:
{
lean_object* v___x_3783_; lean_object* v_a_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; 
v___x_3783_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v_a_3658_);
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref(v___x_3783_);
v___x_3785_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3786_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_3661_, v___x_3785_);
if (v___x_3786_ == 0)
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = lean_io_mono_nanos_now();
lean_inc(v_a_3658_);
lean_inc_ref(v_a_3657_);
lean_inc(v_a_3656_);
lean_inc_ref(v_a_3655_);
v___x_3788_ = lean_apply_5(v_k_3654_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_, lean_box(0));
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_a_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v_a_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3788_, 1);
v___x_3790_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3791_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3792_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3791_);
if (v___x_3792_ == 0)
{
v___y_3739_ = v___x_3787_;
v___y_3740_ = v_a_3784_;
v_a_3741_ = v_a_3789_;
goto v___jp_3738_;
}
else
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
lean_inc(v_a_3789_);
v___x_3793_ = l_Lean_MessageData_ofExpr(v_a_3789_);
v___x_3794_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3790_, v___x_3793_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_dec_ref_known(v___x_3794_, 1);
v___y_3739_ = v___x_3787_;
v___y_3740_ = v_a_3784_;
v_a_3741_ = v_a_3789_;
goto v___jp_3738_;
}
else
{
lean_object* v_a_3795_; 
lean_dec(v_a_3789_);
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
v___y_3733_ = v___x_3787_;
v___y_3734_ = v_a_3784_;
v_a_3735_ = v_a_3795_;
goto v___jp_3732_;
}
}
}
else
{
lean_object* v_a_3796_; 
v_a_3796_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3788_, 1);
v___y_3733_ = v___x_3787_;
v___y_3734_ = v_a_3784_;
v_a_3735_ = v_a_3796_;
goto v___jp_3732_;
}
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3797_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3658_);
lean_inc_ref(v_a_3657_);
lean_inc(v_a_3656_);
lean_inc_ref(v_a_3655_);
v___x_3798_ = lean_apply_5(v_k_3654_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_, lean_box(0));
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; uint8_t v___x_3802_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v___x_3798_, 1);
v___x_3800_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_3801_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_3802_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3664_, v_options_3661_, v___x_3801_);
if (v___x_3802_ == 0)
{
v___y_3778_ = v_a_3784_;
v___y_3779_ = v___x_3797_;
v_a_3780_ = v_a_3799_;
goto v___jp_3777_;
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
lean_inc(v_a_3799_);
v___x_3803_ = l_Lean_MessageData_ofExpr(v_a_3799_);
v___x_3804_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_3800_, v___x_3803_, v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_dec_ref_known(v___x_3804_, 1);
v___y_3778_ = v_a_3784_;
v___y_3779_ = v___x_3797_;
v_a_3780_ = v_a_3799_;
goto v___jp_3777_;
}
else
{
lean_object* v_a_3805_; 
lean_dec(v_a_3799_);
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref_known(v___x_3804_, 1);
v___y_3772_ = v_a_3784_;
v___y_3773_ = v___x_3797_;
v_a_3774_ = v_a_3805_;
goto v___jp_3771_;
}
}
}
else
{
lean_object* v_a_3806_; 
v_a_3806_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3798_, 1);
v___y_3772_ = v_a_3784_;
v___y_3773_ = v___x_3797_;
v_a_3774_ = v_a_3806_;
goto v___jp_3771_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0___boxed(lean_object* v_f_3833_, lean_object* v_xs_3834_, lean_object* v_k_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_){
_start:
{
lean_object* v_res_3841_; 
v_res_3841_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0(v_f_3833_, v_xs_3834_, v_k_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_);
lean_dec(v_a_3839_);
lean_dec_ref(v_a_3838_);
lean_dec(v_a_3837_);
lean_dec_ref(v_a_3836_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM_x27(lean_object* v_f_3842_, lean_object* v_xs_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_){
_start:
{
lean_object* v___x_3849_; 
lean_inc(v_a_3847_);
lean_inc_ref(v_a_3846_);
lean_inc(v_a_3845_);
lean_inc_ref(v_a_3844_);
lean_inc_ref(v_f_3842_);
v___x_3849_ = lean_infer_type(v_f_3842_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_);
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v_a_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v_a_3850_ = lean_ctor_get(v___x_3849_, 0);
lean_inc(v_a_3850_);
lean_dec_ref_known(v___x_3849_, 1);
lean_inc_ref(v_xs_3843_);
lean_inc_ref(v_f_3842_);
v___x_3851_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___boxed), 8, 3);
lean_closure_set(v___x_3851_, 0, v_f_3842_);
lean_closure_set(v___x_3851_, 1, v_a_3850_);
lean_closure_set(v___x_3851_, 2, v_xs_3843_);
v___x_3852_ = 0;
v___x_3853_ = lean_box(v___x_3852_);
v___x_3854_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3854_, 0, lean_box(0));
lean_closure_set(v___x_3854_, 1, v___x_3851_);
lean_closure_set(v___x_3854_, 2, v___x_3853_);
v___x_3855_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_x27_spec__0(v_f_3842_, v_xs_3843_, v___x_3854_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_);
return v___x_3855_;
}
else
{
lean_dec_ref(v_xs_3843_);
lean_dec_ref(v_f_3842_);
return v___x_3849_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppM_x27___boxed(lean_object* v_f_3856_, lean_object* v_xs_3857_, lean_object* v_a_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_){
_start:
{
lean_object* v_res_3863_; 
v_res_3863_ = l_Lean_Meta_mkAppM_x27(v_f_3856_, v_xs_3857_, v_a_3858_, v_a_3859_, v_a_3860_, v_a_3861_);
lean_dec(v_a_3861_);
lean_dec_ref(v_a_3860_);
lean_dec(v_a_3859_);
lean_dec_ref(v_a_3858_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0(lean_object* v_as_3864_, size_t v_i_3865_, size_t v_stop_3866_, lean_object* v_b_3867_){
_start:
{
lean_object* v___y_3869_; uint8_t v___x_3873_; 
v___x_3873_ = lean_usize_dec_eq(v_i_3865_, v_stop_3866_);
if (v___x_3873_ == 0)
{
lean_object* v___x_3874_; 
v___x_3874_ = lean_array_uget_borrowed(v_as_3864_, v_i_3865_);
if (lean_obj_tag(v___x_3874_) == 0)
{
v___y_3869_ = v_b_3867_;
goto v___jp_3868_;
}
else
{
lean_object* v_val_3875_; lean_object* v___x_3876_; 
v_val_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_val_3875_);
v___x_3876_ = lean_array_push(v_b_3867_, v_val_3875_);
v___y_3869_ = v___x_3876_;
goto v___jp_3868_;
}
}
else
{
return v_b_3867_;
}
v___jp_3868_:
{
size_t v___x_3870_; size_t v___x_3871_; 
v___x_3870_ = ((size_t)1ULL);
v___x_3871_ = lean_usize_add(v_i_3865_, v___x_3870_);
v_i_3865_ = v___x_3871_;
v_b_3867_ = v___y_3869_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0___boxed(lean_object* v_as_3877_, lean_object* v_i_3878_, lean_object* v_stop_3879_, lean_object* v_b_3880_){
_start:
{
size_t v_i_boxed_3881_; size_t v_stop_boxed_3882_; lean_object* v_res_3883_; 
v_i_boxed_3881_ = lean_unbox_usize(v_i_3878_);
lean_dec(v_i_3878_);
v_stop_boxed_3882_ = lean_unbox_usize(v_stop_3879_);
lean_dec(v_stop_3879_);
v_res_3883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0(v_as_3877_, v_i_boxed_3881_, v_stop_boxed_3882_, v_b_3880_);
lean_dec_ref(v_as_3877_);
return v_res_3883_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4(void){
_start:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3890_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__3));
v___x_3891_ = l_Lean_MessageData_ofFormat(v___x_3890_);
return v___x_3891_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5(void){
_start:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; 
v___x_3892_ = lean_box(1);
v___x_3893_ = l_Lean_MessageData_ofFormat(v___x_3892_);
return v___x_3893_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8(void){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__7));
v___x_3898_ = l_Lean_MessageData_ofFormat(v___x_3897_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux(lean_object* v_f_3899_, lean_object* v_xs_3900_, lean_object* v_x_3901_, lean_object* v_x_3902_, lean_object* v_x_3903_, lean_object* v_x_3904_, lean_object* v_x_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_){
_start:
{
if (lean_obj_tag(v_x_3905_) == 7)
{
lean_object* v_binderName_3911_; lean_object* v_binderType_3912_; lean_object* v_body_3913_; uint8_t v_binderInfo_3914_; lean_object* v___x_3915_; uint8_t v___x_3916_; 
v_binderName_3911_ = lean_ctor_get(v_x_3905_, 0);
lean_inc(v_binderName_3911_);
v_binderType_3912_ = lean_ctor_get(v_x_3905_, 1);
lean_inc_ref(v_binderType_3912_);
v_body_3913_ = lean_ctor_get(v_x_3905_, 2);
lean_inc_ref(v_body_3913_);
v_binderInfo_3914_ = lean_ctor_get_uint8(v_x_3905_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_3905_, 3);
v___x_3915_ = lean_array_get_size(v_xs_3900_);
v___x_3916_ = lean_nat_dec_lt(v_x_3901_, v___x_3915_);
if (v___x_3916_ == 0)
{
lean_object* v___x_3917_; lean_object* v___x_3918_; 
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_binderType_3912_);
lean_dec(v_binderName_3911_);
lean_dec(v_x_3903_);
lean_dec(v_x_3901_);
v___x_3917_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1));
v___x_3918_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(v___x_3917_, v_f_3899_, v_x_3902_, v_x_3904_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
lean_dec_ref(v_x_3904_);
lean_dec_ref(v_x_3902_);
return v___x_3918_;
}
else
{
lean_object* v___x_3919_; lean_object* v_d_3920_; lean_object* v___x_3921_; 
v___x_3919_ = lean_array_get_size(v_x_3902_);
v_d_3920_ = lean_expr_instantiate_rev_range(v_binderType_3912_, v_x_3903_, v___x_3919_, v_x_3902_);
lean_dec_ref(v_binderType_3912_);
v___x_3921_ = lean_array_fget_borrowed(v_xs_3900_, v_x_3901_);
if (lean_obj_tag(v___x_3921_) == 0)
{
if (v_binderInfo_3914_ == 3)
{
lean_object* v___x_3922_; uint8_t v___x_3923_; lean_object* v___x_3924_; 
v___x_3922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3922_, 0, v_d_3920_);
v___x_3923_ = 1;
v___x_3924_ = l_Lean_Meta_mkFreshExprMVar(v___x_3922_, v___x_3923_, v_binderName_3911_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc_n(v_a_3925_, 2);
lean_dec_ref_known(v___x_3924_, 1);
v___x_3926_ = lean_unsigned_to_nat(1u);
v___x_3927_ = lean_nat_add(v_x_3901_, v___x_3926_);
lean_dec(v_x_3901_);
v___x_3928_ = lean_array_push(v_x_3902_, v_a_3925_);
v___x_3929_ = l_Lean_Expr_mvarId_x21(v_a_3925_);
lean_dec(v_a_3925_);
v___x_3930_ = lean_array_push(v_x_3904_, v___x_3929_);
v_x_3901_ = v___x_3927_;
v_x_3902_ = v___x_3928_;
v_x_3904_ = v___x_3930_;
v_x_3905_ = v_body_3913_;
goto _start;
}
else
{
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_x_3904_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3902_);
lean_dec(v_x_3901_);
lean_dec_ref(v_f_3899_);
return v___x_3924_;
}
}
else
{
lean_object* v___x_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; 
v___x_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3932_, 0, v_d_3920_);
v___x_3933_ = 0;
v___x_3934_ = l_Lean_Meta_mkFreshExprMVar(v___x_3932_, v___x_3933_, v_binderName_3911_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3934_, 1);
v___x_3936_ = lean_unsigned_to_nat(1u);
v___x_3937_ = lean_nat_add(v_x_3901_, v___x_3936_);
lean_dec(v_x_3901_);
v___x_3938_ = lean_array_push(v_x_3902_, v_a_3935_);
v_x_3901_ = v___x_3937_;
v_x_3902_ = v___x_3938_;
v_x_3905_ = v_body_3913_;
goto _start;
}
else
{
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_x_3904_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3902_);
lean_dec(v_x_3901_);
lean_dec_ref(v_f_3899_);
return v___x_3934_;
}
}
}
else
{
lean_object* v_val_3940_; lean_object* v___x_3941_; 
lean_dec(v_binderName_3911_);
v_val_3940_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3909_);
lean_inc_ref(v_a_3908_);
lean_inc(v_a_3907_);
lean_inc_ref(v_a_3906_);
lean_inc(v_val_3940_);
v___x_3941_ = lean_infer_type(v_val_3940_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3943_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
v___x_3943_ = l_Lean_Meta_isExprDefEq(v_d_3920_, v_a_3942_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; uint8_t v___x_3945_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3943_, 1);
v___x_3945_ = lean_unbox(v_a_3944_);
lean_dec(v_a_3944_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_x_3904_);
lean_dec(v_x_3903_);
lean_dec(v_x_3901_);
v___x_3946_ = l_Lean_mkAppN(v_f_3899_, v_x_3902_);
lean_dec_ref(v_x_3902_);
lean_inc(v_val_3940_);
v___x_3947_ = l_Lean_Meta_throwAppTypeMismatch___redArg(v___x_3946_, v_val_3940_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
return v___x_3947_;
}
else
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3948_ = lean_unsigned_to_nat(1u);
v___x_3949_ = lean_nat_add(v_x_3901_, v___x_3948_);
lean_dec(v_x_3901_);
lean_inc(v_val_3940_);
v___x_3950_ = lean_array_push(v_x_3902_, v_val_3940_);
v_x_3901_ = v___x_3949_;
v_x_3902_ = v___x_3950_;
v_x_3905_ = v_body_3913_;
goto _start;
}
}
else
{
lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3959_; 
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_x_3904_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3902_);
lean_dec(v_x_3901_);
lean_dec_ref(v_f_3899_);
v_a_3952_ = lean_ctor_get(v___x_3943_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3943_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3954_ = v___x_3943_;
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3943_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3957_; 
if (v_isShared_3955_ == 0)
{
v___x_3957_ = v___x_3954_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_a_3952_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
}
else
{
lean_dec_ref(v_d_3920_);
lean_dec_ref(v_body_3913_);
lean_dec_ref(v_x_3904_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3902_);
lean_dec(v_x_3901_);
lean_dec_ref(v_f_3899_);
return v___x_3941_;
}
}
}
}
else
{
lean_object* v___x_3960_; lean_object* v_type_3961_; lean_object* v___x_3962_; 
v___x_3960_ = lean_array_get_size(v_x_3902_);
v_type_3961_ = lean_expr_instantiate_rev_range(v_x_3905_, v_x_3903_, v___x_3960_, v_x_3902_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3905_);
v___x_3962_ = l_Lean_Meta_whnfD(v_type_3961_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v_a_3963_; uint8_t v___x_3964_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
lean_inc(v_a_3963_);
lean_dec_ref_known(v___x_3962_, 1);
v___x_3964_ = l_Lean_Expr_isForall(v_a_3963_);
if (v___x_3964_ == 0)
{
lean_object* v___x_3965_; uint8_t v___x_3966_; 
lean_dec(v_a_3963_);
v___x_3965_ = lean_array_get_size(v_xs_3900_);
v___x_3966_ = lean_nat_dec_eq(v_x_3901_, v___x_3965_);
lean_dec(v_x_3901_);
if (v___x_3966_ == 0)
{
lean_object* v___x_3967_; lean_object* v___y_3969_; lean_object* v___x_3982_; uint8_t v___x_3983_; 
lean_dec_ref(v_x_3904_);
lean_dec_ref(v_x_3902_);
v___x_3967_ = lean_unsigned_to_nat(0u);
v___x_3982_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0));
v___x_3983_ = lean_nat_dec_lt(v___x_3967_, v___x_3965_);
if (v___x_3983_ == 0)
{
v___y_3969_ = v___x_3982_;
goto v___jp_3968_;
}
else
{
uint8_t v___x_3984_; 
v___x_3984_ = lean_nat_dec_le(v___x_3965_, v___x_3965_);
if (v___x_3984_ == 0)
{
if (v___x_3983_ == 0)
{
v___y_3969_ = v___x_3982_;
goto v___jp_3968_;
}
else
{
size_t v___x_3985_; size_t v___x_3986_; lean_object* v___x_3987_; 
v___x_3985_ = ((size_t)0ULL);
v___x_3986_ = lean_usize_of_nat(v___x_3965_);
v___x_3987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0(v_xs_3900_, v___x_3985_, v___x_3986_, v___x_3982_);
v___y_3969_ = v___x_3987_;
goto v___jp_3968_;
}
}
else
{
size_t v___x_3988_; size_t v___x_3989_; lean_object* v___x_3990_; 
v___x_3988_ = ((size_t)0ULL);
v___x_3989_ = lean_usize_of_nat(v___x_3965_);
v___x_3990_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux_spec__0(v_xs_3900_, v___x_3988_, v___x_3989_, v___x_3982_);
v___y_3969_ = v___x_3990_;
goto v___jp_3968_;
}
}
v___jp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3970_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1));
v___x_3971_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__4);
v___x_3972_ = l_Lean_indentExpr(v_f_3899_);
v___x_3973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3971_);
lean_ctor_set(v___x_3973_, 1, v___x_3972_);
v___x_3974_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__5);
v___x_3975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3973_);
lean_ctor_set(v___x_3975_, 1, v___x_3974_);
v___x_3976_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__8);
v___x_3977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3975_);
lean_ctor_set(v___x_3977_, 1, v___x_3976_);
v___x_3978_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs_loop___closed__8);
v___x_3979_ = l_Lean_MessageData_arrayExpr_toMessageData(v___y_3969_, v___x_3967_, v___x_3978_);
lean_dec_ref(v___y_3969_);
v___x_3980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3977_);
lean_ctor_set(v___x_3980_, 1, v___x_3979_);
v___x_3981_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_3970_, v___x_3980_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
return v___x_3981_;
}
}
else
{
lean_object* v___x_3991_; lean_object* v___x_3992_; 
v___x_3991_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___closed__1));
v___x_3992_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMFinal(v___x_3991_, v_f_3899_, v_x_3902_, v_x_3904_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
lean_dec_ref(v_x_3904_);
lean_dec_ref(v_x_3902_);
return v___x_3992_;
}
}
else
{
v_x_3903_ = v___x_3960_;
v_x_3905_ = v_a_3963_;
goto _start;
}
}
else
{
lean_dec_ref(v_x_3904_);
lean_dec_ref(v_x_3902_);
lean_dec(v_x_3901_);
lean_dec_ref(v_f_3899_);
return v___x_3962_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___boxed(lean_object* v_f_3994_, lean_object* v_xs_3995_, lean_object* v_x_3996_, lean_object* v_x_3997_, lean_object* v_x_3998_, lean_object* v_x_3999_, lean_object* v_x_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_){
_start:
{
lean_object* v_res_4006_; 
v_res_4006_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux(v_f_3994_, v_xs_3995_, v_x_3996_, v_x_3997_, v_x_3998_, v_x_3999_, v_x_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_);
lean_dec(v_a_4004_);
lean_dec_ref(v_a_4003_);
lean_dec(v_a_4002_);
lean_dec_ref(v_a_4001_);
lean_dec_ref(v_xs_3995_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___lam__0(lean_object* v_constName_4007_, lean_object* v_xs_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun(v_constName_4007_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; lean_object* v_fst_4016_; lean_object* v_snd_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref_known(v___x_4014_, 1);
v_fst_4016_ = lean_ctor_get(v_a_4015_, 0);
lean_inc(v_fst_4016_);
v_snd_4017_ = lean_ctor_get(v_a_4015_, 1);
lean_inc(v_snd_4017_);
lean_dec(v_a_4015_);
v___x_4018_ = lean_unsigned_to_nat(0u);
v___x_4019_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0));
v___x_4020_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux(v_fst_4016_, v_xs_4008_, v___x_4018_, v___x_4019_, v___x_4018_, v___x_4019_, v_snd_4017_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_);
return v___x_4020_;
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4028_; 
v_a_4021_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4023_ = v___x_4014_;
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4014_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___lam__0___boxed(lean_object* v_constName_4029_, lean_object* v_xs_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Lean_Meta_mkAppOptM___lam__0(v_constName_4029_, v_xs_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec_ref(v_xs_4030_);
return v_res_4036_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__1));
v___x_4041_ = l_Lean_MessageData_ofFormat(v___x_4040_);
return v___x_4041_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0(lean_object* v_a_4042_, lean_object* v_a_4043_){
_start:
{
if (lean_obj_tag(v_a_4042_) == 0)
{
lean_object* v___x_4044_; 
v___x_4044_ = l_List_reverse___redArg(v_a_4043_);
return v___x_4044_;
}
else
{
lean_object* v_head_4045_; lean_object* v_tail_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4059_; 
v_head_4045_ = lean_ctor_get(v_a_4042_, 0);
v_tail_4046_ = lean_ctor_get(v_a_4042_, 1);
v_isSharedCheck_4059_ = !lean_is_exclusive(v_a_4042_);
if (v_isSharedCheck_4059_ == 0)
{
v___x_4048_ = v_a_4042_;
v_isShared_4049_ = v_isSharedCheck_4059_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_tail_4046_);
lean_inc(v_head_4045_);
lean_dec(v_a_4042_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4059_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___y_4051_; 
if (lean_obj_tag(v_head_4045_) == 0)
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2, &l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2_once, _init_l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0___closed__2);
v___y_4051_ = v___x_4056_;
goto v___jp_4050_;
}
else
{
lean_object* v_val_4057_; lean_object* v___x_4058_; 
v_val_4057_ = lean_ctor_get(v_head_4045_, 0);
lean_inc(v_val_4057_);
lean_dec_ref_known(v_head_4045_, 1);
v___x_4058_ = l_Lean_MessageData_ofExpr(v_val_4057_);
v___y_4051_ = v___x_4058_;
goto v___jp_4050_;
}
v___jp_4050_:
{
lean_object* v___x_4053_; 
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 1, v_a_4043_);
lean_ctor_set(v___x_4048_, 0, v___y_4051_);
v___x_4053_ = v___x_4048_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v___y_4051_);
lean_ctor_set(v_reuseFailAlloc_4055_, 1, v_a_4043_);
v___x_4053_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
v_a_4042_ = v_tail_4046_;
v_a_4043_ = v___x_4053_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0(lean_object* v_f_4060_, lean_object* v_xs_4061_, lean_object* v_x_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4068_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1);
v___x_4069_ = l_Lean_MessageData_ofName(v_f_4060_);
v___x_4070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4068_);
lean_ctor_set(v___x_4070_, 1, v___x_4069_);
v___x_4071_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3);
v___x_4072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4070_);
lean_ctor_set(v___x_4072_, 1, v___x_4071_);
v___x_4073_ = lean_array_to_list(v_xs_4061_);
v___x_4074_ = lean_box(0);
v___x_4075_ = l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0(v___x_4073_, v___x_4074_);
v___x_4076_ = l_Lean_MessageData_ofList(v___x_4075_);
v___x_4077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4072_);
lean_ctor_set(v___x_4077_, 1, v___x_4076_);
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4077_);
return v___x_4078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0___boxed(lean_object* v_f_4079_, lean_object* v_xs_4080_, lean_object* v_x_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0(v_f_4079_, v_xs_4080_, v_x_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
lean_dec(v___y_4083_);
lean_dec_ref(v___y_4082_);
lean_dec_ref(v_x_4081_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0(lean_object* v_f_4088_, lean_object* v_xs_4089_, lean_object* v_k_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_){
_start:
{
lean_object* v_toCold_4096_; lean_object* v_options_4097_; uint8_t v_hasTrace_4098_; 
v_toCold_4096_ = lean_ctor_get(v_a_4093_, 0);
v_options_4097_ = lean_ctor_get(v_toCold_4096_, 2);
v_hasTrace_4098_ = lean_ctor_get_uint8(v_options_4097_, sizeof(void*)*1);
if (v_hasTrace_4098_ == 0)
{
lean_object* v___x_4099_; 
lean_dec_ref(v_xs_4089_);
lean_dec(v_f_4088_);
lean_inc(v_a_4094_);
lean_inc_ref(v_a_4093_);
lean_inc(v_a_4092_);
lean_inc_ref(v_a_4091_);
v___x_4099_ = lean_apply_5(v_k_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, lean_box(0));
return v___x_4099_;
}
else
{
lean_object* v_inheritedTraceOptions_4100_; lean_object* v___f_4101_; lean_object* v___y_4103_; lean_object* v___y_4104_; uint8_t v___y_4105_; lean_object* v___y_4129_; lean_object* v_a_4130_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; uint8_t v___x_4136_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v_a_4140_; lean_object* v___y_4153_; lean_object* v___y_4154_; lean_object* v_a_4155_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; uint8_t v___y_4161_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v_a_4171_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v_a_4177_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v_a_4182_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v_a_4194_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; uint8_t v___y_4200_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v_a_4210_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v_a_4216_; 
v_inheritedTraceOptions_4100_ = lean_ctor_get(v_toCold_4096_, 11);
v___f_4101_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4101_, 0, v_f_4088_);
lean_closure_set(v___f_4101_, 1, v_xs_4089_);
v___x_4133_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_4134_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_4135_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29);
v___x_4136_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4135_);
if (v___x_4136_ == 0)
{
lean_object* v___x_4243_; uint8_t v___x_4244_; 
v___x_4243_ = l_Lean_trace_profiler;
v___x_4244_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_4097_, v___x_4243_);
if (v___x_4244_ == 0)
{
lean_object* v___x_4245_; 
lean_dec_ref(v___f_4101_);
lean_inc(v_a_4094_);
lean_inc_ref(v_a_4093_);
lean_inc(v_a_4092_);
lean_inc_ref(v_a_4091_);
v___x_4245_ = lean_apply_5(v_k_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, lean_box(0));
if (lean_obj_tag(v___x_4245_) == 0)
{
lean_object* v_a_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; uint8_t v___x_4249_; 
v_a_4246_ = lean_ctor_get(v___x_4245_, 0);
lean_inc(v_a_4246_);
v___x_4247_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4248_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4249_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4248_);
if (v___x_4249_ == 0)
{
lean_dec(v_a_4246_);
return v___x_4245_;
}
else
{
lean_object* v___x_4250_; lean_object* v___x_4251_; 
lean_dec_ref_known(v___x_4245_, 1);
lean_inc(v_a_4246_);
v___x_4250_ = l_Lean_MessageData_ofExpr(v_a_4246_);
v___x_4251_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4247_, v___x_4250_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4258_ == 0)
{
lean_object* v_unused_4259_; 
v_unused_4259_ = lean_ctor_get(v___x_4251_, 0);
lean_dec(v_unused_4259_);
v___x_4253_ = v___x_4251_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_dec(v___x_4251_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v_a_4246_);
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4246_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec(v_a_4246_);
v_a_4260_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4251_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4251_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
lean_inc(v_a_4260_);
if (v_isShared_4263_ == 0)
{
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
v___y_4129_ = v___x_4265_;
v_a_4130_ = v_a_4260_;
goto v___jp_4128_;
}
}
}
}
}
else
{
lean_object* v_a_4268_; 
v_a_4268_ = lean_ctor_get(v___x_4245_, 0);
lean_inc(v_a_4268_);
v___y_4129_ = v___x_4245_;
v_a_4130_ = v_a_4268_;
goto v___jp_4128_;
}
}
else
{
goto v___jp_4218_;
}
}
else
{
goto v___jp_4218_;
}
v___jp_4102_:
{
if (v___y_4105_ == 0)
{
lean_object* v___x_4106_; lean_object* v___x_4107_; uint8_t v___x_4108_; 
lean_dec_ref(v___y_4103_);
v___x_4106_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4107_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4108_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4107_);
if (v___x_4108_ == 0)
{
lean_object* v___x_4109_; 
v___x_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4109_, 0, v___y_4104_);
return v___x_4109_;
}
else
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
lean_inc_ref(v___y_4104_);
v___x_4110_ = l_Lean_Exception_toMessageData(v___y_4104_);
v___x_4111_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4106_, v___x_4110_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4118_ == 0)
{
lean_object* v_unused_4119_; 
v_unused_4119_ = lean_ctor_get(v___x_4111_, 0);
lean_dec(v_unused_4119_);
v___x_4113_ = v___x_4111_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_dec(v___x_4111_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
lean_ctor_set_tag(v___x_4113_, 1);
lean_ctor_set(v___x_4113_, 0, v___y_4104_);
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___y_4104_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec_ref(v___y_4104_);
v_a_4120_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4111_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4111_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_4104_);
return v___y_4103_;
}
}
v___jp_4128_:
{
uint8_t v___x_4131_; 
v___x_4131_ = l_Lean_Exception_isInterrupt(v_a_4130_);
if (v___x_4131_ == 0)
{
uint8_t v___x_4132_; 
lean_inc_ref(v_a_4130_);
v___x_4132_ = l_Lean_Exception_isRuntime(v_a_4130_);
v___y_4103_ = v___y_4129_;
v___y_4104_ = v_a_4130_;
v___y_4105_ = v___x_4132_;
goto v___jp_4102_;
}
else
{
v___y_4103_ = v___y_4129_;
v___y_4104_ = v_a_4130_;
v___y_4105_ = v___x_4131_;
goto v___jp_4102_;
}
}
v___jp_4137_:
{
lean_object* v___x_4141_; double v___x_4142_; double v___x_4143_; double v___x_4144_; double v___x_4145_; double v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4141_ = lean_io_mono_nanos_now();
v___x_4142_ = lean_float_of_nat(v___y_4138_);
v___x_4143_ = lean_float_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30);
v___x_4144_ = lean_float_div(v___x_4142_, v___x_4143_);
v___x_4145_ = lean_float_of_nat(v___x_4141_);
v___x_4146_ = lean_float_div(v___x_4145_, v___x_4143_);
v___x_4147_ = lean_box_float(v___x_4144_);
v___x_4148_ = lean_box_float(v___x_4146_);
v___x_4149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4147_);
lean_ctor_set(v___x_4149_, 1, v___x_4148_);
v___x_4150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4150_, 0, v_a_4140_);
lean_ctor_set(v___x_4150_, 1, v___x_4149_);
v___x_4151_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_4133_, v_hasTrace_4098_, v___x_4134_, v_options_4097_, v___x_4136_, v___y_4139_, v___f_4101_, v___x_4150_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
return v___x_4151_;
}
v___jp_4152_:
{
lean_object* v___x_4156_; 
v___x_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4156_, 0, v_a_4155_);
v___y_4138_ = v___y_4153_;
v___y_4139_ = v___y_4154_;
v_a_4140_ = v___x_4156_;
goto v___jp_4137_;
}
v___jp_4157_:
{
if (v___y_4161_ == 0)
{
lean_object* v___x_4162_; lean_object* v___x_4163_; uint8_t v___x_4164_; 
v___x_4162_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4163_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4164_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4163_);
if (v___x_4164_ == 0)
{
v___y_4153_ = v___y_4158_;
v___y_4154_ = v___y_4160_;
v_a_4155_ = v___y_4159_;
goto v___jp_4152_;
}
else
{
lean_object* v___x_4165_; lean_object* v___x_4166_; 
lean_inc_ref(v___y_4159_);
v___x_4165_ = l_Lean_Exception_toMessageData(v___y_4159_);
v___x_4166_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4162_, v___x_4165_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_dec_ref_known(v___x_4166_, 1);
v___y_4153_ = v___y_4158_;
v___y_4154_ = v___y_4160_;
v_a_4155_ = v___y_4159_;
goto v___jp_4152_;
}
else
{
lean_object* v_a_4167_; 
lean_dec_ref(v___y_4159_);
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref_known(v___x_4166_, 1);
v___y_4153_ = v___y_4158_;
v___y_4154_ = v___y_4160_;
v_a_4155_ = v_a_4167_;
goto v___jp_4152_;
}
}
}
else
{
v___y_4153_ = v___y_4158_;
v___y_4154_ = v___y_4160_;
v_a_4155_ = v___y_4159_;
goto v___jp_4152_;
}
}
v___jp_4168_:
{
uint8_t v___x_4172_; 
v___x_4172_ = l_Lean_Exception_isInterrupt(v_a_4171_);
if (v___x_4172_ == 0)
{
uint8_t v___x_4173_; 
lean_inc_ref(v_a_4171_);
v___x_4173_ = l_Lean_Exception_isRuntime(v_a_4171_);
v___y_4158_ = v___y_4169_;
v___y_4159_ = v_a_4171_;
v___y_4160_ = v___y_4170_;
v___y_4161_ = v___x_4173_;
goto v___jp_4157_;
}
else
{
v___y_4158_ = v___y_4169_;
v___y_4159_ = v_a_4171_;
v___y_4160_ = v___y_4170_;
v___y_4161_ = v___x_4172_;
goto v___jp_4157_;
}
}
v___jp_4174_:
{
lean_object* v___x_4178_; 
v___x_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4178_, 0, v_a_4177_);
v___y_4138_ = v___y_4175_;
v___y_4139_ = v___y_4176_;
v_a_4140_ = v___x_4178_;
goto v___jp_4137_;
}
v___jp_4179_:
{
lean_object* v___x_4183_; double v___x_4184_; double v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4183_ = lean_io_get_num_heartbeats();
v___x_4184_ = lean_float_of_nat(v___y_4181_);
v___x_4185_ = lean_float_of_nat(v___x_4183_);
v___x_4186_ = lean_box_float(v___x_4184_);
v___x_4187_ = lean_box_float(v___x_4185_);
v___x_4188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4186_);
lean_ctor_set(v___x_4188_, 1, v___x_4187_);
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v_a_4182_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
v___x_4190_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_4133_, v_hasTrace_4098_, v___x_4134_, v_options_4097_, v___x_4136_, v___y_4180_, v___f_4101_, v___x_4189_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
return v___x_4190_;
}
v___jp_4191_:
{
lean_object* v___x_4195_; 
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v_a_4194_);
v___y_4180_ = v___y_4192_;
v___y_4181_ = v___y_4193_;
v_a_4182_ = v___x_4195_;
goto v___jp_4179_;
}
v___jp_4196_:
{
if (v___y_4200_ == 0)
{
lean_object* v___x_4201_; lean_object* v___x_4202_; uint8_t v___x_4203_; 
v___x_4201_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4202_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4203_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4202_);
if (v___x_4203_ == 0)
{
v___y_4192_ = v___y_4198_;
v___y_4193_ = v___y_4199_;
v_a_4194_ = v___y_4197_;
goto v___jp_4191_;
}
else
{
lean_object* v___x_4204_; lean_object* v___x_4205_; 
lean_inc_ref(v___y_4197_);
v___x_4204_ = l_Lean_Exception_toMessageData(v___y_4197_);
v___x_4205_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4201_, v___x_4204_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_dec_ref_known(v___x_4205_, 1);
v___y_4192_ = v___y_4198_;
v___y_4193_ = v___y_4199_;
v_a_4194_ = v___y_4197_;
goto v___jp_4191_;
}
else
{
lean_object* v_a_4206_; 
lean_dec_ref(v___y_4197_);
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4205_, 1);
v___y_4192_ = v___y_4198_;
v___y_4193_ = v___y_4199_;
v_a_4194_ = v_a_4206_;
goto v___jp_4191_;
}
}
}
else
{
v___y_4192_ = v___y_4198_;
v___y_4193_ = v___y_4199_;
v_a_4194_ = v___y_4197_;
goto v___jp_4191_;
}
}
v___jp_4207_:
{
uint8_t v___x_4211_; 
v___x_4211_ = l_Lean_Exception_isInterrupt(v_a_4210_);
if (v___x_4211_ == 0)
{
uint8_t v___x_4212_; 
lean_inc_ref(v_a_4210_);
v___x_4212_ = l_Lean_Exception_isRuntime(v_a_4210_);
v___y_4197_ = v_a_4210_;
v___y_4198_ = v___y_4208_;
v___y_4199_ = v___y_4209_;
v___y_4200_ = v___x_4212_;
goto v___jp_4196_;
}
else
{
v___y_4197_ = v_a_4210_;
v___y_4198_ = v___y_4208_;
v___y_4199_ = v___y_4209_;
v___y_4200_ = v___x_4211_;
goto v___jp_4196_;
}
}
v___jp_4213_:
{
lean_object* v___x_4217_; 
v___x_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4217_, 0, v_a_4216_);
v___y_4180_ = v___y_4214_;
v___y_4181_ = v___y_4215_;
v_a_4182_ = v___x_4217_;
goto v___jp_4179_;
}
v___jp_4218_:
{
lean_object* v___x_4219_; lean_object* v_a_4220_; lean_object* v___x_4221_; uint8_t v___x_4222_; 
v___x_4219_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v_a_4094_);
v_a_4220_ = lean_ctor_get(v___x_4219_, 0);
lean_inc(v_a_4220_);
lean_dec_ref(v___x_4219_);
v___x_4221_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4222_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_4097_, v___x_4221_);
if (v___x_4222_ == 0)
{
lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4223_ = lean_io_mono_nanos_now();
lean_inc(v_a_4094_);
lean_inc_ref(v_a_4093_);
lean_inc(v_a_4092_);
lean_inc_ref(v_a_4091_);
v___x_4224_ = lean_apply_5(v_k_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, lean_box(0));
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; uint8_t v___x_4228_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4227_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4228_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4227_);
if (v___x_4228_ == 0)
{
v___y_4175_ = v___x_4223_;
v___y_4176_ = v_a_4220_;
v_a_4177_ = v_a_4225_;
goto v___jp_4174_;
}
else
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
lean_inc(v_a_4225_);
v___x_4229_ = l_Lean_MessageData_ofExpr(v_a_4225_);
v___x_4230_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4226_, v___x_4229_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_dec_ref_known(v___x_4230_, 1);
v___y_4175_ = v___x_4223_;
v___y_4176_ = v_a_4220_;
v_a_4177_ = v_a_4225_;
goto v___jp_4174_;
}
else
{
lean_object* v_a_4231_; 
lean_dec(v_a_4225_);
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
lean_dec_ref_known(v___x_4230_, 1);
v___y_4169_ = v___x_4223_;
v___y_4170_ = v_a_4220_;
v_a_4171_ = v_a_4231_;
goto v___jp_4168_;
}
}
}
else
{
lean_object* v_a_4232_; 
v_a_4232_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4232_);
lean_dec_ref_known(v___x_4224_, 1);
v___y_4169_ = v___x_4223_;
v___y_4170_ = v_a_4220_;
v_a_4171_ = v_a_4232_;
goto v___jp_4168_;
}
}
else
{
lean_object* v___x_4233_; lean_object* v___x_4234_; 
v___x_4233_ = lean_io_get_num_heartbeats();
lean_inc(v_a_4094_);
lean_inc_ref(v_a_4093_);
lean_inc(v_a_4092_);
lean_inc_ref(v_a_4091_);
v___x_4234_ = lean_apply_5(v_k_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, lean_box(0));
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_a_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; uint8_t v___x_4238_; 
v_a_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc(v_a_4235_);
lean_dec_ref_known(v___x_4234_, 1);
v___x_4236_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4237_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4238_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4100_, v_options_4097_, v___x_4237_);
if (v___x_4238_ == 0)
{
v___y_4214_ = v_a_4220_;
v___y_4215_ = v___x_4233_;
v_a_4216_ = v_a_4235_;
goto v___jp_4213_;
}
else
{
lean_object* v___x_4239_; lean_object* v___x_4240_; 
lean_inc(v_a_4235_);
v___x_4239_ = l_Lean_MessageData_ofExpr(v_a_4235_);
v___x_4240_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4236_, v___x_4239_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
if (lean_obj_tag(v___x_4240_) == 0)
{
lean_dec_ref_known(v___x_4240_, 1);
v___y_4214_ = v_a_4220_;
v___y_4215_ = v___x_4233_;
v_a_4216_ = v_a_4235_;
goto v___jp_4213_;
}
else
{
lean_object* v_a_4241_; 
lean_dec(v_a_4235_);
v_a_4241_ = lean_ctor_get(v___x_4240_, 0);
lean_inc(v_a_4241_);
lean_dec_ref_known(v___x_4240_, 1);
v___y_4208_ = v_a_4220_;
v___y_4209_ = v___x_4233_;
v_a_4210_ = v_a_4241_;
goto v___jp_4207_;
}
}
}
else
{
lean_object* v_a_4242_; 
v_a_4242_ = lean_ctor_get(v___x_4234_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4234_, 1);
v___y_4208_ = v_a_4220_;
v___y_4209_ = v___x_4233_;
v_a_4210_ = v_a_4242_;
goto v___jp_4207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0___boxed(lean_object* v_f_4269_, lean_object* v_xs_4270_, lean_object* v_k_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0(v_f_4269_, v_xs_4270_, v_k_4271_, v_a_4272_, v_a_4273_, v_a_4274_, v_a_4275_);
lean_dec(v_a_4275_);
lean_dec_ref(v_a_4274_);
lean_dec(v_a_4273_);
lean_dec_ref(v_a_4272_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM(lean_object* v_constName_4278_, lean_object* v_xs_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v___f_4285_; uint8_t v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
lean_inc_ref(v_xs_4279_);
lean_inc(v_constName_4278_);
v___f_4285_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppOptM___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4285_, 0, v_constName_4278_);
lean_closure_set(v___f_4285_, 1, v_xs_4279_);
v___x_4286_ = 0;
v___x_4287_ = lean_box(v___x_4286_);
v___x_4288_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed), 8, 3);
lean_closure_set(v___x_4288_, 0, lean_box(0));
lean_closure_set(v___x_4288_, 1, v___f_4285_);
lean_closure_set(v___x_4288_, 2, v___x_4287_);
v___x_4289_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0(v_constName_4278_, v_xs_4279_, v___x_4288_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM___boxed(lean_object* v_constName_4290_, lean_object* v_xs_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_Meta_mkAppOptM(v_constName_4290_, v_xs_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0(lean_object* v_f_4298_, lean_object* v_xs_4299_, lean_object* v_x_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4306_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__1);
v___x_4307_ = l_Lean_MessageData_ofExpr(v_f_4298_);
v___x_4308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4306_);
lean_ctor_set(v___x_4308_, 1, v___x_4307_);
v___x_4309_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___lam__0___closed__3);
v___x_4310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4308_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = lean_array_to_list(v_xs_4299_);
v___x_4312_ = lean_box(0);
v___x_4313_ = l_List_mapTR_loop___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_spec__0_spec__0(v___x_4311_, v___x_4312_);
v___x_4314_ = l_Lean_MessageData_ofList(v___x_4313_);
v___x_4315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4310_);
lean_ctor_set(v___x_4315_, 1, v___x_4314_);
v___x_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0___boxed(lean_object* v_f_4317_, lean_object* v_xs_4318_, lean_object* v_x_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0(v_f_4317_, v_xs_4318_, v_x_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4322_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec_ref(v_x_4319_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0(lean_object* v_f_4326_, lean_object* v_xs_4327_, lean_object* v_k_4328_, lean_object* v_a_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_){
_start:
{
lean_object* v_toCold_4334_; lean_object* v_options_4335_; uint8_t v_hasTrace_4336_; 
v_toCold_4334_ = lean_ctor_get(v_a_4331_, 0);
v_options_4335_ = lean_ctor_get(v_toCold_4334_, 2);
v_hasTrace_4336_ = lean_ctor_get_uint8(v_options_4335_, sizeof(void*)*1);
if (v_hasTrace_4336_ == 0)
{
lean_object* v___x_4337_; 
lean_dec_ref(v_xs_4327_);
lean_dec_ref(v_f_4326_);
lean_inc(v_a_4332_);
lean_inc_ref(v_a_4331_);
lean_inc(v_a_4330_);
lean_inc_ref(v_a_4329_);
v___x_4337_ = lean_apply_5(v_k_4328_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_, lean_box(0));
return v___x_4337_;
}
else
{
lean_object* v_inheritedTraceOptions_4338_; lean_object* v___f_4339_; lean_object* v___y_4341_; lean_object* v___y_4342_; uint8_t v___y_4343_; lean_object* v___y_4367_; lean_object* v_a_4368_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; uint8_t v___x_4374_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v_a_4378_; lean_object* v___y_4391_; lean_object* v___y_4392_; lean_object* v_a_4393_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v___y_4398_; uint8_t v___y_4399_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v_a_4409_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v_a_4415_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v_a_4420_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v_a_4432_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; uint8_t v___y_4438_; lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v_a_4448_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v_a_4454_; 
v_inheritedTraceOptions_4338_ = lean_ctor_get(v_toCold_4334_, 11);
v___f_4339_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4339_, 0, v_f_4326_);
lean_closure_set(v___f_4339_, 1, v_xs_4327_);
v___x_4371_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_4372_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__28));
v___x_4373_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__29);
v___x_4374_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4373_);
if (v___x_4374_ == 0)
{
lean_object* v___x_4481_; uint8_t v___x_4482_; 
v___x_4481_ = l_Lean_trace_profiler;
v___x_4482_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_4335_, v___x_4481_);
if (v___x_4482_ == 0)
{
lean_object* v___x_4483_; 
lean_dec_ref(v___f_4339_);
lean_inc(v_a_4332_);
lean_inc_ref(v_a_4331_);
lean_inc(v_a_4330_);
lean_inc_ref(v_a_4329_);
v___x_4483_ = lean_apply_5(v_k_4328_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_, lean_box(0));
if (lean_obj_tag(v___x_4483_) == 0)
{
lean_object* v_a_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; 
v_a_4484_ = lean_ctor_get(v___x_4483_, 0);
lean_inc(v_a_4484_);
v___x_4485_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4486_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4487_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4486_);
if (v___x_4487_ == 0)
{
lean_dec(v_a_4484_);
return v___x_4483_;
}
else
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
lean_dec_ref_known(v___x_4483_, 1);
lean_inc(v_a_4484_);
v___x_4488_ = l_Lean_MessageData_ofExpr(v_a_4484_);
v___x_4489_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4485_, v___x_4488_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4489_) == 0)
{
lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4496_; 
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4489_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; 
v_unused_4497_ = lean_ctor_get(v___x_4489_, 0);
lean_dec(v_unused_4497_);
v___x_4491_ = v___x_4489_;
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
else
{
lean_dec(v___x_4489_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4494_; 
if (v_isShared_4492_ == 0)
{
lean_ctor_set(v___x_4491_, 0, v_a_4484_);
v___x_4494_ = v___x_4491_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_a_4484_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
lean_dec(v_a_4484_);
v_a_4498_ = lean_ctor_get(v___x_4489_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4489_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4489_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4489_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
lean_inc(v_a_4498_);
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
v___y_4367_ = v___x_4503_;
v_a_4368_ = v_a_4498_;
goto v___jp_4366_;
}
}
}
}
}
else
{
lean_object* v_a_4506_; 
v_a_4506_ = lean_ctor_get(v___x_4483_, 0);
lean_inc(v_a_4506_);
v___y_4367_ = v___x_4483_;
v_a_4368_ = v_a_4506_;
goto v___jp_4366_;
}
}
else
{
goto v___jp_4456_;
}
}
else
{
goto v___jp_4456_;
}
v___jp_4340_:
{
if (v___y_4343_ == 0)
{
lean_object* v___x_4344_; lean_object* v___x_4345_; uint8_t v___x_4346_; 
lean_dec_ref(v___y_4341_);
v___x_4344_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4345_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4346_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4345_);
if (v___x_4346_ == 0)
{
lean_object* v___x_4347_; 
v___x_4347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4347_, 0, v___y_4342_);
return v___x_4347_;
}
else
{
lean_object* v___x_4348_; lean_object* v___x_4349_; 
lean_inc_ref(v___y_4342_);
v___x_4348_ = l_Lean_Exception_toMessageData(v___y_4342_);
v___x_4349_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4344_, v___x_4348_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4349_) == 0)
{
lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4356_ == 0)
{
lean_object* v_unused_4357_; 
v_unused_4357_ = lean_ctor_get(v___x_4349_, 0);
lean_dec(v_unused_4357_);
v___x_4351_ = v___x_4349_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_dec(v___x_4349_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
lean_ctor_set_tag(v___x_4351_, 1);
lean_ctor_set(v___x_4351_, 0, v___y_4342_);
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v___y_4342_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4365_; 
lean_dec_ref(v___y_4342_);
v_a_4358_ = lean_ctor_get(v___x_4349_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4360_ = v___x_4349_;
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v___x_4349_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_4342_);
return v___y_4341_;
}
}
v___jp_4366_:
{
uint8_t v___x_4369_; 
v___x_4369_ = l_Lean_Exception_isInterrupt(v_a_4368_);
if (v___x_4369_ == 0)
{
uint8_t v___x_4370_; 
lean_inc_ref(v_a_4368_);
v___x_4370_ = l_Lean_Exception_isRuntime(v_a_4368_);
v___y_4341_ = v___y_4367_;
v___y_4342_ = v_a_4368_;
v___y_4343_ = v___x_4370_;
goto v___jp_4340_;
}
else
{
v___y_4341_ = v___y_4367_;
v___y_4342_ = v_a_4368_;
v___y_4343_ = v___x_4369_;
goto v___jp_4340_;
}
}
v___jp_4375_:
{
lean_object* v___x_4379_; double v___x_4380_; double v___x_4381_; double v___x_4382_; double v___x_4383_; double v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4379_ = lean_io_mono_nanos_now();
v___x_4380_ = lean_float_of_nat(v___y_4377_);
v___x_4381_ = lean_float_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__30);
v___x_4382_ = lean_float_div(v___x_4380_, v___x_4381_);
v___x_4383_ = lean_float_of_nat(v___x_4379_);
v___x_4384_ = lean_float_div(v___x_4383_, v___x_4381_);
v___x_4385_ = lean_box_float(v___x_4382_);
v___x_4386_ = lean_box_float(v___x_4384_);
v___x_4387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4387_, 0, v___x_4385_);
lean_ctor_set(v___x_4387_, 1, v___x_4386_);
v___x_4388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4388_, 0, v_a_4378_);
lean_ctor_set(v___x_4388_, 1, v___x_4387_);
v___x_4389_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_4371_, v_hasTrace_4336_, v___x_4372_, v_options_4335_, v___x_4374_, v___y_4376_, v___f_4339_, v___x_4388_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
return v___x_4389_;
}
v___jp_4390_:
{
lean_object* v___x_4394_; 
v___x_4394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4394_, 0, v_a_4393_);
v___y_4376_ = v___y_4392_;
v___y_4377_ = v___y_4391_;
v_a_4378_ = v___x_4394_;
goto v___jp_4375_;
}
v___jp_4395_:
{
if (v___y_4399_ == 0)
{
lean_object* v___x_4400_; lean_object* v___x_4401_; uint8_t v___x_4402_; 
v___x_4400_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4401_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4402_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4401_);
if (v___x_4402_ == 0)
{
v___y_4391_ = v___y_4397_;
v___y_4392_ = v___y_4396_;
v_a_4393_ = v___y_4398_;
goto v___jp_4390_;
}
else
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
lean_inc_ref(v___y_4398_);
v___x_4403_ = l_Lean_Exception_toMessageData(v___y_4398_);
v___x_4404_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4400_, v___x_4403_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_dec_ref_known(v___x_4404_, 1);
v___y_4391_ = v___y_4397_;
v___y_4392_ = v___y_4396_;
v_a_4393_ = v___y_4398_;
goto v___jp_4390_;
}
else
{
lean_object* v_a_4405_; 
lean_dec_ref(v___y_4398_);
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v___x_4404_, 1);
v___y_4391_ = v___y_4397_;
v___y_4392_ = v___y_4396_;
v_a_4393_ = v_a_4405_;
goto v___jp_4390_;
}
}
}
else
{
v___y_4391_ = v___y_4397_;
v___y_4392_ = v___y_4396_;
v_a_4393_ = v___y_4398_;
goto v___jp_4390_;
}
}
v___jp_4406_:
{
uint8_t v___x_4410_; 
v___x_4410_ = l_Lean_Exception_isInterrupt(v_a_4409_);
if (v___x_4410_ == 0)
{
uint8_t v___x_4411_; 
lean_inc_ref(v_a_4409_);
v___x_4411_ = l_Lean_Exception_isRuntime(v_a_4409_);
v___y_4396_ = v___y_4408_;
v___y_4397_ = v___y_4407_;
v___y_4398_ = v_a_4409_;
v___y_4399_ = v___x_4411_;
goto v___jp_4395_;
}
else
{
v___y_4396_ = v___y_4408_;
v___y_4397_ = v___y_4407_;
v___y_4398_ = v_a_4409_;
v___y_4399_ = v___x_4410_;
goto v___jp_4395_;
}
}
v___jp_4412_:
{
lean_object* v___x_4416_; 
v___x_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4416_, 0, v_a_4415_);
v___y_4376_ = v___y_4414_;
v___y_4377_ = v___y_4413_;
v_a_4378_ = v___x_4416_;
goto v___jp_4375_;
}
v___jp_4417_:
{
lean_object* v___x_4421_; double v___x_4422_; double v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4421_ = lean_io_get_num_heartbeats();
v___x_4422_ = lean_float_of_nat(v___y_4419_);
v___x_4423_ = lean_float_of_nat(v___x_4421_);
v___x_4424_ = lean_box_float(v___x_4422_);
v___x_4425_ = lean_box_float(v___x_4423_);
v___x_4426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4426_, 0, v___x_4424_);
lean_ctor_set(v___x_4426_, 1, v___x_4425_);
v___x_4427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4427_, 0, v_a_4420_);
lean_ctor_set(v___x_4427_, 1, v___x_4426_);
v___x_4428_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__5(v___x_4371_, v_hasTrace_4336_, v___x_4372_, v_options_4335_, v___x_4374_, v___y_4418_, v___f_4339_, v___x_4427_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
return v___x_4428_;
}
v___jp_4429_:
{
lean_object* v___x_4433_; 
v___x_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4433_, 0, v_a_4432_);
v___y_4418_ = v___y_4430_;
v___y_4419_ = v___y_4431_;
v_a_4420_ = v___x_4433_;
goto v___jp_4417_;
}
v___jp_4434_:
{
if (v___y_4438_ == 0)
{
lean_object* v___x_4439_; lean_object* v___x_4440_; uint8_t v___x_4441_; 
v___x_4439_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_4440_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__25);
v___x_4441_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4440_);
if (v___x_4441_ == 0)
{
v___y_4430_ = v___y_4435_;
v___y_4431_ = v___y_4437_;
v_a_4432_ = v___y_4436_;
goto v___jp_4429_;
}
else
{
lean_object* v___x_4442_; lean_object* v___x_4443_; 
lean_inc_ref(v___y_4436_);
v___x_4442_ = l_Lean_Exception_toMessageData(v___y_4436_);
v___x_4443_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4439_, v___x_4442_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_dec_ref_known(v___x_4443_, 1);
v___y_4430_ = v___y_4435_;
v___y_4431_ = v___y_4437_;
v_a_4432_ = v___y_4436_;
goto v___jp_4429_;
}
else
{
lean_object* v_a_4444_; 
lean_dec_ref(v___y_4436_);
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
lean_inc(v_a_4444_);
lean_dec_ref_known(v___x_4443_, 1);
v___y_4430_ = v___y_4435_;
v___y_4431_ = v___y_4437_;
v_a_4432_ = v_a_4444_;
goto v___jp_4429_;
}
}
}
else
{
v___y_4430_ = v___y_4435_;
v___y_4431_ = v___y_4437_;
v_a_4432_ = v___y_4436_;
goto v___jp_4429_;
}
}
v___jp_4445_:
{
uint8_t v___x_4449_; 
v___x_4449_ = l_Lean_Exception_isInterrupt(v_a_4448_);
if (v___x_4449_ == 0)
{
uint8_t v___x_4450_; 
lean_inc_ref(v_a_4448_);
v___x_4450_ = l_Lean_Exception_isRuntime(v_a_4448_);
v___y_4435_ = v___y_4446_;
v___y_4436_ = v_a_4448_;
v___y_4437_ = v___y_4447_;
v___y_4438_ = v___x_4450_;
goto v___jp_4434_;
}
else
{
v___y_4435_ = v___y_4446_;
v___y_4436_ = v_a_4448_;
v___y_4437_ = v___y_4447_;
v___y_4438_ = v___x_4449_;
goto v___jp_4434_;
}
}
v___jp_4451_:
{
lean_object* v___x_4455_; 
v___x_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4455_, 0, v_a_4454_);
v___y_4418_ = v___y_4452_;
v___y_4419_ = v___y_4453_;
v_a_4420_ = v___x_4455_;
goto v___jp_4417_;
}
v___jp_4456_:
{
lean_object* v___x_4457_; lean_object* v_a_4458_; lean_object* v___x_4459_; uint8_t v___x_4460_; 
v___x_4457_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__3___redArg(v_a_4332_);
v_a_4458_ = lean_ctor_get(v___x_4457_, 0);
lean_inc(v_a_4458_);
lean_dec_ref(v___x_4457_);
v___x_4459_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4460_ = l_Lean_Option_get___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__4(v_options_4335_, v___x_4459_);
if (v___x_4460_ == 0)
{
lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4461_ = lean_io_mono_nanos_now();
lean_inc(v_a_4332_);
lean_inc_ref(v_a_4331_);
lean_inc(v_a_4330_);
lean_inc_ref(v_a_4329_);
v___x_4462_ = lean_apply_5(v_k_4328_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_, lean_box(0));
if (lean_obj_tag(v___x_4462_) == 0)
{
lean_object* v_a_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; uint8_t v___x_4466_; 
v_a_4463_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_a_4463_);
lean_dec_ref_known(v___x_4462_, 1);
v___x_4464_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4465_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4466_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4465_);
if (v___x_4466_ == 0)
{
v___y_4413_ = v___x_4461_;
v___y_4414_ = v_a_4458_;
v_a_4415_ = v_a_4463_;
goto v___jp_4412_;
}
else
{
lean_object* v___x_4467_; lean_object* v___x_4468_; 
lean_inc(v_a_4463_);
v___x_4467_ = l_Lean_MessageData_ofExpr(v_a_4463_);
v___x_4468_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4464_, v___x_4467_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_dec_ref_known(v___x_4468_, 1);
v___y_4413_ = v___x_4461_;
v___y_4414_ = v_a_4458_;
v_a_4415_ = v_a_4463_;
goto v___jp_4412_;
}
else
{
lean_object* v_a_4469_; 
lean_dec(v_a_4463_);
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
lean_inc(v_a_4469_);
lean_dec_ref_known(v___x_4468_, 1);
v___y_4407_ = v___x_4461_;
v___y_4408_ = v_a_4458_;
v_a_4409_ = v_a_4469_;
goto v___jp_4406_;
}
}
}
else
{
lean_object* v_a_4470_; 
v_a_4470_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v___x_4462_, 1);
v___y_4407_ = v___x_4461_;
v___y_4408_ = v_a_4458_;
v_a_4409_ = v_a_4470_;
goto v___jp_4406_;
}
}
else
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
v___x_4471_ = lean_io_get_num_heartbeats();
lean_inc(v_a_4332_);
lean_inc_ref(v_a_4331_);
lean_inc(v_a_4330_);
lean_inc_ref(v_a_4329_);
v___x_4472_ = lean_apply_5(v_k_4328_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_, lean_box(0));
if (lean_obj_tag(v___x_4472_) == 0)
{
lean_object* v_a_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; uint8_t v___x_4476_; 
v_a_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_a_4473_);
lean_dec_ref_known(v___x_4472_, 1);
v___x_4474_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_4475_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__33);
v___x_4476_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4338_, v_options_4335_, v___x_4475_);
if (v___x_4476_ == 0)
{
v___y_4452_ = v_a_4458_;
v___y_4453_ = v___x_4471_;
v_a_4454_ = v_a_4473_;
goto v___jp_4451_;
}
else
{
lean_object* v___x_4477_; lean_object* v___x_4478_; 
lean_inc(v_a_4473_);
v___x_4477_ = l_Lean_MessageData_ofExpr(v_a_4473_);
v___x_4478_ = l_Lean_addTrace___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppM_spec__1_spec__2(v___x_4474_, v___x_4477_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_dec_ref_known(v___x_4478_, 1);
v___y_4452_ = v_a_4458_;
v___y_4453_ = v___x_4471_;
v_a_4454_ = v_a_4473_;
goto v___jp_4451_;
}
else
{
lean_object* v_a_4479_; 
lean_dec(v_a_4473_);
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_a_4479_);
lean_dec_ref_known(v___x_4478_, 1);
v___y_4446_ = v_a_4458_;
v___y_4447_ = v___x_4471_;
v_a_4448_ = v_a_4479_;
goto v___jp_4445_;
}
}
}
else
{
lean_object* v_a_4480_; 
v_a_4480_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_a_4480_);
lean_dec_ref_known(v___x_4472_, 1);
v___y_4446_ = v_a_4458_;
v___y_4447_ = v___x_4471_;
v_a_4448_ = v_a_4480_;
goto v___jp_4445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0___boxed(lean_object* v_f_4507_, lean_object* v_xs_4508_, lean_object* v_k_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0(v_f_4507_, v_xs_4508_, v_k_4509_, v_a_4510_, v_a_4511_, v_a_4512_, v_a_4513_);
lean_dec(v_a_4513_);
lean_dec_ref(v_a_4512_);
lean_dec(v_a_4511_);
lean_dec_ref(v_a_4510_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM_x27(lean_object* v_f_4516_, lean_object* v_xs_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_){
_start:
{
lean_object* v___x_4523_; 
lean_inc(v_a_4521_);
lean_inc_ref(v_a_4520_);
lean_inc(v_a_4519_);
lean_inc_ref(v_a_4518_);
lean_inc_ref(v_f_4516_);
v___x_4523_ = lean_infer_type(v_f_4516_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
if (lean_obj_tag(v___x_4523_) == 0)
{
lean_object* v_a_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; uint8_t v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v_a_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_a_4524_);
lean_dec_ref_known(v___x_4523_, 1);
v___x_4525_ = lean_unsigned_to_nat(0u);
v___x_4526_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppMArgs___closed__0));
lean_inc_ref(v_xs_4517_);
lean_inc_ref(v_f_4516_);
v___x_4527_ = lean_alloc_closure((void*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAppOptMAux___boxed), 12, 7);
lean_closure_set(v___x_4527_, 0, v_f_4516_);
lean_closure_set(v___x_4527_, 1, v_xs_4517_);
lean_closure_set(v___x_4527_, 2, v___x_4525_);
lean_closure_set(v___x_4527_, 3, v___x_4526_);
lean_closure_set(v___x_4527_, 4, v___x_4525_);
lean_closure_set(v___x_4527_, 5, v___x_4526_);
lean_closure_set(v___x_4527_, 6, v_a_4524_);
v___x_4528_ = 0;
v___x_4529_ = lean_box(v___x_4528_);
v___x_4530_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_mkAppM_spec__0___boxed), 8, 3);
lean_closure_set(v___x_4530_, 0, lean_box(0));
lean_closure_set(v___x_4530_, 1, v___x_4527_);
lean_closure_set(v___x_4530_, 2, v___x_4529_);
v___x_4531_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___at___00Lean_Meta_mkAppOptM_x27_spec__0(v_f_4516_, v_xs_4517_, v___x_4530_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
return v___x_4531_;
}
else
{
lean_dec_ref(v_xs_4517_);
lean_dec_ref(v_f_4516_);
return v___x_4523_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAppOptM_x27___boxed(lean_object* v_f_4532_, lean_object* v_xs_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_){
_start:
{
lean_object* v_res_4539_; 
v_res_4539_ = l_Lean_Meta_mkAppOptM_x27(v_f_4532_, v_xs_4533_, v_a_4534_, v_a_4535_, v_a_4536_, v_a_4537_);
lean_dec(v_a_4537_);
lean_dec_ref(v_a_4536_);
lean_dec(v_a_4535_);
lean_dec_ref(v_a_4534_);
return v_res_4539_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqNDRec___closed__4(void){
_start:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4547_ = ((lean_object*)(l_Lean_Meta_mkEqNDRec___closed__3));
v___x_4548_ = l_Lean_MessageData_ofFormat(v___x_4547_);
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqNDRec(lean_object* v_motive_4549_, lean_object* v_h1_4550_, lean_object* v_h2_4551_, lean_object* v_a_4552_, lean_object* v_a_4553_, lean_object* v_a_4554_, lean_object* v_a_4555_){
_start:
{
lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; lean_object* v___y_4561_; lean_object* v___x_4567_; uint8_t v___x_4568_; 
v___x_4567_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_4568_ = l_Lean_Expr_isAppOf(v_h2_4551_, v___x_4567_);
if (v___x_4568_ == 0)
{
lean_object* v___x_4569_; 
lean_inc_ref(v_h2_4551_);
v___x_4569_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h2_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; uint8_t v___x_4573_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
lean_inc(v_a_4570_);
lean_dec_ref_known(v___x_4569_, 1);
v___x_4571_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_4572_ = lean_unsigned_to_nat(3u);
v___x_4573_ = l_Lean_Expr_isAppOfArity(v_a_4570_, v___x_4571_, v___x_4572_);
if (v___x_4573_ == 0)
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
lean_dec_ref(v_h1_4550_);
lean_dec_ref(v_motive_4549_);
v___x_4574_ = ((lean_object*)(l_Lean_Meta_mkEqNDRec___closed__1));
v___x_4575_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_4576_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h2_4551_, v_a_4570_);
v___x_4577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4575_);
lean_ctor_set(v___x_4577_, 1, v___x_4576_);
v___x_4578_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_4574_, v___x_4577_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4578_;
}
else
{
lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v___x_4579_ = l_Lean_Expr_appFn_x21(v_a_4570_);
v___x_4580_ = l_Lean_Expr_appFn_x21(v___x_4579_);
v___x_4581_ = l_Lean_Expr_appArg_x21(v___x_4580_);
lean_dec_ref(v___x_4580_);
v___x_4582_ = l_Lean_Expr_appArg_x21(v___x_4579_);
lean_dec_ref(v___x_4579_);
v___x_4583_ = l_Lean_Expr_appArg_x21(v_a_4570_);
lean_dec(v_a_4570_);
lean_inc_ref(v___x_4581_);
v___x_4584_ = l_Lean_Meta_getLevel(v___x_4581_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4584_) == 0)
{
lean_object* v_a_4585_; lean_object* v___x_4586_; 
v_a_4585_ = lean_ctor_get(v___x_4584_, 0);
lean_inc(v_a_4585_);
lean_dec_ref_known(v___x_4584_, 1);
lean_inc_ref(v_motive_4549_);
v___x_4586_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_motive_4549_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4586_) == 0)
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4610_; 
v_a_4587_ = lean_ctor_get(v___x_4586_, 0);
v_isSharedCheck_4610_ = !lean_is_exclusive(v___x_4586_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4589_ = v___x_4586_;
v_isShared_4590_ = v_isSharedCheck_4610_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4586_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4610_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
if (lean_obj_tag(v_a_4587_) == 7)
{
lean_object* v_body_4591_; 
v_body_4591_ = lean_ctor_get(v_a_4587_, 2);
lean_inc_ref(v_body_4591_);
lean_dec_ref_known(v_a_4587_, 3);
if (lean_obj_tag(v_body_4591_) == 3)
{
lean_object* v_u_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4608_; 
v_u_4592_ = lean_ctor_get(v_body_4591_, 0);
lean_inc(v_u_4592_);
lean_dec_ref_known(v_body_4591_, 1);
v___x_4593_ = ((lean_object*)(l_Lean_Meta_mkEqNDRec___closed__1));
v___x_4594_ = lean_box(0);
v___x_4595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4595_, 0, v_a_4585_);
lean_ctor_set(v___x_4595_, 1, v___x_4594_);
v___x_4596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4596_, 0, v_u_4592_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
v___x_4597_ = l_Lean_mkConst(v___x_4593_, v___x_4596_);
v___x_4598_ = lean_unsigned_to_nat(6u);
v___x_4599_ = lean_mk_empty_array_with_capacity(v___x_4598_);
v___x_4600_ = lean_array_push(v___x_4599_, v___x_4581_);
v___x_4601_ = lean_array_push(v___x_4600_, v___x_4582_);
v___x_4602_ = lean_array_push(v___x_4601_, v_motive_4549_);
v___x_4603_ = lean_array_push(v___x_4602_, v_h1_4550_);
v___x_4604_ = lean_array_push(v___x_4603_, v___x_4583_);
v___x_4605_ = lean_array_push(v___x_4604_, v_h2_4551_);
v___x_4606_ = l_Lean_mkAppN(v___x_4597_, v___x_4605_);
lean_dec_ref(v___x_4605_);
if (v_isShared_4590_ == 0)
{
lean_ctor_set(v___x_4589_, 0, v___x_4606_);
v___x_4608_ = v___x_4589_;
goto v_reusejp_4607_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v___x_4606_);
v___x_4608_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4607_;
}
v_reusejp_4607_:
{
return v___x_4608_;
}
}
else
{
lean_dec_ref(v_body_4591_);
lean_del_object(v___x_4589_);
lean_dec(v_a_4585_);
lean_dec_ref(v___x_4583_);
lean_dec_ref(v___x_4582_);
lean_dec_ref(v___x_4581_);
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_h1_4550_);
v___y_4558_ = v_a_4552_;
v___y_4559_ = v_a_4553_;
v___y_4560_ = v_a_4554_;
v___y_4561_ = v_a_4555_;
goto v___jp_4557_;
}
}
else
{
lean_del_object(v___x_4589_);
lean_dec(v_a_4587_);
lean_dec(v_a_4585_);
lean_dec_ref(v___x_4583_);
lean_dec_ref(v___x_4582_);
lean_dec_ref(v___x_4581_);
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_h1_4550_);
v___y_4558_ = v_a_4552_;
v___y_4559_ = v_a_4553_;
v___y_4560_ = v_a_4554_;
v___y_4561_ = v_a_4555_;
goto v___jp_4557_;
}
}
}
else
{
lean_dec(v_a_4585_);
lean_dec_ref(v___x_4583_);
lean_dec_ref(v___x_4582_);
lean_dec_ref(v___x_4581_);
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_h1_4550_);
lean_dec_ref(v_motive_4549_);
return v___x_4586_;
}
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4618_; 
lean_dec_ref(v___x_4583_);
lean_dec_ref(v___x_4582_);
lean_dec_ref(v___x_4581_);
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_h1_4550_);
lean_dec_ref(v_motive_4549_);
v_a_4611_ = lean_ctor_get(v___x_4584_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4613_ = v___x_4584_;
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4584_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
}
else
{
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_h1_4550_);
lean_dec_ref(v_motive_4549_);
return v___x_4569_;
}
}
else
{
lean_object* v___x_4619_; 
lean_dec_ref(v_h2_4551_);
lean_dec_ref(v_motive_4549_);
v___x_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4619_, 0, v_h1_4550_);
return v___x_4619_;
}
v___jp_4557_:
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4562_ = ((lean_object*)(l_Lean_Meta_mkEqNDRec___closed__1));
v___x_4563_ = lean_obj_once(&l_Lean_Meta_mkEqNDRec___closed__4, &l_Lean_Meta_mkEqNDRec___closed__4_once, _init_l_Lean_Meta_mkEqNDRec___closed__4);
v___x_4564_ = l_Lean_indentExpr(v_motive_4549_);
v___x_4565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4563_);
lean_ctor_set(v___x_4565_, 1, v___x_4564_);
v___x_4566_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_4562_, v___x_4565_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
return v___x_4566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqNDRec___boxed(lean_object* v_motive_4620_, lean_object* v_h1_4621_, lean_object* v_h2_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Lean_Meta_mkEqNDRec(v_motive_4620_, v_h1_4621_, v_h2_4622_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_);
lean_dec(v_a_4626_);
lean_dec_ref(v_a_4625_);
lean_dec(v_a_4624_);
lean_dec_ref(v_a_4623_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRec(lean_object* v_motive_4633_, lean_object* v_h1_4634_, lean_object* v_h2_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_){
_start:
{
lean_object* v___y_4642_; lean_object* v___y_4643_; lean_object* v___y_4644_; lean_object* v___y_4645_; lean_object* v___x_4651_; uint8_t v___x_4652_; 
v___x_4651_ = ((lean_object*)(l_Lean_Meta_mkEqRefl___closed__1));
v___x_4652_ = l_Lean_Expr_isAppOf(v_h2_4635_, v___x_4651_);
if (v___x_4652_ == 0)
{
lean_object* v___x_4653_; 
lean_inc_ref(v_h2_4635_);
v___x_4653_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_h2_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4653_) == 0)
{
lean_object* v_a_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; uint8_t v___x_4657_; 
v_a_4654_ = lean_ctor_get(v___x_4653_, 0);
lean_inc(v_a_4654_);
lean_dec_ref_known(v___x_4653_, 1);
v___x_4655_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_4656_ = lean_unsigned_to_nat(3u);
v___x_4657_ = l_Lean_Expr_isAppOfArity(v_a_4654_, v___x_4655_, v___x_4656_);
if (v___x_4657_ == 0)
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
lean_dec(v_a_4654_);
lean_dec_ref(v_h1_4634_);
lean_dec_ref(v_motive_4633_);
v___x_4658_ = ((lean_object*)(l_Lean_Meta_mkEqRec___closed__1));
v___x_4659_ = lean_obj_once(&l_Lean_Meta_mkEqSymm___closed__4, &l_Lean_Meta_mkEqSymm___closed__4_once, _init_l_Lean_Meta_mkEqSymm___closed__4);
v___x_4660_ = l_Lean_indentExpr(v_h2_4635_);
v___x_4661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4661_, 0, v___x_4659_);
lean_ctor_set(v___x_4661_, 1, v___x_4660_);
v___x_4662_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_4658_, v___x_4661_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
return v___x_4662_;
}
else
{
lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4663_ = l_Lean_Expr_appFn_x21(v_a_4654_);
v___x_4664_ = l_Lean_Expr_appFn_x21(v___x_4663_);
v___x_4665_ = l_Lean_Expr_appArg_x21(v___x_4664_);
lean_dec_ref(v___x_4664_);
v___x_4666_ = l_Lean_Expr_appArg_x21(v___x_4663_);
lean_dec_ref(v___x_4663_);
v___x_4667_ = l_Lean_Expr_appArg_x21(v_a_4654_);
lean_dec(v_a_4654_);
lean_inc_ref(v___x_4665_);
v___x_4668_ = l_Lean_Meta_getLevel(v___x_4665_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v_a_4669_; lean_object* v___x_4670_; 
v_a_4669_ = lean_ctor_get(v___x_4668_, 0);
lean_inc(v_a_4669_);
lean_dec_ref_known(v___x_4668_, 1);
lean_inc_ref(v_motive_4633_);
v___x_4670_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_infer(v_motive_4633_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v_a_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4695_; 
v_a_4671_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4673_ = v___x_4670_;
v_isShared_4674_ = v_isSharedCheck_4695_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_a_4671_);
lean_dec(v___x_4670_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4695_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
if (lean_obj_tag(v_a_4671_) == 7)
{
lean_object* v_body_4675_; 
v_body_4675_ = lean_ctor_get(v_a_4671_, 2);
lean_inc_ref(v_body_4675_);
lean_dec_ref_known(v_a_4671_, 3);
if (lean_obj_tag(v_body_4675_) == 7)
{
lean_object* v_body_4676_; 
v_body_4676_ = lean_ctor_get(v_body_4675_, 2);
lean_inc_ref(v_body_4676_);
lean_dec_ref_known(v_body_4675_, 3);
if (lean_obj_tag(v_body_4676_) == 3)
{
lean_object* v_u_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4693_; 
v_u_4677_ = lean_ctor_get(v_body_4676_, 0);
lean_inc(v_u_4677_);
lean_dec_ref_known(v_body_4676_, 1);
v___x_4678_ = ((lean_object*)(l_Lean_Meta_mkEqRec___closed__1));
v___x_4679_ = lean_box(0);
v___x_4680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4680_, 0, v_a_4669_);
lean_ctor_set(v___x_4680_, 1, v___x_4679_);
v___x_4681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4681_, 0, v_u_4677_);
lean_ctor_set(v___x_4681_, 1, v___x_4680_);
v___x_4682_ = l_Lean_mkConst(v___x_4678_, v___x_4681_);
v___x_4683_ = lean_unsigned_to_nat(6u);
v___x_4684_ = lean_mk_empty_array_with_capacity(v___x_4683_);
v___x_4685_ = lean_array_push(v___x_4684_, v___x_4665_);
v___x_4686_ = lean_array_push(v___x_4685_, v___x_4666_);
v___x_4687_ = lean_array_push(v___x_4686_, v_motive_4633_);
v___x_4688_ = lean_array_push(v___x_4687_, v_h1_4634_);
v___x_4689_ = lean_array_push(v___x_4688_, v___x_4667_);
v___x_4690_ = lean_array_push(v___x_4689_, v_h2_4635_);
v___x_4691_ = l_Lean_mkAppN(v___x_4682_, v___x_4690_);
lean_dec_ref(v___x_4690_);
if (v_isShared_4674_ == 0)
{
lean_ctor_set(v___x_4673_, 0, v___x_4691_);
v___x_4693_ = v___x_4673_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v___x_4691_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
else
{
lean_dec_ref(v_body_4676_);
lean_del_object(v___x_4673_);
lean_dec(v_a_4669_);
lean_dec_ref(v___x_4667_);
lean_dec_ref(v___x_4666_);
lean_dec_ref(v___x_4665_);
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
v___y_4642_ = v_a_4636_;
v___y_4643_ = v_a_4637_;
v___y_4644_ = v_a_4638_;
v___y_4645_ = v_a_4639_;
goto v___jp_4641_;
}
}
else
{
lean_dec_ref(v_body_4675_);
lean_del_object(v___x_4673_);
lean_dec(v_a_4669_);
lean_dec_ref(v___x_4667_);
lean_dec_ref(v___x_4666_);
lean_dec_ref(v___x_4665_);
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
v___y_4642_ = v_a_4636_;
v___y_4643_ = v_a_4637_;
v___y_4644_ = v_a_4638_;
v___y_4645_ = v_a_4639_;
goto v___jp_4641_;
}
}
else
{
lean_del_object(v___x_4673_);
lean_dec(v_a_4671_);
lean_dec(v_a_4669_);
lean_dec_ref(v___x_4667_);
lean_dec_ref(v___x_4666_);
lean_dec_ref(v___x_4665_);
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
v___y_4642_ = v_a_4636_;
v___y_4643_ = v_a_4637_;
v___y_4644_ = v_a_4638_;
v___y_4645_ = v_a_4639_;
goto v___jp_4641_;
}
}
}
else
{
lean_dec(v_a_4669_);
lean_dec_ref(v___x_4667_);
lean_dec_ref(v___x_4666_);
lean_dec_ref(v___x_4665_);
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
lean_dec_ref(v_motive_4633_);
return v___x_4670_;
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
lean_dec_ref(v___x_4667_);
lean_dec_ref(v___x_4666_);
lean_dec_ref(v___x_4665_);
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
lean_dec_ref(v_motive_4633_);
v_a_4696_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4668_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4668_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
else
{
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_h1_4634_);
lean_dec_ref(v_motive_4633_);
return v___x_4653_;
}
}
else
{
lean_object* v___x_4704_; 
lean_dec_ref(v_h2_4635_);
lean_dec_ref(v_motive_4633_);
v___x_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4704_, 0, v_h1_4634_);
return v___x_4704_;
}
v___jp_4641_:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4646_ = ((lean_object*)(l_Lean_Meta_mkEqRec___closed__1));
v___x_4647_ = lean_obj_once(&l_Lean_Meta_mkEqNDRec___closed__4, &l_Lean_Meta_mkEqNDRec___closed__4_once, _init_l_Lean_Meta_mkEqNDRec___closed__4);
v___x_4648_ = l_Lean_indentExpr(v_motive_4633_);
v___x_4649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4647_);
lean_ctor_set(v___x_4649_, 1, v___x_4648_);
v___x_4650_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_4646_, v___x_4649_, v___y_4642_, v___y_4643_, v___y_4644_, v___y_4645_);
return v___x_4650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqRec___boxed(lean_object* v_motive_4705_, lean_object* v_h1_4706_, lean_object* v_h2_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_Lean_Meta_mkEqRec(v_motive_4705_, v_h1_4706_, v_h2_4707_, v_a_4708_, v_a_4709_, v_a_4710_, v_a_4711_);
lean_dec(v_a_4711_);
lean_dec_ref(v_a_4710_);
lean_dec(v_a_4709_);
lean_dec_ref(v_a_4708_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMP(lean_object* v_eqProof_4718_, lean_object* v_pr_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_){
_start:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v___x_4725_ = ((lean_object*)(l_Lean_Meta_mkEqMP___closed__1));
v___x_4726_ = lean_unsigned_to_nat(2u);
v___x_4727_ = lean_mk_empty_array_with_capacity(v___x_4726_);
v___x_4728_ = lean_array_push(v___x_4727_, v_eqProof_4718_);
v___x_4729_ = lean_array_push(v___x_4728_, v_pr_4719_);
v___x_4730_ = l_Lean_Meta_mkAppM(v___x_4725_, v___x_4729_, v_a_4720_, v_a_4721_, v_a_4722_, v_a_4723_);
return v___x_4730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMP___boxed(lean_object* v_eqProof_4731_, lean_object* v_pr_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l_Lean_Meta_mkEqMP(v_eqProof_4731_, v_pr_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
lean_dec(v_a_4736_);
lean_dec_ref(v_a_4735_);
lean_dec(v_a_4734_);
lean_dec_ref(v_a_4733_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMPR(lean_object* v_eqProof_4743_, lean_object* v_pr_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_){
_start:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4750_ = ((lean_object*)(l_Lean_Meta_mkEqMPR___closed__1));
v___x_4751_ = lean_unsigned_to_nat(2u);
v___x_4752_ = lean_mk_empty_array_with_capacity(v___x_4751_);
v___x_4753_ = lean_array_push(v___x_4752_, v_eqProof_4743_);
v___x_4754_ = lean_array_push(v___x_4753_, v_pr_4744_);
v___x_4755_ = l_Lean_Meta_mkAppM(v___x_4750_, v___x_4754_, v_a_4745_, v_a_4746_, v_a_4747_, v_a_4748_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqMPR___boxed(lean_object* v_eqProof_4756_, lean_object* v_pr_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_, lean_object* v_a_4760_, lean_object* v_a_4761_, lean_object* v_a_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_Lean_Meta_mkEqMPR(v_eqProof_4756_, v_pr_4757_, v_a_4758_, v_a_4759_, v_a_4760_, v_a_4761_);
lean_dec(v_a_4761_);
lean_dec_ref(v_a_4760_);
lean_dec(v_a_4759_);
lean_dec_ref(v_a_4758_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkNoConfusion_spec__0(lean_object* v_msg_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_){
_start:
{
lean_object* v___f_4770_; lean_object* v___x_12328__overap_4771_; lean_object* v___x_4772_; 
v___f_4770_ = ((lean_object*)(l_panic___at___00Lean_Meta_congrArg_x3f_spec__0___closed__0));
v___x_12328__overap_4771_ = lean_panic_fn_borrowed(v___f_4770_, v_msg_4764_);
lean_inc(v___y_4768_);
lean_inc_ref(v___y_4767_);
lean_inc(v___y_4766_);
lean_inc_ref(v___y_4765_);
v___x_4772_ = lean_apply_5(v___x_12328__overap_4771_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_, lean_box(0));
return v___x_4772_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkNoConfusion_spec__0___boxed(lean_object* v_msg_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l_panic___at___00Lean_Meta_mkNoConfusion_spec__0(v_msg_4773_, v___y_4774_, v___y_4775_, v___y_4776_, v___y_4777_);
lean_dec(v___y_4777_);
lean_dec_ref(v___y_4776_);
lean_dec(v___y_4775_);
lean_dec_ref(v___y_4774_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(lean_object* v_constName_4780_, uint8_t v_skipRealize_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v_env_4785_; uint8_t v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4784_ = lean_st_ref_get(v___y_4782_);
v_env_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc_ref(v_env_4785_);
lean_dec(v___x_4784_);
v___x_4786_ = l_Lean_Environment_contains(v_env_4785_, v_constName_4780_, v_skipRealize_4781_);
v___x_4787_ = lean_box(v___x_4786_);
v___x_4788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg___boxed(lean_object* v_constName_4789_, lean_object* v_skipRealize_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_){
_start:
{
uint8_t v_skipRealize_boxed_4793_; lean_object* v_res_4794_; 
v_skipRealize_boxed_4793_ = lean_unbox(v_skipRealize_4790_);
v_res_4794_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(v_constName_4789_, v_skipRealize_boxed_4793_, v___y_4791_);
lean_dec(v___y_4791_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2(lean_object* v_constName_4795_, uint8_t v_skipRealize_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_){
_start:
{
lean_object* v___x_4802_; 
v___x_4802_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(v_constName_4795_, v_skipRealize_4796_, v___y_4800_);
return v___x_4802_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___boxed(lean_object* v_constName_4803_, lean_object* v_skipRealize_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_){
_start:
{
uint8_t v_skipRealize_boxed_4810_; lean_object* v_res_4811_; 
v_skipRealize_boxed_4810_ = lean_unbox(v_skipRealize_4804_);
v_res_4811_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2(v_constName_4803_, v_skipRealize_boxed_4810_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_);
lean_dec(v___y_4808_);
lean_dec_ref(v___y_4807_);
lean_dec(v___y_4806_);
lean_dec_ref(v___y_4805_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___lam__0(uint8_t v___y_4812_, uint8_t v___x_4813_, lean_object* v_P_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; lean_object* v___x_4824_; 
v___x_4820_ = lean_unsigned_to_nat(1u);
v___x_4821_ = lean_mk_empty_array_with_capacity(v___x_4820_);
lean_inc_ref(v_P_4814_);
v___x_4822_ = lean_array_push(v___x_4821_, v_P_4814_);
v___x_4823_ = 1;
v___x_4824_ = l_Lean_Meta_mkLambdaFVars(v___x_4822_, v_P_4814_, v___y_4812_, v___x_4813_, v___y_4812_, v___x_4813_, v___x_4823_, v___y_4815_, v___y_4816_, v___y_4817_, v___y_4818_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___lam__0___boxed(lean_object* v___y_4825_, lean_object* v___x_4826_, lean_object* v_P_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_){
_start:
{
uint8_t v___y_13589__boxed_4833_; uint8_t v___x_13590__boxed_4834_; lean_object* v_res_4835_; 
v___y_13589__boxed_4833_ = lean_unbox(v___y_4825_);
v___x_13590__boxed_4834_ = lean_unbox(v___x_4826_);
v_res_4835_ = l_Lean_Meta_mkNoConfusion___lam__0(v___y_13589__boxed_4833_, v___x_13590__boxed_4834_, v_P_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_);
lean_dec(v___y_4831_);
lean_dec_ref(v___y_4830_);
lean_dec(v___y_4829_);
lean_dec_ref(v___y_4828_);
return v_res_4835_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4837_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__0));
v___x_4838_ = l_Lean_stringToMessageData(v___x_4837_);
return v___x_4838_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4840_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__2));
v___x_4841_ = l_Lean_stringToMessageData(v___x_4840_);
return v___x_4841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg(lean_object* v_range_4842_, lean_object* v_b_4843_, lean_object* v_i_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_){
_start:
{
lean_object* v_stop_4850_; lean_object* v_step_4851_; lean_object* v_a_4853_; uint8_t v___x_4856_; 
v_stop_4850_ = lean_ctor_get(v_range_4842_, 1);
v_step_4851_ = lean_ctor_get(v_range_4842_, 2);
v___x_4856_ = lean_nat_dec_lt(v_i_4844_, v_stop_4850_);
if (v___x_4856_ == 0)
{
lean_object* v___x_4857_; 
lean_dec(v_i_4844_);
v___x_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4857_, 0, v_b_4843_);
return v___x_4857_;
}
else
{
lean_object* v___x_4858_; 
lean_inc(v___y_4848_);
lean_inc_ref(v___y_4847_);
lean_inc(v___y_4846_);
lean_inc_ref(v___y_4845_);
lean_inc_ref(v_b_4843_);
v___x_4858_ = lean_infer_type(v_b_4843_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4858_) == 0)
{
lean_object* v_a_4859_; lean_object* v___x_4860_; 
v_a_4859_ = lean_ctor_get(v___x_4858_, 0);
lean_inc(v_a_4859_);
lean_dec_ref_known(v___x_4858_, 1);
v___x_4860_ = l_Lean_Meta_whnfForall(v_a_4859_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4860_) == 0)
{
lean_object* v_a_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; 
v_a_4861_ = lean_ctor_get(v___x_4860_, 0);
lean_inc(v_a_4861_);
lean_dec_ref_known(v___x_4860_, 1);
v___x_4862_ = l_Lean_Expr_bindingDomain_x21(v_a_4861_);
lean_dec(v_a_4861_);
lean_inc(v___y_4848_);
lean_inc_ref(v___y_4847_);
lean_inc(v___y_4846_);
lean_inc_ref(v___y_4845_);
v___x_4863_ = lean_whnf(v___x_4862_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4863_) == 0)
{
lean_object* v_a_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; uint8_t v___x_4867_; 
v_a_4864_ = lean_ctor_get(v___x_4863_, 0);
lean_inc(v_a_4864_);
lean_dec_ref_known(v___x_4863_, 1);
v___x_4865_ = ((lean_object*)(l_Lean_Meta_mkHEq___closed__1));
v___x_4866_ = lean_unsigned_to_nat(4u);
v___x_4867_ = l_Lean_Expr_isAppOfArity(v_a_4864_, v___x_4865_, v___x_4866_);
if (v___x_4867_ == 0)
{
lean_object* v___x_4868_; lean_object* v___x_4869_; uint8_t v___x_4870_; 
v___x_4868_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_4869_ = lean_unsigned_to_nat(3u);
v___x_4870_ = l_Lean_Expr_isAppOfArity(v_a_4864_, v___x_4868_, v___x_4869_);
if (v___x_4870_ == 0)
{
lean_object* v___x_4871_; 
lean_dec(v_i_4844_);
lean_inc(v___y_4848_);
lean_inc_ref(v___y_4847_);
lean_inc(v___y_4846_);
lean_inc_ref(v___y_4845_);
v___x_4871_ = lean_infer_type(v_b_4843_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4889_; 
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
lean_inc(v_a_4872_);
lean_dec_ref_known(v___x_4871_, 1);
v___x_4873_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__1);
v___x_4874_ = l_Lean_MessageData_ofExpr(v_a_4864_);
v___x_4875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4873_);
lean_ctor_set(v___x_4875_, 1, v___x_4874_);
v___x_4876_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___closed__3);
v___x_4877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4877_, 0, v___x_4875_);
lean_ctor_set(v___x_4877_, 1, v___x_4876_);
v___x_4878_ = lean_unsigned_to_nat(30u);
v___x_4879_ = l_Lean_inlineExpr(v_a_4872_, v___x_4878_);
v___x_4880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4877_);
lean_ctor_set(v___x_4880_, 1, v___x_4879_);
v___x_4881_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v___x_4880_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
v_a_4882_ = lean_ctor_get(v___x_4881_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4881_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4884_ = v___x_4881_;
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4881_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4887_; 
if (v_isShared_4885_ == 0)
{
v___x_4887_ = v___x_4884_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4882_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
else
{
lean_dec(v_a_4864_);
return v___x_4871_;
}
}
else
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4890_ = l_Lean_Expr_appFn_x21(v_a_4864_);
lean_dec(v_a_4864_);
v___x_4891_ = l_Lean_Expr_appArg_x21(v___x_4890_);
lean_dec_ref(v___x_4890_);
v___x_4892_ = l_Lean_Meta_mkEqRefl(v___x_4891_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; lean_object* v___x_4894_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
lean_inc(v_a_4893_);
lean_dec_ref_known(v___x_4892_, 1);
v___x_4894_ = l_Lean_Expr_app___override(v_b_4843_, v_a_4893_);
v_a_4853_ = v___x_4894_;
goto v___jp_4852_;
}
else
{
lean_dec(v_i_4844_);
lean_dec_ref(v_b_4843_);
return v___x_4892_;
}
}
}
else
{
lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4895_ = l_Lean_Expr_appFn_x21(v_a_4864_);
lean_dec(v_a_4864_);
v___x_4896_ = l_Lean_Expr_appFn_x21(v___x_4895_);
lean_dec_ref(v___x_4895_);
v___x_4897_ = l_Lean_Expr_appArg_x21(v___x_4896_);
lean_dec_ref(v___x_4896_);
v___x_4898_ = l_Lean_Meta_mkHEqRefl(v___x_4897_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4898_) == 0)
{
lean_object* v_a_4899_; lean_object* v___x_4900_; 
v_a_4899_ = lean_ctor_get(v___x_4898_, 0);
lean_inc(v_a_4899_);
lean_dec_ref_known(v___x_4898_, 1);
v___x_4900_ = l_Lean_Expr_app___override(v_b_4843_, v_a_4899_);
v_a_4853_ = v___x_4900_;
goto v___jp_4852_;
}
else
{
lean_dec(v_i_4844_);
lean_dec_ref(v_b_4843_);
return v___x_4898_;
}
}
}
else
{
lean_dec(v_i_4844_);
lean_dec_ref(v_b_4843_);
return v___x_4863_;
}
}
else
{
lean_dec(v_i_4844_);
lean_dec_ref(v_b_4843_);
return v___x_4860_;
}
}
else
{
lean_dec(v_i_4844_);
lean_dec_ref(v_b_4843_);
return v___x_4858_;
}
}
v___jp_4852_:
{
lean_object* v___x_4854_; 
v___x_4854_ = lean_nat_add(v_i_4844_, v_step_4851_);
lean_dec(v_i_4844_);
v_b_4843_ = v_a_4853_;
v_i_4844_ = v___x_4854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg___boxed(lean_object* v_range_4901_, lean_object* v_b_4902_, lean_object* v_i_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_){
_start:
{
lean_object* v_res_4909_; 
v_res_4909_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg(v_range_4901_, v_b_4902_, v_i_4903_, v___y_4904_, v___y_4905_, v___y_4906_, v___y_4907_);
lean_dec(v___y_4907_);
lean_dec_ref(v___y_4906_);
lean_dec(v___y_4905_);
lean_dec_ref(v___y_4904_);
lean_dec_ref(v_range_4901_);
return v_res_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0(lean_object* v_k_4910_, lean_object* v_b_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_){
_start:
{
lean_object* v___x_4917_; 
lean_inc(v___y_4915_);
lean_inc_ref(v___y_4914_);
lean_inc(v___y_4913_);
lean_inc_ref(v___y_4912_);
v___x_4917_ = lean_apply_6(v_k_4910_, v_b_4911_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_, lean_box(0));
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0___boxed(lean_object* v_k_4918_, lean_object* v_b_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0(v_k_4918_, v_b_4919_, v___y_4920_, v___y_4921_, v___y_4922_, v___y_4923_);
lean_dec(v___y_4923_);
lean_dec_ref(v___y_4922_);
lean_dec(v___y_4921_);
lean_dec_ref(v___y_4920_);
return v_res_4925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg(lean_object* v_name_4926_, uint8_t v_bi_4927_, lean_object* v_type_4928_, lean_object* v_k_4929_, uint8_t v_kind_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_){
_start:
{
lean_object* v___f_4936_; lean_object* v___x_4937_; 
v___f_4936_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4936_, 0, v_k_4929_);
v___x_4937_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4926_, v_bi_4927_, v_type_4928_, v___f_4936_, v_kind_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4945_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4945_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4945_ == 0)
{
v___x_4940_ = v___x_4937_;
v_isShared_4941_ = v_isSharedCheck_4945_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_a_4938_);
lean_dec(v___x_4937_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4945_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v___x_4943_; 
if (v_isShared_4941_ == 0)
{
v___x_4943_ = v___x_4940_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4944_; 
v_reuseFailAlloc_4944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4944_, 0, v_a_4938_);
v___x_4943_ = v_reuseFailAlloc_4944_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
return v___x_4943_;
}
}
}
else
{
lean_object* v_a_4946_; lean_object* v___x_4948_; uint8_t v_isShared_4949_; uint8_t v_isSharedCheck_4953_; 
v_a_4946_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4953_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4948_ = v___x_4937_;
v_isShared_4949_ = v_isSharedCheck_4953_;
goto v_resetjp_4947_;
}
else
{
lean_inc(v_a_4946_);
lean_dec(v___x_4937_);
v___x_4948_ = lean_box(0);
v_isShared_4949_ = v_isSharedCheck_4953_;
goto v_resetjp_4947_;
}
v_resetjp_4947_:
{
lean_object* v___x_4951_; 
if (v_isShared_4949_ == 0)
{
v___x_4951_ = v___x_4948_;
goto v_reusejp_4950_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v_a_4946_);
v___x_4951_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4950_;
}
v_reusejp_4950_:
{
return v___x_4951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg___boxed(lean_object* v_name_4954_, lean_object* v_bi_4955_, lean_object* v_type_4956_, lean_object* v_k_4957_, lean_object* v_kind_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
uint8_t v_bi_boxed_4964_; uint8_t v_kind_boxed_4965_; lean_object* v_res_4966_; 
v_bi_boxed_4964_ = lean_unbox(v_bi_4955_);
v_kind_boxed_4965_ = lean_unbox(v_kind_4958_);
v_res_4966_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg(v_name_4954_, v_bi_boxed_4964_, v_type_4956_, v_k_4957_, v_kind_boxed_4965_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_);
lean_dec(v___y_4962_);
lean_dec_ref(v___y_4961_);
lean_dec(v___y_4960_);
lean_dec_ref(v___y_4959_);
return v_res_4966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg(lean_object* v_name_4967_, lean_object* v_type_4968_, lean_object* v_k_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
uint8_t v___x_4975_; uint8_t v___x_4976_; lean_object* v___x_4977_; 
v___x_4975_ = 0;
v___x_4976_ = 0;
v___x_4977_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg(v_name_4967_, v___x_4975_, v_type_4968_, v_k_4969_, v___x_4976_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
return v___x_4977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg___boxed(lean_object* v_name_4978_, lean_object* v_type_4979_, lean_object* v_k_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v_res_4986_; 
v_res_4986_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg(v_name_4978_, v_type_4979_, v_k_4980_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_);
lean_dec(v___y_4984_);
lean_dec_ref(v___y_4983_);
lean_dec(v___y_4982_);
lean_dec_ref(v___y_4981_);
return v_res_4986_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__4(void){
_start:
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
v___x_4993_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__3));
v___x_4994_ = l_Lean_MessageData_ofFormat(v___x_4993_);
return v___x_4994_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__6(void){
_start:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4996_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__5));
v___x_4997_ = l_Lean_stringToMessageData(v___x_4996_);
return v___x_4997_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__8(void){
_start:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__7));
v___x_5000_ = l_Lean_stringToMessageData(v___x_4999_);
return v___x_5000_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__11(void){
_start:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; 
v___x_5004_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__10));
v___x_5005_ = l_Lean_MessageData_ofFormat(v___x_5004_);
return v___x_5005_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__14(void){
_start:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; 
v___x_5008_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__13));
v___x_5009_ = lean_unsigned_to_nat(10u);
v___x_5010_ = lean_unsigned_to_nat(490u);
v___x_5011_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__12));
v___x_5012_ = ((lean_object*)(l_Lean_Meta_congrArg_x3f___closed__3));
v___x_5013_ = l_mkPanicMessageWithDecl(v___x_5012_, v___x_5011_, v___x_5010_, v___x_5009_, v___x_5008_);
return v___x_5013_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__16(void){
_start:
{
lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5015_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__15));
v___x_5016_ = l_Lean_stringToMessageData(v___x_5015_);
return v___x_5016_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__23(void){
_start:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___x_5025_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__22));
v___x_5026_ = l_Lean_stringToMessageData(v___x_5025_);
return v___x_5026_;
}
}
static lean_object* _init_l_Lean_Meta_mkNoConfusion___closed__24(void){
_start:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; 
v___x_5027_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__21));
v___x_5028_ = l_Lean_MessageData_ofName(v___x_5027_);
return v___x_5028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion(lean_object* v_target_5029_, lean_object* v_h_5030_, lean_object* v_a_5031_, lean_object* v_a_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_){
_start:
{
lean_object* v___x_5036_; 
lean_inc(v_a_5034_);
lean_inc_ref(v_a_5033_);
lean_inc(v_a_5032_);
lean_inc_ref(v_a_5031_);
lean_inc_ref(v_h_5030_);
v___x_5036_ = lean_infer_type(v_h_5030_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5036_) == 0)
{
lean_object* v_a_5037_; lean_object* v___x_5038_; 
v_a_5037_ = lean_ctor_get(v___x_5036_, 0);
lean_inc(v_a_5037_);
lean_dec_ref_known(v___x_5036_, 1);
lean_inc(v_a_5034_);
lean_inc_ref(v_a_5033_);
lean_inc(v_a_5032_);
lean_inc_ref(v_a_5031_);
v___x_5038_ = lean_whnf(v_a_5037_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5038_) == 0)
{
lean_object* v_a_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; uint8_t v___x_5042_; 
v_a_5039_ = lean_ctor_get(v___x_5038_, 0);
lean_inc(v_a_5039_);
lean_dec_ref_known(v___x_5038_, 1);
v___x_5040_ = ((lean_object*)(l_Lean_Meta_mkEq___closed__1));
v___x_5041_ = lean_unsigned_to_nat(3u);
v___x_5042_ = l_Lean_Expr_isAppOfArity(v_a_5039_, v___x_5040_, v___x_5041_);
if (v___x_5042_ == 0)
{
lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
lean_dec_ref(v_target_5029_);
v___x_5043_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__1));
v___x_5044_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__4, &l_Lean_Meta_mkNoConfusion___closed__4_once, _init_l_Lean_Meta_mkNoConfusion___closed__4);
v___x_5045_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_h_5030_, v_a_5039_);
v___x_5046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5044_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
v___x_5047_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_5043_, v___x_5046_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
return v___x_5047_;
}
else
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___y_5054_; lean_object* v___y_5055_; lean_object* v___y_5056_; lean_object* v___y_5057_; lean_object* v___x_5066_; 
v___x_5048_ = l_Lean_Expr_appFn_x21(v_a_5039_);
v___x_5049_ = l_Lean_Expr_appFn_x21(v___x_5048_);
v___x_5050_ = l_Lean_Expr_appArg_x21(v___x_5049_);
lean_dec_ref(v___x_5049_);
v___x_5051_ = l_Lean_Expr_appArg_x21(v___x_5048_);
lean_dec_ref(v___x_5048_);
v___x_5052_ = l_Lean_Expr_appArg_x21(v_a_5039_);
lean_dec(v_a_5039_);
v___x_5066_ = l_Lean_Meta_whnfD(v___x_5050_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5066_) == 0)
{
lean_object* v_a_5067_; lean_object* v___y_5069_; lean_object* v___y_5070_; lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v___x_5078_; 
v_a_5067_ = lean_ctor_get(v___x_5066_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5066_, 1);
v___x_5078_ = l_Lean_Expr_getAppFn(v_a_5067_);
if (lean_obj_tag(v___x_5078_) == 4)
{
lean_object* v_declName_5079_; lean_object* v_us_5080_; lean_object* v___x_5081_; lean_object* v_env_5082_; uint8_t v___x_5083_; lean_object* v___x_5084_; 
v_declName_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_declName_5079_);
v_us_5080_ = lean_ctor_get(v___x_5078_, 1);
lean_inc(v_us_5080_);
lean_dec_ref_known(v___x_5078_, 2);
v___x_5081_ = lean_st_ref_get(v_a_5034_);
v_env_5082_ = lean_ctor_get(v___x_5081_, 0);
lean_inc_ref(v_env_5082_);
lean_dec(v___x_5081_);
v___x_5083_ = 0;
v___x_5084_ = l_Lean_Environment_find_x3f(v_env_5082_, v_declName_5079_, v___x_5083_);
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_dec(v_us_5080_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___y_5069_ = v_a_5031_;
v___y_5070_ = v_a_5032_;
v___y_5071_ = v_a_5033_;
v___y_5072_ = v_a_5034_;
goto v___jp_5068_;
}
else
{
lean_object* v_val_5085_; 
v_val_5085_ = lean_ctor_get(v___x_5084_, 0);
lean_inc(v_val_5085_);
lean_dec_ref_known(v___x_5084_, 1);
if (lean_obj_tag(v_val_5085_) == 5)
{
lean_object* v_val_5086_; lean_object* v___x_5087_; 
v_val_5086_ = lean_ctor_get(v_val_5085_, 0);
lean_inc_ref(v_val_5086_);
lean_dec_ref_known(v_val_5085_, 1);
lean_inc_ref(v_target_5029_);
v___x_5087_ = l_Lean_Meta_getLevel(v_target_5029_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5087_) == 0)
{
lean_object* v_a_5088_; lean_object* v___x_5089_; 
v_a_5088_ = lean_ctor_get(v___x_5087_, 0);
lean_inc(v_a_5088_);
lean_dec_ref_known(v___x_5087_, 1);
lean_inc_ref(v___x_5051_);
v___x_5089_ = l_Lean_Meta_constructorApp_x27_x3f(v___x_5051_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5089_) == 0)
{
lean_object* v_a_5090_; 
v_a_5090_ = lean_ctor_get(v___x_5089_, 0);
lean_inc(v_a_5090_);
lean_dec_ref_known(v___x_5089_, 1);
if (lean_obj_tag(v_a_5090_) == 1)
{
lean_object* v_val_5091_; lean_object* v_fst_5092_; lean_object* v_snd_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5307_; 
v_val_5091_ = lean_ctor_get(v_a_5090_, 0);
lean_inc(v_val_5091_);
lean_dec_ref_known(v_a_5090_, 1);
v_fst_5092_ = lean_ctor_get(v_val_5091_, 0);
v_snd_5093_ = lean_ctor_get(v_val_5091_, 1);
v_isSharedCheck_5307_ = !lean_is_exclusive(v_val_5091_);
if (v_isSharedCheck_5307_ == 0)
{
v___x_5095_ = v_val_5091_;
v_isShared_5096_ = v_isSharedCheck_5307_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_snd_5093_);
lean_inc(v_fst_5092_);
lean_dec(v_val_5091_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5307_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5097_; 
lean_inc_ref(v___x_5052_);
v___x_5097_ = l_Lean_Meta_constructorApp_x27_x3f(v___x_5052_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
if (lean_obj_tag(v_a_5098_) == 1)
{
lean_object* v_val_5099_; lean_object* v_fst_5100_; lean_object* v_snd_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5298_; 
v_val_5099_ = lean_ctor_get(v_a_5098_, 0);
lean_inc(v_val_5099_);
lean_dec_ref_known(v_a_5098_, 1);
v_fst_5100_ = lean_ctor_get(v_val_5099_, 0);
v_snd_5101_ = lean_ctor_get(v_val_5099_, 1);
v_isSharedCheck_5298_ = !lean_is_exclusive(v_val_5099_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5103_ = v_val_5099_;
v_isShared_5104_ = v_isSharedCheck_5298_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_snd_5101_);
lean_inc(v_fst_5100_);
lean_dec(v_val_5099_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5298_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v_toConstantVal_5105_; lean_object* v_cidx_5106_; lean_object* v_numParams_5107_; lean_object* v_numFields_5108_; lean_object* v___y_5110_; lean_object* v___y_5111_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___y_5114_; lean_object* v___y_5115_; uint8_t v___y_5200_; lean_object* v_cidx_5228_; uint8_t v___x_5229_; 
v_toConstantVal_5105_ = lean_ctor_get(v_fst_5092_, 0);
lean_inc_ref(v_toConstantVal_5105_);
v_cidx_5106_ = lean_ctor_get(v_fst_5092_, 2);
lean_inc(v_cidx_5106_);
v_numParams_5107_ = lean_ctor_get(v_fst_5092_, 3);
lean_inc(v_numParams_5107_);
v_numFields_5108_ = lean_ctor_get(v_fst_5092_, 4);
lean_inc(v_numFields_5108_);
lean_dec(v_fst_5092_);
v_cidx_5228_ = lean_ctor_get(v_fst_5100_, 2);
lean_inc(v_cidx_5228_);
lean_dec(v_fst_5100_);
v___x_5229_ = lean_nat_dec_eq(v_cidx_5106_, v_cidx_5228_);
lean_dec(v_cidx_5228_);
lean_dec(v_cidx_5106_);
if (v___x_5229_ == 0)
{
if (v___x_5042_ == 0)
{
lean_dec_ref(v_val_5086_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
v___y_5200_ = v___x_5042_;
goto v___jp_5199_;
}
else
{
lean_object* v_toConstantVal_5230_; lean_object* v_name_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v_a_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v_a_5238_; uint8_t v___x_5256_; 
lean_dec(v_numFields_5108_);
lean_dec(v_numParams_5107_);
lean_dec_ref(v_toConstantVal_5105_);
lean_del_object(v___x_5103_);
lean_dec(v_snd_5101_);
lean_del_object(v___x_5095_);
lean_dec(v_snd_5093_);
v_toConstantVal_5230_ = lean_ctor_get(v_val_5086_, 0);
lean_inc_ref(v_toConstantVal_5230_);
lean_dec_ref(v_val_5086_);
v_name_5231_ = lean_ctor_get(v_toConstantVal_5230_, 0);
lean_inc(v_name_5231_);
lean_dec_ref(v_toConstantVal_5230_);
v___x_5232_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__19));
v___x_5233_ = l_Lean_Name_str___override(v_name_5231_, v___x_5232_);
lean_inc(v___x_5233_);
v___x_5234_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(v___x_5233_, v___x_5042_, v_a_5034_);
v_a_5235_ = lean_ctor_get(v___x_5234_, 0);
lean_inc(v_a_5235_);
lean_dec_ref(v___x_5234_);
v___x_5236_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__21));
v___x_5237_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(v___x_5236_, v___x_5042_, v_a_5034_);
v_a_5238_ = lean_ctor_get(v___x_5237_, 0);
lean_inc(v_a_5238_);
lean_dec_ref(v___x_5237_);
v___x_5256_ = lean_unbox(v_a_5235_);
lean_dec(v_a_5235_);
if (v___x_5256_ == 0)
{
lean_dec(v_a_5238_);
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
goto v___jp_5239_;
}
else
{
uint8_t v___x_5257_; 
v___x_5257_ = lean_unbox(v_a_5238_);
lean_dec(v_a_5238_);
if (v___x_5257_ == 0)
{
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
goto v___jp_5239_;
}
else
{
lean_object* v___x_5258_; lean_object* v_dummy_5259_; lean_object* v_nargs_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5258_ = l_Lean_mkConst(v___x_5233_, v_us_5080_);
v_dummy_5259_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__2, &l_Lean_Meta_congrArg_x3f___closed__2_once, _init_l_Lean_Meta_congrArg_x3f___closed__2);
v_nargs_5260_ = l_Lean_Expr_getAppNumArgs(v_a_5067_);
lean_inc(v_nargs_5260_);
v___x_5261_ = lean_mk_array(v_nargs_5260_, v_dummy_5259_);
v___x_5262_ = lean_unsigned_to_nat(1u);
v___x_5263_ = lean_nat_sub(v_nargs_5260_, v___x_5262_);
lean_dec(v_nargs_5260_);
lean_inc_n(v_a_5067_, 2);
v___x_5264_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_5067_, v___x_5261_, v___x_5263_);
v___x_5265_ = l_Lean_mkAppN(v___x_5258_, v___x_5264_);
lean_dec_ref(v___x_5264_);
v___x_5266_ = l_Lean_Meta_getLevel(v_a_5067_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5266_) == 0)
{
lean_object* v_a_5267_; lean_object* v___x_5269_; uint8_t v_isShared_5270_; uint8_t v_isSharedCheck_5289_; 
v_a_5267_ = lean_ctor_get(v___x_5266_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5266_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5269_ = v___x_5266_;
v_isShared_5270_ = v_isSharedCheck_5289_;
goto v_resetjp_5268_;
}
else
{
lean_inc(v_a_5267_);
lean_dec(v___x_5266_);
v___x_5269_ = lean_box(0);
v_isShared_5270_ = v_isSharedCheck_5289_;
goto v_resetjp_5268_;
}
v_resetjp_5268_:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5287_; 
v___x_5271_ = ((lean_object*)(l_Lean_Meta_mkFalseElim___closed__2));
v___x_5272_ = lean_box(0);
v___x_5273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5273_, 0, v_a_5088_);
lean_ctor_set(v___x_5273_, 1, v___x_5272_);
v___x_5274_ = l_Lean_mkConst(v___x_5271_, v___x_5273_);
v___x_5275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5275_, 0, v_a_5267_);
lean_ctor_set(v___x_5275_, 1, v___x_5272_);
v___x_5276_ = l_Lean_mkConst(v___x_5236_, v___x_5275_);
v___x_5277_ = lean_unsigned_to_nat(5u);
v___x_5278_ = lean_mk_empty_array_with_capacity(v___x_5277_);
v___x_5279_ = lean_array_push(v___x_5278_, v_a_5067_);
v___x_5280_ = lean_array_push(v___x_5279_, v___x_5265_);
v___x_5281_ = lean_array_push(v___x_5280_, v___x_5051_);
v___x_5282_ = lean_array_push(v___x_5281_, v___x_5052_);
v___x_5283_ = lean_array_push(v___x_5282_, v_h_5030_);
v___x_5284_ = l_Lean_mkAppN(v___x_5276_, v___x_5283_);
lean_dec_ref(v___x_5283_);
v___x_5285_ = l_Lean_mkAppB(v___x_5274_, v_target_5029_, v___x_5284_);
if (v_isShared_5270_ == 0)
{
lean_ctor_set(v___x_5269_, 0, v___x_5285_);
v___x_5287_ = v___x_5269_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v___x_5285_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
else
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5297_; 
lean_dec_ref(v___x_5265_);
lean_dec(v_a_5088_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v_a_5290_ = lean_ctor_get(v___x_5266_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5266_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5292_ = v___x_5266_;
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5266_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5295_; 
if (v_isShared_5293_ == 0)
{
v___x_5295_ = v___x_5292_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v_a_5290_);
v___x_5295_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
return v___x_5295_;
}
}
}
}
}
v___jp_5239_:
{
lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v_a_5248_; lean_object* v___x_5250_; uint8_t v_isShared_5251_; uint8_t v_isSharedCheck_5255_; 
v___x_5240_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__16, &l_Lean_Meta_mkNoConfusion___closed__16_once, _init_l_Lean_Meta_mkNoConfusion___closed__16);
v___x_5241_ = l_Lean_MessageData_ofName(v___x_5233_);
v___x_5242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5240_);
lean_ctor_set(v___x_5242_, 1, v___x_5241_);
v___x_5243_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__23, &l_Lean_Meta_mkNoConfusion___closed__23_once, _init_l_Lean_Meta_mkNoConfusion___closed__23);
v___x_5244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5244_, 0, v___x_5242_);
lean_ctor_set(v___x_5244_, 1, v___x_5243_);
v___x_5245_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__24, &l_Lean_Meta_mkNoConfusion___closed__24_once, _init_l_Lean_Meta_mkNoConfusion___closed__24);
v___x_5246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5246_, 0, v___x_5244_);
lean_ctor_set(v___x_5246_, 1, v___x_5245_);
v___x_5247_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v___x_5246_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
v_a_5248_ = lean_ctor_get(v___x_5247_, 0);
v_isSharedCheck_5255_ = !lean_is_exclusive(v___x_5247_);
if (v_isSharedCheck_5255_ == 0)
{
v___x_5250_ = v___x_5247_;
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
else
{
lean_inc(v_a_5248_);
lean_dec(v___x_5247_);
v___x_5250_ = lean_box(0);
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
v_resetjp_5249_:
{
lean_object* v___x_5253_; 
if (v_isShared_5251_ == 0)
{
v___x_5253_ = v___x_5250_;
goto v_reusejp_5252_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v_a_5248_);
v___x_5253_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5252_;
}
v_reusejp_5252_:
{
return v___x_5253_;
}
}
}
}
}
else
{
lean_dec_ref(v_val_5086_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
v___y_5200_ = v___x_5083_;
goto v___jp_5199_;
}
v___jp_5109_:
{
lean_object* v___x_5116_; 
lean_inc(v___y_5110_);
v___x_5116_ = l_Lean_getConstVal___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun_spec__0(v___y_5110_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
if (lean_obj_tag(v___x_5116_) == 0)
{
lean_object* v_a_5117_; lean_object* v_nargs_5118_; lean_object* v_type_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5188_; 
v_a_5117_ = lean_ctor_get(v___x_5116_, 0);
lean_inc(v_a_5117_);
lean_dec_ref_known(v___x_5116_, 1);
v_nargs_5118_ = l_Lean_Expr_getAppNumArgs(v_a_5067_);
v_type_5119_ = lean_ctor_get(v_a_5117_, 2);
v_isSharedCheck_5188_ = !lean_is_exclusive(v_a_5117_);
if (v_isSharedCheck_5188_ == 0)
{
lean_object* v_unused_5189_; lean_object* v_unused_5190_; 
v_unused_5189_ = lean_ctor_get(v_a_5117_, 1);
lean_dec(v_unused_5189_);
v_unused_5190_ = lean_ctor_get(v_a_5117_, 0);
lean_dec(v_unused_5190_);
v___x_5121_ = v_a_5117_;
v_isShared_5122_ = v_isSharedCheck_5188_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_type_5119_);
lean_dec(v_a_5117_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5188_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v_dummy_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v_start_5129_; lean_object* v_stop_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; uint8_t v___x_5144_; 
v_dummy_5123_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__2, &l_Lean_Meta_congrArg_x3f___closed__2_once, _init_l_Lean_Meta_congrArg_x3f___closed__2);
lean_inc(v_nargs_5118_);
v___x_5124_ = lean_mk_array(v_nargs_5118_, v_dummy_5123_);
v___x_5125_ = lean_unsigned_to_nat(1u);
v___x_5126_ = lean_nat_sub(v_nargs_5118_, v___x_5125_);
lean_dec(v_nargs_5118_);
v___x_5127_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_5067_, v___x_5124_, v___x_5126_);
lean_inc_n(v_numParams_5107_, 2);
lean_inc(v___y_5111_);
v___x_5128_ = l_Array_toSubarray___redArg(v___x_5127_, v___y_5111_, v_numParams_5107_);
v_start_5129_ = lean_ctor_get(v___x_5128_, 1);
lean_inc(v_start_5129_);
v_stop_5130_ = lean_ctor_get(v___x_5128_, 2);
lean_inc(v_stop_5130_);
v___x_5131_ = lean_array_get_size(v_snd_5093_);
v___x_5132_ = l_Array_toSubarray___redArg(v_snd_5093_, v_numParams_5107_, v___x_5131_);
v___x_5133_ = lean_array_get_size(v_snd_5101_);
v___x_5134_ = l_Subarray_copy___redArg(v___x_5132_);
v___x_5135_ = l_Array_toSubarray___redArg(v_snd_5101_, v_numParams_5107_, v___x_5133_);
v___x_5136_ = l_Subarray_copy___redArg(v___x_5135_);
v___x_5137_ = l_Lean_Expr_getNumHeadForalls(v_type_5119_);
lean_dec_ref(v_type_5119_);
v___x_5138_ = lean_nat_sub(v_stop_5130_, v_start_5129_);
lean_dec(v_start_5129_);
lean_dec(v_stop_5130_);
v___x_5139_ = lean_array_get_size(v___x_5134_);
v___x_5140_ = lean_nat_add(v___x_5138_, v___x_5139_);
lean_dec(v___x_5138_);
v___x_5141_ = lean_array_get_size(v___x_5136_);
v___x_5142_ = lean_nat_add(v___x_5140_, v___x_5141_);
lean_dec(v___x_5140_);
v___x_5143_ = lean_nat_add(v___x_5142_, v___x_5041_);
lean_dec(v___x_5142_);
v___x_5144_ = lean_nat_dec_le(v___x_5143_, v___x_5137_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; lean_object* v___x_5146_; 
lean_dec(v___x_5143_);
lean_dec(v___x_5137_);
lean_dec_ref(v___x_5136_);
lean_dec_ref(v___x_5134_);
lean_dec_ref(v___x_5128_);
lean_del_object(v___x_5121_);
lean_dec(v___y_5111_);
lean_dec(v___y_5110_);
lean_del_object(v___x_5103_);
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___x_5145_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__14, &l_Lean_Meta_mkNoConfusion___closed__14_once, _init_l_Lean_Meta_mkNoConfusion___closed__14);
v___x_5146_ = l_panic___at___00Lean_Meta_mkNoConfusion_spec__0(v___x_5145_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
return v___x_5146_;
}
else
{
lean_object* v___x_5148_; 
if (v_isShared_5104_ == 0)
{
lean_ctor_set_tag(v___x_5103_, 1);
lean_ctor_set(v___x_5103_, 1, v_us_5080_);
lean_ctor_set(v___x_5103_, 0, v_a_5088_);
v___x_5148_ = v___x_5103_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5187_; 
v_reuseFailAlloc_5187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5187_, 0, v_a_5088_);
lean_ctor_set(v_reuseFailAlloc_5187_, 1, v_us_5080_);
v___x_5148_ = v_reuseFailAlloc_5187_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5159_; 
v___x_5149_ = l_Lean_mkConst(v___y_5110_, v___x_5148_);
v___x_5150_ = l_Subarray_copy___redArg(v___x_5128_);
v___x_5151_ = l_Lean_mkAppN(v___x_5149_, v___x_5150_);
lean_dec_ref(v___x_5150_);
v___x_5152_ = lean_mk_empty_array_with_capacity(v___x_5125_);
v___x_5153_ = lean_array_push(v___x_5152_, v_target_5029_);
v___x_5154_ = l_Array_append___redArg(v___x_5153_, v___x_5134_);
lean_dec_ref(v___x_5134_);
v___x_5155_ = l_Array_append___redArg(v___x_5154_, v___x_5136_);
lean_dec_ref(v___x_5136_);
v___x_5156_ = l_Lean_mkAppN(v___x_5151_, v___x_5155_);
lean_dec_ref(v___x_5155_);
v___x_5157_ = lean_nat_sub(v___x_5137_, v___x_5143_);
lean_dec(v___x_5143_);
lean_dec(v___x_5137_);
lean_inc(v___y_5111_);
if (v_isShared_5122_ == 0)
{
lean_ctor_set(v___x_5121_, 2, v___x_5125_);
lean_ctor_set(v___x_5121_, 1, v___x_5157_);
lean_ctor_set(v___x_5121_, 0, v___y_5111_);
v___x_5159_ = v___x_5121_;
goto v_reusejp_5158_;
}
else
{
lean_object* v_reuseFailAlloc_5186_; 
v_reuseFailAlloc_5186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5186_, 0, v___y_5111_);
lean_ctor_set(v_reuseFailAlloc_5186_, 1, v___x_5157_);
lean_ctor_set(v_reuseFailAlloc_5186_, 2, v___x_5125_);
v___x_5159_ = v_reuseFailAlloc_5186_;
goto v_reusejp_5158_;
}
v_reusejp_5158_:
{
lean_object* v___x_5160_; 
v___x_5160_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg(v___x_5159_, v___x_5156_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
lean_dec_ref(v___x_5159_);
if (lean_obj_tag(v___x_5160_) == 0)
{
lean_object* v_a_5161_; lean_object* v___x_5162_; 
v_a_5161_ = lean_ctor_get(v___x_5160_, 0);
lean_inc_n(v_a_5161_, 2);
lean_dec_ref_known(v___x_5160_, 1);
lean_inc(v___y_5115_);
lean_inc_ref(v___y_5114_);
lean_inc(v___y_5113_);
lean_inc_ref(v___y_5112_);
v___x_5162_ = lean_infer_type(v_a_5161_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
if (lean_obj_tag(v___x_5162_) == 0)
{
lean_object* v_a_5163_; lean_object* v___x_5164_; 
v_a_5163_ = lean_ctor_get(v___x_5162_, 0);
lean_inc(v_a_5163_);
lean_dec_ref_known(v___x_5162_, 1);
v___x_5164_ = l_Lean_Meta_whnfForall(v_a_5163_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
if (lean_obj_tag(v___x_5164_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5185_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5185_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5185_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5169_; uint8_t v___x_5170_; 
v___x_5169_ = l_Lean_Expr_bindingDomain_x21(v_a_5165_);
lean_dec(v_a_5165_);
v___x_5170_ = l_Lean_Expr_isHEq(v___x_5169_);
lean_dec_ref(v___x_5169_);
if (v___x_5170_ == 0)
{
lean_object* v___x_5171_; lean_object* v___x_5173_; 
v___x_5171_ = l_Lean_Expr_app___override(v_a_5161_, v_h_5030_);
if (v_isShared_5168_ == 0)
{
lean_ctor_set(v___x_5167_, 0, v___x_5171_);
v___x_5173_ = v___x_5167_;
goto v_reusejp_5172_;
}
else
{
lean_object* v_reuseFailAlloc_5174_; 
v_reuseFailAlloc_5174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5174_, 0, v___x_5171_);
v___x_5173_ = v_reuseFailAlloc_5174_;
goto v_reusejp_5172_;
}
v_reusejp_5172_:
{
return v___x_5173_;
}
}
else
{
lean_object* v___x_5175_; 
lean_del_object(v___x_5167_);
v___x_5175_ = l_Lean_Meta_mkHEqOfEq(v_h_5030_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_);
if (lean_obj_tag(v___x_5175_) == 0)
{
lean_object* v_a_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5184_; 
v_a_5176_ = lean_ctor_get(v___x_5175_, 0);
v_isSharedCheck_5184_ = !lean_is_exclusive(v___x_5175_);
if (v_isSharedCheck_5184_ == 0)
{
v___x_5178_ = v___x_5175_;
v_isShared_5179_ = v_isSharedCheck_5184_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_a_5176_);
lean_dec(v___x_5175_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5184_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
lean_object* v___x_5180_; lean_object* v___x_5182_; 
v___x_5180_ = l_Lean_Expr_app___override(v_a_5161_, v_a_5176_);
if (v_isShared_5179_ == 0)
{
lean_ctor_set(v___x_5178_, 0, v___x_5180_);
v___x_5182_ = v___x_5178_;
goto v_reusejp_5181_;
}
else
{
lean_object* v_reuseFailAlloc_5183_; 
v_reuseFailAlloc_5183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5183_, 0, v___x_5180_);
v___x_5182_ = v_reuseFailAlloc_5183_;
goto v_reusejp_5181_;
}
v_reusejp_5181_:
{
return v___x_5182_;
}
}
}
else
{
lean_dec(v_a_5161_);
return v___x_5175_;
}
}
}
}
else
{
lean_dec(v_a_5161_);
lean_dec_ref(v_h_5030_);
return v___x_5164_;
}
}
else
{
lean_dec(v_a_5161_);
lean_dec_ref(v_h_5030_);
return v___x_5162_;
}
}
else
{
lean_dec_ref(v_h_5030_);
return v___x_5160_;
}
}
}
}
}
}
else
{
lean_object* v_a_5191_; lean_object* v___x_5193_; uint8_t v_isShared_5194_; uint8_t v_isSharedCheck_5198_; 
lean_dec(v___y_5111_);
lean_dec(v___y_5110_);
lean_dec(v_numParams_5107_);
lean_del_object(v___x_5103_);
lean_dec(v_snd_5101_);
lean_dec(v_snd_5093_);
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v_a_5191_ = lean_ctor_get(v___x_5116_, 0);
v_isSharedCheck_5198_ = !lean_is_exclusive(v___x_5116_);
if (v_isSharedCheck_5198_ == 0)
{
v___x_5193_ = v___x_5116_;
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
else
{
lean_inc(v_a_5191_);
lean_dec(v___x_5116_);
v___x_5193_ = lean_box(0);
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
v_resetjp_5192_:
{
lean_object* v___x_5196_; 
if (v_isShared_5194_ == 0)
{
v___x_5196_ = v___x_5193_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v_a_5191_);
v___x_5196_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
return v___x_5196_;
}
}
}
}
v___jp_5199_:
{
lean_object* v___x_5201_; uint8_t v___x_5202_; 
v___x_5201_ = lean_unsigned_to_nat(0u);
v___x_5202_ = lean_nat_dec_eq(v_numFields_5108_, v___x_5201_);
lean_dec(v_numFields_5108_);
if (v___x_5202_ == 0)
{
lean_object* v_name_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v_a_5207_; uint8_t v___x_5208_; 
v_name_5203_ = lean_ctor_get(v_toConstantVal_5105_, 0);
lean_inc(v_name_5203_);
lean_dec_ref(v_toConstantVal_5105_);
v___x_5204_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__0));
v___x_5205_ = l_Lean_Name_str___override(v_name_5203_, v___x_5204_);
lean_inc(v___x_5205_);
v___x_5206_ = l_Lean_hasConst___at___00Lean_Meta_mkNoConfusion_spec__2___redArg(v___x_5205_, v___x_5042_, v_a_5034_);
v_a_5207_ = lean_ctor_get(v___x_5206_, 0);
lean_inc(v_a_5207_);
lean_dec_ref(v___x_5206_);
v___x_5208_ = lean_unbox(v_a_5207_);
lean_dec(v_a_5207_);
if (v___x_5208_ == 0)
{
lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5212_; 
lean_dec(v_numParams_5107_);
lean_del_object(v___x_5103_);
lean_dec(v_snd_5101_);
lean_dec(v_snd_5093_);
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___x_5209_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__16, &l_Lean_Meta_mkNoConfusion___closed__16_once, _init_l_Lean_Meta_mkNoConfusion___closed__16);
v___x_5210_ = l_Lean_MessageData_ofName(v___x_5205_);
if (v_isShared_5096_ == 0)
{
lean_ctor_set_tag(v___x_5095_, 7);
lean_ctor_set(v___x_5095_, 1, v___x_5210_);
lean_ctor_set(v___x_5095_, 0, v___x_5209_);
v___x_5212_ = v___x_5095_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v___x_5209_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
lean_object* v___x_5213_; lean_object* v_a_5214_; lean_object* v___x_5216_; uint8_t v_isShared_5217_; uint8_t v_isSharedCheck_5221_; 
v___x_5213_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v___x_5212_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
v_a_5214_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5221_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5221_ == 0)
{
v___x_5216_ = v___x_5213_;
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
else
{
lean_inc(v_a_5214_);
lean_dec(v___x_5213_);
v___x_5216_ = lean_box(0);
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
v_resetjp_5215_:
{
lean_object* v___x_5219_; 
if (v_isShared_5217_ == 0)
{
v___x_5219_ = v___x_5216_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v_a_5214_);
v___x_5219_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
return v___x_5219_;
}
}
}
}
else
{
lean_del_object(v___x_5095_);
v___y_5110_ = v___x_5205_;
v___y_5111_ = v___x_5201_;
v___y_5112_ = v_a_5031_;
v___y_5113_ = v_a_5032_;
v___y_5114_ = v_a_5033_;
v___y_5115_ = v_a_5034_;
goto v___jp_5109_;
}
}
else
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___f_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; 
lean_dec(v_numParams_5107_);
lean_dec_ref(v_toConstantVal_5105_);
lean_del_object(v___x_5103_);
lean_dec(v_snd_5101_);
lean_del_object(v___x_5095_);
lean_dec(v_snd_5093_);
lean_dec(v_a_5088_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v_h_5030_);
v___x_5223_ = lean_box(v___y_5200_);
v___x_5224_ = lean_box(v___x_5202_);
v___f_5225_ = lean_alloc_closure((void*)(l_Lean_Meta_mkNoConfusion___lam__0___boxed), 8, 2);
lean_closure_set(v___f_5225_, 0, v___x_5223_);
lean_closure_set(v___f_5225_, 1, v___x_5224_);
v___x_5226_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__18));
v___x_5227_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg(v___x_5226_, v_target_5029_, v___f_5225_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
return v___x_5227_;
}
}
}
}
else
{
lean_dec(v_a_5098_);
lean_del_object(v___x_5095_);
lean_dec(v_snd_5093_);
lean_dec(v_fst_5092_);
lean_dec(v_a_5088_);
lean_dec_ref(v_val_5086_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___y_5054_ = v_a_5031_;
v___y_5055_ = v_a_5032_;
v___y_5056_ = v_a_5033_;
v___y_5057_ = v_a_5034_;
goto v___jp_5053_;
}
}
else
{
lean_object* v_a_5299_; lean_object* v___x_5301_; uint8_t v_isShared_5302_; uint8_t v_isSharedCheck_5306_; 
lean_del_object(v___x_5095_);
lean_dec(v_snd_5093_);
lean_dec(v_fst_5092_);
lean_dec(v_a_5088_);
lean_dec_ref(v_val_5086_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v_a_5299_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5306_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5306_ == 0)
{
v___x_5301_ = v___x_5097_;
v_isShared_5302_ = v_isSharedCheck_5306_;
goto v_resetjp_5300_;
}
else
{
lean_inc(v_a_5299_);
lean_dec(v___x_5097_);
v___x_5301_ = lean_box(0);
v_isShared_5302_ = v_isSharedCheck_5306_;
goto v_resetjp_5300_;
}
v_resetjp_5300_:
{
lean_object* v___x_5304_; 
if (v_isShared_5302_ == 0)
{
v___x_5304_ = v___x_5301_;
goto v_reusejp_5303_;
}
else
{
lean_object* v_reuseFailAlloc_5305_; 
v_reuseFailAlloc_5305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5305_, 0, v_a_5299_);
v___x_5304_ = v_reuseFailAlloc_5305_;
goto v_reusejp_5303_;
}
v_reusejp_5303_:
{
return v___x_5304_;
}
}
}
}
}
else
{
lean_dec(v_a_5090_);
lean_dec(v_a_5088_);
lean_dec_ref(v_val_5086_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___y_5054_ = v_a_5031_;
v___y_5055_ = v_a_5032_;
v___y_5056_ = v_a_5033_;
v___y_5057_ = v_a_5034_;
goto v___jp_5053_;
}
}
else
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
lean_dec(v_a_5088_);
lean_dec_ref(v_val_5086_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v_a_5308_ = lean_ctor_get(v___x_5089_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5089_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5089_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5089_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
lean_dec_ref(v_val_5086_);
lean_dec(v_us_5080_);
lean_dec(v_a_5067_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v_a_5316_ = lean_ctor_get(v___x_5087_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5087_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5087_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5087_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
}
}
else
{
lean_dec(v_val_5085_);
lean_dec(v_us_5080_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___y_5069_ = v_a_5031_;
v___y_5070_ = v_a_5032_;
v___y_5071_ = v_a_5033_;
v___y_5072_ = v_a_5034_;
goto v___jp_5068_;
}
}
}
else
{
lean_dec_ref(v___x_5078_);
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
v___y_5069_ = v_a_5031_;
v___y_5070_ = v_a_5032_;
v___y_5071_ = v_a_5033_;
v___y_5072_ = v_a_5034_;
goto v___jp_5068_;
}
v___jp_5068_:
{
lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5073_ = ((lean_object*)(l_Lean_Meta_mkNoConfusion___closed__1));
v___x_5074_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__11, &l_Lean_Meta_mkNoConfusion___closed__11_once, _init_l_Lean_Meta_mkNoConfusion___closed__11);
v___x_5075_ = l_Lean_indentExpr(v_a_5067_);
v___x_5076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5074_);
lean_ctor_set(v___x_5076_, 1, v___x_5075_);
v___x_5077_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_5073_, v___x_5076_, v___y_5069_, v___y_5070_, v___y_5071_, v___y_5072_);
return v___x_5077_;
}
}
else
{
lean_dec_ref(v___x_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
return v___x_5066_;
}
v___jp_5053_:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; 
v___x_5058_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__6, &l_Lean_Meta_mkNoConfusion___closed__6_once, _init_l_Lean_Meta_mkNoConfusion___closed__6);
v___x_5059_ = l_Lean_MessageData_ofExpr(v___x_5051_);
v___x_5060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5058_);
lean_ctor_set(v___x_5060_, 1, v___x_5059_);
v___x_5061_ = lean_obj_once(&l_Lean_Meta_mkNoConfusion___closed__8, &l_Lean_Meta_mkNoConfusion___closed__8_once, _init_l_Lean_Meta_mkNoConfusion___closed__8);
v___x_5062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5060_);
lean_ctor_set(v___x_5062_, 1, v___x_5061_);
v___x_5063_ = l_Lean_MessageData_ofExpr(v___x_5052_);
v___x_5064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5064_, 0, v___x_5062_);
lean_ctor_set(v___x_5064_, 1, v___x_5063_);
v___x_5065_ = l_Lean_throwError___at___00__private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException_spec__0___redArg(v___x_5064_, v___y_5054_, v___y_5055_, v___y_5056_, v___y_5057_);
return v___x_5065_;
}
}
}
else
{
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
return v___x_5038_;
}
}
else
{
lean_dec_ref(v_h_5030_);
lean_dec_ref(v_target_5029_);
return v___x_5036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNoConfusion___boxed(lean_object* v_target_5324_, lean_object* v_h_5325_, lean_object* v_a_5326_, lean_object* v_a_5327_, lean_object* v_a_5328_, lean_object* v_a_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lean_Meta_mkNoConfusion(v_target_5324_, v_h_5325_, v_a_5326_, v_a_5327_, v_a_5328_, v_a_5329_);
lean_dec(v_a_5329_);
lean_dec_ref(v_a_5328_);
lean_dec(v_a_5327_);
lean_dec_ref(v_a_5326_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1(lean_object* v_range_5332_, lean_object* v_b_5333_, lean_object* v_i_5334_, lean_object* v_hs_5335_, lean_object* v_hl_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_){
_start:
{
lean_object* v___x_5342_; 
v___x_5342_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___redArg(v_range_5332_, v_b_5333_, v_i_5334_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_);
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1___boxed(lean_object* v_range_5343_, lean_object* v_b_5344_, lean_object* v_i_5345_, lean_object* v_hs_5346_, lean_object* v_hl_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkNoConfusion_spec__1(v_range_5343_, v_b_5344_, v_i_5345_, v_hs_5346_, v_hl_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_);
lean_dec(v___y_5351_);
lean_dec_ref(v___y_5350_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
lean_dec_ref(v_range_5343_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3(lean_object* v_00_u03b1_5354_, lean_object* v_name_5355_, uint8_t v_bi_5356_, lean_object* v_type_5357_, lean_object* v_k_5358_, uint8_t v_kind_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_){
_start:
{
lean_object* v___x_5365_; 
v___x_5365_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___redArg(v_name_5355_, v_bi_5356_, v_type_5357_, v_k_5358_, v_kind_5359_, v___y_5360_, v___y_5361_, v___y_5362_, v___y_5363_);
return v___x_5365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3___boxed(lean_object* v_00_u03b1_5366_, lean_object* v_name_5367_, lean_object* v_bi_5368_, lean_object* v_type_5369_, lean_object* v_k_5370_, lean_object* v_kind_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_){
_start:
{
uint8_t v_bi_boxed_5377_; uint8_t v_kind_boxed_5378_; lean_object* v_res_5379_; 
v_bi_boxed_5377_ = lean_unbox(v_bi_5368_);
v_kind_boxed_5378_ = lean_unbox(v_kind_5371_);
v_res_5379_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3_spec__3(v_00_u03b1_5366_, v_name_5367_, v_bi_boxed_5377_, v_type_5369_, v_k_5370_, v_kind_boxed_5378_, v___y_5372_, v___y_5373_, v___y_5374_, v___y_5375_);
lean_dec(v___y_5375_);
lean_dec_ref(v___y_5374_);
lean_dec(v___y_5373_);
lean_dec_ref(v___y_5372_);
return v_res_5379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3(lean_object* v_00_u03b1_5380_, lean_object* v_name_5381_, lean_object* v_type_5382_, lean_object* v_k_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_){
_start:
{
lean_object* v___x_5389_; 
v___x_5389_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___redArg(v_name_5381_, v_type_5382_, v_k_5383_, v___y_5384_, v___y_5385_, v___y_5386_, v___y_5387_);
return v___x_5389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3___boxed(lean_object* v_00_u03b1_5390_, lean_object* v_name_5391_, lean_object* v_type_5392_, lean_object* v_k_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_){
_start:
{
lean_object* v_res_5399_; 
v_res_5399_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_mkNoConfusion_spec__3(v_00_u03b1_5390_, v_name_5391_, v_type_5392_, v_k_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_);
lean_dec(v___y_5397_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
return v_res_5399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPure(lean_object* v_monad_5405_, lean_object* v_e_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_){
_start:
{
lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; 
v___x_5412_ = ((lean_object*)(l_Lean_Meta_mkPure___closed__2));
v___x_5413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5413_, 0, v_monad_5405_);
v___x_5414_ = lean_box(0);
v___x_5415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5415_, 0, v_e_5406_);
v___x_5416_ = lean_unsigned_to_nat(4u);
v___x_5417_ = lean_mk_empty_array_with_capacity(v___x_5416_);
v___x_5418_ = lean_array_push(v___x_5417_, v___x_5413_);
v___x_5419_ = lean_array_push(v___x_5418_, v___x_5414_);
v___x_5420_ = lean_array_push(v___x_5419_, v___x_5414_);
v___x_5421_ = lean_array_push(v___x_5420_, v___x_5415_);
v___x_5422_ = l_Lean_Meta_mkAppOptM(v___x_5412_, v___x_5421_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_);
return v___x_5422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPure___boxed(lean_object* v_monad_5423_, lean_object* v_e_5424_, lean_object* v_a_5425_, lean_object* v_a_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l_Lean_Meta_mkPure(v_monad_5423_, v_e_5424_, v_a_5425_, v_a_5426_, v_a_5427_, v_a_5428_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
lean_dec(v_a_5426_);
lean_dec_ref(v_a_5425_);
return v_res_5430_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjection___closed__4(void){
_start:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5440_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__3));
v___x_5441_ = l_Lean_MessageData_ofFormat(v___x_5440_);
return v___x_5441_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjection___closed__7(void){
_start:
{
lean_object* v___x_5445_; lean_object* v___x_5446_; 
v___x_5445_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__6));
v___x_5446_ = l_Lean_MessageData_ofFormat(v___x_5445_);
return v___x_5446_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjection___closed__10(void){
_start:
{
lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5450_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__9));
v___x_5451_ = l_Lean_MessageData_ofFormat(v___x_5450_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjection(lean_object* v_s_5452_, lean_object* v_fieldName_5453_, lean_object* v_a_5454_, lean_object* v_a_5455_, lean_object* v_a_5456_, lean_object* v_a_5457_){
_start:
{
lean_object* v___x_5459_; 
lean_inc(v_a_5457_);
lean_inc_ref(v_a_5456_);
lean_inc(v_a_5455_);
lean_inc_ref(v_a_5454_);
lean_inc_ref(v_s_5452_);
v___x_5459_ = lean_infer_type(v_s_5452_, v_a_5454_, v_a_5455_, v_a_5456_, v_a_5457_);
if (lean_obj_tag(v___x_5459_) == 0)
{
lean_object* v_a_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5556_; 
v_a_5460_ = lean_ctor_get(v___x_5459_, 0);
v_isSharedCheck_5556_ = !lean_is_exclusive(v___x_5459_);
if (v_isSharedCheck_5556_ == 0)
{
v___x_5462_ = v___x_5459_;
v_isShared_5463_ = v_isSharedCheck_5556_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_a_5460_);
lean_dec(v___x_5459_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5556_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5464_; 
lean_inc(v_a_5457_);
lean_inc_ref(v_a_5456_);
lean_inc(v_a_5455_);
lean_inc_ref(v_a_5454_);
v___x_5464_ = lean_whnf(v_a_5460_, v_a_5454_, v_a_5455_, v_a_5456_, v_a_5457_);
if (lean_obj_tag(v___x_5464_) == 0)
{
lean_object* v_a_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5555_; 
v_a_5465_ = lean_ctor_get(v___x_5464_, 0);
v_isSharedCheck_5555_ = !lean_is_exclusive(v___x_5464_);
if (v_isSharedCheck_5555_ == 0)
{
v___x_5467_ = v___x_5464_;
v_isShared_5468_ = v_isSharedCheck_5555_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_a_5465_);
lean_dec(v___x_5464_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5555_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___y_5470_; lean_object* v___y_5471_; lean_object* v___y_5472_; lean_object* v___y_5473_; lean_object* v___x_5488_; 
v___x_5488_ = l_Lean_Expr_getAppFn(v_a_5465_);
if (lean_obj_tag(v___x_5488_) == 4)
{
lean_object* v_declName_5489_; lean_object* v_us_5490_; lean_object* v___x_5491_; lean_object* v_env_5492_; lean_object* v___y_5494_; lean_object* v___y_5495_; lean_object* v___y_5496_; lean_object* v___y_5497_; uint8_t v___x_5536_; 
v_declName_5489_ = lean_ctor_get(v___x_5488_, 0);
lean_inc_n(v_declName_5489_, 2);
v_us_5490_ = lean_ctor_get(v___x_5488_, 1);
lean_inc(v_us_5490_);
lean_dec_ref_known(v___x_5488_, 2);
v___x_5491_ = lean_st_ref_get(v_a_5457_);
v_env_5492_ = lean_ctor_get(v___x_5491_, 0);
lean_inc_ref_n(v_env_5492_, 2);
lean_dec(v___x_5491_);
v___x_5536_ = l_Lean_isStructure(v_env_5492_, v_declName_5489_);
if (v___x_5536_ == 0)
{
lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; 
v___x_5537_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__1));
v___x_5538_ = lean_obj_once(&l_Lean_Meta_mkProjection___closed__10, &l_Lean_Meta_mkProjection___closed__10_once, _init_l_Lean_Meta_mkProjection___closed__10);
lean_inc(v_a_5465_);
lean_inc_ref(v_s_5452_);
v___x_5539_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_s_5452_, v_a_5465_);
v___x_5540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5540_, 0, v___x_5538_);
lean_ctor_set(v___x_5540_, 1, v___x_5539_);
v___x_5541_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_5537_, v___x_5540_, v_a_5454_, v_a_5455_, v_a_5456_, v_a_5457_);
if (lean_obj_tag(v___x_5541_) == 0)
{
lean_dec_ref_known(v___x_5541_, 1);
v___y_5494_ = v_a_5454_;
v___y_5495_ = v_a_5455_;
v___y_5496_ = v_a_5456_;
v___y_5497_ = v_a_5457_;
goto v___jp_5493_;
}
else
{
lean_object* v_a_5542_; lean_object* v___x_5544_; uint8_t v_isShared_5545_; uint8_t v_isSharedCheck_5549_; 
lean_dec_ref(v_env_5492_);
lean_dec(v_us_5490_);
lean_dec(v_declName_5489_);
lean_del_object(v___x_5467_);
lean_dec(v_a_5465_);
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
lean_dec_ref(v_s_5452_);
v_a_5542_ = lean_ctor_get(v___x_5541_, 0);
v_isSharedCheck_5549_ = !lean_is_exclusive(v___x_5541_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5544_ = v___x_5541_;
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
else
{
lean_inc(v_a_5542_);
lean_dec(v___x_5541_);
v___x_5544_ = lean_box(0);
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
v_resetjp_5543_:
{
lean_object* v___x_5547_; 
if (v_isShared_5545_ == 0)
{
v___x_5547_ = v___x_5544_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_a_5542_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
return v___x_5547_;
}
}
}
}
else
{
v___y_5494_ = v_a_5454_;
v___y_5495_ = v_a_5455_;
v___y_5496_ = v_a_5456_;
v___y_5497_ = v_a_5457_;
goto v___jp_5493_;
}
v___jp_5493_:
{
lean_object* v___x_5498_; 
lean_inc(v_fieldName_5453_);
lean_inc(v_declName_5489_);
lean_inc_ref(v_env_5492_);
v___x_5498_ = l_Lean_getProjFnForField_x3f(v_env_5492_, v_declName_5489_, v_fieldName_5453_);
if (lean_obj_tag(v___x_5498_) == 0)
{
lean_object* v___x_5499_; lean_object* v___x_5500_; size_t v_sz_5501_; size_t v___x_5502_; lean_object* v___x_5503_; 
lean_dec(v_us_5490_);
lean_del_object(v___x_5467_);
lean_inc(v_declName_5489_);
lean_inc_ref(v_env_5492_);
v___x_5499_ = l_Lean_getStructureFields(v_env_5492_, v_declName_5489_);
v___x_5500_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___closed__0));
v_sz_5501_ = lean_array_size(v___x_5499_);
v___x_5502_ = ((size_t)0ULL);
lean_inc(v_fieldName_5453_);
lean_inc_ref(v_s_5452_);
v___x_5503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0(v_env_5492_, v_declName_5489_, v_s_5452_, v_fieldName_5453_, v___x_5499_, v_sz_5501_, v___x_5502_, v___x_5500_, v___y_5494_, v___y_5495_, v___y_5496_, v___y_5497_);
lean_dec_ref(v___x_5499_);
if (lean_obj_tag(v___x_5503_) == 0)
{
lean_object* v_a_5504_; lean_object* v___x_5506_; uint8_t v_isShared_5507_; uint8_t v_isSharedCheck_5514_; 
v_a_5504_ = lean_ctor_get(v___x_5503_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v___x_5503_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5506_ = v___x_5503_;
v_isShared_5507_ = v_isSharedCheck_5514_;
goto v_resetjp_5505_;
}
else
{
lean_inc(v_a_5504_);
lean_dec(v___x_5503_);
v___x_5506_ = lean_box(0);
v_isShared_5507_ = v_isSharedCheck_5514_;
goto v_resetjp_5505_;
}
v_resetjp_5505_:
{
lean_object* v_fst_5508_; 
v_fst_5508_ = lean_ctor_get(v_a_5504_, 0);
lean_inc(v_fst_5508_);
lean_dec(v_a_5504_);
if (lean_obj_tag(v_fst_5508_) == 0)
{
lean_del_object(v___x_5506_);
v___y_5470_ = v___y_5494_;
v___y_5471_ = v___y_5496_;
v___y_5472_ = v___y_5497_;
v___y_5473_ = v___y_5495_;
goto v___jp_5469_;
}
else
{
lean_object* v_val_5509_; 
v_val_5509_ = lean_ctor_get(v_fst_5508_, 0);
lean_inc(v_val_5509_);
lean_dec_ref_known(v_fst_5508_, 1);
if (lean_obj_tag(v_val_5509_) == 0)
{
lean_del_object(v___x_5506_);
v___y_5470_ = v___y_5494_;
v___y_5471_ = v___y_5496_;
v___y_5472_ = v___y_5497_;
v___y_5473_ = v___y_5495_;
goto v___jp_5469_;
}
else
{
lean_object* v_val_5510_; lean_object* v___x_5512_; 
lean_dec(v_a_5465_);
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
lean_dec_ref(v_s_5452_);
v_val_5510_ = lean_ctor_get(v_val_5509_, 0);
lean_inc(v_val_5510_);
lean_dec_ref_known(v_val_5509_, 1);
if (v_isShared_5507_ == 0)
{
lean_ctor_set(v___x_5506_, 0, v_val_5510_);
v___x_5512_ = v___x_5506_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5513_; 
v_reuseFailAlloc_5513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5513_, 0, v_val_5510_);
v___x_5512_ = v_reuseFailAlloc_5513_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
return v___x_5512_;
}
}
}
}
}
else
{
lean_object* v_a_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5522_; 
lean_dec(v_a_5465_);
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
lean_dec_ref(v_s_5452_);
v_a_5515_ = lean_ctor_get(v___x_5503_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5503_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5517_ = v___x_5503_;
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_a_5515_);
lean_dec(v___x_5503_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v___x_5520_; 
if (v_isShared_5518_ == 0)
{
v___x_5520_ = v___x_5517_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_a_5515_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
else
{
lean_object* v_val_5523_; lean_object* v_dummy_5524_; lean_object* v_nargs_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5534_; 
lean_dec_ref(v_env_5492_);
lean_dec(v_declName_5489_);
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
v_val_5523_ = lean_ctor_get(v___x_5498_, 0);
lean_inc(v_val_5523_);
lean_dec_ref_known(v___x_5498_, 1);
v_dummy_5524_ = lean_obj_once(&l_Lean_Meta_congrArg_x3f___closed__2, &l_Lean_Meta_congrArg_x3f___closed__2_once, _init_l_Lean_Meta_congrArg_x3f___closed__2);
v_nargs_5525_ = l_Lean_Expr_getAppNumArgs(v_a_5465_);
lean_inc(v_nargs_5525_);
v___x_5526_ = lean_mk_array(v_nargs_5525_, v_dummy_5524_);
v___x_5527_ = lean_unsigned_to_nat(1u);
v___x_5528_ = lean_nat_sub(v_nargs_5525_, v___x_5527_);
lean_dec(v_nargs_5525_);
v___x_5529_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_5465_, v___x_5526_, v___x_5528_);
v___x_5530_ = l_Lean_mkConst(v_val_5523_, v_us_5490_);
v___x_5531_ = l_Lean_mkAppN(v___x_5530_, v___x_5529_);
lean_dec_ref(v___x_5529_);
v___x_5532_ = l_Lean_Expr_app___override(v___x_5531_, v_s_5452_);
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 0, v___x_5532_);
v___x_5534_ = v___x_5467_;
goto v_reusejp_5533_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v___x_5532_);
v___x_5534_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5533_;
}
v_reusejp_5533_:
{
return v___x_5534_;
}
}
}
}
else
{
lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; 
lean_dec_ref(v___x_5488_);
lean_del_object(v___x_5467_);
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
v___x_5550_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__1));
v___x_5551_ = lean_obj_once(&l_Lean_Meta_mkProjection___closed__10, &l_Lean_Meta_mkProjection___closed__10_once, _init_l_Lean_Meta_mkProjection___closed__10);
v___x_5552_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_s_5452_, v_a_5465_);
v___x_5553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5553_, 0, v___x_5551_);
lean_ctor_set(v___x_5553_, 1, v___x_5552_);
v___x_5554_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_5550_, v___x_5553_, v_a_5454_, v_a_5455_, v_a_5456_, v_a_5457_);
return v___x_5554_;
}
v___jp_5469_:
{
lean_object* v___x_5474_; lean_object* v___x_5475_; uint8_t v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5479_; 
v___x_5474_ = ((lean_object*)(l_Lean_Meta_mkProjection___closed__1));
v___x_5475_ = lean_obj_once(&l_Lean_Meta_mkProjection___closed__4, &l_Lean_Meta_mkProjection___closed__4_once, _init_l_Lean_Meta_mkProjection___closed__4);
v___x_5476_ = 1;
v___x_5477_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fieldName_5453_, v___x_5476_);
if (v_isShared_5463_ == 0)
{
lean_ctor_set_tag(v___x_5462_, 3);
lean_ctor_set(v___x_5462_, 0, v___x_5477_);
v___x_5479_ = v___x_5462_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v___x_5477_);
v___x_5479_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; 
v___x_5480_ = l_Lean_MessageData_ofFormat(v___x_5479_);
v___x_5481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5475_);
lean_ctor_set(v___x_5481_, 1, v___x_5480_);
v___x_5482_ = lean_obj_once(&l_Lean_Meta_mkProjection___closed__7, &l_Lean_Meta_mkProjection___closed__7_once, _init_l_Lean_Meta_mkProjection___closed__7);
v___x_5483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5483_, 0, v___x_5481_);
lean_ctor_set(v___x_5483_, 1, v___x_5482_);
v___x_5484_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_hasTypeMsg(v_s_5452_, v_a_5465_);
v___x_5485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5485_, 0, v___x_5483_);
lean_ctor_set(v___x_5485_, 1, v___x_5484_);
v___x_5486_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_throwAppBuilderException___redArg(v___x_5474_, v___x_5485_, v___y_5470_, v___y_5473_, v___y_5471_, v___y_5472_);
return v___x_5486_;
}
}
}
}
else
{
lean_del_object(v___x_5462_);
lean_dec(v_fieldName_5453_);
lean_dec_ref(v_s_5452_);
return v___x_5464_;
}
}
}
else
{
lean_dec(v_fieldName_5453_);
lean_dec_ref(v_s_5452_);
return v___x_5459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0(lean_object* v___x_5557_, lean_object* v_declName_5558_, lean_object* v_s_5559_, lean_object* v_fieldName_5560_, lean_object* v_as_5561_, size_t v_sz_5562_, size_t v_i_5563_, lean_object* v_b_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_){
_start:
{
lean_object* v_a_5571_; uint8_t v___x_5575_; 
v___x_5575_ = lean_usize_dec_lt(v_i_5563_, v_sz_5562_);
if (v___x_5575_ == 0)
{
lean_object* v___x_5576_; 
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
v___x_5576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5576_, 0, v_b_5564_);
return v___x_5576_;
}
else
{
lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v_a_5579_; lean_object* v___x_5580_; 
lean_dec_ref(v_b_5564_);
v___x_5577_ = lean_box(0);
v___x_5578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___closed__0));
v_a_5579_ = lean_array_uget_borrowed(v_as_5561_, v_i_5563_);
lean_inc(v_a_5579_);
lean_inc(v_declName_5558_);
lean_inc_ref(v___x_5557_);
v___x_5580_ = l_Lean_isSubobjectField_x3f(v___x_5557_, v_declName_5558_, v_a_5579_);
if (lean_obj_tag(v___x_5580_) == 0)
{
v_a_5571_ = v___x_5578_;
goto v___jp_5570_;
}
else
{
lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5639_; 
v_isSharedCheck_5639_ = !lean_is_exclusive(v___x_5580_);
if (v_isSharedCheck_5639_ == 0)
{
lean_object* v_unused_5640_; 
v_unused_5640_ = lean_ctor_get(v___x_5580_, 0);
lean_dec(v_unused_5640_);
v___x_5582_ = v___x_5580_;
v_isShared_5583_ = v_isSharedCheck_5639_;
goto v_resetjp_5581_;
}
else
{
lean_dec(v___x_5580_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5639_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5584_; 
lean_inc(v_a_5579_);
lean_inc_ref(v_s_5559_);
v___x_5584_ = l_Lean_Meta_mkProjection(v_s_5559_, v_a_5579_, v___y_5565_, v___y_5566_, v___y_5567_, v___y_5568_);
if (lean_obj_tag(v___x_5584_) == 0)
{
lean_object* v_a_5585_; lean_object* v___x_5586_; 
v_a_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5585_);
lean_dec_ref_known(v___x_5584_, 1);
v___x_5586_ = l_Lean_Meta_saveState___redArg(v___y_5566_, v___y_5568_);
if (lean_obj_tag(v___x_5586_) == 0)
{
lean_object* v_a_5587_; lean_object* v___x_5588_; 
v_a_5587_ = lean_ctor_get(v___x_5586_, 0);
lean_inc(v_a_5587_);
lean_dec_ref_known(v___x_5586_, 1);
lean_inc(v_fieldName_5560_);
v___x_5588_ = l_Lean_Meta_mkProjection(v_a_5585_, v_fieldName_5560_, v___y_5565_, v___y_5566_, v___y_5567_, v___y_5568_);
if (lean_obj_tag(v___x_5588_) == 0)
{
lean_object* v_a_5589_; lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5601_; 
lean_dec(v_a_5587_);
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
v_a_5589_ = lean_ctor_get(v___x_5588_, 0);
v_isSharedCheck_5601_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5601_ == 0)
{
v___x_5591_ = v___x_5588_;
v_isShared_5592_ = v_isSharedCheck_5601_;
goto v_resetjp_5590_;
}
else
{
lean_inc(v_a_5589_);
lean_dec(v___x_5588_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5601_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
lean_object* v___x_5594_; 
if (v_isShared_5583_ == 0)
{
lean_ctor_set(v___x_5582_, 0, v_a_5589_);
v___x_5594_ = v___x_5582_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v_a_5589_);
v___x_5594_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5598_; 
v___x_5595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5595_, 0, v___x_5594_);
v___x_5596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5595_);
lean_ctor_set(v___x_5596_, 1, v___x_5577_);
if (v_isShared_5592_ == 0)
{
lean_ctor_set(v___x_5591_, 0, v___x_5596_);
v___x_5598_ = v___x_5591_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v___x_5596_);
v___x_5598_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
return v___x_5598_;
}
}
}
}
else
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5622_; 
lean_del_object(v___x_5582_);
v_a_5602_ = lean_ctor_get(v___x_5588_, 0);
v_isSharedCheck_5622_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5622_ == 0)
{
v___x_5604_ = v___x_5588_;
v_isShared_5605_ = v_isSharedCheck_5622_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v___x_5588_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5622_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
uint8_t v___y_5607_; uint8_t v___x_5620_; 
v___x_5620_ = l_Lean_Exception_isInterrupt(v_a_5602_);
if (v___x_5620_ == 0)
{
uint8_t v___x_5621_; 
lean_inc(v_a_5602_);
v___x_5621_ = l_Lean_Exception_isRuntime(v_a_5602_);
v___y_5607_ = v___x_5621_;
goto v___jp_5606_;
}
else
{
v___y_5607_ = v___x_5620_;
goto v___jp_5606_;
}
v___jp_5606_:
{
if (v___y_5607_ == 0)
{
lean_object* v___x_5608_; 
lean_del_object(v___x_5604_);
lean_dec(v_a_5602_);
v___x_5608_ = l_Lean_Meta_SavedState_restore___redArg(v_a_5587_, v___y_5566_, v___y_5568_);
lean_dec(v_a_5587_);
if (lean_obj_tag(v___x_5608_) == 0)
{
lean_dec_ref_known(v___x_5608_, 1);
v_a_5571_ = v___x_5578_;
goto v___jp_5570_;
}
else
{
lean_object* v_a_5609_; lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5616_; 
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
v_a_5609_ = lean_ctor_get(v___x_5608_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5608_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5611_ = v___x_5608_;
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
else
{
lean_inc(v_a_5609_);
lean_dec(v___x_5608_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
lean_object* v___x_5614_; 
if (v_isShared_5612_ == 0)
{
v___x_5614_ = v___x_5611_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_a_5609_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
return v___x_5614_;
}
}
}
}
else
{
lean_object* v___x_5618_; 
lean_dec(v_a_5587_);
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
if (v_isShared_5605_ == 0)
{
v___x_5618_ = v___x_5604_;
goto v_reusejp_5617_;
}
else
{
lean_object* v_reuseFailAlloc_5619_; 
v_reuseFailAlloc_5619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5619_, 0, v_a_5602_);
v___x_5618_ = v_reuseFailAlloc_5619_;
goto v_reusejp_5617_;
}
v_reusejp_5617_:
{
return v___x_5618_;
}
}
}
}
}
}
else
{
lean_object* v_a_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5630_; 
lean_dec(v_a_5585_);
lean_del_object(v___x_5582_);
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
v_a_5623_ = lean_ctor_get(v___x_5586_, 0);
v_isSharedCheck_5630_ = !lean_is_exclusive(v___x_5586_);
if (v_isSharedCheck_5630_ == 0)
{
v___x_5625_ = v___x_5586_;
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_a_5623_);
lean_dec(v___x_5586_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5628_; 
if (v_isShared_5626_ == 0)
{
v___x_5628_ = v___x_5625_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_a_5623_);
v___x_5628_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
return v___x_5628_;
}
}
}
}
else
{
lean_object* v_a_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5638_; 
lean_del_object(v___x_5582_);
lean_dec(v_fieldName_5560_);
lean_dec_ref(v_s_5559_);
lean_dec(v_declName_5558_);
lean_dec_ref(v___x_5557_);
v_a_5631_ = lean_ctor_get(v___x_5584_, 0);
v_isSharedCheck_5638_ = !lean_is_exclusive(v___x_5584_);
if (v_isSharedCheck_5638_ == 0)
{
v___x_5633_ = v___x_5584_;
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_a_5631_);
lean_dec(v___x_5584_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5636_; 
if (v_isShared_5634_ == 0)
{
v___x_5636_ = v___x_5633_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_a_5631_);
v___x_5636_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
return v___x_5636_;
}
}
}
}
}
}
v___jp_5570_:
{
size_t v___x_5572_; size_t v___x_5573_; 
v___x_5572_ = ((size_t)1ULL);
v___x_5573_ = lean_usize_add(v_i_5563_, v___x_5572_);
lean_inc_ref(v_a_5571_);
v_i_5563_ = v___x_5573_;
v_b_5564_ = v_a_5571_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0___boxed(lean_object* v___x_5641_, lean_object* v_declName_5642_, lean_object* v_s_5643_, lean_object* v_fieldName_5644_, lean_object* v_as_5645_, lean_object* v_sz_5646_, lean_object* v_i_5647_, lean_object* v_b_5648_, lean_object* v___y_5649_, lean_object* v___y_5650_, lean_object* v___y_5651_, lean_object* v___y_5652_, lean_object* v___y_5653_){
_start:
{
size_t v_sz_boxed_5654_; size_t v_i_boxed_5655_; lean_object* v_res_5656_; 
v_sz_boxed_5654_ = lean_unbox_usize(v_sz_5646_);
lean_dec(v_sz_5646_);
v_i_boxed_5655_ = lean_unbox_usize(v_i_5647_);
lean_dec(v_i_5647_);
v_res_5656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjection_spec__0(v___x_5641_, v_declName_5642_, v_s_5643_, v_fieldName_5644_, v_as_5645_, v_sz_boxed_5654_, v_i_boxed_5655_, v_b_5648_, v___y_5649_, v___y_5650_, v___y_5651_, v___y_5652_);
lean_dec(v___y_5652_);
lean_dec_ref(v___y_5651_);
lean_dec(v___y_5650_);
lean_dec_ref(v___y_5649_);
lean_dec_ref(v_as_5645_);
return v_res_5656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjection___boxed(lean_object* v_s_5657_, lean_object* v_fieldName_5658_, lean_object* v_a_5659_, lean_object* v_a_5660_, lean_object* v_a_5661_, lean_object* v_a_5662_, lean_object* v_a_5663_){
_start:
{
lean_object* v_res_5664_; 
v_res_5664_ = l_Lean_Meta_mkProjection(v_s_5657_, v_fieldName_5658_, v_a_5659_, v_a_5660_, v_a_5661_, v_a_5662_);
lean_dec(v_a_5662_);
lean_dec_ref(v_a_5661_);
lean_dec(v_a_5660_);
lean_dec_ref(v_a_5659_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux(lean_object* v_nil_5665_, lean_object* v_cons_5666_, lean_object* v_x_5667_){
_start:
{
if (lean_obj_tag(v_x_5667_) == 0)
{
lean_dec_ref(v_cons_5666_);
lean_inc_ref(v_nil_5665_);
return v_nil_5665_;
}
else
{
lean_object* v_head_5668_; lean_object* v_tail_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; 
v_head_5668_ = lean_ctor_get(v_x_5667_, 0);
lean_inc(v_head_5668_);
v_tail_5669_ = lean_ctor_get(v_x_5667_, 1);
lean_inc(v_tail_5669_);
lean_dec_ref_known(v_x_5667_, 2);
lean_inc_ref(v_cons_5666_);
v___x_5670_ = l_Lean_Expr_app___override(v_cons_5666_, v_head_5668_);
v___x_5671_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux(v_nil_5665_, v_cons_5666_, v_tail_5669_);
v___x_5672_ = l_Lean_Expr_app___override(v___x_5670_, v___x_5671_);
return v___x_5672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux___boxed(lean_object* v_nil_5673_, lean_object* v_cons_5674_, lean_object* v_x_5675_){
_start:
{
lean_object* v_res_5676_; 
v_res_5676_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux(v_nil_5673_, v_cons_5674_, v_x_5675_);
lean_dec_ref(v_nil_5673_);
return v_res_5676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkListLit(lean_object* v_type_5686_, lean_object* v_xs_5687_, lean_object* v_a_5688_, lean_object* v_a_5689_, lean_object* v_a_5690_, lean_object* v_a_5691_){
_start:
{
lean_object* v___x_5693_; 
lean_inc_ref(v_type_5686_);
v___x_5693_ = l_Lean_Meta_getDecLevel(v_type_5686_, v_a_5688_, v_a_5689_, v_a_5690_, v_a_5691_);
if (lean_obj_tag(v___x_5693_) == 0)
{
lean_object* v_a_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5713_; 
v_a_5694_ = lean_ctor_get(v___x_5693_, 0);
v_isSharedCheck_5713_ = !lean_is_exclusive(v___x_5693_);
if (v_isSharedCheck_5713_ == 0)
{
v___x_5696_ = v___x_5693_;
v_isShared_5697_ = v_isSharedCheck_5713_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_a_5694_);
lean_dec(v___x_5693_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5713_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; 
v___x_5698_ = ((lean_object*)(l_Lean_Meta_mkListLit___closed__2));
v___x_5699_ = lean_box(0);
v___x_5700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5700_, 0, v_a_5694_);
lean_ctor_set(v___x_5700_, 1, v___x_5699_);
lean_inc_ref(v___x_5700_);
v___x_5701_ = l_Lean_mkConst(v___x_5698_, v___x_5700_);
lean_inc_ref(v_type_5686_);
v___x_5702_ = l_Lean_Expr_app___override(v___x_5701_, v_type_5686_);
if (lean_obj_tag(v_xs_5687_) == 0)
{
lean_object* v___x_5704_; 
lean_dec_ref_known(v___x_5700_, 2);
lean_dec_ref(v_type_5686_);
if (v_isShared_5697_ == 0)
{
lean_ctor_set(v___x_5696_, 0, v___x_5702_);
v___x_5704_ = v___x_5696_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v___x_5702_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
else
{
lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5711_; 
v___x_5706_ = ((lean_object*)(l_Lean_Meta_mkListLit___closed__4));
v___x_5707_ = l_Lean_mkConst(v___x_5706_, v___x_5700_);
v___x_5708_ = l_Lean_Expr_app___override(v___x_5707_, v_type_5686_);
v___x_5709_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkListLitAux(v___x_5702_, v___x_5708_, v_xs_5687_);
lean_dec_ref(v___x_5702_);
if (v_isShared_5697_ == 0)
{
lean_ctor_set(v___x_5696_, 0, v___x_5709_);
v___x_5711_ = v___x_5696_;
goto v_reusejp_5710_;
}
else
{
lean_object* v_reuseFailAlloc_5712_; 
v_reuseFailAlloc_5712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5712_, 0, v___x_5709_);
v___x_5711_ = v_reuseFailAlloc_5712_;
goto v_reusejp_5710_;
}
v_reusejp_5710_:
{
return v___x_5711_;
}
}
}
}
else
{
lean_object* v_a_5714_; lean_object* v___x_5716_; uint8_t v_isShared_5717_; uint8_t v_isSharedCheck_5721_; 
lean_dec(v_xs_5687_);
lean_dec_ref(v_type_5686_);
v_a_5714_ = lean_ctor_get(v___x_5693_, 0);
v_isSharedCheck_5721_ = !lean_is_exclusive(v___x_5693_);
if (v_isSharedCheck_5721_ == 0)
{
v___x_5716_ = v___x_5693_;
v_isShared_5717_ = v_isSharedCheck_5721_;
goto v_resetjp_5715_;
}
else
{
lean_inc(v_a_5714_);
lean_dec(v___x_5693_);
v___x_5716_ = lean_box(0);
v_isShared_5717_ = v_isSharedCheck_5721_;
goto v_resetjp_5715_;
}
v_resetjp_5715_:
{
lean_object* v___x_5719_; 
if (v_isShared_5717_ == 0)
{
v___x_5719_ = v___x_5716_;
goto v_reusejp_5718_;
}
else
{
lean_object* v_reuseFailAlloc_5720_; 
v_reuseFailAlloc_5720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5720_, 0, v_a_5714_);
v___x_5719_ = v_reuseFailAlloc_5720_;
goto v_reusejp_5718_;
}
v_reusejp_5718_:
{
return v___x_5719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkListLit___boxed(lean_object* v_type_5722_, lean_object* v_xs_5723_, lean_object* v_a_5724_, lean_object* v_a_5725_, lean_object* v_a_5726_, lean_object* v_a_5727_, lean_object* v_a_5728_){
_start:
{
lean_object* v_res_5729_; 
v_res_5729_ = l_Lean_Meta_mkListLit(v_type_5722_, v_xs_5723_, v_a_5724_, v_a_5725_, v_a_5726_, v_a_5727_);
lean_dec(v_a_5727_);
lean_dec_ref(v_a_5726_);
lean_dec(v_a_5725_);
lean_dec_ref(v_a_5724_);
return v_res_5729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkArrayLit(lean_object* v_type_5734_, lean_object* v_xs_5735_, lean_object* v_a_5736_, lean_object* v_a_5737_, lean_object* v_a_5738_, lean_object* v_a_5739_){
_start:
{
lean_object* v___x_5741_; 
lean_inc_ref(v_type_5734_);
v___x_5741_ = l_Lean_Meta_getDecLevel(v_type_5734_, v_a_5736_, v_a_5737_, v_a_5738_, v_a_5739_);
if (lean_obj_tag(v___x_5741_) == 0)
{
lean_object* v_a_5742_; lean_object* v___x_5743_; 
v_a_5742_ = lean_ctor_get(v___x_5741_, 0);
lean_inc(v_a_5742_);
lean_dec_ref_known(v___x_5741_, 1);
lean_inc_ref(v_type_5734_);
v___x_5743_ = l_Lean_Meta_mkListLit(v_type_5734_, v_xs_5735_, v_a_5736_, v_a_5737_, v_a_5738_, v_a_5739_);
if (lean_obj_tag(v___x_5743_) == 0)
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5757_; 
v_a_5744_ = lean_ctor_get(v___x_5743_, 0);
v_isSharedCheck_5757_ = !lean_is_exclusive(v___x_5743_);
if (v_isSharedCheck_5757_ == 0)
{
v___x_5746_ = v___x_5743_;
v_isShared_5747_ = v_isSharedCheck_5757_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5743_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5757_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5755_; 
v___x_5748_ = ((lean_object*)(l_Lean_Meta_mkArrayLit___closed__1));
v___x_5749_ = lean_box(0);
v___x_5750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5750_, 0, v_a_5742_);
lean_ctor_set(v___x_5750_, 1, v___x_5749_);
v___x_5751_ = l_Lean_mkConst(v___x_5748_, v___x_5750_);
v___x_5752_ = l_Lean_Expr_app___override(v___x_5751_, v_type_5734_);
v___x_5753_ = l_Lean_Expr_app___override(v___x_5752_, v_a_5744_);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 0, v___x_5753_);
v___x_5755_ = v___x_5746_;
goto v_reusejp_5754_;
}
else
{
lean_object* v_reuseFailAlloc_5756_; 
v_reuseFailAlloc_5756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5756_, 0, v___x_5753_);
v___x_5755_ = v_reuseFailAlloc_5756_;
goto v_reusejp_5754_;
}
v_reusejp_5754_:
{
return v___x_5755_;
}
}
}
else
{
lean_dec(v_a_5742_);
lean_dec_ref(v_type_5734_);
return v___x_5743_;
}
}
else
{
lean_object* v_a_5758_; lean_object* v___x_5760_; uint8_t v_isShared_5761_; uint8_t v_isSharedCheck_5765_; 
lean_dec(v_xs_5735_);
lean_dec_ref(v_type_5734_);
v_a_5758_ = lean_ctor_get(v___x_5741_, 0);
v_isSharedCheck_5765_ = !lean_is_exclusive(v___x_5741_);
if (v_isSharedCheck_5765_ == 0)
{
v___x_5760_ = v___x_5741_;
v_isShared_5761_ = v_isSharedCheck_5765_;
goto v_resetjp_5759_;
}
else
{
lean_inc(v_a_5758_);
lean_dec(v___x_5741_);
v___x_5760_ = lean_box(0);
v_isShared_5761_ = v_isSharedCheck_5765_;
goto v_resetjp_5759_;
}
v_resetjp_5759_:
{
lean_object* v___x_5763_; 
if (v_isShared_5761_ == 0)
{
v___x_5763_ = v___x_5760_;
goto v_reusejp_5762_;
}
else
{
lean_object* v_reuseFailAlloc_5764_; 
v_reuseFailAlloc_5764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5764_, 0, v_a_5758_);
v___x_5763_ = v_reuseFailAlloc_5764_;
goto v_reusejp_5762_;
}
v_reusejp_5762_:
{
return v___x_5763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkArrayLit___boxed(lean_object* v_type_5766_, lean_object* v_xs_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_){
_start:
{
lean_object* v_res_5773_; 
v_res_5773_ = l_Lean_Meta_mkArrayLit(v_type_5766_, v_xs_5767_, v_a_5768_, v_a_5769_, v_a_5770_, v_a_5771_);
lean_dec(v_a_5771_);
lean_dec_ref(v_a_5770_);
lean_dec(v_a_5769_);
lean_dec_ref(v_a_5768_);
return v_res_5773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNone(lean_object* v_type_5779_, lean_object* v_a_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_, lean_object* v_a_5783_){
_start:
{
lean_object* v___x_5785_; 
lean_inc_ref(v_type_5779_);
v___x_5785_ = l_Lean_Meta_getDecLevel(v_type_5779_, v_a_5780_, v_a_5781_, v_a_5782_, v_a_5783_);
if (lean_obj_tag(v___x_5785_) == 0)
{
lean_object* v_a_5786_; lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5798_; 
v_a_5786_ = lean_ctor_get(v___x_5785_, 0);
v_isSharedCheck_5798_ = !lean_is_exclusive(v___x_5785_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5788_ = v___x_5785_;
v_isShared_5789_ = v_isSharedCheck_5798_;
goto v_resetjp_5787_;
}
else
{
lean_inc(v_a_5786_);
lean_dec(v___x_5785_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5798_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5796_; 
v___x_5790_ = ((lean_object*)(l_Lean_Meta_mkNone___closed__2));
v___x_5791_ = lean_box(0);
v___x_5792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5792_, 0, v_a_5786_);
lean_ctor_set(v___x_5792_, 1, v___x_5791_);
v___x_5793_ = l_Lean_mkConst(v___x_5790_, v___x_5792_);
v___x_5794_ = l_Lean_Expr_app___override(v___x_5793_, v_type_5779_);
if (v_isShared_5789_ == 0)
{
lean_ctor_set(v___x_5788_, 0, v___x_5794_);
v___x_5796_ = v___x_5788_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v___x_5794_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
return v___x_5796_;
}
}
}
else
{
lean_object* v_a_5799_; lean_object* v___x_5801_; uint8_t v_isShared_5802_; uint8_t v_isSharedCheck_5806_; 
lean_dec_ref(v_type_5779_);
v_a_5799_ = lean_ctor_get(v___x_5785_, 0);
v_isSharedCheck_5806_ = !lean_is_exclusive(v___x_5785_);
if (v_isSharedCheck_5806_ == 0)
{
v___x_5801_ = v___x_5785_;
v_isShared_5802_ = v_isSharedCheck_5806_;
goto v_resetjp_5800_;
}
else
{
lean_inc(v_a_5799_);
lean_dec(v___x_5785_);
v___x_5801_ = lean_box(0);
v_isShared_5802_ = v_isSharedCheck_5806_;
goto v_resetjp_5800_;
}
v_resetjp_5800_:
{
lean_object* v___x_5804_; 
if (v_isShared_5802_ == 0)
{
v___x_5804_ = v___x_5801_;
goto v_reusejp_5803_;
}
else
{
lean_object* v_reuseFailAlloc_5805_; 
v_reuseFailAlloc_5805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5805_, 0, v_a_5799_);
v___x_5804_ = v_reuseFailAlloc_5805_;
goto v_reusejp_5803_;
}
v_reusejp_5803_:
{
return v___x_5804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNone___boxed(lean_object* v_type_5807_, lean_object* v_a_5808_, lean_object* v_a_5809_, lean_object* v_a_5810_, lean_object* v_a_5811_, lean_object* v_a_5812_){
_start:
{
lean_object* v_res_5813_; 
v_res_5813_ = l_Lean_Meta_mkNone(v_type_5807_, v_a_5808_, v_a_5809_, v_a_5810_, v_a_5811_);
lean_dec(v_a_5811_);
lean_dec_ref(v_a_5810_);
lean_dec(v_a_5809_);
lean_dec_ref(v_a_5808_);
return v_res_5813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSome(lean_object* v_type_5818_, lean_object* v_value_5819_, lean_object* v_a_5820_, lean_object* v_a_5821_, lean_object* v_a_5822_, lean_object* v_a_5823_){
_start:
{
lean_object* v___x_5825_; 
lean_inc_ref(v_type_5818_);
v___x_5825_ = l_Lean_Meta_getDecLevel(v_type_5818_, v_a_5820_, v_a_5821_, v_a_5822_, v_a_5823_);
if (lean_obj_tag(v___x_5825_) == 0)
{
lean_object* v_a_5826_; lean_object* v___x_5828_; uint8_t v_isShared_5829_; uint8_t v_isSharedCheck_5838_; 
v_a_5826_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5838_ == 0)
{
v___x_5828_ = v___x_5825_;
v_isShared_5829_ = v_isSharedCheck_5838_;
goto v_resetjp_5827_;
}
else
{
lean_inc(v_a_5826_);
lean_dec(v___x_5825_);
v___x_5828_ = lean_box(0);
v_isShared_5829_ = v_isSharedCheck_5838_;
goto v_resetjp_5827_;
}
v_resetjp_5827_:
{
lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5836_; 
v___x_5830_ = ((lean_object*)(l_Lean_Meta_mkSome___closed__1));
v___x_5831_ = lean_box(0);
v___x_5832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5832_, 0, v_a_5826_);
lean_ctor_set(v___x_5832_, 1, v___x_5831_);
v___x_5833_ = l_Lean_mkConst(v___x_5830_, v___x_5832_);
v___x_5834_ = l_Lean_mkAppB(v___x_5833_, v_type_5818_, v_value_5819_);
if (v_isShared_5829_ == 0)
{
lean_ctor_set(v___x_5828_, 0, v___x_5834_);
v___x_5836_ = v___x_5828_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v___x_5834_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
}
else
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5846_; 
lean_dec_ref(v_value_5819_);
lean_dec_ref(v_type_5818_);
v_a_5839_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5841_ = v___x_5825_;
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5825_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5844_; 
if (v_isShared_5842_ == 0)
{
v___x_5844_ = v___x_5841_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v_a_5839_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSome___boxed(lean_object* v_type_5847_, lean_object* v_value_5848_, lean_object* v_a_5849_, lean_object* v_a_5850_, lean_object* v_a_5851_, lean_object* v_a_5852_, lean_object* v_a_5853_){
_start:
{
lean_object* v_res_5854_; 
v_res_5854_ = l_Lean_Meta_mkSome(v_type_5847_, v_value_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_);
lean_dec(v_a_5852_);
lean_dec_ref(v_a_5851_);
lean_dec(v_a_5850_);
lean_dec_ref(v_a_5849_);
return v_res_5854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecide(lean_object* v_p_5860_, lean_object* v_a_5861_, lean_object* v_a_5862_, lean_object* v_a_5863_, lean_object* v_a_5864_){
_start:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v___x_5866_ = ((lean_object*)(l_Lean_Meta_mkDecide___closed__2));
v___x_5867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5867_, 0, v_p_5860_);
v___x_5868_ = lean_box(0);
v___x_5869_ = lean_unsigned_to_nat(2u);
v___x_5870_ = lean_mk_empty_array_with_capacity(v___x_5869_);
v___x_5871_ = lean_array_push(v___x_5870_, v___x_5867_);
v___x_5872_ = lean_array_push(v___x_5871_, v___x_5868_);
v___x_5873_ = l_Lean_Meta_mkAppOptM(v___x_5866_, v___x_5872_, v_a_5861_, v_a_5862_, v_a_5863_, v_a_5864_);
return v___x_5873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecide___boxed(lean_object* v_p_5874_, lean_object* v_a_5875_, lean_object* v_a_5876_, lean_object* v_a_5877_, lean_object* v_a_5878_, lean_object* v_a_5879_){
_start:
{
lean_object* v_res_5880_; 
v_res_5880_ = l_Lean_Meta_mkDecide(v_p_5874_, v_a_5875_, v_a_5876_, v_a_5877_, v_a_5878_);
lean_dec(v_a_5878_);
lean_dec_ref(v_a_5877_);
lean_dec(v_a_5876_);
lean_dec_ref(v_a_5875_);
return v_res_5880_;
}
}
static lean_object* _init_l_Lean_Meta_mkDecideProof___closed__3(void){
_start:
{
lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; 
v___x_5886_ = lean_box(0);
v___x_5887_ = ((lean_object*)(l_Lean_Meta_mkDecideProof___closed__2));
v___x_5888_ = l_Lean_mkConst(v___x_5887_, v___x_5886_);
return v___x_5888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecideProof(lean_object* v_p_5892_, lean_object* v_a_5893_, lean_object* v_a_5894_, lean_object* v_a_5895_, lean_object* v_a_5896_){
_start:
{
lean_object* v___x_5898_; 
v___x_5898_ = l_Lean_Meta_mkDecide(v_p_5892_, v_a_5893_, v_a_5894_, v_a_5895_, v_a_5896_);
if (lean_obj_tag(v___x_5898_) == 0)
{
lean_object* v_a_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; 
v_a_5899_ = lean_ctor_get(v___x_5898_, 0);
lean_inc(v_a_5899_);
lean_dec_ref_known(v___x_5898_, 1);
v___x_5900_ = lean_obj_once(&l_Lean_Meta_mkDecideProof___closed__3, &l_Lean_Meta_mkDecideProof___closed__3_once, _init_l_Lean_Meta_mkDecideProof___closed__3);
v___x_5901_ = l_Lean_Meta_mkEq(v_a_5899_, v___x_5900_, v_a_5893_, v_a_5894_, v_a_5895_, v_a_5896_);
if (lean_obj_tag(v___x_5901_) == 0)
{
lean_object* v_a_5902_; lean_object* v___x_5903_; 
v_a_5902_ = lean_ctor_get(v___x_5901_, 0);
lean_inc(v_a_5902_);
lean_dec_ref_known(v___x_5901_, 1);
v___x_5903_ = l_Lean_Meta_mkEqRefl(v___x_5900_, v_a_5893_, v_a_5894_, v_a_5895_, v_a_5896_);
if (lean_obj_tag(v___x_5903_) == 0)
{
lean_object* v_a_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; 
v_a_5904_ = lean_ctor_get(v___x_5903_, 0);
lean_inc(v_a_5904_);
lean_dec_ref_known(v___x_5903_, 1);
v___x_5905_ = l_Lean_Meta_mkExpectedPropHint(v_a_5904_, v_a_5902_);
v___x_5906_ = ((lean_object*)(l_Lean_Meta_mkDecideProof___closed__5));
v___x_5907_ = lean_unsigned_to_nat(1u);
v___x_5908_ = lean_mk_empty_array_with_capacity(v___x_5907_);
v___x_5909_ = lean_array_push(v___x_5908_, v___x_5905_);
v___x_5910_ = l_Lean_Meta_mkAppM(v___x_5906_, v___x_5909_, v_a_5893_, v_a_5894_, v_a_5895_, v_a_5896_);
return v___x_5910_;
}
else
{
lean_dec(v_a_5902_);
return v___x_5903_;
}
}
else
{
return v___x_5901_;
}
}
else
{
return v___x_5898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecideProof___boxed(lean_object* v_p_5911_, lean_object* v_a_5912_, lean_object* v_a_5913_, lean_object* v_a_5914_, lean_object* v_a_5915_, lean_object* v_a_5916_){
_start:
{
lean_object* v_res_5917_; 
v_res_5917_ = l_Lean_Meta_mkDecideProof(v_p_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_);
lean_dec(v_a_5915_);
lean_dec_ref(v_a_5914_);
lean_dec(v_a_5913_);
lean_dec_ref(v_a_5912_);
return v_res_5917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLt(lean_object* v_a_5923_, lean_object* v_b_5924_, lean_object* v_a_5925_, lean_object* v_a_5926_, lean_object* v_a_5927_, lean_object* v_a_5928_){
_start:
{
lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; 
v___x_5930_ = ((lean_object*)(l_Lean_Meta_mkLt___closed__2));
v___x_5931_ = lean_unsigned_to_nat(2u);
v___x_5932_ = lean_mk_empty_array_with_capacity(v___x_5931_);
v___x_5933_ = lean_array_push(v___x_5932_, v_a_5923_);
v___x_5934_ = lean_array_push(v___x_5933_, v_b_5924_);
v___x_5935_ = l_Lean_Meta_mkAppM(v___x_5930_, v___x_5934_, v_a_5925_, v_a_5926_, v_a_5927_, v_a_5928_);
return v___x_5935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLt___boxed(lean_object* v_a_5936_, lean_object* v_b_5937_, lean_object* v_a_5938_, lean_object* v_a_5939_, lean_object* v_a_5940_, lean_object* v_a_5941_, lean_object* v_a_5942_){
_start:
{
lean_object* v_res_5943_; 
v_res_5943_ = l_Lean_Meta_mkLt(v_a_5936_, v_b_5937_, v_a_5938_, v_a_5939_, v_a_5940_, v_a_5941_);
lean_dec(v_a_5941_);
lean_dec_ref(v_a_5940_);
lean_dec(v_a_5939_);
lean_dec_ref(v_a_5938_);
return v_res_5943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLe(lean_object* v_a_5949_, lean_object* v_b_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_, lean_object* v_a_5954_){
_start:
{
lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
v___x_5956_ = ((lean_object*)(l_Lean_Meta_mkLe___closed__2));
v___x_5957_ = lean_unsigned_to_nat(2u);
v___x_5958_ = lean_mk_empty_array_with_capacity(v___x_5957_);
v___x_5959_ = lean_array_push(v___x_5958_, v_a_5949_);
v___x_5960_ = lean_array_push(v___x_5959_, v_b_5950_);
v___x_5961_ = l_Lean_Meta_mkAppM(v___x_5956_, v___x_5960_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
return v___x_5961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLe___boxed(lean_object* v_a_5962_, lean_object* v_b_5963_, lean_object* v_a_5964_, lean_object* v_a_5965_, lean_object* v_a_5966_, lean_object* v_a_5967_, lean_object* v_a_5968_){
_start:
{
lean_object* v_res_5969_; 
v_res_5969_ = l_Lean_Meta_mkLe(v_a_5962_, v_b_5963_, v_a_5964_, v_a_5965_, v_a_5966_, v_a_5967_);
lean_dec(v_a_5967_);
lean_dec_ref(v_a_5966_);
lean_dec(v_a_5965_);
lean_dec_ref(v_a_5964_);
return v_res_5969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDefault(lean_object* v_00_u03b1_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_a_5979_){
_start:
{
lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; 
v___x_5981_ = ((lean_object*)(l_Lean_Meta_mkDefault___closed__2));
v___x_5982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5982_, 0, v_00_u03b1_5975_);
v___x_5983_ = lean_box(0);
v___x_5984_ = lean_unsigned_to_nat(2u);
v___x_5985_ = lean_mk_empty_array_with_capacity(v___x_5984_);
v___x_5986_ = lean_array_push(v___x_5985_, v___x_5982_);
v___x_5987_ = lean_array_push(v___x_5986_, v___x_5983_);
v___x_5988_ = l_Lean_Meta_mkAppOptM(v___x_5981_, v___x_5987_, v_a_5976_, v_a_5977_, v_a_5978_, v_a_5979_);
return v___x_5988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDefault___boxed(lean_object* v_00_u03b1_5989_, lean_object* v_a_5990_, lean_object* v_a_5991_, lean_object* v_a_5992_, lean_object* v_a_5993_, lean_object* v_a_5994_){
_start:
{
lean_object* v_res_5995_; 
v_res_5995_ = l_Lean_Meta_mkDefault(v_00_u03b1_5989_, v_a_5990_, v_a_5991_, v_a_5992_, v_a_5993_);
lean_dec(v_a_5993_);
lean_dec_ref(v_a_5992_);
lean_dec(v_a_5991_);
lean_dec_ref(v_a_5990_);
return v_res_5995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfNonempty(lean_object* v_00_u03b1_6001_, lean_object* v_a_6002_, lean_object* v_a_6003_, lean_object* v_a_6004_, lean_object* v_a_6005_){
_start:
{
lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; 
v___x_6007_ = ((lean_object*)(l_Lean_Meta_mkOfNonempty___closed__2));
v___x_6008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6008_, 0, v_00_u03b1_6001_);
v___x_6009_ = lean_box(0);
v___x_6010_ = lean_unsigned_to_nat(2u);
v___x_6011_ = lean_mk_empty_array_with_capacity(v___x_6010_);
v___x_6012_ = lean_array_push(v___x_6011_, v___x_6008_);
v___x_6013_ = lean_array_push(v___x_6012_, v___x_6009_);
v___x_6014_ = l_Lean_Meta_mkAppOptM(v___x_6007_, v___x_6013_, v_a_6002_, v_a_6003_, v_a_6004_, v_a_6005_);
return v___x_6014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfNonempty___boxed(lean_object* v_00_u03b1_6015_, lean_object* v_a_6016_, lean_object* v_a_6017_, lean_object* v_a_6018_, lean_object* v_a_6019_, lean_object* v_a_6020_){
_start:
{
lean_object* v_res_6021_; 
v_res_6021_ = l_Lean_Meta_mkOfNonempty(v_00_u03b1_6015_, v_a_6016_, v_a_6017_, v_a_6018_, v_a_6019_);
lean_dec(v_a_6019_);
lean_dec_ref(v_a_6018_);
lean_dec(v_a_6017_);
lean_dec_ref(v_a_6016_);
return v_res_6021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFunExt(lean_object* v_h_6025_, lean_object* v_a_6026_, lean_object* v_a_6027_, lean_object* v_a_6028_, lean_object* v_a_6029_){
_start:
{
lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; 
v___x_6031_ = ((lean_object*)(l_Lean_Meta_mkFunExt___closed__1));
v___x_6032_ = lean_unsigned_to_nat(1u);
v___x_6033_ = lean_mk_empty_array_with_capacity(v___x_6032_);
v___x_6034_ = lean_array_push(v___x_6033_, v_h_6025_);
v___x_6035_ = l_Lean_Meta_mkAppM(v___x_6031_, v___x_6034_, v_a_6026_, v_a_6027_, v_a_6028_, v_a_6029_);
return v___x_6035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFunExt___boxed(lean_object* v_h_6036_, lean_object* v_a_6037_, lean_object* v_a_6038_, lean_object* v_a_6039_, lean_object* v_a_6040_, lean_object* v_a_6041_){
_start:
{
lean_object* v_res_6042_; 
v_res_6042_ = l_Lean_Meta_mkFunExt(v_h_6036_, v_a_6037_, v_a_6038_, v_a_6039_, v_a_6040_);
lean_dec(v_a_6040_);
lean_dec_ref(v_a_6039_);
lean_dec(v_a_6038_);
lean_dec_ref(v_a_6037_);
return v_res_6042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropExt(lean_object* v_h_6046_, lean_object* v_a_6047_, lean_object* v_a_6048_, lean_object* v_a_6049_, lean_object* v_a_6050_){
_start:
{
lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; 
v___x_6052_ = ((lean_object*)(l_Lean_Meta_mkPropExt___closed__1));
v___x_6053_ = lean_unsigned_to_nat(1u);
v___x_6054_ = lean_mk_empty_array_with_capacity(v___x_6053_);
v___x_6055_ = lean_array_push(v___x_6054_, v_h_6046_);
v___x_6056_ = l_Lean_Meta_mkAppM(v___x_6052_, v___x_6055_, v_a_6047_, v_a_6048_, v_a_6049_, v_a_6050_);
return v___x_6056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropExt___boxed(lean_object* v_h_6057_, lean_object* v_a_6058_, lean_object* v_a_6059_, lean_object* v_a_6060_, lean_object* v_a_6061_, lean_object* v_a_6062_){
_start:
{
lean_object* v_res_6063_; 
v_res_6063_ = l_Lean_Meta_mkPropExt(v_h_6057_, v_a_6058_, v_a_6059_, v_a_6060_, v_a_6061_);
lean_dec(v_a_6061_);
lean_dec_ref(v_a_6060_);
lean_dec(v_a_6059_);
lean_dec_ref(v_a_6058_);
return v_res_6063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetCongr(lean_object* v_h_u2081_6067_, lean_object* v_h_u2082_6068_, lean_object* v_a_6069_, lean_object* v_a_6070_, lean_object* v_a_6071_, lean_object* v_a_6072_){
_start:
{
lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; 
v___x_6074_ = ((lean_object*)(l_Lean_Meta_mkLetCongr___closed__1));
v___x_6075_ = lean_unsigned_to_nat(2u);
v___x_6076_ = lean_mk_empty_array_with_capacity(v___x_6075_);
v___x_6077_ = lean_array_push(v___x_6076_, v_h_u2081_6067_);
v___x_6078_ = lean_array_push(v___x_6077_, v_h_u2082_6068_);
v___x_6079_ = l_Lean_Meta_mkAppM(v___x_6074_, v___x_6078_, v_a_6069_, v_a_6070_, v_a_6071_, v_a_6072_);
return v___x_6079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetCongr___boxed(lean_object* v_h_u2081_6080_, lean_object* v_h_u2082_6081_, lean_object* v_a_6082_, lean_object* v_a_6083_, lean_object* v_a_6084_, lean_object* v_a_6085_, lean_object* v_a_6086_){
_start:
{
lean_object* v_res_6087_; 
v_res_6087_ = l_Lean_Meta_mkLetCongr(v_h_u2081_6080_, v_h_u2082_6081_, v_a_6082_, v_a_6083_, v_a_6084_, v_a_6085_);
lean_dec(v_a_6085_);
lean_dec_ref(v_a_6084_);
lean_dec(v_a_6083_);
lean_dec_ref(v_a_6082_);
return v_res_6087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetValCongr(lean_object* v_b_6091_, lean_object* v_h_6092_, lean_object* v_a_6093_, lean_object* v_a_6094_, lean_object* v_a_6095_, lean_object* v_a_6096_){
_start:
{
lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; 
v___x_6098_ = ((lean_object*)(l_Lean_Meta_mkLetValCongr___closed__1));
v___x_6099_ = lean_unsigned_to_nat(2u);
v___x_6100_ = lean_mk_empty_array_with_capacity(v___x_6099_);
v___x_6101_ = lean_array_push(v___x_6100_, v_b_6091_);
v___x_6102_ = lean_array_push(v___x_6101_, v_h_6092_);
v___x_6103_ = l_Lean_Meta_mkAppM(v___x_6098_, v___x_6102_, v_a_6093_, v_a_6094_, v_a_6095_, v_a_6096_);
return v___x_6103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetValCongr___boxed(lean_object* v_b_6104_, lean_object* v_h_6105_, lean_object* v_a_6106_, lean_object* v_a_6107_, lean_object* v_a_6108_, lean_object* v_a_6109_, lean_object* v_a_6110_){
_start:
{
lean_object* v_res_6111_; 
v_res_6111_ = l_Lean_Meta_mkLetValCongr(v_b_6104_, v_h_6105_, v_a_6106_, v_a_6107_, v_a_6108_, v_a_6109_);
lean_dec(v_a_6109_);
lean_dec_ref(v_a_6108_);
lean_dec(v_a_6107_);
lean_dec_ref(v_a_6106_);
return v_res_6111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetBodyCongr(lean_object* v_a_6115_, lean_object* v_h_6116_, lean_object* v_a_6117_, lean_object* v_a_6118_, lean_object* v_a_6119_, lean_object* v_a_6120_){
_start:
{
lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; 
v___x_6122_ = ((lean_object*)(l_Lean_Meta_mkLetBodyCongr___closed__1));
v___x_6123_ = lean_unsigned_to_nat(2u);
v___x_6124_ = lean_mk_empty_array_with_capacity(v___x_6123_);
v___x_6125_ = lean_array_push(v___x_6124_, v_a_6115_);
v___x_6126_ = lean_array_push(v___x_6125_, v_h_6116_);
v___x_6127_ = l_Lean_Meta_mkAppM(v___x_6122_, v___x_6126_, v_a_6117_, v_a_6118_, v_a_6119_, v_a_6120_);
return v___x_6127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLetBodyCongr___boxed(lean_object* v_a_6128_, lean_object* v_h_6129_, lean_object* v_a_6130_, lean_object* v_a_6131_, lean_object* v_a_6132_, lean_object* v_a_6133_, lean_object* v_a_6134_){
_start:
{
lean_object* v_res_6135_; 
v_res_6135_ = l_Lean_Meta_mkLetBodyCongr(v_a_6128_, v_h_6129_, v_a_6130_, v_a_6131_, v_a_6132_, v_a_6133_);
lean_dec(v_a_6133_);
lean_dec_ref(v_a_6132_);
lean_dec(v_a_6131_);
lean_dec_ref(v_a_6130_);
return v_res_6135_;
}
}
static lean_object* _init_l_Lean_Meta_mkOfEqFalseCore___closed__2(void){
_start:
{
lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; 
v___x_6139_ = lean_box(0);
v___x_6140_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__1));
v___x_6141_ = l_Lean_mkConst(v___x_6140_, v___x_6139_);
return v___x_6141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object* v_p_6145_, lean_object* v_h_6146_){
_start:
{
lean_object* v___x_6150_; uint8_t v___x_6151_; 
lean_inc_ref(v_h_6146_);
v___x_6150_ = l_Lean_Expr_cleanupAnnotations(v_h_6146_);
v___x_6151_ = l_Lean_Expr_isApp(v___x_6150_);
if (v___x_6151_ == 0)
{
lean_dec_ref(v___x_6150_);
goto v___jp_6147_;
}
else
{
lean_object* v_arg_6152_; lean_object* v___x_6153_; uint8_t v___x_6154_; 
v_arg_6152_ = lean_ctor_get(v___x_6150_, 1);
lean_inc_ref(v_arg_6152_);
v___x_6153_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6150_);
v___x_6154_ = l_Lean_Expr_isApp(v___x_6153_);
if (v___x_6154_ == 0)
{
lean_dec_ref(v___x_6153_);
lean_dec_ref(v_arg_6152_);
goto v___jp_6147_;
}
else
{
lean_object* v___x_6155_; lean_object* v___x_6156_; uint8_t v___x_6157_; 
v___x_6155_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6153_);
v___x_6156_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__4));
v___x_6157_ = l_Lean_Expr_isConstOf(v___x_6155_, v___x_6156_);
lean_dec_ref(v___x_6155_);
if (v___x_6157_ == 0)
{
lean_dec_ref(v_arg_6152_);
goto v___jp_6147_;
}
else
{
lean_dec_ref(v_h_6146_);
lean_dec_ref(v_p_6145_);
return v_arg_6152_;
}
}
}
v___jp_6147_:
{
lean_object* v___x_6148_; lean_object* v___x_6149_; 
v___x_6148_ = lean_obj_once(&l_Lean_Meta_mkOfEqFalseCore___closed__2, &l_Lean_Meta_mkOfEqFalseCore___closed__2_once, _init_l_Lean_Meta_mkOfEqFalseCore___closed__2);
v___x_6149_ = l_Lean_mkAppB(v___x_6148_, v_p_6145_, v_h_6146_);
return v___x_6149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalse(lean_object* v_h_6158_, lean_object* v_a_6159_, lean_object* v_a_6160_, lean_object* v_a_6161_, lean_object* v_a_6162_){
_start:
{
lean_object* v___y_6165_; lean_object* v___y_6166_; lean_object* v___y_6167_; lean_object* v___y_6168_; lean_object* v___x_6174_; 
lean_inc_ref(v_h_6158_);
v___x_6174_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_h_6158_, v_a_6160_);
if (lean_obj_tag(v___x_6174_) == 0)
{
lean_object* v_a_6175_; lean_object* v___x_6177_; uint8_t v_isShared_6178_; uint8_t v_isSharedCheck_6190_; 
v_a_6175_ = lean_ctor_get(v___x_6174_, 0);
v_isSharedCheck_6190_ = !lean_is_exclusive(v___x_6174_);
if (v_isSharedCheck_6190_ == 0)
{
v___x_6177_ = v___x_6174_;
v_isShared_6178_ = v_isSharedCheck_6190_;
goto v_resetjp_6176_;
}
else
{
lean_inc(v_a_6175_);
lean_dec(v___x_6174_);
v___x_6177_ = lean_box(0);
v_isShared_6178_ = v_isSharedCheck_6190_;
goto v_resetjp_6176_;
}
v_resetjp_6176_:
{
lean_object* v___x_6179_; uint8_t v___x_6180_; 
v___x_6179_ = l_Lean_Expr_cleanupAnnotations(v_a_6175_);
v___x_6180_ = l_Lean_Expr_isApp(v___x_6179_);
if (v___x_6180_ == 0)
{
lean_dec_ref(v___x_6179_);
lean_del_object(v___x_6177_);
v___y_6165_ = v_a_6159_;
v___y_6166_ = v_a_6160_;
v___y_6167_ = v_a_6161_;
v___y_6168_ = v_a_6162_;
goto v___jp_6164_;
}
else
{
lean_object* v_arg_6181_; lean_object* v___x_6182_; uint8_t v___x_6183_; 
v_arg_6181_ = lean_ctor_get(v___x_6179_, 1);
lean_inc_ref(v_arg_6181_);
v___x_6182_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6179_);
v___x_6183_ = l_Lean_Expr_isApp(v___x_6182_);
if (v___x_6183_ == 0)
{
lean_dec_ref(v___x_6182_);
lean_dec_ref(v_arg_6181_);
lean_del_object(v___x_6177_);
v___y_6165_ = v_a_6159_;
v___y_6166_ = v_a_6160_;
v___y_6167_ = v_a_6161_;
v___y_6168_ = v_a_6162_;
goto v___jp_6164_;
}
else
{
lean_object* v___x_6184_; lean_object* v___x_6185_; uint8_t v___x_6186_; 
v___x_6184_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6182_);
v___x_6185_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__4));
v___x_6186_ = l_Lean_Expr_isConstOf(v___x_6184_, v___x_6185_);
lean_dec_ref(v___x_6184_);
if (v___x_6186_ == 0)
{
lean_dec_ref(v_arg_6181_);
lean_del_object(v___x_6177_);
v___y_6165_ = v_a_6159_;
v___y_6166_ = v_a_6160_;
v___y_6167_ = v_a_6161_;
v___y_6168_ = v_a_6162_;
goto v___jp_6164_;
}
else
{
lean_object* v___x_6188_; 
lean_dec_ref(v_h_6158_);
if (v_isShared_6178_ == 0)
{
lean_ctor_set(v___x_6177_, 0, v_arg_6181_);
v___x_6188_ = v___x_6177_;
goto v_reusejp_6187_;
}
else
{
lean_object* v_reuseFailAlloc_6189_; 
v_reuseFailAlloc_6189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6189_, 0, v_arg_6181_);
v___x_6188_ = v_reuseFailAlloc_6189_;
goto v_reusejp_6187_;
}
v_reusejp_6187_:
{
return v___x_6188_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_6158_);
return v___x_6174_;
}
v___jp_6164_:
{
lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; 
v___x_6169_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__1));
v___x_6170_ = lean_unsigned_to_nat(1u);
v___x_6171_ = lean_mk_empty_array_with_capacity(v___x_6170_);
v___x_6172_ = lean_array_push(v___x_6171_, v_h_6158_);
v___x_6173_ = l_Lean_Meta_mkAppM(v___x_6169_, v___x_6172_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_);
return v___x_6173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqFalse___boxed(lean_object* v_h_6191_, lean_object* v_a_6192_, lean_object* v_a_6193_, lean_object* v_a_6194_, lean_object* v_a_6195_, lean_object* v_a_6196_){
_start:
{
lean_object* v_res_6197_; 
v_res_6197_ = l_Lean_Meta_mkOfEqFalse(v_h_6191_, v_a_6192_, v_a_6193_, v_a_6194_, v_a_6195_);
lean_dec(v_a_6195_);
lean_dec_ref(v_a_6194_);
lean_dec(v_a_6193_);
lean_dec_ref(v_a_6192_);
return v_res_6197_;
}
}
static lean_object* _init_l_Lean_Meta_mkOfEqTrueCore___closed__2(void){
_start:
{
lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; 
v___x_6201_ = lean_box(0);
v___x_6202_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__1));
v___x_6203_ = l_Lean_mkConst(v___x_6202_, v___x_6201_);
return v___x_6203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object* v_p_6207_, lean_object* v_h_6208_){
_start:
{
lean_object* v___x_6212_; uint8_t v___x_6213_; 
lean_inc_ref(v_h_6208_);
v___x_6212_ = l_Lean_Expr_cleanupAnnotations(v_h_6208_);
v___x_6213_ = l_Lean_Expr_isApp(v___x_6212_);
if (v___x_6213_ == 0)
{
lean_dec_ref(v___x_6212_);
goto v___jp_6209_;
}
else
{
lean_object* v_arg_6214_; lean_object* v___x_6215_; uint8_t v___x_6216_; 
v_arg_6214_ = lean_ctor_get(v___x_6212_, 1);
lean_inc_ref(v_arg_6214_);
v___x_6215_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6212_);
v___x_6216_ = l_Lean_Expr_isApp(v___x_6215_);
if (v___x_6216_ == 0)
{
lean_dec_ref(v___x_6215_);
lean_dec_ref(v_arg_6214_);
goto v___jp_6209_;
}
else
{
lean_object* v___x_6217_; lean_object* v___x_6218_; uint8_t v___x_6219_; 
v___x_6217_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6215_);
v___x_6218_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__4));
v___x_6219_ = l_Lean_Expr_isConstOf(v___x_6217_, v___x_6218_);
lean_dec_ref(v___x_6217_);
if (v___x_6219_ == 0)
{
lean_dec_ref(v_arg_6214_);
goto v___jp_6209_;
}
else
{
lean_dec_ref(v_h_6208_);
lean_dec_ref(v_p_6207_);
return v_arg_6214_;
}
}
}
v___jp_6209_:
{
lean_object* v___x_6210_; lean_object* v___x_6211_; 
v___x_6210_ = lean_obj_once(&l_Lean_Meta_mkOfEqTrueCore___closed__2, &l_Lean_Meta_mkOfEqTrueCore___closed__2_once, _init_l_Lean_Meta_mkOfEqTrueCore___closed__2);
v___x_6211_ = l_Lean_mkAppB(v___x_6210_, v_p_6207_, v_h_6208_);
return v___x_6211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrue(lean_object* v_h_6220_, lean_object* v_a_6221_, lean_object* v_a_6222_, lean_object* v_a_6223_, lean_object* v_a_6224_){
_start:
{
lean_object* v___y_6227_; lean_object* v___y_6228_; lean_object* v___y_6229_; lean_object* v___y_6230_; lean_object* v___x_6236_; 
lean_inc_ref(v_h_6220_);
v___x_6236_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_h_6220_, v_a_6222_);
if (lean_obj_tag(v___x_6236_) == 0)
{
lean_object* v_a_6237_; lean_object* v___x_6239_; uint8_t v_isShared_6240_; uint8_t v_isSharedCheck_6252_; 
v_a_6237_ = lean_ctor_get(v___x_6236_, 0);
v_isSharedCheck_6252_ = !lean_is_exclusive(v___x_6236_);
if (v_isSharedCheck_6252_ == 0)
{
v___x_6239_ = v___x_6236_;
v_isShared_6240_ = v_isSharedCheck_6252_;
goto v_resetjp_6238_;
}
else
{
lean_inc(v_a_6237_);
lean_dec(v___x_6236_);
v___x_6239_ = lean_box(0);
v_isShared_6240_ = v_isSharedCheck_6252_;
goto v_resetjp_6238_;
}
v_resetjp_6238_:
{
lean_object* v___x_6241_; uint8_t v___x_6242_; 
v___x_6241_ = l_Lean_Expr_cleanupAnnotations(v_a_6237_);
v___x_6242_ = l_Lean_Expr_isApp(v___x_6241_);
if (v___x_6242_ == 0)
{
lean_dec_ref(v___x_6241_);
lean_del_object(v___x_6239_);
v___y_6227_ = v_a_6221_;
v___y_6228_ = v_a_6222_;
v___y_6229_ = v_a_6223_;
v___y_6230_ = v_a_6224_;
goto v___jp_6226_;
}
else
{
lean_object* v_arg_6243_; lean_object* v___x_6244_; uint8_t v___x_6245_; 
v_arg_6243_ = lean_ctor_get(v___x_6241_, 1);
lean_inc_ref(v_arg_6243_);
v___x_6244_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6241_);
v___x_6245_ = l_Lean_Expr_isApp(v___x_6244_);
if (v___x_6245_ == 0)
{
lean_dec_ref(v___x_6244_);
lean_dec_ref(v_arg_6243_);
lean_del_object(v___x_6239_);
v___y_6227_ = v_a_6221_;
v___y_6228_ = v_a_6222_;
v___y_6229_ = v_a_6223_;
v___y_6230_ = v_a_6224_;
goto v___jp_6226_;
}
else
{
lean_object* v___x_6246_; lean_object* v___x_6247_; uint8_t v___x_6248_; 
v___x_6246_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6244_);
v___x_6247_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__4));
v___x_6248_ = l_Lean_Expr_isConstOf(v___x_6246_, v___x_6247_);
lean_dec_ref(v___x_6246_);
if (v___x_6248_ == 0)
{
lean_dec_ref(v_arg_6243_);
lean_del_object(v___x_6239_);
v___y_6227_ = v_a_6221_;
v___y_6228_ = v_a_6222_;
v___y_6229_ = v_a_6223_;
v___y_6230_ = v_a_6224_;
goto v___jp_6226_;
}
else
{
lean_object* v___x_6250_; 
lean_dec_ref(v_h_6220_);
if (v_isShared_6240_ == 0)
{
lean_ctor_set(v___x_6239_, 0, v_arg_6243_);
v___x_6250_ = v___x_6239_;
goto v_reusejp_6249_;
}
else
{
lean_object* v_reuseFailAlloc_6251_; 
v_reuseFailAlloc_6251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6251_, 0, v_arg_6243_);
v___x_6250_ = v_reuseFailAlloc_6251_;
goto v_reusejp_6249_;
}
v_reusejp_6249_:
{
return v___x_6250_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_6220_);
return v___x_6236_;
}
v___jp_6226_:
{
lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; 
v___x_6231_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__1));
v___x_6232_ = lean_unsigned_to_nat(1u);
v___x_6233_ = lean_mk_empty_array_with_capacity(v___x_6232_);
v___x_6234_ = lean_array_push(v___x_6233_, v_h_6220_);
v___x_6235_ = l_Lean_Meta_mkAppM(v___x_6231_, v___x_6234_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_);
return v___x_6235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOfEqTrue___boxed(lean_object* v_h_6253_, lean_object* v_a_6254_, lean_object* v_a_6255_, lean_object* v_a_6256_, lean_object* v_a_6257_, lean_object* v_a_6258_){
_start:
{
lean_object* v_res_6259_; 
v_res_6259_ = l_Lean_Meta_mkOfEqTrue(v_h_6253_, v_a_6254_, v_a_6255_, v_a_6256_, v_a_6257_);
lean_dec(v_a_6257_);
lean_dec_ref(v_a_6256_);
lean_dec(v_a_6255_);
lean_dec_ref(v_a_6254_);
return v_res_6259_;
}
}
static lean_object* _init_l_Lean_Meta_mkEqTrueCore___closed__0(void){
_start:
{
lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; 
v___x_6260_ = lean_box(0);
v___x_6261_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__4));
v___x_6262_ = l_Lean_mkConst(v___x_6261_, v___x_6260_);
return v___x_6262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrueCore(lean_object* v_p_6263_, lean_object* v_h_6264_){
_start:
{
lean_object* v___x_6268_; uint8_t v___x_6269_; 
lean_inc_ref(v_h_6264_);
v___x_6268_ = l_Lean_Expr_cleanupAnnotations(v_h_6264_);
v___x_6269_ = l_Lean_Expr_isApp(v___x_6268_);
if (v___x_6269_ == 0)
{
lean_dec_ref(v___x_6268_);
goto v___jp_6265_;
}
else
{
lean_object* v_arg_6270_; lean_object* v___x_6271_; uint8_t v___x_6272_; 
v_arg_6270_ = lean_ctor_get(v___x_6268_, 1);
lean_inc_ref(v_arg_6270_);
v___x_6271_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6268_);
v___x_6272_ = l_Lean_Expr_isApp(v___x_6271_);
if (v___x_6272_ == 0)
{
lean_dec_ref(v___x_6271_);
lean_dec_ref(v_arg_6270_);
goto v___jp_6265_;
}
else
{
lean_object* v___x_6273_; lean_object* v___x_6274_; uint8_t v___x_6275_; 
v___x_6273_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6271_);
v___x_6274_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__1));
v___x_6275_ = l_Lean_Expr_isConstOf(v___x_6273_, v___x_6274_);
lean_dec_ref(v___x_6273_);
if (v___x_6275_ == 0)
{
lean_dec_ref(v_arg_6270_);
goto v___jp_6265_;
}
else
{
lean_dec_ref(v_h_6264_);
lean_dec_ref(v_p_6263_);
return v_arg_6270_;
}
}
}
v___jp_6265_:
{
lean_object* v___x_6266_; lean_object* v___x_6267_; 
v___x_6266_ = lean_obj_once(&l_Lean_Meta_mkEqTrueCore___closed__0, &l_Lean_Meta_mkEqTrueCore___closed__0_once, _init_l_Lean_Meta_mkEqTrueCore___closed__0);
v___x_6267_ = l_Lean_mkAppB(v___x_6266_, v_p_6263_, v_h_6264_);
return v___x_6267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrue(lean_object* v_h_6276_, lean_object* v_a_6277_, lean_object* v_a_6278_, lean_object* v_a_6279_, lean_object* v_a_6280_){
_start:
{
lean_object* v___y_6283_; lean_object* v___y_6284_; lean_object* v___y_6285_; lean_object* v___y_6286_; lean_object* v___x_6298_; 
lean_inc_ref(v_h_6276_);
v___x_6298_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_h_6276_, v_a_6278_);
if (lean_obj_tag(v___x_6298_) == 0)
{
lean_object* v_a_6299_; lean_object* v___x_6301_; uint8_t v_isShared_6302_; uint8_t v_isSharedCheck_6314_; 
v_a_6299_ = lean_ctor_get(v___x_6298_, 0);
v_isSharedCheck_6314_ = !lean_is_exclusive(v___x_6298_);
if (v_isSharedCheck_6314_ == 0)
{
v___x_6301_ = v___x_6298_;
v_isShared_6302_ = v_isSharedCheck_6314_;
goto v_resetjp_6300_;
}
else
{
lean_inc(v_a_6299_);
lean_dec(v___x_6298_);
v___x_6301_ = lean_box(0);
v_isShared_6302_ = v_isSharedCheck_6314_;
goto v_resetjp_6300_;
}
v_resetjp_6300_:
{
lean_object* v___x_6303_; uint8_t v___x_6304_; 
v___x_6303_ = l_Lean_Expr_cleanupAnnotations(v_a_6299_);
v___x_6304_ = l_Lean_Expr_isApp(v___x_6303_);
if (v___x_6304_ == 0)
{
lean_dec_ref(v___x_6303_);
lean_del_object(v___x_6301_);
v___y_6283_ = v_a_6277_;
v___y_6284_ = v_a_6278_;
v___y_6285_ = v_a_6279_;
v___y_6286_ = v_a_6280_;
goto v___jp_6282_;
}
else
{
lean_object* v_arg_6305_; lean_object* v___x_6306_; uint8_t v___x_6307_; 
v_arg_6305_ = lean_ctor_get(v___x_6303_, 1);
lean_inc_ref(v_arg_6305_);
v___x_6306_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6303_);
v___x_6307_ = l_Lean_Expr_isApp(v___x_6306_);
if (v___x_6307_ == 0)
{
lean_dec_ref(v___x_6306_);
lean_dec_ref(v_arg_6305_);
lean_del_object(v___x_6301_);
v___y_6283_ = v_a_6277_;
v___y_6284_ = v_a_6278_;
v___y_6285_ = v_a_6279_;
v___y_6286_ = v_a_6280_;
goto v___jp_6282_;
}
else
{
lean_object* v___x_6308_; lean_object* v___x_6309_; uint8_t v___x_6310_; 
v___x_6308_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6306_);
v___x_6309_ = ((lean_object*)(l_Lean_Meta_mkOfEqTrueCore___closed__1));
v___x_6310_ = l_Lean_Expr_isConstOf(v___x_6308_, v___x_6309_);
lean_dec_ref(v___x_6308_);
if (v___x_6310_ == 0)
{
lean_dec_ref(v_arg_6305_);
lean_del_object(v___x_6301_);
v___y_6283_ = v_a_6277_;
v___y_6284_ = v_a_6278_;
v___y_6285_ = v_a_6279_;
v___y_6286_ = v_a_6280_;
goto v___jp_6282_;
}
else
{
lean_object* v___x_6312_; 
lean_dec_ref(v_h_6276_);
if (v_isShared_6302_ == 0)
{
lean_ctor_set(v___x_6301_, 0, v_arg_6305_);
v___x_6312_ = v___x_6301_;
goto v_reusejp_6311_;
}
else
{
lean_object* v_reuseFailAlloc_6313_; 
v_reuseFailAlloc_6313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6313_, 0, v_arg_6305_);
v___x_6312_ = v_reuseFailAlloc_6313_;
goto v_reusejp_6311_;
}
v_reusejp_6311_:
{
return v___x_6312_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_6276_);
return v___x_6298_;
}
v___jp_6282_:
{
lean_object* v___x_6287_; 
lean_inc(v___y_6286_);
lean_inc_ref(v___y_6285_);
lean_inc(v___y_6284_);
lean_inc_ref(v___y_6283_);
lean_inc_ref(v_h_6276_);
v___x_6287_ = lean_infer_type(v_h_6276_, v___y_6283_, v___y_6284_, v___y_6285_, v___y_6286_);
if (lean_obj_tag(v___x_6287_) == 0)
{
lean_object* v_a_6288_; lean_object* v___x_6290_; uint8_t v_isShared_6291_; uint8_t v_isSharedCheck_6297_; 
v_a_6288_ = lean_ctor_get(v___x_6287_, 0);
v_isSharedCheck_6297_ = !lean_is_exclusive(v___x_6287_);
if (v_isSharedCheck_6297_ == 0)
{
v___x_6290_ = v___x_6287_;
v_isShared_6291_ = v_isSharedCheck_6297_;
goto v_resetjp_6289_;
}
else
{
lean_inc(v_a_6288_);
lean_dec(v___x_6287_);
v___x_6290_ = lean_box(0);
v_isShared_6291_ = v_isSharedCheck_6297_;
goto v_resetjp_6289_;
}
v_resetjp_6289_:
{
lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6295_; 
v___x_6292_ = lean_obj_once(&l_Lean_Meta_mkEqTrueCore___closed__0, &l_Lean_Meta_mkEqTrueCore___closed__0_once, _init_l_Lean_Meta_mkEqTrueCore___closed__0);
v___x_6293_ = l_Lean_mkAppB(v___x_6292_, v_a_6288_, v_h_6276_);
if (v_isShared_6291_ == 0)
{
lean_ctor_set(v___x_6290_, 0, v___x_6293_);
v___x_6295_ = v___x_6290_;
goto v_reusejp_6294_;
}
else
{
lean_object* v_reuseFailAlloc_6296_; 
v_reuseFailAlloc_6296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6296_, 0, v___x_6293_);
v___x_6295_ = v_reuseFailAlloc_6296_;
goto v_reusejp_6294_;
}
v_reusejp_6294_:
{
return v___x_6295_;
}
}
}
else
{
lean_dec_ref(v_h_6276_);
return v___x_6287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqTrue___boxed(lean_object* v_h_6315_, lean_object* v_a_6316_, lean_object* v_a_6317_, lean_object* v_a_6318_, lean_object* v_a_6319_, lean_object* v_a_6320_){
_start:
{
lean_object* v_res_6321_; 
v_res_6321_ = l_Lean_Meta_mkEqTrue(v_h_6315_, v_a_6316_, v_a_6317_, v_a_6318_, v_a_6319_);
lean_dec(v_a_6319_);
lean_dec_ref(v_a_6318_);
lean_dec(v_a_6317_);
lean_dec_ref(v_a_6316_);
return v_res_6321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse(lean_object* v_h_6322_, lean_object* v_a_6323_, lean_object* v_a_6324_, lean_object* v_a_6325_, lean_object* v_a_6326_){
_start:
{
lean_object* v___y_6329_; lean_object* v___y_6330_; lean_object* v___y_6331_; lean_object* v___y_6332_; lean_object* v___x_6338_; uint8_t v___x_6339_; 
lean_inc_ref(v_h_6322_);
v___x_6338_ = l_Lean_Expr_cleanupAnnotations(v_h_6322_);
v___x_6339_ = l_Lean_Expr_isApp(v___x_6338_);
if (v___x_6339_ == 0)
{
lean_dec_ref(v___x_6338_);
v___y_6329_ = v_a_6323_;
v___y_6330_ = v_a_6324_;
v___y_6331_ = v_a_6325_;
v___y_6332_ = v_a_6326_;
goto v___jp_6328_;
}
else
{
lean_object* v_arg_6340_; lean_object* v___x_6341_; uint8_t v___x_6342_; 
v_arg_6340_ = lean_ctor_get(v___x_6338_, 1);
lean_inc_ref(v_arg_6340_);
v___x_6341_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6338_);
v___x_6342_ = l_Lean_Expr_isApp(v___x_6341_);
if (v___x_6342_ == 0)
{
lean_dec_ref(v___x_6341_);
lean_dec_ref(v_arg_6340_);
v___y_6329_ = v_a_6323_;
v___y_6330_ = v_a_6324_;
v___y_6331_ = v_a_6325_;
v___y_6332_ = v_a_6326_;
goto v___jp_6328_;
}
else
{
lean_object* v___x_6343_; lean_object* v___x_6344_; uint8_t v___x_6345_; 
v___x_6343_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6341_);
v___x_6344_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__1));
v___x_6345_ = l_Lean_Expr_isConstOf(v___x_6343_, v___x_6344_);
lean_dec_ref(v___x_6343_);
if (v___x_6345_ == 0)
{
lean_dec_ref(v_arg_6340_);
v___y_6329_ = v_a_6323_;
v___y_6330_ = v_a_6324_;
v___y_6331_ = v_a_6325_;
v___y_6332_ = v_a_6326_;
goto v___jp_6328_;
}
else
{
lean_object* v___x_6346_; 
lean_dec_ref(v_h_6322_);
v___x_6346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6346_, 0, v_arg_6340_);
return v___x_6346_;
}
}
}
v___jp_6328_:
{
lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; 
v___x_6333_ = ((lean_object*)(l_Lean_Meta_mkOfEqFalseCore___closed__4));
v___x_6334_ = lean_unsigned_to_nat(1u);
v___x_6335_ = lean_mk_empty_array_with_capacity(v___x_6334_);
v___x_6336_ = lean_array_push(v___x_6335_, v_h_6322_);
v___x_6337_ = l_Lean_Meta_mkAppM(v___x_6333_, v___x_6336_, v___y_6329_, v___y_6330_, v___y_6331_, v___y_6332_);
return v___x_6337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse___boxed(lean_object* v_h_6347_, lean_object* v_a_6348_, lean_object* v_a_6349_, lean_object* v_a_6350_, lean_object* v_a_6351_, lean_object* v_a_6352_){
_start:
{
lean_object* v_res_6353_; 
v_res_6353_ = l_Lean_Meta_mkEqFalse(v_h_6347_, v_a_6348_, v_a_6349_, v_a_6350_, v_a_6351_);
lean_dec(v_a_6351_);
lean_dec_ref(v_a_6350_);
lean_dec(v_a_6349_);
lean_dec_ref(v_a_6348_);
return v_res_6353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object* v_h_6357_, lean_object* v_a_6358_, lean_object* v_a_6359_, lean_object* v_a_6360_, lean_object* v_a_6361_){
_start:
{
lean_object* v___x_6363_; lean_object* v___x_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; lean_object* v___x_6367_; 
v___x_6363_ = ((lean_object*)(l_Lean_Meta_mkEqFalse_x27___closed__1));
v___x_6364_ = lean_unsigned_to_nat(1u);
v___x_6365_ = lean_mk_empty_array_with_capacity(v___x_6364_);
v___x_6366_ = lean_array_push(v___x_6365_, v_h_6357_);
v___x_6367_ = l_Lean_Meta_mkAppM(v___x_6363_, v___x_6366_, v_a_6358_, v_a_6359_, v_a_6360_, v_a_6361_);
return v___x_6367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqFalse_x27___boxed(lean_object* v_h_6368_, lean_object* v_a_6369_, lean_object* v_a_6370_, lean_object* v_a_6371_, lean_object* v_a_6372_, lean_object* v_a_6373_){
_start:
{
lean_object* v_res_6374_; 
v_res_6374_ = l_Lean_Meta_mkEqFalse_x27(v_h_6368_, v_a_6369_, v_a_6370_, v_a_6371_, v_a_6372_);
lean_dec(v_a_6372_);
lean_dec_ref(v_a_6371_);
lean_dec(v_a_6370_);
lean_dec_ref(v_a_6369_);
return v_res_6374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongr(lean_object* v_h_u2081_6378_, lean_object* v_h_u2082_6379_, lean_object* v_a_6380_, lean_object* v_a_6381_, lean_object* v_a_6382_, lean_object* v_a_6383_){
_start:
{
lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; 
v___x_6385_ = ((lean_object*)(l_Lean_Meta_mkImpCongr___closed__1));
v___x_6386_ = lean_unsigned_to_nat(2u);
v___x_6387_ = lean_mk_empty_array_with_capacity(v___x_6386_);
v___x_6388_ = lean_array_push(v___x_6387_, v_h_u2081_6378_);
v___x_6389_ = lean_array_push(v___x_6388_, v_h_u2082_6379_);
v___x_6390_ = l_Lean_Meta_mkAppM(v___x_6385_, v___x_6389_, v_a_6380_, v_a_6381_, v_a_6382_, v_a_6383_);
return v___x_6390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongr___boxed(lean_object* v_h_u2081_6391_, lean_object* v_h_u2082_6392_, lean_object* v_a_6393_, lean_object* v_a_6394_, lean_object* v_a_6395_, lean_object* v_a_6396_, lean_object* v_a_6397_){
_start:
{
lean_object* v_res_6398_; 
v_res_6398_ = l_Lean_Meta_mkImpCongr(v_h_u2081_6391_, v_h_u2082_6392_, v_a_6393_, v_a_6394_, v_a_6395_, v_a_6396_);
lean_dec(v_a_6396_);
lean_dec_ref(v_a_6395_);
lean_dec(v_a_6394_);
lean_dec_ref(v_a_6393_);
return v_res_6398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongrCtx(lean_object* v_h_u2081_6402_, lean_object* v_h_u2082_6403_, lean_object* v_a_6404_, lean_object* v_a_6405_, lean_object* v_a_6406_, lean_object* v_a_6407_){
_start:
{
lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; 
v___x_6409_ = ((lean_object*)(l_Lean_Meta_mkImpCongrCtx___closed__1));
v___x_6410_ = lean_unsigned_to_nat(2u);
v___x_6411_ = lean_mk_empty_array_with_capacity(v___x_6410_);
v___x_6412_ = lean_array_push(v___x_6411_, v_h_u2081_6402_);
v___x_6413_ = lean_array_push(v___x_6412_, v_h_u2082_6403_);
v___x_6414_ = l_Lean_Meta_mkAppM(v___x_6409_, v___x_6413_, v_a_6404_, v_a_6405_, v_a_6406_, v_a_6407_);
return v___x_6414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpCongrCtx___boxed(lean_object* v_h_u2081_6415_, lean_object* v_h_u2082_6416_, lean_object* v_a_6417_, lean_object* v_a_6418_, lean_object* v_a_6419_, lean_object* v_a_6420_, lean_object* v_a_6421_){
_start:
{
lean_object* v_res_6422_; 
v_res_6422_ = l_Lean_Meta_mkImpCongrCtx(v_h_u2081_6415_, v_h_u2082_6416_, v_a_6417_, v_a_6418_, v_a_6419_, v_a_6420_);
lean_dec(v_a_6420_);
lean_dec_ref(v_a_6419_);
lean_dec(v_a_6418_);
lean_dec_ref(v_a_6417_);
return v_res_6422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpDepCongrCtx(lean_object* v_h_u2081_6426_, lean_object* v_h_u2082_6427_, lean_object* v_a_6428_, lean_object* v_a_6429_, lean_object* v_a_6430_, lean_object* v_a_6431_){
_start:
{
lean_object* v___x_6433_; lean_object* v___x_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; 
v___x_6433_ = ((lean_object*)(l_Lean_Meta_mkImpDepCongrCtx___closed__1));
v___x_6434_ = lean_unsigned_to_nat(2u);
v___x_6435_ = lean_mk_empty_array_with_capacity(v___x_6434_);
v___x_6436_ = lean_array_push(v___x_6435_, v_h_u2081_6426_);
v___x_6437_ = lean_array_push(v___x_6436_, v_h_u2082_6427_);
v___x_6438_ = l_Lean_Meta_mkAppM(v___x_6433_, v___x_6437_, v_a_6428_, v_a_6429_, v_a_6430_, v_a_6431_);
return v___x_6438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkImpDepCongrCtx___boxed(lean_object* v_h_u2081_6439_, lean_object* v_h_u2082_6440_, lean_object* v_a_6441_, lean_object* v_a_6442_, lean_object* v_a_6443_, lean_object* v_a_6444_, lean_object* v_a_6445_){
_start:
{
lean_object* v_res_6446_; 
v_res_6446_ = l_Lean_Meta_mkImpDepCongrCtx(v_h_u2081_6439_, v_h_u2082_6440_, v_a_6441_, v_a_6442_, v_a_6443_, v_a_6444_);
lean_dec(v_a_6444_);
lean_dec_ref(v_a_6443_);
lean_dec(v_a_6442_);
lean_dec_ref(v_a_6441_);
return v_res_6446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallCongr(lean_object* v_h_6450_, lean_object* v_a_6451_, lean_object* v_a_6452_, lean_object* v_a_6453_, lean_object* v_a_6454_){
_start:
{
lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; 
v___x_6456_ = ((lean_object*)(l_Lean_Meta_mkForallCongr___closed__1));
v___x_6457_ = lean_unsigned_to_nat(1u);
v___x_6458_ = lean_mk_empty_array_with_capacity(v___x_6457_);
v___x_6459_ = lean_array_push(v___x_6458_, v_h_6450_);
v___x_6460_ = l_Lean_Meta_mkAppM(v___x_6456_, v___x_6459_, v_a_6451_, v_a_6452_, v_a_6453_, v_a_6454_);
return v___x_6460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallCongr___boxed(lean_object* v_h_6461_, lean_object* v_a_6462_, lean_object* v_a_6463_, lean_object* v_a_6464_, lean_object* v_a_6465_, lean_object* v_a_6466_){
_start:
{
lean_object* v_res_6467_; 
v_res_6467_ = l_Lean_Meta_mkForallCongr(v_h_6461_, v_a_6462_, v_a_6463_, v_a_6464_, v_a_6465_);
lean_dec(v_a_6465_);
lean_dec_ref(v_a_6464_);
lean_dec(v_a_6463_);
lean_dec_ref(v_a_6462_);
return v_res_6467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonad_x3f(lean_object* v_m_6471_, lean_object* v_a_6472_, lean_object* v_a_6473_, lean_object* v_a_6474_, lean_object* v_a_6475_){
_start:
{
lean_object* v___y_6478_; uint8_t v___y_6479_; lean_object* v___y_6483_; lean_object* v_a_6484_; lean_object* v___x_6487_; lean_object* v___x_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; 
v___x_6487_ = ((lean_object*)(l_Lean_Meta_isMonad_x3f___closed__1));
v___x_6488_ = lean_unsigned_to_nat(1u);
v___x_6489_ = lean_mk_empty_array_with_capacity(v___x_6488_);
v___x_6490_ = lean_array_push(v___x_6489_, v_m_6471_);
v___x_6491_ = l_Lean_Meta_mkAppM(v___x_6487_, v___x_6490_, v_a_6472_, v_a_6473_, v_a_6474_, v_a_6475_);
if (lean_obj_tag(v___x_6491_) == 0)
{
lean_object* v_a_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; 
v_a_6492_ = lean_ctor_get(v___x_6491_, 0);
lean_inc(v_a_6492_);
lean_dec_ref_known(v___x_6491_, 1);
v___x_6493_ = lean_box(0);
v___x_6494_ = l_Lean_Meta_trySynthInstance(v_a_6492_, v___x_6493_, v_a_6472_, v_a_6473_, v_a_6474_, v_a_6475_);
if (lean_obj_tag(v___x_6494_) == 0)
{
lean_object* v_a_6495_; lean_object* v___x_6497_; uint8_t v_isShared_6498_; uint8_t v_isSharedCheck_6513_; 
v_a_6495_ = lean_ctor_get(v___x_6494_, 0);
v_isSharedCheck_6513_ = !lean_is_exclusive(v___x_6494_);
if (v_isSharedCheck_6513_ == 0)
{
v___x_6497_ = v___x_6494_;
v_isShared_6498_ = v_isSharedCheck_6513_;
goto v_resetjp_6496_;
}
else
{
lean_inc(v_a_6495_);
lean_dec(v___x_6494_);
v___x_6497_ = lean_box(0);
v_isShared_6498_ = v_isSharedCheck_6513_;
goto v_resetjp_6496_;
}
v_resetjp_6496_:
{
if (lean_obj_tag(v_a_6495_) == 1)
{
lean_object* v_a_6499_; lean_object* v___x_6501_; uint8_t v_isShared_6502_; uint8_t v_isSharedCheck_6509_; 
v_a_6499_ = lean_ctor_get(v_a_6495_, 0);
v_isSharedCheck_6509_ = !lean_is_exclusive(v_a_6495_);
if (v_isSharedCheck_6509_ == 0)
{
v___x_6501_ = v_a_6495_;
v_isShared_6502_ = v_isSharedCheck_6509_;
goto v_resetjp_6500_;
}
else
{
lean_inc(v_a_6499_);
lean_dec(v_a_6495_);
v___x_6501_ = lean_box(0);
v_isShared_6502_ = v_isSharedCheck_6509_;
goto v_resetjp_6500_;
}
v_resetjp_6500_:
{
lean_object* v___x_6504_; 
if (v_isShared_6502_ == 0)
{
v___x_6504_ = v___x_6501_;
goto v_reusejp_6503_;
}
else
{
lean_object* v_reuseFailAlloc_6508_; 
v_reuseFailAlloc_6508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6508_, 0, v_a_6499_);
v___x_6504_ = v_reuseFailAlloc_6508_;
goto v_reusejp_6503_;
}
v_reusejp_6503_:
{
lean_object* v___x_6506_; 
if (v_isShared_6498_ == 0)
{
lean_ctor_set(v___x_6497_, 0, v___x_6504_);
v___x_6506_ = v___x_6497_;
goto v_reusejp_6505_;
}
else
{
lean_object* v_reuseFailAlloc_6507_; 
v_reuseFailAlloc_6507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6507_, 0, v___x_6504_);
v___x_6506_ = v_reuseFailAlloc_6507_;
goto v_reusejp_6505_;
}
v_reusejp_6505_:
{
return v___x_6506_;
}
}
}
}
else
{
lean_object* v___x_6511_; 
lean_dec(v_a_6495_);
if (v_isShared_6498_ == 0)
{
lean_ctor_set(v___x_6497_, 0, v___x_6493_);
v___x_6511_ = v___x_6497_;
goto v_reusejp_6510_;
}
else
{
lean_object* v_reuseFailAlloc_6512_; 
v_reuseFailAlloc_6512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6512_, 0, v___x_6493_);
v___x_6511_ = v_reuseFailAlloc_6512_;
goto v_reusejp_6510_;
}
v_reusejp_6510_:
{
return v___x_6511_;
}
}
}
}
else
{
lean_object* v_a_6514_; lean_object* v___x_6516_; uint8_t v_isShared_6517_; uint8_t v_isSharedCheck_6521_; 
v_a_6514_ = lean_ctor_get(v___x_6494_, 0);
v_isSharedCheck_6521_ = !lean_is_exclusive(v___x_6494_);
if (v_isSharedCheck_6521_ == 0)
{
v___x_6516_ = v___x_6494_;
v_isShared_6517_ = v_isSharedCheck_6521_;
goto v_resetjp_6515_;
}
else
{
lean_inc(v_a_6514_);
lean_dec(v___x_6494_);
v___x_6516_ = lean_box(0);
v_isShared_6517_ = v_isSharedCheck_6521_;
goto v_resetjp_6515_;
}
v_resetjp_6515_:
{
lean_object* v___x_6519_; 
lean_inc(v_a_6514_);
if (v_isShared_6517_ == 0)
{
v___x_6519_ = v___x_6516_;
goto v_reusejp_6518_;
}
else
{
lean_object* v_reuseFailAlloc_6520_; 
v_reuseFailAlloc_6520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6520_, 0, v_a_6514_);
v___x_6519_ = v_reuseFailAlloc_6520_;
goto v_reusejp_6518_;
}
v_reusejp_6518_:
{
v___y_6483_ = v___x_6519_;
v_a_6484_ = v_a_6514_;
goto v___jp_6482_;
}
}
}
}
else
{
lean_object* v_a_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6529_; 
v_a_6522_ = lean_ctor_get(v___x_6491_, 0);
v_isSharedCheck_6529_ = !lean_is_exclusive(v___x_6491_);
if (v_isSharedCheck_6529_ == 0)
{
v___x_6524_ = v___x_6491_;
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_a_6522_);
lean_dec(v___x_6491_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v___x_6527_; 
lean_inc(v_a_6522_);
if (v_isShared_6525_ == 0)
{
v___x_6527_ = v___x_6524_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6528_; 
v_reuseFailAlloc_6528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6528_, 0, v_a_6522_);
v___x_6527_ = v_reuseFailAlloc_6528_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
v___y_6483_ = v___x_6527_;
v_a_6484_ = v_a_6522_;
goto v___jp_6482_;
}
}
}
v___jp_6477_:
{
if (v___y_6479_ == 0)
{
lean_object* v___x_6480_; lean_object* v___x_6481_; 
lean_dec_ref(v___y_6478_);
v___x_6480_ = lean_box(0);
v___x_6481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6481_, 0, v___x_6480_);
return v___x_6481_;
}
else
{
return v___y_6478_;
}
}
v___jp_6482_:
{
uint8_t v___x_6485_; 
v___x_6485_ = l_Lean_Exception_isInterrupt(v_a_6484_);
if (v___x_6485_ == 0)
{
uint8_t v___x_6486_; 
v___x_6486_ = l_Lean_Exception_isRuntime(v_a_6484_);
v___y_6478_ = v___y_6483_;
v___y_6479_ = v___x_6486_;
goto v___jp_6477_;
}
else
{
lean_dec_ref(v_a_6484_);
v___y_6478_ = v___y_6483_;
v___y_6479_ = v___x_6485_;
goto v___jp_6477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonad_x3f___boxed(lean_object* v_m_6530_, lean_object* v_a_6531_, lean_object* v_a_6532_, lean_object* v_a_6533_, lean_object* v_a_6534_, lean_object* v_a_6535_){
_start:
{
lean_object* v_res_6536_; 
v_res_6536_ = l_Lean_Meta_isMonad_x3f(v_m_6530_, v_a_6531_, v_a_6532_, v_a_6533_, v_a_6534_);
lean_dec(v_a_6534_);
lean_dec_ref(v_a_6533_);
lean_dec(v_a_6532_);
lean_dec_ref(v_a_6531_);
return v_res_6536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNumeral(lean_object* v_type_6544_, lean_object* v_n_6545_, lean_object* v_a_6546_, lean_object* v_a_6547_, lean_object* v_a_6548_, lean_object* v_a_6549_){
_start:
{
lean_object* v___x_6551_; 
lean_inc_ref(v_type_6544_);
v___x_6551_ = l_Lean_Meta_getDecLevel(v_type_6544_, v_a_6546_, v_a_6547_, v_a_6548_, v_a_6549_);
if (lean_obj_tag(v___x_6551_) == 0)
{
lean_object* v_a_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; lean_object* v___x_6556_; lean_object* v___x_6557_; lean_object* v___x_6558_; lean_object* v___x_6559_; lean_object* v___x_6560_; 
v_a_6552_ = lean_ctor_get(v___x_6551_, 0);
lean_inc(v_a_6552_);
lean_dec_ref_known(v___x_6551_, 1);
v___x_6553_ = ((lean_object*)(l_Lean_Meta_mkNumeral___closed__1));
v___x_6554_ = lean_box(0);
v___x_6555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6555_, 0, v_a_6552_);
lean_ctor_set(v___x_6555_, 1, v___x_6554_);
lean_inc_ref(v___x_6555_);
v___x_6556_ = l_Lean_mkConst(v___x_6553_, v___x_6555_);
v___x_6557_ = l_Lean_mkRawNatLit(v_n_6545_);
lean_inc_ref(v___x_6557_);
lean_inc_ref(v_type_6544_);
v___x_6558_ = l_Lean_mkAppB(v___x_6556_, v_type_6544_, v___x_6557_);
v___x_6559_ = lean_box(0);
v___x_6560_ = l_Lean_Meta_synthInstance(v___x_6558_, v___x_6559_, v_a_6546_, v_a_6547_, v_a_6548_, v_a_6549_);
if (lean_obj_tag(v___x_6560_) == 0)
{
lean_object* v_a_6561_; lean_object* v___x_6563_; uint8_t v_isShared_6564_; uint8_t v_isSharedCheck_6571_; 
v_a_6561_ = lean_ctor_get(v___x_6560_, 0);
v_isSharedCheck_6571_ = !lean_is_exclusive(v___x_6560_);
if (v_isSharedCheck_6571_ == 0)
{
v___x_6563_ = v___x_6560_;
v_isShared_6564_ = v_isSharedCheck_6571_;
goto v_resetjp_6562_;
}
else
{
lean_inc(v_a_6561_);
lean_dec(v___x_6560_);
v___x_6563_ = lean_box(0);
v_isShared_6564_ = v_isSharedCheck_6571_;
goto v_resetjp_6562_;
}
v_resetjp_6562_:
{
lean_object* v___x_6565_; lean_object* v___x_6566_; lean_object* v___x_6567_; lean_object* v___x_6569_; 
v___x_6565_ = ((lean_object*)(l_Lean_Meta_mkNumeral___closed__3));
v___x_6566_ = l_Lean_mkConst(v___x_6565_, v___x_6555_);
v___x_6567_ = l_Lean_mkApp3(v___x_6566_, v_type_6544_, v___x_6557_, v_a_6561_);
if (v_isShared_6564_ == 0)
{
lean_ctor_set(v___x_6563_, 0, v___x_6567_);
v___x_6569_ = v___x_6563_;
goto v_reusejp_6568_;
}
else
{
lean_object* v_reuseFailAlloc_6570_; 
v_reuseFailAlloc_6570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6570_, 0, v___x_6567_);
v___x_6569_ = v_reuseFailAlloc_6570_;
goto v_reusejp_6568_;
}
v_reusejp_6568_:
{
return v___x_6569_;
}
}
}
else
{
lean_dec_ref(v___x_6557_);
lean_dec_ref_known(v___x_6555_, 2);
lean_dec_ref(v_type_6544_);
return v___x_6560_;
}
}
else
{
lean_object* v_a_6572_; lean_object* v___x_6574_; uint8_t v_isShared_6575_; uint8_t v_isSharedCheck_6579_; 
lean_dec(v_n_6545_);
lean_dec_ref(v_type_6544_);
v_a_6572_ = lean_ctor_get(v___x_6551_, 0);
v_isSharedCheck_6579_ = !lean_is_exclusive(v___x_6551_);
if (v_isSharedCheck_6579_ == 0)
{
v___x_6574_ = v___x_6551_;
v_isShared_6575_ = v_isSharedCheck_6579_;
goto v_resetjp_6573_;
}
else
{
lean_inc(v_a_6572_);
lean_dec(v___x_6551_);
v___x_6574_ = lean_box(0);
v_isShared_6575_ = v_isSharedCheck_6579_;
goto v_resetjp_6573_;
}
v_resetjp_6573_:
{
lean_object* v___x_6577_; 
if (v_isShared_6575_ == 0)
{
v___x_6577_ = v___x_6574_;
goto v_reusejp_6576_;
}
else
{
lean_object* v_reuseFailAlloc_6578_; 
v_reuseFailAlloc_6578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6578_, 0, v_a_6572_);
v___x_6577_ = v_reuseFailAlloc_6578_;
goto v_reusejp_6576_;
}
v_reusejp_6576_:
{
return v___x_6577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkNumeral___boxed(lean_object* v_type_6580_, lean_object* v_n_6581_, lean_object* v_a_6582_, lean_object* v_a_6583_, lean_object* v_a_6584_, lean_object* v_a_6585_, lean_object* v_a_6586_){
_start:
{
lean_object* v_res_6587_; 
v_res_6587_ = l_Lean_Meta_mkNumeral(v_type_6580_, v_n_6581_, v_a_6582_, v_a_6583_, v_a_6584_, v_a_6585_);
lean_dec(v_a_6585_);
lean_dec_ref(v_a_6584_);
lean_dec(v_a_6583_);
lean_dec_ref(v_a_6582_);
return v_res_6587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(lean_object* v_className_6588_, lean_object* v_opName_6589_, lean_object* v_a_6590_, lean_object* v_b_6591_, lean_object* v_a_6592_, lean_object* v_a_6593_, lean_object* v_a_6594_, lean_object* v_a_6595_){
_start:
{
lean_object* v___x_6597_; 
lean_inc(v_a_6595_);
lean_inc_ref(v_a_6594_);
lean_inc(v_a_6593_);
lean_inc_ref(v_a_6592_);
lean_inc_ref(v_a_6590_);
v___x_6597_ = lean_infer_type(v_a_6590_, v_a_6592_, v_a_6593_, v_a_6594_, v_a_6595_);
if (lean_obj_tag(v___x_6597_) == 0)
{
lean_object* v_a_6598_; lean_object* v___x_6599_; 
v_a_6598_ = lean_ctor_get(v___x_6597_, 0);
lean_inc_n(v_a_6598_, 2);
lean_dec_ref_known(v___x_6597_, 1);
v___x_6599_ = l_Lean_Meta_getDecLevel(v_a_6598_, v_a_6592_, v_a_6593_, v_a_6594_, v_a_6595_);
if (lean_obj_tag(v___x_6599_) == 0)
{
lean_object* v_a_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; lean_object* v___x_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; lean_object* v___x_6606_; lean_object* v___x_6607_; lean_object* v___x_6608_; 
v_a_6600_ = lean_ctor_get(v___x_6599_, 0);
lean_inc_n(v_a_6600_, 3);
lean_dec_ref_known(v___x_6599_, 1);
v___x_6601_ = lean_box(0);
v___x_6602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6602_, 0, v_a_6600_);
lean_ctor_set(v___x_6602_, 1, v___x_6601_);
v___x_6603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6603_, 0, v_a_6600_);
lean_ctor_set(v___x_6603_, 1, v___x_6602_);
v___x_6604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6604_, 0, v_a_6600_);
lean_ctor_set(v___x_6604_, 1, v___x_6603_);
lean_inc_ref(v___x_6604_);
v___x_6605_ = l_Lean_mkConst(v_className_6588_, v___x_6604_);
lean_inc_n(v_a_6598_, 3);
v___x_6606_ = l_Lean_mkApp3(v___x_6605_, v_a_6598_, v_a_6598_, v_a_6598_);
v___x_6607_ = lean_box(0);
v___x_6608_ = l_Lean_Meta_synthInstance(v___x_6606_, v___x_6607_, v_a_6592_, v_a_6593_, v_a_6594_, v_a_6595_);
if (lean_obj_tag(v___x_6608_) == 0)
{
lean_object* v_a_6609_; lean_object* v___x_6611_; uint8_t v_isShared_6612_; uint8_t v_isSharedCheck_6618_; 
v_a_6609_ = lean_ctor_get(v___x_6608_, 0);
v_isSharedCheck_6618_ = !lean_is_exclusive(v___x_6608_);
if (v_isSharedCheck_6618_ == 0)
{
v___x_6611_ = v___x_6608_;
v_isShared_6612_ = v_isSharedCheck_6618_;
goto v_resetjp_6610_;
}
else
{
lean_inc(v_a_6609_);
lean_dec(v___x_6608_);
v___x_6611_ = lean_box(0);
v_isShared_6612_ = v_isSharedCheck_6618_;
goto v_resetjp_6610_;
}
v_resetjp_6610_:
{
lean_object* v___x_6613_; lean_object* v___x_6614_; lean_object* v___x_6616_; 
v___x_6613_ = l_Lean_mkConst(v_opName_6589_, v___x_6604_);
lean_inc_n(v_a_6598_, 2);
v___x_6614_ = l_Lean_mkApp6(v___x_6613_, v_a_6598_, v_a_6598_, v_a_6598_, v_a_6609_, v_a_6590_, v_b_6591_);
if (v_isShared_6612_ == 0)
{
lean_ctor_set(v___x_6611_, 0, v___x_6614_);
v___x_6616_ = v___x_6611_;
goto v_reusejp_6615_;
}
else
{
lean_object* v_reuseFailAlloc_6617_; 
v_reuseFailAlloc_6617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6617_, 0, v___x_6614_);
v___x_6616_ = v_reuseFailAlloc_6617_;
goto v_reusejp_6615_;
}
v_reusejp_6615_:
{
return v___x_6616_;
}
}
}
else
{
lean_dec_ref_known(v___x_6604_, 2);
lean_dec(v_a_6598_);
lean_dec_ref(v_b_6591_);
lean_dec_ref(v_a_6590_);
lean_dec(v_opName_6589_);
return v___x_6608_;
}
}
else
{
lean_object* v_a_6619_; lean_object* v___x_6621_; uint8_t v_isShared_6622_; uint8_t v_isSharedCheck_6626_; 
lean_dec(v_a_6598_);
lean_dec_ref(v_b_6591_);
lean_dec_ref(v_a_6590_);
lean_dec(v_opName_6589_);
lean_dec(v_className_6588_);
v_a_6619_ = lean_ctor_get(v___x_6599_, 0);
v_isSharedCheck_6626_ = !lean_is_exclusive(v___x_6599_);
if (v_isSharedCheck_6626_ == 0)
{
v___x_6621_ = v___x_6599_;
v_isShared_6622_ = v_isSharedCheck_6626_;
goto v_resetjp_6620_;
}
else
{
lean_inc(v_a_6619_);
lean_dec(v___x_6599_);
v___x_6621_ = lean_box(0);
v_isShared_6622_ = v_isSharedCheck_6626_;
goto v_resetjp_6620_;
}
v_resetjp_6620_:
{
lean_object* v___x_6624_; 
if (v_isShared_6622_ == 0)
{
v___x_6624_ = v___x_6621_;
goto v_reusejp_6623_;
}
else
{
lean_object* v_reuseFailAlloc_6625_; 
v_reuseFailAlloc_6625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6625_, 0, v_a_6619_);
v___x_6624_ = v_reuseFailAlloc_6625_;
goto v_reusejp_6623_;
}
v_reusejp_6623_:
{
return v___x_6624_;
}
}
}
}
else
{
lean_dec_ref(v_b_6591_);
lean_dec_ref(v_a_6590_);
lean_dec(v_opName_6589_);
lean_dec(v_className_6588_);
return v___x_6597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp___boxed(lean_object* v_className_6627_, lean_object* v_opName_6628_, lean_object* v_a_6629_, lean_object* v_b_6630_, lean_object* v_a_6631_, lean_object* v_a_6632_, lean_object* v_a_6633_, lean_object* v_a_6634_, lean_object* v_a_6635_){
_start:
{
lean_object* v_res_6636_; 
v_res_6636_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(v_className_6627_, v_opName_6628_, v_a_6629_, v_b_6630_, v_a_6631_, v_a_6632_, v_a_6633_, v_a_6634_);
lean_dec(v_a_6634_);
lean_dec_ref(v_a_6633_);
lean_dec(v_a_6632_);
lean_dec_ref(v_a_6631_);
return v_res_6636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAdd(lean_object* v_a_6644_, lean_object* v_b_6645_, lean_object* v_a_6646_, lean_object* v_a_6647_, lean_object* v_a_6648_, lean_object* v_a_6649_){
_start:
{
lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___x_6653_; 
v___x_6651_ = ((lean_object*)(l_Lean_Meta_mkAdd___closed__1));
v___x_6652_ = ((lean_object*)(l_Lean_Meta_mkAdd___closed__3));
v___x_6653_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(v___x_6651_, v___x_6652_, v_a_6644_, v_b_6645_, v_a_6646_, v_a_6647_, v_a_6648_, v_a_6649_);
return v___x_6653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAdd___boxed(lean_object* v_a_6654_, lean_object* v_b_6655_, lean_object* v_a_6656_, lean_object* v_a_6657_, lean_object* v_a_6658_, lean_object* v_a_6659_, lean_object* v_a_6660_){
_start:
{
lean_object* v_res_6661_; 
v_res_6661_ = l_Lean_Meta_mkAdd(v_a_6654_, v_b_6655_, v_a_6656_, v_a_6657_, v_a_6658_, v_a_6659_);
lean_dec(v_a_6659_);
lean_dec_ref(v_a_6658_);
lean_dec(v_a_6657_);
lean_dec_ref(v_a_6656_);
return v_res_6661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSub(lean_object* v_a_6669_, lean_object* v_b_6670_, lean_object* v_a_6671_, lean_object* v_a_6672_, lean_object* v_a_6673_, lean_object* v_a_6674_){
_start:
{
lean_object* v___x_6676_; lean_object* v___x_6677_; lean_object* v___x_6678_; 
v___x_6676_ = ((lean_object*)(l_Lean_Meta_mkSub___closed__1));
v___x_6677_ = ((lean_object*)(l_Lean_Meta_mkSub___closed__3));
v___x_6678_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(v___x_6676_, v___x_6677_, v_a_6669_, v_b_6670_, v_a_6671_, v_a_6672_, v_a_6673_, v_a_6674_);
return v___x_6678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSub___boxed(lean_object* v_a_6679_, lean_object* v_b_6680_, lean_object* v_a_6681_, lean_object* v_a_6682_, lean_object* v_a_6683_, lean_object* v_a_6684_, lean_object* v_a_6685_){
_start:
{
lean_object* v_res_6686_; 
v_res_6686_ = l_Lean_Meta_mkSub(v_a_6679_, v_b_6680_, v_a_6681_, v_a_6682_, v_a_6683_, v_a_6684_);
lean_dec(v_a_6684_);
lean_dec_ref(v_a_6683_);
lean_dec(v_a_6682_);
lean_dec_ref(v_a_6681_);
return v_res_6686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkMul(lean_object* v_a_6694_, lean_object* v_b_6695_, lean_object* v_a_6696_, lean_object* v_a_6697_, lean_object* v_a_6698_, lean_object* v_a_6699_){
_start:
{
lean_object* v___x_6701_; lean_object* v___x_6702_; lean_object* v___x_6703_; 
v___x_6701_ = ((lean_object*)(l_Lean_Meta_mkMul___closed__1));
v___x_6702_ = ((lean_object*)(l_Lean_Meta_mkMul___closed__3));
v___x_6703_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryOp(v___x_6701_, v___x_6702_, v_a_6694_, v_b_6695_, v_a_6696_, v_a_6697_, v_a_6698_, v_a_6699_);
return v___x_6703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkMul___boxed(lean_object* v_a_6704_, lean_object* v_b_6705_, lean_object* v_a_6706_, lean_object* v_a_6707_, lean_object* v_a_6708_, lean_object* v_a_6709_, lean_object* v_a_6710_){
_start:
{
lean_object* v_res_6711_; 
v_res_6711_ = l_Lean_Meta_mkMul(v_a_6704_, v_b_6705_, v_a_6706_, v_a_6707_, v_a_6708_, v_a_6709_);
lean_dec(v_a_6709_);
lean_dec_ref(v_a_6708_);
lean_dec(v_a_6707_);
lean_dec_ref(v_a_6706_);
return v_res_6711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel(lean_object* v_className_6712_, lean_object* v_rName_6713_, lean_object* v_a_6714_, lean_object* v_b_6715_, lean_object* v_a_6716_, lean_object* v_a_6717_, lean_object* v_a_6718_, lean_object* v_a_6719_){
_start:
{
lean_object* v___x_6721_; 
lean_inc(v_a_6719_);
lean_inc_ref(v_a_6718_);
lean_inc(v_a_6717_);
lean_inc_ref(v_a_6716_);
lean_inc_ref(v_a_6714_);
v___x_6721_ = lean_infer_type(v_a_6714_, v_a_6716_, v_a_6717_, v_a_6718_, v_a_6719_);
if (lean_obj_tag(v___x_6721_) == 0)
{
lean_object* v_a_6722_; lean_object* v___x_6723_; 
v_a_6722_ = lean_ctor_get(v___x_6721_, 0);
lean_inc_n(v_a_6722_, 2);
lean_dec_ref_known(v___x_6721_, 1);
v___x_6723_ = l_Lean_Meta_getDecLevel(v_a_6722_, v_a_6716_, v_a_6717_, v_a_6718_, v_a_6719_);
if (lean_obj_tag(v___x_6723_) == 0)
{
lean_object* v_a_6724_; lean_object* v___x_6725_; lean_object* v___x_6726_; lean_object* v___x_6727_; lean_object* v___x_6728_; lean_object* v___x_6729_; lean_object* v___x_6730_; 
v_a_6724_ = lean_ctor_get(v___x_6723_, 0);
lean_inc(v_a_6724_);
lean_dec_ref_known(v___x_6723_, 1);
v___x_6725_ = lean_box(0);
v___x_6726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6726_, 0, v_a_6724_);
lean_ctor_set(v___x_6726_, 1, v___x_6725_);
lean_inc_ref(v___x_6726_);
v___x_6727_ = l_Lean_mkConst(v_className_6712_, v___x_6726_);
lean_inc(v_a_6722_);
v___x_6728_ = l_Lean_Expr_app___override(v___x_6727_, v_a_6722_);
v___x_6729_ = lean_box(0);
v___x_6730_ = l_Lean_Meta_synthInstance(v___x_6728_, v___x_6729_, v_a_6716_, v_a_6717_, v_a_6718_, v_a_6719_);
if (lean_obj_tag(v___x_6730_) == 0)
{
lean_object* v_a_6731_; lean_object* v___x_6733_; uint8_t v_isShared_6734_; uint8_t v_isSharedCheck_6740_; 
v_a_6731_ = lean_ctor_get(v___x_6730_, 0);
v_isSharedCheck_6740_ = !lean_is_exclusive(v___x_6730_);
if (v_isSharedCheck_6740_ == 0)
{
v___x_6733_ = v___x_6730_;
v_isShared_6734_ = v_isSharedCheck_6740_;
goto v_resetjp_6732_;
}
else
{
lean_inc(v_a_6731_);
lean_dec(v___x_6730_);
v___x_6733_ = lean_box(0);
v_isShared_6734_ = v_isSharedCheck_6740_;
goto v_resetjp_6732_;
}
v_resetjp_6732_:
{
lean_object* v___x_6735_; lean_object* v___x_6736_; lean_object* v___x_6738_; 
v___x_6735_ = l_Lean_mkConst(v_rName_6713_, v___x_6726_);
v___x_6736_ = l_Lean_mkApp4(v___x_6735_, v_a_6722_, v_a_6731_, v_a_6714_, v_b_6715_);
if (v_isShared_6734_ == 0)
{
lean_ctor_set(v___x_6733_, 0, v___x_6736_);
v___x_6738_ = v___x_6733_;
goto v_reusejp_6737_;
}
else
{
lean_object* v_reuseFailAlloc_6739_; 
v_reuseFailAlloc_6739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6739_, 0, v___x_6736_);
v___x_6738_ = v_reuseFailAlloc_6739_;
goto v_reusejp_6737_;
}
v_reusejp_6737_:
{
return v___x_6738_;
}
}
}
else
{
lean_dec_ref_known(v___x_6726_, 2);
lean_dec(v_a_6722_);
lean_dec_ref(v_b_6715_);
lean_dec_ref(v_a_6714_);
lean_dec(v_rName_6713_);
return v___x_6730_;
}
}
else
{
lean_object* v_a_6741_; lean_object* v___x_6743_; uint8_t v_isShared_6744_; uint8_t v_isSharedCheck_6748_; 
lean_dec(v_a_6722_);
lean_dec_ref(v_b_6715_);
lean_dec_ref(v_a_6714_);
lean_dec(v_rName_6713_);
lean_dec(v_className_6712_);
v_a_6741_ = lean_ctor_get(v___x_6723_, 0);
v_isSharedCheck_6748_ = !lean_is_exclusive(v___x_6723_);
if (v_isSharedCheck_6748_ == 0)
{
v___x_6743_ = v___x_6723_;
v_isShared_6744_ = v_isSharedCheck_6748_;
goto v_resetjp_6742_;
}
else
{
lean_inc(v_a_6741_);
lean_dec(v___x_6723_);
v___x_6743_ = lean_box(0);
v_isShared_6744_ = v_isSharedCheck_6748_;
goto v_resetjp_6742_;
}
v_resetjp_6742_:
{
lean_object* v___x_6746_; 
if (v_isShared_6744_ == 0)
{
v___x_6746_ = v___x_6743_;
goto v_reusejp_6745_;
}
else
{
lean_object* v_reuseFailAlloc_6747_; 
v_reuseFailAlloc_6747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6747_, 0, v_a_6741_);
v___x_6746_ = v_reuseFailAlloc_6747_;
goto v_reusejp_6745_;
}
v_reusejp_6745_:
{
return v___x_6746_;
}
}
}
}
else
{
lean_dec_ref(v_b_6715_);
lean_dec_ref(v_a_6714_);
lean_dec(v_rName_6713_);
lean_dec(v_className_6712_);
return v___x_6721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel___boxed(lean_object* v_className_6749_, lean_object* v_rName_6750_, lean_object* v_a_6751_, lean_object* v_b_6752_, lean_object* v_a_6753_, lean_object* v_a_6754_, lean_object* v_a_6755_, lean_object* v_a_6756_, lean_object* v_a_6757_){
_start:
{
lean_object* v_res_6758_; 
v_res_6758_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel(v_className_6749_, v_rName_6750_, v_a_6751_, v_b_6752_, v_a_6753_, v_a_6754_, v_a_6755_, v_a_6756_);
lean_dec(v_a_6756_);
lean_dec_ref(v_a_6755_);
lean_dec(v_a_6754_);
lean_dec_ref(v_a_6753_);
return v_res_6758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLE(lean_object* v_a_6761_, lean_object* v_b_6762_, lean_object* v_a_6763_, lean_object* v_a_6764_, lean_object* v_a_6765_, lean_object* v_a_6766_){
_start:
{
lean_object* v___x_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; 
v___x_6768_ = ((lean_object*)(l_Lean_Meta_mkLE___closed__0));
v___x_6769_ = ((lean_object*)(l_Lean_Meta_mkLe___closed__2));
v___x_6770_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel(v___x_6768_, v___x_6769_, v_a_6761_, v_b_6762_, v_a_6763_, v_a_6764_, v_a_6765_, v_a_6766_);
return v___x_6770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLE___boxed(lean_object* v_a_6771_, lean_object* v_b_6772_, lean_object* v_a_6773_, lean_object* v_a_6774_, lean_object* v_a_6775_, lean_object* v_a_6776_, lean_object* v_a_6777_){
_start:
{
lean_object* v_res_6778_; 
v_res_6778_ = l_Lean_Meta_mkLE(v_a_6771_, v_b_6772_, v_a_6773_, v_a_6774_, v_a_6775_, v_a_6776_);
lean_dec(v_a_6776_);
lean_dec_ref(v_a_6775_);
lean_dec(v_a_6774_);
lean_dec_ref(v_a_6773_);
return v_res_6778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLT(lean_object* v_a_6781_, lean_object* v_b_6782_, lean_object* v_a_6783_, lean_object* v_a_6784_, lean_object* v_a_6785_, lean_object* v_a_6786_){
_start:
{
lean_object* v___x_6788_; lean_object* v___x_6789_; lean_object* v___x_6790_; 
v___x_6788_ = ((lean_object*)(l_Lean_Meta_mkLT___closed__0));
v___x_6789_ = ((lean_object*)(l_Lean_Meta_mkLt___closed__2));
v___x_6790_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkBinaryRel(v___x_6788_, v___x_6789_, v_a_6781_, v_b_6782_, v_a_6783_, v_a_6784_, v_a_6785_, v_a_6786_);
return v___x_6790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLT___boxed(lean_object* v_a_6791_, lean_object* v_b_6792_, lean_object* v_a_6793_, lean_object* v_a_6794_, lean_object* v_a_6795_, lean_object* v_a_6796_, lean_object* v_a_6797_){
_start:
{
lean_object* v_res_6798_; 
v_res_6798_ = l_Lean_Meta_mkLT(v_a_6791_, v_b_6792_, v_a_6793_, v_a_6794_, v_a_6795_, v_a_6796_);
lean_dec(v_a_6796_);
lean_dec_ref(v_a_6795_);
lean_dec(v_a_6794_);
lean_dec_ref(v_a_6793_);
return v_res_6798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkIffOfEq(lean_object* v_h_6804_, lean_object* v_a_6805_, lean_object* v_a_6806_, lean_object* v_a_6807_, lean_object* v_a_6808_){
_start:
{
lean_object* v___x_6810_; lean_object* v___x_6811_; uint8_t v___x_6812_; 
v___x_6810_ = ((lean_object*)(l_Lean_Meta_mkPropExt___closed__1));
v___x_6811_ = lean_unsigned_to_nat(3u);
v___x_6812_ = l_Lean_Expr_isAppOfArity(v_h_6804_, v___x_6810_, v___x_6811_);
if (v___x_6812_ == 0)
{
lean_object* v___x_6813_; lean_object* v___x_6814_; lean_object* v___x_6815_; lean_object* v___x_6816_; lean_object* v___x_6817_; 
v___x_6813_ = ((lean_object*)(l_Lean_Meta_mkIffOfEq___closed__2));
v___x_6814_ = lean_unsigned_to_nat(1u);
v___x_6815_ = lean_mk_empty_array_with_capacity(v___x_6814_);
v___x_6816_ = lean_array_push(v___x_6815_, v_h_6804_);
v___x_6817_ = l_Lean_Meta_mkAppM(v___x_6813_, v___x_6816_, v_a_6805_, v_a_6806_, v_a_6807_, v_a_6808_);
return v___x_6817_;
}
else
{
lean_object* v___x_6818_; lean_object* v___x_6819_; 
v___x_6818_ = l_Lean_Expr_appArg_x21(v_h_6804_);
lean_dec_ref(v_h_6804_);
v___x_6819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6819_, 0, v___x_6818_);
return v___x_6819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkIffOfEq___boxed(lean_object* v_h_6820_, lean_object* v_a_6821_, lean_object* v_a_6822_, lean_object* v_a_6823_, lean_object* v_a_6824_, lean_object* v_a_6825_){
_start:
{
lean_object* v_res_6826_; 
v_res_6826_ = l_Lean_Meta_mkIffOfEq(v_h_6820_, v_a_6821_, v_a_6822_, v_a_6823_, v_a_6824_);
lean_dec(v_a_6824_);
lean_dec_ref(v_a_6823_);
lean_dec(v_a_6822_);
lean_dec_ref(v_a_6821_);
return v_res_6826_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3(void){
_start:
{
lean_object* v___x_6832_; lean_object* v___x_6833_; lean_object* v___x_6834_; 
v___x_6832_ = lean_box(0);
v___x_6833_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__2));
v___x_6834_ = l_Lean_mkConst(v___x_6833_, v___x_6832_);
return v___x_6834_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5(void){
_start:
{
lean_object* v___x_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; 
v___x_6837_ = lean_box(0);
v___x_6838_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__4));
v___x_6839_ = l_Lean_mkConst(v___x_6838_, v___x_6837_);
return v___x_6839_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6(void){
_start:
{
lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; 
v___x_6840_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__5);
v___x_6841_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__3);
v___x_6842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6842_, 0, v___x_6841_);
lean_ctor_set(v___x_6842_, 1, v___x_6840_);
return v___x_6842_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9(void){
_start:
{
lean_object* v___x_6847_; lean_object* v___x_6848_; lean_object* v___x_6849_; 
v___x_6847_ = lean_box(0);
v___x_6848_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__8));
v___x_6849_ = l_Lean_mkConst(v___x_6848_, v___x_6847_);
return v___x_6849_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11(void){
_start:
{
lean_object* v___x_6852_; lean_object* v___x_6853_; lean_object* v___x_6854_; 
v___x_6852_ = lean_box(0);
v___x_6853_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__10));
v___x_6854_ = l_Lean_mkConst(v___x_6853_, v___x_6852_);
return v___x_6854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go(lean_object* v_a_6855_, lean_object* v_a_6856_, lean_object* v_a_6857_, lean_object* v_a_6858_, lean_object* v_a_6859_){
_start:
{
if (lean_obj_tag(v_a_6855_) == 0)
{
lean_object* v___x_6861_; lean_object* v___x_6862_; 
v___x_6861_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__6);
v___x_6862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6862_, 0, v___x_6861_);
return v___x_6862_;
}
else
{
lean_object* v_tail_6863_; 
v_tail_6863_ = lean_ctor_get(v_a_6855_, 1);
if (lean_obj_tag(v_tail_6863_) == 0)
{
lean_object* v_head_6864_; lean_object* v___x_6866_; uint8_t v_isShared_6867_; uint8_t v_isSharedCheck_6888_; 
v_head_6864_ = lean_ctor_get(v_a_6855_, 0);
v_isSharedCheck_6888_ = !lean_is_exclusive(v_a_6855_);
if (v_isSharedCheck_6888_ == 0)
{
lean_object* v_unused_6889_; 
v_unused_6889_ = lean_ctor_get(v_a_6855_, 1);
lean_dec(v_unused_6889_);
v___x_6866_ = v_a_6855_;
v_isShared_6867_ = v_isSharedCheck_6888_;
goto v_resetjp_6865_;
}
else
{
lean_inc(v_head_6864_);
lean_dec(v_a_6855_);
v___x_6866_ = lean_box(0);
v_isShared_6867_ = v_isSharedCheck_6888_;
goto v_resetjp_6865_;
}
v_resetjp_6865_:
{
lean_object* v___x_6868_; 
lean_inc(v_a_6859_);
lean_inc_ref(v_a_6858_);
lean_inc(v_a_6857_);
lean_inc_ref(v_a_6856_);
lean_inc(v_head_6864_);
v___x_6868_ = lean_infer_type(v_head_6864_, v_a_6856_, v_a_6857_, v_a_6858_, v_a_6859_);
if (lean_obj_tag(v___x_6868_) == 0)
{
lean_object* v_a_6869_; lean_object* v___x_6871_; uint8_t v_isShared_6872_; uint8_t v_isSharedCheck_6879_; 
v_a_6869_ = lean_ctor_get(v___x_6868_, 0);
v_isSharedCheck_6879_ = !lean_is_exclusive(v___x_6868_);
if (v_isSharedCheck_6879_ == 0)
{
v___x_6871_ = v___x_6868_;
v_isShared_6872_ = v_isSharedCheck_6879_;
goto v_resetjp_6870_;
}
else
{
lean_inc(v_a_6869_);
lean_dec(v___x_6868_);
v___x_6871_ = lean_box(0);
v_isShared_6872_ = v_isSharedCheck_6879_;
goto v_resetjp_6870_;
}
v_resetjp_6870_:
{
lean_object* v___x_6874_; 
if (v_isShared_6867_ == 0)
{
lean_ctor_set_tag(v___x_6866_, 0);
lean_ctor_set(v___x_6866_, 1, v_a_6869_);
v___x_6874_ = v___x_6866_;
goto v_reusejp_6873_;
}
else
{
lean_object* v_reuseFailAlloc_6878_; 
v_reuseFailAlloc_6878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6878_, 0, v_head_6864_);
lean_ctor_set(v_reuseFailAlloc_6878_, 1, v_a_6869_);
v___x_6874_ = v_reuseFailAlloc_6878_;
goto v_reusejp_6873_;
}
v_reusejp_6873_:
{
lean_object* v___x_6876_; 
if (v_isShared_6872_ == 0)
{
lean_ctor_set(v___x_6871_, 0, v___x_6874_);
v___x_6876_ = v___x_6871_;
goto v_reusejp_6875_;
}
else
{
lean_object* v_reuseFailAlloc_6877_; 
v_reuseFailAlloc_6877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6877_, 0, v___x_6874_);
v___x_6876_ = v_reuseFailAlloc_6877_;
goto v_reusejp_6875_;
}
v_reusejp_6875_:
{
return v___x_6876_;
}
}
}
}
else
{
lean_object* v_a_6880_; lean_object* v___x_6882_; uint8_t v_isShared_6883_; uint8_t v_isSharedCheck_6887_; 
lean_del_object(v___x_6866_);
lean_dec(v_head_6864_);
v_a_6880_ = lean_ctor_get(v___x_6868_, 0);
v_isSharedCheck_6887_ = !lean_is_exclusive(v___x_6868_);
if (v_isSharedCheck_6887_ == 0)
{
v___x_6882_ = v___x_6868_;
v_isShared_6883_ = v_isSharedCheck_6887_;
goto v_resetjp_6881_;
}
else
{
lean_inc(v_a_6880_);
lean_dec(v___x_6868_);
v___x_6882_ = lean_box(0);
v_isShared_6883_ = v_isSharedCheck_6887_;
goto v_resetjp_6881_;
}
v_resetjp_6881_:
{
lean_object* v___x_6885_; 
if (v_isShared_6883_ == 0)
{
v___x_6885_ = v___x_6882_;
goto v_reusejp_6884_;
}
else
{
lean_object* v_reuseFailAlloc_6886_; 
v_reuseFailAlloc_6886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6886_, 0, v_a_6880_);
v___x_6885_ = v_reuseFailAlloc_6886_;
goto v_reusejp_6884_;
}
v_reusejp_6884_:
{
return v___x_6885_;
}
}
}
}
}
else
{
lean_object* v_head_6890_; lean_object* v___x_6891_; 
lean_inc(v_tail_6863_);
v_head_6890_ = lean_ctor_get(v_a_6855_, 0);
lean_inc(v_head_6890_);
lean_dec_ref_known(v_a_6855_, 2);
v___x_6891_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go(v_tail_6863_, v_a_6856_, v_a_6857_, v_a_6858_, v_a_6859_);
if (lean_obj_tag(v___x_6891_) == 0)
{
lean_object* v_a_6892_; lean_object* v_fst_6893_; lean_object* v_snd_6894_; lean_object* v___x_6896_; uint8_t v_isShared_6897_; uint8_t v_isSharedCheck_6922_; 
v_a_6892_ = lean_ctor_get(v___x_6891_, 0);
lean_inc(v_a_6892_);
lean_dec_ref_known(v___x_6891_, 1);
v_fst_6893_ = lean_ctor_get(v_a_6892_, 0);
v_snd_6894_ = lean_ctor_get(v_a_6892_, 1);
v_isSharedCheck_6922_ = !lean_is_exclusive(v_a_6892_);
if (v_isSharedCheck_6922_ == 0)
{
v___x_6896_ = v_a_6892_;
v_isShared_6897_ = v_isSharedCheck_6922_;
goto v_resetjp_6895_;
}
else
{
lean_inc(v_snd_6894_);
lean_inc(v_fst_6893_);
lean_dec(v_a_6892_);
v___x_6896_ = lean_box(0);
v_isShared_6897_ = v_isSharedCheck_6922_;
goto v_resetjp_6895_;
}
v_resetjp_6895_:
{
lean_object* v___x_6898_; 
lean_inc(v_a_6859_);
lean_inc_ref(v_a_6858_);
lean_inc(v_a_6857_);
lean_inc_ref(v_a_6856_);
lean_inc(v_head_6890_);
v___x_6898_ = lean_infer_type(v_head_6890_, v_a_6856_, v_a_6857_, v_a_6858_, v_a_6859_);
if (lean_obj_tag(v___x_6898_) == 0)
{
lean_object* v_a_6899_; lean_object* v___x_6901_; uint8_t v_isShared_6902_; uint8_t v_isSharedCheck_6913_; 
v_a_6899_ = lean_ctor_get(v___x_6898_, 0);
v_isSharedCheck_6913_ = !lean_is_exclusive(v___x_6898_);
if (v_isSharedCheck_6913_ == 0)
{
v___x_6901_ = v___x_6898_;
v_isShared_6902_ = v_isSharedCheck_6913_;
goto v_resetjp_6900_;
}
else
{
lean_inc(v_a_6899_);
lean_dec(v___x_6898_);
v___x_6901_ = lean_box(0);
v_isShared_6902_ = v_isSharedCheck_6913_;
goto v_resetjp_6900_;
}
v_resetjp_6900_:
{
lean_object* v___x_6903_; lean_object* v___x_6904_; lean_object* v___x_6905_; lean_object* v___x_6906_; lean_object* v___x_6908_; 
v___x_6903_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__9);
lean_inc(v_snd_6894_);
lean_inc(v_a_6899_);
v___x_6904_ = l_Lean_mkApp4(v___x_6903_, v_a_6899_, v_snd_6894_, v_head_6890_, v_fst_6893_);
v___x_6905_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11_once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___closed__11);
v___x_6906_ = l_Lean_mkAppB(v___x_6905_, v_a_6899_, v_snd_6894_);
if (v_isShared_6897_ == 0)
{
lean_ctor_set(v___x_6896_, 1, v___x_6906_);
lean_ctor_set(v___x_6896_, 0, v___x_6904_);
v___x_6908_ = v___x_6896_;
goto v_reusejp_6907_;
}
else
{
lean_object* v_reuseFailAlloc_6912_; 
v_reuseFailAlloc_6912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6912_, 0, v___x_6904_);
lean_ctor_set(v_reuseFailAlloc_6912_, 1, v___x_6906_);
v___x_6908_ = v_reuseFailAlloc_6912_;
goto v_reusejp_6907_;
}
v_reusejp_6907_:
{
lean_object* v___x_6910_; 
if (v_isShared_6902_ == 0)
{
lean_ctor_set(v___x_6901_, 0, v___x_6908_);
v___x_6910_ = v___x_6901_;
goto v_reusejp_6909_;
}
else
{
lean_object* v_reuseFailAlloc_6911_; 
v_reuseFailAlloc_6911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6911_, 0, v___x_6908_);
v___x_6910_ = v_reuseFailAlloc_6911_;
goto v_reusejp_6909_;
}
v_reusejp_6909_:
{
return v___x_6910_;
}
}
}
}
else
{
lean_object* v_a_6914_; lean_object* v___x_6916_; uint8_t v_isShared_6917_; uint8_t v_isSharedCheck_6921_; 
lean_del_object(v___x_6896_);
lean_dec(v_snd_6894_);
lean_dec(v_fst_6893_);
lean_dec(v_head_6890_);
v_a_6914_ = lean_ctor_get(v___x_6898_, 0);
v_isSharedCheck_6921_ = !lean_is_exclusive(v___x_6898_);
if (v_isSharedCheck_6921_ == 0)
{
v___x_6916_ = v___x_6898_;
v_isShared_6917_ = v_isSharedCheck_6921_;
goto v_resetjp_6915_;
}
else
{
lean_inc(v_a_6914_);
lean_dec(v___x_6898_);
v___x_6916_ = lean_box(0);
v_isShared_6917_ = v_isSharedCheck_6921_;
goto v_resetjp_6915_;
}
v_resetjp_6915_:
{
lean_object* v___x_6919_; 
if (v_isShared_6917_ == 0)
{
v___x_6919_ = v___x_6916_;
goto v_reusejp_6918_;
}
else
{
lean_object* v_reuseFailAlloc_6920_; 
v_reuseFailAlloc_6920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6920_, 0, v_a_6914_);
v___x_6919_ = v_reuseFailAlloc_6920_;
goto v_reusejp_6918_;
}
v_reusejp_6918_:
{
return v___x_6919_;
}
}
}
}
}
else
{
lean_dec(v_head_6890_);
return v___x_6891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go___boxed(lean_object* v_a_6923_, lean_object* v_a_6924_, lean_object* v_a_6925_, lean_object* v_a_6926_, lean_object* v_a_6927_, lean_object* v_a_6928_){
_start:
{
lean_object* v_res_6929_; 
v_res_6929_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go(v_a_6923_, v_a_6924_, v_a_6925_, v_a_6926_, v_a_6927_);
lean_dec(v_a_6927_);
lean_dec_ref(v_a_6926_);
lean_dec(v_a_6925_);
lean_dec_ref(v_a_6924_);
return v_res_6929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAndIntroN(lean_object* v_hs_6930_, lean_object* v_a_6931_, lean_object* v_a_6932_, lean_object* v_a_6933_, lean_object* v_a_6934_){
_start:
{
lean_object* v___x_6936_; 
v___x_6936_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkAndIntroN_go(v_hs_6930_, v_a_6931_, v_a_6932_, v_a_6933_, v_a_6934_);
if (lean_obj_tag(v___x_6936_) == 0)
{
lean_object* v_a_6937_; lean_object* v___x_6939_; uint8_t v_isShared_6940_; uint8_t v_isSharedCheck_6945_; 
v_a_6937_ = lean_ctor_get(v___x_6936_, 0);
v_isSharedCheck_6945_ = !lean_is_exclusive(v___x_6936_);
if (v_isSharedCheck_6945_ == 0)
{
v___x_6939_ = v___x_6936_;
v_isShared_6940_ = v_isSharedCheck_6945_;
goto v_resetjp_6938_;
}
else
{
lean_inc(v_a_6937_);
lean_dec(v___x_6936_);
v___x_6939_ = lean_box(0);
v_isShared_6940_ = v_isSharedCheck_6945_;
goto v_resetjp_6938_;
}
v_resetjp_6938_:
{
lean_object* v_fst_6941_; lean_object* v___x_6943_; 
v_fst_6941_ = lean_ctor_get(v_a_6937_, 0);
lean_inc(v_fst_6941_);
lean_dec(v_a_6937_);
if (v_isShared_6940_ == 0)
{
lean_ctor_set(v___x_6939_, 0, v_fst_6941_);
v___x_6943_ = v___x_6939_;
goto v_reusejp_6942_;
}
else
{
lean_object* v_reuseFailAlloc_6944_; 
v_reuseFailAlloc_6944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6944_, 0, v_fst_6941_);
v___x_6943_ = v_reuseFailAlloc_6944_;
goto v_reusejp_6942_;
}
v_reusejp_6942_:
{
return v___x_6943_;
}
}
}
else
{
lean_object* v_a_6946_; lean_object* v___x_6948_; uint8_t v_isShared_6949_; uint8_t v_isSharedCheck_6953_; 
v_a_6946_ = lean_ctor_get(v___x_6936_, 0);
v_isSharedCheck_6953_ = !lean_is_exclusive(v___x_6936_);
if (v_isSharedCheck_6953_ == 0)
{
v___x_6948_ = v___x_6936_;
v_isShared_6949_ = v_isSharedCheck_6953_;
goto v_resetjp_6947_;
}
else
{
lean_inc(v_a_6946_);
lean_dec(v___x_6936_);
v___x_6948_ = lean_box(0);
v_isShared_6949_ = v_isSharedCheck_6953_;
goto v_resetjp_6947_;
}
v_resetjp_6947_:
{
lean_object* v___x_6951_; 
if (v_isShared_6949_ == 0)
{
v___x_6951_ = v___x_6948_;
goto v_reusejp_6950_;
}
else
{
lean_object* v_reuseFailAlloc_6952_; 
v_reuseFailAlloc_6952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6952_, 0, v_a_6946_);
v___x_6951_ = v_reuseFailAlloc_6952_;
goto v_reusejp_6950_;
}
v_reusejp_6950_:
{
return v___x_6951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAndIntroN___boxed(lean_object* v_hs_6954_, lean_object* v_a_6955_, lean_object* v_a_6956_, lean_object* v_a_6957_, lean_object* v_a_6958_, lean_object* v_a_6959_){
_start:
{
lean_object* v_res_6960_; 
v_res_6960_ = l_Lean_Meta_mkAndIntroN(v_hs_6954_, v_a_6955_, v_a_6956_, v_a_6957_, v_a_6958_);
lean_dec(v_a_6958_);
lean_dec_ref(v_a_6957_);
lean_dec(v_a_6956_);
lean_dec_ref(v_a_6955_);
return v_res_6960_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6961_; lean_object* v___x_6962_; 
v___x_6961_ = lean_box(0);
v___x_6962_ = l_unsafeCast___redArg(v___x_6961_);
return v___x_6962_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6964_; lean_object* v___x_6965_; lean_object* v___x_6966_; 
v___x_6964_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6965_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6966_ = l_Lean_Name_str___override(v___x_6965_, v___x_6964_);
return v___x_6966_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6968_; lean_object* v___x_6969_; lean_object* v___x_6970_; 
v___x_6968_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6969_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6970_ = l_Lean_Name_str___override(v___x_6969_, v___x_6968_);
return v___x_6970_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6971_; lean_object* v___x_6972_; lean_object* v___x_6973_; 
v___x_6971_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19));
v___x_6972_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6973_ = l_Lean_Name_str___override(v___x_6972_, v___x_6971_);
return v___x_6973_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6975_; lean_object* v___x_6976_; lean_object* v___x_6977_; 
v___x_6975_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6976_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6977_ = l_Lean_Name_str___override(v___x_6976_, v___x_6975_);
return v___x_6977_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6978_; lean_object* v___x_6979_; lean_object* v___x_6980_; 
v___x_6978_ = lean_unsigned_to_nat(0u);
v___x_6979_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6980_ = l_Lean_Name_num___override(v___x_6979_, v___x_6978_);
return v___x_6980_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6981_; lean_object* v___x_6982_; lean_object* v___x_6983_; 
v___x_6981_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6982_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6983_ = l_Lean_Name_str___override(v___x_6982_, v___x_6981_);
return v___x_6983_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6984_; lean_object* v___x_6985_; lean_object* v___x_6986_; 
v___x_6984_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19));
v___x_6985_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6986_ = l_Lean_Name_str___override(v___x_6985_, v___x_6984_);
return v___x_6986_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6988_; lean_object* v___x_6989_; lean_object* v___x_6990_; 
v___x_6988_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6989_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6990_ = l_Lean_Name_str___override(v___x_6989_, v___x_6988_);
return v___x_6990_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6992_; lean_object* v___x_6993_; lean_object* v___x_6994_; 
v___x_6992_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6993_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6994_ = l_Lean_Name_str___override(v___x_6993_, v___x_6992_);
return v___x_6994_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6995_; lean_object* v___x_6996_; lean_object* v___x_6997_; 
v___x_6995_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_6996_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_6997_ = l_Lean_Name_str___override(v___x_6996_, v___x_6995_);
return v___x_6997_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6998_; lean_object* v___x_6999_; lean_object* v___x_7000_; 
v___x_6998_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__19));
v___x_6999_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7000_ = l_Lean_Name_str___override(v___x_6999_, v___x_6998_);
return v___x_7000_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7001_; lean_object* v___x_7002_; lean_object* v___x_7003_; 
v___x_7001_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_7002_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7003_ = l_Lean_Name_str___override(v___x_7002_, v___x_7001_);
return v___x_7003_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7004_; lean_object* v___x_7005_; lean_object* v___x_7006_; 
v___x_7004_ = lean_unsigned_to_nat(902289040u);
v___x_7005_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7006_ = l_Lean_Name_num___override(v___x_7005_, v___x_7004_);
return v___x_7006_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7008_; lean_object* v___x_7009_; lean_object* v___x_7010_; 
v___x_7008_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_7009_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7010_ = l_Lean_Name_str___override(v___x_7009_, v___x_7008_);
return v___x_7010_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7012_; lean_object* v___x_7013_; lean_object* v___x_7014_; 
v___x_7012_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_));
v___x_7013_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7014_ = l_Lean_Name_str___override(v___x_7013_, v___x_7012_);
return v___x_7014_;
}
}
static lean_object* _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7015_; lean_object* v___x_7016_; lean_object* v___x_7017_; 
v___x_7015_ = lean_unsigned_to_nat(2u);
v___x_7016_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7017_ = l_Lean_Name_num___override(v___x_7016_, v___x_7015_);
return v___x_7017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_7019_; uint8_t v___x_7020_; lean_object* v___x_7021_; lean_object* v___x_7022_; 
v___x_7019_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__27));
v___x_7020_ = 0;
v___x_7021_ = lean_obj_once(&l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_, &l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_);
v___x_7022_ = l_Lean_registerTraceClass(v___x_7019_, v___x_7020_, v___x_7021_);
if (lean_obj_tag(v___x_7022_) == 0)
{
lean_object* v___x_7023_; uint8_t v___x_7024_; lean_object* v___x_7025_; 
lean_dec_ref_known(v___x_7022_, 1);
v___x_7023_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__32));
v___x_7024_ = 1;
v___x_7025_ = l_Lean_registerTraceClass(v___x_7023_, v___x_7024_, v___x_7021_);
if (lean_obj_tag(v___x_7025_) == 0)
{
lean_object* v___x_7026_; lean_object* v___x_7027_; 
lean_dec_ref_known(v___x_7025_, 1);
v___x_7026_ = ((lean_object*)(l___private_Lean_Meta_AppBuilder_0__Lean_Meta_withAppBuilderTrace___redArg___closed__22));
v___x_7027_ = l_Lean_registerTraceClass(v___x_7026_, v___x_7024_, v___x_7021_);
return v___x_7027_;
}
else
{
return v___x_7025_;
}
}
else
{
return v___x_7022_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2____boxed(lean_object* v_a_7028_){
_start:
{
lean_object* v_res_7029_; 
v_res_7029_ = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_();
return v_res_7029_;
}
}
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_initFn_00___x40_Lean_Meta_AppBuilder_902289040____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_AppBuilder(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_AppBuilder(builtin);
}
#ifdef __cplusplus
}
#endif

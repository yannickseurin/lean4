// Lean compiler output
// Module: Lean.Meta.Constructions.BRecOn
// Imports: public import Lean.Meta.Basic import Lean.Meta.PProdN import Lean.Meta.Tactic.Cases import Lean.Meta.Tactic.Refl
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdMk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecName(lean_object*);
lean_object* l_Lean_mkBelowName(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_mkBRecOnName(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdFstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdSndM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Constructions.BRecOn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Constructions.BRecOn.0.Lean.mkBelowFromRec"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "assertion violation: refArgs.size > nParams + recVal.numMotives + recVal.numMinors\n    "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "type of type of major premise "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " not a type former"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursor "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " has no levelParams"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " not a .recInfo"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_mkBelow_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_mkBelow_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkBelow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_mkBelow___closed__0 = (const lean_object*)&l_Lean_mkBelow___closed__0_value;
static const lean_string_object l_Lean_mkBelow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkBelow"};
static const lean_object* l_Lean_mkBelow___closed__1 = (const lean_object*)&l_Lean_mkBelow___closed__1_value;
static const lean_ctor_object l_Lean_mkBelow___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_mkBelow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkBelow___closed__2_value_aux_0),((lean_object*)&l_Lean_mkBelow___closed__1_value),LEAN_SCALAR_PTR_LITERAL(219, 145, 247, 215, 113, 151, 53, 217)}};
static const lean_object* l_Lean_mkBelow___closed__2 = (const lean_object*)&l_Lean_mkBelow___closed__2_value;
static const lean_string_object l_Lean_mkBelow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_mkBelow___closed__3 = (const lean_object*)&l_Lean_mkBelow___closed__3_value;
static const lean_string_object l_Lean_mkBelow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_mkBelow___closed__4 = (const lean_object*)&l_Lean_mkBelow___closed__4_value;
static const lean_ctor_object l_Lean_mkBelow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_mkBelow___closed__5 = (const lean_object*)&l_Lean_mkBelow___closed__5_value;
static lean_once_cell_t l_Lean_mkBelow___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkBelow___closed__6;
static lean_once_cell_t l_Lean_mkBelow___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_mkBelow___closed__7;
LEAN_EXPORT lean_object* l_Lean_mkBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Did not find "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "below_"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "F_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Constructions.BRecOn.0.Lean.mkBRecOnFromRec"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1;
static const lean_array_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "result type of "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " is not one of "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "go"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkBRecOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mkBRecOn"};
static const lean_object* l_Lean_mkBRecOn___closed__0 = (const lean_object*)&l_Lean_mkBRecOn___closed__0_value;
static const lean_ctor_object l_Lean_mkBRecOn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_mkBRecOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkBRecOn___closed__1_value_aux_0),((lean_object*)&l_Lean_mkBRecOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 5, 240, 19, 65, 164, 203, 201)}};
static const lean_object* l_Lean_mkBRecOn___closed__1 = (const lean_object*)&l_Lean_mkBRecOn___closed__1_value;
static lean_once_cell_t l_Lean_mkBRecOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkBRecOn___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBRecOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Constructions"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BRecOn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed), 8, 1);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(lean_object* v_rlvl_78_, uint8_t v___x_79_, lean_object* v_args_80_, lean_object* v_x_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; 
v___x_87_ = l_Lean_Expr_sort___override(v_rlvl_78_);
v___x_88_ = 0;
v___x_89_ = 1;
v___x_90_ = l_Lean_Meta_mkForallFVars(v_args_80_, v___x_87_, v___x_88_, v___x_79_, v___x_79_, v___x_89_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed(lean_object* v_rlvl_91_, lean_object* v___x_92_, lean_object* v_args_93_, lean_object* v_x_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v___x_1934__boxed_100_; lean_object* v_res_101_; 
v___x_1934__boxed_100_ = lean_unbox(v___x_92_);
v_res_101_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(v_rlvl_91_, v___x_1934__boxed_100_, v_args_93_, v_x_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec_ref(v_x_94_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(lean_object* v_k_102_, lean_object* v_b_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v___x_109_; 
lean_inc(v___y_107_);
lean_inc_ref(v___y_106_);
lean_inc(v___y_105_);
lean_inc_ref(v___y_104_);
v___x_109_ = lean_apply_6(v_k_102_, v_b_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, lean_box(0));
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_110_, lean_object* v_b_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(v_k_110_, v_b_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(lean_object* v_name_118_, uint8_t v_bi_119_, lean_object* v_type_120_, lean_object* v_k_121_, uint8_t v_kind_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v___f_128_; lean_object* v___x_129_; 
v___f_128_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_128_, 0, v_k_121_);
v___x_129_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_118_, v_bi_119_, v_type_120_, v___f_128_, v_kind_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_129_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_129_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
v_a_138_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_129_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_129_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___boxed(lean_object* v_name_146_, lean_object* v_bi_147_, lean_object* v_type_148_, lean_object* v_k_149_, lean_object* v_kind_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
uint8_t v_bi_boxed_156_; uint8_t v_kind_boxed_157_; lean_object* v_res_158_; 
v_bi_boxed_156_ = lean_unbox(v_bi_147_);
v_kind_boxed_157_ = lean_unbox(v_kind_150_);
v_res_158_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_146_, v_bi_boxed_156_, v_type_148_, v_k_149_, v_kind_boxed_157_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(lean_object* v_name_159_, lean_object* v_type_160_, lean_object* v_k_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
uint8_t v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; 
v___x_167_ = 0;
v___x_168_ = 0;
v___x_169_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_159_, v___x_167_, v_type_160_, v_k_161_, v___x_168_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg___boxed(lean_object* v_name_170_, lean_object* v_type_171_, lean_object* v_k_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_name_170_, v_type_171_, v_k_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_178_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(lean_object* v_a_179_, lean_object* v_as_180_, size_t v_i_181_, size_t v_stop_182_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_eq(v_i_181_, v_stop_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_array_uget_borrowed(v_as_180_, v_i_181_);
v___x_185_ = lean_expr_eqv(v_a_179_, v___x_184_);
if (v___x_185_ == 0)
{
size_t v___x_186_; size_t v___x_187_; 
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_add(v_i_181_, v___x_186_);
v_i_181_ = v___x_187_;
goto _start;
}
else
{
return v___x_185_;
}
}
else
{
uint8_t v___x_189_; 
v___x_189_ = 0;
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0___boxed(lean_object* v_a_190_, lean_object* v_as_191_, lean_object* v_i_192_, lean_object* v_stop_193_){
_start:
{
size_t v_i_boxed_194_; size_t v_stop_boxed_195_; uint8_t v_res_196_; lean_object* v_r_197_; 
v_i_boxed_194_ = lean_unbox_usize(v_i_192_);
lean_dec(v_i_192_);
v_stop_boxed_195_ = lean_unbox_usize(v_stop_193_);
lean_dec(v_stop_193_);
v_res_196_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(v_a_190_, v_as_191_, v_i_boxed_194_, v_stop_boxed_195_);
lean_dec_ref(v_as_191_);
lean_dec_ref(v_a_190_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(lean_object* v_as_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_array_get_size(v_as_198_);
v___x_202_ = lean_nat_dec_lt(v___x_200_, v___x_201_);
if (v___x_202_ == 0)
{
return v___x_202_;
}
else
{
if (v___x_202_ == 0)
{
return v___x_202_;
}
else
{
size_t v___x_203_; size_t v___x_204_; uint8_t v___x_205_; 
v___x_203_ = ((size_t)0ULL);
v___x_204_ = lean_usize_of_nat(v___x_201_);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(v_a_199_, v_as_198_, v___x_203_, v___x_204_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0___boxed(lean_object* v_as_206_, lean_object* v_a_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(v_as_206_, v_a_207_);
lean_dec_ref(v_a_207_);
lean_dec_ref(v_as_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(lean_object* v_arg__args_210_, lean_object* v_arg__type_211_, uint8_t v___x_212_, uint8_t v___x_213_, lean_object* v_prods_214_, lean_object* v_rlvl_215_, lean_object* v_motives_216_, lean_object* v_tail_217_, lean_object* v_arg_x27_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_inc_ref(v_arg_x27_218_);
v___x_224_ = l_Lean_mkAppN(v_arg_x27_218_, v_arg__args_210_);
v___x_225_ = l_Lean_Meta_mkPProd(v_arg__type_211_, v___x_224_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; uint8_t v___x_227_; lean_object* v___x_228_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref_known(v___x_225_, 1);
v___x_227_ = 1;
v___x_228_ = l_Lean_Meta_mkForallFVars(v_arg__args_210_, v_a_226_, v___x_212_, v___x_213_, v___x_213_, v___x_227_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = lean_array_push(v_prods_214_, v_a_229_);
v___x_231_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_215_, v_motives_216_, v___x_230_, v_tail_217_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_mk_empty_array_with_capacity(v___x_233_);
v___x_235_ = lean_array_push(v___x_234_, v_arg_x27_218_);
v___x_236_ = l_Lean_Meta_mkLambdaFVars(v___x_235_, v_a_232_, v___x_212_, v___x_213_, v___x_212_, v___x_213_, v___x_227_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
return v___x_236_;
}
else
{
lean_dec_ref(v_arg_x27_218_);
return v___x_231_;
}
}
else
{
lean_dec_ref(v_arg_x27_218_);
lean_dec(v_tail_217_);
lean_dec_ref(v_motives_216_);
lean_dec(v_rlvl_215_);
lean_dec_ref(v_prods_214_);
return v___x_228_;
}
}
else
{
lean_dec_ref(v_arg_x27_218_);
lean_dec(v_tail_217_);
lean_dec_ref(v_motives_216_);
lean_dec(v_rlvl_215_);
lean_dec_ref(v_prods_214_);
lean_dec_ref(v_arg__args_210_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed(lean_object* v_arg__args_237_, lean_object* v_arg__type_238_, lean_object* v___x_239_, lean_object* v___x_240_, lean_object* v_prods_241_, lean_object* v_rlvl_242_, lean_object* v_motives_243_, lean_object* v_tail_244_, lean_object* v_arg_x27_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_2089__boxed_251_; uint8_t v___x_2090__boxed_252_; lean_object* v_res_253_; 
v___x_2089__boxed_251_ = lean_unbox(v___x_239_);
v___x_2090__boxed_252_ = lean_unbox(v___x_240_);
v_res_253_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(v_arg__args_237_, v_arg__type_238_, v___x_2089__boxed_251_, v___x_2090__boxed_252_, v_prods_241_, v_rlvl_242_, v_motives_243_, v_tail_244_, v_arg_x27_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(lean_object* v_motives_254_, lean_object* v_rlvl_255_, lean_object* v_prods_256_, lean_object* v_tail_257_, lean_object* v_head_258_, lean_object* v_a_259_, lean_object* v_arg__args_260_, lean_object* v_arg__type_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; uint8_t v___x_268_; uint8_t v___x_269_; 
v___x_267_ = l_Lean_Expr_getAppFn(v_arg__type_261_);
v___x_268_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(v_motives_254_, v___x_267_);
lean_dec_ref(v___x_267_);
v___x_269_ = 1;
if (v___x_268_ == 0)
{
lean_object* v___x_270_; 
lean_dec_ref(v_arg__type_261_);
lean_dec_ref(v_arg__args_260_);
lean_dec_ref(v_a_259_);
v___x_270_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_255_, v_motives_254_, v_prods_256_, v_tail_257_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_mk_empty_array_with_capacity(v___x_272_);
v___x_274_ = lean_array_push(v___x_273_, v_head_258_);
v___x_275_ = 1;
v___x_276_ = l_Lean_Meta_mkLambdaFVars(v___x_274_, v_a_271_, v___x_268_, v___x_269_, v___x_268_, v___x_269_, v___x_275_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_276_;
}
else
{
lean_dec_ref(v_head_258_);
return v___x_270_;
}
}
else
{
lean_object* v___x_277_; lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_277_ = lean_box(v___x_269_);
lean_inc(v_rlvl_255_);
v___f_278_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed), 9, 2);
lean_closure_set(v___f_278_, 0, v_rlvl_255_);
lean_closure_set(v___f_278_, 1, v___x_277_);
v___x_279_ = l_Lean_Expr_fvarId_x21(v_head_258_);
lean_dec_ref(v_head_258_);
v___x_280_ = l_Lean_FVarId_getUserName___redArg(v___x_279_, v___y_262_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___f_285_; lean_object* v___x_286_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = 0;
v___x_283_ = lean_box(v___x_282_);
v___x_284_ = lean_box(v___x_269_);
v___f_285_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed), 14, 8);
lean_closure_set(v___f_285_, 0, v_arg__args_260_);
lean_closure_set(v___f_285_, 1, v_arg__type_261_);
lean_closure_set(v___f_285_, 2, v___x_283_);
lean_closure_set(v___f_285_, 3, v___x_284_);
lean_closure_set(v___f_285_, 4, v_prods_256_);
lean_closure_set(v___f_285_, 5, v_rlvl_255_);
lean_closure_set(v___f_285_, 6, v_motives_254_);
lean_closure_set(v___f_285_, 7, v_tail_257_);
v___x_286_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_259_, v___f_278_, v___x_282_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_a_281_, v_a_287_, v___f_285_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_288_;
}
else
{
lean_dec_ref(v___f_285_);
lean_dec(v_a_281_);
return v___x_286_;
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v___f_278_);
lean_dec_ref(v_arg__type_261_);
lean_dec_ref(v_arg__args_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_tail_257_);
lean_dec_ref(v_prods_256_);
lean_dec(v_rlvl_255_);
lean_dec_ref(v_motives_254_);
v_a_289_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_280_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_280_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed(lean_object* v_motives_297_, lean_object* v_rlvl_298_, lean_object* v_prods_299_, lean_object* v_tail_300_, lean_object* v_head_301_, lean_object* v_a_302_, lean_object* v_arg__args_303_, lean_object* v_arg__type_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(v_motives_297_, v_rlvl_298_, v_prods_299_, v_tail_300_, v_head_301_, v_a_302_, v_arg__args_303_, v_arg__type_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(lean_object* v_rlvl_311_, lean_object* v_motives_312_, lean_object* v_prods_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
if (lean_obj_tag(v_a_314_) == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_motives_312_);
v___x_320_ = l_Lean_Meta_PProdN_pack(v_rlvl_311_, v_prods_313_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
return v___x_320_;
}
else
{
lean_object* v_head_321_; lean_object* v_tail_322_; lean_object* v___x_323_; 
v_head_321_ = lean_ctor_get(v_a_314_, 0);
lean_inc_n(v_head_321_, 2);
v_tail_322_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_tail_322_);
lean_dec_ref_known(v_a_314_, 2);
lean_inc(v_a_318_);
lean_inc_ref(v_a_317_);
lean_inc(v_a_316_);
lean_inc_ref(v_a_315_);
v___x_323_ = lean_infer_type(v_head_321_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___f_325_; uint8_t v___x_326_; lean_object* v___x_327_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc_n(v_a_324_, 2);
lean_dec_ref_known(v___x_323_, 1);
v___f_325_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed), 13, 6);
lean_closure_set(v___f_325_, 0, v_motives_312_);
lean_closure_set(v___f_325_, 1, v_rlvl_311_);
lean_closure_set(v___f_325_, 2, v_prods_313_);
lean_closure_set(v___f_325_, 3, v_tail_322_);
lean_closure_set(v___f_325_, 4, v_head_321_);
lean_closure_set(v___f_325_, 5, v_a_324_);
v___x_326_ = 0;
v___x_327_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_324_, v___f_325_, v___x_326_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
return v___x_327_;
}
else
{
lean_dec(v_tail_322_);
lean_dec(v_head_321_);
lean_dec_ref(v_prods_313_);
lean_dec_ref(v_motives_312_);
lean_dec(v_rlvl_311_);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___boxed(lean_object* v_rlvl_328_, lean_object* v_motives_329_, lean_object* v_prods_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_328_, v_motives_329_, v_prods_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(lean_object* v_00_u03b1_338_, lean_object* v_name_339_, uint8_t v_bi_340_, lean_object* v_type_341_, lean_object* v_k_342_, uint8_t v_kind_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_339_, v_bi_340_, v_type_341_, v_k_342_, v_kind_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___boxed(lean_object* v_00_u03b1_350_, lean_object* v_name_351_, lean_object* v_bi_352_, lean_object* v_type_353_, lean_object* v_k_354_, lean_object* v_kind_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
uint8_t v_bi_boxed_361_; uint8_t v_kind_boxed_362_; lean_object* v_res_363_; 
v_bi_boxed_361_ = lean_unbox(v_bi_352_);
v_kind_boxed_362_ = lean_unbox(v_kind_355_);
v_res_363_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(v_00_u03b1_350_, v_name_351_, v_bi_boxed_361_, v_type_353_, v_k_354_, v_kind_boxed_362_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(lean_object* v_00_u03b1_364_, lean_object* v_name_365_, lean_object* v_type_366_, lean_object* v_k_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_name_365_, v_type_366_, v_k_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___boxed(lean_object* v_00_u03b1_374_, lean_object* v_name_375_, lean_object* v_type_376_, lean_object* v_k_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(v_00_u03b1_374_, v_name_375_, v_type_376_, v_k_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(lean_object* v_rlvl_386_, lean_object* v_motives_387_, lean_object* v_minor__args_388_, lean_object* v_x_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_396_ = lean_array_to_list(v_minor__args_388_);
v___x_397_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_386_, v_motives_387_, v___x_395_, v___x_396_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed(lean_object* v_rlvl_398_, lean_object* v_motives_399_, lean_object* v_minor__args_400_, lean_object* v_x_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(v_rlvl_398_, v_motives_399_, v_minor__args_400_, v_x_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v_x_401_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(lean_object* v_rlvl_408_, lean_object* v_motives_409_, lean_object* v_minorType_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___f_416_; uint8_t v___x_417_; lean_object* v___x_418_; 
v___f_416_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed), 9, 2);
lean_closure_set(v___f_416_, 0, v_rlvl_408_);
lean_closure_set(v___f_416_, 1, v_motives_409_);
v___x_417_ = 0;
v___x_418_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_minorType_410_, v___f_416_, v___x_417_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___boxed(lean_object* v_rlvl_419_, lean_object* v_motives_420_, lean_object* v_minorType_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(v_rlvl_419_, v_motives_420_, v_minorType_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(lean_object* v_msg_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___f_435_; lean_object* v___x_4894__overap_436_; lean_object* v___x_437_; 
v___f_435_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0));
v___x_4894__overap_436_ = lean_panic_fn_borrowed(v___f_435_, v_msg_429_);
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___x_437_ = lean_apply_5(v___x_4894__overap_436_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, lean_box(0));
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___boxed(lean_object* v_msg_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(v_msg_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(lean_object* v_name_445_, lean_object* v_levelParams_446_, lean_object* v_type_447_, lean_object* v_value_448_, lean_object* v_hints_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; uint8_t v___y_454_; uint8_t v___y_461_; lean_object* v_env_464_; uint8_t v___x_465_; 
v___x_452_ = lean_st_ref_get(v___y_450_);
v_env_464_ = lean_ctor_get(v___x_452_, 0);
lean_inc_ref_n(v_env_464_, 2);
lean_dec(v___x_452_);
v___x_465_ = l_Lean_Environment_hasUnsafe(v_env_464_, v_type_447_);
if (v___x_465_ == 0)
{
uint8_t v___x_466_; 
v___x_466_ = l_Lean_Environment_hasUnsafe(v_env_464_, v_value_448_);
v___y_461_ = v___x_466_;
goto v___jp_460_;
}
else
{
lean_dec_ref(v_env_464_);
v___y_461_ = v___x_465_;
goto v___jp_460_;
}
v___jp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
lean_inc(v_name_445_);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v_name_445_);
lean_ctor_set(v___x_455_, 1, v_levelParams_446_);
lean_ctor_set(v___x_455_, 2, v_type_447_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v_name_445_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_458_, 0, v___x_455_);
lean_ctor_set(v___x_458_, 1, v_value_448_);
lean_ctor_set(v___x_458_, 2, v_hints_449_);
lean_ctor_set(v___x_458_, 3, v___x_457_);
lean_ctor_set_uint8(v___x_458_, sizeof(void*)*4, v___y_454_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
v___jp_460_:
{
if (v___y_461_ == 0)
{
uint8_t v___x_462_; 
v___x_462_ = 1;
v___y_454_ = v___x_462_;
goto v___jp_453_;
}
else
{
uint8_t v___x_463_; 
v___x_463_ = 0;
v___y_454_ = v___x_463_;
goto v___jp_453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg___boxed(lean_object* v_name_467_, lean_object* v_levelParams_468_, lean_object* v_type_469_, lean_object* v_value_470_, lean_object* v_hints_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_name_467_, v_levelParams_468_, v_type_469_, v_value_470_, v_hints_471_, v___y_472_);
lean_dec(v___y_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(lean_object* v_name_475_, lean_object* v_levelParams_476_, lean_object* v_type_477_, lean_object* v_value_478_, lean_object* v_hints_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_name_475_, v_levelParams_476_, v_type_477_, v_value_478_, v_hints_479_, v___y_483_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___boxed(lean_object* v_name_486_, lean_object* v_levelParams_487_, lean_object* v_type_488_, lean_object* v_value_489_, lean_object* v_hints_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(v_name_486_, v_levelParams_487_, v_type_488_, v_value_489_, v_hints_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(lean_object* v___x_497_, lean_object* v___x_498_, lean_object* v_as_499_, size_t v_sz_500_, size_t v_i_501_, lean_object* v_b_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_lt(v_i_501_, v_sz_500_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
lean_dec_ref(v___x_498_);
lean_dec(v___x_497_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v_b_502_);
return v___x_509_;
}
else
{
lean_object* v_a_510_; lean_object* v___x_511_; 
v_a_510_ = lean_array_uget_borrowed(v_as_499_, v_i_501_);
lean_inc(v___y_506_);
lean_inc_ref(v___y_505_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v_a_510_);
v___x_511_ = lean_infer_type(v_a_510_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
lean_inc_ref(v___x_498_);
lean_inc(v___x_497_);
v___x_513_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(v___x_497_, v___x_498_, v_a_512_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; size_t v___x_516_; size_t v___x_517_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
v___x_515_ = l_Lean_Expr_app___override(v_b_502_, v_a_514_);
v___x_516_ = ((size_t)1ULL);
v___x_517_ = lean_usize_add(v_i_501_, v___x_516_);
v_i_501_ = v___x_517_;
v_b_502_ = v___x_515_;
goto _start;
}
else
{
lean_dec_ref(v_b_502_);
lean_dec_ref(v___x_498_);
lean_dec(v___x_497_);
return v___x_513_;
}
}
else
{
lean_dec_ref(v_b_502_);
lean_dec_ref(v___x_498_);
lean_dec(v___x_497_);
return v___x_511_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4___boxed(lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v_as_521_, lean_object* v_sz_522_, lean_object* v_i_523_, lean_object* v_b_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
size_t v_sz_boxed_530_; size_t v_i_boxed_531_; lean_object* v_res_532_; 
v_sz_boxed_530_ = lean_unbox_usize(v_sz_522_);
lean_dec(v_sz_522_);
v_i_boxed_531_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_res_532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(v___x_519_, v___x_520_, v_as_521_, v_sz_boxed_530_, v_i_boxed_531_, v_b_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec_ref(v_as_521_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(lean_object* v___x_533_, uint8_t v___x_534_, lean_object* v_targs_535_, lean_object* v_x_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; uint8_t v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; 
v___x_542_ = l_Lean_Expr_sort___override(v___x_533_);
v___x_543_ = 0;
v___x_544_ = 1;
v___x_545_ = l_Lean_Meta_mkLambdaFVars(v_targs_535_, v___x_542_, v___x_543_, v___x_534_, v___x_543_, v___x_534_, v___x_544_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed(lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v_targs_548_, lean_object* v_x_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
uint8_t v___x_8963__boxed_555_; lean_object* v_res_556_; 
v___x_8963__boxed_555_ = lean_unbox(v___x_547_);
v_res_556_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(v___x_546_, v___x_8963__boxed_555_, v_targs_548_, v_x_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec_ref(v_x_549_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(lean_object* v___x_557_, lean_object* v___x_558_, lean_object* v___x_559_, lean_object* v_as_560_, size_t v_sz_561_, size_t v_i_562_, lean_object* v_b_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
uint8_t v___x_569_; 
v___x_569_ = lean_usize_dec_lt(v_i_562_, v_sz_561_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_dec(v___x_557_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v_b_563_);
return v___x_570_;
}
else
{
uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___f_573_; lean_object* v_a_574_; lean_object* v___x_575_; 
v___x_571_ = lean_nat_dec_lt(v___x_558_, v___x_559_);
v___x_572_ = lean_box(v___x_571_);
lean_inc(v___x_557_);
v___f_573_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed), 9, 2);
lean_closure_set(v___f_573_, 0, v___x_557_);
lean_closure_set(v___f_573_, 1, v___x_572_);
v_a_574_ = lean_array_uget_borrowed(v_as_560_, v_i_562_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
lean_inc(v___y_565_);
lean_inc_ref(v___y_564_);
lean_inc(v_a_574_);
v___x_575_ = lean_infer_type(v_a_574_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; uint8_t v___x_577_; lean_object* v___x_578_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_575_, 1);
v___x_577_ = 0;
v___x_578_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_576_, v___f_573_, v___x_577_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_580_; size_t v___x_581_; size_t v___x_582_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
v___x_580_ = l_Lean_Expr_app___override(v_b_563_, v_a_579_);
v___x_581_ = ((size_t)1ULL);
v___x_582_ = lean_usize_add(v_i_562_, v___x_581_);
v_i_562_ = v___x_582_;
v_b_563_ = v___x_580_;
goto _start;
}
else
{
lean_dec_ref(v_b_563_);
lean_dec(v___x_557_);
return v___x_578_;
}
}
else
{
lean_dec_ref(v___f_573_);
lean_dec_ref(v_b_563_);
lean_dec(v___x_557_);
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___boxed(lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v_as_587_, lean_object* v_sz_588_, lean_object* v_i_589_, lean_object* v_b_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
size_t v_sz_boxed_596_; size_t v_i_boxed_597_; lean_object* v_res_598_; 
v_sz_boxed_596_ = lean_unbox_usize(v_sz_588_);
lean_dec(v_sz_588_);
v_i_boxed_597_ = lean_unbox_usize(v_i_589_);
lean_dec(v_i_589_);
v_res_598_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(v___x_584_, v___x_585_, v___x_586_, v_as_587_, v_sz_boxed_596_, v_i_boxed_597_, v_b_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec_ref(v_as_587_);
lean_dec(v___x_586_);
lean_dec(v___x_585_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(lean_object* v_msgData_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; lean_object* v_env_606_; lean_object* v___x_607_; lean_object* v_toCold_608_; lean_object* v_mctx_609_; lean_object* v_lctx_610_; lean_object* v_options_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_605_ = lean_st_ref_get(v___y_603_);
v_env_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc_ref(v_env_606_);
lean_dec(v___x_605_);
v___x_607_ = lean_st_ref_get(v___y_601_);
v_toCold_608_ = lean_ctor_get(v___y_602_, 0);
v_mctx_609_ = lean_ctor_get(v___x_607_, 0);
lean_inc_ref(v_mctx_609_);
lean_dec(v___x_607_);
v_lctx_610_ = lean_ctor_get(v___y_600_, 2);
v_options_611_ = lean_ctor_get(v_toCold_608_, 2);
lean_inc_ref(v_options_611_);
lean_inc_ref(v_lctx_610_);
v___x_612_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_612_, 0, v_env_606_);
lean_ctor_set(v___x_612_, 1, v_mctx_609_);
lean_ctor_set(v___x_612_, 2, v_lctx_610_);
lean_ctor_set(v___x_612_, 3, v_options_611_);
v___x_613_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v_msgData_599_);
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7___boxed(lean_object* v_msgData_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msgData_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(lean_object* v_msg_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_ref_628_; lean_object* v___x_629_; lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
v_ref_628_ = lean_ctor_get(v___y_625_, 2);
v___x_629_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msg_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_638_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
lean_inc(v_ref_628_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v_ref_628_);
lean_ctor_set(v___x_634_, 1, v_a_630_);
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 1);
lean_ctor_set(v___x_632_, 0, v___x_634_);
v___x_636_ = v___x_632_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg___boxed(lean_object* v_msg_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
return v_res_645_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_649_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2));
v___x_650_ = lean_unsigned_to_nat(4u);
v___x_651_ = lean_unsigned_to_nat(68u);
v___x_652_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1));
v___x_653_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0));
v___x_654_ = l_mkPanicMessageWithDecl(v___x_653_, v___x_652_, v___x_651_, v___x_650_, v___x_649_);
return v___x_654_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4));
v___x_657_ = l_Lean_stringToMessageData(v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6));
v___x_660_ = l_Lean_stringToMessageData(v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(lean_object* v_nParams_661_, lean_object* v_numMotives_662_, lean_object* v_numMinors_663_, lean_object* v___x_664_, lean_object* v_head_665_, lean_object* v_tail_666_, lean_object* v_recName_667_, lean_object* v_belowName_668_, lean_object* v_levelParams_669_, lean_object* v_refArgs_670_, lean_object* v_x_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_677_ = lean_nat_add(v_nParams_661_, v_numMotives_662_);
v___x_678_ = lean_nat_add(v___x_677_, v_numMinors_663_);
v___x_679_ = lean_array_get_size(v_refArgs_670_);
v___x_680_ = lean_nat_dec_lt(v___x_678_, v___x_679_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; 
lean_dec(v___x_678_);
lean_dec(v___x_677_);
lean_dec_ref(v_refArgs_670_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
lean_dec(v_recName_667_);
lean_dec(v_tail_666_);
lean_dec(v_head_665_);
lean_dec(v_nParams_661_);
v___x_681_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3);
v___x_682_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(v___x_681_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_683_ = lean_unsigned_to_nat(0u);
lean_inc(v_nParams_661_);
lean_inc_ref_n(v_refArgs_670_, 4);
v___x_684_ = l_Array_toSubarray___redArg(v_refArgs_670_, v___x_683_, v_nParams_661_);
v___x_685_ = l_Subarray_copy___redArg(v___x_684_);
lean_inc(v___x_677_);
v___x_686_ = l_Array_toSubarray___redArg(v_refArgs_670_, v_nParams_661_, v___x_677_);
v___x_687_ = l_Subarray_copy___redArg(v___x_686_);
lean_inc_n(v___x_678_, 2);
v___x_688_ = l_Array_toSubarray___redArg(v_refArgs_670_, v___x_677_, v___x_678_);
v___x_689_ = l_Subarray_copy___redArg(v___x_688_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_sub(v___x_679_, v___x_690_);
lean_inc(v___x_691_);
v___x_692_ = l_Array_toSubarray___redArg(v_refArgs_670_, v___x_678_, v___x_691_);
v___x_693_ = l_Subarray_copy___redArg(v___x_692_);
v___x_694_ = lean_array_get(v___x_664_, v_refArgs_670_, v___x_691_);
lean_dec(v___x_691_);
lean_dec_ref(v_refArgs_670_);
lean_inc(v___y_675_);
lean_inc_ref(v___y_674_);
lean_inc(v___y_673_);
lean_inc_ref(v___y_672_);
lean_inc(v___x_694_);
v___x_695_ = lean_infer_type(v___x_694_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_697_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
lean_inc(v___y_675_);
lean_inc_ref(v___y_674_);
lean_inc(v___y_673_);
lean_inc_ref(v___y_672_);
v___x_697_ = lean_infer_type(v_a_696_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_699_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = l_Lean_Meta_typeFormerTypeLevel(v_a_698_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
if (lean_obj_tag(v_a_700_) == 1)
{
lean_object* v_val_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; size_t v_sz_707_; size_t v___x_708_; lean_object* v___x_709_; 
v_val_701_ = lean_ctor_get(v_a_700_, 0);
lean_inc(v_val_701_);
lean_dec_ref_known(v_a_700_, 1);
v___x_702_ = l_Lean_mkLevelMax(v_val_701_, v_head_665_);
lean_inc_n(v___x_702_, 2);
v___x_703_ = l_Lean_Level_succ___override(v___x_702_);
v___x_704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v_tail_666_);
v___x_705_ = l_Lean_Expr_const___override(v_recName_667_, v___x_704_);
v___x_706_ = l_Lean_mkAppN(v___x_705_, v___x_685_);
v_sz_707_ = lean_array_size(v___x_687_);
v___x_708_ = ((size_t)0ULL);
v___x_709_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(v___x_702_, v___x_678_, v___x_679_, v___x_687_, v_sz_707_, v___x_708_, v___x_706_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec(v___x_678_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; size_t v_sz_711_; lean_object* v___x_712_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v_sz_711_ = lean_array_size(v___x_689_);
lean_inc_ref(v___x_687_);
lean_inc(v___x_702_);
v___x_712_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(v___x_702_, v___x_687_, v___x_689_, v_sz_711_, v___x_708_, v_a_710_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec_ref(v___x_689_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; uint8_t v___x_723_; lean_object* v___x_724_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = l_Lean_mkAppN(v_a_713_, v___x_693_);
lean_inc(v___x_694_);
v___x_715_ = l_Lean_Expr_app___override(v___x_714_, v___x_694_);
v___x_716_ = l_Array_append___redArg(v___x_685_, v___x_687_);
lean_dec_ref(v___x_687_);
v___x_717_ = l_Array_append___redArg(v___x_716_, v___x_693_);
lean_dec_ref(v___x_693_);
v___x_718_ = lean_mk_empty_array_with_capacity(v___x_690_);
v___x_719_ = lean_array_push(v___x_718_, v___x_694_);
v___x_720_ = l_Array_append___redArg(v___x_717_, v___x_719_);
lean_dec_ref(v___x_719_);
v___x_721_ = l_Lean_Expr_sort___override(v___x_702_);
v___x_722_ = 0;
v___x_723_ = 1;
lean_inc_ref(v___x_720_);
v___x_724_ = l_Lean_Meta_mkForallFVars(v___x_720_, v___x_721_, v___x_722_, v___x_680_, v___x_680_, v___x_723_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
v___x_726_ = l_Lean_Meta_mkLambdaFVars(v___x_720_, v___x_715_, v___x_722_, v___x_680_, v___x_722_, v___x_680_, v___x_723_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_box(1);
v___x_729_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_belowName_668_, v_levelParams_669_, v_a_725_, v_a_727_, v___x_728_, v___y_675_);
return v___x_729_;
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec(v_a_725_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
v_a_730_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_726_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_726_);
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
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec_ref(v___x_720_);
lean_dec_ref(v___x_715_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
v_a_738_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_724_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_724_);
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
lean_dec(v___x_702_);
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
v_a_746_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_712_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_712_);
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
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v___x_702_);
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
v_a_754_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_709_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_709_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_a_700_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v___x_678_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
lean_dec(v_recName_667_);
lean_dec(v_tail_666_);
lean_dec(v_head_665_);
v___x_762_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5);
v___x_763_ = l_Lean_MessageData_ofExpr(v___x_694_);
v___x_764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7);
v___x_766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_766_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
return v___x_767_;
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v___x_678_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
lean_dec(v_recName_667_);
lean_dec(v_tail_666_);
lean_dec(v_head_665_);
v_a_768_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_699_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_699_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v___x_678_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
lean_dec(v_recName_667_);
lean_dec(v_tail_666_);
lean_dec(v_head_665_);
v_a_776_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_697_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_697_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v___x_685_);
lean_dec(v___x_678_);
lean_dec(v_levelParams_669_);
lean_dec(v_belowName_668_);
lean_dec(v_recName_667_);
lean_dec(v_tail_666_);
lean_dec(v_head_665_);
v_a_784_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_695_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_695_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed(lean_object* v_nParams_792_, lean_object* v_numMotives_793_, lean_object* v_numMinors_794_, lean_object* v___x_795_, lean_object* v_head_796_, lean_object* v_tail_797_, lean_object* v_recName_798_, lean_object* v_belowName_799_, lean_object* v_levelParams_800_, lean_object* v_refArgs_801_, lean_object* v_x_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(v_nParams_792_, v_numMotives_793_, v_numMinors_794_, v___x_795_, v_head_796_, v_tail_797_, v_recName_798_, v_belowName_799_, v_levelParams_800_, v_refArgs_801_, v_x_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec_ref(v_x_802_);
lean_dec_ref(v___x_795_);
lean_dec(v_numMinors_794_);
lean_dec(v_numMotives_793_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
if (lean_obj_tag(v_a_809_) == 0)
{
lean_object* v___x_811_; 
v___x_811_ = l_List_reverse___redArg(v_a_810_);
return v___x_811_;
}
else
{
lean_object* v_head_812_; lean_object* v_tail_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_822_; 
v_head_812_ = lean_ctor_get(v_a_809_, 0);
v_tail_813_ = lean_ctor_get(v_a_809_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v_a_809_);
if (v_isSharedCheck_822_ == 0)
{
v___x_815_ = v_a_809_;
v_isShared_816_ = v_isSharedCheck_822_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_tail_813_);
lean_inc(v_head_812_);
lean_dec(v_a_809_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_822_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_817_ = l_Lean_Level_param___override(v_head_812_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 1, v_a_810_);
lean_ctor_set(v___x_815_, 0, v___x_817_);
v___x_819_ = v___x_815_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v_a_810_);
v___x_819_ = v_reuseFailAlloc_821_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
v_a_809_ = v_tail_813_;
v_a_810_ = v___x_819_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_box(0);
v___x_824_ = l_unsafeCast___redArg(v___x_823_);
return v___x_824_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_825_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
v___x_831_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
lean_ctor_set(v___x_831_, 2, v___x_830_);
lean_ctor_set(v___x_831_, 3, v___x_830_);
lean_ctor_set(v___x_831_, 4, v___x_830_);
lean_ctor_set(v___x_831_, 5, v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(lean_object* v_declName_832_, uint8_t v_s_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___x_837_; lean_object* v_env_838_; lean_object* v_nextMacroScope_839_; lean_object* v_ngen_840_; lean_object* v_auxDeclNGen_841_; lean_object* v_traceState_842_; lean_object* v_messages_843_; lean_object* v_infoState_844_; lean_object* v_snapshotTasks_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_874_; 
v___x_837_ = lean_st_ref_take(v___y_835_);
v_env_838_ = lean_ctor_get(v___x_837_, 0);
v_nextMacroScope_839_ = lean_ctor_get(v___x_837_, 1);
v_ngen_840_ = lean_ctor_get(v___x_837_, 2);
v_auxDeclNGen_841_ = lean_ctor_get(v___x_837_, 3);
v_traceState_842_ = lean_ctor_get(v___x_837_, 4);
v_messages_843_ = lean_ctor_get(v___x_837_, 6);
v_infoState_844_ = lean_ctor_get(v___x_837_, 7);
v_snapshotTasks_845_ = lean_ctor_get(v___x_837_, 8);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v___x_837_, 5);
lean_dec(v_unused_875_);
v___x_847_ = v___x_837_;
v_isShared_848_ = v_isSharedCheck_874_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_snapshotTasks_845_);
lean_inc(v_infoState_844_);
lean_inc(v_messages_843_);
lean_inc(v_traceState_842_);
lean_inc(v_auxDeclNGen_841_);
lean_inc(v_ngen_840_);
lean_inc(v_nextMacroScope_839_);
lean_inc(v_env_838_);
lean_dec(v___x_837_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_874_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_849_ = 0;
v___x_850_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_851_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_838_, v_declName_832_, v_s_833_, v___x_849_, v___x_850_);
v___x_852_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 5, v___x_852_);
lean_ctor_set(v___x_847_, 0, v___x_851_);
v___x_854_ = v___x_847_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_851_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_nextMacroScope_839_);
lean_ctor_set(v_reuseFailAlloc_873_, 2, v_ngen_840_);
lean_ctor_set(v_reuseFailAlloc_873_, 3, v_auxDeclNGen_841_);
lean_ctor_set(v_reuseFailAlloc_873_, 4, v_traceState_842_);
lean_ctor_set(v_reuseFailAlloc_873_, 5, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_873_, 6, v_messages_843_);
lean_ctor_set(v_reuseFailAlloc_873_, 7, v_infoState_844_);
lean_ctor_set(v_reuseFailAlloc_873_, 8, v_snapshotTasks_845_);
v___x_854_ = v_reuseFailAlloc_873_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v_mctx_857_; lean_object* v_zetaDeltaFVarIds_858_; lean_object* v_postponed_859_; lean_object* v_diag_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_871_; 
v___x_855_ = lean_st_ref_put(v___y_835_, v___x_854_);
v___x_856_ = lean_st_ref_take(v___y_834_);
v_mctx_857_ = lean_ctor_get(v___x_856_, 0);
v_zetaDeltaFVarIds_858_ = lean_ctor_get(v___x_856_, 2);
v_postponed_859_ = lean_ctor_get(v___x_856_, 3);
v_diag_860_ = lean_ctor_get(v___x_856_, 4);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_871_ == 0)
{
lean_object* v_unused_872_; 
v_unused_872_ = lean_ctor_get(v___x_856_, 1);
lean_dec(v_unused_872_);
v___x_862_ = v___x_856_;
v_isShared_863_ = v_isSharedCheck_871_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_diag_860_);
lean_inc(v_postponed_859_);
lean_inc(v_zetaDeltaFVarIds_858_);
lean_inc(v_mctx_857_);
lean_dec(v___x_856_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_871_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_864_ = lean_box(0);
v___x_865_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_mctx_857_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_870_, 2, v_zetaDeltaFVarIds_858_);
lean_ctor_set(v_reuseFailAlloc_870_, 3, v_postponed_859_);
lean_ctor_set(v_reuseFailAlloc_870_, 4, v_diag_860_);
v___x_867_ = v_reuseFailAlloc_870_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_st_ref_put(v___y_834_, v___x_867_);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_864_);
return v___x_869_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___boxed(lean_object* v_declName_876_, lean_object* v_s_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
uint8_t v_s_boxed_881_; lean_object* v_res_882_; 
v_s_boxed_881_ = lean_unbox(v_s_877_);
v_res_882_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_876_, v_s_boxed_881_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec(v___y_878_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(lean_object* v_declName_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
uint8_t v___x_889_; lean_object* v___x_890_; 
v___x_889_ = 0;
v___x_890_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_883_, v___x_889_, v___y_885_, v___y_887_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7___boxed(lean_object* v_declName_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_declName_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg(lean_object* v_ref_898_, lean_object* v_msg_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_toCold_905_; lean_object* v_currRecDepth_906_; lean_object* v_ref_907_; uint8_t v_diag_908_; uint8_t v_suppressElabErrors_909_; lean_object* v_ref_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_toCold_905_ = lean_ctor_get(v___y_902_, 0);
v_currRecDepth_906_ = lean_ctor_get(v___y_902_, 1);
v_ref_907_ = lean_ctor_get(v___y_902_, 2);
v_diag_908_ = lean_ctor_get_uint8(v___y_902_, sizeof(void*)*3);
v_suppressElabErrors_909_ = lean_ctor_get_uint8(v___y_902_, sizeof(void*)*3 + 1);
v_ref_910_ = l_Lean_replaceRef(v_ref_898_, v_ref_907_);
lean_inc(v_currRecDepth_906_);
lean_inc_ref(v_toCold_905_);
v___x_911_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_911_, 0, v_toCold_905_);
lean_ctor_set(v___x_911_, 1, v_currRecDepth_906_);
lean_ctor_set(v___x_911_, 2, v_ref_910_);
lean_ctor_set_uint8(v___x_911_, sizeof(void*)*3, v_diag_908_);
lean_ctor_set_uint8(v___x_911_, sizeof(void*)*3 + 1, v_suppressElabErrors_909_);
v___x_912_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_899_, v___y_900_, v___y_901_, v___x_911_, v___y_903_);
lean_dec_ref_known(v___x_911_, 3);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg___boxed(lean_object* v_ref_913_, lean_object* v_msg_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg(v_ref_913_, v_msg_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v_ref_913_);
return v_res_920_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
return v___x_922_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_924_ = lean_unsigned_to_nat(0u);
v___x_925_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
lean_ctor_set(v___x_925_, 2, v___x_924_);
lean_ctor_set(v___x_925_, 3, v___x_924_);
lean_ctor_set(v___x_925_, 4, v___x_923_);
lean_ctor_set(v___x_925_, 5, v___x_923_);
lean_ctor_set(v___x_925_, 6, v___x_923_);
lean_ctor_set(v___x_925_, 7, v___x_923_);
lean_ctor_set(v___x_925_, 8, v___x_923_);
lean_ctor_set(v___x_925_, 9, v___x_923_);
lean_ctor_set(v___x_925_, 10, v___x_923_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_unsigned_to_nat(32u);
v___x_927_ = lean_mk_empty_array_with_capacity(v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3(void){
_start:
{
size_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_929_ = ((size_t)5ULL);
v___x_930_ = lean_unsigned_to_nat(0u);
v___x_931_ = lean_unsigned_to_nat(32u);
v___x_932_ = lean_mk_empty_array_with_capacity(v___x_931_);
v___x_933_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__2);
v___x_934_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_934_, 0, v___x_933_);
lean_ctor_set(v___x_934_, 1, v___x_932_);
lean_ctor_set(v___x_934_, 2, v___x_930_);
lean_ctor_set(v___x_934_, 3, v___x_930_);
lean_ctor_set_usize(v___x_934_, 4, v___x_929_);
return v___x_934_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_935_ = lean_box(1);
v___x_936_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__3);
v___x_937_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v___x_936_);
lean_ctor_set(v___x_938_, 2, v___x_935_);
return v___x_938_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__5));
v___x_941_ = l_Lean_stringToMessageData(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__7));
v___x_944_ = l_Lean_stringToMessageData(v___x_943_);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__9));
v___x_947_ = l_Lean_stringToMessageData(v___x_946_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__11));
v___x_950_ = l_Lean_stringToMessageData(v___x_949_);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__13));
v___x_953_ = l_Lean_stringToMessageData(v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__15));
v___x_956_ = l_Lean_stringToMessageData(v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__17));
v___x_959_ = l_Lean_stringToMessageData(v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg(lean_object* v_msg_960_, lean_object* v_declHint_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_env_966_; uint8_t v___x_967_; 
v___x_964_ = l_Lean_instInhabitedName;
v___x_965_ = lean_st_ref_get(v___y_962_);
v_env_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc_ref(v_env_966_);
lean_dec(v___x_965_);
v___x_967_ = l_Lean_Name_isAnonymous(v_declHint_961_);
if (v___x_967_ == 0)
{
uint8_t v_isExporting_968_; 
v_isExporting_968_ = lean_ctor_get_uint8(v_env_966_, sizeof(void*)*8);
if (v_isExporting_968_ == 0)
{
lean_object* v___x_969_; 
lean_dec_ref(v_env_966_);
lean_dec(v_declHint_961_);
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v_msg_960_);
return v___x_969_;
}
else
{
lean_object* v___x_970_; uint8_t v___x_971_; 
lean_inc_ref(v_env_966_);
v___x_970_ = l_Lean_Environment_setExporting(v_env_966_, v___x_967_);
lean_inc(v_declHint_961_);
lean_inc_ref(v___x_970_);
v___x_971_ = l_Lean_Environment_contains(v___x_970_, v_declHint_961_, v_isExporting_968_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; 
lean_dec_ref(v___x_970_);
lean_dec_ref(v_env_966_);
lean_dec(v_declHint_961_);
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v_msg_960_);
return v___x_972_;
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v_c_978_; lean_object* v___x_979_; 
v___x_973_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_974_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__4);
v___x_975_ = l_Lean_Options_empty;
v___x_976_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_976_, 0, v___x_970_);
lean_ctor_set(v___x_976_, 1, v___x_973_);
lean_ctor_set(v___x_976_, 2, v___x_974_);
lean_ctor_set(v___x_976_, 3, v___x_975_);
lean_inc(v_declHint_961_);
v___x_977_ = l_Lean_MessageData_ofConstName(v_declHint_961_, v___x_967_);
v_c_978_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_978_, 0, v___x_976_);
lean_ctor_set(v_c_978_, 1, v___x_977_);
v___x_979_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_966_, v_declHint_961_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
lean_dec_ref(v_env_966_);
lean_dec(v_declHint_961_);
v___x_980_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v_c_978_);
v___x_982_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__8);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = l_Lean_MessageData_note(v___x_983_);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v_msg_960_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
else
{
lean_object* v_val_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1021_; 
v_val_987_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_989_ = v___x_979_;
v_isShared_990_ = v_isSharedCheck_1021_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_val_987_);
lean_dec(v___x_979_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1021_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v_mod_993_; uint8_t v___x_994_; 
v___x_991_ = l_Lean_Environment_header(v_env_966_);
lean_dec_ref(v_env_966_);
v___x_992_ = l_Lean_EnvironmentHeader_moduleNames(v___x_991_);
lean_dec_ref(v___x_991_);
v_mod_993_ = lean_array_get(v___x_964_, v___x_992_, v_val_987_);
lean_dec(v_val_987_);
lean_dec_ref(v___x_992_);
v___x_994_ = l_Lean_isPrivateName(v_declHint_961_);
lean_dec(v_declHint_961_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_995_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__10);
v___x_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v_c_978_);
v___x_997_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__12);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Lean_MessageData_ofName(v_mod_993_);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__14);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = l_Lean_MessageData_note(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_msg_960_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 0);
lean_ctor_set(v___x_989_, 0, v___x_1004_);
v___x_1006_ = v___x_989_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1008_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v_c_978_);
v___x_1010_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__16);
v___x_1011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = l_Lean_MessageData_ofName(v_mod_993_);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___closed__18);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_MessageData_note(v___x_1015_);
v___x_1017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1017_, 0, v_msg_960_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 0);
lean_ctor_set(v___x_989_, 0, v___x_1017_);
v___x_1019_ = v___x_989_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1022_; 
lean_dec_ref(v_env_966_);
lean_dec(v_declHint_961_);
v___x_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1022_, 0, v_msg_960_);
return v___x_1022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg___boxed(lean_object* v_msg_1023_, lean_object* v_declHint_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg(v_msg_1023_, v_declHint_1024_, v___y_1025_);
lean_dec(v___y_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12(lean_object* v_msg_1028_, lean_object* v_declHint_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v___x_1035_; lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1045_; 
v___x_1035_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg(v_msg_1028_, v_declHint_1029_, v___y_1033_);
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1045_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1045_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1040_ = l_Lean_unknownIdentifierMessageTag;
v___x_1041_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v_a_1036_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 0, v___x_1041_);
v___x_1043_ = v___x_1038_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12___boxed(lean_object* v_msg_1046_, lean_object* v_declHint_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12(v_msg_1046_, v_declHint_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg(lean_object* v_ref_1054_, lean_object* v_msg_1055_, lean_object* v_declHint_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; lean_object* v_a_1063_; lean_object* v___x_1064_; 
v___x_1062_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12(v_msg_1055_, v_declHint_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref(v___x_1062_);
v___x_1064_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg(v_ref_1054_, v_a_1063_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg___boxed(lean_object* v_ref_1065_, lean_object* v_msg_1066_, lean_object* v_declHint_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg(v_ref_1065_, v_msg_1066_, v_declHint_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v_ref_1065_);
return v_res_1073_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(lean_object* v_ref_1080_, lean_object* v_constName_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1087_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1);
v___x_1088_ = 0;
lean_inc(v_constName_1081_);
v___x_1089_ = l_Lean_MessageData_ofConstName(v_constName_1081_, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg(v_ref_1080_, v___x_1092_, v_constName_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_ref_1094_, lean_object* v_constName_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1094_, v_constName_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v_ref_1094_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(lean_object* v_constName_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_ref_1108_; lean_object* v___x_1109_; 
v_ref_1108_ = lean_ctor_get(v___y_1105_, 2);
v___x_1109_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1108_, v_constName_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(lean_object* v_constName_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v_env_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1123_ = lean_st_ref_get(v___y_1121_);
v_env_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc_ref(v_env_1124_);
lean_dec(v___x_1123_);
v___x_1125_ = 0;
lean_inc(v_constName_1117_);
v___x_1126_ = l_Lean_Environment_find_x3f(v_env_1124_, v_constName_1117_, v___x_1125_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v___x_1127_;
}
else
{
lean_object* v_val_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_constName_1117_);
v_val_1128_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1126_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_val_1128_);
lean_dec(v___x_1126_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set_tag(v___x_1130_, 0);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_val_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0___boxed(lean_object* v_constName_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_constName_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v_res_1142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2));
v___x_1148_ = l_Lean_stringToMessageData(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4));
v___x_1151_ = l_Lean_stringToMessageData(v___x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(lean_object* v_recName_1152_, lean_object* v_nParams_1153_, lean_object* v_belowName_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = l_Lean_instInhabitedExpr;
lean_inc(v_recName_1152_);
v___x_1161_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_recName_1152_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1162_);
lean_dec_ref_known(v___x_1161_, 1);
if (lean_obj_tag(v_a_1162_) == 7)
{
lean_object* v_val_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1278_; 
v_val_1163_ = lean_ctor_get(v_a_1162_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_a_1162_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1165_ = v_a_1162_;
v_isShared_1166_ = v_isSharedCheck_1278_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_val_1163_);
lean_dec(v_a_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1278_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v_toConstantVal_1167_; lean_object* v_numMotives_1168_; lean_object* v_numMinors_1169_; lean_object* v_levelParams_1170_; lean_object* v_type_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_toConstantVal_1167_ = lean_ctor_get(v_val_1163_, 0);
lean_inc_ref(v_toConstantVal_1167_);
v_numMotives_1168_ = lean_ctor_get(v_val_1163_, 4);
lean_inc(v_numMotives_1168_);
v_numMinors_1169_ = lean_ctor_get(v_val_1163_, 5);
lean_inc(v_numMinors_1169_);
lean_dec_ref(v_val_1163_);
v_levelParams_1170_ = lean_ctor_get(v_toConstantVal_1167_, 1);
lean_inc_n(v_levelParams_1170_, 2);
v_type_1171_ = lean_ctor_get(v_toConstantVal_1167_, 2);
lean_inc_ref(v_type_1171_);
lean_dec_ref(v_toConstantVal_1167_);
v___x_1172_ = lean_box(0);
v___x_1173_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(v_levelParams_1170_, v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 1)
{
lean_object* v_head_1174_; lean_object* v_tail_1175_; lean_object* v___f_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; 
v_head_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_head_1174_);
v_tail_1175_ = lean_ctor_get(v___x_1173_, 1);
lean_inc(v_tail_1175_);
lean_dec_ref_known(v___x_1173_, 2);
v___f_1176_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed), 16, 9);
lean_closure_set(v___f_1176_, 0, v_nParams_1153_);
lean_closure_set(v___f_1176_, 1, v_numMotives_1168_);
lean_closure_set(v___f_1176_, 2, v_numMinors_1169_);
lean_closure_set(v___f_1176_, 3, v___x_1160_);
lean_closure_set(v___f_1176_, 4, v_head_1174_);
lean_closure_set(v___f_1176_, 5, v_tail_1175_);
lean_closure_set(v___f_1176_, 6, v_recName_1152_);
lean_closure_set(v___f_1176_, 7, v_belowName_1154_);
lean_closure_set(v___f_1176_, 8, v_levelParams_1170_);
v___x_1177_ = 0;
v___x_1178_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_1171_, v___f_1176_, v___x_1177_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc_n(v_a_1179_, 2);
lean_dec_ref_known(v___x_1178_, 1);
if (v_isShared_1166_ == 0)
{
lean_ctor_set_tag(v___x_1165_, 1);
lean_ctor_set(v___x_1165_, 0, v_a_1179_);
v___x_1181_ = v___x_1165_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1179_);
v___x_1181_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; 
v___x_1182_ = l_Lean_addDecl(v___x_1181_, v___x_1177_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_toConstantVal_1183_; lean_object* v_name_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref_known(v___x_1182_, 1);
v_toConstantVal_1183_ = lean_ctor_get(v_a_1179_, 0);
lean_inc_ref(v_toConstantVal_1183_);
lean_dec(v_a_1179_);
v_name_1184_ = lean_ctor_get(v_toConstantVal_1183_, 0);
lean_inc_n(v_name_1184_, 2);
lean_dec_ref(v_toConstantVal_1183_);
v___x_1185_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_1184_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1261_ == 0)
{
lean_object* v_unused_1262_; 
v_unused_1262_ = lean_ctor_get(v___x_1185_, 0);
lean_dec(v_unused_1262_);
v___x_1187_ = v___x_1185_;
v_isShared_1188_ = v_isSharedCheck_1261_;
goto v_resetjp_1186_;
}
else
{
lean_dec(v___x_1185_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1261_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v_env_1190_; lean_object* v_nextMacroScope_1191_; lean_object* v_ngen_1192_; lean_object* v_auxDeclNGen_1193_; lean_object* v_traceState_1194_; lean_object* v_messages_1195_; lean_object* v_infoState_1196_; lean_object* v_snapshotTasks_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1259_; 
v___x_1189_ = lean_st_ref_take(v_a_1158_);
v_env_1190_ = lean_ctor_get(v___x_1189_, 0);
v_nextMacroScope_1191_ = lean_ctor_get(v___x_1189_, 1);
v_ngen_1192_ = lean_ctor_get(v___x_1189_, 2);
v_auxDeclNGen_1193_ = lean_ctor_get(v___x_1189_, 3);
v_traceState_1194_ = lean_ctor_get(v___x_1189_, 4);
v_messages_1195_ = lean_ctor_get(v___x_1189_, 6);
v_infoState_1196_ = lean_ctor_get(v___x_1189_, 7);
v_snapshotTasks_1197_ = lean_ctor_get(v___x_1189_, 8);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1259_ == 0)
{
lean_object* v_unused_1260_; 
v_unused_1260_ = lean_ctor_get(v___x_1189_, 5);
lean_dec(v_unused_1260_);
v___x_1199_ = v___x_1189_;
v_isShared_1200_ = v_isSharedCheck_1259_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_snapshotTasks_1197_);
lean_inc(v_infoState_1196_);
lean_inc(v_messages_1195_);
lean_inc(v_traceState_1194_);
lean_inc(v_auxDeclNGen_1193_);
lean_inc(v_ngen_1192_);
lean_inc(v_nextMacroScope_1191_);
lean_inc(v_env_1190_);
lean_dec(v___x_1189_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1259_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
lean_inc(v_name_1184_);
v___x_1201_ = l_Lean_markAuxRecursor(v_env_1190_, v_name_1184_);
v___x_1202_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 5, v___x_1202_);
lean_ctor_set(v___x_1199_, 0, v___x_1201_);
v___x_1204_ = v___x_1199_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_nextMacroScope_1191_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_ngen_1192_);
lean_ctor_set(v_reuseFailAlloc_1258_, 3, v_auxDeclNGen_1193_);
lean_ctor_set(v_reuseFailAlloc_1258_, 4, v_traceState_1194_);
lean_ctor_set(v_reuseFailAlloc_1258_, 5, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1258_, 6, v_messages_1195_);
lean_ctor_set(v_reuseFailAlloc_1258_, 7, v_infoState_1196_);
lean_ctor_set(v_reuseFailAlloc_1258_, 8, v_snapshotTasks_1197_);
v___x_1204_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v_mctx_1207_; lean_object* v_zetaDeltaFVarIds_1208_; lean_object* v_postponed_1209_; lean_object* v_diag_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1256_; 
v___x_1205_ = lean_st_ref_put(v_a_1158_, v___x_1204_);
v___x_1206_ = lean_st_ref_take(v_a_1156_);
v_mctx_1207_ = lean_ctor_get(v___x_1206_, 0);
v_zetaDeltaFVarIds_1208_ = lean_ctor_get(v___x_1206_, 2);
v_postponed_1209_ = lean_ctor_get(v___x_1206_, 3);
v_diag_1210_ = lean_ctor_get(v___x_1206_, 4);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v___x_1206_, 1);
lean_dec(v_unused_1257_);
v___x_1212_ = v___x_1206_;
v_isShared_1213_ = v_isSharedCheck_1256_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_diag_1210_);
lean_inc(v_postponed_1209_);
lean_inc(v_zetaDeltaFVarIds_1208_);
lean_inc(v_mctx_1207_);
lean_dec(v___x_1206_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1256_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1214_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1214_);
v___x_1216_ = v___x_1212_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_mctx_1207_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v___x_1214_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v_zetaDeltaFVarIds_1208_);
lean_ctor_set(v_reuseFailAlloc_1255_, 3, v_postponed_1209_);
lean_ctor_set(v_reuseFailAlloc_1255_, 4, v_diag_1210_);
v___x_1216_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_env_1219_; lean_object* v_nextMacroScope_1220_; lean_object* v_ngen_1221_; lean_object* v_auxDeclNGen_1222_; lean_object* v_traceState_1223_; lean_object* v_messages_1224_; lean_object* v_infoState_1225_; lean_object* v_snapshotTasks_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1253_; 
v___x_1217_ = lean_st_ref_put(v_a_1156_, v___x_1216_);
v___x_1218_ = lean_st_ref_take(v_a_1158_);
v_env_1219_ = lean_ctor_get(v___x_1218_, 0);
v_nextMacroScope_1220_ = lean_ctor_get(v___x_1218_, 1);
v_ngen_1221_ = lean_ctor_get(v___x_1218_, 2);
v_auxDeclNGen_1222_ = lean_ctor_get(v___x_1218_, 3);
v_traceState_1223_ = lean_ctor_get(v___x_1218_, 4);
v_messages_1224_ = lean_ctor_get(v___x_1218_, 6);
v_infoState_1225_ = lean_ctor_get(v___x_1218_, 7);
v_snapshotTasks_1226_ = lean_ctor_get(v___x_1218_, 8);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v___x_1218_, 5);
lean_dec(v_unused_1254_);
v___x_1228_ = v___x_1218_;
v_isShared_1229_ = v_isSharedCheck_1253_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_snapshotTasks_1226_);
lean_inc(v_infoState_1225_);
lean_inc(v_messages_1224_);
lean_inc(v_traceState_1223_);
lean_inc(v_auxDeclNGen_1222_);
lean_inc(v_ngen_1221_);
lean_inc(v_nextMacroScope_1220_);
lean_inc(v_env_1219_);
lean_dec(v___x_1218_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1253_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1230_ = l_Lean_addProtected(v_env_1219_, v_name_1184_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 5, v___x_1202_);
lean_ctor_set(v___x_1228_, 0, v___x_1230_);
v___x_1232_ = v___x_1228_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_nextMacroScope_1220_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_ngen_1221_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v_auxDeclNGen_1222_);
lean_ctor_set(v_reuseFailAlloc_1252_, 4, v_traceState_1223_);
lean_ctor_set(v_reuseFailAlloc_1252_, 5, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1252_, 6, v_messages_1224_);
lean_ctor_set(v_reuseFailAlloc_1252_, 7, v_infoState_1225_);
lean_ctor_set(v_reuseFailAlloc_1252_, 8, v_snapshotTasks_1226_);
v___x_1232_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v_mctx_1235_; lean_object* v_zetaDeltaFVarIds_1236_; lean_object* v_postponed_1237_; lean_object* v_diag_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1250_; 
v___x_1233_ = lean_st_ref_put(v_a_1158_, v___x_1232_);
v___x_1234_ = lean_st_ref_take(v_a_1156_);
v_mctx_1235_ = lean_ctor_get(v___x_1234_, 0);
v_zetaDeltaFVarIds_1236_ = lean_ctor_get(v___x_1234_, 2);
v_postponed_1237_ = lean_ctor_get(v___x_1234_, 3);
v_diag_1238_ = lean_ctor_get(v___x_1234_, 4);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; 
v_unused_1251_ = lean_ctor_get(v___x_1234_, 1);
lean_dec(v_unused_1251_);
v___x_1240_ = v___x_1234_;
v_isShared_1241_ = v_isSharedCheck_1250_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_diag_1238_);
lean_inc(v_postponed_1237_);
lean_inc(v_zetaDeltaFVarIds_1236_);
lean_inc(v_mctx_1235_);
lean_dec(v___x_1234_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1250_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1242_ = lean_box(0);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 1, v___x_1214_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_mctx_1235_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v___x_1214_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_zetaDeltaFVarIds_1236_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_postponed_1237_);
lean_ctor_set(v_reuseFailAlloc_1249_, 4, v_diag_1238_);
v___x_1244_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1247_; 
v___x_1245_ = lean_st_ref_put(v_a_1156_, v___x_1244_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1242_);
v___x_1247_ = v___x_1187_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1242_);
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
}
}
}
}
}
}
else
{
lean_dec(v_a_1179_);
return v___x_1182_;
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_del_object(v___x_1165_);
v_a_1264_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1178_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1178_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec(v___x_1173_);
lean_dec_ref(v_type_1171_);
lean_dec(v_levelParams_1170_);
lean_dec(v_numMinors_1169_);
lean_dec(v_numMotives_1168_);
lean_del_object(v___x_1165_);
lean_dec(v_belowName_1154_);
lean_dec(v_nParams_1153_);
v___x_1272_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1);
v___x_1273_ = l_Lean_MessageData_ofName(v_recName_1152_);
v___x_1274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3);
v___x_1276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_1276_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1277_;
}
}
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec(v_a_1162_);
lean_dec(v_belowName_1154_);
lean_dec(v_nParams_1153_);
v___x_1279_ = l_Lean_MessageData_ofName(v_recName_1152_);
v___x_1280_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5);
v___x_1281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_1281_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1282_;
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_dec(v_belowName_1154_);
lean_dec(v_nParams_1153_);
lean_dec(v_recName_1152_);
v_a_1283_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1161_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1161_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___boxed(lean_object* v_recName_1291_, lean_object* v_nParams_1292_, lean_object* v_belowName_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v_recName_1291_, v_nParams_1292_, v_belowName_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
lean_dec(v_a_1297_);
lean_dec_ref(v_a_1296_);
lean_dec(v_a_1295_);
lean_dec_ref(v_a_1294_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(lean_object* v_00_u03b1_1300_, lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___boxed(lean_object* v_00_u03b1_1308_, lean_object* v_msg_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(v_00_u03b1_1308_, v_msg_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(lean_object* v_declName_1316_, uint8_t v_s_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_1316_, v_s_1317_, v___y_1319_, v___y_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___boxed(lean_object* v_declName_1324_, lean_object* v_s_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
uint8_t v_s_boxed_1331_; lean_object* v_res_1332_; 
v_s_boxed_1331_ = lean_unbox(v_s_1325_);
v_res_1332_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(v_declName_1324_, v_s_boxed_1331_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(lean_object* v_00_u03b1_1333_, lean_object* v_constName_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_constName_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(v_00_u03b1_1341_, v_constName_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_1349_, lean_object* v_ref_1350_, lean_object* v_constName_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1350_, v_constName_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_1358_, lean_object* v_ref_1359_, lean_object* v_constName_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(v_00_u03b1_1358_, v_ref_1359_, v_constName_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v_ref_1359_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11(lean_object* v_00_u03b1_1367_, lean_object* v_ref_1368_, lean_object* v_msg_1369_, lean_object* v_declHint_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___redArg(v_ref_1368_, v_msg_1369_, v_declHint_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11___boxed(lean_object* v_00_u03b1_1377_, lean_object* v_ref_1378_, lean_object* v_msg_1379_, lean_object* v_declHint_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11(v_00_u03b1_1377_, v_ref_1378_, v_msg_1379_, v_declHint_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v_ref_1378_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13(lean_object* v_msg_1387_, lean_object* v_declHint_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___redArg(v_msg_1387_, v_declHint_1388_, v___y_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13___boxed(lean_object* v_msg_1395_, lean_object* v_declHint_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__12_spec__13(v_msg_1395_, v_declHint_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13(lean_object* v_00_u03b1_1403_, lean_object* v_ref_1404_, lean_object* v_msg_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___redArg(v_ref_1404_, v_msg_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13___boxed(lean_object* v_00_u03b1_1412_, lean_object* v_ref_1413_, lean_object* v_msg_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__11_spec__13(v_00_u03b1_1412_, v_ref_1413_, v_msg_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v_ref_1413_);
return v_res_1420_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1421_ = lean_unsigned_to_nat(32u);
v___x_1422_ = lean_mk_empty_array_with_capacity(v___x_1421_);
v___x_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1424_ = ((size_t)5ULL);
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_unsigned_to_nat(32u);
v___x_1427_ = lean_mk_empty_array_with_capacity(v___x_1426_);
v___x_1428_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0);
v___x_1429_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v___x_1427_);
lean_ctor_set(v___x_1429_, 2, v___x_1425_);
lean_ctor_set(v___x_1429_, 3, v___x_1425_);
lean_ctor_set_usize(v___x_1429_, 4, v___x_1424_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(lean_object* v___y_1430_){
_start:
{
lean_object* v___x_1432_; lean_object* v_traceState_1433_; lean_object* v_traces_1434_; lean_object* v___x_1435_; lean_object* v_traceState_1436_; lean_object* v_env_1437_; lean_object* v_nextMacroScope_1438_; lean_object* v_ngen_1439_; lean_object* v_auxDeclNGen_1440_; lean_object* v_cache_1441_; lean_object* v_messages_1442_; lean_object* v_infoState_1443_; lean_object* v_snapshotTasks_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1463_; 
v___x_1432_ = lean_st_ref_get(v___y_1430_);
v_traceState_1433_ = lean_ctor_get(v___x_1432_, 4);
lean_inc_ref(v_traceState_1433_);
lean_dec(v___x_1432_);
v_traces_1434_ = lean_ctor_get(v_traceState_1433_, 0);
lean_inc_ref(v_traces_1434_);
lean_dec_ref(v_traceState_1433_);
v___x_1435_ = lean_st_ref_take(v___y_1430_);
v_traceState_1436_ = lean_ctor_get(v___x_1435_, 4);
v_env_1437_ = lean_ctor_get(v___x_1435_, 0);
v_nextMacroScope_1438_ = lean_ctor_get(v___x_1435_, 1);
v_ngen_1439_ = lean_ctor_get(v___x_1435_, 2);
v_auxDeclNGen_1440_ = lean_ctor_get(v___x_1435_, 3);
v_cache_1441_ = lean_ctor_get(v___x_1435_, 5);
v_messages_1442_ = lean_ctor_get(v___x_1435_, 6);
v_infoState_1443_ = lean_ctor_get(v___x_1435_, 7);
v_snapshotTasks_1444_ = lean_ctor_get(v___x_1435_, 8);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1446_ = v___x_1435_;
v_isShared_1447_ = v_isSharedCheck_1463_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_snapshotTasks_1444_);
lean_inc(v_infoState_1443_);
lean_inc(v_messages_1442_);
lean_inc(v_cache_1441_);
lean_inc(v_traceState_1436_);
lean_inc(v_auxDeclNGen_1440_);
lean_inc(v_ngen_1439_);
lean_inc(v_nextMacroScope_1438_);
lean_inc(v_env_1437_);
lean_dec(v___x_1435_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1463_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
uint64_t v_tid_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1461_; 
v_tid_1448_ = lean_ctor_get_uint64(v_traceState_1436_, sizeof(void*)*1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_traceState_1436_);
if (v_isSharedCheck_1461_ == 0)
{
lean_object* v_unused_1462_; 
v_unused_1462_ = lean_ctor_get(v_traceState_1436_, 0);
lean_dec(v_unused_1462_);
v___x_1450_ = v_traceState_1436_;
v_isShared_1451_ = v_isSharedCheck_1461_;
goto v_resetjp_1449_;
}
else
{
lean_dec(v_traceState_1436_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1461_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1452_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1);
if (v_isShared_1451_ == 0)
{
lean_ctor_set(v___x_1450_, 0, v___x_1452_);
v___x_1454_ = v___x_1450_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1452_);
lean_ctor_set_uint64(v_reuseFailAlloc_1460_, sizeof(void*)*1, v_tid_1448_);
v___x_1454_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1456_; 
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 4, v___x_1454_);
v___x_1456_ = v___x_1446_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_env_1437_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_nextMacroScope_1438_);
lean_ctor_set(v_reuseFailAlloc_1459_, 2, v_ngen_1439_);
lean_ctor_set(v_reuseFailAlloc_1459_, 3, v_auxDeclNGen_1440_);
lean_ctor_set(v_reuseFailAlloc_1459_, 4, v___x_1454_);
lean_ctor_set(v_reuseFailAlloc_1459_, 5, v_cache_1441_);
lean_ctor_set(v_reuseFailAlloc_1459_, 6, v_messages_1442_);
lean_ctor_set(v_reuseFailAlloc_1459_, 7, v_infoState_1443_);
lean_ctor_set(v_reuseFailAlloc_1459_, 8, v_snapshotTasks_1444_);
v___x_1456_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = lean_st_ref_put(v___y_1430_, v___x_1456_);
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_traces_1434_);
return v___x_1458_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___boxed(lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v___y_1464_);
lean_dec(v___y_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v___y_1470_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___boxed(lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
return v_res_1478_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_mkBelow_spec__2(lean_object* v_opts_1479_, lean_object* v_opt_1480_){
_start:
{
lean_object* v_name_1481_; lean_object* v_defValue_1482_; lean_object* v_map_1483_; lean_object* v___x_1484_; 
v_name_1481_ = lean_ctor_get(v_opt_1480_, 0);
v_defValue_1482_ = lean_ctor_get(v_opt_1480_, 1);
v_map_1483_ = lean_ctor_get(v_opts_1479_, 0);
v___x_1484_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1483_, v_name_1481_);
if (lean_obj_tag(v___x_1484_) == 0)
{
uint8_t v___x_1485_; 
v___x_1485_ = lean_unbox(v_defValue_1482_);
return v___x_1485_;
}
else
{
lean_object* v_val_1486_; 
v_val_1486_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_val_1486_);
lean_dec_ref_known(v___x_1484_, 1);
if (lean_obj_tag(v_val_1486_) == 1)
{
uint8_t v_v_1487_; 
v_v_1487_ = lean_ctor_get_uint8(v_val_1486_, 0);
lean_dec_ref_known(v_val_1486_, 0);
return v_v_1487_;
}
else
{
uint8_t v___x_1488_; 
lean_dec(v_val_1486_);
v___x_1488_ = lean_unbox(v_defValue_1482_);
return v___x_1488_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_mkBelow_spec__2___boxed(lean_object* v_opts_1489_, lean_object* v_opt_1490_){
_start:
{
uint8_t v_res_1491_; lean_object* v_r_1492_; 
v_res_1491_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1489_, v_opt_1490_);
lean_dec_ref(v_opt_1490_);
lean_dec_ref(v_opts_1489_);
v_r_1492_ = lean_box(v_res_1491_);
return v_r_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0(lean_object* v_indName_1493_, lean_object* v_x_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = l_Lean_MessageData_ofName(v_indName_1493_);
v___x_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0___boxed(lean_object* v_indName_1502_, lean_object* v_x_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l_Lean_mkBelow___lam__0(v_indName_1502_, v_x_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec_ref(v_x_1503_);
return v_res_1509_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(lean_object* v_e_1510_){
_start:
{
if (lean_obj_tag(v_e_1510_) == 0)
{
uint8_t v___x_1511_; 
v___x_1511_ = 2;
return v___x_1511_;
}
else
{
uint8_t v___x_1512_; 
v___x_1512_ = 0;
return v___x_1512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5___boxed(lean_object* v_e_1513_){
_start:
{
uint8_t v_res_1514_; lean_object* v_r_1515_; 
v_res_1514_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(v_e_1513_);
lean_dec_ref(v_e_1513_);
v_r_1515_ = lean_box(v_res_1514_);
return v_r_1515_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(lean_object* v_x_1516_){
_start:
{
if (lean_obj_tag(v_x_1516_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
v_a_1518_ = lean_ctor_get(v_x_1516_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v_x_1516_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v_x_1516_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
lean_ctor_set_tag(v___x_1520_, 1);
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
v_a_1526_ = lean_ctor_get(v_x_1516_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v_x_1516_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v_x_1516_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set_tag(v___x_1528_, 0);
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg___boxed(lean_object* v_x_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_x_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(lean_object* v_opts_1537_, lean_object* v_opt_1538_){
_start:
{
lean_object* v_name_1539_; lean_object* v_defValue_1540_; lean_object* v_map_1541_; lean_object* v___x_1542_; 
v_name_1539_ = lean_ctor_get(v_opt_1538_, 0);
v_defValue_1540_ = lean_ctor_get(v_opt_1538_, 1);
v_map_1541_ = lean_ctor_get(v_opts_1537_, 0);
v___x_1542_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1541_, v_name_1539_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_inc(v_defValue_1540_);
return v_defValue_1540_;
}
else
{
lean_object* v_val_1543_; 
v_val_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_val_1543_);
lean_dec_ref_known(v___x_1542_, 1);
if (lean_obj_tag(v_val_1543_) == 3)
{
lean_object* v_v_1544_; 
v_v_1544_ = lean_ctor_get(v_val_1543_, 0);
lean_inc(v_v_1544_);
lean_dec_ref_known(v_val_1543_, 1);
return v_v_1544_;
}
else
{
lean_dec(v_val_1543_);
lean_inc(v_defValue_1540_);
return v_defValue_1540_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6___boxed(lean_object* v_opts_1545_, lean_object* v_opt_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1545_, v_opt_1546_);
lean_dec_ref(v_opt_1546_);
lean_dec_ref(v_opts_1545_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(size_t v_sz_1548_, size_t v_i_1549_, lean_object* v_bs_1550_){
_start:
{
uint8_t v___x_1551_; 
v___x_1551_ = lean_usize_dec_lt(v_i_1549_, v_sz_1548_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; 
v___x_1552_ = l_unsafeCast___redArg(v_bs_1550_);
lean_dec_ref(v_bs_1550_);
return v___x_1552_;
}
else
{
lean_object* v_v_1553_; lean_object* v___x_1554_; lean_object* v_msg_1555_; lean_object* v___x_1556_; lean_object* v_bs_x27_1557_; size_t v___x_1558_; size_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v_v_1553_ = lean_array_uget_borrowed(v_bs_1550_, v_i_1549_);
v___x_1554_ = l_unsafeCast___redArg(v_v_1553_);
v_msg_1555_ = lean_ctor_get(v___x_1554_, 1);
lean_inc_ref(v_msg_1555_);
lean_dec(v___x_1554_);
v___x_1556_ = lean_unsigned_to_nat(0u);
v_bs_x27_1557_ = lean_array_uset(v_bs_1550_, v_i_1549_, v___x_1556_);
v___x_1558_ = ((size_t)1ULL);
v___x_1559_ = lean_usize_add(v_i_1549_, v___x_1558_);
v___x_1560_ = l_unsafeCast___redArg(v_msg_1555_);
lean_dec_ref(v_msg_1555_);
v___x_1561_ = lean_array_uset(v_bs_x27_1557_, v_i_1549_, v___x_1560_);
v_i_1549_ = v___x_1559_;
v_bs_1550_ = v___x_1561_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_1563_, lean_object* v_i_1564_, lean_object* v_bs_1565_){
_start:
{
size_t v_sz_boxed_1566_; size_t v_i_boxed_1567_; lean_object* v_res_1568_; 
v_sz_boxed_1566_ = lean_unbox_usize(v_sz_1563_);
lean_dec(v_sz_1563_);
v_i_boxed_1567_ = lean_unbox_usize(v_i_1564_);
lean_dec(v_i_1564_);
v_res_1568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(v_sz_boxed_1566_, v_i_boxed_1567_, v_bs_1565_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(lean_object* v_oldTraces_1569_, lean_object* v_data_1570_, lean_object* v_ref_1571_, lean_object* v_msg_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_toCold_1578_; lean_object* v_currRecDepth_1579_; lean_object* v_ref_1580_; uint8_t v_diag_1581_; uint8_t v_suppressElabErrors_1582_; lean_object* v_ref_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v_traceState_1586_; lean_object* v_traces_1587_; lean_object* v___x_1588_; size_t v_sz_1589_; size_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v_msg_1594_; lean_object* v___x_1595_; lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1633_; 
v_toCold_1578_ = lean_ctor_get(v___y_1575_, 0);
v_currRecDepth_1579_ = lean_ctor_get(v___y_1575_, 1);
v_ref_1580_ = lean_ctor_get(v___y_1575_, 2);
v_diag_1581_ = lean_ctor_get_uint8(v___y_1575_, sizeof(void*)*3);
v_suppressElabErrors_1582_ = lean_ctor_get_uint8(v___y_1575_, sizeof(void*)*3 + 1);
v_ref_1583_ = l_Lean_replaceRef(v_ref_1571_, v_ref_1580_);
lean_inc(v_currRecDepth_1579_);
lean_inc_ref(v_toCold_1578_);
v___x_1584_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1584_, 0, v_toCold_1578_);
lean_ctor_set(v___x_1584_, 1, v_currRecDepth_1579_);
lean_ctor_set(v___x_1584_, 2, v_ref_1583_);
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*3, v_diag_1581_);
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*3 + 1, v_suppressElabErrors_1582_);
v___x_1585_ = lean_st_ref_get(v___y_1576_);
v_traceState_1586_ = lean_ctor_get(v___x_1585_, 4);
lean_inc_ref(v_traceState_1586_);
lean_dec(v___x_1585_);
v_traces_1587_ = lean_ctor_get(v_traceState_1586_, 0);
lean_inc_ref(v_traces_1587_);
lean_dec_ref(v_traceState_1586_);
v___x_1588_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1587_);
lean_dec_ref(v_traces_1587_);
v_sz_1589_ = lean_array_size(v___x_1588_);
v___x_1590_ = ((size_t)0ULL);
v___x_1591_ = l_unsafeCast___redArg(v___x_1588_);
lean_dec_ref(v___x_1588_);
v___x_1592_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(v_sz_1589_, v___x_1590_, v___x_1591_);
v___x_1593_ = l_unsafeCast___redArg(v___x_1592_);
lean_dec_ref(v___x_1592_);
v_msg_1594_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1594_, 0, v_data_1570_);
lean_ctor_set(v_msg_1594_, 1, v_msg_1572_);
lean_ctor_set(v_msg_1594_, 2, v___x_1593_);
v___x_1595_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msg_1594_, v___y_1573_, v___y_1574_, v___x_1584_, v___y_1576_);
lean_dec_ref_known(v___x_1584_, 3);
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1633_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1633_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v_traceState_1601_; lean_object* v_env_1602_; lean_object* v_nextMacroScope_1603_; lean_object* v_ngen_1604_; lean_object* v_auxDeclNGen_1605_; lean_object* v_cache_1606_; lean_object* v_messages_1607_; lean_object* v_infoState_1608_; lean_object* v_snapshotTasks_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1632_; 
v___x_1600_ = lean_st_ref_take(v___y_1576_);
v_traceState_1601_ = lean_ctor_get(v___x_1600_, 4);
v_env_1602_ = lean_ctor_get(v___x_1600_, 0);
v_nextMacroScope_1603_ = lean_ctor_get(v___x_1600_, 1);
v_ngen_1604_ = lean_ctor_get(v___x_1600_, 2);
v_auxDeclNGen_1605_ = lean_ctor_get(v___x_1600_, 3);
v_cache_1606_ = lean_ctor_get(v___x_1600_, 5);
v_messages_1607_ = lean_ctor_get(v___x_1600_, 6);
v_infoState_1608_ = lean_ctor_get(v___x_1600_, 7);
v_snapshotTasks_1609_ = lean_ctor_get(v___x_1600_, 8);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1611_ = v___x_1600_;
v_isShared_1612_ = v_isSharedCheck_1632_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_snapshotTasks_1609_);
lean_inc(v_infoState_1608_);
lean_inc(v_messages_1607_);
lean_inc(v_cache_1606_);
lean_inc(v_traceState_1601_);
lean_inc(v_auxDeclNGen_1605_);
lean_inc(v_ngen_1604_);
lean_inc(v_nextMacroScope_1603_);
lean_inc(v_env_1602_);
lean_dec(v___x_1600_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1632_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
uint64_t v_tid_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1630_; 
v_tid_1613_ = lean_ctor_get_uint64(v_traceState_1601_, sizeof(void*)*1);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_traceState_1601_);
if (v_isSharedCheck_1630_ == 0)
{
lean_object* v_unused_1631_; 
v_unused_1631_ = lean_ctor_get(v_traceState_1601_, 0);
lean_dec(v_unused_1631_);
v___x_1615_ = v_traceState_1601_;
v_isShared_1616_ = v_isSharedCheck_1630_;
goto v_resetjp_1614_;
}
else
{
lean_dec(v_traceState_1601_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1630_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1617_ = lean_box(0);
v___x_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1618_, 0, v_ref_1571_);
lean_ctor_set(v___x_1618_, 1, v_a_1596_);
v___x_1619_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1569_, v___x_1618_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1619_);
v___x_1621_ = v___x_1615_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1619_);
lean_ctor_set_uint64(v_reuseFailAlloc_1629_, sizeof(void*)*1, v_tid_1613_);
v___x_1621_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1623_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 4, v___x_1621_);
v___x_1623_ = v___x_1611_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_env_1602_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v_nextMacroScope_1603_);
lean_ctor_set(v_reuseFailAlloc_1628_, 2, v_ngen_1604_);
lean_ctor_set(v_reuseFailAlloc_1628_, 3, v_auxDeclNGen_1605_);
lean_ctor_set(v_reuseFailAlloc_1628_, 4, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1628_, 5, v_cache_1606_);
lean_ctor_set(v_reuseFailAlloc_1628_, 6, v_messages_1607_);
lean_ctor_set(v_reuseFailAlloc_1628_, 7, v_infoState_1608_);
lean_ctor_set(v_reuseFailAlloc_1628_, 8, v_snapshotTasks_1609_);
v___x_1623_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1624_ = lean_st_ref_put(v___y_1576_, v___x_1623_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1617_);
v___x_1626_ = v___x_1598_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___x_1617_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3___boxed(lean_object* v_oldTraces_1634_, lean_object* v_data_1635_, lean_object* v_ref_1636_, lean_object* v_msg_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(v_oldTraces_1634_, v_data_1635_, v_ref_1636_, v_msg_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
return v_res_1643_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1644_; double v___x_1645_; 
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = lean_float_of_nat(v___x_1644_);
return v___x_1645_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1));
v___x_1648_ = l_Lean_stringToMessageData(v___x_1647_);
return v___x_1648_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1649_; double v___x_1650_; 
v___x_1649_ = lean_unsigned_to_nat(1000u);
v___x_1650_ = lean_float_of_nat(v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(lean_object* v_cls_1651_, uint8_t v_collapsed_1652_, lean_object* v_tag_1653_, lean_object* v_opts_1654_, uint8_t v_clsEnabled_1655_, lean_object* v_oldTraces_1656_, lean_object* v_msg_1657_, lean_object* v_resStartStop_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v_fst_1664_; lean_object* v_snd_1665_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v_data_1669_; lean_object* v_fst_1672_; lean_object* v_snd_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; lean_object* v___y_1677_; lean_object* v_a_1678_; uint8_t v___y_1693_; double v___y_1724_; 
v_fst_1664_ = lean_ctor_get(v_resStartStop_1658_, 0);
lean_inc(v_fst_1664_);
v_snd_1665_ = lean_ctor_get(v_resStartStop_1658_, 1);
lean_inc(v_snd_1665_);
lean_dec_ref(v_resStartStop_1658_);
v_fst_1672_ = lean_ctor_get(v_snd_1665_, 0);
lean_inc(v_fst_1672_);
v_snd_1673_ = lean_ctor_get(v_snd_1665_, 1);
lean_inc(v_snd_1673_);
lean_dec(v_snd_1665_);
v___x_1674_ = l_Lean_trace_profiler;
v___x_1675_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1654_, v___x_1674_);
if (v___x_1675_ == 0)
{
v___y_1693_ = v___x_1675_;
goto v___jp_1692_;
}
else
{
lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1729_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1730_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1654_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; double v___x_1733_; double v___x_1734_; double v___x_1735_; 
v___x_1731_ = l_Lean_trace_profiler_threshold;
v___x_1732_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1654_, v___x_1731_);
v___x_1733_ = lean_float_of_nat(v___x_1732_);
v___x_1734_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3);
v___x_1735_ = lean_float_div(v___x_1733_, v___x_1734_);
v___y_1724_ = v___x_1735_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1736_; lean_object* v___x_1737_; double v___x_1738_; 
v___x_1736_ = l_Lean_trace_profiler_threshold;
v___x_1737_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1654_, v___x_1736_);
v___x_1738_ = lean_float_of_nat(v___x_1737_);
v___y_1724_ = v___x_1738_;
goto v___jp_1723_;
}
}
v___jp_1666_:
{
lean_object* v___x_1670_; 
lean_inc(v___y_1667_);
v___x_1670_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(v_oldTraces_1656_, v_data_1669_, v___y_1667_, v___y_1668_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v___x_1671_; 
lean_dec_ref_known(v___x_1670_, 1);
v___x_1671_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_fst_1664_);
return v___x_1671_;
}
else
{
lean_dec(v_fst_1664_);
return v___x_1670_;
}
}
v___jp_1676_:
{
uint8_t v_result_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; double v___x_1682_; lean_object* v_data_1683_; 
v_result_1679_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(v_fst_1664_);
v___x_1680_ = lean_box(v_result_1679_);
v___x_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
v___x_1682_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0);
lean_inc_ref(v_tag_1653_);
lean_inc_ref(v___x_1681_);
lean_inc(v_cls_1651_);
v_data_1683_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1683_, 0, v_cls_1651_);
lean_ctor_set(v_data_1683_, 1, v___x_1681_);
lean_ctor_set(v_data_1683_, 2, v_tag_1653_);
lean_ctor_set_float(v_data_1683_, sizeof(void*)*3, v___x_1682_);
lean_ctor_set_float(v_data_1683_, sizeof(void*)*3 + 8, v___x_1682_);
lean_ctor_set_uint8(v_data_1683_, sizeof(void*)*3 + 16, v_collapsed_1652_);
if (v___x_1675_ == 0)
{
lean_dec_ref_known(v___x_1681_, 1);
lean_dec(v_snd_1673_);
lean_dec(v_fst_1672_);
lean_dec_ref(v_tag_1653_);
lean_dec(v_cls_1651_);
v___y_1667_ = v___y_1677_;
v___y_1668_ = v_a_1678_;
v_data_1669_ = v_data_1683_;
goto v___jp_1666_;
}
else
{
lean_object* v_data_1684_; double v___x_1685_; double v___x_1686_; 
lean_dec_ref_known(v_data_1683_, 3);
v_data_1684_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1684_, 0, v_cls_1651_);
lean_ctor_set(v_data_1684_, 1, v___x_1681_);
lean_ctor_set(v_data_1684_, 2, v_tag_1653_);
v___x_1685_ = lean_unbox_float(v_fst_1672_);
lean_dec(v_fst_1672_);
lean_ctor_set_float(v_data_1684_, sizeof(void*)*3, v___x_1685_);
v___x_1686_ = lean_unbox_float(v_snd_1673_);
lean_dec(v_snd_1673_);
lean_ctor_set_float(v_data_1684_, sizeof(void*)*3 + 8, v___x_1686_);
lean_ctor_set_uint8(v_data_1684_, sizeof(void*)*3 + 16, v_collapsed_1652_);
v___y_1667_ = v___y_1677_;
v___y_1668_ = v_a_1678_;
v_data_1669_ = v_data_1684_;
goto v___jp_1666_;
}
}
v___jp_1687_:
{
lean_object* v_ref_1688_; lean_object* v___x_1689_; 
v_ref_1688_ = lean_ctor_get(v___y_1661_, 2);
lean_inc(v___y_1662_);
lean_inc_ref(v___y_1661_);
lean_inc(v___y_1660_);
lean_inc_ref(v___y_1659_);
lean_inc(v_fst_1664_);
v___x_1689_ = lean_apply_6(v_msg_1657_, v_fst_1664_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, lean_box(0));
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___y_1677_ = v_ref_1688_;
v_a_1678_ = v_a_1690_;
goto v___jp_1676_;
}
else
{
lean_object* v___x_1691_; 
lean_dec_ref_known(v___x_1689_, 1);
v___x_1691_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2);
v___y_1677_ = v_ref_1688_;
v_a_1678_ = v___x_1691_;
goto v___jp_1676_;
}
}
v___jp_1692_:
{
if (v_clsEnabled_1655_ == 0)
{
if (v___y_1693_ == 0)
{
lean_object* v___x_1694_; lean_object* v_traceState_1695_; lean_object* v_env_1696_; lean_object* v_nextMacroScope_1697_; lean_object* v_ngen_1698_; lean_object* v_auxDeclNGen_1699_; lean_object* v_cache_1700_; lean_object* v_messages_1701_; lean_object* v_infoState_1702_; lean_object* v_snapshotTasks_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1722_; 
lean_dec(v_snd_1673_);
lean_dec(v_fst_1672_);
lean_dec_ref(v_msg_1657_);
lean_dec_ref(v_tag_1653_);
lean_dec(v_cls_1651_);
v___x_1694_ = lean_st_ref_take(v___y_1662_);
v_traceState_1695_ = lean_ctor_get(v___x_1694_, 4);
v_env_1696_ = lean_ctor_get(v___x_1694_, 0);
v_nextMacroScope_1697_ = lean_ctor_get(v___x_1694_, 1);
v_ngen_1698_ = lean_ctor_get(v___x_1694_, 2);
v_auxDeclNGen_1699_ = lean_ctor_get(v___x_1694_, 3);
v_cache_1700_ = lean_ctor_get(v___x_1694_, 5);
v_messages_1701_ = lean_ctor_get(v___x_1694_, 6);
v_infoState_1702_ = lean_ctor_get(v___x_1694_, 7);
v_snapshotTasks_1703_ = lean_ctor_get(v___x_1694_, 8);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1705_ = v___x_1694_;
v_isShared_1706_ = v_isSharedCheck_1722_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_snapshotTasks_1703_);
lean_inc(v_infoState_1702_);
lean_inc(v_messages_1701_);
lean_inc(v_cache_1700_);
lean_inc(v_traceState_1695_);
lean_inc(v_auxDeclNGen_1699_);
lean_inc(v_ngen_1698_);
lean_inc(v_nextMacroScope_1697_);
lean_inc(v_env_1696_);
lean_dec(v___x_1694_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1722_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
uint64_t v_tid_1707_; lean_object* v_traces_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1721_; 
v_tid_1707_ = lean_ctor_get_uint64(v_traceState_1695_, sizeof(void*)*1);
v_traces_1708_ = lean_ctor_get(v_traceState_1695_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_traceState_1695_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1710_ = v_traceState_1695_;
v_isShared_1711_ = v_isSharedCheck_1721_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_traces_1708_);
lean_dec(v_traceState_1695_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1721_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1714_; 
v___x_1712_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1656_, v_traces_1708_);
lean_dec_ref(v_traces_1708_);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v___x_1712_);
v___x_1714_ = v___x_1710_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1712_);
lean_ctor_set_uint64(v_reuseFailAlloc_1720_, sizeof(void*)*1, v_tid_1707_);
v___x_1714_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1716_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 4, v___x_1714_);
v___x_1716_ = v___x_1705_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_env_1696_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_nextMacroScope_1697_);
lean_ctor_set(v_reuseFailAlloc_1719_, 2, v_ngen_1698_);
lean_ctor_set(v_reuseFailAlloc_1719_, 3, v_auxDeclNGen_1699_);
lean_ctor_set(v_reuseFailAlloc_1719_, 4, v___x_1714_);
lean_ctor_set(v_reuseFailAlloc_1719_, 5, v_cache_1700_);
lean_ctor_set(v_reuseFailAlloc_1719_, 6, v_messages_1701_);
lean_ctor_set(v_reuseFailAlloc_1719_, 7, v_infoState_1702_);
lean_ctor_set(v_reuseFailAlloc_1719_, 8, v_snapshotTasks_1703_);
v___x_1716_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_st_ref_put(v___y_1662_, v___x_1716_);
v___x_1718_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_fst_1664_);
return v___x_1718_;
}
}
}
}
}
else
{
goto v___jp_1687_;
}
}
else
{
goto v___jp_1687_;
}
}
v___jp_1723_:
{
double v___x_1725_; double v___x_1726_; double v___x_1727_; uint8_t v___x_1728_; 
v___x_1725_ = lean_unbox_float(v_snd_1673_);
v___x_1726_ = lean_unbox_float(v_fst_1672_);
v___x_1727_ = lean_float_sub(v___x_1725_, v___x_1726_);
v___x_1728_ = lean_float_decLt(v___y_1724_, v___x_1727_);
v___y_1693_ = v___x_1728_;
goto v___jp_1692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___boxed(lean_object* v_cls_1739_, lean_object* v_collapsed_1740_, lean_object* v_tag_1741_, lean_object* v_opts_1742_, lean_object* v_clsEnabled_1743_, lean_object* v_oldTraces_1744_, lean_object* v_msg_1745_, lean_object* v_resStartStop_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
uint8_t v_collapsed_boxed_1752_; uint8_t v_clsEnabled_boxed_1753_; lean_object* v_res_1754_; 
v_collapsed_boxed_1752_ = lean_unbox(v_collapsed_1740_);
v_clsEnabled_boxed_1753_ = lean_unbox(v_clsEnabled_1743_);
v_res_1754_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v_cls_1739_, v_collapsed_boxed_1752_, v_tag_1741_, v_opts_1742_, v_clsEnabled_boxed_1753_, v_oldTraces_1744_, v_msg_1745_, v_resStartStop_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec_ref(v_opts_1742_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(lean_object* v_upperBound_1755_, lean_object* v___x_1756_, lean_object* v___x_1757_, lean_object* v___x_1758_, lean_object* v_a_1759_, lean_object* v_b_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
uint8_t v___x_1766_; 
v___x_1766_ = lean_nat_dec_lt(v_a_1759_, v_upperBound_1755_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; 
lean_dec(v_a_1759_);
lean_dec(v___x_1758_);
lean_dec(v___x_1757_);
lean_dec(v___x_1756_);
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_b_1760_);
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1768_ = lean_box(0);
v___x_1769_ = lean_unsigned_to_nat(1u);
v___x_1770_ = lean_nat_add(v_a_1759_, v___x_1769_);
lean_dec(v_a_1759_);
lean_inc_n(v___x_1770_, 2);
lean_inc(v___x_1756_);
v___x_1771_ = lean_name_append_index_after(v___x_1756_, v___x_1770_);
lean_inc(v___x_1757_);
v___x_1772_ = lean_name_append_index_after(v___x_1757_, v___x_1770_);
lean_inc(v___x_1758_);
v___x_1773_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1771_, v___x_1758_, v___x_1772_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_dec_ref_known(v___x_1773_, 1);
v_a_1759_ = v___x_1770_;
v_b_1760_ = v___x_1768_;
goto _start;
}
else
{
lean_dec(v___x_1770_);
lean_dec(v___x_1758_);
lean_dec(v___x_1757_);
lean_dec(v___x_1756_);
return v___x_1773_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg___boxed(lean_object* v_upperBound_1775_, lean_object* v___x_1776_, lean_object* v___x_1777_, lean_object* v___x_1778_, lean_object* v_a_1779_, lean_object* v_b_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_upperBound_1775_, v___x_1776_, v___x_1777_, v___x_1778_, v_a_1779_, v_b_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v_upperBound_1775_);
return v_res_1786_;
}
}
static lean_object* _init_l_Lean_mkBelow___closed__6(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = ((lean_object*)(l_Lean_mkBelow___closed__2));
v___x_1797_ = ((lean_object*)(l_Lean_mkBelow___closed__5));
v___x_1798_ = l_Lean_Name_append(v___x_1797_, v___x_1796_);
return v___x_1798_;
}
}
static double _init_l_Lean_mkBelow___closed__7(void){
_start:
{
lean_object* v___x_1799_; double v___x_1800_; 
v___x_1799_ = lean_unsigned_to_nat(1000000000u);
v___x_1800_ = lean_float_of_nat(v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow(lean_object* v_indName_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_toCold_1807_; lean_object* v_options_1808_; lean_object* v_inheritedTraceOptions_1809_; uint8_t v_hasTrace_1810_; lean_object* v___x_1811_; 
v_toCold_1807_ = lean_ctor_get(v_a_1804_, 0);
v_options_1808_ = lean_ctor_get(v_toCold_1807_, 2);
v_inheritedTraceOptions_1809_ = lean_ctor_get(v_toCold_1807_, 11);
v_hasTrace_1810_ = lean_ctor_get_uint8(v_options_1808_, sizeof(void*)*1);
v___x_1811_ = l_Lean_instInhabitedName;
if (v_hasTrace_1810_ == 0)
{
lean_object* v___x_1812_; 
lean_inc(v_indName_1801_);
v___x_1812_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1876_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1815_ = v___x_1812_;
v_isShared_1816_ = v_isSharedCheck_1876_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1876_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
if (lean_obj_tag(v_a_1813_) == 5)
{
lean_object* v_val_1817_; uint8_t v_isRec_1818_; 
v_val_1817_ = lean_ctor_get(v_a_1813_, 0);
lean_inc_ref(v_val_1817_);
lean_dec_ref_known(v_a_1813_, 1);
v_isRec_1818_ = lean_ctor_get_uint8(v_val_1817_, sizeof(void*)*6);
if (v_isRec_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
lean_dec_ref(v_val_1817_);
lean_dec(v_indName_1801_);
v___x_1819_ = lean_box(0);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1819_);
v___x_1821_ = v___x_1815_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v_toConstantVal_1823_; lean_object* v_numParams_1824_; lean_object* v_all_1825_; lean_object* v_numNested_1826_; lean_object* v_type_1827_; lean_object* v___x_1828_; 
lean_del_object(v___x_1815_);
v_toConstantVal_1823_ = lean_ctor_get(v_val_1817_, 0);
lean_inc_ref(v_toConstantVal_1823_);
v_numParams_1824_ = lean_ctor_get(v_val_1817_, 1);
lean_inc(v_numParams_1824_);
v_all_1825_ = lean_ctor_get(v_val_1817_, 3);
lean_inc(v_all_1825_);
v_numNested_1826_ = lean_ctor_get(v_val_1817_, 5);
lean_inc(v_numNested_1826_);
lean_dec_ref(v_val_1817_);
v_type_1827_ = lean_ctor_get(v_toConstantVal_1823_, 2);
lean_inc_ref(v_type_1827_);
lean_dec_ref(v_toConstantVal_1823_);
v___x_1828_ = l_Lean_Meta_isPropFormerType(v_type_1827_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1863_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1863_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1863_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
uint8_t v___x_1833_; 
v___x_1833_ = lean_unbox(v_a_1829_);
lean_dec(v_a_1829_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_del_object(v___x_1831_);
lean_inc_n(v_indName_1801_, 2);
v___x_1834_ = l_Lean_mkRecName(v_indName_1801_);
v___x_1835_ = l_Lean_mkBelowName(v_indName_1801_);
lean_inc(v___x_1835_);
lean_inc(v_numParams_1824_);
lean_inc(v___x_1834_);
v___x_1836_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1834_, v_numParams_1824_, v___x_1835_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1857_; 
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1857_ == 0)
{
lean_object* v_unused_1858_; 
v_unused_1858_ = lean_ctor_get(v___x_1836_, 0);
lean_dec(v_unused_1858_);
v___x_1838_ = v___x_1836_;
v_isShared_1839_ = v_isSharedCheck_1857_;
goto v_resetjp_1837_;
}
else
{
lean_dec(v___x_1836_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1857_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = l_List_get_x21Internal___redArg(v___x_1811_, v_all_1825_, v___x_1840_);
lean_dec(v_all_1825_);
v___x_1842_ = lean_name_eq(v___x_1841_, v_indName_1801_);
lean_dec(v_indName_1801_);
lean_dec(v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; lean_object* v___x_1845_; 
lean_dec(v___x_1835_);
lean_dec(v___x_1834_);
lean_dec(v_numNested_1826_);
lean_dec(v_numParams_1824_);
v___x_1843_ = lean_box(0);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1843_);
v___x_1845_ = v___x_1838_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1848_; 
lean_del_object(v___x_1838_);
v___x_1847_ = lean_box(0);
v___x_1848_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_1826_, v___x_1834_, v___x_1835_, v_numParams_1824_, v___x_1840_, v___x_1847_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_numNested_1826_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1855_ == 0)
{
lean_object* v_unused_1856_; 
v_unused_1856_ = lean_ctor_get(v___x_1848_, 0);
lean_dec(v_unused_1856_);
v___x_1850_ = v___x_1848_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_dec(v___x_1848_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v___x_1847_);
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1847_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
else
{
return v___x_1848_;
}
}
}
}
else
{
lean_dec(v___x_1835_);
lean_dec(v___x_1834_);
lean_dec(v_numNested_1826_);
lean_dec(v_all_1825_);
lean_dec(v_numParams_1824_);
lean_dec(v_indName_1801_);
return v___x_1836_;
}
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
lean_dec(v_numNested_1826_);
lean_dec(v_all_1825_);
lean_dec(v_numParams_1824_);
lean_dec(v_indName_1801_);
v___x_1859_ = lean_box(0);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1859_);
v___x_1861_ = v___x_1831_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v_numNested_1826_);
lean_dec(v_all_1825_);
lean_dec(v_numParams_1824_);
lean_dec(v_indName_1801_);
v_a_1864_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1828_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1828_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1874_; 
lean_dec(v_a_1813_);
lean_dec(v_indName_1801_);
v___x_1872_ = lean_box(0);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1872_);
v___x_1874_ = v___x_1815_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v_indName_1801_);
v_a_1877_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1812_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1812_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
else
{
lean_object* v___f_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; uint8_t v___x_1889_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v_a_1893_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v_a_1908_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v_a_1913_; lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v_a_1918_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v_a_1930_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v_a_1935_; 
lean_inc(v_indName_1801_);
v___f_1885_ = lean_alloc_closure((void*)(l_Lean_mkBelow___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1885_, 0, v_indName_1801_);
v___x_1886_ = ((lean_object*)(l_Lean_mkBelow___closed__2));
v___x_1887_ = ((lean_object*)(l_Lean_mkBelow___closed__3));
v___x_1888_ = lean_obj_once(&l_Lean_mkBelow___closed__6, &l_Lean_mkBelow___closed__6_once, _init_l_Lean_mkBelow___closed__6);
v___x_1889_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1809_, v_options_1808_, v___x_1888_);
if (v___x_1889_ == 0)
{
lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2002_ = l_Lean_trace_profiler;
v___x_2003_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_1808_, v___x_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; 
lean_dec_ref(v___f_1885_);
lean_inc(v_indName_1801_);
v___x_2004_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2068_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2068_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2068_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
if (lean_obj_tag(v_a_2005_) == 5)
{
lean_object* v_val_2009_; uint8_t v_isRec_2010_; 
v_val_2009_ = lean_ctor_get(v_a_2005_, 0);
lean_inc_ref(v_val_2009_);
lean_dec_ref_known(v_a_2005_, 1);
v_isRec_2010_ = lean_ctor_get_uint8(v_val_2009_, sizeof(void*)*6);
if (v_isRec_2010_ == 0)
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
lean_dec_ref(v_val_2009_);
lean_dec(v_indName_1801_);
v___x_2011_ = lean_box(0);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2011_);
v___x_2013_ = v___x_2007_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
else
{
lean_object* v_toConstantVal_2015_; lean_object* v_numParams_2016_; lean_object* v_all_2017_; lean_object* v_numNested_2018_; lean_object* v_type_2019_; lean_object* v___x_2020_; 
lean_del_object(v___x_2007_);
v_toConstantVal_2015_ = lean_ctor_get(v_val_2009_, 0);
lean_inc_ref(v_toConstantVal_2015_);
v_numParams_2016_ = lean_ctor_get(v_val_2009_, 1);
lean_inc(v_numParams_2016_);
v_all_2017_ = lean_ctor_get(v_val_2009_, 3);
lean_inc(v_all_2017_);
v_numNested_2018_ = lean_ctor_get(v_val_2009_, 5);
lean_inc(v_numNested_2018_);
lean_dec_ref(v_val_2009_);
v_type_2019_ = lean_ctor_get(v_toConstantVal_2015_, 2);
lean_inc_ref(v_type_2019_);
lean_dec_ref(v_toConstantVal_2015_);
v___x_2020_ = l_Lean_Meta_isPropFormerType(v_type_2019_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2055_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2055_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2055_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
uint8_t v___x_2025_; 
v___x_2025_ = lean_unbox(v_a_2021_);
lean_dec(v_a_2021_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_del_object(v___x_2023_);
lean_inc_n(v_indName_1801_, 2);
v___x_2026_ = l_Lean_mkRecName(v_indName_1801_);
v___x_2027_ = l_Lean_mkBelowName(v_indName_1801_);
lean_inc(v___x_2027_);
lean_inc(v_numParams_2016_);
lean_inc(v___x_2026_);
v___x_2028_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_2026_, v_numParams_2016_, v___x_2027_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2049_; 
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v___x_2028_, 0);
lean_dec(v_unused_2050_);
v___x_2030_ = v___x_2028_;
v_isShared_2031_ = v_isSharedCheck_2049_;
goto v_resetjp_2029_;
}
else
{
lean_dec(v___x_2028_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2049_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; uint8_t v___x_2034_; 
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = l_List_get_x21Internal___redArg(v___x_1811_, v_all_2017_, v___x_2032_);
lean_dec(v_all_2017_);
v___x_2034_ = lean_name_eq(v___x_2033_, v_indName_1801_);
lean_dec(v_indName_1801_);
lean_dec(v___x_2033_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; lean_object* v___x_2037_; 
lean_dec(v___x_2027_);
lean_dec(v___x_2026_);
lean_dec(v_numNested_2018_);
lean_dec(v_numParams_2016_);
v___x_2035_ = lean_box(0);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2035_);
v___x_2037_ = v___x_2030_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
else
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_del_object(v___x_2030_);
v___x_2039_ = lean_box(0);
v___x_2040_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_2018_, v___x_2026_, v___x_2027_, v_numParams_2016_, v___x_2032_, v___x_2039_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_numNested_2018_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v___x_2040_, 0);
lean_dec(v_unused_2048_);
v___x_2042_ = v___x_2040_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_dec(v___x_2040_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2039_);
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2039_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
else
{
return v___x_2040_;
}
}
}
}
else
{
lean_dec(v___x_2027_);
lean_dec(v___x_2026_);
lean_dec(v_numNested_2018_);
lean_dec(v_all_2017_);
lean_dec(v_numParams_2016_);
lean_dec(v_indName_1801_);
return v___x_2028_;
}
}
else
{
lean_object* v___x_2051_; lean_object* v___x_2053_; 
lean_dec(v_numNested_2018_);
lean_dec(v_all_2017_);
lean_dec(v_numParams_2016_);
lean_dec(v_indName_1801_);
v___x_2051_ = lean_box(0);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2051_);
v___x_2053_ = v___x_2023_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_dec(v_numNested_2018_);
lean_dec(v_all_2017_);
lean_dec(v_numParams_2016_);
lean_dec(v_indName_1801_);
v_a_2056_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2020_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2020_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
lean_dec(v_a_2005_);
lean_dec(v_indName_1801_);
v___x_2064_ = lean_box(0);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2064_);
v___x_2066_ = v___x_2007_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_indName_1801_);
v_a_2069_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2004_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2004_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
goto v___jp_1937_;
}
}
else
{
goto v___jp_1937_;
}
v___jp_1890_:
{
lean_object* v___x_1894_; double v___x_1895_; double v___x_1896_; double v___x_1897_; double v___x_1898_; double v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1894_ = lean_io_mono_nanos_now();
v___x_1895_ = lean_float_of_nat(v___y_1891_);
v___x_1896_ = lean_float_once(&l_Lean_mkBelow___closed__7, &l_Lean_mkBelow___closed__7_once, _init_l_Lean_mkBelow___closed__7);
v___x_1897_ = lean_float_div(v___x_1895_, v___x_1896_);
v___x_1898_ = lean_float_of_nat(v___x_1894_);
v___x_1899_ = lean_float_div(v___x_1898_, v___x_1896_);
v___x_1900_ = lean_box_float(v___x_1897_);
v___x_1901_ = lean_box_float(v___x_1899_);
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1900_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v_a_1893_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
v___x_1904_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_1886_, v_hasTrace_1810_, v___x_1887_, v_options_1808_, v___x_1889_, v___y_1892_, v___f_1885_, v___x_1903_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
return v___x_1904_;
}
v___jp_1905_:
{
lean_object* v___x_1909_; 
v___x_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1909_, 0, v_a_1908_);
v___y_1891_ = v___y_1906_;
v___y_1892_ = v___y_1907_;
v_a_1893_ = v___x_1909_;
goto v___jp_1890_;
}
v___jp_1910_:
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v_a_1913_);
v___y_1891_ = v___y_1911_;
v___y_1892_ = v___y_1912_;
v_a_1893_ = v___x_1914_;
goto v___jp_1890_;
}
v___jp_1915_:
{
lean_object* v___x_1919_; double v___x_1920_; double v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1919_ = lean_io_get_num_heartbeats();
v___x_1920_ = lean_float_of_nat(v___y_1916_);
v___x_1921_ = lean_float_of_nat(v___x_1919_);
v___x_1922_ = lean_box_float(v___x_1920_);
v___x_1923_ = lean_box_float(v___x_1921_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v_a_1918_);
lean_ctor_set(v___x_1925_, 1, v___x_1924_);
v___x_1926_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_1886_, v_hasTrace_1810_, v___x_1887_, v_options_1808_, v___x_1889_, v___y_1917_, v___f_1885_, v___x_1925_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
return v___x_1926_;
}
v___jp_1927_:
{
lean_object* v___x_1931_; 
v___x_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_a_1930_);
v___y_1916_ = v___y_1928_;
v___y_1917_ = v___y_1929_;
v_a_1918_ = v___x_1931_;
goto v___jp_1915_;
}
v___jp_1932_:
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_a_1935_);
v___y_1916_ = v___y_1933_;
v___y_1917_ = v___y_1934_;
v_a_1918_ = v___x_1936_;
goto v___jp_1915_;
}
v___jp_1937_:
{
lean_object* v___x_1938_; lean_object* v_a_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; 
v___x_1938_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v_a_1805_);
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref(v___x_1938_);
v___x_1940_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1941_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_1808_, v___x_1940_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_io_mono_nanos_now();
lean_inc(v_indName_1801_);
v___x_1943_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
if (lean_obj_tag(v_a_1944_) == 5)
{
lean_object* v_val_1945_; uint8_t v_isRec_1946_; 
v_val_1945_ = lean_ctor_get(v_a_1944_, 0);
lean_inc_ref(v_val_1945_);
lean_dec_ref_known(v_a_1944_, 1);
v_isRec_1946_ = lean_ctor_get_uint8(v_val_1945_, sizeof(void*)*6);
if (v_isRec_1946_ == 0)
{
lean_object* v___x_1947_; 
lean_dec_ref(v_val_1945_);
lean_dec(v_indName_1801_);
v___x_1947_ = lean_box(0);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v___x_1947_;
goto v___jp_1905_;
}
else
{
lean_object* v_toConstantVal_1948_; lean_object* v_numParams_1949_; lean_object* v_all_1950_; lean_object* v_numNested_1951_; lean_object* v_type_1952_; lean_object* v___x_1953_; 
v_toConstantVal_1948_ = lean_ctor_get(v_val_1945_, 0);
lean_inc_ref(v_toConstantVal_1948_);
v_numParams_1949_ = lean_ctor_get(v_val_1945_, 1);
lean_inc(v_numParams_1949_);
v_all_1950_ = lean_ctor_get(v_val_1945_, 3);
lean_inc(v_all_1950_);
v_numNested_1951_ = lean_ctor_get(v_val_1945_, 5);
lean_inc(v_numNested_1951_);
lean_dec_ref(v_val_1945_);
v_type_1952_ = lean_ctor_get(v_toConstantVal_1948_, 2);
lean_inc_ref(v_type_1952_);
lean_dec_ref(v_toConstantVal_1948_);
v___x_1953_ = l_Lean_Meta_isPropFormerType(v_type_1952_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; uint8_t v___x_1955_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1954_);
lean_dec_ref_known(v___x_1953_, 1);
v___x_1955_ = lean_unbox(v_a_1954_);
lean_dec(v_a_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
lean_inc_n(v_indName_1801_, 2);
v___x_1956_ = l_Lean_mkRecName(v_indName_1801_);
v___x_1957_ = l_Lean_mkBelowName(v_indName_1801_);
lean_inc(v___x_1957_);
lean_inc(v_numParams_1949_);
lean_inc(v___x_1956_);
v___x_1958_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1956_, v_numParams_1949_, v___x_1957_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
lean_dec_ref_known(v___x_1958_, 1);
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = l_List_get_x21Internal___redArg(v___x_1811_, v_all_1950_, v___x_1959_);
lean_dec(v_all_1950_);
v___x_1961_ = lean_name_eq(v___x_1960_, v_indName_1801_);
lean_dec(v_indName_1801_);
lean_dec(v___x_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; 
lean_dec(v___x_1957_);
lean_dec(v___x_1956_);
lean_dec(v_numNested_1951_);
lean_dec(v_numParams_1949_);
v___x_1962_ = lean_box(0);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v___x_1962_;
goto v___jp_1905_;
}
else
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1963_ = lean_box(0);
v___x_1964_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_1951_, v___x_1956_, v___x_1957_, v_numParams_1949_, v___x_1959_, v___x_1963_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_numNested_1951_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_dec_ref_known(v___x_1964_, 1);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v___x_1963_;
goto v___jp_1905_;
}
else
{
lean_object* v_a_1965_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1964_, 1);
v___y_1911_ = v___x_1942_;
v___y_1912_ = v_a_1939_;
v_a_1913_ = v_a_1965_;
goto v___jp_1910_;
}
}
}
else
{
lean_dec(v___x_1957_);
lean_dec(v___x_1956_);
lean_dec(v_numNested_1951_);
lean_dec(v_all_1950_);
lean_dec(v_numParams_1949_);
lean_dec(v_indName_1801_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1966_; 
v_a_1966_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1958_, 1);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v_a_1966_;
goto v___jp_1905_;
}
else
{
lean_object* v_a_1967_; 
v_a_1967_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1967_);
lean_dec_ref_known(v___x_1958_, 1);
v___y_1911_ = v___x_1942_;
v___y_1912_ = v_a_1939_;
v_a_1913_ = v_a_1967_;
goto v___jp_1910_;
}
}
}
else
{
lean_object* v___x_1968_; 
lean_dec(v_numNested_1951_);
lean_dec(v_all_1950_);
lean_dec(v_numParams_1949_);
lean_dec(v_indName_1801_);
v___x_1968_ = lean_box(0);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v___x_1968_;
goto v___jp_1905_;
}
}
else
{
lean_object* v_a_1969_; 
lean_dec(v_numNested_1951_);
lean_dec(v_all_1950_);
lean_dec(v_numParams_1949_);
lean_dec(v_indName_1801_);
v_a_1969_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1953_, 1);
v___y_1911_ = v___x_1942_;
v___y_1912_ = v_a_1939_;
v_a_1913_ = v_a_1969_;
goto v___jp_1910_;
}
}
}
else
{
lean_object* v___x_1970_; 
lean_dec(v_a_1944_);
lean_dec(v_indName_1801_);
v___x_1970_ = lean_box(0);
v___y_1906_ = v___x_1942_;
v___y_1907_ = v_a_1939_;
v_a_1908_ = v___x_1970_;
goto v___jp_1905_;
}
}
else
{
lean_object* v_a_1971_; 
lean_dec(v_indName_1801_);
v_a_1971_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1943_, 1);
v___y_1911_ = v___x_1942_;
v___y_1912_ = v_a_1939_;
v_a_1913_ = v_a_1971_;
goto v___jp_1910_;
}
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = lean_io_get_num_heartbeats();
lean_inc(v_indName_1801_);
v___x_1973_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
if (lean_obj_tag(v_a_1974_) == 5)
{
lean_object* v_val_1975_; uint8_t v_isRec_1976_; 
v_val_1975_ = lean_ctor_get(v_a_1974_, 0);
lean_inc_ref(v_val_1975_);
lean_dec_ref_known(v_a_1974_, 1);
v_isRec_1976_ = lean_ctor_get_uint8(v_val_1975_, sizeof(void*)*6);
if (v_isRec_1976_ == 0)
{
lean_object* v___x_1977_; 
lean_dec_ref(v_val_1975_);
lean_dec(v_indName_1801_);
v___x_1977_ = lean_box(0);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v___x_1977_;
goto v___jp_1927_;
}
else
{
lean_object* v_toConstantVal_1978_; lean_object* v_numParams_1979_; lean_object* v_all_1980_; lean_object* v_numNested_1981_; lean_object* v_type_1982_; lean_object* v___x_1983_; 
v_toConstantVal_1978_ = lean_ctor_get(v_val_1975_, 0);
lean_inc_ref(v_toConstantVal_1978_);
v_numParams_1979_ = lean_ctor_get(v_val_1975_, 1);
lean_inc(v_numParams_1979_);
v_all_1980_ = lean_ctor_get(v_val_1975_, 3);
lean_inc(v_all_1980_);
v_numNested_1981_ = lean_ctor_get(v_val_1975_, 5);
lean_inc(v_numNested_1981_);
lean_dec_ref(v_val_1975_);
v_type_1982_ = lean_ctor_get(v_toConstantVal_1978_, 2);
lean_inc_ref(v_type_1982_);
lean_dec_ref(v_toConstantVal_1978_);
v___x_1983_ = l_Lean_Meta_isPropFormerType(v_type_1982_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; uint8_t v___x_1985_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v___x_1985_ = lean_unbox(v_a_1984_);
lean_dec(v_a_1984_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_inc_n(v_indName_1801_, 2);
v___x_1986_ = l_Lean_mkRecName(v_indName_1801_);
v___x_1987_ = l_Lean_mkBelowName(v_indName_1801_);
lean_inc(v___x_1987_);
lean_inc(v_numParams_1979_);
lean_inc(v___x_1986_);
v___x_1988_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1986_, v_numParams_1979_, v___x_1987_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v___x_1989_; lean_object* v___x_1990_; uint8_t v___x_1991_; 
lean_dec_ref_known(v___x_1988_, 1);
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = l_List_get_x21Internal___redArg(v___x_1811_, v_all_1980_, v___x_1989_);
lean_dec(v_all_1980_);
v___x_1991_ = lean_name_eq(v___x_1990_, v_indName_1801_);
lean_dec(v_indName_1801_);
lean_dec(v___x_1990_);
if (v___x_1991_ == 0)
{
lean_object* v___x_1992_; 
lean_dec(v___x_1987_);
lean_dec(v___x_1986_);
lean_dec(v_numNested_1981_);
lean_dec(v_numParams_1979_);
v___x_1992_ = lean_box(0);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v___x_1992_;
goto v___jp_1927_;
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_box(0);
v___x_1994_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_1981_, v___x_1986_, v___x_1987_, v_numParams_1979_, v___x_1989_, v___x_1993_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_numNested_1981_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_dec_ref_known(v___x_1994_, 1);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v___x_1993_;
goto v___jp_1927_;
}
else
{
lean_object* v_a_1995_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___y_1933_ = v___x_1972_;
v___y_1934_ = v_a_1939_;
v_a_1935_ = v_a_1995_;
goto v___jp_1932_;
}
}
}
else
{
lean_dec(v___x_1987_);
lean_dec(v___x_1986_);
lean_dec(v_numNested_1981_);
lean_dec(v_all_1980_);
lean_dec(v_numParams_1979_);
lean_dec(v_indName_1801_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1996_; 
v_a_1996_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1988_, 1);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v_a_1996_;
goto v___jp_1927_;
}
else
{
lean_object* v_a_1997_; 
v_a_1997_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1988_, 1);
v___y_1933_ = v___x_1972_;
v___y_1934_ = v_a_1939_;
v_a_1935_ = v_a_1997_;
goto v___jp_1932_;
}
}
}
else
{
lean_object* v___x_1998_; 
lean_dec(v_numNested_1981_);
lean_dec(v_all_1980_);
lean_dec(v_numParams_1979_);
lean_dec(v_indName_1801_);
v___x_1998_ = lean_box(0);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v___x_1998_;
goto v___jp_1927_;
}
}
else
{
lean_object* v_a_1999_; 
lean_dec(v_numNested_1981_);
lean_dec(v_all_1980_);
lean_dec(v_numParams_1979_);
lean_dec(v_indName_1801_);
v_a_1999_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1983_, 1);
v___y_1933_ = v___x_1972_;
v___y_1934_ = v_a_1939_;
v_a_1935_ = v_a_1999_;
goto v___jp_1932_;
}
}
}
else
{
lean_object* v___x_2000_; 
lean_dec(v_a_1974_);
lean_dec(v_indName_1801_);
v___x_2000_ = lean_box(0);
v___y_1928_ = v___x_1972_;
v___y_1929_ = v_a_1939_;
v_a_1930_ = v___x_2000_;
goto v___jp_1927_;
}
}
else
{
lean_object* v_a_2001_; 
lean_dec(v_indName_1801_);
v_a_2001_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_1973_, 1);
v___y_1933_ = v___x_1972_;
v___y_1934_ = v_a_1939_;
v_a_1935_ = v_a_2001_;
goto v___jp_1932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___boxed(lean_object* v_indName_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lean_mkBelow(v_indName_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_);
lean_dec(v_a_2081_);
lean_dec_ref(v_a_2080_);
lean_dec(v_a_2079_);
lean_dec_ref(v_a_2078_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(lean_object* v_upperBound_2084_, lean_object* v___x_2085_, lean_object* v___x_2086_, lean_object* v___x_2087_, lean_object* v_inst_2088_, lean_object* v_R_2089_, lean_object* v_a_2090_, lean_object* v_b_2091_, lean_object* v_c_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_upperBound_2084_, v___x_2085_, v___x_2086_, v___x_2087_, v_a_2090_, v_b_2091_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___boxed(lean_object* v_upperBound_2099_, lean_object* v___x_2100_, lean_object* v___x_2101_, lean_object* v___x_2102_, lean_object* v_inst_2103_, lean_object* v_R_2104_, lean_object* v_a_2105_, lean_object* v_b_2106_, lean_object* v_c_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(v_upperBound_2099_, v___x_2100_, v___x_2101_, v___x_2102_, v_inst_2103_, v_R_2104_, v_a_2105_, v_b_2106_, v_c_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v_upperBound_2099_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(lean_object* v_00_u03b1_2114_, lean_object* v_x_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_x_2115_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2122_, lean_object* v_x_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(v_00_u03b1_2122_, v_x_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(lean_object* v_a_2130_, lean_object* v_a_2131_){
_start:
{
if (lean_obj_tag(v_a_2130_) == 0)
{
lean_object* v___x_2132_; 
v___x_2132_ = l_List_reverse___redArg(v_a_2131_);
return v___x_2132_;
}
else
{
lean_object* v_head_2133_; lean_object* v_tail_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2143_; 
v_head_2133_ = lean_ctor_get(v_a_2130_, 0);
v_tail_2134_ = lean_ctor_get(v_a_2130_, 1);
v_isSharedCheck_2143_ = !lean_is_exclusive(v_a_2130_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2136_ = v_a_2130_;
v_isShared_2137_ = v_isSharedCheck_2143_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_tail_2134_);
lean_inc(v_head_2133_);
lean_dec(v_a_2130_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2143_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
v___x_2138_ = l_Lean_MessageData_ofExpr(v_head_2133_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 1, v_a_2131_);
lean_ctor_set(v___x_2136_, 0, v___x_2138_);
v___x_2140_ = v___x_2136_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v_a_2131_);
v___x_2140_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
v_a_2130_ = v_tail_2134_;
v_a_2131_ = v___x_2140_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(lean_object* v_xs_2144_, lean_object* v_v_2145_, lean_object* v_i_2146_){
_start:
{
lean_object* v___x_2147_; uint8_t v___x_2148_; 
v___x_2147_ = lean_array_get_size(v_xs_2144_);
v___x_2148_ = lean_nat_dec_lt(v_i_2146_, v___x_2147_);
if (v___x_2148_ == 0)
{
lean_object* v___x_2149_; 
lean_dec(v_i_2146_);
v___x_2149_ = lean_box(0);
return v___x_2149_;
}
else
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_array_fget_borrowed(v_xs_2144_, v_i_2146_);
v___x_2151_ = lean_expr_eqv(v___x_2150_, v_v_2145_);
if (v___x_2151_ == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_unsigned_to_nat(1u);
v___x_2153_ = lean_nat_add(v_i_2146_, v___x_2152_);
lean_dec(v_i_2146_);
v_i_2146_ = v___x_2153_;
goto _start;
}
else
{
lean_object* v___x_2155_; 
v___x_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_i_2146_);
return v___x_2155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_2156_, lean_object* v_v_2157_, lean_object* v_i_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(v_xs_2156_, v_v_2157_, v_i_2158_);
lean_dec_ref(v_v_2157_);
lean_dec_ref(v_xs_2156_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(lean_object* v_xs_2160_, lean_object* v_v_2161_){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = lean_unsigned_to_nat(0u);
v___x_2163_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(v_xs_2160_, v_v_2161_, v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0___boxed(lean_object* v_xs_2164_, lean_object* v_v_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(v_xs_2164_, v_v_2165_);
lean_dec_ref(v_v_2165_);
lean_dec_ref(v_xs_2164_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(lean_object* v_xs_2167_, lean_object* v_v_2168_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(v_xs_2167_, v_v_2168_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_box(0);
return v___x_2170_;
}
else
{
lean_object* v_val_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
v_val_2171_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2169_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_val_2171_);
lean_dec(v___x_2169_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_val_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0___boxed(lean_object* v_xs_2179_, lean_object* v_v_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_xs_2179_, v_v_2180_);
lean_dec_ref(v_v_2180_);
lean_dec_ref(v_xs_2179_);
return v_res_2181_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0));
v___x_2184_ = l_Lean_stringToMessageData(v___x_2183_);
return v___x_2184_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2));
v___x_2187_ = l_Lean_stringToMessageData(v___x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(lean_object* v_rlvl_2188_, lean_object* v_prods_2189_, lean_object* v_motives_2190_, lean_object* v_fs_2191_, lean_object* v_minor__type_2192_, lean_object* v_x_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
if (lean_obj_tag(v_x_2193_) == 5)
{
lean_object* v_fn_2201_; lean_object* v_arg_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_fn_2201_ = lean_ctor_get(v_x_2193_, 0);
lean_inc_ref(v_fn_2201_);
v_arg_2202_ = lean_ctor_get(v_x_2193_, 1);
lean_inc_ref(v_arg_2202_);
lean_dec_ref_known(v_x_2193_, 2);
v___x_2203_ = lean_array_set(v_x_2194_, v_x_2195_, v_arg_2202_);
v___x_2204_ = lean_unsigned_to_nat(1u);
v___x_2205_ = lean_nat_sub(v_x_2195_, v___x_2204_);
lean_dec(v_x_2195_);
v_x_2193_ = v_fn_2201_;
v_x_2194_ = v___x_2203_;
v_x_2195_ = v___x_2205_;
goto _start;
}
else
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec(v_x_2195_);
v___x_2207_ = l_Lean_instInhabitedExpr;
v___x_2208_ = l_Lean_Meta_PProdN_mk(v_rlvl_2188_, v_prods_2189_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2210_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2210_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_motives_2190_, v_x_2193_);
lean_dec_ref(v_x_2193_);
if (lean_obj_tag(v___x_2210_) == 1)
{
lean_object* v_val_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_dec_ref(v_minor__type_2192_);
lean_dec_ref(v_motives_2190_);
v_val_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_val_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v___x_2212_ = lean_array_get_borrowed(v___x_2207_, v_fs_2191_, v_val_2211_);
lean_dec(v_val_2211_);
lean_inc(v_a_2209_);
v___x_2213_ = lean_array_push(v_x_2194_, v_a_2209_);
lean_inc(v___x_2212_);
v___x_2214_ = l_Lean_mkAppN(v___x_2212_, v___x_2213_);
lean_dec_ref(v___x_2213_);
v___x_2215_ = l_Lean_Meta_mkPProdMk(v___x_2214_, v_a_2209_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
return v___x_2215_;
}
else
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
lean_dec(v___x_2210_);
lean_dec(v_a_2209_);
lean_dec_ref(v_x_2194_);
v___x_2216_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1);
v___x_2217_ = l_Lean_MessageData_ofExpr(v_minor__type_2192_);
v___x_2218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2216_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3);
v___x_2220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_array_to_list(v_motives_2190_);
v___x_2222_ = lean_box(0);
v___x_2223_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(v___x_2221_, v___x_2222_);
v___x_2224_ = l_Lean_MessageData_ofList(v___x_2223_);
v___x_2225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2220_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
v___x_2226_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_2225_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
return v___x_2226_;
}
}
else
{
lean_dec_ref(v_x_2194_);
lean_dec_ref(v_x_2193_);
lean_dec_ref(v_minor__type_2192_);
lean_dec_ref(v_motives_2190_);
return v___x_2208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___boxed(lean_object* v_rlvl_2227_, lean_object* v_prods_2228_, lean_object* v_motives_2229_, lean_object* v_fs_2230_, lean_object* v_minor__type_2231_, lean_object* v_x_2232_, lean_object* v_x_2233_, lean_object* v_x_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(v_rlvl_2227_, v_prods_2228_, v_motives_2229_, v_fs_2230_, v_minor__type_2231_, v_x_2232_, v_x_2233_, v_x_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec_ref(v_fs_2230_);
return v_res_2240_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_box(0);
v___x_2242_ = l_unsafeCast___redArg(v___x_2241_);
return v___x_2242_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2243_; lean_object* v_dummy_2244_; 
v___x_2243_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0);
v_dummy_2244_ = l_Lean_Expr_sort___override(v___x_2243_);
return v_dummy_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed(lean_object* v_motives_2245_, lean_object* v_head_2246_, lean_object* v_belows_2247_, lean_object* v_prods_2248_, lean_object* v_rlvl_2249_, lean_object* v_fs_2250_, lean_object* v_minor__type_2251_, lean_object* v_tail_2252_, lean_object* v_arg__args_2253_, lean_object* v_arg__type_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(v_motives_2245_, v_head_2246_, v_belows_2247_, v_prods_2248_, v_rlvl_2249_, v_fs_2250_, v_minor__type_2251_, v_tail_2252_, v_arg__args_2253_, v_arg__type_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(lean_object* v_rlvl_2261_, lean_object* v_motives_2262_, lean_object* v_belows_2263_, lean_object* v_fs_2264_, lean_object* v_minor__type_2265_, lean_object* v_prods_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_){
_start:
{
if (lean_obj_tag(v_a_2267_) == 0)
{
lean_object* v_dummy_2273_; lean_object* v_nargs_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec_ref(v_belows_2263_);
v_dummy_2273_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1);
v_nargs_2274_ = l_Lean_Expr_getAppNumArgs(v_minor__type_2265_);
lean_inc(v_nargs_2274_);
v___x_2275_ = lean_mk_array(v_nargs_2274_, v_dummy_2273_);
v___x_2276_ = lean_unsigned_to_nat(1u);
v___x_2277_ = lean_nat_sub(v_nargs_2274_, v___x_2276_);
lean_dec(v_nargs_2274_);
lean_inc_ref(v_minor__type_2265_);
v___x_2278_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(v_rlvl_2261_, v_prods_2266_, v_motives_2262_, v_fs_2264_, v_minor__type_2265_, v_minor__type_2265_, v___x_2275_, v___x_2277_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_);
lean_dec_ref(v_fs_2264_);
return v___x_2278_;
}
else
{
lean_object* v_head_2279_; lean_object* v_tail_2280_; lean_object* v___f_2281_; lean_object* v___x_2282_; 
v_head_2279_ = lean_ctor_get(v_a_2267_, 0);
lean_inc_n(v_head_2279_, 2);
v_tail_2280_ = lean_ctor_get(v_a_2267_, 1);
lean_inc(v_tail_2280_);
lean_dec_ref_known(v_a_2267_, 2);
v___f_2281_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed), 15, 8);
lean_closure_set(v___f_2281_, 0, v_motives_2262_);
lean_closure_set(v___f_2281_, 1, v_head_2279_);
lean_closure_set(v___f_2281_, 2, v_belows_2263_);
lean_closure_set(v___f_2281_, 3, v_prods_2266_);
lean_closure_set(v___f_2281_, 4, v_rlvl_2261_);
lean_closure_set(v___f_2281_, 5, v_fs_2264_);
lean_closure_set(v___f_2281_, 6, v_minor__type_2265_);
lean_closure_set(v___f_2281_, 7, v_tail_2280_);
lean_inc(v_a_2271_);
lean_inc_ref(v_a_2270_);
lean_inc(v_a_2269_);
lean_inc_ref(v_a_2268_);
v___x_2282_ = lean_infer_type(v_head_2279_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; uint8_t v___x_2284_; lean_object* v___x_2285_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = 0;
v___x_2285_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_2283_, v___f_2281_, v___x_2284_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_);
return v___x_2285_;
}
else
{
lean_dec_ref(v___f_2281_);
return v___x_2282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(lean_object* v_prods_2286_, lean_object* v_rlvl_2287_, lean_object* v_motives_2288_, lean_object* v_belows_2289_, lean_object* v_fs_2290_, lean_object* v_minor__type_2291_, lean_object* v_tail_2292_, uint8_t v___x_2293_, uint8_t v___x_2294_, uint8_t v___x_2295_, lean_object* v_arg_x27_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_inc_ref(v_arg_x27_2296_);
v___x_2302_ = lean_array_push(v_prods_2286_, v_arg_x27_2296_);
v___x_2303_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2287_, v_motives_2288_, v_belows_2289_, v_fs_2290_, v_minor__type_2291_, v___x_2302_, v_tail_2292_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2305_ = lean_unsigned_to_nat(1u);
v___x_2306_ = lean_mk_empty_array_with_capacity(v___x_2305_);
v___x_2307_ = lean_array_push(v___x_2306_, v_arg_x27_2296_);
v___x_2308_ = l_Lean_Meta_mkLambdaFVars(v___x_2307_, v_a_2304_, v___x_2293_, v___x_2294_, v___x_2293_, v___x_2294_, v___x_2295_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
return v___x_2308_;
}
else
{
lean_dec_ref(v_arg_x27_2296_);
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed(lean_object* v_prods_2309_, lean_object* v_rlvl_2310_, lean_object* v_motives_2311_, lean_object* v_belows_2312_, lean_object* v_fs_2313_, lean_object* v_minor__type_2314_, lean_object* v_tail_2315_, lean_object* v___x_2316_, lean_object* v___x_2317_, lean_object* v___x_2318_, lean_object* v_arg_x27_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
uint8_t v___x_1757__boxed_2325_; uint8_t v___x_1758__boxed_2326_; uint8_t v___x_1759__boxed_2327_; lean_object* v_res_2328_; 
v___x_1757__boxed_2325_ = lean_unbox(v___x_2316_);
v___x_1758__boxed_2326_ = lean_unbox(v___x_2317_);
v___x_1759__boxed_2327_ = lean_unbox(v___x_2318_);
v_res_2328_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(v_prods_2309_, v_rlvl_2310_, v_motives_2311_, v_belows_2312_, v_fs_2313_, v_minor__type_2314_, v_tail_2315_, v___x_1757__boxed_2325_, v___x_1758__boxed_2326_, v___x_1759__boxed_2327_, v_arg_x27_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(lean_object* v_motives_2329_, lean_object* v_head_2330_, lean_object* v_belows_2331_, lean_object* v_arg__type_2332_, lean_object* v_prods_2333_, lean_object* v_rlvl_2334_, lean_object* v_fs_2335_, lean_object* v_minor__type_2336_, lean_object* v_tail_2337_, lean_object* v_arg__args_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
if (lean_obj_tag(v_x_2339_) == 5)
{
lean_object* v_fn_2347_; lean_object* v_arg_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v_fn_2347_ = lean_ctor_get(v_x_2339_, 0);
lean_inc_ref(v_fn_2347_);
v_arg_2348_ = lean_ctor_get(v_x_2339_, 1);
lean_inc_ref(v_arg_2348_);
lean_dec_ref_known(v_x_2339_, 2);
v___x_2349_ = lean_array_set(v_x_2340_, v_x_2341_, v_arg_2348_);
v___x_2350_ = lean_unsigned_to_nat(1u);
v___x_2351_ = lean_nat_sub(v_x_2341_, v___x_2350_);
lean_dec(v_x_2341_);
v_x_2339_ = v_fn_2347_;
v_x_2340_ = v___x_2349_;
v_x_2341_ = v___x_2351_;
goto _start;
}
else
{
lean_object* v___x_2353_; 
lean_dec(v_x_2341_);
v___x_2353_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_motives_2329_, v_x_2339_);
lean_dec_ref(v_x_2339_);
if (lean_obj_tag(v___x_2353_) == 1)
{
lean_object* v_val_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v_val_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_val_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2355_ = l_Lean_instInhabitedExpr;
v___x_2356_ = l_Lean_Expr_fvarId_x21(v_head_2330_);
lean_dec_ref(v_head_2330_);
v___x_2357_ = l_Lean_FVarId_getUserName___redArg(v___x_2356_, v___y_2342_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_object* v_a_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc(v_a_2358_);
lean_dec_ref_known(v___x_2357_, 1);
v___x_2359_ = lean_array_get_borrowed(v___x_2355_, v_belows_2331_, v_val_2354_);
lean_dec(v_val_2354_);
lean_inc(v___x_2359_);
v___x_2360_ = l_Lean_mkAppN(v___x_2359_, v_x_2340_);
lean_dec_ref(v_x_2340_);
v___x_2361_ = l_Lean_Meta_mkPProd(v_arg__type_2332_, v___x_2360_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; uint8_t v___x_2363_; uint8_t v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___f_2369_; lean_object* v___x_2370_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
lean_dec_ref_known(v___x_2361_, 1);
v___x_2363_ = 0;
v___x_2364_ = 1;
v___x_2365_ = 1;
v___x_2366_ = lean_box(v___x_2363_);
v___x_2367_ = lean_box(v___x_2364_);
v___x_2368_ = lean_box(v___x_2365_);
v___f_2369_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed), 16, 10);
lean_closure_set(v___f_2369_, 0, v_prods_2333_);
lean_closure_set(v___f_2369_, 1, v_rlvl_2334_);
lean_closure_set(v___f_2369_, 2, v_motives_2329_);
lean_closure_set(v___f_2369_, 3, v_belows_2331_);
lean_closure_set(v___f_2369_, 4, v_fs_2335_);
lean_closure_set(v___f_2369_, 5, v_minor__type_2336_);
lean_closure_set(v___f_2369_, 6, v_tail_2337_);
lean_closure_set(v___f_2369_, 7, v___x_2366_);
lean_closure_set(v___f_2369_, 8, v___x_2367_);
lean_closure_set(v___f_2369_, 9, v___x_2368_);
v___x_2370_ = l_Lean_Meta_mkForallFVars(v_arg__args_2338_, v_a_2362_, v___x_2363_, v___x_2364_, v___x_2364_, v___x_2365_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2372_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v___x_2370_, 1);
v___x_2372_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_a_2358_, v_a_2371_, v___f_2369_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
return v___x_2372_;
}
else
{
lean_dec_ref(v___f_2369_);
lean_dec(v_a_2358_);
return v___x_2370_;
}
}
else
{
lean_dec(v_a_2358_);
lean_dec_ref(v_arg__args_2338_);
lean_dec(v_tail_2337_);
lean_dec_ref(v_minor__type_2336_);
lean_dec_ref(v_fs_2335_);
lean_dec(v_rlvl_2334_);
lean_dec_ref(v_prods_2333_);
lean_dec_ref(v_belows_2331_);
lean_dec_ref(v_motives_2329_);
return v___x_2361_;
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec(v_val_2354_);
lean_dec_ref(v_x_2340_);
lean_dec_ref(v_arg__args_2338_);
lean_dec(v_tail_2337_);
lean_dec_ref(v_minor__type_2336_);
lean_dec_ref(v_fs_2335_);
lean_dec(v_rlvl_2334_);
lean_dec_ref(v_prods_2333_);
lean_dec_ref(v_arg__type_2332_);
lean_dec_ref(v_belows_2331_);
lean_dec_ref(v_motives_2329_);
v_a_2373_ = lean_ctor_get(v___x_2357_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2357_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2357_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
else
{
lean_object* v___x_2381_; 
lean_dec(v___x_2353_);
lean_dec_ref(v_x_2340_);
lean_dec_ref(v_arg__args_2338_);
lean_dec_ref(v_arg__type_2332_);
v___x_2381_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2334_, v_motives_2329_, v_belows_2331_, v_fs_2335_, v_minor__type_2336_, v_prods_2333_, v_tail_2337_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; uint8_t v___x_2386_; uint8_t v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2381_, 1);
v___x_2383_ = lean_unsigned_to_nat(1u);
v___x_2384_ = lean_mk_empty_array_with_capacity(v___x_2383_);
v___x_2385_ = lean_array_push(v___x_2384_, v_head_2330_);
v___x_2386_ = 0;
v___x_2387_ = 1;
v___x_2388_ = 1;
v___x_2389_ = l_Lean_Meta_mkLambdaFVars(v___x_2385_, v_a_2382_, v___x_2386_, v___x_2387_, v___x_2386_, v___x_2387_, v___x_2388_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
return v___x_2389_;
}
else
{
lean_dec_ref(v_head_2330_);
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(lean_object* v_motives_2390_, lean_object* v_head_2391_, lean_object* v_belows_2392_, lean_object* v_prods_2393_, lean_object* v_rlvl_2394_, lean_object* v_fs_2395_, lean_object* v_minor__type_2396_, lean_object* v_tail_2397_, lean_object* v_arg__args_2398_, lean_object* v_arg__type_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_dummy_2405_; lean_object* v_nargs_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_dummy_2405_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__1);
v_nargs_2406_ = l_Lean_Expr_getAppNumArgs(v_arg__type_2399_);
lean_inc(v_nargs_2406_);
v___x_2407_ = lean_mk_array(v_nargs_2406_, v_dummy_2405_);
v___x_2408_ = lean_unsigned_to_nat(1u);
v___x_2409_ = lean_nat_sub(v_nargs_2406_, v___x_2408_);
lean_dec(v_nargs_2406_);
lean_inc_ref(v_arg__type_2399_);
v___x_2410_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(v_motives_2390_, v_head_2391_, v_belows_2392_, v_arg__type_2399_, v_prods_2393_, v_rlvl_2394_, v_fs_2395_, v_minor__type_2396_, v_tail_2397_, v_arg__args_2398_, v_arg__type_2399_, v___x_2407_, v___x_2409_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___boxed(lean_object* v_rlvl_2411_, lean_object* v_motives_2412_, lean_object* v_belows_2413_, lean_object* v_fs_2414_, lean_object* v_minor__type_2415_, lean_object* v_prods_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2411_, v_motives_2412_, v_belows_2413_, v_fs_2414_, v_minor__type_2415_, v_prods_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
lean_dec(v_a_2421_);
lean_dec_ref(v_a_2420_);
lean_dec(v_a_2419_);
lean_dec_ref(v_a_2418_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___boxed(lean_object** _args){
lean_object* v_motives_2424_ = _args[0];
lean_object* v_head_2425_ = _args[1];
lean_object* v_belows_2426_ = _args[2];
lean_object* v_arg__type_2427_ = _args[3];
lean_object* v_prods_2428_ = _args[4];
lean_object* v_rlvl_2429_ = _args[5];
lean_object* v_fs_2430_ = _args[6];
lean_object* v_minor__type_2431_ = _args[7];
lean_object* v_tail_2432_ = _args[8];
lean_object* v_arg__args_2433_ = _args[9];
lean_object* v_x_2434_ = _args[10];
lean_object* v_x_2435_ = _args[11];
lean_object* v_x_2436_ = _args[12];
lean_object* v___y_2437_ = _args[13];
lean_object* v___y_2438_ = _args[14];
lean_object* v___y_2439_ = _args[15];
lean_object* v___y_2440_ = _args[16];
lean_object* v___y_2441_ = _args[17];
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(v_motives_2424_, v_head_2425_, v_belows_2426_, v_arg__type_2427_, v_prods_2428_, v_rlvl_2429_, v_fs_2430_, v_minor__type_2431_, v_tail_2432_, v_arg__args_2433_, v_x_2434_, v_x_2435_, v_x_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(lean_object* v_rlvl_2443_, lean_object* v_motives_2444_, lean_object* v_belows_2445_, lean_object* v_fs_2446_, lean_object* v_minor__args_2447_, lean_object* v_minor__type_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2454_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_2455_ = lean_array_to_list(v_minor__args_2447_);
v___x_2456_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2443_, v_motives_2444_, v_belows_2445_, v_fs_2446_, v_minor__type_2448_, v___x_2454_, v___x_2455_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed(lean_object* v_rlvl_2457_, lean_object* v_motives_2458_, lean_object* v_belows_2459_, lean_object* v_fs_2460_, lean_object* v_minor__args_2461_, lean_object* v_minor__type_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(v_rlvl_2457_, v_motives_2458_, v_belows_2459_, v_fs_2460_, v_minor__args_2461_, v_minor__type_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(lean_object* v_rlvl_2469_, lean_object* v_motives_2470_, lean_object* v_belows_2471_, lean_object* v_fs_2472_, lean_object* v_minorType_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___f_2479_; uint8_t v___x_2480_; lean_object* v___x_2481_; 
v___f_2479_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2479_, 0, v_rlvl_2469_);
lean_closure_set(v___f_2479_, 1, v_motives_2470_);
lean_closure_set(v___f_2479_, 2, v_belows_2471_);
lean_closure_set(v___f_2479_, 3, v_fs_2472_);
v___x_2480_ = 0;
v___x_2481_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_minorType_2473_, v___f_2479_, v___x_2480_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___boxed(lean_object* v_rlvl_2482_, lean_object* v_motives_2483_, lean_object* v_belows_2484_, lean_object* v_fs_2485_, lean_object* v_minorType_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(v_rlvl_2482_, v_motives_2483_, v_belows_2484_, v_fs_2485_, v_minorType_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
lean_dec(v_a_2490_);
lean_dec_ref(v_a_2489_);
lean_dec(v_a_2488_);
lean_dec_ref(v_a_2487_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(lean_object* v_msg_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v___f_2499_; lean_object* v___x_27156__overap_2500_; lean_object* v___x_2501_; 
v___f_2499_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0));
v___x_27156__overap_2500_ = lean_panic_fn_borrowed(v___f_2499_, v_msg_2493_);
lean_inc(v___y_2497_);
lean_inc_ref(v___y_2496_);
lean_inc(v___y_2495_);
lean_inc_ref(v___y_2494_);
v___x_2501_ = lean_apply_5(v___x_27156__overap_2500_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, lean_box(0));
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0___boxed(lean_object* v_msg_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(v_msg_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(lean_object* v_e_2509_, lean_object* v___y_2510_){
_start:
{
uint8_t v___x_2512_; 
v___x_2512_ = l_Lean_Expr_hasMVar(v_e_2509_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_e_2509_);
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; lean_object* v_mctx_2515_; lean_object* v___x_2516_; lean_object* v_fst_2517_; lean_object* v_snd_2518_; lean_object* v___x_2519_; lean_object* v_cache_2520_; lean_object* v_zetaDeltaFVarIds_2521_; lean_object* v_postponed_2522_; lean_object* v_diag_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2532_; 
v___x_2514_ = lean_st_ref_get(v___y_2510_);
v_mctx_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc_ref(v_mctx_2515_);
lean_dec(v___x_2514_);
v___x_2516_ = l_Lean_instantiateMVarsCore(v_mctx_2515_, v_e_2509_);
v_fst_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_fst_2517_);
v_snd_2518_ = lean_ctor_get(v___x_2516_, 1);
lean_inc(v_snd_2518_);
lean_dec_ref(v___x_2516_);
v___x_2519_ = lean_st_ref_take(v___y_2510_);
v_cache_2520_ = lean_ctor_get(v___x_2519_, 1);
v_zetaDeltaFVarIds_2521_ = lean_ctor_get(v___x_2519_, 2);
v_postponed_2522_ = lean_ctor_get(v___x_2519_, 3);
v_diag_2523_ = lean_ctor_get(v___x_2519_, 4);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2532_ == 0)
{
lean_object* v_unused_2533_; 
v_unused_2533_ = lean_ctor_get(v___x_2519_, 0);
lean_dec(v_unused_2533_);
v___x_2525_ = v___x_2519_;
v_isShared_2526_ = v_isSharedCheck_2532_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_diag_2523_);
lean_inc(v_postponed_2522_);
lean_inc(v_zetaDeltaFVarIds_2521_);
lean_inc(v_cache_2520_);
lean_dec(v___x_2519_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2532_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
lean_ctor_set(v___x_2525_, 0, v_snd_2518_);
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_snd_2518_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v_cache_2520_);
lean_ctor_set(v_reuseFailAlloc_2531_, 2, v_zetaDeltaFVarIds_2521_);
lean_ctor_set(v_reuseFailAlloc_2531_, 3, v_postponed_2522_);
lean_ctor_set(v_reuseFailAlloc_2531_, 4, v_diag_2523_);
v___x_2528_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = lean_st_ref_put(v___y_2510_, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_fst_2517_);
return v___x_2530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg___boxed(lean_object* v_e_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_e_2534_, v___y_2535_);
lean_dec(v___y_2535_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(lean_object* v_e_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_e_2538_, v___y_2540_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___boxed(lean_object* v_e_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(v_e_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(lean_object* v_thm_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v___x_2555_; lean_object* v_env_2556_; lean_object* v_toConstantVal_2557_; lean_object* v_value_2558_; lean_object* v_all_2559_; uint8_t v___y_2561_; lean_object* v_type_2569_; uint8_t v___x_2570_; 
v___x_2555_ = lean_st_ref_get(v___y_2553_);
v_env_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc_ref_n(v_env_2556_, 2);
lean_dec(v___x_2555_);
v_toConstantVal_2557_ = lean_ctor_get(v_thm_2552_, 0);
v_value_2558_ = lean_ctor_get(v_thm_2552_, 1);
v_all_2559_ = lean_ctor_get(v_thm_2552_, 2);
v_type_2569_ = lean_ctor_get(v_toConstantVal_2557_, 2);
v___x_2570_ = l_Lean_Environment_hasUnsafe(v_env_2556_, v_type_2569_);
if (v___x_2570_ == 0)
{
uint8_t v___x_2571_; 
v___x_2571_ = l_Lean_Environment_hasUnsafe(v_env_2556_, v_value_2558_);
v___y_2561_ = v___x_2571_;
goto v___jp_2560_;
}
else
{
lean_dec_ref(v_env_2556_);
v___y_2561_ = v___x_2570_;
goto v___jp_2560_;
}
v___jp_2560_:
{
if (v___y_2561_ == 0)
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2562_, 0, v_thm_2552_);
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
else
{
lean_object* v___x_2564_; uint8_t v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_inc(v_all_2559_);
lean_inc_ref(v_value_2558_);
lean_inc_ref(v_toConstantVal_2557_);
lean_dec_ref(v_thm_2552_);
v___x_2564_ = lean_box(0);
v___x_2565_ = 0;
v___x_2566_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2566_, 0, v_toConstantVal_2557_);
lean_ctor_set(v___x_2566_, 1, v_value_2558_);
lean_ctor_set(v___x_2566_, 2, v___x_2564_);
lean_ctor_set(v___x_2566_, 3, v_all_2559_);
lean_ctor_set_uint8(v___x_2566_, sizeof(void*)*4, v___x_2565_);
v___x_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
return v___x_2568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg___boxed(lean_object* v_thm_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v_thm_2572_, v___y_2573_);
lean_dec(v___y_2573_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(lean_object* v_thm_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v_thm_2576_, v___y_2580_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___boxed(lean_object* v_thm_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(v_thm_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(lean_object* v___x_2591_, lean_object* v___x_2592_, lean_object* v___x_2593_, lean_object* v_all_2594_, lean_object* v___x_2595_, lean_object* v___x_2596_, lean_object* v___x_2597_, lean_object* v_x_2598_){
_start:
{
lean_object* v___y_2600_; lean_object* v___x_2604_; uint8_t v___x_2605_; 
v___x_2604_ = lean_array_get_size(v_all_2594_);
v___x_2605_ = lean_nat_dec_lt(v_x_2598_, v___x_2604_);
if (v___x_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2606_ = lean_array_get_borrowed(v___x_2595_, v_all_2594_, v___x_2596_);
v___x_2607_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0));
v___x_2608_ = lean_nat_sub(v_x_2598_, v___x_2604_);
v___x_2609_ = lean_nat_add(v___x_2608_, v___x_2597_);
lean_dec(v___x_2608_);
v___x_2610_ = l_Nat_reprFast(v___x_2609_);
v___x_2611_ = lean_string_append(v___x_2607_, v___x_2610_);
lean_dec_ref(v___x_2610_);
lean_inc(v___x_2606_);
v___x_2612_ = l_Lean_Name_str___override(v___x_2606_, v___x_2611_);
v___y_2600_ = v___x_2612_;
goto v___jp_2599_;
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = lean_array_fget_borrowed(v_all_2594_, v_x_2598_);
lean_inc(v___x_2613_);
v___x_2614_ = l_Lean_mkBelowName(v___x_2613_);
v___y_2600_ = v___x_2614_;
goto v___jp_2599_;
}
v___jp_2599_:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2601_ = l_Lean_Expr_const___override(v___y_2600_, v___x_2591_);
v___x_2602_ = l_Array_append___redArg(v___x_2592_, v___x_2593_);
v___x_2603_ = l_Lean_mkAppN(v___x_2601_, v___x_2602_);
lean_dec_ref(v___x_2602_);
return v___x_2603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed(lean_object* v___x_2615_, lean_object* v___x_2616_, lean_object* v___x_2617_, lean_object* v_all_2618_, lean_object* v___x_2619_, lean_object* v___x_2620_, lean_object* v___x_2621_, lean_object* v_x_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(v___x_2615_, v___x_2616_, v___x_2617_, v_all_2618_, v___x_2619_, v___x_2620_, v___x_2621_, v_x_2622_);
lean_dec(v_x_2622_);
lean_dec(v___x_2621_);
lean_dec(v___x_2620_);
lean_dec(v___x_2619_);
lean_dec_ref(v_all_2618_);
lean_dec_ref(v___x_2617_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(lean_object* v___x_2624_, lean_object* v___x_2625_, lean_object* v___x_2626_, lean_object* v_fs_2627_, lean_object* v_as_2628_, size_t v_sz_2629_, size_t v_i_2630_, lean_object* v_b_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
uint8_t v___x_2637_; 
v___x_2637_ = lean_usize_dec_lt(v_i_2630_, v_sz_2629_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; 
lean_dec_ref(v_fs_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___x_2625_);
lean_dec(v___x_2624_);
v___x_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2638_, 0, v_b_2631_);
return v___x_2638_;
}
else
{
lean_object* v_a_2639_; lean_object* v___x_2640_; 
v_a_2639_ = lean_array_uget_borrowed(v_as_2628_, v_i_2630_);
lean_inc(v___y_2635_);
lean_inc_ref(v___y_2634_);
lean_inc(v___y_2633_);
lean_inc_ref(v___y_2632_);
lean_inc(v_a_2639_);
v___x_2640_ = lean_infer_type(v_a_2639_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2642_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2640_, 1);
lean_inc_ref(v_fs_2627_);
lean_inc_ref(v___x_2626_);
lean_inc_ref(v___x_2625_);
lean_inc(v___x_2624_);
v___x_2642_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(v___x_2624_, v___x_2625_, v___x_2626_, v_fs_2627_, v_a_2641_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2644_; size_t v___x_2645_; size_t v___x_2646_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v___x_2644_ = l_Lean_Expr_app___override(v_b_2631_, v_a_2643_);
v___x_2645_ = ((size_t)1ULL);
v___x_2646_ = lean_usize_add(v_i_2630_, v___x_2645_);
v_i_2630_ = v___x_2646_;
v_b_2631_ = v___x_2644_;
goto _start;
}
else
{
lean_dec_ref(v_b_2631_);
lean_dec_ref(v_fs_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___x_2625_);
lean_dec(v___x_2624_);
return v___x_2642_;
}
}
else
{
lean_dec_ref(v_b_2631_);
lean_dec_ref(v_fs_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___x_2625_);
lean_dec(v___x_2624_);
return v___x_2640_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2___boxed(lean_object* v___x_2648_, lean_object* v___x_2649_, lean_object* v___x_2650_, lean_object* v_fs_2651_, lean_object* v_as_2652_, lean_object* v_sz_2653_, lean_object* v_i_2654_, lean_object* v_b_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
size_t v_sz_boxed_2661_; size_t v_i_boxed_2662_; lean_object* v_res_2663_; 
v_sz_boxed_2661_ = lean_unbox_usize(v_sz_2653_);
lean_dec(v_sz_2653_);
v_i_boxed_2662_ = lean_unbox_usize(v_i_2654_);
lean_dec(v_i_2654_);
v_res_2663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(v___x_2648_, v___x_2649_, v___x_2650_, v_fs_2651_, v_as_2652_, v_sz_boxed_2661_, v_i_boxed_2662_, v_b_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec_ref(v_as_2652_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(lean_object* v_a_2664_, lean_object* v___x_2665_, uint8_t v___x_2666_, lean_object* v_targs_2667_, lean_object* v_x_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2674_ = l_Lean_mkAppN(v_a_2664_, v_targs_2667_);
v___x_2675_ = l_Lean_mkAppN(v___x_2665_, v_targs_2667_);
v___x_2676_ = l_Lean_Meta_mkPProd(v___x_2674_, v___x_2675_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; uint8_t v___x_2678_; uint8_t v___x_2679_; lean_object* v___x_2680_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v___x_2678_ = 0;
v___x_2679_ = 1;
v___x_2680_ = l_Lean_Meta_mkLambdaFVars(v_targs_2667_, v_a_2677_, v___x_2678_, v___x_2666_, v___x_2678_, v___x_2666_, v___x_2679_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
return v___x_2680_;
}
else
{
lean_dec_ref(v_targs_2667_);
return v___x_2676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed(lean_object* v_a_2681_, lean_object* v___x_2682_, lean_object* v___x_2683_, lean_object* v_targs_2684_, lean_object* v_x_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
uint8_t v___x_30444__boxed_2691_; lean_object* v_res_2692_; 
v___x_30444__boxed_2691_ = lean_unbox(v___x_2683_);
v_res_2692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(v_a_2681_, v___x_2682_, v___x_30444__boxed_2691_, v_targs_2684_, v_x_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec_ref(v_x_2685_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(lean_object* v___x_2693_, lean_object* v___x_2694_, lean_object* v_as_2695_, size_t v_sz_2696_, size_t v_i_2697_, lean_object* v_b_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
uint8_t v___x_2704_; 
v___x_2704_ = lean_usize_dec_lt(v_i_2697_, v_sz_2696_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; 
v___x_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_b_2698_);
return v___x_2705_;
}
else
{
lean_object* v_snd_2706_; lean_object* v_fst_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2764_; 
v_snd_2706_ = lean_ctor_get(v_b_2698_, 1);
v_fst_2707_ = lean_ctor_get(v_b_2698_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_b_2698_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2709_ = v_b_2698_;
v_isShared_2710_ = v_isSharedCheck_2764_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_snd_2706_);
lean_inc(v_fst_2707_);
lean_dec(v_b_2698_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2764_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v_array_2711_; lean_object* v_start_2712_; lean_object* v_stop_2713_; uint8_t v___x_2714_; 
v_array_2711_ = lean_ctor_get(v_snd_2706_, 0);
v_start_2712_ = lean_ctor_get(v_snd_2706_, 1);
v_stop_2713_ = lean_ctor_get(v_snd_2706_, 2);
v___x_2714_ = lean_nat_dec_lt(v_start_2712_, v_stop_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2716_; 
if (v_isShared_2710_ == 0)
{
v___x_2716_ = v___x_2709_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_fst_2707_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_snd_2706_);
v___x_2716_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
lean_object* v___x_2717_; 
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
return v___x_2717_;
}
}
else
{
lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2760_; 
lean_inc(v_stop_2713_);
lean_inc(v_start_2712_);
lean_inc_ref(v_array_2711_);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_snd_2706_);
if (v_isSharedCheck_2760_ == 0)
{
lean_object* v_unused_2761_; lean_object* v_unused_2762_; lean_object* v_unused_2763_; 
v_unused_2761_ = lean_ctor_get(v_snd_2706_, 2);
lean_dec(v_unused_2761_);
v_unused_2762_ = lean_ctor_get(v_snd_2706_, 1);
lean_dec(v_unused_2762_);
v_unused_2763_ = lean_ctor_get(v_snd_2706_, 0);
lean_dec(v_unused_2763_);
v___x_2720_ = v_snd_2706_;
v_isShared_2721_ = v_isSharedCheck_2760_;
goto v_resetjp_2719_;
}
else
{
lean_dec(v_snd_2706_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2760_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
uint8_t v___x_2722_; lean_object* v_a_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___f_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2730_; 
v___x_2722_ = lean_nat_dec_lt(v___x_2693_, v___x_2694_);
v_a_2723_ = lean_array_uget_borrowed(v_as_2695_, v_i_2697_);
v___x_2724_ = lean_array_fget_borrowed(v_array_2711_, v_start_2712_);
v___x_2725_ = lean_box(v___x_2722_);
lean_inc(v___x_2724_);
lean_inc(v_a_2723_);
v___f_2726_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2726_, 0, v_a_2723_);
lean_closure_set(v___f_2726_, 1, v___x_2724_);
lean_closure_set(v___f_2726_, 2, v___x_2725_);
v___x_2727_ = lean_unsigned_to_nat(1u);
v___x_2728_ = lean_nat_add(v_start_2712_, v___x_2727_);
lean_dec(v_start_2712_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 1, v___x_2728_);
v___x_2730_ = v___x_2720_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_array_2711_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v___x_2728_);
lean_ctor_set(v_reuseFailAlloc_2759_, 2, v_stop_2713_);
v___x_2730_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2731_; 
lean_inc(v___y_2702_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2700_);
lean_inc_ref(v___y_2699_);
lean_inc(v_a_2723_);
v___x_2731_ = lean_infer_type(v_a_2723_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; uint8_t v___x_2733_; lean_object* v___x_2734_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2733_ = 0;
v___x_2734_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_2732_, v___f_2726_, v___x_2733_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2736_ = l_Lean_Expr_app___override(v_fst_2707_, v_a_2735_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 1, v___x_2730_);
lean_ctor_set(v___x_2709_, 0, v___x_2736_);
v___x_2738_ = v___x_2709_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2736_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v___x_2730_);
v___x_2738_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
size_t v___x_2739_; size_t v___x_2740_; 
v___x_2739_ = ((size_t)1ULL);
v___x_2740_ = lean_usize_add(v_i_2697_, v___x_2739_);
v_i_2697_ = v___x_2740_;
v_b_2698_ = v___x_2738_;
goto _start;
}
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
lean_dec_ref(v___x_2730_);
lean_del_object(v___x_2709_);
lean_dec(v_fst_2707_);
v_a_2743_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2734_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2734_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
lean_dec_ref(v___x_2730_);
lean_dec_ref(v___f_2726_);
lean_del_object(v___x_2709_);
lean_dec(v_fst_2707_);
v_a_2751_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___x_2731_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2731_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___boxed(lean_object* v___x_2765_, lean_object* v___x_2766_, lean_object* v_as_2767_, lean_object* v_sz_2768_, lean_object* v_i_2769_, lean_object* v_b_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
size_t v_sz_boxed_2776_; size_t v_i_boxed_2777_; lean_object* v_res_2778_; 
v_sz_boxed_2776_ = lean_unbox_usize(v_sz_2768_);
lean_dec(v_sz_2768_);
v_i_boxed_2777_ = lean_unbox_usize(v_i_2769_);
lean_dec(v_i_2769_);
v_res_2778_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(v___x_2765_, v___x_2766_, v_as_2767_, v_sz_boxed_2776_, v_i_boxed_2777_, v_b_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec_ref(v_as_2767_);
lean_dec(v___x_2766_);
lean_dec(v___x_2765_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(lean_object* v_as_2779_, size_t v_sz_2780_, size_t v_i_2781_, lean_object* v_b_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_){
_start:
{
uint8_t v___x_2788_; 
v___x_2788_ = lean_usize_dec_lt(v_i_2781_, v_sz_2780_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2789_, 0, v_b_2782_);
return v___x_2789_;
}
else
{
lean_object* v_a_2790_; lean_object* v_toInductionSubgoal_2791_; lean_object* v_mvarId_2792_; uint8_t v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_a_2790_ = lean_array_uget_borrowed(v_as_2779_, v_i_2781_);
v_toInductionSubgoal_2791_ = lean_ctor_get(v_a_2790_, 0);
v_mvarId_2792_ = lean_ctor_get(v_toInductionSubgoal_2791_, 0);
v___x_2793_ = 0;
v___x_2794_ = lean_box(0);
lean_inc(v_mvarId_2792_);
v___x_2795_ = l_Lean_MVarId_refl(v_mvarId_2792_, v___x_2793_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
if (lean_obj_tag(v___x_2795_) == 0)
{
size_t v___x_2796_; size_t v___x_2797_; 
lean_dec_ref_known(v___x_2795_, 1);
v___x_2796_ = ((size_t)1ULL);
v___x_2797_ = lean_usize_add(v_i_2781_, v___x_2796_);
v_i_2781_ = v___x_2797_;
v_b_2782_ = v___x_2794_;
goto _start;
}
else
{
return v___x_2795_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3___boxed(lean_object* v_as_2799_, lean_object* v_sz_2800_, lean_object* v_i_2801_, lean_object* v_b_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
size_t v_sz_boxed_2808_; size_t v_i_boxed_2809_; lean_object* v_res_2810_; 
v_sz_boxed_2808_ = lean_unbox_usize(v_sz_2800_);
lean_dec(v_sz_2800_);
v_i_boxed_2809_ = lean_unbox_usize(v_i_2801_);
lean_dec(v_i_2801_);
v_res_2810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(v_as_2799_, v_sz_boxed_2808_, v_i_boxed_2809_, v_b_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec_ref(v_as_2799_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(lean_object* v___x_2811_, lean_object* v_tail_2812_, lean_object* v_recName_2813_, lean_object* v___x_2814_, lean_object* v___x_2815_, lean_object* v___x_2816_, lean_object* v___x_2817_, lean_object* v___x_2818_, lean_object* v___x_2819_, lean_object* v___x_2820_, lean_object* v___x_2821_, lean_object* v___x_2822_, lean_object* v___x_2823_, lean_object* v___x_2824_, lean_object* v_val_2825_, uint8_t v___x_2826_, lean_object* v_brecOnGoName_2827_, lean_object* v_levelParams_2828_, lean_object* v___x_2829_, lean_object* v_brecOnName_2830_, lean_object* v___x_2831_, lean_object* v_brecOnEqName_2832_, lean_object* v_fs_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; size_t v_sz_2843_; size_t v___x_2844_; lean_object* v___x_2845_; 
lean_inc(v___x_2811_);
v___x_2839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2811_);
lean_ctor_set(v___x_2839_, 1, v_tail_2812_);
v___x_2840_ = l_Lean_Expr_const___override(v_recName_2813_, v___x_2839_);
v___x_2841_ = l_Lean_mkAppN(v___x_2840_, v___x_2814_);
v___x_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
lean_ctor_set(v___x_2842_, 1, v___x_2815_);
v_sz_2843_ = lean_array_size(v___x_2816_);
v___x_2844_ = ((size_t)0ULL);
v___x_2845_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(v___x_2817_, v___x_2818_, v___x_2816_, v_sz_2843_, v___x_2844_, v___x_2842_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v_fst_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_3208_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v_fst_2847_ = lean_ctor_get(v_a_2846_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_a_2846_);
if (v_isSharedCheck_3208_ == 0)
{
lean_object* v_unused_3209_; 
v_unused_3209_ = lean_ctor_get(v_a_2846_, 1);
lean_dec(v_unused_3209_);
v___x_2849_ = v_a_2846_;
v_isShared_2850_ = v_isSharedCheck_3208_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_fst_2847_);
lean_dec(v_a_2846_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_3208_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
size_t v_sz_2851_; lean_object* v___x_2852_; 
v_sz_2851_ = lean_array_size(v___x_2819_);
lean_inc_ref(v_fs_2833_);
lean_inc_ref(v___x_2820_);
lean_inc_ref(v___x_2816_);
v___x_2852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(v___x_2811_, v___x_2816_, v___x_2820_, v_fs_2833_, v___x_2819_, v_sz_2851_, v___x_2844_, v_fst_2847_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v___x_2854_ = l_Lean_mkAppN(v_a_2853_, v___x_2821_);
lean_inc_ref_n(v___x_2822_, 3);
v___x_2855_ = l_Lean_Expr_app___override(v___x_2854_, v___x_2822_);
v___x_2856_ = l_Array_append___redArg(v___x_2814_, v___x_2816_);
v___x_2857_ = l_Array_append___redArg(v___x_2856_, v___x_2821_);
v___x_2858_ = lean_mk_empty_array_with_capacity(v___x_2823_);
v___x_2859_ = lean_array_push(v___x_2858_, v___x_2822_);
v___x_2860_ = l_Array_append___redArg(v___x_2857_, v___x_2859_);
lean_dec_ref(v___x_2859_);
v___x_2861_ = l_Array_append___redArg(v___x_2860_, v_fs_2833_);
v___x_2862_ = lean_array_get(v___x_2824_, v___x_2816_, v_val_2825_);
lean_dec_ref(v___x_2816_);
v___x_2863_ = lean_array_push(v___x_2821_, v___x_2822_);
v___x_2864_ = l_Lean_mkAppN(v___x_2862_, v___x_2863_);
v___x_2865_ = lean_array_get(v___x_2824_, v___x_2820_, v_val_2825_);
lean_dec_ref(v___x_2820_);
v___x_2866_ = l_Lean_mkAppN(v___x_2865_, v___x_2863_);
lean_inc_ref(v___x_2864_);
v___x_2867_ = l_Lean_Meta_mkPProd(v___x_2864_, v___x_2866_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; uint8_t v___x_2869_; uint8_t v___x_2870_; lean_object* v___x_2871_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v___x_2869_ = 0;
v___x_2870_ = 1;
lean_inc_ref(v___x_2861_);
v___x_2871_ = l_Lean_Meta_mkForallFVars(v___x_2861_, v_a_2868_, v___x_2869_, v___x_2826_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2873_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
lean_inc_ref(v___x_2861_);
v___x_2873_ = l_Lean_Meta_mkLambdaFVars(v___x_2861_, v___x_2855_, v___x_2869_, v___x_2826_, v___x_2869_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_3175_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref_known(v___x_2873_, 1);
v___x_2875_ = lean_box(1);
lean_inc(v_levelParams_2828_);
lean_inc(v_brecOnGoName_2827_);
v___x_2876_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_brecOnGoName_2827_, v_levelParams_2828_, v_a_2872_, v_a_2874_, v___x_2875_, v___y_2837_);
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_2879_ = v___x_2876_;
v_isShared_2880_ = v_isSharedCheck_3175_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2876_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_3175_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
lean_inc(v_a_2877_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 1);
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_3174_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = l_Lean_addDecl(v___x_2882_, v___x_2869_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_toConstantVal_2884_; lean_object* v_name_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_3171_; 
lean_dec_ref_known(v___x_2883_, 1);
v_toConstantVal_2884_ = lean_ctor_get(v_a_2877_, 0);
lean_inc_ref(v_toConstantVal_2884_);
lean_dec(v_a_2877_);
v_name_2885_ = lean_ctor_get(v_toConstantVal_2884_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_toConstantVal_2884_);
if (v_isSharedCheck_3171_ == 0)
{
lean_object* v_unused_3172_; lean_object* v_unused_3173_; 
v_unused_3172_ = lean_ctor_get(v_toConstantVal_2884_, 2);
lean_dec(v_unused_3172_);
v_unused_3173_ = lean_ctor_get(v_toConstantVal_2884_, 1);
lean_dec(v_unused_3173_);
v___x_2887_ = v_toConstantVal_2884_;
v_isShared_2888_ = v_isSharedCheck_3171_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_name_2885_);
lean_dec(v_toConstantVal_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_3171_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v_env_2891_; lean_object* v_nextMacroScope_2892_; lean_object* v_ngen_2893_; lean_object* v_auxDeclNGen_2894_; lean_object* v_traceState_2895_; lean_object* v_messages_2896_; lean_object* v_infoState_2897_; lean_object* v_snapshotTasks_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_3169_; 
lean_inc(v_name_2885_);
v___x_2889_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_2885_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec_ref(v___x_2889_);
v___x_2890_ = lean_st_ref_take(v___y_2837_);
v_env_2891_ = lean_ctor_get(v___x_2890_, 0);
v_nextMacroScope_2892_ = lean_ctor_get(v___x_2890_, 1);
v_ngen_2893_ = lean_ctor_get(v___x_2890_, 2);
v_auxDeclNGen_2894_ = lean_ctor_get(v___x_2890_, 3);
v_traceState_2895_ = lean_ctor_get(v___x_2890_, 4);
v_messages_2896_ = lean_ctor_get(v___x_2890_, 6);
v_infoState_2897_ = lean_ctor_get(v___x_2890_, 7);
v_snapshotTasks_2898_ = lean_ctor_get(v___x_2890_, 8);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_3169_ == 0)
{
lean_object* v_unused_3170_; 
v_unused_3170_ = lean_ctor_get(v___x_2890_, 5);
lean_dec(v_unused_3170_);
v___x_2900_ = v___x_2890_;
v_isShared_2901_ = v_isSharedCheck_3169_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_snapshotTasks_2898_);
lean_inc(v_infoState_2897_);
lean_inc(v_messages_2896_);
lean_inc(v_traceState_2895_);
lean_inc(v_auxDeclNGen_2894_);
lean_inc(v_ngen_2893_);
lean_inc(v_nextMacroScope_2892_);
lean_inc(v_env_2891_);
lean_dec(v___x_2890_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_3169_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
v___x_2902_ = l_Lean_addProtected(v_env_2891_, v_name_2885_);
v___x_2903_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 5, v___x_2903_);
lean_ctor_set(v___x_2900_, 0, v___x_2902_);
v___x_2905_ = v___x_2900_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_nextMacroScope_2892_);
lean_ctor_set(v_reuseFailAlloc_3168_, 2, v_ngen_2893_);
lean_ctor_set(v_reuseFailAlloc_3168_, 3, v_auxDeclNGen_2894_);
lean_ctor_set(v_reuseFailAlloc_3168_, 4, v_traceState_2895_);
lean_ctor_set(v_reuseFailAlloc_3168_, 5, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_3168_, 6, v_messages_2896_);
lean_ctor_set(v_reuseFailAlloc_3168_, 7, v_infoState_2897_);
lean_ctor_set(v_reuseFailAlloc_3168_, 8, v_snapshotTasks_2898_);
v___x_2905_ = v_reuseFailAlloc_3168_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v_mctx_2908_; lean_object* v_zetaDeltaFVarIds_2909_; lean_object* v_postponed_2910_; lean_object* v_diag_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_3166_; 
v___x_2906_ = lean_st_ref_put(v___y_2837_, v___x_2905_);
v___x_2907_ = lean_st_ref_take(v___y_2835_);
v_mctx_2908_ = lean_ctor_get(v___x_2907_, 0);
v_zetaDeltaFVarIds_2909_ = lean_ctor_get(v___x_2907_, 2);
v_postponed_2910_ = lean_ctor_get(v___x_2907_, 3);
v_diag_2911_ = lean_ctor_get(v___x_2907_, 4);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_3166_ == 0)
{
lean_object* v_unused_3167_; 
v_unused_3167_ = lean_ctor_get(v___x_2907_, 1);
lean_dec(v_unused_3167_);
v___x_2913_ = v___x_2907_;
v_isShared_2914_ = v_isSharedCheck_3166_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_diag_2911_);
lean_inc(v_postponed_2910_);
lean_inc(v_zetaDeltaFVarIds_2909_);
lean_inc(v_mctx_2908_);
lean_dec(v___x_2907_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_3166_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2915_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4);
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 1, v___x_2915_);
v___x_2917_ = v___x_2913_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_mctx_2908_);
lean_ctor_set(v_reuseFailAlloc_3165_, 1, v___x_2915_);
lean_ctor_set(v_reuseFailAlloc_3165_, 2, v_zetaDeltaFVarIds_2909_);
lean_ctor_set(v_reuseFailAlloc_3165_, 3, v_postponed_2910_);
lean_ctor_set(v_reuseFailAlloc_3165_, 4, v_diag_2911_);
v___x_2917_ = v_reuseFailAlloc_3165_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2918_ = lean_st_ref_put(v___y_2835_, v___x_2917_);
lean_inc(v___x_2829_);
v___x_2919_ = l_Lean_Expr_const___override(v_brecOnGoName_2827_, v___x_2829_);
v___x_2920_ = l_Lean_mkAppN(v___x_2919_, v___x_2861_);
lean_inc_ref(v___x_2920_);
v___x_2921_ = l_Lean_Meta_mkPProdFstM(v___x_2920_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2923_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
lean_inc_ref(v___x_2861_);
v___x_2923_ = l_Lean_Meta_mkLambdaFVars(v___x_2861_, v_a_2922_, v___x_2869_, v___x_2826_, v___x_2869_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2925_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
lean_inc_ref(v___x_2861_);
v___x_2925_ = l_Lean_Meta_mkForallFVars(v___x_2861_, v___x_2864_, v___x_2869_, v___x_2826_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2927_; lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_3140_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref_known(v___x_2925_, 1);
lean_inc(v_levelParams_2828_);
v___x_2927_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_brecOnName_2830_, v_levelParams_2828_, v_a_2926_, v_a_2924_, v___x_2875_, v___y_2837_);
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_2930_ = v___x_2927_;
v_isShared_2931_ = v_isSharedCheck_3140_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2927_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_3140_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
lean_inc(v_a_2928_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set_tag(v___x_2930_, 1);
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_3139_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
lean_object* v___x_2934_; 
v___x_2934_ = l_Lean_addDecl(v___x_2933_, v___x_2869_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_toConstantVal_2935_; lean_object* v_name_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref_known(v___x_2934_, 1);
v_toConstantVal_2935_ = lean_ctor_get(v_a_2928_, 0);
lean_inc_ref(v_toConstantVal_2935_);
lean_dec(v_a_2928_);
v_name_2936_ = lean_ctor_get(v_toConstantVal_2935_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_toConstantVal_2935_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; lean_object* v_unused_3138_; 
v_unused_3137_ = lean_ctor_get(v_toConstantVal_2935_, 2);
lean_dec(v_unused_3137_);
v_unused_3138_ = lean_ctor_get(v_toConstantVal_2935_, 1);
lean_dec(v_unused_3138_);
v___x_2938_ = v_toConstantVal_2935_;
v_isShared_2939_ = v_isSharedCheck_3136_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_name_2936_);
lean_dec(v_toConstantVal_2935_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_3136_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v_env_2942_; lean_object* v_nextMacroScope_2943_; lean_object* v_ngen_2944_; lean_object* v_auxDeclNGen_2945_; lean_object* v_traceState_2946_; lean_object* v_messages_2947_; lean_object* v_infoState_2948_; lean_object* v_snapshotTasks_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_3134_; 
lean_inc(v_name_2936_);
v___x_2940_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_2936_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec_ref(v___x_2940_);
v___x_2941_ = lean_st_ref_take(v___y_2837_);
v_env_2942_ = lean_ctor_get(v___x_2941_, 0);
v_nextMacroScope_2943_ = lean_ctor_get(v___x_2941_, 1);
v_ngen_2944_ = lean_ctor_get(v___x_2941_, 2);
v_auxDeclNGen_2945_ = lean_ctor_get(v___x_2941_, 3);
v_traceState_2946_ = lean_ctor_get(v___x_2941_, 4);
v_messages_2947_ = lean_ctor_get(v___x_2941_, 6);
v_infoState_2948_ = lean_ctor_get(v___x_2941_, 7);
v_snapshotTasks_2949_ = lean_ctor_get(v___x_2941_, 8);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_3134_ == 0)
{
lean_object* v_unused_3135_; 
v_unused_3135_ = lean_ctor_get(v___x_2941_, 5);
lean_dec(v_unused_3135_);
v___x_2951_ = v___x_2941_;
v_isShared_2952_ = v_isSharedCheck_3134_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_snapshotTasks_2949_);
lean_inc(v_infoState_2948_);
lean_inc(v_messages_2947_);
lean_inc(v_traceState_2946_);
lean_inc(v_auxDeclNGen_2945_);
lean_inc(v_ngen_2944_);
lean_inc(v_nextMacroScope_2943_);
lean_inc(v_env_2942_);
lean_dec(v___x_2941_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_3134_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2953_; lean_object* v___x_2955_; 
lean_inc(v_name_2936_);
v___x_2953_ = l_Lean_markAuxRecursor(v_env_2942_, v_name_2936_);
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 5, v___x_2903_);
lean_ctor_set(v___x_2951_, 0, v___x_2953_);
v___x_2955_ = v___x_2951_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_2953_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_nextMacroScope_2943_);
lean_ctor_set(v_reuseFailAlloc_3133_, 2, v_ngen_2944_);
lean_ctor_set(v_reuseFailAlloc_3133_, 3, v_auxDeclNGen_2945_);
lean_ctor_set(v_reuseFailAlloc_3133_, 4, v_traceState_2946_);
lean_ctor_set(v_reuseFailAlloc_3133_, 5, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_3133_, 6, v_messages_2947_);
lean_ctor_set(v_reuseFailAlloc_3133_, 7, v_infoState_2948_);
lean_ctor_set(v_reuseFailAlloc_3133_, 8, v_snapshotTasks_2949_);
v___x_2955_ = v_reuseFailAlloc_3133_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v_mctx_2958_; lean_object* v_zetaDeltaFVarIds_2959_; lean_object* v_postponed_2960_; lean_object* v_diag_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_3131_; 
v___x_2956_ = lean_st_ref_put(v___y_2837_, v___x_2955_);
v___x_2957_ = lean_st_ref_take(v___y_2835_);
v_mctx_2958_ = lean_ctor_get(v___x_2957_, 0);
v_zetaDeltaFVarIds_2959_ = lean_ctor_get(v___x_2957_, 2);
v_postponed_2960_ = lean_ctor_get(v___x_2957_, 3);
v_diag_2961_ = lean_ctor_get(v___x_2957_, 4);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; 
v_unused_3132_ = lean_ctor_get(v___x_2957_, 1);
lean_dec(v_unused_3132_);
v___x_2963_ = v___x_2957_;
v_isShared_2964_ = v_isSharedCheck_3131_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_diag_2961_);
lean_inc(v_postponed_2960_);
lean_inc(v_zetaDeltaFVarIds_2959_);
lean_inc(v_mctx_2958_);
lean_dec(v___x_2957_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_3131_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_2915_);
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_mctx_2958_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v___x_2915_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v_zetaDeltaFVarIds_2959_);
lean_ctor_set(v_reuseFailAlloc_3130_, 3, v_postponed_2960_);
lean_ctor_set(v_reuseFailAlloc_3130_, 4, v_diag_2961_);
v___x_2966_ = v_reuseFailAlloc_3130_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v_env_2969_; lean_object* v_nextMacroScope_2970_; lean_object* v_ngen_2971_; lean_object* v_auxDeclNGen_2972_; lean_object* v_traceState_2973_; lean_object* v_messages_2974_; lean_object* v_infoState_2975_; lean_object* v_snapshotTasks_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3128_; 
v___x_2967_ = lean_st_ref_put(v___y_2835_, v___x_2966_);
v___x_2968_ = lean_st_ref_take(v___y_2837_);
v_env_2969_ = lean_ctor_get(v___x_2968_, 0);
v_nextMacroScope_2970_ = lean_ctor_get(v___x_2968_, 1);
v_ngen_2971_ = lean_ctor_get(v___x_2968_, 2);
v_auxDeclNGen_2972_ = lean_ctor_get(v___x_2968_, 3);
v_traceState_2973_ = lean_ctor_get(v___x_2968_, 4);
v_messages_2974_ = lean_ctor_get(v___x_2968_, 6);
v_infoState_2975_ = lean_ctor_get(v___x_2968_, 7);
v_snapshotTasks_2976_ = lean_ctor_get(v___x_2968_, 8);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v___x_2968_, 5);
lean_dec(v_unused_3129_);
v___x_2978_ = v___x_2968_;
v_isShared_2979_ = v_isSharedCheck_3128_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_snapshotTasks_2976_);
lean_inc(v_infoState_2975_);
lean_inc(v_messages_2974_);
lean_inc(v_traceState_2973_);
lean_inc(v_auxDeclNGen_2972_);
lean_inc(v_ngen_2971_);
lean_inc(v_nextMacroScope_2970_);
lean_inc(v_env_2969_);
lean_dec(v___x_2968_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3128_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2982_; 
lean_inc(v_name_2936_);
v___x_2980_ = l_Lean_addProtected(v_env_2969_, v_name_2936_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 5, v___x_2903_);
lean_ctor_set(v___x_2978_, 0, v___x_2980_);
v___x_2982_ = v___x_2978_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_2980_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v_nextMacroScope_2970_);
lean_ctor_set(v_reuseFailAlloc_3127_, 2, v_ngen_2971_);
lean_ctor_set(v_reuseFailAlloc_3127_, 3, v_auxDeclNGen_2972_);
lean_ctor_set(v_reuseFailAlloc_3127_, 4, v_traceState_2973_);
lean_ctor_set(v_reuseFailAlloc_3127_, 5, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_3127_, 6, v_messages_2974_);
lean_ctor_set(v_reuseFailAlloc_3127_, 7, v_infoState_2975_);
lean_ctor_set(v_reuseFailAlloc_3127_, 8, v_snapshotTasks_2976_);
v___x_2982_ = v_reuseFailAlloc_3127_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v_mctx_2985_; lean_object* v_zetaDeltaFVarIds_2986_; lean_object* v_postponed_2987_; lean_object* v_diag_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3125_; 
v___x_2983_ = lean_st_ref_put(v___y_2837_, v___x_2982_);
v___x_2984_ = lean_st_ref_take(v___y_2835_);
v_mctx_2985_ = lean_ctor_get(v___x_2984_, 0);
v_zetaDeltaFVarIds_2986_ = lean_ctor_get(v___x_2984_, 2);
v_postponed_2987_ = lean_ctor_get(v___x_2984_, 3);
v_diag_2988_ = lean_ctor_get(v___x_2984_, 4);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3125_ == 0)
{
lean_object* v_unused_3126_; 
v_unused_3126_ = lean_ctor_get(v___x_2984_, 1);
lean_dec(v_unused_3126_);
v___x_2990_ = v___x_2984_;
v_isShared_2991_ = v_isSharedCheck_3125_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_diag_2988_);
lean_inc(v_postponed_2987_);
lean_inc(v_zetaDeltaFVarIds_2986_);
lean_inc(v_mctx_2985_);
lean_dec(v___x_2984_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3125_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v___x_2915_);
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_mctx_2985_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v___x_2915_);
lean_ctor_set(v_reuseFailAlloc_3124_, 2, v_zetaDeltaFVarIds_2986_);
lean_ctor_set(v_reuseFailAlloc_3124_, 3, v_postponed_2987_);
lean_ctor_set(v_reuseFailAlloc_3124_, 4, v_diag_2988_);
v___x_2993_ = v_reuseFailAlloc_3124_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2994_ = lean_st_ref_put(v___y_2835_, v___x_2993_);
v___x_2995_ = l_Lean_Expr_const___override(v_name_2936_, v___x_2829_);
v___x_2996_ = l_Lean_mkAppN(v___x_2995_, v___x_2861_);
v___x_2997_ = lean_array_get(v___x_2824_, v_fs_2833_, v_val_2825_);
lean_dec_ref(v_fs_2833_);
v___x_2998_ = l_Lean_mkAppN(v___x_2997_, v___x_2863_);
lean_dec_ref(v___x_2863_);
v___x_2999_ = l_Lean_Meta_mkPProdSndM(v___x_2920_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3001_ = l_Lean_Expr_app___override(v___x_2998_, v_a_3000_);
v___x_3002_ = l_Lean_Meta_mkEq(v___x_2996_, v___x_3001_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc_n(v_a_3003_, 2);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_3005_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3003_, v___x_3004_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v___x_3005_, 1);
v___x_3007_ = l_Lean_Expr_mvarId_x21(v_a_3006_);
v___x_3008_ = l_Lean_Expr_fvarId_x21(v___x_2822_);
lean_dec_ref(v___x_2822_);
v___x_3009_ = lean_mk_empty_array_with_capacity(v___x_2831_);
v___x_3010_ = lean_box(0);
v___x_3011_ = l_Lean_MVarId_cases(v___x_3007_, v___x_3008_, v___x_3009_, v___x_2869_, v___x_3010_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3011_) == 0)
{
lean_object* v_a_3012_; lean_object* v___x_3013_; size_t v_sz_3014_; lean_object* v___x_3015_; 
v_a_3012_ = lean_ctor_get(v___x_3011_, 0);
lean_inc(v_a_3012_);
lean_dec_ref_known(v___x_3011_, 1);
v___x_3013_ = lean_box(0);
v_sz_3014_ = lean_array_size(v_a_3012_);
v___x_3015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(v_a_3012_, v_sz_3014_, v___x_2844_, v___x_3013_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v_a_3012_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v___x_3016_; lean_object* v_a_3017_; lean_object* v___x_3018_; 
lean_dec_ref_known(v___x_3015_, 1);
v___x_3016_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_a_3006_, v___y_2835_);
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
lean_dec_ref(v___x_3016_);
lean_inc_ref(v___x_2861_);
v___x_3018_ = l_Lean_Meta_mkForallFVars(v___x_2861_, v_a_3003_, v___x_2869_, v___x_2826_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_a_3019_; lean_object* v___x_3020_; 
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_a_3019_);
lean_dec_ref_known(v___x_3018_, 1);
v___x_3020_ = l_Lean_Meta_mkLambdaFVars(v___x_2861_, v_a_3017_, v___x_2869_, v___x_2826_, v___x_2869_, v___x_2826_, v___x_2870_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3023_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
lean_inc(v_brecOnEqName_2832_);
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 2, v_a_3019_);
lean_ctor_set(v___x_2938_, 1, v_levelParams_2828_);
lean_ctor_set(v___x_2938_, 0, v_brecOnEqName_2832_);
v___x_3023_ = v___x_2938_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_brecOnEqName_2832_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v_levelParams_2828_);
lean_ctor_set(v_reuseFailAlloc_3075_, 2, v_a_3019_);
v___x_3023_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3024_; lean_object* v___x_3026_; 
v___x_3024_ = lean_box(0);
lean_inc(v_brecOnEqName_2832_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 1);
lean_ctor_set(v___x_2849_, 1, v___x_3024_);
lean_ctor_set(v___x_2849_, 0, v_brecOnEqName_2832_);
v___x_3026_ = v___x_2849_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_brecOnEqName_2832_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 2, v___x_3026_);
lean_ctor_set(v___x_2887_, 1, v_a_3021_);
lean_ctor_set(v___x_2887_, 0, v___x_3023_);
v___x_3028_ = v___x_2887_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3073_, 1, v_a_3021_);
lean_ctor_set(v_reuseFailAlloc_3073_, 2, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3029_; lean_object* v_a_3030_; lean_object* v___x_3031_; 
v___x_3029_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v___x_3028_, v___y_2837_);
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref(v___x_3029_);
v___x_3031_ = l_Lean_addDecl(v_a_3030_, v___x_2869_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3071_; 
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3071_ == 0)
{
lean_object* v_unused_3072_; 
v_unused_3072_ = lean_ctor_get(v___x_3031_, 0);
lean_dec(v_unused_3072_);
v___x_3033_ = v___x_3031_;
v_isShared_3034_ = v_isSharedCheck_3071_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v___x_3031_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3071_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3035_; lean_object* v_env_3036_; lean_object* v_nextMacroScope_3037_; lean_object* v_ngen_3038_; lean_object* v_auxDeclNGen_3039_; lean_object* v_traceState_3040_; lean_object* v_messages_3041_; lean_object* v_infoState_3042_; lean_object* v_snapshotTasks_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3069_; 
v___x_3035_ = lean_st_ref_take(v___y_2837_);
v_env_3036_ = lean_ctor_get(v___x_3035_, 0);
v_nextMacroScope_3037_ = lean_ctor_get(v___x_3035_, 1);
v_ngen_3038_ = lean_ctor_get(v___x_3035_, 2);
v_auxDeclNGen_3039_ = lean_ctor_get(v___x_3035_, 3);
v_traceState_3040_ = lean_ctor_get(v___x_3035_, 4);
v_messages_3041_ = lean_ctor_get(v___x_3035_, 6);
v_infoState_3042_ = lean_ctor_get(v___x_3035_, 7);
v_snapshotTasks_3043_ = lean_ctor_get(v___x_3035_, 8);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3069_ == 0)
{
lean_object* v_unused_3070_; 
v_unused_3070_ = lean_ctor_get(v___x_3035_, 5);
lean_dec(v_unused_3070_);
v___x_3045_ = v___x_3035_;
v_isShared_3046_ = v_isSharedCheck_3069_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_snapshotTasks_3043_);
lean_inc(v_infoState_3042_);
lean_inc(v_messages_3041_);
lean_inc(v_traceState_3040_);
lean_inc(v_auxDeclNGen_3039_);
lean_inc(v_ngen_3038_);
lean_inc(v_nextMacroScope_3037_);
lean_inc(v_env_3036_);
lean_dec(v___x_3035_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3069_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3047_; lean_object* v___x_3049_; 
v___x_3047_ = l_Lean_addProtected(v_env_3036_, v_brecOnEqName_2832_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 5, v___x_2903_);
lean_ctor_set(v___x_3045_, 0, v___x_3047_);
v___x_3049_ = v___x_3045_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v___x_3047_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_nextMacroScope_3037_);
lean_ctor_set(v_reuseFailAlloc_3068_, 2, v_ngen_3038_);
lean_ctor_set(v_reuseFailAlloc_3068_, 3, v_auxDeclNGen_3039_);
lean_ctor_set(v_reuseFailAlloc_3068_, 4, v_traceState_3040_);
lean_ctor_set(v_reuseFailAlloc_3068_, 5, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_3068_, 6, v_messages_3041_);
lean_ctor_set(v_reuseFailAlloc_3068_, 7, v_infoState_3042_);
lean_ctor_set(v_reuseFailAlloc_3068_, 8, v_snapshotTasks_3043_);
v___x_3049_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v_mctx_3052_; lean_object* v_zetaDeltaFVarIds_3053_; lean_object* v_postponed_3054_; lean_object* v_diag_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3066_; 
v___x_3050_ = lean_st_ref_put(v___y_2837_, v___x_3049_);
v___x_3051_ = lean_st_ref_take(v___y_2835_);
v_mctx_3052_ = lean_ctor_get(v___x_3051_, 0);
v_zetaDeltaFVarIds_3053_ = lean_ctor_get(v___x_3051_, 2);
v_postponed_3054_ = lean_ctor_get(v___x_3051_, 3);
v_diag_3055_ = lean_ctor_get(v___x_3051_, 4);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3066_ == 0)
{
lean_object* v_unused_3067_; 
v_unused_3067_ = lean_ctor_get(v___x_3051_, 1);
lean_dec(v_unused_3067_);
v___x_3057_ = v___x_3051_;
v_isShared_3058_ = v_isSharedCheck_3066_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_diag_3055_);
lean_inc(v_postponed_3054_);
lean_inc(v_zetaDeltaFVarIds_3053_);
lean_inc(v_mctx_3052_);
lean_dec(v___x_3051_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3066_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
lean_ctor_set(v___x_3057_, 1, v___x_2915_);
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_mctx_3052_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v___x_2915_);
lean_ctor_set(v_reuseFailAlloc_3065_, 2, v_zetaDeltaFVarIds_3053_);
lean_ctor_set(v_reuseFailAlloc_3065_, 3, v_postponed_3054_);
lean_ctor_set(v_reuseFailAlloc_3065_, 4, v_diag_3055_);
v___x_3060_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3061_; lean_object* v___x_3063_; 
v___x_3061_ = lean_st_ref_put(v___y_2835_, v___x_3060_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v___x_3013_);
v___x_3063_ = v___x_3033_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3013_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
}
}
else
{
lean_dec(v_brecOnEqName_2832_);
return v___x_3031_;
}
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_a_3019_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
v_a_3076_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3020_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3020_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v_a_3017_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
v_a_3084_ = lean_ctor_get(v___x_3018_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3018_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3018_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_dec(v_a_3006_);
lean_dec(v_a_3003_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
return v___x_3015_;
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v_a_3006_);
lean_dec(v_a_3003_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
v_a_3092_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3011_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3011_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec(v_a_3003_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3100_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3005_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3005_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3108_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3002_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3002_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3116_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_2999_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_2999_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
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
lean_dec(v_a_2928_);
lean_dec_ref(v___x_2920_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
return v___x_2934_;
}
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_dec(v_a_2924_);
lean_dec_ref(v___x_2920_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3141_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_2925_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_2925_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec_ref(v___x_2920_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3149_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_2923_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_2923_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec_ref(v___x_2920_);
lean_del_object(v___x_2887_);
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec_ref(v___x_2822_);
v_a_3157_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_2921_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_2921_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
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
lean_dec(v_a_2877_);
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
return v___x_2883_;
}
}
}
}
else
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
lean_dec(v_a_2872_);
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
v_a_3176_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___x_2873_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___x_2873_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___x_2855_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
v_a_3184_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v___x_2871_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_2871_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
}
else
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3199_; 
lean_dec_ref(v___x_2864_);
lean_dec_ref(v___x_2863_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___x_2855_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
v_a_3192_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3194_ = v___x_2867_;
v_isShared_3195_ = v_isSharedCheck_3199_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v___x_2867_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3199_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3197_; 
if (v_isShared_3195_ == 0)
{
v___x_3197_ = v___x_3194_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_a_3192_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_del_object(v___x_2849_);
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
lean_dec_ref(v___x_2821_);
lean_dec_ref(v___x_2820_);
lean_dec_ref(v___x_2816_);
lean_dec_ref(v___x_2814_);
v_a_3200_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_2852_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_2852_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
}
else
{
lean_object* v_a_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3217_; 
lean_dec_ref(v_fs_2833_);
lean_dec(v_brecOnEqName_2832_);
lean_dec(v_brecOnName_2830_);
lean_dec(v___x_2829_);
lean_dec(v_levelParams_2828_);
lean_dec(v_brecOnGoName_2827_);
lean_dec_ref(v___x_2822_);
lean_dec_ref(v___x_2821_);
lean_dec_ref(v___x_2820_);
lean_dec_ref(v___x_2816_);
lean_dec_ref(v___x_2814_);
lean_dec(v___x_2811_);
v_a_3210_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3212_ = v___x_2845_;
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_a_3210_);
lean_dec(v___x_2845_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
lean_object* v___x_3215_; 
if (v_isShared_3213_ == 0)
{
v___x_3215_ = v___x_3212_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_a_3210_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed(lean_object** _args){
lean_object* v___x_3218_ = _args[0];
lean_object* v_tail_3219_ = _args[1];
lean_object* v_recName_3220_ = _args[2];
lean_object* v___x_3221_ = _args[3];
lean_object* v___x_3222_ = _args[4];
lean_object* v___x_3223_ = _args[5];
lean_object* v___x_3224_ = _args[6];
lean_object* v___x_3225_ = _args[7];
lean_object* v___x_3226_ = _args[8];
lean_object* v___x_3227_ = _args[9];
lean_object* v___x_3228_ = _args[10];
lean_object* v___x_3229_ = _args[11];
lean_object* v___x_3230_ = _args[12];
lean_object* v___x_3231_ = _args[13];
lean_object* v_val_3232_ = _args[14];
lean_object* v___x_3233_ = _args[15];
lean_object* v_brecOnGoName_3234_ = _args[16];
lean_object* v_levelParams_3235_ = _args[17];
lean_object* v___x_3236_ = _args[18];
lean_object* v_brecOnName_3237_ = _args[19];
lean_object* v___x_3238_ = _args[20];
lean_object* v_brecOnEqName_3239_ = _args[21];
lean_object* v_fs_3240_ = _args[22];
lean_object* v___y_3241_ = _args[23];
lean_object* v___y_3242_ = _args[24];
lean_object* v___y_3243_ = _args[25];
lean_object* v___y_3244_ = _args[26];
lean_object* v___y_3245_ = _args[27];
_start:
{
uint8_t v___x_30675__boxed_3246_; lean_object* v_res_3247_; 
v___x_30675__boxed_3246_ = lean_unbox(v___x_3233_);
v_res_3247_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(v___x_3218_, v_tail_3219_, v_recName_3220_, v___x_3221_, v___x_3222_, v___x_3223_, v___x_3224_, v___x_3225_, v___x_3226_, v___x_3227_, v___x_3228_, v___x_3229_, v___x_3230_, v___x_3231_, v_val_3232_, v___x_30675__boxed_3246_, v_brecOnGoName_3234_, v_levelParams_3235_, v___x_3236_, v_brecOnName_3237_, v___x_3238_, v_brecOnEqName_3239_, v_fs_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
lean_dec(v___x_3238_);
lean_dec(v_val_3232_);
lean_dec_ref(v___x_3231_);
lean_dec(v___x_3230_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3225_);
lean_dec(v___x_3224_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(lean_object* v_targs_3248_, lean_object* v_a_3249_, uint8_t v___x_3250_, lean_object* v_f_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; uint8_t v___x_3259_; uint8_t v___x_3260_; lean_object* v___x_3261_; 
lean_inc_ref(v_targs_3248_);
v___x_3257_ = lean_array_push(v_targs_3248_, v_f_3251_);
v___x_3258_ = l_Lean_mkAppN(v_a_3249_, v_targs_3248_);
lean_dec_ref(v_targs_3248_);
v___x_3259_ = 0;
v___x_3260_ = 1;
v___x_3261_ = l_Lean_Meta_mkForallFVars(v___x_3257_, v___x_3258_, v___x_3259_, v___x_3250_, v___x_3250_, v___x_3260_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed(lean_object* v_targs_3262_, lean_object* v_a_3263_, lean_object* v___x_3264_, lean_object* v_f_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
uint8_t v___x_31390__boxed_3271_; lean_object* v_res_3272_; 
v___x_31390__boxed_3271_ = lean_unbox(v___x_3264_);
v_res_3272_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(v_targs_3262_, v_a_3263_, v___x_31390__boxed_3271_, v_f_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(lean_object* v_a_3276_, uint8_t v___x_3277_, lean_object* v___x_3278_, lean_object* v_targs_3279_, lean_object* v_x_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_){
_start:
{
lean_object* v___x_3286_; lean_object* v___f_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3286_ = lean_box(v___x_3277_);
lean_inc_ref(v_targs_3279_);
v___f_3287_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3287_, 0, v_targs_3279_);
lean_closure_set(v___f_3287_, 1, v_a_3276_);
lean_closure_set(v___f_3287_, 2, v___x_3286_);
v___x_3288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1));
v___x_3289_ = l_Lean_mkAppN(v___x_3278_, v_targs_3279_);
lean_dec_ref(v_targs_3279_);
v___x_3290_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v___x_3288_, v___x_3289_, v___f_3287_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed(lean_object* v_a_3291_, lean_object* v___x_3292_, lean_object* v___x_3293_, lean_object* v_targs_3294_, lean_object* v_x_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
uint8_t v___x_31424__boxed_3301_; lean_object* v_res_3302_; 
v___x_31424__boxed_3301_ = lean_unbox(v___x_3292_);
v_res_3302_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(v_a_3291_, v___x_31424__boxed_3301_, v___x_3293_, v_targs_3294_, v_x_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec_ref(v_x_3295_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(lean_object* v_a_3303_, lean_object* v_x_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3310_, 0, v_a_3303_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed(lean_object* v_a_3311_, lean_object* v_x_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(v_a_3311_, v_x_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec_ref(v_x_3312_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(lean_object* v___x_3320_, lean_object* v___x_3321_, lean_object* v_as_3322_, size_t v_sz_3323_, size_t v_i_3324_, lean_object* v_b_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
uint8_t v___x_3331_; 
v___x_3331_ = lean_usize_dec_lt(v_i_3324_, v_sz_3323_);
if (v___x_3331_ == 0)
{
lean_object* v___x_3332_; 
v___x_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3332_, 0, v_b_3325_);
return v___x_3332_;
}
else
{
lean_object* v_snd_3333_; lean_object* v_fst_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3431_; 
v_snd_3333_ = lean_ctor_get(v_b_3325_, 1);
v_fst_3334_ = lean_ctor_get(v_b_3325_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v_b_3325_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3336_ = v_b_3325_;
v_isShared_3337_ = v_isSharedCheck_3431_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_snd_3333_);
lean_inc(v_fst_3334_);
lean_dec(v_b_3325_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3431_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v_fst_3338_; lean_object* v_snd_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3430_; 
v_fst_3338_ = lean_ctor_get(v_snd_3333_, 0);
v_snd_3339_ = lean_ctor_get(v_snd_3333_, 1);
v_isSharedCheck_3430_ = !lean_is_exclusive(v_snd_3333_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3341_ = v_snd_3333_;
v_isShared_3342_ = v_isSharedCheck_3430_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_snd_3339_);
lean_inc(v_fst_3338_);
lean_dec(v_snd_3333_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3430_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v_next_3351_; 
v_next_3351_ = lean_ctor_get(v_snd_3339_, 0);
lean_inc(v_next_3351_);
if (lean_obj_tag(v_next_3351_) == 0)
{
goto v___jp_3343_;
}
else
{
lean_object* v_upperBound_3352_; lean_object* v_val_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3429_; 
v_upperBound_3352_ = lean_ctor_get(v_snd_3339_, 1);
v_val_3353_ = lean_ctor_get(v_next_3351_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v_next_3351_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3355_ = v_next_3351_;
v_isShared_3356_ = v_isSharedCheck_3429_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_val_3353_);
lean_dec(v_next_3351_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3429_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
uint8_t v___x_3357_; 
v___x_3357_ = lean_nat_dec_lt(v_val_3353_, v_upperBound_3352_);
if (v___x_3357_ == 0)
{
lean_del_object(v___x_3355_);
lean_dec(v_val_3353_);
goto v___jp_3343_;
}
else
{
lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3426_; 
lean_inc(v_upperBound_3352_);
lean_del_object(v___x_3341_);
lean_del_object(v___x_3336_);
v_isSharedCheck_3426_ = !lean_is_exclusive(v_snd_3339_);
if (v_isSharedCheck_3426_ == 0)
{
lean_object* v_unused_3427_; lean_object* v_unused_3428_; 
v_unused_3427_ = lean_ctor_get(v_snd_3339_, 1);
lean_dec(v_unused_3427_);
v_unused_3428_ = lean_ctor_get(v_snd_3339_, 0);
lean_dec(v_unused_3428_);
v___x_3359_ = v_snd_3339_;
v_isShared_3360_ = v_isSharedCheck_3426_;
goto v_resetjp_3358_;
}
else
{
lean_dec(v_snd_3339_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3426_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v_array_3361_; lean_object* v_start_3362_; lean_object* v_stop_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3367_; 
v_array_3361_ = lean_ctor_get(v_fst_3338_, 0);
v_start_3362_ = lean_ctor_get(v_fst_3338_, 1);
v_stop_3363_ = lean_ctor_get(v_fst_3338_, 2);
v___x_3364_ = lean_unsigned_to_nat(1u);
v___x_3365_ = lean_nat_add(v_val_3353_, v___x_3364_);
lean_dec(v_val_3353_);
lean_inc(v___x_3365_);
if (v_isShared_3356_ == 0)
{
lean_ctor_set(v___x_3355_, 0, v___x_3365_);
v___x_3367_ = v___x_3355_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3365_);
v___x_3367_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
lean_object* v___x_3369_; 
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 0, v___x_3367_);
v___x_3369_ = v___x_3359_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3367_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v_upperBound_3352_);
v___x_3369_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
uint8_t v___x_3370_; 
v___x_3370_ = lean_nat_dec_lt(v_start_3362_, v_stop_3363_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec(v___x_3365_);
v___x_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3371_, 0, v_fst_3338_);
lean_ctor_set(v___x_3371_, 1, v___x_3369_);
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v_fst_3334_);
lean_ctor_set(v___x_3372_, 1, v___x_3371_);
v___x_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
return v___x_3373_;
}
else
{
lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3420_; 
lean_inc(v_stop_3363_);
lean_inc(v_start_3362_);
lean_inc_ref(v_array_3361_);
v_isSharedCheck_3420_ = !lean_is_exclusive(v_fst_3338_);
if (v_isSharedCheck_3420_ == 0)
{
lean_object* v_unused_3421_; lean_object* v_unused_3422_; lean_object* v_unused_3423_; 
v_unused_3421_ = lean_ctor_get(v_fst_3338_, 2);
lean_dec(v_unused_3421_);
v_unused_3422_ = lean_ctor_get(v_fst_3338_, 1);
lean_dec(v_unused_3422_);
v_unused_3423_ = lean_ctor_get(v_fst_3338_, 0);
lean_dec(v_unused_3423_);
v___x_3375_ = v_fst_3338_;
v_isShared_3376_ = v_isSharedCheck_3420_;
goto v_resetjp_3374_;
}
else
{
lean_dec(v_fst_3338_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3420_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
uint8_t v___x_3377_; lean_object* v_a_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; lean_object* v___x_3384_; 
v___x_3377_ = lean_nat_dec_lt(v___x_3320_, v___x_3321_);
v_a_3378_ = lean_array_uget_borrowed(v_as_3322_, v_i_3324_);
v___x_3379_ = lean_array_fget_borrowed(v_array_3361_, v_start_3362_);
v___x_3380_ = lean_box(v___x_3377_);
lean_inc(v___x_3379_);
lean_inc(v_a_3378_);
v___f_3381_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed), 10, 3);
lean_closure_set(v___f_3381_, 0, v_a_3378_);
lean_closure_set(v___f_3381_, 1, v___x_3380_);
lean_closure_set(v___f_3381_, 2, v___x_3379_);
v___x_3382_ = lean_nat_add(v_start_3362_, v___x_3364_);
lean_dec(v_start_3362_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set(v___x_3375_, 1, v___x_3382_);
v___x_3384_ = v___x_3375_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_array_3361_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v___x_3382_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_stop_3363_);
v___x_3384_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3385_; 
lean_inc(v___y_3329_);
lean_inc_ref(v___y_3328_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3326_);
lean_inc(v_a_3378_);
v___x_3385_ = lean_infer_type(v_a_3378_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; uint8_t v___x_3387_; lean_object* v___x_3388_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3385_, 1);
v___x_3387_ = 0;
v___x_3388_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_3386_, v___f_3381_, v___x_3387_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___f_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; size_t v___x_3400_; size_t v___x_3401_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___x_3388_, 1);
v___f_3390_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed), 7, 1);
lean_closure_set(v___f_3390_, 0, v_a_3389_);
v___x_3391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0));
v___x_3392_ = l_Nat_reprFast(v___x_3365_);
v___x_3393_ = lean_string_append(v___x_3391_, v___x_3392_);
lean_dec_ref(v___x_3392_);
v___x_3394_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_3395_ = l_Lean_Name_str___override(v___x_3394_, v___x_3393_);
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___f_3390_);
v___x_3397_ = lean_array_push(v_fst_3334_, v___x_3396_);
v___x_3398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3384_);
lean_ctor_set(v___x_3398_, 1, v___x_3369_);
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = ((size_t)1ULL);
v___x_3401_ = lean_usize_add(v_i_3324_, v___x_3400_);
v_i_3324_ = v___x_3401_;
v_b_3325_ = v___x_3399_;
goto _start;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v___x_3384_);
lean_dec_ref(v___x_3369_);
lean_dec(v___x_3365_);
lean_dec(v_fst_3334_);
v_a_3403_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3388_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3388_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref(v___x_3384_);
lean_dec_ref(v___f_3381_);
lean_dec_ref(v___x_3369_);
lean_dec(v___x_3365_);
lean_dec(v_fst_3334_);
v_a_3411_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3385_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3385_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
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
v___jp_3343_:
{
lean_object* v___x_3345_; 
if (v_isShared_3342_ == 0)
{
v___x_3345_ = v___x_3341_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_fst_3338_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v_snd_3339_);
v___x_3345_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
lean_object* v___x_3347_; 
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 1, v___x_3345_);
v___x_3347_ = v___x_3336_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_fst_3334_);
lean_ctor_set(v_reuseFailAlloc_3349_, 1, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
lean_object* v___x_3348_; 
v___x_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
return v___x_3348_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___boxed(lean_object* v___x_3432_, lean_object* v___x_3433_, lean_object* v_as_3434_, lean_object* v_sz_3435_, lean_object* v_i_3436_, lean_object* v_b_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
size_t v_sz_boxed_3443_; size_t v_i_boxed_3444_; lean_object* v_res_3445_; 
v_sz_boxed_3443_ = lean_unbox_usize(v_sz_3435_);
lean_dec(v_sz_3435_);
v_i_boxed_3444_ = lean_unbox_usize(v_i_3436_);
lean_dec(v_i_3436_);
v_res_3445_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(v___x_3432_, v___x_3433_, v_as_3434_, v_sz_boxed_3443_, v_i_boxed_3444_, v_b_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec_ref(v_as_3434_);
lean_dec(v___x_3433_);
lean_dec(v___x_3432_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(size_t v_sz_3446_, size_t v_i_3447_, lean_object* v_bs_3448_){
_start:
{
uint8_t v___x_3449_; 
v___x_3449_ = lean_usize_dec_lt(v_i_3447_, v_sz_3446_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; 
v___x_3450_ = l_unsafeCast___redArg(v_bs_3448_);
lean_dec_ref(v_bs_3448_);
return v___x_3450_;
}
else
{
lean_object* v_v_3451_; lean_object* v___x_3452_; lean_object* v_fst_3453_; lean_object* v_snd_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3471_; 
v_v_3451_ = lean_array_uget_borrowed(v_bs_3448_, v_i_3447_);
v___x_3452_ = l_unsafeCast___redArg(v_v_3451_);
v_fst_3453_ = lean_ctor_get(v___x_3452_, 0);
v_snd_3454_ = lean_ctor_get(v___x_3452_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3456_ = v___x_3452_;
v_isShared_3457_ = v_isSharedCheck_3471_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_snd_3454_);
lean_inc(v_fst_3453_);
lean_dec(v___x_3452_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3471_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3458_; lean_object* v_bs_x27_3459_; uint8_t v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3463_; 
v___x_3458_ = lean_unsigned_to_nat(0u);
v_bs_x27_3459_ = lean_array_uset(v_bs_3448_, v_i_3447_, v___x_3458_);
v___x_3460_ = 0;
v___x_3461_ = lean_box(v___x_3460_);
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 0, v___x_3461_);
v___x_3463_ = v___x_3456_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3461_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_snd_3454_);
v___x_3463_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
lean_object* v___x_3464_; size_t v___x_3465_; size_t v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3464_, 0, v_fst_3453_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = ((size_t)1ULL);
v___x_3466_ = lean_usize_add(v_i_3447_, v___x_3465_);
v___x_3467_ = l_unsafeCast___redArg(v___x_3464_);
lean_dec_ref_known(v___x_3464_, 2);
v___x_3468_ = lean_array_uset(v_bs_x27_3459_, v_i_3447_, v___x_3467_);
v_i_3447_ = v___x_3466_;
v_bs_3448_ = v___x_3468_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7___boxed(lean_object* v_sz_3472_, lean_object* v_i_3473_, lean_object* v_bs_3474_){
_start:
{
size_t v_sz_boxed_3475_; size_t v_i_boxed_3476_; lean_object* v_res_3477_; 
v_sz_boxed_3475_ = lean_unbox_usize(v_sz_3472_);
lean_dec(v_sz_3472_);
v_i_boxed_3476_ = lean_unbox_usize(v_i_3473_);
lean_dec(v_i_3473_);
v_res_3477_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(v_sz_boxed_3475_, v_i_boxed_3476_, v_bs_3474_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(lean_object* v___x_3478_, lean_object* v___x_3479_, lean_object* v_a_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v___x_30216__overap_3486_; lean_object* v___x_3487_; 
v___x_30216__overap_3486_ = l_instInhabitedOfMonad___redArg(v___x_3478_, v___x_3479_);
lean_inc(v___y_3484_);
lean_inc_ref(v___y_3483_);
lean_inc(v___y_3482_);
lean_inc_ref(v___y_3481_);
v___x_3487_ = lean_apply_5(v___x_30216__overap_3486_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, lean_box(0));
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed(lean_object* v___x_3488_, lean_object* v___x_3489_, lean_object* v_a_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(v___x_3488_, v___x_3489_, v_a_3490_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec_ref(v_a_3490_);
return v_res_3496_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0(void){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_instMonadEIO___redArg();
return v___x_3497_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0);
v___x_3499_ = l_StateRefT_x27_instMonad___redArg(v___x_3498_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed(lean_object* v_acc_3504_, lean_object* v_declInfos_3505_, lean_object* v_k_3506_, lean_object* v_kind_3507_, lean_object* v_b_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
uint8_t v_kind_boxed_3514_; lean_object* v_res_3515_; 
v_kind_boxed_3514_ = lean_unbox(v_kind_3507_);
v_res_3515_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(v_acc_3504_, v_declInfos_3505_, v_k_3506_, v_kind_boxed_3514_, v_b_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(lean_object* v_acc_3516_, lean_object* v_declInfos_3517_, lean_object* v_k_3518_, uint8_t v_kind_3519_, lean_object* v_name_3520_, uint8_t v_bi_3521_, lean_object* v_type_3522_, uint8_t v_kind_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v___x_3529_; lean_object* v___f_3530_; lean_object* v___x_3531_; 
v___x_3529_ = lean_box(v_kind_3519_);
v___f_3530_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3530_, 0, v_acc_3516_);
lean_closure_set(v___f_3530_, 1, v_declInfos_3517_);
lean_closure_set(v___f_3530_, 2, v_k_3518_);
lean_closure_set(v___f_3530_, 3, v___x_3529_);
v___x_3531_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3520_, v_bi_3521_, v_type_3522_, v___f_3530_, v_kind_3523_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3531_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3531_);
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
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
v_a_3540_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3531_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3531_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(lean_object* v_declInfos_3548_, lean_object* v_k_3549_, uint8_t v_kind_3550_, lean_object* v_acc_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v___x_3557_; lean_object* v_toApplicative_3558_; lean_object* v_toFunctor_3559_; lean_object* v_toSeq_3560_; lean_object* v_toSeqLeft_3561_; lean_object* v_toSeqRight_3562_; lean_object* v___f_3563_; lean_object* v___f_3564_; lean_object* v___f_3565_; lean_object* v___f_3566_; lean_object* v___x_3567_; lean_object* v___f_3568_; lean_object* v___f_3569_; lean_object* v___f_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v_toApplicative_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3630_; 
v___x_3557_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1);
v_toApplicative_3558_ = lean_ctor_get(v___x_3557_, 0);
v_toFunctor_3559_ = lean_ctor_get(v_toApplicative_3558_, 0);
v_toSeq_3560_ = lean_ctor_get(v_toApplicative_3558_, 2);
v_toSeqLeft_3561_ = lean_ctor_get(v_toApplicative_3558_, 3);
v_toSeqRight_3562_ = lean_ctor_get(v_toApplicative_3558_, 4);
v___f_3563_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2));
v___f_3564_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3));
lean_inc_ref_n(v_toFunctor_3559_, 2);
v___f_3565_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3565_, 0, v_toFunctor_3559_);
v___f_3566_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3566_, 0, v_toFunctor_3559_);
v___x_3567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___f_3565_);
lean_ctor_set(v___x_3567_, 1, v___f_3566_);
lean_inc(v_toSeqRight_3562_);
v___f_3568_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3568_, 0, v_toSeqRight_3562_);
lean_inc(v_toSeqLeft_3561_);
v___f_3569_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3569_, 0, v_toSeqLeft_3561_);
lean_inc(v_toSeq_3560_);
v___f_3570_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3570_, 0, v_toSeq_3560_);
v___x_3571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3567_);
lean_ctor_set(v___x_3571_, 1, v___f_3563_);
lean_ctor_set(v___x_3571_, 2, v___f_3570_);
lean_ctor_set(v___x_3571_, 3, v___f_3569_);
lean_ctor_set(v___x_3571_, 4, v___f_3568_);
v___x_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
lean_ctor_set(v___x_3572_, 1, v___f_3564_);
v___x_3573_ = l_StateRefT_x27_instMonad___redArg(v___x_3572_);
v_toApplicative_3574_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; 
v_unused_3631_ = lean_ctor_get(v___x_3573_, 1);
lean_dec(v_unused_3631_);
v___x_3576_ = v___x_3573_;
v_isShared_3577_ = v_isSharedCheck_3630_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_toApplicative_3574_);
lean_dec(v___x_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3630_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v_toFunctor_3578_; lean_object* v_toSeq_3579_; lean_object* v_toSeqLeft_3580_; lean_object* v_toSeqRight_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3628_; 
v_toFunctor_3578_ = lean_ctor_get(v_toApplicative_3574_, 0);
v_toSeq_3579_ = lean_ctor_get(v_toApplicative_3574_, 2);
v_toSeqLeft_3580_ = lean_ctor_get(v_toApplicative_3574_, 3);
v_toSeqRight_3581_ = lean_ctor_get(v_toApplicative_3574_, 4);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_toApplicative_3574_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; 
v_unused_3629_ = lean_ctor_get(v_toApplicative_3574_, 1);
lean_dec(v_unused_3629_);
v___x_3583_ = v_toApplicative_3574_;
v_isShared_3584_ = v_isSharedCheck_3628_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_toSeqRight_3581_);
lean_inc(v_toSeqLeft_3580_);
lean_inc(v_toSeq_3579_);
lean_inc(v_toFunctor_3578_);
lean_dec(v_toApplicative_3574_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3628_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___f_3585_; lean_object* v___f_3586_; lean_object* v___f_3587_; lean_object* v___f_3588_; lean_object* v___x_3589_; lean_object* v___f_3590_; lean_object* v___f_3591_; lean_object* v___f_3592_; lean_object* v___x_3594_; 
v___f_3585_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4));
v___f_3586_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5));
lean_inc_ref(v_toFunctor_3578_);
v___f_3587_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3587_, 0, v_toFunctor_3578_);
v___f_3588_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3588_, 0, v_toFunctor_3578_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v___f_3587_);
lean_ctor_set(v___x_3589_, 1, v___f_3588_);
v___f_3590_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3590_, 0, v_toSeqRight_3581_);
v___f_3591_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3591_, 0, v_toSeqLeft_3580_);
v___f_3592_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3592_, 0, v_toSeq_3579_);
if (v_isShared_3584_ == 0)
{
lean_ctor_set(v___x_3583_, 4, v___f_3590_);
lean_ctor_set(v___x_3583_, 3, v___f_3591_);
lean_ctor_set(v___x_3583_, 2, v___f_3592_);
lean_ctor_set(v___x_3583_, 1, v___f_3585_);
lean_ctor_set(v___x_3583_, 0, v___x_3589_);
v___x_3594_ = v___x_3583_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3589_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v___f_3585_);
lean_ctor_set(v_reuseFailAlloc_3627_, 2, v___f_3592_);
lean_ctor_set(v_reuseFailAlloc_3627_, 3, v___f_3591_);
lean_ctor_set(v_reuseFailAlloc_3627_, 4, v___f_3590_);
v___x_3594_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
lean_object* v___x_3596_; 
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 1, v___f_3586_);
lean_ctor_set(v___x_3576_, 0, v___x_3594_);
v___x_3596_ = v___x_3576_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3594_);
lean_ctor_set(v_reuseFailAlloc_3626_, 1, v___f_3586_);
v___x_3596_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v___x_3597_ = lean_array_get_size(v_acc_3551_);
v___x_3598_ = lean_array_get_size(v_declInfos_3548_);
v___x_3599_ = lean_nat_dec_lt(v___x_3597_, v___x_3598_);
if (v___x_3599_ == 0)
{
lean_object* v___x_3600_; 
lean_dec_ref(v___x_3596_);
lean_dec_ref(v_declInfos_3548_);
lean_inc(v___y_3555_);
lean_inc_ref(v___y_3554_);
lean_inc(v___y_3553_);
lean_inc_ref(v___y_3552_);
v___x_3600_ = lean_apply_6(v_k_3549_, v_acc_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_, lean_box(0));
return v___x_3600_;
}
else
{
lean_object* v___x_3601_; uint8_t v___x_3602_; lean_object* v___x_3603_; lean_object* v___f_3604_; lean_object* v___f_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v_snd_3610_; lean_object* v_fst_3611_; lean_object* v_fst_3612_; lean_object* v_snd_3613_; lean_object* v___x_3614_; 
v___x_3601_ = l_Lean_instInhabitedName;
v___x_3602_ = 0;
v___x_3603_ = l_Lean_instInhabitedExpr;
v___f_3604_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3604_, 0, v___x_3596_);
lean_closure_set(v___f_3604_, 1, v___x_3603_);
v___f_3605_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3605_, 0, v___f_3604_);
v___x_3606_ = lean_box(v___x_3602_);
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
lean_ctor_set(v___x_3607_, 1, v___f_3605_);
v___x_3608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3601_);
lean_ctor_set(v___x_3608_, 1, v___x_3607_);
v___x_3609_ = lean_array_get(v___x_3608_, v_declInfos_3548_, v___x_3597_);
lean_dec_ref_known(v___x_3608_, 2);
v_snd_3610_ = lean_ctor_get(v___x_3609_, 1);
lean_inc(v_snd_3610_);
v_fst_3611_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_fst_3611_);
lean_dec(v___x_3609_);
v_fst_3612_ = lean_ctor_get(v_snd_3610_, 0);
lean_inc(v_fst_3612_);
v_snd_3613_ = lean_ctor_get(v_snd_3610_, 1);
lean_inc(v_snd_3613_);
lean_dec(v_snd_3610_);
lean_inc(v___y_3555_);
lean_inc_ref(v___y_3554_);
lean_inc(v___y_3553_);
lean_inc_ref(v___y_3552_);
lean_inc_ref(v_acc_3551_);
v___x_3614_ = lean_apply_6(v_snd_3613_, v_acc_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_, lean_box(0));
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; uint8_t v___x_3616_; lean_object* v___x_3617_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3614_, 1);
v___x_3616_ = lean_unbox(v_fst_3612_);
lean_dec(v_fst_3612_);
v___x_3617_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(v_acc_3551_, v_declInfos_3548_, v_k_3549_, v_kind_3550_, v_fst_3611_, v___x_3616_, v_a_3615_, v_kind_3550_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_);
return v___x_3617_;
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
lean_dec(v_fst_3612_);
lean_dec(v_fst_3611_);
lean_dec_ref(v_acc_3551_);
lean_dec_ref(v_k_3549_);
lean_dec_ref(v_declInfos_3548_);
v_a_3618_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3614_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3614_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(lean_object* v_acc_3632_, lean_object* v_declInfos_3633_, lean_object* v_k_3634_, uint8_t v_kind_3635_, lean_object* v_b_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3642_ = lean_array_push(v_acc_3632_, v_b_3636_);
v___x_3643_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3633_, v_k_3634_, v_kind_3635_, v___x_3642_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___boxed(lean_object* v_acc_3644_, lean_object* v_declInfos_3645_, lean_object* v_k_3646_, lean_object* v_kind_3647_, lean_object* v_name_3648_, lean_object* v_bi_3649_, lean_object* v_type_3650_, lean_object* v_kind_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
uint8_t v_kind_boxed_3657_; uint8_t v_bi_boxed_3658_; uint8_t v_kind_boxed_3659_; lean_object* v_res_3660_; 
v_kind_boxed_3657_ = lean_unbox(v_kind_3647_);
v_bi_boxed_3658_ = lean_unbox(v_bi_3649_);
v_kind_boxed_3659_ = lean_unbox(v_kind_3651_);
v_res_3660_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(v_acc_3644_, v_declInfos_3645_, v_k_3646_, v_kind_boxed_3657_, v_name_3648_, v_bi_boxed_3658_, v_type_3650_, v_kind_boxed_3659_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec(v___y_3653_);
lean_dec_ref(v___y_3652_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___boxed(lean_object* v_declInfos_3661_, lean_object* v_k_3662_, lean_object* v_kind_3663_, lean_object* v_acc_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
uint8_t v_kind_boxed_3670_; lean_object* v_res_3671_; 
v_kind_boxed_3670_ = lean_unbox(v_kind_3663_);
v_res_3671_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3661_, v_k_3662_, v_kind_boxed_3670_, v_acc_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec(v___y_3666_);
lean_dec_ref(v___y_3665_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(lean_object* v_declInfos_3672_, lean_object* v_k_3673_, uint8_t v_kind_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3680_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_3681_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3672_, v_k_3673_, v_kind_3674_, v___x_3680_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8___boxed(lean_object* v_declInfos_3682_, lean_object* v_k_3683_, lean_object* v_kind_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
uint8_t v_kind_boxed_3690_; lean_object* v_res_3691_; 
v_kind_boxed_3690_ = lean_unbox(v_kind_3684_);
v_res_3691_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(v_declInfos_3682_, v_k_3683_, v_kind_boxed_3690_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_);
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(lean_object* v_declInfos_3692_, lean_object* v_k_3693_, uint8_t v_kind_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_){
_start:
{
size_t v_sz_3700_; size_t v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v_sz_3700_ = lean_array_size(v_declInfos_3692_);
v___x_3701_ = ((size_t)0ULL);
v___x_3702_ = l_unsafeCast___redArg(v_declInfos_3692_);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(v_sz_3700_, v___x_3701_, v___x_3702_);
v___x_3704_ = l_unsafeCast___redArg(v___x_3703_);
lean_dec_ref(v___x_3703_);
v___x_3705_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(v___x_3704_, v_k_3693_, v_kind_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_);
return v___x_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7___boxed(lean_object* v_declInfos_3706_, lean_object* v_k_3707_, lean_object* v_kind_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
uint8_t v_kind_boxed_3714_; lean_object* v_res_3715_; 
v_kind_boxed_3714_ = lean_unbox(v_kind_3708_);
v_res_3715_ = l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(v_declInfos_3706_, v_k_3707_, v_kind_boxed_3714_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec_ref(v_declInfos_3706_);
return v_res_3715_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3717_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2));
v___x_3718_ = lean_unsigned_to_nat(4u);
v___x_3719_ = lean_unsigned_to_nat(202u);
v___x_3720_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0));
v___x_3721_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0));
v___x_3722_ = l_mkPanicMessageWithDecl(v___x_3721_, v___x_3720_, v___x_3719_, v___x_3718_, v___x_3717_);
return v___x_3722_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4));
v___x_3729_ = l_Lean_stringToMessageData(v___x_3728_);
return v___x_3729_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7(void){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6));
v___x_3732_ = l_Lean_stringToMessageData(v___x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(lean_object* v_nParams_3733_, lean_object* v_numMotives_3734_, lean_object* v_numMinors_3735_, lean_object* v___x_3736_, lean_object* v_all_3737_, lean_object* v___x_3738_, lean_object* v___x_3739_, lean_object* v_head_3740_, lean_object* v_tail_3741_, lean_object* v_recName_3742_, lean_object* v_brecOnGoName_3743_, lean_object* v_levelParams_3744_, lean_object* v_brecOnName_3745_, lean_object* v_brecOnEqName_3746_, lean_object* v_type_3747_, lean_object* v_refArgs_3748_, lean_object* v_refBody_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; uint8_t v___x_3758_; 
v___x_3755_ = lean_nat_add(v_nParams_3733_, v_numMotives_3734_);
v___x_3756_ = lean_nat_add(v___x_3755_, v_numMinors_3735_);
v___x_3757_ = lean_array_get_size(v_refArgs_3748_);
v___x_3758_ = lean_nat_dec_lt(v___x_3756_, v___x_3757_);
if (v___x_3758_ == 0)
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
lean_dec(v___x_3756_);
lean_dec(v___x_3755_);
lean_dec_ref(v_refArgs_3748_);
lean_dec_ref(v_type_3747_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3738_);
lean_dec_ref(v_all_3737_);
lean_dec(v___x_3736_);
lean_dec(v_nParams_3733_);
v___x_3759_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1);
v___x_3760_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(v___x_3759_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
return v___x_3760_;
}
else
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3761_ = lean_unsigned_to_nat(0u);
lean_inc(v_nParams_3733_);
lean_inc_ref_n(v_refArgs_3748_, 2);
v___x_3762_ = l_Array_toSubarray___redArg(v_refArgs_3748_, v___x_3761_, v_nParams_3733_);
lean_inc(v___x_3755_);
v___x_3763_ = l_Array_toSubarray___redArg(v_refArgs_3748_, v_nParams_3733_, v___x_3755_);
v___x_3764_ = l_Subarray_copy___redArg(v___x_3763_);
v___x_3765_ = l_Lean_Expr_getAppFn(v_refBody_3749_);
v___x_3766_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v___x_3764_, v___x_3765_);
lean_dec_ref(v___x_3765_);
if (lean_obj_tag(v___x_3766_) == 1)
{
lean_object* v_val_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___f_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
lean_dec_ref(v_type_3747_);
v_val_3767_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_val_3767_);
lean_dec_ref_known(v___x_3766_, 1);
lean_inc_n(v___x_3756_, 2);
lean_inc_ref_n(v_refArgs_3748_, 2);
v___x_3768_ = l_Array_toSubarray___redArg(v_refArgs_3748_, v___x_3755_, v___x_3756_);
v___x_3769_ = l_Subarray_copy___redArg(v___x_3762_);
v___x_3770_ = l_Subarray_copy___redArg(v___x_3768_);
v___x_3771_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_3764_);
lean_inc_ref(v___x_3769_);
lean_inc(v___x_3736_);
v___f_3772_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed), 8, 7);
lean_closure_set(v___f_3772_, 0, v___x_3736_);
lean_closure_set(v___f_3772_, 1, v___x_3769_);
lean_closure_set(v___f_3772_, 2, v___x_3764_);
lean_closure_set(v___f_3772_, 3, v_all_3737_);
lean_closure_set(v___f_3772_, 4, v___x_3738_);
lean_closure_set(v___f_3772_, 5, v___x_3761_);
lean_closure_set(v___f_3772_, 6, v___x_3771_);
v___x_3773_ = lean_nat_sub(v___x_3757_, v___x_3771_);
lean_inc(v___x_3773_);
v___x_3774_ = l_Array_toSubarray___redArg(v_refArgs_3748_, v___x_3756_, v___x_3773_);
v___x_3775_ = l_Subarray_copy___redArg(v___x_3774_);
v___x_3776_ = lean_array_get(v___x_3739_, v_refArgs_3748_, v___x_3773_);
lean_dec(v___x_3773_);
lean_dec_ref(v_refArgs_3748_);
lean_inc(v___y_3753_);
lean_inc_ref(v___y_3752_);
lean_inc(v___y_3751_);
lean_inc_ref(v___y_3750_);
lean_inc(v___x_3776_);
v___x_3777_ = lean_infer_type(v___x_3776_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_object* v_a_3778_; lean_object* v___x_3779_; 
v_a_3778_ = lean_ctor_get(v___x_3777_, 0);
lean_inc(v_a_3778_);
lean_dec_ref_known(v___x_3777_, 1);
lean_inc(v___y_3753_);
lean_inc_ref(v___y_3752_);
lean_inc(v___y_3751_);
lean_inc_ref(v___y_3750_);
v___x_3779_ = lean_infer_type(v_a_3778_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; lean_object* v___x_3781_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3780_);
lean_dec_ref_known(v___x_3779_, 1);
v___x_3781_ = l_Lean_Meta_typeFormerTypeLevel(v_a_3780_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_object* v_a_3782_; 
v_a_3782_ = lean_ctor_get(v___x_3781_, 0);
lean_inc(v_a_3782_);
lean_dec_ref_known(v___x_3781_, 1);
if (lean_obj_tag(v_a_3782_) == 1)
{
lean_object* v_val_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___f_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; size_t v_sz_3796_; size_t v___x_3797_; lean_object* v___x_3798_; 
v_val_3783_ = lean_ctor_get(v_a_3782_, 0);
lean_inc(v_val_3783_);
lean_dec_ref_known(v_a_3782_, 1);
v___x_3784_ = l_Lean_mkLevelMax(v_val_3783_, v_head_3740_);
v___x_3785_ = lean_array_get_size(v___x_3764_);
v___x_3786_ = l_Array_ofFn___redArg(v___x_3785_, v___f_3772_);
v___x_3787_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2));
v___x_3788_ = lean_array_get_size(v___x_3786_);
lean_inc_ref(v___x_3786_);
v___x_3789_ = l_Array_toSubarray___redArg(v___x_3786_, v___x_3761_, v___x_3788_);
v___x_3790_ = lean_box(v___x_3758_);
lean_inc(v___x_3756_);
lean_inc_ref(v___x_3764_);
lean_inc_ref(v___x_3789_);
v___f_3791_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed), 28, 22);
lean_closure_set(v___f_3791_, 0, v___x_3784_);
lean_closure_set(v___f_3791_, 1, v_tail_3741_);
lean_closure_set(v___f_3791_, 2, v_recName_3742_);
lean_closure_set(v___f_3791_, 3, v___x_3769_);
lean_closure_set(v___f_3791_, 4, v___x_3789_);
lean_closure_set(v___f_3791_, 5, v___x_3764_);
lean_closure_set(v___f_3791_, 6, v___x_3756_);
lean_closure_set(v___f_3791_, 7, v___x_3757_);
lean_closure_set(v___f_3791_, 8, v___x_3770_);
lean_closure_set(v___f_3791_, 9, v___x_3786_);
lean_closure_set(v___f_3791_, 10, v___x_3775_);
lean_closure_set(v___f_3791_, 11, v___x_3776_);
lean_closure_set(v___f_3791_, 12, v___x_3771_);
lean_closure_set(v___f_3791_, 13, v___x_3739_);
lean_closure_set(v___f_3791_, 14, v_val_3767_);
lean_closure_set(v___f_3791_, 15, v___x_3790_);
lean_closure_set(v___f_3791_, 16, v_brecOnGoName_3743_);
lean_closure_set(v___f_3791_, 17, v_levelParams_3744_);
lean_closure_set(v___f_3791_, 18, v___x_3736_);
lean_closure_set(v___f_3791_, 19, v_brecOnName_3745_);
lean_closure_set(v___f_3791_, 20, v___x_3761_);
lean_closure_set(v___f_3791_, 21, v_brecOnEqName_3746_);
v___x_3792_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3));
v___x_3793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
lean_ctor_set(v___x_3793_, 1, v___x_3785_);
v___x_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3789_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3787_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v_sz_3796_ = lean_array_size(v___x_3764_);
v___x_3797_ = ((size_t)0ULL);
v___x_3798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(v___x_3756_, v___x_3757_, v___x_3764_, v_sz_3796_, v___x_3797_, v___x_3795_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
lean_dec_ref(v___x_3764_);
lean_dec(v___x_3756_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; lean_object* v_fst_3800_; uint8_t v___x_3801_; lean_object* v___x_3802_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v___x_3798_, 1);
v_fst_3800_ = lean_ctor_get(v_a_3799_, 0);
lean_inc(v_fst_3800_);
lean_dec(v_a_3799_);
v___x_3801_ = 0;
v___x_3802_ = l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(v_fst_3800_, v___f_3791_, v___x_3801_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
lean_dec(v_fst_3800_);
return v___x_3802_;
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v___f_3791_);
v_a_3803_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3798_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3798_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
else
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
lean_dec(v_a_3782_);
lean_dec_ref(v___x_3775_);
lean_dec_ref(v___f_3772_);
lean_dec_ref(v___x_3770_);
lean_dec_ref(v___x_3769_);
lean_dec(v_val_3767_);
lean_dec_ref(v___x_3764_);
lean_dec(v___x_3756_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3736_);
v___x_3811_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5);
v___x_3812_ = l_Lean_MessageData_ofExpr(v___x_3776_);
v___x_3813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3811_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
v___x_3814_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7);
v___x_3815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3813_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3815_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
return v___x_3816_;
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v___x_3776_);
lean_dec_ref(v___x_3775_);
lean_dec_ref(v___f_3772_);
lean_dec_ref(v___x_3770_);
lean_dec_ref(v___x_3769_);
lean_dec(v_val_3767_);
lean_dec_ref(v___x_3764_);
lean_dec(v___x_3756_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3736_);
v_a_3817_ = lean_ctor_get(v___x_3781_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3781_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3781_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3781_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
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
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec(v___x_3776_);
lean_dec_ref(v___x_3775_);
lean_dec_ref(v___f_3772_);
lean_dec_ref(v___x_3770_);
lean_dec_ref(v___x_3769_);
lean_dec(v_val_3767_);
lean_dec_ref(v___x_3764_);
lean_dec(v___x_3756_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3736_);
v_a_3825_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3779_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3779_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
lean_dec(v___x_3776_);
lean_dec_ref(v___x_3775_);
lean_dec_ref(v___f_3772_);
lean_dec_ref(v___x_3770_);
lean_dec_ref(v___x_3769_);
lean_dec(v_val_3767_);
lean_dec_ref(v___x_3764_);
lean_dec(v___x_3756_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3736_);
v_a_3833_ = lean_ctor_get(v___x_3777_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___x_3777_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3777_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
else
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
lean_dec(v___x_3766_);
lean_dec_ref(v___x_3762_);
lean_dec(v___x_3756_);
lean_dec(v___x_3755_);
lean_dec_ref(v_refArgs_3748_);
lean_dec(v_brecOnEqName_3746_);
lean_dec(v_brecOnName_3745_);
lean_dec(v_levelParams_3744_);
lean_dec(v_brecOnGoName_3743_);
lean_dec(v_recName_3742_);
lean_dec(v_tail_3741_);
lean_dec(v_head_3740_);
lean_dec_ref(v___x_3739_);
lean_dec(v___x_3738_);
lean_dec_ref(v_all_3737_);
lean_dec(v___x_3736_);
v___x_3841_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5);
v___x_3842_ = l_Lean_MessageData_ofExpr(v_type_3747_);
v___x_3843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3841_);
lean_ctor_set(v___x_3843_, 1, v___x_3842_);
v___x_3844_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7);
v___x_3845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3843_);
lean_ctor_set(v___x_3845_, 1, v___x_3844_);
v___x_3846_ = lean_array_to_list(v___x_3764_);
v___x_3847_ = lean_box(0);
v___x_3848_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(v___x_3846_, v___x_3847_);
v___x_3849_ = l_Lean_MessageData_ofList(v___x_3848_);
v___x_3850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3845_);
lean_ctor_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3850_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
return v___x_3851_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed(lean_object** _args){
lean_object* v_nParams_3852_ = _args[0];
lean_object* v_numMotives_3853_ = _args[1];
lean_object* v_numMinors_3854_ = _args[2];
lean_object* v___x_3855_ = _args[3];
lean_object* v_all_3856_ = _args[4];
lean_object* v___x_3857_ = _args[5];
lean_object* v___x_3858_ = _args[6];
lean_object* v_head_3859_ = _args[7];
lean_object* v_tail_3860_ = _args[8];
lean_object* v_recName_3861_ = _args[9];
lean_object* v_brecOnGoName_3862_ = _args[10];
lean_object* v_levelParams_3863_ = _args[11];
lean_object* v_brecOnName_3864_ = _args[12];
lean_object* v_brecOnEqName_3865_ = _args[13];
lean_object* v_type_3866_ = _args[14];
lean_object* v_refArgs_3867_ = _args[15];
lean_object* v_refBody_3868_ = _args[16];
lean_object* v___y_3869_ = _args[17];
lean_object* v___y_3870_ = _args[18];
lean_object* v___y_3871_ = _args[19];
lean_object* v___y_3872_ = _args[20];
lean_object* v___y_3873_ = _args[21];
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(v_nParams_3852_, v_numMotives_3853_, v_numMinors_3854_, v___x_3855_, v_all_3856_, v___x_3857_, v___x_3858_, v_head_3859_, v_tail_3860_, v_recName_3861_, v_brecOnGoName_3862_, v_levelParams_3863_, v_brecOnName_3864_, v_brecOnEqName_3865_, v_type_3866_, v_refArgs_3867_, v_refBody_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec(v___y_3870_);
lean_dec_ref(v___y_3869_);
lean_dec_ref(v_refBody_3868_);
lean_dec(v_numMinors_3854_);
lean_dec(v_numMotives_3853_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(lean_object* v_recName_3877_, lean_object* v_nParams_3878_, lean_object* v_all_3879_, lean_object* v_brecOnName_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v_brecOnGoName_3889_; lean_object* v___x_3890_; lean_object* v_brecOnEqName_3891_; lean_object* v___x_3892_; 
v___x_3886_ = l_Lean_instInhabitedExpr;
v___x_3887_ = l_Lean_instInhabitedName;
v___x_3888_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0));
lean_inc_n(v_brecOnName_3880_, 2);
v_brecOnGoName_3889_ = l_Lean_Name_str___override(v_brecOnName_3880_, v___x_3888_);
v___x_3890_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1));
v_brecOnEqName_3891_ = l_Lean_Name_str___override(v_brecOnName_3880_, v___x_3890_);
lean_inc(v_recName_3877_);
v___x_3892_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_recName_3877_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3920_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3895_ = v___x_3892_;
v_isShared_3896_ = v_isSharedCheck_3920_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3892_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3920_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
if (lean_obj_tag(v_a_3893_) == 7)
{
lean_object* v_val_3897_; lean_object* v_toConstantVal_3898_; lean_object* v_numMotives_3899_; lean_object* v_numMinors_3900_; lean_object* v_levelParams_3901_; lean_object* v_type_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
lean_del_object(v___x_3895_);
v_val_3897_ = lean_ctor_get(v_a_3893_, 0);
lean_inc_ref(v_val_3897_);
lean_dec_ref_known(v_a_3893_, 1);
v_toConstantVal_3898_ = lean_ctor_get(v_val_3897_, 0);
lean_inc_ref(v_toConstantVal_3898_);
v_numMotives_3899_ = lean_ctor_get(v_val_3897_, 4);
lean_inc(v_numMotives_3899_);
v_numMinors_3900_ = lean_ctor_get(v_val_3897_, 5);
lean_inc(v_numMinors_3900_);
lean_dec_ref(v_val_3897_);
v_levelParams_3901_ = lean_ctor_get(v_toConstantVal_3898_, 1);
lean_inc_n(v_levelParams_3901_, 2);
v_type_3902_ = lean_ctor_get(v_toConstantVal_3898_, 2);
lean_inc_ref(v_type_3902_);
lean_dec_ref(v_toConstantVal_3898_);
v___x_3903_ = lean_box(0);
v___x_3904_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(v_levelParams_3901_, v___x_3903_);
if (lean_obj_tag(v___x_3904_) == 1)
{
lean_object* v_head_3905_; lean_object* v_tail_3906_; lean_object* v___f_3907_; uint8_t v___x_3908_; lean_object* v___x_3909_; 
v_head_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_head_3905_);
v_tail_3906_ = lean_ctor_get(v___x_3904_, 1);
lean_inc(v_tail_3906_);
lean_inc_ref(v_type_3902_);
v___f_3907_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed), 22, 15);
lean_closure_set(v___f_3907_, 0, v_nParams_3878_);
lean_closure_set(v___f_3907_, 1, v_numMotives_3899_);
lean_closure_set(v___f_3907_, 2, v_numMinors_3900_);
lean_closure_set(v___f_3907_, 3, v___x_3904_);
lean_closure_set(v___f_3907_, 4, v_all_3879_);
lean_closure_set(v___f_3907_, 5, v___x_3887_);
lean_closure_set(v___f_3907_, 6, v___x_3886_);
lean_closure_set(v___f_3907_, 7, v_head_3905_);
lean_closure_set(v___f_3907_, 8, v_tail_3906_);
lean_closure_set(v___f_3907_, 9, v_recName_3877_);
lean_closure_set(v___f_3907_, 10, v_brecOnGoName_3889_);
lean_closure_set(v___f_3907_, 11, v_levelParams_3901_);
lean_closure_set(v___f_3907_, 12, v_brecOnName_3880_);
lean_closure_set(v___f_3907_, 13, v_brecOnEqName_3891_);
lean_closure_set(v___f_3907_, 14, v_type_3902_);
v___x_3908_ = 0;
v___x_3909_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_3902_, v___f_3907_, v___x_3908_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
return v___x_3909_;
}
else
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
lean_dec(v___x_3904_);
lean_dec_ref(v_type_3902_);
lean_dec(v_levelParams_3901_);
lean_dec(v_numMinors_3900_);
lean_dec(v_numMotives_3899_);
lean_dec(v_brecOnEqName_3891_);
lean_dec(v_brecOnGoName_3889_);
lean_dec(v_brecOnName_3880_);
lean_dec_ref(v_all_3879_);
lean_dec(v_nParams_3878_);
v___x_3910_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1);
v___x_3911_ = l_Lean_MessageData_ofName(v_recName_3877_);
v___x_3912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3910_);
lean_ctor_set(v___x_3912_, 1, v___x_3911_);
v___x_3913_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3);
v___x_3914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3912_);
lean_ctor_set(v___x_3914_, 1, v___x_3913_);
v___x_3915_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3914_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
return v___x_3915_;
}
}
else
{
lean_object* v___x_3916_; lean_object* v___x_3918_; 
lean_dec(v_a_3893_);
lean_dec(v_brecOnEqName_3891_);
lean_dec(v_brecOnGoName_3889_);
lean_dec(v_brecOnName_3880_);
lean_dec_ref(v_all_3879_);
lean_dec(v_nParams_3878_);
lean_dec(v_recName_3877_);
v___x_3916_ = lean_box(0);
if (v_isShared_3896_ == 0)
{
lean_ctor_set(v___x_3895_, 0, v___x_3916_);
v___x_3918_ = v___x_3895_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v___x_3916_);
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
lean_dec(v_brecOnEqName_3891_);
lean_dec(v_brecOnGoName_3889_);
lean_dec(v_brecOnName_3880_);
lean_dec_ref(v_all_3879_);
lean_dec(v_nParams_3878_);
lean_dec(v_recName_3877_);
v_a_3921_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3892_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3892_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___boxed(lean_object* v_recName_3929_, lean_object* v_nParams_3930_, lean_object* v_all_3931_, lean_object* v_brecOnName_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v_recName_3929_, v_nParams_3930_, v_all_3931_, v_brecOnName_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_);
lean_dec(v_a_3936_);
lean_dec_ref(v_a_3935_);
lean_dec(v_a_3934_);
lean_dec_ref(v_a_3933_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(lean_object* v_upperBound_3939_, lean_object* v___x_3940_, lean_object* v___x_3941_, lean_object* v___x_3942_, lean_object* v___x_3943_, lean_object* v_a_3944_, lean_object* v_b_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
uint8_t v___x_3951_; 
v___x_3951_ = lean_nat_dec_lt(v_a_3944_, v_upperBound_3939_);
if (v___x_3951_ == 0)
{
lean_object* v___x_3952_; 
lean_dec(v_a_3944_);
lean_dec_ref(v___x_3943_);
lean_dec(v___x_3942_);
lean_dec(v___x_3941_);
lean_dec(v___x_3940_);
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v_b_3945_);
return v___x_3952_;
}
else
{
lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3953_ = lean_box(0);
v___x_3954_ = lean_unsigned_to_nat(1u);
v___x_3955_ = lean_nat_add(v_a_3944_, v___x_3954_);
lean_dec(v_a_3944_);
lean_inc_n(v___x_3955_, 2);
lean_inc(v___x_3940_);
v___x_3956_ = lean_name_append_index_after(v___x_3940_, v___x_3955_);
lean_inc(v___x_3941_);
v___x_3957_ = lean_name_append_index_after(v___x_3941_, v___x_3955_);
lean_inc_ref(v___x_3943_);
lean_inc(v___x_3942_);
v___x_3958_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_3956_, v___x_3942_, v___x_3943_, v___x_3957_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_dec_ref_known(v___x_3958_, 1);
v_a_3944_ = v___x_3955_;
v_b_3945_ = v___x_3953_;
goto _start;
}
else
{
lean_dec(v___x_3955_);
lean_dec_ref(v___x_3943_);
lean_dec(v___x_3942_);
lean_dec(v___x_3941_);
lean_dec(v___x_3940_);
return v___x_3958_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg___boxed(lean_object* v_upperBound_3960_, lean_object* v___x_3961_, lean_object* v___x_3962_, lean_object* v___x_3963_, lean_object* v___x_3964_, lean_object* v_a_3965_, lean_object* v_b_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_upperBound_3960_, v___x_3961_, v___x_3962_, v___x_3963_, v___x_3964_, v_a_3965_, v_b_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
lean_dec(v___y_3970_);
lean_dec_ref(v___y_3969_);
lean_dec(v___y_3968_);
lean_dec_ref(v___y_3967_);
lean_dec(v_upperBound_3960_);
return v_res_3972_;
}
}
static lean_object* _init_l_Lean_mkBRecOn___closed__2(void){
_start:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; 
v___x_3977_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_3978_ = ((lean_object*)(l_Lean_mkBelow___closed__5));
v___x_3979_ = l_Lean_Name_append(v___x_3978_, v___x_3977_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOn(lean_object* v_indName_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_){
_start:
{
lean_object* v_toCold_3986_; lean_object* v_options_3987_; lean_object* v_inheritedTraceOptions_3988_; uint8_t v_hasTrace_3989_; lean_object* v___x_3990_; 
v_toCold_3986_ = lean_ctor_get(v_a_3983_, 0);
v_options_3987_ = lean_ctor_get(v_toCold_3986_, 2);
v_inheritedTraceOptions_3988_ = lean_ctor_get(v_toCold_3986_, 11);
v_hasTrace_3989_ = lean_ctor_get_uint8(v_options_3987_, sizeof(void*)*1);
v___x_3990_ = l_Lean_instInhabitedName;
if (v_hasTrace_3989_ == 0)
{
lean_object* v___x_3991_; 
lean_inc(v_indName_3980_);
v___x_3991_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4056_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_3994_ = v___x_3991_;
v_isShared_3995_ = v_isSharedCheck_4056_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3991_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4056_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
if (lean_obj_tag(v_a_3992_) == 5)
{
lean_object* v_val_3996_; uint8_t v_isRec_3997_; 
v_val_3996_ = lean_ctor_get(v_a_3992_, 0);
lean_inc_ref(v_val_3996_);
lean_dec_ref_known(v_a_3992_, 1);
v_isRec_3997_ = lean_ctor_get_uint8(v_val_3996_, sizeof(void*)*6);
if (v_isRec_3997_ == 0)
{
lean_object* v___x_3998_; lean_object* v___x_4000_; 
lean_dec_ref(v_val_3996_);
lean_dec(v_indName_3980_);
v___x_3998_ = lean_box(0);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 0, v___x_3998_);
v___x_4000_ = v___x_3994_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3998_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
else
{
lean_object* v_toConstantVal_4002_; lean_object* v_numParams_4003_; lean_object* v_all_4004_; lean_object* v_numNested_4005_; lean_object* v_type_4006_; lean_object* v___x_4007_; 
lean_del_object(v___x_3994_);
v_toConstantVal_4002_ = lean_ctor_get(v_val_3996_, 0);
lean_inc_ref(v_toConstantVal_4002_);
v_numParams_4003_ = lean_ctor_get(v_val_3996_, 1);
lean_inc(v_numParams_4003_);
v_all_4004_ = lean_ctor_get(v_val_3996_, 3);
lean_inc(v_all_4004_);
v_numNested_4005_ = lean_ctor_get(v_val_3996_, 5);
lean_inc(v_numNested_4005_);
lean_dec_ref(v_val_3996_);
v_type_4006_ = lean_ctor_get(v_toConstantVal_4002_, 2);
lean_inc_ref(v_type_4006_);
lean_dec_ref(v_toConstantVal_4002_);
v___x_4007_ = l_Lean_Meta_isPropFormerType(v_type_4006_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4007_) == 0)
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4043_; 
v_a_4008_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4010_ = v___x_4007_;
v_isShared_4011_ = v_isSharedCheck_4043_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v___x_4007_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4043_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
uint8_t v___x_4012_; 
v___x_4012_ = lean_unbox(v_a_4008_);
lean_dec(v_a_4008_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
lean_del_object(v___x_4010_);
lean_inc_n(v_indName_3980_, 2);
v___x_4013_ = l_Lean_mkRecName(v_indName_3980_);
v___x_4014_ = l_Lean_mkBRecOnName(v_indName_3980_);
lean_inc(v_all_4004_);
v___x_4015_ = lean_array_mk(v_all_4004_);
lean_inc(v___x_4014_);
lean_inc_ref(v___x_4015_);
lean_inc(v_numParams_4003_);
lean_inc(v___x_4013_);
v___x_4016_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4013_, v_numParams_4003_, v___x_4015_, v___x_4014_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4037_; 
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4037_ == 0)
{
lean_object* v_unused_4038_; 
v_unused_4038_ = lean_ctor_get(v___x_4016_, 0);
lean_dec(v_unused_4038_);
v___x_4018_ = v___x_4016_;
v_isShared_4019_ = v_isSharedCheck_4037_;
goto v_resetjp_4017_;
}
else
{
lean_dec(v___x_4016_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4037_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4020_ = lean_unsigned_to_nat(0u);
v___x_4021_ = l_List_get_x21Internal___redArg(v___x_3990_, v_all_4004_, v___x_4020_);
lean_dec(v_all_4004_);
v___x_4022_ = lean_name_eq(v___x_4021_, v_indName_3980_);
lean_dec(v_indName_3980_);
lean_dec(v___x_4021_);
if (v___x_4022_ == 0)
{
lean_object* v___x_4023_; lean_object* v___x_4025_; 
lean_dec_ref(v___x_4015_);
lean_dec(v___x_4014_);
lean_dec(v___x_4013_);
lean_dec(v_numNested_4005_);
lean_dec(v_numParams_4003_);
v___x_4023_ = lean_box(0);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4023_);
v___x_4025_ = v___x_4018_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v___x_4023_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
else
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
lean_del_object(v___x_4018_);
v___x_4027_ = lean_box(0);
v___x_4028_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4005_, v___x_4013_, v___x_4014_, v_numParams_4003_, v___x_4015_, v___x_4020_, v___x_4027_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_numNested_4005_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; 
v_unused_4036_ = lean_ctor_get(v___x_4028_, 0);
lean_dec(v_unused_4036_);
v___x_4030_ = v___x_4028_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_dec(v___x_4028_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4027_);
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4027_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
else
{
return v___x_4028_;
}
}
}
}
else
{
lean_dec_ref(v___x_4015_);
lean_dec(v___x_4014_);
lean_dec(v___x_4013_);
lean_dec(v_numNested_4005_);
lean_dec(v_all_4004_);
lean_dec(v_numParams_4003_);
lean_dec(v_indName_3980_);
return v___x_4016_;
}
}
else
{
lean_object* v___x_4039_; lean_object* v___x_4041_; 
lean_dec(v_numNested_4005_);
lean_dec(v_all_4004_);
lean_dec(v_numParams_4003_);
lean_dec(v_indName_3980_);
v___x_4039_ = lean_box(0);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 0, v___x_4039_);
v___x_4041_ = v___x_4010_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v___x_4039_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
else
{
lean_object* v_a_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4051_; 
lean_dec(v_numNested_4005_);
lean_dec(v_all_4004_);
lean_dec(v_numParams_4003_);
lean_dec(v_indName_3980_);
v_a_4044_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4046_ = v___x_4007_;
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_a_4044_);
lean_dec(v___x_4007_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v___x_4049_; 
if (v_isShared_4047_ == 0)
{
v___x_4049_ = v___x_4046_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_a_4044_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
}
}
}
else
{
lean_object* v___x_4052_; lean_object* v___x_4054_; 
lean_dec(v_a_3992_);
lean_dec(v_indName_3980_);
v___x_4052_ = lean_box(0);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 0, v___x_4052_);
v___x_4054_ = v___x_3994_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v___x_4052_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
return v___x_4054_;
}
}
}
}
else
{
lean_object* v_a_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4064_; 
lean_dec(v_indName_3980_);
v_a_4057_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4059_ = v___x_3991_;
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_a_4057_);
lean_dec(v___x_3991_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___x_4062_; 
if (v_isShared_4060_ == 0)
{
v___x_4062_ = v___x_4059_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4057_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
}
}
else
{
lean_object* v___f_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; uint8_t v___x_4069_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v_a_4073_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v_a_4088_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v_a_4093_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v_a_4098_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v_a_4110_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v_a_4115_; 
lean_inc(v_indName_3980_);
v___f_4065_ = lean_alloc_closure((void*)(l_Lean_mkBelow___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4065_, 0, v_indName_3980_);
v___x_4066_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_4067_ = ((lean_object*)(l_Lean_mkBelow___closed__3));
v___x_4068_ = lean_obj_once(&l_Lean_mkBRecOn___closed__2, &l_Lean_mkBRecOn___closed__2_once, _init_l_Lean_mkBRecOn___closed__2);
v___x_4069_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3988_, v_options_3987_, v___x_4068_);
if (v___x_4069_ == 0)
{
lean_object* v___x_4184_; uint8_t v___x_4185_; 
v___x_4184_ = l_Lean_trace_profiler;
v___x_4185_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_3987_, v___x_4184_);
if (v___x_4185_ == 0)
{
lean_object* v___x_4186_; 
lean_dec_ref(v___f_4065_);
lean_inc(v_indName_3980_);
v___x_4186_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4251_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4189_ = v___x_4186_;
v_isShared_4190_ = v_isSharedCheck_4251_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4186_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4251_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
if (lean_obj_tag(v_a_4187_) == 5)
{
lean_object* v_val_4191_; uint8_t v_isRec_4192_; 
v_val_4191_ = lean_ctor_get(v_a_4187_, 0);
lean_inc_ref(v_val_4191_);
lean_dec_ref_known(v_a_4187_, 1);
v_isRec_4192_ = lean_ctor_get_uint8(v_val_4191_, sizeof(void*)*6);
if (v_isRec_4192_ == 0)
{
lean_object* v___x_4193_; lean_object* v___x_4195_; 
lean_dec_ref(v_val_4191_);
lean_dec(v_indName_3980_);
v___x_4193_ = lean_box(0);
if (v_isShared_4190_ == 0)
{
lean_ctor_set(v___x_4189_, 0, v___x_4193_);
v___x_4195_ = v___x_4189_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4193_);
v___x_4195_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
return v___x_4195_;
}
}
else
{
lean_object* v_toConstantVal_4197_; lean_object* v_numParams_4198_; lean_object* v_all_4199_; lean_object* v_numNested_4200_; lean_object* v_type_4201_; lean_object* v___x_4202_; 
lean_del_object(v___x_4189_);
v_toConstantVal_4197_ = lean_ctor_get(v_val_4191_, 0);
lean_inc_ref(v_toConstantVal_4197_);
v_numParams_4198_ = lean_ctor_get(v_val_4191_, 1);
lean_inc(v_numParams_4198_);
v_all_4199_ = lean_ctor_get(v_val_4191_, 3);
lean_inc(v_all_4199_);
v_numNested_4200_ = lean_ctor_get(v_val_4191_, 5);
lean_inc(v_numNested_4200_);
lean_dec_ref(v_val_4191_);
v_type_4201_ = lean_ctor_get(v_toConstantVal_4197_, 2);
lean_inc_ref(v_type_4201_);
lean_dec_ref(v_toConstantVal_4197_);
v___x_4202_ = l_Lean_Meta_isPropFormerType(v_type_4201_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4238_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4205_ = v___x_4202_;
v_isShared_4206_ = v_isSharedCheck_4238_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v___x_4202_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4238_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
uint8_t v___x_4207_; 
v___x_4207_ = lean_unbox(v_a_4203_);
lean_dec(v_a_4203_);
if (v___x_4207_ == 0)
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
lean_del_object(v___x_4205_);
lean_inc_n(v_indName_3980_, 2);
v___x_4208_ = l_Lean_mkRecName(v_indName_3980_);
v___x_4209_ = l_Lean_mkBRecOnName(v_indName_3980_);
lean_inc(v_all_4199_);
v___x_4210_ = lean_array_mk(v_all_4199_);
lean_inc(v___x_4209_);
lean_inc_ref(v___x_4210_);
lean_inc(v_numParams_4198_);
lean_inc(v___x_4208_);
v___x_4211_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4208_, v_numParams_4198_, v___x_4210_, v___x_4209_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4232_; 
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4232_ == 0)
{
lean_object* v_unused_4233_; 
v_unused_4233_ = lean_ctor_get(v___x_4211_, 0);
lean_dec(v_unused_4233_);
v___x_4213_ = v___x_4211_;
v_isShared_4214_ = v_isSharedCheck_4232_;
goto v_resetjp_4212_;
}
else
{
lean_dec(v___x_4211_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4232_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; uint8_t v___x_4217_; 
v___x_4215_ = lean_unsigned_to_nat(0u);
v___x_4216_ = l_List_get_x21Internal___redArg(v___x_3990_, v_all_4199_, v___x_4215_);
lean_dec(v_all_4199_);
v___x_4217_ = lean_name_eq(v___x_4216_, v_indName_3980_);
lean_dec(v_indName_3980_);
lean_dec(v___x_4216_);
if (v___x_4217_ == 0)
{
lean_object* v___x_4218_; lean_object* v___x_4220_; 
lean_dec_ref(v___x_4210_);
lean_dec(v___x_4209_);
lean_dec(v___x_4208_);
lean_dec(v_numNested_4200_);
lean_dec(v_numParams_4198_);
v___x_4218_ = lean_box(0);
if (v_isShared_4214_ == 0)
{
lean_ctor_set(v___x_4213_, 0, v___x_4218_);
v___x_4220_ = v___x_4213_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
else
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
lean_del_object(v___x_4213_);
v___x_4222_ = lean_box(0);
v___x_4223_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4200_, v___x_4208_, v___x_4209_, v_numParams_4198_, v___x_4210_, v___x_4215_, v___x_4222_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_numNested_4200_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4230_ == 0)
{
lean_object* v_unused_4231_; 
v_unused_4231_ = lean_ctor_get(v___x_4223_, 0);
lean_dec(v_unused_4231_);
v___x_4225_ = v___x_4223_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_dec(v___x_4223_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
lean_ctor_set(v___x_4225_, 0, v___x_4222_);
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v___x_4222_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
else
{
return v___x_4223_;
}
}
}
}
else
{
lean_dec_ref(v___x_4210_);
lean_dec(v___x_4209_);
lean_dec(v___x_4208_);
lean_dec(v_numNested_4200_);
lean_dec(v_all_4199_);
lean_dec(v_numParams_4198_);
lean_dec(v_indName_3980_);
return v___x_4211_;
}
}
else
{
lean_object* v___x_4234_; lean_object* v___x_4236_; 
lean_dec(v_numNested_4200_);
lean_dec(v_all_4199_);
lean_dec(v_numParams_4198_);
lean_dec(v_indName_3980_);
v___x_4234_ = lean_box(0);
if (v_isShared_4206_ == 0)
{
lean_ctor_set(v___x_4205_, 0, v___x_4234_);
v___x_4236_ = v___x_4205_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v___x_4234_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
lean_dec(v_numNested_4200_);
lean_dec(v_all_4199_);
lean_dec(v_numParams_4198_);
lean_dec(v_indName_3980_);
v_a_4239_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4202_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4202_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
}
else
{
lean_object* v___x_4247_; lean_object* v___x_4249_; 
lean_dec(v_a_4187_);
lean_dec(v_indName_3980_);
v___x_4247_ = lean_box(0);
if (v_isShared_4190_ == 0)
{
lean_ctor_set(v___x_4189_, 0, v___x_4247_);
v___x_4249_ = v___x_4189_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v___x_4247_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
else
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4259_; 
lean_dec(v_indName_3980_);
v_a_4252_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4254_ = v___x_4186_;
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v___x_4186_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_a_4252_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
}
}
else
{
goto v___jp_4117_;
}
}
else
{
goto v___jp_4117_;
}
v___jp_4070_:
{
lean_object* v___x_4074_; double v___x_4075_; double v___x_4076_; double v___x_4077_; double v___x_4078_; double v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4074_ = lean_io_mono_nanos_now();
v___x_4075_ = lean_float_of_nat(v___y_4072_);
v___x_4076_ = lean_float_once(&l_Lean_mkBelow___closed__7, &l_Lean_mkBelow___closed__7_once, _init_l_Lean_mkBelow___closed__7);
v___x_4077_ = lean_float_div(v___x_4075_, v___x_4076_);
v___x_4078_ = lean_float_of_nat(v___x_4074_);
v___x_4079_ = lean_float_div(v___x_4078_, v___x_4076_);
v___x_4080_ = lean_box_float(v___x_4077_);
v___x_4081_ = lean_box_float(v___x_4079_);
v___x_4082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4080_);
lean_ctor_set(v___x_4082_, 1, v___x_4081_);
v___x_4083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4083_, 0, v_a_4073_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
v___x_4084_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_4066_, v_hasTrace_3989_, v___x_4067_, v_options_3987_, v___x_4069_, v___y_4071_, v___f_4065_, v___x_4083_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
return v___x_4084_;
}
v___jp_4085_:
{
lean_object* v___x_4089_; 
v___x_4089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4089_, 0, v_a_4088_);
v___y_4071_ = v___y_4087_;
v___y_4072_ = v___y_4086_;
v_a_4073_ = v___x_4089_;
goto v___jp_4070_;
}
v___jp_4090_:
{
lean_object* v___x_4094_; 
v___x_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4094_, 0, v_a_4093_);
v___y_4071_ = v___y_4092_;
v___y_4072_ = v___y_4091_;
v_a_4073_ = v___x_4094_;
goto v___jp_4070_;
}
v___jp_4095_:
{
lean_object* v___x_4099_; double v___x_4100_; double v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4099_ = lean_io_get_num_heartbeats();
v___x_4100_ = lean_float_of_nat(v___y_4097_);
v___x_4101_ = lean_float_of_nat(v___x_4099_);
v___x_4102_ = lean_box_float(v___x_4100_);
v___x_4103_ = lean_box_float(v___x_4101_);
v___x_4104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4102_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4105_, 0, v_a_4098_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_4066_, v_hasTrace_3989_, v___x_4067_, v_options_3987_, v___x_4069_, v___y_4096_, v___f_4065_, v___x_4105_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
return v___x_4106_;
}
v___jp_4107_:
{
lean_object* v___x_4111_; 
v___x_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4111_, 0, v_a_4110_);
v___y_4096_ = v___y_4108_;
v___y_4097_ = v___y_4109_;
v_a_4098_ = v___x_4111_;
goto v___jp_4095_;
}
v___jp_4112_:
{
lean_object* v___x_4116_; 
v___x_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4116_, 0, v_a_4115_);
v___y_4096_ = v___y_4113_;
v___y_4097_ = v___y_4114_;
v_a_4098_ = v___x_4116_;
goto v___jp_4095_;
}
v___jp_4117_:
{
lean_object* v___x_4118_; lean_object* v_a_4119_; lean_object* v___x_4120_; uint8_t v___x_4121_; 
v___x_4118_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v_a_3984_);
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref(v___x_4118_);
v___x_4120_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4121_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_3987_, v___x_4120_);
if (v___x_4121_ == 0)
{
lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4122_ = lean_io_mono_nanos_now();
lean_inc(v_indName_3980_);
v___x_4123_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4123_, 1);
if (lean_obj_tag(v_a_4124_) == 5)
{
lean_object* v_val_4125_; uint8_t v_isRec_4126_; 
v_val_4125_ = lean_ctor_get(v_a_4124_, 0);
lean_inc_ref(v_val_4125_);
lean_dec_ref_known(v_a_4124_, 1);
v_isRec_4126_ = lean_ctor_get_uint8(v_val_4125_, sizeof(void*)*6);
if (v_isRec_4126_ == 0)
{
lean_object* v___x_4127_; 
lean_dec_ref(v_val_4125_);
lean_dec(v_indName_3980_);
v___x_4127_ = lean_box(0);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v___x_4127_;
goto v___jp_4085_;
}
else
{
lean_object* v_toConstantVal_4128_; lean_object* v_numParams_4129_; lean_object* v_all_4130_; lean_object* v_numNested_4131_; lean_object* v_type_4132_; lean_object* v___x_4133_; 
v_toConstantVal_4128_ = lean_ctor_get(v_val_4125_, 0);
lean_inc_ref(v_toConstantVal_4128_);
v_numParams_4129_ = lean_ctor_get(v_val_4125_, 1);
lean_inc(v_numParams_4129_);
v_all_4130_ = lean_ctor_get(v_val_4125_, 3);
lean_inc(v_all_4130_);
v_numNested_4131_ = lean_ctor_get(v_val_4125_, 5);
lean_inc(v_numNested_4131_);
lean_dec_ref(v_val_4125_);
v_type_4132_ = lean_ctor_get(v_toConstantVal_4128_, 2);
lean_inc_ref(v_type_4132_);
lean_dec_ref(v_toConstantVal_4128_);
v___x_4133_ = l_Lean_Meta_isPropFormerType(v_type_4132_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; uint8_t v___x_4135_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref_known(v___x_4133_, 1);
v___x_4135_ = lean_unbox(v_a_4134_);
lean_dec(v_a_4134_);
if (v___x_4135_ == 0)
{
lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; 
lean_inc_n(v_indName_3980_, 2);
v___x_4136_ = l_Lean_mkRecName(v_indName_3980_);
v___x_4137_ = l_Lean_mkBRecOnName(v_indName_3980_);
lean_inc(v_all_4130_);
v___x_4138_ = lean_array_mk(v_all_4130_);
lean_inc(v___x_4137_);
lean_inc_ref(v___x_4138_);
lean_inc(v_numParams_4129_);
lean_inc(v___x_4136_);
v___x_4139_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4136_, v_numParams_4129_, v___x_4138_, v___x_4137_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v___x_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
lean_dec_ref_known(v___x_4139_, 1);
v___x_4140_ = lean_unsigned_to_nat(0u);
v___x_4141_ = l_List_get_x21Internal___redArg(v___x_3990_, v_all_4130_, v___x_4140_);
lean_dec(v_all_4130_);
v___x_4142_ = lean_name_eq(v___x_4141_, v_indName_3980_);
lean_dec(v_indName_3980_);
lean_dec(v___x_4141_);
if (v___x_4142_ == 0)
{
lean_object* v___x_4143_; 
lean_dec_ref(v___x_4138_);
lean_dec(v___x_4137_);
lean_dec(v___x_4136_);
lean_dec(v_numNested_4131_);
lean_dec(v_numParams_4129_);
v___x_4143_ = lean_box(0);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v___x_4143_;
goto v___jp_4085_;
}
else
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = lean_box(0);
v___x_4145_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4131_, v___x_4136_, v___x_4137_, v_numParams_4129_, v___x_4138_, v___x_4140_, v___x_4144_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_numNested_4131_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_dec_ref_known(v___x_4145_, 1);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v___x_4144_;
goto v___jp_4085_;
}
else
{
lean_object* v_a_4146_; 
v_a_4146_ = lean_ctor_get(v___x_4145_, 0);
lean_inc(v_a_4146_);
lean_dec_ref_known(v___x_4145_, 1);
v___y_4091_ = v___x_4122_;
v___y_4092_ = v_a_4119_;
v_a_4093_ = v_a_4146_;
goto v___jp_4090_;
}
}
}
else
{
lean_dec_ref(v___x_4138_);
lean_dec(v___x_4137_);
lean_dec(v___x_4136_);
lean_dec(v_numNested_4131_);
lean_dec(v_all_4130_);
lean_dec(v_numParams_4129_);
lean_dec(v_indName_3980_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4147_; 
v_a_4147_ = lean_ctor_get(v___x_4139_, 0);
lean_inc(v_a_4147_);
lean_dec_ref_known(v___x_4139_, 1);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v_a_4147_;
goto v___jp_4085_;
}
else
{
lean_object* v_a_4148_; 
v_a_4148_ = lean_ctor_get(v___x_4139_, 0);
lean_inc(v_a_4148_);
lean_dec_ref_known(v___x_4139_, 1);
v___y_4091_ = v___x_4122_;
v___y_4092_ = v_a_4119_;
v_a_4093_ = v_a_4148_;
goto v___jp_4090_;
}
}
}
else
{
lean_object* v___x_4149_; 
lean_dec(v_numNested_4131_);
lean_dec(v_all_4130_);
lean_dec(v_numParams_4129_);
lean_dec(v_indName_3980_);
v___x_4149_ = lean_box(0);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v___x_4149_;
goto v___jp_4085_;
}
}
else
{
lean_object* v_a_4150_; 
lean_dec(v_numNested_4131_);
lean_dec(v_all_4130_);
lean_dec(v_numParams_4129_);
lean_dec(v_indName_3980_);
v_a_4150_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4150_);
lean_dec_ref_known(v___x_4133_, 1);
v___y_4091_ = v___x_4122_;
v___y_4092_ = v_a_4119_;
v_a_4093_ = v_a_4150_;
goto v___jp_4090_;
}
}
}
else
{
lean_object* v___x_4151_; 
lean_dec(v_a_4124_);
lean_dec(v_indName_3980_);
v___x_4151_ = lean_box(0);
v___y_4086_ = v___x_4122_;
v___y_4087_ = v_a_4119_;
v_a_4088_ = v___x_4151_;
goto v___jp_4085_;
}
}
else
{
lean_object* v_a_4152_; 
lean_dec(v_indName_3980_);
v_a_4152_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4152_);
lean_dec_ref_known(v___x_4123_, 1);
v___y_4091_ = v___x_4122_;
v___y_4092_ = v_a_4119_;
v_a_4093_ = v_a_4152_;
goto v___jp_4090_;
}
}
else
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_io_get_num_heartbeats();
lean_inc(v_indName_3980_);
v___x_4154_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
if (lean_obj_tag(v_a_4155_) == 5)
{
lean_object* v_val_4156_; uint8_t v_isRec_4157_; 
v_val_4156_ = lean_ctor_get(v_a_4155_, 0);
lean_inc_ref(v_val_4156_);
lean_dec_ref_known(v_a_4155_, 1);
v_isRec_4157_ = lean_ctor_get_uint8(v_val_4156_, sizeof(void*)*6);
if (v_isRec_4157_ == 0)
{
lean_object* v___x_4158_; 
lean_dec_ref(v_val_4156_);
lean_dec(v_indName_3980_);
v___x_4158_ = lean_box(0);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v___x_4158_;
goto v___jp_4107_;
}
else
{
lean_object* v_toConstantVal_4159_; lean_object* v_numParams_4160_; lean_object* v_all_4161_; lean_object* v_numNested_4162_; lean_object* v_type_4163_; lean_object* v___x_4164_; 
v_toConstantVal_4159_ = lean_ctor_get(v_val_4156_, 0);
lean_inc_ref(v_toConstantVal_4159_);
v_numParams_4160_ = lean_ctor_get(v_val_4156_, 1);
lean_inc(v_numParams_4160_);
v_all_4161_ = lean_ctor_get(v_val_4156_, 3);
lean_inc(v_all_4161_);
v_numNested_4162_ = lean_ctor_get(v_val_4156_, 5);
lean_inc(v_numNested_4162_);
lean_dec_ref(v_val_4156_);
v_type_4163_ = lean_ctor_get(v_toConstantVal_4159_, 2);
lean_inc_ref(v_type_4163_);
lean_dec_ref(v_toConstantVal_4159_);
v___x_4164_ = l_Lean_Meta_isPropFormerType(v_type_4163_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; uint8_t v___x_4166_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4164_, 1);
v___x_4166_ = lean_unbox(v_a_4165_);
lean_dec(v_a_4165_);
if (v___x_4166_ == 0)
{
lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
lean_inc_n(v_indName_3980_, 2);
v___x_4167_ = l_Lean_mkRecName(v_indName_3980_);
v___x_4168_ = l_Lean_mkBRecOnName(v_indName_3980_);
lean_inc(v_all_4161_);
v___x_4169_ = lean_array_mk(v_all_4161_);
lean_inc(v___x_4168_);
lean_inc_ref(v___x_4169_);
lean_inc(v_numParams_4160_);
lean_inc(v___x_4167_);
v___x_4170_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4167_, v_numParams_4160_, v___x_4169_, v___x_4168_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v___x_4171_; lean_object* v___x_4172_; uint8_t v___x_4173_; 
lean_dec_ref_known(v___x_4170_, 1);
v___x_4171_ = lean_unsigned_to_nat(0u);
v___x_4172_ = l_List_get_x21Internal___redArg(v___x_3990_, v_all_4161_, v___x_4171_);
lean_dec(v_all_4161_);
v___x_4173_ = lean_name_eq(v___x_4172_, v_indName_3980_);
lean_dec(v_indName_3980_);
lean_dec(v___x_4172_);
if (v___x_4173_ == 0)
{
lean_object* v___x_4174_; 
lean_dec_ref(v___x_4169_);
lean_dec(v___x_4168_);
lean_dec(v___x_4167_);
lean_dec(v_numNested_4162_);
lean_dec(v_numParams_4160_);
v___x_4174_ = lean_box(0);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v___x_4174_;
goto v___jp_4107_;
}
else
{
lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4175_ = lean_box(0);
v___x_4176_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4162_, v___x_4167_, v___x_4168_, v_numParams_4160_, v___x_4169_, v___x_4171_, v___x_4175_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_numNested_4162_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_dec_ref_known(v___x_4176_, 1);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v___x_4175_;
goto v___jp_4107_;
}
else
{
lean_object* v_a_4177_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4176_, 1);
v___y_4113_ = v_a_4119_;
v___y_4114_ = v___x_4153_;
v_a_4115_ = v_a_4177_;
goto v___jp_4112_;
}
}
}
else
{
lean_dec_ref(v___x_4169_);
lean_dec(v___x_4168_);
lean_dec(v___x_4167_);
lean_dec(v_numNested_4162_);
lean_dec(v_all_4161_);
lean_dec(v_numParams_4160_);
lean_dec(v_indName_3980_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4178_; 
v_a_4178_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4178_);
lean_dec_ref_known(v___x_4170_, 1);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v_a_4178_;
goto v___jp_4107_;
}
else
{
lean_object* v_a_4179_; 
v_a_4179_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4170_, 1);
v___y_4113_ = v_a_4119_;
v___y_4114_ = v___x_4153_;
v_a_4115_ = v_a_4179_;
goto v___jp_4112_;
}
}
}
else
{
lean_object* v___x_4180_; 
lean_dec(v_numNested_4162_);
lean_dec(v_all_4161_);
lean_dec(v_numParams_4160_);
lean_dec(v_indName_3980_);
v___x_4180_ = lean_box(0);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v___x_4180_;
goto v___jp_4107_;
}
}
else
{
lean_object* v_a_4181_; 
lean_dec(v_numNested_4162_);
lean_dec(v_all_4161_);
lean_dec(v_numParams_4160_);
lean_dec(v_indName_3980_);
v_a_4181_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4164_, 1);
v___y_4113_ = v_a_4119_;
v___y_4114_ = v___x_4153_;
v_a_4115_ = v_a_4181_;
goto v___jp_4112_;
}
}
}
else
{
lean_object* v___x_4182_; 
lean_dec(v_a_4155_);
lean_dec(v_indName_3980_);
v___x_4182_ = lean_box(0);
v___y_4108_ = v_a_4119_;
v___y_4109_ = v___x_4153_;
v_a_4110_ = v___x_4182_;
goto v___jp_4107_;
}
}
else
{
lean_object* v_a_4183_; 
lean_dec(v_indName_3980_);
v_a_4183_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4154_, 1);
v___y_4113_ = v_a_4119_;
v___y_4114_ = v___x_4153_;
v_a_4115_ = v_a_4183_;
goto v___jp_4112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOn___boxed(lean_object* v_indName_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_){
_start:
{
lean_object* v_res_4266_; 
v_res_4266_ = l_Lean_mkBRecOn(v_indName_4260_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_);
lean_dec(v_a_4264_);
lean_dec_ref(v_a_4263_);
lean_dec(v_a_4262_);
lean_dec_ref(v_a_4261_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(lean_object* v_upperBound_4267_, lean_object* v___x_4268_, lean_object* v___x_4269_, lean_object* v___x_4270_, lean_object* v___x_4271_, lean_object* v_inst_4272_, lean_object* v_R_4273_, lean_object* v_a_4274_, lean_object* v_b_4275_, lean_object* v_c_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_upperBound_4267_, v___x_4268_, v___x_4269_, v___x_4270_, v___x_4271_, v_a_4274_, v_b_4275_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___boxed(lean_object* v_upperBound_4283_, lean_object* v___x_4284_, lean_object* v___x_4285_, lean_object* v___x_4286_, lean_object* v___x_4287_, lean_object* v_inst_4288_, lean_object* v_R_4289_, lean_object* v_a_4290_, lean_object* v_b_4291_, lean_object* v_c_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(v_upperBound_4283_, v___x_4284_, v___x_4285_, v___x_4286_, v___x_4287_, v_inst_4288_, v_R_4289_, v_a_4290_, v_b_4291_, v_c_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v_upperBound_4283_);
return v_res_4298_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; 
v___x_4300_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4301_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_4302_ = l_Lean_Name_str___override(v___x_4301_, v___x_4300_);
return v___x_4302_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
v___x_4304_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4305_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4306_ = l_Lean_Name_str___override(v___x_4305_, v___x_4304_);
return v___x_4306_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
v___x_4307_ = ((lean_object*)(l_Lean_mkBelow___closed__0));
v___x_4308_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4309_ = l_Lean_Name_str___override(v___x_4308_, v___x_4307_);
return v___x_4309_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4311_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4312_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4313_ = l_Lean_Name_str___override(v___x_4312_, v___x_4311_);
return v___x_4313_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4315_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4316_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4317_ = l_Lean_Name_str___override(v___x_4316_, v___x_4315_);
return v___x_4317_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4318_ = lean_unsigned_to_nat(0u);
v___x_4319_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4320_ = l_Lean_Name_num___override(v___x_4319_, v___x_4318_);
return v___x_4320_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4321_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4322_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4323_ = l_Lean_Name_str___override(v___x_4322_, v___x_4321_);
return v___x_4323_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4325_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4326_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4327_ = l_Lean_Name_str___override(v___x_4326_, v___x_4325_);
return v___x_4327_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4329_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4330_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4331_ = l_Lean_Name_str___override(v___x_4330_, v___x_4329_);
return v___x_4331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v___x_4332_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4333_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4334_ = l_Lean_Name_str___override(v___x_4333_, v___x_4332_);
return v___x_4334_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; 
v___x_4335_ = ((lean_object*)(l_Lean_mkBelow___closed__0));
v___x_4336_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4337_ = l_Lean_Name_str___override(v___x_4336_, v___x_4335_);
return v___x_4337_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4338_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4339_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4340_ = l_Lean_Name_str___override(v___x_4339_, v___x_4338_);
return v___x_4340_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; 
v___x_4341_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4342_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4343_ = l_Lean_Name_str___override(v___x_4342_, v___x_4341_);
return v___x_4343_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4344_ = lean_unsigned_to_nat(2304625798u);
v___x_4345_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4346_ = l_Lean_Name_num___override(v___x_4345_, v___x_4344_);
return v___x_4346_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; 
v___x_4348_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4349_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4350_ = l_Lean_Name_str___override(v___x_4349_, v___x_4348_);
return v___x_4350_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4352_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4353_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4354_ = l_Lean_Name_str___override(v___x_4353_, v___x_4352_);
return v___x_4354_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4355_ = lean_unsigned_to_nat(2u);
v___x_4356_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4357_ = l_Lean_Name_num___override(v___x_4356_, v___x_4355_);
return v___x_4357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4359_; uint8_t v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4359_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_4360_ = 0;
v___x_4361_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4362_ = l_Lean_registerTraceClass(v___x_4359_, v___x_4360_, v___x_4361_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2____boxed(lean_object* v_a_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
return v_res_4364_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_BRecOn(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.Split
// Imports: public import Lean.Meta.Tactic.Simp.Types public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Data.Array import Lean.Meta.Match.Rewrite import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Array_mask___redArg(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Meta_Simp_simpMatchDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 228, 43, 115, 146, 126, 91, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "discr"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 61, 20, 168, 108, 94, 13, 165)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaExpand___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed__const__1 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Failed to find proof for if condition "};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Failed to find proof for cond condition "};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(v_x_6_);
lean_dec_ref(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
lean_object* v_e_10_; lean_object* v___x_11_; 
v_e_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc_ref(v_e_10_);
lean_dec_ref(v_t_8_);
v___x_11_ = lean_apply_1(v_k_9_, v_e_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object* v_t_24_, lean_object* v_ite_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_24_, v_ite_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_ite_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_28_, v_ite_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object* v_t_32_, lean_object* v_dite_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_32_, v_dite_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_dite_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_36_, v_dite_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object* v_t_40_, lean_object* v_cond_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_40_, v_cond_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_cond_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_44_, v_cond_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object* v_t_48_, lean_object* v_matcher_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_48_, v_matcher_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_matcher_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_52_, v_matcher_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_box(0);
v___x_60_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1));
v___x_61_ = l_Lean_Expr_const___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v_zero_68_; uint8_t v_isZero_69_; 
v_zero_68_ = lean_unsigned_to_nat(0u);
v_isZero_69_ = lean_nat_dec_eq(v_x_66_, v_zero_68_);
if (v_isZero_69_ == 1)
{
lean_dec(v_x_66_);
return v_x_67_;
}
else
{
lean_object* v_one_70_; lean_object* v_n_71_; 
v_one_70_ = lean_unsigned_to_nat(1u);
v_n_71_ = lean_nat_sub(v_x_66_, v_one_70_);
lean_dec(v_x_66_);
if (lean_obj_tag(v_x_67_) == 1)
{
lean_object* v_val_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_83_; 
v_val_72_ = lean_ctor_get(v_x_67_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_83_ == 0)
{
v___x_74_ = v_x_67_;
v_isShared_75_ = v_isSharedCheck_83_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_val_72_);
lean_dec(v_x_67_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_83_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
if (lean_obj_tag(v_val_72_) == 6)
{
lean_object* v_body_76_; lean_object* v___x_78_; 
v_body_76_ = lean_ctor_get(v_val_72_, 2);
lean_inc_ref(v_body_76_);
lean_dec_ref_known(v_val_72_, 3);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v_body_76_);
v___x_78_ = v___x_74_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_body_76_);
v___x_78_ = v_reuseFailAlloc_80_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
v_x_66_ = v_n_71_;
v_x_67_ = v___x_78_;
goto _start;
}
}
else
{
lean_object* v___x_81_; 
lean_del_object(v___x_74_);
lean_dec(v_val_72_);
v___x_81_ = lean_box(0);
v_x_66_ = v_n_71_;
v_x_67_ = v___x_81_;
goto _start;
}
}
}
else
{
lean_object* v___x_84_; 
lean_dec(v_x_67_);
v___x_84_ = lean_box(0);
v_x_66_ = v_n_71_;
v_x_67_ = v___x_84_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object* v_info_86_){
_start:
{
lean_object* v_e_88_; 
if (lean_obj_tag(v_info_86_) == 3)
{
lean_object* v_matcherApp_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_111_; 
v_matcherApp_94_ = lean_ctor_get(v_info_86_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v_info_86_);
if (v_isSharedCheck_111_ == 0)
{
v___x_96_ = v_info_86_;
v_isShared_97_ = v_isSharedCheck_111_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_matcherApp_94_);
lean_dec(v_info_86_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_111_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_toMatcherInfo_98_; lean_object* v_motive_99_; lean_object* v_discrInfos_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v_toMatcherInfo_98_ = lean_ctor_get(v_matcherApp_94_, 0);
lean_inc_ref(v_toMatcherInfo_98_);
v_motive_99_ = lean_ctor_get(v_matcherApp_94_, 4);
lean_inc_ref_n(v_motive_99_, 2);
lean_dec_ref(v_matcherApp_94_);
v_discrInfos_100_ = lean_ctor_get(v_toMatcherInfo_98_, 4);
lean_inc_ref(v_discrInfos_100_);
lean_dec_ref(v_toMatcherInfo_98_);
v___x_101_ = lean_array_get_size(v_discrInfos_100_);
lean_dec_ref(v_discrInfos_100_);
if (v_isShared_97_ == 0)
{
lean_ctor_set_tag(v___x_96_, 1);
lean_ctor_set(v___x_96_, 0, v_motive_99_);
v___x_103_ = v___x_96_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_motive_99_);
v___x_103_ = v_reuseFailAlloc_110_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(v___x_101_, v___x_103_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_dec_ref(v_motive_99_);
return v___x_104_;
}
else
{
lean_object* v_val_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v_val_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_105_);
v___x_106_ = l_Lean_Expr_looseBVarRange(v_val_105_);
lean_dec(v_val_105_);
v___x_107_ = l_Lean_Expr_looseBVarRange(v_motive_99_);
lean_dec_ref(v_motive_99_);
v___x_108_ = lean_nat_dec_eq(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_dec_ref_known(v___x_104_, 1);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
return v___x_104_;
}
}
}
}
}
else
{
lean_object* v_e_112_; 
v_e_112_ = lean_ctor_get(v_info_86_, 0);
lean_inc_ref(v_e_112_);
lean_dec_ref(v_info_86_);
v_e_88_ = v_e_112_;
goto v___jp_87_;
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_89_ = l_Lean_Expr_getAppNumArgs(v_e_88_);
v___x_90_ = lean_unsigned_to_nat(1u);
v___x_91_ = lean_nat_sub(v___x_89_, v___x_90_);
lean_dec(v___x_89_);
v___x_92_ = l_Lean_Expr_getRevArg_x21(v_e_88_, v___x_91_);
lean_dec_ref(v_e_88_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object* v_matcherApp_113_, size_t v_sz_114_, size_t v_i_115_, lean_object* v_bs_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = lean_usize_dec_lt(v_i_115_, v_sz_114_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
v___x_118_ = l_unsafeCast___redArg(v_bs_116_);
lean_dec_ref(v_bs_116_);
return v___x_118_;
}
else
{
lean_object* v_v_119_; lean_object* v_alts_120_; lean_object* v___x_121_; lean_object* v_bs_x27_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_v_119_ = lean_array_uget(v_bs_116_, v_i_115_);
v_alts_120_ = lean_ctor_get(v_matcherApp_113_, 6);
v___x_121_ = lean_unsigned_to_nat(0u);
v_bs_x27_122_ = lean_array_uset(v_bs_116_, v_i_115_, v___x_121_);
v___x_123_ = l_Lean_instInhabitedExpr;
v___x_124_ = lean_usize_to_nat(v_i_115_);
v___x_125_ = l_unsafeCast___redArg(v_v_119_);
lean_dec(v_v_119_);
v___x_126_ = lean_array_get_borrowed(v___x_123_, v_alts_120_, v___x_124_);
lean_dec(v___x_124_);
lean_inc(v___x_126_);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_add(v_i_115_, v___x_128_);
v___x_130_ = l_unsafeCast___redArg(v___x_127_);
lean_dec_ref_known(v___x_127_, 2);
v___x_131_ = lean_array_uset(v_bs_x27_122_, v_i_115_, v___x_130_);
v_i_115_ = v___x_129_;
v_bs_116_ = v___x_131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object* v_matcherApp_133_, lean_object* v_sz_134_, lean_object* v_i_135_, lean_object* v_bs_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v_i_boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_134_);
lean_dec(v_sz_134_);
v_i_boxed_138_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_res_139_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_133_, v_sz_boxed_137_, v_i_boxed_138_, v_bs_136_);
lean_dec_ref(v_matcherApp_133_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object* v_info_140_){
_start:
{
switch(lean_obj_tag(v_info_140_))
{
case 0:
{
lean_object* v_e_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_e_141_ = lean_ctor_get(v_info_140_, 0);
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_unsigned_to_nat(3u);
v___x_144_ = l_Lean_Expr_getAppNumArgs(v_e_141_);
v___x_145_ = lean_nat_sub(v___x_144_, v___x_143_);
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_nat_sub(v___x_145_, v___x_146_);
lean_dec(v___x_145_);
v___x_148_ = l_Lean_Expr_getRevArg_x21(v_e_141_, v___x_147_);
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_142_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_unsigned_to_nat(4u);
v___x_151_ = lean_nat_sub(v___x_144_, v___x_150_);
lean_dec(v___x_144_);
v___x_152_ = lean_nat_sub(v___x_151_, v___x_146_);
lean_dec(v___x_151_);
v___x_153_ = l_Lean_Expr_getRevArg_x21(v_e_141_, v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_142_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_unsigned_to_nat(2u);
v___x_156_ = lean_mk_empty_array_with_capacity(v___x_155_);
v___x_157_ = lean_array_push(v___x_156_, v___x_149_);
v___x_158_ = lean_array_push(v___x_157_, v___x_154_);
return v___x_158_;
}
case 1:
{
lean_object* v_e_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_e_159_ = lean_ctor_get(v_info_140_, 0);
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_unsigned_to_nat(3u);
v___x_162_ = l_Lean_Expr_getAppNumArgs(v_e_159_);
v___x_163_ = lean_nat_sub(v___x_162_, v___x_161_);
v___x_164_ = lean_nat_sub(v___x_163_, v___x_160_);
lean_dec(v___x_163_);
v___x_165_ = l_Lean_Expr_getRevArg_x21(v_e_159_, v___x_164_);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_160_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = lean_unsigned_to_nat(4u);
v___x_168_ = lean_nat_sub(v___x_162_, v___x_167_);
lean_dec(v___x_162_);
v___x_169_ = lean_nat_sub(v___x_168_, v___x_160_);
lean_dec(v___x_168_);
v___x_170_ = l_Lean_Expr_getRevArg_x21(v_e_159_, v___x_169_);
v___x_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_160_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_unsigned_to_nat(2u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_array_push(v___x_173_, v___x_166_);
v___x_175_ = lean_array_push(v___x_174_, v___x_171_);
return v___x_175_;
}
case 2:
{
lean_object* v_e_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v_e_176_ = lean_ctor_get(v_info_140_, 0);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_unsigned_to_nat(2u);
v___x_179_ = l_Lean_Expr_getAppNumArgs(v_e_176_);
v___x_180_ = lean_nat_sub(v___x_179_, v___x_178_);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_sub(v___x_180_, v___x_181_);
lean_dec(v___x_180_);
v___x_183_ = l_Lean_Expr_getRevArg_x21(v_e_176_, v___x_182_);
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_177_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = lean_unsigned_to_nat(3u);
v___x_186_ = lean_nat_sub(v___x_179_, v___x_185_);
lean_dec(v___x_179_);
v___x_187_ = lean_nat_sub(v___x_186_, v___x_181_);
lean_dec(v___x_186_);
v___x_188_ = l_Lean_Expr_getRevArg_x21(v_e_176_, v___x_187_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_177_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = lean_mk_empty_array_with_capacity(v___x_178_);
v___x_191_ = lean_array_push(v___x_190_, v___x_184_);
v___x_192_ = lean_array_push(v___x_191_, v___x_189_);
return v___x_192_;
}
default: 
{
lean_object* v_matcherApp_193_; lean_object* v___x_194_; size_t v_sz_195_; size_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_matcherApp_193_ = lean_ctor_get(v_info_140_, 0);
v___x_194_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_193_);
v_sz_195_ = lean_array_size(v___x_194_);
v___x_196_ = ((size_t)0ULL);
v___x_197_ = l_unsafeCast___redArg(v___x_194_);
lean_dec_ref(v___x_194_);
v___x_198_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_193_, v_sz_195_, v___x_196_, v___x_197_);
v___x_199_ = l_unsafeCast___redArg(v___x_198_);
lean_dec_ref(v___x_198_);
return v___x_199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos___boxed(lean_object* v_info_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(v_info_200_);
lean_dec_ref(v_info_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object* v_matcherApp_202_, lean_object* v_as_203_, size_t v_sz_204_, size_t v_i_205_, lean_object* v_bs_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_202_, v_sz_204_, v_i_205_, v_bs_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object* v_matcherApp_208_, lean_object* v_as_209_, lean_object* v_sz_210_, lean_object* v_i_211_, lean_object* v_bs_212_){
_start:
{
size_t v_sz_boxed_213_; size_t v_i_boxed_214_; lean_object* v_res_215_; 
v_sz_boxed_213_ = lean_unbox_usize(v_sz_210_);
lean_dec(v_sz_210_);
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_res_215_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(v_matcherApp_208_, v_as_209_, v_sz_boxed_213_, v_i_boxed_214_, v_bs_212_);
lean_dec_ref(v_as_209_);
lean_dec_ref(v_matcherApp_208_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 3)
{
lean_object* v_matcherApp_217_; lean_object* v___x_218_; 
v_matcherApp_217_ = lean_ctor_get(v_x_216_, 0);
lean_inc_ref(v_matcherApp_217_);
lean_dec_ref_known(v_x_216_, 1);
v___x_218_ = l_Lean_Meta_MatcherApp_toExpr(v_matcherApp_217_);
return v___x_218_;
}
else
{
lean_object* v_e_219_; 
v_e_219_ = lean_ctor_get(v_x_216_, 0);
lean_inc_ref(v_e_219_);
lean_dec_ref(v_x_216_);
return v_e_219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object* v___x_223_, lean_object* v_resTy_224_, lean_object* v_c_225_, lean_object* v_dec_226_, lean_object* v_t_227_, lean_object* v_e_228_, lean_object* v_k_229_, lean_object* v_u_230_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_231_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v_u_230_);
lean_ctor_set(v___x_232_, 1, v___x_223_);
v___x_233_ = l_Lean_mkConst(v___x_231_, v___x_232_);
lean_inc_ref(v_e_228_);
lean_inc_ref(v_t_227_);
lean_inc_ref(v_dec_226_);
lean_inc_ref(v_c_225_);
v___x_234_ = l_Lean_mkApp5(v___x_233_, v_resTy_224_, v_c_225_, v_dec_226_, v_t_227_, v_e_228_);
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
v___x_236_ = lean_unsigned_to_nat(4u);
v___x_237_ = lean_mk_empty_array_with_capacity(v___x_236_);
v___x_238_ = lean_array_push(v___x_237_, v_c_225_);
v___x_239_ = lean_array_push(v___x_238_, v_dec_226_);
v___x_240_ = lean_array_push(v___x_239_, v_t_227_);
v___x_241_ = lean_array_push(v___x_240_, v_e_228_);
v___x_242_ = lean_apply_2(v_k_229_, v___x_235_, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object* v___x_243_, lean_object* v_resTy_244_, lean_object* v_c_245_, lean_object* v_dec_246_, lean_object* v_t_247_, lean_object* v_k_248_, lean_object* v_inst_249_, lean_object* v_toBind_250_, lean_object* v_e_251_){
_start:
{
lean_object* v___f_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
lean_inc_ref(v_resTy_244_);
v___f_252_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0), 8, 7);
lean_closure_set(v___f_252_, 0, v___x_243_);
lean_closure_set(v___f_252_, 1, v_resTy_244_);
lean_closure_set(v___f_252_, 2, v_c_245_);
lean_closure_set(v___f_252_, 3, v_dec_246_);
lean_closure_set(v___f_252_, 4, v_t_247_);
lean_closure_set(v___f_252_, 5, v_e_251_);
lean_closure_set(v___f_252_, 6, v_k_248_);
v___x_253_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_253_, 0, v_resTy_244_);
v___x_254_ = lean_apply_2(v_inst_249_, lean_box(0), v___x_253_);
v___x_255_ = lean_apply_4(v_toBind_250_, lean_box(0), lean_box(0), v___x_254_, v___f_252_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object* v___x_259_, lean_object* v_resTy_260_, lean_object* v_c_261_, lean_object* v_dec_262_, lean_object* v_k_263_, lean_object* v_inst_264_, lean_object* v_toBind_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_t_268_){
_start:
{
lean_object* v___f_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
lean_inc_ref(v_resTy_260_);
v___f_269_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1), 9, 8);
lean_closure_set(v___f_269_, 0, v___x_259_);
lean_closure_set(v___f_269_, 1, v_resTy_260_);
lean_closure_set(v___f_269_, 2, v_c_261_);
lean_closure_set(v___f_269_, 3, v_dec_262_);
lean_closure_set(v___f_269_, 4, v_t_268_);
lean_closure_set(v___f_269_, 5, v_k_263_);
lean_closure_set(v___f_269_, 6, v_inst_264_);
lean_closure_set(v___f_269_, 7, v_toBind_265_);
v___x_270_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_271_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_266_, v_inst_267_, v___x_270_, v_resTy_260_, v___f_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object* v___x_275_, lean_object* v_resTy_276_, lean_object* v_c_277_, lean_object* v_k_278_, lean_object* v_inst_279_, lean_object* v_toBind_280_, lean_object* v_inst_281_, lean_object* v_inst_282_, lean_object* v_dec_283_){
_start:
{
lean_object* v___f_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
lean_inc_ref(v_inst_282_);
lean_inc_ref(v_inst_281_);
lean_inc_ref(v_resTy_276_);
v___f_284_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2), 10, 9);
lean_closure_set(v___f_284_, 0, v___x_275_);
lean_closure_set(v___f_284_, 1, v_resTy_276_);
lean_closure_set(v___f_284_, 2, v_c_277_);
lean_closure_set(v___f_284_, 3, v_dec_283_);
lean_closure_set(v___f_284_, 4, v_k_278_);
lean_closure_set(v___f_284_, 5, v_inst_279_);
lean_closure_set(v___f_284_, 6, v_toBind_280_);
lean_closure_set(v___f_284_, 7, v_inst_281_);
lean_closure_set(v___f_284_, 8, v_inst_282_);
v___x_285_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_286_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_281_, v_inst_282_, v___x_285_, v_resTy_276_, v___f_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_box(0);
v___x_294_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3));
v___x_295_ = l_Lean_mkConst(v___x_294_, v___x_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object* v_resTy_296_, lean_object* v_k_297_, lean_object* v_inst_298_, lean_object* v_toBind_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_c_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_303_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_304_ = lean_box(0);
lean_inc_ref(v_inst_301_);
lean_inc_ref(v_inst_300_);
lean_inc_ref(v_c_302_);
v___f_305_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3), 9, 8);
lean_closure_set(v___f_305_, 0, v___x_304_);
lean_closure_set(v___f_305_, 1, v_resTy_296_);
lean_closure_set(v___f_305_, 2, v_c_302_);
lean_closure_set(v___f_305_, 3, v_k_297_);
lean_closure_set(v___f_305_, 4, v_inst_298_);
lean_closure_set(v___f_305_, 5, v_toBind_299_);
lean_closure_set(v___f_305_, 6, v_inst_300_);
lean_closure_set(v___f_305_, 7, v_inst_301_);
v___x_306_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_307_ = l_Lean_Expr_app___override(v___x_306_, v_c_302_);
v___x_308_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_300_, v_inst_301_, v___x_303_, v___x_307_, v___f_305_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object* v_c_309_, lean_object* v_resTy_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_mkArrow(v_c_309_, v_resTy_310_, v___y_313_, v___y_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object* v_c_317_, lean_object* v_resTy_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(v_c_317_, v_resTy_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object* v___x_328_, lean_object* v_resTy_329_, lean_object* v_c_330_, lean_object* v_dec_331_, lean_object* v_t_332_, lean_object* v_e_333_, lean_object* v_k_334_, lean_object* v_u_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_336_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v_u_335_);
lean_ctor_set(v___x_337_, 1, v___x_328_);
v___x_338_ = l_Lean_mkConst(v___x_336_, v___x_337_);
lean_inc_ref(v_e_333_);
lean_inc_ref(v_t_332_);
lean_inc_ref(v_dec_331_);
lean_inc_ref(v_c_330_);
v___x_339_ = l_Lean_mkApp5(v___x_338_, v_resTy_329_, v_c_330_, v_dec_331_, v_t_332_, v_e_333_);
v___x_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
v___x_341_ = lean_unsigned_to_nat(4u);
v___x_342_ = lean_mk_empty_array_with_capacity(v___x_341_);
v___x_343_ = lean_array_push(v___x_342_, v_c_330_);
v___x_344_ = lean_array_push(v___x_343_, v_dec_331_);
v___x_345_ = lean_array_push(v___x_344_, v_t_332_);
v___x_346_ = lean_array_push(v___x_345_, v_e_333_);
v___x_347_ = lean_apply_2(v_k_334_, v___x_340_, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object* v___x_348_, lean_object* v_resTy_349_, lean_object* v_c_350_, lean_object* v_dec_351_, lean_object* v_t_352_, lean_object* v_k_353_, lean_object* v_inst_354_, lean_object* v_toBind_355_, lean_object* v_e_356_){
_start:
{
lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_inc_ref(v_resTy_349_);
v___f_357_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6), 8, 7);
lean_closure_set(v___f_357_, 0, v___x_348_);
lean_closure_set(v___f_357_, 1, v_resTy_349_);
lean_closure_set(v___f_357_, 2, v_c_350_);
lean_closure_set(v___f_357_, 3, v_dec_351_);
lean_closure_set(v___f_357_, 4, v_t_352_);
lean_closure_set(v___f_357_, 5, v_e_356_);
lean_closure_set(v___f_357_, 6, v_k_353_);
v___x_358_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_358_, 0, v_resTy_349_);
v___x_359_ = lean_apply_2(v_inst_354_, lean_box(0), v___x_358_);
v___x_360_ = lean_apply_4(v_toBind_355_, lean_box(0), lean_box(0), v___x_359_, v___f_357_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object* v___x_361_, lean_object* v_resTy_362_, lean_object* v_c_363_, lean_object* v_dec_364_, lean_object* v_k_365_, lean_object* v_inst_366_, lean_object* v_toBind_367_, lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_eTy_370_, lean_object* v_t_371_){
_start:
{
lean_object* v___f_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___f_372_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7), 9, 8);
lean_closure_set(v___f_372_, 0, v___x_361_);
lean_closure_set(v___f_372_, 1, v_resTy_362_);
lean_closure_set(v___f_372_, 2, v_c_363_);
lean_closure_set(v___f_372_, 3, v_dec_364_);
lean_closure_set(v___f_372_, 4, v_t_371_);
lean_closure_set(v___f_372_, 5, v_k_365_);
lean_closure_set(v___f_372_, 6, v_inst_366_);
lean_closure_set(v___f_372_, 7, v_toBind_367_);
v___x_373_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_374_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_368_, v_inst_369_, v___x_373_, v_eTy_370_, v___f_372_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object* v___x_375_, lean_object* v_resTy_376_, lean_object* v_c_377_, lean_object* v_dec_378_, lean_object* v_k_379_, lean_object* v_inst_380_, lean_object* v_toBind_381_, lean_object* v_inst_382_, lean_object* v_inst_383_, lean_object* v_tTy_384_, lean_object* v_eTy_385_){
_start:
{
lean_object* v___f_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_inc_ref(v_inst_383_);
lean_inc_ref(v_inst_382_);
v___f_386_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8), 11, 10);
lean_closure_set(v___f_386_, 0, v___x_375_);
lean_closure_set(v___f_386_, 1, v_resTy_376_);
lean_closure_set(v___f_386_, 2, v_c_377_);
lean_closure_set(v___f_386_, 3, v_dec_378_);
lean_closure_set(v___f_386_, 4, v_k_379_);
lean_closure_set(v___f_386_, 5, v_inst_380_);
lean_closure_set(v___f_386_, 6, v_toBind_381_);
lean_closure_set(v___f_386_, 7, v_inst_382_);
lean_closure_set(v___f_386_, 8, v_inst_383_);
lean_closure_set(v___f_386_, 9, v_eTy_385_);
v___x_387_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_388_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_382_, v_inst_383_, v___x_387_, v_tTy_384_, v___f_386_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object* v___x_389_, lean_object* v_resTy_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_mkArrow(v___x_389_, v_resTy_390_, v___y_393_, v___y_394_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object* v___x_397_, lean_object* v_resTy_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(v___x_397_, v_resTy_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object* v___x_405_, lean_object* v_resTy_406_, lean_object* v_c_407_, lean_object* v_dec_408_, lean_object* v_k_409_, lean_object* v_inst_410_, lean_object* v_toBind_411_, lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_tTy_414_){
_start:
{
lean_object* v___f_415_; lean_object* v___x_416_; lean_object* v___f_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_inc(v_toBind_411_);
lean_inc(v_inst_410_);
lean_inc_ref(v_c_407_);
lean_inc_ref(v_resTy_406_);
v___f_415_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9), 11, 10);
lean_closure_set(v___f_415_, 0, v___x_405_);
lean_closure_set(v___f_415_, 1, v_resTy_406_);
lean_closure_set(v___f_415_, 2, v_c_407_);
lean_closure_set(v___f_415_, 3, v_dec_408_);
lean_closure_set(v___f_415_, 4, v_k_409_);
lean_closure_set(v___f_415_, 5, v_inst_410_);
lean_closure_set(v___f_415_, 6, v_toBind_411_);
lean_closure_set(v___f_415_, 7, v_inst_412_);
lean_closure_set(v___f_415_, 8, v_inst_413_);
lean_closure_set(v___f_415_, 9, v_tTy_414_);
v___x_416_ = l_Lean_mkNot(v_c_407_);
v___f_417_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed), 7, 2);
lean_closure_set(v___f_417_, 0, v___x_416_);
lean_closure_set(v___f_417_, 1, v_resTy_406_);
v___x_418_ = lean_apply_2(v_inst_410_, lean_box(0), v___f_417_);
v___x_419_ = lean_apply_4(v_toBind_411_, lean_box(0), lean_box(0), v___x_418_, v___f_415_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object* v___x_420_, lean_object* v_resTy_421_, lean_object* v_c_422_, lean_object* v_k_423_, lean_object* v_inst_424_, lean_object* v_toBind_425_, lean_object* v_inst_426_, lean_object* v_inst_427_, lean_object* v___f_428_, lean_object* v_dec_429_){
_start:
{
lean_object* v___f_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
lean_inc(v_toBind_425_);
lean_inc(v_inst_424_);
v___f_430_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11), 10, 9);
lean_closure_set(v___f_430_, 0, v___x_420_);
lean_closure_set(v___f_430_, 1, v_resTy_421_);
lean_closure_set(v___f_430_, 2, v_c_422_);
lean_closure_set(v___f_430_, 3, v_dec_429_);
lean_closure_set(v___f_430_, 4, v_k_423_);
lean_closure_set(v___f_430_, 5, v_inst_424_);
lean_closure_set(v___f_430_, 6, v_toBind_425_);
lean_closure_set(v___f_430_, 7, v_inst_426_);
lean_closure_set(v___f_430_, 8, v_inst_427_);
v___x_431_ = lean_apply_2(v_inst_424_, lean_box(0), v___f_428_);
v___x_432_ = lean_apply_4(v_toBind_425_, lean_box(0), lean_box(0), v___x_431_, v___f_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object* v_resTy_433_, lean_object* v_k_434_, lean_object* v_inst_435_, lean_object* v_toBind_436_, lean_object* v_inst_437_, lean_object* v_inst_438_, lean_object* v_c_439_){
_start:
{
lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___f_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_inc_ref(v_resTy_433_);
lean_inc_ref_n(v_c_439_, 2);
v___f_440_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed), 7, 2);
lean_closure_set(v___f_440_, 0, v_c_439_);
lean_closure_set(v___f_440_, 1, v_resTy_433_);
v___x_441_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_442_ = lean_box(0);
lean_inc_ref(v_inst_438_);
lean_inc_ref(v_inst_437_);
v___f_443_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12), 10, 9);
lean_closure_set(v___f_443_, 0, v___x_442_);
lean_closure_set(v___f_443_, 1, v_resTy_433_);
lean_closure_set(v___f_443_, 2, v_c_439_);
lean_closure_set(v___f_443_, 3, v_k_434_);
lean_closure_set(v___f_443_, 4, v_inst_435_);
lean_closure_set(v___f_443_, 5, v_toBind_436_);
lean_closure_set(v___f_443_, 6, v_inst_437_);
lean_closure_set(v___f_443_, 7, v_inst_438_);
lean_closure_set(v___f_443_, 8, v___f_440_);
v___x_444_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_445_ = l_Lean_Expr_app___override(v___x_444_, v_c_439_);
v___x_446_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_437_, v_inst_438_, v___x_441_, v___x_445_, v___f_443_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object* v___x_450_, lean_object* v_resTy_451_, lean_object* v_c_452_, lean_object* v_t_453_, lean_object* v_e_454_, lean_object* v_k_455_, lean_object* v_u_456_){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_457_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v_u_456_);
lean_ctor_set(v___x_458_, 1, v___x_450_);
v___x_459_ = l_Lean_mkConst(v___x_457_, v___x_458_);
lean_inc_ref(v_e_454_);
lean_inc_ref(v_t_453_);
lean_inc_ref(v_c_452_);
v___x_460_ = l_Lean_mkApp4(v___x_459_, v_resTy_451_, v_c_452_, v_t_453_, v_e_454_);
v___x_461_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
v___x_462_ = lean_unsigned_to_nat(3u);
v___x_463_ = lean_mk_empty_array_with_capacity(v___x_462_);
v___x_464_ = lean_array_push(v___x_463_, v_c_452_);
v___x_465_ = lean_array_push(v___x_464_, v_t_453_);
v___x_466_ = lean_array_push(v___x_465_, v_e_454_);
v___x_467_ = lean_apply_2(v_k_455_, v___x_461_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object* v___x_468_, lean_object* v_resTy_469_, lean_object* v_c_470_, lean_object* v_t_471_, lean_object* v_k_472_, lean_object* v_inst_473_, lean_object* v_toBind_474_, lean_object* v_e_475_){
_start:
{
lean_object* v___f_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
lean_inc_ref(v_resTy_469_);
v___f_476_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14), 7, 6);
lean_closure_set(v___f_476_, 0, v___x_468_);
lean_closure_set(v___f_476_, 1, v_resTy_469_);
lean_closure_set(v___f_476_, 2, v_c_470_);
lean_closure_set(v___f_476_, 3, v_t_471_);
lean_closure_set(v___f_476_, 4, v_e_475_);
lean_closure_set(v___f_476_, 5, v_k_472_);
v___x_477_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_477_, 0, v_resTy_469_);
v___x_478_ = lean_apply_2(v_inst_473_, lean_box(0), v___x_477_);
v___x_479_ = lean_apply_4(v_toBind_474_, lean_box(0), lean_box(0), v___x_478_, v___f_476_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object* v___x_480_, lean_object* v_resTy_481_, lean_object* v_c_482_, lean_object* v_k_483_, lean_object* v_inst_484_, lean_object* v_toBind_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_t_488_){
_start:
{
lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
lean_inc_ref(v_resTy_481_);
v___f_489_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15), 8, 7);
lean_closure_set(v___f_489_, 0, v___x_480_);
lean_closure_set(v___f_489_, 1, v_resTy_481_);
lean_closure_set(v___f_489_, 2, v_c_482_);
lean_closure_set(v___f_489_, 3, v_t_488_);
lean_closure_set(v___f_489_, 4, v_k_483_);
lean_closure_set(v___f_489_, 5, v_inst_484_);
lean_closure_set(v___f_489_, 6, v_toBind_485_);
v___x_490_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_491_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_486_, v_inst_487_, v___x_490_, v_resTy_481_, v___f_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object* v___x_492_, lean_object* v_resTy_493_, lean_object* v_k_494_, lean_object* v_inst_495_, lean_object* v_toBind_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_c_499_){
_start:
{
lean_object* v___f_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_inc_ref(v_inst_498_);
lean_inc_ref(v_inst_497_);
lean_inc_ref(v_resTy_493_);
v___f_500_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16), 9, 8);
lean_closure_set(v___f_500_, 0, v___x_492_);
lean_closure_set(v___f_500_, 1, v_resTy_493_);
lean_closure_set(v___f_500_, 2, v_c_499_);
lean_closure_set(v___f_500_, 3, v_k_494_);
lean_closure_set(v___f_500_, 4, v_inst_495_);
lean_closure_set(v___f_500_, 5, v_toBind_496_);
lean_closure_set(v___f_500_, 6, v_inst_497_);
lean_closure_set(v___f_500_, 7, v_inst_498_);
v___x_501_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_502_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_497_, v_inst_498_, v___x_501_, v_resTy_493_, v___f_500_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object* v_resTy_503_, lean_object* v_motiveArgs_504_, lean_object* v_x_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
uint8_t v___x_511_; uint8_t v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; 
v___x_511_ = 0;
v___x_512_ = 1;
v___x_513_ = 1;
v___x_514_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_504_, v_resTy_503_, v___x_511_, v___x_512_, v___x_511_, v___x_512_, v___x_513_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed(lean_object* v_resTy_515_, lean_object* v_motiveArgs_516_, lean_object* v_x_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(v_resTy_515_, v_motiveArgs_516_, v_x_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec_ref(v_x_517_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object* v_i_527_, lean_object* v_a_528_, lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_530_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1));
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_i_527_, v___x_531_);
v___x_533_ = lean_name_append_index_after(v___x_530_, v___x_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v_a_528_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed(lean_object* v_i_535_, lean_object* v_a_536_, lean_object* v_x_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(v_i_535_, v_a_536_, v_x_537_);
lean_dec(v_i_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object* v_i_539_, lean_object* v___x_540_, lean_object* v_discrs_541_, lean_object* v_prior_542_, lean_object* v_next_543_, lean_object* v_acc_544_, lean_object* v_h_545_, lean_object* v_G_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_a_553_; uint8_t v___x_557_; 
v___x_557_ = lean_nat_dec_lt(v_next_543_, v_i_539_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; 
lean_dec_ref(v_G_546_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v_acc_544_);
return v___x_558_;
}
else
{
lean_object* v___x_559_; uint8_t v___x_560_; 
v___x_559_ = lean_array_get_borrowed(v___x_540_, v_discrs_541_, v_next_543_);
v___x_560_ = l_Lean_Expr_isFVar(v___x_559_);
if (v___x_560_ == 0)
{
v_a_553_ = v_acc_544_;
goto v___jp_552_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_array_get_borrowed(v___x_540_, v_prior_542_, v_next_543_);
lean_inc(v___x_559_);
v___x_562_ = l_Lean_Expr_replaceFVar(v_acc_544_, v___x_559_, v___x_561_);
lean_dec_ref(v_acc_544_);
v_a_553_ = v___x_562_;
goto v___jp_552_;
}
}
v___jp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = lean_nat_add(v_next_543_, v___x_554_);
lean_inc(v___y_550_);
lean_inc_ref(v___y_549_);
lean_inc(v___y_548_);
lean_inc_ref(v___y_547_);
v___x_556_ = lean_apply_9(v_G_546_, v___x_555_, v_a_553_, lean_box(0), lean_box(0), v___y_547_, v___y_548_, v___y_549_, v___y_550_, lean_box(0));
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed(lean_object* v_i_563_, lean_object* v___x_564_, lean_object* v_discrs_565_, lean_object* v_prior_566_, lean_object* v_next_567_, lean_object* v_acc_568_, lean_object* v_h_569_, lean_object* v_G_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(v_i_563_, v___x_564_, v_discrs_565_, v_prior_566_, v_next_567_, v_acc_568_, v_h_569_, v_G_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v_next_567_);
lean_dec_ref(v_prior_566_);
lean_dec_ref(v_discrs_565_);
lean_dec_ref(v___x_564_);
lean_dec(v_i_563_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object* v_a_577_, lean_object* v___f_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v___x_584_; 
lean_inc(v___y_582_);
lean_inc_ref(v___y_581_);
lean_inc(v___y_580_);
lean_inc_ref(v___y_579_);
v___x_584_ = lean_infer_type(v_a_577_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v___x_2431__overap_587_; lean_object* v___x_588_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = lean_unsigned_to_nat(0u);
v___x_2431__overap_587_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_578_, v___x_586_, v_a_585_, lean_box(0));
v___x_588_ = lean_apply_5(v___x_2431__overap_587_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, lean_box(0));
return v___x_588_;
}
else
{
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___f_578_);
return v___x_584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed(lean_object* v_a_589_, lean_object* v___f_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(v_a_589_, v___f_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object* v_i_597_, lean_object* v___x_598_, lean_object* v_discrs_599_, lean_object* v_a_600_, lean_object* v_inst_601_, lean_object* v_prior_602_){
_start:
{
lean_object* v___f_603_; lean_object* v___f_604_; lean_object* v___x_605_; 
v___f_603_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed), 13, 4);
lean_closure_set(v___f_603_, 0, v_i_597_);
lean_closure_set(v___f_603_, 1, v___x_598_);
lean_closure_set(v___f_603_, 2, v_discrs_599_);
lean_closure_set(v___f_603_, 3, v_prior_602_);
v___f_604_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed), 7, 2);
lean_closure_set(v___f_604_, 0, v_a_600_);
lean_closure_set(v___f_604_, 1, v___f_603_);
v___x_605_ = lean_apply_2(v_inst_601_, lean_box(0), v___f_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object* v___x_609_, lean_object* v_discrs_610_, lean_object* v_inst_611_, lean_object* v_i_612_, lean_object* v_a_613_, lean_object* v_x_614_){
_start:
{
lean_object* v___f_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_inc(v_i_612_);
v___f_615_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22), 6, 5);
lean_closure_set(v___f_615_, 0, v_i_612_);
lean_closure_set(v___f_615_, 1, v___x_609_);
lean_closure_set(v___f_615_, 2, v_discrs_610_);
lean_closure_set(v___f_615_, 3, v_a_613_);
lean_closure_set(v___f_615_, 4, v_inst_611_);
v___x_616_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_add(v_i_612_, v___x_617_);
lean_dec(v_i_612_);
v___x_619_ = lean_name_append_index_after(v___x_616_, v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___f_615_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object* v_toMatcherInfo_623_, lean_object* v_matcherName_624_, lean_object* v_matcherLevels_625_, lean_object* v_params_626_, lean_object* v_motive_627_, lean_object* v_discrs_628_, lean_object* v_alts_629_, lean_object* v_k_630_, lean_object* v_____do__lift_631_){
_start:
{
lean_object* v___x_632_; lean_object* v_abstractMatcherApp_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_632_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
lean_inc_ref(v_discrs_628_);
v_abstractMatcherApp_633_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_abstractMatcherApp_633_, 0, v_toMatcherInfo_623_);
lean_ctor_set(v_abstractMatcherApp_633_, 1, v_matcherName_624_);
lean_ctor_set(v_abstractMatcherApp_633_, 2, v_matcherLevels_625_);
lean_ctor_set(v_abstractMatcherApp_633_, 3, v_params_626_);
lean_ctor_set(v_abstractMatcherApp_633_, 4, v_motive_627_);
lean_ctor_set(v_abstractMatcherApp_633_, 5, v_discrs_628_);
lean_ctor_set(v_abstractMatcherApp_633_, 6, v_____do__lift_631_);
lean_ctor_set(v_abstractMatcherApp_633_, 7, v___x_632_);
v___x_634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_634_, 0, v_abstractMatcherApp_633_);
v___x_635_ = l_Array_append___redArg(v_discrs_628_, v_alts_629_);
v___x_636_ = lean_apply_2(v_k_630_, v___x_634_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object* v_toMatcherInfo_637_, lean_object* v_matcherName_638_, lean_object* v_matcherLevels_639_, lean_object* v_params_640_, lean_object* v_motive_641_, lean_object* v_discrs_642_, lean_object* v_alts_643_, lean_object* v_k_644_, lean_object* v_____do__lift_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(v_toMatcherInfo_637_, v_matcherName_638_, v_matcherLevels_639_, v_params_640_, v_motive_641_, v_discrs_642_, v_alts_643_, v_k_644_, v_____do__lift_645_);
lean_dec_ref(v_alts_643_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object* v_toMatcherInfo_648_, lean_object* v_matcherName_649_, lean_object* v_matcherLevels_650_, lean_object* v_params_651_, lean_object* v_motive_652_, lean_object* v_discrs_653_, lean_object* v_k_654_, lean_object* v___x_655_, lean_object* v_inst_656_, lean_object* v_toBind_657_, lean_object* v_alts_658_){
_start:
{
lean_object* v___f_659_; lean_object* v___x_660_; size_t v_sz_661_; size_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
lean_inc_ref(v_alts_658_);
v___f_659_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed), 9, 8);
lean_closure_set(v___f_659_, 0, v_toMatcherInfo_648_);
lean_closure_set(v___f_659_, 1, v_matcherName_649_);
lean_closure_set(v___f_659_, 2, v_matcherLevels_650_);
lean_closure_set(v___f_659_, 3, v_params_651_);
lean_closure_set(v___f_659_, 4, v_motive_652_);
lean_closure_set(v___f_659_, 5, v_discrs_653_);
lean_closure_set(v___f_659_, 6, v_alts_658_);
lean_closure_set(v___f_659_, 7, v_k_654_);
v___x_660_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0));
v_sz_661_ = lean_array_size(v_alts_658_);
v___x_662_ = ((size_t)0ULL);
v___x_663_ = l_unsafeCast___redArg(v_alts_658_);
lean_dec_ref(v_alts_658_);
v___x_664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_655_, v___x_660_, v_sz_661_, v___x_662_, v___x_663_);
v___x_665_ = l_unsafeCast___redArg(v___x_664_);
lean_dec(v___x_664_);
v___x_666_ = lean_apply_2(v_inst_656_, lean_box(0), v___x_665_);
v___x_667_ = lean_apply_4(v_toBind_657_, lean_box(0), lean_box(0), v___x_666_, v___f_659_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object* v___f_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v___f_690_, lean_object* v_origAltTypes_691_){
_start:
{
lean_object* v___x_692_; size_t v_sz_693_; size_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v_altNamesTypes_697_; uint8_t v___x_698_; lean_object* v___x_699_; 
v___x_692_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_693_ = lean_array_size(v_origAltTypes_691_);
v___x_694_ = ((size_t)0ULL);
v___x_695_ = l_unsafeCast___redArg(v_origAltTypes_691_);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_692_, v_origAltTypes_691_, v___f_687_, v_sz_693_, v___x_694_, v___x_695_);
v_altNamesTypes_697_ = l_unsafeCast___redArg(v___x_696_);
lean_dec(v___x_696_);
v___x_698_ = 0;
v___x_699_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_688_, v_inst_689_, v_altNamesTypes_697_, v___f_690_, v___x_698_);
lean_dec(v_altNamesTypes_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed(lean_object* v___f_700_, lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v___f_703_, lean_object* v_origAltTypes_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(v___f_700_, v_inst_701_, v_inst_702_, v___f_703_, v_origAltTypes_704_);
lean_dec_ref(v_origAltTypes_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object* v_toMatcherInfo_706_, lean_object* v_matcherName_707_, lean_object* v_params_708_, lean_object* v_motive_709_, lean_object* v_discrs_710_, lean_object* v_k_711_, lean_object* v___x_712_, lean_object* v_inst_713_, lean_object* v_toBind_714_, lean_object* v___f_715_, lean_object* v_inst_716_, lean_object* v_inst_717_, lean_object* v_alts_718_, lean_object* v_matcherLevels_719_){
_start:
{
lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_matcherPartial_724_; lean_object* v_matcherPartial_725_; lean_object* v_matcherPartial_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
lean_inc(v_toBind_714_);
lean_inc(v_inst_713_);
lean_inc_ref(v_discrs_710_);
lean_inc_ref(v_motive_709_);
lean_inc_ref(v_params_708_);
lean_inc_ref(v_matcherLevels_719_);
lean_inc(v_matcherName_707_);
v___f_720_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25), 11, 10);
lean_closure_set(v___f_720_, 0, v_toMatcherInfo_706_);
lean_closure_set(v___f_720_, 1, v_matcherName_707_);
lean_closure_set(v___f_720_, 2, v_matcherLevels_719_);
lean_closure_set(v___f_720_, 3, v_params_708_);
lean_closure_set(v___f_720_, 4, v_motive_709_);
lean_closure_set(v___f_720_, 5, v_discrs_710_);
lean_closure_set(v___f_720_, 6, v_k_711_);
lean_closure_set(v___f_720_, 7, v___x_712_);
lean_closure_set(v___f_720_, 8, v_inst_713_);
lean_closure_set(v___f_720_, 9, v_toBind_714_);
v___f_721_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed), 5, 4);
lean_closure_set(v___f_721_, 0, v___f_715_);
lean_closure_set(v___f_721_, 1, v_inst_716_);
lean_closure_set(v___f_721_, 2, v_inst_717_);
lean_closure_set(v___f_721_, 3, v___f_720_);
v___x_722_ = lean_array_to_list(v_matcherLevels_719_);
v___x_723_ = l_Lean_mkConst(v_matcherName_707_, v___x_722_);
v_matcherPartial_724_ = l_Lean_mkAppN(v___x_723_, v_params_708_);
lean_dec_ref(v_params_708_);
v_matcherPartial_725_ = l_Lean_Expr_app___override(v_matcherPartial_724_, v_motive_709_);
v_matcherPartial_726_ = l_Lean_mkAppN(v_matcherPartial_725_, v_discrs_710_);
lean_dec_ref(v_discrs_710_);
v___x_727_ = lean_array_get_size(v_alts_718_);
v___x_728_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_728_, 0, v___x_727_);
lean_closure_set(v___x_728_, 1, v_matcherPartial_726_);
v___x_729_ = lean_apply_2(v_inst_713_, lean_box(0), v___x_728_);
v___x_730_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_729_, v___f_721_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object* v_toMatcherInfo_731_, lean_object* v_matcherName_732_, lean_object* v_params_733_, lean_object* v_motive_734_, lean_object* v_discrs_735_, lean_object* v_k_736_, lean_object* v___x_737_, lean_object* v_inst_738_, lean_object* v_toBind_739_, lean_object* v___f_740_, lean_object* v_inst_741_, lean_object* v_inst_742_, lean_object* v_alts_743_, lean_object* v_matcherLevels_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(v_toMatcherInfo_731_, v_matcherName_732_, v_params_733_, v_motive_734_, v_discrs_735_, v_k_736_, v___x_737_, v_inst_738_, v_toBind_739_, v___f_740_, v_inst_741_, v_inst_742_, v_alts_743_, v_matcherLevels_744_);
lean_dec_ref(v_alts_743_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object* v___f_746_, lean_object* v_matcherLevels_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = lean_apply_1(v___f_746_, v_matcherLevels_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object* v_matcherLevels_749_, lean_object* v_val_750_, lean_object* v_toPure_751_, lean_object* v_toBind_752_, lean_object* v___f_753_, lean_object* v_uElim_754_){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_755_ = lean_array_set(v_matcherLevels_749_, v_val_750_, v_uElim_754_);
v___x_756_ = lean_apply_2(v_toPure_751_, lean_box(0), v___x_755_);
v___x_757_ = lean_apply_4(v_toBind_752_, lean_box(0), lean_box(0), v___x_756_, v___f_753_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object* v_matcherLevels_758_, lean_object* v_val_759_, lean_object* v_toPure_760_, lean_object* v_toBind_761_, lean_object* v___f_762_, lean_object* v_uElim_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(v_matcherLevels_758_, v_val_759_, v_toPure_760_, v_toBind_761_, v___f_762_, v_uElim_763_);
lean_dec(v_val_759_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object* v_toMatcherInfo_765_, lean_object* v_matcherName_766_, lean_object* v_params_767_, lean_object* v_discrs_768_, lean_object* v_k_769_, lean_object* v___x_770_, lean_object* v_inst_771_, lean_object* v_toBind_772_, lean_object* v___f_773_, lean_object* v_inst_774_, lean_object* v_inst_775_, lean_object* v_alts_776_, lean_object* v_toPure_777_, lean_object* v_matcherLevels_778_, lean_object* v_resTy_779_, lean_object* v_motive_780_){
_start:
{
lean_object* v_uElimPos_x3f_781_; lean_object* v___f_782_; 
v_uElimPos_x3f_781_ = lean_ctor_get(v_toMatcherInfo_765_, 3);
lean_inc(v_uElimPos_x3f_781_);
lean_inc(v_toBind_772_);
lean_inc(v_inst_771_);
v___f_782_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed), 14, 13);
lean_closure_set(v___f_782_, 0, v_toMatcherInfo_765_);
lean_closure_set(v___f_782_, 1, v_matcherName_766_);
lean_closure_set(v___f_782_, 2, v_params_767_);
lean_closure_set(v___f_782_, 3, v_motive_780_);
lean_closure_set(v___f_782_, 4, v_discrs_768_);
lean_closure_set(v___f_782_, 5, v_k_769_);
lean_closure_set(v___f_782_, 6, v___x_770_);
lean_closure_set(v___f_782_, 7, v_inst_771_);
lean_closure_set(v___f_782_, 8, v_toBind_772_);
lean_closure_set(v___f_782_, 9, v___f_773_);
lean_closure_set(v___f_782_, 10, v_inst_774_);
lean_closure_set(v___f_782_, 11, v_inst_775_);
lean_closure_set(v___f_782_, 12, v_alts_776_);
if (lean_obj_tag(v_uElimPos_x3f_781_) == 0)
{
lean_object* v___f_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
lean_dec_ref(v_resTy_779_);
lean_dec(v_inst_771_);
v___f_783_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 2, 1);
lean_closure_set(v___f_783_, 0, v___f_782_);
v___x_784_ = lean_apply_2(v_toPure_777_, lean_box(0), v_matcherLevels_778_);
v___x_785_ = lean_apply_4(v_toBind_772_, lean_box(0), lean_box(0), v___x_784_, v___f_783_);
return v___x_785_;
}
else
{
lean_object* v_val_786_; lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_val_786_ = lean_ctor_get(v_uElimPos_x3f_781_, 0);
lean_inc(v_val_786_);
lean_dec_ref_known(v_uElimPos_x3f_781_, 1);
v___f_787_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 2, 1);
lean_closure_set(v___f_787_, 0, v___f_782_);
lean_inc(v_toBind_772_);
v___f_788_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed), 6, 5);
lean_closure_set(v___f_788_, 0, v_matcherLevels_778_);
lean_closure_set(v___f_788_, 1, v_val_786_);
lean_closure_set(v___f_788_, 2, v_toPure_777_);
lean_closure_set(v___f_788_, 3, v_toBind_772_);
lean_closure_set(v___f_788_, 4, v___f_787_);
v___x_789_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_789_, 0, v_resTy_779_);
v___x_790_ = lean_apply_2(v_inst_771_, lean_box(0), v___x_789_);
v___x_791_ = lean_apply_4(v_toBind_772_, lean_box(0), lean_box(0), v___x_790_, v___f_788_);
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object* v_toMatcherInfo_792_, lean_object* v_matcherName_793_, lean_object* v_params_794_, lean_object* v_k_795_, lean_object* v___x_796_, lean_object* v_inst_797_, lean_object* v_toBind_798_, lean_object* v___f_799_, lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_alts_802_, lean_object* v_toPure_803_, lean_object* v_matcherLevels_804_, lean_object* v_resTy_805_, lean_object* v___x_806_, lean_object* v_motive_807_, lean_object* v___f_808_, lean_object* v_discrs_809_){
_start:
{
lean_object* v___f_810_; uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_inc(v_toBind_798_);
lean_inc(v_inst_797_);
lean_inc_ref(v___x_796_);
v___f_810_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29), 16, 15);
lean_closure_set(v___f_810_, 0, v_toMatcherInfo_792_);
lean_closure_set(v___f_810_, 1, v_matcherName_793_);
lean_closure_set(v___f_810_, 2, v_params_794_);
lean_closure_set(v___f_810_, 3, v_discrs_809_);
lean_closure_set(v___f_810_, 4, v_k_795_);
lean_closure_set(v___f_810_, 5, v___x_796_);
lean_closure_set(v___f_810_, 6, v_inst_797_);
lean_closure_set(v___f_810_, 7, v_toBind_798_);
lean_closure_set(v___f_810_, 8, v___f_799_);
lean_closure_set(v___f_810_, 9, v_inst_800_);
lean_closure_set(v___f_810_, 10, v_inst_801_);
lean_closure_set(v___f_810_, 11, v_alts_802_);
lean_closure_set(v___f_810_, 12, v_toPure_803_);
lean_closure_set(v___f_810_, 13, v_matcherLevels_804_);
lean_closure_set(v___f_810_, 14, v_resTy_805_);
v___x_811_ = 0;
v___x_812_ = l_Lean_Meta_lambdaTelescope___redArg(v___x_806_, v___x_796_, v_motive_807_, v___f_808_, v___x_811_);
v___x_813_ = lean_apply_2(v_inst_797_, lean_box(0), v___x_812_);
v___x_814_ = lean_apply_4(v_toBind_798_, lean_box(0), lean_box(0), v___x_813_, v___f_810_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_815_ = _args[0];
lean_object* v_matcherName_816_ = _args[1];
lean_object* v_params_817_ = _args[2];
lean_object* v_k_818_ = _args[3];
lean_object* v___x_819_ = _args[4];
lean_object* v_inst_820_ = _args[5];
lean_object* v_toBind_821_ = _args[6];
lean_object* v___f_822_ = _args[7];
lean_object* v_inst_823_ = _args[8];
lean_object* v_inst_824_ = _args[9];
lean_object* v_alts_825_ = _args[10];
lean_object* v_toPure_826_ = _args[11];
lean_object* v_matcherLevels_827_ = _args[12];
lean_object* v_resTy_828_ = _args[13];
lean_object* v___x_829_ = _args[14];
lean_object* v_motive_830_ = _args[15];
lean_object* v___f_831_ = _args[16];
lean_object* v_discrs_832_ = _args[17];
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(v_toMatcherInfo_815_, v_matcherName_816_, v_params_817_, v_k_818_, v___x_819_, v_inst_820_, v_toBind_821_, v___f_822_, v_inst_823_, v_inst_824_, v_alts_825_, v_toPure_826_, v_matcherLevels_827_, v_resTy_828_, v___x_829_, v_motive_830_, v___f_831_, v_discrs_832_);
return v_res_833_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0(void){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_instMonadEIO___redArg();
return v___x_834_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0);
v___x_836_ = l_StateRefT_x27_instMonad___redArg(v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = l_Lean_Level_ofNat(v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8);
v___x_847_ = l_Lean_mkSort(v___x_846_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_box(0);
v___x_852_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11));
v___x_853_ = l_Lean_mkConst(v___x_852_, v___x_851_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object* v_inst_855_, lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_info_858_, lean_object* v_resTy_859_, lean_object* v_k_860_){
_start:
{
lean_object* v___x_861_; lean_object* v_toApplicative_862_; lean_object* v_toFunctor_863_; lean_object* v_toSeq_864_; lean_object* v_toSeqLeft_865_; lean_object* v_toSeqRight_866_; lean_object* v___f_867_; lean_object* v___f_868_; lean_object* v___f_869_; lean_object* v___f_870_; lean_object* v___x_871_; lean_object* v___f_872_; lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_toApplicative_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_961_; 
v___x_861_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_862_ = lean_ctor_get(v___x_861_, 0);
v_toFunctor_863_ = lean_ctor_get(v_toApplicative_862_, 0);
v_toSeq_864_ = lean_ctor_get(v_toApplicative_862_, 2);
v_toSeqLeft_865_ = lean_ctor_get(v_toApplicative_862_, 3);
v_toSeqRight_866_ = lean_ctor_get(v_toApplicative_862_, 4);
v___f_867_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_868_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_863_, 2);
v___f_869_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_869_, 0, v_toFunctor_863_);
v___f_870_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_870_, 0, v_toFunctor_863_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___f_869_);
lean_ctor_set(v___x_871_, 1, v___f_870_);
lean_inc(v_toSeqRight_866_);
v___f_872_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_872_, 0, v_toSeqRight_866_);
lean_inc(v_toSeqLeft_865_);
v___f_873_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_873_, 0, v_toSeqLeft_865_);
lean_inc(v_toSeq_864_);
v___f_874_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_874_, 0, v_toSeq_864_);
v___x_875_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_875_, 0, v___x_871_);
lean_ctor_set(v___x_875_, 1, v___f_867_);
lean_ctor_set(v___x_875_, 2, v___f_874_);
lean_ctor_set(v___x_875_, 3, v___f_873_);
lean_ctor_set(v___x_875_, 4, v___f_872_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___f_868_);
v___x_877_ = l_StateRefT_x27_instMonad___redArg(v___x_876_);
v_toApplicative_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v___x_877_, 1);
lean_dec(v_unused_962_);
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_961_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_toApplicative_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_961_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v_toFunctor_882_; lean_object* v_toSeq_883_; lean_object* v_toSeqLeft_884_; lean_object* v_toSeqRight_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_959_; 
v_toFunctor_882_ = lean_ctor_get(v_toApplicative_878_, 0);
v_toSeq_883_ = lean_ctor_get(v_toApplicative_878_, 2);
v_toSeqLeft_884_ = lean_ctor_get(v_toApplicative_878_, 3);
v_toSeqRight_885_ = lean_ctor_get(v_toApplicative_878_, 4);
v_isSharedCheck_959_ = !lean_is_exclusive(v_toApplicative_878_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v_toApplicative_878_, 1);
lean_dec(v_unused_960_);
v___x_887_ = v_toApplicative_878_;
v_isShared_888_ = v_isSharedCheck_959_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_toSeqRight_885_);
lean_inc(v_toSeqLeft_884_);
lean_inc(v_toSeq_883_);
lean_inc(v_toFunctor_882_);
lean_dec(v_toApplicative_878_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_959_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___f_889_; lean_object* v___f_890_; lean_object* v___f_891_; lean_object* v___f_892_; lean_object* v___x_893_; lean_object* v___f_894_; lean_object* v___f_895_; lean_object* v___f_896_; lean_object* v___x_898_; 
v___f_889_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_890_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_882_);
v___f_891_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_891_, 0, v_toFunctor_882_);
v___f_892_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_892_, 0, v_toFunctor_882_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v___f_891_);
lean_ctor_set(v___x_893_, 1, v___f_892_);
v___f_894_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_894_, 0, v_toSeqRight_885_);
v___f_895_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_895_, 0, v_toSeqLeft_884_);
v___f_896_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_896_, 0, v_toSeq_883_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 4, v___f_894_);
lean_ctor_set(v___x_887_, 3, v___f_895_);
lean_ctor_set(v___x_887_, 2, v___f_896_);
lean_ctor_set(v___x_887_, 1, v___f_889_);
lean_ctor_set(v___x_887_, 0, v___x_893_);
v___x_898_ = v___x_887_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v___f_889_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v___f_896_);
lean_ctor_set(v_reuseFailAlloc_958_, 3, v___f_895_);
lean_ctor_set(v_reuseFailAlloc_958_, 4, v___f_894_);
v___x_898_ = v_reuseFailAlloc_958_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_900_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 1, v___f_890_);
lean_ctor_set(v___x_880_, 0, v___x_898_);
v___x_900_ = v___x_880_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v___f_890_);
v___x_900_ = v_reuseFailAlloc_957_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v_toApplicative_901_; lean_object* v_toFunctor_902_; lean_object* v_toSeq_903_; lean_object* v_toSeqLeft_904_; lean_object* v_toSeqRight_905_; lean_object* v___f_906_; lean_object* v___f_907_; lean_object* v___x_908_; lean_object* v___f_909_; lean_object* v___f_910_; lean_object* v___f_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_toApplicative_901_ = lean_ctor_get(v___x_861_, 0);
v_toFunctor_902_ = lean_ctor_get(v_toApplicative_901_, 0);
v_toSeq_903_ = lean_ctor_get(v_toApplicative_901_, 2);
v_toSeqLeft_904_ = lean_ctor_get(v_toApplicative_901_, 3);
v_toSeqRight_905_ = lean_ctor_get(v_toApplicative_901_, 4);
lean_inc_ref_n(v_toFunctor_902_, 2);
v___f_906_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_906_, 0, v_toFunctor_902_);
v___f_907_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_907_, 0, v_toFunctor_902_);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___f_906_);
lean_ctor_set(v___x_908_, 1, v___f_907_);
lean_inc(v_toSeqRight_905_);
v___f_909_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_909_, 0, v_toSeqRight_905_);
lean_inc(v_toSeqLeft_904_);
v___f_910_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_910_, 0, v_toSeqLeft_904_);
lean_inc(v_toSeq_903_);
v___f_911_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_911_, 0, v_toSeq_903_);
v___x_912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_912_, 0, v___x_908_);
lean_ctor_set(v___x_912_, 1, v___f_867_);
lean_ctor_set(v___x_912_, 2, v___f_911_);
lean_ctor_set(v___x_912_, 3, v___f_910_);
lean_ctor_set(v___x_912_, 4, v___f_909_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v___f_868_);
v___x_914_ = l_StateRefT_x27_instMonad___redArg(v___x_913_);
v___x_915_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_915_, 0, lean_box(0));
lean_closure_set(v___x_915_, 1, lean_box(0));
lean_closure_set(v___x_915_, 2, v___x_914_);
v___x_916_ = l_instMonadControlTOfPure___redArg(v___x_915_);
switch(lean_obj_tag(v_info_858_))
{
case 0:
{
lean_object* v_toBind_917_; lean_object* v___f_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec_ref_known(v_info_858_, 1);
lean_dec_ref(v___x_916_);
lean_dec_ref(v___x_900_);
v_toBind_917_ = lean_ctor_get(v_inst_857_, 1);
lean_inc_ref(v_inst_857_);
lean_inc_ref(v_inst_856_);
lean_inc(v_toBind_917_);
v___f_918_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4), 7, 6);
lean_closure_set(v___f_918_, 0, v_resTy_859_);
lean_closure_set(v___f_918_, 1, v_k_860_);
lean_closure_set(v___f_918_, 2, v_inst_855_);
lean_closure_set(v___f_918_, 3, v_toBind_917_);
lean_closure_set(v___f_918_, 4, v_inst_856_);
lean_closure_set(v___f_918_, 5, v_inst_857_);
v___x_919_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_920_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_921_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_856_, v_inst_857_, v___x_919_, v___x_920_, v___f_918_);
return v___x_921_;
}
case 1:
{
lean_object* v_toBind_922_; lean_object* v___f_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec_ref_known(v_info_858_, 1);
lean_dec_ref(v___x_916_);
lean_dec_ref(v___x_900_);
v_toBind_922_ = lean_ctor_get(v_inst_857_, 1);
lean_inc_ref(v_inst_857_);
lean_inc_ref(v_inst_856_);
lean_inc(v_toBind_922_);
v___f_923_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13), 7, 6);
lean_closure_set(v___f_923_, 0, v_resTy_859_);
lean_closure_set(v___f_923_, 1, v_k_860_);
lean_closure_set(v___f_923_, 2, v_inst_855_);
lean_closure_set(v___f_923_, 3, v_toBind_922_);
lean_closure_set(v___f_923_, 4, v_inst_856_);
lean_closure_set(v___f_923_, 5, v_inst_857_);
v___x_924_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_925_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_926_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_856_, v_inst_857_, v___x_924_, v___x_925_, v___f_923_);
return v___x_926_;
}
case 2:
{
lean_object* v_toBind_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___f_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec_ref_known(v_info_858_, 1);
lean_dec_ref(v___x_916_);
lean_dec_ref(v___x_900_);
v_toBind_927_ = lean_ctor_get(v_inst_857_, 1);
v___x_928_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_929_ = lean_box(0);
lean_inc_ref(v_inst_857_);
lean_inc_ref(v_inst_856_);
lean_inc(v_toBind_927_);
v___f_930_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17), 8, 7);
lean_closure_set(v___f_930_, 0, v___x_929_);
lean_closure_set(v___f_930_, 1, v_resTy_859_);
lean_closure_set(v___f_930_, 2, v_k_860_);
lean_closure_set(v___f_930_, 3, v_inst_855_);
lean_closure_set(v___f_930_, 4, v_toBind_927_);
lean_closure_set(v___f_930_, 5, v_inst_856_);
lean_closure_set(v___f_930_, 6, v_inst_857_);
v___x_931_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12);
v___x_932_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_856_, v_inst_857_, v___x_928_, v___x_931_, v___f_930_);
return v___x_932_;
}
default: 
{
lean_object* v_toApplicative_933_; lean_object* v_matcherApp_934_; lean_object* v_toBind_935_; lean_object* v_toPure_936_; lean_object* v_toMatcherInfo_937_; lean_object* v_matcherName_938_; lean_object* v_matcherLevels_939_; lean_object* v_params_940_; lean_object* v_motive_941_; lean_object* v_discrs_942_; lean_object* v_alts_943_; lean_object* v___f_944_; lean_object* v___f_945_; lean_object* v___x_946_; lean_object* v___f_947_; lean_object* v___f_948_; lean_object* v___x_949_; size_t v_sz_950_; size_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v_discrDecls_954_; uint8_t v___x_955_; lean_object* v___x_956_; 
v_toApplicative_933_ = lean_ctor_get(v_inst_857_, 0);
v_matcherApp_934_ = lean_ctor_get(v_info_858_, 0);
lean_inc_ref(v_matcherApp_934_);
lean_dec_ref_known(v_info_858_, 1);
v_toBind_935_ = lean_ctor_get(v_inst_857_, 1);
v_toPure_936_ = lean_ctor_get(v_toApplicative_933_, 1);
v_toMatcherInfo_937_ = lean_ctor_get(v_matcherApp_934_, 0);
lean_inc_ref(v_toMatcherInfo_937_);
v_matcherName_938_ = lean_ctor_get(v_matcherApp_934_, 1);
lean_inc(v_matcherName_938_);
v_matcherLevels_939_ = lean_ctor_get(v_matcherApp_934_, 2);
lean_inc_ref(v_matcherLevels_939_);
v_params_940_ = lean_ctor_get(v_matcherApp_934_, 3);
lean_inc_ref(v_params_940_);
v_motive_941_ = lean_ctor_get(v_matcherApp_934_, 4);
lean_inc_ref(v_motive_941_);
v_discrs_942_ = lean_ctor_get(v_matcherApp_934_, 5);
lean_inc_ref_n(v_discrs_942_, 2);
v_alts_943_ = lean_ctor_get(v_matcherApp_934_, 6);
lean_inc_ref(v_alts_943_);
lean_dec_ref(v_matcherApp_934_);
lean_inc_ref(v_resTy_859_);
v___f_944_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed), 8, 1);
lean_closure_set(v___f_944_, 0, v_resTy_859_);
v___f_945_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13));
v___x_946_ = l_Lean_instInhabitedExpr;
lean_inc(v_inst_855_);
v___f_947_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23), 6, 3);
lean_closure_set(v___f_947_, 0, v___x_946_);
lean_closure_set(v___f_947_, 1, v_discrs_942_);
lean_closure_set(v___f_947_, 2, v_inst_855_);
lean_inc(v_toPure_936_);
lean_inc_ref(v_inst_857_);
lean_inc_ref(v_inst_856_);
lean_inc(v_toBind_935_);
v___f_948_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_948_, 0, v_toMatcherInfo_937_);
lean_closure_set(v___f_948_, 1, v_matcherName_938_);
lean_closure_set(v___f_948_, 2, v_params_940_);
lean_closure_set(v___f_948_, 3, v_k_860_);
lean_closure_set(v___f_948_, 4, v___x_900_);
lean_closure_set(v___f_948_, 5, v_inst_855_);
lean_closure_set(v___f_948_, 6, v_toBind_935_);
lean_closure_set(v___f_948_, 7, v___f_945_);
lean_closure_set(v___f_948_, 8, v_inst_856_);
lean_closure_set(v___f_948_, 9, v_inst_857_);
lean_closure_set(v___f_948_, 10, v_alts_943_);
lean_closure_set(v___f_948_, 11, v_toPure_936_);
lean_closure_set(v___f_948_, 12, v_matcherLevels_939_);
lean_closure_set(v___f_948_, 13, v_resTy_859_);
lean_closure_set(v___f_948_, 14, v___x_916_);
lean_closure_set(v___f_948_, 15, v_motive_941_);
lean_closure_set(v___f_948_, 16, v___f_944_);
v___x_949_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_950_ = lean_array_size(v_discrs_942_);
v___x_951_ = ((size_t)0ULL);
v___x_952_ = l_unsafeCast___redArg(v_discrs_942_);
v___x_953_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_949_, v_discrs_942_, v___f_947_, v_sz_950_, v___x_951_, v___x_952_);
lean_dec_ref(v_discrs_942_);
v_discrDecls_954_ = l_unsafeCast___redArg(v___x_953_);
lean_dec(v___x_953_);
v___x_955_ = 0;
v___x_956_ = l_Lean_Meta_withLocalDeclsD___redArg(v_inst_856_, v_inst_857_, v_discrDecls_954_, v___f_948_, v___x_955_);
lean_dec(v_discrDecls_954_);
return v___x_956_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object* v_n_963_, lean_object* v_00_u03b1_964_, lean_object* v_inst_965_, lean_object* v_inst_966_, lean_object* v_inst_967_, lean_object* v_inst_968_, lean_object* v_info_969_, lean_object* v_resTy_970_, lean_object* v_k_971_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(v_inst_965_, v_inst_966_, v_inst_967_, v_info_969_, v_resTy_970_, v_k_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object* v_n_973_, lean_object* v_00_u03b1_974_, lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_inst_978_, lean_object* v_info_979_, lean_object* v_resTy_980_, lean_object* v_k_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(v_n_973_, v_00_u03b1_974_, v_inst_975_, v_inst_976_, v_inst_977_, v_inst_978_, v_info_979_, v_resTy_980_, v_k_981_);
lean_dec(v_inst_978_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object* v_u_983_, lean_object* v_resTy_984_, lean_object* v_c_985_, lean_object* v_h_986_, lean_object* v_t_987_, lean_object* v_toPure_988_, lean_object* v_e_989_){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_990_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_991_ = lean_box(0);
v___x_992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_992_, 0, v_u_983_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = l_Lean_mkConst(v___x_990_, v___x_992_);
v___x_994_ = l_Lean_mkApp5(v___x_993_, v_resTy_984_, v_c_985_, v_h_986_, v_t_987_, v_e_989_);
v___x_995_ = lean_apply_2(v_toPure_988_, lean_box(0), v___x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object* v_u_999_, lean_object* v_resTy_1000_, lean_object* v_c_1001_, lean_object* v_h_1002_, lean_object* v_toPure_1003_, lean_object* v_onAlt_1004_, lean_object* v___x_1005_, lean_object* v___x_1006_, lean_object* v_toBind_1007_, lean_object* v_t_1008_){
_start:
{
lean_object* v___f_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_inc_ref(v_resTy_1000_);
v___f_1009_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1009_, 0, v_u_999_);
lean_closure_set(v___f_1009_, 1, v_resTy_1000_);
lean_closure_set(v___f_1009_, 2, v_c_1001_);
lean_closure_set(v___f_1009_, 3, v_h_1002_);
lean_closure_set(v___f_1009_, 4, v_t_1008_);
lean_closure_set(v___f_1009_, 5, v_toPure_1003_);
v___x_1010_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1011_ = lean_apply_4(v_onAlt_1004_, v___x_1010_, v_resTy_1000_, v___x_1005_, v___x_1006_);
v___x_1012_ = lean_apply_4(v_toBind_1007_, lean_box(0), lean_box(0), v___x_1011_, v___f_1009_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object* v___x_1013_, uint8_t v_useSplitter_1014_, lean_object* v_inst_1015_, lean_object* v_____do__lift_1016_){
_start:
{
uint8_t v___x_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1017_ = 0;
v___x_1018_ = 1;
v___x_1019_ = lean_box(v___x_1017_);
v___x_1020_ = lean_box(v_useSplitter_1014_);
v___x_1021_ = lean_box(v___x_1017_);
v___x_1022_ = lean_box(v_useSplitter_1014_);
v___x_1023_ = lean_box(v___x_1018_);
v___x_1024_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1024_, 0, v___x_1013_);
lean_closure_set(v___x_1024_, 1, v_____do__lift_1016_);
lean_closure_set(v___x_1024_, 2, v___x_1019_);
lean_closure_set(v___x_1024_, 3, v___x_1020_);
lean_closure_set(v___x_1024_, 4, v___x_1021_);
lean_closure_set(v___x_1024_, 5, v___x_1022_);
lean_closure_set(v___x_1024_, 6, v___x_1023_);
v___x_1025_ = lean_apply_2(v_inst_1015_, lean_box(0), v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object* v___x_1026_, lean_object* v_useSplitter_1027_, lean_object* v_inst_1028_, lean_object* v_____do__lift_1029_){
_start:
{
uint8_t v_useSplitter_boxed_1030_; lean_object* v_res_1031_; 
v_useSplitter_boxed_1030_ = lean_unbox(v_useSplitter_1027_);
v_res_1031_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(v___x_1026_, v_useSplitter_boxed_1030_, v_inst_1028_, v_____do__lift_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object* v___x_1035_, uint8_t v_useSplitter_1036_, lean_object* v_inst_1037_, lean_object* v_onAlt_1038_, lean_object* v_resTy_1039_, lean_object* v_toBind_1040_, lean_object* v_h_1041_){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1042_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1045_ = lean_mk_empty_array_with_capacity(v___x_1035_);
v___x_1046_ = lean_array_push(v___x_1045_, v_h_1041_);
v___x_1047_ = lean_box(v_useSplitter_1036_);
lean_inc_ref(v___x_1046_);
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1048_, 0, v___x_1046_);
lean_closure_set(v___f_1048_, 1, v___x_1047_);
lean_closure_set(v___f_1048_, 2, v_inst_1037_);
v___x_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1044_);
lean_ctor_set(v___x_1049_, 1, v___x_1046_);
lean_ctor_set(v___x_1049_, 2, v___x_1044_);
lean_ctor_set(v___x_1049_, 3, v___x_1044_);
lean_ctor_set(v___x_1049_, 4, v___x_1044_);
v___x_1050_ = lean_apply_4(v_onAlt_1038_, v___x_1042_, v_resTy_1039_, v___x_1043_, v___x_1049_);
v___x_1051_ = lean_apply_4(v_toBind_1040_, lean_box(0), lean_box(0), v___x_1050_, v___f_1048_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object* v___x_1052_, lean_object* v_useSplitter_1053_, lean_object* v_inst_1054_, lean_object* v_onAlt_1055_, lean_object* v_resTy_1056_, lean_object* v_toBind_1057_, lean_object* v_h_1058_){
_start:
{
uint8_t v_useSplitter_boxed_1059_; lean_object* v_res_1060_; 
v_useSplitter_boxed_1059_ = lean_unbox(v_useSplitter_1053_);
v_res_1060_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(v___x_1052_, v_useSplitter_boxed_1059_, v_inst_1054_, v_onAlt_1055_, v_resTy_1056_, v_toBind_1057_, v_h_1058_);
lean_dec(v___x_1052_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object* v___x_1061_, uint8_t v_useSplitter_1062_, lean_object* v_inst_1063_, lean_object* v_onAlt_1064_, lean_object* v_resTy_1065_, lean_object* v_toBind_1066_, lean_object* v_h_1067_){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___f_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1068_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1069_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1061_);
v___x_1071_ = lean_array_push(v___x_1070_, v_h_1067_);
v___x_1072_ = lean_box(v_useSplitter_1062_);
lean_inc_ref(v___x_1071_);
v___f_1073_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1073_, 0, v___x_1071_);
lean_closure_set(v___f_1073_, 1, v___x_1072_);
lean_closure_set(v___f_1073_, 2, v_inst_1063_);
v___x_1074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1069_);
lean_ctor_set(v___x_1074_, 1, v___x_1071_);
lean_ctor_set(v___x_1074_, 2, v___x_1069_);
lean_ctor_set(v___x_1074_, 3, v___x_1069_);
lean_ctor_set(v___x_1074_, 4, v___x_1069_);
v___x_1075_ = lean_apply_4(v_onAlt_1064_, v___x_1068_, v_resTy_1065_, v___x_1061_, v___x_1074_);
v___x_1076_ = lean_apply_4(v_toBind_1066_, lean_box(0), lean_box(0), v___x_1075_, v___f_1073_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object* v___x_1077_, lean_object* v_useSplitter_1078_, lean_object* v_inst_1079_, lean_object* v_onAlt_1080_, lean_object* v_resTy_1081_, lean_object* v_toBind_1082_, lean_object* v_h_1083_){
_start:
{
uint8_t v_useSplitter_boxed_1084_; lean_object* v_res_1085_; 
v_useSplitter_boxed_1084_ = lean_unbox(v_useSplitter_1078_);
v_res_1085_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(v___x_1077_, v_useSplitter_boxed_1084_, v_inst_1079_, v_onAlt_1080_, v_resTy_1081_, v_toBind_1082_, v_h_1083_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object* v_u_1086_, lean_object* v_resTy_1087_, lean_object* v_c_1088_, lean_object* v_h_1089_, lean_object* v_t_1090_, lean_object* v_toPure_1091_, lean_object* v_e_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1093_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_u_1086_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = l_Lean_mkConst(v___x_1093_, v___x_1095_);
v___x_1097_ = l_Lean_mkApp5(v___x_1096_, v_resTy_1087_, v_c_1088_, v_h_1089_, v_t_1090_, v_e_1092_);
v___x_1098_ = lean_apply_2(v_toPure_1091_, lean_box(0), v___x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object* v_u_1099_, lean_object* v_resTy_1100_, lean_object* v_c_1101_, lean_object* v_h_1102_, lean_object* v_toPure_1103_, lean_object* v_inst_1104_, lean_object* v_inst_1105_, lean_object* v_n_1106_, uint8_t v___x_1107_, lean_object* v___f_1108_, uint8_t v___x_1109_, lean_object* v_toBind_1110_, lean_object* v_t_1111_){
_start:
{
lean_object* v___f_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_inc_ref(v_c_1101_);
v___f_1112_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1112_, 0, v_u_1099_);
lean_closure_set(v___f_1112_, 1, v_resTy_1100_);
lean_closure_set(v___f_1112_, 2, v_c_1101_);
lean_closure_set(v___f_1112_, 3, v_h_1102_);
lean_closure_set(v___f_1112_, 4, v_t_1111_);
lean_closure_set(v___f_1112_, 5, v_toPure_1103_);
v___x_1113_ = l_Lean_mkNot(v_c_1101_);
v___x_1114_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1104_, v_inst_1105_, v_n_1106_, v___x_1107_, v___x_1113_, v___f_1108_, v___x_1109_);
v___x_1115_ = lean_apply_4(v_toBind_1110_, lean_box(0), lean_box(0), v___x_1114_, v___f_1112_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object* v_u_1116_, lean_object* v_resTy_1117_, lean_object* v_c_1118_, lean_object* v_h_1119_, lean_object* v_toPure_1120_, lean_object* v_inst_1121_, lean_object* v_inst_1122_, lean_object* v_n_1123_, lean_object* v___x_1124_, lean_object* v___f_1125_, lean_object* v___x_1126_, lean_object* v_toBind_1127_, lean_object* v_t_1128_){
_start:
{
uint8_t v___x_1674__boxed_1129_; uint8_t v___x_1676__boxed_1130_; lean_object* v_res_1131_; 
v___x_1674__boxed_1129_ = lean_unbox(v___x_1124_);
v___x_1676__boxed_1130_ = lean_unbox(v___x_1126_);
v_res_1131_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(v_u_1116_, v_resTy_1117_, v_c_1118_, v_h_1119_, v_toPure_1120_, v_inst_1121_, v_inst_1122_, v_n_1123_, v___x_1674__boxed_1129_, v___f_1125_, v___x_1676__boxed_1130_, v_toBind_1127_, v_t_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object* v_u_1132_, lean_object* v_resTy_1133_, lean_object* v_c_1134_, lean_object* v_h_1135_, lean_object* v_toPure_1136_, lean_object* v_inst_1137_, lean_object* v_inst_1138_, lean_object* v___f_1139_, lean_object* v_toBind_1140_, lean_object* v___f_1141_, lean_object* v_n_1142_){
_start:
{
uint8_t v___x_1143_; uint8_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___f_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1143_ = 0;
v___x_1144_ = 0;
v___x_1145_ = lean_box(v___x_1143_);
v___x_1146_ = lean_box(v___x_1144_);
lean_inc(v_toBind_1140_);
lean_inc(v_n_1142_);
lean_inc_ref(v_inst_1138_);
lean_inc_ref(v_inst_1137_);
lean_inc_ref(v_c_1134_);
v___f_1147_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1147_, 0, v_u_1132_);
lean_closure_set(v___f_1147_, 1, v_resTy_1133_);
lean_closure_set(v___f_1147_, 2, v_c_1134_);
lean_closure_set(v___f_1147_, 3, v_h_1135_);
lean_closure_set(v___f_1147_, 4, v_toPure_1136_);
lean_closure_set(v___f_1147_, 5, v_inst_1137_);
lean_closure_set(v___f_1147_, 6, v_inst_1138_);
lean_closure_set(v___f_1147_, 7, v_n_1142_);
lean_closure_set(v___f_1147_, 8, v___x_1145_);
lean_closure_set(v___f_1147_, 9, v___f_1139_);
lean_closure_set(v___f_1147_, 10, v___x_1146_);
lean_closure_set(v___f_1147_, 11, v_toBind_1140_);
v___x_1148_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1137_, v_inst_1138_, v_n_1142_, v___x_1143_, v_c_1134_, v___f_1141_, v___x_1144_);
v___x_1149_ = lean_apply_4(v_toBind_1140_, lean_box(0), lean_box(0), v___x_1148_, v___f_1147_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object* v___x_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Core_mkFreshUserName(v___x_1150_, v___y_1153_, v___y_1154_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object* v___x_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(v___x_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object* v_e_1171_, uint8_t v_useSplitter_1172_, lean_object* v_resTy_1173_, lean_object* v_toPure_1174_, lean_object* v_onAlt_1175_, lean_object* v_toBind_1176_, lean_object* v_inst_1177_, lean_object* v_inst_1178_, lean_object* v_inst_1179_, lean_object* v_u_1180_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v_c_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v_h_1189_; 
v___x_1181_ = lean_unsigned_to_nat(1u);
v___x_1182_ = l_Lean_Expr_getAppNumArgs(v_e_1171_);
v___x_1183_ = lean_nat_sub(v___x_1182_, v___x_1181_);
v___x_1184_ = lean_nat_sub(v___x_1183_, v___x_1181_);
lean_dec(v___x_1183_);
v_c_1185_ = l_Lean_Expr_getRevArg_x21(v_e_1171_, v___x_1184_);
v___x_1186_ = lean_unsigned_to_nat(2u);
v___x_1187_ = lean_nat_sub(v___x_1182_, v___x_1186_);
lean_dec(v___x_1182_);
v___x_1188_ = lean_nat_sub(v___x_1187_, v___x_1181_);
lean_dec(v___x_1187_);
v_h_1189_ = l_Lean_Expr_getRevArg_x21(v_e_1171_, v___x_1188_);
if (v_useSplitter_1172_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___f_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec_ref(v_inst_1179_);
lean_dec_ref(v_inst_1178_);
lean_dec(v_inst_1177_);
v___x_1190_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1176_);
lean_inc(v_onAlt_1175_);
lean_inc_ref(v_resTy_1173_);
v___f_1193_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1193_, 0, v_u_1180_);
lean_closure_set(v___f_1193_, 1, v_resTy_1173_);
lean_closure_set(v___f_1193_, 2, v_c_1185_);
lean_closure_set(v___f_1193_, 3, v_h_1189_);
lean_closure_set(v___f_1193_, 4, v_toPure_1174_);
lean_closure_set(v___f_1193_, 5, v_onAlt_1175_);
lean_closure_set(v___f_1193_, 6, v___x_1181_);
lean_closure_set(v___f_1193_, 7, v___x_1192_);
lean_closure_set(v___f_1193_, 8, v_toBind_1176_);
v___x_1194_ = lean_apply_4(v_onAlt_1175_, v___x_1190_, v_resTy_1173_, v___x_1191_, v___x_1192_);
v___x_1195_ = lean_apply_4(v_toBind_1176_, lean_box(0), lean_box(0), v___x_1194_, v___f_1193_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; lean_object* v___f_1197_; lean_object* v___x_1198_; lean_object* v___f_1199_; lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1196_ = lean_box(v_useSplitter_1172_);
lean_inc_n(v_toBind_1176_, 3);
lean_inc_ref_n(v_resTy_1173_, 2);
lean_inc(v_onAlt_1175_);
lean_inc_n(v_inst_1177_, 2);
v___f_1197_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1197_, 0, v___x_1181_);
lean_closure_set(v___f_1197_, 1, v___x_1196_);
lean_closure_set(v___f_1197_, 2, v_inst_1177_);
lean_closure_set(v___f_1197_, 3, v_onAlt_1175_);
lean_closure_set(v___f_1197_, 4, v_resTy_1173_);
lean_closure_set(v___f_1197_, 5, v_toBind_1176_);
v___x_1198_ = lean_box(v_useSplitter_1172_);
v___f_1199_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1199_, 0, v___x_1181_);
lean_closure_set(v___f_1199_, 1, v___x_1198_);
lean_closure_set(v___f_1199_, 2, v_inst_1177_);
lean_closure_set(v___f_1199_, 3, v_onAlt_1175_);
lean_closure_set(v___f_1199_, 4, v_resTy_1173_);
lean_closure_set(v___f_1199_, 5, v_toBind_1176_);
v___f_1200_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1200_, 0, v_u_1180_);
lean_closure_set(v___f_1200_, 1, v_resTy_1173_);
lean_closure_set(v___f_1200_, 2, v_c_1185_);
lean_closure_set(v___f_1200_, 3, v_h_1189_);
lean_closure_set(v___f_1200_, 4, v_toPure_1174_);
lean_closure_set(v___f_1200_, 5, v_inst_1178_);
lean_closure_set(v___f_1200_, 6, v_inst_1179_);
lean_closure_set(v___f_1200_, 7, v___f_1199_);
lean_closure_set(v___f_1200_, 8, v_toBind_1176_);
lean_closure_set(v___f_1200_, 9, v___f_1197_);
v___f_1201_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1202_ = lean_apply_2(v_inst_1177_, lean_box(0), v___f_1201_);
v___x_1203_ = lean_apply_4(v_toBind_1176_, lean_box(0), lean_box(0), v___x_1202_, v___f_1200_);
return v___x_1203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object* v_e_1204_, lean_object* v_useSplitter_1205_, lean_object* v_resTy_1206_, lean_object* v_toPure_1207_, lean_object* v_onAlt_1208_, lean_object* v_toBind_1209_, lean_object* v_inst_1210_, lean_object* v_inst_1211_, lean_object* v_inst_1212_, lean_object* v_u_1213_){
_start:
{
uint8_t v_useSplitter_boxed_1214_; lean_object* v_res_1215_; 
v_useSplitter_boxed_1214_ = lean_unbox(v_useSplitter_1205_);
v_res_1215_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(v_e_1204_, v_useSplitter_boxed_1214_, v_resTy_1206_, v_toPure_1207_, v_onAlt_1208_, v_toBind_1209_, v_inst_1210_, v_inst_1211_, v_inst_1212_, v_u_1213_);
lean_dec_ref(v_e_1204_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object* v___x_1216_, lean_object* v_inst_1217_, lean_object* v_____do__lift_1218_){
_start:
{
uint8_t v___x_1219_; uint8_t v___x_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1219_ = 0;
v___x_1220_ = 1;
v___x_1221_ = 1;
v___x_1222_ = lean_box(v___x_1219_);
v___x_1223_ = lean_box(v___x_1220_);
v___x_1224_ = lean_box(v___x_1219_);
v___x_1225_ = lean_box(v___x_1220_);
v___x_1226_ = lean_box(v___x_1221_);
v___x_1227_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1227_, 0, v___x_1216_);
lean_closure_set(v___x_1227_, 1, v_____do__lift_1218_);
lean_closure_set(v___x_1227_, 2, v___x_1222_);
lean_closure_set(v___x_1227_, 3, v___x_1223_);
lean_closure_set(v___x_1227_, 4, v___x_1224_);
lean_closure_set(v___x_1227_, 5, v___x_1225_);
lean_closure_set(v___x_1227_, 6, v___x_1226_);
v___x_1228_ = lean_apply_2(v_inst_1217_, lean_box(0), v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object* v_inst_1229_, lean_object* v_onAlt_1230_, lean_object* v_resTy_1231_, lean_object* v_toBind_1232_, lean_object* v_h_1233_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___f_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1234_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1235_ = lean_unsigned_to_nat(0u);
v___x_1236_ = lean_unsigned_to_nat(1u);
v___x_1237_ = lean_mk_empty_array_with_capacity(v___x_1236_);
v___x_1238_ = lean_array_push(v___x_1237_, v_h_1233_);
lean_inc_ref_n(v___x_1238_, 2);
v___f_1239_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1239_, 0, v___x_1238_);
lean_closure_set(v___f_1239_, 1, v_inst_1229_);
v___x_1240_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1238_);
lean_ctor_set(v___x_1241_, 1, v___x_1238_);
lean_ctor_set(v___x_1241_, 2, v___x_1240_);
lean_ctor_set(v___x_1241_, 3, v___x_1240_);
lean_ctor_set(v___x_1241_, 4, v___x_1240_);
v___x_1242_ = lean_apply_4(v_onAlt_1230_, v___x_1234_, v_resTy_1231_, v___x_1235_, v___x_1241_);
v___x_1243_ = lean_apply_4(v_toBind_1232_, lean_box(0), lean_box(0), v___x_1242_, v___f_1239_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object* v___x_1244_, lean_object* v_inst_1245_, lean_object* v_onAlt_1246_, lean_object* v_resTy_1247_, lean_object* v_toBind_1248_, lean_object* v_h_1249_){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___f_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1250_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1251_ = lean_mk_empty_array_with_capacity(v___x_1244_);
v___x_1252_ = lean_array_push(v___x_1251_, v_h_1249_);
lean_inc_ref_n(v___x_1252_, 2);
v___f_1253_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1253_, 0, v___x_1252_);
lean_closure_set(v___f_1253_, 1, v_inst_1245_);
v___x_1254_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1252_);
lean_ctor_set(v___x_1255_, 1, v___x_1252_);
lean_ctor_set(v___x_1255_, 2, v___x_1254_);
lean_ctor_set(v___x_1255_, 3, v___x_1254_);
lean_ctor_set(v___x_1255_, 4, v___x_1254_);
v___x_1256_ = lean_apply_4(v_onAlt_1246_, v___x_1250_, v_resTy_1247_, v___x_1244_, v___x_1255_);
v___x_1257_ = lean_apply_4(v_toBind_1248_, lean_box(0), lean_box(0), v___x_1256_, v___f_1253_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object* v_inst_1258_, lean_object* v_onAlt_1259_, lean_object* v_resTy_1260_, lean_object* v_toBind_1261_, lean_object* v_e_1262_, lean_object* v_toPure_1263_, lean_object* v_inst_1264_, lean_object* v_inst_1265_, lean_object* v___f_1266_, lean_object* v_u_1267_){
_start:
{
lean_object* v___x_1268_; lean_object* v___f_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v_c_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v_h_1277_; lean_object* v___f_1278_; lean_object* v___f_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1268_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1261_, 2);
lean_inc_ref(v_resTy_1260_);
lean_inc(v_inst_1258_);
v___f_1269_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1269_, 0, v___x_1268_);
lean_closure_set(v___f_1269_, 1, v_inst_1258_);
lean_closure_set(v___f_1269_, 2, v_onAlt_1259_);
lean_closure_set(v___f_1269_, 3, v_resTy_1260_);
lean_closure_set(v___f_1269_, 4, v_toBind_1261_);
v___x_1270_ = l_Lean_Expr_getAppNumArgs(v_e_1262_);
v___x_1271_ = lean_nat_sub(v___x_1270_, v___x_1268_);
v___x_1272_ = lean_nat_sub(v___x_1271_, v___x_1268_);
lean_dec(v___x_1271_);
v_c_1273_ = l_Lean_Expr_getRevArg_x21(v_e_1262_, v___x_1272_);
v___x_1274_ = lean_unsigned_to_nat(2u);
v___x_1275_ = lean_nat_sub(v___x_1270_, v___x_1274_);
lean_dec(v___x_1270_);
v___x_1276_ = lean_nat_sub(v___x_1275_, v___x_1268_);
lean_dec(v___x_1275_);
v_h_1277_ = l_Lean_Expr_getRevArg_x21(v_e_1262_, v___x_1276_);
v___f_1278_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1278_, 0, v_u_1267_);
lean_closure_set(v___f_1278_, 1, v_resTy_1260_);
lean_closure_set(v___f_1278_, 2, v_c_1273_);
lean_closure_set(v___f_1278_, 3, v_h_1277_);
lean_closure_set(v___f_1278_, 4, v_toPure_1263_);
lean_closure_set(v___f_1278_, 5, v_inst_1264_);
lean_closure_set(v___f_1278_, 6, v_inst_1265_);
lean_closure_set(v___f_1278_, 7, v___f_1269_);
lean_closure_set(v___f_1278_, 8, v_toBind_1261_);
lean_closure_set(v___f_1278_, 9, v___f_1266_);
v___f_1279_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1280_ = lean_apply_2(v_inst_1258_, lean_box(0), v___f_1279_);
v___x_1281_ = lean_apply_4(v_toBind_1261_, lean_box(0), lean_box(0), v___x_1280_, v___f_1278_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object* v_inst_1282_, lean_object* v_onAlt_1283_, lean_object* v_resTy_1284_, lean_object* v_toBind_1285_, lean_object* v_e_1286_, lean_object* v_toPure_1287_, lean_object* v_inst_1288_, lean_object* v_inst_1289_, lean_object* v___f_1290_, lean_object* v_u_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(v_inst_1282_, v_onAlt_1283_, v_resTy_1284_, v_toBind_1285_, v_e_1286_, v_toPure_1287_, v_inst_1288_, v_inst_1289_, v___f_1290_, v_u_1291_);
lean_dec_ref(v_e_1286_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object* v_u_1293_, lean_object* v_resTy_1294_, lean_object* v_c_1295_, lean_object* v_t_1296_, lean_object* v_toPure_1297_, lean_object* v_e_1298_){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1299_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_1300_ = lean_box(0);
v___x_1301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1301_, 0, v_u_1293_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = l_Lean_mkConst(v___x_1299_, v___x_1301_);
v___x_1303_ = l_Lean_mkApp4(v___x_1302_, v_resTy_1294_, v_c_1295_, v_t_1296_, v_e_1298_);
v___x_1304_ = lean_apply_2(v_toPure_1297_, lean_box(0), v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object* v_u_1305_, lean_object* v_resTy_1306_, lean_object* v_c_1307_, lean_object* v_toPure_1308_, lean_object* v_onAlt_1309_, lean_object* v___x_1310_, lean_object* v___x_1311_, lean_object* v_toBind_1312_, lean_object* v_t_1313_){
_start:
{
lean_object* v___f_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_inc_ref(v_resTy_1306_);
v___f_1314_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12), 6, 5);
lean_closure_set(v___f_1314_, 0, v_u_1305_);
lean_closure_set(v___f_1314_, 1, v_resTy_1306_);
lean_closure_set(v___f_1314_, 2, v_c_1307_);
lean_closure_set(v___f_1314_, 3, v_t_1313_);
lean_closure_set(v___f_1314_, 4, v_toPure_1308_);
v___x_1315_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1316_ = lean_apply_4(v_onAlt_1309_, v___x_1315_, v_resTy_1306_, v___x_1310_, v___x_1311_);
v___x_1317_ = lean_apply_4(v_toBind_1312_, lean_box(0), lean_box(0), v___x_1316_, v___f_1314_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object* v___x_1319_, lean_object* v_u_1320_, lean_object* v___x_1321_, lean_object* v_resTy_1322_, lean_object* v_c_1323_, lean_object* v_t_1324_, lean_object* v_toPure_1325_, lean_object* v_e_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1327_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0));
v___x_1328_ = l_Lean_Name_mkStr2(v___x_1319_, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1329_, 0, v_u_1320_);
lean_ctor_set(v___x_1329_, 1, v___x_1321_);
v___x_1330_ = l_Lean_mkConst(v___x_1328_, v___x_1329_);
v___x_1331_ = l_Lean_mkApp4(v___x_1330_, v_resTy_1322_, v_c_1323_, v_t_1324_, v_e_1326_);
v___x_1332_ = lean_apply_2(v_toPure_1325_, lean_box(0), v___x_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object* v___x_1333_, lean_object* v_u_1334_, lean_object* v___x_1335_, lean_object* v_resTy_1336_, lean_object* v_c_1337_, lean_object* v_toPure_1338_, lean_object* v_inst_1339_, lean_object* v_inst_1340_, lean_object* v_n_1341_, uint8_t v___x_1342_, lean_object* v_hFalse_1343_, lean_object* v___f_1344_, uint8_t v___x_1345_, lean_object* v_toBind_1346_, lean_object* v_t_1347_){
_start:
{
lean_object* v___f_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___f_1348_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20), 8, 7);
lean_closure_set(v___f_1348_, 0, v___x_1333_);
lean_closure_set(v___f_1348_, 1, v_u_1334_);
lean_closure_set(v___f_1348_, 2, v___x_1335_);
lean_closure_set(v___f_1348_, 3, v_resTy_1336_);
lean_closure_set(v___f_1348_, 4, v_c_1337_);
lean_closure_set(v___f_1348_, 5, v_t_1347_);
lean_closure_set(v___f_1348_, 6, v_toPure_1338_);
v___x_1349_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1339_, v_inst_1340_, v_n_1341_, v___x_1342_, v_hFalse_1343_, v___f_1344_, v___x_1345_);
v___x_1350_ = lean_apply_4(v_toBind_1346_, lean_box(0), lean_box(0), v___x_1349_, v___f_1348_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object* v___x_1351_, lean_object* v_u_1352_, lean_object* v___x_1353_, lean_object* v_resTy_1354_, lean_object* v_c_1355_, lean_object* v_toPure_1356_, lean_object* v_inst_1357_, lean_object* v_inst_1358_, lean_object* v_n_1359_, lean_object* v___x_1360_, lean_object* v_hFalse_1361_, lean_object* v___f_1362_, lean_object* v___x_1363_, lean_object* v_toBind_1364_, lean_object* v_t_1365_){
_start:
{
uint8_t v___x_2007__boxed_1366_; uint8_t v___x_2009__boxed_1367_; lean_object* v_res_1368_; 
v___x_2007__boxed_1366_ = lean_unbox(v___x_1360_);
v___x_2009__boxed_1367_ = lean_unbox(v___x_1363_);
v_res_1368_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(v___x_1351_, v_u_1352_, v___x_1353_, v_resTy_1354_, v_c_1355_, v_toPure_1356_, v_inst_1357_, v_inst_1358_, v_n_1359_, v___x_2007__boxed_1366_, v_hFalse_1361_, v___f_1362_, v___x_2009__boxed_1367_, v_toBind_1364_, v_t_1365_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object* v___x_1369_, lean_object* v_u_1370_, lean_object* v___x_1371_, lean_object* v_resTy_1372_, lean_object* v_c_1373_, lean_object* v_toPure_1374_, lean_object* v_inst_1375_, lean_object* v_inst_1376_, lean_object* v_n_1377_, lean_object* v___f_1378_, lean_object* v_toBind_1379_, lean_object* v_hTrue_1380_, lean_object* v___f_1381_, lean_object* v_hFalse_1382_){
_start:
{
uint8_t v___x_1383_; uint8_t v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___f_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1383_ = 0;
v___x_1384_ = 0;
v___x_1385_ = lean_box(v___x_1383_);
v___x_1386_ = lean_box(v___x_1384_);
lean_inc(v_toBind_1379_);
lean_inc(v_n_1377_);
lean_inc_ref(v_inst_1376_);
lean_inc_ref(v_inst_1375_);
v___f_1387_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed), 15, 14);
lean_closure_set(v___f_1387_, 0, v___x_1369_);
lean_closure_set(v___f_1387_, 1, v_u_1370_);
lean_closure_set(v___f_1387_, 2, v___x_1371_);
lean_closure_set(v___f_1387_, 3, v_resTy_1372_);
lean_closure_set(v___f_1387_, 4, v_c_1373_);
lean_closure_set(v___f_1387_, 5, v_toPure_1374_);
lean_closure_set(v___f_1387_, 6, v_inst_1375_);
lean_closure_set(v___f_1387_, 7, v_inst_1376_);
lean_closure_set(v___f_1387_, 8, v_n_1377_);
lean_closure_set(v___f_1387_, 9, v___x_1385_);
lean_closure_set(v___f_1387_, 10, v_hFalse_1382_);
lean_closure_set(v___f_1387_, 11, v___f_1378_);
lean_closure_set(v___f_1387_, 12, v___x_1386_);
lean_closure_set(v___f_1387_, 13, v_toBind_1379_);
v___x_1388_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1375_, v_inst_1376_, v_n_1377_, v___x_1383_, v_hTrue_1380_, v___f_1381_, v___x_1384_);
v___x_1389_ = lean_apply_4(v_toBind_1379_, lean_box(0), lean_box(0), v___x_1388_, v___f_1387_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object* v___x_1391_, lean_object* v_u_1392_, lean_object* v___x_1393_, lean_object* v_resTy_1394_, lean_object* v_c_1395_, lean_object* v_toPure_1396_, lean_object* v_inst_1397_, lean_object* v_inst_1398_, lean_object* v_n_1399_, lean_object* v___f_1400_, lean_object* v_toBind_1401_, lean_object* v___f_1402_, lean_object* v_inst_1403_, lean_object* v_hTrue_1404_){
_start:
{
lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_inc(v_toBind_1401_);
lean_inc_ref(v_c_1395_);
lean_inc(v___x_1393_);
lean_inc_ref(v___x_1391_);
v___f_1405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16), 14, 13);
lean_closure_set(v___f_1405_, 0, v___x_1391_);
lean_closure_set(v___f_1405_, 1, v_u_1392_);
lean_closure_set(v___f_1405_, 2, v___x_1393_);
lean_closure_set(v___f_1405_, 3, v_resTy_1394_);
lean_closure_set(v___f_1405_, 4, v_c_1395_);
lean_closure_set(v___f_1405_, 5, v_toPure_1396_);
lean_closure_set(v___f_1405_, 6, v_inst_1397_);
lean_closure_set(v___f_1405_, 7, v_inst_1398_);
lean_closure_set(v___f_1405_, 8, v_n_1399_);
lean_closure_set(v___f_1405_, 9, v___f_1400_);
lean_closure_set(v___f_1405_, 10, v_toBind_1401_);
lean_closure_set(v___f_1405_, 11, v_hTrue_1404_);
lean_closure_set(v___f_1405_, 12, v___f_1402_);
v___x_1406_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0));
v___x_1407_ = l_Lean_Name_mkStr2(v___x_1391_, v___x_1406_);
v___x_1408_ = l_Lean_mkConst(v___x_1407_, v___x_1393_);
v___x_1409_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1409_, 0, v_c_1395_);
lean_closure_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = lean_apply_2(v_inst_1403_, lean_box(0), v___x_1409_);
v___x_1411_ = lean_apply_4(v_toBind_1401_, lean_box(0), lean_box(0), v___x_1410_, v___f_1405_);
return v___x_1411_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2(void){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1416_ = lean_box(0);
v___x_1417_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1));
v___x_1418_ = l_Lean_mkConst(v___x_1417_, v___x_1416_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object* v_u_1419_, lean_object* v_resTy_1420_, lean_object* v_c_1421_, lean_object* v_toPure_1422_, lean_object* v_inst_1423_, lean_object* v_inst_1424_, lean_object* v___f_1425_, lean_object* v_toBind_1426_, lean_object* v___f_1427_, lean_object* v_inst_1428_, lean_object* v_n_1429_){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1430_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10));
v___x_1431_ = lean_box(0);
lean_inc(v_inst_1428_);
lean_inc(v_toBind_1426_);
lean_inc_ref(v_c_1421_);
v___f_1432_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18), 14, 13);
lean_closure_set(v___f_1432_, 0, v___x_1430_);
lean_closure_set(v___f_1432_, 1, v_u_1419_);
lean_closure_set(v___f_1432_, 2, v___x_1431_);
lean_closure_set(v___f_1432_, 3, v_resTy_1420_);
lean_closure_set(v___f_1432_, 4, v_c_1421_);
lean_closure_set(v___f_1432_, 5, v_toPure_1422_);
lean_closure_set(v___f_1432_, 6, v_inst_1423_);
lean_closure_set(v___f_1432_, 7, v_inst_1424_);
lean_closure_set(v___f_1432_, 8, v_n_1429_);
lean_closure_set(v___f_1432_, 9, v___f_1425_);
lean_closure_set(v___f_1432_, 10, v_toBind_1426_);
lean_closure_set(v___f_1432_, 11, v___f_1427_);
lean_closure_set(v___f_1432_, 12, v_inst_1428_);
v___x_1433_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2, &l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2);
v___x_1434_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1434_, 0, v_c_1421_);
lean_closure_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lean_apply_2(v_inst_1428_, lean_box(0), v___x_1434_);
v___x_1436_ = lean_apply_4(v_toBind_1426_, lean_box(0), lean_box(0), v___x_1435_, v___f_1432_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object* v_e_1437_, uint8_t v_useSplitter_1438_, lean_object* v_resTy_1439_, lean_object* v_toPure_1440_, lean_object* v_onAlt_1441_, lean_object* v_toBind_1442_, lean_object* v_inst_1443_, lean_object* v_inst_1444_, lean_object* v_inst_1445_, lean_object* v_u_1446_){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_c_1451_; 
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = l_Lean_Expr_getAppNumArgs(v_e_1437_);
v___x_1449_ = lean_nat_sub(v___x_1448_, v___x_1447_);
lean_dec(v___x_1448_);
v___x_1450_ = lean_nat_sub(v___x_1449_, v___x_1447_);
lean_dec(v___x_1449_);
v_c_1451_ = l_Lean_Expr_getRevArg_x21(v_e_1437_, v___x_1450_);
if (v_useSplitter_1438_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___f_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
lean_dec_ref(v_inst_1445_);
lean_dec_ref(v_inst_1444_);
lean_dec(v_inst_1443_);
v___x_1452_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1442_);
lean_inc(v_onAlt_1441_);
lean_inc_ref(v_resTy_1439_);
v___f_1455_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14), 9, 8);
lean_closure_set(v___f_1455_, 0, v_u_1446_);
lean_closure_set(v___f_1455_, 1, v_resTy_1439_);
lean_closure_set(v___f_1455_, 2, v_c_1451_);
lean_closure_set(v___f_1455_, 3, v_toPure_1440_);
lean_closure_set(v___f_1455_, 4, v_onAlt_1441_);
lean_closure_set(v___f_1455_, 5, v___x_1447_);
lean_closure_set(v___f_1455_, 6, v___x_1454_);
lean_closure_set(v___f_1455_, 7, v_toBind_1442_);
v___x_1456_ = lean_apply_4(v_onAlt_1441_, v___x_1452_, v_resTy_1439_, v___x_1453_, v___x_1454_);
v___x_1457_ = lean_apply_4(v_toBind_1442_, lean_box(0), lean_box(0), v___x_1456_, v___f_1455_);
return v___x_1457_;
}
else
{
lean_object* v___x_1458_; lean_object* v___f_1459_; lean_object* v___x_1460_; lean_object* v___f_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1458_ = lean_box(v_useSplitter_1438_);
lean_inc_n(v_toBind_1442_, 3);
lean_inc_ref_n(v_resTy_1439_, 2);
lean_inc(v_onAlt_1441_);
lean_inc_n(v_inst_1443_, 3);
v___f_1459_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1459_, 0, v___x_1447_);
lean_closure_set(v___f_1459_, 1, v___x_1458_);
lean_closure_set(v___f_1459_, 2, v_inst_1443_);
lean_closure_set(v___f_1459_, 3, v_onAlt_1441_);
lean_closure_set(v___f_1459_, 4, v_resTy_1439_);
lean_closure_set(v___f_1459_, 5, v_toBind_1442_);
v___x_1460_ = lean_box(v_useSplitter_1438_);
v___f_1461_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1461_, 0, v___x_1447_);
lean_closure_set(v___f_1461_, 1, v___x_1460_);
lean_closure_set(v___f_1461_, 2, v_inst_1443_);
lean_closure_set(v___f_1461_, 3, v_onAlt_1441_);
lean_closure_set(v___f_1461_, 4, v_resTy_1439_);
lean_closure_set(v___f_1461_, 5, v_toBind_1442_);
v___f_1462_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_1462_, 0, v_u_1446_);
lean_closure_set(v___f_1462_, 1, v_resTy_1439_);
lean_closure_set(v___f_1462_, 2, v_c_1451_);
lean_closure_set(v___f_1462_, 3, v_toPure_1440_);
lean_closure_set(v___f_1462_, 4, v_inst_1444_);
lean_closure_set(v___f_1462_, 5, v_inst_1445_);
lean_closure_set(v___f_1462_, 6, v___f_1461_);
lean_closure_set(v___f_1462_, 7, v_toBind_1442_);
lean_closure_set(v___f_1462_, 8, v___f_1459_);
lean_closure_set(v___f_1462_, 9, v_inst_1443_);
v___f_1463_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1464_ = lean_apply_2(v_inst_1443_, lean_box(0), v___f_1463_);
v___x_1465_ = lean_apply_4(v_toBind_1442_, lean_box(0), lean_box(0), v___x_1464_, v___f_1462_);
return v___x_1465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object* v_e_1466_, lean_object* v_useSplitter_1467_, lean_object* v_resTy_1468_, lean_object* v_toPure_1469_, lean_object* v_onAlt_1470_, lean_object* v_toBind_1471_, lean_object* v_inst_1472_, lean_object* v_inst_1473_, lean_object* v_inst_1474_, lean_object* v_u_1475_){
_start:
{
uint8_t v_useSplitter_boxed_1476_; lean_object* v_res_1477_; 
v_useSplitter_boxed_1476_ = lean_unbox(v_useSplitter_1467_);
v_res_1477_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(v_e_1466_, v_useSplitter_boxed_1476_, v_resTy_1468_, v_toPure_1469_, v_onAlt_1470_, v_toBind_1471_, v_inst_1472_, v_inst_1473_, v_inst_1474_, v_u_1475_);
lean_dec_ref(v_e_1466_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object* v_onAlt_1478_, lean_object* v_idx_1479_, lean_object* v_expAltType_1480_, lean_object* v_altFVars_1481_, lean_object* v___alt_1482_){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1483_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2));
v___x_1484_ = lean_unsigned_to_nat(1u);
v___x_1485_ = lean_nat_add(v_idx_1479_, v___x_1484_);
v___x_1486_ = lean_name_append_index_after(v___x_1483_, v___x_1485_);
v___x_1487_ = lean_apply_4(v_onAlt_1478_, v___x_1486_, v_expAltType_1480_, v_idx_1479_, v_altFVars_1481_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object* v_onAlt_1488_, lean_object* v_idx_1489_, lean_object* v_expAltType_1490_, lean_object* v_altFVars_1491_, lean_object* v___alt_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(v_onAlt_1488_, v_idx_1489_, v_expAltType_1490_, v_altFVars_1491_, v___alt_1492_);
lean_dec_ref(v___alt_1492_);
return v_res_1493_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object* v_toMatcherInfo_1494_, lean_object* v_i_1495_, lean_object* v_a_1496_, lean_object* v_x_1497_){
_start:
{
uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Expr_isFVar(v_a_1496_);
if (v___x_1498_ == 0)
{
return v___x_1498_;
}
else
{
lean_object* v_discrInfos_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; 
v_discrInfos_1499_ = lean_ctor_get(v_toMatcherInfo_1494_, 4);
v___x_1500_ = lean_array_get_size(v_discrInfos_1499_);
v___x_1501_ = lean_nat_dec_lt(v_i_1495_, v___x_1500_);
if (v___x_1501_ == 0)
{
return v___x_1498_;
}
else
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_array_fget_borrowed(v_discrInfos_1499_, v_i_1495_);
if (lean_obj_tag(v___x_1502_) == 0)
{
return v___x_1498_;
}
else
{
uint8_t v___x_1503_; 
v___x_1503_ = 0;
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object* v_toMatcherInfo_1504_, lean_object* v_i_1505_, lean_object* v_a_1506_, lean_object* v_x_1507_){
_start:
{
uint8_t v_res_1508_; lean_object* v_r_1509_; 
v_res_1508_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(v_toMatcherInfo_1504_, v_i_1505_, v_a_1506_, v_x_1507_);
lean_dec_ref(v_a_1506_);
lean_dec(v_i_1505_);
lean_dec_ref(v_toMatcherInfo_1504_);
v_r_1509_ = lean_box(v_res_1508_);
return v_r_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object* v_mask_1510_, lean_object* v_absMotiveBody_1511_, lean_object* v_toPure_1512_, lean_object* v_xs_1513_, lean_object* v___body_1514_){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1515_ = l_Lean_Array_mask___redArg(v_mask_1510_, v_xs_1513_);
v___x_1516_ = lean_expr_instantiate_rev(v_absMotiveBody_1511_, v___x_1515_);
lean_dec(v___x_1515_);
v___x_1517_ = lean_apply_2(v_toPure_1512_, lean_box(0), v___x_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object* v_mask_1518_, lean_object* v_absMotiveBody_1519_, lean_object* v_toPure_1520_, lean_object* v_xs_1521_, lean_object* v___body_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(v_mask_1518_, v_absMotiveBody_1519_, v_toPure_1520_, v_xs_1521_, v___body_1522_);
lean_dec_ref(v___body_1522_);
lean_dec_ref(v_absMotiveBody_1519_);
lean_dec(v_mask_1518_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object* v_toFunctor_1524_, lean_object* v_mask_1525_, lean_object* v_toPure_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_inst_1530_, lean_object* v_inst_1531_, lean_object* v_matcherApp_1532_, uint8_t v_useSplitter_1533_, lean_object* v___f_1534_, lean_object* v___f_1535_, lean_object* v_absMotiveBody_1536_){
_start:
{
lean_object* v_map_1537_; lean_object* v___f_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v_map_1537_ = lean_ctor_get(v_toFunctor_1524_, 0);
lean_inc(v_map_1537_);
lean_dec_ref(v_toFunctor_1524_);
lean_inc(v_toPure_1526_);
v___f_1538_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed), 5, 3);
lean_closure_set(v___f_1538_, 0, v_mask_1525_);
lean_closure_set(v___f_1538_, 1, v_absMotiveBody_1536_);
lean_closure_set(v___f_1538_, 2, v_toPure_1526_);
v___x_1539_ = lean_apply_1(v_toPure_1526_, lean_box(0));
lean_inc(v___x_1539_);
v___x_1540_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_1527_, v_inst_1528_, v_inst_1529_, v_inst_1530_, v_inst_1531_, v_matcherApp_1532_, v_useSplitter_1533_, v_useSplitter_1533_, v___x_1539_, v___f_1538_, v___f_1534_, v___x_1539_);
v___x_1541_ = lean_apply_4(v_map_1537_, lean_box(0), lean_box(0), v___f_1535_, v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed(lean_object* v_toFunctor_1542_, lean_object* v_mask_1543_, lean_object* v_toPure_1544_, lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v_inst_1547_, lean_object* v_inst_1548_, lean_object* v_inst_1549_, lean_object* v_matcherApp_1550_, lean_object* v_useSplitter_1551_, lean_object* v___f_1552_, lean_object* v___f_1553_, lean_object* v_absMotiveBody_1554_){
_start:
{
uint8_t v_useSplitter_boxed_1555_; lean_object* v_res_1556_; 
v_useSplitter_boxed_1555_ = lean_unbox(v_useSplitter_1551_);
v_res_1556_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(v_toFunctor_1542_, v_mask_1543_, v_toPure_1544_, v_inst_1545_, v_inst_1546_, v_inst_1547_, v_inst_1548_, v_inst_1549_, v_matcherApp_1550_, v_useSplitter_boxed_1555_, v___f_1552_, v___f_1553_, v_absMotiveBody_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object* v_inst_1558_, lean_object* v_inst_1559_, lean_object* v_inst_1560_, lean_object* v_inst_1561_, lean_object* v_inst_1562_, lean_object* v_info_1563_, lean_object* v_resTy_1564_, lean_object* v_onAlt_1565_, uint8_t v_useSplitter_1566_){
_start:
{
switch(lean_obj_tag(v_info_1563_))
{
case 0:
{
lean_object* v_toApplicative_1567_; lean_object* v_toBind_1568_; lean_object* v_toPure_1569_; lean_object* v_e_1570_; lean_object* v___x_1571_; lean_object* v___f_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_toApplicative_1567_ = lean_ctor_get(v_inst_1560_, 0);
lean_dec_ref(v_inst_1562_);
lean_dec_ref(v_inst_1561_);
v_toBind_1568_ = lean_ctor_get(v_inst_1560_, 1);
lean_inc_n(v_toBind_1568_, 2);
v_toPure_1569_ = lean_ctor_get(v_toApplicative_1567_, 1);
lean_inc(v_toPure_1569_);
v_e_1570_ = lean_ctor_get(v_info_1563_, 0);
lean_inc_ref(v_e_1570_);
lean_dec_ref_known(v_info_1563_, 1);
v___x_1571_ = lean_box(v_useSplitter_1566_);
lean_inc(v_inst_1558_);
lean_inc_ref(v_resTy_1564_);
v___f_1572_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_1572_, 0, v_e_1570_);
lean_closure_set(v___f_1572_, 1, v___x_1571_);
lean_closure_set(v___f_1572_, 2, v_resTy_1564_);
lean_closure_set(v___f_1572_, 3, v_toPure_1569_);
lean_closure_set(v___f_1572_, 4, v_onAlt_1565_);
lean_closure_set(v___f_1572_, 5, v_toBind_1568_);
lean_closure_set(v___f_1572_, 6, v_inst_1558_);
lean_closure_set(v___f_1572_, 7, v_inst_1559_);
lean_closure_set(v___f_1572_, 8, v_inst_1560_);
v___x_1573_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1573_, 0, v_resTy_1564_);
v___x_1574_ = lean_apply_2(v_inst_1558_, lean_box(0), v___x_1573_);
v___x_1575_ = lean_apply_4(v_toBind_1568_, lean_box(0), lean_box(0), v___x_1574_, v___f_1572_);
return v___x_1575_;
}
case 1:
{
lean_object* v_toApplicative_1576_; lean_object* v_toBind_1577_; lean_object* v_toPure_1578_; lean_object* v_e_1579_; lean_object* v___f_1580_; lean_object* v___f_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_toApplicative_1576_ = lean_ctor_get(v_inst_1560_, 0);
lean_dec_ref(v_inst_1562_);
lean_dec_ref(v_inst_1561_);
v_toBind_1577_ = lean_ctor_get(v_inst_1560_, 1);
lean_inc_n(v_toBind_1577_, 3);
v_toPure_1578_ = lean_ctor_get(v_toApplicative_1576_, 1);
lean_inc(v_toPure_1578_);
v_e_1579_ = lean_ctor_get(v_info_1563_, 0);
lean_inc_ref(v_e_1579_);
lean_dec_ref_known(v_info_1563_, 1);
lean_inc_ref_n(v_resTy_1564_, 2);
lean_inc(v_onAlt_1565_);
lean_inc_n(v_inst_1558_, 2);
v___f_1580_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_1580_, 0, v_inst_1558_);
lean_closure_set(v___f_1580_, 1, v_onAlt_1565_);
lean_closure_set(v___f_1580_, 2, v_resTy_1564_);
lean_closure_set(v___f_1580_, 3, v_toBind_1577_);
v___f_1581_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed), 10, 9);
lean_closure_set(v___f_1581_, 0, v_inst_1558_);
lean_closure_set(v___f_1581_, 1, v_onAlt_1565_);
lean_closure_set(v___f_1581_, 2, v_resTy_1564_);
lean_closure_set(v___f_1581_, 3, v_toBind_1577_);
lean_closure_set(v___f_1581_, 4, v_e_1579_);
lean_closure_set(v___f_1581_, 5, v_toPure_1578_);
lean_closure_set(v___f_1581_, 6, v_inst_1559_);
lean_closure_set(v___f_1581_, 7, v_inst_1560_);
lean_closure_set(v___f_1581_, 8, v___f_1580_);
v___x_1582_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1582_, 0, v_resTy_1564_);
v___x_1583_ = lean_apply_2(v_inst_1558_, lean_box(0), v___x_1582_);
v___x_1584_ = lean_apply_4(v_toBind_1577_, lean_box(0), lean_box(0), v___x_1583_, v___f_1581_);
return v___x_1584_;
}
case 2:
{
lean_object* v_toApplicative_1585_; lean_object* v_toBind_1586_; lean_object* v_toPure_1587_; lean_object* v_e_1588_; lean_object* v___x_1589_; lean_object* v___f_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_toApplicative_1585_ = lean_ctor_get(v_inst_1560_, 0);
lean_dec_ref(v_inst_1562_);
lean_dec_ref(v_inst_1561_);
v_toBind_1586_ = lean_ctor_get(v_inst_1560_, 1);
lean_inc_n(v_toBind_1586_, 2);
v_toPure_1587_ = lean_ctor_get(v_toApplicative_1585_, 1);
lean_inc(v_toPure_1587_);
v_e_1588_ = lean_ctor_get(v_info_1563_, 0);
lean_inc_ref(v_e_1588_);
lean_dec_ref_known(v_info_1563_, 1);
v___x_1589_ = lean_box(v_useSplitter_1566_);
lean_inc(v_inst_1558_);
lean_inc_ref(v_resTy_1564_);
v___f_1590_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed), 10, 9);
lean_closure_set(v___f_1590_, 0, v_e_1588_);
lean_closure_set(v___f_1590_, 1, v___x_1589_);
lean_closure_set(v___f_1590_, 2, v_resTy_1564_);
lean_closure_set(v___f_1590_, 3, v_toPure_1587_);
lean_closure_set(v___f_1590_, 4, v_onAlt_1565_);
lean_closure_set(v___f_1590_, 5, v_toBind_1586_);
lean_closure_set(v___f_1590_, 6, v_inst_1558_);
lean_closure_set(v___f_1590_, 7, v_inst_1559_);
lean_closure_set(v___f_1590_, 8, v_inst_1560_);
v___x_1591_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1591_, 0, v_resTy_1564_);
v___x_1592_ = lean_apply_2(v_inst_1558_, lean_box(0), v___x_1591_);
v___x_1593_ = lean_apply_4(v_toBind_1586_, lean_box(0), lean_box(0), v___x_1592_, v___f_1590_);
return v___x_1593_;
}
default: 
{
lean_object* v_toApplicative_1594_; lean_object* v_matcherApp_1595_; lean_object* v_toBind_1596_; lean_object* v_toFunctor_1597_; lean_object* v_toPure_1598_; lean_object* v_toMatcherInfo_1599_; lean_object* v_discrs_1600_; lean_object* v___f_1601_; lean_object* v___f_1602_; lean_object* v___f_1603_; lean_object* v___x_1604_; size_t v_sz_1605_; size_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v_mask_1609_; lean_object* v___x_1610_; lean_object* v___f_1611_; lean_object* v_maskedDiscrs_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v_toApplicative_1594_ = lean_ctor_get(v_inst_1560_, 0);
v_matcherApp_1595_ = lean_ctor_get(v_info_1563_, 0);
lean_inc_ref(v_matcherApp_1595_);
lean_dec_ref_known(v_info_1563_, 1);
v_toBind_1596_ = lean_ctor_get(v_inst_1560_, 1);
lean_inc(v_toBind_1596_);
v_toFunctor_1597_ = lean_ctor_get(v_toApplicative_1594_, 0);
lean_inc_ref(v_toFunctor_1597_);
v_toPure_1598_ = lean_ctor_get(v_toApplicative_1594_, 1);
lean_inc(v_toPure_1598_);
v_toMatcherInfo_1599_ = lean_ctor_get(v_matcherApp_1595_, 0);
v_discrs_1600_ = lean_ctor_get(v_matcherApp_1595_, 5);
lean_inc_ref(v_discrs_1600_);
v___f_1601_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed), 5, 1);
lean_closure_set(v___f_1601_, 0, v_onAlt_1565_);
v___f_1602_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0));
lean_inc_ref(v_toMatcherInfo_1599_);
v___f_1603_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed), 4, 1);
lean_closure_set(v___f_1603_, 0, v_toMatcherInfo_1599_);
v___x_1604_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_1605_ = lean_array_size(v_discrs_1600_);
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = l_unsafeCast___redArg(v_discrs_1600_);
v___x_1608_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1604_, v_discrs_1600_, v___f_1603_, v_sz_1605_, v___x_1606_, v___x_1607_);
v_mask_1609_ = l_unsafeCast___redArg(v___x_1608_);
lean_dec(v___x_1608_);
v___x_1610_ = lean_box(v_useSplitter_1566_);
lean_inc(v_inst_1558_);
lean_inc(v_mask_1609_);
v___f_1611_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed), 13, 12);
lean_closure_set(v___f_1611_, 0, v_toFunctor_1597_);
lean_closure_set(v___f_1611_, 1, v_mask_1609_);
lean_closure_set(v___f_1611_, 2, v_toPure_1598_);
lean_closure_set(v___f_1611_, 3, v_inst_1558_);
lean_closure_set(v___f_1611_, 4, v_inst_1559_);
lean_closure_set(v___f_1611_, 5, v_inst_1560_);
lean_closure_set(v___f_1611_, 6, v_inst_1561_);
lean_closure_set(v___f_1611_, 7, v_inst_1562_);
lean_closure_set(v___f_1611_, 8, v_matcherApp_1595_);
lean_closure_set(v___f_1611_, 9, v___x_1610_);
lean_closure_set(v___f_1611_, 10, v___f_1601_);
lean_closure_set(v___f_1611_, 11, v___f_1602_);
v_maskedDiscrs_1612_ = l_Lean_Array_mask___redArg(v_mask_1609_, v_discrs_1600_);
lean_dec(v_mask_1609_);
v___x_1613_ = lean_alloc_closure((void*)(l_Lean_Expr_abstractM___boxed), 7, 2);
lean_closure_set(v___x_1613_, 0, v_resTy_1564_);
lean_closure_set(v___x_1613_, 1, v_maskedDiscrs_1612_);
v___x_1614_ = lean_apply_2(v_inst_1558_, lean_box(0), v___x_1613_);
v___x_1615_ = lean_apply_4(v_toBind_1596_, lean_box(0), lean_box(0), v___x_1614_, v___f_1611_);
return v___x_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object* v_inst_1616_, lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_inst_1619_, lean_object* v_inst_1620_, lean_object* v_info_1621_, lean_object* v_resTy_1622_, lean_object* v_onAlt_1623_, lean_object* v_useSplitter_1624_){
_start:
{
uint8_t v_useSplitter_boxed_1625_; lean_object* v_res_1626_; 
v_useSplitter_boxed_1625_ = lean_unbox(v_useSplitter_1624_);
v_res_1626_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1616_, v_inst_1617_, v_inst_1618_, v_inst_1619_, v_inst_1620_, v_info_1621_, v_resTy_1622_, v_onAlt_1623_, v_useSplitter_boxed_1625_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object* v_n_1627_, lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_inst_1630_, lean_object* v_inst_1631_, lean_object* v_inst_1632_, lean_object* v_inst_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_info_1636_, lean_object* v_resTy_1637_, lean_object* v_onAlt_1638_, uint8_t v_useSplitter_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1628_, v_inst_1629_, v_inst_1630_, v_inst_1631_, v_inst_1632_, v_info_1636_, v_resTy_1637_, v_onAlt_1638_, v_useSplitter_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object* v_n_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_info_1650_, lean_object* v_resTy_1651_, lean_object* v_onAlt_1652_, lean_object* v_useSplitter_1653_){
_start:
{
uint8_t v_useSplitter_boxed_1654_; lean_object* v_res_1655_; 
v_useSplitter_boxed_1654_ = lean_unbox(v_useSplitter_1653_);
v_res_1655_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(v_n_1641_, v_inst_1642_, v_inst_1643_, v_inst_1644_, v_inst_1645_, v_inst_1646_, v_inst_1647_, v_inst_1648_, v_inst_1649_, v_info_1650_, v_resTy_1651_, v_onAlt_1652_, v_useSplitter_boxed_1654_);
lean_dec(v_inst_1649_);
lean_dec(v_inst_1648_);
lean_dec_ref(v_inst_1647_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object* v_info_1656_, lean_object* v_e_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_){
_start:
{
if (lean_obj_tag(v_info_1656_) == 3)
{
lean_object* v_matcherApp_1666_; lean_object* v_toMatcherInfo_1667_; lean_object* v___x_1668_; 
v_matcherApp_1666_ = lean_ctor_get(v_info_1656_, 0);
lean_inc_ref(v_matcherApp_1666_);
lean_dec_ref_known(v_info_1656_, 1);
v_toMatcherInfo_1667_ = lean_ctor_get(v_matcherApp_1666_, 0);
lean_inc_ref(v_toMatcherInfo_1667_);
lean_dec_ref(v_matcherApp_1666_);
v___x_1668_ = l_Lean_Meta_Simp_simpMatchDiscrs_x3f(v_toMatcherInfo_1667_, v_e_1657_, v_a_1658_, v_a_1659_, v_a_1660_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_);
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
lean_dec_ref(v_e_1657_);
lean_dec_ref(v_info_1656_);
v___x_1669_ = lean_box(0);
v___x_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
return v___x_1670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object* v_info_1671_, lean_object* v_e_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(v_info_1671_, v_e_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
lean_dec(v_a_1679_);
lean_dec_ref(v_a_1678_);
lean_dec(v_a_1677_);
lean_dec_ref(v_a_1676_);
lean_dec(v_a_1675_);
lean_dec_ref(v_a_1674_);
lean_dec(v_a_1673_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object* v_declName_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v_env_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1685_ = lean_st_ref_get(v___y_1683_);
v_env_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc_ref(v_env_1686_);
lean_dec(v___x_1685_);
v___x_1687_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1686_, v_declName_1682_);
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object* v_declName_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_1689_, v___y_1690_);
lean_dec(v___y_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v___x_1699_; lean_object* v_env_1700_; lean_object* v___x_1701_; lean_object* v_toCold_1702_; lean_object* v_mctx_1703_; lean_object* v_lctx_1704_; lean_object* v_options_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1699_ = lean_st_ref_get(v___y_1697_);
v_env_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc_ref(v_env_1700_);
lean_dec(v___x_1699_);
v___x_1701_ = lean_st_ref_get(v___y_1695_);
v_toCold_1702_ = lean_ctor_get(v___y_1696_, 0);
v_mctx_1703_ = lean_ctor_get(v___x_1701_, 0);
lean_inc_ref(v_mctx_1703_);
lean_dec(v___x_1701_);
v_lctx_1704_ = lean_ctor_get(v___y_1694_, 2);
v_options_1705_ = lean_ctor_get(v_toCold_1702_, 2);
lean_inc_ref(v_options_1705_);
lean_inc_ref(v_lctx_1704_);
v___x_1706_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1706_, 0, v_env_1700_);
lean_ctor_set(v___x_1706_, 1, v_mctx_1703_);
lean_ctor_set(v___x_1706_, 2, v_lctx_1704_);
lean_ctor_set(v___x_1706_, 3, v_options_1705_);
v___x_1707_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
lean_ctor_set(v___x_1707_, 1, v_msgData_1693_);
v___x_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msgData_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_ref_1722_; lean_object* v___x_1723_; lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1732_; 
v_ref_1722_ = lean_ctor_get(v___y_1719_, 2);
v___x_1723_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msg_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1732_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1732_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1730_; 
lean_inc(v_ref_1722_);
v___x_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1728_, 0, v_ref_1722_);
lean_ctor_set(v___x_1728_, 1, v_a_1724_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set_tag(v___x_1726_, 1);
lean_ctor_set(v___x_1726_, 0, v___x_1728_);
v___x_1730_ = v___x_1726_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_ref_1740_, lean_object* v_msg_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_toCold_1747_; lean_object* v_currRecDepth_1748_; lean_object* v_ref_1749_; uint8_t v_diag_1750_; uint8_t v_suppressElabErrors_1751_; lean_object* v_ref_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_toCold_1747_ = lean_ctor_get(v___y_1744_, 0);
v_currRecDepth_1748_ = lean_ctor_get(v___y_1744_, 1);
v_ref_1749_ = lean_ctor_get(v___y_1744_, 2);
v_diag_1750_ = lean_ctor_get_uint8(v___y_1744_, sizeof(void*)*3);
v_suppressElabErrors_1751_ = lean_ctor_get_uint8(v___y_1744_, sizeof(void*)*3 + 1);
v_ref_1752_ = l_Lean_replaceRef(v_ref_1740_, v_ref_1749_);
lean_inc(v_currRecDepth_1748_);
lean_inc_ref(v_toCold_1747_);
v___x_1753_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1753_, 0, v_toCold_1747_);
lean_ctor_set(v___x_1753_, 1, v_currRecDepth_1748_);
lean_ctor_set(v___x_1753_, 2, v_ref_1752_);
lean_ctor_set_uint8(v___x_1753_, sizeof(void*)*3, v_diag_1750_);
lean_ctor_set_uint8(v___x_1753_, sizeof(void*)*3 + 1, v_suppressElabErrors_1751_);
v___x_1754_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1741_, v___y_1742_, v___y_1743_, v___x_1753_, v___y_1745_);
lean_dec_ref_known(v___x_1753_, 3);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_ref_1755_, lean_object* v_msg_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1755_, v_msg_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_ref_1755_);
return v_res_1762_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1763_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0);
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
return v___x_1765_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
lean_ctor_set(v___x_1768_, 2, v___x_1767_);
lean_ctor_set(v___x_1768_, 3, v___x_1767_);
lean_ctor_set(v___x_1768_, 4, v___x_1766_);
lean_ctor_set(v___x_1768_, 5, v___x_1766_);
lean_ctor_set(v___x_1768_, 6, v___x_1766_);
lean_ctor_set(v___x_1768_, 7, v___x_1766_);
lean_ctor_set(v___x_1768_, 8, v___x_1766_);
lean_ctor_set(v___x_1768_, 9, v___x_1766_);
lean_ctor_set(v___x_1768_, 10, v___x_1766_);
return v___x_1768_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = lean_unsigned_to_nat(32u);
v___x_1770_ = lean_mk_empty_array_with_capacity(v___x_1769_);
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
return v___x_1771_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1772_ = ((size_t)5ULL);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_unsigned_to_nat(32u);
v___x_1775_ = lean_mk_empty_array_with_capacity(v___x_1774_);
v___x_1776_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_1777_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
lean_ctor_set(v___x_1777_, 1, v___x_1775_);
lean_ctor_set(v___x_1777_, 2, v___x_1773_);
lean_ctor_set(v___x_1777_, 3, v___x_1773_);
lean_ctor_set_usize(v___x_1777_, 4, v___x_1772_);
return v___x_1777_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = lean_box(1);
v___x_1779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4);
v___x_1780_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1781_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
lean_ctor_set(v___x_1781_, 1, v___x_1779_);
lean_ctor_set(v___x_1781_, 2, v___x_1778_);
return v___x_1781_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_1784_ = l_Lean_stringToMessageData(v___x_1783_);
return v___x_1784_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_1787_ = l_Lean_stringToMessageData(v___x_1786_);
return v___x_1787_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_1790_ = l_Lean_stringToMessageData(v___x_1789_);
return v___x_1790_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_1793_ = l_Lean_stringToMessageData(v___x_1792_);
return v___x_1793_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14));
v___x_1796_ = l_Lean_stringToMessageData(v___x_1795_);
return v___x_1796_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16));
v___x_1799_ = l_Lean_stringToMessageData(v___x_1798_);
return v___x_1799_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18));
v___x_1802_ = l_Lean_stringToMessageData(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_1803_, lean_object* v_declHint_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v_env_1809_; uint8_t v___x_1810_; 
v___x_1807_ = l_Lean_instInhabitedName;
v___x_1808_ = lean_st_ref_get(v___y_1805_);
v_env_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc_ref(v_env_1809_);
lean_dec(v___x_1808_);
v___x_1810_ = l_Lean_Name_isAnonymous(v_declHint_1804_);
if (v___x_1810_ == 0)
{
uint8_t v_isExporting_1811_; 
v_isExporting_1811_ = lean_ctor_get_uint8(v_env_1809_, sizeof(void*)*8);
if (v_isExporting_1811_ == 0)
{
lean_object* v___x_1812_; 
lean_dec_ref(v_env_1809_);
lean_dec(v_declHint_1804_);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v_msg_1803_);
return v___x_1812_;
}
else
{
lean_object* v___x_1813_; uint8_t v___x_1814_; 
lean_inc_ref(v_env_1809_);
v___x_1813_ = l_Lean_Environment_setExporting(v_env_1809_, v___x_1810_);
lean_inc(v_declHint_1804_);
lean_inc_ref(v___x_1813_);
v___x_1814_ = l_Lean_Environment_contains(v___x_1813_, v_declHint_1804_, v_isExporting_1811_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_env_1809_);
lean_dec(v_declHint_1804_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v_msg_1803_);
return v___x_1815_;
}
else
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v_c_1821_; lean_object* v___x_1822_; 
v___x_1816_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2);
v___x_1817_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_1818_ = l_Lean_Options_empty;
v___x_1819_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1813_);
lean_ctor_set(v___x_1819_, 1, v___x_1816_);
lean_ctor_set(v___x_1819_, 2, v___x_1817_);
lean_ctor_set(v___x_1819_, 3, v___x_1818_);
lean_inc(v_declHint_1804_);
v___x_1820_ = l_Lean_MessageData_ofConstName(v_declHint_1804_, v___x_1810_);
v_c_1821_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1821_, 0, v___x_1819_);
lean_ctor_set(v_c_1821_, 1, v___x_1820_);
v___x_1822_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1809_, v_declHint_1804_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_dec_ref(v_env_1809_);
lean_dec(v_declHint_1804_);
v___x_1823_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1823_);
lean_ctor_set(v___x_1824_, 1, v_c_1821_);
v___x_1825_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_1826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1824_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = l_Lean_MessageData_note(v___x_1826_);
v___x_1828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1828_, 0, v_msg_1803_);
lean_ctor_set(v___x_1828_, 1, v___x_1827_);
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
else
{
lean_object* v_val_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1864_; 
v_val_1830_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1832_ = v___x_1822_;
v_isShared_1833_ = v_isSharedCheck_1864_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_val_1830_);
lean_dec(v___x_1822_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1864_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_mod_1836_; uint8_t v___x_1837_; 
v___x_1834_ = l_Lean_Environment_header(v_env_1809_);
lean_dec_ref(v_env_1809_);
v___x_1835_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1834_);
lean_dec_ref(v___x_1834_);
v_mod_1836_ = lean_array_get(v___x_1807_, v___x_1835_, v_val_1830_);
lean_dec(v_val_1830_);
lean_dec_ref(v___x_1835_);
v___x_1837_ = l_Lean_isPrivateName(v_declHint_1804_);
lean_dec(v_declHint_1804_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1838_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_1839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
lean_ctor_set(v___x_1839_, 1, v_c_1821_);
v___x_1840_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_1841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_MessageData_ofName(v_mod_1836_);
v___x_1843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1841_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
v___x_1844_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15);
v___x_1845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = l_Lean_MessageData_note(v___x_1845_);
v___x_1847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1847_, 0, v_msg_1803_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set_tag(v___x_1832_, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1847_);
v___x_1849_ = v___x_1832_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
else
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1851_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
lean_ctor_set(v___x_1852_, 1, v_c_1821_);
v___x_1853_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17);
v___x_1854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1852_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
v___x_1855_ = l_Lean_MessageData_ofName(v_mod_1836_);
v___x_1856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1854_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19);
v___x_1858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = l_Lean_MessageData_note(v___x_1858_);
v___x_1860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1860_, 0, v_msg_1803_);
lean_ctor_set(v___x_1860_, 1, v___x_1859_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set_tag(v___x_1832_, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1860_);
v___x_1862_ = v___x_1832_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1865_; 
lean_dec_ref(v_env_1809_);
lean_dec(v_declHint_1804_);
v___x_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1865_, 0, v_msg_1803_);
return v___x_1865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_1866_, lean_object* v_declHint_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1866_, v_declHint_1867_, v___y_1868_);
lean_dec(v___y_1868_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object* v_msg_1871_, lean_object* v_declHint_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1888_; 
v___x_1878_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1871_, v_declHint_1872_, v___y_1876_);
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1881_ = v___x_1878_;
v_isShared_1882_ = v_isSharedCheck_1888_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1878_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1888_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1883_ = l_Lean_unknownIdentifierMessageTag;
v___x_1884_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
lean_ctor_set(v___x_1884_, 1, v_a_1879_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v___x_1884_);
v___x_1886_ = v___x_1881_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_1889_, lean_object* v_declHint_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1889_, v_declHint_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1897_, lean_object* v_msg_1898_, lean_object* v_declHint_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___x_1905_; lean_object* v_a_1906_; lean_object* v___x_1907_; 
v___x_1905_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1898_, v_declHint_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref(v___x_1905_);
v___x_1907_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1897_, v_a_1906_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1908_, lean_object* v_msg_1909_, lean_object* v_declHint_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1908_, v_msg_1909_, v_declHint_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v_ref_1908_);
return v_res_1916_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1918_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_1919_ = l_Lean_stringToMessageData(v___x_1918_);
return v___x_1919_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2));
v___x_1922_ = l_Lean_stringToMessageData(v___x_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1923_, lean_object* v_constName_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v___x_1930_; uint8_t v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1930_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1931_ = 0;
lean_inc(v_constName_1924_);
v___x_1932_ = l_Lean_MessageData_ofConstName(v_constName_1924_, v___x_1931_);
v___x_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1930_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3);
v___x_1935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1933_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
v___x_1936_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1923_, v___x_1935_, v_constName_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1937_, lean_object* v_constName_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1937_, v_constName_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v_ref_1937_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_ref_1951_; lean_object* v___x_1952_; 
v_ref_1951_ = lean_ctor_get(v___y_1948_, 2);
v___x_1952_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1951_, v_constName_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object* v_constName_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v___x_1966_; lean_object* v_env_1967_; uint8_t v___x_1968_; lean_object* v___x_1969_; 
v___x_1966_ = lean_st_ref_get(v___y_1964_);
v_env_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc_ref(v_env_1967_);
lean_dec(v___x_1966_);
v___x_1968_ = 0;
lean_inc(v_constName_1960_);
v___x_1969_ = l_Lean_Environment_find_x3f(v_env_1967_, v_constName_1960_, v___x_1968_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
return v___x_1970_;
}
else
{
lean_object* v_val_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec(v_constName_1960_);
v_val_1971_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1969_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_val_1971_);
lean_dec(v___x_1969_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set_tag(v___x_1973_, 0);
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_val_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object* v_constName_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_constName_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object* v_msg_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v___x_1992_; lean_object* v_toApplicative_1993_; lean_object* v_toFunctor_1994_; lean_object* v_toSeq_1995_; lean_object* v_toSeqLeft_1996_; lean_object* v_toSeqRight_1997_; lean_object* v___f_1998_; lean_object* v___f_1999_; lean_object* v___f_2000_; lean_object* v___f_2001_; lean_object* v___x_2002_; lean_object* v___f_2003_; lean_object* v___f_2004_; lean_object* v___f_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v_toApplicative_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2040_; 
v___x_1992_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_1993_ = lean_ctor_get(v___x_1992_, 0);
v_toFunctor_1994_ = lean_ctor_get(v_toApplicative_1993_, 0);
v_toSeq_1995_ = lean_ctor_get(v_toApplicative_1993_, 2);
v_toSeqLeft_1996_ = lean_ctor_get(v_toApplicative_1993_, 3);
v_toSeqRight_1997_ = lean_ctor_get(v_toApplicative_1993_, 4);
v___f_1998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_1999_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1994_, 2);
v___f_2000_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2000_, 0, v_toFunctor_1994_);
v___f_2001_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2001_, 0, v_toFunctor_1994_);
v___x_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___f_2000_);
lean_ctor_set(v___x_2002_, 1, v___f_2001_);
lean_inc(v_toSeqRight_1997_);
v___f_2003_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2003_, 0, v_toSeqRight_1997_);
lean_inc(v_toSeqLeft_1996_);
v___f_2004_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2004_, 0, v_toSeqLeft_1996_);
lean_inc(v_toSeq_1995_);
v___f_2005_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2005_, 0, v_toSeq_1995_);
v___x_2006_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2002_);
lean_ctor_set(v___x_2006_, 1, v___f_1998_);
lean_ctor_set(v___x_2006_, 2, v___f_2005_);
lean_ctor_set(v___x_2006_, 3, v___f_2004_);
lean_ctor_set(v___x_2006_, 4, v___f_2003_);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2006_);
lean_ctor_set(v___x_2007_, 1, v___f_1999_);
v___x_2008_ = l_StateRefT_x27_instMonad___redArg(v___x_2007_);
v_toApplicative_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2040_ == 0)
{
lean_object* v_unused_2041_; 
v_unused_2041_ = lean_ctor_get(v___x_2008_, 1);
lean_dec(v_unused_2041_);
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2040_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_toApplicative_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2040_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v_toFunctor_2013_; lean_object* v_toSeq_2014_; lean_object* v_toSeqLeft_2015_; lean_object* v_toSeqRight_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2038_; 
v_toFunctor_2013_ = lean_ctor_get(v_toApplicative_2009_, 0);
v_toSeq_2014_ = lean_ctor_get(v_toApplicative_2009_, 2);
v_toSeqLeft_2015_ = lean_ctor_get(v_toApplicative_2009_, 3);
v_toSeqRight_2016_ = lean_ctor_get(v_toApplicative_2009_, 4);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_toApplicative_2009_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; 
v_unused_2039_ = lean_ctor_get(v_toApplicative_2009_, 1);
lean_dec(v_unused_2039_);
v___x_2018_ = v_toApplicative_2009_;
v_isShared_2019_ = v_isSharedCheck_2038_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_toSeqRight_2016_);
lean_inc(v_toSeqLeft_2015_);
lean_inc(v_toSeq_2014_);
lean_inc(v_toFunctor_2013_);
lean_dec(v_toApplicative_2009_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2038_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___f_2020_; lean_object* v___f_2021_; lean_object* v___f_2022_; lean_object* v___f_2023_; lean_object* v___x_2024_; lean_object* v___f_2025_; lean_object* v___f_2026_; lean_object* v___f_2027_; lean_object* v___x_2029_; 
v___f_2020_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_2021_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_2013_);
v___f_2022_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2022_, 0, v_toFunctor_2013_);
v___f_2023_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2023_, 0, v_toFunctor_2013_);
v___x_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___f_2022_);
lean_ctor_set(v___x_2024_, 1, v___f_2023_);
v___f_2025_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2025_, 0, v_toSeqRight_2016_);
v___f_2026_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2026_, 0, v_toSeqLeft_2015_);
v___f_2027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2027_, 0, v_toSeq_2014_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 4, v___f_2025_);
lean_ctor_set(v___x_2018_, 3, v___f_2026_);
lean_ctor_set(v___x_2018_, 2, v___f_2027_);
lean_ctor_set(v___x_2018_, 1, v___f_2020_);
lean_ctor_set(v___x_2018_, 0, v___x_2024_);
v___x_2029_ = v___x_2018_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2024_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v___f_2020_);
lean_ctor_set(v_reuseFailAlloc_2037_, 2, v___f_2027_);
lean_ctor_set(v_reuseFailAlloc_2037_, 3, v___f_2026_);
lean_ctor_set(v_reuseFailAlloc_2037_, 4, v___f_2025_);
v___x_2029_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
lean_object* v___x_2031_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 1, v___f_2021_);
lean_ctor_set(v___x_2011_, 0, v___x_2029_);
v___x_2031_ = v___x_2011_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___f_2021_);
v___x_2031_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2746__overap_2034_; lean_object* v___x_2035_; 
v___x_2032_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2033_ = l_instInhabitedOfMonad___redArg(v___x_2031_, v___x_2032_);
v___x_2746__overap_2034_ = lean_panic_fn_borrowed(v___x_2033_, v_msg_1986_);
lean_dec(v___x_2033_);
lean_inc(v___y_1990_);
lean_inc_ref(v___y_1989_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1987_);
v___x_2035_ = lean_apply_5(v___x_2746__overap_2034_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, lean_box(0));
return v___x_2035_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object* v_msg_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v_msg_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
return v_res_2048_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2052_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2));
v___x_2053_ = lean_unsigned_to_nat(53u);
v___x_2054_ = lean_unsigned_to_nat(62u);
v___x_2055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1));
v___x_2056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0));
v___x_2057_ = l_mkPanicMessageWithDecl(v___x_2056_, v___x_2055_, v___x_2054_, v___x_2053_, v___x_2052_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t v_sz_2058_, size_t v_i_2059_, lean_object* v_bs_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
uint8_t v___x_2066_; 
v___x_2066_ = lean_usize_dec_lt(v_i_2059_, v_sz_2058_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = l_unsafeCast___redArg(v_bs_2060_);
lean_dec_ref(v_bs_2060_);
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
return v___x_2068_;
}
else
{
lean_object* v_v_2069_; lean_object* v___x_2070_; lean_object* v_bs_x27_2071_; lean_object* v_a_2073_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v_v_2069_ = lean_array_uget(v_bs_2060_, v_i_2059_);
v___x_2070_ = lean_unsigned_to_nat(0u);
v_bs_x27_2071_ = lean_array_uset(v_bs_2060_, v_i_2059_, v___x_2070_);
v___x_2079_ = l_unsafeCast___redArg(v_v_2069_);
lean_dec(v_v_2069_);
v___x_2080_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v___x_2079_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2080_, 1);
if (lean_obj_tag(v_a_2081_) == 6)
{
lean_object* v_val_2082_; lean_object* v_numFields_2083_; uint8_t v___x_2084_; lean_object* v___x_2085_; 
v_val_2082_ = lean_ctor_get(v_a_2081_, 0);
lean_inc_ref(v_val_2082_);
lean_dec_ref_known(v_a_2081_, 1);
v_numFields_2083_ = lean_ctor_get(v_val_2082_, 4);
lean_inc(v_numFields_2083_);
lean_dec_ref(v_val_2082_);
v___x_2084_ = 0;
v___x_2085_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2085_, 0, v_numFields_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2070_);
lean_ctor_set_uint8(v___x_2085_, sizeof(void*)*2, v___x_2084_);
v_a_2073_ = v___x_2085_;
goto v___jp_2072_;
}
else
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
lean_dec(v_a_2081_);
v___x_2086_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3);
v___x_2087_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v___x_2086_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; 
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v_a_2073_ = v_a_2088_;
goto v___jp_2072_;
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec_ref(v_bs_x27_2071_);
v_a_2089_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2087_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2087_);
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
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec_ref(v_bs_x27_2071_);
v_a_2097_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2080_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2080_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
v___jp_2072_:
{
size_t v___x_2074_; size_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = ((size_t)1ULL);
v___x_2075_ = lean_usize_add(v_i_2059_, v___x_2074_);
v___x_2076_ = l_unsafeCast___redArg(v_a_2073_);
lean_dec_ref(v_a_2073_);
v___x_2077_ = lean_array_uset(v_bs_x27_2071_, v_i_2059_, v___x_2076_);
v_i_2059_ = v___x_2075_;
v_bs_2060_ = v___x_2077_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object* v_sz_2105_, lean_object* v_i_2106_, lean_object* v_bs_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
size_t v_sz_boxed_2113_; size_t v_i_boxed_2114_; lean_object* v_res_2115_; 
v_sz_boxed_2113_ = lean_unbox_usize(v_sz_2105_);
lean_dec(v_sz_2105_);
v_i_boxed_2114_ = lean_unbox_usize(v_i_2106_);
lean_dec(v_i_2106_);
v_res_2115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_boxed_2113_, v_i_boxed_2114_, v_bs_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
return v_res_2115_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_box(0);
v___x_2117_ = l_unsafeCast___redArg(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2118_; lean_object* v_dummy_2119_; 
v___x_2118_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
v_dummy_2119_ = l_Lean_Expr_sort___override(v___x_2118_);
return v_dummy_2119_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2120_ = lean_box(0);
v___x_2121_ = lean_unsigned_to_nat(16u);
v___x_2122_ = lean_mk_array(v___x_2121_, v___x_2120_);
return v___x_2122_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2123_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2);
v___x_2124_ = lean_unsigned_to_nat(0u);
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
lean_ctor_set(v___x_2125_, 1, v___x_2123_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object* v_e_2130_, uint8_t v_alsoCasesOn_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v___x_2140_; 
v___x_2140_ = l_Lean_Expr_isApp(v_e_2130_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
lean_dec_ref(v_e_2130_);
v___x_2141_ = lean_box(0);
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
return v___x_2142_;
}
else
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Expr_getAppFn(v_e_2130_);
if (lean_obj_tag(v___x_2143_) == 4)
{
lean_object* v_declName_2144_; lean_object* v_us_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2304_; 
v_declName_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc_n(v_declName_2144_, 2);
v_us_2145_ = lean_ctor_get(v___x_2143_, 1);
lean_inc(v_us_2145_);
lean_dec_ref_known(v___x_2143_, 2);
v___x_2146_ = l_Lean_instInhabitedExpr;
v___x_2147_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2144_, v___y_2135_);
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2150_ = v___x_2147_;
v_isShared_2151_ = v_isSharedCheck_2304_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2147_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2304_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
if (lean_obj_tag(v_a_2148_) == 1)
{
lean_object* v_val_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2193_; 
v_val_2152_ = lean_ctor_get(v_a_2148_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_a_2148_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2154_ = v_a_2148_;
v_isShared_2155_ = v_isSharedCheck_2193_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_val_2152_);
lean_dec(v_a_2148_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2193_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v_dummy_2156_; lean_object* v_nargs_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v_args_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; uint8_t v___x_2164_; 
v_dummy_2156_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
v_nargs_2157_ = l_Lean_Expr_getAppNumArgs(v_e_2130_);
lean_inc(v_nargs_2157_);
v___x_2158_ = lean_mk_array(v_nargs_2157_, v_dummy_2156_);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = lean_nat_sub(v_nargs_2157_, v___x_2159_);
lean_dec(v_nargs_2157_);
v_args_2161_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2130_, v___x_2158_, v___x_2160_);
v___x_2162_ = lean_array_get_size(v_args_2161_);
v___x_2163_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2152_);
v___x_2164_ = lean_nat_dec_lt(v___x_2162_, v___x_2163_);
lean_dec(v___x_2163_);
if (v___x_2164_ == 0)
{
lean_object* v_numParams_2165_; lean_object* v_numDiscrs_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2184_; 
v_numParams_2165_ = lean_ctor_get(v_val_2152_, 0);
v_numDiscrs_2166_ = lean_ctor_get(v_val_2152_, 1);
v___x_2167_ = lean_array_mk(v_us_2145_);
v___x_2168_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2165_);
v___x_2169_ = l_Array_extract___redArg(v_args_2161_, v___x_2168_, v_numParams_2165_);
v___x_2170_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2152_);
v___x_2171_ = lean_array_get(v___x_2146_, v_args_2161_, v___x_2170_);
lean_dec(v___x_2170_);
v___x_2172_ = lean_nat_add(v_numParams_2165_, v___x_2159_);
v___x_2173_ = lean_nat_add(v___x_2172_, v_numDiscrs_2166_);
lean_inc(v___x_2173_);
lean_inc_ref_n(v_args_2161_, 2);
v___x_2174_ = l_Array_toSubarray___redArg(v_args_2161_, v___x_2172_, v___x_2173_);
v___x_2175_ = l_Subarray_copy___redArg(v___x_2174_);
v___x_2176_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2152_);
v___x_2177_ = lean_nat_add(v___x_2173_, v___x_2176_);
lean_dec(v___x_2176_);
lean_inc(v___x_2177_);
v___x_2178_ = l_Array_toSubarray___redArg(v_args_2161_, v___x_2173_, v___x_2177_);
v___x_2179_ = l_Subarray_copy___redArg(v___x_2178_);
v___x_2180_ = l_Array_toSubarray___redArg(v_args_2161_, v___x_2177_, v___x_2162_);
v___x_2181_ = l_Subarray_copy___redArg(v___x_2180_);
v___x_2182_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2182_, 0, v_val_2152_);
lean_ctor_set(v___x_2182_, 1, v_declName_2144_);
lean_ctor_set(v___x_2182_, 2, v___x_2167_);
lean_ctor_set(v___x_2182_, 3, v___x_2169_);
lean_ctor_set(v___x_2182_, 4, v___x_2171_);
lean_ctor_set(v___x_2182_, 5, v___x_2175_);
lean_ctor_set(v___x_2182_, 6, v___x_2179_);
lean_ctor_set(v___x_2182_, 7, v___x_2181_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2182_);
v___x_2184_ = v___x_2154_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2182_);
v___x_2184_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
lean_object* v___x_2186_; 
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2184_);
v___x_2186_ = v___x_2150_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
else
{
lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_dec_ref(v_args_2161_);
lean_del_object(v___x_2154_);
lean_dec(v_val_2152_);
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
v___x_2189_ = lean_box(0);
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2189_);
v___x_2191_ = v___x_2150_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
else
{
lean_object* v___x_2194_; 
lean_del_object(v___x_2150_);
lean_dec(v_a_2148_);
v___x_2194_ = lean_st_ref_get(v___y_2135_);
if (v_alsoCasesOn_2131_ == 0)
{
lean_dec(v___x_2194_);
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
lean_dec_ref(v_e_2130_);
goto v___jp_2137_;
}
else
{
lean_object* v_env_2195_; uint8_t v___x_2196_; 
v_env_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc_ref(v_env_2195_);
lean_dec(v___x_2194_);
lean_inc(v_declName_2144_);
v___x_2196_ = l_Lean_isCasesOnRecursor(v_env_2195_, v_declName_2144_);
if (v___x_2196_ == 0)
{
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
lean_dec_ref(v_e_2130_);
goto v___jp_2137_;
}
else
{
lean_object* v_indName_2197_; lean_object* v___x_2198_; 
v_indName_2197_ = l_Lean_Name_getPrefix(v_declName_2144_);
v___x_2198_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_indName_2197_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2295_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2201_ = v___x_2198_;
v_isShared_2202_ = v_isSharedCheck_2295_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2198_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2295_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
if (lean_obj_tag(v_a_2199_) == 5)
{
lean_object* v_val_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2290_; 
v_val_2203_ = lean_ctor_get(v_a_2199_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_a_2199_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2205_ = v_a_2199_;
v_isShared_2206_ = v_isSharedCheck_2290_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_val_2203_);
lean_dec(v_a_2199_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2290_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v_toConstantVal_2207_; lean_object* v_numParams_2208_; lean_object* v_numIndices_2209_; lean_object* v_ctors_2210_; lean_object* v_nargs_2211_; lean_object* v_dummy_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v_args_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v_toConstantVal_2207_ = lean_ctor_get(v_val_2203_, 0);
lean_inc_ref(v_toConstantVal_2207_);
v_numParams_2208_ = lean_ctor_get(v_val_2203_, 1);
lean_inc(v_numParams_2208_);
v_numIndices_2209_ = lean_ctor_get(v_val_2203_, 2);
lean_inc(v_numIndices_2209_);
v_ctors_2210_ = lean_ctor_get(v_val_2203_, 4);
lean_inc(v_ctors_2210_);
v_nargs_2211_ = l_Lean_Expr_getAppNumArgs(v_e_2130_);
v_dummy_2212_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
lean_inc(v_nargs_2211_);
v___x_2213_ = lean_mk_array(v_nargs_2211_, v_dummy_2212_);
v___x_2214_ = lean_unsigned_to_nat(1u);
v___x_2215_ = lean_nat_sub(v_nargs_2211_, v___x_2214_);
lean_dec(v_nargs_2211_);
v_args_2216_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2130_, v___x_2213_, v___x_2215_);
v___x_2217_ = lean_nat_add(v_numParams_2208_, v___x_2214_);
v___x_2218_ = lean_nat_add(v___x_2217_, v_numIndices_2209_);
v___x_2219_ = lean_nat_add(v___x_2218_, v___x_2214_);
lean_dec(v___x_2218_);
v___x_2220_ = l_Lean_InductiveVal_numCtors(v_val_2203_);
lean_dec_ref(v_val_2203_);
v___x_2221_ = lean_nat_add(v___x_2219_, v___x_2220_);
lean_dec(v___x_2220_);
v___x_2222_ = lean_array_get_size(v_args_2216_);
v___x_2223_ = lean_nat_dec_le(v___x_2221_, v___x_2222_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
lean_dec(v___x_2221_);
lean_dec(v___x_2219_);
lean_dec(v___x_2217_);
lean_dec_ref(v_args_2216_);
lean_dec(v_ctors_2210_);
lean_dec(v_numIndices_2209_);
lean_dec(v_numParams_2208_);
lean_dec_ref(v_toConstantVal_2207_);
lean_del_object(v___x_2205_);
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
v___x_2224_ = lean_box(0);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v___x_2224_);
v___x_2226_ = v___x_2201_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
else
{
lean_object* v___x_2228_; lean_object* v_params_2229_; lean_object* v_motive_2230_; lean_object* v_discrs_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v_discrInfos_2234_; lean_object* v_alts_2235_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v_lower_2281_; lean_object* v_upper_2282_; uint8_t v___x_2289_; 
lean_del_object(v___x_2201_);
v___x_2228_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2208_);
lean_inc_ref_n(v_args_2216_, 3);
v_params_2229_ = l_Array_toSubarray___redArg(v_args_2216_, v___x_2228_, v_numParams_2208_);
v_motive_2230_ = lean_array_get(v___x_2146_, v_args_2216_, v_numParams_2208_);
lean_dec(v_numParams_2208_);
lean_inc(v___x_2219_);
v_discrs_2231_ = l_Array_toSubarray___redArg(v_args_2216_, v___x_2217_, v___x_2219_);
v___x_2232_ = lean_nat_add(v_numIndices_2209_, v___x_2214_);
lean_dec(v_numIndices_2209_);
v___x_2233_ = lean_box(0);
v_discrInfos_2234_ = lean_mk_array(v___x_2232_, v___x_2233_);
lean_inc(v___x_2221_);
v_alts_2235_ = l_Array_toSubarray___redArg(v_args_2216_, v___x_2219_, v___x_2221_);
v___x_2289_ = lean_nat_dec_le(v___x_2221_, v___x_2228_);
if (v___x_2289_ == 0)
{
v_lower_2281_ = v___x_2221_;
v_upper_2282_ = v___x_2222_;
goto v___jp_2280_;
}
else
{
lean_dec(v___x_2221_);
v_lower_2281_ = v___x_2228_;
v_upper_2282_ = v___x_2222_;
goto v___jp_2280_;
}
v___jp_2236_:
{
lean_object* v___x_2239_; size_t v_sz_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_5914__overap_2245_; lean_object* v___x_2246_; 
v___x_2239_ = lean_array_mk(v_ctors_2210_);
v_sz_2240_ = lean_array_size(v___x_2239_);
v___x_2241_ = l_unsafeCast___redArg(v___x_2239_);
lean_dec_ref(v___x_2239_);
v___x_2242_ = lean_box_usize(v_sz_2240_);
v___x_2243_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed__const__1));
v___x_2244_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed), 8, 3);
lean_closure_set(v___x_2244_, 0, v___x_2242_);
lean_closure_set(v___x_2244_, 1, v___x_2243_);
lean_closure_set(v___x_2244_, 2, v___x_2241_);
v___x_5914__overap_2245_ = l_unsafeCast___redArg(v___x_2244_);
lean_dec_ref(v___x_2244_);
lean_inc(v___y_2135_);
lean_inc_ref(v___y_2134_);
lean_inc(v___y_2133_);
lean_inc_ref(v___y_2132_);
v___x_2246_ = lean_apply_5(v___x_5914__overap_2245_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, lean_box(0));
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2271_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2249_ = v___x_2246_;
v_isShared_2250_ = v_isSharedCheck_2271_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v___x_2246_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2271_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v_start_2251_; lean_object* v_stop_2252_; lean_object* v_start_2253_; lean_object* v_stop_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2266_; 
v_start_2251_ = lean_ctor_get(v_params_2229_, 1);
lean_inc(v_start_2251_);
v_stop_2252_ = lean_ctor_get(v_params_2229_, 2);
lean_inc(v_stop_2252_);
v_start_2253_ = lean_ctor_get(v_discrs_2231_, 1);
lean_inc(v_start_2253_);
v_stop_2254_ = lean_ctor_get(v_discrs_2231_, 2);
lean_inc(v_stop_2254_);
v___x_2255_ = lean_nat_sub(v_stop_2252_, v_start_2251_);
lean_dec(v_start_2251_);
lean_dec(v_stop_2252_);
v___x_2256_ = lean_nat_sub(v_stop_2254_, v_start_2253_);
lean_dec(v_start_2253_);
lean_dec(v_stop_2254_);
v___x_2257_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3);
v___x_2258_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2255_);
lean_ctor_set(v___x_2258_, 1, v___x_2256_);
lean_ctor_set(v___x_2258_, 2, v_a_2247_);
lean_ctor_set(v___x_2258_, 3, v___y_2238_);
lean_ctor_set(v___x_2258_, 4, v_discrInfos_2234_);
lean_ctor_set(v___x_2258_, 5, v___x_2257_);
v___x_2259_ = lean_array_mk(v_us_2145_);
v___x_2260_ = l_Subarray_copy___redArg(v_params_2229_);
v___x_2261_ = l_Subarray_copy___redArg(v_discrs_2231_);
v___x_2262_ = l_Subarray_copy___redArg(v_alts_2235_);
v___x_2263_ = l_Subarray_copy___redArg(v___y_2237_);
v___x_2264_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2258_);
lean_ctor_set(v___x_2264_, 1, v_declName_2144_);
lean_ctor_set(v___x_2264_, 2, v___x_2259_);
lean_ctor_set(v___x_2264_, 3, v___x_2260_);
lean_ctor_set(v___x_2264_, 4, v_motive_2230_);
lean_ctor_set(v___x_2264_, 5, v___x_2261_);
lean_ctor_set(v___x_2264_, 6, v___x_2262_);
lean_ctor_set(v___x_2264_, 7, v___x_2263_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set_tag(v___x_2205_, 1);
lean_ctor_set(v___x_2205_, 0, v___x_2264_);
v___x_2266_ = v___x_2205_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2268_; 
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v___x_2266_);
v___x_2268_ = v___x_2249_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec_ref(v_alts_2235_);
lean_dec_ref(v_discrInfos_2234_);
lean_dec_ref(v_discrs_2231_);
lean_dec(v_motive_2230_);
lean_dec_ref(v_params_2229_);
lean_del_object(v___x_2205_);
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
v_a_2272_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2246_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2246_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
v___jp_2280_:
{
lean_object* v_levelParams_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; 
v_levelParams_2283_ = lean_ctor_get(v_toConstantVal_2207_, 1);
lean_inc(v_levelParams_2283_);
lean_dec_ref(v_toConstantVal_2207_);
v___x_2284_ = l_Array_toSubarray___redArg(v_args_2216_, v_lower_2281_, v_upper_2282_);
v___x_2285_ = l_List_lengthTR___redArg(v_levelParams_2283_);
lean_dec(v_levelParams_2283_);
v___x_2286_ = l_List_lengthTR___redArg(v_us_2145_);
v___x_2287_ = lean_nat_dec_eq(v___x_2285_, v___x_2286_);
lean_dec(v___x_2286_);
lean_dec(v___x_2285_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__4));
v___y_2237_ = v___x_2284_;
v___y_2238_ = v___x_2288_;
goto v___jp_2236_;
}
else
{
v___y_2237_ = v___x_2284_;
v___y_2238_ = v___x_2233_;
goto v___jp_2236_;
}
}
}
}
}
else
{
lean_object* v___x_2291_; lean_object* v___x_2293_; 
lean_dec(v_a_2199_);
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
lean_dec_ref(v_e_2130_);
v___x_2291_ = lean_box(0);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v___x_2291_);
v___x_2293_ = v___x_2201_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_dec(v_us_2145_);
lean_dec(v_declName_2144_);
lean_dec_ref(v_e_2130_);
v_a_2296_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2198_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2198_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
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
lean_dec_ref(v___x_2143_);
lean_dec_ref(v_e_2130_);
goto v___jp_2137_;
}
}
v___jp_2137_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_box(0);
v___x_2139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object* v_e_2305_, lean_object* v_alsoCasesOn_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2312_; lean_object* v_res_2313_; 
v_alsoCasesOn_boxed_2312_ = lean_unbox(v_alsoCasesOn_2306_);
v_res_2313_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2305_, v_alsoCasesOn_boxed_2312_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object* v_e_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2320_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2321_ = l_Lean_Expr_isAppOf(v_e_2314_, v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; uint8_t v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2323_ = l_Lean_Expr_isAppOf(v_e_2314_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2325_ = l_Lean_Expr_isAppOf(v_e_2314_, v___x_2324_);
if (v___x_2325_ == 0)
{
uint8_t v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = 1;
v___x_2327_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2314_, v___x_2326_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2348_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2348_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2348_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
if (lean_obj_tag(v_a_2328_) == 1)
{
lean_object* v_val_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2343_; 
v_val_2332_ = lean_ctor_get(v_a_2328_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v_a_2328_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2334_ = v_a_2328_;
v_isShared_2335_ = v_isSharedCheck_2343_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_val_2332_);
lean_dec(v_a_2328_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2343_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v___x_2338_; 
v___x_2336_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2336_, 0, v_val_2332_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 0, v___x_2336_);
v___x_2338_ = v___x_2334_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2340_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2338_);
v___x_2340_ = v___x_2330_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2346_; 
lean_dec(v_a_2328_);
v___x_2344_ = lean_box(0);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2344_);
v___x_2346_ = v___x_2330_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
v_a_2349_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2327_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2327_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2357_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_e_2314_);
v___x_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
v___x_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
return v___x_2359_;
}
}
else
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_e_2314_);
v___x_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2360_);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
}
else
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_e_2314_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
v___x_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
return v___x_2365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object* v_e_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_);
lean_dec(v_a_2370_);
lean_dec_ref(v_a_2369_);
lean_dec(v_a_2368_);
lean_dec_ref(v_a_2367_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object* v_declName_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2373_, v___y_2377_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object* v_declName_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(v_declName_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2387_, lean_object* v_constName_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2395_, lean_object* v_constName_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b1_2395_, v_constName_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2403_, lean_object* v_ref_2404_, lean_object* v_constName_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___x_2411_; 
v___x_2411_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2404_, v_constName_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2412_, lean_object* v_ref_2413_, lean_object* v_constName_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_2412_, v_ref_2413_, v_constName_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec(v_ref_2413_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_2421_, lean_object* v_ref_2422_, lean_object* v_msg_2423_, lean_object* v_declHint_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2422_, v_msg_2423_, v_declHint_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2431_, lean_object* v_ref_2432_, lean_object* v_msg_2433_, lean_object* v_declHint_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_2431_, v_ref_2432_, v_msg_2433_, v_declHint_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v_ref_2432_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object* v_msg_2441_, lean_object* v_declHint_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2441_, v_declHint_2442_, v___y_2446_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_2449_, lean_object* v_declHint_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(v_msg_2449_, v_declHint_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_2457_, lean_object* v_ref_2458_, lean_object* v_msg_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2458_, v_msg_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2466_, lean_object* v_ref_2467_, lean_object* v_msg_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_2466_, v_ref_2467_, v_msg_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_);
lean_dec(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v_ref_2467_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_2475_, lean_object* v_msg_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_2483_, lean_object* v_msg_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(v_00_u03b1_2483_, v_msg_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
return v_res_2490_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0));
v___x_2493_ = l_Lean_stringToMessageData(v___x_2492_);
return v___x_2493_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2));
v___x_2496_ = l_Lean_stringToMessageData(v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object* v_idx_2500_, lean_object* v_e_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_){
_start:
{
lean_object* v___y_2508_; lean_object* v___y_2527_; lean_object* v___y_2528_; uint8_t v___y_2559_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v___x_2580_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2581_ = l_Lean_Expr_isAppOf(v_e_2501_, v___x_2580_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2582_; uint8_t v___x_2583_; 
v___x_2582_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2583_ = l_Lean_Expr_isAppOf(v_e_2501_, v___x_2582_);
v___y_2559_ = v___x_2583_;
goto v___jp_2558_;
}
else
{
v___y_2559_ = v___x_2581_;
goto v___jp_2558_;
}
v___jp_2507_:
{
lean_object* v___x_2509_; 
lean_inc_ref(v___y_2508_);
v___x_2509_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_2508_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
if (lean_obj_tag(v_a_2510_) == 1)
{
lean_object* v_val_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_dec_ref(v___y_2508_);
v_val_2511_ = lean_ctor_get(v_a_2510_, 0);
lean_inc(v_val_2511_);
lean_dec_ref_known(v_a_2510_, 1);
v___x_2512_ = l_Lean_mkFVar(v_val_2511_);
v___x_2513_ = l_Lean_Meta_rwIfWith(v___x_2512_, v_e_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec(v_a_2510_);
lean_dec_ref(v_e_2501_);
v___x_2514_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_2515_ = l_Lean_MessageData_ofExpr(v___y_2508_);
v___x_2516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2514_);
lean_ctor_set(v___x_2516_, 1, v___x_2515_);
v___x_2517_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2516_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
return v___x_2517_;
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec_ref(v___y_2508_);
lean_dec_ref(v_e_2501_);
v_a_2518_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2509_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2509_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
v___jp_2526_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2529_ = lean_box(0);
lean_inc(v___y_2528_);
v___x_2530_ = l_Lean_mkConst(v___y_2528_, v___x_2529_);
v___x_2531_ = l_Lean_Meta_mkEq(v___y_2527_, v___x_2530_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v___x_2533_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc_n(v_a_2532_, 2);
lean_dec_ref_known(v___x_2531_, 1);
v___x_2533_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_a_2532_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
if (lean_obj_tag(v_a_2534_) == 1)
{
lean_object* v_val_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_dec(v_a_2532_);
v_val_2535_ = lean_ctor_get(v_a_2534_, 0);
lean_inc(v_val_2535_);
lean_dec_ref_known(v_a_2534_, 1);
v___x_2536_ = l_Lean_mkFVar(v_val_2535_);
v___x_2537_ = l_Lean_Meta_rwIfWith(v___x_2536_, v_e_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
return v___x_2537_;
}
else
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
lean_dec(v_a_2534_);
lean_dec_ref(v_e_2501_);
v___x_2538_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3);
v___x_2539_ = l_Lean_MessageData_ofExpr(v_a_2532_);
v___x_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2538_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2540_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
return v___x_2541_;
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec(v_a_2532_);
lean_dec_ref(v_e_2501_);
v_a_2542_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2533_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2533_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec_ref(v_e_2501_);
v_a_2550_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2531_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2531_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
v___jp_2558_:
{
if (v___y_2559_ == 0)
{
lean_object* v___x_2560_; uint8_t v___x_2561_; 
v___x_2560_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2561_ = l_Lean_Expr_isAppOf(v_e_2501_, v___x_2560_);
if (v___x_2561_ == 0)
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Lean_Meta_rwMatcher(v_idx_2500_, v_e_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
return v___x_2562_;
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v_c_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2563_ = lean_unsigned_to_nat(1u);
v___x_2564_ = l_Lean_Expr_getAppNumArgs(v_e_2501_);
v___x_2565_ = lean_nat_sub(v___x_2564_, v___x_2563_);
lean_dec(v___x_2564_);
v___x_2566_ = lean_nat_sub(v___x_2565_, v___x_2563_);
lean_dec(v___x_2565_);
v_c_2567_ = l_Lean_Expr_getRevArg_x21(v_e_2501_, v___x_2566_);
v___x_2568_ = lean_unsigned_to_nat(0u);
v___x_2569_ = lean_nat_dec_eq(v_idx_2500_, v___x_2568_);
lean_dec(v_idx_2500_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4));
v___y_2527_ = v_c_2567_;
v___y_2528_ = v___x_2570_;
goto v___jp_2526_;
}
else
{
lean_object* v___x_2571_; 
v___x_2571_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1));
v___y_2527_ = v_c_2567_;
v___y_2528_ = v___x_2571_;
goto v___jp_2526_;
}
}
}
else
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v_c_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2572_ = lean_unsigned_to_nat(1u);
v___x_2573_ = l_Lean_Expr_getAppNumArgs(v_e_2501_);
v___x_2574_ = lean_nat_sub(v___x_2573_, v___x_2572_);
lean_dec(v___x_2573_);
v___x_2575_ = lean_nat_sub(v___x_2574_, v___x_2572_);
lean_dec(v___x_2574_);
v_c_2576_ = l_Lean_Expr_getRevArg_x21(v_e_2501_, v___x_2575_);
v___x_2577_ = lean_unsigned_to_nat(0u);
v___x_2578_ = lean_nat_dec_eq(v_idx_2500_, v___x_2577_);
lean_dec(v_idx_2500_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lean_mkNot(v_c_2576_);
v___y_2508_ = v___x_2579_;
goto v___jp_2507_;
}
else
{
v___y_2508_ = v_c_2576_;
goto v___jp_2507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object* v_idx_2584_, lean_object* v_e_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_2584_, v_e_2585_, v_a_2586_, v_a_2587_, v_a_2588_, v_a_2589_);
lean_dec(v_a_2589_);
lean_dec_ref(v_a_2588_);
lean_dec(v_a_2587_);
lean_dec_ref(v_a_2586_);
return v_res_2591_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
}
#ifdef __cplusplus
}
#endif

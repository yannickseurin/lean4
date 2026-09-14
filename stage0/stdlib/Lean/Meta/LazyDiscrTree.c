// Lean compiler output
// Module: Lean.Meta.LazyDiscrTree
// Imports: public import Lean.Meta.CompletionName public import Lean.Meta.DiscrTree import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqLiteral_beq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint8_t l_Lean_getDiag(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
extern lean_object* l_Lean_instInhabitedModuleData_default;
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* l_Lean_AsyncConstantInfo_ofConstantInfo(lean_object*);
uint8_t l_Lean_AsyncConstantInfo_isUnsafe(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternalDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_BaseIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_instReprLiteral_repr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getLocalConstantInfos(lean_object*, uint8_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.arrow"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.other"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.star"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.const"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.fvar"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.LazyDiscrTree.Key.lit"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.proj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_Key_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_pushArgs___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_InitResults_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Processing failure with "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ":\n  "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "lazy discriminator import initialization"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "build module discriminator tree"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "lazy discriminator local search"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(lean_object* v_x_1_){
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
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
switch(lean_obj_tag(v_t_11_))
{
case 0:
{
lean_object* v_a_13_; lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_13_);
v_a_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_a_13_, v_a_14_);
return v___x_15_;
}
case 1:
{
lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_17_);
lean_dec_ref_known(v_t_11_, 2);
v___x_18_ = lean_apply_2(v_k_12_, v_a_16_, v_a_17_);
return v___x_18_;
}
case 2:
{
lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_19_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_a_19_);
lean_dec_ref_known(v_t_11_, 1);
v___x_20_ = lean_apply_1(v_k_12_, v_a_19_);
return v___x_20_;
}
case 6:
{
lean_object* v_a_21_; lean_object* v_a_22_; lean_object* v_a_23_; lean_object* v___x_24_; 
v_a_21_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_21_);
v_a_22_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_22_);
v_a_23_ = lean_ctor_get(v_t_11_, 2);
lean_inc(v_a_23_);
lean_dec_ref_known(v_t_11_, 3);
v___x_24_ = lean_apply_3(v_k_12_, v_a_21_, v_a_22_, v_a_23_);
return v___x_24_;
}
default: 
{
lean_dec(v_t_11_);
return v_k_12_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object* v_t_37_, lean_object* v_const_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_37_, v_const_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_const_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_41_, v_const_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object* v_t_45_, lean_object* v_fvar_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_45_, v_fvar_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_fvar_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_49_, v_fvar_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object* v_t_53_, lean_object* v_lit_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_53_, v_lit_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_lit_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_57_, v_lit_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object* v_t_61_, lean_object* v_star_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_61_, v_star_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_star_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_65_, v_star_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object* v_t_69_, lean_object* v_other_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_69_, v_other_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_other_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_73_, v_other_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object* v_t_77_, lean_object* v_arrow_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_77_, v_arrow_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_arrow_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_81_, v_arrow_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object* v_t_85_, lean_object* v_proj_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_85_, v_proj_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_proj_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_89_, v_proj_91_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_box(0);
v___x_94_ = l_unsafeCast___redArg(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__1);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default;
return v___x_99_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
switch(lean_obj_tag(v_x_100_))
{
case 0:
{
if (lean_obj_tag(v_x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v_a_103_; lean_object* v_a_104_; lean_object* v_a_105_; uint8_t v___x_106_; 
v_a_102_ = lean_ctor_get(v_x_100_, 0);
v_a_103_ = lean_ctor_get(v_x_100_, 1);
v_a_104_ = lean_ctor_get(v_x_101_, 0);
v_a_105_ = lean_ctor_get(v_x_101_, 1);
v___x_106_ = lean_name_eq(v_a_102_, v_a_104_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = lean_nat_dec_eq(v_a_103_, v_a_105_);
return v___x_107_;
}
}
else
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
}
case 1:
{
if (lean_obj_tag(v_x_101_) == 1)
{
lean_object* v_a_109_; lean_object* v_a_110_; lean_object* v_a_111_; lean_object* v_a_112_; uint8_t v___x_113_; 
v_a_109_ = lean_ctor_get(v_x_100_, 0);
v_a_110_ = lean_ctor_get(v_x_100_, 1);
v_a_111_ = lean_ctor_get(v_x_101_, 0);
v_a_112_ = lean_ctor_get(v_x_101_, 1);
v___x_113_ = l_Lean_instBEqFVarId_beq(v_a_109_, v_a_111_);
if (v___x_113_ == 0)
{
return v___x_113_;
}
else
{
uint8_t v___x_114_; 
v___x_114_ = lean_nat_dec_eq(v_a_110_, v_a_112_);
return v___x_114_;
}
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
case 2:
{
if (lean_obj_tag(v_x_101_) == 2)
{
lean_object* v_a_116_; lean_object* v_a_117_; uint8_t v___x_118_; 
v_a_116_ = lean_ctor_get(v_x_100_, 0);
v_a_117_ = lean_ctor_get(v_x_101_, 0);
v___x_118_ = l_Lean_instBEqLiteral_beq(v_a_116_, v_a_117_);
return v___x_118_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = 0;
return v___x_119_;
}
}
case 3:
{
if (lean_obj_tag(v_x_101_) == 3)
{
uint8_t v___x_120_; 
v___x_120_ = 1;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 0;
return v___x_121_;
}
}
case 4:
{
if (lean_obj_tag(v_x_101_) == 4)
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
case 5:
{
if (lean_obj_tag(v_x_101_) == 5)
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
default: 
{
if (lean_obj_tag(v_x_101_) == 6)
{
lean_object* v_a_126_; lean_object* v_a_127_; lean_object* v_a_128_; lean_object* v_a_129_; lean_object* v_a_130_; lean_object* v_a_131_; uint8_t v___x_132_; 
v_a_126_ = lean_ctor_get(v_x_100_, 0);
v_a_127_ = lean_ctor_get(v_x_100_, 1);
v_a_128_ = lean_ctor_get(v_x_100_, 2);
v_a_129_ = lean_ctor_get(v_x_101_, 0);
v_a_130_ = lean_ctor_get(v_x_101_, 1);
v_a_131_ = lean_ctor_get(v_x_101_, 2);
v___x_132_ = lean_name_eq(v_a_126_, v_a_129_);
if (v___x_132_ == 0)
{
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = lean_nat_dec_eq(v_a_127_, v_a_130_);
if (v___x_133_ == 0)
{
return v___x_133_;
}
else
{
uint8_t v___x_134_; 
v___x_134_ = lean_nat_dec_eq(v_a_128_, v_a_131_);
return v___x_134_;
}
}
}
else
{
uint8_t v___x_135_; 
v___x_135_ = 0;
return v___x_135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object* v_x_136_, lean_object* v_x_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_x_136_, v_x_137_);
lean_dec(v_x_137_);
lean_dec(v_x_136_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(2u);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_nat_to_int(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
lean_object* v___y_182_; lean_object* v___y_189_; lean_object* v___y_196_; 
switch(lean_obj_tag(v_x_179_))
{
case 0:
{
lean_object* v_a_202_; lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_228_; 
v_a_202_ = lean_ctor_get(v_x_179_, 0);
v_a_203_ = lean_ctor_get(v_x_179_, 1);
v_isSharedCheck_228_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_228_ == 0)
{
v___x_205_ = v_x_179_;
v_isShared_206_ = v_isSharedCheck_228_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_inc(v_a_202_);
lean_dec(v_x_179_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_228_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___y_208_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(1024u);
v___x_225_ = lean_nat_dec_le(v___x_224_, v_prec_180_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_208_ = v___x_226_;
goto v___jp_207_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_208_ = v___x_227_;
goto v___jp_207_;
}
v___jp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_209_ = lean_box(1);
v___x_210_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8));
v___x_211_ = lean_unsigned_to_nat(1024u);
v___x_212_ = l_Lean_Name_reprPrec(v_a_202_, v___x_211_);
if (v_isShared_206_ == 0)
{
lean_ctor_set_tag(v___x_205_, 5);
lean_ctor_set(v___x_205_, 1, v___x_212_);
lean_ctor_set(v___x_205_, 0, v___x_210_);
v___x_214_ = v___x_205_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_223_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_209_);
v___x_216_ = l_Nat_reprFast(v_a_203_);
v___x_217_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_215_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_inc(v___y_208_);
v___x_219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_219_, 0, v___y_208_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = 0;
v___x_221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*1, v___x_220_);
v___x_222_ = l_Repr_addAppParen(v___x_221_, v_prec_180_);
return v___x_222_;
}
}
}
}
case 1:
{
lean_object* v_a_229_; lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_255_; 
v_a_229_ = lean_ctor_get(v_x_179_, 0);
v_a_230_ = lean_ctor_get(v_x_179_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_255_ == 0)
{
v___x_232_ = v_x_179_;
v_isShared_233_ = v_isSharedCheck_255_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_inc(v_a_229_);
lean_dec(v_x_179_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_255_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___y_235_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_unsigned_to_nat(1024u);
v___x_252_ = lean_nat_dec_le(v___x_251_, v_prec_180_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_235_ = v___x_253_;
goto v___jp_234_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_235_ = v___x_254_;
goto v___jp_234_;
}
v___jp_234_:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_236_ = lean_box(1);
v___x_237_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13));
v___x_238_ = lean_unsigned_to_nat(1024u);
v___x_239_ = l_Lean_Name_reprPrec(v_a_229_, v___x_238_);
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 5);
lean_ctor_set(v___x_232_, 1, v___x_239_);
lean_ctor_set(v___x_232_, 0, v___x_237_);
v___x_241_ = v___x_232_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v___x_239_);
v___x_241_ = v_reuseFailAlloc_250_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_236_);
v___x_243_ = l_Nat_reprFast(v_a_230_);
v___x_244_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
v___x_245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_242_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
lean_inc(v___y_235_);
v___x_246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_246_, 0, v___y_235_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = 0;
v___x_248_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set_uint8(v___x_248_, sizeof(void*)*1, v___x_247_);
v___x_249_ = l_Repr_addAppParen(v___x_248_, v_prec_180_);
return v___x_249_;
}
}
}
}
case 2:
{
lean_object* v_a_256_; lean_object* v___y_258_; lean_object* v___x_267_; uint8_t v___x_268_; 
v_a_256_ = lean_ctor_get(v_x_179_, 0);
lean_inc_ref(v_a_256_);
lean_dec_ref_known(v_x_179_, 1);
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_268_ = lean_nat_dec_le(v___x_267_, v_prec_180_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_258_ = v___x_269_;
goto v___jp_257_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_258_ = v___x_270_;
goto v___jp_257_;
}
v___jp_257_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_259_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16));
v___x_260_ = lean_unsigned_to_nat(1024u);
v___x_261_ = l_Lean_instReprLiteral_repr(v_a_256_, v___x_260_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_259_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
lean_inc(v___y_258_);
v___x_263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_263_, 0, v___y_258_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = 0;
v___x_265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set_uint8(v___x_265_, sizeof(void*)*1, v___x_264_);
v___x_266_ = l_Repr_addAppParen(v___x_265_, v_prec_180_);
return v___x_266_;
}
}
case 3:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1024u);
v___x_272_ = lean_nat_dec_le(v___x_271_, v_prec_180_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_196_ = v___x_273_;
goto v___jp_195_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_196_ = v___x_274_;
goto v___jp_195_;
}
}
case 4:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(1024u);
v___x_276_ = lean_nat_dec_le(v___x_275_, v_prec_180_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_189_ = v___x_277_;
goto v___jp_188_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_189_ = v___x_278_;
goto v___jp_188_;
}
}
case 5:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1024u);
v___x_280_ = lean_nat_dec_le(v___x_279_, v_prec_180_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_182_ = v___x_281_;
goto v___jp_181_;
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_182_ = v___x_282_;
goto v___jp_181_;
}
}
default: 
{
lean_object* v_a_283_; lean_object* v_a_284_; lean_object* v_a_285_; lean_object* v___y_287_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_a_283_ = lean_ctor_get(v_x_179_, 0);
lean_inc(v_a_283_);
v_a_284_ = lean_ctor_get(v_x_179_, 1);
lean_inc(v_a_284_);
v_a_285_ = lean_ctor_get(v_x_179_, 2);
lean_inc(v_a_285_);
lean_dec_ref_known(v_x_179_, 3);
v___x_305_ = lean_unsigned_to_nat(1024u);
v___x_306_ = lean_nat_dec_le(v___x_305_, v_prec_180_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
v___x_307_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_287_ = v___x_307_;
goto v___jp_286_;
}
else
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_287_ = v___x_308_;
goto v___jp_286_;
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_288_ = lean_box(1);
v___x_289_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19));
v___x_290_ = lean_unsigned_to_nat(1024u);
v___x_291_ = l_Lean_Name_reprPrec(v_a_283_, v___x_290_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_289_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_288_);
v___x_294_ = l_Nat_reprFast(v_a_284_);
v___x_295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_293_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_288_);
v___x_298_ = l_Nat_reprFast(v_a_285_);
v___x_299_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
v___x_300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_297_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
lean_inc(v___y_287_);
v___x_301_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_301_, 0, v___y_287_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = 0;
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_301_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_302_);
v___x_304_ = l_Repr_addAppParen(v___x_303_, v_prec_180_);
return v___x_304_;
}
}
}
v___jp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_183_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1));
lean_inc(v___y_182_);
v___x_184_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_184_, 0, v___y_182_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = 0;
v___x_186_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set_uint8(v___x_186_, sizeof(void*)*1, v___x_185_);
v___x_187_ = l_Repr_addAppParen(v___x_186_, v_prec_180_);
return v___x_187_;
}
v___jp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_190_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3));
lean_inc(v___y_189_);
v___x_191_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_191_, 0, v___y_189_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
v___x_192_ = 0;
v___x_193_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*1, v___x_192_);
v___x_194_ = l_Repr_addAppParen(v___x_193_, v_prec_180_);
return v___x_194_;
}
v___jp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5));
lean_inc(v___y_196_);
v___x_198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_198_, 0, v___y_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = 0;
v___x_200_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set_uint8(v___x_200_, sizeof(void*)*1, v___x_199_);
v___x_201_ = l_Repr_addAppParen(v___x_200_, v_prec_180_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object* v_x_309_, lean_object* v_prec_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Meta_LazyDiscrTree_instReprKey_repr(v_x_309_, v_prec_310_);
lean_dec(v_prec_310_);
return v_res_311_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object* v_x_314_){
_start:
{
switch(lean_obj_tag(v_x_314_))
{
case 0:
{
lean_object* v_a_315_; lean_object* v_a_316_; uint64_t v___x_317_; uint64_t v___y_319_; lean_object* v___x_323_; 
v_a_315_ = lean_ctor_get(v_x_314_, 0);
v_a_316_ = lean_ctor_get(v_x_314_, 1);
v___x_317_ = 5237ULL;
v___x_323_ = l_unsafeCast___redArg(v_a_315_);
if (lean_obj_tag(v___x_323_) == 0)
{
uint64_t v___x_324_; 
v___x_324_ = 1723ULL;
v___y_319_ = v___x_324_;
goto v___jp_318_;
}
else
{
uint64_t v_hash_325_; 
v_hash_325_ = lean_ctor_get_uint64(v___x_323_, sizeof(void*)*2);
lean_dec(v___x_323_);
v___y_319_ = v_hash_325_;
goto v___jp_318_;
}
v___jp_318_:
{
uint64_t v___x_320_; uint64_t v___x_321_; uint64_t v___x_322_; 
v___x_320_ = lean_uint64_of_nat(v_a_316_);
v___x_321_ = lean_uint64_mix_hash(v___y_319_, v___x_320_);
v___x_322_ = lean_uint64_mix_hash(v___x_317_, v___x_321_);
return v___x_322_;
}
}
case 1:
{
lean_object* v_a_326_; lean_object* v_a_327_; uint64_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; 
v_a_326_ = lean_ctor_get(v_x_314_, 0);
v_a_327_ = lean_ctor_get(v_x_314_, 1);
v___x_328_ = 3541ULL;
v___x_329_ = l_Lean_instHashableFVarId_hash(v_a_326_);
v___x_330_ = lean_uint64_of_nat(v_a_327_);
v___x_331_ = lean_uint64_mix_hash(v___x_329_, v___x_330_);
v___x_332_ = lean_uint64_mix_hash(v___x_328_, v___x_331_);
return v___x_332_;
}
case 2:
{
lean_object* v_a_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v___x_336_; 
v_a_333_ = lean_ctor_get(v_x_314_, 0);
v___x_334_ = 1879ULL;
v___x_335_ = l_Lean_Literal_hash(v_a_333_);
v___x_336_ = lean_uint64_mix_hash(v___x_334_, v___x_335_);
return v___x_336_;
}
case 3:
{
uint64_t v___x_337_; 
v___x_337_ = 7883ULL;
return v___x_337_;
}
case 4:
{
uint64_t v___x_338_; 
v___x_338_ = 2411ULL;
return v___x_338_;
}
case 5:
{
uint64_t v___x_339_; 
v___x_339_ = 17ULL;
return v___x_339_;
}
default: 
{
lean_object* v_a_340_; lean_object* v_a_341_; lean_object* v_a_342_; uint64_t v___x_343_; uint64_t v___y_345_; lean_object* v___x_349_; 
v_a_340_ = lean_ctor_get(v_x_314_, 0);
v_a_341_ = lean_ctor_get(v_x_314_, 1);
v_a_342_ = lean_ctor_get(v_x_314_, 2);
v___x_343_ = lean_uint64_of_nat(v_a_342_);
v___x_349_ = l_unsafeCast___redArg(v_a_340_);
if (lean_obj_tag(v___x_349_) == 0)
{
uint64_t v___x_350_; 
v___x_350_ = 1723ULL;
v___y_345_ = v___x_350_;
goto v___jp_344_;
}
else
{
uint64_t v_hash_351_; 
v_hash_351_ = lean_ctor_get_uint64(v___x_349_, sizeof(void*)*2);
lean_dec(v___x_349_);
v___y_345_ = v_hash_351_;
goto v___jp_344_;
}
v___jp_344_:
{
uint64_t v___x_346_; uint64_t v___x_347_; uint64_t v___x_348_; 
v___x_346_ = lean_uint64_of_nat(v_a_341_);
v___x_347_ = lean_uint64_mix_hash(v___y_345_, v___x_346_);
v___x_348_ = lean_uint64_mix_hash(v___x_343_, v___x_347_);
return v___x_348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object* v_x_352_){
_start:
{
uint64_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_x_352_);
lean_dec(v_x_352_);
v_r_354_ = lean_box_uint64(v_res_353_);
return v_r_354_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_362_ = l_Lean_mkMVar(v___x_361_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0, &l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object* v_a_364_, lean_object* v_i_365_, lean_object* v_infos_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_array_get_size(v_infos_366_);
v___x_373_ = lean_nat_dec_lt(v_i_365_, v___x_372_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = l_Lean_Meta_isProof(v_a_364_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
return v___x_374_;
}
else
{
lean_object* v_info_375_; uint8_t v_isInstance_376_; uint8_t v___y_378_; 
v_info_375_ = lean_array_fget_borrowed(v_infos_366_, v_i_365_);
v_isInstance_376_ = lean_ctor_get_uint8(v_info_375_, sizeof(void*)*1 + 4);
if (v_isInstance_376_ == 0)
{
uint8_t v___x_394_; 
v___x_394_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_375_);
if (v___x_394_ == 0)
{
uint8_t v___x_395_; 
v___x_395_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_375_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Meta_isProof(v_a_364_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
return v___x_396_;
}
else
{
v___y_378_ = v___x_395_;
goto v___jp_377_;
}
}
else
{
v___y_378_ = v___x_373_;
goto v___jp_377_;
}
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; 
lean_dec_ref(v_a_364_);
v___x_397_ = lean_box(v___x_373_);
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
return v___x_398_;
}
v___jp_377_:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_Meta_isType(v_a_364_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_393_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_393_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_393_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_393_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
uint8_t v___x_384_; 
v___x_384_ = lean_unbox(v_a_380_);
lean_dec(v_a_380_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_box(v___y_378_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_385_);
v___x_387_ = v___x_382_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
else
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lean_box(v_isInstance_376_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_389_);
v___x_391_ = v___x_382_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
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
else
{
return v___x_379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object* v_a_399_, lean_object* v_i_400_, lean_object* v_infos_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_a_399_, v_i_400_, v_infos_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec_ref(v_infos_401_);
lean_dec(v_i_400_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object* v_infos_408_, lean_object* v_x_409_, lean_object* v_x_410_, lean_object* v_x_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
if (lean_obj_tag(v_x_410_) == 5)
{
lean_object* v_fn_417_; lean_object* v_arg_418_; lean_object* v___x_419_; 
v_fn_417_ = lean_ctor_get(v_x_410_, 0);
lean_inc_ref(v_fn_417_);
v_arg_418_ = lean_ctor_get(v_x_410_, 1);
lean_inc_ref_n(v_arg_418_, 2);
lean_dec_ref_known(v_x_410_, 2);
v___x_419_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_arg_418_, v_x_409_, v_infos_408_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; uint8_t v___x_421_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
v___x_421_ = lean_unbox(v_a_420_);
lean_dec(v_a_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_sub(v_x_409_, v___x_422_);
lean_dec(v_x_409_);
v___x_424_ = lean_array_push(v_x_411_, v_arg_418_);
v_x_409_ = v___x_423_;
v_x_410_ = v_fn_417_;
v_x_411_ = v___x_424_;
goto _start;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref(v_arg_418_);
v___x_426_ = lean_unsigned_to_nat(1u);
v___x_427_ = lean_nat_sub(v_x_409_, v___x_426_);
lean_dec(v_x_409_);
v___x_428_ = l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
v___x_429_ = lean_array_push(v_x_411_, v___x_428_);
v_x_409_ = v___x_427_;
v_x_410_ = v_fn_417_;
v_x_411_ = v___x_429_;
goto _start;
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_dec_ref(v_arg_418_);
lean_dec_ref(v_fn_417_);
lean_dec_ref(v_x_411_);
lean_dec(v_x_409_);
v_a_431_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_419_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_419_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v___x_439_; 
lean_dec_ref(v_x_410_);
lean_dec(v_x_409_);
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v_x_411_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object* v_infos_440_, lean_object* v_x_441_, lean_object* v_x_442_, lean_object* v_x_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_infos_440_, v_x_441_, v_x_442_, v_x_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
lean_dec_ref(v_infos_440_);
return v_res_449_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object* v_e_464_){
_start:
{
uint8_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = l_Lean_Expr_isRawNatLit(v_e_464_);
v___x_466_ = 1;
if (v___x_465_ == 0)
{
lean_object* v_f_467_; uint8_t v___x_468_; 
v_f_467_ = l_Lean_Expr_getAppFn(v_e_464_);
v___x_468_ = l_Lean_Expr_isConst(v_f_467_);
if (v___x_468_ == 0)
{
lean_dec_ref(v_f_467_);
lean_dec_ref(v_e_464_);
return v___x_465_;
}
else
{
if (v___x_465_ == 0)
{
lean_object* v_fName_469_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_fName_469_ = l_Lean_Expr_constName_x21(v_f_467_);
lean_dec_ref(v_f_467_);
v___x_487_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_488_ = lean_name_eq(v_fName_469_, v___x_487_);
if (v___x_488_ == 0)
{
goto v___jp_476_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_489_ = l_Lean_Expr_getAppNumArgs(v_e_464_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_dec_eq(v___x_489_, v___x_490_);
lean_dec(v___x_489_);
if (v___x_491_ == 0)
{
goto v___jp_476_;
}
else
{
lean_object* v___x_492_; 
lean_dec(v_fName_469_);
v___x_492_ = l_Lean_Expr_appArg_x21(v_e_464_);
lean_dec_ref(v_e_464_);
v_e_464_ = v___x_492_;
goto _start;
}
}
v___jp_470_:
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_472_ = lean_name_eq(v_fName_469_, v___x_471_);
lean_dec(v_fName_469_);
if (v___x_472_ == 0)
{
lean_dec_ref(v_e_464_);
return v___x_465_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_473_ = l_Lean_Expr_getAppNumArgs(v_e_464_);
lean_dec_ref(v_e_464_);
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
lean_dec(v___x_473_);
if (v___x_475_ == 0)
{
return v___x_475_;
}
else
{
return v___x_466_;
}
}
}
v___jp_476_:
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_478_ = lean_name_eq(v_fName_469_, v___x_477_);
if (v___x_478_ == 0)
{
goto v___jp_470_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = l_Lean_Expr_getAppNumArgs(v_e_464_);
v___x_480_ = lean_unsigned_to_nat(3u);
v___x_481_ = lean_nat_dec_eq(v___x_479_, v___x_480_);
if (v___x_481_ == 0)
{
lean_dec(v___x_479_);
goto v___jp_470_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
lean_dec(v_fName_469_);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = lean_nat_sub(v___x_479_, v___x_482_);
lean_dec(v___x_479_);
v___x_484_ = lean_nat_sub(v___x_483_, v___x_482_);
lean_dec(v___x_483_);
v___x_485_ = l_Lean_Expr_getRevArg_x21(v_e_464_, v___x_484_);
lean_dec_ref(v_e_464_);
v_e_464_ = v___x_485_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v_f_467_);
lean_dec_ref(v_e_464_);
return v___x_465_;
}
}
}
else
{
lean_dec_ref(v_e_464_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object* v_e_494_){
_start:
{
uint8_t v_res_495_; lean_object* v_r_496_; 
v_res_495_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_494_);
v_r_496_ = lean_box(v_res_495_);
return v_r_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object* v_e_499_){
_start:
{
uint8_t v___y_501_; lean_object* v_f_504_; 
v_f_504_ = l_Lean_Expr_getAppFn(v_e_499_);
switch(lean_obj_tag(v_f_504_))
{
case 9:
{
lean_object* v_a_505_; 
lean_dec_ref(v_e_499_);
v_a_505_ = lean_ctor_get(v_f_504_, 0);
lean_inc_ref(v_a_505_);
lean_dec_ref_known(v_f_504_, 1);
if (lean_obj_tag(v_a_505_) == 0)
{
lean_object* v_val_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_val_506_ = lean_ctor_get(v_a_505_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_a_505_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v_a_505_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_val_506_);
lean_dec(v_a_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 1);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_val_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v___x_514_; 
lean_dec_ref(v_a_505_);
v___x_514_ = lean_box(0);
return v___x_514_;
}
}
case 4:
{
lean_object* v_declName_515_; uint8_t v___y_517_; uint8_t v___y_530_; lean_object* v___x_548_; uint8_t v___x_549_; 
v_declName_515_ = lean_ctor_get(v_f_504_, 0);
lean_inc(v_declName_515_);
lean_dec_ref_known(v_f_504_, 2);
v___x_548_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_549_ = lean_name_eq(v_declName_515_, v___x_548_);
if (v___x_549_ == 0)
{
v___y_530_ = v___x_549_;
goto v___jp_529_;
}
else
{
lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_550_ = l_Lean_Expr_getAppNumArgs(v_e_499_);
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = lean_nat_dec_eq(v___x_550_, v___x_551_);
lean_dec(v___x_550_);
v___y_530_ = v___x_552_;
goto v___jp_529_;
}
v___jp_516_:
{
if (v___y_517_ == 0)
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_519_ = lean_name_eq(v_declName_515_, v___x_518_);
lean_dec(v_declName_515_);
if (v___x_519_ == 0)
{
lean_dec_ref(v_e_499_);
v___y_501_ = v___x_519_;
goto v___jp_500_;
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_520_ = l_Lean_Expr_getAppNumArgs(v_e_499_);
lean_dec_ref(v_e_499_);
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = lean_nat_dec_eq(v___x_520_, v___x_521_);
lean_dec(v___x_520_);
v___y_501_ = v___x_522_;
goto v___jp_500_;
}
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec(v_declName_515_);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = l_Lean_Expr_getAppNumArgs(v_e_499_);
v___x_525_ = lean_nat_sub(v___x_524_, v___x_523_);
lean_dec(v___x_524_);
v___x_526_ = lean_nat_sub(v___x_525_, v___x_523_);
lean_dec(v___x_525_);
v___x_527_ = l_Lean_Expr_getRevArg_x21(v_e_499_, v___x_526_);
lean_dec_ref(v_e_499_);
v_e_499_ = v___x_527_;
goto _start;
}
}
v___jp_529_:
{
if (v___y_530_ == 0)
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_532_ = lean_name_eq(v_declName_515_, v___x_531_);
if (v___x_532_ == 0)
{
v___y_517_ = v___x_532_;
goto v___jp_516_;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_533_ = l_Lean_Expr_getAppNumArgs(v_e_499_);
v___x_534_ = lean_unsigned_to_nat(3u);
v___x_535_ = lean_nat_dec_eq(v___x_533_, v___x_534_);
lean_dec(v___x_533_);
v___y_517_ = v___x_535_;
goto v___jp_516_;
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec(v_declName_515_);
v___x_536_ = l_Lean_Expr_appArg_x21(v_e_499_);
lean_dec_ref(v_e_499_);
v___x_537_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v___x_536_);
if (lean_obj_tag(v___x_537_) == 0)
{
return v___x_537_;
}
else
{
lean_object* v_val_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_547_; 
v_val_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_547_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_547_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_val_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_547_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = lean_nat_add(v_val_538_, v___x_542_);
lean_dec(v_val_538_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_543_);
v___x_545_ = v___x_540_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
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
}
default: 
{
lean_object* v___x_553_; 
lean_dec_ref(v_f_504_);
lean_dec_ref(v_e_499_);
v___x_553_ = lean_box(0);
return v___x_553_;
}
}
v___jp_500_:
{
if (v___y_501_ == 0)
{
lean_object* v___x_502_; 
v___x_502_ = lean_box(0);
return v___x_502_;
}
else
{
lean_object* v___x_503_; 
v___x_503_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0));
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object* v_e_554_){
_start:
{
uint8_t v___x_555_; 
lean_inc_ref(v_e_554_);
v___x_555_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
lean_dec_ref(v_e_554_);
v___x_556_ = lean_box(0);
return v___x_556_;
}
else
{
lean_object* v___x_557_; 
v___x_557_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v_e_554_);
if (lean_obj_tag(v___x_557_) == 1)
{
lean_object* v_val_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_val_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_val_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v_val_558_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
else
{
lean_object* v___x_567_; 
lean_dec(v___x_557_);
v___x_567_ = lean_box(0);
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object* v_e_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v___x_576_; 
lean_inc(v_a_574_);
lean_inc_ref(v_a_573_);
lean_inc(v_a_572_);
lean_inc_ref(v_a_571_);
v___x_576_ = lean_whnf(v_e_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_587_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_587_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_587_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_581_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0));
v___x_582_ = l_Lean_Expr_isConstOf(v_a_577_, v___x_581_);
lean_dec(v_a_577_);
v___x_583_ = lean_box(v___x_582_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_583_);
v___x_585_ = v___x_579_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
v_a_588_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_576_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_576_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object* v_e_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v_e_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object* v_fName_616_, lean_object* v_e_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
uint8_t v___y_624_; uint8_t v___y_654_; uint8_t v___y_679_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6));
v___x_690_ = lean_name_eq(v_fName_616_, v___x_689_);
if (v___x_690_ == 0)
{
v___y_679_ = v___x_690_;
goto v___jp_678_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_692_ = lean_unsigned_to_nat(2u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
lean_dec(v___x_691_);
v___y_679_ = v___x_693_;
goto v___jp_678_;
}
v___jp_623_:
{
if (v___y_624_ == 0)
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_626_ = lean_name_eq(v_fName_616_, v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_box(v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_629_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_630_ = lean_unsigned_to_nat(1u);
v___x_631_ = lean_nat_dec_eq(v___x_629_, v___x_630_);
lean_dec(v___x_629_);
v___x_632_ = lean_box(v___x_631_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_636_ = lean_nat_sub(v___x_635_, v___x_634_);
lean_dec(v___x_635_);
v___x_637_ = lean_nat_sub(v___x_636_, v___x_634_);
lean_dec(v___x_636_);
v___x_638_ = l_Lean_Expr_getRevArg_x21(v_e_617_, v___x_637_);
v___x_639_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_638_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; uint8_t v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
v___x_641_ = lean_unbox(v_a_640_);
lean_dec(v_a_640_);
if (v___x_641_ == 0)
{
return v___x_639_;
}
else
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_651_; 
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; 
v_unused_652_ = lean_ctor_get(v___x_639_, 0);
lean_dec(v_unused_652_);
v___x_643_ = v___x_639_;
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
else
{
lean_dec(v___x_639_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_645_ = l_Lean_Expr_appArg_x21(v_e_617_);
v___x_646_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_645_);
v___x_647_ = lean_box(v___x_646_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_647_);
v___x_649_ = v___x_643_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
return v___x_639_;
}
}
}
v___jp_653_:
{
if (v___y_654_ == 0)
{
lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_655_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2));
v___x_656_ = lean_name_eq(v_fName_616_, v___x_655_);
if (v___x_656_ == 0)
{
v___y_624_ = v___x_656_;
goto v___jp_623_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_657_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_658_ = lean_unsigned_to_nat(6u);
v___x_659_ = lean_nat_dec_eq(v___x_657_, v___x_658_);
lean_dec(v___x_657_);
v___y_624_ = v___x_659_;
goto v___jp_623_;
}
}
else
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_660_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_661_ = lean_unsigned_to_nat(1u);
v___x_662_ = lean_nat_sub(v___x_660_, v___x_661_);
lean_dec(v___x_660_);
v___x_663_ = l_Lean_Expr_getRevArg_x21(v_e_617_, v___x_662_);
v___x_664_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_663_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; uint8_t v___x_666_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
v___x_666_ = lean_unbox(v_a_665_);
lean_dec(v_a_665_);
if (v___x_666_ == 0)
{
return v___x_664_;
}
else
{
lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_676_; 
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_676_ == 0)
{
lean_object* v_unused_677_; 
v_unused_677_ = lean_ctor_get(v___x_664_, 0);
lean_dec(v_unused_677_);
v___x_668_ = v___x_664_;
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
else
{
lean_dec(v___x_664_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_670_ = l_Lean_Expr_appArg_x21(v_e_617_);
v___x_671_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_670_);
v___x_672_ = lean_box(v___x_671_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_672_);
v___x_674_ = v___x_668_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
return v___x_664_;
}
}
}
v___jp_678_:
{
if (v___y_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5));
v___x_681_ = lean_name_eq(v_fName_616_, v___x_680_);
if (v___x_681_ == 0)
{
v___y_654_ = v___x_681_;
goto v___jp_653_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_682_ = l_Lean_Expr_getAppNumArgs(v_e_617_);
v___x_683_ = lean_unsigned_to_nat(4u);
v___x_684_ = lean_nat_dec_eq(v___x_682_, v___x_683_);
lean_dec(v___x_682_);
v___y_654_ = v___x_684_;
goto v___jp_653_;
}
}
else
{
lean_object* v___x_685_; uint8_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_685_ = l_Lean_Expr_appArg_x21(v_e_617_);
v___x_686_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_685_);
v___x_687_ = lean_box(v___x_686_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object* v_fName_694_, lean_object* v_e_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_694_, v_e_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
lean_dec(v_a_699_);
lean_dec_ref(v_a_698_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_e_695_);
lean_dec(v_fName_694_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object* v_fName_702_, lean_object* v_e_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_702_, v_e_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object* v_fName_710_, lean_object* v_e_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(v_fName_710_, v_e_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec_ref(v_e_711_);
lean_dec(v_fName_710_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object* v_e_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
uint8_t v___x_724_; 
v___x_724_ = l_Lean_Expr_hasLooseBVars(v_e_720_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v_e_720_);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
else
{
uint8_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = 0;
v___x_728_ = l_Lean_Expr_isHeadBetaTarget(v_e_720_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec_ref(v_e_720_);
v___x_729_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0));
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = l_Lean_Expr_headBeta(v_e_720_);
v___x_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object* v_e_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(v_e_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object* v_e_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_743_, 0, v_e_739_);
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object* v_e_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(v_e_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
return v_res_749_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_box(0);
v___x_751_ = l_Lean_interruptExceptionId;
v___x_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_750_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_757_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = l_Lean_maxRecDepthErrorMessage;
v___x_764_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
return v___x_764_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_766_ = l_Lean_MessageData_ofFormat(v___x_765_);
return v___x_766_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_768_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_769_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v___x_767_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_770_){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_772_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_ref_770_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object* v_x_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
lean_object* v___y_784_; lean_object* v___y_794_; uint8_t v___y_795_; lean_object* v___y_796_; uint8_t v___y_797_; lean_object* v___y_798_; lean_object* v_toCold_803_; lean_object* v_currRecDepth_804_; lean_object* v_ref_805_; uint8_t v_diag_806_; uint8_t v_suppressElabErrors_807_; lean_object* v_maxRecDepth_808_; lean_object* v_cancelTk_x3f_809_; 
v_toCold_803_ = lean_ctor_get(v___y_780_, 0);
v_currRecDepth_804_ = lean_ctor_get(v___y_780_, 1);
v_ref_805_ = lean_ctor_get(v___y_780_, 2);
v_diag_806_ = lean_ctor_get_uint8(v___y_780_, sizeof(void*)*3);
v_suppressElabErrors_807_ = lean_ctor_get_uint8(v___y_780_, sizeof(void*)*3 + 1);
v_maxRecDepth_808_ = lean_ctor_get(v_toCold_803_, 3);
v_cancelTk_x3f_809_ = lean_ctor_get(v_toCold_803_, 10);
if (lean_obj_tag(v_cancelTk_x3f_809_) == 1)
{
lean_object* v_val_815_; uint8_t v___x_816_; 
v_val_815_ = lean_ctor_get(v_cancelTk_x3f_809_, 0);
v___x_816_ = l_IO_CancelToken_isSet(v_val_815_);
if (v___x_816_ == 0)
{
goto v___jp_810_;
}
else
{
lean_object* v___x_817_; lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec_ref(v_x_778_);
v___x_817_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
goto v___jp_810_;
}
v___jp_783_:
{
if (lean_obj_tag(v___y_784_) == 0)
{
return v___y_784_;
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v_a_785_ = lean_ctor_get(v___y_784_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___y_784_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___y_784_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___y_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
v___jp_793_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_799_ = lean_unsigned_to_nat(1u);
v___x_800_ = lean_nat_add(v___y_798_, v___x_799_);
lean_inc_ref(v___y_794_);
v___x_801_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_801_, 0, v___y_794_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
lean_ctor_set(v___x_801_, 2, v___y_796_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*3, v___y_795_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*3 + 1, v___y_797_);
lean_inc(v___y_781_);
lean_inc(v___y_779_);
v___x_802_ = lean_apply_4(v_x_778_, v___y_779_, v___x_801_, v___y_781_, lean_box(0));
v___y_784_ = v___x_802_;
goto v___jp_783_;
}
v___jp_810_:
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = lean_unsigned_to_nat(0u);
v___x_812_ = lean_nat_dec_eq(v_maxRecDepth_808_, v___x_811_);
if (v___x_812_ == 0)
{
uint8_t v___x_813_; 
v___x_813_ = lean_nat_dec_eq(v_currRecDepth_804_, v_maxRecDepth_808_);
if (v___x_813_ == 0)
{
lean_inc(v_ref_805_);
v___y_794_ = v_toCold_803_;
v___y_795_ = v_diag_806_;
v___y_796_ = v_ref_805_;
v___y_797_ = v_suppressElabErrors_807_;
v___y_798_ = v_currRecDepth_804_;
goto v___jp_793_;
}
else
{
lean_object* v___x_814_; 
lean_dec_ref(v_x_778_);
lean_inc(v_ref_805_);
v___x_814_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_805_);
v___y_784_ = v___x_814_;
goto v___jp_783_;
}
}
else
{
lean_inc(v_ref_805_);
v___y_794_ = v_toCold_803_;
v___y_795_ = v_diag_806_;
v___y_796_ = v_ref_805_;
v___y_797_ = v_suppressElabErrors_807_;
v___y_798_ = v_currRecDepth_804_;
goto v___jp_793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_826_, v___y_827_, v___y_828_, v___y_829_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v___y_827_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_832_, lean_object* v_x_833_){
_start:
{
if (lean_obj_tag(v_x_833_) == 0)
{
lean_object* v___x_834_; 
v___x_834_ = lean_box(0);
return v___x_834_;
}
else
{
lean_object* v_key_835_; lean_object* v_value_836_; lean_object* v_tail_837_; uint8_t v___x_838_; 
v_key_835_ = lean_ctor_get(v_x_833_, 0);
v_value_836_ = lean_ctor_get(v_x_833_, 1);
v_tail_837_ = lean_ctor_get(v_x_833_, 2);
v___x_838_ = l_Lean_ExprStructEq_beq(v_key_835_, v_a_832_);
if (v___x_838_ == 0)
{
v_x_833_ = v_tail_837_;
goto _start;
}
else
{
lean_object* v___x_840_; 
lean_inc(v_value_836_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v_value_836_);
return v___x_840_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_841_, lean_object* v_x_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_841_, v_x_842_);
lean_dec(v_x_842_);
lean_dec_ref(v_a_841_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object* v_m_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_buckets_846_; lean_object* v___x_847_; uint64_t v___x_848_; uint64_t v___x_849_; uint64_t v___x_850_; uint64_t v_fold_851_; uint64_t v___x_852_; uint64_t v___x_853_; uint64_t v___x_854_; size_t v___x_855_; size_t v___x_856_; size_t v___x_857_; size_t v___x_858_; size_t v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v_buckets_846_ = lean_ctor_get(v_m_844_, 1);
v___x_847_ = lean_array_get_size(v_buckets_846_);
v___x_848_ = l_Lean_ExprStructEq_hash(v_a_845_);
v___x_849_ = 32ULL;
v___x_850_ = lean_uint64_shift_right(v___x_848_, v___x_849_);
v_fold_851_ = lean_uint64_xor(v___x_848_, v___x_850_);
v___x_852_ = 16ULL;
v___x_853_ = lean_uint64_shift_right(v_fold_851_, v___x_852_);
v___x_854_ = lean_uint64_xor(v_fold_851_, v___x_853_);
v___x_855_ = lean_uint64_to_usize(v___x_854_);
v___x_856_ = lean_usize_of_nat(v___x_847_);
v___x_857_ = ((size_t)1ULL);
v___x_858_ = lean_usize_sub(v___x_856_, v___x_857_);
v___x_859_ = lean_usize_land(v___x_855_, v___x_858_);
v___x_860_ = lean_array_uget_borrowed(v_buckets_846_, v___x_859_);
v___x_861_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_845_, v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_862_, v_a_863_);
lean_dec_ref(v_a_863_);
lean_dec_ref(v_m_862_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_865_, lean_object* v_b_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_dec(v_b_866_);
lean_dec_ref(v_a_865_);
return v_x_867_;
}
else
{
lean_object* v_key_868_; lean_object* v_value_869_; lean_object* v_tail_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_882_; 
v_key_868_ = lean_ctor_get(v_x_867_, 0);
v_value_869_ = lean_ctor_get(v_x_867_, 1);
v_tail_870_ = lean_ctor_get(v_x_867_, 2);
v_isSharedCheck_882_ = !lean_is_exclusive(v_x_867_);
if (v_isSharedCheck_882_ == 0)
{
v___x_872_ = v_x_867_;
v_isShared_873_ = v_isSharedCheck_882_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_tail_870_);
lean_inc(v_value_869_);
lean_inc(v_key_868_);
lean_dec(v_x_867_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_882_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
uint8_t v___x_874_; 
v___x_874_ = l_Lean_ExprStructEq_beq(v_key_868_, v_a_865_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_875_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_865_, v_b_866_, v_tail_870_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 2, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_key_868_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_value_869_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
else
{
lean_object* v___x_880_; 
lean_dec(v_value_869_);
lean_dec(v_key_868_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v_b_866_);
lean_ctor_set(v___x_872_, 0, v_a_865_);
v___x_880_ = v___x_872_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_865_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_b_866_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_tail_870_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_883_, lean_object* v_x_884_){
_start:
{
if (lean_obj_tag(v_x_884_) == 0)
{
return v_x_883_;
}
else
{
lean_object* v_key_885_; lean_object* v_value_886_; lean_object* v_tail_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_910_; 
v_key_885_ = lean_ctor_get(v_x_884_, 0);
v_value_886_ = lean_ctor_get(v_x_884_, 1);
v_tail_887_ = lean_ctor_get(v_x_884_, 2);
v_isSharedCheck_910_ = !lean_is_exclusive(v_x_884_);
if (v_isSharedCheck_910_ == 0)
{
v___x_889_ = v_x_884_;
v_isShared_890_ = v_isSharedCheck_910_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_tail_887_);
lean_inc(v_value_886_);
lean_inc(v_key_885_);
lean_dec(v_x_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_910_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; uint64_t v___x_892_; uint64_t v___x_893_; uint64_t v___x_894_; uint64_t v_fold_895_; uint64_t v___x_896_; uint64_t v___x_897_; uint64_t v___x_898_; size_t v___x_899_; size_t v___x_900_; size_t v___x_901_; size_t v___x_902_; size_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_891_ = lean_array_get_size(v_x_883_);
v___x_892_ = l_Lean_ExprStructEq_hash(v_key_885_);
v___x_893_ = 32ULL;
v___x_894_ = lean_uint64_shift_right(v___x_892_, v___x_893_);
v_fold_895_ = lean_uint64_xor(v___x_892_, v___x_894_);
v___x_896_ = 16ULL;
v___x_897_ = lean_uint64_shift_right(v_fold_895_, v___x_896_);
v___x_898_ = lean_uint64_xor(v_fold_895_, v___x_897_);
v___x_899_ = lean_uint64_to_usize(v___x_898_);
v___x_900_ = lean_usize_of_nat(v___x_891_);
v___x_901_ = ((size_t)1ULL);
v___x_902_ = lean_usize_sub(v___x_900_, v___x_901_);
v___x_903_ = lean_usize_land(v___x_899_, v___x_902_);
v___x_904_ = lean_array_uget_borrowed(v_x_883_, v___x_903_);
lean_inc(v___x_904_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 2, v___x_904_);
v___x_906_ = v___x_889_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_key_885_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_value_886_);
lean_ctor_set(v_reuseFailAlloc_909_, 2, v___x_904_);
v___x_906_ = v_reuseFailAlloc_909_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_907_; 
v___x_907_ = lean_array_uset(v_x_883_, v___x_903_, v___x_906_);
v_x_883_ = v___x_907_;
v_x_884_ = v_tail_887_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_911_, lean_object* v_source_912_, lean_object* v_target_913_){
_start:
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = lean_array_get_size(v_source_912_);
v___x_915_ = lean_nat_dec_lt(v_i_911_, v___x_914_);
if (v___x_915_ == 0)
{
lean_dec_ref(v_source_912_);
lean_dec(v_i_911_);
return v_target_913_;
}
else
{
lean_object* v_es_916_; lean_object* v___x_917_; lean_object* v_source_918_; lean_object* v_target_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_es_916_ = lean_array_fget(v_source_912_, v_i_911_);
v___x_917_ = lean_box(0);
v_source_918_ = lean_array_fset(v_source_912_, v_i_911_, v___x_917_);
v_target_919_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_913_, v_es_916_);
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_nat_add(v_i_911_, v___x_920_);
lean_dec(v_i_911_);
v_i_911_ = v___x_921_;
v_source_912_ = v_source_918_;
v_target_913_ = v_target_919_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_923_){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v_nbuckets_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_924_ = lean_array_get_size(v_data_923_);
v___x_925_ = lean_unsigned_to_nat(2u);
v_nbuckets_926_ = lean_nat_mul(v___x_924_, v___x_925_);
v___x_927_ = lean_unsigned_to_nat(0u);
v___x_928_ = lean_box(0);
v___x_929_ = lean_mk_array(v_nbuckets_926_, v___x_928_);
v___x_930_ = lean_array_propagate_mark(v_data_923_, v___x_929_);
v___x_931_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_927_, v_data_923_, v___x_930_);
return v___x_931_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_932_, lean_object* v_x_933_){
_start:
{
if (lean_obj_tag(v_x_933_) == 0)
{
uint8_t v___x_934_; 
v___x_934_ = 0;
return v___x_934_;
}
else
{
lean_object* v_key_935_; lean_object* v_tail_936_; uint8_t v___x_937_; 
v_key_935_ = lean_ctor_get(v_x_933_, 0);
v_tail_936_ = lean_ctor_get(v_x_933_, 2);
v___x_937_ = l_Lean_ExprStructEq_beq(v_key_935_, v_a_932_);
if (v___x_937_ == 0)
{
v_x_933_ = v_tail_936_;
goto _start;
}
else
{
return v___x_937_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_939_, lean_object* v_x_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_939_, v_x_940_);
lean_dec(v_x_940_);
lean_dec_ref(v_a_939_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object* v_m_943_, lean_object* v_a_944_, lean_object* v_b_945_){
_start:
{
lean_object* v_size_946_; lean_object* v_buckets_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_990_; 
v_size_946_ = lean_ctor_get(v_m_943_, 0);
v_buckets_947_ = lean_ctor_get(v_m_943_, 1);
v_isSharedCheck_990_ = !lean_is_exclusive(v_m_943_);
if (v_isSharedCheck_990_ == 0)
{
v___x_949_ = v_m_943_;
v_isShared_950_ = v_isSharedCheck_990_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_buckets_947_);
lean_inc(v_size_946_);
lean_dec(v_m_943_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_990_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v___x_954_; uint64_t v_fold_955_; uint64_t v___x_956_; uint64_t v___x_957_; uint64_t v___x_958_; size_t v___x_959_; size_t v___x_960_; size_t v___x_961_; size_t v___x_962_; size_t v___x_963_; lean_object* v_bkt_964_; uint8_t v___x_965_; 
v___x_951_ = lean_array_get_size(v_buckets_947_);
v___x_952_ = l_Lean_ExprStructEq_hash(v_a_944_);
v___x_953_ = 32ULL;
v___x_954_ = lean_uint64_shift_right(v___x_952_, v___x_953_);
v_fold_955_ = lean_uint64_xor(v___x_952_, v___x_954_);
v___x_956_ = 16ULL;
v___x_957_ = lean_uint64_shift_right(v_fold_955_, v___x_956_);
v___x_958_ = lean_uint64_xor(v_fold_955_, v___x_957_);
v___x_959_ = lean_uint64_to_usize(v___x_958_);
v___x_960_ = lean_usize_of_nat(v___x_951_);
v___x_961_ = ((size_t)1ULL);
v___x_962_ = lean_usize_sub(v___x_960_, v___x_961_);
v___x_963_ = lean_usize_land(v___x_959_, v___x_962_);
v_bkt_964_ = lean_array_uget_borrowed(v_buckets_947_, v___x_963_);
v___x_965_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_944_, v_bkt_964_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; lean_object* v_size_x27_967_; lean_object* v___x_968_; lean_object* v_buckets_x27_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_966_ = lean_unsigned_to_nat(1u);
v_size_x27_967_ = lean_nat_add(v_size_946_, v___x_966_);
lean_dec(v_size_946_);
lean_inc(v_bkt_964_);
v___x_968_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_968_, 0, v_a_944_);
lean_ctor_set(v___x_968_, 1, v_b_945_);
lean_ctor_set(v___x_968_, 2, v_bkt_964_);
v_buckets_x27_969_ = lean_array_uset(v_buckets_947_, v___x_963_, v___x_968_);
v___x_970_ = lean_unsigned_to_nat(4u);
v___x_971_ = lean_nat_mul(v_size_x27_967_, v___x_970_);
v___x_972_ = lean_unsigned_to_nat(3u);
v___x_973_ = lean_nat_div(v___x_971_, v___x_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_array_get_size(v_buckets_x27_969_);
v___x_975_ = lean_nat_dec_le(v___x_973_, v___x_974_);
lean_dec(v___x_973_);
if (v___x_975_ == 0)
{
lean_object* v_val_976_; lean_object* v___x_978_; 
v_val_976_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_969_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 1, v_val_976_);
lean_ctor_set(v___x_949_, 0, v_size_x27_967_);
v___x_978_ = v___x_949_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_size_x27_967_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_val_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
else
{
lean_object* v___x_981_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 1, v_buckets_x27_969_);
lean_ctor_set(v___x_949_, 0, v_size_x27_967_);
v___x_981_ = v___x_949_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_size_x27_967_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_buckets_x27_969_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
else
{
lean_object* v___x_983_; lean_object* v_buckets_x27_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
lean_inc(v_bkt_964_);
v___x_983_ = lean_box(0);
v_buckets_x27_984_ = lean_array_uset(v_buckets_947_, v___x_963_, v___x_983_);
v___x_985_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_944_, v_b_945_, v_bkt_964_);
v___x_986_ = lean_array_uset(v_buckets_x27_984_, v___x_963_, v___x_985_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 1, v___x_986_);
v___x_988_ = v___x_949_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_size_946_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object* v_a_991_, lean_object* v_e_992_, lean_object* v_a_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_995_ = lean_st_ref_take(v_a_991_);
v___x_996_ = lean_box(0);
v___x_997_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v___x_995_, v_e_992_, v_a_993_);
v___x_998_ = lean_st_ref_put(v_a_991_, v___x_997_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object* v_a_999_, lean_object* v_e_1000_, lean_object* v_a_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(v_a_999_, v_e_1000_, v_a_1001_);
lean_dec(v_a_999_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = lean_apply_1(v_x_1005_, lean_box(0));
v___x_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1011_, lean_object* v_x_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(v_00_u03b1_1011_, v_x_1012_, v___y_1013_, v___y_1014_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1016_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_box(0);
v___x_1019_ = l_unsafeCast___redArg(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1020_; lean_object* v_dummy_1021_; 
v___x_1020_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
v_dummy_1021_ = l_Lean_Expr_sort___override(v___x_1020_);
return v_dummy_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object* v_pre_1024_, lean_object* v_post_1025_, size_t v_sz_1026_, size_t v_i_1027_, lean_object* v_bs_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
uint8_t v___x_1033_; 
v___x_1033_ = lean_usize_dec_lt(v_i_1027_, v_sz_1026_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec_ref(v_post_1025_);
lean_dec_ref(v_pre_1024_);
v___x_1034_ = l_unsafeCast___redArg(v_bs_1028_);
lean_dec_ref(v_bs_1028_);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
return v___x_1035_;
}
else
{
lean_object* v_v_1036_; lean_object* v___x_1037_; lean_object* v_bs_x27_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_v_1036_ = lean_array_uget(v_bs_1028_, v_i_1027_);
v___x_1037_ = lean_unsigned_to_nat(0u);
v_bs_x27_1038_ = lean_array_uset(v_bs_1028_, v_i_1027_, v___x_1037_);
v___x_1039_ = l_unsafeCast___redArg(v_v_1036_);
lean_dec(v_v_1036_);
lean_inc_ref(v_post_1025_);
lean_inc_ref(v_pre_1024_);
v___x_1040_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1024_, v_post_1025_, v___x_1039_, v___y_1029_, v___y_1030_, v___y_1031_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = ((size_t)1ULL);
v___x_1043_ = lean_usize_add(v_i_1027_, v___x_1042_);
v___x_1044_ = l_unsafeCast___redArg(v_a_1041_);
lean_dec(v_a_1041_);
v___x_1045_ = lean_array_uset(v_bs_x27_1038_, v_i_1027_, v___x_1044_);
v_i_1027_ = v___x_1043_;
v_bs_1028_ = v___x_1045_;
goto _start;
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v_bs_x27_1038_);
lean_dec_ref(v_post_1025_);
lean_dec_ref(v_pre_1024_);
v_a_1047_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1040_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1040_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1055_, lean_object* v_post_1056_, lean_object* v_sz_1057_, lean_object* v_i_1058_, lean_object* v_bs_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
size_t v_sz_boxed_1064_; size_t v_i_boxed_1065_; lean_object* v_res_1066_; 
v_sz_boxed_1064_ = lean_unbox_usize(v_sz_1057_);
lean_dec(v_sz_1057_);
v_i_boxed_1065_ = lean_unbox_usize(v_i_1058_);
lean_dec(v_i_1058_);
v_res_1066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_pre_1055_, v_post_1056_, v_sz_boxed_1064_, v_i_boxed_1065_, v_bs_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object* v_pre_1067_, lean_object* v_post_1068_, lean_object* v_x_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
if (lean_obj_tag(v_x_1069_) == 5)
{
lean_object* v_fn_1076_; lean_object* v_arg_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_fn_1076_ = lean_ctor_get(v_x_1069_, 0);
lean_inc_ref(v_fn_1076_);
v_arg_1077_ = lean_ctor_get(v_x_1069_, 1);
lean_inc_ref(v_arg_1077_);
lean_dec_ref_known(v_x_1069_, 2);
v___x_1078_ = lean_array_set(v_x_1070_, v_x_1071_, v_arg_1077_);
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_sub(v_x_1071_, v___x_1079_);
lean_dec(v_x_1071_);
v_x_1069_ = v_fn_1076_;
v_x_1070_ = v___x_1078_;
v_x_1071_ = v___x_1080_;
goto _start;
}
else
{
lean_object* v___x_1082_; 
lean_dec(v_x_1071_);
lean_inc_ref(v_post_1068_);
lean_inc_ref(v_pre_1067_);
v___x_1082_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1067_, v_post_1068_, v_x_1069_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; size_t v_sz_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_5643__overap_1089_; lean_object* v___x_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v_sz_1084_ = lean_array_size(v_x_1070_);
v___x_1085_ = l_unsafeCast___redArg(v_x_1070_);
lean_dec_ref(v_x_1070_);
v___x_1086_ = lean_box_usize(v_sz_1084_);
v___x_1087_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed__const__1));
lean_inc_ref(v_post_1068_);
lean_inc_ref(v_pre_1067_);
v___x_1088_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed), 9, 5);
lean_closure_set(v___x_1088_, 0, v_pre_1067_);
lean_closure_set(v___x_1088_, 1, v_post_1068_);
lean_closure_set(v___x_1088_, 2, v___x_1086_);
lean_closure_set(v___x_1088_, 3, v___x_1087_);
lean_closure_set(v___x_1088_, 4, v___x_1085_);
v___x_5643__overap_1089_ = l_unsafeCast___redArg(v___x_1088_);
lean_dec_ref(v___x_1088_);
lean_inc(v___y_1074_);
lean_inc_ref(v___y_1073_);
lean_inc(v___y_1072_);
v___x_1090_ = lean_apply_4(v___x_5643__overap_1089_, v___y_1072_, v___y_1073_, v___y_1074_, lean_box(0));
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Lean_mkAppN(v_a_1083_, v_a_1091_);
lean_dec(v_a_1091_);
v___x_1093_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1067_, v_post_1068_, v___x_1092_, v___y_1072_, v___y_1073_, v___y_1074_);
return v___x_1093_;
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
lean_dec(v_a_1083_);
lean_dec_ref(v_post_1068_);
lean_dec_ref(v_pre_1067_);
v_a_1094_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1090_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1090_);
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
lean_dec_ref(v_x_1070_);
lean_dec_ref(v_post_1068_);
lean_dec_ref(v_pre_1067_);
return v___x_1082_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object* v___x_1102_, lean_object* v_pre_1103_, lean_object* v_e_1104_, lean_object* v_post_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_Core_checkSystem(v___x_1102_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v___x_1111_; 
lean_dec_ref_known(v___x_1110_, 1);
lean_inc_ref(v_pre_1103_);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1107_);
lean_inc_ref(v_e_1104_);
v___x_1111_ = lean_apply_4(v_pre_1103_, v_e_1104_, v___y_1107_, v___y_1108_, lean_box(0));
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1227_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1114_ = v___x_1111_;
v_isShared_1115_ = v_isSharedCheck_1227_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1227_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___y_1117_; 
switch(lean_obj_tag(v_a_1112_))
{
case 0:
{
lean_object* v_e_1217_; lean_object* v___x_1219_; 
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_e_1104_);
lean_dec_ref(v_pre_1103_);
v_e_1217_ = lean_ctor_get(v_a_1112_, 0);
lean_inc_ref(v_e_1217_);
lean_dec_ref_known(v_a_1112_, 1);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v_e_1217_);
v___x_1219_ = v___x_1114_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_e_1217_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
case 1:
{
lean_object* v_e_1221_; lean_object* v___x_1222_; 
lean_del_object(v___x_1114_);
lean_dec_ref(v_e_1104_);
v_e_1221_ = lean_ctor_get(v_a_1112_, 0);
lean_inc_ref(v_e_1221_);
lean_dec_ref_known(v_a_1112_, 1);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1222_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_e_1221_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; lean_object* v___x_1224_; 
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1224_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v_a_1223_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1224_;
}
else
{
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1222_;
}
}
default: 
{
lean_object* v_e_x3f_1225_; 
lean_del_object(v___x_1114_);
v_e_x3f_1225_ = lean_ctor_get(v_a_1112_, 0);
lean_inc(v_e_x3f_1225_);
lean_dec_ref_known(v_a_1112_, 1);
if (lean_obj_tag(v_e_x3f_1225_) == 0)
{
v___y_1117_ = v_e_1104_;
goto v___jp_1116_;
}
else
{
lean_object* v_val_1226_; 
lean_dec_ref(v_e_1104_);
v_val_1226_ = lean_ctor_get(v_e_x3f_1225_, 0);
lean_inc(v_val_1226_);
lean_dec_ref_known(v_e_x3f_1225_, 1);
v___y_1117_ = v_val_1226_;
goto v___jp_1116_;
}
}
}
v___jp_1116_:
{
switch(lean_obj_tag(v___y_1117_))
{
case 7:
{
lean_object* v_binderName_1118_; lean_object* v_binderType_1119_; lean_object* v_body_1120_; uint8_t v_binderInfo_1121_; lean_object* v___x_1122_; 
v_binderName_1118_ = lean_ctor_get(v___y_1117_, 0);
v_binderType_1119_ = lean_ctor_get(v___y_1117_, 1);
v_body_1120_ = lean_ctor_get(v___y_1117_, 2);
v_binderInfo_1121_ = lean_ctor_get_uint8(v___y_1117_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1119_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1122_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_binderType_1119_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1124_; 
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_a_1123_);
lean_dec_ref_known(v___x_1122_, 1);
lean_inc_ref(v_body_1120_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1124_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_body_1120_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; size_t v___x_1126_; size_t v___x_1127_; uint8_t v___x_1128_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = lean_ptr_addr(v_binderType_1119_);
v___x_1127_ = lean_ptr_addr(v_a_1123_);
v___x_1128_ = lean_usize_dec_eq(v___x_1126_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
lean_inc(v_binderName_1118_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1129_ = l_Lean_Expr_forallE___override(v_binderName_1118_, v_a_1123_, v_a_1125_, v_binderInfo_1121_);
v___x_1130_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1129_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1130_;
}
else
{
size_t v___x_1131_; size_t v___x_1132_; uint8_t v___x_1133_; 
v___x_1131_ = lean_ptr_addr(v_body_1120_);
v___x_1132_ = lean_ptr_addr(v_a_1125_);
v___x_1133_ = lean_usize_dec_eq(v___x_1131_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_inc(v_binderName_1118_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1134_ = l_Lean_Expr_forallE___override(v_binderName_1118_, v_a_1123_, v_a_1125_, v_binderInfo_1121_);
v___x_1135_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1134_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1135_;
}
else
{
uint8_t v___x_1136_; 
v___x_1136_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1121_, v_binderInfo_1121_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_inc(v_binderName_1118_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1137_ = l_Lean_Expr_forallE___override(v_binderName_1118_, v_a_1123_, v_a_1125_, v_binderInfo_1121_);
v___x_1138_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1137_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1138_;
}
else
{
lean_object* v___x_1139_; 
lean_dec(v_a_1125_);
lean_dec(v_a_1123_);
v___x_1139_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1139_;
}
}
}
}
else
{
lean_dec(v_a_1123_);
lean_dec_ref_known(v___y_1117_, 3);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1124_;
}
}
else
{
lean_dec_ref_known(v___y_1117_, 3);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1122_;
}
}
case 6:
{
lean_object* v_binderName_1140_; lean_object* v_binderType_1141_; lean_object* v_body_1142_; uint8_t v_binderInfo_1143_; lean_object* v___x_1144_; 
v_binderName_1140_ = lean_ctor_get(v___y_1117_, 0);
v_binderType_1141_ = lean_ctor_get(v___y_1117_, 1);
v_body_1142_ = lean_ctor_get(v___y_1117_, 2);
v_binderInfo_1143_ = lean_ctor_get_uint8(v___y_1117_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1141_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1144_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_binderType_1141_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
lean_inc_ref(v_body_1142_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1146_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_body_1142_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; size_t v___x_1148_; size_t v___x_1149_; uint8_t v___x_1150_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = lean_ptr_addr(v_binderType_1141_);
v___x_1149_ = lean_ptr_addr(v_a_1145_);
v___x_1150_ = lean_usize_dec_eq(v___x_1148_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
lean_inc(v_binderName_1140_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1151_ = l_Lean_Expr_lam___override(v_binderName_1140_, v_a_1145_, v_a_1147_, v_binderInfo_1143_);
v___x_1152_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1151_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1152_;
}
else
{
size_t v___x_1153_; size_t v___x_1154_; uint8_t v___x_1155_; 
v___x_1153_ = lean_ptr_addr(v_body_1142_);
v___x_1154_ = lean_ptr_addr(v_a_1147_);
v___x_1155_ = lean_usize_dec_eq(v___x_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
lean_inc(v_binderName_1140_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1156_ = l_Lean_Expr_lam___override(v_binderName_1140_, v_a_1145_, v_a_1147_, v_binderInfo_1143_);
v___x_1157_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1156_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1157_;
}
else
{
uint8_t v___x_1158_; 
v___x_1158_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1143_, v_binderInfo_1143_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
lean_inc(v_binderName_1140_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1159_ = l_Lean_Expr_lam___override(v_binderName_1140_, v_a_1145_, v_a_1147_, v_binderInfo_1143_);
v___x_1160_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1159_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1160_;
}
else
{
lean_object* v___x_1161_; 
lean_dec(v_a_1147_);
lean_dec(v_a_1145_);
v___x_1161_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1161_;
}
}
}
}
else
{
lean_dec(v_a_1145_);
lean_dec_ref_known(v___y_1117_, 3);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1146_;
}
}
else
{
lean_dec_ref_known(v___y_1117_, 3);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1144_;
}
}
case 8:
{
lean_object* v_declName_1162_; lean_object* v_type_1163_; lean_object* v_value_1164_; lean_object* v_body_1165_; uint8_t v_nondep_1166_; lean_object* v___x_1167_; 
v_declName_1162_ = lean_ctor_get(v___y_1117_, 0);
v_type_1163_ = lean_ctor_get(v___y_1117_, 1);
v_value_1164_ = lean_ctor_get(v___y_1117_, 2);
v_body_1165_ = lean_ctor_get(v___y_1117_, 3);
v_nondep_1166_ = lean_ctor_get_uint8(v___y_1117_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1163_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1167_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_type_1163_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; lean_object* v___x_1169_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1167_, 1);
lean_inc_ref(v_value_1164_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1169_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_value_1164_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1171_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1169_, 1);
lean_inc_ref(v_body_1165_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1171_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_body_1165_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; size_t v___x_1173_; size_t v___x_1174_; uint8_t v___x_1175_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_a_1172_);
lean_dec_ref_known(v___x_1171_, 1);
v___x_1173_ = lean_ptr_addr(v_type_1163_);
v___x_1174_ = lean_ptr_addr(v_a_1168_);
v___x_1175_ = lean_usize_dec_eq(v___x_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_inc(v_declName_1162_);
lean_dec_ref_known(v___y_1117_, 4);
v___x_1176_ = l_Lean_Expr_letE___override(v_declName_1162_, v_a_1168_, v_a_1170_, v_a_1172_, v_nondep_1166_);
v___x_1177_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1176_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1177_;
}
else
{
size_t v___x_1178_; size_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1178_ = lean_ptr_addr(v_value_1164_);
v___x_1179_ = lean_ptr_addr(v_a_1170_);
v___x_1180_ = lean_usize_dec_eq(v___x_1178_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_inc(v_declName_1162_);
lean_dec_ref_known(v___y_1117_, 4);
v___x_1181_ = l_Lean_Expr_letE___override(v_declName_1162_, v_a_1168_, v_a_1170_, v_a_1172_, v_nondep_1166_);
v___x_1182_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1181_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1182_;
}
else
{
size_t v___x_1183_; size_t v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = lean_ptr_addr(v_body_1165_);
v___x_1184_ = lean_ptr_addr(v_a_1172_);
v___x_1185_ = lean_usize_dec_eq(v___x_1183_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_inc(v_declName_1162_);
lean_dec_ref_known(v___y_1117_, 4);
v___x_1186_ = l_Lean_Expr_letE___override(v_declName_1162_, v_a_1168_, v_a_1170_, v_a_1172_, v_nondep_1166_);
v___x_1187_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1186_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1187_;
}
else
{
lean_object* v___x_1188_; 
lean_dec(v_a_1172_);
lean_dec(v_a_1170_);
lean_dec(v_a_1168_);
v___x_1188_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1188_;
}
}
}
}
else
{
lean_dec(v_a_1170_);
lean_dec(v_a_1168_);
lean_dec_ref_known(v___y_1117_, 4);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1171_;
}
}
else
{
lean_dec(v_a_1168_);
lean_dec_ref_known(v___y_1117_, 4);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1169_;
}
}
else
{
lean_dec_ref_known(v___y_1117_, 4);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1167_;
}
}
case 5:
{
lean_object* v_dummy_1189_; lean_object* v_nargs_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v_dummy_1189_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1);
v_nargs_1190_ = l_Lean_Expr_getAppNumArgs(v___y_1117_);
lean_inc(v_nargs_1190_);
v___x_1191_ = lean_mk_array(v_nargs_1190_, v_dummy_1189_);
v___x_1192_ = lean_unsigned_to_nat(1u);
v___x_1193_ = lean_nat_sub(v_nargs_1190_, v___x_1192_);
lean_dec(v_nargs_1190_);
v___x_1194_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1103_, v_post_1105_, v___y_1117_, v___x_1191_, v___x_1193_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1194_;
}
case 10:
{
lean_object* v_data_1195_; lean_object* v_expr_1196_; lean_object* v___x_1197_; 
v_data_1195_ = lean_ctor_get(v___y_1117_, 0);
v_expr_1196_ = lean_ctor_get(v___y_1117_, 1);
lean_inc_ref(v_expr_1196_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1197_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_expr_1196_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; size_t v___x_1199_; size_t v___x_1200_; uint8_t v___x_1201_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1199_ = lean_ptr_addr(v_expr_1196_);
v___x_1200_ = lean_ptr_addr(v_a_1198_);
v___x_1201_ = lean_usize_dec_eq(v___x_1199_, v___x_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_inc(v_data_1195_);
lean_dec_ref_known(v___y_1117_, 2);
v___x_1202_ = l_Lean_Expr_mdata___override(v_data_1195_, v_a_1198_);
v___x_1203_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1202_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; 
lean_dec(v_a_1198_);
v___x_1204_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1204_;
}
}
else
{
lean_dec_ref_known(v___y_1117_, 2);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1197_;
}
}
case 11:
{
lean_object* v_typeName_1205_; lean_object* v_idx_1206_; lean_object* v_struct_1207_; lean_object* v___x_1208_; 
v_typeName_1205_ = lean_ctor_get(v___y_1117_, 0);
v_idx_1206_ = lean_ctor_get(v___y_1117_, 1);
v_struct_1207_ = lean_ctor_get(v___y_1117_, 2);
lean_inc_ref(v_struct_1207_);
lean_inc_ref(v_post_1105_);
lean_inc_ref(v_pre_1103_);
v___x_1208_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1103_, v_post_1105_, v_struct_1207_, v___y_1106_, v___y_1107_, v___y_1108_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; size_t v___x_1210_; size_t v___x_1211_; uint8_t v___x_1212_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = lean_ptr_addr(v_struct_1207_);
v___x_1211_ = lean_ptr_addr(v_a_1209_);
v___x_1212_ = lean_usize_dec_eq(v___x_1210_, v___x_1211_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
lean_inc(v_idx_1206_);
lean_inc(v_typeName_1205_);
lean_dec_ref_known(v___y_1117_, 3);
v___x_1213_ = l_Lean_Expr_proj___override(v_typeName_1205_, v_idx_1206_, v_a_1209_);
v___x_1214_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___x_1213_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1214_;
}
else
{
lean_object* v___x_1215_; 
lean_dec(v_a_1209_);
v___x_1215_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1215_;
}
}
else
{
lean_dec_ref_known(v___y_1117_, 3);
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_pre_1103_);
return v___x_1208_;
}
}
default: 
{
lean_object* v___x_1216_; 
v___x_1216_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1103_, v_post_1105_, v___y_1117_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1216_;
}
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_e_1104_);
lean_dec_ref(v_pre_1103_);
v_a_1228_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1111_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1111_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec_ref(v_post_1105_);
lean_dec_ref(v_e_1104_);
lean_dec_ref(v_pre_1103_);
v_a_1236_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1110_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1110_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1244_, lean_object* v_pre_1245_, lean_object* v_e_1246_, lean_object* v_post_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(v___x_1244_, v_pre_1245_, v_e_1246_, v_post_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object* v_pre_1253_, lean_object* v_post_1254_, lean_object* v_e_1255_, lean_object* v_a_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_inc(v_a_1256_);
v___x_1260_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1260_, 0, lean_box(0));
lean_closure_set(v___x_1260_, 1, lean_box(0));
lean_closure_set(v___x_1260_, 2, v_a_1256_);
v___x_1261_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___x_1260_, v___y_1257_, v___y_1258_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1293_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1293_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1293_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; 
v___x_1266_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_a_1262_, v_e_1255_);
lean_dec(v_a_1262_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v___x_1267_; lean_object* v___f_1268_; lean_object* v___x_1269_; 
lean_del_object(v___x_1264_);
v___x_1267_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0));
lean_inc_ref(v_e_1255_);
v___f_1268_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1268_, 0, v___x_1267_);
lean_closure_set(v___f_1268_, 1, v_pre_1253_);
lean_closure_set(v___f_1268_, 2, v_e_1255_);
lean_closure_set(v___f_1268_, 3, v_post_1254_);
v___x_1269_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v___f_1268_, v_a_1256_, v___y_1257_, v___y_1258_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___f_1271_; lean_object* v___x_1272_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc_n(v_a_1270_, 2);
lean_dec_ref_known(v___x_1269_, 1);
lean_inc(v_a_1256_);
v___f_1271_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1271_, 0, v_a_1256_);
lean_closure_set(v___f_1271_, 1, v_e_1255_);
lean_closure_set(v___f_1271_, 2, v_a_1270_);
v___x_1272_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___f_1271_, v___y_1257_, v___y_1258_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v___x_1272_, 0);
lean_dec(v_unused_1280_);
v___x_1274_ = v___x_1272_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_dec(v___x_1272_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v_a_1270_);
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1270_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
lean_dec(v_a_1270_);
v_a_1281_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1272_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1272_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
else
{
lean_dec_ref(v_e_1255_);
return v___x_1269_;
}
}
else
{
lean_object* v_val_1289_; lean_object* v___x_1291_; 
lean_dec_ref(v_e_1255_);
lean_dec_ref(v_post_1254_);
lean_dec_ref(v_pre_1253_);
v_val_1289_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_val_1289_);
lean_dec_ref_known(v___x_1266_, 1);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_val_1289_);
v___x_1291_ = v___x_1264_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_val_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_e_1255_);
lean_dec_ref(v_post_1254_);
lean_dec_ref(v_pre_1253_);
v_a_1294_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1261_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1261_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object* v_pre_1302_, lean_object* v_post_1303_, lean_object* v_e_1304_, lean_object* v_a_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; 
lean_inc_ref(v_post_1303_);
lean_inc(v___y_1307_);
lean_inc_ref(v___y_1306_);
lean_inc_ref(v_e_1304_);
v___x_1309_ = lean_apply_4(v_post_1303_, v_e_1304_, v___y_1306_, v___y_1307_, lean_box(0));
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1328_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1328_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1328_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
switch(lean_obj_tag(v_a_1310_))
{
case 0:
{
lean_object* v_e_1314_; lean_object* v___x_1316_; 
lean_dec_ref(v_e_1304_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1302_);
v_e_1314_ = lean_ctor_get(v_a_1310_, 0);
lean_inc_ref(v_e_1314_);
lean_dec_ref_known(v_a_1310_, 1);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 0, v_e_1314_);
v___x_1316_ = v___x_1312_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_e_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
case 1:
{
lean_object* v_e_1318_; lean_object* v___x_1319_; 
lean_del_object(v___x_1312_);
lean_dec_ref(v_e_1304_);
v_e_1318_ = lean_ctor_get(v_a_1310_, 0);
lean_inc_ref(v_e_1318_);
lean_dec_ref_known(v_a_1310_, 1);
v___x_1319_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1302_, v_post_1303_, v_e_1318_, v_a_1305_, v___y_1306_, v___y_1307_);
return v___x_1319_;
}
default: 
{
lean_object* v_e_x3f_1320_; 
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1302_);
v_e_x3f_1320_ = lean_ctor_get(v_a_1310_, 0);
lean_inc(v_e_x3f_1320_);
lean_dec_ref_known(v_a_1310_, 1);
if (lean_obj_tag(v_e_x3f_1320_) == 0)
{
lean_object* v___x_1322_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 0, v_e_1304_);
v___x_1322_ = v___x_1312_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_e_1304_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
else
{
lean_object* v_val_1324_; lean_object* v___x_1326_; 
lean_dec_ref(v_e_1304_);
v_val_1324_ = lean_ctor_get(v_e_x3f_1320_, 0);
lean_inc(v_val_1324_);
lean_dec_ref_known(v_e_x3f_1320_, 1);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 0, v_val_1324_);
v___x_1326_ = v___x_1312_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_val_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec_ref(v_e_1304_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1302_);
v_a_1329_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1309_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1309_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1337_, lean_object* v_post_1338_, lean_object* v_e_1339_, lean_object* v_a_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1337_, v_post_1338_, v_e_1339_, v_a_1340_, v___y_1341_, v___y_1342_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v_a_1340_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1345_, lean_object* v_post_1346_, lean_object* v_x_1347_, lean_object* v_x_1348_, lean_object* v_x_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1345_, v_post_1346_, v_x_1347_, v_x_1348_, v_x_1349_, v___y_1350_, v___y_1351_, v___y_1352_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object* v_pre_1355_, lean_object* v_post_1356_, lean_object* v_e_1357_, lean_object* v_a_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1355_, v_post_1356_, v_e_1357_, v_a_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v_a_1358_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object* v_00_u03b1_1363_, lean_object* v_x_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_apply_1(v_x_1364_, lean_box(0));
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(v_00_u03b1_1370_, v_x_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1375_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1376_ = lean_box(0);
v___x_1377_ = lean_unsigned_to_nat(16u);
v___x_1378_ = lean_mk_array(v___x_1377_, v___x_1376_);
return v___x_1378_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1379_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0);
v___x_1380_ = lean_unsigned_to_nat(0u);
v___x_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
lean_ctor_set(v___x_1381_, 1, v___x_1379_);
return v___x_1381_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1);
v___x_1383_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1383_, 0, lean_box(0));
lean_closure_set(v___x_1383_, 1, lean_box(0));
lean_closure_set(v___x_1383_, 2, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object* v_input_1384_, lean_object* v_pre_1385_, lean_object* v_post_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v_a_1392_; lean_object* v___x_1393_; 
v___x_1390_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2);
v___x_1391_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1390_, v___y_1387_, v___y_1388_);
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref(v___x_1391_);
v___x_1393_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1385_, v_post_1386_, v_input_1384_, v_a_1392_, v___y_1387_, v___y_1388_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1395_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1395_, 0, lean_box(0));
lean_closure_set(v___x_1395_, 1, lean_box(0));
lean_closure_set(v___x_1395_, 2, v_a_1392_);
v___x_1396_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1395_, v___y_1387_, v___y_1388_);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v___x_1396_, 0);
lean_dec(v_unused_1404_);
v___x_1398_ = v___x_1396_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_dec(v___x_1396_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v_a_1394_);
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1394_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
else
{
lean_dec(v_a_1392_);
return v___x_1393_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object* v_input_1405_, lean_object* v_pre_1406_, lean_object* v_post_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_input_1405_, v_pre_1406_, v_post_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object* v_e_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v___f_1418_; lean_object* v___f_1419_; lean_object* v___x_1420_; 
v___f_1418_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0));
v___f_1419_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1));
v___x_1420_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_e_1414_, v___f_1418_, v___f_1419_, v_a_1415_, v_a_1416_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object* v_e_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_e_1421_, v_a_1422_, v_a_1423_);
lean_dec(v_a_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1426_, lean_object* v_m_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_1427_, v_a_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1430_, lean_object* v_m_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_00_u03b2_1430_, v_m_1431_, v_a_1432_);
lean_dec_ref(v_a_1432_);
lean_dec_ref(v_m_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1434_, lean_object* v_ref_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1435_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1440_, lean_object* v_ref_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1440_, v_ref_1441_, v___y_1442_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1456_, lean_object* v_x_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(v_00_u03b1_1463_, v_x_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1470_, lean_object* v_m_1471_, lean_object* v_a_1472_, lean_object* v_b_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v_m_1471_, v_a_1472_, v_b_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1475_, lean_object* v_a_1476_, lean_object* v_x_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1476_, v_x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1479_, lean_object* v_a_1480_, lean_object* v_x_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1479_, v_a_1480_, v_x_1481_);
lean_dec(v_x_1481_);
lean_dec_ref(v_a_1480_);
return v_res_1482_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1483_, lean_object* v_a_1484_, lean_object* v_x_1485_){
_start:
{
uint8_t v___x_1486_; 
v___x_1486_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1484_, v_x_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1487_, lean_object* v_a_1488_, lean_object* v_x_1489_){
_start:
{
uint8_t v_res_1490_; lean_object* v_r_1491_; 
v_res_1490_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1487_, v_a_1488_, v_x_1489_);
lean_dec(v_x_1489_);
lean_dec_ref(v_a_1488_);
v_r_1491_ = lean_box(v_res_1490_);
return v_r_1491_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1492_, lean_object* v_data_1493_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1493_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1495_, lean_object* v_a_1496_, lean_object* v_b_1497_, lean_object* v_x_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1496_, v_b_1497_, v_x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1500_, lean_object* v_i_1501_, lean_object* v_source_1502_, lean_object* v_target_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1501_, v_source_1502_, v_target_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1506_, v_x_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object* v_declName_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v_env_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1512_ = lean_st_ref_get(v___y_1510_);
v_env_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc_ref(v_env_1513_);
lean_dec(v___x_1512_);
v___x_1514_ = l_Lean_isRecCore(v_env_1513_, v_declName_1509_);
v___x_1515_ = lean_box(v___x_1514_);
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1517_, v___y_1518_);
lean_dec(v___y_1518_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object* v_declName_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1521_, v___y_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object* v_declName_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(v_declName_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v___x_1538_; lean_object* v_env_1539_; uint8_t v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1538_ = lean_st_ref_get(v___y_1536_);
v_env_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc_ref(v_env_1539_);
lean_dec(v___x_1538_);
v___x_1540_ = l_Lean_getReducibilityStatusCore(v_env_1539_, v_declName_1535_);
v___x_1541_ = lean_box(v___x_1540_);
v___x_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1543_, v___y_1544_);
lean_dec(v___y_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object* v_declName_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1569_; 
v___x_1553_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1547_, v___y_1551_);
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1569_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1569_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
uint8_t v___x_1558_; 
v___x_1558_ = lean_unbox(v_a_1554_);
lean_dec(v_a_1554_);
if (v___x_1558_ == 0)
{
uint8_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1559_ = 1;
v___x_1560_ = lean_box(v___x_1559_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1560_);
v___x_1562_ = v___x_1556_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
else
{
uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1567_; 
v___x_1564_ = 0;
v___x_1565_ = lean_box(v___x_1564_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1565_);
v___x_1567_ = v___x_1556_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1565_);
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
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object* v_declName_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object* v_a_1577_, lean_object* v_b_1578_){
_start:
{
lean_object* v_array_1580_; lean_object* v_start_1581_; lean_object* v_stop_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1599_; 
v_array_1580_ = lean_ctor_get(v_a_1577_, 0);
v_start_1581_ = lean_ctor_get(v_a_1577_, 1);
v_stop_1582_ = lean_ctor_get(v_a_1577_, 2);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_a_1577_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1584_ = v_a_1577_;
v_isShared_1585_ = v_isSharedCheck_1599_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_stop_1582_);
lean_inc(v_start_1581_);
lean_inc(v_array_1580_);
lean_dec(v_a_1577_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1599_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
uint8_t v___x_1586_; 
v___x_1586_ = lean_nat_dec_lt(v_start_1581_, v_stop_1582_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
lean_del_object(v___x_1584_);
lean_dec(v_stop_1582_);
lean_dec(v_start_1581_);
lean_dec_ref(v_array_1580_);
v___x_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1587_, 0, v_b_1578_);
return v___x_1587_;
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1592_; 
v___x_1588_ = lean_box(0);
v___x_1589_ = lean_unsigned_to_nat(1u);
v___x_1590_ = lean_nat_add(v_start_1581_, v___x_1589_);
lean_inc_ref(v_array_1580_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 1, v___x_1590_);
v___x_1592_ = v___x_1584_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_array_1580_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v___x_1590_);
lean_ctor_set(v_reuseFailAlloc_1598_, 2, v_stop_1582_);
v___x_1592_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
lean_object* v___x_1593_; uint8_t v___x_1594_; 
v___x_1593_ = lean_array_fget(v_array_1580_, v_start_1581_);
lean_dec(v_start_1581_);
lean_dec_ref(v_array_1580_);
v___x_1594_ = l_Lean_Expr_hasExprMVar(v___x_1593_);
lean_dec(v___x_1593_);
if (v___x_1594_ == 0)
{
v_a_1577_ = v___x_1592_;
v_b_1578_ = v___x_1588_;
goto _start;
}
else
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_dec_ref_known(v___x_1596_, 1);
v_a_1577_ = v___x_1592_;
v_b_1578_ = v___x_1588_;
goto _start;
}
else
{
lean_dec_ref(v___x_1592_);
return v___x_1596_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_1600_, lean_object* v_b_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1600_, v_b_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object* v_e_1612_, uint8_t v_isMatch_1613_, uint8_t v_root_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v___y_1621_; lean_object* v_b_1622_; lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1612_, v_root_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1796_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1796_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1796_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___y_1639_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; 
if (v_root_1614_ == 0)
{
lean_object* v___x_1784_; 
lean_inc(v_a_1634_);
v___x_1784_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1634_);
if (lean_obj_tag(v___x_1784_) == 1)
{
lean_object* v_val_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1795_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_val_1785_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1787_ = v___x_1784_;
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_val_1785_);
lean_dec(v___x_1784_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set_tag(v___x_1787_, 2);
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_val_1785_);
v___x_1790_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
return v___x_1793_;
}
}
}
else
{
lean_dec(v___x_1784_);
v___y_1649_ = v_a_1615_;
v___y_1650_ = v_a_1616_;
v___y_1651_ = v_a_1617_;
v___y_1652_ = v_a_1618_;
goto v___jp_1648_;
}
}
else
{
v___y_1649_ = v_a_1615_;
v___y_1650_ = v_a_1616_;
v___y_1651_ = v_a_1617_;
v___y_1652_ = v_a_1618_;
goto v___jp_1648_;
}
v___jp_1638_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1640_ = l_Lean_Expr_getAppNumArgs(v_a_1634_);
lean_inc(v___x_1640_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___y_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_mk_empty_array_with_capacity(v___x_1640_);
lean_dec(v___x_1640_);
v___x_1643_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1634_, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1641_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1644_);
v___x_1646_ = v___x_1636_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
v___jp_1648_:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_Expr_getAppFn(v_a_1634_);
switch(lean_obj_tag(v___x_1653_))
{
case 1:
{
lean_object* v_fvarId_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_del_object(v___x_1636_);
v_fvarId_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_fvarId_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = l_Lean_Expr_getAppNumArgs(v_a_1634_);
lean_inc(v___x_1655_);
v___x_1656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_fvarId_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_mk_empty_array_with_capacity(v___x_1655_);
lean_dec(v___x_1655_);
v___x_1658_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1634_, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1656_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
case 2:
{
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
if (v_isMatch_1613_ == 0)
{
lean_object* v_mvarId_1661_; lean_object* v___x_1662_; uint8_t v_isDefEqStuckEx_1663_; 
v_mvarId_1661_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_mvarId_1661_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1662_ = l_Lean_Meta_Context_config(v___y_1649_);
v_isDefEqStuckEx_1663_ = lean_ctor_get_uint8(v___x_1662_, 4);
lean_dec_ref(v___x_1662_);
if (v_isDefEqStuckEx_1663_ == 0)
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1661_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1678_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1667_ = v___x_1664_;
v_isShared_1668_ = v_isSharedCheck_1678_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1664_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1678_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
uint8_t v___x_1669_; 
v___x_1669_ = lean_unbox(v_a_1665_);
lean_dec(v_a_1665_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1670_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1670_);
v___x_1672_ = v___x_1667_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
else
{
lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1674_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1674_);
v___x_1676_ = v___x_1667_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
v_a_1679_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1664_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1664_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec(v_mvarId_1661_);
v___x_1687_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
return v___x_1688_;
}
}
else
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec_ref_known(v___x_1653_, 1);
v___x_1689_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
}
case 4:
{
lean_object* v_declName_1691_; lean_object* v___x_1692_; uint8_t v_isDefEqStuckEx_1693_; 
v_declName_1691_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_declName_1691_);
lean_dec_ref_known(v___x_1653_, 2);
v___x_1692_ = l_Lean_Meta_Context_config(v___y_1649_);
v_isDefEqStuckEx_1693_ = lean_ctor_get_uint8(v___x_1692_, 4);
lean_dec_ref(v___x_1692_);
if (v_isDefEqStuckEx_1693_ == 0)
{
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
uint8_t v___x_1694_; 
v___x_1694_ = l_Lean_Expr_hasExprMVar(v_a_1634_);
if (v___x_1694_ == 0)
{
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1695_; 
lean_inc(v_declName_1691_);
v___x_1695_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1691_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; uint8_t v___x_1697_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = lean_unbox(v_a_1696_);
lean_dec(v_a_1696_);
if (v___x_1697_ == 0)
{
lean_object* v___x_1698_; lean_object* v_env_1699_; lean_object* v___x_1700_; 
v___x_1698_ = lean_st_ref_get(v___y_1652_);
v_env_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc_ref(v_env_1699_);
lean_dec(v___x_1698_);
v___x_1700_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1699_, v_a_1634_);
if (lean_obj_tag(v___x_1700_) == 1)
{
lean_object* v_val_1701_; lean_object* v_numDiscrs_1702_; lean_object* v_nargs_1703_; lean_object* v_dummy_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v_val_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v_numDiscrs_1702_ = lean_ctor_get(v_val_1701_, 1);
lean_inc(v_numDiscrs_1702_);
v_nargs_1703_ = l_Lean_Expr_getAppNumArgs(v_a_1634_);
v_dummy_1704_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__1);
lean_inc(v_nargs_1703_);
v___x_1705_ = lean_mk_array(v_nargs_1703_, v_dummy_1704_);
v___x_1706_ = lean_unsigned_to_nat(1u);
v___x_1707_ = lean_nat_sub(v_nargs_1703_, v___x_1706_);
lean_dec(v_nargs_1703_);
lean_inc(v_a_1634_);
v___x_1708_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1634_, v___x_1705_, v___x_1707_);
v___x_1709_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1701_);
lean_dec(v_val_1701_);
v___x_1710_ = lean_nat_add(v___x_1709_, v_numDiscrs_1702_);
lean_dec(v_numDiscrs_1702_);
v___x_1711_ = l_Array_toSubarray___redArg(v___x_1708_, v___x_1709_, v___x_1710_);
v___x_1712_ = lean_box(0);
v___x_1713_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v___x_1711_, v___x_1712_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_dec_ref_known(v___x_1713_, 1);
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_declName_1691_);
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
else
{
lean_object* v___x_1722_; lean_object* v_a_1723_; uint8_t v___x_1724_; 
lean_dec(v___x_1700_);
lean_inc(v_declName_1691_);
v___x_1722_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1691_, v___y_1652_);
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref(v___x_1722_);
v___x_1724_ = lean_unbox(v_a_1723_);
lean_dec(v_a_1723_);
if (v___x_1724_ == 0)
{
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_dec_ref_known(v___x_1725_, 1);
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_declName_1691_);
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1725_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1725_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
}
}
else
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_dec_ref_known(v___x_1734_, 1);
v___y_1639_ = v_declName_1691_;
goto v___jp_1638_;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
lean_dec(v_declName_1691_);
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v___x_1734_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1734_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec(v_declName_1691_);
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1743_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1695_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1695_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderType_1751_; lean_object* v_body_1752_; uint8_t v___x_1753_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_binderType_1751_ = lean_ctor_get(v___x_1653_, 1);
lean_inc_ref(v_binderType_1751_);
v_body_1752_ = lean_ctor_get(v___x_1653_, 2);
lean_inc_ref(v_body_1752_);
lean_dec_ref_known(v___x_1653_, 3);
v___x_1753_ = l_Lean_Expr_hasLooseBVars(v_body_1752_);
if (v___x_1753_ == 0)
{
v___y_1621_ = v_binderType_1751_;
v_b_1622_ = v_body_1752_;
goto v___jp_1620_;
}
else
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_1752_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___y_1621_ = v_binderType_1751_;
v_b_1622_ = v_a_1755_;
goto v___jp_1620_;
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec_ref(v_binderType_1751_);
v_a_1756_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1754_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1754_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
}
case 9:
{
lean_object* v_a_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1764_ = lean_ctor_get(v___x_1653_, 0);
lean_inc_ref(v_a_1764_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1765_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1765_, 0, v_a_1764_);
v___x_1766_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
return v___x_1768_;
}
case 11:
{
lean_object* v_typeName_1769_; lean_object* v_idx_1770_; lean_object* v_struct_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_del_object(v___x_1636_);
v_typeName_1769_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_typeName_1769_);
v_idx_1770_ = lean_ctor_get(v___x_1653_, 1);
lean_inc(v_idx_1770_);
v_struct_1771_ = lean_ctor_get(v___x_1653_, 2);
lean_inc_ref(v_struct_1771_);
lean_dec_ref_known(v___x_1653_, 3);
v___x_1772_ = l_Lean_Expr_getAppNumArgs(v_a_1634_);
lean_inc(v___x_1772_);
v___x_1773_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1773_, 0, v_typeName_1769_);
lean_ctor_set(v___x_1773_, 1, v_idx_1770_);
lean_ctor_set(v___x_1773_, 2, v___x_1772_);
v___x_1774_ = lean_unsigned_to_nat(1u);
v___x_1775_ = lean_mk_empty_array_with_capacity(v___x_1774_);
v___x_1776_ = lean_array_push(v___x_1775_, v_struct_1771_);
v___x_1777_ = lean_mk_empty_array_with_capacity(v___x_1772_);
lean_dec(v___x_1772_);
v___x_1778_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1634_, v___x_1777_);
v___x_1779_ = l_Array_append___redArg(v___x_1776_, v___x_1778_);
lean_dec_ref(v___x_1778_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1773_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
return v___x_1781_;
}
default: 
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
lean_dec_ref(v___x_1653_);
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v___x_1782_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
return v___x_1783_;
}
}
}
}
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1804_; 
v_a_1797_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1799_ = v___x_1633_;
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1633_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1800_ == 0)
{
v___x_1802_ = v___x_1799_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_a_1797_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
v___jp_1620_:
{
uint8_t v___x_1623_; 
v___x_1623_ = l_Lean_Expr_hasLooseBVars(v_b_1622_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1624_ = lean_box(5);
v___x_1625_ = lean_unsigned_to_nat(2u);
v___x_1626_ = lean_mk_empty_array_with_capacity(v___x_1625_);
v___x_1627_ = lean_array_push(v___x_1626_, v___y_1621_);
v___x_1628_ = lean_array_push(v___x_1627_, v_b_1622_);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1624_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
return v___x_1630_;
}
else
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_dec_ref(v_b_1622_);
lean_dec_ref(v___y_1621_);
v___x_1631_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
return v___x_1632_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object* v_e_1805_, lean_object* v_isMatch_1806_, lean_object* v_root_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_){
_start:
{
uint8_t v_isMatch_boxed_1813_; uint8_t v_root_boxed_1814_; lean_object* v_res_1815_; 
v_isMatch_boxed_1813_ = lean_unbox(v_isMatch_1806_);
v_root_boxed_1814_ = lean_unbox(v_root_1807_);
v_res_1815_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1805_, v_isMatch_boxed_1813_, v_root_boxed_1814_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_);
lean_dec(v_a_1811_);
lean_dec_ref(v_a_1810_);
lean_dec(v_a_1809_);
lean_dec_ref(v_a_1808_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v___x_1822_; 
v___x_1822_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1816_, v___y_1820_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(v_declName_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object* v_inst_1830_, lean_object* v_R_1831_, lean_object* v_a_1832_, lean_object* v_b_1833_, lean_object* v_c_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1832_, v_b_1833_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object* v_inst_1841_, lean_object* v_R_1842_, lean_object* v_a_1843_, lean_object* v_b_1844_, lean_object* v_c_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(v_inst_1841_, v_R_1842_, v_a_1843_, v_b_1844_, v_c_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object* v_e_1852_, uint8_t v_root_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
uint8_t v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = 1;
v___x_1860_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1852_, v___x_1859_, v_root_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object* v_e_1861_, lean_object* v_root_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
uint8_t v_root_boxed_1868_; lean_object* v_res_1869_; 
v_root_boxed_1868_ = lean_unbox(v_root_1862_);
v_res_1869_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(v_e_1861_, v_root_boxed_1868_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
lean_dec(v_a_1866_);
lean_dec_ref(v_a_1865_);
lean_dec(v_a_1864_);
lean_dec_ref(v_a_1863_);
return v_res_1869_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_unsigned_to_nat(16u);
v___x_1874_ = lean_mk_array(v___x_1873_, v___x_1872_);
return v___x_1874_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2(void){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1875_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
v___x_1876_ = lean_unsigned_to_nat(0u);
v___x_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
lean_ctor_set(v___x_1877_, 1, v___x_1875_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1880_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_1881_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_1884_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
lean_ctor_set(v___x_1884_, 1, v___x_1882_);
lean_ctor_set(v___x_1884_, 2, v___x_1881_);
lean_ctor_set(v___x_1884_, 3, v___x_1880_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg(){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object* v___dummy_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v_res_1888_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0(void){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object* v_00_u03b1_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg(){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object* v___dummy_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object* v_a_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1897_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1900_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1901_ = lean_unsigned_to_nat(0u);
v___x_1902_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_1903_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___x_1901_);
lean_ctor_set(v___x_1903_, 2, v___x_1900_);
lean_ctor_set(v___x_1903_, 3, v___x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg(){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object* v___dummy_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v_res_1907_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0(void){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object* v_00_u03b1_1909_){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object* v_x_1911_, lean_object* v_x_1912_){
_start:
{
lean_object* v_values_1913_; lean_object* v_star_1914_; lean_object* v_children_1915_; lean_object* v_pending_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1924_; 
v_values_1913_ = lean_ctor_get(v_x_1911_, 0);
v_star_1914_ = lean_ctor_get(v_x_1911_, 1);
v_children_1915_ = lean_ctor_get(v_x_1911_, 2);
v_pending_1916_ = lean_ctor_get(v_x_1911_, 3);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_x_1911_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1918_ = v_x_1911_;
v_isShared_1919_ = v_isSharedCheck_1924_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_pending_1916_);
lean_inc(v_children_1915_);
lean_inc(v_star_1914_);
lean_inc(v_values_1913_);
lean_dec(v_x_1911_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1924_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1920_; lean_object* v___x_1922_; 
v___x_1920_ = lean_array_push(v_pending_1916_, v_x_1912_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 3, v___x_1920_);
v___x_1922_ = v___x_1918_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_values_1913_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_star_1914_);
lean_ctor_set(v_reuseFailAlloc_1923_, 2, v_children_1915_);
lean_ctor_set(v_reuseFailAlloc_1923_, 3, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object* v_00_u03b1_1925_, lean_object* v_x_1926_, lean_object* v_x_1927_){
_start:
{
lean_object* v___x_1928_; 
v___x_1928_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_x_1926_, v_x_1927_);
return v___x_1928_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1929_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_1930_ = lean_unsigned_to_nat(1u);
v___x_1931_ = lean_mk_empty_array_with_capacity(v___x_1930_);
v___x_1932_ = lean_array_push(v___x_1931_, v___x_1929_);
return v___x_1932_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1934_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v___x_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
lean_ctor_set(v___x_1935_, 1, v___x_1933_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg(){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object* v___dummy_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v_res_1939_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object* v_00_u03b1_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object* v_msgData_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v___x_1949_; lean_object* v_env_1950_; lean_object* v___x_1951_; lean_object* v_toCold_1952_; lean_object* v_mctx_1953_; lean_object* v_lctx_1954_; lean_object* v_options_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1949_ = lean_st_ref_get(v___y_1947_);
v_env_1950_ = lean_ctor_get(v___x_1949_, 0);
lean_inc_ref(v_env_1950_);
lean_dec(v___x_1949_);
v___x_1951_ = lean_st_ref_get(v___y_1945_);
v_toCold_1952_ = lean_ctor_get(v___y_1946_, 0);
v_mctx_1953_ = lean_ctor_get(v___x_1951_, 0);
lean_inc_ref(v_mctx_1953_);
lean_dec(v___x_1951_);
v_lctx_1954_ = lean_ctor_get(v___y_1944_, 2);
v_options_1955_ = lean_ctor_get(v_toCold_1952_, 2);
lean_inc_ref(v_options_1955_);
lean_inc_ref(v_lctx_1954_);
v___x_1956_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1956_, 0, v_env_1950_);
lean_ctor_set(v___x_1956_, 1, v_mctx_1953_);
lean_ctor_set(v___x_1956_, 2, v_lctx_1954_);
lean_ctor_set(v___x_1956_, 3, v_options_1955_);
v___x_1957_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
lean_ctor_set(v___x_1957_, 1, v_msgData_1943_);
v___x_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object* v_msgData_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msgData_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object* v_msg_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_ref_1972_; lean_object* v___x_1973_; lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1982_; 
v_ref_1972_ = lean_ctor_get(v___y_1969_, 2);
v___x_1973_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msg_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
lean_inc(v_ref_1972_);
v___x_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_ref_1972_);
lean_ctor_set(v___x_1978_, 1, v_a_1974_);
if (v_isShared_1977_ == 0)
{
lean_ctor_set_tag(v___x_1976_, 1);
lean_ctor_set(v___x_1976_, 0, v___x_1978_);
v___x_1980_ = v___x_1976_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1978_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object* v_msg_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
return v_res_1989_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0));
v___x_1992_ = l_Lean_stringToMessageData(v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t v_root_1993_, lean_object* v_todo_1994_, lean_object* v_e_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v_v_2002_; uint8_t v___x_2006_; 
v___x_2006_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_1995_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; 
v___x_2007_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1995_, v_root_1993_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2150_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2010_ = v___x_2007_;
v_isShared_2011_ = v_isSharedCheck_2150_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_2007_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2150_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v_k_2014_; lean_object* v_nargs_2015_; lean_object* v_todo_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; 
v___x_2012_ = l_Lean_Expr_getAppFn(v_a_2008_);
switch(lean_obj_tag(v___x_2012_))
{
case 9:
{
lean_object* v_a_2059_; 
lean_del_object(v___x_2010_);
lean_dec(v_a_2008_);
v_a_2059_ = lean_ctor_get(v___x_2012_, 0);
lean_inc_ref(v_a_2059_);
lean_dec_ref_known(v___x_2012_, 1);
v_v_2002_ = v_a_2059_;
goto v___jp_2001_;
}
case 4:
{
lean_object* v_declName_2060_; lean_object* v___y_2062_; lean_object* v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; 
lean_del_object(v___x_2010_);
v_declName_2060_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_declName_2060_);
if (v_root_1993_ == 0)
{
lean_object* v___x_2068_; 
lean_inc(v_a_2008_);
v___x_2068_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_2008_);
if (lean_obj_tag(v___x_2068_) == 1)
{
lean_object* v_val_2069_; 
lean_dec(v_declName_2060_);
lean_dec_ref_known(v___x_2012_, 2);
lean_dec(v_a_2008_);
v_val_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_val_2069_);
lean_dec_ref_known(v___x_2068_, 1);
v_v_2002_ = v_val_2069_;
goto v___jp_2001_;
}
else
{
lean_object* v___x_2070_; 
lean_dec(v___x_2068_);
v___x_2070_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_declName_2060_, v_a_2008_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2081_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2073_ = v___x_2070_;
v_isShared_2074_ = v_isSharedCheck_2081_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2070_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2081_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
uint8_t v___x_2075_; 
v___x_2075_ = lean_unbox(v_a_2071_);
lean_dec(v_a_2071_);
if (v___x_2075_ == 0)
{
lean_del_object(v___x_2073_);
v___y_2062_ = v_a_1996_;
v___y_2063_ = v_a_1997_;
v___y_2064_ = v_a_1998_;
v___y_2065_ = v_a_1999_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
lean_dec(v_declName_2060_);
lean_dec_ref_known(v___x_2012_, 2);
lean_dec(v_a_2008_);
v___x_2076_ = lean_box(3);
v___x_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v_todo_1994_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2077_);
v___x_2079_ = v___x_2073_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_dec(v_declName_2060_);
lean_dec_ref_known(v___x_2012_, 2);
lean_dec(v_a_2008_);
lean_dec_ref(v_todo_1994_);
v_a_2082_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2070_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2070_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
}
else
{
v___y_2062_ = v_a_1996_;
v___y_2063_ = v_a_1997_;
v___y_2064_ = v_a_1998_;
v___y_2065_ = v_a_1999_;
goto v___jp_2061_;
}
v___jp_2061_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2066_ = l_Lean_Expr_getAppNumArgs(v_a_2008_);
lean_inc(v___x_2066_);
v___x_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2067_, 0, v_declName_2060_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v_k_2014_ = v___x_2067_;
v_nargs_2015_ = v___x_2066_;
v_todo_2016_ = v_todo_1994_;
v___y_2017_ = v___y_2062_;
v___y_2018_ = v___y_2063_;
v___y_2019_ = v___y_2064_;
v___y_2020_ = v___y_2065_;
goto v___jp_2013_;
}
}
case 11:
{
lean_object* v_typeName_2090_; lean_object* v_idx_2091_; lean_object* v_struct_2092_; lean_object* v___x_2093_; lean_object* v___y_2095_; lean_object* v_env_2099_; uint8_t v___x_2100_; 
lean_del_object(v___x_2010_);
v_typeName_2090_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_typeName_2090_);
v_idx_2091_ = lean_ctor_get(v___x_2012_, 1);
lean_inc(v_idx_2091_);
v_struct_2092_ = lean_ctor_get(v___x_2012_, 2);
lean_inc_ref(v_struct_2092_);
v___x_2093_ = lean_st_ref_get(v_a_1999_);
v_env_2099_ = lean_ctor_get(v___x_2093_, 0);
lean_inc_ref(v_env_2099_);
lean_dec(v___x_2093_);
v___x_2100_ = l_Lean_isClass(v_env_2099_, v_typeName_2090_);
if (v___x_2100_ == 0)
{
v___y_2095_ = v_struct_2092_;
goto v___jp_2094_;
}
else
{
lean_object* v___x_2101_; 
v___x_2101_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_2092_);
v___y_2095_ = v___x_2101_;
goto v___jp_2094_;
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = l_Lean_Expr_getAppNumArgs(v_a_2008_);
lean_inc(v___x_2096_);
v___x_2097_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2097_, 0, v_typeName_2090_);
lean_ctor_set(v___x_2097_, 1, v_idx_2091_);
lean_ctor_set(v___x_2097_, 2, v___x_2096_);
v___x_2098_ = lean_array_push(v_todo_1994_, v___y_2095_);
v_k_2014_ = v___x_2097_;
v_nargs_2015_ = v___x_2096_;
v_todo_2016_ = v___x_2098_;
v___y_2017_ = v_a_1996_;
v___y_2018_ = v_a_1997_;
v___y_2019_ = v_a_1998_;
v___y_2020_ = v_a_1999_;
goto v___jp_2013_;
}
}
case 1:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
lean_dec_ref_known(v___x_2012_, 1);
lean_dec(v_a_2008_);
v___x_2102_ = lean_box(3);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v_todo_1994_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2103_);
v___x_2105_ = v___x_2010_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
case 2:
{
lean_object* v_mvarId_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; 
lean_dec(v_a_2008_);
v_mvarId_2107_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_mvarId_2107_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2108_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_2109_ = l_Lean_instBEqMVarId_beq(v_mvarId_2107_, v___x_2108_);
lean_dec(v_mvarId_2107_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_del_object(v___x_2010_);
lean_dec_ref(v_todo_1994_);
v___x_2110_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1, &l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1);
v___x_2111_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v___x_2110_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
return v___x_2111_;
}
else
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2112_ = lean_box(3);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v_todo_1994_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2113_);
v___x_2115_ = v___x_2010_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
case 7:
{
lean_object* v_binderType_2117_; lean_object* v_body_2118_; lean_object* v_b_2120_; uint8_t v___x_2134_; 
lean_dec(v_a_2008_);
v_binderType_2117_ = lean_ctor_get(v___x_2012_, 1);
lean_inc_ref(v_binderType_2117_);
v_body_2118_ = lean_ctor_get(v___x_2012_, 2);
lean_inc_ref(v_body_2118_);
lean_dec_ref_known(v___x_2012_, 3);
v___x_2134_ = l_Lean_Expr_hasLooseBVars(v_body_2118_);
if (v___x_2134_ == 0)
{
v_b_2120_ = v_body_2118_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2135_; 
v___x_2135_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_2118_, v_a_1998_, v_a_1999_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2135_, 1);
v_b_2120_ = v_a_2136_;
goto v___jp_2119_;
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v_binderType_2117_);
lean_del_object(v___x_2010_);
lean_dec_ref(v_todo_1994_);
v_a_2137_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2135_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2135_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
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
v___jp_2119_:
{
uint8_t v___x_2121_; 
v___x_2121_ = l_Lean_Expr_hasLooseBVars(v_b_2120_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2122_ = lean_box(5);
v___x_2123_ = lean_array_push(v_todo_1994_, v_binderType_2117_);
v___x_2124_ = lean_array_push(v___x_2123_, v_b_2120_);
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2122_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2125_);
v___x_2127_ = v___x_2010_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2132_; 
lean_dec_ref(v_b_2120_);
lean_dec_ref(v_binderType_2117_);
v___x_2129_ = lean_box(4);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v_todo_1994_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2130_);
v___x_2132_ = v___x_2010_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
default: 
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2148_; 
lean_dec_ref(v___x_2012_);
lean_dec(v_a_2008_);
v___x_2145_ = lean_box(4);
v___x_2146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
lean_ctor_set(v___x_2146_, 1, v_todo_1994_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2146_);
v___x_2148_ = v___x_2010_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
v___jp_2013_:
{
lean_object* v___x_2021_; 
lean_inc(v_nargs_2015_);
v___x_2021_ = l_Lean_Meta_getFunInfoNArgs(v___x_2012_, v_nargs_2015_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v_paramInfo_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2049_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v_paramInfo_2023_ = lean_ctor_get(v_a_2022_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_a_2022_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v_a_2022_, 1);
lean_dec(v_unused_2050_);
v___x_2025_ = v_a_2022_;
v_isShared_2026_ = v_isSharedCheck_2049_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_paramInfo_2023_);
lean_dec(v_a_2022_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2049_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2027_ = lean_unsigned_to_nat(1u);
v___x_2028_ = lean_nat_sub(v_nargs_2015_, v___x_2027_);
lean_dec(v_nargs_2015_);
v___x_2029_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_paramInfo_2023_, v___x_2028_, v_a_2008_, v_todo_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
lean_dec_ref(v_paramInfo_2023_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2040_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2040_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2040_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v_a_2030_);
lean_ctor_set(v___x_2025_, 0, v_k_2014_);
v___x_2035_ = v___x_2025_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_k_2014_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2037_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___x_2035_);
v___x_2037_ = v___x_2032_;
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
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_del_object(v___x_2025_);
lean_dec(v_k_2014_);
v_a_2041_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2029_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2029_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec_ref(v_todo_2016_);
lean_dec(v_nargs_2015_);
lean_dec(v_k_2014_);
lean_dec(v_a_2008_);
v_a_2051_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2021_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2021_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec_ref(v_todo_1994_);
v_a_2151_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2007_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2007_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec_ref(v_e_1995_);
v___x_2159_ = lean_box(3);
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
lean_ctor_set(v___x_2160_, 1, v_todo_1994_);
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
return v___x_2161_;
}
v___jp_2001_:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2003_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2003_, 0, v_v_2002_);
v___x_2004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
lean_ctor_set(v___x_2004_, 1, v_todo_1994_);
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2004_);
return v___x_2005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object* v_root_2162_, lean_object* v_todo_2163_, lean_object* v_e_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_){
_start:
{
uint8_t v_root_boxed_2170_; lean_object* v_res_2171_; 
v_root_boxed_2170_ = lean_unbox(v_root_2162_);
v_res_2171_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v_root_boxed_2170_, v_todo_2163_, v_e_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
lean_dec(v_a_2168_);
lean_dec_ref(v_a_2167_);
lean_dec(v_a_2166_);
lean_dec_ref(v_a_2165_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object* v_00_u03b1_2172_, lean_object* v_msg_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object* v_00_u03b1_2180_, lean_object* v_msg_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(v_00_u03b1_2180_, v_msg_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
return v_res_2187_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_unsigned_to_nat(8u);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object* v_e_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2195_ = 1;
v___x_2196_ = lean_unsigned_to_nat(8u);
v___x_2197_ = lean_mk_empty_array_with_capacity(v___x_2196_);
v___x_2198_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2195_, v___x_2197_, v_e_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object* v_e_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_e_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object* v_op_2206_, uint8_t v_root_2207_, lean_object* v_todo_2208_, lean_object* v_keys_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___x_2217_; 
v___x_2215_ = lean_array_get_size(v_todo_2208_);
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = lean_nat_dec_eq(v___x_2215_, v___x_2216_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v_e_2221_; lean_object* v_todo_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2218_ = l_Lean_instInhabitedExpr;
v___x_2219_ = lean_unsigned_to_nat(1u);
v___x_2220_ = lean_nat_sub(v___x_2215_, v___x_2219_);
v_e_2221_ = lean_array_get(v___x_2218_, v_todo_2208_, v___x_2220_);
lean_dec(v___x_2220_);
v_todo_2222_ = lean_array_pop(v_todo_2208_);
v___x_2223_ = lean_box(v_root_2207_);
lean_inc_ref(v_op_2206_);
lean_inc(v_a_2213_);
lean_inc_ref(v_a_2212_);
lean_inc(v_a_2211_);
lean_inc_ref(v_a_2210_);
v___x_2224_ = lean_apply_8(v_op_2206_, v___x_2223_, v_todo_2222_, v_e_2221_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, lean_box(0));
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v_fst_2226_; lean_object* v_snd_2227_; lean_object* v___x_2228_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v_fst_2226_ = lean_ctor_get(v_a_2225_, 0);
lean_inc(v_fst_2226_);
v_snd_2227_ = lean_ctor_get(v_a_2225_, 1);
lean_inc(v_snd_2227_);
lean_dec(v_a_2225_);
v___x_2228_ = lean_array_push(v_keys_2209_, v_fst_2226_);
v_root_2207_ = v___x_2217_;
v_todo_2208_ = v_snd_2227_;
v_keys_2209_ = v___x_2228_;
goto _start;
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec_ref(v_keys_2209_);
lean_dec_ref(v_op_2206_);
v_a_2230_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2224_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2224_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
else
{
lean_object* v___x_2238_; 
lean_dec_ref(v_todo_2208_);
lean_dec_ref(v_op_2206_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_keys_2209_);
return v___x_2238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object* v_op_2239_, lean_object* v_root_2240_, lean_object* v_todo_2241_, lean_object* v_keys_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_){
_start:
{
uint8_t v_root_boxed_2248_; lean_object* v_res_2249_; 
v_root_boxed_2248_ = lean_unbox(v_root_2240_);
v_res_2249_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2239_, v_root_boxed_2248_, v_todo_2241_, v_keys_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
lean_dec(v_a_2246_);
lean_dec_ref(v_a_2245_);
lean_dec(v_a_2244_);
lean_dec_ref(v_a_2243_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object* v_e_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v_op_2257_; lean_object* v___x_2258_; lean_object* v_todo_2259_; uint8_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v_op_2257_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_patternPath___closed__0));
v___x_2258_ = lean_unsigned_to_nat(8u);
v_todo_2259_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___x_2260_ = 1;
lean_inc_ref(v_todo_2259_);
v___x_2261_ = lean_array_push(v_todo_2259_, v_e_2251_);
v___x_2262_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2257_, v___x_2260_, v___x_2261_, v_todo_2259_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2255_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object* v_e_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_Meta_LazyDiscrTree_patternPath(v_e_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
lean_dec(v_a_2267_);
lean_dec_ref(v_a_2266_);
lean_dec(v_a_2265_);
lean_dec_ref(v_a_2264_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t v_root_2270_, lean_object* v_todo_2271_, lean_object* v_e_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = 1;
v___x_2279_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_2272_, v___x_2278_, v_root_2270_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2297_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2297_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2297_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v_fst_2284_; lean_object* v_snd_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2296_; 
v_fst_2284_ = lean_ctor_get(v_a_2280_, 0);
v_snd_2285_ = lean_ctor_get(v_a_2280_, 1);
v_isSharedCheck_2296_ = !lean_is_exclusive(v_a_2280_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2287_ = v_a_2280_;
v_isShared_2288_ = v_isSharedCheck_2296_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_snd_2285_);
lean_inc(v_fst_2284_);
lean_dec(v_a_2280_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2296_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; lean_object* v___x_2291_; 
v___x_2289_ = l_Array_append___redArg(v_todo_2271_, v_snd_2285_);
lean_dec(v_snd_2285_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 1, v___x_2289_);
v___x_2291_ = v___x_2287_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_fst_2284_);
lean_ctor_set(v_reuseFailAlloc_2295_, 1, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
lean_object* v___x_2293_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2291_);
v___x_2293_ = v___x_2282_;
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
}
else
{
lean_dec_ref(v_todo_2271_);
return v___x_2279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object* v_root_2298_, lean_object* v_todo_2299_, lean_object* v_e_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
uint8_t v_root_boxed_2306_; lean_object* v_res_2307_; 
v_root_boxed_2306_ = lean_unbox(v_root_2298_);
v_res_2307_ = l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(v_root_boxed_2306_, v_todo_2299_, v_e_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object* v_e_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v_op_2315_; lean_object* v___x_2316_; lean_object* v_todo_2317_; uint8_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v_op_2315_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_targetPath___closed__0));
v___x_2316_ = lean_unsigned_to_nat(8u);
v_todo_2317_ = lean_mk_empty_array_with_capacity(v___x_2316_);
v___x_2318_ = 1;
lean_inc_ref(v_todo_2317_);
v___x_2319_ = lean_array_push(v_todo_2317_, v_e_2309_);
v___x_2320_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2315_, v___x_2318_, v___x_2319_, v_todo_2317_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object* v_e_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lean_Meta_LazyDiscrTree_targetPath(v_e_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
lean_dec(v_a_2323_);
lean_dec_ref(v_a_2322_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object* v_tries_2328_, lean_object* v_m_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_st_mk_ref(v_tries_2328_);
lean_inc(v___x_2335_);
v___x_2336_ = lean_apply_6(v_m_2329_, v___x_2335_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, lean_box(0));
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2346_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2339_ = v___x_2336_;
v_isShared_2340_ = v_isSharedCheck_2346_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2346_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2344_; 
v___x_2341_ = lean_st_ref_get(v___x_2335_);
lean_dec(v___x_2335_);
v___x_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2342_, 0, v_a_2337_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2342_);
v___x_2344_ = v___x_2339_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_dec(v___x_2335_);
v_a_2347_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2336_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2336_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object* v_tries_2355_, lean_object* v_m_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2355_, v_m_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object* v_d_2363_, lean_object* v_m_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_tries_2370_; lean_object* v_roots_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2424_; 
v_tries_2370_ = lean_ctor_get(v_d_2363_, 0);
v_roots_2371_ = lean_ctor_get(v_d_2363_, 1);
v_isSharedCheck_2424_ = !lean_is_exclusive(v_d_2363_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2373_ = v_d_2363_;
v_isShared_2374_ = v_isSharedCheck_2424_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_roots_2371_);
lean_inc(v_tries_2370_);
lean_dec(v_d_2363_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2424_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___y_2376_; lean_object* v___x_2405_; uint8_t v_transparency_2406_; uint8_t v___x_2407_; uint8_t v___x_2408_; 
v___x_2405_ = l_Lean_Meta_Context_config(v_a_2365_);
v_transparency_2406_ = lean_ctor_get_uint8(v___x_2405_, 9);
lean_dec_ref(v___x_2405_);
v___x_2407_ = 2;
v___x_2408_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2406_, v___x_2407_);
if (v___x_2408_ == 0)
{
lean_object* v_keyedConfig_2409_; uint8_t v_trackZetaDelta_2410_; lean_object* v_zetaDeltaSet_2411_; lean_object* v_lctx_2412_; lean_object* v_localInstances_2413_; lean_object* v_defEqCtx_x3f_2414_; lean_object* v_synthPendingDepth_2415_; lean_object* v_customCanUnfoldPredicate_x3f_2416_; uint8_t v_univApprox_2417_; uint8_t v_inTypeClassResolution_2418_; uint8_t v_cacheInferType_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v_keyedConfig_2409_ = lean_ctor_get(v_a_2365_, 0);
v_trackZetaDelta_2410_ = lean_ctor_get_uint8(v_a_2365_, sizeof(void*)*7);
v_zetaDeltaSet_2411_ = lean_ctor_get(v_a_2365_, 1);
v_lctx_2412_ = lean_ctor_get(v_a_2365_, 2);
v_localInstances_2413_ = lean_ctor_get(v_a_2365_, 3);
v_defEqCtx_x3f_2414_ = lean_ctor_get(v_a_2365_, 4);
v_synthPendingDepth_2415_ = lean_ctor_get(v_a_2365_, 5);
v_customCanUnfoldPredicate_x3f_2416_ = lean_ctor_get(v_a_2365_, 6);
v_univApprox_2417_ = lean_ctor_get_uint8(v_a_2365_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2418_ = lean_ctor_get_uint8(v_a_2365_, sizeof(void*)*7 + 2);
v_cacheInferType_2419_ = lean_ctor_get_uint8(v_a_2365_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2409_);
v___x_2420_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2407_, v_keyedConfig_2409_);
lean_inc(v_customCanUnfoldPredicate_x3f_2416_);
lean_inc(v_synthPendingDepth_2415_);
lean_inc(v_defEqCtx_x3f_2414_);
lean_inc_ref(v_localInstances_2413_);
lean_inc_ref(v_lctx_2412_);
lean_inc(v_zetaDeltaSet_2411_);
v___x_2421_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
lean_ctor_set(v___x_2421_, 1, v_zetaDeltaSet_2411_);
lean_ctor_set(v___x_2421_, 2, v_lctx_2412_);
lean_ctor_set(v___x_2421_, 3, v_localInstances_2413_);
lean_ctor_set(v___x_2421_, 4, v_defEqCtx_x3f_2414_);
lean_ctor_set(v___x_2421_, 5, v_synthPendingDepth_2415_);
lean_ctor_set(v___x_2421_, 6, v_customCanUnfoldPredicate_x3f_2416_);
lean_ctor_set_uint8(v___x_2421_, sizeof(void*)*7, v_trackZetaDelta_2410_);
lean_ctor_set_uint8(v___x_2421_, sizeof(void*)*7 + 1, v_univApprox_2417_);
lean_ctor_set_uint8(v___x_2421_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2418_);
lean_ctor_set_uint8(v___x_2421_, sizeof(void*)*7 + 3, v_cacheInferType_2419_);
lean_inc(v_a_2368_);
lean_inc_ref(v_a_2367_);
lean_inc(v_a_2366_);
v___x_2422_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2370_, v_m_2364_, v___x_2421_, v_a_2366_, v_a_2367_, v_a_2368_);
v___y_2376_ = v___x_2422_;
goto v___jp_2375_;
}
else
{
lean_object* v___x_2423_; 
lean_inc(v_a_2368_);
lean_inc_ref(v_a_2367_);
lean_inc(v_a_2366_);
lean_inc_ref(v_a_2365_);
v___x_2423_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2370_, v_m_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_);
v___y_2376_ = v___x_2423_;
goto v___jp_2375_;
}
v___jp_2375_:
{
if (lean_obj_tag(v___y_2376_) == 0)
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2396_; 
v_a_2377_ = lean_ctor_get(v___y_2376_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___y_2376_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2379_ = v___y_2376_;
v_isShared_2380_ = v_isSharedCheck_2396_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___y_2376_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2396_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v_fst_2381_; lean_object* v_snd_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2395_; 
v_fst_2381_ = lean_ctor_get(v_a_2377_, 0);
v_snd_2382_ = lean_ctor_get(v_a_2377_, 1);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_a_2377_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2384_ = v_a_2377_;
v_isShared_2385_ = v_isSharedCheck_2395_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_snd_2382_);
lean_inc(v_fst_2381_);
lean_dec(v_a_2377_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2395_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v_snd_2382_);
v___x_2387_ = v___x_2373_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_snd_2382_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v_roots_2371_);
v___x_2387_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2389_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 1, v___x_2387_);
v___x_2389_ = v___x_2384_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_fst_2381_);
lean_ctor_set(v_reuseFailAlloc_2393_, 1, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
lean_object* v___x_2391_; 
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 0, v___x_2389_);
v___x_2391_ = v___x_2379_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v___x_2389_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
}
else
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2404_; 
lean_del_object(v___x_2373_);
lean_dec_ref(v_roots_2371_);
v_a_2397_ = lean_ctor_get(v___y_2376_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___y_2376_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2399_ = v___y_2376_;
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___y_2376_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object* v_d_2425_, lean_object* v_m_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2425_, v_m_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
lean_dec(v_a_2430_);
lean_dec_ref(v_a_2429_);
lean_dec(v_a_2428_);
lean_dec_ref(v_a_2427_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object* v_00_u03b1_2433_, lean_object* v_00_u03b2_2434_, lean_object* v_d_2435_, lean_object* v_m_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2435_, v_m_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v_a_2440_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object* v_00_u03b1_2443_, lean_object* v_00_u03b2_2444_, lean_object* v_d_2445_, lean_object* v_m_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lean_Meta_LazyDiscrTree_runMatch(v_00_u03b1_2443_, v_00_u03b2_2444_, v_d_2445_, v_m_2446_, v_a_2447_, v_a_2448_, v_a_2449_, v_a_2450_);
lean_dec(v_a_2450_);
lean_dec_ref(v_a_2449_);
lean_dec(v_a_2448_);
lean_dec_ref(v_a_2447_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object* v_i_2453_, lean_object* v_v_2454_, lean_object* v_a_2455_){
_start:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2457_ = lean_st_ref_take(v_a_2455_);
v___x_2458_ = lean_box(0);
v___x_2459_ = lean_array_set(v___x_2457_, v_i_2453_, v_v_2454_);
v___x_2460_ = lean_st_ref_put(v_a_2455_, v___x_2459_);
v___x_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2458_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object* v_i_2462_, lean_object* v_v_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2462_, v_v_2463_, v_a_2464_);
lean_dec(v_a_2464_);
lean_dec(v_i_2462_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object* v_00_u03b1_2467_, lean_object* v_i_2468_, lean_object* v_v_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2468_, v_v_2469_, v_a_2470_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object* v_00_u03b1_2477_, lean_object* v_i_2478_, lean_object* v_v_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Lean_Meta_LazyDiscrTree_setTrie(v_00_u03b1_2477_, v_i_2478_, v_v_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
lean_dec(v_a_2484_);
lean_dec_ref(v_a_2483_);
lean_dec(v_a_2482_);
lean_dec_ref(v_a_2481_);
lean_dec(v_a_2480_);
lean_dec(v_i_2478_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object* v_e_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_sz_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v_sz_2489_ = lean_array_get_size(v_a_2488_);
v___x_2490_ = lean_unsigned_to_nat(0u);
v___x_2491_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2492_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2493_ = lean_unsigned_to_nat(1u);
v___x_2494_ = lean_mk_empty_array_with_capacity(v___x_2493_);
v___x_2495_ = lean_array_push(v___x_2494_, v_e_2487_);
v___x_2496_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2491_);
lean_ctor_set(v___x_2496_, 1, v___x_2490_);
lean_ctor_set(v___x_2496_, 2, v___x_2492_);
lean_ctor_set(v___x_2496_, 3, v___x_2495_);
v___x_2497_ = lean_array_push(v_a_2488_, v___x_2496_);
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v_sz_2489_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object* v_inst_2499_, lean_object* v_e_2500_){
_start:
{
lean_object* v_modifyGet_2501_; lean_object* v___f_2502_; lean_object* v___x_2503_; 
v_modifyGet_2501_ = lean_ctor_get(v_inst_2499_, 2);
lean_inc(v_modifyGet_2501_);
lean_dec_ref(v_inst_2499_);
v___f_2502_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2502_, 0, v_e_2500_);
v___x_2503_ = lean_apply_2(v_modifyGet_2501_, lean_box(0), v___f_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object* v_m_2504_, lean_object* v_00_u03b1_2505_, lean_object* v_inst_2506_, lean_object* v_inst_2507_, lean_object* v_e_2508_){
_start:
{
lean_object* v___x_2509_; 
v___x_2509_ = l_Lean_Meta_LazyDiscrTree_newTrie___redArg(v_inst_2507_, v_e_2508_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object* v_m_2510_, lean_object* v_00_u03b1_2511_, lean_object* v_inst_2512_, lean_object* v_inst_2513_, lean_object* v_e_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lean_Meta_LazyDiscrTree_newTrie(v_m_2510_, v_00_u03b1_2511_, v_inst_2512_, v_inst_2513_, v_e_2514_);
lean_dec_ref(v_inst_2512_);
return v_res_2515_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_box(0);
v___x_2517_ = l_unsafeCast___redArg(v___x_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object* v_i_2518_, lean_object* v_e_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v___x_2522_; lean_object* v_fst_2524_; lean_object* v_snd_2525_; lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2522_ = lean_st_ref_take(v_a_2520_);
v___x_2528_ = lean_box(0);
v___x_2529_ = lean_array_get_size(v___x_2522_);
v___x_2530_ = lean_nat_dec_lt(v_i_2518_, v___x_2529_);
if (v___x_2530_ == 0)
{
lean_dec_ref(v_e_2519_);
v_fst_2524_ = v___x_2528_;
v_snd_2525_ = v___x_2522_;
goto v___jp_2523_;
}
else
{
lean_object* v_v_2531_; lean_object* v___x_2532_; lean_object* v_xs_x27_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_v_2531_ = lean_array_fget(v___x_2522_, v_i_2518_);
v___x_2532_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0);
v_xs_x27_2533_ = lean_array_fset(v___x_2522_, v_i_2518_, v___x_2532_);
v___x_2534_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_v_2531_, v_e_2519_);
v___x_2535_ = lean_array_fset(v_xs_x27_2533_, v_i_2518_, v___x_2534_);
v_fst_2524_ = v___x_2528_;
v_snd_2525_ = v___x_2535_;
goto v___jp_2523_;
}
v___jp_2523_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_st_ref_put(v_a_2520_, v_snd_2525_);
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_fst_2524_);
return v___x_2527_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object* v_i_2536_, lean_object* v_e_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2536_, v_e_2537_, v_a_2538_);
lean_dec(v_a_2538_);
lean_dec(v_i_2536_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object* v_00_u03b1_2541_, lean_object* v_i_2542_, lean_object* v_e_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v___x_2550_; 
v___x_2550_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2542_, v_e_2543_, v_a_2544_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object* v_00_u03b1_2551_, lean_object* v_i_2552_, lean_object* v_e_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(v_00_u03b1_2551_, v_i_2552_, v_e_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec(v_a_2554_);
lean_dec(v_i_2552_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object* v_x_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; 
lean_inc(v___y_2562_);
v___x_2568_ = lean_apply_6(v_x_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, lean_box(0));
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(v_x_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
lean_dec(v___y_2570_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object* v_lctx_2577_, lean_object* v_localInsts_2578_, lean_object* v_x_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v___f_2586_; lean_object* v___x_2587_; 
lean_inc(v___y_2580_);
v___f_2586_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2586_, 0, v_x_2579_);
lean_closure_set(v___f_2586_, 1, v___y_2580_);
v___x_2587_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2577_, v_localInsts_2578_, v___f_2586_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2587_) == 0)
{
return v___x_2587_;
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2587_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2587_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object* v_lctx_2596_, lean_object* v_localInsts_2597_, lean_object* v_x_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2596_, v_localInsts_2597_, v_x_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object* v_00_u03b1_2606_, lean_object* v_00_u03b1_2607_, lean_object* v_lctx_2608_, lean_object* v_localInsts_2609_, lean_object* v_x_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2608_, v_localInsts_2609_, v_x_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object* v_00_u03b1_2618_, lean_object* v_00_u03b1_2619_, lean_object* v_lctx_2620_, lean_object* v_localInsts_2621_, lean_object* v_x_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(v_00_u03b1_2618_, v_00_u03b1_2619_, v_lctx_2620_, v_localInsts_2621_, v_x_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object* v_e_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v___x_2633_; lean_object* v_sz_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2633_ = lean_st_ref_take(v___y_2631_);
v_sz_2634_ = lean_array_get_size(v___x_2633_);
v___x_2635_ = lean_unsigned_to_nat(0u);
v___x_2636_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2637_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2638_ = lean_unsigned_to_nat(1u);
v___x_2639_ = lean_mk_empty_array_with_capacity(v___x_2638_);
v___x_2640_ = lean_array_push(v___x_2639_, v_e_2630_);
v___x_2641_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2636_);
lean_ctor_set(v___x_2641_, 1, v___x_2635_);
lean_ctor_set(v___x_2641_, 2, v___x_2637_);
lean_ctor_set(v___x_2641_, 3, v___x_2640_);
v___x_2642_ = lean_array_push(v___x_2633_, v___x_2641_);
v___x_2643_ = lean_st_ref_put(v___y_2631_, v___x_2642_);
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_sz_2634_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object* v_e_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2645_, v___y_2646_);
lean_dec(v___y_2646_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object* v_00_u03b1_2649_, lean_object* v_e_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2650_, v___y_2651_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object* v_00_u03b1_2658_, lean_object* v_e_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(v_00_u03b1_2658_, v_e_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec(v___y_2660_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t v___x_2667_, lean_object* v_todo_2668_, lean_object* v_e_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2667_, v_todo_2668_, v_e_2669_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object* v___x_2677_, lean_object* v_todo_2678_, lean_object* v_e_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
uint8_t v___x_3414__boxed_2686_; lean_object* v_res_2687_; 
v___x_3414__boxed_2686_ = lean_unbox(v___x_2677_);
v_res_2687_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(v___x_3414__boxed_2686_, v_todo_2678_, v_e_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object* v_a_2688_, lean_object* v_b_2689_, lean_object* v_x_2690_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_dec(v_b_2689_);
lean_dec(v_a_2688_);
return v_x_2690_;
}
else
{
lean_object* v_key_2691_; lean_object* v_value_2692_; lean_object* v_tail_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2705_; 
v_key_2691_ = lean_ctor_get(v_x_2690_, 0);
v_value_2692_ = lean_ctor_get(v_x_2690_, 1);
v_tail_2693_ = lean_ctor_get(v_x_2690_, 2);
v_isSharedCheck_2705_ = !lean_is_exclusive(v_x_2690_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2695_ = v_x_2690_;
v_isShared_2696_ = v_isSharedCheck_2705_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_tail_2693_);
lean_inc(v_value_2692_);
lean_inc(v_key_2691_);
lean_dec(v_x_2690_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2705_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
uint8_t v___x_2697_; 
v___x_2697_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2691_, v_a_2688_);
if (v___x_2697_ == 0)
{
lean_object* v___x_2698_; lean_object* v___x_2700_; 
v___x_2698_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2688_, v_b_2689_, v_tail_2693_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 2, v___x_2698_);
v___x_2700_ = v___x_2695_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_key_2691_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v_value_2692_);
lean_ctor_set(v_reuseFailAlloc_2701_, 2, v___x_2698_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
else
{
lean_object* v___x_2703_; 
lean_dec(v_value_2692_);
lean_dec(v_key_2691_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 1, v_b_2689_);
lean_ctor_set(v___x_2695_, 0, v_a_2688_);
v___x_2703_ = v___x_2695_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2688_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_b_2689_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v_tail_2693_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object* v_a_2706_, lean_object* v_x_2707_){
_start:
{
if (lean_obj_tag(v_x_2707_) == 0)
{
uint8_t v___x_2708_; 
v___x_2708_ = 0;
return v___x_2708_;
}
else
{
lean_object* v_key_2709_; lean_object* v_tail_2710_; uint8_t v___x_2711_; 
v_key_2709_ = lean_ctor_get(v_x_2707_, 0);
v_tail_2710_ = lean_ctor_get(v_x_2707_, 2);
v___x_2711_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2709_, v_a_2706_);
if (v___x_2711_ == 0)
{
v_x_2707_ = v_tail_2710_;
goto _start;
}
else
{
return v___x_2711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object* v_a_2713_, lean_object* v_x_2714_){
_start:
{
uint8_t v_res_2715_; lean_object* v_r_2716_; 
v_res_2715_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2713_, v_x_2714_);
lean_dec(v_x_2714_);
lean_dec(v_a_2713_);
v_r_2716_ = lean_box(v_res_2715_);
return v_r_2716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_x_2717_, lean_object* v_x_2718_){
_start:
{
if (lean_obj_tag(v_x_2718_) == 0)
{
return v_x_2717_;
}
else
{
lean_object* v_key_2719_; lean_object* v_value_2720_; lean_object* v_tail_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2744_; 
v_key_2719_ = lean_ctor_get(v_x_2718_, 0);
v_value_2720_ = lean_ctor_get(v_x_2718_, 1);
v_tail_2721_ = lean_ctor_get(v_x_2718_, 2);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_x_2718_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2723_ = v_x_2718_;
v_isShared_2724_ = v_isSharedCheck_2744_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_tail_2721_);
lean_inc(v_value_2720_);
lean_inc(v_key_2719_);
lean_dec(v_x_2718_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2744_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; uint64_t v___x_2726_; uint64_t v___x_2727_; uint64_t v___x_2728_; uint64_t v_fold_2729_; uint64_t v___x_2730_; uint64_t v___x_2731_; uint64_t v___x_2732_; size_t v___x_2733_; size_t v___x_2734_; size_t v___x_2735_; size_t v___x_2736_; size_t v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2725_ = lean_array_get_size(v_x_2717_);
v___x_2726_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_key_2719_);
v___x_2727_ = 32ULL;
v___x_2728_ = lean_uint64_shift_right(v___x_2726_, v___x_2727_);
v_fold_2729_ = lean_uint64_xor(v___x_2726_, v___x_2728_);
v___x_2730_ = 16ULL;
v___x_2731_ = lean_uint64_shift_right(v_fold_2729_, v___x_2730_);
v___x_2732_ = lean_uint64_xor(v_fold_2729_, v___x_2731_);
v___x_2733_ = lean_uint64_to_usize(v___x_2732_);
v___x_2734_ = lean_usize_of_nat(v___x_2725_);
v___x_2735_ = ((size_t)1ULL);
v___x_2736_ = lean_usize_sub(v___x_2734_, v___x_2735_);
v___x_2737_ = lean_usize_land(v___x_2733_, v___x_2736_);
v___x_2738_ = lean_array_uget_borrowed(v_x_2717_, v___x_2737_);
lean_inc(v___x_2738_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 2, v___x_2738_);
v___x_2740_ = v___x_2723_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_key_2719_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v_value_2720_);
lean_ctor_set(v_reuseFailAlloc_2743_, 2, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_array_uset(v_x_2717_, v___x_2737_, v___x_2740_);
v_x_2717_ = v___x_2741_;
v_x_2718_ = v_tail_2721_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object* v_i_2745_, lean_object* v_source_2746_, lean_object* v_target_2747_){
_start:
{
lean_object* v___x_2748_; uint8_t v___x_2749_; 
v___x_2748_ = lean_array_get_size(v_source_2746_);
v___x_2749_ = lean_nat_dec_lt(v_i_2745_, v___x_2748_);
if (v___x_2749_ == 0)
{
lean_dec_ref(v_source_2746_);
lean_dec(v_i_2745_);
return v_target_2747_;
}
else
{
lean_object* v_es_2750_; lean_object* v___x_2751_; lean_object* v_source_2752_; lean_object* v_target_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v_es_2750_ = lean_array_fget(v_source_2746_, v_i_2745_);
v___x_2751_ = lean_box(0);
v_source_2752_ = lean_array_fset(v_source_2746_, v_i_2745_, v___x_2751_);
v_target_2753_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_target_2747_, v_es_2750_);
v___x_2754_ = lean_unsigned_to_nat(1u);
v___x_2755_ = lean_nat_add(v_i_2745_, v___x_2754_);
lean_dec(v_i_2745_);
v_i_2745_ = v___x_2755_;
v_source_2746_ = v_source_2752_;
v_target_2747_ = v_target_2753_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object* v_data_2757_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v_nbuckets_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2758_ = lean_array_get_size(v_data_2757_);
v___x_2759_ = lean_unsigned_to_nat(2u);
v_nbuckets_2760_ = lean_nat_mul(v___x_2758_, v___x_2759_);
v___x_2761_ = lean_unsigned_to_nat(0u);
v___x_2762_ = lean_box(0);
v___x_2763_ = lean_mk_array(v_nbuckets_2760_, v___x_2762_);
v___x_2764_ = lean_array_propagate_mark(v_data_2757_, v___x_2763_);
v___x_2765_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v___x_2761_, v_data_2757_, v___x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object* v_m_2766_, lean_object* v_a_2767_, lean_object* v_b_2768_){
_start:
{
lean_object* v_size_2769_; lean_object* v_buckets_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2813_; 
v_size_2769_ = lean_ctor_get(v_m_2766_, 0);
v_buckets_2770_ = lean_ctor_get(v_m_2766_, 1);
v_isSharedCheck_2813_ = !lean_is_exclusive(v_m_2766_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2772_ = v_m_2766_;
v_isShared_2773_ = v_isSharedCheck_2813_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_buckets_2770_);
lean_inc(v_size_2769_);
lean_dec(v_m_2766_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2813_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2774_; uint64_t v___x_2775_; uint64_t v___x_2776_; uint64_t v___x_2777_; uint64_t v_fold_2778_; uint64_t v___x_2779_; uint64_t v___x_2780_; uint64_t v___x_2781_; size_t v___x_2782_; size_t v___x_2783_; size_t v___x_2784_; size_t v___x_2785_; size_t v___x_2786_; lean_object* v_bkt_2787_; uint8_t v___x_2788_; 
v___x_2774_ = lean_array_get_size(v_buckets_2770_);
v___x_2775_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2767_);
v___x_2776_ = 32ULL;
v___x_2777_ = lean_uint64_shift_right(v___x_2775_, v___x_2776_);
v_fold_2778_ = lean_uint64_xor(v___x_2775_, v___x_2777_);
v___x_2779_ = 16ULL;
v___x_2780_ = lean_uint64_shift_right(v_fold_2778_, v___x_2779_);
v___x_2781_ = lean_uint64_xor(v_fold_2778_, v___x_2780_);
v___x_2782_ = lean_uint64_to_usize(v___x_2781_);
v___x_2783_ = lean_usize_of_nat(v___x_2774_);
v___x_2784_ = ((size_t)1ULL);
v___x_2785_ = lean_usize_sub(v___x_2783_, v___x_2784_);
v___x_2786_ = lean_usize_land(v___x_2782_, v___x_2785_);
v_bkt_2787_ = lean_array_uget_borrowed(v_buckets_2770_, v___x_2786_);
v___x_2788_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2767_, v_bkt_2787_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; lean_object* v_size_x27_2790_; lean_object* v___x_2791_; lean_object* v_buckets_x27_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2789_ = lean_unsigned_to_nat(1u);
v_size_x27_2790_ = lean_nat_add(v_size_2769_, v___x_2789_);
lean_dec(v_size_2769_);
lean_inc(v_bkt_2787_);
v___x_2791_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2791_, 0, v_a_2767_);
lean_ctor_set(v___x_2791_, 1, v_b_2768_);
lean_ctor_set(v___x_2791_, 2, v_bkt_2787_);
v_buckets_x27_2792_ = lean_array_uset(v_buckets_2770_, v___x_2786_, v___x_2791_);
v___x_2793_ = lean_unsigned_to_nat(4u);
v___x_2794_ = lean_nat_mul(v_size_x27_2790_, v___x_2793_);
v___x_2795_ = lean_unsigned_to_nat(3u);
v___x_2796_ = lean_nat_div(v___x_2794_, v___x_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_array_get_size(v_buckets_x27_2792_);
v___x_2798_ = lean_nat_dec_le(v___x_2796_, v___x_2797_);
lean_dec(v___x_2796_);
if (v___x_2798_ == 0)
{
lean_object* v_val_2799_; lean_object* v___x_2801_; 
v_val_2799_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_buckets_x27_2792_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 1, v_val_2799_);
lean_ctor_set(v___x_2772_, 0, v_size_x27_2790_);
v___x_2801_ = v___x_2772_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_size_x27_2790_);
lean_ctor_set(v_reuseFailAlloc_2802_, 1, v_val_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
else
{
lean_object* v___x_2804_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 1, v_buckets_x27_2792_);
lean_ctor_set(v___x_2772_, 0, v_size_x27_2790_);
v___x_2804_ = v___x_2772_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_size_x27_2790_);
lean_ctor_set(v_reuseFailAlloc_2805_, 1, v_buckets_x27_2792_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
else
{
lean_object* v___x_2806_; lean_object* v_buckets_x27_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
lean_inc(v_bkt_2787_);
v___x_2806_ = lean_box(0);
v_buckets_x27_2807_ = lean_array_uset(v_buckets_2770_, v___x_2786_, v___x_2806_);
v___x_2808_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2767_, v_b_2768_, v_bkt_2787_);
v___x_2809_ = lean_array_uset(v_buckets_x27_2807_, v___x_2786_, v___x_2808_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 1, v___x_2809_);
v___x_2811_ = v___x_2772_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_size_2769_);
lean_ctor_set(v_reuseFailAlloc_2812_, 1, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object* v_a_2814_, lean_object* v_x_2815_){
_start:
{
if (lean_obj_tag(v_x_2815_) == 0)
{
lean_object* v___x_2816_; 
v___x_2816_ = lean_box(0);
return v___x_2816_;
}
else
{
lean_object* v_key_2817_; lean_object* v_value_2818_; lean_object* v_tail_2819_; uint8_t v___x_2820_; 
v_key_2817_ = lean_ctor_get(v_x_2815_, 0);
v_value_2818_ = lean_ctor_get(v_x_2815_, 1);
v_tail_2819_ = lean_ctor_get(v_x_2815_, 2);
v___x_2820_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2817_, v_a_2814_);
if (v___x_2820_ == 0)
{
v_x_2815_ = v_tail_2819_;
goto _start;
}
else
{
lean_object* v___x_2822_; 
lean_inc(v_value_2818_);
v___x_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2822_, 0, v_value_2818_);
return v___x_2822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object* v_a_2823_, lean_object* v_x_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2823_, v_x_2824_);
lean_dec(v_x_2824_);
lean_dec(v_a_2823_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object* v_m_2826_, lean_object* v_a_2827_){
_start:
{
lean_object* v_buckets_2828_; lean_object* v___x_2829_; uint64_t v___x_2830_; uint64_t v___x_2831_; uint64_t v___x_2832_; uint64_t v_fold_2833_; uint64_t v___x_2834_; uint64_t v___x_2835_; uint64_t v___x_2836_; size_t v___x_2837_; size_t v___x_2838_; size_t v___x_2839_; size_t v___x_2840_; size_t v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v_buckets_2828_ = lean_ctor_get(v_m_2826_, 1);
v___x_2829_ = lean_array_get_size(v_buckets_2828_);
v___x_2830_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2827_);
v___x_2831_ = 32ULL;
v___x_2832_ = lean_uint64_shift_right(v___x_2830_, v___x_2831_);
v_fold_2833_ = lean_uint64_xor(v___x_2830_, v___x_2832_);
v___x_2834_ = 16ULL;
v___x_2835_ = lean_uint64_shift_right(v_fold_2833_, v___x_2834_);
v___x_2836_ = lean_uint64_xor(v_fold_2833_, v___x_2835_);
v___x_2837_ = lean_uint64_to_usize(v___x_2836_);
v___x_2838_ = lean_usize_of_nat(v___x_2829_);
v___x_2839_ = ((size_t)1ULL);
v___x_2840_ = lean_usize_sub(v___x_2838_, v___x_2839_);
v___x_2841_ = lean_usize_land(v___x_2837_, v___x_2840_);
v___x_2842_ = lean_array_uget_borrowed(v_buckets_2828_, v___x_2841_);
v___x_2843_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2827_, v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object* v_m_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2844_, v_a_2845_);
lean_dec(v_a_2845_);
lean_dec_ref(v_m_2844_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object* v_p_2847_, lean_object* v_entry_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v_snd_2855_; lean_object* v_snd_2856_; lean_object* v_fst_2857_; lean_object* v_fst_2858_; lean_object* v_snd_2859_; lean_object* v_fst_2860_; lean_object* v_fst_2861_; lean_object* v_snd_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; uint8_t v___x_2865_; 
v_snd_2855_ = lean_ctor_get(v_p_2847_, 1);
v_snd_2856_ = lean_ctor_get(v_entry_2848_, 1);
lean_inc(v_snd_2856_);
v_fst_2857_ = lean_ctor_get(v_p_2847_, 0);
v_fst_2858_ = lean_ctor_get(v_snd_2855_, 0);
v_snd_2859_ = lean_ctor_get(v_snd_2855_, 1);
v_fst_2860_ = lean_ctor_get(v_entry_2848_, 0);
lean_inc(v_fst_2860_);
lean_dec_ref(v_entry_2848_);
v_fst_2861_ = lean_ctor_get(v_snd_2856_, 0);
lean_inc(v_fst_2861_);
v_snd_2862_ = lean_ctor_get(v_snd_2856_, 1);
v___x_2863_ = lean_array_get_size(v_fst_2860_);
v___x_2864_ = lean_unsigned_to_nat(0u);
v___x_2865_ = lean_nat_dec_eq(v___x_2863_, v___x_2864_);
if (v___x_2865_ == 0)
{
lean_object* v_fst_2866_; lean_object* v_snd_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2972_; 
v_fst_2866_ = lean_ctor_get(v_fst_2861_, 0);
v_snd_2867_ = lean_ctor_get(v_fst_2861_, 1);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_fst_2861_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2869_ = v_fst_2861_;
v_isShared_2870_ = v_isSharedCheck_2972_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_snd_2867_);
lean_inc(v_fst_2866_);
lean_dec(v_fst_2861_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2972_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v_e_2874_; lean_object* v_todo_2875_; lean_object* v___x_2876_; lean_object* v___f_2877_; lean_object* v___x_2878_; 
v___x_2871_ = l_Lean_instInhabitedExpr;
v___x_2872_ = lean_unsigned_to_nat(1u);
v___x_2873_ = lean_nat_sub(v___x_2863_, v___x_2872_);
v_e_2874_ = lean_array_get(v___x_2871_, v_fst_2860_, v___x_2873_);
lean_dec(v___x_2873_);
v_todo_2875_ = lean_array_pop(v_fst_2860_);
v___x_2876_ = lean_box(v___x_2865_);
v___f_2877_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2877_, 0, v___x_2876_);
lean_closure_set(v___f_2877_, 1, v_todo_2875_);
lean_closure_set(v___f_2877_, 2, v_e_2874_);
v___x_2878_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_fst_2866_, v_snd_2867_, v___f_2877_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v_fst_2880_; lean_object* v_snd_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2963_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref_known(v___x_2878_, 1);
v_fst_2880_ = lean_ctor_get(v_a_2879_, 0);
v_snd_2881_ = lean_ctor_get(v_a_2879_, 1);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_a_2879_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2883_ = v_a_2879_;
v_isShared_2884_ = v_isSharedCheck_2963_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_snd_2881_);
lean_inc(v_fst_2880_);
lean_dec(v_a_2879_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2963_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2885_ = lean_box(3);
v___x_2886_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_fst_2880_, v___x_2885_);
if (v___x_2886_ == 0)
{
lean_object* v___x_2887_; 
v___x_2887_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_2859_, v_fst_2880_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v___x_2889_; 
lean_inc(v_snd_2859_);
lean_inc(v_fst_2858_);
lean_inc(v_fst_2857_);
lean_dec_ref(v_p_2847_);
lean_inc(v_snd_2856_);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 1, v_snd_2856_);
lean_ctor_set(v___x_2883_, 0, v_snd_2881_);
v___x_2889_ = v___x_2883_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_snd_2881_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_snd_2856_);
v___x_2889_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2909_; 
v_isSharedCheck_2909_ = !lean_is_exclusive(v_snd_2856_);
if (v_isSharedCheck_2909_ == 0)
{
lean_object* v_unused_2910_; lean_object* v_unused_2911_; 
v_unused_2910_ = lean_ctor_get(v_snd_2856_, 1);
lean_dec(v_unused_2910_);
v_unused_2911_ = lean_ctor_get(v_snd_2856_, 0);
lean_dec(v_unused_2911_);
v___x_2891_ = v_snd_2856_;
v_isShared_2892_ = v_isSharedCheck_2909_;
goto v_resetjp_2890_;
}
else
{
lean_dec(v_snd_2856_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2909_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2908_; 
v___x_2893_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2889_, v_a_2849_);
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2896_ = v___x_2893_;
v_isShared_2897_ = v_isSharedCheck_2908_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2893_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2908_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2898_; lean_object* v___x_2900_; 
v___x_2898_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_snd_2859_, v_fst_2880_, v_a_2894_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 1, v___x_2898_);
lean_ctor_set(v___x_2869_, 0, v_fst_2858_);
v___x_2900_ = v___x_2869_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_fst_2858_);
lean_ctor_set(v_reuseFailAlloc_2907_, 1, v___x_2898_);
v___x_2900_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
lean_object* v___x_2902_; 
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 1, v___x_2900_);
lean_ctor_set(v___x_2891_, 0, v_fst_2857_);
v___x_2902_ = v___x_2891_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_fst_2857_);
lean_ctor_set(v_reuseFailAlloc_2906_, 1, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
lean_object* v___x_2904_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 0, v___x_2902_);
v___x_2904_ = v___x_2896_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_2913_; lean_object* v___x_2915_; 
lean_dec(v_fst_2880_);
lean_del_object(v___x_2869_);
v_val_2913_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_val_2913_);
lean_dec_ref_known(v___x_2887_, 1);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 1, v_snd_2856_);
lean_ctor_set(v___x_2883_, 0, v_snd_2881_);
v___x_2915_ = v___x_2883_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_snd_2881_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_snd_2856_);
v___x_2915_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
v___x_2916_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_val_2913_, v___x_2915_, v_a_2849_);
lean_dec(v_val_2913_);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2923_ == 0)
{
lean_object* v_unused_2924_; 
v_unused_2924_ = lean_ctor_get(v___x_2916_, 0);
lean_dec(v_unused_2924_);
v___x_2918_ = v___x_2916_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_dec(v___x_2916_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v_p_2847_);
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_p_2847_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
}
}
else
{
uint8_t v___x_2926_; 
lean_dec(v_fst_2880_);
v___x_2926_ = lean_nat_dec_eq(v_fst_2858_, v___x_2864_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2928_; 
lean_del_object(v___x_2869_);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 1, v_snd_2856_);
lean_ctor_set(v___x_2883_, 0, v_snd_2881_);
v___x_2928_ = v___x_2883_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_snd_2881_);
lean_ctor_set(v_reuseFailAlloc_2938_, 1, v_snd_2856_);
v___x_2928_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
v___x_2929_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_fst_2858_, v___x_2928_, v_a_2849_);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2936_ == 0)
{
lean_object* v_unused_2937_; 
v_unused_2937_ = lean_ctor_get(v___x_2929_, 0);
lean_dec(v_unused_2937_);
v___x_2931_ = v___x_2929_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v___x_2929_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v_p_2847_);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_p_2847_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
else
{
lean_object* v___x_2940_; 
lean_inc(v_snd_2859_);
lean_inc(v_fst_2857_);
lean_dec_ref(v_p_2847_);
lean_inc(v_snd_2856_);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 1, v_snd_2856_);
lean_ctor_set(v___x_2883_, 0, v_snd_2881_);
v___x_2940_ = v___x_2883_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_snd_2881_);
lean_ctor_set(v_reuseFailAlloc_2962_, 1, v_snd_2856_);
v___x_2940_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2959_; 
v_isSharedCheck_2959_ = !lean_is_exclusive(v_snd_2856_);
if (v_isSharedCheck_2959_ == 0)
{
lean_object* v_unused_2960_; lean_object* v_unused_2961_; 
v_unused_2960_ = lean_ctor_get(v_snd_2856_, 1);
lean_dec(v_unused_2960_);
v_unused_2961_ = lean_ctor_get(v_snd_2856_, 0);
lean_dec(v_unused_2961_);
v___x_2942_ = v_snd_2856_;
v_isShared_2943_ = v_isSharedCheck_2959_;
goto v_resetjp_2941_;
}
else
{
lean_dec(v_snd_2856_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2959_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2958_; 
v___x_2944_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2940_, v_a_2849_);
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2947_ = v___x_2944_;
v_isShared_2948_ = v_isSharedCheck_2958_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2944_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2958_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 1, v_snd_2859_);
lean_ctor_set(v___x_2869_, 0, v_a_2945_);
v___x_2950_ = v___x_2869_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2945_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_snd_2859_);
v___x_2950_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2952_; 
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2950_);
lean_ctor_set(v___x_2942_, 0, v_fst_2857_);
v___x_2952_ = v___x_2942_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_fst_2857_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v___x_2950_);
v___x_2952_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
lean_object* v___x_2954_; 
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2952_);
v___x_2954_ = v___x_2947_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v___x_2952_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
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
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
lean_del_object(v___x_2869_);
lean_dec(v_snd_2856_);
lean_dec_ref(v_p_2847_);
v_a_2964_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2878_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2878_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
else
{
lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2981_; 
lean_inc(v_snd_2862_);
lean_inc(v_fst_2857_);
lean_inc(v_snd_2855_);
lean_dec(v_fst_2861_);
lean_dec(v_fst_2860_);
lean_dec_ref(v_p_2847_);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_snd_2856_);
if (v_isSharedCheck_2981_ == 0)
{
lean_object* v_unused_2982_; lean_object* v_unused_2983_; 
v_unused_2982_ = lean_ctor_get(v_snd_2856_, 1);
lean_dec(v_unused_2982_);
v_unused_2983_ = lean_ctor_get(v_snd_2856_, 0);
lean_dec(v_unused_2983_);
v___x_2974_ = v_snd_2856_;
v_isShared_2975_ = v_isSharedCheck_2981_;
goto v_resetjp_2973_;
}
else
{
lean_dec(v_snd_2856_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2981_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v_values_2976_; lean_object* v___x_2978_; 
v_values_2976_ = lean_array_push(v_fst_2857_, v_snd_2862_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 1, v_snd_2855_);
lean_ctor_set(v___x_2974_, 0, v_values_2976_);
v___x_2978_ = v___x_2974_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_values_2976_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v_snd_2855_);
v___x_2978_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
return v___x_2979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object* v_p_2984_, lean_object* v_entry_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2984_, v_entry_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_);
lean_dec(v_a_2990_);
lean_dec_ref(v_a_2989_);
lean_dec(v_a_2988_);
lean_dec_ref(v_a_2987_);
lean_dec(v_a_2986_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object* v_00_u03b1_2993_, lean_object* v_p_2994_, lean_object* v_entry_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v___x_3002_; 
v___x_3002_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2994_, v_entry_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object* v_00_u03b1_3003_, lean_object* v_p_3004_, lean_object* v_entry_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry(v_00_u03b1_3003_, v_p_3004_, v_entry_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
lean_dec(v_a_3006_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object* v_00_u03b2_3013_, lean_object* v_m_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_3014_, v_a_3015_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object* v_00_u03b2_3017_, lean_object* v_m_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(v_00_u03b2_3017_, v_m_3018_, v_a_3019_);
lean_dec(v_a_3019_);
lean_dec_ref(v_m_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object* v_00_u03b2_3021_, lean_object* v_m_3022_, lean_object* v_a_3023_, lean_object* v_b_3024_){
_start:
{
lean_object* v___x_3025_; 
v___x_3025_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_m_3022_, v_a_3023_, v_b_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object* v_00_u03b2_3026_, lean_object* v_a_3027_, lean_object* v_x_3028_){
_start:
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_3027_, v_x_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3030_, lean_object* v_a_3031_, lean_object* v_x_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(v_00_u03b2_3030_, v_a_3031_, v_x_3032_);
lean_dec(v_x_3032_);
lean_dec(v_a_3031_);
return v_res_3033_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object* v_00_u03b2_3034_, lean_object* v_a_3035_, lean_object* v_x_3036_){
_start:
{
uint8_t v___x_3037_; 
v___x_3037_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_3035_, v_x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3038_, lean_object* v_a_3039_, lean_object* v_x_3040_){
_start:
{
uint8_t v_res_3041_; lean_object* v_r_3042_; 
v_res_3041_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(v_00_u03b2_3038_, v_a_3039_, v_x_3040_);
lean_dec(v_x_3040_);
lean_dec(v_a_3039_);
v_r_3042_ = lean_box(v_res_3041_);
return v_r_3042_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object* v_00_u03b2_3043_, lean_object* v_data_3044_){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_data_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object* v_00_u03b2_3046_, lean_object* v_a_3047_, lean_object* v_b_3048_, lean_object* v_x_3049_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_3047_, v_b_3048_, v_x_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_3051_, lean_object* v_i_3052_, lean_object* v_source_3053_, lean_object* v_target_3054_){
_start:
{
lean_object* v___x_3055_; 
v___x_3055_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v_i_3052_, v_source_3053_, v_target_3054_);
return v___x_3055_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_3056_, lean_object* v_x_3057_, lean_object* v_x_3058_){
_start:
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_x_3057_, v_x_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object* v_as_3060_, size_t v_i_3061_, size_t v_stop_3062_, lean_object* v_b_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_){
_start:
{
uint8_t v___x_3070_; 
v___x_3070_ = lean_usize_dec_eq(v_i_3061_, v_stop_3062_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3071_ = lean_array_uget_borrowed(v_as_3060_, v_i_3061_);
lean_inc(v___x_3071_);
v___x_3072_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_b_3063_, v___x_3071_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; size_t v___x_3074_; size_t v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = ((size_t)1ULL);
v___x_3075_ = lean_usize_add(v_i_3061_, v___x_3074_);
v_i_3061_ = v___x_3075_;
v_b_3063_ = v_a_3073_;
goto _start;
}
else
{
return v___x_3072_;
}
}
else
{
lean_object* v___x_3077_; 
v___x_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3077_, 0, v_b_3063_);
return v___x_3077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object* v_as_3078_, lean_object* v_i_3079_, lean_object* v_stop_3080_, lean_object* v_b_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
size_t v_i_boxed_3088_; size_t v_stop_boxed_3089_; lean_object* v_res_3090_; 
v_i_boxed_3088_ = lean_unbox_usize(v_i_3079_);
lean_dec(v_i_3079_);
v_stop_boxed_3089_ = lean_unbox_usize(v_stop_3080_);
lean_dec(v_stop_3080_);
v_res_3090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3078_, v_i_boxed_3088_, v_stop_boxed_3089_, v_b_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec(v___y_3082_);
lean_dec_ref(v_as_3078_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object* v_values_3091_, lean_object* v_starIdx_3092_, lean_object* v_children_3093_, lean_object* v_entries_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; uint8_t v___x_3105_; 
v___x_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3101_, 0, v_starIdx_3092_);
lean_ctor_set(v___x_3101_, 1, v_children_3093_);
v___x_3102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3102_, 0, v_values_3091_);
lean_ctor_set(v___x_3102_, 1, v___x_3101_);
v___x_3103_ = lean_unsigned_to_nat(0u);
v___x_3104_ = lean_array_get_size(v_entries_3094_);
v___x_3105_ = lean_nat_dec_lt(v___x_3103_, v___x_3104_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; 
v___x_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3102_);
return v___x_3106_;
}
else
{
uint8_t v___x_3107_; 
v___x_3107_ = lean_nat_dec_le(v___x_3104_, v___x_3104_);
if (v___x_3107_ == 0)
{
if (v___x_3105_ == 0)
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3102_);
return v___x_3108_;
}
else
{
size_t v___x_3109_; size_t v___x_3110_; lean_object* v___x_3111_; 
v___x_3109_ = ((size_t)0ULL);
v___x_3110_ = lean_usize_of_nat(v___x_3104_);
v___x_3111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3094_, v___x_3109_, v___x_3110_, v___x_3102_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
return v___x_3111_;
}
}
else
{
size_t v___x_3112_; size_t v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = ((size_t)0ULL);
v___x_3113_ = lean_usize_of_nat(v___x_3104_);
v___x_3114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3094_, v___x_3112_, v___x_3113_, v___x_3102_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
return v___x_3114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object* v_values_3115_, lean_object* v_starIdx_3116_, lean_object* v_children_3117_, lean_object* v_entries_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3115_, v_starIdx_3116_, v_children_3117_, v_entries_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_entries_3118_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object* v_00_u03b1_3126_, lean_object* v_values_3127_, lean_object* v_starIdx_3128_, lean_object* v_children_3129_, lean_object* v_entries_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_){
_start:
{
lean_object* v___x_3137_; 
v___x_3137_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3127_, v_starIdx_3128_, v_children_3129_, v_entries_3130_, v_a_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object* v_00_u03b1_3138_, lean_object* v_values_3139_, lean_object* v_starIdx_3140_, lean_object* v_children_3141_, lean_object* v_entries_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries(v_00_u03b1_3138_, v_values_3139_, v_starIdx_3140_, v_children_3141_, v_entries_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec_ref(v_a_3144_);
lean_dec(v_a_3143_);
lean_dec_ref(v_entries_3142_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object* v_00_u03b1_3150_, lean_object* v_as_3151_, size_t v_i_3152_, size_t v_stop_3153_, lean_object* v_b_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v___x_3161_; 
v___x_3161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3151_, v_i_3152_, v_stop_3153_, v_b_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object* v_00_u03b1_3162_, lean_object* v_as_3163_, lean_object* v_i_3164_, lean_object* v_stop_3165_, lean_object* v_b_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
size_t v_i_boxed_3173_; size_t v_stop_boxed_3174_; lean_object* v_res_3175_; 
v_i_boxed_3173_ = lean_unbox_usize(v_i_3164_);
lean_dec(v_i_3164_);
v_stop_boxed_3174_ = lean_unbox_usize(v_stop_3165_);
lean_dec(v_stop_3165_);
v_res_3175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(v_00_u03b1_3162_, v_as_3163_, v_i_boxed_3173_, v_stop_boxed_3174_, v_b_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v_as_3163_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object* v_c_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v_values_3186_; lean_object* v_star_3187_; lean_object* v_children_3188_; lean_object* v_pending_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3219_; 
v___x_3183_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_3184_ = lean_st_ref_get(v_a_3177_);
v___x_3185_ = lean_array_get(v___x_3183_, v___x_3184_, v_c_3176_);
lean_dec(v___x_3184_);
v_values_3186_ = lean_ctor_get(v___x_3185_, 0);
v_star_3187_ = lean_ctor_get(v___x_3185_, 1);
v_children_3188_ = lean_ctor_get(v___x_3185_, 2);
v_pending_3189_ = lean_ctor_get(v___x_3185_, 3);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3191_ = v___x_3185_;
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_pending_3189_);
lean_inc(v_children_3188_);
lean_inc(v_star_3187_);
lean_inc(v_values_3186_);
lean_dec(v___x_3185_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; 
v___x_3193_ = lean_array_get_size(v_pending_3189_);
v___x_3194_ = lean_unsigned_to_nat(0u);
v___x_3195_ = lean_nat_dec_eq(v___x_3193_, v___x_3194_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3176_, v___x_3183_, v_a_3177_);
lean_dec_ref(v___x_3196_);
v___x_3197_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3186_, v_star_3187_, v_children_3188_, v_pending_3189_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
lean_dec_ref(v_pending_3189_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v_snd_3199_; lean_object* v_fst_3200_; lean_object* v_fst_3201_; lean_object* v_snd_3202_; lean_object* v___x_3203_; lean_object* v___x_3205_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v_snd_3199_ = lean_ctor_get(v_a_3198_, 1);
v_fst_3200_ = lean_ctor_get(v_a_3198_, 0);
v_fst_3201_ = lean_ctor_get(v_snd_3199_, 0);
v_snd_3202_ = lean_ctor_get(v_snd_3199_, 1);
v___x_3203_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
lean_inc(v_snd_3202_);
lean_inc(v_fst_3201_);
lean_inc(v_fst_3200_);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 3, v___x_3203_);
lean_ctor_set(v___x_3191_, 2, v_snd_3202_);
lean_ctor_set(v___x_3191_, 1, v_fst_3201_);
lean_ctor_set(v___x_3191_, 0, v_fst_3200_);
v___x_3205_ = v___x_3191_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_fst_3200_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v_fst_3201_);
lean_ctor_set(v_reuseFailAlloc_3215_, 2, v_snd_3202_);
lean_ctor_set(v_reuseFailAlloc_3215_, 3, v___x_3203_);
v___x_3205_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
lean_object* v___x_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3213_; 
v___x_3206_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3176_, v___x_3205_, v_a_3177_);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3213_ == 0)
{
lean_object* v_unused_3214_; 
v_unused_3214_ = lean_ctor_get(v___x_3206_, 0);
lean_dec(v_unused_3214_);
v___x_3208_ = v___x_3206_;
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
else
{
lean_dec(v___x_3206_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3211_; 
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v_a_3198_);
v___x_3211_ = v___x_3208_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_a_3198_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
}
else
{
lean_del_object(v___x_3191_);
return v___x_3197_;
}
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
lean_del_object(v___x_3191_);
lean_dec_ref(v_pending_3189_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_star_3187_);
lean_ctor_set(v___x_3216_, 1, v_children_3188_);
v___x_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_values_3186_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3217_);
return v___x_3218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object* v_c_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_);
lean_dec(v_a_3225_);
lean_dec_ref(v_a_3224_);
lean_dec(v_a_3223_);
lean_dec_ref(v_a_3222_);
lean_dec(v_a_3221_);
lean_dec(v_c_3220_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object* v_00_u03b1_3228_, lean_object* v_c_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object* v_00_u03b1_3237_, lean_object* v_c_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lean_Meta_LazyDiscrTree_evalNode(v_00_u03b1_3237_, v_c_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec(v_c_3238_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object* v_a_3246_, lean_object* v_fallback_3247_, lean_object* v_x_3248_){
_start:
{
if (lean_obj_tag(v_x_3248_) == 0)
{
lean_inc(v_fallback_3247_);
return v_fallback_3247_;
}
else
{
lean_object* v_key_3249_; lean_object* v_value_3250_; lean_object* v_tail_3251_; uint8_t v___x_3252_; 
v_key_3249_ = lean_ctor_get(v_x_3248_, 0);
v_value_3250_ = lean_ctor_get(v_x_3248_, 1);
v_tail_3251_ = lean_ctor_get(v_x_3248_, 2);
v___x_3252_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_3249_, v_a_3246_);
if (v___x_3252_ == 0)
{
v_x_3248_ = v_tail_3251_;
goto _start;
}
else
{
lean_inc(v_value_3250_);
return v_value_3250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3254_, lean_object* v_fallback_3255_, lean_object* v_x_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3254_, v_fallback_3255_, v_x_3256_);
lean_dec(v_x_3256_);
lean_dec(v_fallback_3255_);
lean_dec(v_a_3254_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object* v_m_3258_, lean_object* v_a_3259_, lean_object* v_fallback_3260_){
_start:
{
lean_object* v_buckets_3261_; lean_object* v___x_3262_; uint64_t v___x_3263_; uint64_t v___x_3264_; uint64_t v___x_3265_; uint64_t v_fold_3266_; uint64_t v___x_3267_; uint64_t v___x_3268_; uint64_t v___x_3269_; size_t v___x_3270_; size_t v___x_3271_; size_t v___x_3272_; size_t v___x_3273_; size_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_buckets_3261_ = lean_ctor_get(v_m_3258_, 1);
v___x_3262_ = lean_array_get_size(v_buckets_3261_);
v___x_3263_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_3259_);
v___x_3264_ = 32ULL;
v___x_3265_ = lean_uint64_shift_right(v___x_3263_, v___x_3264_);
v_fold_3266_ = lean_uint64_xor(v___x_3263_, v___x_3265_);
v___x_3267_ = 16ULL;
v___x_3268_ = lean_uint64_shift_right(v_fold_3266_, v___x_3267_);
v___x_3269_ = lean_uint64_xor(v_fold_3266_, v___x_3268_);
v___x_3270_ = lean_uint64_to_usize(v___x_3269_);
v___x_3271_ = lean_usize_of_nat(v___x_3262_);
v___x_3272_ = ((size_t)1ULL);
v___x_3273_ = lean_usize_sub(v___x_3271_, v___x_3272_);
v___x_3274_ = lean_usize_land(v___x_3270_, v___x_3273_);
v___x_3275_ = lean_array_uget_borrowed(v_buckets_3261_, v___x_3274_);
v___x_3276_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3259_, v_fallback_3260_, v___x_3275_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object* v_m_3277_, lean_object* v_a_3278_, lean_object* v_fallback_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3277_, v_a_3278_, v_fallback_3279_);
lean_dec(v_fallback_3279_);
lean_dec(v_a_3278_);
lean_dec_ref(v_m_3277_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object* v_next_3281_, lean_object* v_rest_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v___x_3289_; uint8_t v___x_3290_; 
v___x_3289_ = lean_unsigned_to_nat(0u);
v___x_3290_ = lean_nat_dec_eq(v_next_3281_, v___x_3289_);
if (v___x_3290_ == 0)
{
lean_object* v___x_3291_; 
v___x_3291_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_3281_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3317_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3294_ = v___x_3291_;
v_isShared_3295_ = v_isSharedCheck_3317_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3291_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3317_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v_snd_3296_; 
v_snd_3296_ = lean_ctor_get(v_a_3292_, 1);
lean_inc(v_snd_3296_);
lean_dec(v_a_3292_);
if (lean_obj_tag(v_rest_3282_) == 0)
{
lean_object* v_fst_3297_; lean_object* v_snd_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3306_; 
v_fst_3297_ = lean_ctor_get(v_snd_3296_, 0);
lean_inc(v_fst_3297_);
v_snd_3298_ = lean_ctor_get(v_snd_3296_, 1);
lean_inc(v_snd_3298_);
lean_dec(v_snd_3296_);
v___x_3299_ = lean_st_ref_take(v_a_3283_);
v___x_3300_ = lean_box(0);
v___x_3301_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_3302_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3301_);
lean_ctor_set(v___x_3302_, 1, v_fst_3297_);
lean_ctor_set(v___x_3302_, 2, v_snd_3298_);
lean_ctor_set(v___x_3302_, 3, v___x_3301_);
v___x_3303_ = lean_array_set(v___x_3299_, v_next_3281_, v___x_3302_);
lean_dec(v_next_3281_);
v___x_3304_ = lean_st_ref_put(v_a_3283_, v___x_3303_);
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 0, v___x_3300_);
v___x_3306_ = v___x_3294_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v___x_3300_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
else
{
lean_object* v_fst_3308_; lean_object* v_snd_3309_; lean_object* v_head_3310_; lean_object* v_tail_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; 
lean_del_object(v___x_3294_);
lean_dec(v_next_3281_);
v_fst_3308_ = lean_ctor_get(v_snd_3296_, 0);
lean_inc(v_fst_3308_);
v_snd_3309_ = lean_ctor_get(v_snd_3296_, 1);
lean_inc(v_snd_3309_);
lean_dec(v_snd_3296_);
v_head_3310_ = lean_ctor_get(v_rest_3282_, 0);
v_tail_3311_ = lean_ctor_get(v_rest_3282_, 1);
v___x_3312_ = lean_box(3);
v___x_3313_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_3310_, v___x_3312_);
if (v___x_3313_ == 0)
{
lean_object* v___x_3314_; 
lean_dec(v_fst_3308_);
v___x_3314_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_3309_, v_head_3310_, v___x_3289_);
lean_dec(v_snd_3309_);
v_next_3281_ = v___x_3314_;
v_rest_3282_ = v_tail_3311_;
goto _start;
}
else
{
lean_dec(v_snd_3309_);
v_next_3281_ = v_fst_3308_;
v_rest_3282_ = v_tail_3311_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec(v_next_3281_);
v_a_3318_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3291_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3291_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
else
{
lean_object* v___x_3326_; lean_object* v___x_3327_; 
lean_dec(v_next_3281_);
v___x_3326_ = lean_box(0);
v___x_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
return v___x_3327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object* v_next_3328_, lean_object* v_rest_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3328_, v_rest_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_);
lean_dec(v_a_3334_);
lean_dec_ref(v_a_3333_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
lean_dec(v_a_3330_);
lean_dec(v_rest_3329_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object* v_00_u03b1_3337_, lean_object* v_next_3338_, lean_object* v_rest_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3338_, v_rest_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object* v_00_u03b1_3347_, lean_object* v_next_3348_, lean_object* v_rest_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux(v_00_u03b1_3347_, v_next_3348_, v_rest_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_);
lean_dec(v_a_3354_);
lean_dec_ref(v_a_3353_);
lean_dec(v_a_3352_);
lean_dec_ref(v_a_3351_);
lean_dec(v_a_3350_);
lean_dec(v_rest_3349_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object* v_00_u03b2_3357_, lean_object* v_m_3358_, lean_object* v_a_3359_, lean_object* v_fallback_3360_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3358_, v_a_3359_, v_fallback_3360_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object* v_00_u03b2_3362_, lean_object* v_m_3363_, lean_object* v_a_3364_, lean_object* v_fallback_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(v_00_u03b2_3362_, v_m_3363_, v_a_3364_, v_fallback_3365_);
lean_dec(v_fallback_3365_);
lean_dec(v_a_3364_);
lean_dec_ref(v_m_3363_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object* v_00_u03b2_3367_, lean_object* v_a_3368_, lean_object* v_fallback_3369_, lean_object* v_x_3370_){
_start:
{
lean_object* v___x_3371_; 
v___x_3371_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3368_, v_fallback_3369_, v_x_3370_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3372_, lean_object* v_a_3373_, lean_object* v_fallback_3374_, lean_object* v_x_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(v_00_u03b2_3372_, v_a_3373_, v_fallback_3374_, v_x_3375_);
lean_dec(v_x_3375_);
lean_dec(v_fallback_3374_);
lean_dec(v_a_3373_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object* v_t_3377_, lean_object* v_path_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_){
_start:
{
if (lean_obj_tag(v_path_3378_) == 0)
{
lean_object* v___x_3384_; 
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v_t_3377_);
return v___x_3384_;
}
else
{
lean_object* v_head_3385_; lean_object* v_tail_3386_; lean_object* v_roots_3387_; lean_object* v___x_3388_; lean_object* v_idx_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v_head_3385_ = lean_ctor_get(v_path_3378_, 0);
lean_inc(v_head_3385_);
v_tail_3386_ = lean_ctor_get(v_path_3378_, 1);
lean_inc(v_tail_3386_);
lean_dec_ref_known(v_path_3378_, 2);
v_roots_3387_ = lean_ctor_get(v_t_3377_, 1);
v___x_3388_ = lean_unsigned_to_nat(0u);
v_idx_3389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_3387_, v_head_3385_, v___x_3388_);
lean_dec(v_head_3385_);
v___x_3390_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed), 9, 3);
lean_closure_set(v___x_3390_, 0, lean_box(0));
lean_closure_set(v___x_3390_, 1, v_idx_3389_);
lean_closure_set(v___x_3390_, 2, v_tail_3386_);
v___x_3391_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_3377_, v___x_3390_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3400_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3400_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3400_ == 0)
{
v___x_3394_ = v___x_3391_;
v_isShared_3395_ = v_isSharedCheck_3400_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3400_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v_snd_3396_; lean_object* v___x_3398_; 
v_snd_3396_ = lean_ctor_get(v_a_3392_, 1);
lean_inc(v_snd_3396_);
lean_dec(v_a_3392_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 0, v_snd_3396_);
v___x_3398_ = v___x_3394_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v_snd_3396_);
v___x_3398_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
return v___x_3398_;
}
}
}
else
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3408_; 
v_a_3401_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3408_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3403_ = v___x_3391_;
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3391_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3406_; 
if (v_isShared_3404_ == 0)
{
v___x_3406_ = v___x_3403_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3401_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
return v___x_3406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object* v_t_3409_, lean_object* v_path_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3409_, v_path_3410_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_);
lean_dec(v_a_3414_);
lean_dec_ref(v_a_3413_);
lean_dec(v_a_3412_);
lean_dec_ref(v_a_3411_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object* v_00_u03b1_3417_, lean_object* v_t_3418_, lean_object* v_path_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3418_, v_path_3419_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object* v_00_u03b1_3426_, lean_object* v_t_3427_, lean_object* v_path_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Lean_Meta_LazyDiscrTree_dropKey(v_00_u03b1_3426_, v_t_3427_, v_path_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_);
lean_dec(v_a_3432_);
lean_dec_ref(v_a_3431_);
lean_dec(v_a_3430_);
lean_dec_ref(v_a_3429_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object* v_score_3437_, lean_object* v_e_3438_, lean_object* v_a_3439_){
_start:
{
lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = lean_array_get_size(v_a_3439_);
v___x_3441_ = lean_nat_dec_lt(v___x_3440_, v_score_3437_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3442_ = lean_unsigned_to_nat(1u);
v___x_3443_ = lean_mk_empty_array_with_capacity(v___x_3442_);
v___x_3444_ = lean_array_push(v___x_3443_, v_e_3438_);
v___x_3445_ = lean_array_push(v_a_3439_, v___x_3444_);
return v___x_3445_;
}
else
{
lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3446_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0));
v___x_3447_ = lean_array_push(v_a_3439_, v___x_3446_);
v_a_3439_ = v___x_3447_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object* v_score_3449_, lean_object* v_e_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3449_, v_e_3450_, v_a_3451_);
lean_dec(v_score_3449_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object* v_00_u03b1_3453_, lean_object* v_score_3454_, lean_object* v_e_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3454_, v_e_3455_, v_a_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object* v_00_u03b1_3458_, lean_object* v_score_3459_, lean_object* v_e_3460_, lean_object* v_a_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(v_00_u03b1_3458_, v_score_3459_, v_e_3460_, v_a_3461_);
lean_dec(v_score_3459_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object* v_r_3463_, lean_object* v_score_3464_, lean_object* v_e_3465_){
_start:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; uint8_t v___x_3468_; 
v___x_3466_ = lean_array_get_size(v_e_3465_);
v___x_3467_ = lean_unsigned_to_nat(0u);
v___x_3468_ = lean_nat_dec_eq(v___x_3466_, v___x_3467_);
if (v___x_3468_ == 0)
{
lean_object* v___x_3469_; uint8_t v___x_3470_; 
v___x_3469_ = lean_array_get_size(v_r_3463_);
v___x_3470_ = lean_nat_dec_lt(v_score_3464_, v___x_3469_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3471_; 
v___x_3471_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3464_, v_e_3465_, v_r_3463_);
return v___x_3471_;
}
else
{
if (v___x_3470_ == 0)
{
lean_dec_ref(v_e_3465_);
return v_r_3463_;
}
else
{
lean_object* v_v_3472_; lean_object* v___x_3473_; lean_object* v_xs_x27_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v_v_3472_ = lean_array_fget(v_r_3463_, v_score_3464_);
v___x_3473_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0);
v_xs_x27_3474_ = lean_array_fset(v_r_3463_, v_score_3464_, v___x_3473_);
v___x_3475_ = lean_array_push(v_v_3472_, v_e_3465_);
v___x_3476_ = lean_array_fset(v_xs_x27_3474_, v_score_3464_, v___x_3475_);
return v___x_3476_;
}
}
}
else
{
lean_dec_ref(v_e_3465_);
return v_r_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object* v_r_3477_, lean_object* v_score_3478_, lean_object* v_e_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3477_, v_score_3478_, v_e_3479_);
lean_dec(v_score_3478_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object* v_00_u03b1_3481_, lean_object* v_r_3482_, lean_object* v_score_3483_, lean_object* v_e_3484_){
_start:
{
lean_object* v___x_3485_; 
v___x_3485_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3482_, v_score_3483_, v_e_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object* v_00_u03b1_3486_, lean_object* v_r_3487_, lean_object* v_score_3488_, lean_object* v_e_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push(v_00_u03b1_3486_, v_r_3487_, v_score_3488_, v_e_3489_);
lean_dec(v_score_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object* v_as_3491_, size_t v_i_3492_, size_t v_stop_3493_, lean_object* v_b_3494_){
_start:
{
uint8_t v___x_3495_; 
v___x_3495_ = lean_usize_dec_eq(v_i_3492_, v_stop_3493_);
if (v___x_3495_ == 0)
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; size_t v___x_3499_; size_t v___x_3500_; 
v___x_3496_ = lean_array_uget_borrowed(v_as_3491_, v_i_3492_);
v___x_3497_ = lean_array_get_size(v___x_3496_);
v___x_3498_ = lean_nat_add(v_b_3494_, v___x_3497_);
lean_dec(v_b_3494_);
v___x_3499_ = ((size_t)1ULL);
v___x_3500_ = lean_usize_add(v_i_3492_, v___x_3499_);
v_i_3492_ = v___x_3500_;
v_b_3494_ = v___x_3498_;
goto _start;
}
else
{
return v_b_3494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object* v_as_3502_, lean_object* v_i_3503_, lean_object* v_stop_3504_, lean_object* v_b_3505_){
_start:
{
size_t v_i_boxed_3506_; size_t v_stop_boxed_3507_; lean_object* v_res_3508_; 
v_i_boxed_3506_ = lean_unbox_usize(v_i_3503_);
lean_dec(v_i_3503_);
v_stop_boxed_3507_ = lean_unbox_usize(v_stop_3504_);
lean_dec(v_stop_3504_);
v_res_3508_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3502_, v_i_boxed_3506_, v_stop_boxed_3507_, v_b_3505_);
lean_dec_ref(v_as_3502_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object* v_as_3509_, size_t v_i_3510_, size_t v_stop_3511_, lean_object* v_b_3512_){
_start:
{
lean_object* v___y_3514_; uint8_t v___x_3518_; 
v___x_3518_ = lean_usize_dec_eq(v_i_3510_, v_stop_3511_);
if (v___x_3518_ == 0)
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; uint8_t v___x_3522_; 
v___x_3519_ = lean_array_uget_borrowed(v_as_3509_, v_i_3510_);
v___x_3520_ = lean_unsigned_to_nat(0u);
v___x_3521_ = lean_array_get_size(v___x_3519_);
v___x_3522_ = lean_nat_dec_lt(v___x_3520_, v___x_3521_);
if (v___x_3522_ == 0)
{
v___y_3514_ = v_b_3512_;
goto v___jp_3513_;
}
else
{
uint8_t v___x_3523_; 
v___x_3523_ = lean_nat_dec_le(v___x_3521_, v___x_3521_);
if (v___x_3523_ == 0)
{
if (v___x_3522_ == 0)
{
v___y_3514_ = v_b_3512_;
goto v___jp_3513_;
}
else
{
size_t v___x_3524_; size_t v___x_3525_; lean_object* v___x_3526_; 
v___x_3524_ = ((size_t)0ULL);
v___x_3525_ = lean_usize_of_nat(v___x_3521_);
v___x_3526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3519_, v___x_3524_, v___x_3525_, v_b_3512_);
v___y_3514_ = v___x_3526_;
goto v___jp_3513_;
}
}
else
{
size_t v___x_3527_; size_t v___x_3528_; lean_object* v___x_3529_; 
v___x_3527_ = ((size_t)0ULL);
v___x_3528_ = lean_usize_of_nat(v___x_3521_);
v___x_3529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3519_, v___x_3527_, v___x_3528_, v_b_3512_);
v___y_3514_ = v___x_3529_;
goto v___jp_3513_;
}
}
}
else
{
return v_b_3512_;
}
v___jp_3513_:
{
size_t v___x_3515_; size_t v___x_3516_; 
v___x_3515_ = ((size_t)1ULL);
v___x_3516_ = lean_usize_add(v_i_3510_, v___x_3515_);
v_i_3510_ = v___x_3516_;
v_b_3512_ = v___y_3514_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object* v_as_3530_, lean_object* v_i_3531_, lean_object* v_stop_3532_, lean_object* v_b_3533_){
_start:
{
size_t v_i_boxed_3534_; size_t v_stop_boxed_3535_; lean_object* v_res_3536_; 
v_i_boxed_3534_ = lean_unbox_usize(v_i_3531_);
lean_dec(v_i_3531_);
v_stop_boxed_3535_ = lean_unbox_usize(v_stop_3532_);
lean_dec(v_stop_3532_);
v_res_3536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3530_, v_i_boxed_3534_, v_stop_boxed_3535_, v_b_3533_);
lean_dec_ref(v_as_3530_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object* v_mr_3537_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; uint8_t v___x_3540_; 
v___x_3538_ = lean_unsigned_to_nat(0u);
v___x_3539_ = lean_array_get_size(v_mr_3537_);
v___x_3540_ = lean_nat_dec_lt(v___x_3538_, v___x_3539_);
if (v___x_3540_ == 0)
{
return v___x_3538_;
}
else
{
uint8_t v___x_3541_; 
v___x_3541_ = lean_nat_dec_le(v___x_3539_, v___x_3539_);
if (v___x_3541_ == 0)
{
if (v___x_3540_ == 0)
{
return v___x_3538_;
}
else
{
size_t v___x_3542_; size_t v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = ((size_t)0ULL);
v___x_3543_ = lean_usize_of_nat(v___x_3539_);
v___x_3544_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3537_, v___x_3542_, v___x_3543_, v___x_3538_);
return v___x_3544_;
}
}
else
{
size_t v___x_3545_; size_t v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = ((size_t)0ULL);
v___x_3546_ = lean_usize_of_nat(v___x_3539_);
v___x_3547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3537_, v___x_3545_, v___x_3546_, v___x_3538_);
return v___x_3547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object* v_mr_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3548_);
lean_dec_ref(v_mr_3548_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object* v_00_u03b1_3550_, lean_object* v_mr_3551_){
_start:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object* v_00_u03b1_3553_, lean_object* v_mr_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size(v_00_u03b1_3553_, v_mr_3554_);
lean_dec_ref(v_mr_3554_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object* v_00_u03b1_3556_, lean_object* v_as_3557_, size_t v_i_3558_, size_t v_stop_3559_, lean_object* v_b_3560_){
_start:
{
lean_object* v___x_3561_; 
v___x_3561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3557_, v_i_3558_, v_stop_3559_, v_b_3560_);
return v___x_3561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object* v_00_u03b1_3562_, lean_object* v_as_3563_, lean_object* v_i_3564_, lean_object* v_stop_3565_, lean_object* v_b_3566_){
_start:
{
size_t v_i_boxed_3567_; size_t v_stop_boxed_3568_; lean_object* v_res_3569_; 
v_i_boxed_3567_ = lean_unbox_usize(v_i_3564_);
lean_dec(v_i_3564_);
v_stop_boxed_3568_ = lean_unbox_usize(v_stop_3565_);
lean_dec(v_stop_3565_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(v_00_u03b1_3562_, v_as_3563_, v_i_boxed_3567_, v_stop_boxed_3568_, v_b_3566_);
lean_dec_ref(v_as_3563_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object* v_00_u03b1_3570_, lean_object* v_as_3571_, size_t v_i_3572_, size_t v_stop_3573_, lean_object* v_b_3574_){
_start:
{
lean_object* v___x_3575_; 
v___x_3575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3571_, v_i_3572_, v_stop_3573_, v_b_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object* v_00_u03b1_3576_, lean_object* v_as_3577_, lean_object* v_i_3578_, lean_object* v_stop_3579_, lean_object* v_b_3580_){
_start:
{
size_t v_i_boxed_3581_; size_t v_stop_boxed_3582_; lean_object* v_res_3583_; 
v_i_boxed_3581_ = lean_unbox_usize(v_i_3578_);
lean_dec(v_i_3578_);
v_stop_boxed_3582_ = lean_unbox_usize(v_stop_3579_);
lean_dec(v_stop_3579_);
v_res_3583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(v_00_u03b1_3576_, v_as_3577_, v_i_boxed_3581_, v_stop_boxed_3582_, v_b_3580_);
lean_dec_ref(v_as_3577_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object* v_f_3584_, lean_object* v_j_3585_, lean_object* v_x_3586_){
_start:
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_apply_2(v_f_3584_, v_j_3585_, v_x_3586_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object* v___f_3607_, lean_object* v_x1_3608_, lean_object* v_x2_3609_){
_start:
{
lean_object* v___x_3610_; size_t v_sz_3611_; size_t v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3610_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v_sz_3611_ = lean_array_size(v_x2_3609_);
v___x_3612_ = ((size_t)0ULL);
v___x_3613_ = l_unsafeCast___redArg(v_x2_3609_);
v___x_3614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3610_, v___f_3607_, v_sz_3611_, v___x_3612_, v___x_3613_);
v___x_3615_ = l_unsafeCast___redArg(v___x_3614_);
lean_dec(v___x_3614_);
v___x_3616_ = l_Array_append___redArg(v_x1_3608_, v___x_3615_);
lean_dec(v___x_3615_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___boxed(lean_object* v___f_3617_, lean_object* v_x1_3618_, lean_object* v_x2_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(v___f_3617_, v_x1_3618_, v_x2_3619_);
lean_dec_ref(v_x2_3619_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object* v_n_3621_, lean_object* v_mr_3622_, lean_object* v_f_3623_, lean_object* v_i_3624_, lean_object* v_x_3625_, lean_object* v_r_3626_){
_start:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v_j_3629_; lean_object* v_b_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; 
v___x_3627_ = lean_unsigned_to_nat(1u);
v___x_3628_ = lean_nat_sub(v_n_3621_, v___x_3627_);
v_j_3629_ = lean_nat_sub(v___x_3628_, v_i_3624_);
lean_dec(v___x_3628_);
v_b_3630_ = lean_array_fget_borrowed(v_mr_3622_, v_j_3629_);
v___x_3631_ = lean_unsigned_to_nat(0u);
v___x_3632_ = lean_array_get_size(v_b_3630_);
v___x_3633_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_3634_ = lean_nat_dec_lt(v___x_3631_, v___x_3632_);
if (v___x_3634_ == 0)
{
lean_dec(v_j_3629_);
lean_dec(v_f_3623_);
return v_r_3626_;
}
else
{
lean_object* v___f_3635_; lean_object* v___f_3636_; uint8_t v___x_3637_; 
v___f_3635_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3635_, 0, v_f_3623_);
lean_closure_set(v___f_3635_, 1, v_j_3629_);
v___f_3636_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3636_, 0, v___f_3635_);
v___x_3637_ = lean_nat_dec_le(v___x_3632_, v___x_3632_);
if (v___x_3637_ == 0)
{
if (v___x_3634_ == 0)
{
lean_dec_ref(v___f_3636_);
return v_r_3626_;
}
else
{
size_t v___x_3638_; size_t v___x_3639_; lean_object* v___x_3640_; 
v___x_3638_ = ((size_t)0ULL);
v___x_3639_ = lean_usize_of_nat(v___x_3632_);
lean_inc(v_b_3630_);
v___x_3640_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3633_, v___f_3636_, v_b_3630_, v___x_3638_, v___x_3639_, v_r_3626_);
return v___x_3640_;
}
}
else
{
size_t v___x_3641_; size_t v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = ((size_t)0ULL);
v___x_3642_ = lean_usize_of_nat(v___x_3632_);
lean_inc(v_b_3630_);
v___x_3643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3633_, v___f_3636_, v_b_3630_, v___x_3641_, v___x_3642_, v_r_3626_);
return v___x_3643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object* v_n_3644_, lean_object* v_mr_3645_, lean_object* v_f_3646_, lean_object* v_i_3647_, lean_object* v_x_3648_, lean_object* v_r_3649_){
_start:
{
lean_object* v_res_3650_; 
v_res_3650_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(v_n_3644_, v_mr_3645_, v_f_3646_, v_i_3647_, v_x_3648_, v_r_3649_);
lean_dec(v_i_3647_);
lean_dec_ref(v_mr_3645_);
lean_dec(v_n_3644_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object* v_mr_3651_, lean_object* v_a_3652_, lean_object* v_f_3653_){
_start:
{
lean_object* v_n_3654_; lean_object* v___f_3655_; lean_object* v___x_3656_; 
v_n_3654_ = lean_array_get_size(v_mr_3651_);
v___f_3655_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3655_, 0, v_n_3654_);
lean_closure_set(v___f_3655_, 1, v_mr_3651_);
lean_closure_set(v___f_3655_, 2, v_f_3653_);
v___x_3656_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3654_, v___f_3655_, v_n_3654_, lean_box(0), v_a_3652_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object* v_00_u03b1_3657_, lean_object* v_00_u03b2_3658_, lean_object* v_mr_3659_, lean_object* v_a_3660_, lean_object* v_f_3661_){
_start:
{
lean_object* v___x_3662_; 
v___x_3662_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(v_mr_3659_, v_a_3660_, v_f_3661_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t v_sz_3663_, size_t v_i_3664_, lean_object* v_bs_3665_){
_start:
{
uint8_t v___x_3666_; 
v___x_3666_ = lean_usize_dec_lt(v_i_3664_, v_sz_3663_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; 
v___x_3667_ = l_unsafeCast___redArg(v_bs_3665_);
lean_dec_ref(v_bs_3665_);
return v___x_3667_;
}
else
{
lean_object* v_v_3668_; lean_object* v___x_3669_; lean_object* v_bs_x27_3670_; lean_object* v___x_3671_; size_t v___x_3672_; size_t v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v_v_3668_ = lean_array_uget(v_bs_3665_, v_i_3664_);
v___x_3669_ = lean_unsigned_to_nat(0u);
v_bs_x27_3670_ = lean_array_uset(v_bs_3665_, v_i_3664_, v___x_3669_);
v___x_3671_ = l_unsafeCast___redArg(v_v_3668_);
lean_dec(v_v_3668_);
v___x_3672_ = ((size_t)1ULL);
v___x_3673_ = lean_usize_add(v_i_3664_, v___x_3672_);
v___x_3674_ = l_unsafeCast___redArg(v___x_3671_);
lean_dec(v___x_3671_);
v___x_3675_ = lean_array_uset(v_bs_x27_3670_, v_i_3664_, v___x_3674_);
v_i_3664_ = v___x_3673_;
v_bs_3665_ = v___x_3675_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object* v_sz_3677_, lean_object* v_i_3678_, lean_object* v_bs_3679_){
_start:
{
size_t v_sz_boxed_3680_; size_t v_i_boxed_3681_; lean_object* v_res_3682_; 
v_sz_boxed_3680_ = lean_unbox_usize(v_sz_3677_);
lean_dec(v_sz_3677_);
v_i_boxed_3681_ = lean_unbox_usize(v_i_3678_);
lean_dec(v_i_3678_);
v_res_3682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_boxed_3680_, v_i_boxed_3681_, v_bs_3679_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object* v_as_3683_, size_t v_i_3684_, size_t v_stop_3685_, lean_object* v_b_3686_){
_start:
{
uint8_t v___x_3687_; 
v___x_3687_ = lean_usize_dec_eq(v_i_3684_, v_stop_3685_);
if (v___x_3687_ == 0)
{
lean_object* v___x_3688_; size_t v_sz_3689_; size_t v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; size_t v___x_3695_; size_t v___x_3696_; 
v___x_3688_ = lean_array_uget_borrowed(v_as_3683_, v_i_3684_);
v_sz_3689_ = lean_array_size(v___x_3688_);
v___x_3690_ = ((size_t)0ULL);
v___x_3691_ = l_unsafeCast___redArg(v___x_3688_);
v___x_3692_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3689_, v___x_3690_, v___x_3691_);
v___x_3693_ = l_unsafeCast___redArg(v___x_3692_);
lean_dec_ref(v___x_3692_);
v___x_3694_ = l_Array_append___redArg(v_b_3686_, v___x_3693_);
lean_dec(v___x_3693_);
v___x_3695_ = ((size_t)1ULL);
v___x_3696_ = lean_usize_add(v_i_3684_, v___x_3695_);
v_i_3684_ = v___x_3696_;
v_b_3686_ = v___x_3694_;
goto _start;
}
else
{
return v_b_3686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object* v_as_3698_, lean_object* v_i_3699_, lean_object* v_stop_3700_, lean_object* v_b_3701_){
_start:
{
size_t v_i_boxed_3702_; size_t v_stop_boxed_3703_; lean_object* v_res_3704_; 
v_i_boxed_3702_ = lean_unbox_usize(v_i_3699_);
lean_dec(v_i_3699_);
v_stop_boxed_3703_ = lean_unbox_usize(v_stop_3700_);
lean_dec(v_stop_3700_);
v_res_3704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3698_, v_i_boxed_3702_, v_stop_boxed_3703_, v_b_3701_);
lean_dec_ref(v_as_3698_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object* v_n_3705_, lean_object* v_aa_3706_, lean_object* v_n_3707_, lean_object* v_j_3708_, lean_object* v_a_3709_){
_start:
{
lean_object* v_zero_3710_; uint8_t v_isZero_3711_; 
v_zero_3710_ = lean_unsigned_to_nat(0u);
v_isZero_3711_ = lean_nat_dec_eq(v_j_3708_, v_zero_3710_);
if (v_isZero_3711_ == 1)
{
lean_dec(v_j_3708_);
return v_a_3709_;
}
else
{
lean_object* v_one_3712_; lean_object* v_n_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v_j_3716_; lean_object* v_b_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; 
v_one_3712_ = lean_unsigned_to_nat(1u);
v_n_3713_ = lean_nat_sub(v_j_3708_, v_one_3712_);
v___x_3714_ = lean_nat_sub(v_n_3707_, v_j_3708_);
lean_dec(v_j_3708_);
v___x_3715_ = lean_nat_sub(v_n_3705_, v_one_3712_);
v_j_3716_ = lean_nat_sub(v___x_3715_, v___x_3714_);
lean_dec(v___x_3714_);
lean_dec(v___x_3715_);
v_b_3717_ = lean_array_fget_borrowed(v_aa_3706_, v_j_3716_);
lean_dec(v_j_3716_);
v___x_3718_ = lean_array_get_size(v_b_3717_);
v___x_3719_ = lean_nat_dec_lt(v_zero_3710_, v___x_3718_);
if (v___x_3719_ == 0)
{
v_j_3708_ = v_n_3713_;
goto _start;
}
else
{
size_t v___x_3721_; size_t v___x_3722_; lean_object* v___x_3723_; 
v___x_3721_ = ((size_t)0ULL);
v___x_3722_ = lean_usize_of_nat(v___x_3718_);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_b_3717_, v___x_3721_, v___x_3722_, v_a_3709_);
v_j_3708_ = v_n_3713_;
v_a_3709_ = v___x_3723_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object* v_n_3725_, lean_object* v_aa_3726_, lean_object* v_n_3727_, lean_object* v_j_3728_, lean_object* v_a_3729_){
_start:
{
lean_object* v_res_3730_; 
v_res_3730_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3725_, v_aa_3726_, v_n_3727_, v_j_3728_, v_a_3729_);
lean_dec(v_n_3727_);
lean_dec_ref(v_aa_3726_);
lean_dec(v_n_3725_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object* v_mr_3731_, lean_object* v_a_3732_){
_start:
{
lean_object* v_n_3733_; lean_object* v___x_3734_; 
v_n_3733_ = lean_array_get_size(v_mr_3731_);
v___x_3734_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3733_, v_mr_3731_, v_n_3733_, v_n_3733_, v_a_3732_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object* v_mr_3735_, lean_object* v_a_3736_){
_start:
{
lean_object* v_res_3737_; 
v_res_3737_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3735_, v_a_3736_);
lean_dec_ref(v_mr_3735_);
return v_res_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object* v_mr_3738_, lean_object* v_a_3739_){
_start:
{
lean_object* v___x_3740_; 
v___x_3740_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3738_, v_a_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object* v_mr_3741_, lean_object* v_a_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(v_mr_3741_, v_a_3742_);
lean_dec_ref(v_mr_3741_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object* v_00_u03b1_3744_, lean_object* v_mr_3745_, lean_object* v_a_3746_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3745_, v_a_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object* v_00_u03b1_3748_, lean_object* v_mr_3749_, lean_object* v_a_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(v_00_u03b1_3748_, v_mr_3749_, v_a_3750_);
lean_dec_ref(v_mr_3749_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object* v_00_u03b1_3752_, lean_object* v_mr_3753_, lean_object* v_a_3754_){
_start:
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3753_, v_a_3754_);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object* v_00_u03b1_3756_, lean_object* v_mr_3757_, lean_object* v_a_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(v_00_u03b1_3756_, v_mr_3757_, v_a_3758_);
lean_dec_ref(v_mr_3757_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object* v_00_u03b1_3760_, size_t v_sz_3761_, size_t v_i_3762_, lean_object* v_bs_3763_){
_start:
{
lean_object* v___x_3764_; 
v___x_3764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3761_, v_i_3762_, v_bs_3763_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3765_, lean_object* v_sz_3766_, lean_object* v_i_3767_, lean_object* v_bs_3768_){
_start:
{
size_t v_sz_boxed_3769_; size_t v_i_boxed_3770_; lean_object* v_res_3771_; 
v_sz_boxed_3769_ = lean_unbox_usize(v_sz_3766_);
lean_dec(v_sz_3766_);
v_i_boxed_3770_ = lean_unbox_usize(v_i_3767_);
lean_dec(v_i_3767_);
v_res_3771_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(v_00_u03b1_3765_, v_sz_boxed_3769_, v_i_boxed_3770_, v_bs_3768_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object* v_00_u03b1_3772_, lean_object* v_as_3773_, size_t v_i_3774_, size_t v_stop_3775_, lean_object* v_b_3776_){
_start:
{
lean_object* v___x_3777_; 
v___x_3777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3773_, v_i_3774_, v_stop_3775_, v_b_3776_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3778_, lean_object* v_as_3779_, lean_object* v_i_3780_, lean_object* v_stop_3781_, lean_object* v_b_3782_){
_start:
{
size_t v_i_boxed_3783_; size_t v_stop_boxed_3784_; lean_object* v_res_3785_; 
v_i_boxed_3783_ = lean_unbox_usize(v_i_3780_);
lean_dec(v_i_3780_);
v_stop_boxed_3784_ = lean_unbox_usize(v_stop_3781_);
lean_dec(v_stop_3781_);
v_res_3785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(v_00_u03b1_3778_, v_as_3779_, v_i_boxed_3783_, v_stop_boxed_3784_, v_b_3782_);
lean_dec_ref(v_as_3779_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object* v_00_u03b1_3786_, lean_object* v_n_3787_, lean_object* v_aa_3788_, lean_object* v_n_3789_, lean_object* v_j_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3787_, v_aa_3788_, v_n_3789_, v_j_3790_, v_a_3792_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3794_, lean_object* v_n_3795_, lean_object* v_aa_3796_, lean_object* v_n_3797_, lean_object* v_j_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(v_00_u03b1_3794_, v_n_3795_, v_aa_3796_, v_n_3797_, v_j_3798_, v_a_3799_, v_a_3800_);
lean_dec(v_n_3797_);
lean_dec_ref(v_aa_3796_);
lean_dec(v_n_3795_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object* v_snd_3809_, lean_object* v___x_3810_, lean_object* v_score_3811_, lean_object* v___x_3812_, lean_object* v_k_3813_, lean_object* v_args_3814_, lean_object* v_cases_3815_){
_start:
{
lean_object* v___x_3816_; 
v___x_3816_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_3809_, v_k_3813_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_dec_ref(v___x_3810_);
return v_cases_3815_;
}
else
{
lean_object* v_val_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v_val_3817_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_val_3817_);
lean_dec_ref_known(v___x_3816_, 1);
v___x_3818_ = l_Array_append___redArg(v___x_3810_, v_args_3814_);
v___x_3819_ = lean_nat_add(v_score_3811_, v___x_3812_);
v___x_3820_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3820_, 0, v___x_3818_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
lean_ctor_set(v___x_3820_, 2, v_val_3817_);
v___x_3821_ = lean_array_push(v_cases_3815_, v___x_3820_);
return v___x_3821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object* v_snd_3822_, lean_object* v___x_3823_, lean_object* v_score_3824_, lean_object* v___x_3825_, lean_object* v_k_3826_, lean_object* v_args_3827_, lean_object* v_cases_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(v_snd_3822_, v___x_3823_, v_score_3824_, v___x_3825_, v_k_3826_, v_args_3827_, v_cases_3828_);
lean_dec_ref(v_args_3827_);
lean_dec(v_k_3826_);
lean_dec(v___x_3825_);
lean_dec(v_score_3824_);
lean_dec_ref(v_snd_3822_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object* v_cases_3830_, lean_object* v_result_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_){
_start:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; uint8_t v___x_3840_; 
v___x_3838_ = lean_array_get_size(v_cases_3830_);
v___x_3839_ = lean_unsigned_to_nat(0u);
v___x_3840_ = lean_nat_dec_eq(v___x_3838_, v___x_3839_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v_ca_3844_; lean_object* v_todo_3845_; lean_object* v_score_3846_; lean_object* v_c_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3913_; 
v___x_3841_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default));
v___x_3842_ = lean_unsigned_to_nat(1u);
v___x_3843_ = lean_nat_sub(v___x_3838_, v___x_3842_);
v_ca_3844_ = lean_array_get(v___x_3841_, v_cases_3830_, v___x_3843_);
lean_dec(v___x_3843_);
v_todo_3845_ = lean_ctor_get(v_ca_3844_, 0);
v_score_3846_ = lean_ctor_get(v_ca_3844_, 1);
v_c_3847_ = lean_ctor_get(v_ca_3844_, 2);
v_isSharedCheck_3913_ = !lean_is_exclusive(v_ca_3844_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3849_ = v_ca_3844_;
v_isShared_3850_ = v_isSharedCheck_3913_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_c_3847_);
lean_inc(v_score_3846_);
lean_inc(v_todo_3845_);
lean_dec(v_ca_3844_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3913_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3851_; lean_object* v_cases_3852_; lean_object* v___x_3853_; 
v___x_3851_ = l_Lean_instInhabitedExpr;
v_cases_3852_ = lean_array_pop(v_cases_3830_);
v___x_3853_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3847_, v_a_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_);
lean_dec(v_c_3847_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___y_3856_; lean_object* v___y_3857_; uint8_t v___y_3858_; lean_object* v___y_3859_; lean_object* v_snd_3882_; lean_object* v_fst_3883_; lean_object* v_fst_3884_; lean_object* v_snd_3885_; lean_object* v___x_3886_; uint8_t v___y_3888_; uint8_t v___x_3898_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_a_3854_);
lean_dec_ref_known(v___x_3853_, 1);
v_snd_3882_ = lean_ctor_get(v_a_3854_, 1);
lean_inc(v_snd_3882_);
v_fst_3883_ = lean_ctor_get(v_a_3854_, 0);
lean_inc(v_fst_3883_);
lean_dec(v_a_3854_);
v_fst_3884_ = lean_ctor_get(v_snd_3882_, 0);
lean_inc(v_fst_3884_);
v_snd_3885_ = lean_ctor_get(v_snd_3882_, 1);
lean_inc(v_snd_3885_);
lean_dec(v_snd_3882_);
v___x_3886_ = lean_array_get_size(v_todo_3845_);
v___x_3898_ = lean_nat_dec_eq(v___x_3886_, v___x_3839_);
if (v___x_3898_ == 0)
{
uint8_t v___x_3899_; 
lean_dec(v_fst_3883_);
v___x_3899_ = lean_nat_dec_eq(v_fst_3884_, v___x_3839_);
if (v___x_3899_ == 0)
{
v___y_3888_ = v___x_3898_;
goto v___jp_3887_;
}
else
{
lean_object* v_size_3900_; uint8_t v___x_3901_; 
v_size_3900_ = lean_ctor_get(v_snd_3885_, 0);
v___x_3901_ = lean_nat_dec_eq(v_size_3900_, v___x_3839_);
if (v___x_3901_ == 0)
{
v___y_3888_ = v___x_3901_;
goto v___jp_3887_;
}
else
{
lean_dec(v_snd_3885_);
lean_dec(v_fst_3884_);
lean_del_object(v___x_3849_);
lean_dec(v_score_3846_);
lean_dec_ref(v_todo_3845_);
v_cases_3830_ = v_cases_3852_;
goto _start;
}
}
}
else
{
lean_object* v___x_3903_; 
lean_dec(v_snd_3885_);
lean_dec(v_fst_3884_);
lean_del_object(v___x_3849_);
lean_dec_ref(v_todo_3845_);
v___x_3903_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_result_3831_, v_score_3846_, v_fst_3883_);
lean_dec(v_score_3846_);
v_cases_3830_ = v_cases_3852_;
v_result_3831_ = v___x_3903_;
goto _start;
}
v___jp_3855_:
{
uint8_t v___x_3860_; lean_object* v___x_3861_; 
v___x_3860_ = 1;
v___x_3861_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v___y_3857_, v___x_3860_, v___y_3858_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; lean_object* v_fst_3863_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref_known(v___x_3861_, 1);
v_fst_3863_ = lean_ctor_get(v_a_3862_, 0);
lean_inc(v_fst_3863_);
switch(lean_obj_tag(v_fst_3863_))
{
case 3:
{
lean_dec(v_a_3862_);
lean_dec_ref(v___y_3856_);
v_cases_3830_ = v___y_3859_;
goto _start;
}
case 5:
{
lean_object* v_snd_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v_snd_3865_ = lean_ctor_get(v_a_3862_, 1);
lean_inc(v_snd_3865_);
lean_dec(v_a_3862_);
v___x_3866_ = lean_box(4);
v___x_3867_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
lean_inc_ref(v___y_3856_);
v___x_3868_ = lean_apply_3(v___y_3856_, v___x_3866_, v___x_3867_, v___y_3859_);
v___x_3869_ = lean_apply_3(v___y_3856_, v_fst_3863_, v_snd_3865_, v___x_3868_);
v_cases_3830_ = v___x_3869_;
goto _start;
}
default: 
{
lean_object* v_snd_3871_; lean_object* v___x_3872_; 
v_snd_3871_ = lean_ctor_get(v_a_3862_, 1);
lean_inc(v_snd_3871_);
lean_dec(v_a_3862_);
v___x_3872_ = lean_apply_3(v___y_3856_, v_fst_3863_, v_snd_3871_, v___y_3859_);
v_cases_3830_ = v___x_3872_;
goto _start;
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
lean_dec_ref(v___y_3859_);
lean_dec_ref(v___y_3856_);
lean_dec_ref(v_result_3831_);
v_a_3874_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3861_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3861_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
v___jp_3887_:
{
lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___f_3892_; uint8_t v___x_3893_; 
v___x_3889_ = lean_nat_sub(v___x_3886_, v___x_3842_);
v___x_3890_ = lean_array_get(v___x_3851_, v_todo_3845_, v___x_3889_);
lean_dec(v___x_3889_);
v___x_3891_ = lean_array_pop(v_todo_3845_);
lean_inc(v_score_3846_);
lean_inc_ref(v___x_3891_);
v___f_3892_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed), 7, 4);
lean_closure_set(v___f_3892_, 0, v_snd_3885_);
lean_closure_set(v___f_3892_, 1, v___x_3891_);
lean_closure_set(v___f_3892_, 2, v_score_3846_);
lean_closure_set(v___f_3892_, 3, v___x_3842_);
v___x_3893_ = lean_nat_dec_eq(v_fst_3884_, v___x_3839_);
if (v___x_3893_ == 0)
{
lean_object* v___x_3895_; 
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 2, v_fst_3884_);
lean_ctor_set(v___x_3849_, 0, v___x_3891_);
v___x_3895_ = v___x_3849_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3891_);
lean_ctor_set(v_reuseFailAlloc_3897_, 1, v_score_3846_);
lean_ctor_set(v_reuseFailAlloc_3897_, 2, v_fst_3884_);
v___x_3895_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
lean_object* v___x_3896_; 
v___x_3896_ = lean_array_push(v_cases_3852_, v___x_3895_);
v___y_3856_ = v___f_3892_;
v___y_3857_ = v___x_3890_;
v___y_3858_ = v___y_3888_;
v___y_3859_ = v___x_3896_;
goto v___jp_3855_;
}
}
else
{
lean_dec_ref(v___x_3891_);
lean_dec(v_fst_3884_);
lean_del_object(v___x_3849_);
lean_dec(v_score_3846_);
v___y_3856_ = v___f_3892_;
v___y_3857_ = v___x_3890_;
v___y_3858_ = v___y_3888_;
v___y_3859_ = v_cases_3852_;
goto v___jp_3855_;
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec_ref(v_cases_3852_);
lean_del_object(v___x_3849_);
lean_dec(v_score_3846_);
lean_dec_ref(v_todo_3845_);
lean_dec_ref(v_result_3831_);
v_a_3905_ = lean_ctor_get(v___x_3853_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3853_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3853_);
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
lean_object* v___x_3914_; 
lean_dec_ref(v_cases_3830_);
v___x_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3914_, 0, v_result_3831_);
return v___x_3914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object* v_cases_3915_, lean_object* v_result_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3915_, v_result_3916_, v_a_3917_, v_a_3918_, v_a_3919_, v_a_3920_, v_a_3921_);
lean_dec(v_a_3921_);
lean_dec_ref(v_a_3920_);
lean_dec(v_a_3919_);
lean_dec_ref(v_a_3918_);
lean_dec(v_a_3917_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object* v_00_u03b1_3924_, lean_object* v_cases_3925_, lean_object* v_result_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3925_, v_result_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_3934_, lean_object* v_cases_3935_, lean_object* v_result_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop(v_00_u03b1_3934_, v_cases_3935_, v_result_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_);
lean_dec(v_a_3941_);
lean_dec_ref(v_a_3940_);
lean_dec(v_a_3939_);
lean_dec_ref(v_a_3938_);
lean_dec(v_a_3937_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object* v_root_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_){
_start:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = lean_box(3);
v___x_3954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_root_3946_, v___x_3953_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3955_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3955_);
return v___x_3956_;
}
else
{
lean_object* v_val_3957_; lean_object* v___x_3958_; 
v_val_3957_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_val_3957_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3958_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_val_3957_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_);
lean_dec(v_val_3957_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3970_; 
v_a_3959_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3961_ = v___x_3958_;
v_isShared_3962_ = v_isSharedCheck_3970_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3958_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3970_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v_fst_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3968_; 
v_fst_3963_ = lean_ctor_get(v_a_3959_, 0);
lean_inc(v_fst_3963_);
lean_dec(v_a_3959_);
v___x_3964_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3965_ = lean_unsigned_to_nat(1u);
v___x_3966_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v___x_3964_, v___x_3965_, v_fst_3963_);
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 0, v___x_3966_);
v___x_3968_ = v___x_3961_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v___x_3966_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3978_; 
v_a_3971_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3973_ = v___x_3958_;
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3958_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object* v_root_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_a_3984_);
lean_dec_ref(v_a_3983_);
lean_dec(v_a_3982_);
lean_dec_ref(v_a_3981_);
lean_dec(v_a_3980_);
lean_dec_ref(v_root_3979_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object* v_00_u03b1_3987_, lean_object* v_root_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_){
_start:
{
lean_object* v___x_3995_; 
v___x_3995_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3988_, v_a_3989_, v_a_3990_, v_a_3991_, v_a_3992_, v_a_3993_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_3996_, lean_object* v_root_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lean_Meta_LazyDiscrTree_getStarResult(v_00_u03b1_3996_, v_root_3997_, v_a_3998_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
lean_dec(v_a_4002_);
lean_dec_ref(v_a_4001_);
lean_dec(v_a_4000_);
lean_dec_ref(v_a_3999_);
lean_dec(v_a_3998_);
lean_dec_ref(v_root_3997_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object* v_r_4005_, lean_object* v_k_4006_, lean_object* v_args_4007_, lean_object* v_cases_4008_){
_start:
{
lean_object* v___x_4009_; 
v___x_4009_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_r_4005_, v_k_4006_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_dec_ref(v_args_4007_);
return v_cases_4008_;
}
else
{
lean_object* v_val_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v_val_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_val_4010_);
lean_dec_ref_known(v___x_4009_, 1);
v___x_4011_ = lean_unsigned_to_nat(1u);
v___x_4012_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4012_, 0, v_args_4007_);
lean_ctor_set(v___x_4012_, 1, v___x_4011_);
lean_ctor_set(v___x_4012_, 2, v_val_4010_);
v___x_4013_ = lean_array_push(v_cases_4008_, v___x_4012_);
return v___x_4013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object* v_r_4014_, lean_object* v_k_4015_, lean_object* v_args_4016_, lean_object* v_cases_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_r_4014_, v_k_4015_, v_args_4016_, v_cases_4017_);
lean_dec(v_k_4015_);
lean_dec_ref(v_r_4014_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object* v_root_4021_, lean_object* v_e_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_4021_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; uint8_t v___x_4031_; lean_object* v___x_4032_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc(v_a_4030_);
lean_dec_ref_known(v___x_4029_, 1);
v___x_4031_ = 1;
v___x_4032_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_4022_, v___x_4031_, v___x_4031_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_object* v_a_4033_; lean_object* v_fst_4034_; 
v_a_4033_ = lean_ctor_get(v___x_4032_, 0);
lean_inc(v_a_4033_);
lean_dec_ref_known(v___x_4032_, 1);
v_fst_4034_ = lean_ctor_get(v_a_4033_, 0);
lean_inc(v_fst_4034_);
switch(lean_obj_tag(v_fst_4034_))
{
case 3:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; 
lean_dec(v_a_4033_);
v___x_4035_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_4036_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_4035_, v_a_4030_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
return v___x_4036_;
}
case 5:
{
lean_object* v_snd_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
v_snd_4037_ = lean_ctor_get(v_a_4033_, 1);
lean_inc(v_snd_4037_);
lean_dec(v_a_4033_);
v___x_4038_ = lean_box(4);
v___x_4039_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_4040_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_4021_, v___x_4038_, v___x_4039_, v___x_4039_);
v___x_4041_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_4021_, v_fst_4034_, v_snd_4037_, v___x_4040_);
v___x_4042_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_4041_, v_a_4030_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
return v___x_4042_;
}
default: 
{
lean_object* v_snd_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v_snd_4043_ = lean_ctor_get(v_a_4033_, 1);
lean_inc(v_snd_4043_);
lean_dec(v_a_4033_);
v___x_4044_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_4045_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_4021_, v_fst_4034_, v_snd_4043_, v___x_4044_);
lean_dec(v_fst_4034_);
v___x_4046_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_4045_, v_a_4030_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
return v___x_4046_;
}
}
}
else
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4054_; 
lean_dec(v_a_4030_);
v_a_4047_ = lean_ctor_get(v___x_4032_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v___x_4032_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4049_ = v___x_4032_;
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4032_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4050_ == 0)
{
v___x_4052_ = v___x_4049_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_a_4047_);
v___x_4052_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
return v___x_4052_;
}
}
}
}
else
{
lean_dec_ref(v_e_4022_);
return v___x_4029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object* v_root_4055_, lean_object* v_e_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_4055_, v_e_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
lean_dec(v_a_4061_);
lean_dec_ref(v_a_4060_);
lean_dec(v_a_4059_);
lean_dec_ref(v_a_4058_);
lean_dec(v_a_4057_);
lean_dec_ref(v_root_4055_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object* v_00_u03b1_4064_, lean_object* v_root_4065_, lean_object* v_e_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_){
_start:
{
lean_object* v___x_4073_; 
v___x_4073_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_4065_, v_e_4066_, v_a_4067_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_);
return v___x_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_4074_, lean_object* v_root_4075_, lean_object* v_e_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_Meta_LazyDiscrTree_getMatchCore(v_00_u03b1_4074_, v_root_4075_, v_e_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_);
lean_dec(v_a_4081_);
lean_dec_ref(v_a_4080_);
lean_dec(v_a_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_a_4077_);
lean_dec_ref(v_root_4075_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object* v_d_4084_, lean_object* v_e_4085_, lean_object* v_a_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_){
_start:
{
lean_object* v___y_4092_; lean_object* v_roots_4109_; lean_object* v___x_4110_; uint8_t v_transparency_4111_; lean_object* v___x_4112_; uint8_t v___x_4113_; uint8_t v___x_4114_; 
v_roots_4109_ = lean_ctor_get(v_d_4084_, 1);
v___x_4110_ = l_Lean_Meta_Context_config(v_a_4086_);
v_transparency_4111_ = lean_ctor_get_uint8(v___x_4110_, 9);
lean_dec_ref(v___x_4110_);
lean_inc_ref(v_roots_4109_);
v___x_4112_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed), 9, 3);
lean_closure_set(v___x_4112_, 0, lean_box(0));
lean_closure_set(v___x_4112_, 1, v_roots_4109_);
lean_closure_set(v___x_4112_, 2, v_e_4085_);
v___x_4113_ = 2;
v___x_4114_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4111_, v___x_4113_);
if (v___x_4114_ == 0)
{
lean_object* v_keyedConfig_4115_; uint8_t v_trackZetaDelta_4116_; lean_object* v_zetaDeltaSet_4117_; lean_object* v_lctx_4118_; lean_object* v_localInstances_4119_; lean_object* v_defEqCtx_x3f_4120_; lean_object* v_synthPendingDepth_4121_; lean_object* v_customCanUnfoldPredicate_x3f_4122_; uint8_t v_univApprox_4123_; uint8_t v_inTypeClassResolution_4124_; uint8_t v_cacheInferType_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v_keyedConfig_4115_ = lean_ctor_get(v_a_4086_, 0);
v_trackZetaDelta_4116_ = lean_ctor_get_uint8(v_a_4086_, sizeof(void*)*7);
v_zetaDeltaSet_4117_ = lean_ctor_get(v_a_4086_, 1);
v_lctx_4118_ = lean_ctor_get(v_a_4086_, 2);
v_localInstances_4119_ = lean_ctor_get(v_a_4086_, 3);
v_defEqCtx_x3f_4120_ = lean_ctor_get(v_a_4086_, 4);
v_synthPendingDepth_4121_ = lean_ctor_get(v_a_4086_, 5);
v_customCanUnfoldPredicate_x3f_4122_ = lean_ctor_get(v_a_4086_, 6);
v_univApprox_4123_ = lean_ctor_get_uint8(v_a_4086_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4124_ = lean_ctor_get_uint8(v_a_4086_, sizeof(void*)*7 + 2);
v_cacheInferType_4125_ = lean_ctor_get_uint8(v_a_4086_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4115_);
v___x_4126_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4113_, v_keyedConfig_4115_);
lean_inc(v_customCanUnfoldPredicate_x3f_4122_);
lean_inc(v_synthPendingDepth_4121_);
lean_inc(v_defEqCtx_x3f_4120_);
lean_inc_ref(v_localInstances_4119_);
lean_inc_ref(v_lctx_4118_);
lean_inc(v_zetaDeltaSet_4117_);
v___x_4127_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
lean_ctor_set(v___x_4127_, 1, v_zetaDeltaSet_4117_);
lean_ctor_set(v___x_4127_, 2, v_lctx_4118_);
lean_ctor_set(v___x_4127_, 3, v_localInstances_4119_);
lean_ctor_set(v___x_4127_, 4, v_defEqCtx_x3f_4120_);
lean_ctor_set(v___x_4127_, 5, v_synthPendingDepth_4121_);
lean_ctor_set(v___x_4127_, 6, v_customCanUnfoldPredicate_x3f_4122_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*7, v_trackZetaDelta_4116_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*7 + 1, v_univApprox_4123_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4124_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*7 + 3, v_cacheInferType_4125_);
v___x_4128_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_4084_, v___x_4112_, v___x_4127_, v_a_4087_, v_a_4088_, v_a_4089_);
lean_dec_ref_known(v___x_4127_, 7);
v___y_4092_ = v___x_4128_;
goto v___jp_4091_;
}
else
{
lean_object* v___x_4129_; 
v___x_4129_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_4084_, v___x_4112_, v_a_4086_, v_a_4087_, v_a_4088_, v_a_4089_);
v___y_4092_ = v___x_4129_;
goto v___jp_4091_;
}
v___jp_4091_:
{
if (lean_obj_tag(v___y_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
v_a_4093_ = lean_ctor_get(v___y_4092_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___y_4092_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___y_4092_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___y_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
else
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4108_; 
v_a_4101_ = lean_ctor_get(v___y_4092_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v___y_4092_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4103_ = v___y_4092_;
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___y_4092_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v___x_4106_; 
if (v_isShared_4104_ == 0)
{
v___x_4106_ = v___x_4103_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_a_4101_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object* v_d_4130_, lean_object* v_e_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_){
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4130_, v_e_4131_, v_a_4132_, v_a_4133_, v_a_4134_, v_a_4135_);
lean_dec(v_a_4135_);
lean_dec_ref(v_a_4134_);
lean_dec(v_a_4133_);
lean_dec_ref(v_a_4132_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object* v_00_u03b1_4138_, lean_object* v_d_4139_, lean_object* v_e_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_){
_start:
{
lean_object* v___x_4146_; 
v___x_4146_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4139_, v_e_4140_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_);
return v___x_4146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object* v_00_u03b1_4147_, lean_object* v_d_4148_, lean_object* v_e_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l_Lean_Meta_LazyDiscrTree_getMatch(v_00_u03b1_4147_, v_d_4148_, v_e_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_);
lean_dec(v_a_4153_);
lean_dec_ref(v_a_4152_);
lean_dec(v_a_4151_);
lean_dec_ref(v_a_4150_);
return v_res_4155_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4158_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4159_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4159_);
lean_ctor_set(v___x_4160_, 1, v___x_4158_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg(){
_start:
{
lean_object* v___x_4162_; 
v___x_4162_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
return v___x_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object* v___dummy_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v_res_4164_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0(void){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object* v_00_u03b1_4166_){
_start:
{
lean_object* v___x_4167_; 
v___x_4167_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg(){
_start:
{
lean_object* v___x_4169_; 
v___x_4169_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object* v___dummy_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object* v_a_4172_){
_start:
{
lean_object* v___x_4173_; 
v___x_4173_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object* v_d_4174_, lean_object* v_k_4175_, lean_object* v_f_4176_){
_start:
{
lean_object* v_roots_4177_; lean_object* v_tries_4178_; lean_object* v___x_4179_; 
v_roots_4177_ = lean_ctor_get(v_d_4174_, 0);
v_tries_4178_ = lean_ctor_get(v_d_4174_, 1);
v___x_4179_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_roots_4177_, v_k_4175_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4191_; 
lean_inc_ref(v_tries_4178_);
lean_inc_ref(v_roots_4177_);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_d_4174_);
if (v_isSharedCheck_4191_ == 0)
{
lean_object* v_unused_4192_; lean_object* v_unused_4193_; 
v_unused_4192_ = lean_ctor_get(v_d_4174_, 1);
lean_dec(v_unused_4192_);
v_unused_4193_ = lean_ctor_get(v_d_4174_, 0);
lean_dec(v_unused_4193_);
v___x_4181_ = v_d_4174_;
v_isShared_4182_ = v_isSharedCheck_4191_;
goto v_resetjp_4180_;
}
else
{
lean_dec(v_d_4174_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4191_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4183_; lean_object* v_roots_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4189_; 
v___x_4183_ = lean_array_get_size(v_tries_4178_);
v_roots_4184_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_roots_4177_, v_k_4175_, v___x_4183_);
v___x_4185_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_4186_ = lean_apply_1(v_f_4176_, v___x_4185_);
v___x_4187_ = lean_array_push(v_tries_4178_, v___x_4186_);
if (v_isShared_4182_ == 0)
{
lean_ctor_set(v___x_4181_, 1, v___x_4187_);
lean_ctor_set(v___x_4181_, 0, v_roots_4184_);
v___x_4189_ = v___x_4181_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_roots_4184_);
lean_ctor_set(v_reuseFailAlloc_4190_, 1, v___x_4187_);
v___x_4189_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
return v___x_4189_;
}
}
}
else
{
lean_object* v_val_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; 
lean_dec(v_k_4175_);
v_val_4194_ = lean_ctor_get(v___x_4179_, 0);
lean_inc(v_val_4194_);
lean_dec_ref_known(v___x_4179_, 1);
v___x_4195_ = lean_array_get_size(v_tries_4178_);
v___x_4196_ = lean_nat_dec_lt(v_val_4194_, v___x_4195_);
if (v___x_4196_ == 0)
{
lean_dec(v_val_4194_);
lean_dec_ref(v_f_4176_);
return v_d_4174_;
}
else
{
lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4208_; 
lean_inc_ref(v_tries_4178_);
lean_inc_ref(v_roots_4177_);
v_isSharedCheck_4208_ = !lean_is_exclusive(v_d_4174_);
if (v_isSharedCheck_4208_ == 0)
{
lean_object* v_unused_4209_; lean_object* v_unused_4210_; 
v_unused_4209_ = lean_ctor_get(v_d_4174_, 1);
lean_dec(v_unused_4209_);
v_unused_4210_ = lean_ctor_get(v_d_4174_, 0);
lean_dec(v_unused_4210_);
v___x_4198_ = v_d_4174_;
v_isShared_4199_ = v_isSharedCheck_4208_;
goto v_resetjp_4197_;
}
else
{
lean_dec(v_d_4174_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4208_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v_v_4200_; lean_object* v___x_4201_; lean_object* v_xs_x27_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4206_; 
v_v_4200_ = lean_array_fget(v_tries_4178_, v_val_4194_);
v___x_4201_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___closed__0);
v_xs_x27_4202_ = lean_array_fset(v_tries_4178_, v_val_4194_, v___x_4201_);
v___x_4203_ = lean_apply_1(v_f_4176_, v_v_4200_);
v___x_4204_ = lean_array_fset(v_xs_x27_4202_, v_val_4194_, v___x_4203_);
lean_dec(v_val_4194_);
if (v_isShared_4199_ == 0)
{
lean_ctor_set(v___x_4198_, 1, v___x_4204_);
v___x_4206_ = v___x_4198_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_roots_4177_);
lean_ctor_set(v_reuseFailAlloc_4207_, 1, v___x_4204_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object* v_00_u03b1_4211_, lean_object* v_d_4212_, lean_object* v_k_4213_, lean_object* v_f_4214_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4212_, v_k_4213_, v_f_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object* v_e_4216_, lean_object* v_x_4217_){
_start:
{
lean_object* v___x_4218_; 
v___x_4218_ = lean_array_push(v_x_4217_, v_e_4216_);
return v___x_4218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object* v_d_4219_, lean_object* v_k_4220_, lean_object* v_e_4221_){
_start:
{
lean_object* v___f_4222_; lean_object* v___x_4223_; 
v___f_4222_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4222_, 0, v_e_4221_);
v___x_4223_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4219_, v_k_4220_, v___f_4222_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object* v_00_u03b1_4224_, lean_object* v_d_4225_, lean_object* v_k_4226_, lean_object* v_e_4227_){
_start:
{
lean_object* v___x_4228_; 
v___x_4228_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_d_4225_, v_k_4226_, v_e_4227_);
return v___x_4228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t v_sz_4229_, size_t v_i_4230_, lean_object* v_bs_4231_){
_start:
{
uint8_t v___x_4232_; 
v___x_4232_ = lean_usize_dec_lt(v_i_4230_, v_sz_4229_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; 
v___x_4233_ = l_unsafeCast___redArg(v_bs_4231_);
lean_dec_ref(v_bs_4231_);
return v___x_4233_;
}
else
{
lean_object* v_v_4234_; lean_object* v___x_4235_; lean_object* v_bs_x27_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; size_t v___x_4241_; size_t v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v_v_4234_ = lean_array_uget(v_bs_4231_, v_i_4230_);
v___x_4235_ = lean_unsigned_to_nat(0u);
v_bs_x27_4236_ = lean_array_uset(v_bs_4231_, v_i_4230_, v___x_4235_);
v___x_4237_ = l_unsafeCast___redArg(v_v_4234_);
lean_dec(v_v_4234_);
v___x_4238_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_4239_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4240_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4238_);
lean_ctor_set(v___x_4240_, 1, v___x_4235_);
lean_ctor_set(v___x_4240_, 2, v___x_4239_);
lean_ctor_set(v___x_4240_, 3, v___x_4237_);
v___x_4241_ = ((size_t)1ULL);
v___x_4242_ = lean_usize_add(v_i_4230_, v___x_4241_);
v___x_4243_ = l_unsafeCast___redArg(v___x_4240_);
lean_dec_ref_known(v___x_4240_, 4);
v___x_4244_ = lean_array_uset(v_bs_x27_4236_, v_i_4230_, v___x_4243_);
v_i_4230_ = v___x_4242_;
v_bs_4231_ = v___x_4244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object* v_sz_4246_, lean_object* v_i_4247_, lean_object* v_bs_4248_){
_start:
{
size_t v_sz_boxed_4249_; size_t v_i_boxed_4250_; lean_object* v_res_4251_; 
v_sz_boxed_4249_ = lean_unbox_usize(v_sz_4246_);
lean_dec(v_sz_4246_);
v_i_boxed_4250_ = lean_unbox_usize(v_i_4247_);
lean_dec(v_i_4247_);
v_res_4251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_boxed_4249_, v_i_boxed_4250_, v_bs_4248_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object* v_x_4252_, lean_object* v_x_4253_){
_start:
{
if (lean_obj_tag(v_x_4253_) == 0)
{
return v_x_4252_;
}
else
{
lean_object* v_key_4254_; lean_object* v_value_4255_; lean_object* v_tail_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v_key_4254_ = lean_ctor_get(v_x_4253_, 0);
lean_inc(v_key_4254_);
v_value_4255_ = lean_ctor_get(v_x_4253_, 1);
lean_inc(v_value_4255_);
v_tail_4256_ = lean_ctor_get(v_x_4253_, 2);
lean_inc(v_tail_4256_);
lean_dec_ref_known(v_x_4253_, 3);
v___x_4257_ = lean_unsigned_to_nat(1u);
v___x_4258_ = lean_nat_add(v_value_4255_, v___x_4257_);
lean_dec(v_value_4255_);
v___x_4259_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_x_4252_, v_key_4254_, v___x_4258_);
v_x_4252_ = v___x_4259_;
v_x_4253_ = v_tail_4256_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object* v_as_4261_, size_t v_i_4262_, size_t v_stop_4263_, lean_object* v_b_4264_){
_start:
{
uint8_t v___x_4265_; 
v___x_4265_ = lean_usize_dec_eq(v_i_4262_, v_stop_4263_);
if (v___x_4265_ == 0)
{
lean_object* v___x_4266_; lean_object* v___x_4267_; size_t v___x_4268_; size_t v___x_4269_; 
v___x_4266_ = lean_array_uget_borrowed(v_as_4261_, v_i_4262_);
lean_inc(v___x_4266_);
v___x_4267_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(v_b_4264_, v___x_4266_);
v___x_4268_ = ((size_t)1ULL);
v___x_4269_ = lean_usize_add(v_i_4262_, v___x_4268_);
v_i_4262_ = v___x_4269_;
v_b_4264_ = v___x_4267_;
goto _start;
}
else
{
return v_b_4264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object* v_as_4271_, lean_object* v_i_4272_, lean_object* v_stop_4273_, lean_object* v_b_4274_){
_start:
{
size_t v_i_boxed_4275_; size_t v_stop_boxed_4276_; lean_object* v_res_4277_; 
v_i_boxed_4275_ = lean_unbox_usize(v_i_4272_);
lean_dec(v_i_4272_);
v_stop_boxed_4276_ = lean_unbox_usize(v_stop_4273_);
lean_dec(v_stop_4273_);
v_res_4277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_as_4271_, v_i_boxed_4275_, v_stop_boxed_4276_, v_b_4274_);
lean_dec_ref(v_as_4271_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object* v_d_4278_){
_start:
{
lean_object* v_roots_4279_; lean_object* v_tries_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4305_; 
v_roots_4279_ = lean_ctor_get(v_d_4278_, 0);
v_tries_4280_ = lean_ctor_get(v_d_4278_, 1);
v_isSharedCheck_4305_ = !lean_is_exclusive(v_d_4278_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4282_ = v_d_4278_;
v_isShared_4283_ = v_isSharedCheck_4305_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_tries_4280_);
lean_inc(v_roots_4279_);
lean_dec(v_d_4278_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4305_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___y_4285_; lean_object* v_buckets_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; uint8_t v___x_4301_; 
v_buckets_4298_ = lean_ctor_get(v_roots_4279_, 1);
v___x_4299_ = lean_unsigned_to_nat(0u);
v___x_4300_ = lean_array_get_size(v_buckets_4298_);
v___x_4301_ = lean_nat_dec_lt(v___x_4299_, v___x_4300_);
if (v___x_4301_ == 0)
{
v___y_4285_ = v_roots_4279_;
goto v___jp_4284_;
}
else
{
size_t v___x_4302_; size_t v___x_4303_; lean_object* v___x_4304_; 
lean_inc_ref(v_buckets_4298_);
v___x_4302_ = ((size_t)0ULL);
v___x_4303_ = lean_usize_of_nat(v___x_4300_);
v___x_4304_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_buckets_4298_, v___x_4302_, v___x_4303_, v_roots_4279_);
lean_dec_ref(v_buckets_4298_);
v___y_4285_ = v___x_4304_;
goto v___jp_4284_;
}
v___jp_4284_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; size_t v_sz_4289_; size_t v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4296_; 
v___x_4286_ = lean_unsigned_to_nat(1u);
v___x_4287_ = lean_mk_empty_array_with_capacity(v___x_4286_);
lean_dec_ref(v___x_4287_);
v___x_4288_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v_sz_4289_ = lean_array_size(v_tries_4280_);
v___x_4290_ = ((size_t)0ULL);
v___x_4291_ = l_unsafeCast___redArg(v_tries_4280_);
lean_dec_ref(v_tries_4280_);
v___x_4292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4289_, v___x_4290_, v___x_4291_);
v___x_4293_ = l_unsafeCast___redArg(v___x_4292_);
lean_dec_ref(v___x_4292_);
v___x_4294_ = l_Array_append___redArg(v___x_4288_, v___x_4293_);
lean_dec(v___x_4293_);
if (v_isShared_4283_ == 0)
{
lean_ctor_set(v___x_4282_, 1, v___y_4285_);
lean_ctor_set(v___x_4282_, 0, v___x_4294_);
v___x_4296_ = v___x_4282_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4297_; 
v_reuseFailAlloc_4297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4297_, 0, v___x_4294_);
lean_ctor_set(v_reuseFailAlloc_4297_, 1, v___y_4285_);
v___x_4296_ = v_reuseFailAlloc_4297_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
return v___x_4296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object* v_00_u03b1_4306_, lean_object* v_d_4307_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_d_4307_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object* v_00_u03b1_4309_, size_t v_sz_4310_, size_t v_i_4311_, lean_object* v_bs_4312_){
_start:
{
lean_object* v___x_4313_; 
v___x_4313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4310_, v_i_4311_, v_bs_4312_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object* v_00_u03b1_4314_, lean_object* v_sz_4315_, lean_object* v_i_4316_, lean_object* v_bs_4317_){
_start:
{
size_t v_sz_boxed_4318_; size_t v_i_boxed_4319_; lean_object* v_res_4320_; 
v_sz_boxed_4318_ = lean_unbox_usize(v_sz_4315_);
lean_dec(v_sz_4315_);
v_i_boxed_4319_ = lean_unbox_usize(v_i_4316_);
lean_dec(v_i_4316_);
v_res_4320_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(v_00_u03b1_4314_, v_sz_boxed_4318_, v_i_boxed_4319_, v_bs_4317_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object* v_y_4321_, lean_object* v_x_4322_){
_start:
{
lean_object* v___x_4323_; 
v___x_4323_ = l_Array_append___redArg(v_x_4322_, v_y_4321_);
return v___x_4323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object* v_y_4324_, lean_object* v_x_4325_){
_start:
{
lean_object* v_res_4326_; 
v_res_4326_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(v_y_4324_, v_x_4325_);
lean_dec_ref(v_y_4324_);
return v_res_4326_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4327_; 
v___x_4327_ = l_Array_instInhabited___redArg();
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object* v_tries_4328_, lean_object* v_snd_4329_, lean_object* v_x_4330_, lean_object* v_x_4331_){
_start:
{
if (lean_obj_tag(v_x_4331_) == 0)
{
lean_dec_ref(v_snd_4329_);
return v_x_4330_;
}
else
{
lean_object* v_key_4332_; lean_object* v_value_4333_; lean_object* v_tail_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v_key_4332_ = lean_ctor_get(v_x_4331_, 0);
lean_inc(v_key_4332_);
v_value_4333_ = lean_ctor_get(v_x_4331_, 1);
lean_inc(v_value_4333_);
v_tail_4334_ = lean_ctor_get(v_x_4331_, 2);
lean_inc(v_tail_4334_);
lean_dec_ref_known(v_x_4331_, 3);
v___x_4335_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0);
v___x_4336_ = lean_array_get_borrowed(v___x_4335_, v_tries_4328_, v_value_4333_);
lean_dec(v_value_4333_);
lean_inc_ref(v_snd_4329_);
lean_inc(v___x_4336_);
v___x_4337_ = lean_apply_1(v_snd_4329_, v___x_4336_);
v___x_4338_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_x_4330_, v_key_4332_, v___x_4337_);
v_x_4330_ = v___x_4338_;
v_x_4331_ = v_tail_4334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object* v_tries_4340_, lean_object* v_snd_4341_, lean_object* v_x_4342_, lean_object* v_x_4343_){
_start:
{
lean_object* v_res_4344_; 
v_res_4344_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4340_, v_snd_4341_, v_x_4342_, v_x_4343_);
lean_dec_ref(v_tries_4340_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object* v_tries_4345_, lean_object* v_snd_4346_, lean_object* v_as_4347_, size_t v_i_4348_, size_t v_stop_4349_, lean_object* v_b_4350_){
_start:
{
uint8_t v___x_4351_; 
v___x_4351_ = lean_usize_dec_eq(v_i_4348_, v_stop_4349_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; lean_object* v___x_4353_; size_t v___x_4354_; size_t v___x_4355_; 
v___x_4352_ = lean_array_uget_borrowed(v_as_4347_, v_i_4348_);
lean_inc(v___x_4352_);
lean_inc_ref(v_snd_4346_);
v___x_4353_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4345_, v_snd_4346_, v_b_4350_, v___x_4352_);
v___x_4354_ = ((size_t)1ULL);
v___x_4355_ = lean_usize_add(v_i_4348_, v___x_4354_);
v_i_4348_ = v___x_4355_;
v_b_4350_ = v___x_4353_;
goto _start;
}
else
{
lean_dec_ref(v_snd_4346_);
return v_b_4350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object* v_tries_4357_, lean_object* v_snd_4358_, lean_object* v_as_4359_, lean_object* v_i_4360_, lean_object* v_stop_4361_, lean_object* v_b_4362_){
_start:
{
size_t v_i_boxed_4363_; size_t v_stop_boxed_4364_; lean_object* v_res_4365_; 
v_i_boxed_4363_ = lean_unbox_usize(v_i_4360_);
lean_dec(v_i_4360_);
v_stop_boxed_4364_ = lean_unbox_usize(v_stop_4361_);
lean_dec(v_stop_4361_);
v_res_4365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4357_, v_snd_4358_, v_as_4359_, v_i_boxed_4363_, v_stop_boxed_4364_, v_b_4362_);
lean_dec_ref(v_as_4359_);
lean_dec_ref(v_tries_4357_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object* v_x_4368_, lean_object* v_y_4369_){
_start:
{
lean_object* v_fst_4371_; lean_object* v_buckets_4372_; lean_object* v_tries_4373_; lean_object* v_snd_4374_; lean_object* v_roots_4381_; lean_object* v_roots_4382_; lean_object* v_tries_4383_; lean_object* v_size_4384_; lean_object* v_buckets_4385_; lean_object* v_tries_4386_; lean_object* v_size_4387_; lean_object* v_buckets_4388_; uint8_t v___x_4389_; 
v_roots_4381_ = lean_ctor_get(v_y_4369_, 0);
v_roots_4382_ = lean_ctor_get(v_x_4368_, 0);
v_tries_4383_ = lean_ctor_get(v_y_4369_, 1);
v_size_4384_ = lean_ctor_get(v_roots_4381_, 0);
v_buckets_4385_ = lean_ctor_get(v_roots_4381_, 1);
v_tries_4386_ = lean_ctor_get(v_x_4368_, 1);
v_size_4387_ = lean_ctor_get(v_roots_4382_, 0);
v_buckets_4388_ = lean_ctor_get(v_roots_4382_, 1);
v___x_4389_ = lean_nat_dec_le(v_size_4384_, v_size_4387_);
if (v___x_4389_ == 0)
{
lean_object* v___f_4390_; 
lean_inc_ref(v_buckets_4388_);
lean_inc_ref(v_tries_4386_);
lean_dec_ref(v_x_4368_);
v___f_4390_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0));
v_fst_4371_ = v_y_4369_;
v_buckets_4372_ = v_buckets_4388_;
v_tries_4373_ = v_tries_4386_;
v_snd_4374_ = v___f_4390_;
goto v___jp_4370_;
}
else
{
lean_object* v___f_4391_; 
lean_inc_ref(v_buckets_4385_);
lean_inc_ref(v_tries_4383_);
lean_dec_ref(v_y_4369_);
v___f_4391_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1));
v_fst_4371_ = v_x_4368_;
v_buckets_4372_ = v_buckets_4385_;
v_tries_4373_ = v_tries_4383_;
v_snd_4374_ = v___f_4391_;
goto v___jp_4370_;
}
v___jp_4370_:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; uint8_t v___x_4377_; 
v___x_4375_ = lean_unsigned_to_nat(0u);
v___x_4376_ = lean_array_get_size(v_buckets_4372_);
v___x_4377_ = lean_nat_dec_lt(v___x_4375_, v___x_4376_);
if (v___x_4377_ == 0)
{
lean_dec_ref(v_tries_4373_);
lean_dec_ref(v_buckets_4372_);
return v_fst_4371_;
}
else
{
size_t v___x_4378_; size_t v___x_4379_; lean_object* v___x_4380_; 
v___x_4378_ = ((size_t)0ULL);
v___x_4379_ = lean_usize_of_nat(v___x_4376_);
lean_inc_ref(v_snd_4374_);
v___x_4380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4373_, v_snd_4374_, v_buckets_4372_, v___x_4378_, v___x_4379_, v_fst_4371_);
lean_dec_ref(v_buckets_4372_);
lean_dec_ref(v_tries_4373_);
return v___x_4380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object* v_00_u03b1_4392_, lean_object* v_x_4393_, lean_object* v_y_4394_){
_start:
{
lean_object* v___x_4395_; 
v___x_4395_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_x_4393_, v_y_4394_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object* v_00_u03b1_4396_, lean_object* v_tries_4397_, lean_object* v_snd_4398_, lean_object* v_x_4399_, lean_object* v_x_4400_){
_start:
{
lean_object* v___x_4401_; 
v___x_4401_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4397_, v_snd_4398_, v_x_4399_, v_x_4400_);
return v___x_4401_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object* v_00_u03b1_4402_, lean_object* v_tries_4403_, lean_object* v_snd_4404_, lean_object* v_x_4405_, lean_object* v_x_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(v_00_u03b1_4402_, v_tries_4403_, v_snd_4404_, v_x_4405_, v_x_4406_);
lean_dec_ref(v_tries_4403_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object* v_00_u03b1_4408_, lean_object* v_tries_4409_, lean_object* v_snd_4410_, lean_object* v_as_4411_, size_t v_i_4412_, size_t v_stop_4413_, lean_object* v_b_4414_){
_start:
{
lean_object* v___x_4415_; 
v___x_4415_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4409_, v_snd_4410_, v_as_4411_, v_i_4412_, v_stop_4413_, v_b_4414_);
return v___x_4415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object* v_00_u03b1_4416_, lean_object* v_tries_4417_, lean_object* v_snd_4418_, lean_object* v_as_4419_, lean_object* v_i_4420_, lean_object* v_stop_4421_, lean_object* v_b_4422_){
_start:
{
size_t v_i_boxed_4423_; size_t v_stop_boxed_4424_; lean_object* v_res_4425_; 
v_i_boxed_4423_ = lean_unbox_usize(v_i_4420_);
lean_dec(v_i_4420_);
v_stop_boxed_4424_ = lean_unbox_usize(v_stop_4421_);
lean_dec(v_stop_4421_);
v_res_4425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(v_00_u03b1_4416_, v_tries_4417_, v_snd_4418_, v_as_4419_, v_i_boxed_4423_, v_stop_boxed_4424_, v_b_4422_);
lean_dec_ref(v_as_4419_);
lean_dec_ref(v_tries_4417_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg(){
_start:
{
lean_object* v___x_4428_; 
v___x_4428_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object* v___dummy_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object* v_00_u03b1_4431_){
_start:
{
lean_object* v___x_4432_; 
v___x_4432_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object* v_expr_4433_, lean_object* v_value_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_){
_start:
{
lean_object* v_lctx_4440_; lean_object* v_localInstances_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v_lctx_4440_ = lean_ctor_get(v_a_4435_, 2);
v_localInstances_4441_ = lean_ctor_get(v_a_4435_, 3);
lean_inc_ref(v_localInstances_4441_);
lean_inc_ref(v_lctx_4440_);
v___x_4442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4442_, 0, v_lctx_4440_);
lean_ctor_set(v___x_4442_, 1, v_localInstances_4441_);
v___x_4443_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_expr_4433_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4462_; 
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4446_ = v___x_4443_;
v_isShared_4447_ = v_isSharedCheck_4462_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v___x_4443_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4462_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v_fst_4448_; lean_object* v_snd_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4461_; 
v_fst_4448_ = lean_ctor_get(v_a_4444_, 0);
v_snd_4449_ = lean_ctor_get(v_a_4444_, 1);
v_isSharedCheck_4461_ = !lean_is_exclusive(v_a_4444_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4451_ = v_a_4444_;
v_isShared_4452_ = v_isSharedCheck_4461_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_snd_4449_);
lean_inc(v_fst_4448_);
lean_dec(v_a_4444_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4461_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
lean_ctor_set(v___x_4451_, 1, v_value_4434_);
lean_ctor_set(v___x_4451_, 0, v___x_4442_);
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v___x_4442_);
lean_ctor_set(v_reuseFailAlloc_4460_, 1, v_value_4434_);
v___x_4454_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4458_; 
v___x_4455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4455_, 0, v_snd_4449_);
lean_ctor_set(v___x_4455_, 1, v___x_4454_);
v___x_4456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4456_, 0, v_fst_4448_);
lean_ctor_set(v___x_4456_, 1, v___x_4455_);
if (v_isShared_4447_ == 0)
{
lean_ctor_set(v___x_4446_, 0, v___x_4456_);
v___x_4458_ = v___x_4446_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v___x_4456_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
lean_dec_ref_known(v___x_4442_, 2);
lean_dec(v_value_4434_);
v_a_4463_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4443_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4443_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object* v_expr_4471_, lean_object* v_value_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_){
_start:
{
lean_object* v_res_4478_; 
v_res_4478_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4471_, v_value_4472_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_);
lean_dec(v_a_4476_);
lean_dec_ref(v_a_4475_);
lean_dec(v_a_4474_);
lean_dec_ref(v_a_4473_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object* v_00_u03b1_4479_, lean_object* v_expr_4480_, lean_object* v_value_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4480_, v_value_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object* v_00_u03b1_4488_, lean_object* v_expr_4489_, lean_object* v_value_4490_, lean_object* v_a_4491_, lean_object* v_a_4492_, lean_object* v_a_4493_, lean_object* v_a_4494_, lean_object* v_a_4495_){
_start:
{
lean_object* v_res_4496_; 
v_res_4496_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(v_00_u03b1_4488_, v_expr_4489_, v_value_4490_, v_a_4491_, v_a_4492_, v_a_4493_, v_a_4494_);
lean_dec(v_a_4494_);
lean_dec_ref(v_a_4493_);
lean_dec(v_a_4492_);
lean_dec_ref(v_a_4491_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object* v_e_4497_, lean_object* v_idx_4498_, lean_object* v_value_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_){
_start:
{
lean_object* v_entry_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4551_; 
v_entry_4505_ = lean_ctor_get(v_e_4497_, 1);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_e_4497_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; 
v_unused_4552_ = lean_ctor_get(v_e_4497_, 0);
lean_dec(v_unused_4552_);
v___x_4507_ = v_e_4497_;
v_isShared_4508_ = v_isSharedCheck_4551_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_entry_4505_);
lean_dec(v_e_4497_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4551_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v_snd_4509_; lean_object* v_fst_4510_; lean_object* v_fst_4511_; lean_object* v___x_4513_; uint8_t v_isShared_4514_; uint8_t v_isSharedCheck_4549_; 
v_snd_4509_ = lean_ctor_get(v_entry_4505_, 1);
lean_inc(v_snd_4509_);
v_fst_4510_ = lean_ctor_get(v_entry_4505_, 0);
lean_inc(v_fst_4510_);
lean_dec_ref(v_entry_4505_);
v_fst_4511_ = lean_ctor_get(v_snd_4509_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v_snd_4509_);
if (v_isSharedCheck_4549_ == 0)
{
lean_object* v_unused_4550_; 
v_unused_4550_ = lean_ctor_get(v_snd_4509_, 1);
lean_dec(v_unused_4550_);
v___x_4513_ = v_snd_4509_;
v_isShared_4514_ = v_isSharedCheck_4549_;
goto v_resetjp_4512_;
}
else
{
lean_inc(v_fst_4511_);
lean_dec(v_snd_4509_);
v___x_4513_ = lean_box(0);
v_isShared_4514_ = v_isSharedCheck_4549_;
goto v_resetjp_4512_;
}
v_resetjp_4512_:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4515_ = l_Lean_instInhabitedExpr;
v___x_4516_ = lean_array_get(v___x_4515_, v_fst_4510_, v_idx_4498_);
lean_dec(v_fst_4510_);
v___x_4517_ = l_Lean_Meta_LazyDiscrTree_rootKey(v___x_4516_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_);
if (lean_obj_tag(v___x_4517_) == 0)
{
lean_object* v_a_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4540_; 
v_a_4518_ = lean_ctor_get(v___x_4517_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4520_ = v___x_4517_;
v_isShared_4521_ = v_isSharedCheck_4540_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_a_4518_);
lean_dec(v___x_4517_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4540_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v_fst_4522_; lean_object* v_snd_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4539_; 
v_fst_4522_ = lean_ctor_get(v_a_4518_, 0);
v_snd_4523_ = lean_ctor_get(v_a_4518_, 1);
v_isSharedCheck_4539_ = !lean_is_exclusive(v_a_4518_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4525_ = v_a_4518_;
v_isShared_4526_ = v_isSharedCheck_4539_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_snd_4523_);
lean_inc(v_fst_4522_);
lean_dec(v_a_4518_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4539_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
lean_ctor_set(v___x_4525_, 1, v_value_4499_);
lean_ctor_set(v___x_4525_, 0, v_fst_4511_);
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_fst_4511_);
lean_ctor_set(v_reuseFailAlloc_4538_, 1, v_value_4499_);
v___x_4528_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
lean_object* v___x_4530_; 
if (v_isShared_4514_ == 0)
{
lean_ctor_set(v___x_4513_, 1, v___x_4528_);
lean_ctor_set(v___x_4513_, 0, v_snd_4523_);
v___x_4530_ = v___x_4513_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_snd_4523_);
lean_ctor_set(v_reuseFailAlloc_4537_, 1, v___x_4528_);
v___x_4530_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
lean_object* v___x_4532_; 
if (v_isShared_4508_ == 0)
{
lean_ctor_set(v___x_4507_, 1, v___x_4530_);
lean_ctor_set(v___x_4507_, 0, v_fst_4522_);
v___x_4532_ = v___x_4507_;
goto v_reusejp_4531_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_fst_4522_);
lean_ctor_set(v_reuseFailAlloc_4536_, 1, v___x_4530_);
v___x_4532_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4531_;
}
v_reusejp_4531_:
{
lean_object* v___x_4534_; 
if (v_isShared_4521_ == 0)
{
lean_ctor_set(v___x_4520_, 0, v___x_4532_);
v___x_4534_ = v___x_4520_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4532_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4548_; 
lean_del_object(v___x_4513_);
lean_dec(v_fst_4511_);
lean_del_object(v___x_4507_);
lean_dec(v_value_4499_);
v_a_4541_ = lean_ctor_get(v___x_4517_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4543_ = v___x_4517_;
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
else
{
lean_inc(v_a_4541_);
lean_dec(v___x_4517_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4546_; 
if (v_isShared_4544_ == 0)
{
v___x_4546_ = v___x_4543_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_a_4541_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object* v_e_4553_, lean_object* v_idx_4554_, lean_object* v_value_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_){
_start:
{
lean_object* v_res_4561_; 
v_res_4561_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4553_, v_idx_4554_, v_value_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_);
lean_dec(v_a_4559_);
lean_dec_ref(v_a_4558_);
lean_dec(v_a_4557_);
lean_dec_ref(v_a_4556_);
lean_dec(v_idx_4554_);
return v_res_4561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object* v_00_u03b1_4562_, lean_object* v_e_4563_, lean_object* v_idx_4564_, lean_object* v_value_4565_, lean_object* v_a_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_){
_start:
{
lean_object* v___x_4571_; 
v___x_4571_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4563_, v_idx_4564_, v_value_4565_, v_a_4566_, v_a_4567_, v_a_4568_, v_a_4569_);
return v___x_4571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object* v_00_u03b1_4572_, lean_object* v_e_4573_, lean_object* v_idx_4574_, lean_object* v_value_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(v_00_u03b1_4572_, v_e_4573_, v_idx_4574_, v_value_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_);
lean_dec(v_a_4579_);
lean_dec_ref(v_a_4578_);
lean_dec(v_a_4577_);
lean_dec_ref(v_a_4576_);
lean_dec(v_idx_4574_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new(){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; 
v___x_4585_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4586_ = lean_st_mk_ref(v___x_4585_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object* v_a_4587_){
_start:
{
lean_object* v_res_4588_; 
v_res_4588_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
return v_res_4588_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0(void){
_start:
{
lean_object* v___x_4589_; 
v___x_4589_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4589_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1(void){
_start:
{
lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4590_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4590_);
return v___x_4591_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2(void){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4592_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4592_);
lean_ctor_set(v___x_4593_, 1, v___x_4592_);
return v___x_4593_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3(void){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4595_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4595_, 0, v___x_4594_);
lean_ctor_set(v___x_4595_, 1, v___x_4594_);
lean_ctor_set(v___x_4595_, 2, v___x_4594_);
lean_ctor_set(v___x_4595_, 3, v___x_4594_);
lean_ctor_set(v___x_4595_, 4, v___x_4594_);
lean_ctor_set(v___x_4595_, 5, v___x_4594_);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object* v_ngen_4596_){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
v___x_4598_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3);
v___x_4599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4599_, 0, v_ngen_4596_);
lean_ctor_set(v___x_4599_, 1, v___x_4597_);
lean_ctor_set(v___x_4599_, 2, v___x_4598_);
return v___x_4599_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object* v_env_4600_, lean_object* v_declName_4601_){
_start:
{
uint8_t v___x_4602_; 
v___x_4602_ = l_Lean_isPrivateName(v_declName_4601_);
if (v___x_4602_ == 0)
{
return v___x_4602_;
}
else
{
lean_object* v___x_4603_; 
v___x_4603_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4600_, v_declName_4601_);
if (lean_obj_tag(v___x_4603_) == 0)
{
return v___x_4602_;
}
else
{
lean_object* v_val_4604_; lean_object* v___x_4605_; uint8_t v_isModule_4606_; lean_object* v_modules_4607_; uint8_t v___x_4608_; 
v_val_4604_ = lean_ctor_get(v___x_4603_, 0);
lean_inc(v_val_4604_);
lean_dec_ref_known(v___x_4603_, 1);
v___x_4605_ = l_Lean_Environment_header(v_env_4600_);
v_isModule_4606_ = lean_ctor_get_uint8(v___x_4605_, sizeof(void*)*7 + 4);
v_modules_4607_ = lean_ctor_get(v___x_4605_, 3);
lean_inc_ref(v_modules_4607_);
lean_dec_ref(v___x_4605_);
v___x_4608_ = 0;
if (v_isModule_4606_ == 0)
{
lean_dec_ref(v_modules_4607_);
lean_dec(v_val_4604_);
return v___x_4608_;
}
else
{
lean_object* v___x_4609_; uint8_t v___x_4610_; 
v___x_4609_ = lean_array_get_size(v_modules_4607_);
v___x_4610_ = lean_nat_dec_lt(v_val_4604_, v___x_4609_);
if (v___x_4610_ == 0)
{
lean_dec_ref(v_modules_4607_);
lean_dec(v_val_4604_);
return v___x_4608_;
}
else
{
lean_object* v___x_4611_; lean_object* v_toImport_4612_; uint8_t v_importAll_4613_; 
v___x_4611_ = lean_array_fget(v_modules_4607_, v_val_4604_);
lean_dec(v_val_4604_);
lean_dec_ref(v_modules_4607_);
v_toImport_4612_ = lean_ctor_get(v___x_4611_, 0);
lean_inc_ref(v_toImport_4612_);
lean_dec(v___x_4611_);
v_importAll_4613_ = lean_ctor_get_uint8(v_toImport_4612_, sizeof(void*)*1);
lean_dec_ref(v_toImport_4612_);
return v_importAll_4613_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object* v_env_4614_, lean_object* v_declName_4615_){
_start:
{
uint8_t v_res_4616_; lean_object* v_r_4617_; 
v_res_4616_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4614_, v_declName_4615_);
lean_dec(v_declName_4615_);
lean_dec_ref(v_env_4614_);
v_r_4617_ = lean_box(v_res_4616_);
return v_r_4617_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object* v_env_4623_, lean_object* v_declName_4624_){
_start:
{
uint8_t v___x_4625_; 
lean_inc(v_declName_4624_);
lean_inc_ref(v_env_4623_);
v___x_4625_ = l_Lean_Meta_allowCompletion(v_env_4623_, v_declName_4624_);
if (v___x_4625_ == 0)
{
uint8_t v___x_4626_; 
lean_dec(v_declName_4624_);
lean_dec_ref(v_env_4623_);
v___x_4626_ = 1;
return v___x_4626_;
}
else
{
lean_object* v___x_4627_; uint8_t v___x_4628_; uint8_t v___y_4638_; 
v___x_4627_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1));
v___x_4628_ = lean_name_eq(v_declName_4624_, v___x_4627_);
if (v___x_4628_ == 0)
{
uint8_t v___x_4639_; 
lean_inc(v_declName_4624_);
v___x_4639_ = l_Lean_Name_isInternalDetail(v_declName_4624_);
if (v___x_4639_ == 0)
{
lean_dec_ref(v_env_4623_);
v___y_4638_ = v___x_4639_;
goto v___jp_4637_;
}
else
{
uint8_t v___x_4640_; 
v___x_4640_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4623_, v_declName_4624_);
lean_dec_ref(v_env_4623_);
if (v___x_4640_ == 0)
{
v___y_4638_ = v___x_4639_;
goto v___jp_4637_;
}
else
{
goto v___jp_4633_;
}
}
}
else
{
lean_dec(v_declName_4624_);
lean_dec_ref(v_env_4623_);
return v___x_4628_;
}
v___jp_4629_:
{
if (lean_obj_tag(v_declName_4624_) == 1)
{
lean_object* v_str_4630_; lean_object* v___x_4631_; uint8_t v___x_4632_; 
v_str_4630_ = lean_ctor_get(v_declName_4624_, 1);
lean_inc_ref(v_str_4630_);
lean_dec_ref_known(v_declName_4624_, 2);
v___x_4631_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2));
v___x_4632_ = lean_string_dec_eq(v_str_4630_, v___x_4631_);
lean_dec_ref(v_str_4630_);
return v___x_4632_;
}
else
{
lean_dec(v_declName_4624_);
return v___x_4628_;
}
}
v___jp_4633_:
{
if (lean_obj_tag(v_declName_4624_) == 1)
{
lean_object* v_str_4634_; lean_object* v___x_4635_; uint8_t v___x_4636_; 
v_str_4634_ = lean_ctor_get(v_declName_4624_, 1);
v___x_4635_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3));
v___x_4636_ = lean_string_dec_eq(v_str_4634_, v___x_4635_);
if (v___x_4636_ == 0)
{
goto v___jp_4629_;
}
else
{
lean_dec_ref_known(v_declName_4624_, 2);
return v___x_4636_;
}
}
else
{
goto v___jp_4629_;
}
}
v___jp_4637_:
{
if (v___y_4638_ == 0)
{
goto v___jp_4633_;
}
else
{
lean_dec(v_declName_4624_);
return v___y_4638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object* v_env_4641_, lean_object* v_declName_4642_){
_start:
{
uint8_t v_res_4643_; lean_object* v_r_4644_; 
v_res_4643_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4641_, v_declName_4642_);
v_r_4644_ = lean_box(v_res_4643_);
return v_r_4644_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object* v_opts_4645_, lean_object* v_opt_4646_){
_start:
{
lean_object* v_name_4647_; lean_object* v_defValue_4648_; lean_object* v_map_4649_; lean_object* v___x_4650_; 
v_name_4647_ = lean_ctor_get(v_opt_4646_, 0);
v_defValue_4648_ = lean_ctor_get(v_opt_4646_, 1);
v_map_4649_ = lean_ctor_get(v_opts_4645_, 0);
v___x_4650_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4649_, v_name_4647_);
if (lean_obj_tag(v___x_4650_) == 0)
{
uint8_t v___x_4651_; 
v___x_4651_ = lean_unbox(v_defValue_4648_);
return v___x_4651_;
}
else
{
lean_object* v_val_4652_; 
v_val_4652_ = lean_ctor_get(v___x_4650_, 0);
lean_inc(v_val_4652_);
lean_dec_ref_known(v___x_4650_, 1);
if (lean_obj_tag(v_val_4652_) == 1)
{
uint8_t v_v_4653_; 
v_v_4653_ = lean_ctor_get_uint8(v_val_4652_, 0);
lean_dec_ref_known(v_val_4652_, 0);
return v_v_4653_;
}
else
{
uint8_t v___x_4654_; 
lean_dec(v_val_4652_);
v___x_4654_ = lean_unbox(v_defValue_4648_);
return v___x_4654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object* v_opts_4655_, lean_object* v_opt_4656_){
_start:
{
uint8_t v_res_4657_; lean_object* v_r_4658_; 
v_res_4657_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_opts_4655_, v_opt_4656_);
lean_dec_ref(v_opt_4656_);
lean_dec_ref(v_opts_4655_);
v_r_4658_ = lean_box(v_res_4657_);
return v_r_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object* v_opts_4659_, lean_object* v_opt_4660_){
_start:
{
lean_object* v_name_4661_; lean_object* v_defValue_4662_; lean_object* v_map_4663_; lean_object* v___x_4664_; 
v_name_4661_ = lean_ctor_get(v_opt_4660_, 0);
v_defValue_4662_ = lean_ctor_get(v_opt_4660_, 1);
v_map_4663_ = lean_ctor_get(v_opts_4659_, 0);
v___x_4664_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4663_, v_name_4661_);
if (lean_obj_tag(v___x_4664_) == 0)
{
lean_inc(v_defValue_4662_);
return v_defValue_4662_;
}
else
{
lean_object* v_val_4665_; 
v_val_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc(v_val_4665_);
lean_dec_ref_known(v___x_4664_, 1);
if (lean_obj_tag(v_val_4665_) == 3)
{
lean_object* v_v_4666_; 
v_v_4666_ = lean_ctor_get(v_val_4665_, 0);
lean_inc(v_v_4666_);
lean_dec_ref_known(v_val_4665_, 1);
return v_v_4666_;
}
else
{
lean_dec(v_val_4665_);
lean_inc(v_defValue_4662_);
return v_defValue_4662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object* v_opts_4667_, lean_object* v_opt_4668_){
_start:
{
lean_object* v_res_4669_; 
v_res_4669_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_opts_4667_, v_opt_4668_);
lean_dec_ref(v_opt_4668_);
lean_dec_ref(v_opts_4667_);
return v_res_4669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(lean_object* v_as_4670_, size_t v_i_4671_, size_t v_stop_4672_, lean_object* v_b_4673_){
_start:
{
uint8_t v___x_4674_; 
v___x_4674_ = lean_usize_dec_eq(v_i_4671_, v_stop_4672_);
if (v___x_4674_ == 0)
{
lean_object* v___x_4675_; lean_object* v_key_4676_; lean_object* v_entry_4677_; lean_object* v___x_4678_; size_t v___x_4679_; size_t v___x_4680_; 
v___x_4675_ = lean_array_uget_borrowed(v_as_4670_, v_i_4671_);
v_key_4676_ = lean_ctor_get(v___x_4675_, 0);
v_entry_4677_ = lean_ctor_get(v___x_4675_, 1);
lean_inc_ref(v_entry_4677_);
lean_inc(v_key_4676_);
v___x_4678_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_b_4673_, v_key_4676_, v_entry_4677_);
v___x_4679_ = ((size_t)1ULL);
v___x_4680_ = lean_usize_add(v_i_4671_, v___x_4679_);
v_i_4671_ = v___x_4680_;
v_b_4673_ = v___x_4678_;
goto _start;
}
else
{
return v_b_4673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg___boxed(lean_object* v_as_4682_, lean_object* v_i_4683_, lean_object* v_stop_4684_, lean_object* v_b_4685_){
_start:
{
size_t v_i_boxed_4686_; size_t v_stop_boxed_4687_; lean_object* v_res_4688_; 
v_i_boxed_4686_ = lean_unbox_usize(v_i_4683_);
lean_dec(v_i_4683_);
v_stop_boxed_4687_ = lean_unbox_usize(v_stop_4684_);
lean_dec(v_stop_4684_);
v_res_4688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_as_4682_, v_i_boxed_4686_, v_stop_boxed_4687_, v_b_4685_);
lean_dec_ref(v_as_4682_);
return v_res_4688_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0(void){
_start:
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4689_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4689_);
return v___x_4690_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1(void){
_start:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4691_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4692_ = lean_unsigned_to_nat(0u);
v___x_4693_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4692_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
lean_ctor_set(v___x_4693_, 2, v___x_4692_);
lean_ctor_set(v___x_4693_, 3, v___x_4692_);
lean_ctor_set(v___x_4693_, 4, v___x_4691_);
lean_ctor_set(v___x_4693_, 5, v___x_4691_);
lean_ctor_set(v___x_4693_, 6, v___x_4691_);
lean_ctor_set(v___x_4693_, 7, v___x_4691_);
lean_ctor_set(v___x_4693_, 8, v___x_4691_);
lean_ctor_set(v___x_4693_, 9, v___x_4691_);
lean_ctor_set(v___x_4693_, 10, v___x_4691_);
return v___x_4693_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2(void){
_start:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4694_ = lean_unsigned_to_nat(32u);
v___x_4695_ = lean_mk_empty_array_with_capacity(v___x_4694_);
v___x_4696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4695_);
return v___x_4696_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3(void){
_start:
{
size_t v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4697_ = ((size_t)5ULL);
v___x_4698_ = lean_unsigned_to_nat(0u);
v___x_4699_ = lean_unsigned_to_nat(32u);
v___x_4700_ = lean_mk_empty_array_with_capacity(v___x_4699_);
v___x_4701_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2);
v___x_4702_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
lean_ctor_set(v___x_4702_, 1, v___x_4700_);
lean_ctor_set(v___x_4702_, 2, v___x_4698_);
lean_ctor_set(v___x_4702_, 3, v___x_4698_);
lean_ctor_set_usize(v___x_4702_, 4, v___x_4697_);
return v___x_4702_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4(void){
_start:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; 
v___x_4703_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4703_);
lean_ctor_set(v___x_4704_, 1, v___x_4703_);
lean_ctor_set(v___x_4704_, 2, v___x_4703_);
lean_ctor_set(v___x_4704_, 3, v___x_4703_);
lean_ctor_set(v___x_4704_, 4, v___x_4703_);
return v___x_4704_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5(void){
_start:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4705_ = lean_box(1);
v___x_4706_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4707_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4708_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4708_, 0, v___x_4707_);
lean_ctor_set(v___x_4708_, 1, v___x_4706_);
lean_ctor_set(v___x_4708_, 2, v___x_4705_);
return v___x_4708_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7(void){
_start:
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v___x_4711_ = lean_unsigned_to_nat(1u);
v___x_4712_ = l_Lean_firstFrontendMacroScope;
v___x_4713_ = lean_nat_add(v___x_4712_, v___x_4711_);
return v___x_4713_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8(void){
_start:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4714_ = lean_box(0);
v___x_4715_ = lean_unsigned_to_nat(1u);
v___x_4716_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_4717_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4716_);
lean_ctor_set(v___x_4717_, 1, v___x_4715_);
lean_ctor_set(v___x_4717_, 2, v___x_4714_);
return v___x_4717_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9(void){
_start:
{
lean_object* v___x_4718_; uint64_t v___x_4719_; lean_object* v___x_4720_; 
v___x_4718_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4719_ = 0ULL;
v___x_4720_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4720_, 0, v___x_4718_);
lean_ctor_set_uint64(v___x_4720_, sizeof(void*)*1, v___x_4719_);
return v___x_4720_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10(void){
_start:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4721_ = l_Lean_NameSet_empty;
v___x_4722_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4723_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4722_);
lean_ctor_set(v___x_4723_, 1, v___x_4722_);
lean_ctor_set(v___x_4723_, 2, v___x_4721_);
return v___x_4723_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11(void){
_start:
{
lean_object* v___x_4724_; lean_object* v___x_4725_; uint8_t v___x_4726_; lean_object* v___x_4727_; 
v___x_4724_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4725_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4726_ = 1;
v___x_4727_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4727_, 0, v___x_4725_);
lean_ctor_set(v___x_4727_, 1, v___x_4725_);
lean_ctor_set(v___x_4727_, 2, v___x_4724_);
lean_ctor_set_uint8(v___x_4727_, sizeof(void*)*3, v___x_4726_);
return v___x_4727_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12(void){
_start:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4728_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4728_);
lean_ctor_set(v___x_4729_, 1, v___x_4728_);
return v___x_4729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object* v_cctx_4730_, lean_object* v_env_4731_, lean_object* v_modName_4732_, lean_object* v_d_4733_, lean_object* v_cacheRef_4734_, lean_object* v_tree_4735_, lean_object* v_act_4736_, lean_object* v_c_4737_){
_start:
{
uint8_t v___x_4739_; 
lean_inc_ref(v_c_4737_);
v___x_4739_ = l_Lean_AsyncConstantInfo_isUnsafe(v_c_4737_);
if (v___x_4739_ == 0)
{
lean_object* v_name_4740_; uint8_t v___x_4741_; 
v_name_4740_ = lean_ctor_get(v_c_4737_, 0);
lean_inc_n(v_name_4740_, 2);
lean_inc_ref(v_env_4731_);
v___x_4741_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4731_, v_name_4740_);
if (v___x_4741_ == 0)
{
lean_object* v___x_4742_; uint8_t v___x_4743_; lean_object* v___x_4744_; lean_object* v_ngen_4745_; lean_object* v_core_4746_; lean_object* v_meta_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4863_; 
v___x_4742_ = lean_box(1);
v___x_4743_ = 1;
v___x_4744_ = lean_st_ref_get(v_cacheRef_4734_);
v_ngen_4745_ = lean_ctor_get(v___x_4744_, 0);
v_core_4746_ = lean_ctor_get(v___x_4744_, 1);
v_meta_4747_ = lean_ctor_get(v___x_4744_, 2);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4744_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4749_ = v___x_4744_;
v_isShared_4750_ = v_isSharedCheck_4863_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_meta_4747_);
lean_inc(v_core_4746_);
lean_inc(v_ngen_4745_);
lean_dec(v___x_4744_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4863_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; uint8_t v___x_4758_; uint8_t v___x_4759_; uint8_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v_toCold_4776_; lean_object* v_currRecDepth_4777_; lean_object* v_ref_4778_; uint8_t v_suppressElabErrors_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4862_; 
v___x_4751_ = lean_unsigned_to_nat(0u);
v___x_4752_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4753_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4754_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4752_);
lean_ctor_set(v___x_4755_, 1, v_meta_4747_);
lean_ctor_set(v___x_4755_, 2, v___x_4742_);
lean_ctor_set(v___x_4755_, 3, v___x_4753_);
lean_ctor_set(v___x_4755_, 4, v___x_4754_);
lean_inc_ref(v_ngen_4745_);
v___x_4756_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_4745_);
v___x_4757_ = lean_st_ref_swap(v_cacheRef_4734_, v___x_4756_);
lean_dec(v___x_4757_);
v___x_4758_ = 2;
v___x_4759_ = 0;
v___x_4760_ = 2;
v___x_4761_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_4761_, 0, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 1, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 2, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 3, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 4, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 5, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 6, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 7, v___x_4741_);
lean_ctor_set_uint8(v___x_4761_, 8, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 9, v___x_4758_);
lean_ctor_set_uint8(v___x_4761_, 10, v___x_4759_);
lean_ctor_set_uint8(v___x_4761_, 11, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 12, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 13, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 14, v___x_4760_);
lean_ctor_set_uint8(v___x_4761_, 15, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 16, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 17, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 18, v___x_4743_);
lean_ctor_set_uint8(v___x_4761_, 19, v___x_4741_);
v___x_4762_ = l_Lean_Meta_Config_toConfigWithKey(v___x_4761_);
v___x_4763_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5);
v___x_4764_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6));
v___x_4765_ = lean_box(0);
v___x_4766_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4766_, 0, v___x_4762_);
lean_ctor_set(v___x_4766_, 1, v___x_4742_);
lean_ctor_set(v___x_4766_, 2, v___x_4763_);
lean_ctor_set(v___x_4766_, 3, v___x_4764_);
lean_ctor_set(v___x_4766_, 4, v___x_4765_);
lean_ctor_set(v___x_4766_, 5, v___x_4751_);
lean_ctor_set(v___x_4766_, 6, v___x_4765_);
lean_ctor_set_uint8(v___x_4766_, sizeof(void*)*7, v___x_4741_);
lean_ctor_set_uint8(v___x_4766_, sizeof(void*)*7 + 1, v___x_4741_);
lean_ctor_set_uint8(v___x_4766_, sizeof(void*)*7 + 2, v___x_4741_);
lean_ctor_set_uint8(v___x_4766_, sizeof(void*)*7 + 3, v___x_4743_);
v___x_4767_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7);
v___x_4768_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8);
v___x_4769_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9);
v___x_4770_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10);
v___x_4771_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11);
v___x_4772_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4772_, 0, v_env_4731_);
lean_ctor_set(v___x_4772_, 1, v___x_4767_);
lean_ctor_set(v___x_4772_, 2, v_ngen_4745_);
lean_ctor_set(v___x_4772_, 3, v___x_4768_);
lean_ctor_set(v___x_4772_, 4, v___x_4769_);
lean_ctor_set(v___x_4772_, 5, v_core_4746_);
lean_ctor_set(v___x_4772_, 6, v___x_4770_);
lean_ctor_set(v___x_4772_, 7, v___x_4771_);
lean_ctor_set(v___x_4772_, 8, v___x_4764_);
v___x_4773_ = lean_st_mk_ref(v___x_4772_);
v___x_4774_ = l_Lean_inheritedTraceOptions;
v___x_4775_ = lean_st_ref_get(v___x_4774_);
v_toCold_4776_ = lean_ctor_get(v_cctx_4730_, 0);
v_currRecDepth_4777_ = lean_ctor_get(v_cctx_4730_, 1);
v_ref_4778_ = lean_ctor_get(v_cctx_4730_, 2);
v_suppressElabErrors_4779_ = lean_ctor_get_uint8(v_cctx_4730_, sizeof(void*)*3 + 1);
v_isSharedCheck_4862_ = !lean_is_exclusive(v_cctx_4730_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4781_ = v_cctx_4730_;
v_isShared_4782_ = v_isSharedCheck_4862_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_ref_4778_);
lean_inc(v_currRecDepth_4777_);
lean_inc(v_toCold_4776_);
lean_dec(v_cctx_4730_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4862_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v_fileName_4783_; lean_object* v_fileMap_4784_; lean_object* v_options_4785_; lean_object* v_currNamespace_4786_; lean_object* v_openDecls_4787_; lean_object* v_initHeartbeats_4788_; lean_object* v_maxHeartbeats_4789_; lean_object* v_quotContext_4790_; lean_object* v_currMacroScope_4791_; lean_object* v_cancelTk_x3f_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4859_; 
v_fileName_4783_ = lean_ctor_get(v_toCold_4776_, 0);
v_fileMap_4784_ = lean_ctor_get(v_toCold_4776_, 1);
v_options_4785_ = lean_ctor_get(v_toCold_4776_, 2);
v_currNamespace_4786_ = lean_ctor_get(v_toCold_4776_, 4);
v_openDecls_4787_ = lean_ctor_get(v_toCold_4776_, 5);
v_initHeartbeats_4788_ = lean_ctor_get(v_toCold_4776_, 6);
v_maxHeartbeats_4789_ = lean_ctor_get(v_toCold_4776_, 7);
v_quotContext_4790_ = lean_ctor_get(v_toCold_4776_, 8);
v_currMacroScope_4791_ = lean_ctor_get(v_toCold_4776_, 9);
v_cancelTk_x3f_4792_ = lean_ctor_get(v_toCold_4776_, 10);
v_isSharedCheck_4859_ = !lean_is_exclusive(v_toCold_4776_);
if (v_isSharedCheck_4859_ == 0)
{
lean_object* v_unused_4860_; lean_object* v_unused_4861_; 
v_unused_4860_ = lean_ctor_get(v_toCold_4776_, 11);
lean_dec(v_unused_4860_);
v_unused_4861_ = lean_ctor_get(v_toCold_4776_, 3);
lean_dec(v_unused_4861_);
v___x_4794_ = v_toCold_4776_;
v_isShared_4795_ = v_isSharedCheck_4859_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_cancelTk_x3f_4792_);
lean_inc(v_currMacroScope_4791_);
lean_inc(v_quotContext_4790_);
lean_inc(v_maxHeartbeats_4789_);
lean_inc(v_initHeartbeats_4788_);
lean_inc(v_openDecls_4787_);
lean_inc(v_currNamespace_4786_);
lean_inc(v_options_4785_);
lean_inc(v_fileMap_4784_);
lean_inc(v_fileName_4783_);
lean_dec(v_toCold_4776_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4859_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4796_; uint8_t v___x_4797_; lean_object* v___y_4799_; lean_object* v___x_4834_; uint8_t v___y_4836_; lean_object* v_env_4857_; uint8_t v___x_4858_; 
v___x_4796_ = l_Lean_diagnostics;
v___x_4797_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_4785_, v___x_4796_);
v___x_4834_ = lean_st_ref_get(v___x_4773_);
v_env_4857_ = lean_ctor_get(v___x_4834_, 0);
lean_inc_ref(v_env_4857_);
lean_dec(v___x_4834_);
v___x_4858_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4857_);
lean_dec_ref(v_env_4857_);
if (v___x_4797_ == 0)
{
if (v___x_4858_ == 0)
{
lean_inc(v___x_4773_);
v___y_4799_ = v___x_4773_;
goto v___jp_4798_;
}
else
{
v___y_4836_ = v___x_4797_;
goto v___jp_4835_;
}
}
else
{
v___y_4836_ = v___x_4858_;
goto v___jp_4835_;
}
v___jp_4798_:
{
lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4803_; 
v___x_4800_ = l_Lean_maxRecDepth;
v___x_4801_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_options_4785_, v___x_4800_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 11, v___x_4775_);
lean_ctor_set(v___x_4794_, 3, v___x_4801_);
v___x_4803_ = v___x_4794_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_fileName_4783_);
lean_ctor_set(v_reuseFailAlloc_4833_, 1, v_fileMap_4784_);
lean_ctor_set(v_reuseFailAlloc_4833_, 2, v_options_4785_);
lean_ctor_set(v_reuseFailAlloc_4833_, 3, v___x_4801_);
lean_ctor_set(v_reuseFailAlloc_4833_, 4, v_currNamespace_4786_);
lean_ctor_set(v_reuseFailAlloc_4833_, 5, v_openDecls_4787_);
lean_ctor_set(v_reuseFailAlloc_4833_, 6, v_initHeartbeats_4788_);
lean_ctor_set(v_reuseFailAlloc_4833_, 7, v_maxHeartbeats_4789_);
lean_ctor_set(v_reuseFailAlloc_4833_, 8, v_quotContext_4790_);
lean_ctor_set(v_reuseFailAlloc_4833_, 9, v_currMacroScope_4791_);
lean_ctor_set(v_reuseFailAlloc_4833_, 10, v_cancelTk_x3f_4792_);
lean_ctor_set(v_reuseFailAlloc_4833_, 11, v___x_4775_);
v___x_4803_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
lean_object* v___x_4805_; 
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 0, v___x_4803_);
v___x_4805_ = v___x_4781_;
goto v_reusejp_4804_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v___x_4803_);
lean_ctor_set(v_reuseFailAlloc_4832_, 1, v_currRecDepth_4777_);
lean_ctor_set(v_reuseFailAlloc_4832_, 2, v_ref_4778_);
lean_ctor_set_uint8(v_reuseFailAlloc_4832_, sizeof(void*)*3 + 1, v_suppressElabErrors_4779_);
v___x_4805_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4804_;
}
v_reusejp_4804_:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; 
lean_ctor_set_uint8(v___x_4805_, sizeof(void*)*3, v___x_4797_);
v___x_4806_ = lean_st_mk_ref(v___x_4755_);
lean_inc(v___x_4806_);
lean_inc(v_name_4740_);
v___x_4807_ = lean_apply_7(v_act_4736_, v_name_4740_, v_c_4737_, v___x_4766_, v___x_4806_, v___x_4805_, v___y_4799_, lean_box(0));
if (lean_obj_tag(v___x_4807_) == 0)
{
lean_object* v_a_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v_ngen_4811_; lean_object* v_cache_4812_; lean_object* v_cache_4813_; lean_object* v___x_4815_; 
lean_dec(v_name_4740_);
lean_dec(v_modName_4732_);
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
lean_inc(v_a_4808_);
lean_dec_ref_known(v___x_4807_, 1);
v___x_4809_ = lean_st_ref_get(v___x_4806_);
lean_dec(v___x_4806_);
v___x_4810_ = lean_st_ref_get(v___x_4773_);
lean_dec(v___x_4773_);
v_ngen_4811_ = lean_ctor_get(v___x_4810_, 2);
lean_inc_ref(v_ngen_4811_);
v_cache_4812_ = lean_ctor_get(v___x_4810_, 5);
lean_inc_ref(v_cache_4812_);
lean_dec(v___x_4810_);
v_cache_4813_ = lean_ctor_get(v___x_4809_, 1);
lean_inc_ref(v_cache_4813_);
lean_dec(v___x_4809_);
if (v_isShared_4750_ == 0)
{
lean_ctor_set(v___x_4749_, 2, v_cache_4813_);
lean_ctor_set(v___x_4749_, 1, v_cache_4812_);
lean_ctor_set(v___x_4749_, 0, v_ngen_4811_);
v___x_4815_ = v___x_4749_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v_ngen_4811_);
lean_ctor_set(v_reuseFailAlloc_4826_, 1, v_cache_4812_);
lean_ctor_set(v_reuseFailAlloc_4826_, 2, v_cache_4813_);
v___x_4815_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; uint8_t v___x_4818_; 
v___x_4816_ = lean_st_ref_swap(v_cacheRef_4734_, v___x_4815_);
lean_dec(v___x_4816_);
v___x_4817_ = lean_array_get_size(v_a_4808_);
v___x_4818_ = lean_nat_dec_lt(v___x_4751_, v___x_4817_);
if (v___x_4818_ == 0)
{
lean_dec(v_a_4808_);
return v_tree_4735_;
}
else
{
uint8_t v___x_4819_; 
v___x_4819_ = lean_nat_dec_le(v___x_4817_, v___x_4817_);
if (v___x_4819_ == 0)
{
if (v___x_4818_ == 0)
{
lean_dec(v_a_4808_);
return v_tree_4735_;
}
else
{
size_t v___x_4820_; size_t v___x_4821_; lean_object* v___x_4822_; 
v___x_4820_ = ((size_t)0ULL);
v___x_4821_ = lean_usize_of_nat(v___x_4817_);
v___x_4822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_a_4808_, v___x_4820_, v___x_4821_, v_tree_4735_);
lean_dec(v_a_4808_);
return v___x_4822_;
}
}
else
{
size_t v___x_4823_; size_t v___x_4824_; lean_object* v___x_4825_; 
v___x_4823_ = ((size_t)0ULL);
v___x_4824_ = lean_usize_of_nat(v___x_4817_);
v___x_4825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_a_4808_, v___x_4823_, v___x_4824_, v_tree_4735_);
lean_dec(v_a_4808_);
return v___x_4825_;
}
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; 
lean_dec(v___x_4806_);
lean_dec(v___x_4773_);
lean_del_object(v___x_4749_);
v_a_4827_ = lean_ctor_get(v___x_4807_, 0);
lean_inc(v_a_4827_);
lean_dec_ref_known(v___x_4807_, 1);
v___x_4828_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4828_, 0, v_modName_4732_);
lean_ctor_set(v___x_4828_, 1, v_name_4740_);
lean_ctor_set(v___x_4828_, 2, v_a_4827_);
v___x_4829_ = lean_st_ref_take(v_d_4733_);
v___x_4830_ = lean_array_push(v___x_4829_, v___x_4828_);
v___x_4831_ = lean_st_ref_put(v_d_4733_, v___x_4830_);
return v_tree_4735_;
}
}
}
}
v___jp_4835_:
{
if (v___y_4836_ == 0)
{
lean_object* v___x_4837_; lean_object* v_env_4838_; lean_object* v_nextMacroScope_4839_; lean_object* v_ngen_4840_; lean_object* v_auxDeclNGen_4841_; lean_object* v_traceState_4842_; lean_object* v_messages_4843_; lean_object* v_infoState_4844_; lean_object* v_snapshotTasks_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4855_; 
v___x_4837_ = lean_st_ref_take(v___x_4773_);
v_env_4838_ = lean_ctor_get(v___x_4837_, 0);
v_nextMacroScope_4839_ = lean_ctor_get(v___x_4837_, 1);
v_ngen_4840_ = lean_ctor_get(v___x_4837_, 2);
v_auxDeclNGen_4841_ = lean_ctor_get(v___x_4837_, 3);
v_traceState_4842_ = lean_ctor_get(v___x_4837_, 4);
v_messages_4843_ = lean_ctor_get(v___x_4837_, 6);
v_infoState_4844_ = lean_ctor_get(v___x_4837_, 7);
v_snapshotTasks_4845_ = lean_ctor_get(v___x_4837_, 8);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4855_ == 0)
{
lean_object* v_unused_4856_; 
v_unused_4856_ = lean_ctor_get(v___x_4837_, 5);
lean_dec(v_unused_4856_);
v___x_4847_ = v___x_4837_;
v_isShared_4848_ = v_isSharedCheck_4855_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_snapshotTasks_4845_);
lean_inc(v_infoState_4844_);
lean_inc(v_messages_4843_);
lean_inc(v_traceState_4842_);
lean_inc(v_auxDeclNGen_4841_);
lean_inc(v_ngen_4840_);
lean_inc(v_nextMacroScope_4839_);
lean_inc(v_env_4838_);
lean_dec(v___x_4837_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4855_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4852_; 
v___x_4849_ = l_Lean_Kernel_enableDiag(v_env_4838_, v___x_4797_);
v___x_4850_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12);
if (v_isShared_4848_ == 0)
{
lean_ctor_set(v___x_4847_, 5, v___x_4850_);
lean_ctor_set(v___x_4847_, 0, v___x_4849_);
v___x_4852_ = v___x_4847_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4854_; 
v_reuseFailAlloc_4854_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4854_, 0, v___x_4849_);
lean_ctor_set(v_reuseFailAlloc_4854_, 1, v_nextMacroScope_4839_);
lean_ctor_set(v_reuseFailAlloc_4854_, 2, v_ngen_4840_);
lean_ctor_set(v_reuseFailAlloc_4854_, 3, v_auxDeclNGen_4841_);
lean_ctor_set(v_reuseFailAlloc_4854_, 4, v_traceState_4842_);
lean_ctor_set(v_reuseFailAlloc_4854_, 5, v___x_4850_);
lean_ctor_set(v_reuseFailAlloc_4854_, 6, v_messages_4843_);
lean_ctor_set(v_reuseFailAlloc_4854_, 7, v_infoState_4844_);
lean_ctor_set(v_reuseFailAlloc_4854_, 8, v_snapshotTasks_4845_);
v___x_4852_ = v_reuseFailAlloc_4854_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
lean_object* v___x_4853_; 
v___x_4853_ = lean_st_ref_put(v___x_4773_, v___x_4852_);
lean_inc(v___x_4773_);
v___y_4799_ = v___x_4773_;
goto v___jp_4798_;
}
}
}
else
{
lean_inc(v___x_4773_);
v___y_4799_ = v___x_4773_;
goto v___jp_4798_;
}
}
}
}
}
}
else
{
lean_dec(v_name_4740_);
lean_dec_ref(v_c_4737_);
lean_dec_ref(v_act_4736_);
lean_dec(v_modName_4732_);
lean_dec_ref(v_env_4731_);
lean_dec_ref(v_cctx_4730_);
return v_tree_4735_;
}
}
else
{
lean_dec_ref(v_c_4737_);
lean_dec_ref(v_act_4736_);
lean_dec(v_modName_4732_);
lean_dec_ref(v_env_4731_);
lean_dec_ref(v_cctx_4730_);
return v_tree_4735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object* v_cctx_4864_, lean_object* v_env_4865_, lean_object* v_modName_4866_, lean_object* v_d_4867_, lean_object* v_cacheRef_4868_, lean_object* v_tree_4869_, lean_object* v_act_4870_, lean_object* v_c_4871_, lean_object* v_a_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4864_, v_env_4865_, v_modName_4866_, v_d_4867_, v_cacheRef_4868_, v_tree_4869_, v_act_4870_, v_c_4871_);
lean_dec(v_cacheRef_4868_);
lean_dec(v_d_4867_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object* v_00_u03b1_4874_, lean_object* v_cctx_4875_, lean_object* v_env_4876_, lean_object* v_modName_4877_, lean_object* v_d_4878_, lean_object* v_cacheRef_4879_, lean_object* v_tree_4880_, lean_object* v_act_4881_, lean_object* v_c_4882_){
_start:
{
lean_object* v___x_4884_; 
v___x_4884_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4875_, v_env_4876_, v_modName_4877_, v_d_4878_, v_cacheRef_4879_, v_tree_4880_, v_act_4881_, v_c_4882_);
return v___x_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object* v_00_u03b1_4885_, lean_object* v_cctx_4886_, lean_object* v_env_4887_, lean_object* v_modName_4888_, lean_object* v_d_4889_, lean_object* v_cacheRef_4890_, lean_object* v_tree_4891_, lean_object* v_act_4892_, lean_object* v_c_4893_, lean_object* v_a_4894_){
_start:
{
lean_object* v_res_4895_; 
v_res_4895_ = l_Lean_Meta_LazyDiscrTree_addConstImportData(v_00_u03b1_4885_, v_cctx_4886_, v_env_4887_, v_modName_4888_, v_d_4889_, v_cacheRef_4890_, v_tree_4891_, v_act_4892_, v_c_4893_);
lean_dec(v_cacheRef_4890_);
lean_dec(v_d_4889_);
return v_res_4895_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(lean_object* v_00_u03b1_4896_, lean_object* v_as_4897_, size_t v_i_4898_, size_t v_stop_4899_, lean_object* v_b_4900_){
_start:
{
lean_object* v___x_4901_; 
v___x_4901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_as_4897_, v_i_4898_, v_stop_4899_, v_b_4900_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___boxed(lean_object* v_00_u03b1_4902_, lean_object* v_as_4903_, lean_object* v_i_4904_, lean_object* v_stop_4905_, lean_object* v_b_4906_){
_start:
{
size_t v_i_boxed_4907_; size_t v_stop_boxed_4908_; lean_object* v_res_4909_; 
v_i_boxed_4907_ = lean_unbox_usize(v_i_4904_);
lean_dec(v_i_4904_);
v_stop_boxed_4908_ = lean_unbox_usize(v_stop_4905_);
lean_dec(v_stop_4905_);
v_res_4909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(v_00_u03b1_4902_, v_as_4903_, v_i_boxed_4907_, v_stop_boxed_4908_, v_b_4906_);
lean_dec_ref(v_as_4903_);
return v_res_4909_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0(void){
_start:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4910_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4911_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_4912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4912_, 0, v___x_4911_);
lean_ctor_set(v___x_4912_, 1, v___x_4910_);
return v___x_4912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg(){
_start:
{
lean_object* v___x_4914_; 
v___x_4914_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0);
return v___x_4914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object* v___dummy_4915_){
_start:
{
lean_object* v_res_4916_; 
v_res_4916_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v_res_4916_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0(void){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object* v_00_u03b1_4918_){
_start:
{
lean_object* v___x_4919_; 
v___x_4919_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0);
return v___x_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object* v_x_4920_, lean_object* v_y_4921_){
_start:
{
lean_object* v_tree_4922_; lean_object* v_errors_4923_; lean_object* v_tree_4924_; lean_object* v_errors_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4934_; 
v_tree_4922_ = lean_ctor_get(v_x_4920_, 0);
lean_inc_ref(v_tree_4922_);
v_errors_4923_ = lean_ctor_get(v_x_4920_, 1);
lean_inc_ref(v_errors_4923_);
lean_dec_ref(v_x_4920_);
v_tree_4924_ = lean_ctor_get(v_y_4921_, 0);
v_errors_4925_ = lean_ctor_get(v_y_4921_, 1);
v_isSharedCheck_4934_ = !lean_is_exclusive(v_y_4921_);
if (v_isSharedCheck_4934_ == 0)
{
v___x_4927_ = v_y_4921_;
v_isShared_4928_ = v_isSharedCheck_4934_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_errors_4925_);
lean_inc(v_tree_4924_);
lean_dec(v_y_4921_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4934_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4932_; 
v___x_4929_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_tree_4922_, v_tree_4924_);
v___x_4930_ = l_Array_append___redArg(v_errors_4923_, v_errors_4925_);
lean_dec_ref(v_errors_4925_);
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 1, v___x_4930_);
lean_ctor_set(v___x_4927_, 0, v___x_4929_);
v___x_4932_ = v___x_4927_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v___x_4929_);
lean_ctor_set(v_reuseFailAlloc_4933_, 1, v___x_4930_);
v___x_4932_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
return v___x_4932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object* v_00_u03b1_4935_, lean_object* v_x_4936_, lean_object* v_y_4937_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_x_4936_, v_y_4937_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg(){
_start:
{
lean_object* v___x_4941_; 
v___x_4941_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object* v___dummy_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
return v_res_4943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object* v_00_u03b1_4944_){
_start:
{
lean_object* v___x_4945_; 
v___x_4945_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object* v_d_4946_, lean_object* v_tree_4947_){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4949_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4950_ = lean_st_ref_swap(v_d_4946_, v___x_4949_);
v___x_4951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4951_, 0, v_tree_4947_);
lean_ctor_set(v___x_4951_, 1, v___x_4950_);
return v___x_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object* v_d_4952_, lean_object* v_tree_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4952_, v_tree_4953_);
lean_dec(v_d_4952_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object* v_00_u03b1_4956_, lean_object* v_d_4957_, lean_object* v_tree_4958_){
_start:
{
lean_object* v___x_4960_; 
v___x_4960_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4957_, v_tree_4958_);
return v___x_4960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object* v_00_u03b1_4961_, lean_object* v_d_4962_, lean_object* v_tree_4963_, lean_object* v_a_4964_){
_start:
{
lean_object* v_res_4965_; 
v_res_4965_ = l_Lean_Meta_LazyDiscrTree_toFlat(v_00_u03b1_4961_, v_d_4962_, v_tree_4963_);
lean_dec(v_d_4962_);
return v_res_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object* v_cctx_4966_, lean_object* v_env_4967_, lean_object* v_act_4968_, lean_object* v_d_4969_, lean_object* v_cacheRef_4970_, lean_object* v_tree_4971_, lean_object* v_mname_4972_, lean_object* v_mdata_4973_, lean_object* v_i_4974_){
_start:
{
lean_object* v_constants_4976_; lean_object* v___x_4977_; uint8_t v___x_4978_; 
v_constants_4976_ = lean_ctor_get(v_mdata_4973_, 2);
v___x_4977_ = lean_array_get_size(v_constants_4976_);
v___x_4978_ = lean_nat_dec_lt(v_i_4974_, v___x_4977_);
if (v___x_4978_ == 0)
{
lean_dec(v_i_4974_);
lean_dec(v_mname_4972_);
lean_dec_ref(v_act_4968_);
lean_dec_ref(v_env_4967_);
lean_dec_ref(v_cctx_4966_);
return v_tree_4971_;
}
else
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; 
v___x_4979_ = lean_array_fget_borrowed(v_constants_4976_, v_i_4974_);
lean_inc(v___x_4979_);
v___x_4980_ = l_Lean_AsyncConstantInfo_ofConstantInfo(v___x_4979_);
lean_inc_ref(v_act_4968_);
lean_inc(v_mname_4972_);
lean_inc_ref(v_env_4967_);
lean_inc_ref(v_cctx_4966_);
v___x_4981_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4966_, v_env_4967_, v_mname_4972_, v_d_4969_, v_cacheRef_4970_, v_tree_4971_, v_act_4968_, v___x_4980_);
v___x_4982_ = lean_unsigned_to_nat(1u);
v___x_4983_ = lean_nat_add(v_i_4974_, v___x_4982_);
lean_dec(v_i_4974_);
v_tree_4971_ = v___x_4981_;
v_i_4974_ = v___x_4983_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object* v_cctx_4985_, lean_object* v_env_4986_, lean_object* v_act_4987_, lean_object* v_d_4988_, lean_object* v_cacheRef_4989_, lean_object* v_tree_4990_, lean_object* v_mname_4991_, lean_object* v_mdata_4992_, lean_object* v_i_4993_, lean_object* v_a_4994_){
_start:
{
lean_object* v_res_4995_; 
v_res_4995_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4985_, v_env_4986_, v_act_4987_, v_d_4988_, v_cacheRef_4989_, v_tree_4990_, v_mname_4991_, v_mdata_4992_, v_i_4993_);
lean_dec_ref(v_mdata_4992_);
lean_dec(v_cacheRef_4989_);
lean_dec(v_d_4988_);
return v_res_4995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object* v_00_u03b1_4996_, lean_object* v_cctx_4997_, lean_object* v_env_4998_, lean_object* v_act_4999_, lean_object* v_d_5000_, lean_object* v_cacheRef_5001_, lean_object* v_tree_5002_, lean_object* v_mname_5003_, lean_object* v_mdata_5004_, lean_object* v_i_5005_){
_start:
{
lean_object* v___x_5007_; 
v___x_5007_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4997_, v_env_4998_, v_act_4999_, v_d_5000_, v_cacheRef_5001_, v_tree_5002_, v_mname_5003_, v_mdata_5004_, v_i_5005_);
return v___x_5007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object* v_00_u03b1_5008_, lean_object* v_cctx_5009_, lean_object* v_env_5010_, lean_object* v_act_5011_, lean_object* v_d_5012_, lean_object* v_cacheRef_5013_, lean_object* v_tree_5014_, lean_object* v_mname_5015_, lean_object* v_mdata_5016_, lean_object* v_i_5017_, lean_object* v_a_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule(v_00_u03b1_5008_, v_cctx_5009_, v_env_5010_, v_act_5011_, v_d_5012_, v_cacheRef_5013_, v_tree_5014_, v_mname_5015_, v_mdata_5016_, v_i_5017_);
lean_dec_ref(v_mdata_5016_);
lean_dec(v_cacheRef_5013_);
lean_dec(v_d_5012_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object* v_cctx_5020_, lean_object* v_env_5021_, lean_object* v_act_5022_, lean_object* v_d_5023_, lean_object* v_cacheRef_5024_, lean_object* v_tree_5025_, lean_object* v_start_5026_, lean_object* v_stop_5027_){
_start:
{
uint8_t v___x_5029_; 
v___x_5029_ = lean_nat_dec_lt(v_start_5026_, v_stop_5027_);
if (v___x_5029_ == 0)
{
lean_object* v___x_5030_; 
lean_dec(v_start_5026_);
lean_dec_ref(v_act_5022_);
lean_dec_ref(v_env_5021_);
lean_dec_ref(v_cctx_5020_);
v___x_5030_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_5023_, v_tree_5025_);
return v___x_5030_;
}
else
{
lean_object* v___x_5031_; lean_object* v_moduleData_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v_mname_5036_; lean_object* v_mdata_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___x_5031_ = l_Lean_Environment_header(v_env_5021_);
v_moduleData_5032_ = lean_ctor_get(v___x_5031_, 6);
lean_inc_ref(v_moduleData_5032_);
v___x_5033_ = l_Lean_instInhabitedName;
v___x_5034_ = l_Lean_instInhabitedModuleData_default;
v___x_5035_ = l_Lean_EnvironmentHeader_moduleNames(v___x_5031_);
lean_dec_ref(v___x_5031_);
v_mname_5036_ = lean_array_get(v___x_5033_, v___x_5035_, v_start_5026_);
lean_dec_ref(v___x_5035_);
v_mdata_5037_ = lean_array_get(v___x_5034_, v_moduleData_5032_, v_start_5026_);
lean_dec_ref(v_moduleData_5032_);
v___x_5038_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_act_5022_);
lean_inc_ref(v_env_5021_);
lean_inc_ref(v_cctx_5020_);
v___x_5039_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_5020_, v_env_5021_, v_act_5022_, v_d_5023_, v_cacheRef_5024_, v_tree_5025_, v_mname_5036_, v_mdata_5037_, v___x_5038_);
lean_dec(v_mdata_5037_);
v___x_5040_ = lean_unsigned_to_nat(1u);
v___x_5041_ = lean_nat_add(v_start_5026_, v___x_5040_);
lean_dec(v_start_5026_);
v_tree_5025_ = v___x_5039_;
v_start_5026_ = v___x_5041_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object* v_cctx_5043_, lean_object* v_env_5044_, lean_object* v_act_5045_, lean_object* v_d_5046_, lean_object* v_cacheRef_5047_, lean_object* v_tree_5048_, lean_object* v_start_5049_, lean_object* v_stop_5050_, lean_object* v_a_5051_){
_start:
{
lean_object* v_res_5052_; 
v_res_5052_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5043_, v_env_5044_, v_act_5045_, v_d_5046_, v_cacheRef_5047_, v_tree_5048_, v_start_5049_, v_stop_5050_);
lean_dec(v_stop_5050_);
lean_dec(v_cacheRef_5047_);
lean_dec(v_d_5046_);
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object* v_00_u03b1_5053_, lean_object* v_cctx_5054_, lean_object* v_env_5055_, lean_object* v_act_5056_, lean_object* v_d_5057_, lean_object* v_cacheRef_5058_, lean_object* v_tree_5059_, lean_object* v_start_5060_, lean_object* v_stop_5061_){
_start:
{
lean_object* v___x_5063_; 
v___x_5063_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5054_, v_env_5055_, v_act_5056_, v_d_5057_, v_cacheRef_5058_, v_tree_5059_, v_start_5060_, v_stop_5061_);
return v___x_5063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object* v_00_u03b1_5064_, lean_object* v_cctx_5065_, lean_object* v_env_5066_, lean_object* v_act_5067_, lean_object* v_d_5068_, lean_object* v_cacheRef_5069_, lean_object* v_tree_5070_, lean_object* v_start_5071_, lean_object* v_stop_5072_, lean_object* v_a_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(v_00_u03b1_5064_, v_cctx_5065_, v_env_5066_, v_act_5067_, v_d_5068_, v_cacheRef_5069_, v_tree_5070_, v_start_5071_, v_stop_5072_);
lean_dec(v_stop_5072_);
lean_dec(v_cacheRef_5069_);
lean_dec(v_d_5068_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object* v_cctx_5075_, lean_object* v_ngen_5076_, lean_object* v_env_5077_, lean_object* v_act_5078_, lean_object* v_start_5079_, lean_object* v_stop_5080_){
_start:
{
lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5082_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5076_);
v___x_5083_ = lean_st_mk_ref(v___x_5082_);
v___x_5084_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
v___x_5085_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5086_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5075_, v_env_5077_, v_act_5078_, v___x_5084_, v___x_5083_, v___x_5085_, v_start_5079_, v_stop_5080_);
lean_dec(v___x_5083_);
lean_dec(v___x_5084_);
return v___x_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object* v_cctx_5087_, lean_object* v_ngen_5088_, lean_object* v_env_5089_, lean_object* v_act_5090_, lean_object* v_start_5091_, lean_object* v_stop_5092_, lean_object* v_a_5093_){
_start:
{
lean_object* v_res_5094_; 
v_res_5094_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5087_, v_ngen_5088_, v_env_5089_, v_act_5090_, v_start_5091_, v_stop_5092_);
lean_dec(v_stop_5092_);
return v_res_5094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object* v_00_u03b1_5095_, lean_object* v_cctx_5096_, lean_object* v_ngen_5097_, lean_object* v_env_5098_, lean_object* v_act_5099_, lean_object* v_start_5100_, lean_object* v_stop_5101_){
_start:
{
lean_object* v___x_5103_; 
v___x_5103_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5096_, v_ngen_5097_, v_env_5098_, v_act_5099_, v_start_5100_, v_stop_5101_);
return v___x_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object* v_00_u03b1_5104_, lean_object* v_cctx_5105_, lean_object* v_ngen_5106_, lean_object* v_env_5107_, lean_object* v_act_5108_, lean_object* v_start_5109_, lean_object* v_stop_5110_, lean_object* v_a_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(v_00_u03b1_5104_, v_cctx_5105_, v_ngen_5106_, v_env_5107_, v_act_5108_, v_start_5109_, v_stop_5110_);
lean_dec(v_stop_5110_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object* v_inst_5113_, lean_object* v_x1_5114_, lean_object* v_x2_5115_){
_start:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5116_ = lean_task_get_own(v_x2_5115_);
v___x_5117_ = lean_apply_2(v_inst_5113_, v_x1_5114_, v___x_5116_);
return v___x_5117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object* v_inst_5118_, lean_object* v_z_5119_, lean_object* v_tasks_5120_){
_start:
{
lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; uint8_t v___x_5124_; 
v___x_5121_ = lean_unsigned_to_nat(0u);
v___x_5122_ = lean_array_get_size(v_tasks_5120_);
v___x_5123_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_5124_ = lean_nat_dec_lt(v___x_5121_, v___x_5122_);
if (v___x_5124_ == 0)
{
lean_dec_ref(v_tasks_5120_);
lean_dec(v_inst_5118_);
return v_z_5119_;
}
else
{
lean_object* v___f_5125_; uint8_t v___x_5126_; 
v___f_5125_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5125_, 0, v_inst_5118_);
v___x_5126_ = lean_nat_dec_le(v___x_5122_, v___x_5122_);
if (v___x_5126_ == 0)
{
if (v___x_5124_ == 0)
{
lean_dec_ref(v___f_5125_);
lean_dec_ref(v_tasks_5120_);
return v_z_5119_;
}
else
{
size_t v___x_5127_; size_t v___x_5128_; lean_object* v___x_5129_; 
v___x_5127_ = ((size_t)0ULL);
v___x_5128_ = lean_usize_of_nat(v___x_5122_);
v___x_5129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5123_, v___f_5125_, v_tasks_5120_, v___x_5127_, v___x_5128_, v_z_5119_);
return v___x_5129_;
}
}
else
{
size_t v___x_5130_; size_t v___x_5131_; lean_object* v___x_5132_; 
v___x_5130_ = ((size_t)0ULL);
v___x_5131_ = lean_usize_of_nat(v___x_5122_);
v___x_5132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5123_, v___f_5125_, v_tasks_5120_, v___x_5130_, v___x_5131_, v_z_5119_);
return v___x_5132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object* v_00_u03b1_5133_, lean_object* v_inst_5134_, lean_object* v_z_5135_, lean_object* v_tasks_5136_){
_start:
{
lean_object* v___x_5137_; 
v___x_5137_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v_inst_5134_, v_z_5135_, v_tasks_5136_);
return v___x_5137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object* v_toPure_5138_, lean_object* v___x_5139_, lean_object* v_____r_5140_){
_start:
{
lean_object* v___x_5141_; 
v___x_5141_ = lean_apply_2(v_toPure_5138_, lean_box(0), v___x_5139_);
return v___x_5141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object* v_toPure_5142_, lean_object* v_setNGen_5143_, lean_object* v_toBind_5144_, lean_object* v_ngen_5145_){
_start:
{
lean_object* v_namePrefix_5146_; lean_object* v_idx_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5161_; 
v_namePrefix_5146_ = lean_ctor_get(v_ngen_5145_, 0);
v_idx_5147_ = lean_ctor_get(v_ngen_5145_, 1);
v_isSharedCheck_5161_ = !lean_is_exclusive(v_ngen_5145_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5149_ = v_ngen_5145_;
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_idx_5147_);
lean_inc(v_namePrefix_5146_);
lean_dec(v_ngen_5145_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5154_; 
lean_inc(v_idx_5147_);
lean_inc(v_namePrefix_5146_);
v___x_5151_ = l_Lean_Name_num___override(v_namePrefix_5146_, v_idx_5147_);
v___x_5152_ = lean_unsigned_to_nat(1u);
if (v_isShared_5150_ == 0)
{
lean_ctor_set(v___x_5149_, 1, v___x_5152_);
lean_ctor_set(v___x_5149_, 0, v___x_5151_);
v___x_5154_ = v___x_5149_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v___x_5151_);
lean_ctor_set(v_reuseFailAlloc_5160_, 1, v___x_5152_);
v___x_5154_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
lean_object* v___f_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; 
v___f_5155_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5155_, 0, v_toPure_5142_);
lean_closure_set(v___f_5155_, 1, v___x_5154_);
v___x_5156_ = lean_nat_add(v_idx_5147_, v___x_5152_);
lean_dec(v_idx_5147_);
v___x_5157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5157_, 0, v_namePrefix_5146_);
lean_ctor_set(v___x_5157_, 1, v___x_5156_);
v___x_5158_ = lean_apply_1(v_setNGen_5143_, v___x_5157_);
v___x_5159_ = lean_apply_4(v_toBind_5144_, lean_box(0), lean_box(0), v___x_5158_, v___f_5155_);
return v___x_5159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object* v_inst_5162_, lean_object* v_inst_5163_){
_start:
{
lean_object* v_toApplicative_5164_; lean_object* v_toBind_5165_; lean_object* v_getNGen_5166_; lean_object* v_setNGen_5167_; lean_object* v_toPure_5168_; lean_object* v___f_5169_; lean_object* v___x_5170_; 
v_toApplicative_5164_ = lean_ctor_get(v_inst_5162_, 0);
lean_inc_ref(v_toApplicative_5164_);
v_toBind_5165_ = lean_ctor_get(v_inst_5162_, 1);
lean_inc_n(v_toBind_5165_, 2);
lean_dec_ref(v_inst_5162_);
v_getNGen_5166_ = lean_ctor_get(v_inst_5163_, 0);
lean_inc(v_getNGen_5166_);
v_setNGen_5167_ = lean_ctor_get(v_inst_5163_, 1);
lean_inc(v_setNGen_5167_);
lean_dec_ref(v_inst_5163_);
v_toPure_5168_ = lean_ctor_get(v_toApplicative_5164_, 1);
lean_inc(v_toPure_5168_);
lean_dec_ref(v_toApplicative_5164_);
v___f_5169_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1), 4, 3);
lean_closure_set(v___f_5169_, 0, v_toPure_5168_);
lean_closure_set(v___f_5169_, 1, v_setNGen_5167_);
lean_closure_set(v___f_5169_, 2, v_toBind_5165_);
v___x_5170_ = lean_apply_4(v_toBind_5165_, lean_box(0), lean_box(0), v_getNGen_5166_, v___f_5169_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object* v_M_5171_, lean_object* v_inst_5172_, lean_object* v_inst_5173_){
_start:
{
lean_object* v___x_5174_; 
v___x_5174_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(v_inst_5172_, v_inst_5173_);
return v___x_5174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object* v_cctx_5175_, lean_object* v_env_5176_, lean_object* v_modName_5177_, lean_object* v_d_5178_, lean_object* v_val_5179_, lean_object* v_act_5180_, lean_object* v_as_5181_, size_t v_sz_5182_, size_t v_i_5183_, lean_object* v_b_5184_){
_start:
{
uint8_t v___x_5186_; 
v___x_5186_ = lean_usize_dec_lt(v_i_5183_, v_sz_5182_);
if (v___x_5186_ == 0)
{
lean_dec_ref(v_act_5180_);
lean_dec(v_modName_5177_);
lean_dec_ref(v_env_5176_);
lean_dec_ref(v_cctx_5175_);
return v_b_5184_;
}
else
{
lean_object* v_a_5187_; lean_object* v___x_5188_; size_t v___x_5189_; size_t v___x_5190_; 
v_a_5187_ = lean_array_uget_borrowed(v_as_5181_, v_i_5183_);
lean_inc(v_a_5187_);
lean_inc_ref(v_act_5180_);
lean_inc(v_modName_5177_);
lean_inc_ref(v_env_5176_);
lean_inc_ref(v_cctx_5175_);
v___x_5188_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_5175_, v_env_5176_, v_modName_5177_, v_d_5178_, v_val_5179_, v_b_5184_, v_act_5180_, v_a_5187_);
v___x_5189_ = ((size_t)1ULL);
v___x_5190_ = lean_usize_add(v_i_5183_, v___x_5189_);
v_i_5183_ = v___x_5190_;
v_b_5184_ = v___x_5188_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object* v_cctx_5192_, lean_object* v_env_5193_, lean_object* v_modName_5194_, lean_object* v_d_5195_, lean_object* v_val_5196_, lean_object* v_act_5197_, lean_object* v_as_5198_, lean_object* v_sz_5199_, lean_object* v_i_5200_, lean_object* v_b_5201_, lean_object* v___y_5202_){
_start:
{
size_t v_sz_boxed_5203_; size_t v_i_boxed_5204_; lean_object* v_res_5205_; 
v_sz_boxed_5203_ = lean_unbox_usize(v_sz_5199_);
lean_dec(v_sz_5199_);
v_i_boxed_5204_ = lean_unbox_usize(v_i_5200_);
lean_dec(v_i_5200_);
v_res_5205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5192_, v_env_5193_, v_modName_5194_, v_d_5195_, v_val_5196_, v_act_5197_, v_as_5198_, v_sz_boxed_5203_, v_i_boxed_5204_, v_b_5201_);
lean_dec_ref(v_as_5198_);
lean_dec(v_val_5196_);
lean_dec(v_d_5195_);
return v_res_5205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object* v_cctx_5206_, lean_object* v_ngen_5207_, lean_object* v_env_5208_, lean_object* v_d_5209_, lean_object* v_act_5210_){
_start:
{
lean_object* v___x_5212_; lean_object* v_mainModule_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; uint8_t v___x_5217_; lean_object* v___x_5218_; size_t v_sz_5219_; size_t v___x_5220_; lean_object* v___x_5221_; 
v___x_5212_ = l_Lean_Environment_header(v_env_5208_);
v_mainModule_5213_ = lean_ctor_get(v___x_5212_, 0);
lean_inc(v_mainModule_5213_);
lean_dec_ref(v___x_5212_);
v___x_5214_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5207_);
v___x_5215_ = lean_st_mk_ref(v___x_5214_);
v___x_5216_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5217_ = 1;
v___x_5218_ = l_Lean_Environment_getLocalConstantInfos(v_env_5208_, v___x_5217_);
v_sz_5219_ = lean_array_size(v___x_5218_);
v___x_5220_ = ((size_t)0ULL);
v___x_5221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5206_, v_env_5208_, v_mainModule_5213_, v_d_5209_, v___x_5215_, v_act_5210_, v___x_5218_, v_sz_5219_, v___x_5220_, v___x_5216_);
lean_dec_ref(v___x_5218_);
lean_dec(v___x_5215_);
return v___x_5221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object* v_cctx_5222_, lean_object* v_ngen_5223_, lean_object* v_env_5224_, lean_object* v_d_5225_, lean_object* v_act_5226_, lean_object* v_a_5227_){
_start:
{
lean_object* v_res_5228_; 
v_res_5228_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5222_, v_ngen_5223_, v_env_5224_, v_d_5225_, v_act_5226_);
lean_dec(v_d_5225_);
return v_res_5228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object* v_00_u03b1_5229_, lean_object* v_cctx_5230_, lean_object* v_ngen_5231_, lean_object* v_env_5232_, lean_object* v_d_5233_, lean_object* v_act_5234_){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5230_, v_ngen_5231_, v_env_5232_, v_d_5233_, v_act_5234_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object* v_00_u03b1_5237_, lean_object* v_cctx_5238_, lean_object* v_ngen_5239_, lean_object* v_env_5240_, lean_object* v_d_5241_, lean_object* v_act_5242_, lean_object* v_a_5243_){
_start:
{
lean_object* v_res_5244_; 
v_res_5244_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(v_00_u03b1_5237_, v_cctx_5238_, v_ngen_5239_, v_env_5240_, v_d_5241_, v_act_5242_);
lean_dec(v_d_5241_);
return v_res_5244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object* v_00_u03b1_5245_, lean_object* v_cctx_5246_, lean_object* v_env_5247_, lean_object* v_modName_5248_, lean_object* v_d_5249_, lean_object* v_val_5250_, lean_object* v_act_5251_, lean_object* v_as_5252_, size_t v_sz_5253_, size_t v_i_5254_, lean_object* v_b_5255_){
_start:
{
lean_object* v___x_5257_; 
v___x_5257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5246_, v_env_5247_, v_modName_5248_, v_d_5249_, v_val_5250_, v_act_5251_, v_as_5252_, v_sz_5253_, v_i_5254_, v_b_5255_);
return v___x_5257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object* v_00_u03b1_5258_, lean_object* v_cctx_5259_, lean_object* v_env_5260_, lean_object* v_modName_5261_, lean_object* v_d_5262_, lean_object* v_val_5263_, lean_object* v_act_5264_, lean_object* v_as_5265_, lean_object* v_sz_5266_, lean_object* v_i_5267_, lean_object* v_b_5268_, lean_object* v___y_5269_){
_start:
{
size_t v_sz_boxed_5270_; size_t v_i_boxed_5271_; lean_object* v_res_5272_; 
v_sz_boxed_5270_ = lean_unbox_usize(v_sz_5266_);
lean_dec(v_sz_5266_);
v_i_boxed_5271_ = lean_unbox_usize(v_i_5267_);
lean_dec(v_i_5267_);
v_res_5272_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(v_00_u03b1_5258_, v_cctx_5259_, v_env_5260_, v_modName_5261_, v_d_5262_, v_val_5263_, v_act_5264_, v_as_5265_, v_sz_boxed_5270_, v_i_boxed_5271_, v_b_5268_);
lean_dec_ref(v_as_5265_);
lean_dec(v_val_5263_);
lean_dec(v_d_5262_);
return v_res_5272_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object* v_x_5273_, lean_object* v_x_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_){
_start:
{
if (lean_obj_tag(v_x_5274_) == 0)
{
lean_object* v___x_5280_; 
v___x_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5280_, 0, v_x_5273_);
return v___x_5280_;
}
else
{
lean_object* v_head_5281_; lean_object* v_tail_5282_; lean_object* v___x_5283_; 
v_head_5281_ = lean_ctor_get(v_x_5274_, 0);
lean_inc(v_head_5281_);
v_tail_5282_ = lean_ctor_get(v_x_5274_, 1);
lean_inc(v_tail_5282_);
lean_dec_ref_known(v_x_5274_, 2);
v___x_5283_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_x_5273_, v_head_5281_, v___y_5275_, v___y_5276_, v___y_5277_, v___y_5278_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
lean_inc(v_a_5284_);
lean_dec_ref_known(v___x_5283_, 1);
v_x_5273_ = v_a_5284_;
v_x_5274_ = v_tail_5282_;
goto _start;
}
else
{
lean_dec(v_tail_5282_);
return v___x_5283_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object* v_x_5286_, lean_object* v_x_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5286_, v_x_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object* v_t_5294_, lean_object* v_keys_5295_, lean_object* v_a_5296_, lean_object* v_a_5297_, lean_object* v_a_5298_, lean_object* v_a_5299_){
_start:
{
lean_object* v___x_5301_; 
v___x_5301_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5294_, v_keys_5295_, v_a_5296_, v_a_5297_, v_a_5298_, v_a_5299_);
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object* v_t_5302_, lean_object* v_keys_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_, lean_object* v_a_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(v_t_5302_, v_keys_5303_, v_a_5304_, v_a_5305_, v_a_5306_, v_a_5307_);
lean_dec(v_a_5307_);
lean_dec_ref(v_a_5306_);
lean_dec(v_a_5305_);
lean_dec_ref(v_a_5304_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object* v_00_u03b1_5310_, lean_object* v_t_5311_, lean_object* v_keys_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_a_5315_, lean_object* v_a_5316_){
_start:
{
lean_object* v___x_5318_; 
v___x_5318_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5311_, v_keys_5312_, v_a_5313_, v_a_5314_, v_a_5315_, v_a_5316_);
return v___x_5318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object* v_00_u03b1_5319_, lean_object* v_t_5320_, lean_object* v_keys_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_, lean_object* v_a_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l_Lean_Meta_LazyDiscrTree_dropKeys(v_00_u03b1_5319_, v_t_5320_, v_keys_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_);
lean_dec(v_a_5325_);
lean_dec_ref(v_a_5324_);
lean_dec(v_a_5323_);
lean_dec_ref(v_a_5322_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object* v_00_u03b1_5328_, lean_object* v_x_5329_, lean_object* v_x_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v___x_5336_; 
v___x_5336_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5329_, v_x_5330_, v___y_5331_, v___y_5332_, v___y_5333_, v___y_5334_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object* v_00_u03b1_5337_, lean_object* v_x_5338_, lean_object* v_x_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_){
_start:
{
lean_object* v_res_5345_; 
v_res_5345_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(v_00_u03b1_5337_, v_x_5338_, v_x_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_);
lean_dec(v___y_5343_);
lean_dec_ref(v___y_5342_);
lean_dec(v___y_5341_);
lean_dec_ref(v___y_5340_);
return v_res_5345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object* v_as_5346_, size_t v_sz_5347_, size_t v_i_5348_, lean_object* v_b_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_){
_start:
{
uint8_t v___x_5356_; 
v___x_5356_ = lean_usize_dec_lt(v_i_5348_, v_sz_5347_);
if (v___x_5356_ == 0)
{
lean_object* v___x_5357_; 
v___x_5357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5357_, 0, v_b_5349_);
return v___x_5357_;
}
else
{
lean_object* v_a_5358_; lean_object* v___x_5359_; 
v_a_5358_ = lean_array_uget_borrowed(v_as_5346_, v_i_5348_);
v___x_5359_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5358_, v_b_5349_, v___y_5350_, v___y_5351_, v___y_5352_, v___y_5353_, v___y_5354_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; lean_object* v___x_5362_; uint8_t v_isShared_5363_; uint8_t v_isSharedCheck_5372_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
v_isSharedCheck_5372_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5372_ == 0)
{
v___x_5362_ = v___x_5359_;
v_isShared_5363_ = v_isSharedCheck_5372_;
goto v_resetjp_5361_;
}
else
{
lean_inc(v_a_5360_);
lean_dec(v___x_5359_);
v___x_5362_ = lean_box(0);
v_isShared_5363_ = v_isSharedCheck_5372_;
goto v_resetjp_5361_;
}
v_resetjp_5361_:
{
if (lean_obj_tag(v_a_5360_) == 0)
{
lean_object* v_a_5364_; lean_object* v___x_5366_; 
v_a_5364_ = lean_ctor_get(v_a_5360_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v_a_5360_, 1);
if (v_isShared_5363_ == 0)
{
lean_ctor_set(v___x_5362_, 0, v_a_5364_);
v___x_5366_ = v___x_5362_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5367_; 
v_reuseFailAlloc_5367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5367_, 0, v_a_5364_);
v___x_5366_ = v_reuseFailAlloc_5367_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
return v___x_5366_;
}
}
else
{
lean_object* v_a_5368_; size_t v___x_5369_; size_t v___x_5370_; 
lean_del_object(v___x_5362_);
v_a_5368_ = lean_ctor_get(v_a_5360_, 0);
lean_inc(v_a_5368_);
lean_dec_ref_known(v_a_5360_, 1);
v___x_5369_ = ((size_t)1ULL);
v___x_5370_ = lean_usize_add(v_i_5348_, v___x_5369_);
v_i_5348_ = v___x_5370_;
v_b_5349_ = v_a_5368_;
goto _start;
}
}
}
else
{
lean_object* v_a_5373_; lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5380_; 
v_a_5373_ = lean_ctor_get(v___x_5359_, 0);
v_isSharedCheck_5380_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5380_ == 0)
{
v___x_5375_ = v___x_5359_;
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
else
{
lean_inc(v_a_5373_);
lean_dec(v___x_5359_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5378_; 
if (v_isShared_5376_ == 0)
{
v___x_5378_ = v___x_5375_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5379_; 
v_reuseFailAlloc_5379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5379_, 0, v_a_5373_);
v___x_5378_ = v_reuseFailAlloc_5379_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
return v___x_5378_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object* v_next_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_, lean_object* v_a_5384_, lean_object* v_a_5385_, lean_object* v_a_5386_){
_start:
{
lean_object* v___x_5388_; uint8_t v___x_5389_; 
v___x_5388_ = lean_unsigned_to_nat(0u);
v___x_5389_ = lean_nat_dec_eq(v_next_5381_, v___x_5388_);
if (v___x_5389_ == 0)
{
lean_object* v___x_5390_; 
v___x_5390_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5381_, v_a_5382_, v_a_5383_, v_a_5384_, v_a_5385_, v_a_5386_);
if (lean_obj_tag(v___x_5390_) == 0)
{
lean_object* v_a_5391_; lean_object* v_snd_5392_; lean_object* v_fst_5393_; lean_object* v_fst_5394_; lean_object* v_snd_5395_; lean_object* v___x_5396_; 
v_a_5391_ = lean_ctor_get(v___x_5390_, 0);
lean_inc(v_a_5391_);
lean_dec_ref_known(v___x_5390_, 1);
v_snd_5392_ = lean_ctor_get(v_a_5391_, 1);
lean_inc(v_snd_5392_);
v_fst_5393_ = lean_ctor_get(v_a_5391_, 0);
lean_inc(v_fst_5393_);
lean_dec(v_a_5391_);
v_fst_5394_ = lean_ctor_get(v_snd_5392_, 0);
lean_inc(v_fst_5394_);
v_snd_5395_ = lean_ctor_get(v_snd_5392_, 1);
lean_inc(v_snd_5395_);
lean_dec(v_snd_5392_);
v___x_5396_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_fst_5394_, v_a_5382_, v_a_5383_, v_a_5384_, v_a_5385_, v_a_5386_);
if (lean_obj_tag(v___x_5396_) == 0)
{
lean_object* v_a_5397_; lean_object* v_buckets_5398_; lean_object* v___x_5399_; size_t v_sz_5400_; size_t v___x_5401_; lean_object* v___x_5402_; 
v_a_5397_ = lean_ctor_get(v___x_5396_, 0);
lean_inc(v_a_5397_);
lean_dec_ref_known(v___x_5396_, 1);
v_buckets_5398_ = lean_ctor_get(v_snd_5395_, 1);
v___x_5399_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v_sz_5400_ = lean_array_size(v_buckets_5398_);
v___x_5401_ = ((size_t)0ULL);
v___x_5402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_buckets_5398_, v_sz_5400_, v___x_5401_, v___x_5399_, v_a_5382_, v_a_5383_, v_a_5384_, v_a_5385_, v_a_5386_);
if (lean_obj_tag(v___x_5402_) == 0)
{
lean_object* v_a_5403_; lean_object* v___x_5405_; uint8_t v_isShared_5406_; uint8_t v_isSharedCheck_5416_; 
v_a_5403_ = lean_ctor_get(v___x_5402_, 0);
v_isSharedCheck_5416_ = !lean_is_exclusive(v___x_5402_);
if (v_isSharedCheck_5416_ == 0)
{
v___x_5405_ = v___x_5402_;
v_isShared_5406_ = v_isSharedCheck_5416_;
goto v_resetjp_5404_;
}
else
{
lean_inc(v_a_5403_);
lean_dec(v___x_5402_);
v___x_5405_ = lean_box(0);
v_isShared_5406_ = v_isSharedCheck_5416_;
goto v_resetjp_5404_;
}
v_resetjp_5404_:
{
lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5414_; 
v___x_5407_ = lean_st_ref_take(v_a_5382_);
v___x_5408_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5408_, 0, v___x_5399_);
lean_ctor_set(v___x_5408_, 1, v_fst_5394_);
lean_ctor_set(v___x_5408_, 2, v_snd_5395_);
lean_ctor_set(v___x_5408_, 3, v___x_5399_);
v___x_5409_ = lean_array_set(v___x_5407_, v_next_5381_, v___x_5408_);
v___x_5410_ = lean_st_ref_put(v_a_5382_, v___x_5409_);
v___x_5411_ = l_Array_append___redArg(v_fst_5393_, v_a_5397_);
lean_dec(v_a_5397_);
v___x_5412_ = l_Array_append___redArg(v___x_5411_, v_a_5403_);
lean_dec(v_a_5403_);
if (v_isShared_5406_ == 0)
{
lean_ctor_set(v___x_5405_, 0, v___x_5412_);
v___x_5414_ = v___x_5405_;
goto v_reusejp_5413_;
}
else
{
lean_object* v_reuseFailAlloc_5415_; 
v_reuseFailAlloc_5415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5415_, 0, v___x_5412_);
v___x_5414_ = v_reuseFailAlloc_5415_;
goto v_reusejp_5413_;
}
v_reusejp_5413_:
{
return v___x_5414_;
}
}
}
else
{
lean_dec(v_a_5397_);
lean_dec(v_snd_5395_);
lean_dec(v_fst_5394_);
lean_dec(v_fst_5393_);
return v___x_5402_;
}
}
else
{
lean_dec(v_snd_5395_);
lean_dec(v_fst_5394_);
lean_dec(v_fst_5393_);
return v___x_5396_;
}
}
else
{
lean_object* v_a_5417_; lean_object* v___x_5419_; uint8_t v_isShared_5420_; uint8_t v_isSharedCheck_5424_; 
v_a_5417_ = lean_ctor_get(v___x_5390_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5390_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5419_ = v___x_5390_;
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
else
{
lean_inc(v_a_5417_);
lean_dec(v___x_5390_);
v___x_5419_ = lean_box(0);
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
v_resetjp_5418_:
{
lean_object* v___x_5422_; 
if (v_isShared_5420_ == 0)
{
v___x_5422_ = v___x_5419_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5417_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
return v___x_5422_;
}
}
}
}
else
{
lean_object* v___x_5425_; lean_object* v___x_5426_; 
v___x_5425_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5426_, 0, v___x_5425_);
return v___x_5426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
if (lean_obj_tag(v_a_5427_) == 0)
{
lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5435_, 0, v_a_5428_);
v___x_5436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5436_, 0, v___x_5435_);
return v___x_5436_;
}
else
{
lean_object* v_value_5437_; lean_object* v_tail_5438_; lean_object* v___x_5439_; 
v_value_5437_ = lean_ctor_get(v_a_5427_, 1);
v_tail_5438_ = lean_ctor_get(v_a_5427_, 2);
v___x_5439_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_value_5437_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
if (lean_obj_tag(v___x_5439_) == 0)
{
lean_object* v_a_5440_; lean_object* v___x_5441_; 
v_a_5440_ = lean_ctor_get(v___x_5439_, 0);
lean_inc(v_a_5440_);
lean_dec_ref_known(v___x_5439_, 1);
v___x_5441_ = l_Array_append___redArg(v_a_5428_, v_a_5440_);
lean_dec(v_a_5440_);
v_a_5427_ = v_tail_5438_;
v_a_5428_ = v___x_5441_;
goto _start;
}
else
{
lean_object* v_a_5443_; lean_object* v___x_5445_; uint8_t v_isShared_5446_; uint8_t v_isSharedCheck_5450_; 
lean_dec_ref(v_a_5428_);
v_a_5443_ = lean_ctor_get(v___x_5439_, 0);
v_isSharedCheck_5450_ = !lean_is_exclusive(v___x_5439_);
if (v_isSharedCheck_5450_ == 0)
{
v___x_5445_ = v___x_5439_;
v_isShared_5446_ = v_isSharedCheck_5450_;
goto v_resetjp_5444_;
}
else
{
lean_inc(v_a_5443_);
lean_dec(v___x_5439_);
v___x_5445_ = lean_box(0);
v_isShared_5446_ = v_isSharedCheck_5450_;
goto v_resetjp_5444_;
}
v_resetjp_5444_:
{
lean_object* v___x_5448_; 
if (v_isShared_5446_ == 0)
{
v___x_5448_ = v___x_5445_;
goto v_reusejp_5447_;
}
else
{
lean_object* v_reuseFailAlloc_5449_; 
v_reuseFailAlloc_5449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5449_, 0, v_a_5443_);
v___x_5448_ = v_reuseFailAlloc_5449_;
goto v_reusejp_5447_;
}
v_reusejp_5447_:
{
return v___x_5448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object* v_a_5451_, lean_object* v_a_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_){
_start:
{
lean_object* v_res_5459_; 
v_res_5459_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5451_, v_a_5452_, v___y_5453_, v___y_5454_, v___y_5455_, v___y_5456_, v___y_5457_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
lean_dec(v___y_5453_);
lean_dec(v_a_5451_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object* v_as_5460_, lean_object* v_sz_5461_, lean_object* v_i_5462_, lean_object* v_b_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_){
_start:
{
size_t v_sz_boxed_5470_; size_t v_i_boxed_5471_; lean_object* v_res_5472_; 
v_sz_boxed_5470_ = lean_unbox_usize(v_sz_5461_);
lean_dec(v_sz_5461_);
v_i_boxed_5471_ = lean_unbox_usize(v_i_5462_);
lean_dec(v_i_5462_);
v_res_5472_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5460_, v_sz_boxed_5470_, v_i_boxed_5471_, v_b_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_);
lean_dec(v___y_5468_);
lean_dec_ref(v___y_5467_);
lean_dec(v___y_5466_);
lean_dec_ref(v___y_5465_);
lean_dec(v___y_5464_);
lean_dec_ref(v_as_5460_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object* v_next_5473_, lean_object* v_a_5474_, lean_object* v_a_5475_, lean_object* v_a_5476_, lean_object* v_a_5477_, lean_object* v_a_5478_, lean_object* v_a_5479_){
_start:
{
lean_object* v_res_5480_; 
v_res_5480_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5473_, v_a_5474_, v_a_5475_, v_a_5476_, v_a_5477_, v_a_5478_);
lean_dec(v_a_5478_);
lean_dec_ref(v_a_5477_);
lean_dec(v_a_5476_);
lean_dec_ref(v_a_5475_);
lean_dec(v_a_5474_);
lean_dec(v_next_5473_);
return v_res_5480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object* v_00_u03b1_5481_, lean_object* v_next_5482_, lean_object* v_a_5483_, lean_object* v_a_5484_, lean_object* v_a_5485_, lean_object* v_a_5486_, lean_object* v_a_5487_){
_start:
{
lean_object* v___x_5489_; 
v___x_5489_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5482_, v_a_5483_, v_a_5484_, v_a_5485_, v_a_5486_, v_a_5487_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object* v_00_u03b1_5490_, lean_object* v_next_5491_, lean_object* v_a_5492_, lean_object* v_a_5493_, lean_object* v_a_5494_, lean_object* v_a_5495_, lean_object* v_a_5496_, lean_object* v_a_5497_){
_start:
{
lean_object* v_res_5498_; 
v_res_5498_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(v_00_u03b1_5490_, v_next_5491_, v_a_5492_, v_a_5493_, v_a_5494_, v_a_5495_, v_a_5496_);
lean_dec(v_a_5496_);
lean_dec_ref(v_a_5495_);
lean_dec(v_a_5494_);
lean_dec_ref(v_a_5493_);
lean_dec(v_a_5492_);
lean_dec(v_next_5491_);
return v_res_5498_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object* v_00_u03b1_5499_, lean_object* v_a_5500_, lean_object* v_a_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_){
_start:
{
lean_object* v___x_5508_; 
v___x_5508_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5500_, v_a_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_, v___y_5506_);
return v___x_5508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object* v_00_u03b1_5509_, lean_object* v_a_5510_, lean_object* v_a_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_){
_start:
{
lean_object* v_res_5518_; 
v_res_5518_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(v_00_u03b1_5509_, v_a_5510_, v_a_5511_, v___y_5512_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
lean_dec(v___y_5516_);
lean_dec_ref(v___y_5515_);
lean_dec(v___y_5514_);
lean_dec_ref(v___y_5513_);
lean_dec(v___y_5512_);
lean_dec(v_a_5510_);
return v_res_5518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object* v_00_u03b1_5519_, lean_object* v_as_5520_, size_t v_sz_5521_, size_t v_i_5522_, lean_object* v_b_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_){
_start:
{
lean_object* v___x_5530_; 
v___x_5530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5520_, v_sz_5521_, v_i_5522_, v_b_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_, v___y_5528_);
return v___x_5530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object* v_00_u03b1_5531_, lean_object* v_as_5532_, lean_object* v_sz_5533_, lean_object* v_i_5534_, lean_object* v_b_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_){
_start:
{
size_t v_sz_boxed_5542_; size_t v_i_boxed_5543_; lean_object* v_res_5544_; 
v_sz_boxed_5542_ = lean_unbox_usize(v_sz_5533_);
lean_dec(v_sz_5533_);
v_i_boxed_5543_ = lean_unbox_usize(v_i_5534_);
lean_dec(v_i_5534_);
v_res_5544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(v_00_u03b1_5531_, v_as_5532_, v_sz_boxed_5542_, v_i_boxed_5543_, v_b_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_);
lean_dec(v___y_5540_);
lean_dec_ref(v___y_5539_);
lean_dec(v___y_5538_);
lean_dec_ref(v___y_5537_);
lean_dec(v___y_5536_);
lean_dec_ref(v_as_5532_);
return v_res_5544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object* v_next_5545_, lean_object* v_rest_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_, lean_object* v_a_5549_, lean_object* v_a_5550_, lean_object* v_a_5551_){
_start:
{
lean_object* v___x_5553_; uint8_t v___x_5554_; 
v___x_5553_ = lean_unsigned_to_nat(0u);
v___x_5554_ = lean_nat_dec_eq(v_next_5545_, v___x_5553_);
if (v___x_5554_ == 0)
{
lean_object* v___x_5555_; 
v___x_5555_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5545_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_, v_a_5551_);
if (lean_obj_tag(v___x_5555_) == 0)
{
lean_object* v_a_5556_; lean_object* v_snd_5557_; 
v_a_5556_ = lean_ctor_get(v___x_5555_, 0);
lean_inc(v_a_5556_);
lean_dec_ref_known(v___x_5555_, 1);
v_snd_5557_ = lean_ctor_get(v_a_5556_, 1);
lean_inc(v_snd_5557_);
lean_dec(v_a_5556_);
if (lean_obj_tag(v_rest_5546_) == 0)
{
lean_object* v___x_5558_; 
lean_dec(v_snd_5557_);
v___x_5558_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5545_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_, v_a_5551_);
lean_dec(v_next_5545_);
return v___x_5558_;
}
else
{
lean_object* v_fst_5559_; lean_object* v_snd_5560_; lean_object* v_head_5561_; lean_object* v_tail_5562_; lean_object* v___x_5563_; uint8_t v___x_5564_; 
lean_dec(v_next_5545_);
v_fst_5559_ = lean_ctor_get(v_snd_5557_, 0);
lean_inc(v_fst_5559_);
v_snd_5560_ = lean_ctor_get(v_snd_5557_, 1);
lean_inc(v_snd_5560_);
lean_dec(v_snd_5557_);
v_head_5561_ = lean_ctor_get(v_rest_5546_, 0);
v_tail_5562_ = lean_ctor_get(v_rest_5546_, 1);
v___x_5563_ = lean_box(3);
v___x_5564_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_5561_, v___x_5563_);
if (v___x_5564_ == 0)
{
lean_object* v___x_5565_; 
lean_dec(v_fst_5559_);
v___x_5565_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_5560_, v_head_5561_, v___x_5553_);
lean_dec(v_snd_5560_);
v_next_5545_ = v___x_5565_;
v_rest_5546_ = v_tail_5562_;
goto _start;
}
else
{
lean_dec(v_snd_5560_);
v_next_5545_ = v_fst_5559_;
v_rest_5546_ = v_tail_5562_;
goto _start;
}
}
}
else
{
lean_object* v_a_5568_; lean_object* v___x_5570_; uint8_t v_isShared_5571_; uint8_t v_isSharedCheck_5575_; 
lean_dec(v_next_5545_);
v_a_5568_ = lean_ctor_get(v___x_5555_, 0);
v_isSharedCheck_5575_ = !lean_is_exclusive(v___x_5555_);
if (v_isSharedCheck_5575_ == 0)
{
v___x_5570_ = v___x_5555_;
v_isShared_5571_ = v_isSharedCheck_5575_;
goto v_resetjp_5569_;
}
else
{
lean_inc(v_a_5568_);
lean_dec(v___x_5555_);
v___x_5570_ = lean_box(0);
v_isShared_5571_ = v_isSharedCheck_5575_;
goto v_resetjp_5569_;
}
v_resetjp_5569_:
{
lean_object* v___x_5573_; 
if (v_isShared_5571_ == 0)
{
v___x_5573_ = v___x_5570_;
goto v_reusejp_5572_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v_a_5568_);
v___x_5573_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5572_;
}
v_reusejp_5572_:
{
return v___x_5573_;
}
}
}
}
else
{
lean_object* v___x_5576_; lean_object* v___x_5577_; 
lean_dec(v_next_5545_);
v___x_5576_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5577_, 0, v___x_5576_);
return v___x_5577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object* v_next_5578_, lean_object* v_rest_5579_, lean_object* v_a_5580_, lean_object* v_a_5581_, lean_object* v_a_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_){
_start:
{
lean_object* v_res_5586_; 
v_res_5586_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5578_, v_rest_5579_, v_a_5580_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_);
lean_dec(v_a_5584_);
lean_dec_ref(v_a_5583_);
lean_dec(v_a_5582_);
lean_dec_ref(v_a_5581_);
lean_dec(v_a_5580_);
lean_dec(v_rest_5579_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object* v_00_u03b1_5587_, lean_object* v_next_5588_, lean_object* v_rest_5589_, lean_object* v_a_5590_, lean_object* v_a_5591_, lean_object* v_a_5592_, lean_object* v_a_5593_, lean_object* v_a_5594_){
_start:
{
lean_object* v___x_5596_; 
v___x_5596_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5588_, v_rest_5589_, v_a_5590_, v_a_5591_, v_a_5592_, v_a_5593_, v_a_5594_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object* v_00_u03b1_5597_, lean_object* v_next_5598_, lean_object* v_rest_5599_, lean_object* v_a_5600_, lean_object* v_a_5601_, lean_object* v_a_5602_, lean_object* v_a_5603_, lean_object* v_a_5604_, lean_object* v_a_5605_){
_start:
{
lean_object* v_res_5606_; 
v_res_5606_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux(v_00_u03b1_5597_, v_next_5598_, v_rest_5599_, v_a_5600_, v_a_5601_, v_a_5602_, v_a_5603_, v_a_5604_);
lean_dec(v_a_5604_);
lean_dec_ref(v_a_5603_);
lean_dec(v_a_5602_);
lean_dec_ref(v_a_5601_);
lean_dec(v_a_5600_);
lean_dec(v_rest_5599_);
return v_res_5606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object* v_t_5607_, lean_object* v_path_5608_, lean_object* v_a_5609_, lean_object* v_a_5610_, lean_object* v_a_5611_, lean_object* v_a_5612_){
_start:
{
if (lean_obj_tag(v_path_5608_) == 0)
{
lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; 
v___x_5614_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5615_, 0, v___x_5614_);
lean_ctor_set(v___x_5615_, 1, v_t_5607_);
v___x_5616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5616_, 0, v___x_5615_);
return v___x_5616_;
}
else
{
lean_object* v_head_5617_; lean_object* v_tail_5618_; lean_object* v_roots_5619_; lean_object* v___x_5620_; lean_object* v_idx_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; 
v_head_5617_ = lean_ctor_get(v_path_5608_, 0);
lean_inc(v_head_5617_);
v_tail_5618_ = lean_ctor_get(v_path_5608_, 1);
lean_inc(v_tail_5618_);
lean_dec_ref_known(v_path_5608_, 2);
v_roots_5619_ = lean_ctor_get(v_t_5607_, 1);
v___x_5620_ = lean_unsigned_to_nat(0u);
v_idx_5621_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_5619_, v_head_5617_, v___x_5620_);
lean_dec(v_head_5617_);
v___x_5622_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed), 9, 3);
lean_closure_set(v___x_5622_, 0, lean_box(0));
lean_closure_set(v___x_5622_, 1, v_idx_5621_);
lean_closure_set(v___x_5622_, 2, v_tail_5618_);
v___x_5623_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_5607_, v___x_5622_, v_a_5609_, v_a_5610_, v_a_5611_, v_a_5612_);
return v___x_5623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object* v_t_5624_, lean_object* v_path_5625_, lean_object* v_a_5626_, lean_object* v_a_5627_, lean_object* v_a_5628_, lean_object* v_a_5629_, lean_object* v_a_5630_){
_start:
{
lean_object* v_res_5631_; 
v_res_5631_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5624_, v_path_5625_, v_a_5626_, v_a_5627_, v_a_5628_, v_a_5629_);
lean_dec(v_a_5629_);
lean_dec_ref(v_a_5628_);
lean_dec(v_a_5627_);
lean_dec_ref(v_a_5626_);
return v_res_5631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object* v_00_u03b1_5632_, lean_object* v_t_5633_, lean_object* v_path_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_, lean_object* v_a_5638_){
_start:
{
lean_object* v___x_5640_; 
v___x_5640_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5633_, v_path_5634_, v_a_5635_, v_a_5636_, v_a_5637_, v_a_5638_);
return v___x_5640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object* v_00_u03b1_5641_, lean_object* v_t_5642_, lean_object* v_path_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_, lean_object* v_a_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l_Lean_Meta_LazyDiscrTree_extractKey(v_00_u03b1_5641_, v_t_5642_, v_path_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_);
lean_dec(v_a_5647_);
lean_dec_ref(v_a_5646_);
lean_dec(v_a_5645_);
lean_dec_ref(v_a_5644_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object* v_as_x27_5650_, lean_object* v_b_5651_, lean_object* v___y_5652_, lean_object* v___y_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_){
_start:
{
if (lean_obj_tag(v_as_x27_5650_) == 0)
{
lean_object* v___x_5657_; 
v___x_5657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5657_, 0, v_b_5651_);
return v___x_5657_;
}
else
{
lean_object* v_head_5658_; lean_object* v_tail_5659_; lean_object* v_fst_5660_; lean_object* v_snd_5661_; lean_object* v___x_5662_; 
v_head_5658_ = lean_ctor_get(v_as_x27_5650_, 0);
v_tail_5659_ = lean_ctor_get(v_as_x27_5650_, 1);
v_fst_5660_ = lean_ctor_get(v_b_5651_, 0);
lean_inc(v_fst_5660_);
v_snd_5661_ = lean_ctor_get(v_b_5651_, 1);
lean_inc(v_snd_5661_);
lean_dec_ref(v_b_5651_);
lean_inc(v_head_5658_);
v___x_5662_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_snd_5661_, v_head_5658_, v___y_5652_, v___y_5653_, v___y_5654_, v___y_5655_);
if (lean_obj_tag(v___x_5662_) == 0)
{
lean_object* v_a_5663_; lean_object* v_fst_5664_; lean_object* v_snd_5665_; lean_object* v___x_5667_; uint8_t v_isShared_5668_; uint8_t v_isSharedCheck_5674_; 
v_a_5663_ = lean_ctor_get(v___x_5662_, 0);
lean_inc(v_a_5663_);
lean_dec_ref_known(v___x_5662_, 1);
v_fst_5664_ = lean_ctor_get(v_a_5663_, 0);
v_snd_5665_ = lean_ctor_get(v_a_5663_, 1);
v_isSharedCheck_5674_ = !lean_is_exclusive(v_a_5663_);
if (v_isSharedCheck_5674_ == 0)
{
v___x_5667_ = v_a_5663_;
v_isShared_5668_ = v_isSharedCheck_5674_;
goto v_resetjp_5666_;
}
else
{
lean_inc(v_snd_5665_);
lean_inc(v_fst_5664_);
lean_dec(v_a_5663_);
v___x_5667_ = lean_box(0);
v_isShared_5668_ = v_isSharedCheck_5674_;
goto v_resetjp_5666_;
}
v_resetjp_5666_:
{
lean_object* v___x_5669_; lean_object* v___x_5671_; 
v___x_5669_ = l_Array_append___redArg(v_fst_5660_, v_fst_5664_);
lean_dec(v_fst_5664_);
if (v_isShared_5668_ == 0)
{
lean_ctor_set(v___x_5667_, 0, v___x_5669_);
v___x_5671_ = v___x_5667_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5673_; 
v_reuseFailAlloc_5673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5673_, 0, v___x_5669_);
lean_ctor_set(v_reuseFailAlloc_5673_, 1, v_snd_5665_);
v___x_5671_ = v_reuseFailAlloc_5673_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
v_as_x27_5650_ = v_tail_5659_;
v_b_5651_ = v___x_5671_;
goto _start;
}
}
}
else
{
lean_dec(v_fst_5660_);
return v___x_5662_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object* v_as_x27_5675_, lean_object* v_b_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_){
_start:
{
lean_object* v_res_5682_; 
v_res_5682_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5675_, v_b_5676_, v___y_5677_, v___y_5678_, v___y_5679_, v___y_5680_);
lean_dec(v___y_5680_);
lean_dec_ref(v___y_5679_);
lean_dec(v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v_as_x27_5675_);
return v_res_5682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object* v_t_5683_, lean_object* v_keys_5684_, lean_object* v_a_5685_, lean_object* v_a_5686_, lean_object* v_a_5687_, lean_object* v_a_5688_){
_start:
{
lean_object* v_allExtracted_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; 
v_allExtracted_5690_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5691_, 0, v_allExtracted_5690_);
lean_ctor_set(v___x_5691_, 1, v_t_5683_);
v___x_5692_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_keys_5684_, v___x_5691_, v_a_5685_, v_a_5686_, v_a_5687_, v_a_5688_);
if (lean_obj_tag(v___x_5692_) == 0)
{
lean_object* v_a_5693_; lean_object* v___x_5695_; uint8_t v_isShared_5696_; uint8_t v_isSharedCheck_5709_; 
v_a_5693_ = lean_ctor_get(v___x_5692_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5692_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5695_ = v___x_5692_;
v_isShared_5696_ = v_isSharedCheck_5709_;
goto v_resetjp_5694_;
}
else
{
lean_inc(v_a_5693_);
lean_dec(v___x_5692_);
v___x_5695_ = lean_box(0);
v_isShared_5696_ = v_isSharedCheck_5709_;
goto v_resetjp_5694_;
}
v_resetjp_5694_:
{
lean_object* v_fst_5697_; lean_object* v_snd_5698_; lean_object* v___x_5700_; uint8_t v_isShared_5701_; uint8_t v_isSharedCheck_5708_; 
v_fst_5697_ = lean_ctor_get(v_a_5693_, 0);
v_snd_5698_ = lean_ctor_get(v_a_5693_, 1);
v_isSharedCheck_5708_ = !lean_is_exclusive(v_a_5693_);
if (v_isSharedCheck_5708_ == 0)
{
v___x_5700_ = v_a_5693_;
v_isShared_5701_ = v_isSharedCheck_5708_;
goto v_resetjp_5699_;
}
else
{
lean_inc(v_snd_5698_);
lean_inc(v_fst_5697_);
lean_dec(v_a_5693_);
v___x_5700_ = lean_box(0);
v_isShared_5701_ = v_isSharedCheck_5708_;
goto v_resetjp_5699_;
}
v_resetjp_5699_:
{
lean_object* v___x_5703_; 
if (v_isShared_5701_ == 0)
{
v___x_5703_ = v___x_5700_;
goto v_reusejp_5702_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v_fst_5697_);
lean_ctor_set(v_reuseFailAlloc_5707_, 1, v_snd_5698_);
v___x_5703_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5702_;
}
v_reusejp_5702_:
{
lean_object* v___x_5705_; 
if (v_isShared_5696_ == 0)
{
lean_ctor_set(v___x_5695_, 0, v___x_5703_);
v___x_5705_ = v___x_5695_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v___x_5703_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
}
else
{
return v___x_5692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object* v_t_5710_, lean_object* v_keys_5711_, lean_object* v_a_5712_, lean_object* v_a_5713_, lean_object* v_a_5714_, lean_object* v_a_5715_, lean_object* v_a_5716_){
_start:
{
lean_object* v_res_5717_; 
v_res_5717_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5710_, v_keys_5711_, v_a_5712_, v_a_5713_, v_a_5714_, v_a_5715_);
lean_dec(v_a_5715_);
lean_dec_ref(v_a_5714_);
lean_dec(v_a_5713_);
lean_dec_ref(v_a_5712_);
lean_dec(v_keys_5711_);
return v_res_5717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object* v_00_u03b1_5718_, lean_object* v_t_5719_, lean_object* v_keys_5720_, lean_object* v_a_5721_, lean_object* v_a_5722_, lean_object* v_a_5723_, lean_object* v_a_5724_){
_start:
{
lean_object* v___x_5726_; 
v___x_5726_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5719_, v_keys_5720_, v_a_5721_, v_a_5722_, v_a_5723_, v_a_5724_);
return v___x_5726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object* v_00_u03b1_5727_, lean_object* v_t_5728_, lean_object* v_keys_5729_, lean_object* v_a_5730_, lean_object* v_a_5731_, lean_object* v_a_5732_, lean_object* v_a_5733_, lean_object* v_a_5734_){
_start:
{
lean_object* v_res_5735_; 
v_res_5735_ = l_Lean_Meta_LazyDiscrTree_extractKeys(v_00_u03b1_5727_, v_t_5728_, v_keys_5729_, v_a_5730_, v_a_5731_, v_a_5732_, v_a_5733_);
lean_dec(v_a_5733_);
lean_dec_ref(v_a_5732_);
lean_dec(v_a_5731_);
lean_dec_ref(v_a_5730_);
lean_dec(v_keys_5729_);
return v_res_5735_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object* v_00_u03b1_5736_, lean_object* v_as_5737_, lean_object* v_as_x27_5738_, lean_object* v_b_5739_, lean_object* v_a_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_){
_start:
{
lean_object* v___x_5746_; 
v___x_5746_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5738_, v_b_5739_, v___y_5741_, v___y_5742_, v___y_5743_, v___y_5744_);
return v___x_5746_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object* v_00_u03b1_5747_, lean_object* v_as_5748_, lean_object* v_as_x27_5749_, lean_object* v_b_5750_, lean_object* v_a_5751_, lean_object* v___y_5752_, lean_object* v___y_5753_, lean_object* v___y_5754_, lean_object* v___y_5755_, lean_object* v___y_5756_){
_start:
{
lean_object* v_res_5757_; 
v_res_5757_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(v_00_u03b1_5747_, v_as_5748_, v_as_x27_5749_, v_b_5750_, v_a_5751_, v___y_5752_, v___y_5753_, v___y_5754_, v___y_5755_);
lean_dec(v___y_5755_);
lean_dec_ref(v___y_5754_);
lean_dec(v___y_5753_);
lean_dec_ref(v___y_5752_);
lean_dec(v_as_x27_5749_);
lean_dec(v_as_5748_);
return v_res_5757_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1(void){
_start:
{
lean_object* v___x_5759_; lean_object* v___x_5760_; 
v___x_5759_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0));
v___x_5760_ = l_Lean_stringToMessageData(v___x_5759_);
return v___x_5760_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3(void){
_start:
{
lean_object* v___x_5762_; lean_object* v___x_5763_; 
v___x_5762_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2));
v___x_5763_ = l_Lean_stringToMessageData(v___x_5762_);
return v___x_5763_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5(void){
_start:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5765_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4));
v___x_5766_ = l_Lean_stringToMessageData(v___x_5765_);
return v___x_5766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object* v_inst_5767_, lean_object* v_inst_5768_, lean_object* v_inst_5769_, lean_object* v_inst_5770_, lean_object* v_f_5771_){
_start:
{
lean_object* v_module_5772_; lean_object* v_const_5773_; lean_object* v_exception_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v_module_5772_ = lean_ctor_get(v_f_5771_, 0);
lean_inc(v_module_5772_);
v_const_5773_ = lean_ctor_get(v_f_5771_, 1);
lean_inc(v_const_5773_);
v_exception_5774_ = lean_ctor_get(v_f_5771_, 2);
lean_inc_ref(v_exception_5774_);
lean_dec_ref(v_f_5771_);
v___x_5775_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_5776_ = l_Lean_MessageData_ofName(v_const_5773_);
v___x_5777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5777_, 0, v___x_5775_);
lean_ctor_set(v___x_5777_, 1, v___x_5776_);
v___x_5778_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_5779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5779_, 0, v___x_5777_);
lean_ctor_set(v___x_5779_, 1, v___x_5778_);
v___x_5780_ = l_Lean_MessageData_ofName(v_module_5772_);
v___x_5781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5781_, 0, v___x_5779_);
lean_ctor_set(v___x_5781_, 1, v___x_5780_);
v___x_5782_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_5783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5783_, 0, v___x_5781_);
lean_ctor_set(v___x_5783_, 1, v___x_5782_);
v___x_5784_ = l_Lean_Exception_toMessageData(v_exception_5774_);
v___x_5785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5783_);
lean_ctor_set(v___x_5785_, 1, v___x_5784_);
v___x_5786_ = l_Lean_logError___redArg(v_inst_5767_, v_inst_5768_, v_inst_5769_, v_inst_5770_, v___x_5785_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object* v_m_5787_, lean_object* v_inst_5788_, lean_object* v_inst_5789_, lean_object* v_inst_5790_, lean_object* v_inst_5791_, lean_object* v_f_5792_){
_start:
{
lean_object* v___x_5793_; 
v___x_5793_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5788_, v_inst_5789_, v_inst_5790_, v_inst_5791_, v_f_5792_);
return v___x_5793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object* v_tasks_5794_, lean_object* v_toPure_5795_, lean_object* v_t_5796_){
_start:
{
lean_object* v___x_5797_; lean_object* v___x_5798_; 
v___x_5797_ = lean_array_push(v_tasks_5794_, v_t_5796_);
v___x_5798_ = lean_apply_2(v_toPure_5795_, lean_box(0), v___x_5797_);
return v___x_5798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object* v_inst_5799_, lean_object* v_inst_5800_, lean_object* v_cctx_5801_, lean_object* v_env_5802_, lean_object* v_act_5803_, lean_object* v_constantsPerTask_5804_, lean_object* v_n_5805_, lean_object* v_ngen_5806_, lean_object* v_tasks_5807_, lean_object* v_start_5808_, lean_object* v_cnt_5809_, lean_object* v_idx_5810_){
_start:
{
lean_object* v___x_5811_; lean_object* v_toApplicative_5812_; lean_object* v_moduleData_5813_; lean_object* v_toBind_5814_; lean_object* v_toPure_5815_; lean_object* v___x_5816_; uint8_t v___x_5817_; 
v___x_5811_ = l_Lean_Environment_header(v_env_5802_);
v_toApplicative_5812_ = lean_ctor_get(v_inst_5799_, 0);
v_moduleData_5813_ = lean_ctor_get(v___x_5811_, 6);
lean_inc_ref(v_moduleData_5813_);
lean_dec_ref(v___x_5811_);
v_toBind_5814_ = lean_ctor_get(v_inst_5799_, 1);
v_toPure_5815_ = lean_ctor_get(v_toApplicative_5812_, 1);
v___x_5816_ = lean_array_get_size(v_moduleData_5813_);
v___x_5817_ = lean_nat_dec_lt(v_idx_5810_, v___x_5816_);
if (v___x_5817_ == 0)
{
uint8_t v___x_5818_; 
lean_inc(v_toPure_5815_);
lean_inc(v_toBind_5814_);
lean_dec_ref(v_moduleData_5813_);
lean_dec(v_idx_5810_);
lean_dec(v_cnt_5809_);
lean_dec(v_constantsPerTask_5804_);
lean_dec_ref(v_inst_5799_);
v___x_5818_ = lean_nat_dec_lt(v_start_5808_, v_n_5805_);
if (v___x_5818_ == 0)
{
lean_object* v___x_5819_; 
lean_dec(v_toBind_5814_);
lean_dec(v_start_5808_);
lean_dec_ref(v_ngen_5806_);
lean_dec(v_n_5805_);
lean_dec_ref(v_act_5803_);
lean_dec_ref(v_env_5802_);
lean_dec_ref(v_cctx_5801_);
lean_dec(v_inst_5800_);
v___x_5819_ = lean_apply_2(v_toPure_5815_, lean_box(0), v_tasks_5807_);
return v___x_5819_;
}
else
{
lean_object* v_namePrefix_5820_; lean_object* v_idx_5821_; lean_object* v___x_5823_; uint8_t v_isShared_5824_; uint8_t v_isSharedCheck_5836_; 
v_namePrefix_5820_ = lean_ctor_get(v_ngen_5806_, 0);
v_idx_5821_ = lean_ctor_get(v_ngen_5806_, 1);
v_isSharedCheck_5836_ = !lean_is_exclusive(v_ngen_5806_);
if (v_isSharedCheck_5836_ == 0)
{
v___x_5823_ = v_ngen_5806_;
v_isShared_5824_ = v_isSharedCheck_5836_;
goto v_resetjp_5822_;
}
else
{
lean_inc(v_idx_5821_);
lean_inc(v_namePrefix_5820_);
lean_dec(v_ngen_5806_);
v___x_5823_ = lean_box(0);
v_isShared_5824_ = v_isSharedCheck_5836_;
goto v_resetjp_5822_;
}
v_resetjp_5822_:
{
lean_object* v___f_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5829_; 
v___f_5825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5825_, 0, v_tasks_5807_);
lean_closure_set(v___f_5825_, 1, v_toPure_5815_);
v___x_5826_ = l_Lean_Name_num___override(v_namePrefix_5820_, v_idx_5821_);
v___x_5827_ = lean_unsigned_to_nat(1u);
if (v_isShared_5824_ == 0)
{
lean_ctor_set(v___x_5823_, 1, v___x_5827_);
lean_ctor_set(v___x_5823_, 0, v___x_5826_);
v___x_5829_ = v___x_5823_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v___x_5826_);
lean_ctor_set(v_reuseFailAlloc_5835_, 1, v___x_5827_);
v___x_5829_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5830_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5830_, 0, lean_box(0));
lean_closure_set(v___x_5830_, 1, v_cctx_5801_);
lean_closure_set(v___x_5830_, 2, v___x_5829_);
lean_closure_set(v___x_5830_, 3, v_env_5802_);
lean_closure_set(v___x_5830_, 4, v_act_5803_);
lean_closure_set(v___x_5830_, 5, v_start_5808_);
lean_closure_set(v___x_5830_, 6, v_n_5805_);
v___x_5831_ = lean_unsigned_to_nat(0u);
v___x_5832_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5832_, 0, lean_box(0));
lean_closure_set(v___x_5832_, 1, v___x_5830_);
lean_closure_set(v___x_5832_, 2, v___x_5831_);
v___x_5833_ = lean_apply_2(v_inst_5800_, lean_box(0), v___x_5832_);
v___x_5834_ = lean_apply_4(v_toBind_5814_, lean_box(0), lean_box(0), v___x_5833_, v___f_5825_);
return v___x_5834_;
}
}
}
}
else
{
lean_object* v_mdata_5837_; lean_object* v_constants_5838_; lean_object* v___x_5839_; lean_object* v_cnt_5840_; uint8_t v___x_5841_; 
v_mdata_5837_ = lean_array_fget(v_moduleData_5813_, v_idx_5810_);
lean_dec_ref(v_moduleData_5813_);
v_constants_5838_ = lean_ctor_get(v_mdata_5837_, 2);
lean_inc_ref(v_constants_5838_);
lean_dec(v_mdata_5837_);
v___x_5839_ = lean_array_get_size(v_constants_5838_);
lean_dec_ref(v_constants_5838_);
v_cnt_5840_ = lean_nat_add(v_cnt_5809_, v___x_5839_);
lean_dec(v_cnt_5809_);
v___x_5841_ = lean_nat_dec_lt(v_constantsPerTask_5804_, v_cnt_5840_);
if (v___x_5841_ == 0)
{
lean_object* v___x_5842_; lean_object* v___x_5843_; 
v___x_5842_ = lean_unsigned_to_nat(1u);
v___x_5843_ = lean_nat_add(v_idx_5810_, v___x_5842_);
lean_dec(v_idx_5810_);
v_cnt_5809_ = v_cnt_5840_;
v_idx_5810_ = v___x_5843_;
goto _start;
}
else
{
lean_object* v_namePrefix_5845_; lean_object* v_idx_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5864_; 
lean_inc(v_toBind_5814_);
lean_dec(v_cnt_5840_);
v_namePrefix_5845_ = lean_ctor_get(v_ngen_5806_, 0);
v_idx_5846_ = lean_ctor_get(v_ngen_5806_, 1);
v_isSharedCheck_5864_ = !lean_is_exclusive(v_ngen_5806_);
if (v_isSharedCheck_5864_ == 0)
{
v___x_5848_ = v_ngen_5806_;
v_isShared_5849_ = v_isSharedCheck_5864_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_idx_5846_);
lean_inc(v_namePrefix_5845_);
lean_dec(v_ngen_5806_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5864_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5853_; 
lean_inc(v_idx_5846_);
lean_inc(v_namePrefix_5845_);
v___x_5850_ = l_Lean_Name_num___override(v_namePrefix_5845_, v_idx_5846_);
v___x_5851_ = lean_unsigned_to_nat(1u);
if (v_isShared_5849_ == 0)
{
lean_ctor_set(v___x_5848_, 1, v___x_5851_);
lean_ctor_set(v___x_5848_, 0, v___x_5850_);
v___x_5853_ = v___x_5848_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5863_; 
v_reuseFailAlloc_5863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5863_, 0, v___x_5850_);
lean_ctor_set(v_reuseFailAlloc_5863_, 1, v___x_5851_);
v___x_5853_ = v_reuseFailAlloc_5863_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___f_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; 
v___x_5854_ = lean_nat_add(v_idx_5846_, v___x_5851_);
lean_dec(v_idx_5846_);
v___x_5855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5855_, 0, v_namePrefix_5845_);
lean_ctor_set(v___x_5855_, 1, v___x_5854_);
v___x_5856_ = lean_nat_add(v_idx_5810_, v___x_5851_);
lean_dec(v_idx_5810_);
lean_inc(v___x_5856_);
lean_inc_ref(v_act_5803_);
lean_inc_ref(v_env_5802_);
lean_inc_ref(v_cctx_5801_);
lean_inc(v_inst_5800_);
v___f_5857_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1), 11, 10);
lean_closure_set(v___f_5857_, 0, v_tasks_5807_);
lean_closure_set(v___f_5857_, 1, v_inst_5799_);
lean_closure_set(v___f_5857_, 2, v_inst_5800_);
lean_closure_set(v___f_5857_, 3, v_cctx_5801_);
lean_closure_set(v___f_5857_, 4, v_env_5802_);
lean_closure_set(v___f_5857_, 5, v_act_5803_);
lean_closure_set(v___f_5857_, 6, v_constantsPerTask_5804_);
lean_closure_set(v___f_5857_, 7, v_n_5805_);
lean_closure_set(v___f_5857_, 8, v___x_5855_);
lean_closure_set(v___f_5857_, 9, v___x_5856_);
v___x_5858_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5858_, 0, lean_box(0));
lean_closure_set(v___x_5858_, 1, v_cctx_5801_);
lean_closure_set(v___x_5858_, 2, v___x_5853_);
lean_closure_set(v___x_5858_, 3, v_env_5802_);
lean_closure_set(v___x_5858_, 4, v_act_5803_);
lean_closure_set(v___x_5858_, 5, v_start_5808_);
lean_closure_set(v___x_5858_, 6, v___x_5856_);
v___x_5859_ = lean_unsigned_to_nat(0u);
v___x_5860_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5860_, 0, lean_box(0));
lean_closure_set(v___x_5860_, 1, v___x_5858_);
lean_closure_set(v___x_5860_, 2, v___x_5859_);
v___x_5861_ = lean_apply_2(v_inst_5800_, lean_box(0), v___x_5860_);
v___x_5862_ = lean_apply_4(v_toBind_5814_, lean_box(0), lean_box(0), v___x_5861_, v___f_5857_);
return v___x_5862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object* v_tasks_5865_, lean_object* v_inst_5866_, lean_object* v_inst_5867_, lean_object* v_cctx_5868_, lean_object* v_env_5869_, lean_object* v_act_5870_, lean_object* v_constantsPerTask_5871_, lean_object* v_n_5872_, lean_object* v___x_5873_, lean_object* v___x_5874_, lean_object* v_t_5875_){
_start:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
v___x_5876_ = lean_array_push(v_tasks_5865_, v_t_5875_);
v___x_5877_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_5874_);
v___x_5878_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5866_, v_inst_5867_, v_cctx_5868_, v_env_5869_, v_act_5870_, v_constantsPerTask_5871_, v_n_5872_, v___x_5873_, v___x_5876_, v___x_5874_, v___x_5877_, v___x_5874_);
return v___x_5878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object* v_m_5879_, lean_object* v_00_u03b1_5880_, lean_object* v_inst_5881_, lean_object* v_inst_5882_, lean_object* v_cctx_5883_, lean_object* v_env_5884_, lean_object* v_act_5885_, lean_object* v_constantsPerTask_5886_, lean_object* v_n_5887_, lean_object* v_ngen_5888_, lean_object* v_tasks_5889_, lean_object* v_start_5890_, lean_object* v_cnt_5891_, lean_object* v_idx_5892_){
_start:
{
lean_object* v___x_5893_; 
v___x_5893_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5881_, v_inst_5882_, v_cctx_5883_, v_env_5884_, v_act_5885_, v_constantsPerTask_5886_, v_n_5887_, v_ngen_5888_, v_tasks_5889_, v_start_5890_, v_cnt_5891_, v_idx_5892_);
return v___x_5893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object* v_x_5894_, lean_object* v_h__1_5895_){
_start:
{
lean_object* v_fst_5896_; lean_object* v_snd_5897_; lean_object* v___x_5898_; 
v_fst_5896_ = lean_ctor_get(v_x_5894_, 0);
lean_inc(v_fst_5896_);
v_snd_5897_ = lean_ctor_get(v_x_5894_, 1);
lean_inc(v_snd_5897_);
lean_dec_ref(v_x_5894_);
v___x_5898_ = lean_apply_2(v_h__1_5895_, v_fst_5896_, v_snd_5897_);
return v___x_5898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object* v_motive_5899_, lean_object* v_x_5900_, lean_object* v_h__1_5901_){
_start:
{
lean_object* v_fst_5902_; lean_object* v_snd_5903_; lean_object* v___x_5904_; 
v_fst_5902_ = lean_ctor_get(v_x_5900_, 0);
lean_inc(v_fst_5902_);
v_snd_5903_ = lean_ctor_get(v_x_5900_, 1);
lean_inc(v_snd_5903_);
lean_dec_ref(v_x_5900_);
v___x_5904_ = lean_apply_2(v_h__1_5901_, v_fst_5902_, v_snd_5903_);
return v___x_5904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object* v_inst_5905_, lean_object* v_inst_5906_, lean_object* v_inst_5907_, lean_object* v_inst_5908_, lean_object* v_x_5909_, lean_object* v___y_5910_){
_start:
{
lean_object* v___x_5911_; 
v___x_5911_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5905_, v_inst_5906_, v_inst_5907_, v_inst_5908_, v___y_5910_);
return v___x_5911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object* v_r_5912_, lean_object* v_toPure_5913_, lean_object* v_____r_5914_){
_start:
{
lean_object* v_tree_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; 
v_tree_5915_ = lean_ctor_get(v_r_5912_, 0);
lean_inc_ref(v_tree_5915_);
lean_dec(v_r_5912_);
v___x_5916_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_5915_);
v___x_5917_ = lean_apply_2(v_toPure_5913_, lean_box(0), v___x_5916_);
return v___x_5917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object* v___x_5918_, lean_object* v___x_5919_, lean_object* v_toPure_5920_, lean_object* v_toBind_5921_, lean_object* v_inst_5922_, lean_object* v___f_5923_, lean_object* v_tasks_5924_){
_start:
{
lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v_r_5930_; lean_object* v_errors_5931_; lean_object* v___f_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; uint8_t v___x_5935_; 
v___x_5925_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
lean_inc(v___x_5918_);
v___x_5926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5926_, 0, v___x_5918_);
lean_ctor_set(v___x_5926_, 1, v___x_5925_);
v___x_5927_ = lean_mk_empty_array_with_capacity(v___x_5918_);
lean_inc_ref(v___x_5927_);
v___x_5928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5928_, 0, v___x_5926_);
lean_ctor_set(v___x_5928_, 1, v___x_5927_);
v___x_5929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5929_, 0, v___x_5928_);
lean_ctor_set(v___x_5929_, 1, v___x_5927_);
v_r_5930_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v___x_5919_, v___x_5929_, v_tasks_5924_);
v_errors_5931_ = lean_ctor_get(v_r_5930_, 1);
lean_inc_ref(v_errors_5931_);
lean_inc(v_toPure_5920_);
v___f_5932_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5932_, 0, v_r_5930_);
lean_closure_set(v___f_5932_, 1, v_toPure_5920_);
v___x_5933_ = lean_array_get_size(v_errors_5931_);
v___x_5934_ = lean_box(0);
v___x_5935_ = lean_nat_dec_lt(v___x_5918_, v___x_5933_);
lean_dec(v___x_5918_);
if (v___x_5935_ == 0)
{
lean_object* v___x_5936_; lean_object* v___x_5937_; 
lean_dec_ref(v_errors_5931_);
lean_dec(v___f_5923_);
lean_dec_ref(v_inst_5922_);
v___x_5936_ = lean_apply_2(v_toPure_5920_, lean_box(0), v___x_5934_);
v___x_5937_ = lean_apply_4(v_toBind_5921_, lean_box(0), lean_box(0), v___x_5936_, v___f_5932_);
return v___x_5937_;
}
else
{
uint8_t v___x_5938_; 
v___x_5938_ = lean_nat_dec_le(v___x_5933_, v___x_5933_);
if (v___x_5938_ == 0)
{
if (v___x_5935_ == 0)
{
lean_object* v___x_5939_; lean_object* v___x_5940_; 
lean_dec_ref(v_errors_5931_);
lean_dec(v___f_5923_);
lean_dec_ref(v_inst_5922_);
v___x_5939_ = lean_apply_2(v_toPure_5920_, lean_box(0), v___x_5934_);
v___x_5940_ = lean_apply_4(v_toBind_5921_, lean_box(0), lean_box(0), v___x_5939_, v___f_5932_);
return v___x_5940_;
}
else
{
size_t v___x_5941_; size_t v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; 
lean_dec(v_toPure_5920_);
v___x_5941_ = ((size_t)0ULL);
v___x_5942_ = lean_usize_of_nat(v___x_5933_);
v___x_5943_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5922_, v___f_5923_, v_errors_5931_, v___x_5941_, v___x_5942_, v___x_5934_);
v___x_5944_ = lean_apply_4(v_toBind_5921_, lean_box(0), lean_box(0), v___x_5943_, v___f_5932_);
return v___x_5944_;
}
}
else
{
size_t v___x_5945_; size_t v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; 
lean_dec(v_toPure_5920_);
v___x_5945_ = ((size_t)0ULL);
v___x_5946_ = lean_usize_of_nat(v___x_5933_);
v___x_5947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5922_, v___f_5923_, v_errors_5931_, v___x_5945_, v___x_5946_, v___x_5934_);
v___x_5948_ = lean_apply_4(v_toBind_5921_, lean_box(0), lean_box(0), v___x_5947_, v___f_5932_);
return v___x_5948_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object* v_inst_5951_, lean_object* v_inst_5952_, lean_object* v_inst_5953_, lean_object* v_inst_5954_, lean_object* v_inst_5955_, lean_object* v_cctx_5956_, lean_object* v_ngen_5957_, lean_object* v_env_5958_, lean_object* v_act_5959_, lean_object* v_constantsPerTask_5960_){
_start:
{
lean_object* v___x_5961_; lean_object* v_moduleData_5962_; lean_object* v_toApplicative_5963_; lean_object* v_toBind_5964_; lean_object* v_n_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v_toPure_5969_; lean_object* v___f_5970_; lean_object* v___x_5971_; lean_object* v___f_5972_; lean_object* v___x_5973_; 
v___x_5961_ = l_Lean_Environment_header(v_env_5958_);
v_moduleData_5962_ = lean_ctor_get(v___x_5961_, 6);
lean_inc_ref(v_moduleData_5962_);
lean_dec_ref(v___x_5961_);
v_toApplicative_5963_ = lean_ctor_get(v_inst_5951_, 0);
v_toBind_5964_ = lean_ctor_get(v_inst_5951_, 1);
lean_inc_n(v_toBind_5964_, 2);
v_n_5965_ = lean_array_get_size(v_moduleData_5962_);
lean_dec_ref(v_moduleData_5962_);
v___x_5966_ = lean_unsigned_to_nat(0u);
v___x_5967_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
lean_inc_ref_n(v_inst_5951_, 2);
v___x_5968_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5951_, v_inst_5955_, v_cctx_5956_, v_env_5958_, v_act_5959_, v_constantsPerTask_5960_, v_n_5965_, v_ngen_5957_, v___x_5967_, v___x_5966_, v___x_5966_, v___x_5966_);
v_toPure_5969_ = lean_ctor_get(v_toApplicative_5963_, 1);
lean_inc(v_toPure_5969_);
v___f_5970_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0), 6, 4);
lean_closure_set(v___f_5970_, 0, v_inst_5951_);
lean_closure_set(v___f_5970_, 1, v_inst_5952_);
lean_closure_set(v___f_5970_, 2, v_inst_5953_);
lean_closure_set(v___f_5970_, 3, v_inst_5954_);
v___x_5971_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
v___f_5972_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2), 7, 6);
lean_closure_set(v___f_5972_, 0, v___x_5966_);
lean_closure_set(v___f_5972_, 1, v___x_5971_);
lean_closure_set(v___f_5972_, 2, v_toPure_5969_);
lean_closure_set(v___f_5972_, 3, v_toBind_5964_);
lean_closure_set(v___f_5972_, 4, v_inst_5951_);
lean_closure_set(v___f_5972_, 5, v___f_5970_);
v___x_5973_ = lean_apply_4(v_toBind_5964_, lean_box(0), lean_box(0), v___x_5968_, v___f_5972_);
return v___x_5973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object* v_m_5974_, lean_object* v_00_u03b1_5975_, lean_object* v_inst_5976_, lean_object* v_inst_5977_, lean_object* v_inst_5978_, lean_object* v_inst_5979_, lean_object* v_inst_5980_, lean_object* v_cctx_5981_, lean_object* v_ngen_5982_, lean_object* v_env_5983_, lean_object* v_act_5984_, lean_object* v_constantsPerTask_5985_){
_start:
{
lean_object* v___x_5986_; 
v___x_5986_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(v_inst_5976_, v_inst_5977_, v_inst_5978_, v_inst_5979_, v_inst_5980_, v_cctx_5981_, v_ngen_5982_, v_env_5983_, v_act_5984_, v_constantsPerTask_5985_);
return v___x_5986_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0(void){
_start:
{
lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
v___x_5987_ = lean_box(0);
v___x_5988_ = lean_unsigned_to_nat(16u);
v___x_5989_ = lean_mk_array(v___x_5988_, v___x_5987_);
return v___x_5989_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1(void){
_start:
{
lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
v___x_5990_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0);
v___x_5991_ = lean_unsigned_to_nat(0u);
v___x_5992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5992_, 0, v___x_5991_);
lean_ctor_set(v___x_5992_, 1, v___x_5990_);
return v___x_5992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object* v_ctx_5993_){
_start:
{
lean_object* v_toCold_5994_; lean_object* v_ref_5995_; lean_object* v___x_5997_; uint8_t v_isShared_5998_; uint8_t v_isSharedCheck_6029_; 
v_toCold_5994_ = lean_ctor_get(v_ctx_5993_, 0);
v_ref_5995_ = lean_ctor_get(v_ctx_5993_, 2);
v_isSharedCheck_6029_ = !lean_is_exclusive(v_ctx_5993_);
if (v_isSharedCheck_6029_ == 0)
{
lean_object* v_unused_6030_; 
v_unused_6030_ = lean_ctor_get(v_ctx_5993_, 1);
lean_dec(v_unused_6030_);
v___x_5997_ = v_ctx_5993_;
v_isShared_5998_ = v_isSharedCheck_6029_;
goto v_resetjp_5996_;
}
else
{
lean_inc(v_ref_5995_);
lean_inc(v_toCold_5994_);
lean_dec(v_ctx_5993_);
v___x_5997_ = lean_box(0);
v_isShared_5998_ = v_isSharedCheck_6029_;
goto v_resetjp_5996_;
}
v_resetjp_5996_:
{
lean_object* v_fileName_5999_; lean_object* v_fileMap_6000_; lean_object* v_options_6001_; lean_object* v_maxRecDepth_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6020_; 
v_fileName_5999_ = lean_ctor_get(v_toCold_5994_, 0);
v_fileMap_6000_ = lean_ctor_get(v_toCold_5994_, 1);
v_options_6001_ = lean_ctor_get(v_toCold_5994_, 2);
v_maxRecDepth_6002_ = lean_ctor_get(v_toCold_5994_, 3);
v_isSharedCheck_6020_ = !lean_is_exclusive(v_toCold_5994_);
if (v_isSharedCheck_6020_ == 0)
{
lean_object* v_unused_6021_; lean_object* v_unused_6022_; lean_object* v_unused_6023_; lean_object* v_unused_6024_; lean_object* v_unused_6025_; lean_object* v_unused_6026_; lean_object* v_unused_6027_; lean_object* v_unused_6028_; 
v_unused_6021_ = lean_ctor_get(v_toCold_5994_, 11);
lean_dec(v_unused_6021_);
v_unused_6022_ = lean_ctor_get(v_toCold_5994_, 10);
lean_dec(v_unused_6022_);
v_unused_6023_ = lean_ctor_get(v_toCold_5994_, 9);
lean_dec(v_unused_6023_);
v_unused_6024_ = lean_ctor_get(v_toCold_5994_, 8);
lean_dec(v_unused_6024_);
v_unused_6025_ = lean_ctor_get(v_toCold_5994_, 7);
lean_dec(v_unused_6025_);
v_unused_6026_ = lean_ctor_get(v_toCold_5994_, 6);
lean_dec(v_unused_6026_);
v_unused_6027_ = lean_ctor_get(v_toCold_5994_, 5);
lean_dec(v_unused_6027_);
v_unused_6028_ = lean_ctor_get(v_toCold_5994_, 4);
lean_dec(v_unused_6028_);
v___x_6004_ = v_toCold_5994_;
v_isShared_6005_ = v_isSharedCheck_6020_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_maxRecDepth_6002_);
lean_inc(v_options_6001_);
lean_inc(v_fileMap_6000_);
lean_inc(v_fileName_5999_);
lean_dec(v_toCold_5994_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6020_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6013_; 
v___x_6006_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_6007_ = lean_box(0);
v___x_6008_ = lean_unsigned_to_nat(0u);
v___x_6009_ = l_Lean_firstFrontendMacroScope;
v___x_6010_ = lean_box(0);
v___x_6011_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1);
lean_inc_ref(v_options_6001_);
if (v_isShared_6005_ == 0)
{
lean_ctor_set(v___x_6004_, 11, v___x_6011_);
lean_ctor_set(v___x_6004_, 10, v___x_6010_);
lean_ctor_set(v___x_6004_, 9, v___x_6009_);
lean_ctor_set(v___x_6004_, 8, v___x_6006_);
lean_ctor_set(v___x_6004_, 7, v___x_6008_);
lean_ctor_set(v___x_6004_, 6, v___x_6008_);
lean_ctor_set(v___x_6004_, 5, v___x_6007_);
lean_ctor_set(v___x_6004_, 4, v___x_6006_);
v___x_6013_ = v___x_6004_;
goto v_reusejp_6012_;
}
else
{
lean_object* v_reuseFailAlloc_6019_; 
v_reuseFailAlloc_6019_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_6019_, 0, v_fileName_5999_);
lean_ctor_set(v_reuseFailAlloc_6019_, 1, v_fileMap_6000_);
lean_ctor_set(v_reuseFailAlloc_6019_, 2, v_options_6001_);
lean_ctor_set(v_reuseFailAlloc_6019_, 3, v_maxRecDepth_6002_);
lean_ctor_set(v_reuseFailAlloc_6019_, 4, v___x_6006_);
lean_ctor_set(v_reuseFailAlloc_6019_, 5, v___x_6007_);
lean_ctor_set(v_reuseFailAlloc_6019_, 6, v___x_6008_);
lean_ctor_set(v_reuseFailAlloc_6019_, 7, v___x_6008_);
lean_ctor_set(v_reuseFailAlloc_6019_, 8, v___x_6006_);
lean_ctor_set(v_reuseFailAlloc_6019_, 9, v___x_6009_);
lean_ctor_set(v_reuseFailAlloc_6019_, 10, v___x_6010_);
lean_ctor_set(v_reuseFailAlloc_6019_, 11, v___x_6011_);
v___x_6013_ = v_reuseFailAlloc_6019_;
goto v_reusejp_6012_;
}
v_reusejp_6012_:
{
uint8_t v___x_6014_; uint8_t v___x_6015_; lean_object* v___x_6017_; 
v___x_6014_ = l_Lean_getDiag(v_options_6001_);
lean_dec_ref(v_options_6001_);
v___x_6015_ = 0;
if (v_isShared_5998_ == 0)
{
lean_ctor_set(v___x_5997_, 1, v___x_6008_);
lean_ctor_set(v___x_5997_, 0, v___x_6013_);
v___x_6017_ = v___x_5997_;
goto v_reusejp_6016_;
}
else
{
lean_object* v_reuseFailAlloc_6018_; 
v_reuseFailAlloc_6018_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6018_, 0, v___x_6013_);
lean_ctor_set(v_reuseFailAlloc_6018_, 1, v___x_6008_);
lean_ctor_set(v_reuseFailAlloc_6018_, 2, v_ref_5995_);
v___x_6017_ = v_reuseFailAlloc_6018_;
goto v_reusejp_6016_;
}
v_reusejp_6016_:
{
lean_ctor_set_uint8(v___x_6017_, sizeof(void*)*3, v___x_6014_);
lean_ctor_set_uint8(v___x_6017_, sizeof(void*)*3 + 1, v___x_6015_);
return v___x_6017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object* v_category_6031_, lean_object* v_opts_6032_, lean_object* v_act_6033_, lean_object* v_decl_6034_, lean_object* v___y_6035_, lean_object* v___y_6036_, lean_object* v___y_6037_, lean_object* v___y_6038_){
_start:
{
lean_object* v___x_6040_; lean_object* v___x_6041_; 
lean_inc(v___y_6038_);
lean_inc_ref(v___y_6037_);
lean_inc(v___y_6036_);
lean_inc_ref(v___y_6035_);
v___x_6040_ = lean_apply_4(v_act_6033_, v___y_6035_, v___y_6036_, v___y_6037_, v___y_6038_);
v___x_6041_ = l_Lean_profileitIOUnsafe___redArg(v_category_6031_, v_opts_6032_, v___x_6040_, v_decl_6034_);
return v___x_6041_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object* v_category_6042_, lean_object* v_opts_6043_, lean_object* v_act_6044_, lean_object* v_decl_6045_, lean_object* v___y_6046_, lean_object* v___y_6047_, lean_object* v___y_6048_, lean_object* v___y_6049_, lean_object* v___y_6050_){
_start:
{
lean_object* v_res_6051_; 
v_res_6051_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_6042_, v_opts_6043_, v_act_6044_, v_decl_6045_, v___y_6046_, v___y_6047_, v___y_6048_, v___y_6049_);
lean_dec(v___y_6049_);
lean_dec_ref(v___y_6048_);
lean_dec(v___y_6047_);
lean_dec_ref(v___y_6046_);
lean_dec_ref(v_opts_6043_);
lean_dec_ref(v_category_6042_);
return v_res_6051_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object* v_00_u03b1_6052_, lean_object* v_category_6053_, lean_object* v_opts_6054_, lean_object* v_act_6055_, lean_object* v_decl_6056_, lean_object* v___y_6057_, lean_object* v___y_6058_, lean_object* v___y_6059_, lean_object* v___y_6060_){
_start:
{
lean_object* v___x_6062_; 
v___x_6062_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_6053_, v_opts_6054_, v_act_6055_, v_decl_6056_, v___y_6057_, v___y_6058_, v___y_6059_, v___y_6060_);
return v___x_6062_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object* v_00_u03b1_6063_, lean_object* v_category_6064_, lean_object* v_opts_6065_, lean_object* v_act_6066_, lean_object* v_decl_6067_, lean_object* v___y_6068_, lean_object* v___y_6069_, lean_object* v___y_6070_, lean_object* v___y_6071_, lean_object* v___y_6072_){
_start:
{
lean_object* v_res_6073_; 
v_res_6073_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(v_00_u03b1_6063_, v_category_6064_, v_opts_6065_, v_act_6066_, v_decl_6067_, v___y_6068_, v___y_6069_, v___y_6070_, v___y_6071_);
lean_dec(v___y_6071_);
lean_dec_ref(v___y_6070_);
lean_dec(v___y_6069_);
lean_dec_ref(v___y_6068_);
lean_dec_ref(v_opts_6065_);
lean_dec_ref(v_category_6064_);
return v_res_6073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object* v_cctx_6074_, lean_object* v_env_6075_, lean_object* v_act_6076_, lean_object* v_constantsPerTask_6077_, lean_object* v_n_6078_, lean_object* v_ngen_6079_, lean_object* v_tasks_6080_, lean_object* v_start_6081_, lean_object* v_cnt_6082_, lean_object* v_idx_6083_){
_start:
{
lean_object* v___x_6085_; lean_object* v_moduleData_6086_; lean_object* v___x_6087_; uint8_t v___x_6088_; 
v___x_6085_ = l_Lean_Environment_header(v_env_6075_);
v_moduleData_6086_ = lean_ctor_get(v___x_6085_, 6);
lean_inc_ref(v_moduleData_6086_);
lean_dec_ref(v___x_6085_);
v___x_6087_ = lean_array_get_size(v_moduleData_6086_);
v___x_6088_ = lean_nat_dec_lt(v_idx_6083_, v___x_6087_);
if (v___x_6088_ == 0)
{
uint8_t v___x_6089_; 
lean_dec_ref(v_moduleData_6086_);
lean_dec(v_idx_6083_);
lean_dec(v_cnt_6082_);
v___x_6089_ = lean_nat_dec_lt(v_start_6081_, v_n_6078_);
if (v___x_6089_ == 0)
{
lean_object* v___x_6090_; 
lean_dec(v_start_6081_);
lean_dec_ref(v_ngen_6079_);
lean_dec(v_n_6078_);
lean_dec_ref(v_act_6076_);
lean_dec_ref(v_env_6075_);
lean_dec_ref(v_cctx_6074_);
v___x_6090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6090_, 0, v_tasks_6080_);
return v___x_6090_;
}
else
{
lean_object* v_namePrefix_6091_; lean_object* v_idx_6092_; lean_object* v___x_6094_; uint8_t v_isShared_6095_; uint8_t v_isSharedCheck_6106_; 
v_namePrefix_6091_ = lean_ctor_get(v_ngen_6079_, 0);
v_idx_6092_ = lean_ctor_get(v_ngen_6079_, 1);
v_isSharedCheck_6106_ = !lean_is_exclusive(v_ngen_6079_);
if (v_isSharedCheck_6106_ == 0)
{
v___x_6094_ = v_ngen_6079_;
v_isShared_6095_ = v_isSharedCheck_6106_;
goto v_resetjp_6093_;
}
else
{
lean_inc(v_idx_6092_);
lean_inc(v_namePrefix_6091_);
lean_dec(v_ngen_6079_);
v___x_6094_ = lean_box(0);
v_isShared_6095_ = v_isSharedCheck_6106_;
goto v_resetjp_6093_;
}
v_resetjp_6093_:
{
lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6099_; 
v___x_6096_ = l_Lean_Name_num___override(v_namePrefix_6091_, v_idx_6092_);
v___x_6097_ = lean_unsigned_to_nat(1u);
if (v_isShared_6095_ == 0)
{
lean_ctor_set(v___x_6094_, 1, v___x_6097_);
lean_ctor_set(v___x_6094_, 0, v___x_6096_);
v___x_6099_ = v___x_6094_;
goto v_reusejp_6098_;
}
else
{
lean_object* v_reuseFailAlloc_6105_; 
v_reuseFailAlloc_6105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6105_, 0, v___x_6096_);
lean_ctor_set(v_reuseFailAlloc_6105_, 1, v___x_6097_);
v___x_6099_ = v_reuseFailAlloc_6105_;
goto v_reusejp_6098_;
}
v_reusejp_6098_:
{
lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; 
v___x_6100_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6100_, 0, lean_box(0));
lean_closure_set(v___x_6100_, 1, v_cctx_6074_);
lean_closure_set(v___x_6100_, 2, v___x_6099_);
lean_closure_set(v___x_6100_, 3, v_env_6075_);
lean_closure_set(v___x_6100_, 4, v_act_6076_);
lean_closure_set(v___x_6100_, 5, v_start_6081_);
lean_closure_set(v___x_6100_, 6, v_n_6078_);
v___x_6101_ = lean_unsigned_to_nat(0u);
v___x_6102_ = lean_io_as_task(v___x_6100_, v___x_6101_);
v___x_6103_ = lean_array_push(v_tasks_6080_, v___x_6102_);
v___x_6104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6104_, 0, v___x_6103_);
return v___x_6104_;
}
}
}
}
else
{
lean_object* v_mdata_6107_; lean_object* v_constants_6108_; lean_object* v___x_6109_; lean_object* v_cnt_6110_; uint8_t v___x_6111_; 
v_mdata_6107_ = lean_array_fget(v_moduleData_6086_, v_idx_6083_);
lean_dec_ref(v_moduleData_6086_);
v_constants_6108_ = lean_ctor_get(v_mdata_6107_, 2);
lean_inc_ref(v_constants_6108_);
lean_dec(v_mdata_6107_);
v___x_6109_ = lean_array_get_size(v_constants_6108_);
lean_dec_ref(v_constants_6108_);
v_cnt_6110_ = lean_nat_add(v_cnt_6082_, v___x_6109_);
lean_dec(v_cnt_6082_);
v___x_6111_ = lean_nat_dec_lt(v_constantsPerTask_6077_, v_cnt_6110_);
if (v___x_6111_ == 0)
{
lean_object* v___x_6112_; lean_object* v___x_6113_; 
v___x_6112_ = lean_unsigned_to_nat(1u);
v___x_6113_ = lean_nat_add(v_idx_6083_, v___x_6112_);
lean_dec(v_idx_6083_);
v_cnt_6082_ = v_cnt_6110_;
v_idx_6083_ = v___x_6113_;
goto _start;
}
else
{
lean_object* v_namePrefix_6115_; lean_object* v_idx_6116_; lean_object* v___x_6118_; uint8_t v_isShared_6119_; uint8_t v_isSharedCheck_6133_; 
lean_dec(v_cnt_6110_);
v_namePrefix_6115_ = lean_ctor_get(v_ngen_6079_, 0);
v_idx_6116_ = lean_ctor_get(v_ngen_6079_, 1);
v_isSharedCheck_6133_ = !lean_is_exclusive(v_ngen_6079_);
if (v_isSharedCheck_6133_ == 0)
{
v___x_6118_ = v_ngen_6079_;
v_isShared_6119_ = v_isSharedCheck_6133_;
goto v_resetjp_6117_;
}
else
{
lean_inc(v_idx_6116_);
lean_inc(v_namePrefix_6115_);
lean_dec(v_ngen_6079_);
v___x_6118_ = lean_box(0);
v_isShared_6119_ = v_isSharedCheck_6133_;
goto v_resetjp_6117_;
}
v_resetjp_6117_:
{
lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6123_; 
lean_inc(v_idx_6116_);
lean_inc(v_namePrefix_6115_);
v___x_6120_ = l_Lean_Name_num___override(v_namePrefix_6115_, v_idx_6116_);
v___x_6121_ = lean_unsigned_to_nat(1u);
if (v_isShared_6119_ == 0)
{
lean_ctor_set(v___x_6118_, 1, v___x_6121_);
lean_ctor_set(v___x_6118_, 0, v___x_6120_);
v___x_6123_ = v___x_6118_;
goto v_reusejp_6122_;
}
else
{
lean_object* v_reuseFailAlloc_6132_; 
v_reuseFailAlloc_6132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6132_, 0, v___x_6120_);
lean_ctor_set(v_reuseFailAlloc_6132_, 1, v___x_6121_);
v___x_6123_ = v_reuseFailAlloc_6132_;
goto v_reusejp_6122_;
}
v_reusejp_6122_:
{
lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; 
v___x_6124_ = lean_nat_add(v_idx_6116_, v___x_6121_);
lean_dec(v_idx_6116_);
v___x_6125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6125_, 0, v_namePrefix_6115_);
lean_ctor_set(v___x_6125_, 1, v___x_6124_);
v___x_6126_ = lean_nat_add(v_idx_6083_, v___x_6121_);
lean_dec(v_idx_6083_);
lean_inc_n(v___x_6126_, 2);
lean_inc_ref(v_act_6076_);
lean_inc_ref(v_env_6075_);
lean_inc_ref(v_cctx_6074_);
v___x_6127_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6127_, 0, lean_box(0));
lean_closure_set(v___x_6127_, 1, v_cctx_6074_);
lean_closure_set(v___x_6127_, 2, v___x_6123_);
lean_closure_set(v___x_6127_, 3, v_env_6075_);
lean_closure_set(v___x_6127_, 4, v_act_6076_);
lean_closure_set(v___x_6127_, 5, v_start_6081_);
lean_closure_set(v___x_6127_, 6, v___x_6126_);
v___x_6128_ = lean_unsigned_to_nat(0u);
v___x_6129_ = lean_io_as_task(v___x_6127_, v___x_6128_);
v___x_6130_ = lean_array_push(v_tasks_6080_, v___x_6129_);
v_ngen_6079_ = v___x_6125_;
v_tasks_6080_ = v___x_6130_;
v_start_6081_ = v___x_6126_;
v_cnt_6082_ = v___x_6128_;
v_idx_6083_ = v___x_6126_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object* v_cctx_6134_, lean_object* v_env_6135_, lean_object* v_act_6136_, lean_object* v_constantsPerTask_6137_, lean_object* v_n_6138_, lean_object* v_ngen_6139_, lean_object* v_tasks_6140_, lean_object* v_start_6141_, lean_object* v_cnt_6142_, lean_object* v_idx_6143_, lean_object* v___y_6144_){
_start:
{
lean_object* v_res_6145_; 
v_res_6145_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6134_, v_env_6135_, v_act_6136_, v_constantsPerTask_6137_, v_n_6138_, v_ngen_6139_, v_tasks_6140_, v_start_6141_, v_cnt_6142_, v_idx_6143_);
lean_dec(v_constantsPerTask_6137_);
return v_res_6145_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t v_suppressElabErrors_6154_, uint8_t v___y_6155_, lean_object* v_x_6156_){
_start:
{
if (lean_obj_tag(v_x_6156_) == 1)
{
lean_object* v_pre_6157_; 
v_pre_6157_ = lean_ctor_get(v_x_6156_, 0);
switch(lean_obj_tag(v_pre_6157_))
{
case 1:
{
lean_object* v_pre_6158_; 
v_pre_6158_ = lean_ctor_get(v_pre_6157_, 0);
switch(lean_obj_tag(v_pre_6158_))
{
case 0:
{
lean_object* v_str_6159_; lean_object* v_str_6160_; lean_object* v___x_6161_; uint8_t v___x_6162_; 
v_str_6159_ = lean_ctor_get(v_x_6156_, 1);
v_str_6160_ = lean_ctor_get(v_pre_6157_, 1);
v___x_6161_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0));
v___x_6162_ = lean_string_dec_eq(v_str_6160_, v___x_6161_);
if (v___x_6162_ == 0)
{
lean_object* v___x_6163_; uint8_t v___x_6164_; 
v___x_6163_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1));
v___x_6164_ = lean_string_dec_eq(v_str_6160_, v___x_6163_);
if (v___x_6164_ == 0)
{
return v___x_6164_;
}
else
{
lean_object* v___x_6165_; uint8_t v___x_6166_; 
v___x_6165_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2));
v___x_6166_ = lean_string_dec_eq(v_str_6159_, v___x_6165_);
if (v___x_6166_ == 0)
{
return v___x_6166_;
}
else
{
return v_suppressElabErrors_6154_;
}
}
}
else
{
lean_object* v___x_6167_; uint8_t v___x_6168_; 
v___x_6167_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3));
v___x_6168_ = lean_string_dec_eq(v_str_6159_, v___x_6167_);
if (v___x_6168_ == 0)
{
return v___x_6168_;
}
else
{
return v_suppressElabErrors_6154_;
}
}
}
case 1:
{
lean_object* v_pre_6169_; 
v_pre_6169_ = lean_ctor_get(v_pre_6158_, 0);
if (lean_obj_tag(v_pre_6169_) == 0)
{
lean_object* v_str_6170_; lean_object* v_str_6171_; lean_object* v_str_6172_; lean_object* v___x_6173_; uint8_t v___x_6174_; 
v_str_6170_ = lean_ctor_get(v_x_6156_, 1);
v_str_6171_ = lean_ctor_get(v_pre_6157_, 1);
v_str_6172_ = lean_ctor_get(v_pre_6158_, 1);
v___x_6173_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4));
v___x_6174_ = lean_string_dec_eq(v_str_6172_, v___x_6173_);
if (v___x_6174_ == 0)
{
return v___x_6174_;
}
else
{
lean_object* v___x_6175_; uint8_t v___x_6176_; 
v___x_6175_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5));
v___x_6176_ = lean_string_dec_eq(v_str_6171_, v___x_6175_);
if (v___x_6176_ == 0)
{
return v___x_6176_;
}
else
{
lean_object* v___x_6177_; uint8_t v___x_6178_; 
v___x_6177_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6));
v___x_6178_ = lean_string_dec_eq(v_str_6170_, v___x_6177_);
if (v___x_6178_ == 0)
{
return v___x_6178_;
}
else
{
return v_suppressElabErrors_6154_;
}
}
}
}
else
{
return v___y_6155_;
}
}
default: 
{
return v___y_6155_;
}
}
}
case 0:
{
lean_object* v_str_6179_; lean_object* v___x_6180_; uint8_t v___x_6181_; 
v_str_6179_ = lean_ctor_get(v_x_6156_, 1);
v___x_6180_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7));
v___x_6181_ = lean_string_dec_eq(v_str_6179_, v___x_6180_);
if (v___x_6181_ == 0)
{
return v___x_6181_;
}
else
{
return v_suppressElabErrors_6154_;
}
}
default: 
{
return v___y_6155_;
}
}
}
else
{
return v___y_6155_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object* v_suppressElabErrors_6182_, lean_object* v___y_6183_, lean_object* v_x_6184_){
_start:
{
uint8_t v_suppressElabErrors_boxed_6185_; uint8_t v___y_8136__boxed_6186_; uint8_t v_res_6187_; lean_object* v_r_6188_; 
v_suppressElabErrors_boxed_6185_ = lean_unbox(v_suppressElabErrors_6182_);
v___y_8136__boxed_6186_ = lean_unbox(v___y_6183_);
v_res_6187_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(v_suppressElabErrors_boxed_6185_, v___y_8136__boxed_6186_, v_x_6184_);
lean_dec(v_x_6184_);
v_r_6188_ = lean_box(v_res_6187_);
return v_r_6188_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object* v_ref_6190_, lean_object* v_msgData_6191_, uint8_t v_severity_6192_, uint8_t v_isSilent_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_, lean_object* v___y_6197_){
_start:
{
lean_object* v___y_6200_; lean_object* v___y_6201_; uint8_t v___y_6202_; lean_object* v___y_6203_; lean_object* v___y_6204_; uint8_t v___y_6205_; lean_object* v___y_6206_; lean_object* v_currNamespace_6207_; lean_object* v_openDecls_6208_; lean_object* v___y_6209_; lean_object* v___y_6235_; lean_object* v___y_6236_; lean_object* v___y_6237_; lean_object* v___y_6238_; uint8_t v___y_6239_; uint8_t v___y_6240_; lean_object* v___y_6241_; uint8_t v___y_6242_; lean_object* v___y_6243_; lean_object* v___y_6244_; lean_object* v___y_6262_; lean_object* v___y_6263_; lean_object* v___y_6264_; lean_object* v___y_6265_; lean_object* v___y_6266_; uint8_t v___y_6267_; lean_object* v___y_6268_; uint8_t v___y_6269_; uint8_t v___y_6270_; lean_object* v___y_6271_; lean_object* v___y_6275_; lean_object* v___y_6276_; lean_object* v___y_6277_; lean_object* v___y_6278_; lean_object* v___y_6279_; uint8_t v___y_6280_; lean_object* v___y_6281_; uint8_t v___y_6282_; uint8_t v___y_6283_; uint8_t v___x_6288_; lean_object* v___y_6290_; lean_object* v___y_6291_; lean_object* v___y_6292_; lean_object* v___y_6293_; lean_object* v___y_6294_; lean_object* v___y_6295_; uint8_t v___y_6296_; uint8_t v___y_6297_; uint8_t v___y_6298_; uint8_t v___y_6300_; uint8_t v___x_6318_; 
v___x_6288_ = 2;
v___x_6318_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6192_, v___x_6288_);
if (v___x_6318_ == 0)
{
v___y_6300_ = v___x_6318_;
goto v___jp_6299_;
}
else
{
uint8_t v___x_6319_; 
lean_inc_ref(v_msgData_6191_);
v___x_6319_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6191_);
v___y_6300_ = v___x_6319_;
goto v___jp_6299_;
}
v___jp_6199_:
{
lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v_env_6214_; lean_object* v_nextMacroScope_6215_; lean_object* v_ngen_6216_; lean_object* v_auxDeclNGen_6217_; lean_object* v_traceState_6218_; lean_object* v_cache_6219_; lean_object* v_messages_6220_; lean_object* v_infoState_6221_; lean_object* v_snapshotTasks_6222_; lean_object* v___x_6224_; uint8_t v_isShared_6225_; uint8_t v_isSharedCheck_6233_; 
lean_inc(v_openDecls_6208_);
lean_inc(v_currNamespace_6207_);
v___x_6210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6210_, 0, v_currNamespace_6207_);
lean_ctor_set(v___x_6210_, 1, v_openDecls_6208_);
v___x_6211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6211_, 0, v___x_6210_);
lean_ctor_set(v___x_6211_, 1, v___y_6201_);
lean_inc_ref(v___y_6206_);
lean_inc_ref(v___y_6203_);
v___x_6212_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6212_, 0, v___y_6203_);
lean_ctor_set(v___x_6212_, 1, v___y_6200_);
lean_ctor_set(v___x_6212_, 2, v___y_6204_);
lean_ctor_set(v___x_6212_, 3, v___y_6206_);
lean_ctor_set(v___x_6212_, 4, v___x_6211_);
lean_ctor_set_uint8(v___x_6212_, sizeof(void*)*5, v___y_6205_);
lean_ctor_set_uint8(v___x_6212_, sizeof(void*)*5 + 1, v___y_6202_);
lean_ctor_set_uint8(v___x_6212_, sizeof(void*)*5 + 2, v_isSilent_6193_);
v___x_6213_ = lean_st_ref_take(v___y_6209_);
v_env_6214_ = lean_ctor_get(v___x_6213_, 0);
v_nextMacroScope_6215_ = lean_ctor_get(v___x_6213_, 1);
v_ngen_6216_ = lean_ctor_get(v___x_6213_, 2);
v_auxDeclNGen_6217_ = lean_ctor_get(v___x_6213_, 3);
v_traceState_6218_ = lean_ctor_get(v___x_6213_, 4);
v_cache_6219_ = lean_ctor_get(v___x_6213_, 5);
v_messages_6220_ = lean_ctor_get(v___x_6213_, 6);
v_infoState_6221_ = lean_ctor_get(v___x_6213_, 7);
v_snapshotTasks_6222_ = lean_ctor_get(v___x_6213_, 8);
v_isSharedCheck_6233_ = !lean_is_exclusive(v___x_6213_);
if (v_isSharedCheck_6233_ == 0)
{
v___x_6224_ = v___x_6213_;
v_isShared_6225_ = v_isSharedCheck_6233_;
goto v_resetjp_6223_;
}
else
{
lean_inc(v_snapshotTasks_6222_);
lean_inc(v_infoState_6221_);
lean_inc(v_messages_6220_);
lean_inc(v_cache_6219_);
lean_inc(v_traceState_6218_);
lean_inc(v_auxDeclNGen_6217_);
lean_inc(v_ngen_6216_);
lean_inc(v_nextMacroScope_6215_);
lean_inc(v_env_6214_);
lean_dec(v___x_6213_);
v___x_6224_ = lean_box(0);
v_isShared_6225_ = v_isSharedCheck_6233_;
goto v_resetjp_6223_;
}
v_resetjp_6223_:
{
lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6229_; 
v___x_6226_ = lean_box(0);
v___x_6227_ = l_Lean_MessageLog_add(v___x_6212_, v_messages_6220_);
if (v_isShared_6225_ == 0)
{
lean_ctor_set(v___x_6224_, 6, v___x_6227_);
v___x_6229_ = v___x_6224_;
goto v_reusejp_6228_;
}
else
{
lean_object* v_reuseFailAlloc_6232_; 
v_reuseFailAlloc_6232_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6232_, 0, v_env_6214_);
lean_ctor_set(v_reuseFailAlloc_6232_, 1, v_nextMacroScope_6215_);
lean_ctor_set(v_reuseFailAlloc_6232_, 2, v_ngen_6216_);
lean_ctor_set(v_reuseFailAlloc_6232_, 3, v_auxDeclNGen_6217_);
lean_ctor_set(v_reuseFailAlloc_6232_, 4, v_traceState_6218_);
lean_ctor_set(v_reuseFailAlloc_6232_, 5, v_cache_6219_);
lean_ctor_set(v_reuseFailAlloc_6232_, 6, v___x_6227_);
lean_ctor_set(v_reuseFailAlloc_6232_, 7, v_infoState_6221_);
lean_ctor_set(v_reuseFailAlloc_6232_, 8, v_snapshotTasks_6222_);
v___x_6229_ = v_reuseFailAlloc_6232_;
goto v_reusejp_6228_;
}
v_reusejp_6228_:
{
lean_object* v___x_6230_; lean_object* v___x_6231_; 
v___x_6230_ = lean_st_ref_put(v___y_6209_, v___x_6229_);
v___x_6231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6231_, 0, v___x_6226_);
return v___x_6231_;
}
}
}
v___jp_6234_:
{
lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v_a_6247_; lean_object* v___x_6249_; uint8_t v_isShared_6250_; uint8_t v_isSharedCheck_6260_; 
v___x_6245_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6191_);
v___x_6246_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v___x_6245_, v___y_6194_, v___y_6195_, v___y_6196_, v___y_6197_);
v_a_6247_ = lean_ctor_get(v___x_6246_, 0);
v_isSharedCheck_6260_ = !lean_is_exclusive(v___x_6246_);
if (v_isSharedCheck_6260_ == 0)
{
v___x_6249_ = v___x_6246_;
v_isShared_6250_ = v_isSharedCheck_6260_;
goto v_resetjp_6248_;
}
else
{
lean_inc(v_a_6247_);
lean_dec(v___x_6246_);
v___x_6249_ = lean_box(0);
v_isShared_6250_ = v_isSharedCheck_6260_;
goto v_resetjp_6248_;
}
v_resetjp_6248_:
{
lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; 
lean_inc_ref_n(v___y_6238_, 2);
v___x_6251_ = l_Lean_FileMap_toPosition(v___y_6238_, v___y_6243_);
lean_dec(v___y_6243_);
v___x_6252_ = l_Lean_FileMap_toPosition(v___y_6238_, v___y_6244_);
lean_dec(v___y_6244_);
v___x_6253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6253_, 0, v___x_6252_);
v___x_6254_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6240_ == 0)
{
lean_del_object(v___x_6249_);
lean_dec_ref(v___y_6236_);
v___y_6200_ = v___x_6251_;
v___y_6201_ = v_a_6247_;
v___y_6202_ = v___y_6239_;
v___y_6203_ = v___y_6241_;
v___y_6204_ = v___x_6253_;
v___y_6205_ = v___y_6242_;
v___y_6206_ = v___x_6254_;
v_currNamespace_6207_ = v___y_6235_;
v_openDecls_6208_ = v___y_6237_;
v___y_6209_ = v___y_6197_;
goto v___jp_6199_;
}
else
{
uint8_t v___x_6255_; 
lean_inc(v_a_6247_);
v___x_6255_ = l_Lean_MessageData_hasTag(v___y_6236_, v_a_6247_);
if (v___x_6255_ == 0)
{
lean_object* v___x_6256_; lean_object* v___x_6258_; 
lean_dec_ref_known(v___x_6253_, 1);
lean_dec_ref(v___x_6251_);
lean_dec(v_a_6247_);
v___x_6256_ = lean_box(0);
if (v_isShared_6250_ == 0)
{
lean_ctor_set(v___x_6249_, 0, v___x_6256_);
v___x_6258_ = v___x_6249_;
goto v_reusejp_6257_;
}
else
{
lean_object* v_reuseFailAlloc_6259_; 
v_reuseFailAlloc_6259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6259_, 0, v___x_6256_);
v___x_6258_ = v_reuseFailAlloc_6259_;
goto v_reusejp_6257_;
}
v_reusejp_6257_:
{
return v___x_6258_;
}
}
else
{
lean_del_object(v___x_6249_);
v___y_6200_ = v___x_6251_;
v___y_6201_ = v_a_6247_;
v___y_6202_ = v___y_6239_;
v___y_6203_ = v___y_6241_;
v___y_6204_ = v___x_6253_;
v___y_6205_ = v___y_6242_;
v___y_6206_ = v___x_6254_;
v_currNamespace_6207_ = v___y_6235_;
v_openDecls_6208_ = v___y_6237_;
v___y_6209_ = v___y_6197_;
goto v___jp_6199_;
}
}
}
}
v___jp_6261_:
{
lean_object* v___x_6272_; 
v___x_6272_ = l_Lean_Syntax_getTailPos_x3f(v___y_6266_, v___y_6270_);
lean_dec(v___y_6266_);
if (lean_obj_tag(v___x_6272_) == 0)
{
lean_inc(v___y_6271_);
v___y_6235_ = v___y_6262_;
v___y_6236_ = v___y_6263_;
v___y_6237_ = v___y_6264_;
v___y_6238_ = v___y_6265_;
v___y_6239_ = v___y_6267_;
v___y_6240_ = v___y_6269_;
v___y_6241_ = v___y_6268_;
v___y_6242_ = v___y_6270_;
v___y_6243_ = v___y_6271_;
v___y_6244_ = v___y_6271_;
goto v___jp_6234_;
}
else
{
lean_object* v_val_6273_; 
v_val_6273_ = lean_ctor_get(v___x_6272_, 0);
lean_inc(v_val_6273_);
lean_dec_ref_known(v___x_6272_, 1);
v___y_6235_ = v___y_6262_;
v___y_6236_ = v___y_6263_;
v___y_6237_ = v___y_6264_;
v___y_6238_ = v___y_6265_;
v___y_6239_ = v___y_6267_;
v___y_6240_ = v___y_6269_;
v___y_6241_ = v___y_6268_;
v___y_6242_ = v___y_6270_;
v___y_6243_ = v___y_6271_;
v___y_6244_ = v_val_6273_;
goto v___jp_6234_;
}
}
v___jp_6274_:
{
lean_object* v_ref_6284_; lean_object* v___x_6285_; 
v_ref_6284_ = l_Lean_replaceRef(v_ref_6190_, v___y_6278_);
v___x_6285_ = l_Lean_Syntax_getPos_x3f(v_ref_6284_, v___y_6282_);
if (lean_obj_tag(v___x_6285_) == 0)
{
lean_object* v___x_6286_; 
v___x_6286_ = lean_unsigned_to_nat(0u);
v___y_6262_ = v___y_6275_;
v___y_6263_ = v___y_6276_;
v___y_6264_ = v___y_6277_;
v___y_6265_ = v___y_6279_;
v___y_6266_ = v_ref_6284_;
v___y_6267_ = v___y_6283_;
v___y_6268_ = v___y_6281_;
v___y_6269_ = v___y_6280_;
v___y_6270_ = v___y_6282_;
v___y_6271_ = v___x_6286_;
goto v___jp_6261_;
}
else
{
lean_object* v_val_6287_; 
v_val_6287_ = lean_ctor_get(v___x_6285_, 0);
lean_inc(v_val_6287_);
lean_dec_ref_known(v___x_6285_, 1);
v___y_6262_ = v___y_6275_;
v___y_6263_ = v___y_6276_;
v___y_6264_ = v___y_6277_;
v___y_6265_ = v___y_6279_;
v___y_6266_ = v_ref_6284_;
v___y_6267_ = v___y_6283_;
v___y_6268_ = v___y_6281_;
v___y_6269_ = v___y_6280_;
v___y_6270_ = v___y_6282_;
v___y_6271_ = v_val_6287_;
goto v___jp_6261_;
}
}
v___jp_6289_:
{
if (v___y_6298_ == 0)
{
v___y_6275_ = v___y_6290_;
v___y_6276_ = v___y_6293_;
v___y_6277_ = v___y_6294_;
v___y_6278_ = v___y_6295_;
v___y_6279_ = v___y_6291_;
v___y_6280_ = v___y_6296_;
v___y_6281_ = v___y_6292_;
v___y_6282_ = v___y_6297_;
v___y_6283_ = v_severity_6192_;
goto v___jp_6274_;
}
else
{
v___y_6275_ = v___y_6290_;
v___y_6276_ = v___y_6293_;
v___y_6277_ = v___y_6294_;
v___y_6278_ = v___y_6295_;
v___y_6279_ = v___y_6291_;
v___y_6280_ = v___y_6296_;
v___y_6281_ = v___y_6292_;
v___y_6282_ = v___y_6297_;
v___y_6283_ = v___x_6288_;
goto v___jp_6274_;
}
}
v___jp_6299_:
{
if (v___y_6300_ == 0)
{
lean_object* v_toCold_6301_; lean_object* v_ref_6302_; uint8_t v_suppressElabErrors_6303_; lean_object* v_fileName_6304_; lean_object* v_fileMap_6305_; lean_object* v_options_6306_; lean_object* v_currNamespace_6307_; lean_object* v_openDecls_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___f_6311_; uint8_t v___x_6312_; uint8_t v___x_6313_; 
v_toCold_6301_ = lean_ctor_get(v___y_6196_, 0);
v_ref_6302_ = lean_ctor_get(v___y_6196_, 2);
v_suppressElabErrors_6303_ = lean_ctor_get_uint8(v___y_6196_, sizeof(void*)*3 + 1);
v_fileName_6304_ = lean_ctor_get(v_toCold_6301_, 0);
v_fileMap_6305_ = lean_ctor_get(v_toCold_6301_, 1);
v_options_6306_ = lean_ctor_get(v_toCold_6301_, 2);
v_currNamespace_6307_ = lean_ctor_get(v_toCold_6301_, 4);
v_openDecls_6308_ = lean_ctor_get(v_toCold_6301_, 5);
v___x_6309_ = lean_box(v_suppressElabErrors_6303_);
v___x_6310_ = lean_box(v___y_6300_);
v___f_6311_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6311_, 0, v___x_6309_);
lean_closure_set(v___f_6311_, 1, v___x_6310_);
v___x_6312_ = 1;
v___x_6313_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6192_, v___x_6312_);
if (v___x_6313_ == 0)
{
v___y_6290_ = v_currNamespace_6307_;
v___y_6291_ = v_fileMap_6305_;
v___y_6292_ = v_fileName_6304_;
v___y_6293_ = v___f_6311_;
v___y_6294_ = v_openDecls_6308_;
v___y_6295_ = v_ref_6302_;
v___y_6296_ = v_suppressElabErrors_6303_;
v___y_6297_ = v___y_6300_;
v___y_6298_ = v___x_6313_;
goto v___jp_6289_;
}
else
{
lean_object* v___x_6314_; uint8_t v___x_6315_; 
v___x_6314_ = l_Lean_warningAsError;
v___x_6315_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_6306_, v___x_6314_);
v___y_6290_ = v_currNamespace_6307_;
v___y_6291_ = v_fileMap_6305_;
v___y_6292_ = v_fileName_6304_;
v___y_6293_ = v___f_6311_;
v___y_6294_ = v_openDecls_6308_;
v___y_6295_ = v_ref_6302_;
v___y_6296_ = v_suppressElabErrors_6303_;
v___y_6297_ = v___y_6300_;
v___y_6298_ = v___x_6315_;
goto v___jp_6289_;
}
}
else
{
lean_object* v___x_6316_; lean_object* v___x_6317_; 
lean_dec_ref(v_msgData_6191_);
v___x_6316_ = lean_box(0);
v___x_6317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6317_, 0, v___x_6316_);
return v___x_6317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_ref_6320_, lean_object* v_msgData_6321_, lean_object* v_severity_6322_, lean_object* v_isSilent_6323_, lean_object* v___y_6324_, lean_object* v___y_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_){
_start:
{
uint8_t v_severity_boxed_6329_; uint8_t v_isSilent_boxed_6330_; lean_object* v_res_6331_; 
v_severity_boxed_6329_ = lean_unbox(v_severity_6322_);
v_isSilent_boxed_6330_ = lean_unbox(v_isSilent_6323_);
v_res_6331_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6320_, v_msgData_6321_, v_severity_boxed_6329_, v_isSilent_boxed_6330_, v___y_6324_, v___y_6325_, v___y_6326_, v___y_6327_);
lean_dec(v___y_6327_);
lean_dec_ref(v___y_6326_);
lean_dec(v___y_6325_);
lean_dec_ref(v___y_6324_);
lean_dec(v_ref_6320_);
return v_res_6331_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object* v_msgData_6332_, uint8_t v_severity_6333_, uint8_t v_isSilent_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_){
_start:
{
lean_object* v_ref_6340_; lean_object* v___x_6341_; 
v_ref_6340_ = lean_ctor_get(v___y_6337_, 2);
v___x_6341_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6340_, v_msgData_6332_, v_severity_6333_, v_isSilent_6334_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_);
return v___x_6341_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_msgData_6342_, lean_object* v_severity_6343_, lean_object* v_isSilent_6344_, lean_object* v___y_6345_, lean_object* v___y_6346_, lean_object* v___y_6347_, lean_object* v___y_6348_, lean_object* v___y_6349_){
_start:
{
uint8_t v_severity_boxed_6350_; uint8_t v_isSilent_boxed_6351_; lean_object* v_res_6352_; 
v_severity_boxed_6350_ = lean_unbox(v_severity_6343_);
v_isSilent_boxed_6351_ = lean_unbox(v_isSilent_6344_);
v_res_6352_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6342_, v_severity_boxed_6350_, v_isSilent_boxed_6351_, v___y_6345_, v___y_6346_, v___y_6347_, v___y_6348_);
lean_dec(v___y_6348_);
lean_dec_ref(v___y_6347_);
lean_dec(v___y_6346_);
lean_dec_ref(v___y_6345_);
return v_res_6352_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object* v_msgData_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_){
_start:
{
uint8_t v___x_6359_; uint8_t v___x_6360_; lean_object* v___x_6361_; 
v___x_6359_ = 2;
v___x_6360_ = 0;
v___x_6361_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6353_, v___x_6359_, v___x_6360_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_);
return v___x_6361_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_, lean_object* v___y_6365_, lean_object* v___y_6366_, lean_object* v___y_6367_){
_start:
{
lean_object* v_res_6368_; 
v_res_6368_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v_msgData_6362_, v___y_6363_, v___y_6364_, v___y_6365_, v___y_6366_);
lean_dec(v___y_6366_);
lean_dec_ref(v___y_6365_);
lean_dec(v___y_6364_);
lean_dec_ref(v___y_6363_);
return v_res_6368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object* v_f_6369_, lean_object* v___y_6370_, lean_object* v___y_6371_, lean_object* v___y_6372_, lean_object* v___y_6373_){
_start:
{
lean_object* v_module_6375_; lean_object* v_const_6376_; lean_object* v_exception_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; 
v_module_6375_ = lean_ctor_get(v_f_6369_, 0);
lean_inc(v_module_6375_);
v_const_6376_ = lean_ctor_get(v_f_6369_, 1);
lean_inc(v_const_6376_);
v_exception_6377_ = lean_ctor_get(v_f_6369_, 2);
lean_inc_ref(v_exception_6377_);
lean_dec_ref(v_f_6369_);
v___x_6378_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6379_ = l_Lean_MessageData_ofName(v_const_6376_);
v___x_6380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6380_, 0, v___x_6378_);
lean_ctor_set(v___x_6380_, 1, v___x_6379_);
v___x_6381_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6382_, 0, v___x_6380_);
lean_ctor_set(v___x_6382_, 1, v___x_6381_);
v___x_6383_ = l_Lean_MessageData_ofName(v_module_6375_);
v___x_6384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6384_, 0, v___x_6382_);
lean_ctor_set(v___x_6384_, 1, v___x_6383_);
v___x_6385_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6386_, 0, v___x_6384_);
lean_ctor_set(v___x_6386_, 1, v___x_6385_);
v___x_6387_ = l_Lean_Exception_toMessageData(v_exception_6377_);
v___x_6388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6388_, 0, v___x_6386_);
lean_ctor_set(v___x_6388_, 1, v___x_6387_);
v___x_6389_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v___x_6388_, v___y_6370_, v___y_6371_, v___y_6372_, v___y_6373_);
return v___x_6389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object* v_f_6390_, lean_object* v___y_6391_, lean_object* v___y_6392_, lean_object* v___y_6393_, lean_object* v___y_6394_, lean_object* v___y_6395_){
_start:
{
lean_object* v_res_6396_; 
v_res_6396_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v_f_6390_, v___y_6391_, v___y_6392_, v___y_6393_, v___y_6394_);
lean_dec(v___y_6394_);
lean_dec_ref(v___y_6393_);
lean_dec(v___y_6392_);
lean_dec_ref(v___y_6391_);
return v_res_6396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object* v_as_6397_, size_t v_i_6398_, size_t v_stop_6399_, lean_object* v_b_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_, lean_object* v___y_6403_, lean_object* v___y_6404_){
_start:
{
uint8_t v___x_6406_; 
v___x_6406_ = lean_usize_dec_eq(v_i_6398_, v_stop_6399_);
if (v___x_6406_ == 0)
{
lean_object* v___x_6407_; lean_object* v___x_6408_; 
v___x_6407_ = lean_array_uget_borrowed(v_as_6397_, v_i_6398_);
lean_inc(v___x_6407_);
v___x_6408_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v___x_6407_, v___y_6401_, v___y_6402_, v___y_6403_, v___y_6404_);
if (lean_obj_tag(v___x_6408_) == 0)
{
lean_object* v_a_6409_; size_t v___x_6410_; size_t v___x_6411_; 
v_a_6409_ = lean_ctor_get(v___x_6408_, 0);
lean_inc(v_a_6409_);
lean_dec_ref_known(v___x_6408_, 1);
v___x_6410_ = ((size_t)1ULL);
v___x_6411_ = lean_usize_add(v_i_6398_, v___x_6410_);
v_i_6398_ = v___x_6411_;
v_b_6400_ = v_a_6409_;
goto _start;
}
else
{
return v___x_6408_;
}
}
else
{
lean_object* v___x_6413_; 
v___x_6413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6413_, 0, v_b_6400_);
return v___x_6413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object* v_as_6414_, lean_object* v_i_6415_, lean_object* v_stop_6416_, lean_object* v_b_6417_, lean_object* v___y_6418_, lean_object* v___y_6419_, lean_object* v___y_6420_, lean_object* v___y_6421_, lean_object* v___y_6422_){
_start:
{
size_t v_i_boxed_6423_; size_t v_stop_boxed_6424_; lean_object* v_res_6425_; 
v_i_boxed_6423_ = lean_unbox_usize(v_i_6415_);
lean_dec(v_i_6415_);
v_stop_boxed_6424_ = lean_unbox_usize(v_stop_6416_);
lean_dec(v_stop_6416_);
v_res_6425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_as_6414_, v_i_boxed_6423_, v_stop_boxed_6424_, v_b_6417_, v___y_6418_, v___y_6419_, v___y_6420_, v___y_6421_);
lean_dec(v___y_6421_);
lean_dec_ref(v___y_6420_);
lean_dec(v___y_6419_);
lean_dec_ref(v___y_6418_);
lean_dec_ref(v_as_6414_);
return v_res_6425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object* v_as_6426_, size_t v_i_6427_, size_t v_stop_6428_, lean_object* v_b_6429_){
_start:
{
uint8_t v___x_6430_; 
v___x_6430_ = lean_usize_dec_eq(v_i_6427_, v_stop_6428_);
if (v___x_6430_ == 0)
{
lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; size_t v___x_6434_; size_t v___x_6435_; 
v___x_6431_ = lean_array_uget_borrowed(v_as_6426_, v_i_6427_);
lean_inc(v___x_6431_);
v___x_6432_ = lean_task_get_own(v___x_6431_);
v___x_6433_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_b_6429_, v___x_6432_);
v___x_6434_ = ((size_t)1ULL);
v___x_6435_ = lean_usize_add(v_i_6427_, v___x_6434_);
v_i_6427_ = v___x_6435_;
v_b_6429_ = v___x_6433_;
goto _start;
}
else
{
return v_b_6429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_as_6437_, lean_object* v_i_6438_, lean_object* v_stop_6439_, lean_object* v_b_6440_){
_start:
{
size_t v_i_boxed_6441_; size_t v_stop_boxed_6442_; lean_object* v_res_6443_; 
v_i_boxed_6441_ = lean_unbox_usize(v_i_6438_);
lean_dec(v_i_6438_);
v_stop_boxed_6442_ = lean_unbox_usize(v_stop_6439_);
lean_dec(v_stop_6439_);
v_res_6443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6437_, v_i_boxed_6441_, v_stop_boxed_6442_, v_b_6440_);
lean_dec_ref(v_as_6437_);
return v_res_6443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object* v_z_6444_, lean_object* v_tasks_6445_){
_start:
{
lean_object* v___x_6446_; lean_object* v___x_6447_; uint8_t v___x_6448_; 
v___x_6446_ = lean_unsigned_to_nat(0u);
v___x_6447_ = lean_array_get_size(v_tasks_6445_);
v___x_6448_ = lean_nat_dec_lt(v___x_6446_, v___x_6447_);
if (v___x_6448_ == 0)
{
return v_z_6444_;
}
else
{
size_t v___x_6449_; size_t v___x_6450_; lean_object* v___x_6451_; 
v___x_6449_ = ((size_t)0ULL);
v___x_6450_ = lean_usize_of_nat(v___x_6447_);
v___x_6451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_tasks_6445_, v___x_6449_, v___x_6450_, v_z_6444_);
return v___x_6451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object* v_z_6452_, lean_object* v_tasks_6453_){
_start:
{
lean_object* v_res_6454_; 
v_res_6454_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6452_, v_tasks_6453_);
lean_dec_ref(v_tasks_6453_);
return v_res_6454_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; 
v___x_6455_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6456_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_6457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6457_, 0, v___x_6456_);
lean_ctor_set(v___x_6457_, 1, v___x_6455_);
return v___x_6457_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; 
v___x_6458_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6459_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0);
v___x_6460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6460_, 0, v___x_6459_);
lean_ctor_set(v___x_6460_, 1, v___x_6458_);
return v___x_6460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object* v_cctx_6461_, lean_object* v_ngen_6462_, lean_object* v_env_6463_, lean_object* v_act_6464_, lean_object* v_constantsPerTask_6465_, lean_object* v___y_6466_, lean_object* v___y_6467_, lean_object* v___y_6468_, lean_object* v___y_6469_){
_start:
{
lean_object* v___x_6471_; lean_object* v_moduleData_6472_; lean_object* v_n_6473_; lean_object* v___x_6474_; lean_object* v___x_6475_; lean_object* v___x_6476_; lean_object* v_a_6477_; lean_object* v___x_6479_; uint8_t v_isShared_6480_; uint8_t v_isSharedCheck_6512_; 
v___x_6471_ = l_Lean_Environment_header(v_env_6463_);
v_moduleData_6472_ = lean_ctor_get(v___x_6471_, 6);
lean_inc_ref(v_moduleData_6472_);
lean_dec_ref(v___x_6471_);
v_n_6473_ = lean_array_get_size(v_moduleData_6472_);
lean_dec_ref(v_moduleData_6472_);
v___x_6474_ = lean_unsigned_to_nat(0u);
v___x_6475_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6476_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6461_, v_env_6463_, v_act_6464_, v_constantsPerTask_6465_, v_n_6473_, v_ngen_6462_, v___x_6475_, v___x_6474_, v___x_6474_, v___x_6474_);
v_a_6477_ = lean_ctor_get(v___x_6476_, 0);
v_isSharedCheck_6512_ = !lean_is_exclusive(v___x_6476_);
if (v_isSharedCheck_6512_ == 0)
{
v___x_6479_ = v___x_6476_;
v_isShared_6480_ = v_isSharedCheck_6512_;
goto v_resetjp_6478_;
}
else
{
lean_inc(v_a_6477_);
lean_dec(v___x_6476_);
v___x_6479_ = lean_box(0);
v_isShared_6480_ = v_isSharedCheck_6512_;
goto v_resetjp_6478_;
}
v_resetjp_6478_:
{
lean_object* v___x_6481_; lean_object* v_r_6482_; lean_object* v_tree_6483_; lean_object* v_errors_6484_; lean_object* v___x_6485_; uint8_t v___x_6486_; 
v___x_6481_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1);
v_r_6482_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v___x_6481_, v_a_6477_);
lean_dec(v_a_6477_);
v_tree_6483_ = lean_ctor_get(v_r_6482_, 0);
lean_inc_ref(v_tree_6483_);
v_errors_6484_ = lean_ctor_get(v_r_6482_, 1);
lean_inc_ref(v_errors_6484_);
lean_dec_ref(v_r_6482_);
v___x_6485_ = lean_array_get_size(v_errors_6484_);
v___x_6486_ = lean_nat_dec_lt(v___x_6474_, v___x_6485_);
if (v___x_6486_ == 0)
{
lean_object* v___x_6487_; lean_object* v___x_6489_; 
lean_dec_ref(v_errors_6484_);
v___x_6487_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6483_);
if (v_isShared_6480_ == 0)
{
lean_ctor_set(v___x_6479_, 0, v___x_6487_);
v___x_6489_ = v___x_6479_;
goto v_reusejp_6488_;
}
else
{
lean_object* v_reuseFailAlloc_6490_; 
v_reuseFailAlloc_6490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6490_, 0, v___x_6487_);
v___x_6489_ = v_reuseFailAlloc_6490_;
goto v_reusejp_6488_;
}
v_reusejp_6488_:
{
return v___x_6489_;
}
}
else
{
lean_object* v___x_6491_; size_t v___x_6492_; size_t v___x_6493_; lean_object* v___x_6494_; 
lean_del_object(v___x_6479_);
v___x_6491_ = lean_box(0);
v___x_6492_ = ((size_t)0ULL);
v___x_6493_ = lean_usize_of_nat(v___x_6485_);
v___x_6494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_errors_6484_, v___x_6492_, v___x_6493_, v___x_6491_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_);
lean_dec_ref(v_errors_6484_);
if (lean_obj_tag(v___x_6494_) == 0)
{
lean_object* v___x_6496_; uint8_t v_isShared_6497_; uint8_t v_isSharedCheck_6502_; 
v_isSharedCheck_6502_ = !lean_is_exclusive(v___x_6494_);
if (v_isSharedCheck_6502_ == 0)
{
lean_object* v_unused_6503_; 
v_unused_6503_ = lean_ctor_get(v___x_6494_, 0);
lean_dec(v_unused_6503_);
v___x_6496_ = v___x_6494_;
v_isShared_6497_ = v_isSharedCheck_6502_;
goto v_resetjp_6495_;
}
else
{
lean_dec(v___x_6494_);
v___x_6496_ = lean_box(0);
v_isShared_6497_ = v_isSharedCheck_6502_;
goto v_resetjp_6495_;
}
v_resetjp_6495_:
{
lean_object* v___x_6498_; lean_object* v___x_6500_; 
v___x_6498_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6483_);
if (v_isShared_6497_ == 0)
{
lean_ctor_set(v___x_6496_, 0, v___x_6498_);
v___x_6500_ = v___x_6496_;
goto v_reusejp_6499_;
}
else
{
lean_object* v_reuseFailAlloc_6501_; 
v_reuseFailAlloc_6501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6501_, 0, v___x_6498_);
v___x_6500_ = v_reuseFailAlloc_6501_;
goto v_reusejp_6499_;
}
v_reusejp_6499_:
{
return v___x_6500_;
}
}
}
else
{
lean_object* v_a_6504_; lean_object* v___x_6506_; uint8_t v_isShared_6507_; uint8_t v_isSharedCheck_6511_; 
lean_dec_ref(v_tree_6483_);
v_a_6504_ = lean_ctor_get(v___x_6494_, 0);
v_isSharedCheck_6511_ = !lean_is_exclusive(v___x_6494_);
if (v_isSharedCheck_6511_ == 0)
{
v___x_6506_ = v___x_6494_;
v_isShared_6507_ = v_isSharedCheck_6511_;
goto v_resetjp_6505_;
}
else
{
lean_inc(v_a_6504_);
lean_dec(v___x_6494_);
v___x_6506_ = lean_box(0);
v_isShared_6507_ = v_isSharedCheck_6511_;
goto v_resetjp_6505_;
}
v_resetjp_6505_:
{
lean_object* v___x_6509_; 
if (v_isShared_6507_ == 0)
{
v___x_6509_ = v___x_6506_;
goto v_reusejp_6508_;
}
else
{
lean_object* v_reuseFailAlloc_6510_; 
v_reuseFailAlloc_6510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6510_, 0, v_a_6504_);
v___x_6509_ = v_reuseFailAlloc_6510_;
goto v_reusejp_6508_;
}
v_reusejp_6508_:
{
return v___x_6509_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object* v_cctx_6513_, lean_object* v_ngen_6514_, lean_object* v_env_6515_, lean_object* v_act_6516_, lean_object* v_constantsPerTask_6517_, lean_object* v___y_6518_, lean_object* v___y_6519_, lean_object* v___y_6520_, lean_object* v___y_6521_, lean_object* v___y_6522_){
_start:
{
lean_object* v_res_6523_; 
v_res_6523_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6513_, v_ngen_6514_, v_env_6515_, v_act_6516_, v_constantsPerTask_6517_, v___y_6518_, v___y_6519_, v___y_6520_, v___y_6521_);
lean_dec(v___y_6521_);
lean_dec_ref(v___y_6520_);
lean_dec(v___y_6519_);
lean_dec_ref(v___y_6518_);
lean_dec(v_constantsPerTask_6517_);
return v_res_6523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object* v_a_6524_, lean_object* v___x_6525_, lean_object* v_addEntry_6526_, lean_object* v_constantsPerTask_6527_, lean_object* v_droppedEntriesRef_6528_, lean_object* v_droppedKeys_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_, lean_object* v___y_6532_, lean_object* v___y_6533_){
_start:
{
lean_object* v___x_6535_; lean_object* v_env_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; 
v___x_6535_ = lean_st_ref_get(v___y_6533_);
v_env_6536_ = lean_ctor_get(v___x_6535_, 0);
lean_inc_ref(v_env_6536_);
lean_dec(v___x_6535_);
lean_inc_ref(v_a_6524_);
v___x_6537_ = l_Lean_Meta_LazyDiscrTree_createTreeCtx(v_a_6524_);
v___x_6538_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v___x_6537_, v___x_6525_, v_env_6536_, v_addEntry_6526_, v_constantsPerTask_6527_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_);
if (lean_obj_tag(v___x_6538_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_6528_) == 1)
{
lean_object* v_a_6539_; lean_object* v_val_6540_; lean_object* v___x_6542_; uint8_t v_isShared_6543_; uint8_t v_isSharedCheck_6573_; 
v_a_6539_ = lean_ctor_get(v___x_6538_, 0);
lean_inc(v_a_6539_);
lean_dec_ref_known(v___x_6538_, 1);
v_val_6540_ = lean_ctor_get(v_droppedEntriesRef_6528_, 0);
v_isSharedCheck_6573_ = !lean_is_exclusive(v_droppedEntriesRef_6528_);
if (v_isSharedCheck_6573_ == 0)
{
v___x_6542_ = v_droppedEntriesRef_6528_;
v_isShared_6543_ = v_isSharedCheck_6573_;
goto v_resetjp_6541_;
}
else
{
lean_inc(v_val_6540_);
lean_dec(v_droppedEntriesRef_6528_);
v___x_6542_ = lean_box(0);
v_isShared_6543_ = v_isSharedCheck_6573_;
goto v_resetjp_6541_;
}
v_resetjp_6541_:
{
lean_object* v___x_6544_; 
v___x_6544_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_6539_, v_droppedKeys_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_);
lean_dec(v_droppedKeys_6529_);
if (lean_obj_tag(v___x_6544_) == 0)
{
lean_object* v_a_6545_; lean_object* v___x_6547_; uint8_t v_isShared_6548_; uint8_t v_isSharedCheck_6564_; 
v_a_6545_ = lean_ctor_get(v___x_6544_, 0);
v_isSharedCheck_6564_ = !lean_is_exclusive(v___x_6544_);
if (v_isSharedCheck_6564_ == 0)
{
v___x_6547_ = v___x_6544_;
v_isShared_6548_ = v_isSharedCheck_6564_;
goto v_resetjp_6546_;
}
else
{
lean_inc(v_a_6545_);
lean_dec(v___x_6544_);
v___x_6547_ = lean_box(0);
v_isShared_6548_ = v_isSharedCheck_6564_;
goto v_resetjp_6546_;
}
v_resetjp_6546_:
{
lean_object* v_fst_6549_; lean_object* v_snd_6550_; lean_object* v___x_6551_; lean_object* v___y_6553_; 
v_fst_6549_ = lean_ctor_get(v_a_6545_, 0);
lean_inc(v_fst_6549_);
v_snd_6550_ = lean_ctor_get(v_a_6545_, 1);
lean_inc(v_snd_6550_);
lean_dec(v_a_6545_);
v___x_6551_ = lean_st_ref_get(v_val_6540_);
if (lean_obj_tag(v___x_6551_) == 0)
{
lean_object* v___x_6562_; 
v___x_6562_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_6553_ = v___x_6562_;
goto v___jp_6552_;
}
else
{
lean_object* v_val_6563_; 
v_val_6563_ = lean_ctor_get(v___x_6551_, 0);
lean_inc(v_val_6563_);
lean_dec_ref_known(v___x_6551_, 1);
v___y_6553_ = v_val_6563_;
goto v___jp_6552_;
}
v___jp_6552_:
{
lean_object* v___x_6554_; lean_object* v___x_6556_; 
v___x_6554_ = l_Array_append___redArg(v___y_6553_, v_fst_6549_);
lean_dec(v_fst_6549_);
if (v_isShared_6543_ == 0)
{
lean_ctor_set(v___x_6542_, 0, v___x_6554_);
v___x_6556_ = v___x_6542_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6561_; 
v_reuseFailAlloc_6561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6561_, 0, v___x_6554_);
v___x_6556_ = v_reuseFailAlloc_6561_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
lean_object* v___x_6557_; lean_object* v___x_6559_; 
v___x_6557_ = lean_st_ref_swap(v_val_6540_, v___x_6556_);
lean_dec(v_val_6540_);
lean_dec(v___x_6557_);
if (v_isShared_6548_ == 0)
{
lean_ctor_set(v___x_6547_, 0, v_snd_6550_);
v___x_6559_ = v___x_6547_;
goto v_reusejp_6558_;
}
else
{
lean_object* v_reuseFailAlloc_6560_; 
v_reuseFailAlloc_6560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6560_, 0, v_snd_6550_);
v___x_6559_ = v_reuseFailAlloc_6560_;
goto v_reusejp_6558_;
}
v_reusejp_6558_:
{
return v___x_6559_;
}
}
}
}
}
else
{
lean_object* v_a_6565_; lean_object* v___x_6567_; uint8_t v_isShared_6568_; uint8_t v_isSharedCheck_6572_; 
lean_del_object(v___x_6542_);
lean_dec(v_val_6540_);
v_a_6565_ = lean_ctor_get(v___x_6544_, 0);
v_isSharedCheck_6572_ = !lean_is_exclusive(v___x_6544_);
if (v_isSharedCheck_6572_ == 0)
{
v___x_6567_ = v___x_6544_;
v_isShared_6568_ = v_isSharedCheck_6572_;
goto v_resetjp_6566_;
}
else
{
lean_inc(v_a_6565_);
lean_dec(v___x_6544_);
v___x_6567_ = lean_box(0);
v_isShared_6568_ = v_isSharedCheck_6572_;
goto v_resetjp_6566_;
}
v_resetjp_6566_:
{
lean_object* v___x_6570_; 
if (v_isShared_6568_ == 0)
{
v___x_6570_ = v___x_6567_;
goto v_reusejp_6569_;
}
else
{
lean_object* v_reuseFailAlloc_6571_; 
v_reuseFailAlloc_6571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6571_, 0, v_a_6565_);
v___x_6570_ = v_reuseFailAlloc_6571_;
goto v_reusejp_6569_;
}
v_reusejp_6569_:
{
return v___x_6570_;
}
}
}
}
}
else
{
lean_object* v_a_6574_; lean_object* v___x_6575_; 
lean_dec(v_droppedEntriesRef_6528_);
v_a_6574_ = lean_ctor_get(v___x_6538_, 0);
lean_inc(v_a_6574_);
lean_dec_ref_known(v___x_6538_, 1);
v___x_6575_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_6574_, v_droppedKeys_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_);
return v___x_6575_;
}
}
else
{
lean_dec(v_droppedKeys_6529_);
lean_dec(v_droppedEntriesRef_6528_);
return v___x_6538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object* v_a_6576_, lean_object* v___x_6577_, lean_object* v_addEntry_6578_, lean_object* v_constantsPerTask_6579_, lean_object* v_droppedEntriesRef_6580_, lean_object* v_droppedKeys_6581_, lean_object* v___y_6582_, lean_object* v___y_6583_, lean_object* v___y_6584_, lean_object* v___y_6585_, lean_object* v___y_6586_){
_start:
{
lean_object* v_res_6587_; 
v_res_6587_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(v_a_6576_, v___x_6577_, v_addEntry_6578_, v_constantsPerTask_6579_, v_droppedEntriesRef_6580_, v_droppedKeys_6581_, v___y_6582_, v___y_6583_, v___y_6584_, v___y_6585_);
lean_dec(v___y_6585_);
lean_dec_ref(v___y_6584_);
lean_dec(v___y_6583_);
lean_dec_ref(v___y_6582_);
lean_dec(v_constantsPerTask_6579_);
lean_dec_ref(v_a_6576_);
return v_res_6587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object* v_ref_6589_, lean_object* v_addEntry_6590_, lean_object* v_droppedKeys_6591_, lean_object* v_constantsPerTask_6592_, lean_object* v_droppedEntriesRef_6593_, lean_object* v_ty_6594_, lean_object* v_a_6595_, lean_object* v_a_6596_, lean_object* v_a_6597_, lean_object* v_a_6598_){
_start:
{
lean_object* v_a_6601_; lean_object* v___x_6623_; lean_object* v_ngen_6624_; lean_object* v_namePrefix_6625_; lean_object* v_idx_6626_; lean_object* v___x_6628_; uint8_t v_isShared_6629_; uint8_t v_isSharedCheck_6672_; 
v___x_6623_ = lean_st_ref_get(v_a_6598_);
v_ngen_6624_ = lean_ctor_get(v___x_6623_, 2);
lean_inc_ref(v_ngen_6624_);
lean_dec(v___x_6623_);
v_namePrefix_6625_ = lean_ctor_get(v_ngen_6624_, 0);
v_idx_6626_ = lean_ctor_get(v_ngen_6624_, 1);
v_isSharedCheck_6672_ = !lean_is_exclusive(v_ngen_6624_);
if (v_isSharedCheck_6672_ == 0)
{
v___x_6628_ = v_ngen_6624_;
v_isShared_6629_ = v_isSharedCheck_6672_;
goto v_resetjp_6627_;
}
else
{
lean_inc(v_idx_6626_);
lean_inc(v_namePrefix_6625_);
lean_dec(v_ngen_6624_);
v___x_6628_ = lean_box(0);
v_isShared_6629_ = v_isSharedCheck_6672_;
goto v_resetjp_6627_;
}
v___jp_6600_:
{
lean_object* v___x_6602_; 
v___x_6602_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_a_6601_, v_ty_6594_, v_a_6595_, v_a_6596_, v_a_6597_, v_a_6598_);
if (lean_obj_tag(v___x_6602_) == 0)
{
lean_object* v_a_6603_; lean_object* v___x_6605_; uint8_t v_isShared_6606_; uint8_t v_isSharedCheck_6614_; 
v_a_6603_ = lean_ctor_get(v___x_6602_, 0);
v_isSharedCheck_6614_ = !lean_is_exclusive(v___x_6602_);
if (v_isSharedCheck_6614_ == 0)
{
v___x_6605_ = v___x_6602_;
v_isShared_6606_ = v_isSharedCheck_6614_;
goto v_resetjp_6604_;
}
else
{
lean_inc(v_a_6603_);
lean_dec(v___x_6602_);
v___x_6605_ = lean_box(0);
v_isShared_6606_ = v_isSharedCheck_6614_;
goto v_resetjp_6604_;
}
v_resetjp_6604_:
{
lean_object* v_fst_6607_; lean_object* v_snd_6608_; lean_object* v___x_6609_; lean_object* v___x_6610_; lean_object* v___x_6612_; 
v_fst_6607_ = lean_ctor_get(v_a_6603_, 0);
lean_inc(v_fst_6607_);
v_snd_6608_ = lean_ctor_get(v_a_6603_, 1);
lean_inc(v_snd_6608_);
lean_dec(v_a_6603_);
v___x_6609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6609_, 0, v_snd_6608_);
v___x_6610_ = lean_st_ref_swap(v_ref_6589_, v___x_6609_);
lean_dec(v___x_6610_);
if (v_isShared_6606_ == 0)
{
lean_ctor_set(v___x_6605_, 0, v_fst_6607_);
v___x_6612_ = v___x_6605_;
goto v_reusejp_6611_;
}
else
{
lean_object* v_reuseFailAlloc_6613_; 
v_reuseFailAlloc_6613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6613_, 0, v_fst_6607_);
v___x_6612_ = v_reuseFailAlloc_6613_;
goto v_reusejp_6611_;
}
v_reusejp_6611_:
{
return v___x_6612_;
}
}
}
else
{
lean_object* v_a_6615_; lean_object* v___x_6617_; uint8_t v_isShared_6618_; uint8_t v_isSharedCheck_6622_; 
v_a_6615_ = lean_ctor_get(v___x_6602_, 0);
v_isSharedCheck_6622_ = !lean_is_exclusive(v___x_6602_);
if (v_isSharedCheck_6622_ == 0)
{
v___x_6617_ = v___x_6602_;
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
else
{
lean_inc(v_a_6615_);
lean_dec(v___x_6602_);
v___x_6617_ = lean_box(0);
v_isShared_6618_ = v_isSharedCheck_6622_;
goto v_resetjp_6616_;
}
v_resetjp_6616_:
{
lean_object* v___x_6620_; 
if (v_isShared_6618_ == 0)
{
v___x_6620_ = v___x_6617_;
goto v_reusejp_6619_;
}
else
{
lean_object* v_reuseFailAlloc_6621_; 
v_reuseFailAlloc_6621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6621_, 0, v_a_6615_);
v___x_6620_ = v_reuseFailAlloc_6621_;
goto v_reusejp_6619_;
}
v_reusejp_6619_:
{
return v___x_6620_;
}
}
}
}
v_resetjp_6627_:
{
lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6633_; 
lean_inc(v_idx_6626_);
lean_inc(v_namePrefix_6625_);
v___x_6630_ = l_Lean_Name_num___override(v_namePrefix_6625_, v_idx_6626_);
v___x_6631_ = lean_unsigned_to_nat(1u);
if (v_isShared_6629_ == 0)
{
lean_ctor_set(v___x_6628_, 1, v___x_6631_);
lean_ctor_set(v___x_6628_, 0, v___x_6630_);
v___x_6633_ = v___x_6628_;
goto v_reusejp_6632_;
}
else
{
lean_object* v_reuseFailAlloc_6671_; 
v_reuseFailAlloc_6671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6671_, 0, v___x_6630_);
lean_ctor_set(v_reuseFailAlloc_6671_, 1, v___x_6631_);
v___x_6633_ = v_reuseFailAlloc_6671_;
goto v_reusejp_6632_;
}
v_reusejp_6632_:
{
lean_object* v___f_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v_env_6638_; lean_object* v_nextMacroScope_6639_; lean_object* v_auxDeclNGen_6640_; lean_object* v_traceState_6641_; lean_object* v_cache_6642_; lean_object* v_messages_6643_; lean_object* v_infoState_6644_; lean_object* v_snapshotTasks_6645_; lean_object* v___x_6647_; uint8_t v_isShared_6648_; uint8_t v_isSharedCheck_6669_; 
lean_inc_ref(v_a_6597_);
v___f_6634_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_6634_, 0, v_a_6597_);
lean_closure_set(v___f_6634_, 1, v___x_6633_);
lean_closure_set(v___f_6634_, 2, v_addEntry_6590_);
lean_closure_set(v___f_6634_, 3, v_constantsPerTask_6592_);
lean_closure_set(v___f_6634_, 4, v_droppedEntriesRef_6593_);
lean_closure_set(v___f_6634_, 5, v_droppedKeys_6591_);
v___x_6635_ = lean_nat_add(v_idx_6626_, v___x_6631_);
lean_dec(v_idx_6626_);
v___x_6636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6636_, 0, v_namePrefix_6625_);
lean_ctor_set(v___x_6636_, 1, v___x_6635_);
v___x_6637_ = lean_st_ref_take(v_a_6598_);
v_env_6638_ = lean_ctor_get(v___x_6637_, 0);
v_nextMacroScope_6639_ = lean_ctor_get(v___x_6637_, 1);
v_auxDeclNGen_6640_ = lean_ctor_get(v___x_6637_, 3);
v_traceState_6641_ = lean_ctor_get(v___x_6637_, 4);
v_cache_6642_ = lean_ctor_get(v___x_6637_, 5);
v_messages_6643_ = lean_ctor_get(v___x_6637_, 6);
v_infoState_6644_ = lean_ctor_get(v___x_6637_, 7);
v_snapshotTasks_6645_ = lean_ctor_get(v___x_6637_, 8);
v_isSharedCheck_6669_ = !lean_is_exclusive(v___x_6637_);
if (v_isSharedCheck_6669_ == 0)
{
lean_object* v_unused_6670_; 
v_unused_6670_ = lean_ctor_get(v___x_6637_, 2);
lean_dec(v_unused_6670_);
v___x_6647_ = v___x_6637_;
v_isShared_6648_ = v_isSharedCheck_6669_;
goto v_resetjp_6646_;
}
else
{
lean_inc(v_snapshotTasks_6645_);
lean_inc(v_infoState_6644_);
lean_inc(v_messages_6643_);
lean_inc(v_cache_6642_);
lean_inc(v_traceState_6641_);
lean_inc(v_auxDeclNGen_6640_);
lean_inc(v_nextMacroScope_6639_);
lean_inc(v_env_6638_);
lean_dec(v___x_6637_);
v___x_6647_ = lean_box(0);
v_isShared_6648_ = v_isSharedCheck_6669_;
goto v_resetjp_6646_;
}
v_resetjp_6646_:
{
lean_object* v___x_6650_; 
if (v_isShared_6648_ == 0)
{
lean_ctor_set(v___x_6647_, 2, v___x_6636_);
v___x_6650_ = v___x_6647_;
goto v_reusejp_6649_;
}
else
{
lean_object* v_reuseFailAlloc_6668_; 
v_reuseFailAlloc_6668_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6668_, 0, v_env_6638_);
lean_ctor_set(v_reuseFailAlloc_6668_, 1, v_nextMacroScope_6639_);
lean_ctor_set(v_reuseFailAlloc_6668_, 2, v___x_6636_);
lean_ctor_set(v_reuseFailAlloc_6668_, 3, v_auxDeclNGen_6640_);
lean_ctor_set(v_reuseFailAlloc_6668_, 4, v_traceState_6641_);
lean_ctor_set(v_reuseFailAlloc_6668_, 5, v_cache_6642_);
lean_ctor_set(v_reuseFailAlloc_6668_, 6, v_messages_6643_);
lean_ctor_set(v_reuseFailAlloc_6668_, 7, v_infoState_6644_);
lean_ctor_set(v_reuseFailAlloc_6668_, 8, v_snapshotTasks_6645_);
v___x_6650_ = v_reuseFailAlloc_6668_;
goto v_reusejp_6649_;
}
v_reusejp_6649_:
{
lean_object* v___x_6651_; lean_object* v___x_6652_; 
v___x_6651_ = lean_st_ref_put(v_a_6598_, v___x_6650_);
v___x_6652_ = lean_st_ref_get(v_ref_6589_);
if (lean_obj_tag(v___x_6652_) == 0)
{
lean_object* v_toCold_6653_; lean_object* v_options_6654_; lean_object* v___x_6655_; lean_object* v___x_6656_; lean_object* v___x_6657_; 
v_toCold_6653_ = lean_ctor_get(v_a_6597_, 0);
v_options_6654_ = lean_ctor_get(v_toCold_6653_, 2);
v___x_6655_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0));
v___x_6656_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_6657_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_6655_, v_options_6654_, v___f_6634_, v___x_6656_, v_a_6595_, v_a_6596_, v_a_6597_, v_a_6598_);
if (lean_obj_tag(v___x_6657_) == 0)
{
lean_object* v_a_6658_; 
v_a_6658_ = lean_ctor_get(v___x_6657_, 0);
lean_inc(v_a_6658_);
lean_dec_ref_known(v___x_6657_, 1);
v_a_6601_ = v_a_6658_;
goto v___jp_6600_;
}
else
{
lean_object* v_a_6659_; lean_object* v___x_6661_; uint8_t v_isShared_6662_; uint8_t v_isSharedCheck_6666_; 
lean_dec_ref(v_ty_6594_);
v_a_6659_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6666_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6666_ == 0)
{
v___x_6661_ = v___x_6657_;
v_isShared_6662_ = v_isSharedCheck_6666_;
goto v_resetjp_6660_;
}
else
{
lean_inc(v_a_6659_);
lean_dec(v___x_6657_);
v___x_6661_ = lean_box(0);
v_isShared_6662_ = v_isSharedCheck_6666_;
goto v_resetjp_6660_;
}
v_resetjp_6660_:
{
lean_object* v___x_6664_; 
if (v_isShared_6662_ == 0)
{
v___x_6664_ = v___x_6661_;
goto v_reusejp_6663_;
}
else
{
lean_object* v_reuseFailAlloc_6665_; 
v_reuseFailAlloc_6665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6665_, 0, v_a_6659_);
v___x_6664_ = v_reuseFailAlloc_6665_;
goto v_reusejp_6663_;
}
v_reusejp_6663_:
{
return v___x_6664_;
}
}
}
}
else
{
lean_object* v_val_6667_; 
lean_dec_ref(v___f_6634_);
v_val_6667_ = lean_ctor_get(v___x_6652_, 0);
lean_inc(v_val_6667_);
lean_dec_ref_known(v___x_6652_, 1);
v_a_6601_ = v_val_6667_;
goto v___jp_6600_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object* v_ref_6673_, lean_object* v_addEntry_6674_, lean_object* v_droppedKeys_6675_, lean_object* v_constantsPerTask_6676_, lean_object* v_droppedEntriesRef_6677_, lean_object* v_ty_6678_, lean_object* v_a_6679_, lean_object* v_a_6680_, lean_object* v_a_6681_, lean_object* v_a_6682_, lean_object* v_a_6683_){
_start:
{
lean_object* v_res_6684_; 
v_res_6684_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6673_, v_addEntry_6674_, v_droppedKeys_6675_, v_constantsPerTask_6676_, v_droppedEntriesRef_6677_, v_ty_6678_, v_a_6679_, v_a_6680_, v_a_6681_, v_a_6682_);
lean_dec(v_a_6682_);
lean_dec_ref(v_a_6681_);
lean_dec(v_a_6680_);
lean_dec_ref(v_a_6679_);
lean_dec(v_ref_6673_);
return v_res_6684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object* v_00_u03b1_6685_, lean_object* v_ref_6686_, lean_object* v_addEntry_6687_, lean_object* v_droppedKeys_6688_, lean_object* v_constantsPerTask_6689_, lean_object* v_droppedEntriesRef_6690_, lean_object* v_ty_6691_, lean_object* v_a_6692_, lean_object* v_a_6693_, lean_object* v_a_6694_, lean_object* v_a_6695_){
_start:
{
lean_object* v___x_6697_; 
v___x_6697_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6686_, v_addEntry_6687_, v_droppedKeys_6688_, v_constantsPerTask_6689_, v_droppedEntriesRef_6690_, v_ty_6691_, v_a_6692_, v_a_6693_, v_a_6694_, v_a_6695_);
return v___x_6697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object* v_00_u03b1_6698_, lean_object* v_ref_6699_, lean_object* v_addEntry_6700_, lean_object* v_droppedKeys_6701_, lean_object* v_constantsPerTask_6702_, lean_object* v_droppedEntriesRef_6703_, lean_object* v_ty_6704_, lean_object* v_a_6705_, lean_object* v_a_6706_, lean_object* v_a_6707_, lean_object* v_a_6708_, lean_object* v_a_6709_){
_start:
{
lean_object* v_res_6710_; 
v_res_6710_ = l_Lean_Meta_LazyDiscrTree_findImportMatches(v_00_u03b1_6698_, v_ref_6699_, v_addEntry_6700_, v_droppedKeys_6701_, v_constantsPerTask_6702_, v_droppedEntriesRef_6703_, v_ty_6704_, v_a_6705_, v_a_6706_, v_a_6707_, v_a_6708_);
lean_dec(v_a_6708_);
lean_dec_ref(v_a_6707_);
lean_dec(v_a_6706_);
lean_dec_ref(v_a_6705_);
lean_dec(v_ref_6699_);
return v_res_6710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object* v_00_u03b1_6711_, lean_object* v_cctx_6712_, lean_object* v_ngen_6713_, lean_object* v_env_6714_, lean_object* v_act_6715_, lean_object* v_constantsPerTask_6716_, lean_object* v___y_6717_, lean_object* v___y_6718_, lean_object* v___y_6719_, lean_object* v___y_6720_){
_start:
{
lean_object* v___x_6722_; 
v___x_6722_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6712_, v_ngen_6713_, v_env_6714_, v_act_6715_, v_constantsPerTask_6716_, v___y_6717_, v___y_6718_, v___y_6719_, v___y_6720_);
return v___x_6722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object* v_00_u03b1_6723_, lean_object* v_cctx_6724_, lean_object* v_ngen_6725_, lean_object* v_env_6726_, lean_object* v_act_6727_, lean_object* v_constantsPerTask_6728_, lean_object* v___y_6729_, lean_object* v___y_6730_, lean_object* v___y_6731_, lean_object* v___y_6732_, lean_object* v___y_6733_){
_start:
{
lean_object* v_res_6734_; 
v_res_6734_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(v_00_u03b1_6723_, v_cctx_6724_, v_ngen_6725_, v_env_6726_, v_act_6727_, v_constantsPerTask_6728_, v___y_6729_, v___y_6730_, v___y_6731_, v___y_6732_);
lean_dec(v___y_6732_);
lean_dec_ref(v___y_6731_);
lean_dec(v___y_6730_);
lean_dec_ref(v___y_6729_);
lean_dec(v_constantsPerTask_6728_);
return v_res_6734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object* v_00_u03b1_6735_, lean_object* v_cctx_6736_, lean_object* v_env_6737_, lean_object* v_act_6738_, lean_object* v_constantsPerTask_6739_, lean_object* v_n_6740_, lean_object* v_ngen_6741_, lean_object* v_tasks_6742_, lean_object* v_start_6743_, lean_object* v_cnt_6744_, lean_object* v_idx_6745_, lean_object* v___y_6746_, lean_object* v___y_6747_, lean_object* v___y_6748_, lean_object* v___y_6749_){
_start:
{
lean_object* v___x_6751_; 
v___x_6751_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6736_, v_env_6737_, v_act_6738_, v_constantsPerTask_6739_, v_n_6740_, v_ngen_6741_, v_tasks_6742_, v_start_6743_, v_cnt_6744_, v_idx_6745_);
return v___x_6751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object* v_00_u03b1_6752_, lean_object* v_cctx_6753_, lean_object* v_env_6754_, lean_object* v_act_6755_, lean_object* v_constantsPerTask_6756_, lean_object* v_n_6757_, lean_object* v_ngen_6758_, lean_object* v_tasks_6759_, lean_object* v_start_6760_, lean_object* v_cnt_6761_, lean_object* v_idx_6762_, lean_object* v___y_6763_, lean_object* v___y_6764_, lean_object* v___y_6765_, lean_object* v___y_6766_, lean_object* v___y_6767_){
_start:
{
lean_object* v_res_6768_; 
v_res_6768_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(v_00_u03b1_6752_, v_cctx_6753_, v_env_6754_, v_act_6755_, v_constantsPerTask_6756_, v_n_6757_, v_ngen_6758_, v_tasks_6759_, v_start_6760_, v_cnt_6761_, v_idx_6762_, v___y_6763_, v___y_6764_, v___y_6765_, v___y_6766_);
lean_dec(v___y_6766_);
lean_dec_ref(v___y_6765_);
lean_dec(v___y_6764_);
lean_dec_ref(v___y_6763_);
lean_dec(v_constantsPerTask_6756_);
return v_res_6768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object* v_00_u03b1_6769_, lean_object* v_z_6770_, lean_object* v_tasks_6771_){
_start:
{
lean_object* v___x_6772_; 
v___x_6772_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6770_, v_tasks_6771_);
return v___x_6772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object* v_00_u03b1_6773_, lean_object* v_z_6774_, lean_object* v_tasks_6775_){
_start:
{
lean_object* v_res_6776_; 
v_res_6776_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(v_00_u03b1_6773_, v_z_6774_, v_tasks_6775_);
lean_dec_ref(v_tasks_6775_);
return v_res_6776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object* v_00_u03b1_6777_, lean_object* v_as_6778_, size_t v_i_6779_, size_t v_stop_6780_, lean_object* v_b_6781_){
_start:
{
lean_object* v___x_6782_; 
v___x_6782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6778_, v_i_6779_, v_stop_6780_, v_b_6781_);
return v___x_6782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b1_6783_, lean_object* v_as_6784_, lean_object* v_i_6785_, lean_object* v_stop_6786_, lean_object* v_b_6787_){
_start:
{
size_t v_i_boxed_6788_; size_t v_stop_boxed_6789_; lean_object* v_res_6790_; 
v_i_boxed_6788_ = lean_unbox_usize(v_i_6785_);
lean_dec(v_i_6785_);
v_stop_boxed_6789_ = lean_unbox_usize(v_stop_6786_);
lean_dec(v_stop_6786_);
v_res_6790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(v_00_u03b1_6783_, v_as_6784_, v_i_boxed_6788_, v_stop_boxed_6789_, v_b_6787_);
lean_dec_ref(v_as_6784_);
return v_res_6790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object* v___y_6791_){
_start:
{
lean_object* v___x_6793_; lean_object* v_ngen_6794_; lean_object* v_namePrefix_6795_; lean_object* v_idx_6796_; lean_object* v___x_6798_; uint8_t v_isShared_6799_; uint8_t v_isSharedCheck_6826_; 
v___x_6793_ = lean_st_ref_get(v___y_6791_);
v_ngen_6794_ = lean_ctor_get(v___x_6793_, 2);
lean_inc_ref(v_ngen_6794_);
lean_dec(v___x_6793_);
v_namePrefix_6795_ = lean_ctor_get(v_ngen_6794_, 0);
v_idx_6796_ = lean_ctor_get(v_ngen_6794_, 1);
v_isSharedCheck_6826_ = !lean_is_exclusive(v_ngen_6794_);
if (v_isSharedCheck_6826_ == 0)
{
v___x_6798_ = v_ngen_6794_;
v_isShared_6799_ = v_isSharedCheck_6826_;
goto v_resetjp_6797_;
}
else
{
lean_inc(v_idx_6796_);
lean_inc(v_namePrefix_6795_);
lean_dec(v_ngen_6794_);
v___x_6798_ = lean_box(0);
v_isShared_6799_ = v_isSharedCheck_6826_;
goto v_resetjp_6797_;
}
v_resetjp_6797_:
{
lean_object* v___x_6800_; lean_object* v___x_6801_; lean_object* v___x_6803_; 
lean_inc(v_idx_6796_);
lean_inc(v_namePrefix_6795_);
v___x_6800_ = l_Lean_Name_num___override(v_namePrefix_6795_, v_idx_6796_);
v___x_6801_ = lean_unsigned_to_nat(1u);
if (v_isShared_6799_ == 0)
{
lean_ctor_set(v___x_6798_, 1, v___x_6801_);
lean_ctor_set(v___x_6798_, 0, v___x_6800_);
v___x_6803_ = v___x_6798_;
goto v_reusejp_6802_;
}
else
{
lean_object* v_reuseFailAlloc_6825_; 
v_reuseFailAlloc_6825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6825_, 0, v___x_6800_);
lean_ctor_set(v_reuseFailAlloc_6825_, 1, v___x_6801_);
v___x_6803_ = v_reuseFailAlloc_6825_;
goto v_reusejp_6802_;
}
v_reusejp_6802_:
{
lean_object* v___x_6804_; lean_object* v___x_6805_; lean_object* v___x_6806_; lean_object* v_env_6807_; lean_object* v_nextMacroScope_6808_; lean_object* v_auxDeclNGen_6809_; lean_object* v_traceState_6810_; lean_object* v_cache_6811_; lean_object* v_messages_6812_; lean_object* v_infoState_6813_; lean_object* v_snapshotTasks_6814_; lean_object* v___x_6816_; uint8_t v_isShared_6817_; uint8_t v_isSharedCheck_6823_; 
v___x_6804_ = lean_nat_add(v_idx_6796_, v___x_6801_);
lean_dec(v_idx_6796_);
v___x_6805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6805_, 0, v_namePrefix_6795_);
lean_ctor_set(v___x_6805_, 1, v___x_6804_);
v___x_6806_ = lean_st_ref_take(v___y_6791_);
v_env_6807_ = lean_ctor_get(v___x_6806_, 0);
v_nextMacroScope_6808_ = lean_ctor_get(v___x_6806_, 1);
v_auxDeclNGen_6809_ = lean_ctor_get(v___x_6806_, 3);
v_traceState_6810_ = lean_ctor_get(v___x_6806_, 4);
v_cache_6811_ = lean_ctor_get(v___x_6806_, 5);
v_messages_6812_ = lean_ctor_get(v___x_6806_, 6);
v_infoState_6813_ = lean_ctor_get(v___x_6806_, 7);
v_snapshotTasks_6814_ = lean_ctor_get(v___x_6806_, 8);
v_isSharedCheck_6823_ = !lean_is_exclusive(v___x_6806_);
if (v_isSharedCheck_6823_ == 0)
{
lean_object* v_unused_6824_; 
v_unused_6824_ = lean_ctor_get(v___x_6806_, 2);
lean_dec(v_unused_6824_);
v___x_6816_ = v___x_6806_;
v_isShared_6817_ = v_isSharedCheck_6823_;
goto v_resetjp_6815_;
}
else
{
lean_inc(v_snapshotTasks_6814_);
lean_inc(v_infoState_6813_);
lean_inc(v_messages_6812_);
lean_inc(v_cache_6811_);
lean_inc(v_traceState_6810_);
lean_inc(v_auxDeclNGen_6809_);
lean_inc(v_nextMacroScope_6808_);
lean_inc(v_env_6807_);
lean_dec(v___x_6806_);
v___x_6816_ = lean_box(0);
v_isShared_6817_ = v_isSharedCheck_6823_;
goto v_resetjp_6815_;
}
v_resetjp_6815_:
{
lean_object* v___x_6819_; 
if (v_isShared_6817_ == 0)
{
lean_ctor_set(v___x_6816_, 2, v___x_6805_);
v___x_6819_ = v___x_6816_;
goto v_reusejp_6818_;
}
else
{
lean_object* v_reuseFailAlloc_6822_; 
v_reuseFailAlloc_6822_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6822_, 0, v_env_6807_);
lean_ctor_set(v_reuseFailAlloc_6822_, 1, v_nextMacroScope_6808_);
lean_ctor_set(v_reuseFailAlloc_6822_, 2, v___x_6805_);
lean_ctor_set(v_reuseFailAlloc_6822_, 3, v_auxDeclNGen_6809_);
lean_ctor_set(v_reuseFailAlloc_6822_, 4, v_traceState_6810_);
lean_ctor_set(v_reuseFailAlloc_6822_, 5, v_cache_6811_);
lean_ctor_set(v_reuseFailAlloc_6822_, 6, v_messages_6812_);
lean_ctor_set(v_reuseFailAlloc_6822_, 7, v_infoState_6813_);
lean_ctor_set(v_reuseFailAlloc_6822_, 8, v_snapshotTasks_6814_);
v___x_6819_ = v_reuseFailAlloc_6822_;
goto v_reusejp_6818_;
}
v_reusejp_6818_:
{
lean_object* v___x_6820_; lean_object* v___x_6821_; 
v___x_6820_ = lean_st_ref_put(v___y_6791_, v___x_6819_);
v___x_6821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6821_, 0, v___x_6803_);
return v___x_6821_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object* v___y_6827_, lean_object* v___y_6828_){
_start:
{
lean_object* v_res_6829_; 
v_res_6829_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6827_);
lean_dec(v___y_6827_);
return v_res_6829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object* v___y_6830_, lean_object* v___y_6831_){
_start:
{
lean_object* v___x_6833_; 
v___x_6833_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6831_);
return v___x_6833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object* v___y_6834_, lean_object* v___y_6835_, lean_object* v___y_6836_){
_start:
{
lean_object* v_res_6837_; 
v_res_6837_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(v___y_6834_, v___y_6835_);
lean_dec(v___y_6835_);
lean_dec_ref(v___y_6834_);
return v_res_6837_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_6838_; lean_object* v___x_6839_; lean_object* v___x_6840_; 
v___x_6838_ = lean_unsigned_to_nat(32u);
v___x_6839_ = lean_mk_empty_array_with_capacity(v___x_6838_);
v___x_6840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6840_, 0, v___x_6839_);
return v___x_6840_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1(void){
_start:
{
size_t v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; lean_object* v___x_6844_; lean_object* v___x_6845_; lean_object* v___x_6846_; 
v___x_6841_ = ((size_t)5ULL);
v___x_6842_ = lean_unsigned_to_nat(0u);
v___x_6843_ = lean_unsigned_to_nat(32u);
v___x_6844_ = lean_mk_empty_array_with_capacity(v___x_6843_);
v___x_6845_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0);
v___x_6846_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6846_, 0, v___x_6845_);
lean_ctor_set(v___x_6846_, 1, v___x_6844_);
lean_ctor_set(v___x_6846_, 2, v___x_6842_);
lean_ctor_set(v___x_6846_, 3, v___x_6842_);
lean_ctor_set_usize(v___x_6846_, 4, v___x_6841_);
return v___x_6846_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2(void){
_start:
{
lean_object* v___x_6847_; lean_object* v___x_6848_; lean_object* v___x_6849_; lean_object* v___x_6850_; 
v___x_6847_ = lean_box(1);
v___x_6848_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1);
v___x_6849_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_6850_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6850_, 0, v___x_6849_);
lean_ctor_set(v___x_6850_, 1, v___x_6848_);
lean_ctor_set(v___x_6850_, 2, v___x_6847_);
return v___x_6850_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msgData_6851_, lean_object* v___y_6852_, lean_object* v___y_6853_){
_start:
{
lean_object* v___x_6855_; lean_object* v_toCold_6856_; lean_object* v_env_6857_; lean_object* v_options_6858_; lean_object* v___x_6859_; lean_object* v___x_6860_; lean_object* v___x_6861_; lean_object* v___x_6862_; lean_object* v___x_6863_; 
v___x_6855_ = lean_st_ref_get(v___y_6853_);
v_toCold_6856_ = lean_ctor_get(v___y_6852_, 0);
v_env_6857_ = lean_ctor_get(v___x_6855_, 0);
lean_inc_ref(v_env_6857_);
lean_dec(v___x_6855_);
v_options_6858_ = lean_ctor_get(v_toCold_6856_, 2);
v___x_6859_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_6860_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2);
lean_inc_ref(v_options_6858_);
v___x_6861_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6861_, 0, v_env_6857_);
lean_ctor_set(v___x_6861_, 1, v___x_6859_);
lean_ctor_set(v___x_6861_, 2, v___x_6860_);
lean_ctor_set(v___x_6861_, 3, v_options_6858_);
v___x_6862_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_6862_, 0, v___x_6861_);
lean_ctor_set(v___x_6862_, 1, v_msgData_6851_);
v___x_6863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6863_, 0, v___x_6862_);
return v___x_6863_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msgData_6864_, lean_object* v___y_6865_, lean_object* v___y_6866_, lean_object* v___y_6867_){
_start:
{
lean_object* v_res_6868_; 
v_res_6868_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v_msgData_6864_, v___y_6865_, v___y_6866_);
lean_dec(v___y_6866_);
lean_dec_ref(v___y_6865_);
return v_res_6868_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object* v_ref_6869_, lean_object* v_msgData_6870_, uint8_t v_severity_6871_, uint8_t v_isSilent_6872_, lean_object* v___y_6873_, lean_object* v___y_6874_){
_start:
{
lean_object* v___y_6877_; lean_object* v___y_6878_; uint8_t v___y_6879_; uint8_t v___y_6880_; lean_object* v___y_6881_; lean_object* v___y_6882_; lean_object* v___y_6883_; lean_object* v_currNamespace_6884_; lean_object* v_openDecls_6885_; lean_object* v___y_6886_; lean_object* v___y_6912_; lean_object* v___y_6913_; lean_object* v___y_6914_; lean_object* v___y_6915_; uint8_t v___y_6916_; uint8_t v___y_6917_; uint8_t v___y_6918_; lean_object* v___y_6919_; lean_object* v___y_6920_; lean_object* v___y_6921_; lean_object* v___y_6939_; lean_object* v___y_6940_; lean_object* v___y_6941_; lean_object* v___y_6942_; lean_object* v___y_6943_; uint8_t v___y_6944_; uint8_t v___y_6945_; uint8_t v___y_6946_; lean_object* v___y_6947_; lean_object* v___y_6948_; lean_object* v___y_6952_; lean_object* v___y_6953_; lean_object* v___y_6954_; lean_object* v___y_6955_; uint8_t v___y_6956_; uint8_t v___y_6957_; lean_object* v___y_6958_; lean_object* v___y_6959_; uint8_t v___y_6960_; uint8_t v___x_6965_; lean_object* v___y_6967_; lean_object* v___y_6968_; lean_object* v___y_6969_; lean_object* v___y_6970_; lean_object* v___y_6971_; uint8_t v___y_6972_; lean_object* v___y_6973_; uint8_t v___y_6974_; uint8_t v___y_6975_; uint8_t v___y_6977_; uint8_t v___x_6995_; 
v___x_6965_ = 2;
v___x_6995_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6871_, v___x_6965_);
if (v___x_6995_ == 0)
{
v___y_6977_ = v___x_6995_;
goto v___jp_6976_;
}
else
{
uint8_t v___x_6996_; 
lean_inc_ref(v_msgData_6870_);
v___x_6996_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6870_);
v___y_6977_ = v___x_6996_;
goto v___jp_6976_;
}
v___jp_6876_:
{
lean_object* v___x_6887_; lean_object* v___x_6888_; lean_object* v___x_6889_; lean_object* v___x_6890_; lean_object* v_env_6891_; lean_object* v_nextMacroScope_6892_; lean_object* v_ngen_6893_; lean_object* v_auxDeclNGen_6894_; lean_object* v_traceState_6895_; lean_object* v_cache_6896_; lean_object* v_messages_6897_; lean_object* v_infoState_6898_; lean_object* v_snapshotTasks_6899_; lean_object* v___x_6901_; uint8_t v_isShared_6902_; uint8_t v_isSharedCheck_6910_; 
lean_inc(v_openDecls_6885_);
lean_inc(v_currNamespace_6884_);
v___x_6887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6887_, 0, v_currNamespace_6884_);
lean_ctor_set(v___x_6887_, 1, v_openDecls_6885_);
v___x_6888_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6888_, 0, v___x_6887_);
lean_ctor_set(v___x_6888_, 1, v___y_6883_);
lean_inc_ref(v___y_6882_);
lean_inc_ref(v___y_6881_);
v___x_6889_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6889_, 0, v___y_6881_);
lean_ctor_set(v___x_6889_, 1, v___y_6878_);
lean_ctor_set(v___x_6889_, 2, v___y_6877_);
lean_ctor_set(v___x_6889_, 3, v___y_6882_);
lean_ctor_set(v___x_6889_, 4, v___x_6888_);
lean_ctor_set_uint8(v___x_6889_, sizeof(void*)*5, v___y_6879_);
lean_ctor_set_uint8(v___x_6889_, sizeof(void*)*5 + 1, v___y_6880_);
lean_ctor_set_uint8(v___x_6889_, sizeof(void*)*5 + 2, v_isSilent_6872_);
v___x_6890_ = lean_st_ref_take(v___y_6886_);
v_env_6891_ = lean_ctor_get(v___x_6890_, 0);
v_nextMacroScope_6892_ = lean_ctor_get(v___x_6890_, 1);
v_ngen_6893_ = lean_ctor_get(v___x_6890_, 2);
v_auxDeclNGen_6894_ = lean_ctor_get(v___x_6890_, 3);
v_traceState_6895_ = lean_ctor_get(v___x_6890_, 4);
v_cache_6896_ = lean_ctor_get(v___x_6890_, 5);
v_messages_6897_ = lean_ctor_get(v___x_6890_, 6);
v_infoState_6898_ = lean_ctor_get(v___x_6890_, 7);
v_snapshotTasks_6899_ = lean_ctor_get(v___x_6890_, 8);
v_isSharedCheck_6910_ = !lean_is_exclusive(v___x_6890_);
if (v_isSharedCheck_6910_ == 0)
{
v___x_6901_ = v___x_6890_;
v_isShared_6902_ = v_isSharedCheck_6910_;
goto v_resetjp_6900_;
}
else
{
lean_inc(v_snapshotTasks_6899_);
lean_inc(v_infoState_6898_);
lean_inc(v_messages_6897_);
lean_inc(v_cache_6896_);
lean_inc(v_traceState_6895_);
lean_inc(v_auxDeclNGen_6894_);
lean_inc(v_ngen_6893_);
lean_inc(v_nextMacroScope_6892_);
lean_inc(v_env_6891_);
lean_dec(v___x_6890_);
v___x_6901_ = lean_box(0);
v_isShared_6902_ = v_isSharedCheck_6910_;
goto v_resetjp_6900_;
}
v_resetjp_6900_:
{
lean_object* v___x_6903_; lean_object* v___x_6904_; lean_object* v___x_6906_; 
v___x_6903_ = lean_box(0);
v___x_6904_ = l_Lean_MessageLog_add(v___x_6889_, v_messages_6897_);
if (v_isShared_6902_ == 0)
{
lean_ctor_set(v___x_6901_, 6, v___x_6904_);
v___x_6906_ = v___x_6901_;
goto v_reusejp_6905_;
}
else
{
lean_object* v_reuseFailAlloc_6909_; 
v_reuseFailAlloc_6909_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6909_, 0, v_env_6891_);
lean_ctor_set(v_reuseFailAlloc_6909_, 1, v_nextMacroScope_6892_);
lean_ctor_set(v_reuseFailAlloc_6909_, 2, v_ngen_6893_);
lean_ctor_set(v_reuseFailAlloc_6909_, 3, v_auxDeclNGen_6894_);
lean_ctor_set(v_reuseFailAlloc_6909_, 4, v_traceState_6895_);
lean_ctor_set(v_reuseFailAlloc_6909_, 5, v_cache_6896_);
lean_ctor_set(v_reuseFailAlloc_6909_, 6, v___x_6904_);
lean_ctor_set(v_reuseFailAlloc_6909_, 7, v_infoState_6898_);
lean_ctor_set(v_reuseFailAlloc_6909_, 8, v_snapshotTasks_6899_);
v___x_6906_ = v_reuseFailAlloc_6909_;
goto v_reusejp_6905_;
}
v_reusejp_6905_:
{
lean_object* v___x_6907_; lean_object* v___x_6908_; 
v___x_6907_ = lean_st_ref_put(v___y_6886_, v___x_6906_);
v___x_6908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6908_, 0, v___x_6903_);
return v___x_6908_;
}
}
}
v___jp_6911_:
{
lean_object* v___x_6922_; lean_object* v___x_6923_; lean_object* v_a_6924_; lean_object* v___x_6926_; uint8_t v_isShared_6927_; uint8_t v_isSharedCheck_6937_; 
v___x_6922_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6870_);
v___x_6923_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v___x_6922_, v___y_6873_, v___y_6874_);
v_a_6924_ = lean_ctor_get(v___x_6923_, 0);
v_isSharedCheck_6937_ = !lean_is_exclusive(v___x_6923_);
if (v_isSharedCheck_6937_ == 0)
{
v___x_6926_ = v___x_6923_;
v_isShared_6927_ = v_isSharedCheck_6937_;
goto v_resetjp_6925_;
}
else
{
lean_inc(v_a_6924_);
lean_dec(v___x_6923_);
v___x_6926_ = lean_box(0);
v_isShared_6927_ = v_isSharedCheck_6937_;
goto v_resetjp_6925_;
}
v_resetjp_6925_:
{
lean_object* v___x_6928_; lean_object* v___x_6929_; lean_object* v___x_6930_; lean_object* v___x_6931_; 
lean_inc_ref_n(v___y_6915_, 2);
v___x_6928_ = l_Lean_FileMap_toPosition(v___y_6915_, v___y_6919_);
lean_dec(v___y_6919_);
v___x_6929_ = l_Lean_FileMap_toPosition(v___y_6915_, v___y_6921_);
lean_dec(v___y_6921_);
v___x_6930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6930_, 0, v___x_6929_);
v___x_6931_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6916_ == 0)
{
lean_del_object(v___x_6926_);
lean_dec_ref(v___y_6913_);
v___y_6877_ = v___x_6930_;
v___y_6878_ = v___x_6928_;
v___y_6879_ = v___y_6917_;
v___y_6880_ = v___y_6918_;
v___y_6881_ = v___y_6920_;
v___y_6882_ = v___x_6931_;
v___y_6883_ = v_a_6924_;
v_currNamespace_6884_ = v___y_6912_;
v_openDecls_6885_ = v___y_6914_;
v___y_6886_ = v___y_6874_;
goto v___jp_6876_;
}
else
{
uint8_t v___x_6932_; 
lean_inc(v_a_6924_);
v___x_6932_ = l_Lean_MessageData_hasTag(v___y_6913_, v_a_6924_);
if (v___x_6932_ == 0)
{
lean_object* v___x_6933_; lean_object* v___x_6935_; 
lean_dec_ref_known(v___x_6930_, 1);
lean_dec_ref(v___x_6928_);
lean_dec(v_a_6924_);
v___x_6933_ = lean_box(0);
if (v_isShared_6927_ == 0)
{
lean_ctor_set(v___x_6926_, 0, v___x_6933_);
v___x_6935_ = v___x_6926_;
goto v_reusejp_6934_;
}
else
{
lean_object* v_reuseFailAlloc_6936_; 
v_reuseFailAlloc_6936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6936_, 0, v___x_6933_);
v___x_6935_ = v_reuseFailAlloc_6936_;
goto v_reusejp_6934_;
}
v_reusejp_6934_:
{
return v___x_6935_;
}
}
else
{
lean_del_object(v___x_6926_);
v___y_6877_ = v___x_6930_;
v___y_6878_ = v___x_6928_;
v___y_6879_ = v___y_6917_;
v___y_6880_ = v___y_6918_;
v___y_6881_ = v___y_6920_;
v___y_6882_ = v___x_6931_;
v___y_6883_ = v_a_6924_;
v_currNamespace_6884_ = v___y_6912_;
v_openDecls_6885_ = v___y_6914_;
v___y_6886_ = v___y_6874_;
goto v___jp_6876_;
}
}
}
}
v___jp_6938_:
{
lean_object* v___x_6949_; 
v___x_6949_ = l_Lean_Syntax_getTailPos_x3f(v___y_6942_, v___y_6945_);
lean_dec(v___y_6942_);
if (lean_obj_tag(v___x_6949_) == 0)
{
lean_inc(v___y_6948_);
v___y_6912_ = v___y_6939_;
v___y_6913_ = v___y_6940_;
v___y_6914_ = v___y_6941_;
v___y_6915_ = v___y_6943_;
v___y_6916_ = v___y_6944_;
v___y_6917_ = v___y_6945_;
v___y_6918_ = v___y_6946_;
v___y_6919_ = v___y_6948_;
v___y_6920_ = v___y_6947_;
v___y_6921_ = v___y_6948_;
goto v___jp_6911_;
}
else
{
lean_object* v_val_6950_; 
v_val_6950_ = lean_ctor_get(v___x_6949_, 0);
lean_inc(v_val_6950_);
lean_dec_ref_known(v___x_6949_, 1);
v___y_6912_ = v___y_6939_;
v___y_6913_ = v___y_6940_;
v___y_6914_ = v___y_6941_;
v___y_6915_ = v___y_6943_;
v___y_6916_ = v___y_6944_;
v___y_6917_ = v___y_6945_;
v___y_6918_ = v___y_6946_;
v___y_6919_ = v___y_6948_;
v___y_6920_ = v___y_6947_;
v___y_6921_ = v_val_6950_;
goto v___jp_6911_;
}
}
v___jp_6951_:
{
lean_object* v_ref_6961_; lean_object* v___x_6962_; 
v_ref_6961_ = l_Lean_replaceRef(v_ref_6869_, v___y_6958_);
v___x_6962_ = l_Lean_Syntax_getPos_x3f(v_ref_6961_, v___y_6957_);
if (lean_obj_tag(v___x_6962_) == 0)
{
lean_object* v___x_6963_; 
v___x_6963_ = lean_unsigned_to_nat(0u);
v___y_6939_ = v___y_6952_;
v___y_6940_ = v___y_6953_;
v___y_6941_ = v___y_6954_;
v___y_6942_ = v_ref_6961_;
v___y_6943_ = v___y_6955_;
v___y_6944_ = v___y_6956_;
v___y_6945_ = v___y_6957_;
v___y_6946_ = v___y_6960_;
v___y_6947_ = v___y_6959_;
v___y_6948_ = v___x_6963_;
goto v___jp_6938_;
}
else
{
lean_object* v_val_6964_; 
v_val_6964_ = lean_ctor_get(v___x_6962_, 0);
lean_inc(v_val_6964_);
lean_dec_ref_known(v___x_6962_, 1);
v___y_6939_ = v___y_6952_;
v___y_6940_ = v___y_6953_;
v___y_6941_ = v___y_6954_;
v___y_6942_ = v_ref_6961_;
v___y_6943_ = v___y_6955_;
v___y_6944_ = v___y_6956_;
v___y_6945_ = v___y_6957_;
v___y_6946_ = v___y_6960_;
v___y_6947_ = v___y_6959_;
v___y_6948_ = v_val_6964_;
goto v___jp_6938_;
}
}
v___jp_6966_:
{
if (v___y_6975_ == 0)
{
v___y_6952_ = v___y_6968_;
v___y_6953_ = v___y_6970_;
v___y_6954_ = v___y_6971_;
v___y_6955_ = v___y_6967_;
v___y_6956_ = v___y_6972_;
v___y_6957_ = v___y_6974_;
v___y_6958_ = v___y_6973_;
v___y_6959_ = v___y_6969_;
v___y_6960_ = v_severity_6871_;
goto v___jp_6951_;
}
else
{
v___y_6952_ = v___y_6968_;
v___y_6953_ = v___y_6970_;
v___y_6954_ = v___y_6971_;
v___y_6955_ = v___y_6967_;
v___y_6956_ = v___y_6972_;
v___y_6957_ = v___y_6974_;
v___y_6958_ = v___y_6973_;
v___y_6959_ = v___y_6969_;
v___y_6960_ = v___x_6965_;
goto v___jp_6951_;
}
}
v___jp_6976_:
{
if (v___y_6977_ == 0)
{
lean_object* v_toCold_6978_; lean_object* v_ref_6979_; uint8_t v_suppressElabErrors_6980_; lean_object* v_fileName_6981_; lean_object* v_fileMap_6982_; lean_object* v_options_6983_; lean_object* v_currNamespace_6984_; lean_object* v_openDecls_6985_; lean_object* v___x_6986_; lean_object* v___x_6987_; lean_object* v___f_6988_; uint8_t v___x_6989_; uint8_t v___x_6990_; 
v_toCold_6978_ = lean_ctor_get(v___y_6873_, 0);
v_ref_6979_ = lean_ctor_get(v___y_6873_, 2);
v_suppressElabErrors_6980_ = lean_ctor_get_uint8(v___y_6873_, sizeof(void*)*3 + 1);
v_fileName_6981_ = lean_ctor_get(v_toCold_6978_, 0);
v_fileMap_6982_ = lean_ctor_get(v_toCold_6978_, 1);
v_options_6983_ = lean_ctor_get(v_toCold_6978_, 2);
v_currNamespace_6984_ = lean_ctor_get(v_toCold_6978_, 4);
v_openDecls_6985_ = lean_ctor_get(v_toCold_6978_, 5);
v___x_6986_ = lean_box(v_suppressElabErrors_6980_);
v___x_6987_ = lean_box(v___y_6977_);
v___f_6988_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6988_, 0, v___x_6986_);
lean_closure_set(v___f_6988_, 1, v___x_6987_);
v___x_6989_ = 1;
v___x_6990_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6871_, v___x_6989_);
if (v___x_6990_ == 0)
{
v___y_6967_ = v_fileMap_6982_;
v___y_6968_ = v_currNamespace_6984_;
v___y_6969_ = v_fileName_6981_;
v___y_6970_ = v___f_6988_;
v___y_6971_ = v_openDecls_6985_;
v___y_6972_ = v_suppressElabErrors_6980_;
v___y_6973_ = v_ref_6979_;
v___y_6974_ = v___y_6977_;
v___y_6975_ = v___x_6990_;
goto v___jp_6966_;
}
else
{
lean_object* v___x_6991_; uint8_t v___x_6992_; 
v___x_6991_ = l_Lean_warningAsError;
v___x_6992_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_6983_, v___x_6991_);
v___y_6967_ = v_fileMap_6982_;
v___y_6968_ = v_currNamespace_6984_;
v___y_6969_ = v_fileName_6981_;
v___y_6970_ = v___f_6988_;
v___y_6971_ = v_openDecls_6985_;
v___y_6972_ = v_suppressElabErrors_6980_;
v___y_6973_ = v_ref_6979_;
v___y_6974_ = v___y_6977_;
v___y_6975_ = v___x_6992_;
goto v___jp_6966_;
}
}
else
{
lean_object* v___x_6993_; lean_object* v___x_6994_; 
lean_dec_ref(v_msgData_6870_);
v___x_6993_ = lean_box(0);
v___x_6994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6994_, 0, v___x_6993_);
return v___x_6994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_ref_6997_, lean_object* v_msgData_6998_, lean_object* v_severity_6999_, lean_object* v_isSilent_7000_, lean_object* v___y_7001_, lean_object* v___y_7002_, lean_object* v___y_7003_){
_start:
{
uint8_t v_severity_boxed_7004_; uint8_t v_isSilent_boxed_7005_; lean_object* v_res_7006_; 
v_severity_boxed_7004_ = lean_unbox(v_severity_6999_);
v_isSilent_boxed_7005_ = lean_unbox(v_isSilent_7000_);
v_res_7006_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_6997_, v_msgData_6998_, v_severity_boxed_7004_, v_isSilent_boxed_7005_, v___y_7001_, v___y_7002_);
lean_dec(v___y_7002_);
lean_dec_ref(v___y_7001_);
lean_dec(v_ref_6997_);
return v_res_7006_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object* v_msgData_7007_, uint8_t v_severity_7008_, uint8_t v_isSilent_7009_, lean_object* v___y_7010_, lean_object* v___y_7011_){
_start:
{
lean_object* v_ref_7013_; lean_object* v___x_7014_; 
v_ref_7013_ = lean_ctor_get(v___y_7010_, 2);
v___x_7014_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_7013_, v_msgData_7007_, v_severity_7008_, v_isSilent_7009_, v___y_7010_, v___y_7011_);
return v___x_7014_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_7015_, lean_object* v_severity_7016_, lean_object* v_isSilent_7017_, lean_object* v___y_7018_, lean_object* v___y_7019_, lean_object* v___y_7020_){
_start:
{
uint8_t v_severity_boxed_7021_; uint8_t v_isSilent_boxed_7022_; lean_object* v_res_7023_; 
v_severity_boxed_7021_ = lean_unbox(v_severity_7016_);
v_isSilent_boxed_7022_ = lean_unbox(v_isSilent_7017_);
v_res_7023_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_7015_, v_severity_boxed_7021_, v_isSilent_boxed_7022_, v___y_7018_, v___y_7019_);
lean_dec(v___y_7019_);
lean_dec_ref(v___y_7018_);
return v_res_7023_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object* v_msgData_7024_, lean_object* v___y_7025_, lean_object* v___y_7026_){
_start:
{
uint8_t v___x_7028_; uint8_t v___x_7029_; lean_object* v___x_7030_; 
v___x_7028_ = 2;
v___x_7029_ = 0;
v___x_7030_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_7024_, v___x_7028_, v___x_7029_, v___y_7025_, v___y_7026_);
return v___x_7030_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object* v_msgData_7031_, lean_object* v___y_7032_, lean_object* v___y_7033_, lean_object* v___y_7034_){
_start:
{
lean_object* v_res_7035_; 
v_res_7035_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v_msgData_7031_, v___y_7032_, v___y_7033_);
lean_dec(v___y_7033_);
lean_dec_ref(v___y_7032_);
return v_res_7035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object* v_f_7036_, lean_object* v___y_7037_, lean_object* v___y_7038_){
_start:
{
lean_object* v_module_7040_; lean_object* v_const_7041_; lean_object* v_exception_7042_; lean_object* v___x_7043_; lean_object* v___x_7044_; lean_object* v___x_7045_; lean_object* v___x_7046_; lean_object* v___x_7047_; lean_object* v___x_7048_; lean_object* v___x_7049_; lean_object* v___x_7050_; lean_object* v___x_7051_; lean_object* v___x_7052_; lean_object* v___x_7053_; lean_object* v___x_7054_; 
v_module_7040_ = lean_ctor_get(v_f_7036_, 0);
lean_inc(v_module_7040_);
v_const_7041_ = lean_ctor_get(v_f_7036_, 1);
lean_inc(v_const_7041_);
v_exception_7042_ = lean_ctor_get(v_f_7036_, 2);
lean_inc_ref(v_exception_7042_);
lean_dec_ref(v_f_7036_);
v___x_7043_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_7044_ = l_Lean_MessageData_ofName(v_const_7041_);
v___x_7045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7045_, 0, v___x_7043_);
lean_ctor_set(v___x_7045_, 1, v___x_7044_);
v___x_7046_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_7047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7047_, 0, v___x_7045_);
lean_ctor_set(v___x_7047_, 1, v___x_7046_);
v___x_7048_ = l_Lean_MessageData_ofName(v_module_7040_);
v___x_7049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7049_, 0, v___x_7047_);
lean_ctor_set(v___x_7049_, 1, v___x_7048_);
v___x_7050_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_7051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7051_, 0, v___x_7049_);
lean_ctor_set(v___x_7051_, 1, v___x_7050_);
v___x_7052_ = l_Lean_Exception_toMessageData(v_exception_7042_);
v___x_7053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7053_, 0, v___x_7051_);
lean_ctor_set(v___x_7053_, 1, v___x_7052_);
v___x_7054_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v___x_7053_, v___y_7037_, v___y_7038_);
return v___x_7054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object* v_f_7055_, lean_object* v___y_7056_, lean_object* v___y_7057_, lean_object* v___y_7058_){
_start:
{
lean_object* v_res_7059_; 
v_res_7059_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v_f_7055_, v___y_7056_, v___y_7057_);
lean_dec(v___y_7057_);
lean_dec_ref(v___y_7056_);
return v_res_7059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object* v_as_7060_, size_t v_i_7061_, size_t v_stop_7062_, lean_object* v_b_7063_, lean_object* v___y_7064_, lean_object* v___y_7065_){
_start:
{
uint8_t v___x_7067_; 
v___x_7067_ = lean_usize_dec_eq(v_i_7061_, v_stop_7062_);
if (v___x_7067_ == 0)
{
lean_object* v___x_7068_; lean_object* v___x_7069_; 
v___x_7068_ = lean_array_uget_borrowed(v_as_7060_, v_i_7061_);
lean_inc(v___x_7068_);
v___x_7069_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v___x_7068_, v___y_7064_, v___y_7065_);
if (lean_obj_tag(v___x_7069_) == 0)
{
lean_object* v_a_7070_; size_t v___x_7071_; size_t v___x_7072_; 
v_a_7070_ = lean_ctor_get(v___x_7069_, 0);
lean_inc(v_a_7070_);
lean_dec_ref_known(v___x_7069_, 1);
v___x_7071_ = ((size_t)1ULL);
v___x_7072_ = lean_usize_add(v_i_7061_, v___x_7071_);
v_i_7061_ = v___x_7072_;
v_b_7063_ = v_a_7070_;
goto _start;
}
else
{
return v___x_7069_;
}
}
else
{
lean_object* v___x_7074_; 
v___x_7074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7074_, 0, v_b_7063_);
return v___x_7074_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object* v_as_7075_, lean_object* v_i_7076_, lean_object* v_stop_7077_, lean_object* v_b_7078_, lean_object* v___y_7079_, lean_object* v___y_7080_, lean_object* v___y_7081_){
_start:
{
size_t v_i_boxed_7082_; size_t v_stop_boxed_7083_; lean_object* v_res_7084_; 
v_i_boxed_7082_ = lean_unbox_usize(v_i_7076_);
lean_dec(v_i_7076_);
v_stop_boxed_7083_ = lean_unbox_usize(v_stop_7077_);
lean_dec(v_stop_7077_);
v_res_7084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v_as_7075_, v_i_boxed_7082_, v_stop_boxed_7083_, v_b_7078_, v___y_7079_, v___y_7080_);
lean_dec(v___y_7080_);
lean_dec_ref(v___y_7079_);
lean_dec_ref(v_as_7075_);
return v_res_7084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object* v_entriesForConst_7085_, lean_object* v_a_7086_, lean_object* v_a_7087_){
_start:
{
lean_object* v___x_7089_; lean_object* v_env_7090_; lean_object* v___x_7091_; lean_object* v_a_7092_; lean_object* v___x_7094_; uint8_t v_isShared_7095_; uint8_t v_isSharedCheck_7125_; 
v___x_7089_ = lean_st_ref_get(v_a_7087_);
v_env_7090_ = lean_ctor_get(v___x_7089_, 0);
lean_inc_ref(v_env_7090_);
lean_dec(v___x_7089_);
v___x_7091_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v_a_7087_);
v_a_7092_ = lean_ctor_get(v___x_7091_, 0);
v_isSharedCheck_7125_ = !lean_is_exclusive(v___x_7091_);
if (v_isSharedCheck_7125_ == 0)
{
v___x_7094_ = v___x_7091_;
v_isShared_7095_ = v_isSharedCheck_7125_;
goto v_resetjp_7093_;
}
else
{
lean_inc(v_a_7092_);
lean_dec(v___x_7091_);
v___x_7094_ = lean_box(0);
v_isShared_7095_ = v_isSharedCheck_7125_;
goto v_resetjp_7093_;
}
v_resetjp_7093_:
{
lean_object* v___x_7096_; lean_object* v___x_7097_; lean_object* v___y_7104_; lean_object* v___x_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; uint8_t v___x_7116_; 
v___x_7096_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
lean_inc_ref(v_a_7086_);
v___x_7097_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_a_7086_, v_a_7092_, v_env_7090_, v___x_7096_, v_entriesForConst_7085_);
v___x_7113_ = lean_st_ref_get(v___x_7096_);
lean_dec(v___x_7096_);
v___x_7114_ = lean_unsigned_to_nat(0u);
v___x_7115_ = lean_array_get_size(v___x_7113_);
v___x_7116_ = lean_nat_dec_lt(v___x_7114_, v___x_7115_);
if (v___x_7116_ == 0)
{
lean_dec(v___x_7113_);
goto v___jp_7098_;
}
else
{
lean_object* v___x_7117_; uint8_t v___x_7118_; 
v___x_7117_ = lean_box(0);
v___x_7118_ = lean_nat_dec_le(v___x_7115_, v___x_7115_);
if (v___x_7118_ == 0)
{
if (v___x_7116_ == 0)
{
lean_dec(v___x_7113_);
goto v___jp_7098_;
}
else
{
size_t v___x_7119_; size_t v___x_7120_; lean_object* v___x_7121_; 
v___x_7119_ = ((size_t)0ULL);
v___x_7120_ = lean_usize_of_nat(v___x_7115_);
v___x_7121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_7113_, v___x_7119_, v___x_7120_, v___x_7117_, v_a_7086_, v_a_7087_);
lean_dec(v___x_7113_);
v___y_7104_ = v___x_7121_;
goto v___jp_7103_;
}
}
else
{
size_t v___x_7122_; size_t v___x_7123_; lean_object* v___x_7124_; 
v___x_7122_ = ((size_t)0ULL);
v___x_7123_ = lean_usize_of_nat(v___x_7115_);
v___x_7124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_7113_, v___x_7122_, v___x_7123_, v___x_7117_, v_a_7086_, v_a_7087_);
lean_dec(v___x_7113_);
v___y_7104_ = v___x_7124_;
goto v___jp_7103_;
}
}
v___jp_7098_:
{
lean_object* v___x_7099_; lean_object* v___x_7101_; 
v___x_7099_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v___x_7097_);
if (v_isShared_7095_ == 0)
{
lean_ctor_set(v___x_7094_, 0, v___x_7099_);
v___x_7101_ = v___x_7094_;
goto v_reusejp_7100_;
}
else
{
lean_object* v_reuseFailAlloc_7102_; 
v_reuseFailAlloc_7102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7102_, 0, v___x_7099_);
v___x_7101_ = v_reuseFailAlloc_7102_;
goto v_reusejp_7100_;
}
v_reusejp_7100_:
{
return v___x_7101_;
}
}
v___jp_7103_:
{
if (lean_obj_tag(v___y_7104_) == 0)
{
lean_dec_ref_known(v___y_7104_, 1);
goto v___jp_7098_;
}
else
{
lean_object* v_a_7105_; lean_object* v___x_7107_; uint8_t v_isShared_7108_; uint8_t v_isSharedCheck_7112_; 
lean_dec_ref(v___x_7097_);
lean_del_object(v___x_7094_);
v_a_7105_ = lean_ctor_get(v___y_7104_, 0);
v_isSharedCheck_7112_ = !lean_is_exclusive(v___y_7104_);
if (v_isSharedCheck_7112_ == 0)
{
v___x_7107_ = v___y_7104_;
v_isShared_7108_ = v_isSharedCheck_7112_;
goto v_resetjp_7106_;
}
else
{
lean_inc(v_a_7105_);
lean_dec(v___y_7104_);
v___x_7107_ = lean_box(0);
v_isShared_7108_ = v_isSharedCheck_7112_;
goto v_resetjp_7106_;
}
v_resetjp_7106_:
{
lean_object* v___x_7110_; 
if (v_isShared_7108_ == 0)
{
v___x_7110_ = v___x_7107_;
goto v_reusejp_7109_;
}
else
{
lean_object* v_reuseFailAlloc_7111_; 
v_reuseFailAlloc_7111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7111_, 0, v_a_7105_);
v___x_7110_ = v_reuseFailAlloc_7111_;
goto v_reusejp_7109_;
}
v_reusejp_7109_:
{
return v___x_7110_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object* v_entriesForConst_7126_, lean_object* v_a_7127_, lean_object* v_a_7128_, lean_object* v_a_7129_){
_start:
{
lean_object* v_res_7130_; 
v_res_7130_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7126_, v_a_7127_, v_a_7128_);
lean_dec(v_a_7128_);
lean_dec_ref(v_a_7127_);
return v_res_7130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object* v_00_u03b1_7131_, lean_object* v_entriesForConst_7132_, lean_object* v_a_7133_, lean_object* v_a_7134_){
_start:
{
lean_object* v___x_7136_; 
v___x_7136_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7132_, v_a_7133_, v_a_7134_);
return v___x_7136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object* v_00_u03b1_7137_, lean_object* v_entriesForConst_7138_, lean_object* v_a_7139_, lean_object* v_a_7140_, lean_object* v_a_7141_){
_start:
{
lean_object* v_res_7142_; 
v_res_7142_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(v_00_u03b1_7137_, v_entriesForConst_7138_, v_a_7139_, v_a_7140_);
lean_dec(v_a_7140_);
lean_dec_ref(v_a_7139_);
return v_res_7142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object* v_entriesForConst_7143_, lean_object* v_droppedEntriesRef_7144_, lean_object* v_droppedKeys_7145_, lean_object* v___y_7146_, lean_object* v___y_7147_, lean_object* v___y_7148_, lean_object* v___y_7149_){
_start:
{
lean_object* v_t_7152_; lean_object* v___x_7155_; 
v___x_7155_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7143_, v___y_7148_, v___y_7149_);
if (lean_obj_tag(v___x_7155_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_7144_) == 1)
{
lean_object* v_a_7156_; lean_object* v_val_7157_; lean_object* v___x_7159_; uint8_t v_isShared_7160_; uint8_t v_isSharedCheck_7183_; 
v_a_7156_ = lean_ctor_get(v___x_7155_, 0);
lean_inc(v_a_7156_);
lean_dec_ref_known(v___x_7155_, 1);
v_val_7157_ = lean_ctor_get(v_droppedEntriesRef_7144_, 0);
v_isSharedCheck_7183_ = !lean_is_exclusive(v_droppedEntriesRef_7144_);
if (v_isSharedCheck_7183_ == 0)
{
v___x_7159_ = v_droppedEntriesRef_7144_;
v_isShared_7160_ = v_isSharedCheck_7183_;
goto v_resetjp_7158_;
}
else
{
lean_inc(v_val_7157_);
lean_dec(v_droppedEntriesRef_7144_);
v___x_7159_ = lean_box(0);
v_isShared_7160_ = v_isSharedCheck_7183_;
goto v_resetjp_7158_;
}
v_resetjp_7158_:
{
lean_object* v___x_7161_; 
v___x_7161_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_7156_, v_droppedKeys_7145_, v___y_7146_, v___y_7147_, v___y_7148_, v___y_7149_);
lean_dec(v_droppedKeys_7145_);
if (lean_obj_tag(v___x_7161_) == 0)
{
lean_object* v_a_7162_; lean_object* v_fst_7163_; lean_object* v_snd_7164_; lean_object* v___x_7165_; lean_object* v___y_7167_; 
v_a_7162_ = lean_ctor_get(v___x_7161_, 0);
lean_inc(v_a_7162_);
lean_dec_ref_known(v___x_7161_, 1);
v_fst_7163_ = lean_ctor_get(v_a_7162_, 0);
lean_inc(v_fst_7163_);
v_snd_7164_ = lean_ctor_get(v_a_7162_, 1);
lean_inc(v_snd_7164_);
lean_dec(v_a_7162_);
v___x_7165_ = lean_st_ref_get(v_val_7157_);
if (lean_obj_tag(v___x_7165_) == 0)
{
lean_object* v___x_7173_; 
v___x_7173_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_7167_ = v___x_7173_;
goto v___jp_7166_;
}
else
{
lean_object* v_val_7174_; 
v_val_7174_ = lean_ctor_get(v___x_7165_, 0);
lean_inc(v_val_7174_);
lean_dec_ref_known(v___x_7165_, 1);
v___y_7167_ = v_val_7174_;
goto v___jp_7166_;
}
v___jp_7166_:
{
lean_object* v___x_7168_; lean_object* v___x_7170_; 
v___x_7168_ = l_Array_append___redArg(v___y_7167_, v_fst_7163_);
lean_dec(v_fst_7163_);
if (v_isShared_7160_ == 0)
{
lean_ctor_set(v___x_7159_, 0, v___x_7168_);
v___x_7170_ = v___x_7159_;
goto v_reusejp_7169_;
}
else
{
lean_object* v_reuseFailAlloc_7172_; 
v_reuseFailAlloc_7172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7172_, 0, v___x_7168_);
v___x_7170_ = v_reuseFailAlloc_7172_;
goto v_reusejp_7169_;
}
v_reusejp_7169_:
{
lean_object* v___x_7171_; 
v___x_7171_ = lean_st_ref_swap(v_val_7157_, v___x_7170_);
lean_dec(v_val_7157_);
lean_dec(v___x_7171_);
v_t_7152_ = v_snd_7164_;
goto v___jp_7151_;
}
}
}
else
{
lean_object* v_a_7175_; lean_object* v___x_7177_; uint8_t v_isShared_7178_; uint8_t v_isSharedCheck_7182_; 
lean_del_object(v___x_7159_);
lean_dec(v_val_7157_);
v_a_7175_ = lean_ctor_get(v___x_7161_, 0);
v_isSharedCheck_7182_ = !lean_is_exclusive(v___x_7161_);
if (v_isSharedCheck_7182_ == 0)
{
v___x_7177_ = v___x_7161_;
v_isShared_7178_ = v_isSharedCheck_7182_;
goto v_resetjp_7176_;
}
else
{
lean_inc(v_a_7175_);
lean_dec(v___x_7161_);
v___x_7177_ = lean_box(0);
v_isShared_7178_ = v_isSharedCheck_7182_;
goto v_resetjp_7176_;
}
v_resetjp_7176_:
{
lean_object* v___x_7180_; 
if (v_isShared_7178_ == 0)
{
v___x_7180_ = v___x_7177_;
goto v_reusejp_7179_;
}
else
{
lean_object* v_reuseFailAlloc_7181_; 
v_reuseFailAlloc_7181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7181_, 0, v_a_7175_);
v___x_7180_ = v_reuseFailAlloc_7181_;
goto v_reusejp_7179_;
}
v_reusejp_7179_:
{
return v___x_7180_;
}
}
}
}
}
else
{
lean_object* v_a_7184_; lean_object* v___x_7185_; 
lean_dec(v_droppedEntriesRef_7144_);
v_a_7184_ = lean_ctor_get(v___x_7155_, 0);
lean_inc(v_a_7184_);
lean_dec_ref_known(v___x_7155_, 1);
v___x_7185_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_7184_, v_droppedKeys_7145_, v___y_7146_, v___y_7147_, v___y_7148_, v___y_7149_);
if (lean_obj_tag(v___x_7185_) == 0)
{
lean_object* v_a_7186_; 
v_a_7186_ = lean_ctor_get(v___x_7185_, 0);
lean_inc(v_a_7186_);
lean_dec_ref_known(v___x_7185_, 1);
v_t_7152_ = v_a_7186_;
goto v___jp_7151_;
}
else
{
lean_object* v_a_7187_; lean_object* v___x_7189_; uint8_t v_isShared_7190_; uint8_t v_isSharedCheck_7194_; 
v_a_7187_ = lean_ctor_get(v___x_7185_, 0);
v_isSharedCheck_7194_ = !lean_is_exclusive(v___x_7185_);
if (v_isSharedCheck_7194_ == 0)
{
v___x_7189_ = v___x_7185_;
v_isShared_7190_ = v_isSharedCheck_7194_;
goto v_resetjp_7188_;
}
else
{
lean_inc(v_a_7187_);
lean_dec(v___x_7185_);
v___x_7189_ = lean_box(0);
v_isShared_7190_ = v_isSharedCheck_7194_;
goto v_resetjp_7188_;
}
v_resetjp_7188_:
{
lean_object* v___x_7192_; 
if (v_isShared_7190_ == 0)
{
v___x_7192_ = v___x_7189_;
goto v_reusejp_7191_;
}
else
{
lean_object* v_reuseFailAlloc_7193_; 
v_reuseFailAlloc_7193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7193_, 0, v_a_7187_);
v___x_7192_ = v_reuseFailAlloc_7193_;
goto v_reusejp_7191_;
}
v_reusejp_7191_:
{
return v___x_7192_;
}
}
}
}
}
else
{
lean_object* v_a_7195_; lean_object* v___x_7197_; uint8_t v_isShared_7198_; uint8_t v_isSharedCheck_7202_; 
lean_dec(v_droppedKeys_7145_);
lean_dec(v_droppedEntriesRef_7144_);
v_a_7195_ = lean_ctor_get(v___x_7155_, 0);
v_isSharedCheck_7202_ = !lean_is_exclusive(v___x_7155_);
if (v_isSharedCheck_7202_ == 0)
{
v___x_7197_ = v___x_7155_;
v_isShared_7198_ = v_isSharedCheck_7202_;
goto v_resetjp_7196_;
}
else
{
lean_inc(v_a_7195_);
lean_dec(v___x_7155_);
v___x_7197_ = lean_box(0);
v_isShared_7198_ = v_isSharedCheck_7202_;
goto v_resetjp_7196_;
}
v_resetjp_7196_:
{
lean_object* v___x_7200_; 
if (v_isShared_7198_ == 0)
{
v___x_7200_ = v___x_7197_;
goto v_reusejp_7199_;
}
else
{
lean_object* v_reuseFailAlloc_7201_; 
v_reuseFailAlloc_7201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7201_, 0, v_a_7195_);
v___x_7200_ = v_reuseFailAlloc_7201_;
goto v_reusejp_7199_;
}
v_reusejp_7199_:
{
return v___x_7200_;
}
}
}
v___jp_7151_:
{
lean_object* v___x_7153_; lean_object* v___x_7154_; 
v___x_7153_ = lean_st_mk_ref(v_t_7152_);
v___x_7154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7154_, 0, v___x_7153_);
return v___x_7154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object* v_entriesForConst_7203_, lean_object* v_droppedEntriesRef_7204_, lean_object* v_droppedKeys_7205_, lean_object* v___y_7206_, lean_object* v___y_7207_, lean_object* v___y_7208_, lean_object* v___y_7209_, lean_object* v___y_7210_){
_start:
{
lean_object* v_res_7211_; 
v_res_7211_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(v_entriesForConst_7203_, v_droppedEntriesRef_7204_, v_droppedKeys_7205_, v___y_7206_, v___y_7207_, v___y_7208_, v___y_7209_);
lean_dec(v___y_7209_);
lean_dec_ref(v___y_7208_);
lean_dec(v___y_7207_);
lean_dec_ref(v___y_7206_);
return v_res_7211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object* v_entriesForConst_7213_, lean_object* v_droppedKeys_7214_, lean_object* v_droppedEntriesRef_7215_, lean_object* v_a_7216_, lean_object* v_a_7217_, lean_object* v_a_7218_, lean_object* v_a_7219_){
_start:
{
lean_object* v_toCold_7221_; lean_object* v_options_7222_; lean_object* v___f_7223_; lean_object* v___x_7224_; lean_object* v___x_7225_; lean_object* v___x_7226_; 
v_toCold_7221_ = lean_ctor_get(v_a_7218_, 0);
v_options_7222_ = lean_ctor_get(v_toCold_7221_, 2);
v___f_7223_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_7223_, 0, v_entriesForConst_7213_);
lean_closure_set(v___f_7223_, 1, v_droppedEntriesRef_7215_);
lean_closure_set(v___f_7223_, 2, v_droppedKeys_7214_);
v___x_7224_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0));
v___x_7225_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_7226_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7224_, v_options_7222_, v___f_7223_, v___x_7225_, v_a_7216_, v_a_7217_, v_a_7218_, v_a_7219_);
return v___x_7226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object* v_entriesForConst_7227_, lean_object* v_droppedKeys_7228_, lean_object* v_droppedEntriesRef_7229_, lean_object* v_a_7230_, lean_object* v_a_7231_, lean_object* v_a_7232_, lean_object* v_a_7233_, lean_object* v_a_7234_){
_start:
{
lean_object* v_res_7235_; 
v_res_7235_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7227_, v_droppedKeys_7228_, v_droppedEntriesRef_7229_, v_a_7230_, v_a_7231_, v_a_7232_, v_a_7233_);
lean_dec(v_a_7233_);
lean_dec_ref(v_a_7232_);
lean_dec(v_a_7231_);
lean_dec_ref(v_a_7230_);
return v_res_7235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object* v_00_u03b1_7236_, lean_object* v_entriesForConst_7237_, lean_object* v_droppedKeys_7238_, lean_object* v_droppedEntriesRef_7239_, lean_object* v_a_7240_, lean_object* v_a_7241_, lean_object* v_a_7242_, lean_object* v_a_7243_){
_start:
{
lean_object* v___x_7245_; 
v___x_7245_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7237_, v_droppedKeys_7238_, v_droppedEntriesRef_7239_, v_a_7240_, v_a_7241_, v_a_7242_, v_a_7243_);
return v___x_7245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object* v_00_u03b1_7246_, lean_object* v_entriesForConst_7247_, lean_object* v_droppedKeys_7248_, lean_object* v_droppedEntriesRef_7249_, lean_object* v_a_7250_, lean_object* v_a_7251_, lean_object* v_a_7252_, lean_object* v_a_7253_, lean_object* v_a_7254_){
_start:
{
lean_object* v_res_7255_; 
v_res_7255_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(v_00_u03b1_7246_, v_entriesForConst_7247_, v_droppedKeys_7248_, v_droppedEntriesRef_7249_, v_a_7250_, v_a_7251_, v_a_7252_, v_a_7253_);
lean_dec(v_a_7253_);
lean_dec_ref(v_a_7252_);
lean_dec(v_a_7251_);
lean_dec_ref(v_a_7250_);
return v_res_7255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object* v_moduleRef_7256_, lean_object* v_ty_7257_, lean_object* v___y_7258_, lean_object* v___y_7259_, lean_object* v___y_7260_, lean_object* v___y_7261_){
_start:
{
lean_object* v___x_7263_; lean_object* v___x_7264_; 
v___x_7263_ = lean_st_ref_get(v_moduleRef_7256_);
v___x_7264_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v___x_7263_, v_ty_7257_, v___y_7258_, v___y_7259_, v___y_7260_, v___y_7261_);
if (lean_obj_tag(v___x_7264_) == 0)
{
lean_object* v_a_7265_; lean_object* v___x_7267_; uint8_t v_isShared_7268_; uint8_t v_isSharedCheck_7275_; 
v_a_7265_ = lean_ctor_get(v___x_7264_, 0);
v_isSharedCheck_7275_ = !lean_is_exclusive(v___x_7264_);
if (v_isSharedCheck_7275_ == 0)
{
v___x_7267_ = v___x_7264_;
v_isShared_7268_ = v_isSharedCheck_7275_;
goto v_resetjp_7266_;
}
else
{
lean_inc(v_a_7265_);
lean_dec(v___x_7264_);
v___x_7267_ = lean_box(0);
v_isShared_7268_ = v_isSharedCheck_7275_;
goto v_resetjp_7266_;
}
v_resetjp_7266_:
{
lean_object* v_fst_7269_; lean_object* v_snd_7270_; lean_object* v___x_7271_; lean_object* v___x_7273_; 
v_fst_7269_ = lean_ctor_get(v_a_7265_, 0);
lean_inc(v_fst_7269_);
v_snd_7270_ = lean_ctor_get(v_a_7265_, 1);
lean_inc(v_snd_7270_);
lean_dec(v_a_7265_);
v___x_7271_ = lean_st_ref_swap(v_moduleRef_7256_, v_snd_7270_);
lean_dec(v___x_7271_);
if (v_isShared_7268_ == 0)
{
lean_ctor_set(v___x_7267_, 0, v_fst_7269_);
v___x_7273_ = v___x_7267_;
goto v_reusejp_7272_;
}
else
{
lean_object* v_reuseFailAlloc_7274_; 
v_reuseFailAlloc_7274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7274_, 0, v_fst_7269_);
v___x_7273_ = v_reuseFailAlloc_7274_;
goto v_reusejp_7272_;
}
v_reusejp_7272_:
{
return v___x_7273_;
}
}
}
else
{
lean_object* v_a_7276_; lean_object* v___x_7278_; uint8_t v_isShared_7279_; uint8_t v_isSharedCheck_7283_; 
v_a_7276_ = lean_ctor_get(v___x_7264_, 0);
v_isSharedCheck_7283_ = !lean_is_exclusive(v___x_7264_);
if (v_isSharedCheck_7283_ == 0)
{
v___x_7278_ = v___x_7264_;
v_isShared_7279_ = v_isSharedCheck_7283_;
goto v_resetjp_7277_;
}
else
{
lean_inc(v_a_7276_);
lean_dec(v___x_7264_);
v___x_7278_ = lean_box(0);
v_isShared_7279_ = v_isSharedCheck_7283_;
goto v_resetjp_7277_;
}
v_resetjp_7277_:
{
lean_object* v___x_7281_; 
if (v_isShared_7279_ == 0)
{
v___x_7281_ = v___x_7278_;
goto v_reusejp_7280_;
}
else
{
lean_object* v_reuseFailAlloc_7282_; 
v_reuseFailAlloc_7282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7282_, 0, v_a_7276_);
v___x_7281_ = v_reuseFailAlloc_7282_;
goto v_reusejp_7280_;
}
v_reusejp_7280_:
{
return v___x_7281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object* v_moduleRef_7284_, lean_object* v_ty_7285_, lean_object* v___y_7286_, lean_object* v___y_7287_, lean_object* v___y_7288_, lean_object* v___y_7289_, lean_object* v___y_7290_){
_start:
{
lean_object* v_res_7291_; 
v_res_7291_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(v_moduleRef_7284_, v_ty_7285_, v___y_7286_, v___y_7287_, v___y_7288_, v___y_7289_);
lean_dec(v___y_7289_);
lean_dec_ref(v___y_7288_);
lean_dec(v___y_7287_);
lean_dec_ref(v___y_7286_);
lean_dec(v_moduleRef_7284_);
return v_res_7291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object* v_moduleRef_7293_, lean_object* v_ty_7294_, lean_object* v_a_7295_, lean_object* v_a_7296_, lean_object* v_a_7297_, lean_object* v_a_7298_){
_start:
{
lean_object* v_toCold_7300_; lean_object* v_options_7301_; lean_object* v___f_7302_; lean_object* v___x_7303_; lean_object* v___x_7304_; lean_object* v___x_7305_; 
v_toCold_7300_ = lean_ctor_get(v_a_7297_, 0);
v_options_7301_ = lean_ctor_get(v_toCold_7300_, 2);
v___f_7302_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_7302_, 0, v_moduleRef_7293_);
lean_closure_set(v___f_7302_, 1, v_ty_7294_);
v___x_7303_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0));
v___x_7304_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0);
v___x_7305_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7303_, v_options_7301_, v___f_7302_, v___x_7304_, v_a_7295_, v_a_7296_, v_a_7297_, v_a_7298_);
return v___x_7305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object* v_moduleRef_7306_, lean_object* v_ty_7307_, lean_object* v_a_7308_, lean_object* v_a_7309_, lean_object* v_a_7310_, lean_object* v_a_7311_, lean_object* v_a_7312_){
_start:
{
lean_object* v_res_7313_; 
v_res_7313_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7306_, v_ty_7307_, v_a_7308_, v_a_7309_, v_a_7310_, v_a_7311_);
lean_dec(v_a_7311_);
lean_dec_ref(v_a_7310_);
lean_dec(v_a_7309_);
lean_dec_ref(v_a_7308_);
return v_res_7313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object* v_00_u03b1_7314_, lean_object* v_moduleRef_7315_, lean_object* v_ty_7316_, lean_object* v_a_7317_, lean_object* v_a_7318_, lean_object* v_a_7319_, lean_object* v_a_7320_){
_start:
{
lean_object* v___x_7322_; 
v___x_7322_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7315_, v_ty_7316_, v_a_7317_, v_a_7318_, v_a_7319_, v_a_7320_);
return v___x_7322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object* v_00_u03b1_7323_, lean_object* v_moduleRef_7324_, lean_object* v_ty_7325_, lean_object* v_a_7326_, lean_object* v_a_7327_, lean_object* v_a_7328_, lean_object* v_a_7329_, lean_object* v_a_7330_){
_start:
{
lean_object* v_res_7331_; 
v_res_7331_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches(v_00_u03b1_7323_, v_moduleRef_7324_, v_ty_7325_, v_a_7326_, v_a_7327_, v_a_7328_, v_a_7329_);
lean_dec(v_a_7329_);
lean_dec_ref(v_a_7328_);
lean_dec(v_a_7327_);
lean_dec_ref(v_a_7326_);
return v_res_7331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object* v_adjustResult_7332_, lean_object* v_j_7333_, size_t v_sz_7334_, size_t v_i_7335_, lean_object* v_bs_7336_){
_start:
{
uint8_t v___x_7337_; 
v___x_7337_ = lean_usize_dec_lt(v_i_7335_, v_sz_7334_);
if (v___x_7337_ == 0)
{
lean_object* v___x_7338_; 
lean_dec(v_j_7333_);
lean_dec(v_adjustResult_7332_);
v___x_7338_ = l_unsafeCast___redArg(v_bs_7336_);
lean_dec_ref(v_bs_7336_);
return v___x_7338_;
}
else
{
lean_object* v_v_7339_; lean_object* v___x_7340_; lean_object* v_bs_x27_7341_; lean_object* v___x_7342_; lean_object* v___x_7343_; size_t v___x_7344_; size_t v___x_7345_; lean_object* v___x_7346_; lean_object* v___x_7347_; 
v_v_7339_ = lean_array_uget(v_bs_7336_, v_i_7335_);
v___x_7340_ = lean_unsigned_to_nat(0u);
v_bs_x27_7341_ = lean_array_uset(v_bs_7336_, v_i_7335_, v___x_7340_);
v___x_7342_ = l_unsafeCast___redArg(v_v_7339_);
lean_dec(v_v_7339_);
lean_inc(v_adjustResult_7332_);
lean_inc(v_j_7333_);
v___x_7343_ = lean_apply_2(v_adjustResult_7332_, v_j_7333_, v___x_7342_);
v___x_7344_ = ((size_t)1ULL);
v___x_7345_ = lean_usize_add(v_i_7335_, v___x_7344_);
v___x_7346_ = l_unsafeCast___redArg(v___x_7343_);
lean_dec(v___x_7343_);
v___x_7347_ = lean_array_uset(v_bs_x27_7341_, v_i_7335_, v___x_7346_);
v_i_7335_ = v___x_7345_;
v_bs_7336_ = v___x_7347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object* v_adjustResult_7349_, lean_object* v_j_7350_, lean_object* v_sz_7351_, lean_object* v_i_7352_, lean_object* v_bs_7353_){
_start:
{
size_t v_sz_boxed_7354_; size_t v_i_boxed_7355_; lean_object* v_res_7356_; 
v_sz_boxed_7354_ = lean_unbox_usize(v_sz_7351_);
lean_dec(v_sz_7351_);
v_i_boxed_7355_ = lean_unbox_usize(v_i_7352_);
lean_dec(v_i_7352_);
v_res_7356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7349_, v_j_7350_, v_sz_boxed_7354_, v_i_boxed_7355_, v_bs_7353_);
return v_res_7356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object* v_adjustResult_7357_, lean_object* v_j_7358_, lean_object* v_as_7359_, size_t v_i_7360_, size_t v_stop_7361_, lean_object* v_b_7362_){
_start:
{
uint8_t v___x_7363_; 
v___x_7363_ = lean_usize_dec_eq(v_i_7360_, v_stop_7361_);
if (v___x_7363_ == 0)
{
lean_object* v___x_7364_; size_t v_sz_7365_; size_t v___x_7366_; lean_object* v___x_7367_; lean_object* v___x_7368_; lean_object* v___x_7369_; lean_object* v___x_7370_; size_t v___x_7371_; size_t v___x_7372_; 
v___x_7364_ = lean_array_uget_borrowed(v_as_7359_, v_i_7360_);
v_sz_7365_ = lean_array_size(v___x_7364_);
v___x_7366_ = ((size_t)0ULL);
v___x_7367_ = l_unsafeCast___redArg(v___x_7364_);
lean_inc(v_j_7358_);
lean_inc(v_adjustResult_7357_);
v___x_7368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7357_, v_j_7358_, v_sz_7365_, v___x_7366_, v___x_7367_);
v___x_7369_ = l_unsafeCast___redArg(v___x_7368_);
lean_dec_ref(v___x_7368_);
v___x_7370_ = l_Array_append___redArg(v_b_7362_, v___x_7369_);
lean_dec(v___x_7369_);
v___x_7371_ = ((size_t)1ULL);
v___x_7372_ = lean_usize_add(v_i_7360_, v___x_7371_);
v_i_7360_ = v___x_7372_;
v_b_7362_ = v___x_7370_;
goto _start;
}
else
{
lean_dec(v_j_7358_);
lean_dec(v_adjustResult_7357_);
return v_b_7362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object* v_adjustResult_7374_, lean_object* v_j_7375_, lean_object* v_as_7376_, lean_object* v_i_7377_, lean_object* v_stop_7378_, lean_object* v_b_7379_){
_start:
{
size_t v_i_boxed_7380_; size_t v_stop_boxed_7381_; lean_object* v_res_7382_; 
v_i_boxed_7380_ = lean_unbox_usize(v_i_7377_);
lean_dec(v_i_7377_);
v_stop_boxed_7381_ = lean_unbox_usize(v_stop_7378_);
lean_dec(v_stop_7378_);
v_res_7382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7374_, v_j_7375_, v_as_7376_, v_i_boxed_7380_, v_stop_boxed_7381_, v_b_7379_);
lean_dec_ref(v_as_7376_);
return v_res_7382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object* v_n_7383_, lean_object* v_aa_7384_, lean_object* v_adjustResult_7385_, lean_object* v_n_7386_, lean_object* v_j_7387_, lean_object* v_a_7388_){
_start:
{
lean_object* v_zero_7389_; uint8_t v_isZero_7390_; 
v_zero_7389_ = lean_unsigned_to_nat(0u);
v_isZero_7390_ = lean_nat_dec_eq(v_j_7387_, v_zero_7389_);
if (v_isZero_7390_ == 1)
{
lean_dec(v_j_7387_);
lean_dec(v_adjustResult_7385_);
return v_a_7388_;
}
else
{
lean_object* v_one_7391_; lean_object* v_n_7392_; lean_object* v___x_7393_; lean_object* v___x_7394_; lean_object* v_j_7395_; lean_object* v_b_7396_; lean_object* v___x_7397_; uint8_t v___x_7398_; 
v_one_7391_ = lean_unsigned_to_nat(1u);
v_n_7392_ = lean_nat_sub(v_j_7387_, v_one_7391_);
v___x_7393_ = lean_nat_sub(v_n_7386_, v_j_7387_);
lean_dec(v_j_7387_);
v___x_7394_ = lean_nat_sub(v_n_7383_, v_one_7391_);
v_j_7395_ = lean_nat_sub(v___x_7394_, v___x_7393_);
lean_dec(v___x_7393_);
lean_dec(v___x_7394_);
v_b_7396_ = lean_array_fget_borrowed(v_aa_7384_, v_j_7395_);
v___x_7397_ = lean_array_get_size(v_b_7396_);
v___x_7398_ = lean_nat_dec_lt(v_zero_7389_, v___x_7397_);
if (v___x_7398_ == 0)
{
lean_dec(v_j_7395_);
v_j_7387_ = v_n_7392_;
goto _start;
}
else
{
size_t v___x_7400_; size_t v___x_7401_; lean_object* v___x_7402_; 
v___x_7400_ = ((size_t)0ULL);
v___x_7401_ = lean_usize_of_nat(v___x_7397_);
lean_inc(v_adjustResult_7385_);
v___x_7402_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7385_, v_j_7395_, v_b_7396_, v___x_7400_, v___x_7401_, v_a_7388_);
v_j_7387_ = v_n_7392_;
v_a_7388_ = v___x_7402_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_n_7404_, lean_object* v_aa_7405_, lean_object* v_adjustResult_7406_, lean_object* v_n_7407_, lean_object* v_j_7408_, lean_object* v_a_7409_){
_start:
{
lean_object* v_res_7410_; 
v_res_7410_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7404_, v_aa_7405_, v_adjustResult_7406_, v_n_7407_, v_j_7408_, v_a_7409_);
lean_dec(v_n_7407_);
lean_dec_ref(v_aa_7405_);
lean_dec(v_n_7404_);
return v_res_7410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object* v_n_7411_, lean_object* v_adjustResult_7412_, lean_object* v_aa_7413_, lean_object* v_n_7414_, lean_object* v_j_7415_, lean_object* v_a_7416_){
_start:
{
lean_object* v_zero_7417_; uint8_t v_isZero_7418_; 
v_zero_7417_ = lean_unsigned_to_nat(0u);
v_isZero_7418_ = lean_nat_dec_eq(v_j_7415_, v_zero_7417_);
if (v_isZero_7418_ == 1)
{
lean_dec(v_adjustResult_7412_);
return v_a_7416_;
}
else
{
lean_object* v_one_7419_; lean_object* v_n_7420_; lean_object* v___x_7421_; lean_object* v___x_7422_; lean_object* v_j_7423_; lean_object* v_b_7424_; lean_object* v___x_7425_; uint8_t v___x_7426_; 
v_one_7419_ = lean_unsigned_to_nat(1u);
v_n_7420_ = lean_nat_sub(v_j_7415_, v_one_7419_);
v___x_7421_ = lean_nat_sub(v_n_7414_, v_j_7415_);
v___x_7422_ = lean_nat_sub(v_n_7411_, v_one_7419_);
v_j_7423_ = lean_nat_sub(v___x_7422_, v___x_7421_);
lean_dec(v___x_7421_);
lean_dec(v___x_7422_);
v_b_7424_ = lean_array_fget_borrowed(v_aa_7413_, v_j_7423_);
v___x_7425_ = lean_array_get_size(v_b_7424_);
v___x_7426_ = lean_nat_dec_lt(v_zero_7417_, v___x_7425_);
if (v___x_7426_ == 0)
{
lean_object* v___x_7427_; 
lean_dec(v_j_7423_);
v___x_7427_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7411_, v_aa_7413_, v_adjustResult_7412_, v_n_7414_, v_n_7420_, v_a_7416_);
return v___x_7427_;
}
else
{
size_t v___x_7428_; size_t v___x_7429_; lean_object* v___x_7430_; lean_object* v___x_7431_; 
v___x_7428_ = ((size_t)0ULL);
v___x_7429_ = lean_usize_of_nat(v___x_7425_);
lean_inc(v_adjustResult_7412_);
v___x_7430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7412_, v_j_7423_, v_b_7424_, v___x_7428_, v___x_7429_, v_a_7416_);
v___x_7431_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7411_, v_aa_7413_, v_adjustResult_7412_, v_n_7414_, v_n_7420_, v___x_7430_);
return v___x_7431_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object* v_n_7432_, lean_object* v_adjustResult_7433_, lean_object* v_aa_7434_, lean_object* v_n_7435_, lean_object* v_j_7436_, lean_object* v_a_7437_){
_start:
{
lean_object* v_res_7438_; 
v_res_7438_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7432_, v_adjustResult_7433_, v_aa_7434_, v_n_7435_, v_j_7436_, v_a_7437_);
lean_dec(v_j_7436_);
lean_dec(v_n_7435_);
lean_dec_ref(v_aa_7434_);
lean_dec(v_n_7432_);
return v_res_7438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object* v_adjustResult_7439_, lean_object* v_mr_7440_, lean_object* v_a_7441_){
_start:
{
lean_object* v_n_7442_; lean_object* v___x_7443_; 
v_n_7442_ = lean_array_get_size(v_mr_7440_);
v___x_7443_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7442_, v_adjustResult_7439_, v_mr_7440_, v_n_7442_, v_n_7442_, v_a_7441_);
return v___x_7443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object* v_adjustResult_7444_, lean_object* v_mr_7445_, lean_object* v_a_7446_){
_start:
{
lean_object* v_res_7447_; 
v_res_7447_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7444_, v_mr_7445_, v_a_7446_);
lean_dec_ref(v_mr_7445_);
return v_res_7447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object* v_moduleTreeRef_7448_, lean_object* v_ref_7449_, lean_object* v_addEntry_7450_, lean_object* v_droppedKeys_7451_, lean_object* v_constantsPerTask_7452_, lean_object* v_droppedEntriesRef_7453_, lean_object* v_adjustResult_7454_, lean_object* v_ty_7455_, lean_object* v_a_7456_, lean_object* v_a_7457_, lean_object* v_a_7458_, lean_object* v_a_7459_){
_start:
{
lean_object* v___x_7461_; 
lean_inc_ref(v_ty_7455_);
v___x_7461_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleTreeRef_7448_, v_ty_7455_, v_a_7456_, v_a_7457_, v_a_7458_, v_a_7459_);
if (lean_obj_tag(v___x_7461_) == 0)
{
lean_object* v_a_7462_; lean_object* v___x_7463_; 
v_a_7462_ = lean_ctor_get(v___x_7461_, 0);
lean_inc(v_a_7462_);
lean_dec_ref_known(v___x_7461_, 1);
v___x_7463_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_7449_, v_addEntry_7450_, v_droppedKeys_7451_, v_constantsPerTask_7452_, v_droppedEntriesRef_7453_, v_ty_7455_, v_a_7456_, v_a_7457_, v_a_7458_, v_a_7459_);
if (lean_obj_tag(v___x_7463_) == 0)
{
lean_object* v_a_7464_; lean_object* v___x_7466_; uint8_t v_isShared_7467_; uint8_t v_isSharedCheck_7477_; 
v_a_7464_ = lean_ctor_get(v___x_7463_, 0);
v_isSharedCheck_7477_ = !lean_is_exclusive(v___x_7463_);
if (v_isSharedCheck_7477_ == 0)
{
v___x_7466_ = v___x_7463_;
v_isShared_7467_ = v_isSharedCheck_7477_;
goto v_resetjp_7465_;
}
else
{
lean_inc(v_a_7464_);
lean_dec(v___x_7463_);
v___x_7466_ = lean_box(0);
v_isShared_7467_ = v_isSharedCheck_7477_;
goto v_resetjp_7465_;
}
v_resetjp_7465_:
{
lean_object* v___x_7468_; lean_object* v___x_7469_; lean_object* v___x_7470_; lean_object* v___x_7471_; lean_object* v___x_7472_; lean_object* v___x_7473_; lean_object* v___x_7475_; 
v___x_7468_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7462_);
v___x_7469_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7464_);
v___x_7470_ = lean_nat_add(v___x_7468_, v___x_7469_);
lean_dec(v___x_7469_);
lean_dec(v___x_7468_);
v___x_7471_ = lean_mk_empty_array_with_capacity(v___x_7470_);
lean_dec(v___x_7470_);
lean_inc(v_adjustResult_7454_);
v___x_7472_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7454_, v_a_7462_, v___x_7471_);
lean_dec(v_a_7462_);
v___x_7473_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7454_, v_a_7464_, v___x_7472_);
lean_dec(v_a_7464_);
if (v_isShared_7467_ == 0)
{
lean_ctor_set(v___x_7466_, 0, v___x_7473_);
v___x_7475_ = v___x_7466_;
goto v_reusejp_7474_;
}
else
{
lean_object* v_reuseFailAlloc_7476_; 
v_reuseFailAlloc_7476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7476_, 0, v___x_7473_);
v___x_7475_ = v_reuseFailAlloc_7476_;
goto v_reusejp_7474_;
}
v_reusejp_7474_:
{
return v___x_7475_;
}
}
}
else
{
lean_object* v_a_7478_; lean_object* v___x_7480_; uint8_t v_isShared_7481_; uint8_t v_isSharedCheck_7485_; 
lean_dec(v_a_7462_);
lean_dec(v_adjustResult_7454_);
v_a_7478_ = lean_ctor_get(v___x_7463_, 0);
v_isSharedCheck_7485_ = !lean_is_exclusive(v___x_7463_);
if (v_isSharedCheck_7485_ == 0)
{
v___x_7480_ = v___x_7463_;
v_isShared_7481_ = v_isSharedCheck_7485_;
goto v_resetjp_7479_;
}
else
{
lean_inc(v_a_7478_);
lean_dec(v___x_7463_);
v___x_7480_ = lean_box(0);
v_isShared_7481_ = v_isSharedCheck_7485_;
goto v_resetjp_7479_;
}
v_resetjp_7479_:
{
lean_object* v___x_7483_; 
if (v_isShared_7481_ == 0)
{
v___x_7483_ = v___x_7480_;
goto v_reusejp_7482_;
}
else
{
lean_object* v_reuseFailAlloc_7484_; 
v_reuseFailAlloc_7484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7484_, 0, v_a_7478_);
v___x_7483_ = v_reuseFailAlloc_7484_;
goto v_reusejp_7482_;
}
v_reusejp_7482_:
{
return v___x_7483_;
}
}
}
}
else
{
lean_object* v_a_7486_; lean_object* v___x_7488_; uint8_t v_isShared_7489_; uint8_t v_isSharedCheck_7493_; 
lean_dec_ref(v_ty_7455_);
lean_dec(v_adjustResult_7454_);
lean_dec(v_droppedEntriesRef_7453_);
lean_dec(v_constantsPerTask_7452_);
lean_dec(v_droppedKeys_7451_);
lean_dec_ref(v_addEntry_7450_);
v_a_7486_ = lean_ctor_get(v___x_7461_, 0);
v_isSharedCheck_7493_ = !lean_is_exclusive(v___x_7461_);
if (v_isSharedCheck_7493_ == 0)
{
v___x_7488_ = v___x_7461_;
v_isShared_7489_ = v_isSharedCheck_7493_;
goto v_resetjp_7487_;
}
else
{
lean_inc(v_a_7486_);
lean_dec(v___x_7461_);
v___x_7488_ = lean_box(0);
v_isShared_7489_ = v_isSharedCheck_7493_;
goto v_resetjp_7487_;
}
v_resetjp_7487_:
{
lean_object* v___x_7491_; 
if (v_isShared_7489_ == 0)
{
v___x_7491_ = v___x_7488_;
goto v_reusejp_7490_;
}
else
{
lean_object* v_reuseFailAlloc_7492_; 
v_reuseFailAlloc_7492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7492_, 0, v_a_7486_);
v___x_7491_ = v_reuseFailAlloc_7492_;
goto v_reusejp_7490_;
}
v_reusejp_7490_:
{
return v___x_7491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object* v_moduleTreeRef_7494_, lean_object* v_ref_7495_, lean_object* v_addEntry_7496_, lean_object* v_droppedKeys_7497_, lean_object* v_constantsPerTask_7498_, lean_object* v_droppedEntriesRef_7499_, lean_object* v_adjustResult_7500_, lean_object* v_ty_7501_, lean_object* v_a_7502_, lean_object* v_a_7503_, lean_object* v_a_7504_, lean_object* v_a_7505_, lean_object* v_a_7506_){
_start:
{
lean_object* v_res_7507_; 
v_res_7507_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7494_, v_ref_7495_, v_addEntry_7496_, v_droppedKeys_7497_, v_constantsPerTask_7498_, v_droppedEntriesRef_7499_, v_adjustResult_7500_, v_ty_7501_, v_a_7502_, v_a_7503_, v_a_7504_, v_a_7505_);
lean_dec(v_a_7505_);
lean_dec_ref(v_a_7504_);
lean_dec(v_a_7503_);
lean_dec_ref(v_a_7502_);
lean_dec(v_ref_7495_);
return v_res_7507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object* v_00_u03b1_7508_, lean_object* v_00_u03b2_7509_, lean_object* v_moduleTreeRef_7510_, lean_object* v_ref_7511_, lean_object* v_addEntry_7512_, lean_object* v_droppedKeys_7513_, lean_object* v_constantsPerTask_7514_, lean_object* v_droppedEntriesRef_7515_, lean_object* v_adjustResult_7516_, lean_object* v_ty_7517_, lean_object* v_a_7518_, lean_object* v_a_7519_, lean_object* v_a_7520_, lean_object* v_a_7521_){
_start:
{
lean_object* v___x_7523_; 
v___x_7523_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7510_, v_ref_7511_, v_addEntry_7512_, v_droppedKeys_7513_, v_constantsPerTask_7514_, v_droppedEntriesRef_7515_, v_adjustResult_7516_, v_ty_7517_, v_a_7518_, v_a_7519_, v_a_7520_, v_a_7521_);
return v___x_7523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object* v_00_u03b1_7524_, lean_object* v_00_u03b2_7525_, lean_object* v_moduleTreeRef_7526_, lean_object* v_ref_7527_, lean_object* v_addEntry_7528_, lean_object* v_droppedKeys_7529_, lean_object* v_constantsPerTask_7530_, lean_object* v_droppedEntriesRef_7531_, lean_object* v_adjustResult_7532_, lean_object* v_ty_7533_, lean_object* v_a_7534_, lean_object* v_a_7535_, lean_object* v_a_7536_, lean_object* v_a_7537_, lean_object* v_a_7538_){
_start:
{
lean_object* v_res_7539_; 
v_res_7539_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt(v_00_u03b1_7524_, v_00_u03b2_7525_, v_moduleTreeRef_7526_, v_ref_7527_, v_addEntry_7528_, v_droppedKeys_7529_, v_constantsPerTask_7530_, v_droppedEntriesRef_7531_, v_adjustResult_7532_, v_ty_7533_, v_a_7534_, v_a_7535_, v_a_7536_, v_a_7537_);
lean_dec(v_a_7537_);
lean_dec_ref(v_a_7536_);
lean_dec(v_a_7535_);
lean_dec_ref(v_a_7534_);
lean_dec(v_ref_7527_);
return v_res_7539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object* v_00_u03b1_7540_, lean_object* v_00_u03b2_7541_, lean_object* v_adjustResult_7542_, lean_object* v_mr_7543_, lean_object* v_a_7544_){
_start:
{
lean_object* v___x_7545_; 
v___x_7545_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7542_, v_mr_7543_, v_a_7544_);
return v___x_7545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object* v_00_u03b1_7546_, lean_object* v_00_u03b2_7547_, lean_object* v_adjustResult_7548_, lean_object* v_mr_7549_, lean_object* v_a_7550_){
_start:
{
lean_object* v_res_7551_; 
v_res_7551_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(v_00_u03b1_7546_, v_00_u03b2_7547_, v_adjustResult_7548_, v_mr_7549_, v_a_7550_);
lean_dec_ref(v_mr_7549_);
return v_res_7551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object* v_00_u03b1_7552_, lean_object* v_00_u03b2_7553_, lean_object* v_adjustResult_7554_, lean_object* v_j_7555_, size_t v_sz_7556_, size_t v_i_7557_, lean_object* v_bs_7558_){
_start:
{
lean_object* v___x_7559_; 
v___x_7559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7554_, v_j_7555_, v_sz_7556_, v_i_7557_, v_bs_7558_);
return v___x_7559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object* v_00_u03b1_7560_, lean_object* v_00_u03b2_7561_, lean_object* v_adjustResult_7562_, lean_object* v_j_7563_, lean_object* v_sz_7564_, lean_object* v_i_7565_, lean_object* v_bs_7566_){
_start:
{
size_t v_sz_boxed_7567_; size_t v_i_boxed_7568_; lean_object* v_res_7569_; 
v_sz_boxed_7567_ = lean_unbox_usize(v_sz_7564_);
lean_dec(v_sz_7564_);
v_i_boxed_7568_ = lean_unbox_usize(v_i_7565_);
lean_dec(v_i_7565_);
v_res_7569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(v_00_u03b1_7560_, v_00_u03b2_7561_, v_adjustResult_7562_, v_j_7563_, v_sz_boxed_7567_, v_i_boxed_7568_, v_bs_7566_);
return v_res_7569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object* v_00_u03b1_7570_, lean_object* v_00_u03b2_7571_, lean_object* v_adjustResult_7572_, lean_object* v_j_7573_, lean_object* v_as_7574_, size_t v_i_7575_, size_t v_stop_7576_, lean_object* v_b_7577_){
_start:
{
lean_object* v___x_7578_; 
v___x_7578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7572_, v_j_7573_, v_as_7574_, v_i_7575_, v_stop_7576_, v_b_7577_);
return v___x_7578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object* v_00_u03b1_7579_, lean_object* v_00_u03b2_7580_, lean_object* v_adjustResult_7581_, lean_object* v_j_7582_, lean_object* v_as_7583_, lean_object* v_i_7584_, lean_object* v_stop_7585_, lean_object* v_b_7586_){
_start:
{
size_t v_i_boxed_7587_; size_t v_stop_boxed_7588_; lean_object* v_res_7589_; 
v_i_boxed_7587_ = lean_unbox_usize(v_i_7584_);
lean_dec(v_i_7584_);
v_stop_boxed_7588_ = lean_unbox_usize(v_stop_7585_);
lean_dec(v_stop_7585_);
v_res_7589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(v_00_u03b1_7579_, v_00_u03b2_7580_, v_adjustResult_7581_, v_j_7582_, v_as_7583_, v_i_boxed_7587_, v_stop_boxed_7588_, v_b_7586_);
lean_dec_ref(v_as_7583_);
return v_res_7589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object* v_00_u03b2_7590_, lean_object* v_n_7591_, lean_object* v_00_u03b1_7592_, lean_object* v_adjustResult_7593_, lean_object* v_aa_7594_, lean_object* v_n_7595_, lean_object* v_j_7596_, lean_object* v_a_7597_, lean_object* v_a_7598_){
_start:
{
lean_object* v___x_7599_; 
v___x_7599_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7591_, v_adjustResult_7593_, v_aa_7594_, v_n_7595_, v_j_7596_, v_a_7598_);
return v___x_7599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object* v_00_u03b2_7600_, lean_object* v_n_7601_, lean_object* v_00_u03b1_7602_, lean_object* v_adjustResult_7603_, lean_object* v_aa_7604_, lean_object* v_n_7605_, lean_object* v_j_7606_, lean_object* v_a_7607_, lean_object* v_a_7608_){
_start:
{
lean_object* v_res_7609_; 
v_res_7609_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(v_00_u03b2_7600_, v_n_7601_, v_00_u03b1_7602_, v_adjustResult_7603_, v_aa_7604_, v_n_7605_, v_j_7606_, v_a_7607_, v_a_7608_);
lean_dec(v_j_7606_);
lean_dec(v_n_7605_);
lean_dec_ref(v_aa_7604_);
lean_dec(v_n_7601_);
return v_res_7609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_7610_, lean_object* v_n_7611_, lean_object* v_00_u03b1_7612_, lean_object* v_aa_7613_, lean_object* v_adjustResult_7614_, lean_object* v_n_7615_, lean_object* v_j_7616_, lean_object* v_a_7617_, lean_object* v_a_7618_){
_start:
{
lean_object* v___x_7619_; 
v___x_7619_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7611_, v_aa_7613_, v_adjustResult_7614_, v_n_7615_, v_j_7616_, v_a_7618_);
return v___x_7619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_7620_, lean_object* v_n_7621_, lean_object* v_00_u03b1_7622_, lean_object* v_aa_7623_, lean_object* v_adjustResult_7624_, lean_object* v_n_7625_, lean_object* v_j_7626_, lean_object* v_a_7627_, lean_object* v_a_7628_){
_start:
{
lean_object* v_res_7629_; 
v_res_7629_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(v_00_u03b2_7620_, v_n_7621_, v_00_u03b1_7622_, v_aa_7623_, v_adjustResult_7624_, v_n_7625_, v_j_7626_, v_a_7627_, v_a_7628_);
lean_dec(v_n_7625_);
lean_dec_ref(v_aa_7623_);
lean_dec(v_n_7621_);
return v_res_7629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object* v_x_7630_, lean_object* v_v_7631_){
_start:
{
lean_inc(v_v_7631_);
return v_v_7631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object* v_x_7632_, lean_object* v_v_7633_){
_start:
{
lean_object* v_res_7634_; 
v_res_7634_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(v_x_7632_, v_v_7633_);
lean_dec(v_v_7633_);
lean_dec(v_x_7632_);
return v_res_7634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object* v_ref_7636_, lean_object* v_addEntry_7637_, lean_object* v_droppedKeys_7638_, lean_object* v_constantsPerTask_7639_, lean_object* v_droppedEntriesRef_7640_, lean_object* v_ty_7641_, lean_object* v_a_7642_, lean_object* v_a_7643_, lean_object* v_a_7644_, lean_object* v_a_7645_){
_start:
{
lean_object* v___f_7647_; lean_object* v___x_7648_; 
v___f_7647_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0));
lean_inc(v_droppedEntriesRef_7640_);
lean_inc(v_droppedKeys_7638_);
lean_inc_ref(v_addEntry_7637_);
v___x_7648_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_addEntry_7637_, v_droppedKeys_7638_, v_droppedEntriesRef_7640_, v_a_7642_, v_a_7643_, v_a_7644_, v_a_7645_);
if (lean_obj_tag(v___x_7648_) == 0)
{
lean_object* v_a_7649_; lean_object* v___x_7650_; 
v_a_7649_ = lean_ctor_get(v___x_7648_, 0);
lean_inc(v_a_7649_);
lean_dec_ref_known(v___x_7648_, 1);
v___x_7650_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_a_7649_, v_ref_7636_, v_addEntry_7637_, v_droppedKeys_7638_, v_constantsPerTask_7639_, v_droppedEntriesRef_7640_, v___f_7647_, v_ty_7641_, v_a_7642_, v_a_7643_, v_a_7644_, v_a_7645_);
return v___x_7650_;
}
else
{
lean_object* v_a_7651_; lean_object* v___x_7653_; uint8_t v_isShared_7654_; uint8_t v_isSharedCheck_7658_; 
lean_dec_ref(v_ty_7641_);
lean_dec(v_droppedEntriesRef_7640_);
lean_dec(v_constantsPerTask_7639_);
lean_dec(v_droppedKeys_7638_);
lean_dec_ref(v_addEntry_7637_);
v_a_7651_ = lean_ctor_get(v___x_7648_, 0);
v_isSharedCheck_7658_ = !lean_is_exclusive(v___x_7648_);
if (v_isSharedCheck_7658_ == 0)
{
v___x_7653_ = v___x_7648_;
v_isShared_7654_ = v_isSharedCheck_7658_;
goto v_resetjp_7652_;
}
else
{
lean_inc(v_a_7651_);
lean_dec(v___x_7648_);
v___x_7653_ = lean_box(0);
v_isShared_7654_ = v_isSharedCheck_7658_;
goto v_resetjp_7652_;
}
v_resetjp_7652_:
{
lean_object* v___x_7656_; 
if (v_isShared_7654_ == 0)
{
v___x_7656_ = v___x_7653_;
goto v_reusejp_7655_;
}
else
{
lean_object* v_reuseFailAlloc_7657_; 
v_reuseFailAlloc_7657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7657_, 0, v_a_7651_);
v___x_7656_ = v_reuseFailAlloc_7657_;
goto v_reusejp_7655_;
}
v_reusejp_7655_:
{
return v___x_7656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object* v_ref_7659_, lean_object* v_addEntry_7660_, lean_object* v_droppedKeys_7661_, lean_object* v_constantsPerTask_7662_, lean_object* v_droppedEntriesRef_7663_, lean_object* v_ty_7664_, lean_object* v_a_7665_, lean_object* v_a_7666_, lean_object* v_a_7667_, lean_object* v_a_7668_, lean_object* v_a_7669_){
_start:
{
lean_object* v_res_7670_; 
v_res_7670_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7659_, v_addEntry_7660_, v_droppedKeys_7661_, v_constantsPerTask_7662_, v_droppedEntriesRef_7663_, v_ty_7664_, v_a_7665_, v_a_7666_, v_a_7667_, v_a_7668_);
lean_dec(v_a_7668_);
lean_dec_ref(v_a_7667_);
lean_dec(v_a_7666_);
lean_dec_ref(v_a_7665_);
lean_dec(v_ref_7659_);
return v_res_7670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object* v_00_u03b1_7671_, lean_object* v_ref_7672_, lean_object* v_addEntry_7673_, lean_object* v_droppedKeys_7674_, lean_object* v_constantsPerTask_7675_, lean_object* v_droppedEntriesRef_7676_, lean_object* v_ty_7677_, lean_object* v_a_7678_, lean_object* v_a_7679_, lean_object* v_a_7680_, lean_object* v_a_7681_){
_start:
{
lean_object* v___x_7683_; 
v___x_7683_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7672_, v_addEntry_7673_, v_droppedKeys_7674_, v_constantsPerTask_7675_, v_droppedEntriesRef_7676_, v_ty_7677_, v_a_7678_, v_a_7679_, v_a_7680_, v_a_7681_);
return v___x_7683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object* v_00_u03b1_7684_, lean_object* v_ref_7685_, lean_object* v_addEntry_7686_, lean_object* v_droppedKeys_7687_, lean_object* v_constantsPerTask_7688_, lean_object* v_droppedEntriesRef_7689_, lean_object* v_ty_7690_, lean_object* v_a_7691_, lean_object* v_a_7692_, lean_object* v_a_7693_, lean_object* v_a_7694_, lean_object* v_a_7695_){
_start:
{
lean_object* v_res_7696_; 
v_res_7696_ = l_Lean_Meta_LazyDiscrTree_findMatches(v_00_u03b1_7684_, v_ref_7685_, v_addEntry_7686_, v_droppedKeys_7687_, v_constantsPerTask_7688_, v_droppedEntriesRef_7689_, v_ty_7690_, v_a_7691_, v_a_7692_, v_a_7693_, v_a_7694_);
lean_dec(v_a_7694_);
lean_dec_ref(v_a_7693_);
lean_dec(v_a_7692_);
lean_dec_ref(v_a_7691_);
lean_dec(v_ref_7685_);
return v_res_7696_;
}
}
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default = _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default);
l_Lean_Meta_LazyDiscrTree_instInhabitedKey = _init_l_Lean_Meta_LazyDiscrTree_instInhabitedKey();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_instInhabitedKey);
l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar = _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar);
l_Lean_Meta_LazyDiscrTree_initCapacity = _init_l_Lean_Meta_LazyDiscrTree_initCapacity();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LazyDiscrTree(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Instances
// Imports: public import Init.Data.Range.Polymorphic.Stream public import Lean.Meta.DiscrTree.Main public import Lean.Meta.CollectMVars import Lean.Meta.PPBinder import Lean.Util.UnusedBinders import Lean.Meta.CollectFVars import Init.While import Lean.OriginalConstKind import Lean.ProjFns
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_setPPExplicit(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
uint8_t l_Lean_wasOriginallyDefn(lean_object*, lean_object*);
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
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_ppAsBinder(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "synthInstance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkSynthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 153, 166, 25, 45, 140, 142, 203)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 121, 149, 143, 151, 161, 209, 111)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "check that instances do not introduce metavariable in non-out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(210, 135, 61, 136, 69, 26, 61, 117)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(214, 212, 166, 255, 222, 243, 240, 184)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthInstance_checkSynthOrder;
static const lean_array_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry;
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instBEqInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instBEqInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instBEqInstanceEntry = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
static const lean_string_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<local>"};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_instToFormatInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instToFormatInstanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instToFormatInstanceEntry = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__3;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not have [instance] attribute"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 253, 187, 89, 234, 162, 232, 19)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instanceExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "semiOutParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 187, 140, 108, 143, 232, 13, 120)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cannot find synthesization order for instance "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " with type"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nall remaining arguments have metavariables:"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed__const__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "synthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 119, 89, 231, 199, 121, 219, 201)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "synthesizing the arguments of "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in the order "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "instance does not provide concrete values for (semi-)out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "argument "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ": `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = " that cannot be inferred using typeclass synthesis. Specifically\n"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 176, .m_capacity = 176, .m_length = 175, .m_data = "\n\nThese arguments are not instance-implicit and appear neither in another instance-implicit argument nor the return type, so they cannot be inferred using typeclass synthesis."};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5;
static const lean_array_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value),((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_value)}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "This instance has "};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " argument"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The declaration `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "` should not be an instance as its return type `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a type class."};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "classDefReducibility"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 199, 74, 147, 156, 95, 99, 180)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__0 = (const lean_object*)&l_Lean_Meta_addInstance___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__1;
static const lean_string_object l_Lean_Meta_addInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` must be marked with `@[expose]`"};
static const lean_object* l_Lean_Meta_addInstance___closed__2 = (const lean_object*)&l_Lean_Meta_addInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__3;
static const lean_string_object l_Lean_Meta_addInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Definition `"};
static const lean_object* l_Lean_Meta_addInstance___closed__4 = (const lean_object*)&l_Lean_Meta_addInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__5;
static const lean_string_object l_Lean_Meta_addInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 274, .m_capacity = 274, .m_length = 273, .m_data = "` of class type is semireducible. Most type class instances should be instance-reducible, so consider marking this\ndefinition with `@[instance_reducible]`. If it is intentionally semireducible, this warning can be disabled with `set_option warn.classDefReducibility false`."};
static const lean_object* l_Lean_Meta_addInstance___closed__6 = (const lean_object*)&l_Lean_Meta_addInstance___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Instances"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 216, 85, 168, 141, 176, 253, 81)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type class instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 428, .m_capacity = 428, .m_length = 427, .m_data = "Registers type class instances.\n\nThe `instance` command, which expands to `@[instance] def`, is usually preferred over using this\nattribute directly. However it might sometimes still be necessary to use this attribute directly,\nin particular for `opaque` instances.\n\nTo assign priorities to instances, `@[instance prio]` can be used (where `prio` is a priority).\nThis corresponds to the `instance (priority := prio)` notation.\n"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "defaultInstanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 56, 120, 160, 178, 206, 131, 123)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addDefaultInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_defaultInstanceExtension;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid default instance `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`, it has type `("};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " ...)`, but `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "`, type must be of the form `(C ...)` where `C` is a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "default_instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 85, 15, 3, 86, 102, 227, 255)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 9, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "type class default instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_box(0);
v___x_65_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2));
v___x_66_ = l_Lean_Expr_const___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4(void){
_start:
{
uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_67_ = 0;
v___x_68_ = lean_box(0);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3);
v___x_71_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0));
v___x_72_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
lean_ctor_set(v___x_72_, 2, v___x_69_);
lean_ctor_set(v___x_72_, 3, v___x_68_);
lean_ctor_set(v___x_72_, 4, v___x_71_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*5, v___x_67_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_instInhabitedInstanceEntry_default;
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object* v_e_u2081_75_, lean_object* v_e_u2082_76_){
_start:
{
lean_object* v_val_77_; lean_object* v_val_78_; uint8_t v___x_79_; 
v_val_77_ = lean_ctor_get(v_e_u2081_75_, 1);
v_val_78_ = lean_ctor_get(v_e_u2082_76_, 1);
v___x_79_ = lean_expr_eqv(v_val_77_, v_val_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object* v_e_u2081_80_, lean_object* v_e_u2082_81_){
_start:
{
uint8_t v_res_82_; lean_object* v_r_83_; 
v_res_82_ = l_Lean_Meta_instBEqInstanceEntry___lam__0(v_e_u2081_80_, v_e_u2082_81_);
lean_dec_ref(v_e_u2082_81_);
lean_dec_ref(v_e_u2081_80_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object* v_e_89_){
_start:
{
lean_object* v_globalName_x3f_90_; 
v_globalName_x3f_90_ = lean_ctor_get(v_e_89_, 3);
lean_inc(v_globalName_x3f_90_);
lean_dec_ref(v_e_89_);
if (lean_obj_tag(v_globalName_x3f_90_) == 1)
{
lean_object* v_val_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_100_; 
v_val_91_ = lean_ctor_get(v_globalName_x3f_90_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v_globalName_x3f_90_);
if (v_isSharedCheck_100_ == 0)
{
v___x_93_ = v_globalName_x3f_90_;
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_val_91_);
lean_dec(v_globalName_x3f_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_95_ = 1;
v___x_96_ = l_Lean_Name_toString(v_val_91_, v___x_95_);
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 3);
lean_ctor_set(v___x_93_, 0, v___x_96_);
v___x_98_ = v___x_93_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
else
{
lean_object* v___x_101_; 
lean_dec(v_globalName_x3f_90_);
v___x_101_ = ((lean_object*)(l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1));
return v___x_101_;
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg(){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object* v___dummy_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v_res_110_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object* v_00_u03b2_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__1(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__2(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
v___x_118_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__1, &l_Lean_Meta_instInhabitedInstances_default___closed__1_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__1);
v___x_119_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__0, &l_Lean_Meta_instInhabitedInstances_default___closed__0_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__0);
v___x_120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_instInhabitedInstances_default;
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(lean_object* v_x_123_, lean_object* v_x_124_, lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
lean_object* v_ks_127_; lean_object* v_vs_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_152_; 
v_ks_127_ = lean_ctor_get(v_x_123_, 0);
v_vs_128_ = lean_ctor_get(v_x_123_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_123_);
if (v_isSharedCheck_152_ == 0)
{
v___x_130_ = v_x_123_;
v_isShared_131_ = v_isSharedCheck_152_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_vs_128_);
lean_inc(v_ks_127_);
lean_dec(v_x_123_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_152_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_array_get_size(v_ks_127_);
v___x_133_ = lean_nat_dec_lt(v_x_124_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
lean_dec(v_x_124_);
v___x_134_ = lean_array_push(v_ks_127_, v_x_125_);
v___x_135_ = lean_array_push(v_vs_128_, v_x_126_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_135_);
lean_ctor_set(v___x_130_, 0, v___x_134_);
v___x_137_ = v___x_130_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_134_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
else
{
lean_object* v_k_x27_139_; uint8_t v___x_140_; 
v_k_x27_139_ = lean_array_fget_borrowed(v_ks_127_, v_x_124_);
v___x_140_ = lean_name_eq(v_x_125_, v_k_x27_139_);
if (v___x_140_ == 0)
{
lean_object* v___x_142_; 
if (v_isShared_131_ == 0)
{
v___x_142_ = v___x_130_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_ks_127_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_vs_128_);
v___x_142_ = v_reuseFailAlloc_146_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = lean_nat_add(v_x_124_, v___x_143_);
lean_dec(v_x_124_);
v_x_123_ = v___x_142_;
v_x_124_ = v___x_144_;
goto _start;
}
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_147_ = lean_array_fset(v_ks_127_, v_x_124_, v_x_125_);
v___x_148_ = lean_array_fset(v_vs_128_, v_x_124_, v_x_126_);
lean_dec(v_x_124_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_148_);
lean_ctor_set(v___x_130_, 0, v___x_147_);
v___x_150_ = v___x_130_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_n_153_, lean_object* v_k_154_, lean_object* v_v_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(v_n_153_, v___x_156_, v_k_154_, v_v_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_box(0);
v___x_159_ = l_unsafeCast___redArg(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(lean_object* v_x_161_, size_t v_x_162_, size_t v_x_163_, lean_object* v_x_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_161_) == 0)
{
lean_object* v_es_166_; size_t v___x_167_; size_t v___x_168_; lean_object* v_j_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v_es_166_ = lean_ctor_get(v_x_161_, 0);
v___x_167_ = ((size_t)31ULL);
v___x_168_ = lean_usize_land(v_x_162_, v___x_167_);
v_j_169_ = lean_usize_to_nat(v___x_168_);
v___x_170_ = lean_array_get_size(v_es_166_);
v___x_171_ = lean_nat_dec_lt(v_j_169_, v___x_170_);
if (v___x_171_ == 0)
{
lean_dec(v_j_169_);
lean_dec(v_x_165_);
lean_dec(v_x_164_);
return v_x_161_;
}
else
{
lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_210_; 
lean_inc_ref(v_es_166_);
v_isSharedCheck_210_ = !lean_is_exclusive(v_x_161_);
if (v_isSharedCheck_210_ == 0)
{
lean_object* v_unused_211_; 
v_unused_211_ = lean_ctor_get(v_x_161_, 0);
lean_dec(v_unused_211_);
v___x_173_ = v_x_161_;
v_isShared_174_ = v_isSharedCheck_210_;
goto v_resetjp_172_;
}
else
{
lean_dec(v_x_161_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_210_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v_v_175_; lean_object* v___x_176_; lean_object* v_xs_x27_177_; lean_object* v___y_179_; 
v_v_175_ = lean_array_fget(v_es_166_, v_j_169_);
v___x_176_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_177_ = lean_array_fset(v_es_166_, v_j_169_, v___x_176_);
switch(lean_obj_tag(v_v_175_))
{
case 0:
{
lean_object* v_key_184_; lean_object* v_val_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_195_; 
v_key_184_ = lean_ctor_get(v_v_175_, 0);
v_val_185_ = lean_ctor_get(v_v_175_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_v_175_);
if (v_isSharedCheck_195_ == 0)
{
v___x_187_ = v_v_175_;
v_isShared_188_ = v_isSharedCheck_195_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_val_185_);
lean_inc(v_key_184_);
lean_dec(v_v_175_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_195_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
uint8_t v___x_189_; 
v___x_189_ = lean_name_eq(v_x_164_, v_key_184_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_del_object(v___x_187_);
v___x_190_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_184_, v_val_185_, v_x_164_, v_x_165_);
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
v___y_179_ = v___x_191_;
goto v___jp_178_;
}
else
{
lean_object* v___x_193_; 
lean_dec(v_val_185_);
lean_dec(v_key_184_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v_x_165_);
lean_ctor_set(v___x_187_, 0, v_x_164_);
v___x_193_ = v___x_187_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_x_164_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_x_165_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
v___y_179_ = v___x_193_;
goto v___jp_178_;
}
}
}
}
case 1:
{
lean_object* v_node_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_208_; 
v_node_196_ = lean_ctor_get(v_v_175_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v_v_175_);
if (v_isSharedCheck_208_ == 0)
{
v___x_198_ = v_v_175_;
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_node_196_);
lean_dec(v_v_175_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
size_t v___x_200_; size_t v___x_201_; size_t v___x_202_; size_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_200_ = ((size_t)5ULL);
v___x_201_ = lean_usize_shift_right(v_x_162_, v___x_200_);
v___x_202_ = ((size_t)1ULL);
v___x_203_ = lean_usize_add(v_x_163_, v___x_202_);
v___x_204_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_node_196_, v___x_201_, v___x_203_, v_x_164_, v_x_165_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_204_);
v___x_206_ = v___x_198_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
v___y_179_ = v___x_206_;
goto v___jp_178_;
}
}
}
default: 
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v_x_164_);
lean_ctor_set(v___x_209_, 1, v_x_165_);
v___y_179_ = v___x_209_;
goto v___jp_178_;
}
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_180_ = lean_array_fset(v_xs_x27_177_, v_j_169_, v___y_179_);
lean_dec(v_j_169_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_180_);
v___x_182_ = v___x_173_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
else
{
lean_object* v_ks_212_; lean_object* v_vs_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_231_; 
v_ks_212_ = lean_ctor_get(v_x_161_, 0);
v_vs_213_ = lean_ctor_get(v_x_161_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v_x_161_);
if (v_isSharedCheck_231_ == 0)
{
v___x_215_ = v_x_161_;
v_isShared_216_ = v_isSharedCheck_231_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_vs_213_);
lean_inc(v_ks_212_);
lean_dec(v_x_161_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_231_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_ks_212_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_vs_213_);
v___x_218_ = v_reuseFailAlloc_230_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v_newNode_219_; size_t v___x_220_; uint8_t v___x_221_; 
v_newNode_219_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(v___x_218_, v_x_164_, v_x_165_);
v___x_220_ = ((size_t)7ULL);
v___x_221_ = lean_usize_dec_le(v___x_220_, v_x_163_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_222_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_219_);
v___x_223_ = lean_unsigned_to_nat(4u);
v___x_224_ = lean_nat_dec_lt(v___x_222_, v___x_223_);
lean_dec(v___x_222_);
if (v___x_224_ == 0)
{
lean_object* v_ks_225_; lean_object* v_vs_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_ks_225_ = lean_ctor_get(v_newNode_219_, 0);
lean_inc_ref(v_ks_225_);
v_vs_226_ = lean_ctor_get(v_newNode_219_, 1);
lean_inc_ref(v_vs_226_);
lean_dec_ref(v_newNode_219_);
v___x_227_ = lean_unsigned_to_nat(0u);
v___x_228_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1);
v___x_229_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_x_163_, v_ks_225_, v_vs_226_, v___x_227_, v___x_228_);
lean_dec_ref(v_vs_226_);
lean_dec_ref(v_ks_225_);
return v___x_229_;
}
else
{
return v_newNode_219_;
}
}
else
{
return v_newNode_219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(size_t v_depth_232_, lean_object* v_keys_233_, lean_object* v_vals_234_, lean_object* v_i_235_, lean_object* v_entries_236_){
_start:
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = lean_array_get_size(v_keys_233_);
v___x_238_ = lean_nat_dec_lt(v_i_235_, v___x_237_);
if (v___x_238_ == 0)
{
lean_dec(v_i_235_);
return v_entries_236_;
}
else
{
lean_object* v_k_239_; lean_object* v_v_240_; uint64_t v___y_242_; lean_object* v___x_253_; 
v_k_239_ = lean_array_fget_borrowed(v_keys_233_, v_i_235_);
v_v_240_ = lean_array_fget_borrowed(v_vals_234_, v_i_235_);
v___x_253_ = l_unsafeCast___redArg(v_k_239_);
if (lean_obj_tag(v___x_253_) == 0)
{
uint64_t v___x_254_; 
v___x_254_ = 1723ULL;
v___y_242_ = v___x_254_;
goto v___jp_241_;
}
else
{
uint64_t v_hash_255_; 
v_hash_255_ = lean_ctor_get_uint64(v___x_253_, sizeof(void*)*2);
lean_dec(v___x_253_);
v___y_242_ = v_hash_255_;
goto v___jp_241_;
}
v___jp_241_:
{
size_t v_h_243_; size_t v___x_244_; lean_object* v___x_245_; size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; size_t v_h_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_h_243_ = lean_uint64_to_usize(v___y_242_);
v___x_244_ = ((size_t)5ULL);
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = ((size_t)1ULL);
v___x_247_ = lean_usize_sub(v_depth_232_, v___x_246_);
v___x_248_ = lean_usize_mul(v___x_244_, v___x_247_);
v_h_249_ = lean_usize_shift_right(v_h_243_, v___x_248_);
v___x_250_ = lean_nat_add(v_i_235_, v___x_245_);
lean_dec(v_i_235_);
lean_inc(v_v_240_);
lean_inc(v_k_239_);
v___x_251_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_entries_236_, v_h_249_, v_depth_232_, v_k_239_, v_v_240_);
v_i_235_ = v___x_250_;
v_entries_236_ = v___x_251_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_depth_256_, lean_object* v_keys_257_, lean_object* v_vals_258_, lean_object* v_i_259_, lean_object* v_entries_260_){
_start:
{
size_t v_depth_boxed_261_; lean_object* v_res_262_; 
v_depth_boxed_261_ = lean_unbox_usize(v_depth_256_);
lean_dec(v_depth_256_);
v_res_262_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_depth_boxed_261_, v_keys_257_, v_vals_258_, v_i_259_, v_entries_260_);
lean_dec_ref(v_vals_258_);
lean_dec_ref(v_keys_257_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object* v_x_263_, lean_object* v_x_264_, lean_object* v_x_265_, lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
size_t v_x_2131__boxed_268_; size_t v_x_2132__boxed_269_; lean_object* v_res_270_; 
v_x_2131__boxed_268_ = lean_unbox_usize(v_x_264_);
lean_dec(v_x_264_);
v_x_2132__boxed_269_ = lean_unbox_usize(v_x_265_);
lean_dec(v_x_265_);
v_res_270_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_263_, v_x_2131__boxed_268_, v_x_2132__boxed_269_, v_x_266_, v_x_267_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(lean_object* v_x_271_, lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
uint64_t v___y_275_; lean_object* v___x_279_; 
v___x_279_ = l_unsafeCast___redArg(v_x_272_);
if (lean_obj_tag(v___x_279_) == 0)
{
uint64_t v___x_280_; 
v___x_280_ = 1723ULL;
v___y_275_ = v___x_280_;
goto v___jp_274_;
}
else
{
uint64_t v_hash_281_; 
v_hash_281_ = lean_ctor_get_uint64(v___x_279_, sizeof(void*)*2);
lean_dec(v___x_279_);
v___y_275_ = v_hash_281_;
goto v___jp_274_;
}
v___jp_274_:
{
size_t v___x_276_; size_t v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_uint64_to_usize(v___y_275_);
v___x_277_ = ((size_t)1ULL);
v___x_278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_271_, v___x_276_, v___x_277_, v_x_272_, v_x_273_);
return v___x_278_;
}
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(lean_object* v_msg_283_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0);
v___x_285_ = lean_panic_fn_borrowed(v___x_284_, v_msg_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(lean_object* v_xs_286_, lean_object* v_v_287_, lean_object* v_i_288_){
_start:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_array_get_size(v_xs_286_);
v___x_290_ = lean_nat_dec_lt(v_i_288_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; 
lean_dec(v_i_288_);
v___x_291_ = lean_box(0);
return v___x_291_;
}
else
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_array_fget_borrowed(v_xs_286_, v_i_288_);
v___x_293_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_292_, v_v_287_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lean_nat_add(v_i_288_, v___x_294_);
lean_dec(v_i_288_);
v_i_288_ = v___x_295_;
goto _start;
}
else
{
lean_object* v___x_297_; 
v___x_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_297_, 0, v_i_288_);
return v___x_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10___boxed(lean_object* v_xs_298_, lean_object* v_v_299_, lean_object* v_i_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(v_xs_298_, v_v_299_, v_i_300_);
lean_dec(v_v_299_);
lean_dec_ref(v_xs_298_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(lean_object* v_xs_302_, lean_object* v_v_303_){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(0u);
v___x_305_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(v_xs_302_, v_v_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4___boxed(lean_object* v_xs_306_, lean_object* v_v_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(v_xs_306_, v_v_307_);
lean_dec(v_v_307_);
lean_dec_ref(v_xs_306_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(lean_object* v_x_309_, lean_object* v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
lean_object* v_ks_313_; lean_object* v_vs_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_338_; 
v_ks_313_ = lean_ctor_get(v_x_309_, 0);
v_vs_314_ = lean_ctor_get(v_x_309_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v_x_309_);
if (v_isSharedCheck_338_ == 0)
{
v___x_316_ = v_x_309_;
v_isShared_317_ = v_isSharedCheck_338_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_vs_314_);
lean_inc(v_ks_313_);
lean_dec(v_x_309_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_338_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = lean_array_get_size(v_ks_313_);
v___x_319_ = lean_nat_dec_lt(v_x_310_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
lean_dec(v_x_310_);
v___x_320_ = lean_array_push(v_ks_313_, v_x_311_);
v___x_321_ = lean_array_push(v_vs_314_, v_x_312_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_321_);
lean_ctor_set(v___x_316_, 0, v___x_320_);
v___x_323_ = v___x_316_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
else
{
lean_object* v_k_x27_325_; uint8_t v___x_326_; 
v_k_x27_325_ = lean_array_fget_borrowed(v_ks_313_, v_x_310_);
v___x_326_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_311_, v_k_x27_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_328_; 
if (v_isShared_317_ == 0)
{
v___x_328_ = v___x_316_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_ks_313_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_vs_314_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_add(v_x_310_, v___x_329_);
lean_dec(v_x_310_);
v_x_309_ = v___x_328_;
v_x_310_ = v___x_330_;
goto _start;
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_333_ = lean_array_fset(v_ks_313_, v_x_310_, v_x_311_);
v___x_334_ = lean_array_fset(v_vs_314_, v_x_310_, v_x_312_);
lean_dec(v_x_310_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_334_);
lean_ctor_set(v___x_316_, 0, v___x_333_);
v___x_336_ = v___x_316_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(lean_object* v_n_339_, lean_object* v_k_340_, lean_object* v_v_341_){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(v_n_339_, v___x_342_, v_k_340_, v_v_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(lean_object* v_x_344_, size_t v_x_345_, size_t v_x_346_, lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_344_) == 0)
{
lean_object* v_es_349_; size_t v___x_350_; size_t v___x_351_; lean_object* v_j_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v_es_349_ = lean_ctor_get(v_x_344_, 0);
v___x_350_ = ((size_t)31ULL);
v___x_351_ = lean_usize_land(v_x_345_, v___x_350_);
v_j_352_ = lean_usize_to_nat(v___x_351_);
v___x_353_ = lean_array_get_size(v_es_349_);
v___x_354_ = lean_nat_dec_lt(v_j_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_dec(v_j_352_);
lean_dec(v_x_348_);
lean_dec(v_x_347_);
return v_x_344_;
}
else
{
lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_393_; 
lean_inc_ref(v_es_349_);
v_isSharedCheck_393_ = !lean_is_exclusive(v_x_344_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; 
v_unused_394_ = lean_ctor_get(v_x_344_, 0);
lean_dec(v_unused_394_);
v___x_356_ = v_x_344_;
v_isShared_357_ = v_isSharedCheck_393_;
goto v_resetjp_355_;
}
else
{
lean_dec(v_x_344_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_393_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v_v_358_; lean_object* v___x_359_; lean_object* v_xs_x27_360_; lean_object* v___y_362_; 
v_v_358_ = lean_array_fget(v_es_349_, v_j_352_);
v___x_359_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_360_ = lean_array_fset(v_es_349_, v_j_352_, v___x_359_);
switch(lean_obj_tag(v_v_358_))
{
case 0:
{
lean_object* v_key_367_; lean_object* v_val_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_378_; 
v_key_367_ = lean_ctor_get(v_v_358_, 0);
v_val_368_ = lean_ctor_get(v_v_358_, 1);
v_isSharedCheck_378_ = !lean_is_exclusive(v_v_358_);
if (v_isSharedCheck_378_ == 0)
{
v___x_370_ = v_v_358_;
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_val_368_);
lean_inc(v_key_367_);
lean_dec(v_v_358_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
uint8_t v___x_372_; 
v___x_372_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_347_, v_key_367_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; 
lean_del_object(v___x_370_);
v___x_373_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_367_, v_val_368_, v_x_347_, v_x_348_);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
v___y_362_ = v___x_374_;
goto v___jp_361_;
}
else
{
lean_object* v___x_376_; 
lean_dec(v_val_368_);
lean_dec(v_key_367_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 1, v_x_348_);
lean_ctor_set(v___x_370_, 0, v_x_347_);
v___x_376_ = v___x_370_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_x_347_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_x_348_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
v___y_362_ = v___x_376_;
goto v___jp_361_;
}
}
}
}
case 1:
{
lean_object* v_node_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_391_; 
v_node_379_ = lean_ctor_get(v_v_358_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_v_358_);
if (v_isSharedCheck_391_ == 0)
{
v___x_381_ = v_v_358_;
v_isShared_382_ = v_isSharedCheck_391_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_node_379_);
lean_dec(v_v_358_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_391_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
size_t v___x_383_; size_t v___x_384_; size_t v___x_385_; size_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_383_ = ((size_t)5ULL);
v___x_384_ = lean_usize_shift_right(v_x_345_, v___x_383_);
v___x_385_ = ((size_t)1ULL);
v___x_386_ = lean_usize_add(v_x_346_, v___x_385_);
v___x_387_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_node_379_, v___x_384_, v___x_386_, v_x_347_, v_x_348_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_387_);
v___x_389_ = v___x_381_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
v___y_362_ = v___x_389_;
goto v___jp_361_;
}
}
}
default: 
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_x_347_);
lean_ctor_set(v___x_392_, 1, v_x_348_);
v___y_362_ = v___x_392_;
goto v___jp_361_;
}
}
v___jp_361_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_array_fset(v_xs_x27_360_, v_j_352_, v___y_362_);
lean_dec(v_j_352_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_363_);
v___x_365_ = v___x_356_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
else
{
lean_object* v_ks_395_; lean_object* v_vs_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_414_; 
v_ks_395_ = lean_ctor_get(v_x_344_, 0);
v_vs_396_ = lean_ctor_get(v_x_344_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_x_344_);
if (v_isSharedCheck_414_ == 0)
{
v___x_398_ = v_x_344_;
v_isShared_399_ = v_isSharedCheck_414_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_vs_396_);
lean_inc(v_ks_395_);
lean_dec(v_x_344_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_414_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_ks_395_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_vs_396_);
v___x_401_ = v_reuseFailAlloc_413_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v_newNode_402_; size_t v___x_403_; uint8_t v___x_404_; 
v_newNode_402_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(v___x_401_, v_x_347_, v_x_348_);
v___x_403_ = ((size_t)7ULL);
v___x_404_ = lean_usize_dec_le(v___x_403_, v_x_346_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_405_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_402_);
v___x_406_ = lean_unsigned_to_nat(4u);
v___x_407_ = lean_nat_dec_lt(v___x_405_, v___x_406_);
lean_dec(v___x_405_);
if (v___x_407_ == 0)
{
lean_object* v_ks_408_; lean_object* v_vs_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v_ks_408_ = lean_ctor_get(v_newNode_402_, 0);
lean_inc_ref(v_ks_408_);
v_vs_409_ = lean_ctor_get(v_newNode_402_, 1);
lean_inc_ref(v_vs_409_);
lean_dec_ref(v_newNode_402_);
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1);
v___x_412_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_x_346_, v_ks_408_, v_vs_409_, v___x_410_, v___x_411_);
lean_dec_ref(v_vs_409_);
lean_dec_ref(v_ks_408_);
return v___x_412_;
}
else
{
return v_newNode_402_;
}
}
else
{
return v_newNode_402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(size_t v_depth_415_, lean_object* v_keys_416_, lean_object* v_vals_417_, lean_object* v_i_418_, lean_object* v_entries_419_){
_start:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_array_get_size(v_keys_416_);
v___x_421_ = lean_nat_dec_lt(v_i_418_, v___x_420_);
if (v___x_421_ == 0)
{
lean_dec(v_i_418_);
return v_entries_419_;
}
else
{
lean_object* v_k_422_; lean_object* v_v_423_; uint64_t v___x_424_; size_t v_h_425_; size_t v___x_426_; lean_object* v___x_427_; size_t v___x_428_; size_t v___x_429_; size_t v___x_430_; size_t v_h_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_k_422_ = lean_array_fget_borrowed(v_keys_416_, v_i_418_);
v_v_423_ = lean_array_fget_borrowed(v_vals_417_, v_i_418_);
v___x_424_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_422_);
v_h_425_ = lean_uint64_to_usize(v___x_424_);
v___x_426_ = ((size_t)5ULL);
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_sub(v_depth_415_, v___x_428_);
v___x_430_ = lean_usize_mul(v___x_426_, v___x_429_);
v_h_431_ = lean_usize_shift_right(v_h_425_, v___x_430_);
v___x_432_ = lean_nat_add(v_i_418_, v___x_427_);
lean_dec(v_i_418_);
lean_inc(v_v_423_);
lean_inc(v_k_422_);
v___x_433_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_entries_419_, v_h_431_, v_depth_415_, v_k_422_, v_v_423_);
v_i_418_ = v___x_432_;
v_entries_419_ = v___x_433_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg___boxed(lean_object* v_depth_435_, lean_object* v_keys_436_, lean_object* v_vals_437_, lean_object* v_i_438_, lean_object* v_entries_439_){
_start:
{
size_t v_depth_boxed_440_; lean_object* v_res_441_; 
v_depth_boxed_440_ = lean_unbox_usize(v_depth_435_);
lean_dec(v_depth_435_);
v_res_441_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_depth_boxed_440_, v_keys_436_, v_vals_437_, v_i_438_, v_entries_439_);
lean_dec_ref(v_vals_437_);
lean_dec_ref(v_keys_436_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_x_442_, lean_object* v_x_443_, lean_object* v_x_444_, lean_object* v_x_445_, lean_object* v_x_446_){
_start:
{
size_t v_x_2414__boxed_447_; size_t v_x_2415__boxed_448_; lean_object* v_res_449_; 
v_x_2414__boxed_447_ = lean_unbox_usize(v_x_443_);
lean_dec(v_x_443_);
v_x_2415__boxed_448_ = lean_unbox_usize(v_x_444_);
lean_dec(v_x_444_);
v_res_449_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_x_442_, v_x_2414__boxed_447_, v_x_2415__boxed_448_, v_x_445_, v_x_446_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(lean_object* v_x_450_, lean_object* v_keys_451_, lean_object* v_v_452_, lean_object* v_k_453_, lean_object* v_x_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_c_457_; lean_object* v___x_458_; 
v___x_455_ = lean_unsigned_to_nat(1u);
v___x_456_ = lean_nat_add(v_x_450_, v___x_455_);
v_c_457_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_451_, v_v_452_, v___x_456_);
lean_dec(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v_k_453_);
lean_ctor_set(v___x_458_, 1, v_c_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0___boxed(lean_object* v_x_459_, lean_object* v_keys_460_, lean_object* v_v_461_, lean_object* v_k_462_, lean_object* v_x_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_459_, v_keys_460_, v_v_461_, v_k_462_, v_x_463_);
lean_dec_ref(v_keys_460_);
lean_dec(v_x_459_);
return v_res_464_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(lean_object* v_a_465_, lean_object* v_b_466_){
_start:
{
lean_object* v_fst_467_; lean_object* v_fst_468_; uint8_t v___x_469_; 
v_fst_467_ = lean_ctor_get(v_a_465_, 0);
v_fst_468_ = lean_ctor_get(v_b_466_, 0);
v___x_469_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_467_, v_fst_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1___boxed(lean_object* v_a_470_, lean_object* v_b_471_){
_start:
{
uint8_t v_res_472_; lean_object* v_r_473_; 
v_res_472_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_a_470_, v_b_471_);
lean_dec_ref(v_b_471_);
lean_dec_ref(v_a_470_);
v_r_473_ = lean_box(v_res_472_);
return v_r_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(lean_object* v_vs_474_, lean_object* v_v_475_, lean_object* v_i_476_){
_start:
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = lean_array_get_size(v_vs_474_);
v___x_478_ = lean_nat_dec_lt(v_i_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec(v_i_476_);
v___x_479_ = lean_array_push(v_vs_474_, v_v_475_);
return v___x_479_;
}
else
{
lean_object* v_val_480_; lean_object* v___x_481_; lean_object* v_val_482_; uint8_t v___x_483_; 
v_val_480_ = lean_ctor_get(v_v_475_, 1);
v___x_481_ = lean_array_fget_borrowed(v_vs_474_, v_i_476_);
v_val_482_ = lean_ctor_get(v___x_481_, 1);
v___x_483_ = lean_expr_eqv(v_val_480_, v_val_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = lean_nat_add(v_i_476_, v___x_484_);
lean_dec(v_i_476_);
v_i_476_ = v___x_485_;
goto _start;
}
else
{
lean_object* v___x_487_; 
v___x_487_ = lean_array_fset(v_vs_474_, v_i_476_, v_v_475_);
lean_dec(v_i_476_);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(lean_object* v_vs_488_, lean_object* v_v_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(v_vs_488_, v_v_489_, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_x_496_, lean_object* v_keys_497_, lean_object* v_v_498_, lean_object* v_k_499_, lean_object* v_as_500_, lean_object* v_k_501_, lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_mid_506_; lean_object* v_midVal_507_; uint8_t v___x_508_; 
v___x_504_ = lean_nat_add(v_x_502_, v_x_503_);
v___x_505_ = lean_unsigned_to_nat(1u);
v_mid_506_ = lean_nat_shiftr(v___x_504_, v___x_505_);
lean_dec(v___x_504_);
v_midVal_507_ = lean_array_fget(v_as_500_, v_mid_506_);
v___x_508_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_midVal_507_, v_k_501_);
if (v___x_508_ == 0)
{
uint8_t v___x_509_; 
lean_dec(v_x_503_);
v___x_509_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_501_, v_midVal_507_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; uint8_t v___x_511_; 
lean_dec(v_x_502_);
v___x_510_ = lean_array_get_size(v_as_500_);
v___x_511_ = lean_nat_dec_lt(v_mid_506_, v___x_510_);
if (v___x_511_ == 0)
{
lean_dec(v_midVal_507_);
lean_dec(v_mid_506_);
lean_dec(v_k_499_);
lean_dec_ref(v_v_498_);
return v_as_500_;
}
else
{
lean_object* v_snd_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_524_; 
v_snd_512_ = lean_ctor_get(v_midVal_507_, 1);
v_isSharedCheck_524_ = !lean_is_exclusive(v_midVal_507_);
if (v_isSharedCheck_524_ == 0)
{
lean_object* v_unused_525_; 
v_unused_525_ = lean_ctor_get(v_midVal_507_, 0);
lean_dec(v_unused_525_);
v___x_514_ = v_midVal_507_;
v_isShared_515_ = v_isSharedCheck_524_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_snd_512_);
lean_dec(v_midVal_507_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_524_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v_xs_x27_517_; lean_object* v___x_518_; lean_object* v_c_519_; lean_object* v___x_521_; 
v___x_516_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_517_ = lean_array_fset(v_as_500_, v_mid_506_, v___x_516_);
v___x_518_ = lean_nat_add(v_x_496_, v___x_505_);
v_c_519_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_497_, v_v_498_, v___x_518_, v_snd_512_);
lean_dec(v___x_518_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 1, v_c_519_);
lean_ctor_set(v___x_514_, 0, v_k_499_);
v___x_521_ = v___x_514_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_k_499_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_c_519_);
v___x_521_ = v_reuseFailAlloc_523_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; 
v___x_522_ = lean_array_fset(v_xs_x27_517_, v_mid_506_, v___x_521_);
lean_dec(v_mid_506_);
return v___x_522_;
}
}
}
}
else
{
lean_dec(v_midVal_507_);
v_x_503_ = v_mid_506_;
goto _start;
}
}
else
{
uint8_t v___x_527_; 
lean_dec(v_midVal_507_);
v___x_527_ = lean_nat_dec_eq(v_mid_506_, v_x_502_);
if (v___x_527_ == 0)
{
lean_dec(v_x_502_);
v_x_502_ = v_mid_506_;
goto _start;
}
else
{
lean_object* v___x_529_; lean_object* v_c_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_j_533_; lean_object* v_as_534_; lean_object* v___x_535_; 
lean_dec(v_mid_506_);
lean_dec(v_x_503_);
v___x_529_ = lean_nat_add(v_x_496_, v___x_505_);
v_c_530_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_497_, v_v_498_, v___x_529_);
lean_dec(v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v_k_499_);
lean_ctor_set(v___x_531_, 1, v_c_530_);
v___x_532_ = lean_nat_add(v_x_502_, v___x_505_);
lean_dec(v_x_502_);
v_j_533_ = lean_array_get_size(v_as_500_);
v_as_534_ = lean_array_push(v_as_500_, v___x_531_);
v___x_535_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_532_, v_as_534_, v_j_533_);
lean_dec(v___x_532_);
return v___x_535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(lean_object* v_x_536_, lean_object* v_keys_537_, lean_object* v_v_538_, lean_object* v_k_539_, lean_object* v_as_540_, lean_object* v_k_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_542_ = lean_array_get_size(v_as_540_);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_nat_dec_eq(v___x_542_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_array_fget_borrowed(v_as_540_, v___x_543_);
v___x_546_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_541_, v___x_545_);
if (v___x_546_ == 0)
{
uint8_t v___x_547_; 
v___x_547_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v___x_545_, v_k_541_);
if (v___x_547_ == 0)
{
uint8_t v___x_548_; 
v___x_548_ = lean_nat_dec_lt(v___x_543_, v___x_542_);
if (v___x_548_ == 0)
{
lean_dec(v_k_539_);
lean_dec_ref(v_v_538_);
return v_as_540_;
}
else
{
lean_object* v___x_549_; lean_object* v_xs_x27_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_inc(v___x_545_);
v___x_549_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_550_ = lean_array_fset(v_as_540_, v___x_543_, v___x_549_);
v___x_551_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v___x_545_);
v___x_552_ = lean_array_fset(v_xs_x27_550_, v___x_543_, v___x_551_);
return v___x_552_;
}
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = lean_nat_sub(v___x_542_, v___x_553_);
v___x_555_ = lean_array_fget_borrowed(v_as_540_, v___x_554_);
v___x_556_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v___x_555_, v_k_541_);
if (v___x_556_ == 0)
{
uint8_t v___x_557_; 
v___x_557_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_541_, v___x_555_);
if (v___x_557_ == 0)
{
uint8_t v___x_558_; 
v___x_558_ = lean_nat_dec_lt(v___x_554_, v___x_542_);
if (v___x_558_ == 0)
{
lean_dec(v___x_554_);
lean_dec(v_k_539_);
lean_dec_ref(v_v_538_);
return v_as_540_;
}
else
{
lean_object* v___x_559_; lean_object* v_xs_x27_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_inc(v___x_555_);
v___x_559_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_560_ = lean_array_fset(v_as_540_, v___x_554_, v___x_559_);
v___x_561_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v___x_555_);
v___x_562_ = lean_array_fset(v_xs_x27_560_, v___x_554_, v___x_561_);
lean_dec(v___x_554_);
return v___x_562_;
}
}
else
{
lean_object* v___x_563_; 
v___x_563_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v_as_540_, v_k_541_, v___x_543_, v___x_554_);
return v___x_563_;
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec(v___x_554_);
v___x_564_ = lean_box(0);
v___x_565_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v___x_564_);
v___x_566_ = lean_array_push(v_as_540_, v___x_565_);
return v___x_566_;
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v_as_569_; lean_object* v___x_570_; 
v___x_567_ = lean_box(0);
v___x_568_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v___x_567_);
v_as_569_ = lean_array_push(v_as_540_, v___x_568_);
v___x_570_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_543_, v_as_569_, v___x_542_);
return v___x_570_;
}
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_box(0);
v___x_572_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_536_, v_keys_537_, v_v_538_, v_k_539_, v___x_571_);
v___x_573_ = lean_array_push(v_as_540_, v___x_572_);
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(lean_object* v_keys_574_, lean_object* v_v_575_, lean_object* v_x_576_, lean_object* v_x_577_){
_start:
{
lean_object* v_vs_578_; lean_object* v_children_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_596_; 
v_vs_578_ = lean_ctor_get(v_x_577_, 0);
v_children_579_ = lean_ctor_get(v_x_577_, 1);
v_isSharedCheck_596_ = !lean_is_exclusive(v_x_577_);
if (v_isSharedCheck_596_ == 0)
{
v___x_581_ = v_x_577_;
v_isShared_582_ = v_isSharedCheck_596_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_children_579_);
lean_inc(v_vs_578_);
lean_dec(v_x_577_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_596_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_array_get_size(v_keys_574_);
v___x_584_ = lean_nat_dec_lt(v_x_576_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(v_vs_578_, v_v_575_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_585_);
v___x_587_ = v___x_581_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_children_579_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
lean_object* v_k_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v_c_592_; lean_object* v___x_594_; 
v_k_589_ = lean_array_fget_borrowed(v_keys_574_, v_x_576_);
v___x_590_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1));
lean_inc_n(v_k_589_, 2);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v_k_589_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v_c_592_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(v_x_576_, v_keys_574_, v_v_575_, v_k_589_, v_children_579_, v___x_591_);
lean_dec_ref_known(v___x_591_, 2);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 1, v_c_592_);
v___x_594_ = v___x_581_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_vs_578_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v_c_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(lean_object* v_x_597_, lean_object* v_keys_598_, lean_object* v_v_599_, lean_object* v_k_600_, lean_object* v_x_601_){
_start:
{
lean_object* v_snd_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_612_; 
v_snd_602_ = lean_ctor_get(v_x_601_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_601_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v_x_601_, 0);
lean_dec(v_unused_613_);
v___x_604_ = v_x_601_;
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_snd_602_);
lean_dec(v_x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v_c_608_; lean_object* v___x_610_; 
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_nat_add(v_x_597_, v___x_606_);
v_c_608_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_598_, v_v_599_, v___x_607_, v_snd_602_);
lean_dec(v___x_607_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 1, v_c_608_);
lean_ctor_set(v___x_604_, 0, v_k_600_);
v___x_610_ = v___x_604_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_k_600_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_c_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2___boxed(lean_object* v_x_614_, lean_object* v_keys_615_, lean_object* v_v_616_, lean_object* v_k_617_, lean_object* v_x_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_614_, v_keys_615_, v_v_616_, v_k_617_, v_x_618_);
lean_dec_ref(v_keys_615_);
lean_dec(v_x_614_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___boxed(lean_object* v_keys_620_, lean_object* v_v_621_, lean_object* v_x_622_, lean_object* v_x_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_620_, v_v_621_, v_x_622_, v_x_623_);
lean_dec(v_x_622_);
lean_dec_ref(v_keys_620_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_x_625_, lean_object* v_keys_626_, lean_object* v_v_627_, lean_object* v_k_628_, lean_object* v_as_629_, lean_object* v_k_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_625_, v_keys_626_, v_v_627_, v_k_628_, v_as_629_, v_k_630_, v_x_631_, v_x_632_);
lean_dec_ref(v_k_630_);
lean_dec_ref(v_keys_626_);
lean_dec(v_x_625_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___boxed(lean_object* v_x_634_, lean_object* v_keys_635_, lean_object* v_v_636_, lean_object* v_k_637_, lean_object* v_as_638_, lean_object* v_k_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(v_x_634_, v_keys_635_, v_v_636_, v_k_637_, v_as_638_, v_k_639_);
lean_dec_ref(v_k_639_);
lean_dec_ref(v_keys_635_);
lean_dec(v_x_634_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(lean_object* v_keys_641_, lean_object* v_v_642_, lean_object* v_x_643_){
_start:
{
if (lean_obj_tag(v_x_643_) == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_641_, v_v_642_, v___x_644_);
v___x_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
else
{
lean_object* v_val_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_656_; 
v_val_647_ = lean_ctor_get(v_x_643_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_x_643_);
if (v_isSharedCheck_656_ == 0)
{
v___x_649_ = v_x_643_;
v_isShared_650_ = v_isSharedCheck_656_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_val_647_);
lean_dec(v_x_643_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_656_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_651_ = lean_unsigned_to_nat(1u);
v___x_652_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_641_, v_v_642_, v___x_651_, v_val_647_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_652_);
v___x_654_ = v___x_649_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_657_, lean_object* v_v_658_, lean_object* v_x_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v_x_659_);
lean_dec_ref(v_keys_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(lean_object* v_keys_661_, lean_object* v_v_662_, lean_object* v_x_663_, size_t v_x_664_, size_t v_x_665_, lean_object* v_x_666_){
_start:
{
if (lean_obj_tag(v_x_663_) == 0)
{
lean_object* v_es_667_; size_t v___x_668_; size_t v___x_669_; lean_object* v_j_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_es_667_ = lean_ctor_get(v_x_663_, 0);
v___x_668_ = ((size_t)31ULL);
v___x_669_ = lean_usize_land(v_x_664_, v___x_668_);
v_j_670_ = lean_usize_to_nat(v___x_669_);
v___x_671_ = lean_array_get_size(v_es_667_);
v___x_672_ = lean_nat_dec_lt(v_j_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_dec(v_j_670_);
lean_dec(v_x_666_);
lean_dec_ref(v_v_662_);
return v_x_663_;
}
else
{
lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_740_; 
lean_inc_ref(v_es_667_);
v_isSharedCheck_740_ = !lean_is_exclusive(v_x_663_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v_x_663_, 0);
lean_dec(v_unused_741_);
v___x_674_ = v_x_663_;
v_isShared_675_ = v_isSharedCheck_740_;
goto v_resetjp_673_;
}
else
{
lean_dec(v_x_663_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_740_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v_v_676_; lean_object* v___x_677_; lean_object* v_xs_x27_678_; lean_object* v___y_680_; 
v_v_676_ = lean_array_fget(v_es_667_, v_j_670_);
v___x_677_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_678_ = lean_array_fset(v_es_667_, v_j_670_, v___x_677_);
switch(lean_obj_tag(v_v_676_))
{
case 0:
{
lean_object* v_key_685_; lean_object* v_val_686_; uint8_t v___x_687_; 
v_key_685_ = lean_ctor_get(v_v_676_, 0);
v_val_686_ = lean_ctor_get(v_v_676_, 1);
v___x_687_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_666_, v_key_685_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_box(0);
v___x_689_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_661_, v_v_662_, v___x_688_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_dec(v_x_666_);
v___y_680_ = v_v_676_;
goto v___jp_679_;
}
else
{
lean_object* v_val_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_698_; 
lean_inc(v_val_686_);
lean_inc(v_key_685_);
lean_dec_ref_known(v_v_676_, 2);
v_val_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_698_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_val_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_694_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_685_, v_val_686_, v_x_666_, v_val_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_694_);
v___x_696_ = v___x_692_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
v___y_680_ = v___x_696_;
goto v___jp_679_;
}
}
}
}
else
{
lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_709_; 
lean_inc(v_val_686_);
v_isSharedCheck_709_ = !lean_is_exclusive(v_v_676_);
if (v_isSharedCheck_709_ == 0)
{
lean_object* v_unused_710_; lean_object* v_unused_711_; 
v_unused_710_ = lean_ctor_get(v_v_676_, 1);
lean_dec(v_unused_710_);
v_unused_711_ = lean_ctor_get(v_v_676_, 0);
lean_dec(v_unused_711_);
v___x_700_ = v_v_676_;
v_isShared_701_ = v_isSharedCheck_709_;
goto v_resetjp_699_;
}
else
{
lean_dec(v_v_676_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_709_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_702_, 0, v_val_686_);
v___x_703_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_661_, v_v_662_, v___x_702_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v___x_704_; 
lean_del_object(v___x_700_);
lean_dec(v_x_666_);
v___x_704_ = lean_box(2);
v___y_680_ = v___x_704_;
goto v___jp_679_;
}
else
{
lean_object* v_val_705_; lean_object* v___x_707_; 
v_val_705_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_val_705_);
lean_dec_ref_known(v___x_703_, 1);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 1, v_val_705_);
lean_ctor_set(v___x_700_, 0, v_x_666_);
v___x_707_ = v___x_700_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_x_666_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_val_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v___y_680_ = v___x_707_;
goto v___jp_679_;
}
}
}
}
}
case 1:
{
lean_object* v_node_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_735_; 
v_node_712_ = lean_ctor_get(v_v_676_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v_v_676_);
if (v_isSharedCheck_735_ == 0)
{
v___x_714_ = v_v_676_;
v_isShared_715_ = v_isSharedCheck_735_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_node_712_);
lean_dec(v_v_676_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_735_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
size_t v___x_716_; size_t v___x_717_; size_t v___x_718_; size_t v___x_719_; lean_object* v_newNode_720_; lean_object* v___x_721_; 
v___x_716_ = ((size_t)5ULL);
v___x_717_ = lean_usize_shift_right(v_x_664_, v___x_716_);
v___x_718_ = ((size_t)1ULL);
v___x_719_ = lean_usize_add(v_x_665_, v___x_718_);
v_newNode_720_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_661_, v_v_662_, v_node_712_, v___x_717_, v___x_719_, v_x_666_);
lean_inc_ref(v_newNode_720_);
v___x_721_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_723_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_newNode_720_);
v___x_723_ = v___x_714_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_newNode_720_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
v___y_680_ = v___x_723_;
goto v___jp_679_;
}
}
else
{
lean_object* v_val_725_; lean_object* v_fst_726_; lean_object* v_snd_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v_newNode_720_);
lean_del_object(v___x_714_);
v_val_725_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_val_725_);
lean_dec_ref_known(v___x_721_, 1);
v_fst_726_ = lean_ctor_get(v_val_725_, 0);
v_snd_727_ = lean_ctor_get(v_val_725_, 1);
v_isSharedCheck_734_ = !lean_is_exclusive(v_val_725_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v_val_725_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_snd_727_);
lean_inc(v_fst_726_);
lean_dec(v_val_725_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_fst_726_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_snd_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
v___y_680_ = v___x_732_;
goto v___jp_679_;
}
}
}
}
}
default: 
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_box(0);
v___x_737_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_661_, v_v_662_, v___x_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_dec(v_x_666_);
v___y_680_ = v_v_676_;
goto v___jp_679_;
}
else
{
lean_object* v_val_738_; lean_object* v___x_739_; 
v_val_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v_x_666_);
lean_ctor_set(v___x_739_, 1, v_val_738_);
v___y_680_ = v___x_739_;
goto v___jp_679_;
}
}
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_681_ = lean_array_fset(v_xs_x27_678_, v_j_670_, v___y_680_);
lean_dec(v_j_670_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_681_);
v___x_683_ = v___x_674_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
else
{
lean_object* v_ks_742_; lean_object* v_vs_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_776_; 
v_ks_742_ = lean_ctor_get(v_x_663_, 0);
v_vs_743_ = lean_ctor_get(v_x_663_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_x_663_);
if (v_isSharedCheck_776_ == 0)
{
v___x_745_ = v_x_663_;
v_isShared_746_ = v_isSharedCheck_776_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_vs_743_);
lean_inc(v_ks_742_);
lean_dec(v_x_663_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_776_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; 
v___x_747_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(v_ks_742_, v_x_666_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v___x_749_; 
if (v_isShared_746_ == 0)
{
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_ks_742_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_vs_743_);
v___x_749_ = v_reuseFailAlloc_754_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_box(0);
v___x_751_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_661_, v_v_662_, v___x_750_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_dec(v_x_666_);
return v___x_749_;
}
else
{
lean_object* v_val_752_; lean_object* v___x_753_; 
v_val_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v___x_751_, 1);
v___x_753_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v___x_749_, v_x_664_, v_x_665_, v_x_666_, v_val_752_);
return v___x_753_;
}
}
}
else
{
lean_object* v_val_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_775_; 
v_val_755_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_775_ == 0)
{
v___x_757_ = v___x_747_;
v_isShared_758_ = v_isSharedCheck_775_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_val_755_);
lean_dec(v___x_747_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_775_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_v_x27_759_; lean_object* v_keys_760_; lean_object* v_vals_761_; lean_object* v___x_763_; 
v_v_x27_759_ = lean_array_fget(v_vs_743_, v_val_755_);
lean_inc(v_val_755_);
v_keys_760_ = l_Array_eraseIdx___redArg(v_ks_742_, v_val_755_);
v_vals_761_ = l_Array_eraseIdx___redArg(v_vs_743_, v_val_755_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v_v_x27_759_);
v___x_763_ = v___x_757_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_v_x27_759_);
v___x_763_ = v_reuseFailAlloc_774_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_661_, v_v_662_, v___x_763_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v___x_766_; 
lean_dec(v_x_666_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 1, v_vals_761_);
lean_ctor_set(v___x_745_, 0, v_keys_760_);
v___x_766_ = v___x_745_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_keys_760_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v_vals_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
else
{
lean_object* v_val_768_; lean_object* v_keys_769_; lean_object* v_vals_770_; lean_object* v___x_772_; 
v_val_768_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_val_768_);
lean_dec_ref_known(v___x_764_, 1);
v_keys_769_ = lean_array_push(v_keys_760_, v_x_666_);
v_vals_770_ = lean_array_push(v_vals_761_, v_val_768_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 1, v_vals_770_);
lean_ctor_set(v___x_745_, 0, v_keys_769_);
v___x_772_ = v___x_745_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_keys_769_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_vals_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___boxed(lean_object* v_keys_777_, lean_object* v_v_778_, lean_object* v_x_779_, lean_object* v_x_780_, lean_object* v_x_781_, lean_object* v_x_782_){
_start:
{
size_t v_x_2846__boxed_783_; size_t v_x_2847__boxed_784_; lean_object* v_res_785_; 
v_x_2846__boxed_783_ = lean_unbox_usize(v_x_780_);
lean_dec(v_x_780_);
v_x_2847__boxed_784_ = lean_unbox_usize(v_x_781_);
lean_dec(v_x_781_);
v_res_785_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_777_, v_v_778_, v_x_779_, v_x_2846__boxed_783_, v_x_2847__boxed_784_, v_x_782_);
lean_dec_ref(v_keys_777_);
return v_res_785_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_789_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2));
v___x_790_ = lean_unsigned_to_nat(23u);
v___x_791_ = lean_unsigned_to_nat(166u);
v___x_792_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1));
v___x_793_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0));
v___x_794_ = l_mkPanicMessageWithDecl(v___x_793_, v___x_792_, v___x_791_, v___x_790_, v___x_789_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(lean_object* v_d_795_, lean_object* v_keys_796_, lean_object* v_v_797_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_798_ = lean_array_get_size(v_keys_796_);
v___x_799_ = lean_unsigned_to_nat(0u);
v___x_800_ = lean_nat_dec_eq(v___x_798_, v___x_799_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v_k_802_; uint64_t v___x_803_; size_t v_h_804_; size_t v___x_805_; lean_object* v___x_806_; 
v___x_801_ = lean_box(0);
v_k_802_ = lean_array_get_borrowed(v___x_801_, v_keys_796_, v___x_799_);
v___x_803_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_802_);
v_h_804_ = lean_uint64_to_usize(v___x_803_);
v___x_805_ = ((size_t)1ULL);
lean_inc(v_k_802_);
v___x_806_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_796_, v_v_797_, v_d_795_, v_h_804_, v___x_805_, v_k_802_);
return v___x_806_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec_ref(v_v_797_);
lean_dec_ref(v_d_795_);
v___x_807_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3);
v___x_808_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(v___x_807_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___boxed(lean_object* v_d_809_, lean_object* v_keys_810_, lean_object* v_v_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_d_809_, v_keys_810_, v_v_811_);
lean_dec_ref(v_keys_810_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(lean_object* v_xs_813_, lean_object* v_v_814_, lean_object* v_i_815_){
_start:
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_array_get_size(v_xs_813_);
v___x_817_ = lean_nat_dec_lt(v_i_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; 
lean_dec(v_i_815_);
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_array_fget_borrowed(v_xs_813_, v_i_815_);
v___x_820_ = lean_name_eq(v___x_819_, v_v_814_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_unsigned_to_nat(1u);
v___x_822_ = lean_nat_add(v_i_815_, v___x_821_);
lean_dec(v_i_815_);
v_i_815_ = v___x_822_;
goto _start;
}
else
{
lean_object* v___x_824_; 
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v_i_815_);
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20___boxed(lean_object* v_xs_825_, lean_object* v_v_826_, lean_object* v_i_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(v_xs_825_, v_v_826_, v_i_827_);
lean_dec(v_v_826_);
lean_dec_ref(v_xs_825_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(lean_object* v_xs_829_, lean_object* v_v_830_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(v_xs_829_, v_v_830_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13___boxed(lean_object* v_xs_833_, lean_object* v_v_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(v_xs_833_, v_v_834_);
lean_dec(v_v_834_);
lean_dec_ref(v_xs_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(lean_object* v_x_836_, size_t v_x_837_, lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_836_) == 0)
{
lean_object* v_es_839_; lean_object* v___x_840_; size_t v___x_841_; size_t v___x_842_; lean_object* v_j_843_; lean_object* v_entry_844_; 
v_es_839_ = lean_ctor_get(v_x_836_, 0);
v___x_840_ = lean_box(2);
v___x_841_ = ((size_t)31ULL);
v___x_842_ = lean_usize_land(v_x_837_, v___x_841_);
v_j_843_ = lean_usize_to_nat(v___x_842_);
v_entry_844_ = lean_array_get(v___x_840_, v_es_839_, v_j_843_);
switch(lean_obj_tag(v_entry_844_))
{
case 0:
{
lean_object* v_key_845_; uint8_t v___x_846_; 
v_key_845_ = lean_ctor_get(v_entry_844_, 0);
lean_inc(v_key_845_);
lean_dec_ref_known(v_entry_844_, 2);
v___x_846_ = lean_name_eq(v_x_838_, v_key_845_);
lean_dec(v_key_845_);
if (v___x_846_ == 0)
{
lean_dec(v_j_843_);
return v_x_836_;
}
else
{
lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_854_; 
lean_inc_ref(v_es_839_);
v_isSharedCheck_854_ = !lean_is_exclusive(v_x_836_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; 
v_unused_855_ = lean_ctor_get(v_x_836_, 0);
lean_dec(v_unused_855_);
v___x_848_ = v_x_836_;
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
else
{
lean_dec(v_x_836_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_850_ = lean_array_set(v_es_839_, v_j_843_, v___x_840_);
lean_dec(v_j_843_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_850_);
v___x_852_ = v___x_848_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
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
case 1:
{
lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_890_; 
lean_inc_ref(v_es_839_);
v_isSharedCheck_890_ = !lean_is_exclusive(v_x_836_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v_x_836_, 0);
lean_dec(v_unused_891_);
v___x_857_ = v_x_836_;
v_isShared_858_ = v_isSharedCheck_890_;
goto v_resetjp_856_;
}
else
{
lean_dec(v_x_836_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_890_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v_node_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_889_; 
v_node_859_ = lean_ctor_get(v_entry_844_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_entry_844_);
if (v_isSharedCheck_889_ == 0)
{
v___x_861_ = v_entry_844_;
v_isShared_862_ = v_isSharedCheck_889_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_node_859_);
lean_dec(v_entry_844_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_889_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
size_t v___x_863_; lean_object* v_entries_864_; size_t v___x_865_; lean_object* v_newNode_866_; lean_object* v___x_867_; 
v___x_863_ = ((size_t)5ULL);
v_entries_864_ = lean_array_set(v_es_839_, v_j_843_, v___x_840_);
v___x_865_ = lean_usize_shift_right(v_x_837_, v___x_863_);
v_newNode_866_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_node_859_, v___x_865_, v_x_838_);
lean_inc_ref(v_newNode_866_);
v___x_867_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v___x_869_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v_newNode_866_);
v___x_869_ = v___x_861_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_newNode_866_);
v___x_869_ = v_reuseFailAlloc_874_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = lean_array_set(v_entries_864_, v_j_843_, v___x_869_);
lean_dec(v_j_843_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_870_);
v___x_872_ = v___x_857_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_val_875_; lean_object* v_fst_876_; lean_object* v_snd_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref(v_newNode_866_);
lean_del_object(v___x_861_);
v_val_875_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_val_875_);
lean_dec_ref_known(v___x_867_, 1);
v_fst_876_ = lean_ctor_get(v_val_875_, 0);
v_snd_877_ = lean_ctor_get(v_val_875_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_val_875_);
if (v_isSharedCheck_888_ == 0)
{
v___x_879_ = v_val_875_;
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_snd_877_);
lean_inc(v_fst_876_);
lean_dec(v_val_875_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_fst_876_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_snd_877_);
v___x_882_ = v_reuseFailAlloc_887_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_883_ = lean_array_set(v_entries_864_, v_j_843_, v___x_882_);
lean_dec(v_j_843_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_883_);
v___x_885_ = v___x_857_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_843_);
return v_x_836_;
}
}
}
else
{
lean_object* v_ks_892_; lean_object* v_vs_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_907_; 
v_ks_892_ = lean_ctor_get(v_x_836_, 0);
v_vs_893_ = lean_ctor_get(v_x_836_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_x_836_);
if (v_isSharedCheck_907_ == 0)
{
v___x_895_ = v_x_836_;
v_isShared_896_ = v_isSharedCheck_907_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_vs_893_);
lean_inc(v_ks_892_);
lean_dec(v_x_836_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_907_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; 
v___x_897_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(v_ks_892_, v_x_838_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_899_; 
if (v_isShared_896_ == 0)
{
v___x_899_ = v___x_895_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_ks_892_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_vs_893_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
else
{
lean_object* v_val_901_; lean_object* v_keys_x27_902_; lean_object* v_vals_x27_903_; lean_object* v___x_905_; 
v_val_901_ = lean_ctor_get(v___x_897_, 0);
lean_inc_n(v_val_901_, 2);
lean_dec_ref_known(v___x_897_, 1);
v_keys_x27_902_ = l_Array_eraseIdx___redArg(v_ks_892_, v_val_901_);
v_vals_x27_903_ = l_Array_eraseIdx___redArg(v_vs_893_, v_val_901_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v_vals_x27_903_);
lean_ctor_set(v___x_895_, 0, v_keys_x27_902_);
v___x_905_ = v___x_895_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_keys_x27_902_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_vals_x27_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg___boxed(lean_object* v_x_908_, lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
size_t v_x_3128__boxed_911_; lean_object* v_res_912_; 
v_x_3128__boxed_911_ = lean_unbox_usize(v_x_909_);
lean_dec(v_x_909_);
v_res_912_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_908_, v_x_3128__boxed_911_, v_x_910_);
lean_dec(v_x_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
uint64_t v___y_916_; lean_object* v___x_919_; 
v___x_919_ = l_unsafeCast___redArg(v_x_914_);
if (lean_obj_tag(v___x_919_) == 0)
{
uint64_t v___x_920_; 
v___x_920_ = 1723ULL;
v___y_916_ = v___x_920_;
goto v___jp_915_;
}
else
{
uint64_t v_hash_921_; 
v_hash_921_ = lean_ctor_get_uint64(v___x_919_, sizeof(void*)*2);
lean_dec(v___x_919_);
v___y_916_ = v_hash_921_;
goto v___jp_915_;
}
v___jp_915_:
{
size_t v_h_917_; lean_object* v___x_918_; 
v_h_917_ = lean_uint64_to_usize(v___y_916_);
v___x_918_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_913_, v_h_917_, v_x_914_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg___boxed(lean_object* v_x_922_, lean_object* v_x_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_x_922_, v_x_923_);
lean_dec(v_x_923_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object* v_d_925_, lean_object* v_e_926_){
_start:
{
lean_object* v_globalName_x3f_927_; 
v_globalName_x3f_927_ = lean_ctor_get(v_e_926_, 3);
if (lean_obj_tag(v_globalName_x3f_927_) == 0)
{
lean_object* v_keys_928_; lean_object* v_discrTree_929_; lean_object* v_instanceNames_930_; lean_object* v_erased_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_keys_928_ = lean_ctor_get(v_e_926_, 0);
lean_inc_ref(v_keys_928_);
v_discrTree_929_ = lean_ctor_get(v_d_925_, 0);
v_instanceNames_930_ = lean_ctor_get(v_d_925_, 1);
v_erased_931_ = lean_ctor_get(v_d_925_, 2);
v_isSharedCheck_939_ = !lean_is_exclusive(v_d_925_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v_d_925_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_erased_931_);
lean_inc(v_instanceNames_930_);
lean_inc(v_discrTree_929_);
lean_dec(v_d_925_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_discrTree_929_, v_keys_928_, v_e_926_);
lean_dec_ref(v_keys_928_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_instanceNames_930_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v_erased_931_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
else
{
lean_object* v_keys_940_; lean_object* v_val_941_; lean_object* v_discrTree_942_; lean_object* v_instanceNames_943_; lean_object* v_erased_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_954_; 
v_keys_940_ = lean_ctor_get(v_e_926_, 0);
v_val_941_ = lean_ctor_get(v_globalName_x3f_927_, 0);
lean_inc(v_val_941_);
v_discrTree_942_ = lean_ctor_get(v_d_925_, 0);
v_instanceNames_943_ = lean_ctor_get(v_d_925_, 1);
v_erased_944_ = lean_ctor_get(v_d_925_, 2);
v_isSharedCheck_954_ = !lean_is_exclusive(v_d_925_);
if (v_isSharedCheck_954_ == 0)
{
v___x_946_ = v_d_925_;
v_isShared_947_ = v_isSharedCheck_954_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_erased_944_);
lean_inc(v_instanceNames_943_);
lean_inc(v_discrTree_942_);
lean_dec(v_d_925_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_954_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
lean_inc_ref(v_e_926_);
v___x_948_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_discrTree_942_, v_keys_940_, v_e_926_);
lean_inc(v_val_941_);
v___x_949_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_instanceNames_943_, v_val_941_, v_e_926_);
v___x_950_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_erased_944_, v_val_941_);
lean_dec(v_val_941_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 2, v___x_950_);
lean_ctor_set(v___x_946_, 1, v___x_949_);
lean_ctor_set(v___x_946_, 0, v___x_948_);
v___x_952_ = v___x_946_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1(lean_object* v_00_u03b2_955_, lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_x_956_, v_x_957_, v_x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(lean_object* v_00_u03b2_960_, lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_x_961_, v_x_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___boxed(lean_object* v_00_u03b2_964_, lean_object* v_x_965_, lean_object* v_x_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(v_00_u03b2_964_, v_x_965_, v_x_966_);
lean_dec(v_x_966_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(lean_object* v_00_u03b2_968_, lean_object* v_x_969_, size_t v_x_970_, size_t v_x_971_, lean_object* v_x_972_, lean_object* v_x_973_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_969_, v_x_970_, v_x_971_, v_x_972_, v_x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___boxed(lean_object* v_00_u03b2_975_, lean_object* v_x_976_, lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v_x_979_, lean_object* v_x_980_){
_start:
{
size_t v_x_3334__boxed_981_; size_t v_x_3335__boxed_982_; lean_object* v_res_983_; 
v_x_3334__boxed_981_ = lean_unbox_usize(v_x_977_);
lean_dec(v_x_977_);
v_x_3335__boxed_982_ = lean_unbox_usize(v_x_978_);
lean_dec(v_x_978_);
v_res_983_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(v_00_u03b2_975_, v_x_976_, v_x_3334__boxed_981_, v_x_3335__boxed_982_, v_x_979_, v_x_980_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(lean_object* v_00_u03b2_984_, lean_object* v_x_985_, size_t v_x_986_, lean_object* v_x_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_985_, v_x_986_, v_x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___boxed(lean_object* v_00_u03b2_989_, lean_object* v_x_990_, lean_object* v_x_991_, lean_object* v_x_992_){
_start:
{
size_t v_x_3351__boxed_993_; lean_object* v_res_994_; 
v_x_3351__boxed_993_ = lean_unbox_usize(v_x_991_);
lean_dec(v_x_991_);
v_res_994_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(v_00_u03b2_989_, v_x_990_, v_x_3351__boxed_993_, v_x_992_);
lean_dec(v_x_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_995_, lean_object* v_x_996_, size_t v_x_997_, size_t v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_x_996_, v_x_997_, v_x_998_, v_x_999_, v_x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_, lean_object* v_x_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
size_t v_x_3362__boxed_1008_; size_t v_x_3363__boxed_1009_; lean_object* v_res_1010_; 
v_x_3362__boxed_1008_ = lean_unbox_usize(v_x_1004_);
lean_dec(v_x_1004_);
v_x_3363__boxed_1009_ = lean_unbox_usize(v_x_1005_);
lean_dec(v_x_1005_);
v_res_1010_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(v_00_u03b2_1002_, v_x_1003_, v_x_3362__boxed_1008_, v_x_3363__boxed_1009_, v_x_1006_, v_x_1007_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_1011_, lean_object* v_n_1012_, lean_object* v_k_1013_, lean_object* v_v_1014_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(v_n_1012_, v_k_1013_, v_v_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_1016_, size_t v_depth_1017_, lean_object* v_keys_1018_, lean_object* v_vals_1019_, lean_object* v_heq_1020_, lean_object* v_i_1021_, lean_object* v_entries_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_depth_1017_, v_keys_1018_, v_vals_1019_, v_i_1021_, v_entries_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object* v_00_u03b2_1024_, lean_object* v_depth_1025_, lean_object* v_keys_1026_, lean_object* v_vals_1027_, lean_object* v_heq_1028_, lean_object* v_i_1029_, lean_object* v_entries_1030_){
_start:
{
size_t v_depth_boxed_1031_; lean_object* v_res_1032_; 
v_depth_boxed_1031_ = lean_unbox_usize(v_depth_1025_);
lean_dec(v_depth_1025_);
v_res_1032_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(v_00_u03b2_1024_, v_depth_boxed_1031_, v_keys_1026_, v_vals_1027_, v_heq_1028_, v_i_1029_, v_entries_1030_);
lean_dec_ref(v_vals_1027_);
lean_dec_ref(v_keys_1026_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(lean_object* v_x_1033_, lean_object* v_keys_1034_, lean_object* v_v_1035_, lean_object* v_k_1036_, lean_object* v_as_1037_, lean_object* v_k_1038_, lean_object* v_x_1039_, lean_object* v_x_1040_, lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_1033_, v_keys_1034_, v_v_1035_, v_k_1036_, v_as_1037_, v_k_1038_, v_x_1039_, v_x_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_x_1044_, lean_object* v_keys_1045_, lean_object* v_v_1046_, lean_object* v_k_1047_, lean_object* v_as_1048_, lean_object* v_k_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_, lean_object* v_x_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(v_x_1044_, v_keys_1045_, v_v_1046_, v_k_1047_, v_as_1048_, v_k_1049_, v_x_1050_, v_x_1051_, v_x_1052_, v_x_1053_);
lean_dec_ref(v_k_1049_);
lean_dec_ref(v_keys_1045_);
lean_dec(v_x_1044_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12(lean_object* v_00_u03b2_1055_, lean_object* v_n_1056_, lean_object* v_k_1057_, lean_object* v_v_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(v_n_1056_, v_k_1057_, v_v_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(lean_object* v_00_u03b2_1060_, size_t v_depth_1061_, lean_object* v_keys_1062_, lean_object* v_vals_1063_, lean_object* v_heq_1064_, lean_object* v_i_1065_, lean_object* v_entries_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_depth_1061_, v_keys_1062_, v_vals_1063_, v_i_1065_, v_entries_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___boxed(lean_object* v_00_u03b2_1068_, lean_object* v_depth_1069_, lean_object* v_keys_1070_, lean_object* v_vals_1071_, lean_object* v_heq_1072_, lean_object* v_i_1073_, lean_object* v_entries_1074_){
_start:
{
size_t v_depth_boxed_1075_; lean_object* v_res_1076_; 
v_depth_boxed_1075_ = lean_unbox_usize(v_depth_1069_);
lean_dec(v_depth_1069_);
v_res_1076_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(v_00_u03b2_1068_, v_depth_boxed_1075_, v_keys_1070_, v_vals_1071_, v_heq_1072_, v_i_1073_, v_entries_1074_);
lean_dec_ref(v_vals_1071_);
lean_dec_ref(v_keys_1070_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16(lean_object* v_00_u03b2_1077_, lean_object* v_x_1078_, lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(v_x_1078_, v_x_1079_, v_x_1080_, v_x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15(lean_object* v_00_u03b2_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(v_x_1084_, v_x_1085_, v_x_1086_, v_x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object* v_d_1089_, lean_object* v_declName_1090_){
_start:
{
lean_object* v_discrTree_1091_; lean_object* v_instanceNames_1092_; lean_object* v_erased_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1103_; 
v_discrTree_1091_ = lean_ctor_get(v_d_1089_, 0);
v_instanceNames_1092_ = lean_ctor_get(v_d_1089_, 1);
v_erased_1093_ = lean_ctor_get(v_d_1089_, 2);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_d_1089_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1095_ = v_d_1089_;
v_isShared_1096_ = v_isSharedCheck_1103_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_erased_1093_);
lean_inc(v_instanceNames_1092_);
lean_inc(v_discrTree_1091_);
lean_dec(v_d_1089_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1103_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1097_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_instanceNames_1092_, v_declName_1090_);
v___x_1098_ = lean_box(0);
v___x_1099_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_erased_1093_, v_declName_1090_, v___x_1098_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 2, v___x_1099_);
lean_ctor_set(v___x_1095_, 1, v___x_1097_);
v___x_1101_ = v___x_1095_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_discrTree_1091_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1102_, 2, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object* v_d_1104_, lean_object* v_declName_1105_, lean_object* v_toPure_1106_, lean_object* v_____r_1107_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = l_Lean_Meta_Instances_eraseCore(v_d_1104_, v_declName_1105_);
v___x_1109_ = lean_apply_2(v_toPure_1106_, lean_box(0), v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object* v___f_1110_, lean_object* v_____r_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_apply_1(v___f_1110_, v_____r_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__3(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__2));
v___x_1117_ = l_Lean_stringToMessageData(v___x_1116_);
return v___x_1117_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__5(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__4));
v___x_1120_ = l_Lean_stringToMessageData(v___x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object* v_inst_1121_, lean_object* v_inst_1122_, lean_object* v_d_1123_, lean_object* v_declName_1124_){
_start:
{
lean_object* v_toApplicative_1125_; lean_object* v_toBind_1126_; lean_object* v_toPure_1127_; lean_object* v_instanceNames_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___f_1131_; uint8_t v___x_1132_; 
v_toApplicative_1125_ = lean_ctor_get(v_inst_1121_, 0);
v_toBind_1126_ = lean_ctor_get(v_inst_1121_, 1);
lean_inc(v_toBind_1126_);
v_toPure_1127_ = lean_ctor_get(v_toApplicative_1125_, 1);
v_instanceNames_1128_ = lean_ctor_get(v_d_1123_, 1);
v___x_1129_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__0));
v___x_1130_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__1));
lean_inc(v_toPure_1127_);
lean_inc_n(v_declName_1124_, 2);
lean_inc_ref(v_d_1123_);
v___f_1131_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1131_, 0, v_d_1123_);
lean_closure_set(v___f_1131_, 1, v_declName_1124_);
lean_closure_set(v___f_1131_, 2, v_toPure_1127_);
lean_inc_ref(v_instanceNames_1128_);
v___x_1132_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1129_, v___x_1130_, v_instanceNames_1128_, v_declName_1124_);
if (v___x_1132_ == 0)
{
lean_object* v___f_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref(v_d_1123_);
v___f_1133_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1133_, 0, v___f_1131_);
v___x_1134_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_1135_ = l_Lean_MessageData_ofConstName(v_declName_1124_, v___x_1132_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = l_Lean_throwError___redArg(v_inst_1121_, v_inst_1122_, v___x_1138_);
v___x_1140_ = lean_apply_4(v_toBind_1126_, lean_box(0), lean_box(0), v___x_1139_, v___f_1133_);
return v___x_1140_;
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_inc(v_toPure_1127_);
lean_dec_ref(v___f_1131_);
lean_dec(v_toBind_1126_);
lean_dec_ref(v_inst_1122_);
lean_dec_ref(v_inst_1121_);
v___x_1141_ = lean_box(0);
v___x_1142_ = l_Lean_Meta_Instances_erase___redArg___lam__0(v_d_1123_, v_declName_1124_, v_toPure_1127_, v___x_1141_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object* v_m_1143_, lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_d_1146_, lean_object* v_declName_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lean_Meta_Instances_erase___redArg(v_inst_1144_, v_inst_1145_, v_d_1146_, v_declName_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object* v_x_1149_, lean_object* v_e_1150_){
_start:
{
lean_object* v_globalName_x3f_1155_; 
v_globalName_x3f_1155_ = lean_ctor_get(v_e_1150_, 3);
lean_inc(v_globalName_x3f_1155_);
if (lean_obj_tag(v_globalName_x3f_1155_) == 0)
{
goto v___jp_1151_;
}
else
{
lean_object* v_val_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1165_; 
v_val_1156_ = lean_ctor_get(v_globalName_x3f_1155_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_globalName_x3f_1155_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1158_ = v_globalName_x3f_1155_;
v_isShared_1159_ = v_isSharedCheck_1165_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_val_1156_);
lean_dec(v_globalName_x3f_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1165_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
uint8_t v___x_1160_; 
v___x_1160_ = l_Lean_isPrivateName(v_val_1156_);
lean_dec(v_val_1156_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1162_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v_e_1150_);
v___x_1162_ = v___x_1158_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_e_1150_);
v___x_1162_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1163_; 
lean_inc_ref_n(v___x_1162_, 2);
v___x_1163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
lean_ctor_set(v___x_1163_, 2, v___x_1162_);
return v___x_1163_;
}
}
else
{
lean_del_object(v___x_1158_);
goto v___jp_1151_;
}
}
}
v___jp_1151_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1153_, 0, v_e_1150_);
v___x_1154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1152_);
lean_ctor_set(v___x_1154_, 2, v___x_1153_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v_x_1166_, lean_object* v_e_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(v_x_1166_, v_e_1167_);
lean_dec_ref(v_x_1166_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object* v___y_1169_){
_start:
{
lean_inc_ref(v___y_1169_);
return v___y_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(v___y_1170_);
lean_dec_ref(v___y_1170_);
return v_res_1171_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___f_1180_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___f_1181_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1182_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
v___x_1183_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1184_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v___x_1183_);
lean_ctor_set(v___x_1185_, 2, v___x_1182_);
lean_ctor_set(v___x_1185_, 3, v___f_1181_);
lean_ctor_set(v___x_1185_, 4, v___f_1180_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_);
v___x_1188_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object* v_k_1191_, uint8_t v_allowLevelAssignments_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1192_, v_k_1191_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
v_a_1207_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1198_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1198_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object* v_k_1215_, lean_object* v_allowLevelAssignments_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1222_; lean_object* v_res_1223_; 
v_allowLevelAssignments_boxed_1222_ = lean_unbox(v_allowLevelAssignments_1216_);
v_res_1223_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1215_, v_allowLevelAssignments_boxed_1222_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object* v_00_u03b1_1224_, lean_object* v_k_1225_, uint8_t v_allowLevelAssignments_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1225_, v_allowLevelAssignments_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object* v_00_u03b1_1233_, lean_object* v_k_1234_, lean_object* v_allowLevelAssignments_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1241_; lean_object* v_res_1242_; 
v_allowLevelAssignments_boxed_1241_ = lean_unbox(v_allowLevelAssignments_1235_);
v_res_1242_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(v_00_u03b1_1233_, v_k_1234_, v_allowLevelAssignments_boxed_1241_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object* v_a_1243_, lean_object* v___x_1244_, uint8_t v___x_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1243_, v___x_1244_, v___x_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v_snd_1253_; lean_object* v_snd_1254_; uint8_t v___x_1255_; lean_object* v___x_1256_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1251_, 1);
v_snd_1253_ = lean_ctor_get(v_a_1252_, 1);
lean_inc(v_snd_1253_);
lean_dec(v_a_1252_);
v_snd_1254_ = lean_ctor_get(v_snd_1253_, 1);
lean_inc(v_snd_1254_);
lean_dec(v_snd_1253_);
v___x_1255_ = 0;
v___x_1256_ = l_Lean_Meta_DiscrTree_mkPath(v_snd_1254_, v___x_1255_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
return v___x_1256_;
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1251_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1251_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object* v_a_1265_, lean_object* v___x_1266_, lean_object* v___x_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
uint8_t v___x_497__boxed_1273_; lean_object* v_res_1274_; 
v___x_497__boxed_1273_ = lean_unbox(v___x_1267_);
v_res_1274_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(v_a_1265_, v___x_1266_, v___x_497__boxed_1273_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object* v_e_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v___x_1281_; 
lean_inc(v_a_1279_);
lean_inc_ref(v_a_1278_);
lean_inc(v_a_1277_);
lean_inc_ref(v_a_1276_);
v___x_1281_ = lean_infer_type(v_e_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___f_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = lean_box(0);
v___x_1284_ = 0;
v___x_1285_ = lean_box(v___x_1284_);
v___f_1286_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1286_, 0, v_a_1282_);
lean_closure_set(v___f_1286_, 1, v___x_1283_);
lean_closure_set(v___f_1286_, 2, v___x_1285_);
v___x_1287_ = 0;
v___x_1288_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v___f_1286_, v___x_1287_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
return v___x_1288_;
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1281_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1281_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object* v_e_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_e_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object* v_k_1304_, lean_object* v_b_1305_, lean_object* v_c_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
lean_inc(v___y_1308_);
lean_inc_ref(v___y_1307_);
v___x_1312_ = lean_apply_7(v_k_1304_, v_b_1305_, v_c_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, lean_box(0));
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object* v_k_1313_, lean_object* v_b_1314_, lean_object* v_c_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(v_k_1313_, v_b_1314_, v_c_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object* v_type_1322_, lean_object* v_k_1323_, uint8_t v_cleanupAnnotations_1324_, uint8_t v_whnfType_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___f_1331_; lean_object* v___x_1332_; 
v___f_1331_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1331_, 0, v_k_1323_);
v___x_1332_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1322_, v___f_1331_, v_cleanupAnnotations_1324_, v_whnfType_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
v_a_1341_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1332_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1332_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object* v_type_1349_, lean_object* v_k_1350_, lean_object* v_cleanupAnnotations_1351_, lean_object* v_whnfType_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1358_; uint8_t v_whnfType_boxed_1359_; lean_object* v_res_1360_; 
v_cleanupAnnotations_boxed_1358_ = lean_unbox(v_cleanupAnnotations_1351_);
v_whnfType_boxed_1359_ = lean_unbox(v_whnfType_1352_);
v_res_1360_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1349_, v_k_1350_, v_cleanupAnnotations_boxed_1358_, v_whnfType_boxed_1359_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object* v_00_u03b1_1361_, lean_object* v_type_1362_, lean_object* v_k_1363_, uint8_t v_cleanupAnnotations_1364_, uint8_t v_whnfType_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1362_, v_k_1363_, v_cleanupAnnotations_1364_, v_whnfType_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object* v_00_u03b1_1372_, lean_object* v_type_1373_, lean_object* v_k_1374_, lean_object* v_cleanupAnnotations_1375_, lean_object* v_whnfType_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1382_; uint8_t v_whnfType_boxed_1383_; lean_object* v_res_1384_; 
v_cleanupAnnotations_boxed_1382_ = lean_unbox(v_cleanupAnnotations_1375_);
v_whnfType_boxed_1383_ = lean_unbox(v_whnfType_1376_);
v_res_1384_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(v_00_u03b1_1372_, v_type_1373_, v_k_1374_, v_cleanupAnnotations_boxed_1382_, v_whnfType_boxed_1383_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object* v_as_1388_, size_t v_sz_1389_, size_t v_i_1390_, lean_object* v_b_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_a_1398_; uint8_t v___x_1402_; 
v___x_1402_ = lean_usize_dec_lt(v_i_1390_, v_sz_1389_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_b_1391_);
return v___x_1403_;
}
else
{
lean_object* v_fst_1404_; lean_object* v_snd_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1452_; 
v_fst_1404_ = lean_ctor_get(v_b_1391_, 0);
v_snd_1405_ = lean_ctor_get(v_b_1391_, 1);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_b_1391_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1407_ = v_b_1391_;
v_isShared_1408_ = v_isSharedCheck_1452_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_snd_1405_);
lean_inc(v_fst_1404_);
lean_dec(v_b_1391_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1452_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v_next_1414_; 
v_next_1414_ = lean_ctor_get(v_snd_1405_, 0);
lean_inc(v_next_1414_);
if (lean_obj_tag(v_next_1414_) == 0)
{
goto v___jp_1409_;
}
else
{
lean_object* v_upperBound_1415_; lean_object* v_val_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1451_; 
v_upperBound_1415_ = lean_ctor_get(v_snd_1405_, 1);
v_val_1416_ = lean_ctor_get(v_next_1414_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_next_1414_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1418_ = v_next_1414_;
v_isShared_1419_ = v_isSharedCheck_1451_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_val_1416_);
lean_dec(v_next_1414_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1451_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
uint8_t v___x_1420_; 
v___x_1420_ = lean_nat_dec_lt(v_val_1416_, v_upperBound_1415_);
if (v___x_1420_ == 0)
{
lean_del_object(v___x_1418_);
lean_dec(v_val_1416_);
goto v___jp_1409_;
}
else
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1448_; 
lean_inc(v_upperBound_1415_);
lean_del_object(v___x_1407_);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_snd_1405_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; lean_object* v_unused_1450_; 
v_unused_1449_ = lean_ctor_get(v_snd_1405_, 1);
lean_dec(v_unused_1449_);
v_unused_1450_ = lean_ctor_get(v_snd_1405_, 0);
lean_dec(v_unused_1450_);
v___x_1422_ = v_snd_1405_;
v_isShared_1423_ = v_isSharedCheck_1448_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v_snd_1405_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1448_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v_a_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1428_; 
v_a_1424_ = lean_array_uget_borrowed(v_as_1388_, v_i_1390_);
v___x_1425_ = lean_unsigned_to_nat(1u);
v___x_1426_ = lean_nat_add(v_val_1416_, v___x_1425_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1426_);
v___x_1428_ = v___x_1418_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1426_);
v___x_1428_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1430_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1428_);
v___x_1430_ = v___x_1422_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v_upperBound_1415_);
v___x_1430_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; 
lean_inc(v___y_1395_);
lean_inc_ref(v___y_1394_);
lean_inc(v___y_1393_);
lean_inc_ref(v___y_1392_);
lean_inc(v_a_1424_);
v___x_1431_ = lean_infer_type(v_a_1424_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1));
v___x_1434_ = l_Lean_Expr_isAppOf(v_a_1432_, v___x_1433_);
lean_dec(v_a_1432_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
lean_dec(v_val_1416_);
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_fst_1404_);
lean_ctor_set(v___x_1435_, 1, v___x_1430_);
v_a_1398_ = v___x_1435_;
goto v___jp_1397_;
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_array_push(v_fst_1404_, v_val_1416_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v___x_1430_);
v_a_1398_ = v___x_1437_;
goto v___jp_1397_;
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v___x_1430_);
lean_dec(v_val_1416_);
lean_dec(v_fst_1404_);
v_a_1438_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1431_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1431_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
}
}
}
}
v___jp_1409_:
{
lean_object* v___x_1411_; 
if (v_isShared_1408_ == 0)
{
v___x_1411_ = v___x_1407_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_fst_1404_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_snd_1405_);
v___x_1411_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
}
}
v___jp_1397_:
{
size_t v___x_1399_; size_t v___x_1400_; 
v___x_1399_ = ((size_t)1ULL);
v___x_1400_ = lean_usize_add(v_i_1390_, v___x_1399_);
v_i_1390_ = v___x_1400_;
v_b_1391_ = v_a_1398_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object* v_as_1453_, lean_object* v_sz_1454_, lean_object* v_i_1455_, lean_object* v_b_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
size_t v_sz_boxed_1462_; size_t v_i_boxed_1463_; lean_object* v_res_1464_; 
v_sz_boxed_1462_ = lean_unbox_usize(v_sz_1454_);
lean_dec(v_sz_1454_);
v_i_boxed_1463_ = lean_unbox_usize(v_i_1455_);
lean_dec(v_i_1455_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_as_1453_, v_sz_boxed_1462_, v_i_boxed_1463_, v_b_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v_as_1453_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object* v_declName_1469_, lean_object* v_args_1470_, lean_object* v_x_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___x_1477_; lean_object* v___y_1479_; lean_object* v_env_1504_; lean_object* v___x_1505_; 
v___x_1477_ = lean_st_ref_get(v___y_1475_);
v_env_1504_ = lean_ctor_get(v___x_1477_, 0);
lean_inc_ref(v_env_1504_);
lean_dec(v___x_1477_);
v___x_1505_ = l_Lean_getOutParamPositions_x3f(v_env_1504_, v_declName_1469_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v___x_1506_; 
v___x_1506_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___y_1479_ = v___x_1506_;
goto v___jp_1478_;
}
else
{
lean_object* v_val_1507_; 
v_val_1507_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_val_1507_);
lean_dec_ref_known(v___x_1505_, 1);
v___y_1479_ = v_val_1507_;
goto v___jp_1478_;
}
v___jp_1478_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; size_t v_sz_1484_; size_t v___x_1485_; lean_object* v___x_1486_; 
v___x_1480_ = lean_array_get_size(v_args_1470_);
v___x_1481_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
lean_ctor_set(v___x_1482_, 1, v___x_1480_);
v___x_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___y_1479_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
v_sz_1484_ = lean_array_size(v_args_1470_);
v___x_1485_ = ((size_t)0ULL);
v___x_1486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_args_1470_, v_sz_1484_, v___x_1485_, v___x_1483_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1495_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v_fst_1491_; lean_object* v___x_1493_; 
v_fst_1491_ = lean_ctor_get(v_a_1487_, 0);
lean_inc(v_fst_1491_);
lean_dec(v_a_1487_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v_fst_1491_);
v___x_1493_ = v___x_1489_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_fst_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
v_a_1496_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1486_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1486_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object* v_declName_1508_, lean_object* v_args_1509_, lean_object* v_x_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(v_declName_1508_, v_args_1509_, v_x_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec_ref(v_x_1510_);
lean_dec_ref(v_args_1509_);
lean_dec(v_declName_1508_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object* v_classTy_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_Expr_getAppFn(v_classTy_1517_);
if (lean_obj_tag(v___x_1523_) == 4)
{
lean_object* v_declName_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; 
v_declName_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_declName_1524_);
v___f_1525_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1525_, 0, v_declName_1524_);
lean_inc(v_a_1521_);
lean_inc_ref(v_a_1520_);
lean_inc(v_a_1519_);
lean_inc_ref(v_a_1518_);
v___x_1526_ = lean_infer_type(v___x_1523_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; uint8_t v___x_1528_; lean_object* v___x_1529_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = 0;
v___x_1529_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_1527_, v___f_1525_, v___x_1528_, v___x_1528_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
return v___x_1529_;
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_dec_ref(v___f_1525_);
v_a_1530_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1526_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1526_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
lean_dec_ref(v___x_1523_);
v___x_1538_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
return v___x_1539_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object* v_classTy_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_classTy_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_);
lean_dec(v_a_1544_);
lean_dec_ref(v_a_1543_);
lean_dec(v_a_1542_);
lean_dec_ref(v_a_1541_);
lean_dec_ref(v_classTy_1540_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object* v_a_1547_, lean_object* v_as_1548_, lean_object* v_j_1549_){
_start:
{
lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = lean_array_get_size(v_as_1548_);
v___x_1551_ = lean_nat_dec_lt(v_j_1549_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; 
lean_dec(v_j_1549_);
v___x_1552_ = lean_box(0);
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v___x_1553_ = lean_array_fget_borrowed(v_as_1548_, v_j_1549_);
v___x_1554_ = l_Lean_Expr_mvarId_x21(v___x_1553_);
v___x_1555_ = l_Lean_instBEqMVarId_beq(v___x_1554_, v_a_1547_);
lean_dec(v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_unsigned_to_nat(1u);
v___x_1557_ = lean_nat_add(v_j_1549_, v___x_1556_);
lean_dec(v_j_1549_);
v_j_1549_ = v___x_1557_;
goto _start;
}
else
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_j_1549_);
return v___x_1559_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object* v_a_1560_, lean_object* v_as_1561_, lean_object* v_j_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1560_, v_as_1561_, v_j_1562_);
lean_dec_ref(v_as_1561_);
lean_dec(v_a_1560_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1564_, lean_object* v_x_1565_, lean_object* v_x_1566_, lean_object* v_x_1567_){
_start:
{
lean_object* v_ks_1568_; lean_object* v_vs_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1593_; 
v_ks_1568_ = lean_ctor_get(v_x_1564_, 0);
v_vs_1569_ = lean_ctor_get(v_x_1564_, 1);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_x_1564_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1571_ = v_x_1564_;
v_isShared_1572_ = v_isSharedCheck_1593_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_vs_1569_);
lean_inc(v_ks_1568_);
lean_dec(v_x_1564_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1593_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; uint8_t v___x_1574_; 
v___x_1573_ = lean_array_get_size(v_ks_1568_);
v___x_1574_ = lean_nat_dec_lt(v_x_1565_, v___x_1573_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1578_; 
lean_dec(v_x_1565_);
v___x_1575_ = lean_array_push(v_ks_1568_, v_x_1566_);
v___x_1576_ = lean_array_push(v_vs_1569_, v_x_1567_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 1, v___x_1576_);
lean_ctor_set(v___x_1571_, 0, v___x_1575_);
v___x_1578_ = v___x_1571_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1575_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
else
{
lean_object* v_k_x27_1580_; uint8_t v___x_1581_; 
v_k_x27_1580_ = lean_array_fget_borrowed(v_ks_1568_, v_x_1565_);
v___x_1581_ = l_Lean_instBEqMVarId_beq(v_x_1566_, v_k_x27_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1583_; 
if (v_isShared_1572_ == 0)
{
v___x_1583_ = v___x_1571_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_ks_1568_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_vs_1569_);
v___x_1583_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_unsigned_to_nat(1u);
v___x_1585_ = lean_nat_add(v_x_1565_, v___x_1584_);
lean_dec(v_x_1565_);
v_x_1564_ = v___x_1583_;
v_x_1565_ = v___x_1585_;
goto _start;
}
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1588_ = lean_array_fset(v_ks_1568_, v_x_1565_, v_x_1566_);
v___x_1589_ = lean_array_fset(v_vs_1569_, v_x_1565_, v_x_1567_);
lean_dec(v_x_1565_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 1, v___x_1589_);
lean_ctor_set(v___x_1571_, 0, v___x_1588_);
v___x_1591_ = v___x_1571_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v___x_1589_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_n_1594_, lean_object* v_k_1595_, lean_object* v_v_1596_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_unsigned_to_nat(0u);
v___x_1598_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_n_1594_, v___x_1597_, v_k_1595_, v_v_1596_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object* v_x_1599_, size_t v_x_1600_, size_t v_x_1601_, lean_object* v_x_1602_, lean_object* v_x_1603_){
_start:
{
if (lean_obj_tag(v_x_1599_) == 0)
{
lean_object* v_es_1604_; size_t v___x_1605_; size_t v___x_1606_; lean_object* v_j_1607_; lean_object* v___x_1608_; uint8_t v___x_1609_; 
v_es_1604_ = lean_ctor_get(v_x_1599_, 0);
v___x_1605_ = ((size_t)31ULL);
v___x_1606_ = lean_usize_land(v_x_1600_, v___x_1605_);
v_j_1607_ = lean_usize_to_nat(v___x_1606_);
v___x_1608_ = lean_array_get_size(v_es_1604_);
v___x_1609_ = lean_nat_dec_lt(v_j_1607_, v___x_1608_);
if (v___x_1609_ == 0)
{
lean_dec(v_j_1607_);
lean_dec(v_x_1603_);
lean_dec(v_x_1602_);
return v_x_1599_;
}
else
{
lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1648_; 
lean_inc_ref(v_es_1604_);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_x_1599_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; 
v_unused_1649_ = lean_ctor_get(v_x_1599_, 0);
lean_dec(v_unused_1649_);
v___x_1611_ = v_x_1599_;
v_isShared_1612_ = v_isSharedCheck_1648_;
goto v_resetjp_1610_;
}
else
{
lean_dec(v_x_1599_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1648_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v_v_1613_; lean_object* v___x_1614_; lean_object* v_xs_x27_1615_; lean_object* v___y_1617_; 
v_v_1613_ = lean_array_fget(v_es_1604_, v_j_1607_);
v___x_1614_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v_xs_x27_1615_ = lean_array_fset(v_es_1604_, v_j_1607_, v___x_1614_);
switch(lean_obj_tag(v_v_1613_))
{
case 0:
{
lean_object* v_key_1622_; lean_object* v_val_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1633_; 
v_key_1622_ = lean_ctor_get(v_v_1613_, 0);
v_val_1623_ = lean_ctor_get(v_v_1613_, 1);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_v_1613_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1625_ = v_v_1613_;
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_val_1623_);
lean_inc(v_key_1622_);
lean_dec(v_v_1613_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
uint8_t v___x_1627_; 
v___x_1627_ = l_Lean_instBEqMVarId_beq(v_x_1602_, v_key_1622_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
lean_del_object(v___x_1625_);
v___x_1628_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1622_, v_val_1623_, v_x_1602_, v_x_1603_);
v___x_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
v___y_1617_ = v___x_1629_;
goto v___jp_1616_;
}
else
{
lean_object* v___x_1631_; 
lean_dec(v_val_1623_);
lean_dec(v_key_1622_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 1, v_x_1603_);
lean_ctor_set(v___x_1625_, 0, v_x_1602_);
v___x_1631_ = v___x_1625_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_x_1602_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_x_1603_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
v___y_1617_ = v___x_1631_;
goto v___jp_1616_;
}
}
}
}
case 1:
{
lean_object* v_node_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1646_; 
v_node_1634_ = lean_ctor_get(v_v_1613_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_v_1613_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1636_ = v_v_1613_;
v_isShared_1637_ = v_isSharedCheck_1646_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_node_1634_);
lean_dec(v_v_1613_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1646_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
size_t v___x_1638_; size_t v___x_1639_; size_t v___x_1640_; size_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1638_ = ((size_t)5ULL);
v___x_1639_ = lean_usize_shift_right(v_x_1600_, v___x_1638_);
v___x_1640_ = ((size_t)1ULL);
v___x_1641_ = lean_usize_add(v_x_1601_, v___x_1640_);
v___x_1642_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_node_1634_, v___x_1639_, v___x_1641_, v_x_1602_, v_x_1603_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1642_);
v___x_1644_ = v___x_1636_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
v___y_1617_ = v___x_1644_;
goto v___jp_1616_;
}
}
}
default: 
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1647_, 0, v_x_1602_);
lean_ctor_set(v___x_1647_, 1, v_x_1603_);
v___y_1617_ = v___x_1647_;
goto v___jp_1616_;
}
}
v___jp_1616_:
{
lean_object* v___x_1618_; lean_object* v___x_1620_; 
v___x_1618_ = lean_array_fset(v_xs_x27_1615_, v_j_1607_, v___y_1617_);
lean_dec(v_j_1607_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1618_);
v___x_1620_ = v___x_1611_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
}
else
{
lean_object* v_ks_1650_; lean_object* v_vs_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1669_; 
v_ks_1650_ = lean_ctor_get(v_x_1599_, 0);
v_vs_1651_ = lean_ctor_get(v_x_1599_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_x_1599_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1653_ = v_x_1599_;
v_isShared_1654_ = v_isSharedCheck_1669_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_vs_1651_);
lean_inc(v_ks_1650_);
lean_dec(v_x_1599_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1669_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_ks_1650_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_vs_1651_);
v___x_1656_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v_newNode_1657_; size_t v___x_1658_; uint8_t v___x_1659_; 
v_newNode_1657_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v___x_1656_, v_x_1602_, v_x_1603_);
v___x_1658_ = ((size_t)7ULL);
v___x_1659_ = lean_usize_dec_le(v___x_1658_, v_x_1601_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1660_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1657_);
v___x_1661_ = lean_unsigned_to_nat(4u);
v___x_1662_ = lean_nat_dec_lt(v___x_1660_, v___x_1661_);
lean_dec(v___x_1660_);
if (v___x_1662_ == 0)
{
lean_object* v_ks_1663_; lean_object* v_vs_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_ks_1663_ = lean_ctor_get(v_newNode_1657_, 0);
lean_inc_ref(v_ks_1663_);
v_vs_1664_ = lean_ctor_get(v_newNode_1657_, 1);
lean_inc_ref(v_vs_1664_);
lean_dec_ref(v_newNode_1657_);
v___x_1665_ = lean_unsigned_to_nat(0u);
v___x_1666_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__1);
v___x_1667_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_x_1601_, v_ks_1663_, v_vs_1664_, v___x_1665_, v___x_1666_);
lean_dec_ref(v_vs_1664_);
lean_dec_ref(v_ks_1663_);
return v___x_1667_;
}
else
{
return v_newNode_1657_;
}
}
else
{
return v_newNode_1657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t v_depth_1670_, lean_object* v_keys_1671_, lean_object* v_vals_1672_, lean_object* v_i_1673_, lean_object* v_entries_1674_){
_start:
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1675_ = lean_array_get_size(v_keys_1671_);
v___x_1676_ = lean_nat_dec_lt(v_i_1673_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_dec(v_i_1673_);
return v_entries_1674_;
}
else
{
lean_object* v_k_1677_; lean_object* v_v_1678_; uint64_t v___x_1679_; size_t v_h_1680_; size_t v___x_1681_; lean_object* v___x_1682_; size_t v___x_1683_; size_t v___x_1684_; size_t v___x_1685_; size_t v_h_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v_k_1677_ = lean_array_fget_borrowed(v_keys_1671_, v_i_1673_);
v_v_1678_ = lean_array_fget_borrowed(v_vals_1672_, v_i_1673_);
v___x_1679_ = l_Lean_instHashableMVarId_hash(v_k_1677_);
v_h_1680_ = lean_uint64_to_usize(v___x_1679_);
v___x_1681_ = ((size_t)5ULL);
v___x_1682_ = lean_unsigned_to_nat(1u);
v___x_1683_ = ((size_t)1ULL);
v___x_1684_ = lean_usize_sub(v_depth_1670_, v___x_1683_);
v___x_1685_ = lean_usize_mul(v___x_1681_, v___x_1684_);
v_h_1686_ = lean_usize_shift_right(v_h_1680_, v___x_1685_);
v___x_1687_ = lean_nat_add(v_i_1673_, v___x_1682_);
lean_dec(v_i_1673_);
lean_inc(v_v_1678_);
lean_inc(v_k_1677_);
v___x_1688_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_entries_1674_, v_h_1686_, v_depth_1670_, v_k_1677_, v_v_1678_);
v_i_1673_ = v___x_1687_;
v_entries_1674_ = v___x_1688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1690_, lean_object* v_keys_1691_, lean_object* v_vals_1692_, lean_object* v_i_1693_, lean_object* v_entries_1694_){
_start:
{
size_t v_depth_boxed_1695_; lean_object* v_res_1696_; 
v_depth_boxed_1695_ = lean_unbox_usize(v_depth_1690_);
lean_dec(v_depth_1690_);
v_res_1696_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1695_, v_keys_1691_, v_vals_1692_, v_i_1693_, v_entries_1694_);
lean_dec_ref(v_vals_1692_);
lean_dec_ref(v_keys_1691_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_1697_, lean_object* v_x_1698_, lean_object* v_x_1699_, lean_object* v_x_1700_, lean_object* v_x_1701_){
_start:
{
size_t v_x_1612__boxed_1702_; size_t v_x_1613__boxed_1703_; lean_object* v_res_1704_; 
v_x_1612__boxed_1702_ = lean_unbox_usize(v_x_1698_);
lean_dec(v_x_1698_);
v_x_1613__boxed_1703_ = lean_unbox_usize(v_x_1699_);
lean_dec(v_x_1699_);
v_res_1704_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1697_, v_x_1612__boxed_1702_, v_x_1613__boxed_1703_, v_x_1700_, v_x_1701_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object* v_x_1705_, lean_object* v_x_1706_, lean_object* v_x_1707_){
_start:
{
uint64_t v___x_1708_; size_t v___x_1709_; size_t v___x_1710_; lean_object* v___x_1711_; 
v___x_1708_ = l_Lean_instHashableMVarId_hash(v_x_1706_);
v___x_1709_ = lean_uint64_to_usize(v___x_1708_);
v___x_1710_ = ((size_t)1ULL);
v___x_1711_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1705_, v___x_1709_, v___x_1710_, v_x_1706_, v_x_1707_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object* v_mvarId_1712_, lean_object* v_val_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v_mctx_1717_; lean_object* v_cache_1718_; lean_object* v_zetaDeltaFVarIds_1719_; lean_object* v_postponed_1720_; lean_object* v_diag_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1750_; 
v___x_1716_ = lean_st_ref_take(v___y_1714_);
v_mctx_1717_ = lean_ctor_get(v___x_1716_, 0);
v_cache_1718_ = lean_ctor_get(v___x_1716_, 1);
v_zetaDeltaFVarIds_1719_ = lean_ctor_get(v___x_1716_, 2);
v_postponed_1720_ = lean_ctor_get(v___x_1716_, 3);
v_diag_1721_ = lean_ctor_get(v___x_1716_, 4);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1723_ = v___x_1716_;
v_isShared_1724_ = v_isSharedCheck_1750_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_diag_1721_);
lean_inc(v_postponed_1720_);
lean_inc(v_zetaDeltaFVarIds_1719_);
lean_inc(v_cache_1718_);
lean_inc(v_mctx_1717_);
lean_dec(v___x_1716_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1750_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v_depth_1725_; lean_object* v_levelAssignDepth_1726_; lean_object* v_lmvarCounter_1727_; lean_object* v_mvarCounter_1728_; lean_object* v_lDecls_1729_; lean_object* v_decls_1730_; lean_object* v_userNames_1731_; lean_object* v_lAssignment_1732_; lean_object* v_eAssignment_1733_; lean_object* v_dAssignment_1734_; lean_object* v_instanceTypedMVars_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1749_; 
v_depth_1725_ = lean_ctor_get(v_mctx_1717_, 0);
v_levelAssignDepth_1726_ = lean_ctor_get(v_mctx_1717_, 1);
v_lmvarCounter_1727_ = lean_ctor_get(v_mctx_1717_, 2);
v_mvarCounter_1728_ = lean_ctor_get(v_mctx_1717_, 3);
v_lDecls_1729_ = lean_ctor_get(v_mctx_1717_, 4);
v_decls_1730_ = lean_ctor_get(v_mctx_1717_, 5);
v_userNames_1731_ = lean_ctor_get(v_mctx_1717_, 6);
v_lAssignment_1732_ = lean_ctor_get(v_mctx_1717_, 7);
v_eAssignment_1733_ = lean_ctor_get(v_mctx_1717_, 8);
v_dAssignment_1734_ = lean_ctor_get(v_mctx_1717_, 9);
v_instanceTypedMVars_1735_ = lean_ctor_get(v_mctx_1717_, 10);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_mctx_1717_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1737_ = v_mctx_1717_;
v_isShared_1738_ = v_isSharedCheck_1749_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_instanceTypedMVars_1735_);
lean_inc(v_dAssignment_1734_);
lean_inc(v_eAssignment_1733_);
lean_inc(v_lAssignment_1732_);
lean_inc(v_userNames_1731_);
lean_inc(v_decls_1730_);
lean_inc(v_lDecls_1729_);
lean_inc(v_mvarCounter_1728_);
lean_inc(v_lmvarCounter_1727_);
lean_inc(v_levelAssignDepth_1726_);
lean_inc(v_depth_1725_);
lean_dec(v_mctx_1717_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1749_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1739_ = lean_box(0);
v___x_1740_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_eAssignment_1733_, v_mvarId_1712_, v_val_1713_);
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 8, v___x_1740_);
v___x_1742_ = v___x_1737_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_depth_1725_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_levelAssignDepth_1726_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_lmvarCounter_1727_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_mvarCounter_1728_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v_lDecls_1729_);
lean_ctor_set(v_reuseFailAlloc_1748_, 5, v_decls_1730_);
lean_ctor_set(v_reuseFailAlloc_1748_, 6, v_userNames_1731_);
lean_ctor_set(v_reuseFailAlloc_1748_, 7, v_lAssignment_1732_);
lean_ctor_set(v_reuseFailAlloc_1748_, 8, v___x_1740_);
lean_ctor_set(v_reuseFailAlloc_1748_, 9, v_dAssignment_1734_);
lean_ctor_set(v_reuseFailAlloc_1748_, 10, v_instanceTypedMVars_1735_);
v___x_1742_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1744_; 
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 0, v___x_1742_);
v___x_1744_ = v___x_1723_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1742_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_cache_1718_);
lean_ctor_set(v_reuseFailAlloc_1747_, 2, v_zetaDeltaFVarIds_1719_);
lean_ctor_set(v_reuseFailAlloc_1747_, 3, v_postponed_1720_);
lean_ctor_set(v_reuseFailAlloc_1747_, 4, v_diag_1721_);
v___x_1744_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = lean_st_ref_put(v___y_1714_, v___x_1744_);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1739_);
return v___x_1746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object* v_mvarId_1751_, lean_object* v_val_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_1751_, v_val_1752_, v___y_1753_);
lean_dec(v___y_1753_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object* v_argMVars_1756_, lean_object* v_argVars_1757_, lean_object* v_as_1758_, size_t v_sz_1759_, size_t v_i_1760_, lean_object* v_b_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
uint8_t v___x_1767_; 
v___x_1767_ = lean_usize_dec_lt(v_i_1760_, v_sz_1759_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_b_1761_);
return v___x_1768_;
}
else
{
lean_object* v___x_1769_; lean_object* v_a_1770_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1769_ = lean_box(0);
v_a_1770_ = lean_array_uget_borrowed(v_as_1758_, v_i_1760_);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1770_, v_argMVars_1756_, v___x_1791_);
if (lean_obj_tag(v___x_1792_) == 1)
{
lean_object* v_val_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_val_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_val_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = l_Lean_instInhabitedExpr;
v___x_1795_ = lean_array_get_borrowed(v___x_1794_, v_argVars_1757_, v_val_1793_);
lean_dec(v_val_1793_);
lean_inc(v___x_1795_);
lean_inc(v_a_1770_);
v___x_1796_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_a_1770_, v___x_1795_, v___y_1763_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_dec_ref_known(v___x_1796_, 1);
v___y_1772_ = v___y_1762_;
v___y_1773_ = v___y_1763_;
v___y_1774_ = v___y_1764_;
v___y_1775_ = v___y_1765_;
goto v___jp_1771_;
}
else
{
return v___x_1796_;
}
}
else
{
lean_dec(v___x_1792_);
v___y_1772_ = v___y_1762_;
v___y_1773_ = v___y_1763_;
v___y_1774_ = v___y_1764_;
v___y_1775_ = v___y_1765_;
goto v___jp_1771_;
}
v___jp_1771_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
lean_inc(v_a_1770_);
v___x_1776_ = l_Lean_Expr_mvar___override(v_a_1770_);
lean_inc(v___y_1775_);
lean_inc_ref(v___y_1774_);
lean_inc(v___y_1773_);
lean_inc_ref(v___y_1772_);
v___x_1777_ = lean_infer_type(v___x_1776_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1779_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1777_, 1);
v___x_1779_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_1756_, v_argVars_1757_, v_a_1778_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
if (lean_obj_tag(v___x_1779_) == 0)
{
size_t v___x_1780_; size_t v___x_1781_; 
lean_dec_ref_known(v___x_1779_, 1);
v___x_1780_ = ((size_t)1ULL);
v___x_1781_ = lean_usize_add(v_i_1760_, v___x_1780_);
v_i_1760_ = v___x_1781_;
v_b_1761_ = v___x_1769_;
goto _start;
}
else
{
return v___x_1779_;
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
v_a_1783_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1777_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1777_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object* v_argMVars_1797_, lean_object* v_argVars_1798_, lean_object* v_e_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lean_Meta_getMVars(v_e_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1807_; size_t v_sz_1808_; size_t v___x_1809_; lean_object* v___x_1810_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___x_1807_ = lean_box(0);
v_sz_1808_ = lean_array_size(v_a_1806_);
v___x_1809_ = ((size_t)0ULL);
v___x_1810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_1797_, v_argVars_1798_, v_a_1806_, v_sz_1808_, v___x_1809_, v___x_1807_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
lean_dec(v_a_1806_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1817_ == 0)
{
lean_object* v_unused_1818_; 
v_unused_1818_ = lean_ctor_get(v___x_1810_, 0);
lean_dec(v_unused_1818_);
v___x_1812_ = v___x_1810_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_dec(v___x_1810_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1807_);
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1807_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
else
{
return v___x_1810_;
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
v_a_1819_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1805_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1805_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object* v_argMVars_1827_, lean_object* v_argVars_1828_, lean_object* v_e_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_1827_, v_argVars_1828_, v_e_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec_ref(v_argVars_1828_);
lean_dec_ref(v_argMVars_1827_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object* v_argMVars_1836_, lean_object* v_argVars_1837_, lean_object* v_as_1838_, lean_object* v_sz_1839_, lean_object* v_i_1840_, lean_object* v_b_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_){
_start:
{
size_t v_sz_boxed_1847_; size_t v_i_boxed_1848_; lean_object* v_res_1849_; 
v_sz_boxed_1847_ = lean_unbox_usize(v_sz_1839_);
lean_dec(v_sz_1839_);
v_i_boxed_1848_ = lean_unbox_usize(v_i_1840_);
lean_dec(v_i_1840_);
v_res_1849_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_1836_, v_argVars_1837_, v_as_1838_, v_sz_boxed_1847_, v_i_boxed_1848_, v_b_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec_ref(v_as_1838_);
lean_dec_ref(v_argVars_1837_);
lean_dec_ref(v_argMVars_1836_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object* v_mvarId_1850_, lean_object* v_val_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_1850_, v_val_1851_, v___y_1853_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object* v_mvarId_1858_, lean_object* v_val_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(v_mvarId_1858_, v_val_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object* v_00_u03b2_1866_, lean_object* v_x_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_x_1867_, v_x_1868_, v_x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1871_, lean_object* v_x_1872_, size_t v_x_1873_, size_t v_x_1874_, lean_object* v_x_1875_, lean_object* v_x_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1872_, v_x_1873_, v_x_1874_, v_x_1875_, v_x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1878_, lean_object* v_x_1879_, lean_object* v_x_1880_, lean_object* v_x_1881_, lean_object* v_x_1882_, lean_object* v_x_1883_){
_start:
{
size_t v_x_1971__boxed_1884_; size_t v_x_1972__boxed_1885_; lean_object* v_res_1886_; 
v_x_1971__boxed_1884_ = lean_unbox_usize(v_x_1880_);
lean_dec(v_x_1880_);
v_x_1972__boxed_1885_ = lean_unbox_usize(v_x_1881_);
lean_dec(v_x_1881_);
v_res_1886_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(v_00_u03b2_1878_, v_x_1879_, v_x_1971__boxed_1884_, v_x_1972__boxed_1885_, v_x_1882_, v_x_1883_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1887_, lean_object* v_n_1888_, lean_object* v_k_1889_, lean_object* v_v_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v_n_1888_, v_k_1889_, v_v_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1892_, size_t v_depth_1893_, lean_object* v_keys_1894_, lean_object* v_vals_1895_, lean_object* v_heq_1896_, lean_object* v_i_1897_, lean_object* v_entries_1898_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_1893_, v_keys_1894_, v_vals_1895_, v_i_1897_, v_entries_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1900_, lean_object* v_depth_1901_, lean_object* v_keys_1902_, lean_object* v_vals_1903_, lean_object* v_heq_1904_, lean_object* v_i_1905_, lean_object* v_entries_1906_){
_start:
{
size_t v_depth_boxed_1907_; lean_object* v_res_1908_; 
v_depth_boxed_1907_ = lean_unbox_usize(v_depth_1901_);
lean_dec(v_depth_1901_);
v_res_1908_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(v_00_u03b2_1900_, v_depth_boxed_1907_, v_keys_1902_, v_vals_1903_, v_heq_1904_, v_i_1905_, v_entries_1906_);
lean_dec_ref(v_vals_1903_);
lean_dec_ref(v_keys_1902_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1909_, lean_object* v_x_1910_, lean_object* v_x_1911_, lean_object* v_x_1912_, lean_object* v_x_1913_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_x_1910_, v_x_1911_, v_x_1912_, v_x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(lean_object* v_e_1915_, lean_object* v___y_1916_){
_start:
{
uint8_t v___x_1918_; 
v___x_1918_ = l_Lean_Expr_hasMVar(v_e_1915_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_e_1915_);
return v___x_1919_;
}
else
{
lean_object* v___x_1920_; lean_object* v_mctx_1921_; lean_object* v___x_1922_; lean_object* v_fst_1923_; lean_object* v_snd_1924_; lean_object* v___x_1925_; lean_object* v_cache_1926_; lean_object* v_zetaDeltaFVarIds_1927_; lean_object* v_postponed_1928_; lean_object* v_diag_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1938_; 
v___x_1920_ = lean_st_ref_get(v___y_1916_);
v_mctx_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc_ref(v_mctx_1921_);
lean_dec(v___x_1920_);
v___x_1922_ = l_Lean_instantiateMVarsCore(v_mctx_1921_, v_e_1915_);
v_fst_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_fst_1923_);
v_snd_1924_ = lean_ctor_get(v___x_1922_, 1);
lean_inc(v_snd_1924_);
lean_dec_ref(v___x_1922_);
v___x_1925_ = lean_st_ref_take(v___y_1916_);
v_cache_1926_ = lean_ctor_get(v___x_1925_, 1);
v_zetaDeltaFVarIds_1927_ = lean_ctor_get(v___x_1925_, 2);
v_postponed_1928_ = lean_ctor_get(v___x_1925_, 3);
v_diag_1929_ = lean_ctor_get(v___x_1925_, 4);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1938_ == 0)
{
lean_object* v_unused_1939_; 
v_unused_1939_ = lean_ctor_get(v___x_1925_, 0);
lean_dec(v_unused_1939_);
v___x_1931_ = v___x_1925_;
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_diag_1929_);
lean_inc(v_postponed_1928_);
lean_inc(v_zetaDeltaFVarIds_1927_);
lean_inc(v_cache_1926_);
lean_dec(v___x_1925_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v_snd_1924_);
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_snd_1924_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v_cache_1926_);
lean_ctor_set(v_reuseFailAlloc_1937_, 2, v_zetaDeltaFVarIds_1927_);
lean_ctor_set(v_reuseFailAlloc_1937_, 3, v_postponed_1928_);
lean_ctor_set(v_reuseFailAlloc_1937_, 4, v_diag_1929_);
v___x_1934_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_st_ref_put(v___y_1916_, v___x_1934_);
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_fst_1923_);
return v___x_1936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg___boxed(lean_object* v_e_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_1940_, v___y_1941_);
lean_dec(v___y_1941_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object* v_e_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_1944_, v___y_1946_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object* v_e_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(v_e_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
return v_res_1957_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object* v_opts_1958_, lean_object* v_opt_1959_){
_start:
{
lean_object* v_name_1960_; lean_object* v_defValue_1961_; lean_object* v_map_1962_; lean_object* v___x_1963_; 
v_name_1960_ = lean_ctor_get(v_opt_1959_, 0);
v_defValue_1961_ = lean_ctor_get(v_opt_1959_, 1);
v_map_1962_ = lean_ctor_get(v_opts_1958_, 0);
v___x_1963_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1962_, v_name_1960_);
if (lean_obj_tag(v___x_1963_) == 0)
{
uint8_t v___x_1964_; 
v___x_1964_ = lean_unbox(v_defValue_1961_);
return v___x_1964_;
}
else
{
lean_object* v_val_1965_; 
v_val_1965_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_val_1965_);
lean_dec_ref_known(v___x_1963_, 1);
if (lean_obj_tag(v_val_1965_) == 1)
{
uint8_t v_v_1966_; 
v_v_1966_ = lean_ctor_get_uint8(v_val_1965_, 0);
lean_dec_ref_known(v_val_1965_, 0);
return v_v_1966_;
}
else
{
uint8_t v___x_1967_; 
lean_dec(v_val_1965_);
v___x_1967_ = lean_unbox(v_defValue_1961_);
return v___x_1967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object* v_opts_1968_, lean_object* v_opt_1969_){
_start:
{
uint8_t v_res_1970_; lean_object* v_r_1971_; 
v_res_1970_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_opts_1968_, v_opt_1969_);
lean_dec_ref(v_opt_1969_);
lean_dec_ref(v_opts_1968_);
v_r_1971_ = lean_box(v_res_1970_);
return v_r_1971_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(lean_object* v_a_1972_, lean_object* v_as_1973_, size_t v_i_1974_, size_t v_stop_1975_){
_start:
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_usize_dec_eq(v_i_1974_, v_stop_1975_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = lean_array_uget_borrowed(v_as_1973_, v_i_1974_);
v___x_1978_ = lean_nat_dec_eq(v_a_1972_, v___x_1977_);
if (v___x_1978_ == 0)
{
size_t v___x_1979_; size_t v___x_1980_; 
v___x_1979_ = ((size_t)1ULL);
v___x_1980_ = lean_usize_add(v_i_1974_, v___x_1979_);
v_i_1974_ = v___x_1980_;
goto _start;
}
else
{
return v___x_1978_;
}
}
else
{
uint8_t v___x_1982_; 
v___x_1982_ = 0;
return v___x_1982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1___boxed(lean_object* v_a_1983_, lean_object* v_as_1984_, lean_object* v_i_1985_, lean_object* v_stop_1986_){
_start:
{
size_t v_i_boxed_1987_; size_t v_stop_boxed_1988_; uint8_t v_res_1989_; lean_object* v_r_1990_; 
v_i_boxed_1987_ = lean_unbox_usize(v_i_1985_);
lean_dec(v_i_1985_);
v_stop_boxed_1988_ = lean_unbox_usize(v_stop_1986_);
lean_dec(v_stop_1986_);
v_res_1989_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_1983_, v_as_1984_, v_i_boxed_1987_, v_stop_boxed_1988_);
lean_dec_ref(v_as_1984_);
lean_dec(v_a_1983_);
v_r_1990_ = lean_box(v_res_1989_);
return v_r_1990_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object* v_as_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v___x_1993_ = lean_unsigned_to_nat(0u);
v___x_1994_ = lean_array_get_size(v_as_1991_);
v___x_1995_ = lean_nat_dec_lt(v___x_1993_, v___x_1994_);
if (v___x_1995_ == 0)
{
return v___x_1995_;
}
else
{
if (v___x_1995_ == 0)
{
return v___x_1995_;
}
else
{
size_t v___x_1996_; size_t v___x_1997_; uint8_t v___x_1998_; 
v___x_1996_ = ((size_t)0ULL);
v___x_1997_ = lean_usize_of_nat(v___x_1994_);
v___x_1998_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_1992_, v_as_1991_, v___x_1996_, v___x_1997_);
return v___x_1998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object* v_as_1999_, lean_object* v_a_2000_){
_start:
{
uint8_t v_res_2001_; lean_object* v_r_2002_; 
v_res_2001_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_as_1999_, v_a_2000_);
lean_dec(v_a_2000_);
lean_dec_ref(v_as_1999_);
v_r_2002_ = lean_box(v_res_2001_);
return v_r_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object* v_a_2003_, lean_object* v_fst_2004_, lean_object* v_argVars_2005_, lean_object* v_as_2006_, size_t v_sz_2007_, size_t v_i_2008_, lean_object* v_b_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v_a_2016_; uint8_t v___x_2020_; 
v___x_2020_ = lean_usize_dec_lt(v_i_2008_, v_sz_2007_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; 
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_b_2009_);
return v___x_2021_;
}
else
{
lean_object* v_next_2022_; 
v_next_2022_ = lean_ctor_get(v_b_2009_, 0);
lean_inc(v_next_2022_);
if (lean_obj_tag(v_next_2022_) == 0)
{
lean_object* v___x_2023_; 
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_b_2009_);
return v___x_2023_;
}
else
{
lean_object* v_upperBound_2024_; lean_object* v_val_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2056_; 
v_upperBound_2024_ = lean_ctor_get(v_b_2009_, 1);
v_val_2025_ = lean_ctor_get(v_next_2022_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v_next_2022_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2027_ = v_next_2022_;
v_isShared_2028_ = v_isSharedCheck_2056_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_val_2025_);
lean_dec(v_next_2022_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2056_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
uint8_t v___x_2029_; 
v___x_2029_ = lean_nat_dec_lt(v_val_2025_, v_upperBound_2024_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; 
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v_b_2009_);
return v___x_2030_;
}
else
{
lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2053_; 
lean_inc(v_upperBound_2024_);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_b_2009_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; lean_object* v_unused_2055_; 
v_unused_2054_ = lean_ctor_get(v_b_2009_, 1);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_b_2009_, 0);
lean_dec(v_unused_2055_);
v___x_2032_ = v_b_2009_;
v_isShared_2033_ = v_isSharedCheck_2053_;
goto v_resetjp_2031_;
}
else
{
lean_dec(v_b_2009_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2053_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2034_ = lean_unsigned_to_nat(1u);
v___x_2035_ = lean_nat_add(v_val_2025_, v___x_2034_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2035_);
v___x_2037_ = v___x_2027_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2039_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___x_2037_);
v___x_2039_ = v___x_2032_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v_upperBound_2024_);
v___x_2039_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_2003_, v_val_2025_);
lean_dec(v_val_2025_);
if (v___x_2040_ == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_array_uget_borrowed(v_as_2006_, v_i_2008_);
lean_inc(v_a_2041_);
v___x_2042_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2004_, v_argVars_2005_, v_a_2041_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_dec_ref_known(v___x_2042_, 1);
v_a_2016_ = v___x_2039_;
goto v___jp_2015_;
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v___x_2039_);
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
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
v_a_2016_ = v___x_2039_;
goto v___jp_2015_;
}
}
}
}
}
}
}
}
v___jp_2015_:
{
size_t v___x_2017_; size_t v___x_2018_; 
v___x_2017_ = ((size_t)1ULL);
v___x_2018_ = lean_usize_add(v_i_2008_, v___x_2017_);
v_i_2008_ = v___x_2018_;
v_b_2009_ = v_a_2016_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object* v_a_2057_, lean_object* v_fst_2058_, lean_object* v_argVars_2059_, lean_object* v_as_2060_, lean_object* v_sz_2061_, lean_object* v_i_2062_, lean_object* v_b_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
size_t v_sz_boxed_2069_; size_t v_i_boxed_2070_; lean_object* v_res_2071_; 
v_sz_boxed_2069_ = lean_unbox_usize(v_sz_2061_);
lean_dec(v_sz_2061_);
v_i_boxed_2070_ = lean_unbox_usize(v_i_2062_);
lean_dec(v_i_2062_);
v_res_2071_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2057_, v_fst_2058_, v_argVars_2059_, v_as_2060_, v_sz_boxed_2069_, v_i_boxed_2070_, v_b_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec_ref(v_as_2060_);
lean_dec_ref(v_argVars_2059_);
lean_dec_ref(v_fst_2058_);
lean_dec_ref(v_a_2057_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object* v_upperBound_2072_, lean_object* v_a_2073_, lean_object* v___x_2074_, lean_object* v_a_2075_, lean_object* v_b_2076_){
_start:
{
uint8_t v___x_2078_; 
v___x_2078_ = lean_nat_dec_lt(v_a_2075_, v_upperBound_2072_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
lean_dec(v_a_2075_);
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v_b_2076_);
return v___x_2079_;
}
else
{
lean_object* v_snd_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2120_; 
v_snd_2080_ = lean_ctor_get(v_b_2076_, 1);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_b_2076_);
if (v_isSharedCheck_2120_ == 0)
{
lean_object* v_unused_2121_; 
v_unused_2121_ = lean_ctor_get(v_b_2076_, 0);
lean_dec(v_unused_2121_);
v___x_2082_ = v_b_2076_;
v_isShared_2083_ = v_isSharedCheck_2120_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_snd_2080_);
lean_dec(v_b_2076_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2120_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v_array_2084_; lean_object* v_start_2085_; lean_object* v_stop_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; 
v_array_2084_ = lean_ctor_get(v_snd_2080_, 0);
v_start_2085_ = lean_ctor_get(v_snd_2080_, 1);
v_stop_2086_ = lean_ctor_get(v_snd_2080_, 2);
v___x_2087_ = lean_box(0);
v___x_2088_ = lean_nat_dec_lt(v_start_2085_, v_stop_2086_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2090_; 
lean_dec(v_a_2075_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 0, v___x_2087_);
v___x_2090_ = v___x_2082_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_snd_2080_);
v___x_2090_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2091_; 
v___x_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
return v___x_2091_;
}
}
else
{
lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2116_; 
lean_inc(v_stop_2086_);
lean_inc(v_start_2085_);
lean_inc_ref(v_array_2084_);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_snd_2080_);
if (v_isSharedCheck_2116_ == 0)
{
lean_object* v_unused_2117_; lean_object* v_unused_2118_; lean_object* v_unused_2119_; 
v_unused_2117_ = lean_ctor_get(v_snd_2080_, 2);
lean_dec(v_unused_2117_);
v_unused_2118_ = lean_ctor_get(v_snd_2080_, 1);
lean_dec(v_unused_2118_);
v_unused_2119_ = lean_ctor_get(v_snd_2080_, 0);
lean_dec(v_unused_2119_);
v___x_2094_ = v_snd_2080_;
v_isShared_2095_ = v_isSharedCheck_2116_;
goto v_resetjp_2093_;
}
else
{
lean_dec(v_snd_2080_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2116_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2096_ = lean_array_fget(v_array_2084_, v_start_2085_);
v___x_2097_ = lean_unsigned_to_nat(1u);
v___x_2098_ = lean_nat_add(v_start_2085_, v___x_2097_);
lean_dec(v_start_2085_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 1, v___x_2098_);
v___x_2100_ = v___x_2094_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_array_2084_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v___x_2098_);
lean_ctor_set(v_reuseFailAlloc_2115_, 2, v_stop_2086_);
v___x_2100_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
uint8_t v___x_2107_; 
v___x_2107_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_2073_, v_a_2075_);
if (v___x_2107_ == 0)
{
uint8_t v___x_2108_; 
v___x_2108_ = l_Lean_Expr_hasExprMVar(v___x_2096_);
lean_dec(v___x_2096_);
if (v___x_2108_ == 0)
{
goto v___jp_2101_;
}
else
{
lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_del_object(v___x_2082_);
lean_dec(v_a_2075_);
v___x_2109_ = lean_unsigned_to_nat(0u);
v___x_2110_ = lean_nat_dec_eq(v___x_2074_, v___x_2109_);
v___x_2111_ = lean_box(v___x_2110_);
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v___x_2100_);
v___x_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
else
{
lean_dec(v___x_2096_);
goto v___jp_2101_;
}
v___jp_2101_:
{
lean_object* v___x_2103_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2100_);
lean_ctor_set(v___x_2082_, 0, v___x_2087_);
v___x_2103_ = v___x_2082_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v___x_2100_);
v___x_2103_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
lean_object* v___x_2104_; 
v___x_2104_ = lean_nat_add(v_a_2075_, v___x_2097_);
lean_dec(v_a_2075_);
v_a_2075_ = v___x_2104_;
v_b_2076_ = v___x_2103_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object* v_upperBound_2122_, lean_object* v_a_2123_, lean_object* v___x_2124_, lean_object* v_a_2125_, lean_object* v_b_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_2122_, v_a_2123_, v___x_2124_, v_a_2125_, v_b_2126_);
lean_dec(v___x_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_upperBound_2122_);
return v_res_2128_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = lean_box(0);
v___x_2130_ = l_unsafeCast___redArg(v___x_2129_);
return v___x_2130_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2131_; lean_object* v_dummy_2132_; 
v___x_2131_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_dummy_2132_ = l_Lean_Expr_sort___override(v___x_2131_);
return v_dummy_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object* v___x_2133_, lean_object* v___x_2134_, uint8_t v___x_2135_, lean_object* v_x_2136_, lean_object* v_argTy_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v___x_2143_; 
lean_inc(v___y_2141_);
lean_inc_ref(v___y_2140_);
lean_inc(v___y_2139_);
lean_inc_ref(v___y_2138_);
v___x_2143_ = lean_whnf(v_argTy_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v___x_2145_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2143_, 1);
v___x_2145_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2144_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v_dummy_2147_; lean_object* v_nargs_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
v_dummy_2147_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1);
v_nargs_2148_ = l_Lean_Expr_getAppNumArgs(v_a_2144_);
lean_inc(v_nargs_2148_);
v___x_2149_ = lean_mk_array(v_nargs_2148_, v_dummy_2147_);
v___x_2150_ = lean_unsigned_to_nat(1u);
v___x_2151_ = lean_nat_sub(v_nargs_2148_, v___x_2150_);
lean_dec(v_nargs_2148_);
v___x_2152_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2144_, v___x_2149_, v___x_2151_);
v___x_2153_ = lean_array_get_size(v___x_2152_);
lean_inc(v___x_2133_);
v___x_2154_ = l_Array_toSubarray___redArg(v___x_2152_, v___x_2133_, v___x_2153_);
v___x_2155_ = lean_box(0);
v___x_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2155_);
lean_ctor_set(v___x_2156_, 1, v___x_2154_);
v___x_2157_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v___x_2153_, v_a_2146_, v___x_2134_, v___x_2133_, v___x_2156_);
lean_dec(v_a_2146_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2171_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2171_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2171_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v_fst_2162_; 
v_fst_2162_ = lean_ctor_get(v_a_2158_, 0);
lean_inc(v_fst_2162_);
lean_dec(v_a_2158_);
if (lean_obj_tag(v_fst_2162_) == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_box(v___x_2135_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2163_);
v___x_2165_ = v___x_2160_;
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
lean_object* v_val_2167_; lean_object* v___x_2169_; 
v_val_2167_ = lean_ctor_get(v_fst_2162_, 0);
lean_inc(v_val_2167_);
lean_dec_ref_known(v_fst_2162_, 1);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v_val_2167_);
v___x_2169_ = v___x_2160_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_val_2167_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_a_2172_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2157_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2157_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec(v_a_2144_);
lean_dec(v___x_2133_);
v_a_2180_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2145_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2145_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
lean_dec(v___x_2133_);
v_a_2188_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2190_ = v___x_2143_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2143_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_a_2188_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object* v___x_2196_, lean_object* v___x_2197_, lean_object* v___x_2198_, lean_object* v_x_2199_, lean_object* v_argTy_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
uint8_t v___x_22771__boxed_2206_; lean_object* v_res_2207_; 
v___x_22771__boxed_2206_ = lean_unbox(v___x_2198_);
v_res_2207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(v___x_2196_, v___x_2197_, v___x_22771__boxed_2206_, v_x_2199_, v_argTy_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec_ref(v_x_2199_);
lean_dec(v___x_2197_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object* v_fst_2211_, lean_object* v_projInfo_x3f_2212_, lean_object* v___x_2213_, lean_object* v_argVars_2214_, lean_object* v_as_2215_, size_t v_sz_2216_, size_t v_i_2217_, lean_object* v_b_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
uint8_t v___x_2224_; 
v___x_2224_ = lean_usize_dec_lt(v_i_2217_, v_sz_2216_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; 
lean_dec(v___x_2213_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v_b_2218_);
return v___x_2225_;
}
else
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___f_2231_; uint8_t v___x_2232_; lean_object* v_a_2233_; lean_object* v___y_2240_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec_ref(v_b_2218_);
v___x_2226_ = lean_box(0);
v___x_2227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v___x_2228_ = l_Lean_instInhabitedExpr;
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = lean_box(v___x_2224_);
lean_inc(v___x_2213_);
v___f_2231_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2231_, 0, v___x_2229_);
lean_closure_set(v___f_2231_, 1, v___x_2213_);
lean_closure_set(v___f_2231_, 2, v___x_2230_);
v___x_2232_ = lean_nat_dec_eq(v___x_2213_, v___x_2229_);
v_a_2233_ = lean_array_uget_borrowed(v_as_2215_, v_i_2217_);
v___x_2254_ = lean_array_get_borrowed(v___x_2228_, v_fst_2211_, v_a_2233_);
lean_inc(v___y_2222_);
lean_inc_ref(v___y_2221_);
lean_inc(v___y_2220_);
lean_inc_ref(v___y_2219_);
lean_inc(v___x_2254_);
v___x_2255_ = lean_infer_type(v___x_2254_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2256_; lean_object* v___x_2257_; 
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
lean_inc(v_a_2256_);
lean_dec_ref_known(v___x_2255_, 1);
v___x_2257_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2256_, v___y_2220_);
if (lean_obj_tag(v___x_2257_) == 0)
{
if (lean_obj_tag(v_projInfo_x3f_2212_) == 1)
{
lean_object* v_val_2258_; lean_object* v_a_2259_; lean_object* v_numParams_2260_; uint8_t v___x_2261_; 
v_val_2258_ = lean_ctor_get(v_projInfo_x3f_2212_, 0);
v_a_2259_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2257_, 1);
v_numParams_2260_ = lean_ctor_get(v_val_2258_, 1);
v___x_2261_ = lean_nat_dec_eq(v_numParams_2260_, v_a_2233_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; 
v___x_2262_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2259_, v___f_2231_, v___x_2232_, v___x_2232_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
v___y_2240_ = v___x_2262_;
goto v___jp_2239_;
}
else
{
lean_object* v___x_2263_; 
lean_dec_ref(v___f_2231_);
lean_dec(v___x_2213_);
v___x_2263_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2211_, v_argVars_2214_, v_a_2259_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_dec_ref_known(v___x_2263_, 1);
goto v___jp_2234_;
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2257_, 1);
v___x_2273_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2272_, v___f_2231_, v___x_2232_, v___x_2232_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
v___y_2240_ = v___x_2273_;
goto v___jp_2239_;
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
lean_dec_ref(v___f_2231_);
lean_dec(v___x_2213_);
v_a_2274_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2257_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2257_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v___f_2231_);
lean_dec(v___x_2213_);
v_a_2282_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2255_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2255_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
v___jp_2234_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_inc(v_a_2233_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_a_2233_);
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
v___x_2237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v___x_2226_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
return v___x_2238_;
}
v___jp_2239_:
{
if (lean_obj_tag(v___y_2240_) == 0)
{
lean_object* v_a_2241_; uint8_t v___x_2242_; 
v_a_2241_ = lean_ctor_get(v___y_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___y_2240_, 1);
v___x_2242_ = lean_unbox(v_a_2241_);
lean_dec(v_a_2241_);
if (v___x_2242_ == 0)
{
size_t v___x_2243_; size_t v___x_2244_; 
v___x_2243_ = ((size_t)1ULL);
v___x_2244_ = lean_usize_add(v_i_2217_, v___x_2243_);
v_i_2217_ = v___x_2244_;
v_b_2218_ = v___x_2227_;
goto _start;
}
else
{
lean_dec(v___x_2213_);
goto v___jp_2234_;
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec(v___x_2213_);
v_a_2246_ = lean_ctor_get(v___y_2240_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___y_2240_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___y_2240_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___y_2240_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object* v_fst_2290_, lean_object* v_projInfo_x3f_2291_, lean_object* v___x_2292_, lean_object* v_argVars_2293_, lean_object* v_as_2294_, lean_object* v_sz_2295_, lean_object* v_i_2296_, lean_object* v_b_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
size_t v_sz_boxed_2303_; size_t v_i_boxed_2304_; lean_object* v_res_2305_; 
v_sz_boxed_2303_ = lean_unbox_usize(v_sz_2295_);
lean_dec(v_sz_2295_);
v_i_boxed_2304_ = lean_unbox_usize(v_i_2296_);
lean_dec(v_i_2296_);
v_res_2305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2290_, v_projInfo_x3f_2291_, v___x_2292_, v_argVars_2293_, v_as_2294_, v_sz_boxed_2303_, v_i_boxed_2304_, v_b_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec_ref(v_as_2294_);
lean_dec_ref(v_argVars_2293_);
lean_dec(v_projInfo_x3f_2291_);
lean_dec_ref(v_fst_2290_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object* v_next_2306_, lean_object* v_as_2307_, size_t v_i_2308_, size_t v_stop_2309_, lean_object* v_b_2310_){
_start:
{
lean_object* v___y_2312_; uint8_t v___x_2316_; 
v___x_2316_ = lean_usize_dec_eq(v_i_2308_, v_stop_2309_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2317_ = lean_array_uget_borrowed(v_as_2307_, v_i_2308_);
v___x_2318_ = lean_nat_dec_eq(v___x_2317_, v_next_2306_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; 
lean_inc(v___x_2317_);
v___x_2319_ = lean_array_push(v_b_2310_, v___x_2317_);
v___y_2312_ = v___x_2319_;
goto v___jp_2311_;
}
else
{
v___y_2312_ = v_b_2310_;
goto v___jp_2311_;
}
}
else
{
return v_b_2310_;
}
v___jp_2311_:
{
size_t v___x_2313_; size_t v___x_2314_; 
v___x_2313_ = ((size_t)1ULL);
v___x_2314_ = lean_usize_add(v_i_2308_, v___x_2313_);
v_i_2308_ = v___x_2314_;
v_b_2310_ = v___y_2312_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object* v_next_2320_, lean_object* v_as_2321_, lean_object* v_i_2322_, lean_object* v_stop_2323_, lean_object* v_b_2324_){
_start:
{
size_t v_i_boxed_2325_; size_t v_stop_boxed_2326_; lean_object* v_res_2327_; 
v_i_boxed_2325_ = lean_unbox_usize(v_i_2322_);
lean_dec(v_i_2322_);
v_stop_boxed_2326_ = lean_unbox_usize(v_stop_2323_);
lean_dec(v_stop_2323_);
v_res_2327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2320_, v_as_2321_, v_i_boxed_2325_, v_stop_boxed_2326_, v_b_2324_);
lean_dec_ref(v_as_2321_);
lean_dec(v_next_2320_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object* v_fst_2328_, lean_object* v___x_2329_, lean_object* v_fst_2330_, lean_object* v_argVars_2331_, lean_object* v_snd_2332_, lean_object* v_next_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v___x_2339_; lean_object* v___y_2341_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; 
lean_inc(v_next_2333_);
v___x_2339_ = lean_array_push(v_fst_2328_, v_next_2333_);
v___x_2381_ = lean_unsigned_to_nat(0u);
v___x_2382_ = lean_array_get_size(v_snd_2332_);
v___x_2383_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2384_ = lean_nat_dec_lt(v___x_2381_, v___x_2382_);
if (v___x_2384_ == 0)
{
v___y_2341_ = v___x_2383_;
goto v___jp_2340_;
}
else
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_nat_dec_le(v___x_2382_, v___x_2382_);
if (v___x_2385_ == 0)
{
if (v___x_2384_ == 0)
{
v___y_2341_ = v___x_2383_;
goto v___jp_2340_;
}
else
{
size_t v___x_2386_; size_t v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = ((size_t)0ULL);
v___x_2387_ = lean_usize_of_nat(v___x_2382_);
v___x_2388_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2333_, v_snd_2332_, v___x_2386_, v___x_2387_, v___x_2383_);
v___y_2341_ = v___x_2388_;
goto v___jp_2340_;
}
}
else
{
size_t v___x_2389_; size_t v___x_2390_; lean_object* v___x_2391_; 
v___x_2389_ = ((size_t)0ULL);
v___x_2390_ = lean_usize_of_nat(v___x_2382_);
v___x_2391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2333_, v_snd_2332_, v___x_2389_, v___x_2390_, v___x_2383_);
v___y_2341_ = v___x_2391_;
goto v___jp_2340_;
}
}
v___jp_2340_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = lean_array_get_borrowed(v___x_2329_, v_fst_2330_, v_next_2333_);
lean_dec(v_next_2333_);
lean_inc(v___y_2337_);
lean_inc_ref(v___y_2336_);
lean_inc(v___y_2335_);
lean_inc_ref(v___y_2334_);
lean_inc(v___x_2342_);
v___x_2343_ = lean_infer_type(v___x_2342_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2345_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2345_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2330_, v_argVars_2331_, v_a_2344_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v___x_2346_; 
lean_dec_ref_known(v___x_2345_, 1);
lean_inc(v___x_2342_);
v___x_2346_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2330_, v_argVars_2331_, v___x_2342_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2355_; 
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; 
v_unused_2356_ = lean_ctor_get(v___x_2346_, 0);
lean_dec(v_unused_2356_);
v___x_2348_ = v___x_2346_;
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
else
{
lean_dec(v___x_2346_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2339_);
lean_ctor_set(v___x_2350_, 1, v___y_2341_);
v___x_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2351_);
v___x_2353_ = v___x_2348_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v___y_2341_);
lean_dec_ref(v___x_2339_);
v_a_2357_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2346_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2346_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec_ref(v___y_2341_);
lean_dec_ref(v___x_2339_);
v_a_2365_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2345_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2345_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec_ref(v___y_2341_);
lean_dec_ref(v___x_2339_);
v_a_2373_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2343_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2343_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object* v_fst_2392_, lean_object* v___x_2393_, lean_object* v_fst_2394_, lean_object* v_argVars_2395_, lean_object* v_snd_2396_, lean_object* v_next_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2392_, v___x_2393_, v_fst_2394_, v_argVars_2395_, v_snd_2396_, v_next_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v_snd_2396_);
lean_dec_ref(v_argVars_2395_);
lean_dec_ref(v_fst_2394_);
lean_dec_ref(v___x_2393_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(lean_object* v_msgData_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___x_2410_; lean_object* v_env_2411_; lean_object* v___x_2412_; lean_object* v_toCold_2413_; lean_object* v_mctx_2414_; lean_object* v_lctx_2415_; lean_object* v_options_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2410_ = lean_st_ref_get(v___y_2408_);
v_env_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc_ref(v_env_2411_);
lean_dec(v___x_2410_);
v___x_2412_ = lean_st_ref_get(v___y_2406_);
v_toCold_2413_ = lean_ctor_get(v___y_2407_, 0);
v_mctx_2414_ = lean_ctor_get(v___x_2412_, 0);
lean_inc_ref(v_mctx_2414_);
lean_dec(v___x_2412_);
v_lctx_2415_ = lean_ctor_get(v___y_2405_, 2);
v_options_2416_ = lean_ctor_get(v_toCold_2413_, 2);
lean_inc_ref(v_options_2416_);
lean_inc_ref(v_lctx_2415_);
v___x_2417_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2417_, 0, v_env_2411_);
lean_ctor_set(v___x_2417_, 1, v_mctx_2414_);
lean_ctor_set(v___x_2417_, 2, v_lctx_2415_);
lean_ctor_set(v___x_2417_, 3, v_options_2416_);
v___x_2418_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
lean_ctor_set(v___x_2418_, 1, v_msgData_2404_);
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7___boxed(lean_object* v_msgData_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msgData_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object* v_msg_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_ref_2433_; lean_object* v___x_2434_; lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2443_; 
v_ref_2433_ = lean_ctor_get(v___y_2430_, 2);
v___x_2434_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_inc(v_ref_2433_);
v___x_2439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2439_, 0, v_ref_2433_);
lean_ctor_set(v___x_2439_, 1, v_a_2435_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set_tag(v___x_2437_, 1);
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object* v_msg_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object* v_fst_2451_, size_t v_sz_2452_, size_t v_i_2453_, lean_object* v_bs_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
uint8_t v___x_2460_; 
v___x_2460_ = lean_usize_dec_lt(v_i_2453_, v_sz_2452_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = l_unsafeCast___redArg(v_bs_2454_);
lean_dec_ref(v_bs_2454_);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
else
{
lean_object* v___x_2463_; lean_object* v_v_2464_; lean_object* v___x_2465_; lean_object* v_bs_x27_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2463_ = l_Lean_instInhabitedExpr;
v_v_2464_ = lean_array_uget(v_bs_2454_, v_i_2453_);
v___x_2465_ = lean_unsigned_to_nat(0u);
v_bs_x27_2466_ = lean_array_uset(v_bs_2454_, v_i_2453_, v___x_2465_);
v___x_2467_ = l_unsafeCast___redArg(v_v_2464_);
lean_dec(v_v_2464_);
v___x_2468_ = lean_array_get_borrowed(v___x_2463_, v_fst_2451_, v___x_2467_);
lean_dec(v___x_2467_);
lean_inc(v___y_2458_);
lean_inc_ref(v___y_2457_);
lean_inc(v___y_2456_);
lean_inc_ref(v___y_2455_);
lean_inc(v___x_2468_);
v___x_2469_ = lean_infer_type(v___x_2468_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v_a_2470_; lean_object* v___x_2471_; 
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2469_, 1);
v___x_2471_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2470_, v___y_2456_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v_a_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; size_t v___x_2475_; size_t v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_a_2472_);
lean_dec_ref_known(v___x_2471_, 1);
v___x_2473_ = l_Lean_Expr_setPPExplicit(v_a_2472_, v___x_2460_);
v___x_2474_ = l_Lean_indentExpr(v___x_2473_);
v___x_2475_ = ((size_t)1ULL);
v___x_2476_ = lean_usize_add(v_i_2453_, v___x_2475_);
v___x_2477_ = l_unsafeCast___redArg(v___x_2474_);
lean_dec_ref(v___x_2474_);
v___x_2478_ = lean_array_uset(v_bs_x27_2466_, v_i_2453_, v___x_2477_);
v_i_2453_ = v___x_2476_;
v_bs_2454_ = v___x_2478_;
goto _start;
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref(v_bs_x27_2466_);
v_a_2480_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2471_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2471_);
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
lean_dec_ref(v_bs_x27_2466_);
v_a_2488_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2469_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2469_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object* v_fst_2496_, lean_object* v_sz_2497_, lean_object* v_i_2498_, lean_object* v_bs_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
size_t v_sz_boxed_2505_; size_t v_i_boxed_2506_; lean_object* v_res_2507_; 
v_sz_boxed_2505_ = lean_unbox_usize(v_sz_2497_);
lean_dec(v_sz_2497_);
v_i_boxed_2506_ = lean_unbox_usize(v_i_2498_);
lean_dec(v_i_2498_);
v_res_2507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_fst_2496_, v_sz_boxed_2505_, v_i_boxed_2506_, v_bs_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec_ref(v_fst_2496_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object* v___x_2508_, lean_object* v_snd_2509_, lean_object* v___f_2510_, lean_object* v_____r_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = lean_unsigned_to_nat(0u);
v___x_2518_ = lean_array_get_borrowed(v___x_2508_, v_snd_2509_, v___x_2517_);
lean_inc(v___y_2515_);
lean_inc_ref(v___y_2514_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___x_2518_);
v___x_2519_ = lean_apply_6(v___f_2510_, v___x_2518_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, lean_box(0));
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object* v___x_2520_, lean_object* v_snd_2521_, lean_object* v___f_2522_, lean_object* v_____r_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2520_, v_snd_2521_, v___f_2522_, v_____r_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v_snd_2521_);
lean_dec(v___x_2520_);
return v_res_2529_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1));
v___x_2534_ = l_Lean_MessageData_ofFormat(v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3));
v___x_2537_ = l_Lean_stringToMessageData(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5));
v___x_2540_ = l_Lean_stringToMessageData(v___x_2539_);
return v___x_2540_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7));
v___x_2543_ = l_Lean_stringToMessageData(v___x_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object* v_fst_2546_, lean_object* v_argVars_2547_, lean_object* v_inst_2548_, lean_object* v_a_2549_, lean_object* v_projInfo_x3f_2550_, lean_object* v_a_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v___y_2558_; lean_object* v_fst_2578_; lean_object* v_snd_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2656_; 
v_fst_2578_ = lean_ctor_get(v_a_2551_, 0);
v_snd_2579_ = lean_ctor_get(v_a_2551_, 1);
v_isSharedCheck_2656_ = !lean_is_exclusive(v_a_2551_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2581_ = v_a_2551_;
v_isShared_2582_ = v_isSharedCheck_2656_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_snd_2579_);
lean_inc(v_fst_2578_);
lean_dec(v_a_2551_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2656_;
goto v_resetjp_2580_;
}
v___jp_2557_:
{
if (lean_obj_tag(v___y_2558_) == 0)
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2569_; 
v_a_2559_ = lean_ctor_get(v___y_2558_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___y_2558_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2561_ = v___y_2558_;
v_isShared_2562_ = v_isSharedCheck_2569_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___y_2558_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2569_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
if (lean_obj_tag(v_a_2559_) == 0)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; 
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
v_a_2563_ = lean_ctor_get(v_a_2559_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v_a_2559_, 1);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v_a_2563_);
v___x_2565_ = v___x_2561_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2563_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
else
{
lean_object* v_a_2567_; 
lean_del_object(v___x_2561_);
v_a_2567_ = lean_ctor_get(v_a_2559_, 0);
lean_inc(v_a_2567_);
lean_dec_ref_known(v_a_2559_, 1);
v_a_2551_ = v_a_2567_;
goto _start;
}
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
v_a_2570_ = lean_ctor_get(v___y_2558_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___y_2558_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___y_2558_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___y_2558_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
v_resetjp_2580_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v___x_2583_ = lean_array_get_size(v_snd_2579_);
v___x_2584_ = lean_unsigned_to_nat(0u);
v___x_2585_ = lean_nat_dec_eq(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; lean_object* v___f_2587_; lean_object* v___x_2635_; size_t v_sz_2636_; size_t v___x_2637_; lean_object* v___x_2638_; 
lean_del_object(v___x_2581_);
v___x_2586_ = l_Lean_instInhabitedExpr;
lean_inc(v_snd_2579_);
lean_inc_ref(v_argVars_2547_);
lean_inc_ref(v_fst_2546_);
lean_inc(v_fst_2578_);
v___f_2587_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2587_, 0, v_fst_2578_);
lean_closure_set(v___f_2587_, 1, v___x_2586_);
lean_closure_set(v___f_2587_, 2, v_fst_2546_);
lean_closure_set(v___f_2587_, 3, v_argVars_2547_);
lean_closure_set(v___f_2587_, 4, v_snd_2579_);
v___x_2635_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v_sz_2636_ = lean_array_size(v_snd_2579_);
v___x_2637_ = ((size_t)0ULL);
v___x_2638_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2546_, v_projInfo_x3f_2550_, v___x_2583_, v_argVars_2547_, v_snd_2579_, v_sz_2636_, v___x_2637_, v___x_2635_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v_a_2639_; lean_object* v_fst_2640_; 
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc(v_a_2639_);
lean_dec_ref_known(v___x_2638_, 1);
v_fst_2640_ = lean_ctor_get(v_a_2639_, 0);
lean_inc(v_fst_2640_);
lean_dec(v_a_2639_);
if (lean_obj_tag(v_fst_2640_) == 0)
{
lean_dec(v_fst_2578_);
goto v___jp_2588_;
}
else
{
lean_object* v_val_2641_; 
v_val_2641_ = lean_ctor_get(v_fst_2640_, 0);
lean_inc(v_val_2641_);
lean_dec_ref_known(v_fst_2640_, 1);
if (lean_obj_tag(v_val_2641_) == 0)
{
lean_dec(v_fst_2578_);
goto v___jp_2588_;
}
else
{
lean_object* v_val_2642_; lean_object* v___x_2643_; 
lean_dec_ref(v___f_2587_);
v_val_2642_ = lean_ctor_get(v_val_2641_, 0);
lean_inc(v_val_2642_);
lean_dec_ref_known(v_val_2641_, 1);
v___x_2643_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2578_, v___x_2586_, v_fst_2546_, v_argVars_2547_, v_snd_2579_, v_val_2642_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v_snd_2579_);
v___y_2558_ = v___x_2643_;
goto v___jp_2557_;
}
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_dec_ref(v___f_2587_);
lean_dec(v_snd_2579_);
lean_dec(v_fst_2578_);
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
v_a_2644_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___x_2638_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2638_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
v___jp_2588_:
{
lean_object* v_toCold_2589_; lean_object* v_options_2590_; lean_object* v___x_2591_; uint8_t v___x_2592_; 
v_toCold_2589_ = lean_ctor_get(v___y_2554_, 0);
v_options_2590_ = lean_ctor_get(v_toCold_2589_, 2);
v___x_2591_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2592_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_box(0);
v___x_2594_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2584_, v_snd_2579_, v___f_2587_, v___x_2593_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v_snd_2579_);
v___y_2558_ = v___x_2594_;
goto v___jp_2557_;
}
else
{
size_t v_sz_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_22087__overap_2600_; lean_object* v___x_2601_; 
v_sz_2595_ = lean_array_size(v_snd_2579_);
v___x_2596_ = l_unsafeCast___redArg(v_snd_2579_);
v___x_2597_ = lean_box_usize(v_sz_2595_);
v___x_2598_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed__const__1));
lean_inc_ref(v_fst_2546_);
v___x_2599_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed), 9, 4);
lean_closure_set(v___x_2599_, 0, v_fst_2546_);
lean_closure_set(v___x_2599_, 1, v___x_2597_);
lean_closure_set(v___x_2599_, 2, v___x_2598_);
lean_closure_set(v___x_2599_, 3, v___x_2596_);
v___x_22087__overap_2600_ = l_unsafeCast___redArg(v___x_2599_);
lean_dec_ref(v___x_2599_);
lean_inc(v___y_2555_);
lean_inc_ref(v___y_2554_);
lean_inc(v___y_2553_);
lean_inc_ref(v___y_2552_);
v___x_2601_ = lean_apply_5(v___x_22087__overap_2600_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, lean_box(0));
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
v___x_2603_ = lean_array_to_list(v_a_2602_);
v___x_2604_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2605_ = l_Lean_MessageData_joinSep(v___x_2603_, v___x_2604_);
v___x_2606_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4);
lean_inc_ref(v_inst_2548_);
v___x_2607_ = l_Lean_MessageData_ofExpr(v_inst_2548_);
v___x_2608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2606_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___x_2609_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6);
v___x_2610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2608_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
lean_inc_ref(v_a_2549_);
v___x_2611_ = l_Lean_indentExpr(v_a_2549_);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8);
v___x_2614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2612_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2614_);
lean_ctor_set(v___x_2615_, 1, v___x_2605_);
v___x_2616_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2615_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_object* v_a_2617_; lean_object* v___x_2618_; 
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
lean_inc(v_a_2617_);
lean_dec_ref_known(v___x_2616_, 1);
v___x_2618_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2584_, v_snd_2579_, v___f_2587_, v_a_2617_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v_snd_2579_);
v___y_2558_ = v___x_2618_;
goto v___jp_2557_;
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec_ref(v___f_2587_);
lean_dec(v_snd_2579_);
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
v_a_2619_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2616_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2616_);
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
lean_dec_ref(v___f_2587_);
lean_dec(v_snd_2579_);
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
v_a_2627_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2601_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2601_);
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
}
}
else
{
lean_object* v___x_2653_; 
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_inst_2548_);
lean_dec_ref(v_argVars_2547_);
lean_dec_ref(v_fst_2546_);
if (v_isShared_2582_ == 0)
{
v___x_2653_ = v___x_2581_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_fst_2578_);
lean_ctor_set(v_reuseFailAlloc_2655_, 1, v_snd_2579_);
v___x_2653_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; 
v___x_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
return v___x_2654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object* v_fst_2657_, lean_object* v_argVars_2658_, lean_object* v_inst_2659_, lean_object* v_a_2660_, lean_object* v_projInfo_x3f_2661_, lean_object* v_a_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2657_, v_argVars_2658_, v_inst_2659_, v_a_2660_, v_projInfo_x3f_2661_, v_a_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v_projInfo_x3f_2661_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object* v_fst_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_){
_start:
{
if (lean_obj_tag(v_a_2670_) == 0)
{
lean_object* v___x_2672_; 
v___x_2672_ = l_List_reverse___redArg(v_a_2671_);
return v___x_2672_;
}
else
{
lean_object* v_head_2673_; lean_object* v_tail_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2689_; 
v_head_2673_ = lean_ctor_get(v_a_2670_, 0);
v_tail_2674_ = lean_ctor_get(v_a_2670_, 1);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_a_2670_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2676_ = v_a_2670_;
v_isShared_2677_ = v_isSharedCheck_2689_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_tail_2674_);
lean_inc(v_head_2673_);
lean_dec(v_a_2670_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2689_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
uint8_t v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; uint8_t v___x_2682_; uint8_t v___x_2683_; 
v___x_2678_ = 0;
v___x_2679_ = lean_box(v___x_2678_);
v___x_2680_ = lean_array_get(v___x_2679_, v_fst_2669_, v_head_2673_);
lean_dec(v___x_2679_);
v___x_2681_ = 3;
v___x_2682_ = lean_unbox(v___x_2680_);
lean_dec(v___x_2680_);
v___x_2683_ = l_Lean_instBEqBinderInfo_beq(v___x_2682_, v___x_2681_);
if (v___x_2683_ == 0)
{
lean_del_object(v___x_2676_);
lean_dec(v_head_2673_);
v_a_2670_ = v_tail_2674_;
goto _start;
}
else
{
lean_object* v___x_2686_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 1, v_a_2671_);
v___x_2686_ = v___x_2676_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_head_2673_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_a_2671_);
v___x_2686_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
v_a_2670_ = v_tail_2674_;
v_a_2671_ = v___x_2686_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object* v_fst_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2690_, v_a_2691_, v_a_2692_);
lean_dec_ref(v_fst_2690_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object* v_argVars_2694_, size_t v_sz_2695_, size_t v_i_2696_, lean_object* v_bs_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
uint8_t v___x_2703_; 
v___x_2703_ = lean_usize_dec_lt(v_i_2696_, v_sz_2695_);
if (v___x_2703_ == 0)
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = l_unsafeCast___redArg(v_bs_2697_);
lean_dec_ref(v_bs_2697_);
v___x_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
return v___x_2705_;
}
else
{
lean_object* v___x_2706_; lean_object* v_v_2707_; lean_object* v___x_2708_; lean_object* v_bs_x27_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2706_ = l_Lean_instInhabitedExpr;
v_v_2707_ = lean_array_uget(v_bs_2697_, v_i_2696_);
v___x_2708_ = lean_unsigned_to_nat(0u);
v_bs_x27_2709_ = lean_array_uset(v_bs_2697_, v_i_2696_, v___x_2708_);
v___x_2710_ = l_unsafeCast___redArg(v_v_2707_);
lean_dec(v_v_2707_);
v___x_2711_ = lean_array_get_borrowed(v___x_2706_, v_argVars_2694_, v___x_2710_);
lean_dec(v___x_2710_);
lean_inc(v___y_2701_);
lean_inc_ref(v___y_2700_);
lean_inc(v___y_2699_);
lean_inc_ref(v___y_2698_);
lean_inc(v___x_2711_);
v___x_2712_ = lean_infer_type(v___x_2711_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v___x_2714_; size_t v___x_2715_; size_t v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_a_2713_);
lean_dec_ref_known(v___x_2712_, 1);
v___x_2714_ = l_Lean_indentExpr(v_a_2713_);
v___x_2715_ = ((size_t)1ULL);
v___x_2716_ = lean_usize_add(v_i_2696_, v___x_2715_);
v___x_2717_ = l_unsafeCast___redArg(v___x_2714_);
lean_dec_ref(v___x_2714_);
v___x_2718_ = lean_array_uset(v_bs_x27_2709_, v_i_2696_, v___x_2717_);
v_i_2696_ = v___x_2716_;
v_bs_2697_ = v___x_2718_;
goto _start;
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v_bs_x27_2709_);
v_a_2720_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2712_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2712_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object* v_argVars_2728_, lean_object* v_sz_2729_, lean_object* v_i_2730_, lean_object* v_bs_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
size_t v_sz_boxed_2737_; size_t v_i_boxed_2738_; lean_object* v_res_2739_; 
v_sz_boxed_2737_ = lean_unbox_usize(v_sz_2729_);
lean_dec(v_sz_2729_);
v_i_boxed_2738_ = lean_unbox_usize(v_i_2730_);
lean_dec(v_i_2730_);
v_res_2739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_2728_, v_sz_boxed_2737_, v_i_boxed_2738_, v_bs_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec_ref(v_argVars_2728_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
if (lean_obj_tag(v_a_2740_) == 0)
{
lean_object* v___x_2742_; 
v___x_2742_ = l_List_reverse___redArg(v_a_2741_);
return v___x_2742_;
}
else
{
lean_object* v_head_2743_; lean_object* v_tail_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2755_; 
v_head_2743_ = lean_ctor_get(v_a_2740_, 0);
v_tail_2744_ = lean_ctor_get(v_a_2740_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_a_2740_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2746_ = v_a_2740_;
v_isShared_2747_ = v_isSharedCheck_2755_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_tail_2744_);
lean_inc(v_head_2743_);
lean_dec(v_a_2740_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2755_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; 
v___x_2748_ = l_Nat_reprFast(v_head_2743_);
v___x_2749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
v___x_2750_ = l_Lean_MessageData_ofFormat(v___x_2749_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 1, v_a_2741_);
lean_ctor_set(v___x_2746_, 0, v___x_2750_);
v___x_2752_ = v___x_2746_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2750_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_a_2741_);
v___x_2752_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
v_a_2740_ = v_tail_2744_;
v_a_2741_ = v___x_2752_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0(void){
_start:
{
lean_object* v___x_2756_; double v___x_2757_; 
v___x_2756_ = lean_unsigned_to_nat(0u);
v___x_2757_ = lean_float_of_nat(v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object* v_cls_2760_, lean_object* v_msg_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_ref_2767_; lean_object* v___x_2768_; lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2813_; 
v_ref_2767_ = lean_ctor_get(v___y_2764_, 2);
v___x_2768_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2771_ = v___x_2768_;
v_isShared_2772_ = v_isSharedCheck_2813_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2768_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2813_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v_traceState_2774_; lean_object* v_env_2775_; lean_object* v_nextMacroScope_2776_; lean_object* v_ngen_2777_; lean_object* v_auxDeclNGen_2778_; lean_object* v_cache_2779_; lean_object* v_messages_2780_; lean_object* v_infoState_2781_; lean_object* v_snapshotTasks_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2812_; 
v___x_2773_ = lean_st_ref_take(v___y_2765_);
v_traceState_2774_ = lean_ctor_get(v___x_2773_, 4);
v_env_2775_ = lean_ctor_get(v___x_2773_, 0);
v_nextMacroScope_2776_ = lean_ctor_get(v___x_2773_, 1);
v_ngen_2777_ = lean_ctor_get(v___x_2773_, 2);
v_auxDeclNGen_2778_ = lean_ctor_get(v___x_2773_, 3);
v_cache_2779_ = lean_ctor_get(v___x_2773_, 5);
v_messages_2780_ = lean_ctor_get(v___x_2773_, 6);
v_infoState_2781_ = lean_ctor_get(v___x_2773_, 7);
v_snapshotTasks_2782_ = lean_ctor_get(v___x_2773_, 8);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2784_ = v___x_2773_;
v_isShared_2785_ = v_isSharedCheck_2812_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_snapshotTasks_2782_);
lean_inc(v_infoState_2781_);
lean_inc(v_messages_2780_);
lean_inc(v_cache_2779_);
lean_inc(v_traceState_2774_);
lean_inc(v_auxDeclNGen_2778_);
lean_inc(v_ngen_2777_);
lean_inc(v_nextMacroScope_2776_);
lean_inc(v_env_2775_);
lean_dec(v___x_2773_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2812_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
uint64_t v_tid_2786_; lean_object* v_traces_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2811_; 
v_tid_2786_ = lean_ctor_get_uint64(v_traceState_2774_, sizeof(void*)*1);
v_traces_2787_ = lean_ctor_get(v_traceState_2774_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v_traceState_2774_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2789_ = v_traceState_2774_;
v_isShared_2790_ = v_isSharedCheck_2811_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_traces_2787_);
lean_dec(v_traceState_2774_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2811_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; double v___x_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2802_; 
v___x_2791_ = lean_box(0);
v___x_2792_ = lean_box(0);
v___x_2793_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0);
v___x_2794_ = 0;
v___x_2795_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___x_2796_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2796_, 0, v_cls_2760_);
lean_ctor_set(v___x_2796_, 1, v___x_2792_);
lean_ctor_set(v___x_2796_, 2, v___x_2795_);
lean_ctor_set_float(v___x_2796_, sizeof(void*)*3, v___x_2793_);
lean_ctor_set_float(v___x_2796_, sizeof(void*)*3 + 8, v___x_2793_);
lean_ctor_set_uint8(v___x_2796_, sizeof(void*)*3 + 16, v___x_2794_);
v___x_2797_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1));
v___x_2798_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2796_);
lean_ctor_set(v___x_2798_, 1, v_a_2769_);
lean_ctor_set(v___x_2798_, 2, v___x_2797_);
lean_inc(v_ref_2767_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v_ref_2767_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = l_Lean_PersistentArray_push___redArg(v_traces_2787_, v___x_2799_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v___x_2800_);
v___x_2802_ = v___x_2789_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2800_);
lean_ctor_set_uint64(v_reuseFailAlloc_2810_, sizeof(void*)*1, v_tid_2786_);
v___x_2802_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
lean_object* v___x_2804_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 4, v___x_2802_);
v___x_2804_ = v___x_2784_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_env_2775_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v_nextMacroScope_2776_);
lean_ctor_set(v_reuseFailAlloc_2809_, 2, v_ngen_2777_);
lean_ctor_set(v_reuseFailAlloc_2809_, 3, v_auxDeclNGen_2778_);
lean_ctor_set(v_reuseFailAlloc_2809_, 4, v___x_2802_);
lean_ctor_set(v_reuseFailAlloc_2809_, 5, v_cache_2779_);
lean_ctor_set(v_reuseFailAlloc_2809_, 6, v_messages_2780_);
lean_ctor_set(v_reuseFailAlloc_2809_, 7, v_infoState_2781_);
lean_ctor_set(v_reuseFailAlloc_2809_, 8, v_snapshotTasks_2782_);
v___x_2804_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
lean_object* v___x_2805_; lean_object* v___x_2807_; 
v___x_2805_ = lean_st_ref_put(v___y_2765_, v___x_2804_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 0, v___x_2791_);
v___x_2807_ = v___x_2771_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v___x_2791_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object* v_cls_2814_, lean_object* v_msg_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v_cls_2814_, v_msg_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
return v_res_2821_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_2830_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3));
v___x_2831_ = l_Lean_Name_append(v___x_2830_, v___x_2829_);
return v___x_2831_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2833_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5));
v___x_2834_ = l_Lean_stringToMessageData(v___x_2833_);
return v___x_2834_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7));
v___x_2837_ = l_Lean_stringToMessageData(v___x_2836_);
return v___x_2837_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10(void){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2839_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9));
v___x_2840_ = l_Lean_stringToMessageData(v___x_2839_);
return v___x_2840_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12(void){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11));
v___x_2843_ = l_Lean_stringToMessageData(v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object* v_a_2844_, lean_object* v_fst_2845_, lean_object* v_fst_2846_, lean_object* v_inst_2847_, lean_object* v_a_2848_, lean_object* v_projInfo_x3f_2849_, lean_object* v_argVars_2850_, lean_object* v_x_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2844_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_a_2858_; lean_object* v_dummy_2859_; lean_object* v_nargs_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; size_t v_sz_2868_; size_t v___x_2869_; lean_object* v___x_2870_; 
v_a_2858_ = lean_ctor_get(v___x_2857_, 0);
lean_inc(v_a_2858_);
lean_dec_ref_known(v___x_2857_, 1);
v_dummy_2859_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__1);
v_nargs_2860_ = l_Lean_Expr_getAppNumArgs(v_a_2844_);
lean_inc(v_nargs_2860_);
v___x_2861_ = lean_mk_array(v_nargs_2860_, v_dummy_2859_);
v___x_2862_ = lean_unsigned_to_nat(1u);
v___x_2863_ = lean_nat_sub(v_nargs_2860_, v___x_2862_);
lean_dec(v_nargs_2860_);
lean_inc_ref(v_a_2844_);
v___x_2864_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2844_, v___x_2861_, v___x_2863_);
v___x_2865_ = lean_array_get_size(v___x_2864_);
v___x_2866_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
lean_ctor_set(v___x_2867_, 1, v___x_2865_);
v_sz_2868_ = lean_array_size(v___x_2864_);
v___x_2869_ = ((size_t)0ULL);
v___x_2870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2858_, v_fst_2845_, v_argVars_2850_, v___x_2864_, v_sz_2868_, v___x_2869_, v___x_2867_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec_ref(v___x_2864_);
lean_dec(v_a_2858_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
lean_dec_ref_known(v___x_2870_, 1);
v___x_2871_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2872_ = lean_array_get_size(v_fst_2845_);
v___x_2873_ = l_List_range(v___x_2872_);
v___x_2874_ = lean_box(0);
v___x_2875_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2846_, v___x_2873_, v___x_2874_);
v___x_2876_ = lean_array_mk(v___x_2875_);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2871_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
lean_inc_ref(v_inst_2847_);
lean_inc_ref(v_argVars_2850_);
v___x_2878_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2845_, v_argVars_2850_, v_inst_2847_, v_a_2848_, v_projInfo_x3f_2849_, v___x_2877_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2977_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2881_ = v___x_2878_;
v_isShared_2882_ = v_isSharedCheck_2977_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2878_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2977_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v_fst_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2975_; 
v_fst_2883_ = lean_ctor_get(v_a_2879_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_a_2879_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; 
v_unused_2976_ = lean_ctor_get(v_a_2879_, 1);
lean_dec(v_unused_2976_);
v___x_2885_ = v_a_2879_;
v_isShared_2886_ = v_isSharedCheck_2975_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_fst_2883_);
lean_dec(v_a_2879_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2975_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___y_2888_; lean_object* v___y_2889_; lean_object* v___y_2890_; lean_object* v_options_2891_; lean_object* v_inheritedTraceOptions_2892_; lean_object* v___y_2893_; lean_object* v_toCold_2954_; lean_object* v_options_2955_; lean_object* v_inheritedTraceOptions_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v_toCold_2954_ = lean_ctor_get(v___y_2854_, 0);
v_options_2955_ = lean_ctor_get(v_toCold_2954_, 2);
v_inheritedTraceOptions_2956_ = lean_ctor_get(v_toCold_2954_, 11);
v___x_2957_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2958_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_2955_, v___x_2957_);
if (v___x_2958_ == 0)
{
lean_dec_ref(v_a_2844_);
v___y_2888_ = v___y_2852_;
v___y_2889_ = v___y_2853_;
v___y_2890_ = v___y_2854_;
v_options_2891_ = v_options_2955_;
v_inheritedTraceOptions_2892_ = v_inheritedTraceOptions_2956_;
v___y_2893_ = v___y_2855_;
goto v___jp_2887_;
}
else
{
lean_object* v___x_2959_; lean_object* v_a_2960_; uint8_t v___x_2961_; 
v___x_2959_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2844_, v___y_2853_);
v_a_2960_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2960_);
lean_dec_ref(v___x_2959_);
v___x_2961_ = l_Lean_Expr_hasExprMVar(v_a_2960_);
if (v___x_2961_ == 0)
{
lean_dec(v_a_2960_);
v___y_2888_ = v___y_2852_;
v___y_2889_ = v___y_2853_;
v___y_2890_ = v___y_2854_;
v_options_2891_ = v_options_2955_;
v_inheritedTraceOptions_2892_ = v_inheritedTraceOptions_2956_;
v___y_2893_ = v___y_2855_;
goto v___jp_2887_;
}
else
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
lean_del_object(v___x_2885_);
lean_dec(v_fst_2883_);
lean_del_object(v___x_2881_);
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_inst_2847_);
v___x_2962_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12);
v___x_2963_ = l_Lean_Expr_setPPExplicit(v_a_2960_, v___x_2958_);
v___x_2964_ = l_Lean_indentExpr(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2962_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
v___x_2966_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2965_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2969_ = v___x_2966_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2966_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_a_2967_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
v___jp_2887_:
{
uint8_t v_hasTrace_2894_; 
v_hasTrace_2894_ = lean_ctor_get_uint8(v_options_2891_, sizeof(void*)*1);
if (v_hasTrace_2894_ == 0)
{
lean_object* v___x_2896_; 
lean_del_object(v___x_2885_);
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_inst_2847_);
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 0, v_fst_2883_);
v___x_2896_ = v___x_2881_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_fst_2883_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
else
{
lean_object* v___x_2898_; lean_object* v___x_2899_; uint8_t v___x_2900_; 
v___x_2898_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_2899_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4);
v___x_2900_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2892_, v_options_2891_, v___x_2899_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2902_; 
lean_del_object(v___x_2885_);
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_inst_2847_);
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 0, v_fst_2883_);
v___x_2902_ = v___x_2881_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_fst_2883_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
else
{
size_t v_sz_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_22290__overap_2909_; lean_object* v___x_2910_; 
lean_del_object(v___x_2881_);
v_sz_2904_ = lean_array_size(v_fst_2883_);
v___x_2905_ = l_unsafeCast___redArg(v_fst_2883_);
v___x_2906_ = lean_box_usize(v_sz_2904_);
v___x_2907_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed__const__1));
v___x_2908_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed), 9, 4);
lean_closure_set(v___x_2908_, 0, v_argVars_2850_);
lean_closure_set(v___x_2908_, 1, v___x_2906_);
lean_closure_set(v___x_2908_, 2, v___x_2907_);
lean_closure_set(v___x_2908_, 3, v___x_2905_);
v___x_22290__overap_2909_ = l_unsafeCast___redArg(v___x_2908_);
lean_dec_ref(v___x_2908_);
lean_inc(v___y_2893_);
lean_inc_ref(v___y_2890_);
lean_inc(v___y_2889_);
lean_inc_ref(v___y_2888_);
v___x_2910_ = lean_apply_5(v___x_22290__overap_2909_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2893_, lean_box(0));
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2915_; 
v_a_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2910_, 1);
v___x_2912_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6);
v___x_2913_ = l_Lean_MessageData_ofExpr(v_inst_2847_);
if (v_isShared_2886_ == 0)
{
lean_ctor_set_tag(v___x_2885_, 7);
lean_ctor_set(v___x_2885_, 1, v___x_2913_);
lean_ctor_set(v___x_2885_, 0, v___x_2912_);
v___x_2915_ = v___x_2885_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2912_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2916_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8);
v___x_2917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2915_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
lean_inc(v_fst_2883_);
v___x_2918_ = lean_array_to_list(v_fst_2883_);
v___x_2919_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(v___x_2918_, v___x_2874_);
v___x_2920_ = l_Lean_MessageData_ofList(v___x_2919_);
v___x_2921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2917_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10);
v___x_2923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2921_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = lean_array_to_list(v_a_2911_);
v___x_2925_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2926_ = l_Lean_MessageData_joinSep(v___x_2924_, v___x_2925_);
v___x_2927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2923_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v___x_2898_, v___x_2927_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2893_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2935_ == 0)
{
lean_object* v_unused_2936_; 
v_unused_2936_ = lean_ctor_get(v___x_2928_, 0);
lean_dec(v_unused_2936_);
v___x_2930_ = v___x_2928_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_dec(v___x_2928_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v_fst_2883_);
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_fst_2883_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
lean_dec(v_fst_2883_);
v_a_2937_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2928_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2928_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_del_object(v___x_2885_);
lean_dec(v_fst_2883_);
lean_dec_ref(v_inst_2847_);
v_a_2946_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2910_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2910_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
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
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_inst_2847_);
lean_dec_ref(v_a_2844_);
v_a_2978_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2878_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2878_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_a_2848_);
lean_dec_ref(v_inst_2847_);
lean_dec_ref(v_fst_2845_);
lean_dec_ref(v_a_2844_);
v_a_2986_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2870_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2870_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
else
{
lean_dec_ref(v_argVars_2850_);
lean_dec_ref(v_a_2848_);
lean_dec_ref(v_inst_2847_);
lean_dec_ref(v_fst_2845_);
lean_dec_ref(v_a_2844_);
return v___x_2857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object* v_a_2994_, lean_object* v_fst_2995_, lean_object* v_fst_2996_, lean_object* v_inst_2997_, lean_object* v_a_2998_, lean_object* v_projInfo_x3f_2999_, lean_object* v_argVars_3000_, lean_object* v_x_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(v_a_2994_, v_fst_2995_, v_fst_2996_, v_inst_2997_, v_a_2998_, v_projInfo_x3f_2999_, v_argVars_3000_, v_x_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec_ref(v_x_3001_);
lean_dec(v_projInfo_x3f_2999_);
lean_dec_ref(v_fst_2996_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object* v_inst_3008_, lean_object* v_projInfo_x3f_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v___x_3015_; 
lean_inc(v___y_3013_);
lean_inc_ref(v___y_3012_);
lean_inc(v___y_3011_);
lean_inc_ref(v___y_3010_);
lean_inc_ref(v_inst_3008_);
v___x_3015_ = lean_infer_type(v_inst_3008_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; lean_object* v___x_3019_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc_n(v_a_3016_, 2);
lean_dec_ref_known(v___x_3015_, 1);
v___x_3017_ = lean_box(0);
v___x_3018_ = 0;
v___x_3019_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3016_, v___x_3017_, v___x_3018_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v_snd_3021_; lean_object* v_fst_3022_; lean_object* v_fst_3023_; lean_object* v_snd_3024_; lean_object* v___x_3025_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v_snd_3021_ = lean_ctor_get(v_a_3020_, 1);
lean_inc(v_snd_3021_);
v_fst_3022_ = lean_ctor_get(v_a_3020_, 0);
lean_inc(v_fst_3022_);
lean_dec(v_a_3020_);
v_fst_3023_ = lean_ctor_get(v_snd_3021_, 0);
lean_inc(v_fst_3023_);
v_snd_3024_ = lean_ctor_get(v_snd_3021_, 1);
lean_inc(v_snd_3024_);
lean_dec(v_snd_3021_);
lean_inc(v___y_3013_);
lean_inc_ref(v___y_3012_);
lean_inc(v___y_3011_);
lean_inc_ref(v___y_3010_);
v___x_3025_ = lean_whnf(v_snd_3024_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___f_3027_; uint8_t v___x_3028_; lean_object* v___x_3029_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_a_3026_);
lean_dec_ref_known(v___x_3025_, 1);
lean_inc(v_a_3016_);
v___f_3027_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed), 13, 6);
lean_closure_set(v___f_3027_, 0, v_a_3026_);
lean_closure_set(v___f_3027_, 1, v_fst_3022_);
lean_closure_set(v___f_3027_, 2, v_fst_3023_);
lean_closure_set(v___f_3027_, 3, v_inst_3008_);
lean_closure_set(v___f_3027_, 4, v_a_3016_);
lean_closure_set(v___f_3027_, 5, v_projInfo_x3f_3009_);
v___x_3028_ = 0;
v___x_3029_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_3016_, v___f_3027_, v___x_3028_, v___x_3028_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
return v___x_3029_;
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec(v_fst_3023_);
lean_dec(v_fst_3022_);
lean_dec(v_a_3016_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec(v_projInfo_x3f_3009_);
lean_dec_ref(v_inst_3008_);
v_a_3030_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_3025_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3025_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec(v_a_3016_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec(v_projInfo_x3f_3009_);
lean_dec_ref(v_inst_3008_);
v_a_3038_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3019_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3019_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec(v_projInfo_x3f_3009_);
lean_dec_ref(v_inst_3008_);
v_a_3046_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3015_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3015_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object* v_inst_3054_, lean_object* v_projInfo_x3f_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3054_, v_projInfo_x3f_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object* v_inst_3062_, lean_object* v_projInfo_x3f_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v___y_3070_; lean_object* v___x_3087_; uint8_t v_transparency_3088_; uint8_t v___x_3089_; uint8_t v___x_3090_; 
v___x_3087_ = l_Lean_Meta_Context_config(v_a_3064_);
v_transparency_3088_ = lean_ctor_get_uint8(v___x_3087_, 9);
lean_dec_ref(v___x_3087_);
v___x_3089_ = 2;
v___x_3090_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3088_, v___x_3089_);
if (v___x_3090_ == 0)
{
lean_object* v_keyedConfig_3091_; uint8_t v_trackZetaDelta_3092_; lean_object* v_zetaDeltaSet_3093_; lean_object* v_lctx_3094_; lean_object* v_localInstances_3095_; lean_object* v_defEqCtx_x3f_3096_; lean_object* v_synthPendingDepth_3097_; lean_object* v_customCanUnfoldPredicate_x3f_3098_; uint8_t v_univApprox_3099_; uint8_t v_inTypeClassResolution_3100_; uint8_t v_cacheInferType_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_keyedConfig_3091_ = lean_ctor_get(v_a_3064_, 0);
v_trackZetaDelta_3092_ = lean_ctor_get_uint8(v_a_3064_, sizeof(void*)*7);
v_zetaDeltaSet_3093_ = lean_ctor_get(v_a_3064_, 1);
v_lctx_3094_ = lean_ctor_get(v_a_3064_, 2);
v_localInstances_3095_ = lean_ctor_get(v_a_3064_, 3);
v_defEqCtx_x3f_3096_ = lean_ctor_get(v_a_3064_, 4);
v_synthPendingDepth_3097_ = lean_ctor_get(v_a_3064_, 5);
v_customCanUnfoldPredicate_x3f_3098_ = lean_ctor_get(v_a_3064_, 6);
v_univApprox_3099_ = lean_ctor_get_uint8(v_a_3064_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3100_ = lean_ctor_get_uint8(v_a_3064_, sizeof(void*)*7 + 2);
v_cacheInferType_3101_ = lean_ctor_get_uint8(v_a_3064_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3091_);
v___x_3102_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3089_, v_keyedConfig_3091_);
lean_inc(v_customCanUnfoldPredicate_x3f_3098_);
lean_inc(v_synthPendingDepth_3097_);
lean_inc(v_defEqCtx_x3f_3096_);
lean_inc_ref(v_localInstances_3095_);
lean_inc_ref(v_lctx_3094_);
lean_inc(v_zetaDeltaSet_3093_);
v___x_3103_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
lean_ctor_set(v___x_3103_, 1, v_zetaDeltaSet_3093_);
lean_ctor_set(v___x_3103_, 2, v_lctx_3094_);
lean_ctor_set(v___x_3103_, 3, v_localInstances_3095_);
lean_ctor_set(v___x_3103_, 4, v_defEqCtx_x3f_3096_);
lean_ctor_set(v___x_3103_, 5, v_synthPendingDepth_3097_);
lean_ctor_set(v___x_3103_, 6, v_customCanUnfoldPredicate_x3f_3098_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*7, v_trackZetaDelta_3092_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*7 + 1, v_univApprox_3099_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3100_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*7 + 3, v_cacheInferType_3101_);
lean_inc(v_a_3067_);
lean_inc_ref(v_a_3066_);
lean_inc(v_a_3065_);
v___x_3104_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3062_, v_projInfo_x3f_3063_, v___x_3103_, v_a_3065_, v_a_3066_, v_a_3067_);
v___y_3070_ = v___x_3104_;
goto v___jp_3069_;
}
else
{
lean_object* v___x_3105_; 
lean_inc(v_a_3067_);
lean_inc_ref(v_a_3066_);
lean_inc(v_a_3065_);
lean_inc_ref(v_a_3064_);
v___x_3105_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3062_, v_projInfo_x3f_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
v___y_3070_ = v___x_3105_;
goto v___jp_3069_;
}
v___jp_3069_:
{
if (lean_obj_tag(v___y_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
v_a_3071_ = lean_ctor_get(v___y_3070_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___y_3070_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___y_3070_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___y_3070_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
v_a_3079_ = lean_ctor_get(v___y_3070_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___y_3070_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___y_3070_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___y_3070_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object* v_inst_3106_, lean_object* v_projInfo_x3f_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_inst_3106_, v_projInfo_x3f_3107_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_);
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3110_);
lean_dec(v_a_3109_);
lean_dec_ref(v_a_3108_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object* v_upperBound_3114_, lean_object* v_a_3115_, lean_object* v___x_3116_, lean_object* v_inst_3117_, lean_object* v_R_3118_, lean_object* v_a_3119_, lean_object* v_b_3120_, lean_object* v_c_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___x_3127_; 
v___x_3127_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_3114_, v_a_3115_, v___x_3116_, v_a_3119_, v_b_3120_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object* v_upperBound_3128_, lean_object* v_a_3129_, lean_object* v___x_3130_, lean_object* v_inst_3131_, lean_object* v_R_3132_, lean_object* v_a_3133_, lean_object* v_b_3134_, lean_object* v_c_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(v_upperBound_3128_, v_a_3129_, v___x_3130_, v_inst_3131_, v_R_3132_, v_a_3133_, v_b_3134_, v_c_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___x_3130_);
lean_dec_ref(v_a_3129_);
lean_dec(v_upperBound_3128_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object* v_00_u03b1_3142_, lean_object* v_msg_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v___x_3149_; 
v___x_3149_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object* v_00_u03b1_3150_, lean_object* v_msg_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(v_00_u03b1_3150_, v_msg_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object* v_fst_3158_, lean_object* v_argVars_3159_, lean_object* v_inst_3160_, lean_object* v_a_3161_, lean_object* v_projInfo_x3f_3162_, lean_object* v_inst_3163_, lean_object* v_a_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v___x_3170_; 
v___x_3170_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3158_, v_argVars_3159_, v_inst_3160_, v_a_3161_, v_projInfo_x3f_3162_, v_a_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object* v_fst_3171_, lean_object* v_argVars_3172_, lean_object* v_inst_3173_, lean_object* v_a_3174_, lean_object* v_projInfo_x3f_3175_, lean_object* v_inst_3176_, lean_object* v_a_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
lean_object* v_res_3183_; 
v_res_3183_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(v_fst_3171_, v_argVars_3172_, v_inst_3173_, v_a_3174_, v_projInfo_x3f_3175_, v_inst_3176_, v_a_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
lean_dec(v___y_3181_);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v_projInfo_x3f_3175_);
return v_res_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object* v_type_3184_, lean_object* v_k_3185_, uint8_t v_cleanupAnnotations_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v___f_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___f_3192_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3192_, 0, v_k_3185_);
v___x_3193_ = 0;
v___x_3194_ = lean_box(0);
v___x_3195_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3193_, v___x_3194_, v_type_3184_, v___f_3192_, v_cleanupAnnotations_3186_, v___x_3193_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3195_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3195_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
v_a_3204_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___x_3195_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3195_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object* v_type_3212_, lean_object* v_k_3213_, lean_object* v_cleanupAnnotations_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3220_; lean_object* v_res_3221_; 
v_cleanupAnnotations_boxed_3220_ = lean_unbox(v_cleanupAnnotations_3214_);
v_res_3221_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3212_, v_k_3213_, v_cleanupAnnotations_boxed_3220_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec(v___y_3216_);
lean_dec_ref(v___y_3215_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object* v_00_u03b1_3222_, lean_object* v_type_3223_, lean_object* v_k_3224_, uint8_t v_cleanupAnnotations_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
lean_object* v___x_3231_; 
v___x_3231_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3223_, v_k_3224_, v_cleanupAnnotations_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object* v_00_u03b1_3232_, lean_object* v_type_3233_, lean_object* v_k_3234_, lean_object* v_cleanupAnnotations_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3241_; lean_object* v_res_3242_; 
v_cleanupAnnotations_boxed_3241_ = lean_unbox(v_cleanupAnnotations_3235_);
v_res_3242_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(v_00_u03b1_3232_, v_type_3233_, v_k_3234_, v_cleanupAnnotations_boxed_3241_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
return v_res_3242_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0(uint8_t v_suppressElabErrors_3250_, uint8_t v___y_3251_, lean_object* v_x_3252_){
_start:
{
if (lean_obj_tag(v_x_3252_) == 1)
{
lean_object* v_pre_3253_; 
v_pre_3253_ = lean_ctor_get(v_x_3252_, 0);
switch(lean_obj_tag(v_pre_3253_))
{
case 1:
{
lean_object* v_pre_3254_; 
v_pre_3254_ = lean_ctor_get(v_pre_3253_, 0);
switch(lean_obj_tag(v_pre_3254_))
{
case 0:
{
lean_object* v_str_3255_; lean_object* v_str_3256_; lean_object* v___x_3257_; uint8_t v___x_3258_; 
v_str_3255_ = lean_ctor_get(v_x_3252_, 1);
v_str_3256_ = lean_ctor_get(v_pre_3253_, 1);
v___x_3257_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__0));
v___x_3258_ = lean_string_dec_eq(v_str_3256_, v___x_3257_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; uint8_t v___x_3260_; 
v___x_3259_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__1));
v___x_3260_ = lean_string_dec_eq(v_str_3256_, v___x_3259_);
if (v___x_3260_ == 0)
{
return v___x_3260_;
}
else
{
lean_object* v___x_3261_; uint8_t v___x_3262_; 
v___x_3261_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__2));
v___x_3262_ = lean_string_dec_eq(v_str_3255_, v___x_3261_);
if (v___x_3262_ == 0)
{
return v___x_3262_;
}
else
{
return v_suppressElabErrors_3250_;
}
}
}
else
{
lean_object* v___x_3263_; uint8_t v___x_3264_; 
v___x_3263_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__3));
v___x_3264_ = lean_string_dec_eq(v_str_3255_, v___x_3263_);
if (v___x_3264_ == 0)
{
return v___x_3264_;
}
else
{
return v_suppressElabErrors_3250_;
}
}
}
case 1:
{
lean_object* v_pre_3265_; 
v_pre_3265_ = lean_ctor_get(v_pre_3254_, 0);
if (lean_obj_tag(v_pre_3265_) == 0)
{
lean_object* v_str_3266_; lean_object* v_str_3267_; lean_object* v_str_3268_; lean_object* v___x_3269_; uint8_t v___x_3270_; 
v_str_3266_ = lean_ctor_get(v_x_3252_, 1);
v_str_3267_ = lean_ctor_get(v_pre_3253_, 1);
v_str_3268_ = lean_ctor_get(v_pre_3254_, 1);
v___x_3269_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__4));
v___x_3270_ = lean_string_dec_eq(v_str_3268_, v___x_3269_);
if (v___x_3270_ == 0)
{
return v___x_3270_;
}
else
{
lean_object* v___x_3271_; uint8_t v___x_3272_; 
v___x_3271_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__5));
v___x_3272_ = lean_string_dec_eq(v_str_3267_, v___x_3271_);
if (v___x_3272_ == 0)
{
return v___x_3272_;
}
else
{
lean_object* v___x_3273_; uint8_t v___x_3274_; 
v___x_3273_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___closed__6));
v___x_3274_ = lean_string_dec_eq(v_str_3266_, v___x_3273_);
if (v___x_3274_ == 0)
{
return v___x_3274_;
}
else
{
return v_suppressElabErrors_3250_;
}
}
}
}
else
{
return v___y_3251_;
}
}
default: 
{
return v___y_3251_;
}
}
}
case 0:
{
lean_object* v_str_3275_; lean_object* v___x_3276_; uint8_t v___x_3277_; 
v_str_3275_ = lean_ctor_get(v_x_3252_, 1);
v___x_3276_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2));
v___x_3277_ = lean_string_dec_eq(v_str_3275_, v___x_3276_);
if (v___x_3277_ == 0)
{
return v___x_3277_;
}
else
{
return v_suppressElabErrors_3250_;
}
}
default: 
{
return v___y_3251_;
}
}
}
else
{
return v___y_3251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___boxed(lean_object* v_suppressElabErrors_3278_, lean_object* v___y_3279_, lean_object* v_x_3280_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3281_; uint8_t v___y_10351__boxed_3282_; uint8_t v_res_3283_; lean_object* v_r_3284_; 
v_suppressElabErrors_boxed_3281_ = lean_unbox(v_suppressElabErrors_3278_);
v___y_10351__boxed_3282_ = lean_unbox(v___y_3279_);
v_res_3283_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0(v_suppressElabErrors_boxed_3281_, v___y_10351__boxed_3282_, v_x_3280_);
lean_dec(v_x_3280_);
v_r_3284_ = lean_box(v_res_3283_);
return v_r_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4(lean_object* v_ref_3285_, lean_object* v_msgData_3286_, uint8_t v_severity_3287_, uint8_t v_isSilent_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
uint8_t v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; uint8_t v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v_currNamespace_3302_; lean_object* v_openDecls_3303_; lean_object* v___y_3304_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; uint8_t v___y_3333_; lean_object* v___y_3334_; uint8_t v___y_3335_; uint8_t v___y_3336_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3357_; lean_object* v___y_3358_; lean_object* v___y_3359_; uint8_t v___y_3360_; uint8_t v___y_3361_; uint8_t v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; uint8_t v___y_3373_; lean_object* v___y_3374_; uint8_t v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; uint8_t v___y_3378_; uint8_t v___x_3383_; lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; uint8_t v___y_3390_; lean_object* v___y_3391_; uint8_t v___y_3392_; uint8_t v___y_3393_; uint8_t v___y_3395_; uint8_t v___x_3413_; 
v___x_3383_ = 2;
v___x_3413_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3287_, v___x_3383_);
if (v___x_3413_ == 0)
{
v___y_3395_ = v___x_3413_;
goto v___jp_3394_;
}
else
{
uint8_t v___x_3414_; 
lean_inc_ref(v_msgData_3286_);
v___x_3414_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3286_);
v___y_3395_ = v___x_3414_;
goto v___jp_3394_;
}
v___jp_3294_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v_env_3309_; lean_object* v_nextMacroScope_3310_; lean_object* v_ngen_3311_; lean_object* v_auxDeclNGen_3312_; lean_object* v_traceState_3313_; lean_object* v_cache_3314_; lean_object* v_messages_3315_; lean_object* v_infoState_3316_; lean_object* v_snapshotTasks_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3328_; 
lean_inc(v_openDecls_3303_);
lean_inc(v_currNamespace_3302_);
v___x_3305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3305_, 0, v_currNamespace_3302_);
lean_ctor_set(v___x_3305_, 1, v_openDecls_3303_);
v___x_3306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
lean_ctor_set(v___x_3306_, 1, v___y_3299_);
lean_inc_ref(v___y_3297_);
lean_inc_ref(v___y_3300_);
v___x_3307_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3307_, 0, v___y_3300_);
lean_ctor_set(v___x_3307_, 1, v___y_3301_);
lean_ctor_set(v___x_3307_, 2, v___y_3296_);
lean_ctor_set(v___x_3307_, 3, v___y_3297_);
lean_ctor_set(v___x_3307_, 4, v___x_3306_);
lean_ctor_set_uint8(v___x_3307_, sizeof(void*)*5, v___y_3295_);
lean_ctor_set_uint8(v___x_3307_, sizeof(void*)*5 + 1, v___y_3298_);
lean_ctor_set_uint8(v___x_3307_, sizeof(void*)*5 + 2, v_isSilent_3288_);
v___x_3308_ = lean_st_ref_take(v___y_3304_);
v_env_3309_ = lean_ctor_get(v___x_3308_, 0);
v_nextMacroScope_3310_ = lean_ctor_get(v___x_3308_, 1);
v_ngen_3311_ = lean_ctor_get(v___x_3308_, 2);
v_auxDeclNGen_3312_ = lean_ctor_get(v___x_3308_, 3);
v_traceState_3313_ = lean_ctor_get(v___x_3308_, 4);
v_cache_3314_ = lean_ctor_get(v___x_3308_, 5);
v_messages_3315_ = lean_ctor_get(v___x_3308_, 6);
v_infoState_3316_ = lean_ctor_get(v___x_3308_, 7);
v_snapshotTasks_3317_ = lean_ctor_get(v___x_3308_, 8);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3319_ = v___x_3308_;
v_isShared_3320_ = v_isSharedCheck_3328_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_snapshotTasks_3317_);
lean_inc(v_infoState_3316_);
lean_inc(v_messages_3315_);
lean_inc(v_cache_3314_);
lean_inc(v_traceState_3313_);
lean_inc(v_auxDeclNGen_3312_);
lean_inc(v_ngen_3311_);
lean_inc(v_nextMacroScope_3310_);
lean_inc(v_env_3309_);
lean_dec(v___x_3308_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3328_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3324_; 
v___x_3321_ = lean_box(0);
v___x_3322_ = l_Lean_MessageLog_add(v___x_3307_, v_messages_3315_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 6, v___x_3322_);
v___x_3324_ = v___x_3319_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_env_3309_);
lean_ctor_set(v_reuseFailAlloc_3327_, 1, v_nextMacroScope_3310_);
lean_ctor_set(v_reuseFailAlloc_3327_, 2, v_ngen_3311_);
lean_ctor_set(v_reuseFailAlloc_3327_, 3, v_auxDeclNGen_3312_);
lean_ctor_set(v_reuseFailAlloc_3327_, 4, v_traceState_3313_);
lean_ctor_set(v_reuseFailAlloc_3327_, 5, v_cache_3314_);
lean_ctor_set(v_reuseFailAlloc_3327_, 6, v___x_3322_);
lean_ctor_set(v_reuseFailAlloc_3327_, 7, v_infoState_3316_);
lean_ctor_set(v_reuseFailAlloc_3327_, 8, v_snapshotTasks_3317_);
v___x_3324_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3325_ = lean_st_ref_put(v___y_3304_, v___x_3324_);
v___x_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3321_);
return v___x_3326_;
}
}
}
v___jp_3329_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3355_; 
v___x_3340_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3286_);
v___x_3341_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v___x_3340_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3344_ = v___x_3341_;
v_isShared_3345_ = v_isSharedCheck_3355_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3341_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3355_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
lean_inc_ref_n(v___y_3338_, 2);
v___x_3346_ = l_Lean_FileMap_toPosition(v___y_3338_, v___y_3334_);
lean_dec(v___y_3334_);
v___x_3347_ = l_Lean_FileMap_toPosition(v___y_3338_, v___y_3339_);
lean_dec(v___y_3339_);
v___x_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
v___x_3349_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
if (v___y_3335_ == 0)
{
lean_del_object(v___x_3344_);
lean_dec_ref(v___y_3330_);
v___y_3295_ = v___y_3333_;
v___y_3296_ = v___x_3348_;
v___y_3297_ = v___x_3349_;
v___y_3298_ = v___y_3336_;
v___y_3299_ = v_a_3342_;
v___y_3300_ = v___y_3337_;
v___y_3301_ = v___x_3346_;
v_currNamespace_3302_ = v___y_3332_;
v_openDecls_3303_ = v___y_3331_;
v___y_3304_ = v___y_3292_;
goto v___jp_3294_;
}
else
{
uint8_t v___x_3350_; 
lean_inc(v_a_3342_);
v___x_3350_ = l_Lean_MessageData_hasTag(v___y_3330_, v_a_3342_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
lean_dec_ref_known(v___x_3348_, 1);
lean_dec_ref(v___x_3346_);
lean_dec(v_a_3342_);
v___x_3351_ = lean_box(0);
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v___x_3351_);
v___x_3353_ = v___x_3344_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
else
{
lean_del_object(v___x_3344_);
v___y_3295_ = v___y_3333_;
v___y_3296_ = v___x_3348_;
v___y_3297_ = v___x_3349_;
v___y_3298_ = v___y_3336_;
v___y_3299_ = v_a_3342_;
v___y_3300_ = v___y_3337_;
v___y_3301_ = v___x_3346_;
v_currNamespace_3302_ = v___y_3332_;
v_openDecls_3303_ = v___y_3331_;
v___y_3304_ = v___y_3292_;
goto v___jp_3294_;
}
}
}
}
v___jp_3356_:
{
lean_object* v___x_3367_; 
v___x_3367_ = l_Lean_Syntax_getTailPos_x3f(v___y_3363_, v___y_3360_);
lean_dec(v___y_3363_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_inc(v___y_3366_);
v___y_3330_ = v___y_3357_;
v___y_3331_ = v___y_3358_;
v___y_3332_ = v___y_3359_;
v___y_3333_ = v___y_3360_;
v___y_3334_ = v___y_3366_;
v___y_3335_ = v___y_3361_;
v___y_3336_ = v___y_3362_;
v___y_3337_ = v___y_3364_;
v___y_3338_ = v___y_3365_;
v___y_3339_ = v___y_3366_;
goto v___jp_3329_;
}
else
{
lean_object* v_val_3368_; 
v_val_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_val_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v___y_3330_ = v___y_3357_;
v___y_3331_ = v___y_3358_;
v___y_3332_ = v___y_3359_;
v___y_3333_ = v___y_3360_;
v___y_3334_ = v___y_3366_;
v___y_3335_ = v___y_3361_;
v___y_3336_ = v___y_3362_;
v___y_3337_ = v___y_3364_;
v___y_3338_ = v___y_3365_;
v___y_3339_ = v_val_3368_;
goto v___jp_3329_;
}
}
v___jp_3369_:
{
lean_object* v_ref_3379_; lean_object* v___x_3380_; 
v_ref_3379_ = l_Lean_replaceRef(v_ref_3285_, v___y_3374_);
v___x_3380_ = l_Lean_Syntax_getPos_x3f(v_ref_3379_, v___y_3373_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v___x_3381_; 
v___x_3381_ = lean_unsigned_to_nat(0u);
v___y_3357_ = v___y_3370_;
v___y_3358_ = v___y_3371_;
v___y_3359_ = v___y_3372_;
v___y_3360_ = v___y_3373_;
v___y_3361_ = v___y_3375_;
v___y_3362_ = v___y_3378_;
v___y_3363_ = v_ref_3379_;
v___y_3364_ = v___y_3376_;
v___y_3365_ = v___y_3377_;
v___y_3366_ = v___x_3381_;
goto v___jp_3356_;
}
else
{
lean_object* v_val_3382_; 
v_val_3382_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_val_3382_);
lean_dec_ref_known(v___x_3380_, 1);
v___y_3357_ = v___y_3370_;
v___y_3358_ = v___y_3371_;
v___y_3359_ = v___y_3372_;
v___y_3360_ = v___y_3373_;
v___y_3361_ = v___y_3375_;
v___y_3362_ = v___y_3378_;
v___y_3363_ = v_ref_3379_;
v___y_3364_ = v___y_3376_;
v___y_3365_ = v___y_3377_;
v___y_3366_ = v_val_3382_;
goto v___jp_3356_;
}
}
v___jp_3384_:
{
if (v___y_3393_ == 0)
{
v___y_3370_ = v___y_3385_;
v___y_3371_ = v___y_3386_;
v___y_3372_ = v___y_3388_;
v___y_3373_ = v___y_3390_;
v___y_3374_ = v___y_3391_;
v___y_3375_ = v___y_3392_;
v___y_3376_ = v___y_3387_;
v___y_3377_ = v___y_3389_;
v___y_3378_ = v_severity_3287_;
goto v___jp_3369_;
}
else
{
v___y_3370_ = v___y_3385_;
v___y_3371_ = v___y_3386_;
v___y_3372_ = v___y_3388_;
v___y_3373_ = v___y_3390_;
v___y_3374_ = v___y_3391_;
v___y_3375_ = v___y_3392_;
v___y_3376_ = v___y_3387_;
v___y_3377_ = v___y_3389_;
v___y_3378_ = v___x_3383_;
goto v___jp_3369_;
}
}
v___jp_3394_:
{
if (v___y_3395_ == 0)
{
lean_object* v_toCold_3396_; lean_object* v_ref_3397_; uint8_t v_suppressElabErrors_3398_; lean_object* v_fileName_3399_; lean_object* v_fileMap_3400_; lean_object* v_options_3401_; lean_object* v_currNamespace_3402_; lean_object* v_openDecls_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___f_3406_; uint8_t v___x_3407_; uint8_t v___x_3408_; 
v_toCold_3396_ = lean_ctor_get(v___y_3291_, 0);
v_ref_3397_ = lean_ctor_get(v___y_3291_, 2);
v_suppressElabErrors_3398_ = lean_ctor_get_uint8(v___y_3291_, sizeof(void*)*3 + 1);
v_fileName_3399_ = lean_ctor_get(v_toCold_3396_, 0);
v_fileMap_3400_ = lean_ctor_get(v_toCold_3396_, 1);
v_options_3401_ = lean_ctor_get(v_toCold_3396_, 2);
v_currNamespace_3402_ = lean_ctor_get(v_toCold_3396_, 4);
v_openDecls_3403_ = lean_ctor_get(v_toCold_3396_, 5);
v___x_3404_ = lean_box(v_suppressElabErrors_3398_);
v___x_3405_ = lean_box(v___y_3395_);
v___f_3406_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3406_, 0, v___x_3404_);
lean_closure_set(v___f_3406_, 1, v___x_3405_);
v___x_3407_ = 1;
v___x_3408_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3287_, v___x_3407_);
if (v___x_3408_ == 0)
{
v___y_3385_ = v___f_3406_;
v___y_3386_ = v_openDecls_3403_;
v___y_3387_ = v_fileName_3399_;
v___y_3388_ = v_currNamespace_3402_;
v___y_3389_ = v_fileMap_3400_;
v___y_3390_ = v___y_3395_;
v___y_3391_ = v_ref_3397_;
v___y_3392_ = v_suppressElabErrors_3398_;
v___y_3393_ = v___x_3408_;
goto v___jp_3384_;
}
else
{
lean_object* v___x_3409_; uint8_t v___x_3410_; 
v___x_3409_ = l_Lean_warningAsError;
v___x_3410_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_3401_, v___x_3409_);
v___y_3385_ = v___f_3406_;
v___y_3386_ = v_openDecls_3403_;
v___y_3387_ = v_fileName_3399_;
v___y_3388_ = v_currNamespace_3402_;
v___y_3389_ = v_fileMap_3400_;
v___y_3390_ = v___y_3395_;
v___y_3391_ = v_ref_3397_;
v___y_3392_ = v_suppressElabErrors_3398_;
v___y_3393_ = v___x_3410_;
goto v___jp_3384_;
}
}
else
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
lean_dec_ref(v_msgData_3286_);
v___x_3411_ = lean_box(0);
v___x_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
return v___x_3412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4___boxed(lean_object* v_ref_3415_, lean_object* v_msgData_3416_, lean_object* v_severity_3417_, lean_object* v_isSilent_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
uint8_t v_severity_boxed_3424_; uint8_t v_isSilent_boxed_3425_; lean_object* v_res_3426_; 
v_severity_boxed_3424_ = lean_unbox(v_severity_3417_);
v_isSilent_boxed_3425_ = lean_unbox(v_isSilent_3418_);
v_res_3426_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4(v_ref_3415_, v_msgData_3416_, v_severity_boxed_3424_, v_isSilent_boxed_3425_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v_ref_3415_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2(lean_object* v_msgData_3427_, uint8_t v_severity_3428_, uint8_t v_isSilent_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v_ref_3435_; lean_object* v___x_3436_; 
v_ref_3435_ = lean_ctor_get(v___y_3432_, 2);
v___x_3436_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2_spec__4(v_ref_3435_, v_msgData_3427_, v_severity_3428_, v_isSilent_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
return v___x_3436_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2___boxed(lean_object* v_msgData_3437_, lean_object* v_severity_3438_, lean_object* v_isSilent_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_){
_start:
{
uint8_t v_severity_boxed_3445_; uint8_t v_isSilent_boxed_3446_; lean_object* v_res_3447_; 
v_severity_boxed_3445_ = lean_unbox(v_severity_3438_);
v_isSilent_boxed_3446_ = lean_unbox(v_isSilent_3439_);
v_res_3447_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2(v_msgData_3437_, v_severity_boxed_3445_, v_isSilent_boxed_3446_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object* v_msgData_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
uint8_t v___x_3454_; uint8_t v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = 1;
v___x_3455_ = 0;
v___x_3456_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2_spec__2(v_msgData_3448_, v___x_3454_, v___x_3455_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object* v_msgData_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(v_msgData_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(lean_object* v_as_3464_, size_t v_sz_3465_, size_t v_i_3466_, lean_object* v_b_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_a_3474_; uint8_t v___x_3478_; 
v___x_3478_ = lean_usize_dec_lt(v_i_3466_, v_sz_3465_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; 
v___x_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3479_, 0, v_b_3467_);
return v___x_3479_;
}
else
{
lean_object* v___x_3480_; lean_object* v_a_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3480_ = lean_box(0);
v_a_3481_ = lean_array_uget_borrowed(v_as_3464_, v_i_3466_);
v___x_3482_ = l_Lean_Expr_fvarId_x21(v_a_3481_);
lean_inc(v___x_3482_);
v___x_3483_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_3482_, v___y_3469_, v___y_3470_, v___y_3471_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; uint8_t v___x_3485_; uint8_t v___x_3486_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
v___x_3485_ = lean_unbox(v_a_3484_);
lean_dec(v_a_3484_);
v___x_3486_ = l_Lean_BinderInfo_isInstImplicit(v___x_3485_);
if (v___x_3486_ == 0)
{
lean_dec(v___x_3482_);
v_a_3474_ = v___x_3480_;
goto v___jp_3473_;
}
else
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3487_ = lean_st_ref_take(v___y_3468_);
v___x_3488_ = l_Lean_CollectFVars_State_add(v___x_3487_, v___x_3482_);
v___x_3489_ = lean_st_ref_put(v___y_3468_, v___x_3488_);
v_a_3474_ = v___x_3480_;
goto v___jp_3473_;
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec(v___x_3482_);
v_a_3490_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3483_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3483_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
v___jp_3473_:
{
size_t v___x_3475_; size_t v___x_3476_; 
v___x_3475_ = ((size_t)1ULL);
v___x_3476_ = lean_usize_add(v_i_3466_, v___x_3475_);
v_i_3466_ = v___x_3476_;
v_b_3467_ = v_a_3474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg___boxed(lean_object* v_as_3498_, lean_object* v_sz_3499_, lean_object* v_i_3500_, lean_object* v_b_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
size_t v_sz_boxed_3507_; size_t v_i_boxed_3508_; lean_object* v_res_3509_; 
v_sz_boxed_3507_ = lean_unbox_usize(v_sz_3499_);
lean_dec(v_sz_3499_);
v_i_boxed_3508_ = lean_unbox_usize(v_i_3500_);
lean_dec(v_i_3500_);
v_res_3509_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_as_3498_, v_sz_boxed_3507_, v_i_boxed_3508_, v_b_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_);
lean_dec(v___y_3505_);
lean_dec_ref(v___y_3504_);
lean_dec_ref(v___y_3503_);
lean_dec(v___y_3502_);
lean_dec_ref(v_as_3498_);
return v_res_3509_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object* v_k_3510_, lean_object* v_t_3511_){
_start:
{
if (lean_obj_tag(v_t_3511_) == 0)
{
lean_object* v_k_3512_; lean_object* v_l_3513_; lean_object* v_r_3514_; uint8_t v___x_3515_; 
v_k_3512_ = lean_ctor_get(v_t_3511_, 1);
v_l_3513_ = lean_ctor_get(v_t_3511_, 3);
v_r_3514_ = lean_ctor_get(v_t_3511_, 4);
v___x_3515_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3510_, v_k_3512_);
switch(v___x_3515_)
{
case 0:
{
v_t_3511_ = v_l_3513_;
goto _start;
}
case 1:
{
uint8_t v___x_3517_; 
v___x_3517_ = 1;
return v___x_3517_;
}
default: 
{
v_t_3511_ = v_r_3514_;
goto _start;
}
}
}
else
{
uint8_t v___x_3519_; 
v___x_3519_ = 0;
return v___x_3519_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object* v_k_3520_, lean_object* v_t_3521_){
_start:
{
uint8_t v_res_3522_; lean_object* v_r_3523_; 
v_res_3522_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_k_3520_, v_t_3521_);
lean_dec(v_t_3521_);
lean_dec(v_k_3520_);
v_r_3523_ = lean_box(v_res_3522_);
return v_r_3523_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__0));
v___x_3526_ = l_Lean_stringToMessageData(v___x_3525_);
return v___x_3526_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__2));
v___x_3529_ = l_Lean_stringToMessageData(v___x_3528_);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object* v_a_3530_, lean_object* v_as_3531_, size_t v_sz_3532_, size_t v_i_3533_, lean_object* v_b_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v_a_3540_; uint8_t v___x_3544_; 
v___x_3544_ = lean_usize_dec_lt(v_i_3533_, v_sz_3532_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_b_3534_);
return v___x_3545_;
}
else
{
lean_object* v_snd_3546_; 
v_snd_3546_ = lean_ctor_get(v_b_3534_, 1);
lean_inc(v_snd_3546_);
if (lean_obj_tag(v_snd_3546_) == 0)
{
lean_object* v_fst_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3555_; 
v_fst_3547_ = lean_ctor_get(v_b_3534_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v_b_3534_);
if (v_isSharedCheck_3555_ == 0)
{
lean_object* v_unused_3556_; 
v_unused_3556_ = lean_ctor_get(v_b_3534_, 1);
lean_dec(v_unused_3556_);
v___x_3549_ = v_b_3534_;
v_isShared_3550_ = v_isSharedCheck_3555_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_fst_3547_);
lean_dec(v_b_3534_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3555_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3552_; 
if (v_isShared_3550_ == 0)
{
v___x_3552_ = v___x_3549_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_fst_3547_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v_snd_3546_);
v___x_3552_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
lean_object* v___x_3553_; 
v___x_3553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3552_);
return v___x_3553_;
}
}
}
else
{
lean_object* v_fst_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3614_; 
v_fst_3557_ = lean_ctor_get(v_b_3534_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v_b_3534_);
if (v_isSharedCheck_3614_ == 0)
{
lean_object* v_unused_3615_; 
v_unused_3615_ = lean_ctor_get(v_b_3534_, 1);
lean_dec(v_unused_3615_);
v___x_3559_ = v_b_3534_;
v_isShared_3560_ = v_isSharedCheck_3614_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_fst_3557_);
lean_dec(v_b_3534_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3614_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v_val_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3613_; 
v_val_3561_ = lean_ctor_get(v_snd_3546_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v_snd_3546_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3563_ = v_snd_3546_;
v_isShared_3564_ = v_isSharedCheck_3613_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_val_3561_);
lean_dec(v_snd_3546_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3613_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v_fvarSet_3565_; lean_object* v_a_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3570_; 
v_fvarSet_3565_ = lean_ctor_get(v_a_3530_, 1);
v_a_3566_ = lean_array_uget_borrowed(v_as_3531_, v_i_3533_);
v___x_3567_ = lean_unsigned_to_nat(1u);
v___x_3568_ = lean_nat_add(v_val_3561_, v___x_3567_);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v___x_3568_);
v___x_3570_ = v___x_3563_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
lean_object* v___x_3571_; uint8_t v___x_3572_; 
v___x_3571_ = l_Lean_Expr_fvarId_x21(v_a_3566_);
v___x_3572_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v___x_3571_, v_fvarSet_3565_);
if (v___x_3572_ == 0)
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Lean_FVarId_getDecl___redArg(v___x_3571_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3575_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref_known(v___x_3573_, 1);
v___x_3575_ = l_Lean_LocalDecl_ppAsBinder(v_a_3574_);
if (lean_obj_tag(v___x_3575_) == 1)
{
lean_object* v_val_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3597_; 
v_val_3576_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3578_ = v___x_3575_;
v_isShared_3579_ = v_isSharedCheck_3597_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_val_3576_);
lean_dec(v___x_3575_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3597_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3580_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__1);
v___x_3581_ = l_Nat_reprFast(v_val_3561_);
if (v_isShared_3579_ == 0)
{
lean_ctor_set_tag(v___x_3578_, 3);
lean_ctor_set(v___x_3578_, 0, v___x_3581_);
v___x_3583_ = v___x_3578_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3594_; 
v___x_3584_ = l_Lean_MessageData_ofFormat(v___x_3583_);
v___x_3585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3580_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
v___x_3586_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___closed__3);
v___x_3587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3585_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3587_);
lean_ctor_set(v___x_3588_, 1, v_val_3576_);
v___x_3589_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = l_Lean_indentD(v___x_3590_);
v___x_3592_ = lean_array_push(v_fst_3557_, v___x_3591_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___x_3570_);
lean_ctor_set(v___x_3559_, 0, v___x_3592_);
v___x_3594_ = v___x_3559_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v___x_3570_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
v_a_3540_ = v___x_3594_;
goto v___jp_3539_;
}
}
}
}
else
{
lean_object* v___x_3599_; 
lean_dec(v___x_3575_);
lean_dec(v_val_3561_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___x_3570_);
v___x_3599_ = v___x_3559_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_fst_3557_);
lean_ctor_set(v_reuseFailAlloc_3600_, 1, v___x_3570_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
v_a_3540_ = v___x_3599_;
goto v___jp_3539_;
}
}
}
else
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3608_; 
lean_dec_ref(v___x_3570_);
lean_dec(v_val_3561_);
lean_del_object(v___x_3559_);
lean_dec(v_fst_3557_);
v_a_3601_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3603_ = v___x_3573_;
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3573_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3606_; 
if (v_isShared_3604_ == 0)
{
v___x_3606_ = v___x_3603_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3601_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
else
{
lean_object* v___x_3610_; 
lean_dec(v___x_3571_);
lean_dec(v_val_3561_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___x_3570_);
v___x_3610_ = v___x_3559_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_fst_3557_);
lean_ctor_set(v_reuseFailAlloc_3611_, 1, v___x_3570_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
v_a_3540_ = v___x_3610_;
goto v___jp_3539_;
}
}
}
}
}
}
}
v___jp_3539_:
{
size_t v___x_3541_; size_t v___x_3542_; 
v___x_3541_ = ((size_t)1ULL);
v___x_3542_ = lean_usize_add(v_i_3533_, v___x_3541_);
v_i_3533_ = v___x_3542_;
v_b_3534_ = v_a_3540_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object* v_a_3616_, lean_object* v_as_3617_, lean_object* v_sz_3618_, lean_object* v_i_3619_, lean_object* v_b_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
size_t v_sz_boxed_3625_; size_t v_i_boxed_3626_; lean_object* v_res_3627_; 
v_sz_boxed_3625_ = lean_unbox_usize(v_sz_3618_);
lean_dec(v_sz_3618_);
v_i_boxed_3626_ = lean_unbox_usize(v_i_3619_);
lean_dec(v_i_3619_);
v_res_3627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_a_3616_, v_as_3617_, v_sz_boxed_3625_, v_i_boxed_3626_, v_b_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec_ref(v_as_3617_);
lean_dec_ref(v_a_3616_);
return v_res_3627_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3629_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0));
v___x_3630_ = l_Lean_stringToMessageData(v___x_3629_);
return v___x_3630_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3632_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2));
v___x_3633_ = l_Lean_stringToMessageData(v___x_3632_);
return v___x_3633_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = lean_box(0);
v___x_3635_ = lean_unsigned_to_nat(16u);
v___x_3636_ = lean_mk_array(v___x_3635_, v___x_3634_);
return v___x_3636_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4);
v___x_3638_ = lean_unsigned_to_nat(0u);
v___x_3639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3638_);
lean_ctor_set(v___x_3639_, 1, v___x_3637_);
return v___x_3639_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9));
v___x_3649_ = l_Lean_stringToMessageData(v___x_3648_);
return v___x_3649_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12(void){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11));
v___x_3652_ = l_Lean_stringToMessageData(v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object* v___x_3654_, lean_object* v___x_3655_, lean_object* v_args_3656_, lean_object* v_ty_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___y_3740_; lean_object* v___x_3741_; 
v___x_3680_ = lean_unsigned_to_nat(0u);
v___x_3681_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5);
v___x_3682_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6));
v___x_3683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3681_);
lean_ctor_set(v___x_3683_, 1, v___x_3655_);
lean_ctor_set(v___x_3683_, 2, v___x_3682_);
v___x_3684_ = lean_st_mk_ref(v___x_3683_);
v___x_3741_ = l_Lean_Expr_collectFVars(v_ty_3657_, v___x_3684_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v___x_3742_; size_t v_sz_3743_; size_t v___x_3744_; lean_object* v___x_3745_; 
lean_dec_ref_known(v___x_3741_, 1);
v___x_3742_ = lean_box(0);
v_sz_3743_ = lean_array_size(v_args_3656_);
v___x_3744_ = ((size_t)0ULL);
v___x_3745_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_args_3656_, v_sz_3743_, v___x_3744_, v___x_3742_, v___x_3684_, v___y_3658_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_dec_ref_known(v___x_3745_, 1);
goto v___jp_3685_;
}
else
{
v___y_3740_ = v___x_3745_;
goto v___jp_3739_;
}
}
else
{
v___y_3740_ = v___x_3741_;
goto v___jp_3739_;
}
v___jp_3663_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
lean_inc_ref(v___y_3666_);
v___x_3667_ = l_Lean_stringToMessageData(v___y_3666_);
v___x_3668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3668_, 0, v___y_3664_);
lean_ctor_set(v___x_3668_, 1, v___x_3667_);
v___x_3669_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1);
v___x_3670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3668_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
v___x_3671_ = lean_array_to_list(v___y_3665_);
v___x_3672_ = l_Lean_MessageData_nil;
v___x_3673_ = l_Lean_MessageData_joinSep(v___x_3671_, v___x_3672_);
v___x_3674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3670_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3);
v___x_3676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3674_);
lean_ctor_set(v___x_3676_, 1, v___x_3675_);
v___x_3677_ = l_Lean_Expr_hasSorry(v___x_3654_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3678_; 
v___x_3678_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3676_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
return v___x_3678_;
}
else
{
lean_object* v___x_3679_; 
v___x_3679_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(v___x_3676_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
return v___x_3679_;
}
}
v___jp_3685_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3686_ = lean_st_ref_get(v___x_3684_);
lean_dec(v___x_3684_);
v___x_3687_ = l_Lean_CollectFVars_State_addDependencies(v___x_3686_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; size_t v_sz_3691_; size_t v___x_3692_; lean_object* v___x_3693_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
v___x_3689_ = lean_unsigned_to_nat(1u);
v___x_3690_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8));
v_sz_3691_ = lean_array_size(v_args_3656_);
v___x_3692_ = ((size_t)0ULL);
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_a_3688_, v_args_3656_, v_sz_3691_, v___x_3692_, v___x_3690_, v___y_3658_, v___y_3660_, v___y_3661_);
lean_dec(v_a_3688_);
if (lean_obj_tag(v___x_3693_) == 0)
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3722_; 
v_a_3694_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3696_ = v___x_3693_;
v_isShared_3697_ = v_isSharedCheck_3722_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3693_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3722_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v_fst_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3720_; 
v_fst_3698_ = lean_ctor_get(v_a_3694_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v_a_3694_);
if (v_isSharedCheck_3720_ == 0)
{
lean_object* v_unused_3721_; 
v_unused_3721_ = lean_ctor_get(v_a_3694_, 1);
lean_dec(v_unused_3721_);
v___x_3700_ = v_a_3694_;
v_isShared_3701_ = v_isSharedCheck_3720_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_fst_3698_);
lean_dec(v_a_3694_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3720_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3702_; uint8_t v___x_3703_; 
v___x_3702_ = lean_array_get_size(v_fst_3698_);
v___x_3703_ = lean_nat_dec_eq(v___x_3702_, v___x_3680_);
if (v___x_3703_ == 0)
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3709_; 
lean_del_object(v___x_3696_);
v___x_3704_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10);
v___x_3705_ = l_Nat_reprFast(v___x_3702_);
v___x_3706_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
v___x_3707_ = l_Lean_MessageData_ofFormat(v___x_3706_);
if (v_isShared_3701_ == 0)
{
lean_ctor_set_tag(v___x_3700_, 7);
lean_ctor_set(v___x_3700_, 1, v___x_3707_);
lean_ctor_set(v___x_3700_, 0, v___x_3704_);
v___x_3709_ = v___x_3700_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3715_, 1, v___x_3707_);
v___x_3709_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; 
v___x_3710_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12);
v___x_3711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3709_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v___x_3712_ = lean_nat_dec_eq(v___x_3702_, v___x_3689_);
if (v___x_3712_ == 0)
{
lean_object* v___x_3713_; 
v___x_3713_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13));
v___y_3664_ = v___x_3711_;
v___y_3665_ = v_fst_3698_;
v___y_3666_ = v___x_3713_;
goto v___jp_3663_;
}
else
{
lean_object* v___x_3714_; 
v___x_3714_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___y_3664_ = v___x_3711_;
v___y_3665_ = v_fst_3698_;
v___y_3666_ = v___x_3714_;
goto v___jp_3663_;
}
}
}
else
{
lean_object* v___x_3716_; lean_object* v___x_3718_; 
lean_del_object(v___x_3700_);
lean_dec(v_fst_3698_);
v___x_3716_ = lean_box(0);
if (v_isShared_3697_ == 0)
{
lean_ctor_set(v___x_3696_, 0, v___x_3716_);
v___x_3718_ = v___x_3696_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v___x_3716_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
v_a_3723_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3693_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3693_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
v_a_3731_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3687_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3687_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
v___jp_3739_:
{
if (lean_obj_tag(v___y_3740_) == 0)
{
lean_dec_ref_known(v___y_3740_, 1);
goto v___jp_3685_;
}
else
{
lean_dec(v___x_3684_);
return v___y_3740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object* v___x_3746_, lean_object* v___x_3747_, lean_object* v_args_3748_, lean_object* v_ty_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
lean_object* v_res_3755_; 
v_res_3755_ = l_Lean_Meta_checkImpossibleInstance___lam__0(v___x_3746_, v___x_3747_, v_args_3748_, v_ty_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_args_3748_);
lean_dec_ref(v___x_3746_);
return v_res_3755_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object* v_e_3756_){
_start:
{
lean_object* v___x_3757_; 
v___x_3757_ = l_Lean_Expr_cleanupAnnotations(v_e_3756_);
switch(lean_obj_tag(v___x_3757_))
{
case 7:
{
lean_object* v_body_3758_; uint8_t v_binderInfo_3759_; uint8_t v___x_3760_; 
v_body_3758_ = lean_ctor_get(v___x_3757_, 2);
lean_inc_ref(v_body_3758_);
v_binderInfo_3759_ = lean_ctor_get_uint8(v___x_3757_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_3757_, 3);
v___x_3760_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_3759_);
if (v___x_3760_ == 0)
{
lean_object* v___x_3761_; uint8_t v___x_3762_; 
v___x_3761_ = lean_unsigned_to_nat(0u);
v___x_3762_ = lean_expr_has_loose_bvar(v_body_3758_, v___x_3761_);
if (v___x_3762_ == 0)
{
uint8_t v___x_3763_; 
lean_dec_ref(v_body_3758_);
v___x_3763_ = 1;
return v___x_3763_;
}
else
{
v_e_3756_ = v_body_3758_;
goto _start;
}
}
else
{
v_e_3756_ = v_body_3758_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3766_; 
v_body_3766_ = lean_ctor_get(v___x_3757_, 3);
lean_inc_ref(v_body_3766_);
lean_dec_ref_known(v___x_3757_, 4);
v_e_3756_ = v_body_3766_;
goto _start;
}
default: 
{
uint8_t v___x_3768_; 
lean_dec_ref(v___x_3757_);
v___x_3768_ = 0;
return v___x_3768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object* v_e_3769_){
_start:
{
uint8_t v_res_3770_; lean_object* v_r_3771_; 
v_res_3770_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(v_e_3769_);
v_r_3771_ = lean_box(v_res_3770_);
return v_r_3771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object* v_cinfo_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_){
_start:
{
lean_object* v___x_3778_; uint8_t v___x_3779_; 
v___x_3778_ = l_Lean_ConstantInfo_type(v_cinfo_3772_);
lean_inc_ref(v___x_3778_);
v___x_3779_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(v___x_3778_);
if (v___x_3779_ == 0)
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
lean_dec_ref(v___x_3778_);
v___x_3780_ = lean_box(0);
v___x_3781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3780_);
return v___x_3781_;
}
else
{
lean_object* v___x_3782_; lean_object* v___f_3783_; uint8_t v___x_3784_; lean_object* v___x_3785_; 
v___x_3782_ = lean_box(1);
lean_inc_ref(v___x_3778_);
v___f_3783_ = lean_alloc_closure((void*)(l_Lean_Meta_checkImpossibleInstance___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3783_, 0, v___x_3778_);
lean_closure_set(v___f_3783_, 1, v___x_3782_);
v___x_3784_ = 0;
v___x_3785_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v___x_3778_, v___f_3783_, v___x_3784_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_);
return v___x_3785_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object* v_cinfo_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_){
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lean_Meta_checkImpossibleInstance(v_cinfo_3786_, v_a_3787_, v_a_3788_, v_a_3789_, v_a_3790_);
lean_dec(v_a_3790_);
lean_dec_ref(v_a_3789_);
lean_dec(v_a_3788_);
lean_dec_ref(v_a_3787_);
lean_dec_ref(v_cinfo_3786_);
return v_res_3792_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object* v_00_u03b2_3793_, lean_object* v_k_3794_, lean_object* v_t_3795_){
_start:
{
uint8_t v___x_3796_; 
v___x_3796_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_k_3794_, v_t_3795_);
return v___x_3796_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object* v_00_u03b2_3797_, lean_object* v_k_3798_, lean_object* v_t_3799_){
_start:
{
uint8_t v_res_3800_; lean_object* v_r_3801_; 
v_res_3800_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__0(v_00_u03b2_3797_, v_k_3798_, v_t_3799_);
lean_dec(v_t_3799_);
lean_dec(v_k_3798_);
v_r_3801_ = lean_box(v_res_3800_);
return v_r_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object* v_a_3802_, lean_object* v_as_3803_, size_t v_sz_3804_, size_t v_i_3805_, lean_object* v_b_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v___x_3812_; 
v___x_3812_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_a_3802_, v_as_3803_, v_sz_3804_, v_i_3805_, v_b_3806_, v___y_3807_, v___y_3809_, v___y_3810_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object* v_a_3813_, lean_object* v_as_3814_, lean_object* v_sz_3815_, lean_object* v_i_3816_, lean_object* v_b_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_){
_start:
{
size_t v_sz_boxed_3823_; size_t v_i_boxed_3824_; lean_object* v_res_3825_; 
v_sz_boxed_3823_ = lean_unbox_usize(v_sz_3815_);
lean_dec(v_sz_3815_);
v_i_boxed_3824_ = lean_unbox_usize(v_i_3816_);
lean_dec(v_i_3816_);
v_res_3825_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__1(v_a_3813_, v_as_3814_, v_sz_boxed_3823_, v_i_boxed_3824_, v_b_3817_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
lean_dec(v___y_3821_);
lean_dec_ref(v___y_3820_);
lean_dec(v___y_3819_);
lean_dec_ref(v___y_3818_);
lean_dec_ref(v_as_3814_);
lean_dec_ref(v_a_3813_);
return v_res_3825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object* v_as_3826_, size_t v_sz_3827_, size_t v_i_3828_, lean_object* v_b_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
lean_object* v___x_3836_; 
v___x_3836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___redArg(v_as_3826_, v_sz_3827_, v_i_3828_, v_b_3829_, v___y_3830_, v___y_3831_, v___y_3833_, v___y_3834_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object* v_as_3837_, lean_object* v_sz_3838_, lean_object* v_i_3839_, lean_object* v_b_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
size_t v_sz_boxed_3847_; size_t v_i_boxed_3848_; lean_object* v_res_3849_; 
v_sz_boxed_3847_ = lean_unbox_usize(v_sz_3838_);
lean_dec(v_sz_3838_);
v_i_boxed_3848_ = lean_unbox_usize(v_i_3839_);
lean_dec(v_i_3839_);
v_res_3849_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__3(v_as_3837_, v_sz_boxed_3847_, v_i_boxed_3848_, v_b_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
lean_dec(v___y_3841_);
lean_dec_ref(v_as_3837_);
return v_res_3849_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3851_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__0));
v___x_3852_ = l_Lean_stringToMessageData(v___x_3851_);
return v___x_3852_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__2));
v___x_3855_ = l_Lean_stringToMessageData(v___x_3854_);
return v___x_3855_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3857_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__4));
v___x_3858_ = l_Lean_stringToMessageData(v___x_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object* v_c_3859_, lean_object* v_x_3860_, lean_object* v_target_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v___x_3867_; 
lean_inc_ref(v_target_3861_);
v___x_3867_ = l_Lean_Meta_isClass_x3f(v_target_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_3867_) == 0)
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3886_; 
v_a_3868_ = lean_ctor_get(v___x_3867_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3867_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3870_ = v___x_3867_;
v_isShared_3871_ = v_isSharedCheck_3886_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3867_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3886_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
if (lean_obj_tag(v_a_3868_) == 0)
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_del_object(v___x_3870_);
v___x_3872_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__1, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1);
v___x_3873_ = l_Lean_MessageData_ofExpr(v_c_3859_);
v___x_3874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3872_);
lean_ctor_set(v___x_3874_, 1, v___x_3873_);
v___x_3875_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__3, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3);
v___x_3876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3874_);
lean_ctor_set(v___x_3876_, 1, v___x_3875_);
v___x_3877_ = l_Lean_MessageData_ofExpr(v_target_3861_);
v___x_3878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3876_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
v___x_3879_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__5, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5);
v___x_3880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3880_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
return v___x_3881_;
}
else
{
lean_object* v___x_3882_; lean_object* v___x_3884_; 
lean_dec_ref_known(v_a_3868_, 1);
lean_dec_ref(v_target_3861_);
lean_dec_ref(v_c_3859_);
v___x_3882_ = lean_box(0);
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 0, v___x_3882_);
v___x_3884_ = v___x_3870_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
}
else
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
lean_dec_ref(v_target_3861_);
lean_dec_ref(v_c_3859_);
v_a_3887_ = lean_ctor_get(v___x_3867_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3867_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3867_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3867_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object* v_c_3895_, lean_object* v_x_3896_, lean_object* v_target_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_){
_start:
{
lean_object* v_res_3903_; 
v_res_3903_ = l_Lean_Meta_checkNonClassInstance___lam__0(v_c_3895_, v_x_3896_, v_target_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_);
lean_dec(v___y_3901_);
lean_dec_ref(v___y_3900_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec_ref(v_x_3896_);
return v_res_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object* v_c_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_){
_start:
{
lean_object* v___f_3910_; lean_object* v___x_3911_; 
lean_inc_ref(v_c_3904_);
v___f_3910_ = lean_alloc_closure((void*)(l_Lean_Meta_checkNonClassInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3910_, 0, v_c_3904_);
lean_inc(v_a_3908_);
lean_inc_ref(v_a_3907_);
lean_inc(v_a_3906_);
lean_inc_ref(v_a_3905_);
v___x_3911_ = lean_infer_type(v_c_3904_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; uint8_t v___x_3913_; lean_object* v___x_3914_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
lean_inc(v_a_3912_);
lean_dec_ref_known(v___x_3911_, 1);
v___x_3913_ = 0;
v___x_3914_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_3912_, v___f_3910_, v___x_3913_, v___x_3913_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_);
return v___x_3914_;
}
else
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3922_; 
lean_dec_ref(v___f_3910_);
v_a_3915_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3917_ = v___x_3911_;
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v___x_3911_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object* v_c_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_){
_start:
{
lean_object* v_res_3929_; 
v_res_3929_ = l_Lean_Meta_checkNonClassInstance(v_c_3923_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_);
lean_dec(v_a_3927_);
lean_dec_ref(v_a_3926_);
lean_dec(v_a_3925_);
lean_dec_ref(v_a_3924_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(lean_object* v_declName_3940_, lean_object* v___y_3941_){
_start:
{
lean_object* v___x_3943_; lean_object* v_env_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3943_ = lean_st_ref_get(v___y_3941_);
v_env_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc_ref(v_env_3944_);
lean_dec(v___x_3943_);
v___x_3945_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_3944_, v_declName_3940_);
v___x_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg___boxed(lean_object* v_declName_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_3947_, v___y_3948_);
lean_dec(v___y_3948_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(lean_object* v_declName_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v___x_3957_; 
v___x_3957_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_3951_, v___y_3955_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object* v_declName_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(v_declName_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
return v_res_3964_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3965_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
return v___x_3966_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3967_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0);
v___x_3968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
lean_ctor_set(v___x_3968_, 1, v___x_3967_);
return v___x_3968_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3969_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0);
v___x_3970_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
lean_ctor_set(v___x_3970_, 2, v___x_3969_);
lean_ctor_set(v___x_3970_, 3, v___x_3969_);
lean_ctor_set(v___x_3970_, 4, v___x_3969_);
lean_ctor_set(v___x_3970_, 5, v___x_3969_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object* v_ext_3971_, lean_object* v_b_3972_, uint8_t v_kind_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
lean_object* v_toCold_3978_; lean_object* v_currNamespace_3979_; lean_object* v___x_3980_; lean_object* v_env_3981_; lean_object* v_nextMacroScope_3982_; lean_object* v_ngen_3983_; lean_object* v_auxDeclNGen_3984_; lean_object* v_traceState_3985_; lean_object* v_messages_3986_; lean_object* v_infoState_3987_; lean_object* v_snapshotTasks_3988_; lean_object* v___x_3990_; uint8_t v_isShared_3991_; uint8_t v_isSharedCheck_4015_; 
v_toCold_3978_ = lean_ctor_get(v___y_3975_, 0);
v_currNamespace_3979_ = lean_ctor_get(v_toCold_3978_, 4);
v___x_3980_ = lean_st_ref_take(v___y_3976_);
v_env_3981_ = lean_ctor_get(v___x_3980_, 0);
v_nextMacroScope_3982_ = lean_ctor_get(v___x_3980_, 1);
v_ngen_3983_ = lean_ctor_get(v___x_3980_, 2);
v_auxDeclNGen_3984_ = lean_ctor_get(v___x_3980_, 3);
v_traceState_3985_ = lean_ctor_get(v___x_3980_, 4);
v_messages_3986_ = lean_ctor_get(v___x_3980_, 6);
v_infoState_3987_ = lean_ctor_get(v___x_3980_, 7);
v_snapshotTasks_3988_ = lean_ctor_get(v___x_3980_, 8);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4015_ == 0)
{
lean_object* v_unused_4016_; 
v_unused_4016_ = lean_ctor_get(v___x_3980_, 5);
lean_dec(v_unused_4016_);
v___x_3990_ = v___x_3980_;
v_isShared_3991_ = v_isSharedCheck_4015_;
goto v_resetjp_3989_;
}
else
{
lean_inc(v_snapshotTasks_3988_);
lean_inc(v_infoState_3987_);
lean_inc(v_messages_3986_);
lean_inc(v_traceState_3985_);
lean_inc(v_auxDeclNGen_3984_);
lean_inc(v_ngen_3983_);
lean_inc(v_nextMacroScope_3982_);
lean_inc(v_env_3981_);
lean_dec(v___x_3980_);
v___x_3990_ = lean_box(0);
v_isShared_3991_ = v_isSharedCheck_4015_;
goto v_resetjp_3989_;
}
v_resetjp_3989_:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3995_; 
lean_inc(v_currNamespace_3979_);
v___x_3992_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_3981_, v_ext_3971_, v_b_3972_, v_kind_3973_, v_currNamespace_3979_);
v___x_3993_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_3991_ == 0)
{
lean_ctor_set(v___x_3990_, 5, v___x_3993_);
lean_ctor_set(v___x_3990_, 0, v___x_3992_);
v___x_3995_ = v___x_3990_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4014_, 1, v_nextMacroScope_3982_);
lean_ctor_set(v_reuseFailAlloc_4014_, 2, v_ngen_3983_);
lean_ctor_set(v_reuseFailAlloc_4014_, 3, v_auxDeclNGen_3984_);
lean_ctor_set(v_reuseFailAlloc_4014_, 4, v_traceState_3985_);
lean_ctor_set(v_reuseFailAlloc_4014_, 5, v___x_3993_);
lean_ctor_set(v_reuseFailAlloc_4014_, 6, v_messages_3986_);
lean_ctor_set(v_reuseFailAlloc_4014_, 7, v_infoState_3987_);
lean_ctor_set(v_reuseFailAlloc_4014_, 8, v_snapshotTasks_3988_);
v___x_3995_ = v_reuseFailAlloc_4014_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v_mctx_3998_; lean_object* v_zetaDeltaFVarIds_3999_; lean_object* v_postponed_4000_; lean_object* v_diag_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4012_; 
v___x_3996_ = lean_st_ref_put(v___y_3976_, v___x_3995_);
v___x_3997_ = lean_st_ref_take(v___y_3974_);
v_mctx_3998_ = lean_ctor_get(v___x_3997_, 0);
v_zetaDeltaFVarIds_3999_ = lean_ctor_get(v___x_3997_, 2);
v_postponed_4000_ = lean_ctor_get(v___x_3997_, 3);
v_diag_4001_ = lean_ctor_get(v___x_3997_, 4);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4012_ == 0)
{
lean_object* v_unused_4013_; 
v_unused_4013_ = lean_ctor_get(v___x_3997_, 1);
lean_dec(v_unused_4013_);
v___x_4003_ = v___x_3997_;
v_isShared_4004_ = v_isSharedCheck_4012_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_diag_4001_);
lean_inc(v_postponed_4000_);
lean_inc(v_zetaDeltaFVarIds_3999_);
lean_inc(v_mctx_3998_);
lean_dec(v___x_3997_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4012_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4008_; 
v___x_4005_ = lean_box(0);
v___x_4006_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 1, v___x_4006_);
v___x_4008_ = v___x_4003_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_mctx_3998_);
lean_ctor_set(v_reuseFailAlloc_4011_, 1, v___x_4006_);
lean_ctor_set(v_reuseFailAlloc_4011_, 2, v_zetaDeltaFVarIds_3999_);
lean_ctor_set(v_reuseFailAlloc_4011_, 3, v_postponed_4000_);
lean_ctor_set(v_reuseFailAlloc_4011_, 4, v_diag_4001_);
v___x_4008_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4009_ = lean_st_ref_put(v___y_3974_, v___x_4008_);
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4005_);
return v___x_4010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object* v_ext_4017_, lean_object* v_b_4018_, lean_object* v_kind_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_){
_start:
{
uint8_t v_kind_boxed_4024_; lean_object* v_res_4025_; 
v_kind_boxed_4024_ = lean_unbox(v_kind_4019_);
v_res_4025_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v_ext_4017_, v_b_4018_, v_kind_boxed_4024_, v___y_4020_, v___y_4021_, v___y_4022_);
lean_dec(v___y_4022_);
lean_dec_ref(v___y_4021_);
lean_dec(v___y_4020_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(lean_object* v_00_u03b1_4026_, lean_object* v_00_u03b2_4027_, lean_object* v_00_u03c3_4028_, lean_object* v_ext_4029_, lean_object* v_b_4030_, uint8_t v_kind_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v_ext_4029_, v_b_4030_, v_kind_4031_, v___y_4033_, v___y_4034_, v___y_4035_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object* v_00_u03b1_4038_, lean_object* v_00_u03b2_4039_, lean_object* v_00_u03c3_4040_, lean_object* v_ext_4041_, lean_object* v_b_4042_, lean_object* v_kind_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
uint8_t v_kind_boxed_4049_; lean_object* v_res_4050_; 
v_kind_boxed_4049_ = lean_unbox(v_kind_4043_);
v_res_4050_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(v_00_u03b1_4038_, v_00_u03b2_4039_, v_00_u03c3_4040_, v_ext_4041_, v_b_4042_, v_kind_boxed_4049_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object* v_declName_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v___x_4054_; lean_object* v_env_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4054_ = lean_st_ref_get(v___y_4052_);
v_env_4055_ = lean_ctor_get(v___x_4054_, 0);
lean_inc_ref(v_env_4055_);
lean_dec(v___x_4054_);
v___x_4056_ = l_Lean_getReducibilityStatusCore(v_env_4055_, v_declName_4051_);
v___x_4057_ = lean_box(v___x_4056_);
v___x_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object* v_declName_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4059_, v___y_4060_);
lean_dec(v___y_4060_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(lean_object* v_declName_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v___x_4069_; 
v___x_4069_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4063_, v___y_4067_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object* v_declName_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(v_declName_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(lean_object* v_ref_4077_, lean_object* v_msg_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v_toCold_4084_; lean_object* v_currRecDepth_4085_; lean_object* v_ref_4086_; uint8_t v_diag_4087_; uint8_t v_suppressElabErrors_4088_; lean_object* v_ref_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v_toCold_4084_ = lean_ctor_get(v___y_4081_, 0);
v_currRecDepth_4085_ = lean_ctor_get(v___y_4081_, 1);
v_ref_4086_ = lean_ctor_get(v___y_4081_, 2);
v_diag_4087_ = lean_ctor_get_uint8(v___y_4081_, sizeof(void*)*3);
v_suppressElabErrors_4088_ = lean_ctor_get_uint8(v___y_4081_, sizeof(void*)*3 + 1);
v_ref_4089_ = l_Lean_replaceRef(v_ref_4077_, v_ref_4086_);
lean_inc(v_currRecDepth_4085_);
lean_inc_ref(v_toCold_4084_);
v___x_4090_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4090_, 0, v_toCold_4084_);
lean_ctor_set(v___x_4090_, 1, v_currRecDepth_4085_);
lean_ctor_set(v___x_4090_, 2, v_ref_4089_);
lean_ctor_set_uint8(v___x_4090_, sizeof(void*)*3, v_diag_4087_);
lean_ctor_set_uint8(v___x_4090_, sizeof(void*)*3 + 1, v_suppressElabErrors_4088_);
v___x_4091_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_4078_, v___y_4079_, v___y_4080_, v___x_4090_, v___y_4082_);
lean_dec_ref_known(v___x_4090_, 3);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object* v_ref_4092_, lean_object* v_msg_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v_res_4099_; 
v_res_4099_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4092_, v_msg_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
lean_dec(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v_ref_4092_);
return v_res_4099_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4100_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; 
v___x_4102_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_4103_ = lean_unsigned_to_nat(0u);
v___x_4104_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
lean_ctor_set(v___x_4104_, 2, v___x_4103_);
lean_ctor_set(v___x_4104_, 3, v___x_4103_);
lean_ctor_set(v___x_4104_, 4, v___x_4102_);
lean_ctor_set(v___x_4104_, 5, v___x_4102_);
lean_ctor_set(v___x_4104_, 6, v___x_4102_);
lean_ctor_set(v___x_4104_, 7, v___x_4102_);
lean_ctor_set(v___x_4104_, 8, v___x_4102_);
lean_ctor_set(v___x_4104_, 9, v___x_4102_);
lean_ctor_set(v___x_4104_, 10, v___x_4102_);
return v___x_4104_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4105_ = lean_unsigned_to_nat(32u);
v___x_4106_ = lean_mk_empty_array_with_capacity(v___x_4105_);
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
return v___x_4107_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
size_t v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4108_ = ((size_t)5ULL);
v___x_4109_ = lean_unsigned_to_nat(0u);
v___x_4110_ = lean_unsigned_to_nat(32u);
v___x_4111_ = lean_mk_empty_array_with_capacity(v___x_4110_);
v___x_4112_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_4113_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
lean_ctor_set(v___x_4113_, 1, v___x_4111_);
lean_ctor_set(v___x_4113_, 2, v___x_4109_);
lean_ctor_set(v___x_4113_, 3, v___x_4109_);
lean_ctor_set_usize(v___x_4113_, 4, v___x_4108_);
return v___x_4113_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4114_ = lean_box(1);
v___x_4115_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_4116_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_4117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
lean_ctor_set(v___x_4117_, 1, v___x_4115_);
lean_ctor_set(v___x_4117_, 2, v___x_4114_);
return v___x_4117_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4119_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5));
v___x_4120_ = l_Lean_stringToMessageData(v___x_4119_);
return v___x_4120_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4122_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7));
v___x_4123_ = l_Lean_stringToMessageData(v___x_4122_);
return v___x_4123_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10(void){
_start:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4125_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9));
v___x_4126_ = l_Lean_stringToMessageData(v___x_4125_);
return v___x_4126_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12(void){
_start:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4128_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11));
v___x_4129_ = l_Lean_stringToMessageData(v___x_4128_);
return v___x_4129_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14(void){
_start:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4131_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13));
v___x_4132_ = l_Lean_stringToMessageData(v___x_4131_);
return v___x_4132_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16(void){
_start:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4134_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15));
v___x_4135_ = l_Lean_stringToMessageData(v___x_4134_);
return v___x_4135_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18(void){
_start:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4137_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17));
v___x_4138_ = l_Lean_stringToMessageData(v___x_4137_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_4139_, lean_object* v_declHint_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v_env_4145_; uint8_t v___x_4146_; 
v___x_4143_ = l_Lean_instInhabitedName;
v___x_4144_ = lean_st_ref_get(v___y_4141_);
v_env_4145_ = lean_ctor_get(v___x_4144_, 0);
lean_inc_ref(v_env_4145_);
lean_dec(v___x_4144_);
v___x_4146_ = l_Lean_Name_isAnonymous(v_declHint_4140_);
if (v___x_4146_ == 0)
{
uint8_t v_isExporting_4147_; 
v_isExporting_4147_ = lean_ctor_get_uint8(v_env_4145_, sizeof(void*)*8);
if (v_isExporting_4147_ == 0)
{
lean_object* v___x_4148_; 
lean_dec_ref(v_env_4145_);
lean_dec(v_declHint_4140_);
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v_msg_4139_);
return v___x_4148_;
}
else
{
lean_object* v___x_4149_; uint8_t v___x_4150_; 
lean_inc_ref(v_env_4145_);
v___x_4149_ = l_Lean_Environment_setExporting(v_env_4145_, v___x_4146_);
lean_inc(v_declHint_4140_);
lean_inc_ref(v___x_4149_);
v___x_4150_ = l_Lean_Environment_contains(v___x_4149_, v_declHint_4140_, v_isExporting_4147_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; 
lean_dec_ref(v___x_4149_);
lean_dec_ref(v_env_4145_);
lean_dec(v_declHint_4140_);
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v_msg_4139_);
return v___x_4151_;
}
else
{
lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v_c_4157_; lean_object* v___x_4158_; 
v___x_4152_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4153_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
v___x_4154_ = l_Lean_Options_empty;
v___x_4155_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4149_);
lean_ctor_set(v___x_4155_, 1, v___x_4152_);
lean_ctor_set(v___x_4155_, 2, v___x_4153_);
lean_ctor_set(v___x_4155_, 3, v___x_4154_);
lean_inc(v_declHint_4140_);
v___x_4156_ = l_Lean_MessageData_ofConstName(v_declHint_4140_, v___x_4146_);
v_c_4157_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4157_, 0, v___x_4155_);
lean_ctor_set(v_c_4157_, 1, v___x_4156_);
v___x_4158_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4145_, v_declHint_4140_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; 
lean_dec_ref(v_env_4145_);
lean_dec(v_declHint_4140_);
v___x_4159_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_4160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4159_);
lean_ctor_set(v___x_4160_, 1, v_c_4157_);
v___x_4161_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8);
v___x_4162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4160_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
v___x_4163_ = l_Lean_MessageData_note(v___x_4162_);
v___x_4164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4164_, 0, v_msg_4139_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
v___x_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4164_);
return v___x_4165_;
}
else
{
lean_object* v_val_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4200_; 
v_val_4166_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4168_ = v___x_4158_;
v_isShared_4169_ = v_isSharedCheck_4200_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_val_4166_);
lean_dec(v___x_4158_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4200_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v_mod_4172_; uint8_t v___x_4173_; 
v___x_4170_ = l_Lean_Environment_header(v_env_4145_);
lean_dec_ref(v_env_4145_);
v___x_4171_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4170_);
lean_dec_ref(v___x_4170_);
v_mod_4172_ = lean_array_get(v___x_4143_, v___x_4171_, v_val_4166_);
lean_dec(v_val_4166_);
lean_dec_ref(v___x_4171_);
v___x_4173_ = l_Lean_isPrivateName(v_declHint_4140_);
lean_dec(v_declHint_4140_);
if (v___x_4173_ == 0)
{
lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4185_; 
v___x_4174_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10);
v___x_4175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4174_);
lean_ctor_set(v___x_4175_, 1, v_c_4157_);
v___x_4176_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12);
v___x_4177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4175_);
lean_ctor_set(v___x_4177_, 1, v___x_4176_);
v___x_4178_ = l_Lean_MessageData_ofName(v_mod_4172_);
v___x_4179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4177_);
lean_ctor_set(v___x_4179_, 1, v___x_4178_);
v___x_4180_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14);
v___x_4181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4179_);
lean_ctor_set(v___x_4181_, 1, v___x_4180_);
v___x_4182_ = l_Lean_MessageData_note(v___x_4181_);
v___x_4183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4183_, 0, v_msg_4139_);
lean_ctor_set(v___x_4183_, 1, v___x_4182_);
if (v_isShared_4169_ == 0)
{
lean_ctor_set_tag(v___x_4168_, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4183_);
v___x_4185_ = v___x_4168_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4183_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
else
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4198_; 
v___x_4187_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_4188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4187_);
lean_ctor_set(v___x_4188_, 1, v_c_4157_);
v___x_4189_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16);
v___x_4190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4188_);
lean_ctor_set(v___x_4190_, 1, v___x_4189_);
v___x_4191_ = l_Lean_MessageData_ofName(v_mod_4172_);
v___x_4192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4190_);
lean_ctor_set(v___x_4192_, 1, v___x_4191_);
v___x_4193_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18);
v___x_4194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4192_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = l_Lean_MessageData_note(v___x_4194_);
v___x_4196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4196_, 0, v_msg_4139_);
lean_ctor_set(v___x_4196_, 1, v___x_4195_);
if (v_isShared_4169_ == 0)
{
lean_ctor_set_tag(v___x_4168_, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4196_);
v___x_4198_ = v___x_4168_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v___x_4196_);
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
}
}
else
{
lean_object* v___x_4201_; 
lean_dec_ref(v_env_4145_);
lean_dec(v_declHint_4140_);
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v_msg_4139_);
return v___x_4201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_4202_, lean_object* v_declHint_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4202_, v_declHint_4203_, v___y_4204_);
lean_dec(v___y_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_4207_, lean_object* v_declHint_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v___x_4214_; lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4224_; 
v___x_4214_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4207_, v_declHint_4208_, v___y_4212_);
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4217_ = v___x_4214_;
v_isShared_4218_ = v_isSharedCheck_4224_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4214_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4224_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4222_; 
v___x_4219_ = l_Lean_unknownIdentifierMessageTag;
v___x_4220_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4219_);
lean_ctor_set(v___x_4220_, 1, v_a_4215_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 0, v___x_4220_);
v___x_4222_ = v___x_4217_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v___x_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_4225_, lean_object* v_declHint_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(v_msg_4225_, v_declHint_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_ref_4233_, lean_object* v_msg_4234_, lean_object* v_declHint_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
lean_object* v___x_4241_; lean_object* v_a_4242_; lean_object* v___x_4243_; 
v___x_4241_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(v_msg_4234_, v_declHint_4235_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_);
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref(v___x_4241_);
v___x_4243_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4233_, v_a_4242_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_ref_4244_, lean_object* v_msg_4245_, lean_object* v_declHint_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4244_, v_msg_4245_, v_declHint_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
lean_dec(v_ref_4244_);
return v_res_4252_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4254_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0));
v___x_4255_ = l_Lean_stringToMessageData(v___x_4254_);
return v___x_4255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(lean_object* v_ref_4256_, lean_object* v_constName_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v___x_4263_; uint8_t v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4263_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1);
v___x_4264_ = 0;
lean_inc(v_constName_4257_);
v___x_4265_ = l_Lean_MessageData_ofConstName(v_constName_4257_, v___x_4264_);
v___x_4266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4263_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
v___x_4267_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4266_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4256_, v___x_4268_, v_constName_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_);
return v___x_4269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___boxed(lean_object* v_ref_4270_, lean_object* v_constName_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4270_, v_constName_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v_ref_4270_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(lean_object* v_constName_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_){
_start:
{
lean_object* v_ref_4284_; lean_object* v___x_4285_; 
v_ref_4284_ = lean_ctor_get(v___y_4281_, 2);
v___x_4285_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4284_, v_constName_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_);
return v___x_4285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg___boxed(lean_object* v_constName_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(lean_object* v_constName_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v___x_4299_; lean_object* v_env_4300_; uint8_t v___x_4301_; lean_object* v___x_4302_; 
v___x_4299_ = lean_st_ref_get(v___y_4297_);
v_env_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc_ref(v_env_4300_);
lean_dec(v___x_4299_);
v___x_4301_ = 0;
lean_inc(v_constName_4293_);
v___x_4302_ = l_Lean_Environment_find_x3f(v_env_4300_, v_constName_4293_, v___x_4301_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_object* v___x_4303_; 
v___x_4303_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_);
return v___x_4303_;
}
else
{
lean_object* v_val_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec(v_constName_4293_);
v_val_4304_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4302_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_val_4304_);
lean_dec(v___x_4302_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
lean_ctor_set_tag(v___x_4306_, 0);
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_val_4304_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object* v_constName_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_constName_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object* v_constName_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_){
_start:
{
lean_object* v___x_4325_; lean_object* v_env_4326_; uint8_t v___x_4327_; lean_object* v___x_4328_; 
v___x_4325_ = lean_st_ref_get(v___y_4323_);
v_env_4326_ = lean_ctor_get(v___x_4325_, 0);
lean_inc_ref(v_env_4326_);
lean_dec(v___x_4325_);
v___x_4327_ = 0;
lean_inc(v_constName_4319_);
v___x_4328_ = l_Lean_Environment_findConstVal_x3f(v_env_4326_, v_constName_4319_, v___x_4327_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v___x_4329_; 
v___x_4329_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
return v___x_4329_;
}
else
{
lean_object* v_val_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4337_; 
lean_dec(v_constName_4319_);
v_val_4330_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4332_ = v___x_4328_;
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_val_4330_);
lean_dec(v___x_4328_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
lean_ctor_set_tag(v___x_4332_, 0);
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_val_4330_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
return v___x_4335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object* v_constName_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_){
_start:
{
lean_object* v_res_4344_; 
v_res_4344_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_);
lean_dec(v___y_4342_);
lean_dec_ref(v___y_4341_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object* v_a_4345_, lean_object* v_a_4346_){
_start:
{
if (lean_obj_tag(v_a_4345_) == 0)
{
lean_object* v___x_4347_; 
v___x_4347_ = l_List_reverse___redArg(v_a_4346_);
return v___x_4347_;
}
else
{
lean_object* v_head_4348_; lean_object* v_tail_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4358_; 
v_head_4348_ = lean_ctor_get(v_a_4345_, 0);
v_tail_4349_ = lean_ctor_get(v_a_4345_, 1);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_a_4345_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4351_ = v_a_4345_;
v_isShared_4352_ = v_isSharedCheck_4358_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_tail_4349_);
lean_inc(v_head_4348_);
lean_dec(v_a_4345_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4358_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4353_; lean_object* v___x_4355_; 
v___x_4353_ = l_Lean_mkLevelParam(v_head_4348_);
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 1, v_a_4346_);
lean_ctor_set(v___x_4351_, 0, v___x_4353_);
v___x_4355_ = v___x_4351_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v___x_4353_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_a_4346_);
v___x_4355_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
v_a_4345_ = v_tail_4349_;
v_a_4346_ = v___x_4355_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object* v_constName_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___x_4365_; 
lean_inc(v_constName_4359_);
v___x_4365_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4377_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4368_ = v___x_4365_;
v_isShared_4369_ = v_isSharedCheck_4377_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4365_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4377_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v_levelParams_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4375_; 
v_levelParams_4370_ = lean_ctor_get(v_a_4366_, 1);
lean_inc(v_levelParams_4370_);
lean_dec(v_a_4366_);
v___x_4371_ = lean_box(0);
v___x_4372_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(v_levelParams_4370_, v___x_4371_);
v___x_4373_ = l_Lean_mkConst(v_constName_4359_, v___x_4372_);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 0, v___x_4373_);
v___x_4375_ = v___x_4368_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v___x_4373_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_dec(v_constName_4359_);
v_a_4378_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4365_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4365_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object* v_constName_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_){
_start:
{
lean_object* v_res_4392_; 
v_res_4392_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_constName_4386_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
return v_res_4392_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__1(void){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; 
v___x_4394_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__0));
v___x_4395_ = l_Lean_stringToMessageData(v___x_4394_);
return v___x_4395_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__3(void){
_start:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4397_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__2));
v___x_4398_ = l_Lean_stringToMessageData(v___x_4397_);
return v___x_4398_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__5(void){
_start:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__4));
v___x_4401_ = l_Lean_stringToMessageData(v___x_4400_);
return v___x_4401_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__7(void){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4403_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__6));
v___x_4404_ = l_Lean_stringToMessageData(v___x_4403_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object* v_declName_4405_, uint8_t v_attrKind_4406_, lean_object* v_prio_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_){
_start:
{
lean_object* v___x_4413_; 
lean_inc(v_declName_4405_);
v___x_4413_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_declName_4405_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_);
if (lean_obj_tag(v___x_4413_) == 0)
{
lean_object* v_a_4414_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4444_; lean_object* v___y_4445_; lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v___x_4493_; 
v_a_4414_ = lean_ctor_get(v___x_4413_, 0);
lean_inc(v_a_4414_);
lean_dec_ref_known(v___x_4413_, 1);
lean_inc(v_declName_4405_);
v___x_4493_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_declName_4405_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v_a_4494_; lean_object* v___x_4495_; uint8_t v___x_4496_; 
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4494_);
lean_dec_ref_known(v___x_4493_, 1);
v___x_4495_ = l_Lean_ConstantInfo_type(v_a_4494_);
v___x_4496_ = l_Lean_Expr_hasSorry(v___x_4495_);
lean_dec_ref(v___x_4495_);
if (v___x_4496_ == 0)
{
lean_object* v___x_4497_; 
lean_inc(v_a_4414_);
v___x_4497_ = l_Lean_Meta_checkNonClassInstance(v_a_4414_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v___x_4498_; 
lean_dec_ref_known(v___x_4497_, 1);
v___x_4498_ = l_Lean_Meta_checkImpossibleInstance(v_a_4494_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_);
lean_dec(v_a_4494_);
if (lean_obj_tag(v___x_4498_) == 0)
{
lean_dec_ref_known(v___x_4498_, 1);
v___y_4444_ = v_a_4408_;
v___y_4445_ = v_a_4409_;
v___y_4446_ = v_a_4410_;
v___y_4447_ = v_a_4411_;
goto v___jp_4443_;
}
else
{
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
return v___x_4498_;
}
}
else
{
lean_dec(v_a_4494_);
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
return v___x_4497_;
}
}
else
{
lean_dec(v_a_4494_);
v___y_4444_ = v_a_4408_;
v___y_4445_ = v_a_4409_;
v___y_4446_ = v_a_4410_;
v___y_4447_ = v_a_4411_;
goto v___jp_4443_;
}
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4506_; 
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
v_a_4499_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4501_ = v___x_4493_;
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_dec(v___x_4493_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
lean_object* v___x_4504_; 
if (v_isShared_4502_ == 0)
{
v___x_4504_ = v___x_4501_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4499_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
v___jp_4415_:
{
lean_object* v___x_4421_; lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4442_; 
lean_inc(v_declName_4405_);
v___x_4421_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_4405_, v___y_4420_);
v_a_4422_ = lean_ctor_get(v___x_4421_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4421_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4424_ = v___x_4421_;
v_isShared_4425_ = v_isSharedCheck_4442_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4421_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4442_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4426_; 
lean_inc(v_a_4414_);
v___x_4426_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_a_4414_, v_a_4422_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; lean_object* v___x_4428_; lean_object* v___x_4430_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref_known(v___x_4426_, 1);
v___x_4428_ = l_Lean_Meta_instanceExtension;
if (v_isShared_4425_ == 0)
{
lean_ctor_set_tag(v___x_4424_, 1);
lean_ctor_set(v___x_4424_, 0, v_declName_4405_);
v___x_4430_ = v___x_4424_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_declName_4405_);
v___x_4430_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4431_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4431_, 0, v___y_4416_);
lean_ctor_set(v___x_4431_, 1, v_a_4414_);
lean_ctor_set(v___x_4431_, 2, v_prio_4407_);
lean_ctor_set(v___x_4431_, 3, v___x_4430_);
lean_ctor_set(v___x_4431_, 4, v_a_4427_);
lean_ctor_set_uint8(v___x_4431_, sizeof(void*)*5, v_attrKind_4406_);
v___x_4432_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v___x_4428_, v___x_4431_, v_attrKind_4406_, v___y_4418_, v___y_4419_, v___y_4420_);
return v___x_4432_;
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4441_; 
lean_del_object(v___x_4424_);
lean_dec_ref(v___y_4416_);
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
v_a_4434_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4436_ = v___x_4426_;
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4426_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v___x_4439_; 
if (v_isShared_4437_ == 0)
{
v___x_4439_ = v___x_4436_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v_a_4434_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
return v___x_4439_;
}
}
}
}
}
v___jp_4443_:
{
lean_object* v___x_4448_; 
lean_inc(v_a_4414_);
v___x_4448_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_a_4414_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
if (lean_obj_tag(v___x_4448_) == 0)
{
lean_object* v_a_4449_; lean_object* v___x_4450_; lean_object* v_a_4451_; uint8_t v___x_4452_; uint8_t v___x_4453_; uint8_t v___x_4454_; 
v_a_4449_ = lean_ctor_get(v___x_4448_, 0);
lean_inc(v_a_4449_);
lean_dec_ref_known(v___x_4448_, 1);
lean_inc(v_declName_4405_);
v___x_4450_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4405_, v___y_4447_);
v_a_4451_ = lean_ctor_get(v___x_4450_, 0);
lean_inc(v_a_4451_);
lean_dec_ref(v___x_4450_);
v___x_4452_ = 1;
v___x_4453_ = lean_unbox(v_a_4451_);
lean_dec(v_a_4451_);
v___x_4454_ = l_Lean_instBEqReducibilityStatus_beq(v___x_4453_, v___x_4452_);
if (v___x_4454_ == 0)
{
v___y_4416_ = v_a_4449_;
v___y_4417_ = v___y_4444_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4446_;
v___y_4420_ = v___y_4447_;
goto v___jp_4415_;
}
else
{
lean_object* v___x_4455_; 
lean_inc(v_declName_4405_);
v___x_4455_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_declName_4405_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_object* v_a_4456_; uint8_t v___x_4457_; 
v_a_4456_ = lean_ctor_get(v___x_4455_, 0);
lean_inc(v_a_4456_);
lean_dec_ref_known(v___x_4455_, 1);
v___x_4457_ = l_Lean_ConstantInfo_isDefinition(v_a_4456_);
lean_dec(v_a_4456_);
if (v___x_4457_ == 0)
{
lean_object* v___x_4458_; lean_object* v_env_4459_; uint8_t v___x_4460_; 
v___x_4458_ = lean_st_ref_get(v___y_4447_);
v_env_4459_ = lean_ctor_get(v___x_4458_, 0);
lean_inc_ref(v_env_4459_);
lean_dec(v___x_4458_);
lean_inc(v_declName_4405_);
v___x_4460_ = l_Lean_wasOriginallyDefn(v_env_4459_, v_declName_4405_);
if (v___x_4460_ == 0)
{
v___y_4416_ = v_a_4449_;
v___y_4417_ = v___y_4444_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4446_;
v___y_4420_ = v___y_4447_;
goto v___jp_4415_;
}
else
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4461_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__1, &l_Lean_Meta_addInstance___closed__1_once, _init_l_Lean_Meta_addInstance___closed__1);
lean_inc(v_declName_4405_);
v___x_4462_ = l_Lean_MessageData_ofName(v_declName_4405_);
v___x_4463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4461_);
lean_ctor_set(v___x_4463_, 1, v___x_4462_);
v___x_4464_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__3, &l_Lean_Meta_addInstance___closed__3_once, _init_l_Lean_Meta_addInstance___closed__3);
v___x_4465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4465_, 0, v___x_4463_);
lean_ctor_set(v___x_4465_, 1, v___x_4464_);
v___x_4466_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(v___x_4465_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_dec_ref_known(v___x_4466_, 1);
v___y_4416_ = v_a_4449_;
v___y_4417_ = v___y_4444_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4446_;
v___y_4420_ = v___y_4447_;
goto v___jp_4415_;
}
else
{
lean_dec(v_a_4449_);
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
return v___x_4466_;
}
}
}
else
{
lean_object* v_toCold_4467_; lean_object* v_options_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v_toCold_4467_ = lean_ctor_get(v___y_4446_, 0);
v_options_4468_ = lean_ctor_get(v_toCold_4467_, 2);
v___x_4469_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility));
v___x_4470_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_4468_, v___x_4469_);
if (v___x_4470_ == 0)
{
v___y_4416_ = v_a_4449_;
v___y_4417_ = v___y_4444_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4446_;
v___y_4420_ = v___y_4447_;
goto v___jp_4415_;
}
else
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; 
v___x_4471_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__5, &l_Lean_Meta_addInstance___closed__5_once, _init_l_Lean_Meta_addInstance___closed__5);
lean_inc(v_declName_4405_);
v___x_4472_ = l_Lean_MessageData_ofName(v_declName_4405_);
v___x_4473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4471_);
lean_ctor_set(v___x_4473_, 1, v___x_4472_);
v___x_4474_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__7, &l_Lean_Meta_addInstance___closed__7_once, _init_l_Lean_Meta_addInstance___closed__7);
v___x_4475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4475_, 0, v___x_4473_);
lean_ctor_set(v___x_4475_, 1, v___x_4474_);
v___x_4476_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__2(v___x_4475_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
if (lean_obj_tag(v___x_4476_) == 0)
{
lean_dec_ref_known(v___x_4476_, 1);
v___y_4416_ = v_a_4449_;
v___y_4417_ = v___y_4444_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4446_;
v___y_4420_ = v___y_4447_;
goto v___jp_4415_;
}
else
{
lean_dec(v_a_4449_);
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
return v___x_4476_;
}
}
}
}
else
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4484_; 
lean_dec(v_a_4449_);
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
v_a_4477_ = lean_ctor_get(v___x_4455_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4479_ = v___x_4455_;
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4455_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
}
}
}
else
{
lean_object* v_a_4485_; lean_object* v___x_4487_; uint8_t v_isShared_4488_; uint8_t v_isSharedCheck_4492_; 
lean_dec(v_a_4414_);
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
v_a_4485_ = lean_ctor_get(v___x_4448_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4448_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4487_ = v___x_4448_;
v_isShared_4488_ = v_isSharedCheck_4492_;
goto v_resetjp_4486_;
}
else
{
lean_inc(v_a_4485_);
lean_dec(v___x_4448_);
v___x_4487_ = lean_box(0);
v_isShared_4488_ = v_isSharedCheck_4492_;
goto v_resetjp_4486_;
}
v_resetjp_4486_:
{
lean_object* v___x_4490_; 
if (v_isShared_4488_ == 0)
{
v___x_4490_ = v___x_4487_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v_a_4485_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
}
}
else
{
lean_object* v_a_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4514_; 
lean_dec(v_prio_4407_);
lean_dec(v_declName_4405_);
v_a_4507_ = lean_ctor_get(v___x_4413_, 0);
v_isSharedCheck_4514_ = !lean_is_exclusive(v___x_4413_);
if (v_isSharedCheck_4514_ == 0)
{
v___x_4509_ = v___x_4413_;
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_a_4507_);
lean_dec(v___x_4413_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4512_; 
if (v_isShared_4510_ == 0)
{
v___x_4512_ = v___x_4509_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v_a_4507_);
v___x_4512_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
return v___x_4512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object* v_declName_4515_, lean_object* v_attrKind_4516_, lean_object* v_prio_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_){
_start:
{
uint8_t v_attrKind_boxed_4523_; lean_object* v_res_4524_; 
v_attrKind_boxed_4523_ = lean_unbox(v_attrKind_4516_);
v_res_4524_ = l_Lean_Meta_addInstance(v_declName_4515_, v_attrKind_boxed_4523_, v_prio_4517_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
lean_dec(v_a_4521_);
lean_dec_ref(v_a_4520_);
lean_dec(v_a_4519_);
lean_dec_ref(v_a_4518_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(lean_object* v_00_u03b1_4525_, lean_object* v_constName_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
lean_object* v___x_4532_; 
v___x_4532_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___boxed(lean_object* v_00_u03b1_4533_, lean_object* v_constName_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_){
_start:
{
lean_object* v_res_4540_; 
v_res_4540_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(v_00_u03b1_4533_, v_constName_4534_, v___y_4535_, v___y_4536_, v___y_4537_, v___y_4538_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec(v___y_4536_);
lean_dec_ref(v___y_4535_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(lean_object* v_00_u03b1_4541_, lean_object* v_ref_4542_, lean_object* v_constName_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
lean_object* v___x_4549_; 
v___x_4549_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4542_, v_constName_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___boxed(lean_object* v_00_u03b1_4550_, lean_object* v_ref_4551_, lean_object* v_constName_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(v_00_u03b1_4550_, v_ref_4551_, v_constName_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
lean_dec(v_ref_4551_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(lean_object* v_00_u03b1_4559_, lean_object* v_ref_4560_, lean_object* v_msg_4561_, lean_object* v_declHint_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v___x_4568_; 
v___x_4568_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4560_, v_msg_4561_, v_declHint_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_);
return v___x_4568_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03b1_4569_, lean_object* v_ref_4570_, lean_object* v_msg_4571_, lean_object* v_declHint_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(v_00_u03b1_4569_, v_ref_4570_, v_msg_4571_, v_declHint_4572_, v___y_4573_, v___y_4574_, v___y_4575_, v___y_4576_);
lean_dec(v___y_4576_);
lean_dec_ref(v___y_4575_);
lean_dec(v___y_4574_);
lean_dec_ref(v___y_4573_);
lean_dec(v_ref_4570_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object* v_msg_4579_, lean_object* v_declHint_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_){
_start:
{
lean_object* v___x_4586_; 
v___x_4586_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4579_, v_declHint_4580_, v___y_4584_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_4587_, lean_object* v_declHint_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
lean_object* v_res_4594_; 
v_res_4594_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(v_msg_4587_, v_declHint_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_);
lean_dec(v___y_4592_);
lean_dec_ref(v___y_4591_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(lean_object* v_00_u03b1_4595_, lean_object* v_ref_4596_, lean_object* v_msg_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_){
_start:
{
lean_object* v___x_4603_; 
v___x_4603_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4596_, v_msg_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___boxed(lean_object* v_00_u03b1_4604_, lean_object* v_ref_4605_, lean_object* v_msg_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(v_00_u03b1_4604_, v_ref_4605_, v_msg_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
lean_dec(v___y_4610_);
lean_dec_ref(v___y_4609_);
lean_dec(v___y_4608_);
lean_dec_ref(v___y_4607_);
lean_dec(v_ref_4605_);
return v_res_4612_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4613_ = lean_box(0);
v___x_4614_ = l_unsafeCast___redArg(v___x_4613_);
return v___x_4614_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object* v_declName_4615_, uint8_t v_s_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
lean_object* v___x_4620_; lean_object* v_env_4621_; lean_object* v_nextMacroScope_4622_; lean_object* v_ngen_4623_; lean_object* v_auxDeclNGen_4624_; lean_object* v_traceState_4625_; lean_object* v_messages_4626_; lean_object* v_infoState_4627_; lean_object* v_snapshotTasks_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4657_; 
v___x_4620_ = lean_st_ref_take(v___y_4618_);
v_env_4621_ = lean_ctor_get(v___x_4620_, 0);
v_nextMacroScope_4622_ = lean_ctor_get(v___x_4620_, 1);
v_ngen_4623_ = lean_ctor_get(v___x_4620_, 2);
v_auxDeclNGen_4624_ = lean_ctor_get(v___x_4620_, 3);
v_traceState_4625_ = lean_ctor_get(v___x_4620_, 4);
v_messages_4626_ = lean_ctor_get(v___x_4620_, 6);
v_infoState_4627_ = lean_ctor_get(v___x_4620_, 7);
v_snapshotTasks_4628_ = lean_ctor_get(v___x_4620_, 8);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4657_ == 0)
{
lean_object* v_unused_4658_; 
v_unused_4658_ = lean_ctor_get(v___x_4620_, 5);
lean_dec(v_unused_4658_);
v___x_4630_ = v___x_4620_;
v_isShared_4631_ = v_isSharedCheck_4657_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_snapshotTasks_4628_);
lean_inc(v_infoState_4627_);
lean_inc(v_messages_4626_);
lean_inc(v_traceState_4625_);
lean_inc(v_auxDeclNGen_4624_);
lean_inc(v_ngen_4623_);
lean_inc(v_nextMacroScope_4622_);
lean_inc(v_env_4621_);
lean_dec(v___x_4620_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4657_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
uint8_t v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4637_; 
v___x_4632_ = 0;
v___x_4633_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0);
v___x_4634_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_4621_, v_declName_4615_, v_s_4616_, v___x_4632_, v___x_4633_);
v___x_4635_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_4631_ == 0)
{
lean_ctor_set(v___x_4630_, 5, v___x_4635_);
lean_ctor_set(v___x_4630_, 0, v___x_4634_);
v___x_4637_ = v___x_4630_;
goto v_reusejp_4636_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v___x_4634_);
lean_ctor_set(v_reuseFailAlloc_4656_, 1, v_nextMacroScope_4622_);
lean_ctor_set(v_reuseFailAlloc_4656_, 2, v_ngen_4623_);
lean_ctor_set(v_reuseFailAlloc_4656_, 3, v_auxDeclNGen_4624_);
lean_ctor_set(v_reuseFailAlloc_4656_, 4, v_traceState_4625_);
lean_ctor_set(v_reuseFailAlloc_4656_, 5, v___x_4635_);
lean_ctor_set(v_reuseFailAlloc_4656_, 6, v_messages_4626_);
lean_ctor_set(v_reuseFailAlloc_4656_, 7, v_infoState_4627_);
lean_ctor_set(v_reuseFailAlloc_4656_, 8, v_snapshotTasks_4628_);
v___x_4637_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4636_;
}
v_reusejp_4636_:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v_mctx_4640_; lean_object* v_zetaDeltaFVarIds_4641_; lean_object* v_postponed_4642_; lean_object* v_diag_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4654_; 
v___x_4638_ = lean_st_ref_put(v___y_4618_, v___x_4637_);
v___x_4639_ = lean_st_ref_take(v___y_4617_);
v_mctx_4640_ = lean_ctor_get(v___x_4639_, 0);
v_zetaDeltaFVarIds_4641_ = lean_ctor_get(v___x_4639_, 2);
v_postponed_4642_ = lean_ctor_get(v___x_4639_, 3);
v_diag_4643_ = lean_ctor_get(v___x_4639_, 4);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4654_ == 0)
{
lean_object* v_unused_4655_; 
v_unused_4655_ = lean_ctor_get(v___x_4639_, 1);
lean_dec(v_unused_4655_);
v___x_4645_ = v___x_4639_;
v_isShared_4646_ = v_isSharedCheck_4654_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_diag_4643_);
lean_inc(v_postponed_4642_);
lean_inc(v_zetaDeltaFVarIds_4641_);
lean_inc(v_mctx_4640_);
lean_dec(v___x_4639_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4654_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4650_; 
v___x_4647_ = lean_box(0);
v___x_4648_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 1, v___x_4648_);
v___x_4650_ = v___x_4645_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_mctx_4640_);
lean_ctor_set(v_reuseFailAlloc_4653_, 1, v___x_4648_);
lean_ctor_set(v_reuseFailAlloc_4653_, 2, v_zetaDeltaFVarIds_4641_);
lean_ctor_set(v_reuseFailAlloc_4653_, 3, v_postponed_4642_);
lean_ctor_set(v_reuseFailAlloc_4653_, 4, v_diag_4643_);
v___x_4650_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4651_ = lean_st_ref_put(v___y_4617_, v___x_4650_);
v___x_4652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4652_, 0, v___x_4647_);
return v___x_4652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object* v_declName_4659_, lean_object* v_s_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
uint8_t v_s_boxed_4664_; lean_object* v_res_4665_; 
v_s_boxed_4664_ = lean_unbox(v_s_4660_);
v_res_4665_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4659_, v_s_boxed_4664_, v___y_4661_, v___y_4662_);
lean_dec(v___y_4662_);
lean_dec(v___y_4661_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object* v_declName_4666_, uint8_t v_s_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_){
_start:
{
lean_object* v___x_4673_; 
v___x_4673_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4666_, v_s_4667_, v___y_4669_, v___y_4671_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object* v_declName_4674_, lean_object* v_s_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_){
_start:
{
uint8_t v_s_boxed_4681_; lean_object* v_res_4682_; 
v_s_boxed_4681_ = lean_unbox(v_s_4675_);
v_res_4682_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(v_declName_4674_, v_s_boxed_4681_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_);
lean_dec(v___y_4679_);
lean_dec_ref(v___y_4678_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object* v_declName_4683_, uint8_t v_attrKind_4684_, lean_object* v_prio_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_){
_start:
{
uint8_t v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4691_ = 4;
lean_inc(v_declName_4683_);
v___x_4692_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4683_, v___x_4691_, v_a_4687_, v_a_4689_);
lean_dec_ref(v___x_4692_);
v___x_4693_ = l_Lean_Meta_addInstance(v_declName_4683_, v_attrKind_4684_, v_prio_4685_, v_a_4686_, v_a_4687_, v_a_4688_, v_a_4689_);
return v___x_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object* v_declName_4694_, lean_object* v_attrKind_4695_, lean_object* v_prio_4696_, lean_object* v_a_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_){
_start:
{
uint8_t v_attrKind_boxed_4702_; lean_object* v_res_4703_; 
v_attrKind_boxed_4702_ = lean_unbox(v_attrKind_4695_);
v_res_4703_ = l_Lean_Meta_registerInstance(v_declName_4694_, v_attrKind_boxed_4702_, v_prio_4696_, v_a_4697_, v_a_4698_, v_a_4699_, v_a_4700_);
lean_dec(v_a_4700_);
lean_dec_ref(v_a_4699_);
lean_dec(v_a_4698_);
lean_dec_ref(v_a_4697_);
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v_a_4704_, lean_object* v_x_4705_){
_start:
{
lean_inc_ref(v_a_4704_);
return v_a_4704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_4706_, lean_object* v_x_4707_){
_start:
{
lean_object* v_res_4708_; 
v_res_4708_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v_a_4706_, v_x_4707_);
lean_dec_ref(v_x_4707_);
lean_dec_ref(v_a_4706_);
return v_res_4708_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_msgData_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_){
_start:
{
lean_object* v___x_4713_; lean_object* v_toCold_4714_; lean_object* v_env_4715_; lean_object* v_options_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4713_ = lean_st_ref_get(v___y_4711_);
v_toCold_4714_ = lean_ctor_get(v___y_4710_, 0);
v_env_4715_ = lean_ctor_get(v___x_4713_, 0);
lean_inc_ref(v_env_4715_);
lean_dec(v___x_4713_);
v_options_4716_ = lean_ctor_get(v_toCold_4714_, 2);
v___x_4717_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4718_ = lean_unsigned_to_nat(32u);
v___x_4719_ = lean_mk_empty_array_with_capacity(v___x_4718_);
lean_dec_ref(v___x_4719_);
v___x_4720_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
lean_inc_ref(v_options_4716_);
v___x_4721_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4721_, 0, v_env_4715_);
lean_ctor_set(v___x_4721_, 1, v___x_4717_);
lean_ctor_set(v___x_4721_, 2, v___x_4720_);
lean_ctor_set(v___x_4721_, 3, v_options_4716_);
v___x_4722_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4721_);
lean_ctor_set(v___x_4722_, 1, v_msgData_4709_);
v___x_4723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4722_);
return v___x_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_){
_start:
{
lean_object* v_res_4728_; 
v_res_4728_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msgData_4724_, v___y_4725_, v___y_4726_);
lean_dec(v___y_4726_);
lean_dec_ref(v___y_4725_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_msg_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_){
_start:
{
lean_object* v_ref_4733_; lean_object* v___x_4734_; lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4743_; 
v_ref_4733_ = lean_ctor_get(v___y_4730_, 2);
v___x_4734_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msg_4729_, v___y_4730_, v___y_4731_);
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4737_ = v___x_4734_;
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4734_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4739_; lean_object* v___x_4741_; 
lean_inc(v_ref_4733_);
v___x_4739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4739_, 0, v_ref_4733_);
lean_ctor_set(v___x_4739_, 1, v_a_4735_);
if (v_isShared_4738_ == 0)
{
lean_ctor_set_tag(v___x_4737_, 1);
lean_ctor_set(v___x_4737_, 0, v___x_4739_);
v___x_4741_ = v___x_4737_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v___x_4739_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
return v___x_4741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_msg_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_4744_, v___y_4745_, v___y_4746_);
lean_dec(v___y_4746_);
lean_dec_ref(v___y_4745_);
return v_res_4748_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_4749_, lean_object* v_i_4750_, lean_object* v_k_4751_){
_start:
{
lean_object* v___x_4752_; uint8_t v___x_4753_; 
v___x_4752_ = lean_array_get_size(v_keys_4749_);
v___x_4753_ = lean_nat_dec_lt(v_i_4750_, v___x_4752_);
if (v___x_4753_ == 0)
{
lean_dec(v_i_4750_);
return v___x_4753_;
}
else
{
lean_object* v_k_x27_4754_; uint8_t v___x_4755_; 
v_k_x27_4754_ = lean_array_fget_borrowed(v_keys_4749_, v_i_4750_);
v___x_4755_ = lean_name_eq(v_k_4751_, v_k_x27_4754_);
if (v___x_4755_ == 0)
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = lean_unsigned_to_nat(1u);
v___x_4757_ = lean_nat_add(v_i_4750_, v___x_4756_);
lean_dec(v_i_4750_);
v_i_4750_ = v___x_4757_;
goto _start;
}
else
{
lean_dec(v_i_4750_);
return v___x_4753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_4759_, lean_object* v_i_4760_, lean_object* v_k_4761_){
_start:
{
uint8_t v_res_4762_; lean_object* v_r_4763_; 
v_res_4762_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_4759_, v_i_4760_, v_k_4761_);
lean_dec(v_k_4761_);
lean_dec_ref(v_keys_4759_);
v_r_4763_ = lean_box(v_res_4762_);
return v_r_4763_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_4764_, size_t v_x_4765_, lean_object* v_x_4766_){
_start:
{
if (lean_obj_tag(v_x_4764_) == 0)
{
lean_object* v_es_4767_; lean_object* v___x_4768_; size_t v___x_4769_; size_t v___x_4770_; lean_object* v_j_4771_; lean_object* v___x_4772_; 
v_es_4767_ = lean_ctor_get(v_x_4764_, 0);
v___x_4768_ = lean_box(2);
v___x_4769_ = ((size_t)31ULL);
v___x_4770_ = lean_usize_land(v_x_4765_, v___x_4769_);
v_j_4771_ = lean_usize_to_nat(v___x_4770_);
v___x_4772_ = lean_array_get_borrowed(v___x_4768_, v_es_4767_, v_j_4771_);
lean_dec(v_j_4771_);
switch(lean_obj_tag(v___x_4772_))
{
case 0:
{
lean_object* v_key_4773_; uint8_t v___x_4774_; 
v_key_4773_ = lean_ctor_get(v___x_4772_, 0);
v___x_4774_ = lean_name_eq(v_x_4766_, v_key_4773_);
return v___x_4774_;
}
case 1:
{
lean_object* v_node_4775_; size_t v___x_4776_; size_t v___x_4777_; 
v_node_4775_ = lean_ctor_get(v___x_4772_, 0);
v___x_4776_ = ((size_t)5ULL);
v___x_4777_ = lean_usize_shift_right(v_x_4765_, v___x_4776_);
v_x_4764_ = v_node_4775_;
v_x_4765_ = v___x_4777_;
goto _start;
}
default: 
{
uint8_t v___x_4779_; 
v___x_4779_ = 0;
return v___x_4779_;
}
}
}
else
{
lean_object* v_ks_4780_; lean_object* v___x_4781_; uint8_t v___x_4782_; 
v_ks_4780_ = lean_ctor_get(v_x_4764_, 0);
v___x_4781_ = lean_unsigned_to_nat(0u);
v___x_4782_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ks_4780_, v___x_4781_, v_x_4766_);
return v___x_4782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4783_, lean_object* v_x_4784_, lean_object* v_x_4785_){
_start:
{
size_t v_x_2396__boxed_4786_; uint8_t v_res_4787_; lean_object* v_r_4788_; 
v_x_2396__boxed_4786_ = lean_unbox_usize(v_x_4784_);
lean_dec(v_x_4784_);
v_res_4787_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_4783_, v_x_2396__boxed_4786_, v_x_4785_);
lean_dec(v_x_4785_);
lean_dec_ref(v_x_4783_);
v_r_4788_ = lean_box(v_res_4787_);
return v_r_4788_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_4789_, lean_object* v_x_4790_){
_start:
{
uint64_t v___y_4792_; lean_object* v___x_4795_; 
v___x_4795_ = l_unsafeCast___redArg(v_x_4790_);
if (lean_obj_tag(v___x_4795_) == 0)
{
uint64_t v___x_4796_; 
v___x_4796_ = 1723ULL;
v___y_4792_ = v___x_4796_;
goto v___jp_4791_;
}
else
{
uint64_t v_hash_4797_; 
v_hash_4797_ = lean_ctor_get_uint64(v___x_4795_, sizeof(void*)*2);
lean_dec(v___x_4795_);
v___y_4792_ = v_hash_4797_;
goto v___jp_4791_;
}
v___jp_4791_:
{
size_t v___x_4793_; uint8_t v___x_4794_; 
v___x_4793_ = lean_uint64_to_usize(v___y_4792_);
v___x_4794_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_4789_, v___x_4793_, v_x_4790_);
return v___x_4794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_4798_, lean_object* v_x_4799_){
_start:
{
uint8_t v_res_4800_; lean_object* v_r_4801_; 
v_res_4800_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_4798_, v_x_4799_);
lean_dec(v_x_4799_);
lean_dec_ref(v_x_4798_);
v_r_4801_ = lean_box(v_res_4800_);
return v_r_4801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object* v_d_4802_, lean_object* v_declName_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_){
_start:
{
lean_object* v_instanceNames_4810_; uint8_t v___x_4811_; 
v_instanceNames_4810_ = lean_ctor_get(v_d_4802_, 1);
v___x_4811_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_4810_, v_declName_4803_);
if (v___x_4811_ == 0)
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec_ref(v_d_4802_);
v___x_4812_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4813_ = l_Lean_MessageData_ofConstName(v_declName_4803_, v___x_4811_);
v___x_4814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4812_);
lean_ctor_set(v___x_4814_, 1, v___x_4813_);
v___x_4815_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_4816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4814_);
lean_ctor_set(v___x_4816_, 1, v___x_4815_);
v___x_4817_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_4816_, v___y_4804_, v___y_4805_);
v_a_4818_ = lean_ctor_get(v___x_4817_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4817_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4817_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4817_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
else
{
goto v___jp_4807_;
}
v___jp_4807_:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4808_ = l_Lean_Meta_Instances_eraseCore(v_d_4802_, v_declName_4803_);
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4808_);
return v___x_4809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_4826_, lean_object* v_declName_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_){
_start:
{
lean_object* v_res_4831_; 
v_res_4831_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v_d_4826_, v_declName_4827_, v___y_4828_, v___y_4829_);
lean_dec(v___y_4829_);
lean_dec_ref(v___y_4828_);
return v_res_4831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_4832_, lean_object* v_declName_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_){
_start:
{
lean_object* v___x_4837_; lean_object* v_env_4838_; lean_object* v___x_4839_; lean_object* v_ext_4840_; lean_object* v_toEnvExtension_4841_; lean_object* v_asyncMode_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4837_ = lean_st_ref_get(v___y_4835_);
v_env_4838_ = lean_ctor_get(v___x_4837_, 0);
lean_inc_ref(v_env_4838_);
lean_dec(v___x_4837_);
v___x_4839_ = l_Lean_Meta_instanceExtension;
v_ext_4840_ = lean_ctor_get(v___x_4839_, 1);
v_toEnvExtension_4841_ = lean_ctor_get(v_ext_4840_, 0);
v_asyncMode_4842_ = lean_ctor_get(v_toEnvExtension_4841_, 2);
v___x_4843_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4832_, v___x_4839_, v_env_4838_, v_asyncMode_4842_);
v___x_4844_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v___x_4843_, v_declName_4833_, v___y_4834_, v___y_4835_);
if (lean_obj_tag(v___x_4844_) == 0)
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4874_; 
v_a_4845_ = lean_ctor_get(v___x_4844_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4844_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4847_ = v___x_4844_;
v_isShared_4848_ = v_isSharedCheck_4874_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4844_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4874_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___f_4849_; lean_object* v___x_4850_; lean_object* v_env_4851_; lean_object* v_nextMacroScope_4852_; lean_object* v_ngen_4853_; lean_object* v_auxDeclNGen_4854_; lean_object* v_traceState_4855_; lean_object* v_messages_4856_; lean_object* v_infoState_4857_; lean_object* v_snapshotTasks_4858_; lean_object* v___x_4860_; uint8_t v_isShared_4861_; uint8_t v_isSharedCheck_4872_; 
v___f_4849_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_4849_, 0, v_a_4845_);
v___x_4850_ = lean_st_ref_take(v___y_4835_);
v_env_4851_ = lean_ctor_get(v___x_4850_, 0);
v_nextMacroScope_4852_ = lean_ctor_get(v___x_4850_, 1);
v_ngen_4853_ = lean_ctor_get(v___x_4850_, 2);
v_auxDeclNGen_4854_ = lean_ctor_get(v___x_4850_, 3);
v_traceState_4855_ = lean_ctor_get(v___x_4850_, 4);
v_messages_4856_ = lean_ctor_get(v___x_4850_, 6);
v_infoState_4857_ = lean_ctor_get(v___x_4850_, 7);
v_snapshotTasks_4858_ = lean_ctor_get(v___x_4850_, 8);
v_isSharedCheck_4872_ = !lean_is_exclusive(v___x_4850_);
if (v_isSharedCheck_4872_ == 0)
{
lean_object* v_unused_4873_; 
v_unused_4873_ = lean_ctor_get(v___x_4850_, 5);
lean_dec(v_unused_4873_);
v___x_4860_ = v___x_4850_;
v_isShared_4861_ = v_isSharedCheck_4872_;
goto v_resetjp_4859_;
}
else
{
lean_inc(v_snapshotTasks_4858_);
lean_inc(v_infoState_4857_);
lean_inc(v_messages_4856_);
lean_inc(v_traceState_4855_);
lean_inc(v_auxDeclNGen_4854_);
lean_inc(v_ngen_4853_);
lean_inc(v_nextMacroScope_4852_);
lean_inc(v_env_4851_);
lean_dec(v___x_4850_);
v___x_4860_ = lean_box(0);
v_isShared_4861_ = v_isSharedCheck_4872_;
goto v_resetjp_4859_;
}
v_resetjp_4859_:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4866_; 
v___x_4862_ = lean_box(0);
v___x_4863_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_4839_, v_env_4851_, v___f_4849_);
v___x_4864_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_4861_ == 0)
{
lean_ctor_set(v___x_4860_, 5, v___x_4864_);
lean_ctor_set(v___x_4860_, 0, v___x_4863_);
v___x_4866_ = v___x_4860_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v___x_4863_);
lean_ctor_set(v_reuseFailAlloc_4871_, 1, v_nextMacroScope_4852_);
lean_ctor_set(v_reuseFailAlloc_4871_, 2, v_ngen_4853_);
lean_ctor_set(v_reuseFailAlloc_4871_, 3, v_auxDeclNGen_4854_);
lean_ctor_set(v_reuseFailAlloc_4871_, 4, v_traceState_4855_);
lean_ctor_set(v_reuseFailAlloc_4871_, 5, v___x_4864_);
lean_ctor_set(v_reuseFailAlloc_4871_, 6, v_messages_4856_);
lean_ctor_set(v_reuseFailAlloc_4871_, 7, v_infoState_4857_);
lean_ctor_set(v_reuseFailAlloc_4871_, 8, v_snapshotTasks_4858_);
v___x_4866_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
lean_object* v___x_4867_; lean_object* v___x_4869_; 
v___x_4867_ = lean_st_ref_put(v___y_4835_, v___x_4866_);
if (v_isShared_4848_ == 0)
{
lean_ctor_set(v___x_4847_, 0, v___x_4862_);
v___x_4869_ = v___x_4847_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v___x_4862_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
}
else
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4882_; 
v_a_4875_ = lean_ctor_get(v___x_4844_, 0);
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4844_);
if (v_isSharedCheck_4882_ == 0)
{
v___x_4877_ = v___x_4844_;
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4844_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v___x_4880_; 
if (v_isShared_4878_ == 0)
{
v___x_4880_ = v___x_4877_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v_a_4875_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_4883_, lean_object* v_declName_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_){
_start:
{
lean_object* v_res_4888_; 
v_res_4888_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_4883_, v_declName_4884_, v___y_4885_, v___y_4886_);
lean_dec(v___y_4886_);
lean_dec_ref(v___y_4885_);
lean_dec_ref(v___x_4883_);
return v_res_4888_;
}
}
static uint64_t _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4895_; uint64_t v___x_4896_; 
v___x_4895_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4896_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4895_);
return v___x_4896_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4897_ = lean_uint64_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4898_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4899_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4899_, 0, v___x_4898_);
lean_ctor_set_uint64(v___x_4899_, sizeof(void*)*1, v___x_4897_);
return v___x_4899_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4900_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4900_);
return v___x_4901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4902_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4903_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4903_, 0, v___x_4902_);
lean_ctor_set(v___x_4903_, 1, v___x_4902_);
lean_ctor_set(v___x_4903_, 2, v___x_4902_);
lean_ctor_set(v___x_4903_, 3, v___x_4902_);
lean_ctor_set(v___x_4903_, 4, v___x_4902_);
lean_ctor_set(v___x_4903_, 5, v___x_4902_);
return v___x_4903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4904_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4905_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4905_, 0, v___x_4904_);
lean_ctor_set(v___x_4905_, 1, v___x_4904_);
lean_ctor_set(v___x_4905_, 2, v___x_4904_);
lean_ctor_set(v___x_4905_, 3, v___x_4904_);
lean_ctor_set(v___x_4905_, 4, v___x_4904_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_4906_, lean_object* v___x_4907_, lean_object* v_declName_4908_, lean_object* v_stx_4909_, uint8_t v_attrKind_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4914_ = lean_unsigned_to_nat(1u);
v___x_4915_ = l_Lean_Syntax_getArg(v_stx_4909_, v___x_4914_);
v___x_4916_ = l_Lean_getAttrParamOptPrio(v___x_4915_, v___y_4911_, v___y_4912_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; uint8_t v___x_4918_; uint8_t v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; size_t v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v___x_4918_ = 0;
v___x_4919_ = 1;
v___x_4920_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4921_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4922_ = lean_unsigned_to_nat(32u);
v___x_4923_ = lean_mk_empty_array_with_capacity(v___x_4922_);
v___x_4924_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_4925_ = ((size_t)5ULL);
lean_inc_n(v___x_4906_, 6);
v___x_4926_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4926_, 0, v___x_4924_);
lean_ctor_set(v___x_4926_, 1, v___x_4923_);
lean_ctor_set(v___x_4926_, 2, v___x_4906_);
lean_ctor_set(v___x_4926_, 3, v___x_4906_);
lean_ctor_set_usize(v___x_4926_, 4, v___x_4925_);
v___x_4927_ = lean_box(1);
lean_inc_ref(v___x_4926_);
v___x_4928_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4928_, 0, v___x_4921_);
lean_ctor_set(v___x_4928_, 1, v___x_4926_);
lean_ctor_set(v___x_4928_, 2, v___x_4927_);
v___x_4929_ = lean_mk_empty_array_with_capacity(v___x_4906_);
v___x_4930_ = lean_box(0);
lean_inc(v___x_4907_);
v___x_4931_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4931_, 0, v___x_4920_);
lean_ctor_set(v___x_4931_, 1, v___x_4907_);
lean_ctor_set(v___x_4931_, 2, v___x_4928_);
lean_ctor_set(v___x_4931_, 3, v___x_4929_);
lean_ctor_set(v___x_4931_, 4, v___x_4930_);
lean_ctor_set(v___x_4931_, 5, v___x_4906_);
lean_ctor_set(v___x_4931_, 6, v___x_4930_);
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*7, v___x_4918_);
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*7 + 1, v___x_4918_);
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*7 + 2, v___x_4918_);
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*7 + 3, v___x_4919_);
v___x_4932_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4932_, 0, v___x_4906_);
lean_ctor_set(v___x_4932_, 1, v___x_4906_);
lean_ctor_set(v___x_4932_, 2, v___x_4906_);
lean_ctor_set(v___x_4932_, 3, v___x_4906_);
lean_ctor_set(v___x_4932_, 4, v___x_4921_);
lean_ctor_set(v___x_4932_, 5, v___x_4921_);
lean_ctor_set(v___x_4932_, 6, v___x_4921_);
lean_ctor_set(v___x_4932_, 7, v___x_4921_);
lean_ctor_set(v___x_4932_, 8, v___x_4921_);
lean_ctor_set(v___x_4932_, 9, v___x_4921_);
lean_ctor_set(v___x_4932_, 10, v___x_4921_);
v___x_4933_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4934_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4932_);
lean_ctor_set(v___x_4935_, 1, v___x_4933_);
lean_ctor_set(v___x_4935_, 2, v___x_4907_);
lean_ctor_set(v___x_4935_, 3, v___x_4926_);
lean_ctor_set(v___x_4935_, 4, v___x_4934_);
v___x_4936_ = lean_box(0);
v___x_4937_ = lean_st_mk_ref(v___x_4935_);
v___x_4938_ = l_Lean_Meta_addInstance(v_declName_4908_, v_attrKind_4910_, v_a_4917_, v___x_4931_, v___x_4937_, v___y_4911_, v___y_4912_);
lean_dec_ref_known(v___x_4931_, 7);
if (lean_obj_tag(v___x_4938_) == 0)
{
lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4946_; 
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4938_);
if (v_isSharedCheck_4946_ == 0)
{
lean_object* v_unused_4947_; 
v_unused_4947_ = lean_ctor_get(v___x_4938_, 0);
lean_dec(v_unused_4947_);
v___x_4940_ = v___x_4938_;
v_isShared_4941_ = v_isSharedCheck_4946_;
goto v_resetjp_4939_;
}
else
{
lean_dec(v___x_4938_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4946_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v___x_4942_; lean_object* v___x_4944_; 
v___x_4942_ = lean_st_ref_get(v___x_4937_);
lean_dec(v___x_4937_);
lean_dec(v___x_4942_);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 0, v___x_4936_);
v___x_4944_ = v___x_4940_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v___x_4936_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
return v___x_4944_;
}
}
}
else
{
lean_dec(v___x_4937_);
return v___x_4938_;
}
}
else
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
lean_dec(v_declName_4908_);
lean_dec(v___x_4907_);
lean_dec(v___x_4906_);
v_a_4948_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4916_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4916_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_4956_, lean_object* v___x_4957_, lean_object* v_declName_4958_, lean_object* v_stx_4959_, lean_object* v_attrKind_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
uint8_t v_attrKind_boxed_4964_; lean_object* v_res_4965_; 
v_attrKind_boxed_4964_ = lean_unbox(v_attrKind_4960_);
v_res_4965_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_4956_, v___x_4957_, v_declName_4958_, v_stx_4959_, v_attrKind_boxed_4964_, v___y_4961_, v___y_4962_);
lean_dec(v___y_4962_);
lean_dec_ref(v___y_4961_);
lean_dec(v_stx_4959_);
return v_res_4965_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4966_; lean_object* v___f_4967_; 
v___x_4966_ = l_Lean_Meta_instInhabitedInstances_default;
v___f_4967_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_4967_, 0, v___x_4966_);
return v___f_4967_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v___x_4969_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4970_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0);
v___x_4971_ = l_Lean_Name_str___override(v___x_4970_, v___x_4969_);
return v___x_4971_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4972_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_4973_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4974_ = l_Lean_Name_str___override(v___x_4973_, v___x_4972_);
return v___x_4974_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; 
v___x_4975_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_4976_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4977_ = l_Lean_Name_str___override(v___x_4976_, v___x_4975_);
return v___x_4977_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___x_4979_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4980_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4981_ = l_Lean_Name_str___override(v___x_4980_, v___x_4979_);
return v___x_4981_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; 
v___x_4985_ = lean_unsigned_to_nat(0u);
v___x_4986_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4987_ = l_Lean_Name_num___override(v___x_4986_, v___x_4985_);
return v___x_4987_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4988_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_4989_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4990_ = l_Lean_Name_str___override(v___x_4989_, v___x_4988_);
return v___x_4990_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4991_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_4992_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4993_ = l_Lean_Name_str___override(v___x_4992_, v___x_4991_);
return v___x_4993_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4995_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4996_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4997_ = l_Lean_Name_str___override(v___x_4996_, v___x_4995_);
return v___x_4997_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_4999_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5000_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5001_ = l_Lean_Name_str___override(v___x_5000_, v___x_4999_);
return v___x_5001_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_5002_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_5003_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5004_ = l_Lean_Name_str___override(v___x_5003_, v___x_5002_);
return v___x_5004_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_5005_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_5006_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5007_ = l_Lean_Name_str___override(v___x_5006_, v___x_5005_);
return v___x_5007_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; 
v___x_5008_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5009_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5010_ = l_Lean_Name_str___override(v___x_5009_, v___x_5008_);
return v___x_5010_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; 
v___x_5011_ = lean_unsigned_to_nat(1841422150u);
v___x_5012_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5013_ = l_Lean_Name_num___override(v___x_5012_, v___x_5011_);
return v___x_5013_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v___x_5015_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5016_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5017_ = l_Lean_Name_str___override(v___x_5016_, v___x_5015_);
return v___x_5017_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; 
v___x_5019_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5020_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5021_ = l_Lean_Name_str___override(v___x_5020_, v___x_5019_);
return v___x_5021_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5022_ = lean_unsigned_to_nat(2u);
v___x_5023_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5024_ = l_Lean_Name_num___override(v___x_5023_, v___x_5022_);
return v___x_5024_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; 
v___x_5029_ = 0;
v___x_5030_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5031_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5032_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5033_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5033_, 0, v___x_5032_);
lean_ctor_set(v___x_5033_, 1, v___x_5031_);
lean_ctor_set(v___x_5033_, 2, v___x_5030_);
lean_ctor_set_uint8(v___x_5033_, sizeof(void*)*3, v___x_5029_);
return v___x_5033_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_5034_; lean_object* v___f_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; 
v___f_5034_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___f_5035_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5036_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5037_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
lean_ctor_set(v___x_5037_, 1, v___f_5035_);
lean_ctor_set(v___x_5037_, 2, v___f_5034_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5039_; lean_object* v___x_5040_; 
v___x_5039_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5040_ = l_Lean_registerBuiltinAttribute(v___x_5039_);
return v___x_5040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5042_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_5043_, lean_object* v_x_5044_, lean_object* v_x_5045_){
_start:
{
uint8_t v___x_5046_; 
v___x_5046_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_5044_, v_x_5045_);
return v___x_5046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_5047_, lean_object* v_x_5048_, lean_object* v_x_5049_){
_start:
{
uint8_t v_res_5050_; lean_object* v_r_5051_; 
v_res_5050_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_5047_, v_x_5048_, v_x_5049_);
lean_dec(v_x_5049_);
lean_dec_ref(v_x_5048_);
v_r_5051_ = lean_box(v_res_5050_);
return v_r_5051_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b1_5052_, lean_object* v_msg_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_){
_start:
{
lean_object* v___x_5057_; 
v___x_5057_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_5053_, v___y_5054_, v___y_5055_);
return v___x_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_00_u03b1_5058_, lean_object* v_msg_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_){
_start:
{
lean_object* v_res_5063_; 
v_res_5063_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(v_00_u03b1_5058_, v_msg_5059_, v___y_5060_, v___y_5061_);
lean_dec(v___y_5061_);
lean_dec_ref(v___y_5060_);
return v_res_5063_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5064_, lean_object* v_x_5065_, size_t v_x_5066_, lean_object* v_x_5067_){
_start:
{
uint8_t v___x_5068_; 
v___x_5068_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5065_, v_x_5066_, v_x_5067_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5069_, lean_object* v_x_5070_, lean_object* v_x_5071_, lean_object* v_x_5072_){
_start:
{
size_t v_x_3047__boxed_5073_; uint8_t v_res_5074_; lean_object* v_r_5075_; 
v_x_3047__boxed_5073_ = lean_unbox_usize(v_x_5071_);
lean_dec(v_x_5071_);
v_res_5074_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_5069_, v_x_5070_, v_x_3047__boxed_5073_, v_x_5072_);
lean_dec(v_x_5072_);
lean_dec_ref(v_x_5070_);
v_r_5075_ = lean_box(v_res_5074_);
return v_r_5075_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5076_, lean_object* v_keys_5077_, lean_object* v_vals_5078_, lean_object* v_heq_5079_, lean_object* v_i_5080_, lean_object* v_k_5081_){
_start:
{
uint8_t v___x_5082_; 
v___x_5082_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5077_, v_i_5080_, v_k_5081_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_5083_, lean_object* v_keys_5084_, lean_object* v_vals_5085_, lean_object* v_heq_5086_, lean_object* v_i_5087_, lean_object* v_k_5088_){
_start:
{
uint8_t v_res_5089_; lean_object* v_r_5090_; 
v_res_5089_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_5083_, v_keys_5084_, v_vals_5085_, v_heq_5086_, v_i_5087_, v_k_5088_);
lean_dec(v_k_5088_);
lean_dec_ref(v_vals_5085_);
lean_dec_ref(v_keys_5084_);
v_r_5090_ = lean_box(v_res_5089_);
return v_r_5090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5093_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5094_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5095_ = l_Lean_addBuiltinDocString(v___x_5093_, v___x_5094_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5096_){
_start:
{
lean_object* v_res_5097_; 
v_res_5097_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object* v_a_5098_){
_start:
{
lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v_env_5102_; lean_object* v___x_5103_; lean_object* v_ext_5104_; lean_object* v_toEnvExtension_5105_; lean_object* v_asyncMode_5106_; lean_object* v___x_5107_; lean_object* v_discrTree_5108_; lean_object* v___x_5109_; 
v___x_5100_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5101_ = lean_st_ref_get(v_a_5098_);
v_env_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc_ref(v_env_5102_);
lean_dec(v___x_5101_);
v___x_5103_ = l_Lean_Meta_instanceExtension;
v_ext_5104_ = lean_ctor_get(v___x_5103_, 1);
v_toEnvExtension_5105_ = lean_ctor_get(v_ext_5104_, 0);
v_asyncMode_5106_ = lean_ctor_get(v_toEnvExtension_5105_, 2);
v___x_5107_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5100_, v___x_5103_, v_env_5102_, v_asyncMode_5106_);
v_discrTree_5108_ = lean_ctor_get(v___x_5107_, 0);
lean_inc_ref(v_discrTree_5108_);
lean_dec(v___x_5107_);
v___x_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5109_, 0, v_discrTree_5108_);
return v___x_5109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object* v_a_5110_, lean_object* v_a_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5110_);
lean_dec(v_a_5110_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object* v_a_5113_, lean_object* v_a_5114_){
_start:
{
lean_object* v___x_5116_; 
v___x_5116_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5114_);
return v___x_5116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object* v_a_5117_, lean_object* v_a_5118_, lean_object* v_a_5119_){
_start:
{
lean_object* v_res_5120_; 
v_res_5120_ = l_Lean_Meta_getGlobalInstancesIndex(v_a_5117_, v_a_5118_);
lean_dec(v_a_5118_);
lean_dec_ref(v_a_5117_);
return v_res_5120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object* v_a_5121_){
_start:
{
lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v_env_5125_; lean_object* v___x_5126_; lean_object* v_ext_5127_; lean_object* v_toEnvExtension_5128_; lean_object* v_asyncMode_5129_; lean_object* v___x_5130_; lean_object* v_erased_5131_; lean_object* v___x_5132_; 
v___x_5123_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5124_ = lean_st_ref_get(v_a_5121_);
v_env_5125_ = lean_ctor_get(v___x_5124_, 0);
lean_inc_ref(v_env_5125_);
lean_dec(v___x_5124_);
v___x_5126_ = l_Lean_Meta_instanceExtension;
v_ext_5127_ = lean_ctor_get(v___x_5126_, 1);
v_toEnvExtension_5128_ = lean_ctor_get(v_ext_5127_, 0);
v_asyncMode_5129_ = lean_ctor_get(v_toEnvExtension_5128_, 2);
v___x_5130_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5123_, v___x_5126_, v_env_5125_, v_asyncMode_5129_);
v_erased_5131_ = lean_ctor_get(v___x_5130_, 2);
lean_inc_ref(v_erased_5131_);
lean_dec(v___x_5130_);
v___x_5132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5132_, 0, v_erased_5131_);
return v___x_5132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object* v_a_5133_, lean_object* v_a_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5133_);
lean_dec(v_a_5133_);
return v_res_5135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object* v_a_5136_, lean_object* v_a_5137_){
_start:
{
lean_object* v___x_5139_; 
v___x_5139_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5137_);
return v___x_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object* v_a_5140_, lean_object* v_a_5141_, lean_object* v_a_5142_){
_start:
{
lean_object* v_res_5143_; 
v_res_5143_ = l_Lean_Meta_getErasedInstances(v_a_5140_, v_a_5141_);
lean_dec(v_a_5141_);
lean_dec_ref(v_a_5140_);
return v_res_5143_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object* v_env_5144_, lean_object* v_declName_5145_){
_start:
{
lean_object* v___x_5146_; lean_object* v_ext_5147_; lean_object* v_toEnvExtension_5148_; lean_object* v_asyncMode_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v_instanceNames_5152_; uint8_t v___x_5153_; 
v___x_5146_ = l_Lean_Meta_instanceExtension;
v_ext_5147_ = lean_ctor_get(v___x_5146_, 1);
v_toEnvExtension_5148_ = lean_ctor_get(v_ext_5147_, 0);
v_asyncMode_5149_ = lean_ctor_get(v_toEnvExtension_5148_, 2);
v___x_5150_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5151_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5150_, v___x_5146_, v_env_5144_, v_asyncMode_5149_);
v_instanceNames_5152_ = lean_ctor_get(v___x_5151_, 1);
lean_inc_ref(v_instanceNames_5152_);
lean_dec(v___x_5151_);
v___x_5153_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5152_, v_declName_5145_);
lean_dec_ref(v_instanceNames_5152_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object* v_env_5154_, lean_object* v_declName_5155_){
_start:
{
uint8_t v_res_5156_; lean_object* v_r_5157_; 
v_res_5156_ = l_Lean_Meta_isInstanceCore(v_env_5154_, v_declName_5155_);
lean_dec(v_declName_5155_);
v_r_5157_ = lean_box(v_res_5156_);
return v_r_5157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object* v_declName_5158_, lean_object* v_a_5159_){
_start:
{
lean_object* v___x_5161_; lean_object* v_env_5162_; uint8_t v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; 
v___x_5161_ = lean_st_ref_get(v_a_5159_);
v_env_5162_ = lean_ctor_get(v___x_5161_, 0);
lean_inc_ref(v_env_5162_);
lean_dec(v___x_5161_);
v___x_5163_ = l_Lean_Meta_isInstanceCore(v_env_5162_, v_declName_5158_);
v___x_5164_ = lean_box(v___x_5163_);
v___x_5165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5165_, 0, v___x_5164_);
return v___x_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object* v_declName_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_){
_start:
{
lean_object* v_res_5169_; 
v_res_5169_ = l_Lean_Meta_isInstance___redArg(v_declName_5166_, v_a_5167_);
lean_dec(v_a_5167_);
lean_dec(v_declName_5166_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object* v_declName_5170_, lean_object* v_a_5171_, lean_object* v_a_5172_){
_start:
{
lean_object* v___x_5174_; 
v___x_5174_ = l_Lean_Meta_isInstance___redArg(v_declName_5170_, v_a_5172_);
return v___x_5174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object* v_declName_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_, lean_object* v_a_5178_){
_start:
{
lean_object* v_res_5179_; 
v_res_5179_ = l_Lean_Meta_isInstance(v_declName_5175_, v_a_5176_, v_a_5177_);
lean_dec(v_a_5177_);
lean_dec_ref(v_a_5176_);
lean_dec(v_declName_5175_);
return v_res_5179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5180_, lean_object* v_vals_5181_, lean_object* v_i_5182_, lean_object* v_k_5183_){
_start:
{
lean_object* v___x_5184_; uint8_t v___x_5185_; 
v___x_5184_ = lean_array_get_size(v_keys_5180_);
v___x_5185_ = lean_nat_dec_lt(v_i_5182_, v___x_5184_);
if (v___x_5185_ == 0)
{
lean_object* v___x_5186_; 
lean_dec(v_i_5182_);
v___x_5186_ = lean_box(0);
return v___x_5186_;
}
else
{
lean_object* v_k_x27_5187_; uint8_t v___x_5188_; 
v_k_x27_5187_ = lean_array_fget_borrowed(v_keys_5180_, v_i_5182_);
v___x_5188_ = lean_name_eq(v_k_5183_, v_k_x27_5187_);
if (v___x_5188_ == 0)
{
lean_object* v___x_5189_; lean_object* v___x_5190_; 
v___x_5189_ = lean_unsigned_to_nat(1u);
v___x_5190_ = lean_nat_add(v_i_5182_, v___x_5189_);
lean_dec(v_i_5182_);
v_i_5182_ = v___x_5190_;
goto _start;
}
else
{
lean_object* v___x_5192_; lean_object* v___x_5193_; 
v___x_5192_ = lean_array_fget_borrowed(v_vals_5181_, v_i_5182_);
lean_dec(v_i_5182_);
lean_inc(v___x_5192_);
v___x_5193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5193_, 0, v___x_5192_);
return v___x_5193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5194_, lean_object* v_vals_5195_, lean_object* v_i_5196_, lean_object* v_k_5197_){
_start:
{
lean_object* v_res_5198_; 
v_res_5198_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5194_, v_vals_5195_, v_i_5196_, v_k_5197_);
lean_dec(v_k_5197_);
lean_dec_ref(v_vals_5195_);
lean_dec_ref(v_keys_5194_);
return v_res_5198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(lean_object* v_x_5199_, size_t v_x_5200_, lean_object* v_x_5201_){
_start:
{
if (lean_obj_tag(v_x_5199_) == 0)
{
lean_object* v_es_5202_; lean_object* v___x_5203_; size_t v___x_5204_; size_t v___x_5205_; lean_object* v_j_5206_; lean_object* v___x_5207_; 
v_es_5202_ = lean_ctor_get(v_x_5199_, 0);
v___x_5203_ = lean_box(2);
v___x_5204_ = ((size_t)31ULL);
v___x_5205_ = lean_usize_land(v_x_5200_, v___x_5204_);
v_j_5206_ = lean_usize_to_nat(v___x_5205_);
v___x_5207_ = lean_array_get_borrowed(v___x_5203_, v_es_5202_, v_j_5206_);
lean_dec(v_j_5206_);
switch(lean_obj_tag(v___x_5207_))
{
case 0:
{
lean_object* v_key_5208_; lean_object* v_val_5209_; uint8_t v___x_5210_; 
v_key_5208_ = lean_ctor_get(v___x_5207_, 0);
v_val_5209_ = lean_ctor_get(v___x_5207_, 1);
v___x_5210_ = lean_name_eq(v_x_5201_, v_key_5208_);
if (v___x_5210_ == 0)
{
lean_object* v___x_5211_; 
v___x_5211_ = lean_box(0);
return v___x_5211_;
}
else
{
lean_object* v___x_5212_; 
lean_inc(v_val_5209_);
v___x_5212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5212_, 0, v_val_5209_);
return v___x_5212_;
}
}
case 1:
{
lean_object* v_node_5213_; size_t v___x_5214_; size_t v___x_5215_; 
v_node_5213_ = lean_ctor_get(v___x_5207_, 0);
v___x_5214_ = ((size_t)5ULL);
v___x_5215_ = lean_usize_shift_right(v_x_5200_, v___x_5214_);
v_x_5199_ = v_node_5213_;
v_x_5200_ = v___x_5215_;
goto _start;
}
default: 
{
lean_object* v___x_5217_; 
v___x_5217_ = lean_box(0);
return v___x_5217_;
}
}
}
else
{
lean_object* v_ks_5218_; lean_object* v_vs_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; 
v_ks_5218_ = lean_ctor_get(v_x_5199_, 0);
v_vs_5219_ = lean_ctor_get(v_x_5199_, 1);
v___x_5220_ = lean_unsigned_to_nat(0u);
v___x_5221_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5218_, v_vs_5219_, v___x_5220_, v_x_5201_);
return v___x_5221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5222_, lean_object* v_x_5223_, lean_object* v_x_5224_){
_start:
{
size_t v_x_479__boxed_5225_; lean_object* v_res_5226_; 
v_x_479__boxed_5225_ = lean_unbox_usize(v_x_5223_);
lean_dec(v_x_5223_);
v_res_5226_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5222_, v_x_479__boxed_5225_, v_x_5224_);
lean_dec(v_x_5224_);
lean_dec_ref(v_x_5222_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(lean_object* v_x_5227_, lean_object* v_x_5228_){
_start:
{
uint64_t v___y_5230_; lean_object* v___x_5233_; 
v___x_5233_ = l_unsafeCast___redArg(v_x_5228_);
if (lean_obj_tag(v___x_5233_) == 0)
{
uint64_t v___x_5234_; 
v___x_5234_ = 1723ULL;
v___y_5230_ = v___x_5234_;
goto v___jp_5229_;
}
else
{
uint64_t v_hash_5235_; 
v_hash_5235_ = lean_ctor_get_uint64(v___x_5233_, sizeof(void*)*2);
lean_dec(v___x_5233_);
v___y_5230_ = v_hash_5235_;
goto v___jp_5229_;
}
v___jp_5229_:
{
size_t v___x_5231_; lean_object* v___x_5232_; 
v___x_5231_ = lean_uint64_to_usize(v___y_5230_);
v___x_5232_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5227_, v___x_5231_, v_x_5228_);
return v___x_5232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg___boxed(lean_object* v_x_5236_, lean_object* v_x_5237_){
_start:
{
lean_object* v_res_5238_; 
v_res_5238_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_x_5236_, v_x_5237_);
lean_dec(v_x_5237_);
lean_dec_ref(v_x_5236_);
return v_res_5238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object* v_declName_5239_, lean_object* v_a_5240_){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v_env_5244_; lean_object* v___x_5245_; lean_object* v_ext_5246_; lean_object* v_toEnvExtension_5247_; lean_object* v_asyncMode_5248_; lean_object* v___x_5249_; lean_object* v_instanceNames_5250_; lean_object* v___x_5251_; 
v___x_5242_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5243_ = lean_st_ref_get(v_a_5240_);
v_env_5244_ = lean_ctor_get(v___x_5243_, 0);
lean_inc_ref(v_env_5244_);
lean_dec(v___x_5243_);
v___x_5245_ = l_Lean_Meta_instanceExtension;
v_ext_5246_ = lean_ctor_get(v___x_5245_, 1);
v_toEnvExtension_5247_ = lean_ctor_get(v_ext_5246_, 0);
v_asyncMode_5248_ = lean_ctor_get(v_toEnvExtension_5247_, 2);
v___x_5249_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5242_, v___x_5245_, v_env_5244_, v_asyncMode_5248_);
v_instanceNames_5250_ = lean_ctor_get(v___x_5249_, 1);
lean_inc_ref(v_instanceNames_5250_);
lean_dec(v___x_5249_);
v___x_5251_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_instanceNames_5250_, v_declName_5239_);
lean_dec_ref(v_instanceNames_5250_);
if (lean_obj_tag(v___x_5251_) == 1)
{
lean_object* v_val_5252_; lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5261_; 
v_val_5252_ = lean_ctor_get(v___x_5251_, 0);
v_isSharedCheck_5261_ = !lean_is_exclusive(v___x_5251_);
if (v_isSharedCheck_5261_ == 0)
{
v___x_5254_ = v___x_5251_;
v_isShared_5255_ = v_isSharedCheck_5261_;
goto v_resetjp_5253_;
}
else
{
lean_inc(v_val_5252_);
lean_dec(v___x_5251_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5261_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v_priority_5256_; lean_object* v___x_5258_; 
v_priority_5256_ = lean_ctor_get(v_val_5252_, 2);
lean_inc(v_priority_5256_);
lean_dec(v_val_5252_);
if (v_isShared_5255_ == 0)
{
lean_ctor_set(v___x_5254_, 0, v_priority_5256_);
v___x_5258_ = v___x_5254_;
goto v_reusejp_5257_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v_priority_5256_);
v___x_5258_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5257_;
}
v_reusejp_5257_:
{
lean_object* v___x_5259_; 
v___x_5259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5259_, 0, v___x_5258_);
return v___x_5259_;
}
}
}
else
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
lean_dec(v___x_5251_);
v___x_5262_ = lean_box(0);
v___x_5263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5263_, 0, v___x_5262_);
return v___x_5263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object* v_declName_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5264_, v_a_5265_);
lean_dec(v_a_5265_);
lean_dec(v_declName_5264_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object* v_declName_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_){
_start:
{
lean_object* v___x_5272_; 
v___x_5272_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5268_, v_a_5270_);
return v___x_5272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object* v_declName_5273_, lean_object* v_a_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_){
_start:
{
lean_object* v_res_5277_; 
v_res_5277_ = l_Lean_Meta_getInstancePriority_x3f(v_declName_5273_, v_a_5274_, v_a_5275_);
lean_dec(v_a_5275_);
lean_dec_ref(v_a_5274_);
lean_dec(v_declName_5273_);
return v_res_5277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(lean_object* v_00_u03b2_5278_, lean_object* v_x_5279_, lean_object* v_x_5280_){
_start:
{
lean_object* v___x_5281_; 
v___x_5281_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_x_5279_, v_x_5280_);
return v___x_5281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___boxed(lean_object* v_00_u03b2_5282_, lean_object* v_x_5283_, lean_object* v_x_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(v_00_u03b2_5282_, v_x_5283_, v_x_5284_);
lean_dec(v_x_5284_);
lean_dec_ref(v_x_5283_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5286_, lean_object* v_x_5287_, size_t v_x_5288_, lean_object* v_x_5289_){
_start:
{
lean_object* v___x_5290_; 
v___x_5290_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5287_, v_x_5288_, v_x_5289_);
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5291_, lean_object* v_x_5292_, lean_object* v_x_5293_, lean_object* v_x_5294_){
_start:
{
size_t v_x_592__boxed_5295_; lean_object* v_res_5296_; 
v_x_592__boxed_5295_ = lean_unbox_usize(v_x_5293_);
lean_dec(v_x_5293_);
v_res_5296_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(v_00_u03b2_5291_, v_x_5292_, v_x_592__boxed_5295_, v_x_5294_);
lean_dec(v_x_5294_);
lean_dec_ref(v_x_5292_);
return v_res_5296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5297_, lean_object* v_keys_5298_, lean_object* v_vals_5299_, lean_object* v_heq_5300_, lean_object* v_i_5301_, lean_object* v_k_5302_){
_start:
{
lean_object* v___x_5303_; 
v___x_5303_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5298_, v_vals_5299_, v_i_5301_, v_k_5302_);
return v___x_5303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5304_, lean_object* v_keys_5305_, lean_object* v_vals_5306_, lean_object* v_heq_5307_, lean_object* v_i_5308_, lean_object* v_k_5309_){
_start:
{
lean_object* v_res_5310_; 
v_res_5310_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5304_, v_keys_5305_, v_vals_5306_, v_heq_5307_, v_i_5308_, v_k_5309_);
lean_dec(v_k_5309_);
lean_dec_ref(v_vals_5306_);
lean_dec_ref(v_keys_5305_);
return v_res_5310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object* v_declName_5311_, lean_object* v_a_5312_){
_start:
{
lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v_env_5316_; lean_object* v___x_5317_; lean_object* v_ext_5318_; lean_object* v_toEnvExtension_5319_; lean_object* v_asyncMode_5320_; lean_object* v___x_5321_; lean_object* v_instanceNames_5322_; lean_object* v___x_5323_; 
v___x_5314_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5315_ = lean_st_ref_get(v_a_5312_);
v_env_5316_ = lean_ctor_get(v___x_5315_, 0);
lean_inc_ref(v_env_5316_);
lean_dec(v___x_5315_);
v___x_5317_ = l_Lean_Meta_instanceExtension;
v_ext_5318_ = lean_ctor_get(v___x_5317_, 1);
v_toEnvExtension_5319_ = lean_ctor_get(v_ext_5318_, 0);
v_asyncMode_5320_ = lean_ctor_get(v_toEnvExtension_5319_, 2);
v___x_5321_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5314_, v___x_5317_, v_env_5316_, v_asyncMode_5320_);
v_instanceNames_5322_ = lean_ctor_get(v___x_5321_, 1);
lean_inc_ref(v_instanceNames_5322_);
lean_dec(v___x_5321_);
v___x_5323_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_instanceNames_5322_, v_declName_5311_);
lean_dec_ref(v_instanceNames_5322_);
if (lean_obj_tag(v___x_5323_) == 1)
{
lean_object* v_val_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5334_; 
v_val_5324_ = lean_ctor_get(v___x_5323_, 0);
v_isSharedCheck_5334_ = !lean_is_exclusive(v___x_5323_);
if (v_isSharedCheck_5334_ == 0)
{
v___x_5326_ = v___x_5323_;
v_isShared_5327_ = v_isSharedCheck_5334_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_val_5324_);
lean_dec(v___x_5323_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5334_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
uint8_t v_attrKind_5328_; lean_object* v___x_5329_; lean_object* v___x_5331_; 
v_attrKind_5328_ = lean_ctor_get_uint8(v_val_5324_, sizeof(void*)*5);
lean_dec(v_val_5324_);
v___x_5329_ = lean_box(v_attrKind_5328_);
if (v_isShared_5327_ == 0)
{
lean_ctor_set(v___x_5326_, 0, v___x_5329_);
v___x_5331_ = v___x_5326_;
goto v_reusejp_5330_;
}
else
{
lean_object* v_reuseFailAlloc_5333_; 
v_reuseFailAlloc_5333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5333_, 0, v___x_5329_);
v___x_5331_ = v_reuseFailAlloc_5333_;
goto v_reusejp_5330_;
}
v_reusejp_5330_:
{
lean_object* v___x_5332_; 
v___x_5332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5331_);
return v___x_5332_;
}
}
}
else
{
lean_object* v___x_5335_; lean_object* v___x_5336_; 
lean_dec(v___x_5323_);
v___x_5335_ = lean_box(0);
v___x_5336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5336_, 0, v___x_5335_);
return v___x_5336_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object* v_declName_5337_, lean_object* v_a_5338_, lean_object* v_a_5339_){
_start:
{
lean_object* v_res_5340_; 
v_res_5340_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5337_, v_a_5338_);
lean_dec(v_a_5338_);
lean_dec(v_declName_5337_);
return v_res_5340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object* v_declName_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_){
_start:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5341_, v_a_5343_);
return v___x_5345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object* v_declName_5346_, lean_object* v_a_5347_, lean_object* v_a_5348_, lean_object* v_a_5349_){
_start:
{
lean_object* v_res_5350_; 
v_res_5350_ = l_Lean_Meta_getInstanceAttrKind_x3f(v_declName_5346_, v_a_5347_, v_a_5348_);
lean_dec(v_a_5348_);
lean_dec_ref(v_a_5347_);
lean_dec(v_declName_5346_);
return v_res_5350_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object* v_k_5355_, lean_object* v_v_5356_, lean_object* v_t_5357_){
_start:
{
if (lean_obj_tag(v_t_5357_) == 0)
{
lean_object* v_size_5358_; lean_object* v_k_5359_; lean_object* v_v_5360_; lean_object* v_l_5361_; lean_object* v_r_5362_; lean_object* v___x_5364_; uint8_t v_isShared_5365_; uint8_t v_isSharedCheck_5643_; 
v_size_5358_ = lean_ctor_get(v_t_5357_, 0);
v_k_5359_ = lean_ctor_get(v_t_5357_, 1);
v_v_5360_ = lean_ctor_get(v_t_5357_, 2);
v_l_5361_ = lean_ctor_get(v_t_5357_, 3);
v_r_5362_ = lean_ctor_get(v_t_5357_, 4);
v_isSharedCheck_5643_ = !lean_is_exclusive(v_t_5357_);
if (v_isSharedCheck_5643_ == 0)
{
v___x_5364_ = v_t_5357_;
v_isShared_5365_ = v_isSharedCheck_5643_;
goto v_resetjp_5363_;
}
else
{
lean_inc(v_r_5362_);
lean_inc(v_l_5361_);
lean_inc(v_v_5360_);
lean_inc(v_k_5359_);
lean_inc(v_size_5358_);
lean_dec(v_t_5357_);
v___x_5364_ = lean_box(0);
v_isShared_5365_ = v_isSharedCheck_5643_;
goto v_resetjp_5363_;
}
v_resetjp_5363_:
{
uint8_t v___x_5366_; 
v___x_5366_ = lean_nat_dec_lt(v_k_5359_, v_k_5355_);
if (v___x_5366_ == 0)
{
uint8_t v___x_5367_; 
v___x_5367_ = lean_nat_dec_eq(v_k_5359_, v_k_5355_);
if (v___x_5367_ == 0)
{
lean_object* v_impl_5368_; lean_object* v___x_5369_; 
lean_dec(v_size_5358_);
v_impl_5368_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5355_, v_v_5356_, v_r_5362_);
v___x_5369_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_5361_) == 0)
{
lean_object* v_size_5370_; lean_object* v_size_5371_; lean_object* v_k_5372_; lean_object* v_v_5373_; lean_object* v_l_5374_; lean_object* v_r_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; uint8_t v___x_5378_; 
v_size_5370_ = lean_ctor_get(v_l_5361_, 0);
v_size_5371_ = lean_ctor_get(v_impl_5368_, 0);
lean_inc(v_size_5371_);
v_k_5372_ = lean_ctor_get(v_impl_5368_, 1);
lean_inc(v_k_5372_);
v_v_5373_ = lean_ctor_get(v_impl_5368_, 2);
lean_inc(v_v_5373_);
v_l_5374_ = lean_ctor_get(v_impl_5368_, 3);
lean_inc(v_l_5374_);
v_r_5375_ = lean_ctor_get(v_impl_5368_, 4);
lean_inc(v_r_5375_);
v___x_5376_ = lean_unsigned_to_nat(3u);
v___x_5377_ = lean_nat_mul(v___x_5376_, v_size_5370_);
v___x_5378_ = lean_nat_dec_lt(v___x_5377_, v_size_5371_);
lean_dec(v___x_5377_);
if (v___x_5378_ == 0)
{
lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5382_; 
lean_dec(v_r_5375_);
lean_dec(v_l_5374_);
lean_dec(v_v_5373_);
lean_dec(v_k_5372_);
v___x_5379_ = lean_nat_add(v___x_5369_, v_size_5370_);
v___x_5380_ = lean_nat_add(v___x_5379_, v_size_5371_);
lean_dec(v_size_5371_);
lean_dec(v___x_5379_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_impl_5368_);
lean_ctor_set(v___x_5364_, 0, v___x_5380_);
v___x_5382_ = v___x_5364_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v___x_5380_);
lean_ctor_set(v_reuseFailAlloc_5383_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5383_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5383_, 3, v_l_5361_);
lean_ctor_set(v_reuseFailAlloc_5383_, 4, v_impl_5368_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
return v___x_5382_;
}
}
else
{
lean_object* v___x_5385_; uint8_t v_isShared_5386_; uint8_t v_isSharedCheck_5447_; 
v_isSharedCheck_5447_ = !lean_is_exclusive(v_impl_5368_);
if (v_isSharedCheck_5447_ == 0)
{
lean_object* v_unused_5448_; lean_object* v_unused_5449_; lean_object* v_unused_5450_; lean_object* v_unused_5451_; lean_object* v_unused_5452_; 
v_unused_5448_ = lean_ctor_get(v_impl_5368_, 4);
lean_dec(v_unused_5448_);
v_unused_5449_ = lean_ctor_get(v_impl_5368_, 3);
lean_dec(v_unused_5449_);
v_unused_5450_ = lean_ctor_get(v_impl_5368_, 2);
lean_dec(v_unused_5450_);
v_unused_5451_ = lean_ctor_get(v_impl_5368_, 1);
lean_dec(v_unused_5451_);
v_unused_5452_ = lean_ctor_get(v_impl_5368_, 0);
lean_dec(v_unused_5452_);
v___x_5385_ = v_impl_5368_;
v_isShared_5386_ = v_isSharedCheck_5447_;
goto v_resetjp_5384_;
}
else
{
lean_dec(v_impl_5368_);
v___x_5385_ = lean_box(0);
v_isShared_5386_ = v_isSharedCheck_5447_;
goto v_resetjp_5384_;
}
v_resetjp_5384_:
{
lean_object* v_size_5387_; lean_object* v_k_5388_; lean_object* v_v_5389_; lean_object* v_l_5390_; lean_object* v_r_5391_; lean_object* v_size_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; uint8_t v___x_5395_; 
v_size_5387_ = lean_ctor_get(v_l_5374_, 0);
v_k_5388_ = lean_ctor_get(v_l_5374_, 1);
v_v_5389_ = lean_ctor_get(v_l_5374_, 2);
v_l_5390_ = lean_ctor_get(v_l_5374_, 3);
v_r_5391_ = lean_ctor_get(v_l_5374_, 4);
v_size_5392_ = lean_ctor_get(v_r_5375_, 0);
v___x_5393_ = lean_unsigned_to_nat(2u);
v___x_5394_ = lean_nat_mul(v___x_5393_, v_size_5392_);
v___x_5395_ = lean_nat_dec_lt(v_size_5387_, v___x_5394_);
lean_dec(v___x_5394_);
if (v___x_5395_ == 0)
{
lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5423_; 
lean_inc(v_r_5391_);
lean_inc(v_l_5390_);
lean_inc(v_v_5389_);
lean_inc(v_k_5388_);
v_isSharedCheck_5423_ = !lean_is_exclusive(v_l_5374_);
if (v_isSharedCheck_5423_ == 0)
{
lean_object* v_unused_5424_; lean_object* v_unused_5425_; lean_object* v_unused_5426_; lean_object* v_unused_5427_; lean_object* v_unused_5428_; 
v_unused_5424_ = lean_ctor_get(v_l_5374_, 4);
lean_dec(v_unused_5424_);
v_unused_5425_ = lean_ctor_get(v_l_5374_, 3);
lean_dec(v_unused_5425_);
v_unused_5426_ = lean_ctor_get(v_l_5374_, 2);
lean_dec(v_unused_5426_);
v_unused_5427_ = lean_ctor_get(v_l_5374_, 1);
lean_dec(v_unused_5427_);
v_unused_5428_ = lean_ctor_get(v_l_5374_, 0);
lean_dec(v_unused_5428_);
v___x_5397_ = v_l_5374_;
v_isShared_5398_ = v_isSharedCheck_5423_;
goto v_resetjp_5396_;
}
else
{
lean_dec(v_l_5374_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5423_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___y_5402_; lean_object* v___y_5403_; lean_object* v___y_5404_; lean_object* v___y_5413_; 
v___x_5399_ = lean_nat_add(v___x_5369_, v_size_5370_);
v___x_5400_ = lean_nat_add(v___x_5399_, v_size_5371_);
lean_dec(v_size_5371_);
if (lean_obj_tag(v_l_5390_) == 0)
{
lean_object* v_size_5421_; 
v_size_5421_ = lean_ctor_get(v_l_5390_, 0);
lean_inc(v_size_5421_);
v___y_5413_ = v_size_5421_;
goto v___jp_5412_;
}
else
{
lean_object* v___x_5422_; 
v___x_5422_ = lean_unsigned_to_nat(0u);
v___y_5413_ = v___x_5422_;
goto v___jp_5412_;
}
v___jp_5401_:
{
lean_object* v___x_5405_; lean_object* v___x_5407_; 
v___x_5405_ = lean_nat_add(v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec(v___y_5403_);
if (v_isShared_5398_ == 0)
{
lean_ctor_set(v___x_5397_, 4, v_r_5375_);
lean_ctor_set(v___x_5397_, 3, v_r_5391_);
lean_ctor_set(v___x_5397_, 2, v_v_5373_);
lean_ctor_set(v___x_5397_, 1, v_k_5372_);
lean_ctor_set(v___x_5397_, 0, v___x_5405_);
v___x_5407_ = v___x_5397_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v___x_5405_);
lean_ctor_set(v_reuseFailAlloc_5411_, 1, v_k_5372_);
lean_ctor_set(v_reuseFailAlloc_5411_, 2, v_v_5373_);
lean_ctor_set(v_reuseFailAlloc_5411_, 3, v_r_5391_);
lean_ctor_set(v_reuseFailAlloc_5411_, 4, v_r_5375_);
v___x_5407_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
lean_object* v___x_5409_; 
if (v_isShared_5386_ == 0)
{
lean_ctor_set(v___x_5385_, 4, v___x_5407_);
lean_ctor_set(v___x_5385_, 3, v___y_5402_);
lean_ctor_set(v___x_5385_, 2, v_v_5389_);
lean_ctor_set(v___x_5385_, 1, v_k_5388_);
lean_ctor_set(v___x_5385_, 0, v___x_5400_);
v___x_5409_ = v___x_5385_;
goto v_reusejp_5408_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v___x_5400_);
lean_ctor_set(v_reuseFailAlloc_5410_, 1, v_k_5388_);
lean_ctor_set(v_reuseFailAlloc_5410_, 2, v_v_5389_);
lean_ctor_set(v_reuseFailAlloc_5410_, 3, v___y_5402_);
lean_ctor_set(v_reuseFailAlloc_5410_, 4, v___x_5407_);
v___x_5409_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5408_;
}
v_reusejp_5408_:
{
return v___x_5409_;
}
}
}
v___jp_5412_:
{
lean_object* v___x_5414_; lean_object* v___x_5416_; 
v___x_5414_ = lean_nat_add(v___x_5399_, v___y_5413_);
lean_dec(v___y_5413_);
lean_dec(v___x_5399_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_l_5390_);
lean_ctor_set(v___x_5364_, 0, v___x_5414_);
v___x_5416_ = v___x_5364_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v___x_5414_);
lean_ctor_set(v_reuseFailAlloc_5420_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5420_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5420_, 3, v_l_5361_);
lean_ctor_set(v_reuseFailAlloc_5420_, 4, v_l_5390_);
v___x_5416_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
lean_object* v___x_5417_; 
v___x_5417_ = lean_nat_add(v___x_5369_, v_size_5392_);
if (lean_obj_tag(v_r_5391_) == 0)
{
lean_object* v_size_5418_; 
v_size_5418_ = lean_ctor_get(v_r_5391_, 0);
lean_inc(v_size_5418_);
v___y_5402_ = v___x_5416_;
v___y_5403_ = v___x_5417_;
v___y_5404_ = v_size_5418_;
goto v___jp_5401_;
}
else
{
lean_object* v___x_5419_; 
v___x_5419_ = lean_unsigned_to_nat(0u);
v___y_5402_ = v___x_5416_;
v___y_5403_ = v___x_5417_;
v___y_5404_ = v___x_5419_;
goto v___jp_5401_;
}
}
}
}
}
else
{
lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5433_; 
lean_del_object(v___x_5364_);
v___x_5429_ = lean_nat_add(v___x_5369_, v_size_5370_);
v___x_5430_ = lean_nat_add(v___x_5429_, v_size_5371_);
lean_dec(v_size_5371_);
v___x_5431_ = lean_nat_add(v___x_5429_, v_size_5387_);
lean_dec(v___x_5429_);
lean_inc_ref(v_l_5361_);
if (v_isShared_5386_ == 0)
{
lean_ctor_set(v___x_5385_, 4, v_l_5374_);
lean_ctor_set(v___x_5385_, 3, v_l_5361_);
lean_ctor_set(v___x_5385_, 2, v_v_5360_);
lean_ctor_set(v___x_5385_, 1, v_k_5359_);
lean_ctor_set(v___x_5385_, 0, v___x_5431_);
v___x_5433_ = v___x_5385_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5446_; 
v_reuseFailAlloc_5446_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5446_, 0, v___x_5431_);
lean_ctor_set(v_reuseFailAlloc_5446_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5446_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5446_, 3, v_l_5361_);
lean_ctor_set(v_reuseFailAlloc_5446_, 4, v_l_5374_);
v___x_5433_ = v_reuseFailAlloc_5446_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
lean_object* v___x_5435_; uint8_t v_isShared_5436_; uint8_t v_isSharedCheck_5440_; 
v_isSharedCheck_5440_ = !lean_is_exclusive(v_l_5361_);
if (v_isSharedCheck_5440_ == 0)
{
lean_object* v_unused_5441_; lean_object* v_unused_5442_; lean_object* v_unused_5443_; lean_object* v_unused_5444_; lean_object* v_unused_5445_; 
v_unused_5441_ = lean_ctor_get(v_l_5361_, 4);
lean_dec(v_unused_5441_);
v_unused_5442_ = lean_ctor_get(v_l_5361_, 3);
lean_dec(v_unused_5442_);
v_unused_5443_ = lean_ctor_get(v_l_5361_, 2);
lean_dec(v_unused_5443_);
v_unused_5444_ = lean_ctor_get(v_l_5361_, 1);
lean_dec(v_unused_5444_);
v_unused_5445_ = lean_ctor_get(v_l_5361_, 0);
lean_dec(v_unused_5445_);
v___x_5435_ = v_l_5361_;
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
else
{
lean_dec(v_l_5361_);
v___x_5435_ = lean_box(0);
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
v_resetjp_5434_:
{
lean_object* v___x_5438_; 
if (v_isShared_5436_ == 0)
{
lean_ctor_set(v___x_5435_, 4, v_r_5375_);
lean_ctor_set(v___x_5435_, 3, v___x_5433_);
lean_ctor_set(v___x_5435_, 2, v_v_5373_);
lean_ctor_set(v___x_5435_, 1, v_k_5372_);
lean_ctor_set(v___x_5435_, 0, v___x_5430_);
v___x_5438_ = v___x_5435_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v___x_5430_);
lean_ctor_set(v_reuseFailAlloc_5439_, 1, v_k_5372_);
lean_ctor_set(v_reuseFailAlloc_5439_, 2, v_v_5373_);
lean_ctor_set(v_reuseFailAlloc_5439_, 3, v___x_5433_);
lean_ctor_set(v_reuseFailAlloc_5439_, 4, v_r_5375_);
v___x_5438_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
return v___x_5438_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5453_; 
v_l_5453_ = lean_ctor_get(v_impl_5368_, 3);
lean_inc(v_l_5453_);
if (lean_obj_tag(v_l_5453_) == 0)
{
lean_object* v_r_5454_; lean_object* v_k_5455_; lean_object* v_v_5456_; lean_object* v___x_5458_; uint8_t v_isShared_5459_; uint8_t v_isSharedCheck_5479_; 
v_r_5454_ = lean_ctor_get(v_impl_5368_, 4);
v_k_5455_ = lean_ctor_get(v_impl_5368_, 1);
v_v_5456_ = lean_ctor_get(v_impl_5368_, 2);
v_isSharedCheck_5479_ = !lean_is_exclusive(v_impl_5368_);
if (v_isSharedCheck_5479_ == 0)
{
lean_object* v_unused_5480_; lean_object* v_unused_5481_; 
v_unused_5480_ = lean_ctor_get(v_impl_5368_, 3);
lean_dec(v_unused_5480_);
v_unused_5481_ = lean_ctor_get(v_impl_5368_, 0);
lean_dec(v_unused_5481_);
v___x_5458_ = v_impl_5368_;
v_isShared_5459_ = v_isSharedCheck_5479_;
goto v_resetjp_5457_;
}
else
{
lean_inc(v_r_5454_);
lean_inc(v_v_5456_);
lean_inc(v_k_5455_);
lean_dec(v_impl_5368_);
v___x_5458_ = lean_box(0);
v_isShared_5459_ = v_isSharedCheck_5479_;
goto v_resetjp_5457_;
}
v_resetjp_5457_:
{
lean_object* v_k_5460_; lean_object* v_v_5461_; lean_object* v___x_5463_; uint8_t v_isShared_5464_; uint8_t v_isSharedCheck_5475_; 
v_k_5460_ = lean_ctor_get(v_l_5453_, 1);
v_v_5461_ = lean_ctor_get(v_l_5453_, 2);
v_isSharedCheck_5475_ = !lean_is_exclusive(v_l_5453_);
if (v_isSharedCheck_5475_ == 0)
{
lean_object* v_unused_5476_; lean_object* v_unused_5477_; lean_object* v_unused_5478_; 
v_unused_5476_ = lean_ctor_get(v_l_5453_, 4);
lean_dec(v_unused_5476_);
v_unused_5477_ = lean_ctor_get(v_l_5453_, 3);
lean_dec(v_unused_5477_);
v_unused_5478_ = lean_ctor_get(v_l_5453_, 0);
lean_dec(v_unused_5478_);
v___x_5463_ = v_l_5453_;
v_isShared_5464_ = v_isSharedCheck_5475_;
goto v_resetjp_5462_;
}
else
{
lean_inc(v_v_5461_);
lean_inc(v_k_5460_);
lean_dec(v_l_5453_);
v___x_5463_ = lean_box(0);
v_isShared_5464_ = v_isSharedCheck_5475_;
goto v_resetjp_5462_;
}
v_resetjp_5462_:
{
lean_object* v___x_5465_; lean_object* v___x_5467_; 
v___x_5465_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_5454_, 2);
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 4, v_r_5454_);
lean_ctor_set(v___x_5463_, 3, v_r_5454_);
lean_ctor_set(v___x_5463_, 2, v_v_5360_);
lean_ctor_set(v___x_5463_, 1, v_k_5359_);
lean_ctor_set(v___x_5463_, 0, v___x_5369_);
v___x_5467_ = v___x_5463_;
goto v_reusejp_5466_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5369_);
lean_ctor_set(v_reuseFailAlloc_5474_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5474_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5474_, 3, v_r_5454_);
lean_ctor_set(v_reuseFailAlloc_5474_, 4, v_r_5454_);
v___x_5467_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5466_;
}
v_reusejp_5466_:
{
lean_object* v___x_5469_; 
lean_inc(v_r_5454_);
if (v_isShared_5459_ == 0)
{
lean_ctor_set(v___x_5458_, 3, v_r_5454_);
lean_ctor_set(v___x_5458_, 0, v___x_5369_);
v___x_5469_ = v___x_5458_;
goto v_reusejp_5468_;
}
else
{
lean_object* v_reuseFailAlloc_5473_; 
v_reuseFailAlloc_5473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5473_, 0, v___x_5369_);
lean_ctor_set(v_reuseFailAlloc_5473_, 1, v_k_5455_);
lean_ctor_set(v_reuseFailAlloc_5473_, 2, v_v_5456_);
lean_ctor_set(v_reuseFailAlloc_5473_, 3, v_r_5454_);
lean_ctor_set(v_reuseFailAlloc_5473_, 4, v_r_5454_);
v___x_5469_ = v_reuseFailAlloc_5473_;
goto v_reusejp_5468_;
}
v_reusejp_5468_:
{
lean_object* v___x_5471_; 
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v___x_5469_);
lean_ctor_set(v___x_5364_, 3, v___x_5467_);
lean_ctor_set(v___x_5364_, 2, v_v_5461_);
lean_ctor_set(v___x_5364_, 1, v_k_5460_);
lean_ctor_set(v___x_5364_, 0, v___x_5465_);
v___x_5471_ = v___x_5364_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v___x_5465_);
lean_ctor_set(v_reuseFailAlloc_5472_, 1, v_k_5460_);
lean_ctor_set(v_reuseFailAlloc_5472_, 2, v_v_5461_);
lean_ctor_set(v_reuseFailAlloc_5472_, 3, v___x_5467_);
lean_ctor_set(v_reuseFailAlloc_5472_, 4, v___x_5469_);
v___x_5471_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
return v___x_5471_;
}
}
}
}
}
}
else
{
lean_object* v_r_5482_; 
v_r_5482_ = lean_ctor_get(v_impl_5368_, 4);
lean_inc(v_r_5482_);
if (lean_obj_tag(v_r_5482_) == 0)
{
lean_object* v_k_5483_; lean_object* v_v_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5495_; 
v_k_5483_ = lean_ctor_get(v_impl_5368_, 1);
v_v_5484_ = lean_ctor_get(v_impl_5368_, 2);
v_isSharedCheck_5495_ = !lean_is_exclusive(v_impl_5368_);
if (v_isSharedCheck_5495_ == 0)
{
lean_object* v_unused_5496_; lean_object* v_unused_5497_; lean_object* v_unused_5498_; 
v_unused_5496_ = lean_ctor_get(v_impl_5368_, 4);
lean_dec(v_unused_5496_);
v_unused_5497_ = lean_ctor_get(v_impl_5368_, 3);
lean_dec(v_unused_5497_);
v_unused_5498_ = lean_ctor_get(v_impl_5368_, 0);
lean_dec(v_unused_5498_);
v___x_5486_ = v_impl_5368_;
v_isShared_5487_ = v_isSharedCheck_5495_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_v_5484_);
lean_inc(v_k_5483_);
lean_dec(v_impl_5368_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5495_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5488_; lean_object* v___x_5490_; 
v___x_5488_ = lean_unsigned_to_nat(3u);
if (v_isShared_5487_ == 0)
{
lean_ctor_set(v___x_5486_, 4, v_l_5453_);
lean_ctor_set(v___x_5486_, 2, v_v_5360_);
lean_ctor_set(v___x_5486_, 1, v_k_5359_);
lean_ctor_set(v___x_5486_, 0, v___x_5369_);
v___x_5490_ = v___x_5486_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5494_; 
v_reuseFailAlloc_5494_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5494_, 0, v___x_5369_);
lean_ctor_set(v_reuseFailAlloc_5494_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5494_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5494_, 3, v_l_5453_);
lean_ctor_set(v_reuseFailAlloc_5494_, 4, v_l_5453_);
v___x_5490_ = v_reuseFailAlloc_5494_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
lean_object* v___x_5492_; 
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_r_5482_);
lean_ctor_set(v___x_5364_, 3, v___x_5490_);
lean_ctor_set(v___x_5364_, 2, v_v_5484_);
lean_ctor_set(v___x_5364_, 1, v_k_5483_);
lean_ctor_set(v___x_5364_, 0, v___x_5488_);
v___x_5492_ = v___x_5364_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v___x_5488_);
lean_ctor_set(v_reuseFailAlloc_5493_, 1, v_k_5483_);
lean_ctor_set(v_reuseFailAlloc_5493_, 2, v_v_5484_);
lean_ctor_set(v_reuseFailAlloc_5493_, 3, v___x_5490_);
lean_ctor_set(v_reuseFailAlloc_5493_, 4, v_r_5482_);
v___x_5492_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
return v___x_5492_;
}
}
}
}
else
{
lean_object* v___x_5499_; lean_object* v___x_5501_; 
v___x_5499_ = lean_unsigned_to_nat(2u);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_impl_5368_);
lean_ctor_set(v___x_5364_, 3, v_r_5482_);
lean_ctor_set(v___x_5364_, 0, v___x_5499_);
v___x_5501_ = v___x_5364_;
goto v_reusejp_5500_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v___x_5499_);
lean_ctor_set(v_reuseFailAlloc_5502_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5502_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5502_, 3, v_r_5482_);
lean_ctor_set(v_reuseFailAlloc_5502_, 4, v_impl_5368_);
v___x_5501_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5500_;
}
v_reusejp_5500_:
{
return v___x_5501_;
}
}
}
}
}
else
{
lean_object* v___x_5504_; 
lean_dec(v_v_5360_);
lean_dec(v_k_5359_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 2, v_v_5356_);
lean_ctor_set(v___x_5364_, 1, v_k_5355_);
v___x_5504_ = v___x_5364_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_size_5358_);
lean_ctor_set(v_reuseFailAlloc_5505_, 1, v_k_5355_);
lean_ctor_set(v_reuseFailAlloc_5505_, 2, v_v_5356_);
lean_ctor_set(v_reuseFailAlloc_5505_, 3, v_l_5361_);
lean_ctor_set(v_reuseFailAlloc_5505_, 4, v_r_5362_);
v___x_5504_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
return v___x_5504_;
}
}
}
else
{
lean_object* v_impl_5506_; lean_object* v___x_5507_; 
lean_dec(v_size_5358_);
v_impl_5506_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5355_, v_v_5356_, v_l_5361_);
v___x_5507_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_5362_) == 0)
{
lean_object* v_size_5508_; lean_object* v_size_5509_; lean_object* v_k_5510_; lean_object* v_v_5511_; lean_object* v_l_5512_; lean_object* v_r_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; uint8_t v___x_5516_; 
v_size_5508_ = lean_ctor_get(v_r_5362_, 0);
v_size_5509_ = lean_ctor_get(v_impl_5506_, 0);
lean_inc(v_size_5509_);
v_k_5510_ = lean_ctor_get(v_impl_5506_, 1);
lean_inc(v_k_5510_);
v_v_5511_ = lean_ctor_get(v_impl_5506_, 2);
lean_inc(v_v_5511_);
v_l_5512_ = lean_ctor_get(v_impl_5506_, 3);
lean_inc(v_l_5512_);
v_r_5513_ = lean_ctor_get(v_impl_5506_, 4);
lean_inc(v_r_5513_);
v___x_5514_ = lean_unsigned_to_nat(3u);
v___x_5515_ = lean_nat_mul(v___x_5514_, v_size_5508_);
v___x_5516_ = lean_nat_dec_lt(v___x_5515_, v_size_5509_);
lean_dec(v___x_5515_);
if (v___x_5516_ == 0)
{
lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5520_; 
lean_dec(v_r_5513_);
lean_dec(v_l_5512_);
lean_dec(v_v_5511_);
lean_dec(v_k_5510_);
v___x_5517_ = lean_nat_add(v___x_5507_, v_size_5509_);
lean_dec(v_size_5509_);
v___x_5518_ = lean_nat_add(v___x_5517_, v_size_5508_);
lean_dec(v___x_5517_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 3, v_impl_5506_);
lean_ctor_set(v___x_5364_, 0, v___x_5518_);
v___x_5520_ = v___x_5364_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v___x_5518_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5521_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5521_, 3, v_impl_5506_);
lean_ctor_set(v_reuseFailAlloc_5521_, 4, v_r_5362_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
else
{
lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5587_; 
v_isSharedCheck_5587_ = !lean_is_exclusive(v_impl_5506_);
if (v_isSharedCheck_5587_ == 0)
{
lean_object* v_unused_5588_; lean_object* v_unused_5589_; lean_object* v_unused_5590_; lean_object* v_unused_5591_; lean_object* v_unused_5592_; 
v_unused_5588_ = lean_ctor_get(v_impl_5506_, 4);
lean_dec(v_unused_5588_);
v_unused_5589_ = lean_ctor_get(v_impl_5506_, 3);
lean_dec(v_unused_5589_);
v_unused_5590_ = lean_ctor_get(v_impl_5506_, 2);
lean_dec(v_unused_5590_);
v_unused_5591_ = lean_ctor_get(v_impl_5506_, 1);
lean_dec(v_unused_5591_);
v_unused_5592_ = lean_ctor_get(v_impl_5506_, 0);
lean_dec(v_unused_5592_);
v___x_5523_ = v_impl_5506_;
v_isShared_5524_ = v_isSharedCheck_5587_;
goto v_resetjp_5522_;
}
else
{
lean_dec(v_impl_5506_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5587_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
lean_object* v_size_5525_; lean_object* v_size_5526_; lean_object* v_k_5527_; lean_object* v_v_5528_; lean_object* v_l_5529_; lean_object* v_r_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; uint8_t v___x_5533_; 
v_size_5525_ = lean_ctor_get(v_l_5512_, 0);
v_size_5526_ = lean_ctor_get(v_r_5513_, 0);
v_k_5527_ = lean_ctor_get(v_r_5513_, 1);
v_v_5528_ = lean_ctor_get(v_r_5513_, 2);
v_l_5529_ = lean_ctor_get(v_r_5513_, 3);
v_r_5530_ = lean_ctor_get(v_r_5513_, 4);
v___x_5531_ = lean_unsigned_to_nat(2u);
v___x_5532_ = lean_nat_mul(v___x_5531_, v_size_5525_);
v___x_5533_ = lean_nat_dec_lt(v_size_5526_, v___x_5532_);
lean_dec(v___x_5532_);
if (v___x_5533_ == 0)
{
lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5562_; 
lean_inc(v_r_5530_);
lean_inc(v_l_5529_);
lean_inc(v_v_5528_);
lean_inc(v_k_5527_);
v_isSharedCheck_5562_ = !lean_is_exclusive(v_r_5513_);
if (v_isSharedCheck_5562_ == 0)
{
lean_object* v_unused_5563_; lean_object* v_unused_5564_; lean_object* v_unused_5565_; lean_object* v_unused_5566_; lean_object* v_unused_5567_; 
v_unused_5563_ = lean_ctor_get(v_r_5513_, 4);
lean_dec(v_unused_5563_);
v_unused_5564_ = lean_ctor_get(v_r_5513_, 3);
lean_dec(v_unused_5564_);
v_unused_5565_ = lean_ctor_get(v_r_5513_, 2);
lean_dec(v_unused_5565_);
v_unused_5566_ = lean_ctor_get(v_r_5513_, 1);
lean_dec(v_unused_5566_);
v_unused_5567_ = lean_ctor_get(v_r_5513_, 0);
lean_dec(v_unused_5567_);
v___x_5535_ = v_r_5513_;
v_isShared_5536_ = v_isSharedCheck_5562_;
goto v_resetjp_5534_;
}
else
{
lean_dec(v_r_5513_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5562_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___y_5540_; lean_object* v___y_5541_; lean_object* v___y_5542_; lean_object* v___x_5550_; lean_object* v___y_5552_; 
v___x_5537_ = lean_nat_add(v___x_5507_, v_size_5509_);
lean_dec(v_size_5509_);
v___x_5538_ = lean_nat_add(v___x_5537_, v_size_5508_);
lean_dec(v___x_5537_);
v___x_5550_ = lean_nat_add(v___x_5507_, v_size_5525_);
if (lean_obj_tag(v_l_5529_) == 0)
{
lean_object* v_size_5560_; 
v_size_5560_ = lean_ctor_get(v_l_5529_, 0);
lean_inc(v_size_5560_);
v___y_5552_ = v_size_5560_;
goto v___jp_5551_;
}
else
{
lean_object* v___x_5561_; 
v___x_5561_ = lean_unsigned_to_nat(0u);
v___y_5552_ = v___x_5561_;
goto v___jp_5551_;
}
v___jp_5539_:
{
lean_object* v___x_5543_; lean_object* v___x_5545_; 
v___x_5543_ = lean_nat_add(v___y_5541_, v___y_5542_);
lean_dec(v___y_5542_);
lean_dec(v___y_5541_);
if (v_isShared_5536_ == 0)
{
lean_ctor_set(v___x_5535_, 4, v_r_5362_);
lean_ctor_set(v___x_5535_, 3, v_r_5530_);
lean_ctor_set(v___x_5535_, 2, v_v_5360_);
lean_ctor_set(v___x_5535_, 1, v_k_5359_);
lean_ctor_set(v___x_5535_, 0, v___x_5543_);
v___x_5545_ = v___x_5535_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v___x_5543_);
lean_ctor_set(v_reuseFailAlloc_5549_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5549_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5549_, 3, v_r_5530_);
lean_ctor_set(v_reuseFailAlloc_5549_, 4, v_r_5362_);
v___x_5545_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
lean_object* v___x_5547_; 
if (v_isShared_5524_ == 0)
{
lean_ctor_set(v___x_5523_, 4, v___x_5545_);
lean_ctor_set(v___x_5523_, 3, v___y_5540_);
lean_ctor_set(v___x_5523_, 2, v_v_5528_);
lean_ctor_set(v___x_5523_, 1, v_k_5527_);
lean_ctor_set(v___x_5523_, 0, v___x_5538_);
v___x_5547_ = v___x_5523_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v___x_5538_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v_k_5527_);
lean_ctor_set(v_reuseFailAlloc_5548_, 2, v_v_5528_);
lean_ctor_set(v_reuseFailAlloc_5548_, 3, v___y_5540_);
lean_ctor_set(v_reuseFailAlloc_5548_, 4, v___x_5545_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
return v___x_5547_;
}
}
}
v___jp_5551_:
{
lean_object* v___x_5553_; lean_object* v___x_5555_; 
v___x_5553_ = lean_nat_add(v___x_5550_, v___y_5552_);
lean_dec(v___y_5552_);
lean_dec(v___x_5550_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_l_5529_);
lean_ctor_set(v___x_5364_, 3, v_l_5512_);
lean_ctor_set(v___x_5364_, 2, v_v_5511_);
lean_ctor_set(v___x_5364_, 1, v_k_5510_);
lean_ctor_set(v___x_5364_, 0, v___x_5553_);
v___x_5555_ = v___x_5364_;
goto v_reusejp_5554_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v___x_5553_);
lean_ctor_set(v_reuseFailAlloc_5559_, 1, v_k_5510_);
lean_ctor_set(v_reuseFailAlloc_5559_, 2, v_v_5511_);
lean_ctor_set(v_reuseFailAlloc_5559_, 3, v_l_5512_);
lean_ctor_set(v_reuseFailAlloc_5559_, 4, v_l_5529_);
v___x_5555_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5554_;
}
v_reusejp_5554_:
{
lean_object* v___x_5556_; 
v___x_5556_ = lean_nat_add(v___x_5507_, v_size_5508_);
if (lean_obj_tag(v_r_5530_) == 0)
{
lean_object* v_size_5557_; 
v_size_5557_ = lean_ctor_get(v_r_5530_, 0);
lean_inc(v_size_5557_);
v___y_5540_ = v___x_5555_;
v___y_5541_ = v___x_5556_;
v___y_5542_ = v_size_5557_;
goto v___jp_5539_;
}
else
{
lean_object* v___x_5558_; 
v___x_5558_ = lean_unsigned_to_nat(0u);
v___y_5540_ = v___x_5555_;
v___y_5541_ = v___x_5556_;
v___y_5542_ = v___x_5558_;
goto v___jp_5539_;
}
}
}
}
}
else
{
lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5573_; 
lean_del_object(v___x_5364_);
v___x_5568_ = lean_nat_add(v___x_5507_, v_size_5509_);
lean_dec(v_size_5509_);
v___x_5569_ = lean_nat_add(v___x_5568_, v_size_5508_);
lean_dec(v___x_5568_);
v___x_5570_ = lean_nat_add(v___x_5507_, v_size_5508_);
v___x_5571_ = lean_nat_add(v___x_5570_, v_size_5526_);
lean_dec(v___x_5570_);
lean_inc_ref(v_r_5362_);
if (v_isShared_5524_ == 0)
{
lean_ctor_set(v___x_5523_, 4, v_r_5362_);
lean_ctor_set(v___x_5523_, 3, v_r_5513_);
lean_ctor_set(v___x_5523_, 2, v_v_5360_);
lean_ctor_set(v___x_5523_, 1, v_k_5359_);
lean_ctor_set(v___x_5523_, 0, v___x_5571_);
v___x_5573_ = v___x_5523_;
goto v_reusejp_5572_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v___x_5571_);
lean_ctor_set(v_reuseFailAlloc_5586_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5586_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5586_, 3, v_r_5513_);
lean_ctor_set(v_reuseFailAlloc_5586_, 4, v_r_5362_);
v___x_5573_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5572_;
}
v_reusejp_5572_:
{
lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5580_; 
v_isSharedCheck_5580_ = !lean_is_exclusive(v_r_5362_);
if (v_isSharedCheck_5580_ == 0)
{
lean_object* v_unused_5581_; lean_object* v_unused_5582_; lean_object* v_unused_5583_; lean_object* v_unused_5584_; lean_object* v_unused_5585_; 
v_unused_5581_ = lean_ctor_get(v_r_5362_, 4);
lean_dec(v_unused_5581_);
v_unused_5582_ = lean_ctor_get(v_r_5362_, 3);
lean_dec(v_unused_5582_);
v_unused_5583_ = lean_ctor_get(v_r_5362_, 2);
lean_dec(v_unused_5583_);
v_unused_5584_ = lean_ctor_get(v_r_5362_, 1);
lean_dec(v_unused_5584_);
v_unused_5585_ = lean_ctor_get(v_r_5362_, 0);
lean_dec(v_unused_5585_);
v___x_5575_ = v_r_5362_;
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
else
{
lean_dec(v_r_5362_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5578_; 
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 4, v___x_5573_);
lean_ctor_set(v___x_5575_, 3, v_l_5512_);
lean_ctor_set(v___x_5575_, 2, v_v_5511_);
lean_ctor_set(v___x_5575_, 1, v_k_5510_);
lean_ctor_set(v___x_5575_, 0, v___x_5569_);
v___x_5578_ = v___x_5575_;
goto v_reusejp_5577_;
}
else
{
lean_object* v_reuseFailAlloc_5579_; 
v_reuseFailAlloc_5579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5579_, 0, v___x_5569_);
lean_ctor_set(v_reuseFailAlloc_5579_, 1, v_k_5510_);
lean_ctor_set(v_reuseFailAlloc_5579_, 2, v_v_5511_);
lean_ctor_set(v_reuseFailAlloc_5579_, 3, v_l_5512_);
lean_ctor_set(v_reuseFailAlloc_5579_, 4, v___x_5573_);
v___x_5578_ = v_reuseFailAlloc_5579_;
goto v_reusejp_5577_;
}
v_reusejp_5577_:
{
return v___x_5578_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5593_; 
v_l_5593_ = lean_ctor_get(v_impl_5506_, 3);
lean_inc(v_l_5593_);
if (lean_obj_tag(v_l_5593_) == 0)
{
lean_object* v_r_5594_; lean_object* v_k_5595_; lean_object* v_v_5596_; lean_object* v___x_5598_; uint8_t v_isShared_5599_; uint8_t v_isSharedCheck_5607_; 
v_r_5594_ = lean_ctor_get(v_impl_5506_, 4);
v_k_5595_ = lean_ctor_get(v_impl_5506_, 1);
v_v_5596_ = lean_ctor_get(v_impl_5506_, 2);
v_isSharedCheck_5607_ = !lean_is_exclusive(v_impl_5506_);
if (v_isSharedCheck_5607_ == 0)
{
lean_object* v_unused_5608_; lean_object* v_unused_5609_; 
v_unused_5608_ = lean_ctor_get(v_impl_5506_, 3);
lean_dec(v_unused_5608_);
v_unused_5609_ = lean_ctor_get(v_impl_5506_, 0);
lean_dec(v_unused_5609_);
v___x_5598_ = v_impl_5506_;
v_isShared_5599_ = v_isSharedCheck_5607_;
goto v_resetjp_5597_;
}
else
{
lean_inc(v_r_5594_);
lean_inc(v_v_5596_);
lean_inc(v_k_5595_);
lean_dec(v_impl_5506_);
v___x_5598_ = lean_box(0);
v_isShared_5599_ = v_isSharedCheck_5607_;
goto v_resetjp_5597_;
}
v_resetjp_5597_:
{
lean_object* v___x_5600_; lean_object* v___x_5602_; 
v___x_5600_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_5594_);
if (v_isShared_5599_ == 0)
{
lean_ctor_set(v___x_5598_, 3, v_r_5594_);
lean_ctor_set(v___x_5598_, 2, v_v_5360_);
lean_ctor_set(v___x_5598_, 1, v_k_5359_);
lean_ctor_set(v___x_5598_, 0, v___x_5507_);
v___x_5602_ = v___x_5598_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v___x_5507_);
lean_ctor_set(v_reuseFailAlloc_5606_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5606_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5606_, 3, v_r_5594_);
lean_ctor_set(v_reuseFailAlloc_5606_, 4, v_r_5594_);
v___x_5602_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
lean_object* v___x_5604_; 
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v___x_5602_);
lean_ctor_set(v___x_5364_, 3, v_l_5593_);
lean_ctor_set(v___x_5364_, 2, v_v_5596_);
lean_ctor_set(v___x_5364_, 1, v_k_5595_);
lean_ctor_set(v___x_5364_, 0, v___x_5600_);
v___x_5604_ = v___x_5364_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v___x_5600_);
lean_ctor_set(v_reuseFailAlloc_5605_, 1, v_k_5595_);
lean_ctor_set(v_reuseFailAlloc_5605_, 2, v_v_5596_);
lean_ctor_set(v_reuseFailAlloc_5605_, 3, v_l_5593_);
lean_ctor_set(v_reuseFailAlloc_5605_, 4, v___x_5602_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
}
else
{
lean_object* v_r_5610_; 
v_r_5610_ = lean_ctor_get(v_impl_5506_, 4);
lean_inc(v_r_5610_);
if (lean_obj_tag(v_r_5610_) == 0)
{
lean_object* v_k_5611_; lean_object* v_v_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5635_; 
v_k_5611_ = lean_ctor_get(v_impl_5506_, 1);
v_v_5612_ = lean_ctor_get(v_impl_5506_, 2);
v_isSharedCheck_5635_ = !lean_is_exclusive(v_impl_5506_);
if (v_isSharedCheck_5635_ == 0)
{
lean_object* v_unused_5636_; lean_object* v_unused_5637_; lean_object* v_unused_5638_; 
v_unused_5636_ = lean_ctor_get(v_impl_5506_, 4);
lean_dec(v_unused_5636_);
v_unused_5637_ = lean_ctor_get(v_impl_5506_, 3);
lean_dec(v_unused_5637_);
v_unused_5638_ = lean_ctor_get(v_impl_5506_, 0);
lean_dec(v_unused_5638_);
v___x_5614_ = v_impl_5506_;
v_isShared_5615_ = v_isSharedCheck_5635_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_v_5612_);
lean_inc(v_k_5611_);
lean_dec(v_impl_5506_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5635_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v_k_5616_; lean_object* v_v_5617_; lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5631_; 
v_k_5616_ = lean_ctor_get(v_r_5610_, 1);
v_v_5617_ = lean_ctor_get(v_r_5610_, 2);
v_isSharedCheck_5631_ = !lean_is_exclusive(v_r_5610_);
if (v_isSharedCheck_5631_ == 0)
{
lean_object* v_unused_5632_; lean_object* v_unused_5633_; lean_object* v_unused_5634_; 
v_unused_5632_ = lean_ctor_get(v_r_5610_, 4);
lean_dec(v_unused_5632_);
v_unused_5633_ = lean_ctor_get(v_r_5610_, 3);
lean_dec(v_unused_5633_);
v_unused_5634_ = lean_ctor_get(v_r_5610_, 0);
lean_dec(v_unused_5634_);
v___x_5619_ = v_r_5610_;
v_isShared_5620_ = v_isSharedCheck_5631_;
goto v_resetjp_5618_;
}
else
{
lean_inc(v_v_5617_);
lean_inc(v_k_5616_);
lean_dec(v_r_5610_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5631_;
goto v_resetjp_5618_;
}
v_resetjp_5618_:
{
lean_object* v___x_5621_; lean_object* v___x_5623_; 
v___x_5621_ = lean_unsigned_to_nat(3u);
if (v_isShared_5620_ == 0)
{
lean_ctor_set(v___x_5619_, 4, v_l_5593_);
lean_ctor_set(v___x_5619_, 3, v_l_5593_);
lean_ctor_set(v___x_5619_, 2, v_v_5612_);
lean_ctor_set(v___x_5619_, 1, v_k_5611_);
lean_ctor_set(v___x_5619_, 0, v___x_5507_);
v___x_5623_ = v___x_5619_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v___x_5507_);
lean_ctor_set(v_reuseFailAlloc_5630_, 1, v_k_5611_);
lean_ctor_set(v_reuseFailAlloc_5630_, 2, v_v_5612_);
lean_ctor_set(v_reuseFailAlloc_5630_, 3, v_l_5593_);
lean_ctor_set(v_reuseFailAlloc_5630_, 4, v_l_5593_);
v___x_5623_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
lean_object* v___x_5625_; 
if (v_isShared_5615_ == 0)
{
lean_ctor_set(v___x_5614_, 4, v_l_5593_);
lean_ctor_set(v___x_5614_, 2, v_v_5360_);
lean_ctor_set(v___x_5614_, 1, v_k_5359_);
lean_ctor_set(v___x_5614_, 0, v___x_5507_);
v___x_5625_ = v___x_5614_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v___x_5507_);
lean_ctor_set(v_reuseFailAlloc_5629_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5629_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5629_, 3, v_l_5593_);
lean_ctor_set(v_reuseFailAlloc_5629_, 4, v_l_5593_);
v___x_5625_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
lean_object* v___x_5627_; 
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v___x_5625_);
lean_ctor_set(v___x_5364_, 3, v___x_5623_);
lean_ctor_set(v___x_5364_, 2, v_v_5617_);
lean_ctor_set(v___x_5364_, 1, v_k_5616_);
lean_ctor_set(v___x_5364_, 0, v___x_5621_);
v___x_5627_ = v___x_5364_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v___x_5621_);
lean_ctor_set(v_reuseFailAlloc_5628_, 1, v_k_5616_);
lean_ctor_set(v_reuseFailAlloc_5628_, 2, v_v_5617_);
lean_ctor_set(v_reuseFailAlloc_5628_, 3, v___x_5623_);
lean_ctor_set(v_reuseFailAlloc_5628_, 4, v___x_5625_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
}
}
else
{
lean_object* v___x_5639_; lean_object* v___x_5641_; 
v___x_5639_ = lean_unsigned_to_nat(2u);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 4, v_r_5610_);
lean_ctor_set(v___x_5364_, 3, v_impl_5506_);
lean_ctor_set(v___x_5364_, 0, v___x_5639_);
v___x_5641_ = v___x_5364_;
goto v_reusejp_5640_;
}
else
{
lean_object* v_reuseFailAlloc_5642_; 
v_reuseFailAlloc_5642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5642_, 0, v___x_5639_);
lean_ctor_set(v_reuseFailAlloc_5642_, 1, v_k_5359_);
lean_ctor_set(v_reuseFailAlloc_5642_, 2, v_v_5360_);
lean_ctor_set(v_reuseFailAlloc_5642_, 3, v_impl_5506_);
lean_ctor_set(v_reuseFailAlloc_5642_, 4, v_r_5610_);
v___x_5641_ = v_reuseFailAlloc_5642_;
goto v_reusejp_5640_;
}
v_reusejp_5640_:
{
return v___x_5641_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5644_; lean_object* v___x_5645_; 
v___x_5644_ = lean_unsigned_to_nat(1u);
v___x_5645_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5645_, 0, v___x_5644_);
lean_ctor_set(v___x_5645_, 1, v_k_5355_);
lean_ctor_set(v___x_5645_, 2, v_v_5356_);
lean_ctor_set(v___x_5645_, 3, v_t_5357_);
lean_ctor_set(v___x_5645_, 4, v_t_5357_);
return v___x_5645_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object* v_k_5646_, lean_object* v_t_5647_){
_start:
{
if (lean_obj_tag(v_t_5647_) == 0)
{
lean_object* v_k_5648_; lean_object* v_l_5649_; lean_object* v_r_5650_; uint8_t v___x_5651_; 
v_k_5648_ = lean_ctor_get(v_t_5647_, 1);
v_l_5649_ = lean_ctor_get(v_t_5647_, 3);
v_r_5650_ = lean_ctor_get(v_t_5647_, 4);
v___x_5651_ = lean_nat_dec_lt(v_k_5648_, v_k_5646_);
if (v___x_5651_ == 0)
{
uint8_t v___x_5652_; 
v___x_5652_ = lean_nat_dec_eq(v_k_5648_, v_k_5646_);
if (v___x_5652_ == 0)
{
v_t_5647_ = v_r_5650_;
goto _start;
}
else
{
return v___x_5652_;
}
}
else
{
v_t_5647_ = v_l_5649_;
goto _start;
}
}
else
{
uint8_t v___x_5655_; 
v___x_5655_ = 0;
return v___x_5655_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object* v_k_5656_, lean_object* v_t_5657_){
_start:
{
uint8_t v_res_5658_; lean_object* v_r_5659_; 
v_res_5658_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5656_, v_t_5657_);
lean_dec(v_t_5657_);
lean_dec(v_k_5656_);
v_r_5659_ = lean_box(v_res_5658_);
return v_r_5659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object* v_d_5660_, lean_object* v_e_5661_){
_start:
{
lean_object* v_defaultInstances_5662_; lean_object* v_priorities_5663_; lean_object* v___x_5665_; uint8_t v_isShared_5666_; uint8_t v_isSharedCheck_5690_; 
v_defaultInstances_5662_ = lean_ctor_get(v_d_5660_, 0);
v_priorities_5663_ = lean_ctor_get(v_d_5660_, 1);
v_isSharedCheck_5690_ = !lean_is_exclusive(v_d_5660_);
if (v_isSharedCheck_5690_ == 0)
{
v___x_5665_ = v_d_5660_;
v_isShared_5666_ = v_isSharedCheck_5690_;
goto v_resetjp_5664_;
}
else
{
lean_inc(v_priorities_5663_);
lean_inc(v_defaultInstances_5662_);
lean_dec(v_d_5660_);
v___x_5665_ = lean_box(0);
v_isShared_5666_ = v_isSharedCheck_5690_;
goto v_resetjp_5664_;
}
v_resetjp_5664_:
{
lean_object* v_className_5667_; lean_object* v_instanceName_5668_; lean_object* v_priority_5669_; lean_object* v___y_5671_; uint8_t v___x_5687_; 
v_className_5667_ = lean_ctor_get(v_e_5661_, 0);
lean_inc(v_className_5667_);
v_instanceName_5668_ = lean_ctor_get(v_e_5661_, 1);
lean_inc(v_instanceName_5668_);
v_priority_5669_ = lean_ctor_get(v_e_5661_, 2);
lean_inc(v_priority_5669_);
lean_dec_ref(v_e_5661_);
v___x_5687_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_priority_5669_, v_priorities_5663_);
if (v___x_5687_ == 0)
{
lean_object* v___x_5688_; lean_object* v___x_5689_; 
v___x_5688_ = lean_box(0);
lean_inc(v_priority_5669_);
v___x_5689_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_priority_5669_, v___x_5688_, v_priorities_5663_);
v___y_5671_ = v___x_5689_;
goto v___jp_5670_;
}
else
{
v___y_5671_ = v_priorities_5663_;
goto v___jp_5670_;
}
v___jp_5670_:
{
lean_object* v___x_5672_; 
v___x_5672_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_5662_, v_className_5667_);
if (lean_obj_tag(v___x_5672_) == 0)
{
lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5678_; 
v___x_5673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5673_, 0, v_instanceName_5668_);
lean_ctor_set(v___x_5673_, 1, v_priority_5669_);
v___x_5674_ = lean_box(0);
v___x_5675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5675_, 0, v___x_5673_);
lean_ctor_set(v___x_5675_, 1, v___x_5674_);
v___x_5676_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5667_, v___x_5675_, v_defaultInstances_5662_);
if (v_isShared_5666_ == 0)
{
lean_ctor_set(v___x_5665_, 1, v___y_5671_);
lean_ctor_set(v___x_5665_, 0, v___x_5676_);
v___x_5678_ = v___x_5665_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v___x_5676_);
lean_ctor_set(v_reuseFailAlloc_5679_, 1, v___y_5671_);
v___x_5678_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
return v___x_5678_;
}
}
else
{
lean_object* v_val_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5685_; 
v_val_5680_ = lean_ctor_get(v___x_5672_, 0);
lean_inc(v_val_5680_);
lean_dec_ref_known(v___x_5672_, 1);
v___x_5681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5681_, 0, v_instanceName_5668_);
lean_ctor_set(v___x_5681_, 1, v_priority_5669_);
v___x_5682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5682_, 0, v___x_5681_);
lean_ctor_set(v___x_5682_, 1, v_val_5680_);
v___x_5683_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5667_, v___x_5682_, v_defaultInstances_5662_);
if (v_isShared_5666_ == 0)
{
lean_ctor_set(v___x_5665_, 1, v___y_5671_);
lean_ctor_set(v___x_5665_, 0, v___x_5683_);
v___x_5685_ = v___x_5665_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v___x_5683_);
lean_ctor_set(v_reuseFailAlloc_5686_, 1, v___y_5671_);
v___x_5685_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
return v___x_5685_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object* v_00_u03b2_5691_, lean_object* v_k_5692_, lean_object* v_t_5693_){
_start:
{
uint8_t v___x_5694_; 
v___x_5694_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5692_, v_t_5693_);
return v___x_5694_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object* v_00_u03b2_5695_, lean_object* v_k_5696_, lean_object* v_t_5697_){
_start:
{
uint8_t v_res_5698_; lean_object* v_r_5699_; 
v_res_5698_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(v_00_u03b2_5695_, v_k_5696_, v_t_5697_);
lean_dec(v_t_5697_);
lean_dec(v_k_5696_);
v_r_5699_ = lean_box(v_res_5698_);
return v_r_5699_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object* v_00_u03b2_5700_, lean_object* v_k_5701_, lean_object* v_v_5702_, lean_object* v_t_5703_, lean_object* v_hl_5704_){
_start:
{
lean_object* v___x_5705_; 
v___x_5705_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5701_, v_v_5702_, v_t_5703_);
return v___x_5705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object* v_env_5706_, lean_object* v_as_5707_, size_t v_i_5708_, size_t v_stop_5709_, lean_object* v_b_5710_){
_start:
{
lean_object* v___y_5712_; uint8_t v___x_5716_; 
v___x_5716_ = lean_usize_dec_eq(v_i_5708_, v_stop_5709_);
if (v___x_5716_ == 0)
{
lean_object* v___x_5717_; lean_object* v_instanceName_5718_; uint8_t v___x_5719_; lean_object* v___x_5720_; uint8_t v___x_5721_; 
v___x_5717_ = lean_array_uget_borrowed(v_as_5707_, v_i_5708_);
v_instanceName_5718_ = lean_ctor_get(v___x_5717_, 1);
v___x_5719_ = 1;
lean_inc_ref(v_env_5706_);
v___x_5720_ = l_Lean_Environment_setExporting(v_env_5706_, v___x_5719_);
lean_inc(v_instanceName_5718_);
v___x_5721_ = l_Lean_Environment_contains(v___x_5720_, v_instanceName_5718_, v___x_5716_);
if (v___x_5721_ == 0)
{
v___y_5712_ = v_b_5710_;
goto v___jp_5711_;
}
else
{
lean_object* v___x_5722_; 
lean_inc(v___x_5717_);
v___x_5722_ = lean_array_push(v_b_5710_, v___x_5717_);
v___y_5712_ = v___x_5722_;
goto v___jp_5711_;
}
}
else
{
lean_dec_ref(v_env_5706_);
return v_b_5710_;
}
v___jp_5711_:
{
size_t v___x_5713_; size_t v___x_5714_; 
v___x_5713_ = ((size_t)1ULL);
v___x_5714_ = lean_usize_add(v_i_5708_, v___x_5713_);
v_i_5708_ = v___x_5714_;
v_b_5710_ = v___y_5712_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_5723_, lean_object* v_as_5724_, lean_object* v_i_5725_, lean_object* v_stop_5726_, lean_object* v_b_5727_){
_start:
{
size_t v_i_boxed_5728_; size_t v_stop_boxed_5729_; lean_object* v_res_5730_; 
v_i_boxed_5728_ = lean_unbox_usize(v_i_5725_);
lean_dec(v_i_5725_);
v_stop_boxed_5729_ = lean_unbox_usize(v_stop_5726_);
lean_dec(v_stop_5726_);
v_res_5730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5723_, v_as_5724_, v_i_boxed_5728_, v_stop_boxed_5729_, v_b_5727_);
lean_dec_ref(v_as_5724_);
return v_res_5730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_env_5733_, lean_object* v_x_5734_, lean_object* v_entries_5735_){
_start:
{
lean_object* v_all_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; uint8_t v___x_5740_; 
v_all_5736_ = lean_array_mk(v_entries_5735_);
v___x_5737_ = lean_unsigned_to_nat(0u);
v___x_5738_ = lean_array_get_size(v_all_5736_);
v___x_5739_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5740_ = lean_nat_dec_lt(v___x_5737_, v___x_5738_);
if (v___x_5740_ == 0)
{
lean_object* v___x_5741_; 
lean_dec_ref(v_env_5733_);
v___x_5741_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5741_, 0, v___x_5739_);
lean_ctor_set(v___x_5741_, 1, v___x_5739_);
lean_ctor_set(v___x_5741_, 2, v_all_5736_);
return v___x_5741_;
}
else
{
uint8_t v___x_5742_; 
v___x_5742_ = lean_nat_dec_le(v___x_5738_, v___x_5738_);
if (v___x_5742_ == 0)
{
if (v___x_5740_ == 0)
{
lean_object* v___x_5743_; 
lean_dec_ref(v_env_5733_);
v___x_5743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5743_, 0, v___x_5739_);
lean_ctor_set(v___x_5743_, 1, v___x_5739_);
lean_ctor_set(v___x_5743_, 2, v_all_5736_);
return v___x_5743_;
}
else
{
size_t v___x_5744_; size_t v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; 
v___x_5744_ = ((size_t)0ULL);
v___x_5745_ = lean_usize_of_nat(v___x_5738_);
v___x_5746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5733_, v_all_5736_, v___x_5744_, v___x_5745_, v___x_5739_);
lean_inc_ref(v___x_5746_);
v___x_5747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5746_);
lean_ctor_set(v___x_5747_, 1, v___x_5746_);
lean_ctor_set(v___x_5747_, 2, v_all_5736_);
return v___x_5747_;
}
}
else
{
size_t v___x_5748_; size_t v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; 
v___x_5748_ = ((size_t)0ULL);
v___x_5749_ = lean_usize_of_nat(v___x_5738_);
v___x_5750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5733_, v_all_5736_, v___x_5748_, v___x_5749_, v___x_5739_);
lean_inc_ref(v___x_5750_);
v___x_5751_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5751_, 0, v___x_5750_);
lean_ctor_set(v___x_5751_, 1, v___x_5750_);
lean_ctor_set(v___x_5751_, 2, v_all_5736_);
return v___x_5751_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_env_5752_, lean_object* v_x_5753_, lean_object* v_entries_5754_){
_start:
{
lean_object* v_res_5755_; 
v_res_5755_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_env_5752_, v_x_5753_, v_entries_5754_);
lean_dec_ref(v_x_5753_);
return v_res_5755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5756_){
_start:
{
lean_object* v___x_5757_; 
v___x_5757_ = lean_array_mk(v_es_5756_);
return v___x_5757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_as_5758_, size_t v_i_5759_, size_t v_stop_5760_, lean_object* v_b_5761_){
_start:
{
uint8_t v___x_5762_; 
v___x_5762_ = lean_usize_dec_eq(v_i_5759_, v_stop_5760_);
if (v___x_5762_ == 0)
{
lean_object* v___x_5763_; lean_object* v___x_5764_; size_t v___x_5765_; size_t v___x_5766_; 
v___x_5763_ = lean_array_uget_borrowed(v_as_5758_, v_i_5759_);
lean_inc(v___x_5763_);
v___x_5764_ = l_Lean_Meta_addDefaultInstanceEntry(v_b_5761_, v___x_5763_);
v___x_5765_ = ((size_t)1ULL);
v___x_5766_ = lean_usize_add(v_i_5759_, v___x_5765_);
v_i_5759_ = v___x_5766_;
v_b_5761_ = v___x_5764_;
goto _start;
}
else
{
return v_b_5761_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_as_5768_, lean_object* v_i_5769_, lean_object* v_stop_5770_, lean_object* v_b_5771_){
_start:
{
size_t v_i_boxed_5772_; size_t v_stop_boxed_5773_; lean_object* v_res_5774_; 
v_i_boxed_5772_ = lean_unbox_usize(v_i_5769_);
lean_dec(v_i_5769_);
v_stop_boxed_5773_ = lean_unbox_usize(v_stop_5770_);
lean_dec(v_stop_5770_);
v_res_5774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v_as_5768_, v_i_boxed_5772_, v_stop_boxed_5773_, v_b_5771_);
lean_dec_ref(v_as_5768_);
return v_res_5774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_5775_, size_t v_i_5776_, size_t v_stop_5777_, lean_object* v_b_5778_){
_start:
{
lean_object* v___y_5780_; uint8_t v___x_5784_; 
v___x_5784_ = lean_usize_dec_eq(v_i_5776_, v_stop_5777_);
if (v___x_5784_ == 0)
{
lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; uint8_t v___x_5788_; 
v___x_5785_ = lean_array_uget_borrowed(v_as_5775_, v_i_5776_);
v___x_5786_ = lean_unsigned_to_nat(0u);
v___x_5787_ = lean_array_get_size(v___x_5785_);
v___x_5788_ = lean_nat_dec_lt(v___x_5786_, v___x_5787_);
if (v___x_5788_ == 0)
{
v___y_5780_ = v_b_5778_;
goto v___jp_5779_;
}
else
{
size_t v___x_5789_; size_t v___x_5790_; lean_object* v___x_5791_; 
v___x_5789_ = ((size_t)0ULL);
v___x_5790_ = lean_usize_of_nat(v___x_5787_);
v___x_5791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v___x_5785_, v___x_5789_, v___x_5790_, v_b_5778_);
v___y_5780_ = v___x_5791_;
goto v___jp_5779_;
}
}
else
{
return v_b_5778_;
}
v___jp_5779_:
{
size_t v___x_5781_; size_t v___x_5782_; 
v___x_5781_ = ((size_t)1ULL);
v___x_5782_ = lean_usize_add(v_i_5776_, v___x_5781_);
v_i_5776_ = v___x_5782_;
v_b_5778_ = v___y_5780_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_5792_, lean_object* v_i_5793_, lean_object* v_stop_5794_, lean_object* v_b_5795_){
_start:
{
size_t v_i_boxed_5796_; size_t v_stop_boxed_5797_; lean_object* v_res_5798_; 
v_i_boxed_5796_ = lean_unbox_usize(v_i_5793_);
lean_dec(v_i_5793_);
v_stop_boxed_5797_ = lean_unbox_usize(v_stop_5794_);
lean_dec(v_stop_5794_);
v_res_5798_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_5792_, v_i_boxed_5796_, v_stop_boxed_5797_, v_b_5795_);
lean_dec_ref(v_as_5792_);
return v_res_5798_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object* v_initState_5799_, lean_object* v_as_5800_){
_start:
{
lean_object* v___x_5801_; lean_object* v___x_5802_; uint8_t v___x_5803_; 
v___x_5801_ = lean_unsigned_to_nat(0u);
v___x_5802_ = lean_array_get_size(v_as_5800_);
v___x_5803_ = lean_nat_dec_lt(v___x_5801_, v___x_5802_);
if (v___x_5803_ == 0)
{
return v_initState_5799_;
}
else
{
size_t v___x_5804_; size_t v___x_5805_; lean_object* v___x_5806_; 
v___x_5804_ = ((size_t)0ULL);
v___x_5805_ = lean_usize_of_nat(v___x_5802_);
v___x_5806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_5800_, v___x_5804_, v___x_5805_, v_initState_5799_);
return v___x_5806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object* v_initState_5807_, lean_object* v_as_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v_initState_5807_, v_as_5808_);
lean_dec_ref(v_as_5808_);
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5810_){
_start:
{
lean_object* v___x_5811_; lean_object* v___x_5812_; 
v___x_5811_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0));
v___x_5812_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v___x_5811_, v_es_5810_);
return v___x_5812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_es_5813_){
_start:
{
lean_object* v_res_5814_; 
v_res_5814_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_es_5813_);
lean_dec_ref(v_es_5813_);
return v_res_5814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5835_; lean_object* v___x_5836_; 
v___x_5835_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5836_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_5835_);
return v___x_5836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_a_5837_){
_start:
{
lean_object* v_res_5838_; 
v_res_5838_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
return v_res_5838_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object* v_env_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_){
_start:
{
lean_object* v___x_5843_; lean_object* v_nextMacroScope_5844_; lean_object* v_ngen_5845_; lean_object* v_auxDeclNGen_5846_; lean_object* v_traceState_5847_; lean_object* v_messages_5848_; lean_object* v_infoState_5849_; lean_object* v_snapshotTasks_5850_; lean_object* v___x_5852_; uint8_t v_isShared_5853_; uint8_t v_isSharedCheck_5876_; 
v___x_5843_ = lean_st_ref_take(v___y_5841_);
v_nextMacroScope_5844_ = lean_ctor_get(v___x_5843_, 1);
v_ngen_5845_ = lean_ctor_get(v___x_5843_, 2);
v_auxDeclNGen_5846_ = lean_ctor_get(v___x_5843_, 3);
v_traceState_5847_ = lean_ctor_get(v___x_5843_, 4);
v_messages_5848_ = lean_ctor_get(v___x_5843_, 6);
v_infoState_5849_ = lean_ctor_get(v___x_5843_, 7);
v_snapshotTasks_5850_ = lean_ctor_get(v___x_5843_, 8);
v_isSharedCheck_5876_ = !lean_is_exclusive(v___x_5843_);
if (v_isSharedCheck_5876_ == 0)
{
lean_object* v_unused_5877_; lean_object* v_unused_5878_; 
v_unused_5877_ = lean_ctor_get(v___x_5843_, 5);
lean_dec(v_unused_5877_);
v_unused_5878_ = lean_ctor_get(v___x_5843_, 0);
lean_dec(v_unused_5878_);
v___x_5852_ = v___x_5843_;
v_isShared_5853_ = v_isSharedCheck_5876_;
goto v_resetjp_5851_;
}
else
{
lean_inc(v_snapshotTasks_5850_);
lean_inc(v_infoState_5849_);
lean_inc(v_messages_5848_);
lean_inc(v_traceState_5847_);
lean_inc(v_auxDeclNGen_5846_);
lean_inc(v_ngen_5845_);
lean_inc(v_nextMacroScope_5844_);
lean_dec(v___x_5843_);
v___x_5852_ = lean_box(0);
v_isShared_5853_ = v_isSharedCheck_5876_;
goto v_resetjp_5851_;
}
v_resetjp_5851_:
{
lean_object* v___x_5854_; lean_object* v___x_5856_; 
v___x_5854_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_5853_ == 0)
{
lean_ctor_set(v___x_5852_, 5, v___x_5854_);
lean_ctor_set(v___x_5852_, 0, v_env_5839_);
v___x_5856_ = v___x_5852_;
goto v_reusejp_5855_;
}
else
{
lean_object* v_reuseFailAlloc_5875_; 
v_reuseFailAlloc_5875_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5875_, 0, v_env_5839_);
lean_ctor_set(v_reuseFailAlloc_5875_, 1, v_nextMacroScope_5844_);
lean_ctor_set(v_reuseFailAlloc_5875_, 2, v_ngen_5845_);
lean_ctor_set(v_reuseFailAlloc_5875_, 3, v_auxDeclNGen_5846_);
lean_ctor_set(v_reuseFailAlloc_5875_, 4, v_traceState_5847_);
lean_ctor_set(v_reuseFailAlloc_5875_, 5, v___x_5854_);
lean_ctor_set(v_reuseFailAlloc_5875_, 6, v_messages_5848_);
lean_ctor_set(v_reuseFailAlloc_5875_, 7, v_infoState_5849_);
lean_ctor_set(v_reuseFailAlloc_5875_, 8, v_snapshotTasks_5850_);
v___x_5856_ = v_reuseFailAlloc_5875_;
goto v_reusejp_5855_;
}
v_reusejp_5855_:
{
lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v_mctx_5859_; lean_object* v_zetaDeltaFVarIds_5860_; lean_object* v_postponed_5861_; lean_object* v_diag_5862_; lean_object* v___x_5864_; uint8_t v_isShared_5865_; uint8_t v_isSharedCheck_5873_; 
v___x_5857_ = lean_st_ref_put(v___y_5841_, v___x_5856_);
v___x_5858_ = lean_st_ref_take(v___y_5840_);
v_mctx_5859_ = lean_ctor_get(v___x_5858_, 0);
v_zetaDeltaFVarIds_5860_ = lean_ctor_get(v___x_5858_, 2);
v_postponed_5861_ = lean_ctor_get(v___x_5858_, 3);
v_diag_5862_ = lean_ctor_get(v___x_5858_, 4);
v_isSharedCheck_5873_ = !lean_is_exclusive(v___x_5858_);
if (v_isSharedCheck_5873_ == 0)
{
lean_object* v_unused_5874_; 
v_unused_5874_ = lean_ctor_get(v___x_5858_, 1);
lean_dec(v_unused_5874_);
v___x_5864_ = v___x_5858_;
v_isShared_5865_ = v_isSharedCheck_5873_;
goto v_resetjp_5863_;
}
else
{
lean_inc(v_diag_5862_);
lean_inc(v_postponed_5861_);
lean_inc(v_zetaDeltaFVarIds_5860_);
lean_inc(v_mctx_5859_);
lean_dec(v___x_5858_);
v___x_5864_ = lean_box(0);
v_isShared_5865_ = v_isSharedCheck_5873_;
goto v_resetjp_5863_;
}
v_resetjp_5863_:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5869_; 
v___x_5866_ = lean_box(0);
v___x_5867_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_5865_ == 0)
{
lean_ctor_set(v___x_5864_, 1, v___x_5867_);
v___x_5869_ = v___x_5864_;
goto v_reusejp_5868_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_mctx_5859_);
lean_ctor_set(v_reuseFailAlloc_5872_, 1, v___x_5867_);
lean_ctor_set(v_reuseFailAlloc_5872_, 2, v_zetaDeltaFVarIds_5860_);
lean_ctor_set(v_reuseFailAlloc_5872_, 3, v_postponed_5861_);
lean_ctor_set(v_reuseFailAlloc_5872_, 4, v_diag_5862_);
v___x_5869_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5868_;
}
v_reusejp_5868_:
{
lean_object* v___x_5870_; lean_object* v___x_5871_; 
v___x_5870_ = lean_st_ref_put(v___y_5840_, v___x_5869_);
v___x_5871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5871_, 0, v___x_5866_);
return v___x_5871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object* v_env_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_){
_start:
{
lean_object* v_res_5883_; 
v_res_5883_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_5879_, v___y_5880_, v___y_5881_);
lean_dec(v___y_5881_);
lean_dec(v___y_5880_);
return v_res_5883_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object* v_env_5884_, lean_object* v___y_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_){
_start:
{
lean_object* v___x_5890_; 
v___x_5890_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_5884_, v___y_5886_, v___y_5888_);
return v___x_5890_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object* v_env_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_){
_start:
{
lean_object* v_res_5897_; 
v_res_5897_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(v_env_5891_, v___y_5892_, v___y_5893_, v___y_5894_, v___y_5895_);
lean_dec(v___y_5895_);
lean_dec_ref(v___y_5894_);
lean_dec(v___y_5893_);
lean_dec_ref(v___y_5892_);
return v_res_5897_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; 
v___x_5899_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__0));
v___x_5900_ = l_Lean_stringToMessageData(v___x_5899_);
return v___x_5900_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5902_; lean_object* v___x_5903_; 
v___x_5902_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__2));
v___x_5903_ = l_Lean_stringToMessageData(v___x_5902_);
return v___x_5903_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5905_; lean_object* v___x_5906_; 
v___x_5905_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__4));
v___x_5906_ = l_Lean_stringToMessageData(v___x_5905_);
return v___x_5906_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__7(void){
_start:
{
lean_object* v___x_5908_; lean_object* v___x_5909_; 
v___x_5908_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__6));
v___x_5909_ = l_Lean_stringToMessageData(v___x_5908_);
return v___x_5909_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__9(void){
_start:
{
lean_object* v___x_5911_; lean_object* v___x_5912_; 
v___x_5911_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__8));
v___x_5912_ = l_Lean_stringToMessageData(v___x_5911_);
return v___x_5912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object* v_declName_5913_, lean_object* v_prio_5914_, lean_object* v_x_5915_, lean_object* v_type_5916_, lean_object* v___y_5917_, lean_object* v___y_5918_, lean_object* v___y_5919_, lean_object* v___y_5920_){
_start:
{
lean_object* v___x_5922_; 
v___x_5922_ = l_Lean_Expr_getAppFn(v_type_5916_);
if (lean_obj_tag(v___x_5922_) == 4)
{
lean_object* v_declName_5923_; lean_object* v___y_5925_; lean_object* v___y_5926_; lean_object* v___y_5927_; lean_object* v___y_5928_; lean_object* v___x_5938_; lean_object* v_env_5939_; uint8_t v___x_5940_; 
v_declName_5923_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_declName_5923_);
lean_dec_ref_known(v___x_5922_, 2);
v___x_5938_ = lean_st_ref_get(v___y_5920_);
v_env_5939_ = lean_ctor_get(v___x_5938_, 0);
lean_inc_ref(v_env_5939_);
lean_dec(v___x_5938_);
v___x_5940_ = l_Lean_isClass(v_env_5939_, v_declName_5923_);
if (v___x_5940_ == 0)
{
lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; 
lean_dec(v_prio_5914_);
v___x_5941_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__1, &l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1);
v___x_5942_ = l_Lean_MessageData_ofConstName(v_declName_5913_, v___x_5940_);
v___x_5943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5941_);
lean_ctor_set(v___x_5943_, 1, v___x_5942_);
v___x_5944_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__3, &l_Lean_Meta_addDefaultInstance___lam__0___closed__3_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__3);
v___x_5945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5945_, 0, v___x_5943_);
lean_ctor_set(v___x_5945_, 1, v___x_5944_);
lean_inc(v_declName_5923_);
v___x_5946_ = l_Lean_MessageData_ofName(v_declName_5923_);
v___x_5947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5947_, 0, v___x_5945_);
lean_ctor_set(v___x_5947_, 1, v___x_5946_);
v___x_5948_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__5, &l_Lean_Meta_addDefaultInstance___lam__0___closed__5_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__5);
v___x_5949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5947_);
lean_ctor_set(v___x_5949_, 1, v___x_5948_);
v___x_5950_ = l_Lean_MessageData_ofConstName(v_declName_5923_, v___x_5940_);
v___x_5951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5949_);
lean_ctor_set(v___x_5951_, 1, v___x_5950_);
v___x_5952_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__7, &l_Lean_Meta_addDefaultInstance___lam__0___closed__7_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__7);
v___x_5953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5953_, 0, v___x_5951_);
lean_ctor_set(v___x_5953_, 1, v___x_5952_);
v___x_5954_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5953_, v___y_5917_, v___y_5918_, v___y_5919_, v___y_5920_);
return v___x_5954_;
}
else
{
v___y_5925_ = v___y_5917_;
v___y_5926_ = v___y_5918_;
v___y_5927_ = v___y_5919_;
v___y_5928_ = v___y_5920_;
goto v___jp_5924_;
}
v___jp_5924_:
{
lean_object* v___x_5929_; lean_object* v_env_5930_; lean_object* v___x_5931_; lean_object* v_toEnvExtension_5932_; lean_object* v_asyncMode_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; 
v___x_5929_ = lean_st_ref_get(v___y_5928_);
v_env_5930_ = lean_ctor_get(v___x_5929_, 0);
lean_inc_ref(v_env_5930_);
lean_dec(v___x_5929_);
v___x_5931_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_5932_ = lean_ctor_get(v___x_5931_, 0);
v_asyncMode_5933_ = lean_ctor_get(v_toEnvExtension_5932_, 2);
v___x_5934_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5934_, 0, v_declName_5923_);
lean_ctor_set(v___x_5934_, 1, v_declName_5913_);
lean_ctor_set(v___x_5934_, 2, v_prio_5914_);
v___x_5935_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0);
v___x_5936_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_5931_, v_env_5930_, v___x_5934_, v_asyncMode_5933_, v___x_5935_);
v___x_5937_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_5936_, v___y_5926_, v___y_5928_);
return v___x_5937_;
}
}
else
{
lean_object* v___x_5955_; uint8_t v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
lean_dec_ref(v___x_5922_);
lean_dec(v_prio_5914_);
v___x_5955_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__1, &l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1);
v___x_5956_ = 0;
v___x_5957_ = l_Lean_MessageData_ofConstName(v_declName_5913_, v___x_5956_);
v___x_5958_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5958_, 0, v___x_5955_);
lean_ctor_set(v___x_5958_, 1, v___x_5957_);
v___x_5959_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__9, &l_Lean_Meta_addDefaultInstance___lam__0___closed__9_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__9);
v___x_5960_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5958_);
lean_ctor_set(v___x_5960_, 1, v___x_5959_);
v___x_5961_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5960_, v___y_5917_, v___y_5918_, v___y_5919_, v___y_5920_);
return v___x_5961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0___boxed(lean_object* v_declName_5962_, lean_object* v_prio_5963_, lean_object* v_x_5964_, lean_object* v_type_5965_, lean_object* v___y_5966_, lean_object* v___y_5967_, lean_object* v___y_5968_, lean_object* v___y_5969_, lean_object* v___y_5970_){
_start:
{
lean_object* v_res_5971_; 
v_res_5971_ = l_Lean_Meta_addDefaultInstance___lam__0(v_declName_5962_, v_prio_5963_, v_x_5964_, v_type_5965_, v___y_5966_, v___y_5967_, v___y_5968_, v___y_5969_);
lean_dec(v___y_5969_);
lean_dec_ref(v___y_5968_);
lean_dec(v___y_5967_);
lean_dec_ref(v___y_5966_);
lean_dec_ref(v_type_5965_);
lean_dec_ref(v_x_5964_);
return v_res_5971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object* v_declName_5972_, lean_object* v_prio_5973_, lean_object* v_a_5974_, lean_object* v_a_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_){
_start:
{
lean_object* v___f_5979_; lean_object* v___x_5980_; lean_object* v_env_5981_; uint8_t v___x_5982_; lean_object* v___x_5983_; 
lean_inc_n(v_declName_5972_, 2);
v___f_5979_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5979_, 0, v_declName_5972_);
lean_closure_set(v___f_5979_, 1, v_prio_5973_);
v___x_5980_ = lean_st_ref_get(v_a_5977_);
v_env_5981_ = lean_ctor_get(v___x_5980_, 0);
lean_inc_ref(v_env_5981_);
lean_dec(v___x_5980_);
v___x_5982_ = 0;
v___x_5983_ = l_Lean_Environment_find_x3f(v_env_5981_, v_declName_5972_, v___x_5982_);
if (lean_obj_tag(v___x_5983_) == 0)
{
lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
lean_dec_ref(v___f_5979_);
v___x_5984_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1);
v___x_5985_ = l_Lean_MessageData_ofConstName(v_declName_5972_, v___x_5982_);
v___x_5986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5986_, 0, v___x_5984_);
lean_ctor_set(v___x_5986_, 1, v___x_5985_);
v___x_5987_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_5988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5988_, 0, v___x_5986_);
lean_ctor_set(v___x_5988_, 1, v___x_5987_);
v___x_5989_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5988_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_);
return v___x_5989_;
}
else
{
lean_object* v_val_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
lean_dec(v_declName_5972_);
v_val_5990_ = lean_ctor_get(v___x_5983_, 0);
lean_inc(v_val_5990_);
lean_dec_ref_known(v___x_5983_, 1);
v___x_5991_ = l_Lean_ConstantInfo_type(v_val_5990_);
lean_dec(v_val_5990_);
v___x_5992_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v___x_5991_, v___f_5979_, v___x_5982_, v___x_5982_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_);
return v___x_5992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object* v_declName_5993_, lean_object* v_prio_5994_, lean_object* v_a_5995_, lean_object* v_a_5996_, lean_object* v_a_5997_, lean_object* v_a_5998_, lean_object* v_a_5999_){
_start:
{
lean_object* v_res_6000_; 
v_res_6000_ = l_Lean_Meta_addDefaultInstance(v_declName_5993_, v_prio_5994_, v_a_5995_, v_a_5996_, v_a_5997_, v_a_5998_);
lean_dec(v_a_5998_);
lean_dec_ref(v_a_5997_);
lean_dec(v_a_5996_);
lean_dec_ref(v_a_5995_);
return v_res_6000_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6002_; lean_object* v___x_6003_; 
v___x_6002_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0));
v___x_6003_ = l_Lean_stringToMessageData(v___x_6002_);
return v___x_6003_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_6005_; lean_object* v___x_6006_; 
v___x_6005_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2));
v___x_6006_ = l_Lean_stringToMessageData(v___x_6005_);
return v___x_6006_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object* v_name_6010_, uint8_t v_kind_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_){
_start:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___y_6021_; 
v___x_6015_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1);
v___x_6016_ = l_Lean_MessageData_ofName(v_name_6010_);
v___x_6017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6017_, 0, v___x_6015_);
lean_ctor_set(v___x_6017_, 1, v___x_6016_);
v___x_6018_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3);
v___x_6019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6017_);
lean_ctor_set(v___x_6019_, 1, v___x_6018_);
switch(v_kind_6011_)
{
case 0:
{
lean_object* v___x_6028_; 
v___x_6028_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4));
v___y_6021_ = v___x_6028_;
goto v___jp_6020_;
}
case 1:
{
lean_object* v___x_6029_; 
v___x_6029_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5));
v___y_6021_ = v___x_6029_;
goto v___jp_6020_;
}
default: 
{
lean_object* v___x_6030_; 
v___x_6030_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6));
v___y_6021_ = v___x_6030_;
goto v___jp_6020_;
}
}
v___jp_6020_:
{
lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; 
lean_inc_ref(v___y_6021_);
v___x_6022_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6022_, 0, v___y_6021_);
v___x_6023_ = l_Lean_MessageData_ofFormat(v___x_6022_);
v___x_6024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6019_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
v___x_6025_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_6026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6026_, 0, v___x_6024_);
lean_ctor_set(v___x_6026_, 1, v___x_6025_);
v___x_6027_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6026_, v___y_6012_, v___y_6013_);
return v___x_6027_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_name_6031_, lean_object* v_kind_6032_, lean_object* v___y_6033_, lean_object* v___y_6034_, lean_object* v___y_6035_){
_start:
{
uint8_t v_kind_boxed_6036_; lean_object* v_res_6037_; 
v_kind_boxed_6036_ = lean_unbox(v_kind_6032_);
v_res_6037_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6031_, v_kind_boxed_6036_, v___y_6033_, v___y_6034_);
lean_dec(v___y_6034_);
lean_dec_ref(v___y_6033_);
return v_res_6037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6038_, lean_object* v___x_6039_, lean_object* v___x_6040_, lean_object* v_declName_6041_, lean_object* v_stx_6042_, uint8_t v_kind_6043_, lean_object* v___y_6044_, lean_object* v___y_6045_){
_start:
{
lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; 
v___x_6047_ = lean_unsigned_to_nat(1u);
v___x_6048_ = l_Lean_Syntax_getArg(v_stx_6042_, v___x_6047_);
v___x_6049_ = l_Lean_getAttrParamOptPrio(v___x_6048_, v___y_6044_, v___y_6045_);
if (lean_obj_tag(v___x_6049_) == 0)
{
lean_object* v_a_6050_; lean_object* v___y_6052_; lean_object* v___y_6053_; uint8_t v___x_6084_; uint8_t v___x_6085_; 
v_a_6050_ = lean_ctor_get(v___x_6049_, 0);
lean_inc(v_a_6050_);
lean_dec_ref_known(v___x_6049_, 1);
v___x_6084_ = 0;
v___x_6085_ = l_Lean_instBEqAttributeKind_beq(v_kind_6043_, v___x_6084_);
if (v___x_6085_ == 0)
{
lean_object* v___x_6086_; 
lean_dec(v_a_6050_);
lean_dec(v_declName_6041_);
lean_dec(v___x_6039_);
lean_dec(v___x_6038_);
v___x_6086_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v___x_6040_, v_kind_6043_, v___y_6044_, v___y_6045_);
return v___x_6086_;
}
else
{
lean_dec(v___x_6040_);
v___y_6052_ = v___y_6044_;
v___y_6053_ = v___y_6045_;
goto v___jp_6051_;
}
v___jp_6051_:
{
uint8_t v___x_6054_; uint8_t v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; size_t v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; 
v___x_6054_ = 0;
v___x_6055_ = 1;
v___x_6056_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6057_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6058_ = lean_unsigned_to_nat(32u);
v___x_6059_ = lean_mk_empty_array_with_capacity(v___x_6058_);
v___x_6060_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_6061_ = ((size_t)5ULL);
lean_inc_n(v___x_6038_, 6);
v___x_6062_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6062_, 0, v___x_6060_);
lean_ctor_set(v___x_6062_, 1, v___x_6059_);
lean_ctor_set(v___x_6062_, 2, v___x_6038_);
lean_ctor_set(v___x_6062_, 3, v___x_6038_);
lean_ctor_set_usize(v___x_6062_, 4, v___x_6061_);
v___x_6063_ = lean_box(1);
lean_inc_ref(v___x_6062_);
v___x_6064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6064_, 0, v___x_6057_);
lean_ctor_set(v___x_6064_, 1, v___x_6062_);
lean_ctor_set(v___x_6064_, 2, v___x_6063_);
v___x_6065_ = lean_mk_empty_array_with_capacity(v___x_6038_);
v___x_6066_ = lean_box(0);
lean_inc(v___x_6039_);
v___x_6067_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6067_, 0, v___x_6056_);
lean_ctor_set(v___x_6067_, 1, v___x_6039_);
lean_ctor_set(v___x_6067_, 2, v___x_6064_);
lean_ctor_set(v___x_6067_, 3, v___x_6065_);
lean_ctor_set(v___x_6067_, 4, v___x_6066_);
lean_ctor_set(v___x_6067_, 5, v___x_6038_);
lean_ctor_set(v___x_6067_, 6, v___x_6066_);
lean_ctor_set_uint8(v___x_6067_, sizeof(void*)*7, v___x_6054_);
lean_ctor_set_uint8(v___x_6067_, sizeof(void*)*7 + 1, v___x_6054_);
lean_ctor_set_uint8(v___x_6067_, sizeof(void*)*7 + 2, v___x_6054_);
lean_ctor_set_uint8(v___x_6067_, sizeof(void*)*7 + 3, v___x_6055_);
v___x_6068_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6068_, 0, v___x_6038_);
lean_ctor_set(v___x_6068_, 1, v___x_6038_);
lean_ctor_set(v___x_6068_, 2, v___x_6038_);
lean_ctor_set(v___x_6068_, 3, v___x_6038_);
lean_ctor_set(v___x_6068_, 4, v___x_6057_);
lean_ctor_set(v___x_6068_, 5, v___x_6057_);
lean_ctor_set(v___x_6068_, 6, v___x_6057_);
lean_ctor_set(v___x_6068_, 7, v___x_6057_);
lean_ctor_set(v___x_6068_, 8, v___x_6057_);
lean_ctor_set(v___x_6068_, 9, v___x_6057_);
lean_ctor_set(v___x_6068_, 10, v___x_6057_);
v___x_6069_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6070_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6068_);
lean_ctor_set(v___x_6071_, 1, v___x_6069_);
lean_ctor_set(v___x_6071_, 2, v___x_6039_);
lean_ctor_set(v___x_6071_, 3, v___x_6062_);
lean_ctor_set(v___x_6071_, 4, v___x_6070_);
v___x_6072_ = lean_box(0);
v___x_6073_ = lean_st_mk_ref(v___x_6071_);
v___x_6074_ = l_Lean_Meta_addDefaultInstance(v_declName_6041_, v_a_6050_, v___x_6067_, v___x_6073_, v___y_6052_, v___y_6053_);
lean_dec_ref_known(v___x_6067_, 7);
if (lean_obj_tag(v___x_6074_) == 0)
{
lean_object* v___x_6076_; uint8_t v_isShared_6077_; uint8_t v_isSharedCheck_6082_; 
v_isSharedCheck_6082_ = !lean_is_exclusive(v___x_6074_);
if (v_isSharedCheck_6082_ == 0)
{
lean_object* v_unused_6083_; 
v_unused_6083_ = lean_ctor_get(v___x_6074_, 0);
lean_dec(v_unused_6083_);
v___x_6076_ = v___x_6074_;
v_isShared_6077_ = v_isSharedCheck_6082_;
goto v_resetjp_6075_;
}
else
{
lean_dec(v___x_6074_);
v___x_6076_ = lean_box(0);
v_isShared_6077_ = v_isSharedCheck_6082_;
goto v_resetjp_6075_;
}
v_resetjp_6075_:
{
lean_object* v___x_6078_; lean_object* v___x_6080_; 
v___x_6078_ = lean_st_ref_get(v___x_6073_);
lean_dec(v___x_6073_);
lean_dec(v___x_6078_);
if (v_isShared_6077_ == 0)
{
lean_ctor_set(v___x_6076_, 0, v___x_6072_);
v___x_6080_ = v___x_6076_;
goto v_reusejp_6079_;
}
else
{
lean_object* v_reuseFailAlloc_6081_; 
v_reuseFailAlloc_6081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6081_, 0, v___x_6072_);
v___x_6080_ = v_reuseFailAlloc_6081_;
goto v_reusejp_6079_;
}
v_reusejp_6079_:
{
return v___x_6080_;
}
}
}
else
{
lean_dec(v___x_6073_);
return v___x_6074_;
}
}
}
else
{
lean_object* v_a_6087_; lean_object* v___x_6089_; uint8_t v_isShared_6090_; uint8_t v_isSharedCheck_6094_; 
lean_dec(v_declName_6041_);
lean_dec(v___x_6040_);
lean_dec(v___x_6039_);
lean_dec(v___x_6038_);
v_a_6087_ = lean_ctor_get(v___x_6049_, 0);
v_isSharedCheck_6094_ = !lean_is_exclusive(v___x_6049_);
if (v_isSharedCheck_6094_ == 0)
{
v___x_6089_ = v___x_6049_;
v_isShared_6090_ = v_isSharedCheck_6094_;
goto v_resetjp_6088_;
}
else
{
lean_inc(v_a_6087_);
lean_dec(v___x_6049_);
v___x_6089_ = lean_box(0);
v_isShared_6090_ = v_isSharedCheck_6094_;
goto v_resetjp_6088_;
}
v_resetjp_6088_:
{
lean_object* v___x_6092_; 
if (v_isShared_6090_ == 0)
{
v___x_6092_ = v___x_6089_;
goto v_reusejp_6091_;
}
else
{
lean_object* v_reuseFailAlloc_6093_; 
v_reuseFailAlloc_6093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6093_, 0, v_a_6087_);
v___x_6092_ = v_reuseFailAlloc_6093_;
goto v_reusejp_6091_;
}
v_reusejp_6091_:
{
return v___x_6092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6095_, lean_object* v___x_6096_, lean_object* v___x_6097_, lean_object* v_declName_6098_, lean_object* v_stx_6099_, lean_object* v_kind_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_){
_start:
{
uint8_t v_kind_boxed_6104_; lean_object* v_res_6105_; 
v_kind_boxed_6104_ = lean_unbox(v_kind_6100_);
v_res_6105_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6095_, v___x_6096_, v___x_6097_, v_declName_6098_, v_stx_6099_, v_kind_boxed_6104_, v___y_6101_, v___y_6102_);
lean_dec(v___y_6102_);
lean_dec_ref(v___y_6101_);
lean_dec(v_stx_6099_);
return v_res_6105_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6107_; lean_object* v___x_6108_; 
v___x_6107_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6108_ = l_Lean_stringToMessageData(v___x_6107_);
return v___x_6108_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6110_; lean_object* v___x_6111_; 
v___x_6110_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6111_ = l_Lean_stringToMessageData(v___x_6110_);
return v___x_6111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6112_, lean_object* v_decl_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_){
_start:
{
lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; 
v___x_6117_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6118_ = l_Lean_MessageData_ofName(v___x_6112_);
v___x_6119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6119_, 0, v___x_6117_);
lean_ctor_set(v___x_6119_, 1, v___x_6118_);
v___x_6120_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6119_);
lean_ctor_set(v___x_6121_, 1, v___x_6120_);
v___x_6122_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6121_, v___y_6114_, v___y_6115_);
return v___x_6122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6123_, lean_object* v_decl_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_){
_start:
{
lean_object* v_res_6128_; 
v_res_6128_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6123_, v_decl_6124_, v___y_6125_, v___y_6126_);
lean_dec(v___y_6126_);
lean_dec_ref(v___y_6125_);
lean_dec(v_decl_6124_);
return v_res_6128_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6129_ = lean_unsigned_to_nat(397728026u);
v___x_6130_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6131_ = l_Lean_Name_num___override(v___x_6130_, v___x_6129_);
return v___x_6131_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; 
v___x_6132_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_6133_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6134_ = l_Lean_Name_str___override(v___x_6133_, v___x_6132_);
return v___x_6134_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; 
v___x_6135_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_6136_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6137_ = l_Lean_Name_str___override(v___x_6136_, v___x_6135_);
return v___x_6137_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; 
v___x_6138_ = lean_unsigned_to_nat(2u);
v___x_6139_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6140_ = l_Lean_Name_num___override(v___x_6139_, v___x_6138_);
return v___x_6140_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; 
v___x_6151_ = 0;
v___x_6152_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6153_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6154_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6155_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6155_, 0, v___x_6154_);
lean_ctor_set(v___x_6155_, 1, v___x_6153_);
lean_ctor_set(v___x_6155_, 2, v___x_6152_);
lean_ctor_set_uint8(v___x_6155_, sizeof(void*)*3, v___x_6151_);
return v___x_6155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_6156_; lean_object* v___f_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; 
v___f_6156_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___f_6157_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6158_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6158_);
lean_ctor_set(v___x_6159_, 1, v___f_6157_);
lean_ctor_set(v___x_6159_, 2, v___f_6156_);
return v___x_6159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; 
v___x_6161_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6162_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6163_ = l_Lean_registerBuiltinAttribute(v___x_6162_);
if (lean_obj_tag(v___x_6163_) == 0)
{
lean_object* v___x_6164_; uint8_t v___x_6165_; lean_object* v___x_6166_; 
lean_dec_ref_known(v___x_6163_, 1);
v___x_6164_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_6165_ = 0;
v___x_6166_ = l_Lean_registerTraceClass(v___x_6164_, v___x_6165_, v___x_6161_);
return v___x_6166_;
}
else
{
return v___x_6163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v_a_6167_){
_start:
{
lean_object* v_res_6168_; 
v_res_6168_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
return v_res_6168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_6169_, lean_object* v_name_6170_, uint8_t v_kind_6171_, lean_object* v___y_6172_, lean_object* v___y_6173_){
_start:
{
lean_object* v___x_6175_; 
v___x_6175_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6170_, v_kind_6171_, v___y_6172_, v___y_6173_);
return v___x_6175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_6176_, lean_object* v_name_6177_, lean_object* v_kind_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_){
_start:
{
uint8_t v_kind_boxed_6182_; lean_object* v_res_6183_; 
v_kind_boxed_6182_ = lean_unbox(v_kind_6178_);
v_res_6183_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(v_00_u03b1_6176_, v_name_6177_, v_kind_boxed_6182_, v___y_6179_, v___y_6180_);
lean_dec(v___y_6180_);
lean_dec_ref(v___y_6179_);
return v_res_6183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object* v___x_6184_, lean_object* v_toPure_6185_, lean_object* v_____do__lift_6186_){
_start:
{
lean_object* v___x_6187_; lean_object* v_toEnvExtension_6188_; lean_object* v_asyncMode_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v_priorities_6192_; lean_object* v___x_6193_; 
v___x_6187_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6188_ = lean_ctor_get(v___x_6187_, 0);
v_asyncMode_6189_ = lean_ctor_get(v_toEnvExtension_6188_, 2);
v___x_6190_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0);
v___x_6191_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6184_, v___x_6187_, v_____do__lift_6186_, v_asyncMode_6189_, v___x_6190_);
v_priorities_6192_ = lean_ctor_get(v___x_6191_, 1);
lean_inc(v_priorities_6192_);
lean_dec(v___x_6191_);
v___x_6193_ = lean_apply_2(v_toPure_6185_, lean_box(0), v_priorities_6192_);
return v___x_6193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object* v_inst_6194_, lean_object* v_inst_6195_){
_start:
{
lean_object* v_toApplicative_6196_; lean_object* v_toBind_6197_; lean_object* v_getEnv_6198_; lean_object* v_toPure_6199_; lean_object* v___x_6200_; lean_object* v___f_6201_; lean_object* v___x_6202_; 
v_toApplicative_6196_ = lean_ctor_get(v_inst_6194_, 0);
lean_inc_ref(v_toApplicative_6196_);
v_toBind_6197_ = lean_ctor_get(v_inst_6194_, 1);
lean_inc(v_toBind_6197_);
lean_dec_ref(v_inst_6194_);
v_getEnv_6198_ = lean_ctor_get(v_inst_6195_, 0);
lean_inc(v_getEnv_6198_);
lean_dec_ref(v_inst_6195_);
v_toPure_6199_ = lean_ctor_get(v_toApplicative_6196_, 1);
lean_inc(v_toPure_6199_);
lean_dec_ref(v_toApplicative_6196_);
v___x_6200_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6201_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0), 3, 2);
lean_closure_set(v___f_6201_, 0, v___x_6200_);
lean_closure_set(v___f_6201_, 1, v_toPure_6199_);
v___x_6202_ = lean_apply_4(v_toBind_6197_, lean_box(0), lean_box(0), v_getEnv_6198_, v___f_6201_);
return v___x_6202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object* v_m_6203_, lean_object* v_inst_6204_, lean_object* v_inst_6205_){
_start:
{
lean_object* v___x_6206_; 
v___x_6206_ = l_Lean_Meta_getDefaultInstancesPriorities___redArg(v_inst_6204_, v_inst_6205_);
return v___x_6206_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object* v_env_6207_, uint8_t v_isExporting_6208_, lean_object* v_x_6209_){
_start:
{
lean_object* v_fst_6210_; uint8_t v___x_6211_; 
v_fst_6210_ = lean_ctor_get(v_x_6209_, 0);
lean_inc(v_fst_6210_);
lean_dec_ref(v_x_6209_);
v___x_6211_ = l_Lean_Environment_contains(v_env_6207_, v_fst_6210_, v_isExporting_6208_);
return v___x_6211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object* v_env_6212_, lean_object* v_isExporting_6213_, lean_object* v_x_6214_){
_start:
{
uint8_t v_isExporting_boxed_6215_; uint8_t v_res_6216_; lean_object* v_r_6217_; 
v_isExporting_boxed_6215_ = lean_unbox(v_isExporting_6213_);
v_res_6216_ = l_Lean_Meta_getDefaultInstances___redArg___lam__0(v_env_6212_, v_isExporting_boxed_6215_, v_x_6214_);
v_r_6217_ = lean_box(v_res_6216_);
return v_r_6217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object* v___x_6218_, lean_object* v_toPure_6219_, lean_object* v_className_6220_, lean_object* v_env_6221_){
_start:
{
lean_object* v___y_6223_; lean_object* v___x_6231_; lean_object* v_toEnvExtension_6232_; lean_object* v_asyncMode_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; lean_object* v_defaultInstances_6236_; lean_object* v___x_6237_; 
v___x_6231_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6232_ = lean_ctor_get(v___x_6231_, 0);
v_asyncMode_6233_ = lean_ctor_get(v_toEnvExtension_6232_, 2);
v___x_6234_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___closed__0);
lean_inc_ref(v_env_6221_);
v___x_6235_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6218_, v___x_6231_, v_env_6221_, v_asyncMode_6233_, v___x_6234_);
v_defaultInstances_6236_ = lean_ctor_get(v___x_6235_, 0);
lean_inc(v_defaultInstances_6236_);
lean_dec(v___x_6235_);
v___x_6237_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_6236_, v_className_6220_);
lean_dec(v_defaultInstances_6236_);
if (lean_obj_tag(v___x_6237_) == 0)
{
lean_object* v___x_6238_; 
v___x_6238_ = lean_box(0);
v___y_6223_ = v___x_6238_;
goto v___jp_6222_;
}
else
{
lean_object* v_val_6239_; 
v_val_6239_ = lean_ctor_get(v___x_6237_, 0);
lean_inc(v_val_6239_);
lean_dec_ref_known(v___x_6237_, 1);
v___y_6223_ = v_val_6239_;
goto v___jp_6222_;
}
v___jp_6222_:
{
uint8_t v_isExporting_6224_; 
v_isExporting_6224_ = lean_ctor_get_uint8(v_env_6221_, sizeof(void*)*8);
if (v_isExporting_6224_ == 0)
{
lean_object* v___x_6225_; 
lean_dec_ref(v_env_6221_);
v___x_6225_ = lean_apply_2(v_toPure_6219_, lean_box(0), v___y_6223_);
return v___x_6225_;
}
else
{
lean_object* v___x_6226_; lean_object* v___f_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; 
v___x_6226_ = lean_box(v_isExporting_6224_);
v___f_6227_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6227_, 0, v_env_6221_);
lean_closure_set(v___f_6227_, 1, v___x_6226_);
v___x_6228_ = lean_box(0);
v___x_6229_ = l_List_filterTR_loop___redArg(v___f_6227_, v___y_6223_, v___x_6228_);
v___x_6230_ = lean_apply_2(v_toPure_6219_, lean_box(0), v___x_6229_);
return v___x_6230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object* v___x_6240_, lean_object* v_toPure_6241_, lean_object* v_className_6242_, lean_object* v_env_6243_){
_start:
{
lean_object* v_res_6244_; 
v_res_6244_ = l_Lean_Meta_getDefaultInstances___redArg___lam__1(v___x_6240_, v_toPure_6241_, v_className_6242_, v_env_6243_);
lean_dec(v_className_6242_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object* v_inst_6245_, lean_object* v_inst_6246_, lean_object* v_className_6247_){
_start:
{
lean_object* v_toApplicative_6248_; lean_object* v_toBind_6249_; lean_object* v_getEnv_6250_; lean_object* v_toPure_6251_; lean_object* v___x_6252_; lean_object* v___f_6253_; lean_object* v___x_6254_; 
v_toApplicative_6248_ = lean_ctor_get(v_inst_6245_, 0);
lean_inc_ref(v_toApplicative_6248_);
v_toBind_6249_ = lean_ctor_get(v_inst_6245_, 1);
lean_inc(v_toBind_6249_);
lean_dec_ref(v_inst_6245_);
v_getEnv_6250_ = lean_ctor_get(v_inst_6246_, 0);
lean_inc(v_getEnv_6250_);
lean_dec_ref(v_inst_6246_);
v_toPure_6251_ = lean_ctor_get(v_toApplicative_6248_, 1);
lean_inc(v_toPure_6251_);
lean_dec_ref(v_toApplicative_6248_);
v___x_6252_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6253_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_6253_, 0, v___x_6252_);
lean_closure_set(v___f_6253_, 1, v_toPure_6251_);
lean_closure_set(v___f_6253_, 2, v_className_6247_);
v___x_6254_ = lean_apply_4(v_toBind_6249_, lean_box(0), lean_box(0), v_getEnv_6250_, v___f_6253_);
return v___x_6254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object* v_m_6255_, lean_object* v_inst_6256_, lean_object* v_inst_6257_, lean_object* v_className_6258_){
_start:
{
lean_object* v___x_6259_; 
v___x_6259_ = l_Lean_Meta_getDefaultInstances___redArg(v_inst_6256_, v_inst_6257_, v_className_6258_);
return v___x_6259_;
}
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthInstance_checkSynthOrder = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthInstance_checkSynthOrder);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedInstanceEntry_default = _init_l_Lean_Meta_instInhabitedInstanceEntry_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry_default);
l_Lean_Meta_instInhabitedInstanceEntry = _init_l_Lean_Meta_instInhabitedInstanceEntry();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry);
l_Lean_Meta_instInhabitedInstances_default = _init_l_Lean_Meta_instInhabitedInstances_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances_default);
l_Lean_Meta_instInhabitedInstances = _init_l_Lean_Meta_instInhabitedInstances();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_instanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_instanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_defaultInstanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_defaultInstanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Instances(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.InfoTree.Main
// Imports: public import Lean.Elab.InfoTree.Basic public import Lean.Meta.PPGoal public import Lean.ReservedNameAction import Init.Data.Format.Macro
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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqMVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableMVarId_hash___boxed(lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_CompletionInfo_stx(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_instReprDocElabKind_repr(uint8_t, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_Std_Format_nestD(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalName(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CustomInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[CustomInfo("};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CustomInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CustomInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_CustomInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")]"};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CustomInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CustomInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_CustomInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_CustomInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CustomInfo_format(lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatCustomInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_CustomInfo_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatCustomInfo___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatCustomInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatCustomInfo = (const lean_object*)&l_Lean_Elab_instToFormatCustomInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "<InfoTree>"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12;
static const lean_array_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13_value;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14_value;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15_value;
static const lean_string_object l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16 = (const lean_object*)&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2;
static const lean_array_object l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "†"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "†!"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[Term] "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__4_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "(isBinder := true) "};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_TermInfo_format___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "<failed-to-infer-type>"};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_TermInfo_format___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__8_value)}};
static const lean_object* l_Lean_Elab_TermInfo_format___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_TermInfo_format___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_PartialTermInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[PartialTerm] @ "};
static const lean_object* l_Lean_Elab_PartialTermInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialTermInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_PartialTermInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_PartialTermInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialTermInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value;
static const lean_ctor_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__0_value)}};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1_value;
static const lean_string_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value;
static const lean_ctor_object l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__2_value)}};
static const lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3 = (const lean_object*)&l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[Completion-Id] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CompletionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "[Completion-Dot] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_CompletionInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[Completion] "};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CompletionInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_CompletionInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_CompletionInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CommandInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[Command] @ "};
static const lean_object* l_Lean_Elab_CommandInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_CommandInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CommandInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_CommandInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_CommandInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_CommandInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OptionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[Option] "};
static const lean_object* l_Lean_Elab_OptionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_OptionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_OptionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_OptionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_OptionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_OptionInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorNameInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[ErrorName] "};
static const lean_object* l_Lean_Elab_ErrorNameInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ErrorNameInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_ErrorNameInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorNameInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[Field] "};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FieldInfo_format___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_FieldInfo_format___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_FieldInfo_format___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_FieldInfo_format___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__0;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__1;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__2;
static lean_once_cell_t l_Lean_Elab_ContextInfo_ppGoals___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__3;
static const lean_string_object l_Lean_Elab_ContextInfo_ppGoals___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no goals"};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__4 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ContextInfo_ppGoals___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__4_value)}};
static const lean_object* l_Lean_Elab_ContextInfo_ppGoals___closed__5 = (const lean_object*)&l_Lean_Elab_ContextInfo_ppGoals___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[Tactic] @ "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nbefore "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_TacticInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nafter "};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_TacticInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_TacticInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_TacticInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_TacticInfo_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_MacroExpansionInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "[MacroExpansion]\n"};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_MacroExpansionInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_MacroExpansionInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\n===>\n"};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_MacroExpansionInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_MacroExpansionInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_MacroExpansionInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_UserWidgetInfo_format___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__0;
static lean_once_cell_t l_Lean_Elab_UserWidgetInfo_format___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__1;
static const lean_string_object l_Lean_Elab_UserWidgetInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[UserWidget] "};
static const lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_UserWidgetInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_UserWidgetInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_UserWidgetInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_UserWidgetInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_FVarAliasInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[FVarAlias] "};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FVarAliasInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_FVarAliasInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_FVarAliasInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_FVarAliasInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_FVarAliasInfo_format___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FVarAliasInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_FieldRedeclInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[FieldRedecl] @ "};
static const lean_object* l_Lean_Elab_FieldRedeclInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_FieldRedeclInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_FieldRedeclInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_FieldRedeclInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[Error: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "[DelabTerm] @ "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nLocation: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nDocstring: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__5_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nExplicit: "};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__6 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__6_value;
static const lean_ctor_object l_Lean_Elab_DelabTermInfo_format___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__6_value)}};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__7 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__7_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__8 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__8_value;
static const lean_string_object l_Lean_Elab_DelabTermInfo_format___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_DelabTermInfo_format___closed__9 = (const lean_object*)&l_Lean_Elab_DelabTermInfo_format___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ChoiceInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[Choice] @ "};
static const lean_object* l_Lean_Elab_ChoiceInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ChoiceInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_ChoiceInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_ChoiceInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DocInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[Doc] "};
static const lean_object* l_Lean_Elab_DocInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DocInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DocInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DocInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DocInfo_format___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DocInfo_format(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DocElabInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "[DocElab] "};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DocElabInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_DocElabInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_DocElabInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_DocElabInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ") @ "};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_DocElabInfo_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_DocElabInfo_format___closed__5 = (const lean_object*)&l_Lean_Elab_DocElabInfo_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabInfo_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__0 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialContextInfo_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__1 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__1_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parent["};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__2 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__2_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "autoImplicits["};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__3 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__3_value;
static const lean_string_object l_Lean_Elab_PartialContextInfo_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Elab_PartialContextInfo_format___closed__4 = (const lean_object*)&l_Lean_Elab_PartialContextInfo_format___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_format(lean_object*);
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 25, .m_data = "• <context-not-available>"};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__0 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__0_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__0_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__1 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__1_value;
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__2 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__2_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__2_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__3 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__3_value;
static const lean_string_object l_Lean_Elab_InfoTree_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "• \?"};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__4 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__4_value;
static const lean_ctor_object l_Lean_Elab_InfoTree_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_InfoTree_format___closed__4_value)}};
static const lean_object* l_Lean_Elab_InfoTree_format___closed__5 = (const lean_object*)&l_Lean_Elab_InfoTree_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getResetInfoTrees___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getResetInfoTrees___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getResetInfoTrees___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_getResetInfoTrees___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withInfoContext_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withInfoContext_x27___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withInfoContext_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableMVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Main"};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.assignInfoHoleId"};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "assertion violation: ( __do_lift._@.Lean.Elab.InfoTree.Main.2379084842._hygCtx._hyg.19.0 ).isNone\n  "};
static const lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withEnableInfoTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withEnableInfoTree___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withEnableInfoTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0(lean_object* v_____do__lift_1_, lean_object* v_____do__lift_2_, lean_object* v_____do__lift_3_, lean_object* v_____do__lift_4_, lean_object* v_____do__lift_5_, lean_object* v_toPure_6_, lean_object* v_____do__lift_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_8_ = lean_box(0);
v___x_9_ = l_Lean_instInhabitedFileMap_default;
v___x_10_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_10_, 0, v_____do__lift_1_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
lean_ctor_set(v___x_10_, 2, v___x_9_);
lean_ctor_set(v___x_10_, 3, v_____do__lift_2_);
lean_ctor_set(v___x_10_, 4, v_____do__lift_3_);
lean_ctor_set(v___x_10_, 5, v_____do__lift_4_);
lean_ctor_set(v___x_10_, 6, v_____do__lift_5_);
lean_ctor_set(v___x_10_, 7, v_____do__lift_7_);
v___x_11_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1(lean_object* v_inst_12_, lean_object* v_____do__lift_13_, lean_object* v_____do__lift_14_, lean_object* v_____do__lift_15_, lean_object* v_____do__lift_16_, lean_object* v_toPure_17_, lean_object* v_toBind_18_, lean_object* v_____do__lift_19_){
_start:
{
lean_object* v_getNGen_20_; lean_object* v___f_21_; lean_object* v___x_22_; 
v_getNGen_20_ = lean_ctor_get(v_inst_12_, 0);
lean_inc(v_getNGen_20_);
lean_dec_ref(v_inst_12_);
v___f_21_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__0), 7, 6);
lean_closure_set(v___f_21_, 0, v_____do__lift_13_);
lean_closure_set(v___f_21_, 1, v_____do__lift_14_);
lean_closure_set(v___f_21_, 2, v_____do__lift_15_);
lean_closure_set(v___f_21_, 3, v_____do__lift_16_);
lean_closure_set(v___f_21_, 4, v_____do__lift_19_);
lean_closure_set(v___f_21_, 5, v_toPure_17_);
v___x_22_ = lean_apply_4(v_toBind_18_, lean_box(0), lean_box(0), v_getNGen_20_, v___f_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2(lean_object* v_inst_23_, lean_object* v_____do__lift_24_, lean_object* v_____do__lift_25_, lean_object* v_____do__lift_26_, lean_object* v_toPure_27_, lean_object* v_toBind_28_, lean_object* v_getOpenDecls_29_, lean_object* v_____do__lift_30_){
_start:
{
lean_object* v___f_31_; lean_object* v___x_32_; 
lean_inc(v_toBind_28_);
v___f_31_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__1), 8, 7);
lean_closure_set(v___f_31_, 0, v_inst_23_);
lean_closure_set(v___f_31_, 1, v_____do__lift_24_);
lean_closure_set(v___f_31_, 2, v_____do__lift_25_);
lean_closure_set(v___f_31_, 3, v_____do__lift_26_);
lean_closure_set(v___f_31_, 4, v_____do__lift_30_);
lean_closure_set(v___f_31_, 5, v_toPure_27_);
lean_closure_set(v___f_31_, 6, v_toBind_28_);
v___x_32_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_getOpenDecls_29_, v___f_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3(lean_object* v_inst_33_, lean_object* v_inst_34_, lean_object* v_____do__lift_35_, lean_object* v_____do__lift_36_, lean_object* v_toPure_37_, lean_object* v_toBind_38_, lean_object* v_____do__lift_39_){
_start:
{
lean_object* v_getCurrNamespace_40_; lean_object* v_getOpenDecls_41_; lean_object* v___f_42_; lean_object* v___x_43_; 
v_getCurrNamespace_40_ = lean_ctor_get(v_inst_33_, 0);
lean_inc(v_getCurrNamespace_40_);
v_getOpenDecls_41_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_getOpenDecls_41_);
lean_dec_ref(v_inst_33_);
lean_inc(v_toBind_38_);
v___f_42_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__2), 8, 7);
lean_closure_set(v___f_42_, 0, v_inst_34_);
lean_closure_set(v___f_42_, 1, v_____do__lift_35_);
lean_closure_set(v___f_42_, 2, v_____do__lift_36_);
lean_closure_set(v___f_42_, 3, v_____do__lift_39_);
lean_closure_set(v___f_42_, 4, v_toPure_37_);
lean_closure_set(v___f_42_, 5, v_toBind_38_);
lean_closure_set(v___f_42_, 6, v_getOpenDecls_41_);
v___x_43_ = lean_apply_4(v_toBind_38_, lean_box(0), lean_box(0), v_getCurrNamespace_40_, v___f_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4(lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_____do__lift_46_, lean_object* v_toPure_47_, lean_object* v_toBind_48_, lean_object* v_inst_49_, lean_object* v_____do__lift_50_){
_start:
{
lean_object* v___f_51_; lean_object* v___x_52_; 
lean_inc(v_toBind_48_);
v___f_51_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__3), 7, 6);
lean_closure_set(v___f_51_, 0, v_inst_44_);
lean_closure_set(v___f_51_, 1, v_inst_45_);
lean_closure_set(v___f_51_, 2, v_____do__lift_46_);
lean_closure_set(v___f_51_, 3, v_____do__lift_50_);
lean_closure_set(v___f_51_, 4, v_toPure_47_);
lean_closure_set(v___f_51_, 5, v_toBind_48_);
v___x_52_ = lean_apply_4(v_toBind_48_, lean_box(0), lean_box(0), v_inst_49_, v___f_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5(lean_object* v_inst_53_, lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_toPure_56_, lean_object* v_toBind_57_, lean_object* v_inst_58_, lean_object* v_____do__lift_59_){
_start:
{
lean_object* v_getMCtx_60_; lean_object* v___f_61_; lean_object* v___x_62_; 
v_getMCtx_60_ = lean_ctor_get(v_inst_53_, 0);
lean_inc(v_getMCtx_60_);
lean_dec_ref(v_inst_53_);
lean_inc(v_toBind_57_);
v___f_61_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__4), 7, 6);
lean_closure_set(v___f_61_, 0, v_inst_54_);
lean_closure_set(v___f_61_, 1, v_inst_55_);
lean_closure_set(v___f_61_, 2, v_____do__lift_59_);
lean_closure_set(v___f_61_, 3, v_toPure_56_);
lean_closure_set(v___f_61_, 4, v_toBind_57_);
lean_closure_set(v___f_61_, 5, v_inst_58_);
v___x_62_ = lean_apply_4(v_toBind_57_, lean_box(0), lean_box(0), v_getMCtx_60_, v___f_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(lean_object* v_inst_63_, lean_object* v_inst_64_, lean_object* v_inst_65_, lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_inst_68_){
_start:
{
lean_object* v_toApplicative_69_; lean_object* v_toBind_70_; lean_object* v_getEnv_71_; lean_object* v_toPure_72_; lean_object* v___f_73_; lean_object* v___x_74_; 
v_toApplicative_69_ = lean_ctor_get(v_inst_63_, 0);
lean_inc_ref(v_toApplicative_69_);
v_toBind_70_ = lean_ctor_get(v_inst_63_, 1);
lean_inc_n(v_toBind_70_, 2);
lean_dec_ref(v_inst_63_);
v_getEnv_71_ = lean_ctor_get(v_inst_64_, 0);
lean_inc(v_getEnv_71_);
lean_dec_ref(v_inst_64_);
v_toPure_72_ = lean_ctor_get(v_toApplicative_69_, 1);
lean_inc(v_toPure_72_);
lean_dec_ref(v_toApplicative_69_);
v___f_73_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg___lam__5), 7, 6);
lean_closure_set(v___f_73_, 0, v_inst_65_);
lean_closure_set(v___f_73_, 1, v_inst_67_);
lean_closure_set(v___f_73_, 2, v_inst_68_);
lean_closure_set(v___f_73_, 3, v_toPure_72_);
lean_closure_set(v___f_73_, 4, v_toBind_70_);
lean_closure_set(v___f_73_, 5, v_inst_66_);
v___x_74_ = lean_apply_4(v_toBind_70_, lean_box(0), lean_box(0), v_getEnv_71_, v___f_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap(lean_object* v_m_75_, lean_object* v_inst_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_inst_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(v_inst_76_, v_inst_77_, v_inst_78_, v_inst_79_, v_inst_80_, v_inst_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__0(lean_object* v_ctx_83_, lean_object* v_toPure_84_, lean_object* v_____do__lift_85_){
_start:
{
lean_object* v_env_86_; lean_object* v_cmdEnv_x3f_87_; lean_object* v_mctx_88_; lean_object* v_options_89_; lean_object* v_currNamespace_90_; lean_object* v_openDecls_91_; lean_object* v_ngen_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_100_; 
v_env_86_ = lean_ctor_get(v_ctx_83_, 0);
v_cmdEnv_x3f_87_ = lean_ctor_get(v_ctx_83_, 1);
v_mctx_88_ = lean_ctor_get(v_ctx_83_, 3);
v_options_89_ = lean_ctor_get(v_ctx_83_, 4);
v_currNamespace_90_ = lean_ctor_get(v_ctx_83_, 5);
v_openDecls_91_ = lean_ctor_get(v_ctx_83_, 6);
v_ngen_92_ = lean_ctor_get(v_ctx_83_, 7);
v_isSharedCheck_100_ = !lean_is_exclusive(v_ctx_83_);
if (v_isSharedCheck_100_ == 0)
{
lean_object* v_unused_101_; 
v_unused_101_ = lean_ctor_get(v_ctx_83_, 2);
lean_dec(v_unused_101_);
v___x_94_ = v_ctx_83_;
v_isShared_95_ = v_isSharedCheck_100_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_ngen_92_);
lean_inc(v_openDecls_91_);
lean_inc(v_currNamespace_90_);
lean_inc(v_options_89_);
lean_inc(v_mctx_88_);
lean_inc(v_cmdEnv_x3f_87_);
lean_inc(v_env_86_);
lean_dec(v_ctx_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_100_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 2, v_____do__lift_85_);
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_env_86_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_cmdEnv_x3f_87_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v_____do__lift_85_);
lean_ctor_set(v_reuseFailAlloc_99_, 3, v_mctx_88_);
lean_ctor_set(v_reuseFailAlloc_99_, 4, v_options_89_);
lean_ctor_set(v_reuseFailAlloc_99_, 5, v_currNamespace_90_);
lean_ctor_set(v_reuseFailAlloc_99_, 6, v_openDecls_91_);
lean_ctor_set(v_reuseFailAlloc_99_, 7, v_ngen_92_);
v___x_97_ = v_reuseFailAlloc_99_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; 
v___x_98_ = lean_apply_2(v_toPure_84_, lean_box(0), v___x_97_);
return v___x_98_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg___lam__1(lean_object* v_toPure_102_, lean_object* v_toBind_103_, lean_object* v_inst_104_, lean_object* v_ctx_105_){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; 
v___f_106_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_save___redArg___lam__0), 3, 2);
lean_closure_set(v___f_106_, 0, v_ctx_105_);
lean_closure_set(v___f_106_, 1, v_toPure_102_);
v___x_107_ = lean_apply_4(v_toBind_103_, lean_box(0), lean_box(0), v_inst_104_, v___f_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___redArg(lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_){
_start:
{
lean_object* v_toApplicative_115_; lean_object* v_toBind_116_; lean_object* v_toPure_117_; lean_object* v___x_118_; lean_object* v___f_119_; lean_object* v___x_120_; 
v_toApplicative_115_ = lean_ctor_get(v_inst_108_, 0);
v_toBind_116_ = lean_ctor_get(v_inst_108_, 1);
lean_inc_n(v_toBind_116_, 2);
v_toPure_117_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_inc(v_toPure_117_);
v___x_118_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___redArg(v_inst_108_, v_inst_109_, v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_);
v___f_119_ = lean_alloc_closure((void*)(l_Lean_Elab_CommandContextInfo_save___redArg___lam__1), 4, 3);
lean_closure_set(v___f_119_, 0, v_toPure_117_);
lean_closure_set(v___f_119_, 1, v_toBind_116_);
lean_closure_set(v___f_119_, 2, v_inst_114_);
v___x_120_ = lean_apply_4(v_toBind_116_, lean_box(0), lean_box(0), v___x_118_, v___f_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save(lean_object* v_m_121_, lean_object* v_inst_122_, lean_object* v_inst_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_Elab_CommandContextInfo_save___redArg(v_inst_122_, v_inst_123_, v_inst_124_, v_inst_125_, v_inst_126_, v_inst_127_, v_inst_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CustomInfo_format(lean_object* v_x_136_){
_start:
{
lean_object* v_value_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_151_; 
v_value_137_ = lean_ctor_get(v_x_136_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_136_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; 
v_unused_152_ = lean_ctor_get(v_x_136_, 0);
lean_dec(v_unused_152_);
v___x_139_ = v_x_136_;
v_isShared_140_ = v_isSharedCheck_151_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_value_137_);
lean_dec(v_x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_151_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_141_ = ((lean_object*)(l_Lean_Elab_CustomInfo_format___closed__1));
v___x_142_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_value_137_);
lean_dec(v_value_137_);
v___x_143_ = 1;
v___x_144_ = l_Lean_Name_toString(v___x_142_, v___x_143_);
v___x_145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 5);
lean_ctor_set(v___x_139_, 1, v___x_145_);
lean_ctor_set(v___x_139_, 0, v___x_141_);
v___x_147_ = v___x_139_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v___x_145_);
v___x_147_ = v_reuseFailAlloc_150_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = ((lean_object*)(l_Lean_Elab_CustomInfo_format___closed__3));
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(lean_object* v_opts_155_, lean_object* v_opt_156_){
_start:
{
lean_object* v_name_157_; lean_object* v_defValue_158_; lean_object* v_map_159_; lean_object* v___x_160_; 
v_name_157_ = lean_ctor_get(v_opt_156_, 0);
v_defValue_158_ = lean_ctor_get(v_opt_156_, 1);
v_map_159_ = lean_ctor_get(v_opts_155_, 0);
v___x_160_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_159_, v_name_157_);
if (lean_obj_tag(v___x_160_) == 0)
{
uint8_t v___x_161_; 
v___x_161_ = lean_unbox(v_defValue_158_);
return v___x_161_;
}
else
{
lean_object* v_val_162_; 
v_val_162_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v___x_160_, 1);
if (lean_obj_tag(v_val_162_) == 1)
{
uint8_t v_v_163_; 
v_v_163_ = lean_ctor_get_uint8(v_val_162_, 0);
lean_dec_ref_known(v_val_162_, 0);
return v_v_163_;
}
else
{
uint8_t v___x_164_; 
lean_dec(v_val_162_);
v___x_164_ = lean_unbox(v_defValue_158_);
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0___boxed(lean_object* v_opts_165_, lean_object* v_opt_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v_opts_165_, v_opt_166_);
lean_dec_ref(v_opt_166_);
lean_dec_ref(v_opts_165_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1(lean_object* v_opts_169_, lean_object* v_opt_170_){
_start:
{
lean_object* v_name_171_; lean_object* v_defValue_172_; lean_object* v_map_173_; lean_object* v___x_174_; 
v_name_171_ = lean_ctor_get(v_opt_170_, 0);
v_defValue_172_ = lean_ctor_get(v_opt_170_, 1);
v_map_173_ = lean_ctor_get(v_opts_169_, 0);
v___x_174_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_173_, v_name_171_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_inc(v_defValue_172_);
return v_defValue_172_;
}
else
{
lean_object* v_val_175_; 
v_val_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v___x_174_, 1);
if (lean_obj_tag(v_val_175_) == 3)
{
lean_object* v_v_176_; 
v_v_176_ = lean_ctor_get(v_val_175_, 0);
lean_inc(v_v_176_);
lean_dec_ref_known(v_val_175_, 1);
return v_v_176_;
}
else
{
lean_dec(v_val_175_);
lean_inc(v_defValue_172_);
return v_defValue_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1___boxed(lean_object* v_opts_177_, lean_object* v_opt_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1(v_opts_177_, v_opt_178_);
lean_dec_ref(v_opt_178_);
lean_dec_ref(v_opts_177_);
return v_res_179_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = l_Lean_Options_empty;
v___x_182_ = l_Lean_Core_getMaxHeartbeats(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_box(0);
v___x_184_ = l_unsafeCast___redArg(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = l_Lean_firstFrontendMacroScope;
v___x_187_ = lean_nat_add(v___x_186_, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_188_ = lean_box(0);
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_189_);
lean_ctor_set(v___x_191_, 2, v___x_188_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_unsigned_to_nat(32u);
v___x_193_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6(void){
_start:
{
size_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_195_ = ((size_t)5ULL);
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_unsigned_to_nat(32u);
v___x_198_ = lean_mk_empty_array_with_capacity(v___x_197_);
v___x_199_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__5);
v___x_200_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
lean_ctor_set(v___x_200_, 2, v___x_196_);
lean_ctor_set(v___x_200_, 3, v___x_196_);
lean_ctor_set_usize(v___x_200_, 4, v___x_195_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7(void){
_start:
{
lean_object* v___x_201_; uint64_t v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_202_ = 0ULL;
v___x_203_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set_uint64(v___x_203_, sizeof(void*)*1, v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = l_Lean_NameSet_empty;
v___x_210_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_ctor_set(v___x_211_, 2, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; 
v___x_212_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__6);
v___x_213_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__9);
v___x_214_ = 1;
v___x_215_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_213_);
lean_ctor_set(v___x_215_, 2, v___x_212_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*3, v___x_214_);
return v___x_215_;
}
}
static uint8_t _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_221_ = l_Lean_diagnostics;
v___x_222_ = l_Lean_Options_empty;
v___x_223_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v___x_222_, v___x_221_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = l_Lean_maxRecDepth;
v___x_225_ = l_Lean_Options_empty;
v___x_226_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1(v___x_225_, v___x_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg(lean_object* v_info_227_, lean_object* v_x_228_){
_start:
{
lean_object* v_a_231_; lean_object* v_toCommandContextInfo_234_; lean_object* v_env_235_; lean_object* v_options_236_; lean_object* v_currNamespace_237_; lean_object* v_openDecls_238_; lean_object* v_ngen_239_; uint8_t v___x_240_; lean_object* v_env_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___y_263_; uint8_t v___y_264_; lean_object* v_fileName_265_; lean_object* v_fileMap_266_; lean_object* v_currNamespace_267_; lean_object* v_openDecls_268_; lean_object* v_initHeartbeats_269_; lean_object* v_maxHeartbeats_270_; lean_object* v_quotContext_271_; lean_object* v_currMacroScope_272_; lean_object* v_cancelTk_x3f_273_; lean_object* v_inheritedTraceOptions_274_; lean_object* v_currRecDepth_275_; lean_object* v_ref_276_; uint8_t v_suppressElabErrors_277_; lean_object* v___y_278_; lean_object* v___y_315_; uint8_t v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_334_; lean_object* v___y_335_; uint8_t v___y_336_; lean_object* v___y_337_; uint8_t v___y_338_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; lean_object* v___y_363_; lean_object* v___x_372_; uint8_t v___y_374_; lean_object* v_env_394_; uint8_t v___x_395_; 
v_toCommandContextInfo_234_ = lean_ctor_get(v_info_227_, 0);
lean_inc_ref(v_toCommandContextInfo_234_);
lean_dec_ref(v_info_227_);
v_env_235_ = lean_ctor_get(v_toCommandContextInfo_234_, 0);
lean_inc_ref(v_env_235_);
v_options_236_ = lean_ctor_get(v_toCommandContextInfo_234_, 4);
lean_inc_ref(v_options_236_);
v_currNamespace_237_ = lean_ctor_get(v_toCommandContextInfo_234_, 5);
lean_inc(v_currNamespace_237_);
v_openDecls_238_ = lean_ctor_get(v_toCommandContextInfo_234_, 6);
lean_inc(v_openDecls_238_);
v_ngen_239_ = lean_ctor_get(v_toCommandContextInfo_234_, 7);
lean_inc_ref(v_ngen_239_);
lean_dec_ref(v_toCommandContextInfo_234_);
v___x_240_ = 0;
v_env_241_ = l_Lean_Environment_setExporting(v_env_235_, v___x_240_);
v___x_242_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__0));
v___x_243_ = l_Lean_instInhabitedFileMap_default;
v___x_244_ = l_Lean_Options_empty;
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__1);
v___x_247_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_248_ = l_Lean_firstFrontendMacroScope;
v___x_249_ = lean_box(0);
v___x_250_ = lean_box(0);
v___x_251_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__3);
v___x_252_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__4);
v___x_253_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__7);
v___x_254_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__10);
v___x_255_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__11);
v___x_256_ = 1;
v___x_257_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__12);
v___x_258_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__13));
v___x_259_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_259_, 0, v_env_241_);
lean_ctor_set(v___x_259_, 1, v___x_251_);
lean_ctor_set(v___x_259_, 2, v_ngen_239_);
lean_ctor_set(v___x_259_, 3, v___x_252_);
lean_ctor_set(v___x_259_, 4, v___x_253_);
lean_ctor_set(v___x_259_, 5, v___x_254_);
lean_ctor_set(v___x_259_, 6, v___x_255_);
lean_ctor_set(v___x_259_, 7, v___x_257_);
lean_ctor_set(v___x_259_, 8, v___x_258_);
v___x_260_ = lean_io_get_num_heartbeats();
v___x_261_ = lean_st_mk_ref(v___x_259_);
v___x_358_ = l_Lean_inheritedTraceOptions;
v___x_359_ = lean_st_ref_get(v___x_358_);
v___x_360_ = l_Lean_diagnostics;
v___x_361_ = lean_uint8_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__17);
v___x_372_ = lean_st_ref_get(v___x_261_);
v_env_394_ = lean_ctor_get(v___x_372_, 0);
lean_inc_ref(v_env_394_);
lean_dec(v___x_372_);
v___x_395_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_394_);
lean_dec_ref(v_env_394_);
if (v___x_361_ == 0)
{
if (v___x_395_ == 0)
{
lean_inc(v___x_261_);
v___y_363_ = v___x_261_;
goto v___jp_362_;
}
else
{
v___y_374_ = v___x_361_;
goto v___jp_373_;
}
}
else
{
v___y_374_ = v___x_395_;
goto v___jp_373_;
}
v___jp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_mk_io_user_error(v_a_231_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
v___jp_262_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_279_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__1(v_options_236_, v___y_263_);
v___x_280_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_280_, 0, v_fileName_265_);
lean_ctor_set(v___x_280_, 1, v_fileMap_266_);
lean_ctor_set(v___x_280_, 2, v_options_236_);
lean_ctor_set(v___x_280_, 3, v___x_279_);
lean_ctor_set(v___x_280_, 4, v_currNamespace_267_);
lean_ctor_set(v___x_280_, 5, v_openDecls_268_);
lean_ctor_set(v___x_280_, 6, v_initHeartbeats_269_);
lean_ctor_set(v___x_280_, 7, v_maxHeartbeats_270_);
lean_ctor_set(v___x_280_, 8, v_quotContext_271_);
lean_ctor_set(v___x_280_, 9, v_currMacroScope_272_);
lean_ctor_set(v___x_280_, 10, v_cancelTk_x3f_273_);
lean_ctor_set(v___x_280_, 11, v_inheritedTraceOptions_274_);
v___x_281_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v_currRecDepth_275_);
lean_ctor_set(v___x_281_, 2, v_ref_276_);
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*3, v___y_264_);
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*3 + 1, v_suppressElabErrors_277_);
v___x_282_ = lean_apply_3(v_x_228_, v___x_281_, v___y_278_, lean_box(0));
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_291_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_291_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = lean_st_ref_get(v___x_261_);
lean_dec(v___x_261_);
lean_dec(v___x_287_);
if (v_isShared_286_ == 0)
{
v___x_289_ = v___x_285_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_283_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_313_; 
lean_dec(v___x_261_);
v_a_292_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_313_ == 0)
{
v___x_294_ = v___x_282_;
v_isShared_295_ = v_isSharedCheck_313_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_282_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_313_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
if (lean_obj_tag(v_a_292_) == 0)
{
lean_object* v_msg_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_300_; 
v_msg_296_ = lean_ctor_get(v_a_292_, 1);
lean_inc_ref(v_msg_296_);
lean_dec_ref_known(v_a_292_, 2);
v___x_297_ = l_Lean_MessageData_toString(v_msg_296_);
v___x_298_ = lean_mk_io_user_error(v___x_297_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_298_);
v___x_300_ = v___x_294_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
else
{
lean_object* v_id_302_; lean_object* v___x_303_; 
lean_del_object(v___x_294_);
v_id_302_ = lean_ctor_get(v_a_292_, 0);
lean_inc(v_id_302_);
lean_dec_ref_known(v_a_292_, 2);
v___x_303_ = l_Lean_InternalExceptionId_getName(v_id_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec(v_id_302_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v___x_305_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__14));
v___x_306_ = l_Lean_Name_toString(v_a_304_, v___x_256_);
v___x_307_ = lean_string_append(v___x_305_, v___x_306_);
lean_dec_ref(v___x_306_);
v_a_231_ = v___x_307_;
goto v___jp_230_;
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec_ref_known(v___x_303_, 1);
v___x_308_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__15));
v___x_309_ = l_Nat_reprFast(v_id_302_);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__16));
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
v_a_231_ = v___x_312_;
goto v___jp_230_;
}
}
}
}
}
v___jp_314_:
{
lean_object* v_toCold_319_; lean_object* v_currRecDepth_320_; lean_object* v_ref_321_; uint8_t v_suppressElabErrors_322_; lean_object* v_fileName_323_; lean_object* v_fileMap_324_; lean_object* v_currNamespace_325_; lean_object* v_openDecls_326_; lean_object* v_initHeartbeats_327_; lean_object* v_maxHeartbeats_328_; lean_object* v_quotContext_329_; lean_object* v_currMacroScope_330_; lean_object* v_cancelTk_x3f_331_; lean_object* v_inheritedTraceOptions_332_; 
v_toCold_319_ = lean_ctor_get(v___y_317_, 0);
lean_inc_ref(v_toCold_319_);
v_currRecDepth_320_ = lean_ctor_get(v___y_317_, 1);
lean_inc(v_currRecDepth_320_);
v_ref_321_ = lean_ctor_get(v___y_317_, 2);
lean_inc(v_ref_321_);
v_suppressElabErrors_322_ = lean_ctor_get_uint8(v___y_317_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_317_);
v_fileName_323_ = lean_ctor_get(v_toCold_319_, 0);
lean_inc_ref(v_fileName_323_);
v_fileMap_324_ = lean_ctor_get(v_toCold_319_, 1);
lean_inc_ref(v_fileMap_324_);
v_currNamespace_325_ = lean_ctor_get(v_toCold_319_, 4);
lean_inc(v_currNamespace_325_);
v_openDecls_326_ = lean_ctor_get(v_toCold_319_, 5);
lean_inc(v_openDecls_326_);
v_initHeartbeats_327_ = lean_ctor_get(v_toCold_319_, 6);
lean_inc(v_initHeartbeats_327_);
v_maxHeartbeats_328_ = lean_ctor_get(v_toCold_319_, 7);
lean_inc(v_maxHeartbeats_328_);
v_quotContext_329_ = lean_ctor_get(v_toCold_319_, 8);
lean_inc(v_quotContext_329_);
v_currMacroScope_330_ = lean_ctor_get(v_toCold_319_, 9);
lean_inc(v_currMacroScope_330_);
v_cancelTk_x3f_331_ = lean_ctor_get(v_toCold_319_, 10);
lean_inc(v_cancelTk_x3f_331_);
v_inheritedTraceOptions_332_ = lean_ctor_get(v_toCold_319_, 11);
lean_inc_ref(v_inheritedTraceOptions_332_);
lean_dec_ref(v_toCold_319_);
v___y_263_ = v___y_315_;
v___y_264_ = v___y_316_;
v_fileName_265_ = v_fileName_323_;
v_fileMap_266_ = v_fileMap_324_;
v_currNamespace_267_ = v_currNamespace_325_;
v_openDecls_268_ = v_openDecls_326_;
v_initHeartbeats_269_ = v_initHeartbeats_327_;
v_maxHeartbeats_270_ = v_maxHeartbeats_328_;
v_quotContext_271_ = v_quotContext_329_;
v_currMacroScope_272_ = v_currMacroScope_330_;
v_cancelTk_x3f_273_ = v_cancelTk_x3f_331_;
v_inheritedTraceOptions_274_ = v_inheritedTraceOptions_332_;
v_currRecDepth_275_ = v_currRecDepth_320_;
v_ref_276_ = v_ref_321_;
v_suppressElabErrors_277_ = v_suppressElabErrors_322_;
v___y_278_ = v___y_318_;
goto v___jp_262_;
}
v___jp_333_:
{
if (v___y_338_ == 0)
{
lean_object* v___x_339_; lean_object* v_env_340_; lean_object* v_nextMacroScope_341_; lean_object* v_ngen_342_; lean_object* v_auxDeclNGen_343_; lean_object* v_traceState_344_; lean_object* v_messages_345_; lean_object* v_infoState_346_; lean_object* v_snapshotTasks_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_356_; 
v___x_339_ = lean_st_ref_take(v___y_334_);
v_env_340_ = lean_ctor_get(v___x_339_, 0);
v_nextMacroScope_341_ = lean_ctor_get(v___x_339_, 1);
v_ngen_342_ = lean_ctor_get(v___x_339_, 2);
v_auxDeclNGen_343_ = lean_ctor_get(v___x_339_, 3);
v_traceState_344_ = lean_ctor_get(v___x_339_, 4);
v_messages_345_ = lean_ctor_get(v___x_339_, 6);
v_infoState_346_ = lean_ctor_get(v___x_339_, 7);
v_snapshotTasks_347_ = lean_ctor_get(v___x_339_, 8);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v___x_339_, 5);
lean_dec(v_unused_357_);
v___x_349_ = v___x_339_;
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_snapshotTasks_347_);
lean_inc(v_infoState_346_);
lean_inc(v_messages_345_);
lean_inc(v_traceState_344_);
lean_inc(v_auxDeclNGen_343_);
lean_inc(v_ngen_342_);
lean_inc(v_nextMacroScope_341_);
lean_inc(v_env_340_);
lean_dec(v___x_339_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_351_ = l_Lean_Kernel_enableDiag(v_env_340_, v___y_336_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 5, v___x_254_);
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_nextMacroScope_341_);
lean_ctor_set(v_reuseFailAlloc_355_, 2, v_ngen_342_);
lean_ctor_set(v_reuseFailAlloc_355_, 3, v_auxDeclNGen_343_);
lean_ctor_set(v_reuseFailAlloc_355_, 4, v_traceState_344_);
lean_ctor_set(v_reuseFailAlloc_355_, 5, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_355_, 6, v_messages_345_);
lean_ctor_set(v_reuseFailAlloc_355_, 7, v_infoState_346_);
lean_ctor_set(v_reuseFailAlloc_355_, 8, v_snapshotTasks_347_);
v___x_353_ = v_reuseFailAlloc_355_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; 
v___x_354_ = lean_st_ref_put(v___y_334_, v___x_353_);
v___y_315_ = v___y_335_;
v___y_316_ = v___y_336_;
v___y_317_ = v___y_337_;
v___y_318_ = v___y_334_;
goto v___jp_314_;
}
}
}
else
{
v___y_315_ = v___y_335_;
v___y_316_ = v___y_336_;
v___y_317_ = v___y_337_;
v___y_318_ = v___y_334_;
goto v___jp_314_;
}
}
v___jp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v_env_370_; uint8_t v___x_371_; 
v___x_364_ = l_Lean_maxRecDepth;
v___x_365_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__18);
lean_inc(v___x_359_);
lean_inc(v___x_260_);
lean_inc(v_openDecls_238_);
lean_inc(v_currNamespace_237_);
v___x_366_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_366_, 0, v___x_242_);
lean_ctor_set(v___x_366_, 1, v___x_243_);
lean_ctor_set(v___x_366_, 2, v___x_244_);
lean_ctor_set(v___x_366_, 3, v___x_365_);
lean_ctor_set(v___x_366_, 4, v_currNamespace_237_);
lean_ctor_set(v___x_366_, 5, v_openDecls_238_);
lean_ctor_set(v___x_366_, 6, v___x_260_);
lean_ctor_set(v___x_366_, 7, v___x_246_);
lean_ctor_set(v___x_366_, 8, v___x_247_);
lean_ctor_set(v___x_366_, 9, v___x_248_);
lean_ctor_set(v___x_366_, 10, v___x_249_);
lean_ctor_set(v___x_366_, 11, v___x_359_);
v___x_367_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v___x_245_);
lean_ctor_set(v___x_367_, 2, v___x_250_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*3, v___x_361_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*3 + 1, v___x_240_);
v___x_368_ = l_Lean_Option_get___at___00Lean_Elab_ContextInfo_runCoreM_spec__0(v_options_236_, v___x_360_);
v___x_369_ = lean_st_ref_get(v___y_363_);
v_env_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc_ref(v_env_370_);
lean_dec(v___x_369_);
v___x_371_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_370_);
lean_dec_ref(v_env_370_);
if (v___x_368_ == 0)
{
if (v___x_371_ == 0)
{
lean_dec_ref_known(v___x_367_, 3);
v___y_263_ = v___x_364_;
v___y_264_ = v___x_368_;
v_fileName_265_ = v___x_242_;
v_fileMap_266_ = v___x_243_;
v_currNamespace_267_ = v_currNamespace_237_;
v_openDecls_268_ = v_openDecls_238_;
v_initHeartbeats_269_ = v___x_260_;
v_maxHeartbeats_270_ = v___x_246_;
v_quotContext_271_ = v___x_247_;
v_currMacroScope_272_ = v___x_248_;
v_cancelTk_x3f_273_ = v___x_249_;
v_inheritedTraceOptions_274_ = v___x_359_;
v_currRecDepth_275_ = v___x_245_;
v_ref_276_ = v___x_250_;
v_suppressElabErrors_277_ = v___x_240_;
v___y_278_ = v___y_363_;
goto v___jp_262_;
}
else
{
lean_dec(v___x_359_);
lean_dec(v___x_260_);
lean_dec(v_openDecls_238_);
lean_dec(v_currNamespace_237_);
v___y_334_ = v___y_363_;
v___y_335_ = v___x_364_;
v___y_336_ = v___x_368_;
v___y_337_ = v___x_367_;
v___y_338_ = v___x_368_;
goto v___jp_333_;
}
}
else
{
lean_dec(v___x_359_);
lean_dec(v___x_260_);
lean_dec(v_openDecls_238_);
lean_dec(v_currNamespace_237_);
v___y_334_ = v___y_363_;
v___y_335_ = v___x_364_;
v___y_336_ = v___x_368_;
v___y_337_ = v___x_367_;
v___y_338_ = v___x_371_;
goto v___jp_333_;
}
}
v___jp_373_:
{
if (v___y_374_ == 0)
{
lean_object* v___x_375_; lean_object* v_env_376_; lean_object* v_nextMacroScope_377_; lean_object* v_ngen_378_; lean_object* v_auxDeclNGen_379_; lean_object* v_traceState_380_; lean_object* v_messages_381_; lean_object* v_infoState_382_; lean_object* v_snapshotTasks_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_392_; 
v___x_375_ = lean_st_ref_take(v___x_261_);
v_env_376_ = lean_ctor_get(v___x_375_, 0);
v_nextMacroScope_377_ = lean_ctor_get(v___x_375_, 1);
v_ngen_378_ = lean_ctor_get(v___x_375_, 2);
v_auxDeclNGen_379_ = lean_ctor_get(v___x_375_, 3);
v_traceState_380_ = lean_ctor_get(v___x_375_, 4);
v_messages_381_ = lean_ctor_get(v___x_375_, 6);
v_infoState_382_ = lean_ctor_get(v___x_375_, 7);
v_snapshotTasks_383_ = lean_ctor_get(v___x_375_, 8);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_392_ == 0)
{
lean_object* v_unused_393_; 
v_unused_393_ = lean_ctor_get(v___x_375_, 5);
lean_dec(v_unused_393_);
v___x_385_ = v___x_375_;
v_isShared_386_ = v_isSharedCheck_392_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_snapshotTasks_383_);
lean_inc(v_infoState_382_);
lean_inc(v_messages_381_);
lean_inc(v_traceState_380_);
lean_inc(v_auxDeclNGen_379_);
lean_inc(v_ngen_378_);
lean_inc(v_nextMacroScope_377_);
lean_inc(v_env_376_);
lean_dec(v___x_375_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_392_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = l_Lean_Kernel_enableDiag(v_env_376_, v___x_361_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 5, v___x_254_);
lean_ctor_set(v___x_385_, 0, v___x_387_);
v___x_389_ = v___x_385_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_nextMacroScope_377_);
lean_ctor_set(v_reuseFailAlloc_391_, 2, v_ngen_378_);
lean_ctor_set(v_reuseFailAlloc_391_, 3, v_auxDeclNGen_379_);
lean_ctor_set(v_reuseFailAlloc_391_, 4, v_traceState_380_);
lean_ctor_set(v_reuseFailAlloc_391_, 5, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_391_, 6, v_messages_381_);
lean_ctor_set(v_reuseFailAlloc_391_, 7, v_infoState_382_);
lean_ctor_set(v_reuseFailAlloc_391_, 8, v_snapshotTasks_383_);
v___x_389_ = v_reuseFailAlloc_391_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lean_st_ref_put(v___x_261_, v___x_389_);
lean_inc(v___x_261_);
v___y_363_ = v___x_261_;
goto v___jp_362_;
}
}
}
else
{
lean_inc(v___x_261_);
v___y_363_ = v___x_261_;
goto v___jp_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___redArg___boxed(lean_object* v_info_396_, lean_object* v_x_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_396_, v_x_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM(lean_object* v_00_u03b1_400_, lean_object* v_info_401_, lean_object* v_x_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_401_, v_x_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runCoreM___boxed(lean_object* v_00_u03b1_405_, lean_object* v_info_406_, lean_object* v_x_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_ContextInfo_runCoreM(v_00_u03b1_405_, v_info_406_, v_x_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(lean_object* v___x_410_, lean_object* v_x_411_, lean_object* v___x_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_st_mk_ref(v___x_410_);
lean_inc(v___x_416_);
v___x_417_ = lean_apply_5(v_x_411_, v___x_412_, v___x_416_, v___y_413_, v___y_414_, lean_box(0));
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_427_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_427_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_427_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_427_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_422_ = lean_st_ref_get(v___x_416_);
lean_dec(v___x_416_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v_a_418_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_423_);
v___x_425_ = v___x_420_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec(v___x_416_);
v_a_428_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_417_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_417_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed(lean_object* v___x_436_, lean_object* v_x_437_, lean_object* v___x_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0(v___x_436_, v_x_437_, v___x_438_, v___y_439_, v___y_440_);
return v_res_442_;
}
}
static uint64_t _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1(void){
_start:
{
lean_object* v___x_449_; uint64_t v___x_450_; 
v___x_449_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0));
v___x_450_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_449_);
return v___x_450_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2(void){
_start:
{
uint64_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_uint64_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__1);
v___x_452_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__0));
v___x_453_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set_uint64(v___x_453_, sizeof(void*)*1, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
v___x_459_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
lean_ctor_set(v___x_459_, 2, v___x_458_);
lean_ctor_set(v___x_459_, 3, v___x_458_);
lean_ctor_set(v___x_459_, 4, v___x_458_);
lean_ctor_set(v___x_459_, 5, v___x_458_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_unsigned_to_nat(32u);
v___x_461_ = lean_mk_empty_array_with_capacity(v___x_460_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7(void){
_start:
{
size_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_463_ = ((size_t)5ULL);
v___x_464_ = lean_unsigned_to_nat(0u);
v___x_465_ = lean_unsigned_to_nat(32u);
v___x_466_ = lean_mk_empty_array_with_capacity(v___x_465_);
v___x_467_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__6);
v___x_468_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
lean_ctor_set(v___x_468_, 2, v___x_464_);
lean_ctor_set(v___x_468_, 3, v___x_464_);
lean_ctor_set_usize(v___x_468_, 4, v___x_463_);
return v___x_468_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__4);
v___x_470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
lean_ctor_set(v___x_470_, 2, v___x_469_);
lean_ctor_set(v___x_470_, 3, v___x_469_);
lean_ctor_set(v___x_470_, 4, v___x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object* v_info_471_, lean_object* v_lctx_472_, lean_object* v_x_473_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_toCommandContextInfo_483_; lean_object* v_mctx_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___f_489_; lean_object* v___x_490_; 
v___x_475_ = lean_box(1);
v___x_476_ = 0;
v___x_477_ = 1;
v___x_478_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__2);
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = ((lean_object*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__3));
v___x_481_ = lean_box(0);
v___x_482_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_482_, 0, v___x_478_);
lean_ctor_set(v___x_482_, 1, v___x_475_);
lean_ctor_set(v___x_482_, 2, v_lctx_472_);
lean_ctor_set(v___x_482_, 3, v___x_480_);
lean_ctor_set(v___x_482_, 4, v___x_481_);
lean_ctor_set(v___x_482_, 5, v___x_479_);
lean_ctor_set(v___x_482_, 6, v___x_481_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*7, v___x_476_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*7 + 1, v___x_476_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*7 + 2, v___x_476_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*7 + 3, v___x_477_);
v_toCommandContextInfo_483_ = lean_ctor_get(v_info_471_, 0);
v_mctx_484_ = lean_ctor_get(v_toCommandContextInfo_483_, 3);
v___x_485_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__5);
v___x_486_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__7);
v___x_487_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runMetaM___redArg___closed__8);
lean_inc_ref(v_mctx_484_);
v___x_488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_488_, 0, v_mctx_484_);
lean_ctor_set(v___x_488_, 1, v___x_485_);
lean_ctor_set(v___x_488_, 2, v___x_475_);
lean_ctor_set(v___x_488_, 3, v___x_486_);
lean_ctor_set(v___x_488_, 4, v___x_487_);
v___f_489_ = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_runMetaM___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_489_, 0, v___x_488_);
lean_closure_set(v___f_489_, 1, v_x_473_);
lean_closure_set(v___f_489_, 2, v___x_482_);
v___x_490_ = l_Lean_Elab_ContextInfo_runCoreM___redArg(v_info_471_, v___f_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_499_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_499_ == 0)
{
v___x_493_ = v___x_490_;
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_490_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v_fst_495_; lean_object* v___x_497_; 
v_fst_495_ = lean_ctor_get(v_a_491_, 0);
lean_inc(v_fst_495_);
lean_dec(v_a_491_);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v_fst_495_);
v___x_497_ = v___x_493_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_fst_495_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
v_a_500_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_490_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_490_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg___boxed(lean_object* v_info_508_, lean_object* v_lctx_509_, lean_object* v_x_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_info_508_, v_lctx_509_, v_x_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM(lean_object* v_00_u03b1_513_, lean_object* v_info_514_, lean_object* v_lctx_515_, lean_object* v_x_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_info_514_, v_lctx_515_, v_x_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_runMetaM___boxed(lean_object* v_00_u03b1_519_, lean_object* v_info_520_, lean_object* v_lctx_521_, lean_object* v_x_522_, lean_object* v_a_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_Elab_ContextInfo_runMetaM(v_00_u03b1_519_, v_info_520_, v_lctx_521_, v_x_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext(lean_object* v_info_525_, lean_object* v_lctx_526_){
_start:
{
lean_object* v_toCommandContextInfo_527_; lean_object* v_env_528_; lean_object* v_mctx_529_; lean_object* v_options_530_; lean_object* v_currNamespace_531_; lean_object* v_openDecls_532_; lean_object* v___x_533_; 
v_toCommandContextInfo_527_ = lean_ctor_get(v_info_525_, 0);
v_env_528_ = lean_ctor_get(v_toCommandContextInfo_527_, 0);
v_mctx_529_ = lean_ctor_get(v_toCommandContextInfo_527_, 3);
v_options_530_ = lean_ctor_get(v_toCommandContextInfo_527_, 4);
v_currNamespace_531_ = lean_ctor_get(v_toCommandContextInfo_527_, 5);
v_openDecls_532_ = lean_ctor_get(v_toCommandContextInfo_527_, 6);
lean_inc(v_openDecls_532_);
lean_inc(v_currNamespace_531_);
lean_inc_ref(v_options_530_);
lean_inc_ref(v_mctx_529_);
lean_inc_ref(v_env_528_);
v___x_533_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_533_, 0, v_env_528_);
lean_ctor_set(v___x_533_, 1, v_mctx_529_);
lean_ctor_set(v___x_533_, 2, v_lctx_526_);
lean_ctor_set(v___x_533_, 3, v_options_530_);
lean_ctor_set(v___x_533_, 4, v_currNamespace_531_);
lean_ctor_set(v___x_533_, 5, v_openDecls_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_toPPContext___boxed(lean_object* v_info_534_, lean_object* v_lctx_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_Elab_ContextInfo_toPPContext(v_info_534_, v_lctx_535_);
lean_dec_ref(v_info_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax(lean_object* v_info_537_, lean_object* v_lctx_538_, lean_object* v_stx_539_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = l_Lean_Elab_ContextInfo_toPPContext(v_info_537_, v_lctx_538_);
v___x_542_ = l_Lean_ppTerm(v___x_541_, v_stx_539_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppSyntax___boxed(lean_object* v_info_544_, lean_object* v_lctx_545_, lean_object* v_stx_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lean_Elab_ContextInfo_ppSyntax(v_info_544_, v_lctx_545_, v_stx_546_);
lean_dec_ref(v_info_544_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(lean_object* v_ctx_564_, lean_object* v_pos_565_, lean_object* v_info_566_){
_start:
{
lean_object* v_toCommandContextInfo_567_; lean_object* v_fileMap_568_; lean_object* v___x_569_; lean_object* v_line_570_; lean_object* v_column_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_594_; 
v_toCommandContextInfo_567_ = lean_ctor_get(v_ctx_564_, 0);
lean_inc_ref(v_toCommandContextInfo_567_);
lean_dec_ref(v_ctx_564_);
v_fileMap_568_ = lean_ctor_get(v_toCommandContextInfo_567_, 2);
lean_inc_ref(v_fileMap_568_);
lean_dec_ref(v_toCommandContextInfo_567_);
v___x_569_ = l_Lean_FileMap_toPosition(v_fileMap_568_, v_pos_565_);
v_line_570_ = lean_ctor_get(v___x_569_, 0);
v_column_571_ = lean_ctor_get(v___x_569_, 1);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_594_ == 0)
{
v___x_573_ = v___x_569_;
v_isShared_574_ = v_isSharedCheck_594_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_column_571_);
lean_inc(v_line_570_);
lean_dec(v___x_569_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_594_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_575_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1));
v___x_576_ = l_Nat_reprFast(v_line_570_);
v___x_577_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 5);
lean_ctor_set(v___x_573_, 1, v___x_577_);
lean_ctor_set(v___x_573_, 0, v___x_575_);
v___x_579_ = v___x_573_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_593_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v_pos_586_; 
v___x_580_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3));
v___x_581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = l_Nat_reprFast(v_column_571_);
v___x_583_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
v___x_584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_581_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5));
v_pos_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_pos_586_, 0, v___x_584_);
lean_ctor_set(v_pos_586_, 1, v___x_585_);
switch(lean_obj_tag(v_info_566_))
{
case 0:
{
return v_pos_586_;
}
case 1:
{
uint8_t v_canonical_590_; 
v_canonical_590_ = lean_ctor_get_uint8(v_info_566_, sizeof(void*)*2);
if (v_canonical_590_ == 1)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__9));
v___x_592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_592_, 0, v_pos_586_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
return v___x_592_;
}
else
{
goto v___jp_587_;
}
}
default: 
{
goto v___jp_587_;
}
}
v___jp_587_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__7));
v___x_589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_589_, 0, v_pos_586_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___boxed(lean_object* v_ctx_595_, lean_object* v_pos_596_, lean_object* v_info_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_595_, v_pos_596_, v_info_597_);
lean_dec(v_info_597_);
lean_dec(v_pos_596_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(lean_object* v_ctx_602_, lean_object* v_stx_603_){
_start:
{
lean_object* v___y_605_; lean_object* v___y_606_; uint8_t v___x_614_; lean_object* v___y_616_; lean_object* v___x_619_; 
v___x_614_ = 0;
v___x_619_ = l_Lean_Syntax_getPos_x3f(v_stx_603_, v___x_614_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v___x_620_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v___y_616_ = v___x_620_;
goto v___jp_615_;
}
else
{
lean_object* v_val_621_; 
v_val_621_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_val_621_);
lean_dec_ref_known(v___x_619_, 1);
v___y_616_ = v_val_621_;
goto v___jp_615_;
}
v___jp_604_:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_607_ = l_Lean_Syntax_getHeadInfo(v_stx_603_);
lean_inc_ref(v_ctx_602_);
v___x_608_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_602_, v___y_605_, v___x_607_);
lean_dec(v___x_607_);
lean_dec(v___y_605_);
v___x_609_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1));
v___x_610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = l_Lean_Syntax_getTailInfo(v_stx_603_);
v___x_612_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos(v_ctx_602_, v___y_606_, v___x_611_);
lean_dec(v___x_611_);
lean_dec(v___y_606_);
v___x_613_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_610_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
return v___x_613_;
}
v___jp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_Syntax_getTailPos_x3f(v_stx_603_, v___x_614_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_inc(v___y_616_);
v___y_605_ = v___y_616_;
v___y_606_ = v___y_616_;
goto v___jp_604_;
}
else
{
lean_object* v_val_618_; 
v_val_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_val_618_);
lean_dec_ref_known(v___x_617_, 1);
v___y_605_ = v___y_616_;
v___y_606_ = v_val_618_;
goto v___jp_604_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___boxed(lean_object* v_ctx_622_, lean_object* v_stx_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_622_, v_stx_623_);
lean_dec(v_stx_623_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(lean_object* v_ctx_628_, lean_object* v_info_629_){
_start:
{
lean_object* v_elaborator_630_; lean_object* v_stx_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_646_; 
v_elaborator_630_ = lean_ctor_get(v_info_629_, 0);
v_stx_631_ = lean_ctor_get(v_info_629_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v_info_629_);
if (v_isSharedCheck_646_ == 0)
{
v___x_633_ = v_info_629_;
v_isShared_634_ = v_isSharedCheck_646_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_stx_631_);
lean_inc(v_elaborator_630_);
lean_dec(v_info_629_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_646_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
uint8_t v___x_635_; 
v___x_635_ = l_Lean_Name_isAnonymous(v_elaborator_630_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_636_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_628_, v_stx_631_);
lean_dec(v_stx_631_);
v___x_637_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 5);
lean_ctor_set(v___x_633_, 1, v___x_637_);
lean_ctor_set(v___x_633_, 0, v___x_636_);
v___x_639_ = v___x_633_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v___x_637_);
v___x_639_ = v_reuseFailAlloc_644_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_640_ = 1;
v___x_641_ = l_Lean_Name_toString(v_elaborator_630_, v___x_640_);
v___x_642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
v___x_643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_639_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
return v___x_643_;
}
}
else
{
lean_object* v___x_645_; 
lean_del_object(v___x_633_);
lean_dec(v_elaborator_630_);
v___x_645_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_628_, v_stx_631_);
lean_dec(v_stx_631_);
return v___x_645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg(lean_object* v_info_647_, lean_object* v_ctx_648_, lean_object* v_x_649_){
_start:
{
lean_object* v_lctx_651_; lean_object* v___x_652_; 
v_lctx_651_ = lean_ctor_get(v_info_647_, 1);
lean_inc_ref(v_lctx_651_);
lean_dec_ref(v_info_647_);
v___x_652_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_648_, v_lctx_651_, v_x_649_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg___boxed(lean_object* v_info_653_, lean_object* v_ctx_654_, lean_object* v_x_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_653_, v_ctx_654_, v_x_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM(lean_object* v_00_u03b1_658_, lean_object* v_info_659_, lean_object* v_ctx_660_, lean_object* v_x_661_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_659_, v_ctx_660_, v_x_661_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_runMetaM___boxed(lean_object* v_00_u03b1_664_, lean_object* v_info_665_, lean_object* v_ctx_666_, lean_object* v_x_667_, lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_Elab_TermInfo_runMetaM(v_00_u03b1_664_, v_info_665_, v_ctx_666_, v_x_667_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0(lean_object* v_ctx_684_, lean_object* v_toElabInfo_685_, lean_object* v_expr_686_, uint8_t v_isBinder_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v_a_708_; lean_object* v___y_718_; uint8_t v___y_719_; lean_object* v___y_722_; lean_object* v_a_723_; lean_object* v___x_726_; 
lean_inc(v___y_691_);
lean_inc_ref(v___y_690_);
lean_inc(v___y_689_);
lean_inc_ref(v___y_688_);
lean_inc_ref(v_expr_686_);
v___x_726_ = lean_infer_type(v_expr_686_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = l_Lean_Meta_ppExpr(v_a_727_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v_a_708_ = v_a_729_;
goto v___jp_707_;
}
else
{
lean_object* v_a_730_; 
v_a_730_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_730_);
v___y_722_ = v___x_728_;
v_a_723_ = v_a_730_;
goto v___jp_721_;
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_a_731_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_726_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_726_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
lean_inc(v_a_731_);
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
v___y_722_ = v___x_736_;
v_a_723_ = v_a_731_;
goto v___jp_721_;
}
}
}
v___jp_693_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_inc_ref(v___y_696_);
v___x_697_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_697_, 0, v___y_696_);
v___x_698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_698_, 0, v___y_695_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__1));
v___x_700_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
lean_ctor_set(v___x_701_, 1, v___y_694_);
v___x_702_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_703_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_684_, v_toElabInfo_685_);
v___x_705_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
v___jp_707_:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lean_Meta_ppExpr(v_expr_686_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v___x_711_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__3));
v___x_712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v_a_710_);
v___x_713_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__5));
v___x_714_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
if (v_isBinder_687_ == 0)
{
lean_object* v___x_715_; 
v___x_715_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__6));
v___y_694_ = v_a_708_;
v___y_695_ = v___x_714_;
v___y_696_ = v___x_715_;
goto v___jp_693_;
}
else
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__7));
v___y_694_ = v_a_708_;
v___y_695_ = v___x_714_;
v___y_696_ = v___x_716_;
goto v___jp_693_;
}
}
else
{
lean_dec(v_a_708_);
lean_dec_ref(v_toElabInfo_685_);
lean_dec_ref(v_ctx_684_);
return v___x_709_;
}
}
v___jp_717_:
{
if (v___y_719_ == 0)
{
lean_object* v___x_720_; 
lean_dec_ref(v___y_718_);
v___x_720_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__9));
v_a_708_ = v___x_720_;
goto v___jp_707_;
}
else
{
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec_ref(v_expr_686_);
lean_dec_ref(v_toElabInfo_685_);
lean_dec_ref(v_ctx_684_);
return v___y_718_;
}
}
v___jp_721_:
{
uint8_t v___x_724_; 
v___x_724_ = l_Lean_Exception_isInterrupt(v_a_723_);
if (v___x_724_ == 0)
{
uint8_t v___x_725_; 
v___x_725_ = l_Lean_Exception_isRuntime(v_a_723_);
v___y_718_ = v___y_722_;
v___y_719_ = v___x_725_;
goto v___jp_717_;
}
else
{
lean_dec_ref(v_a_723_);
v___y_718_ = v___y_722_;
v___y_719_ = v___x_724_;
goto v___jp_717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___lam__0___boxed(lean_object* v_ctx_739_, lean_object* v_toElabInfo_740_, lean_object* v_expr_741_, lean_object* v_isBinder_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
uint8_t v_isBinder_boxed_748_; lean_object* v_res_749_; 
v_isBinder_boxed_748_ = lean_unbox(v_isBinder_742_);
v_res_749_ = l_Lean_Elab_TermInfo_format___lam__0(v_ctx_739_, v_toElabInfo_740_, v_expr_741_, v_isBinder_boxed_748_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format(lean_object* v_ctx_750_, lean_object* v_info_751_){
_start:
{
lean_object* v_toElabInfo_753_; lean_object* v_expr_754_; uint8_t v_isBinder_755_; lean_object* v___x_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v_toElabInfo_753_ = lean_ctor_get(v_info_751_, 0);
v_expr_754_ = lean_ctor_get(v_info_751_, 3);
v_isBinder_755_ = lean_ctor_get_uint8(v_info_751_, sizeof(void*)*4);
v___x_756_ = lean_box(v_isBinder_755_);
lean_inc_ref(v_expr_754_);
lean_inc_ref(v_toElabInfo_753_);
lean_inc_ref(v_ctx_750_);
v___f_757_ = lean_alloc_closure((void*)(l_Lean_Elab_TermInfo_format___lam__0___boxed), 9, 4);
lean_closure_set(v___f_757_, 0, v_ctx_750_);
lean_closure_set(v___f_757_, 1, v_toElabInfo_753_);
lean_closure_set(v___f_757_, 2, v_expr_754_);
lean_closure_set(v___f_757_, 3, v___x_756_);
v___x_758_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_info_751_, v_ctx_750_, v___f_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TermInfo_format___boxed(lean_object* v_ctx_759_, lean_object* v_info_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lean_Elab_TermInfo_format(v_ctx_759_, v_info_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialTermInfo_format(lean_object* v_ctx_766_, lean_object* v_info_767_){
_start:
{
lean_object* v_toElabInfo_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_toElabInfo_768_ = lean_ctor_get(v_info_767_, 0);
lean_inc_ref(v_toElabInfo_768_);
lean_dec_ref(v_info_767_);
v___x_769_ = ((lean_object*)(l_Lean_Elab_PartialTermInfo_format___closed__1));
v___x_770_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_766_, v_toElabInfo_768_);
v___x_771_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(lean_object* v_x_778_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
lean_object* v___x_779_; 
v___x_779_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
return v___x_779_;
}
else
{
lean_object* v_val_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_790_; 
v_val_780_ = lean_ctor_get(v_x_778_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v_x_778_);
if (v_isSharedCheck_790_ == 0)
{
v___x_782_ = v_x_778_;
v_isShared_783_ = v_isSharedCheck_790_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_val_780_);
lean_dec(v_x_778_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_790_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_784_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3));
v___x_785_ = lean_expr_dbg_to_string(v_val_780_);
lean_dec(v_val_780_);
if (v_isShared_783_ == 0)
{
lean_ctor_set_tag(v___x_782_, 3);
lean_ctor_set(v___x_782_, 0, v___x_785_);
v___x_787_ = v___x_782_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_789_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; 
v___x_788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_784_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
return v___x_788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0(lean_object* v_ctx_797_, lean_object* v_lctx_798_, lean_object* v_stx_799_, lean_object* v_expectedType_x3f_800_, lean_object* v_info_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v___x_807_; lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_826_; 
v___x_807_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_797_, v_lctx_798_, v_stx_799_);
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_826_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_826_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_826_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_824_; 
v___x_812_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__1));
v___x_813_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v_a_808_);
v___x_814_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_815_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(v_expectedType_x3f_800_);
v___x_817_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_819_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = l_Lean_Elab_CompletionInfo_stx(v_info_801_);
v___x_821_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_797_, v___x_820_);
lean_dec(v___x_820_);
v___x_822_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_819_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_822_);
v___x_824_ = v___x_810_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___lam__0___boxed(lean_object* v_ctx_827_, lean_object* v_lctx_828_, lean_object* v_stx_829_, lean_object* v_expectedType_x3f_830_, lean_object* v_info_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Elab_CompletionInfo_format___lam__0(v_ctx_827_, v_lctx_828_, v_stx_829_, v_expectedType_x3f_830_, v_info_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v_info_831_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format(lean_object* v_ctx_844_, lean_object* v_info_845_){
_start:
{
switch(lean_obj_tag(v_info_845_))
{
case 0:
{
lean_object* v_termInfo_847_; lean_object* v_expectedType_x3f_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_869_; 
v_termInfo_847_ = lean_ctor_get(v_info_845_, 0);
v_expectedType_x3f_848_ = lean_ctor_get(v_info_845_, 1);
v_isSharedCheck_869_ = !lean_is_exclusive(v_info_845_);
if (v_isSharedCheck_869_ == 0)
{
v___x_850_ = v_info_845_;
v_isShared_851_ = v_isSharedCheck_869_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_expectedType_x3f_848_);
lean_inc(v_termInfo_847_);
lean_dec(v_info_845_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_869_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_Elab_TermInfo_format(v_ctx_844_, v_termInfo_847_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_868_; 
v_a_853_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_868_ == 0)
{
v___x_855_ = v___x_852_;
v_isShared_856_ = v_isSharedCheck_868_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_852_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_868_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___closed__1));
if (v_isShared_851_ == 0)
{
lean_ctor_set_tag(v___x_850_, 5);
lean_ctor_set(v___x_850_, 1, v_a_853_);
lean_ctor_set(v___x_850_, 0, v___x_857_);
v___x_859_ = v___x_850_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_a_853_);
v___x_859_ = v_reuseFailAlloc_867_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_860_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_861_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0(v_expectedType_x3f_848_);
v___x_863_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_861_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___x_863_);
v___x_865_ = v___x_855_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_863_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
else
{
lean_del_object(v___x_850_);
lean_dec(v_expectedType_x3f_848_);
return v___x_852_;
}
}
}
case 1:
{
lean_object* v_stx_870_; lean_object* v_lctx_871_; lean_object* v_expectedType_x3f_872_; lean_object* v___f_873_; lean_object* v___x_874_; 
v_stx_870_ = lean_ctor_get(v_info_845_, 0);
lean_inc(v_stx_870_);
v_lctx_871_ = lean_ctor_get(v_info_845_, 2);
lean_inc_ref_n(v_lctx_871_, 2);
v_expectedType_x3f_872_ = lean_ctor_get(v_info_845_, 3);
lean_inc(v_expectedType_x3f_872_);
lean_inc_ref(v_ctx_844_);
v___f_873_ = lean_alloc_closure((void*)(l_Lean_Elab_CompletionInfo_format___lam__0___boxed), 10, 5);
lean_closure_set(v___f_873_, 0, v_ctx_844_);
lean_closure_set(v___f_873_, 1, v_lctx_871_);
lean_closure_set(v___f_873_, 2, v_stx_870_);
lean_closure_set(v___f_873_, 3, v_expectedType_x3f_872_);
lean_closure_set(v___f_873_, 4, v_info_845_);
v___x_874_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_844_, v_lctx_871_, v___f_873_);
return v___x_874_;
}
default: 
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_875_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___closed__3));
v___x_876_ = l_Lean_Elab_CompletionInfo_stx(v_info_845_);
lean_dec_ref(v_info_845_);
v___x_877_ = lean_box(0);
v___x_878_ = 0;
lean_inc(v___x_876_);
v___x_879_ = l_Lean_Syntax_formatStx(v___x_876_, v___x_877_, v___x_878_);
v___x_880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_875_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_844_, v___x_876_);
lean_dec(v___x_876_);
v___x_884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_882_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CompletionInfo_format___boxed(lean_object* v_ctx_886_, lean_object* v_info_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_Elab_CompletionInfo_format(v_ctx_886_, v_info_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format(lean_object* v_ctx_893_, lean_object* v_info_894_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_896_ = ((lean_object*)(l_Lean_Elab_CommandInfo_format___closed__1));
v___x_897_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_893_, v_info_894_);
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_896_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandInfo_format___boxed(lean_object* v_ctx_900_, lean_object* v_info_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_Elab_CommandInfo_format(v_ctx_900_, v_info_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format(lean_object* v_ctx_907_, lean_object* v_info_908_){
_start:
{
lean_object* v_stx_910_; lean_object* v_optionName_911_; lean_object* v___x_912_; uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_stx_910_ = lean_ctor_get(v_info_908_, 0);
lean_inc(v_stx_910_);
v_optionName_911_ = lean_ctor_get(v_info_908_, 1);
lean_inc(v_optionName_911_);
lean_dec_ref(v_info_908_);
v___x_912_ = ((lean_object*)(l_Lean_Elab_OptionInfo_format___closed__1));
v___x_913_ = 1;
v___x_914_ = l_Lean_Name_toString(v_optionName_911_, v___x_913_);
v___x_915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
v___x_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_912_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_907_, v_stx_910_);
lean_dec(v_stx_910_);
v___x_920_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OptionInfo_format___boxed(lean_object* v_ctx_922_, lean_object* v_info_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_Elab_OptionInfo_format(v_ctx_922_, v_info_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format(lean_object* v_ctx_929_, lean_object* v_info_930_){
_start:
{
lean_object* v_stx_932_; lean_object* v_errorName_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_949_; 
v_stx_932_ = lean_ctor_get(v_info_930_, 0);
v_errorName_933_ = lean_ctor_get(v_info_930_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_info_930_);
if (v_isSharedCheck_949_ == 0)
{
v___x_935_ = v_info_930_;
v_isShared_936_ = v_isSharedCheck_949_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_errorName_933_);
lean_inc(v_stx_932_);
lean_dec(v_info_930_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_949_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_937_ = ((lean_object*)(l_Lean_Elab_ErrorNameInfo_format___closed__1));
v___x_938_ = 1;
v___x_939_ = l_Lean_Name_toString(v_errorName_933_, v___x_938_);
v___x_940_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 5);
lean_ctor_set(v___x_935_, 1, v___x_940_);
lean_ctor_set(v___x_935_, 0, v___x_937_);
v___x_942_ = v___x_935_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_940_);
v___x_942_ = v_reuseFailAlloc_948_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_943_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_929_, v_stx_932_);
lean_dec(v_stx_932_);
v___x_946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorNameInfo_format___boxed(lean_object* v_ctx_950_, lean_object* v_info_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_Elab_ErrorNameInfo_format(v_ctx_950_, v_info_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0(lean_object* v_val_960_, lean_object* v_fieldName_961_, lean_object* v_ctx_962_, lean_object* v_stx_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_969_; 
lean_inc(v___y_967_);
lean_inc_ref(v___y_966_);
lean_inc(v___y_965_);
lean_inc_ref(v___y_964_);
lean_inc_ref(v_val_960_);
v___x_969_ = lean_infer_type(v_val_960_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Lean_Meta_ppExpr(v_a_970_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_1002_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_1002_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_1002_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; 
v___x_976_ = l_Lean_Meta_ppExpr(v_val_960_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_1001_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_979_ = v___x_976_;
v_isShared_980_ = v_isSharedCheck_1001_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_976_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_1001_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; uint8_t v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_981_ = ((lean_object*)(l_Lean_Elab_FieldInfo_format___lam__0___closed__1));
v___x_982_ = 1;
v___x_983_ = l_Lean_Name_toString(v_fieldName_961_, v___x_982_);
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 3);
lean_ctor_set(v___x_974_, 0, v___x_983_);
v___x_985_ = v___x_974_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_983_);
v___x_985_ = v_reuseFailAlloc_1000_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_981_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = ((lean_object*)(l_Lean_Elab_CompletionInfo_format___lam__0___closed__3));
v___x_988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
lean_ctor_set(v___x_989_, 1, v_a_972_);
v___x_990_ = ((lean_object*)(l_Lean_Elab_FieldInfo_format___lam__0___closed__3));
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v_a_977_);
v___x_993_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_962_, v_stx_963_);
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_996_);
v___x_998_ = v___x_979_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
else
{
lean_del_object(v___x_974_);
lean_dec(v_a_972_);
lean_dec_ref(v_ctx_962_);
lean_dec(v_fieldName_961_);
return v___x_976_;
}
}
}
else
{
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec_ref(v_ctx_962_);
lean_dec(v_fieldName_961_);
lean_dec_ref(v_val_960_);
return v___x_971_;
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec_ref(v_ctx_962_);
lean_dec(v_fieldName_961_);
lean_dec_ref(v_val_960_);
v_a_1003_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_969_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_969_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___lam__0___boxed(lean_object* v_val_1011_, lean_object* v_fieldName_1012_, lean_object* v_ctx_1013_, lean_object* v_stx_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_Elab_FieldInfo_format___lam__0(v_val_1011_, v_fieldName_1012_, v_ctx_1013_, v_stx_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
lean_dec(v_stx_1014_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format(lean_object* v_ctx_1021_, lean_object* v_info_1022_){
_start:
{
lean_object* v_fieldName_1024_; lean_object* v_lctx_1025_; lean_object* v_val_1026_; lean_object* v_stx_1027_; lean_object* v___f_1028_; lean_object* v___x_1029_; 
v_fieldName_1024_ = lean_ctor_get(v_info_1022_, 1);
lean_inc(v_fieldName_1024_);
v_lctx_1025_ = lean_ctor_get(v_info_1022_, 2);
lean_inc_ref(v_lctx_1025_);
v_val_1026_ = lean_ctor_get(v_info_1022_, 3);
lean_inc_ref(v_val_1026_);
v_stx_1027_ = lean_ctor_get(v_info_1022_, 4);
lean_inc(v_stx_1027_);
lean_dec_ref(v_info_1022_);
lean_inc_ref(v_ctx_1021_);
v___f_1028_ = lean_alloc_closure((void*)(l_Lean_Elab_FieldInfo_format___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1028_, 0, v_val_1026_);
lean_closure_set(v___f_1028_, 1, v_fieldName_1024_);
lean_closure_set(v___f_1028_, 2, v_ctx_1021_);
lean_closure_set(v___f_1028_, 3, v_stx_1027_);
v___x_1029_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_1021_, v_lctx_1025_, v___f_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldInfo_format___boxed(lean_object* v_ctx_1030_, lean_object* v_info_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lean_Elab_FieldInfo_format(v_ctx_1030_, v_info_1031_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(lean_object* v_pre_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_){
_start:
{
if (lean_obj_tag(v_x_1036_) == 0)
{
lean_dec(v_pre_1034_);
return v_x_1035_;
}
else
{
lean_object* v_head_1037_; lean_object* v_tail_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1047_; 
v_head_1037_ = lean_ctor_get(v_x_1036_, 0);
v_tail_1038_ = lean_ctor_get(v_x_1036_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_x_1036_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1040_ = v_x_1036_;
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_tail_1038_);
lean_inc(v_head_1037_);
lean_dec(v_x_1036_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
lean_inc(v_pre_1034_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 5);
lean_ctor_set(v___x_1040_, 1, v_pre_1034_);
lean_ctor_set(v___x_1040_, 0, v_x_1035_);
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_x_1035_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_pre_1034_);
v___x_1043_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v_head_1037_);
v_x_1035_ = v___x_1044_;
v_x_1036_ = v_tail_1038_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(lean_object* v_pre_1048_, lean_object* v_x_1049_){
_start:
{
if (lean_obj_tag(v_x_1049_) == 0)
{
lean_object* v___x_1050_; 
lean_dec(v_pre_1048_);
v___x_1050_ = lean_box(0);
return v___x_1050_;
}
else
{
lean_object* v_head_1051_; lean_object* v_tail_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1060_; 
v_head_1051_ = lean_ctor_get(v_x_1049_, 0);
v_tail_1052_ = lean_ctor_get(v_x_1049_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1054_ = v_x_1049_;
v_isShared_1055_ = v_isSharedCheck_1060_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_tail_1052_);
lean_inc(v_head_1051_);
lean_dec(v_x_1049_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1060_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
lean_inc(v_pre_1048_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 5);
lean_ctor_set(v___x_1054_, 1, v_head_1051_);
lean_ctor_set(v___x_1054_, 0, v_pre_1048_);
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_pre_1048_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_head_1051_);
v___x_1057_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_List_foldl___at___00Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1_spec__1(v_pre_1048_, v___x_1057_, v_tail_1052_);
return v___x_1058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(lean_object* v_x_1061_, lean_object* v_x_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
if (lean_obj_tag(v_x_1061_) == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = l_List_reverse___redArg(v_x_1062_);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
else
{
lean_object* v_head_1070_; lean_object* v_tail_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1089_; 
v_head_1070_ = lean_ctor_get(v_x_1061_, 0);
v_tail_1071_ = lean_ctor_get(v_x_1061_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1073_ = v_x_1061_;
v_isShared_1074_ = v_isSharedCheck_1089_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_tail_1071_);
lean_inc(v_head_1070_);
lean_dec(v_x_1061_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1089_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_Meta_ppGoal(v_head_1070_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v_head_1070_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 1, v_x_1062_);
lean_ctor_set(v___x_1073_, 0, v_a_1076_);
v___x_1078_ = v___x_1073_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1076_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_x_1062_);
v___x_1078_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
v_x_1061_ = v_tail_1071_;
v_x_1062_ = v___x_1078_;
goto _start;
}
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
lean_del_object(v___x_1073_);
lean_dec(v_tail_1071_);
lean_dec(v_x_1062_);
v_a_1081_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v___x_1075_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1075_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0___boxed(lean_object* v_x_1090_, lean_object* v_x_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(v_x_1090_, v_x_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0(lean_object* v_goals_1101_, lean_object* v___x_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_List_mapM_loop___at___00Lean_Elab_ContextInfo_ppGoals_spec__0(v_goals_1101_, v___x_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1118_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1118_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1118_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1113_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
v___x_1114_ = l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(v___x_1113_, v_a_1109_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1114_);
v___x_1116_ = v___x_1111_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1108_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1108_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed(lean_object* v_goals_1127_, lean_object* v___x_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lean_Elab_ContextInfo_ppGoals___lam__0(v_goals_1127_, v___x_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
return v_res_1134_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__0(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__1(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = lean_unsigned_to_nat(32u);
v___x_1138_ = lean_mk_empty_array_with_capacity(v___x_1137_);
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2(void){
_start:
{
size_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1140_ = ((size_t)5ULL);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = lean_unsigned_to_nat(32u);
v___x_1143_ = lean_mk_empty_array_with_capacity(v___x_1142_);
v___x_1144_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__1, &l_Lean_Elab_ContextInfo_ppGoals___closed__1_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__1);
v___x_1145_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set(v___x_1145_, 1, v___x_1143_);
lean_ctor_set(v___x_1145_, 2, v___x_1141_);
lean_ctor_set(v___x_1145_, 3, v___x_1141_);
lean_ctor_set_usize(v___x_1145_, 4, v___x_1140_);
return v___x_1145_;
}
}
static lean_object* _init_l_Lean_Elab_ContextInfo_ppGoals___closed__3(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1146_ = lean_box(1);
v___x_1147_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__2, &l_Lean_Elab_ContextInfo_ppGoals___closed__2_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2);
v___x_1148_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__0, &l_Lean_Elab_ContextInfo_ppGoals___closed__0_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__0);
v___x_1149_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v___x_1147_);
lean_ctor_set(v___x_1149_, 2, v___x_1146_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals(lean_object* v_ctx_1153_, lean_object* v_goals_1154_){
_start:
{
uint8_t v___x_1156_; 
v___x_1156_ = l_List_isEmpty___redArg(v_goals_1154_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___f_1159_; lean_object* v___x_1160_; 
v___x_1157_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__3, &l_Lean_Elab_ContextInfo_ppGoals___closed__3_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__3);
v___x_1158_ = lean_box(0);
v___f_1159_ = lean_alloc_closure((void*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1159_, 0, v_goals_1154_);
lean_closure_set(v___f_1159_, 1, v___x_1158_);
v___x_1160_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_1153_, v___x_1157_, v___f_1159_);
return v___x_1160_;
}
else
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec(v_goals_1154_);
lean_dec_ref(v_ctx_1153_);
v___x_1161_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___closed__5));
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ContextInfo_ppGoals___boxed(lean_object* v_ctx_1163_, lean_object* v_goals_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctx_1163_, v_goals_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format(lean_object* v_ctx_1176_, lean_object* v_info_1177_){
_start:
{
lean_object* v_toCommandContextInfo_1179_; lean_object* v_parentDecl_x3f_1180_; lean_object* v_autoImplicits_1181_; lean_object* v_env_1182_; lean_object* v_cmdEnv_x3f_1183_; lean_object* v_fileMap_1184_; lean_object* v_options_1185_; lean_object* v_currNamespace_1186_; lean_object* v_openDecls_1187_; lean_object* v_ngen_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1230_; 
v_toCommandContextInfo_1179_ = lean_ctor_get(v_ctx_1176_, 0);
lean_inc_ref(v_toCommandContextInfo_1179_);
v_parentDecl_x3f_1180_ = lean_ctor_get(v_ctx_1176_, 1);
v_autoImplicits_1181_ = lean_ctor_get(v_ctx_1176_, 2);
v_env_1182_ = lean_ctor_get(v_toCommandContextInfo_1179_, 0);
v_cmdEnv_x3f_1183_ = lean_ctor_get(v_toCommandContextInfo_1179_, 1);
v_fileMap_1184_ = lean_ctor_get(v_toCommandContextInfo_1179_, 2);
v_options_1185_ = lean_ctor_get(v_toCommandContextInfo_1179_, 4);
v_currNamespace_1186_ = lean_ctor_get(v_toCommandContextInfo_1179_, 5);
v_openDecls_1187_ = lean_ctor_get(v_toCommandContextInfo_1179_, 6);
v_ngen_1188_ = lean_ctor_get(v_toCommandContextInfo_1179_, 7);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_toCommandContextInfo_1179_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v_toCommandContextInfo_1179_, 3);
lean_dec(v_unused_1231_);
v___x_1190_ = v_toCommandContextInfo_1179_;
v_isShared_1191_ = v_isSharedCheck_1230_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_ngen_1188_);
lean_inc(v_openDecls_1187_);
lean_inc(v_currNamespace_1186_);
lean_inc(v_options_1185_);
lean_inc(v_fileMap_1184_);
lean_inc(v_cmdEnv_x3f_1183_);
lean_inc(v_env_1182_);
lean_dec(v_toCommandContextInfo_1179_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1230_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v_toElabInfo_1192_; lean_object* v_mctxBefore_1193_; lean_object* v_goalsBefore_1194_; lean_object* v_mctxAfter_1195_; lean_object* v_goalsAfter_1196_; lean_object* v___x_1198_; 
v_toElabInfo_1192_ = lean_ctor_get(v_info_1177_, 0);
lean_inc_ref(v_toElabInfo_1192_);
v_mctxBefore_1193_ = lean_ctor_get(v_info_1177_, 1);
lean_inc_ref(v_mctxBefore_1193_);
v_goalsBefore_1194_ = lean_ctor_get(v_info_1177_, 2);
lean_inc(v_goalsBefore_1194_);
v_mctxAfter_1195_ = lean_ctor_get(v_info_1177_, 3);
lean_inc_ref(v_mctxAfter_1195_);
v_goalsAfter_1196_ = lean_ctor_get(v_info_1177_, 4);
lean_inc(v_goalsAfter_1196_);
lean_dec_ref(v_info_1177_);
lean_inc_ref(v_ngen_1188_);
lean_inc(v_openDecls_1187_);
lean_inc(v_currNamespace_1186_);
lean_inc_ref(v_options_1185_);
lean_inc_ref(v_fileMap_1184_);
lean_inc(v_cmdEnv_x3f_1183_);
lean_inc_ref(v_env_1182_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 3, v_mctxBefore_1193_);
v___x_1198_ = v___x_1190_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_env_1182_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_cmdEnv_x3f_1183_);
lean_ctor_set(v_reuseFailAlloc_1229_, 2, v_fileMap_1184_);
lean_ctor_set(v_reuseFailAlloc_1229_, 3, v_mctxBefore_1193_);
lean_ctor_set(v_reuseFailAlloc_1229_, 4, v_options_1185_);
lean_ctor_set(v_reuseFailAlloc_1229_, 5, v_currNamespace_1186_);
lean_ctor_set(v_reuseFailAlloc_1229_, 6, v_openDecls_1187_);
lean_ctor_set(v_reuseFailAlloc_1229_, 7, v_ngen_1188_);
v___x_1198_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v_ctxB_1199_; lean_object* v___x_1200_; lean_object* v_ctxA_1201_; lean_object* v___x_1202_; 
lean_inc_ref_n(v_autoImplicits_1181_, 2);
lean_inc_n(v_parentDecl_x3f_1180_, 2);
v_ctxB_1199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_ctxB_1199_, 0, v___x_1198_);
lean_ctor_set(v_ctxB_1199_, 1, v_parentDecl_x3f_1180_);
lean_ctor_set(v_ctxB_1199_, 2, v_autoImplicits_1181_);
v___x_1200_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1200_, 0, v_env_1182_);
lean_ctor_set(v___x_1200_, 1, v_cmdEnv_x3f_1183_);
lean_ctor_set(v___x_1200_, 2, v_fileMap_1184_);
lean_ctor_set(v___x_1200_, 3, v_mctxAfter_1195_);
lean_ctor_set(v___x_1200_, 4, v_options_1185_);
lean_ctor_set(v___x_1200_, 5, v_currNamespace_1186_);
lean_ctor_set(v___x_1200_, 6, v_openDecls_1187_);
lean_ctor_set(v___x_1200_, 7, v_ngen_1188_);
v_ctxA_1201_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_ctxA_1201_, 0, v___x_1200_);
lean_ctor_set(v_ctxA_1201_, 1, v_parentDecl_x3f_1180_);
lean_ctor_set(v_ctxA_1201_, 2, v_autoImplicits_1181_);
v___x_1202_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctxB_1199_, v_goalsBefore_1194_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1204_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1204_ = l_Lean_Elab_ContextInfo_ppGoals(v_ctxA_1201_, v_goalsAfter_1196_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1228_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1228_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1228_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_stx_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v_stx_1209_ = lean_ctor_get(v_toElabInfo_1192_, 1);
lean_inc(v_stx_1209_);
v___x_1210_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__1));
v___x_1211_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1176_, v_toElabInfo_1192_);
v___x_1212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
v___x_1214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = lean_box(0);
v___x_1216_ = 0;
v___x_1217_ = l_Lean_Syntax_formatStx(v_stx_1209_, v___x_1215_, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1214_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__3));
v___x_1220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v_a_1203_);
v___x_1222_ = ((lean_object*)(l_Lean_Elab_TacticInfo_format___closed__5));
v___x_1223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
lean_ctor_set(v___x_1224_, 1, v_a_1205_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1224_);
v___x_1226_ = v___x_1207_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_dec(v_a_1203_);
lean_dec_ref(v_toElabInfo_1192_);
lean_dec_ref(v_ctx_1176_);
return v___x_1204_;
}
}
else
{
lean_dec_ref_known(v_ctxA_1201_, 3);
lean_dec(v_goalsAfter_1196_);
lean_dec_ref(v_toElabInfo_1192_);
lean_dec_ref(v_ctx_1176_);
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_TacticInfo_format___boxed(lean_object* v_ctx_1232_, lean_object* v_info_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_Elab_TacticInfo_format(v_ctx_1232_, v_info_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format(lean_object* v_ctx_1242_, lean_object* v_info_1243_){
_start:
{
lean_object* v_lctx_1245_; lean_object* v_stx_1246_; lean_object* v_output_1247_; lean_object* v___x_1248_; lean_object* v_a_1249_; lean_object* v___x_1250_; lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1263_; 
v_lctx_1245_ = lean_ctor_get(v_info_1243_, 0);
lean_inc_ref_n(v_lctx_1245_, 2);
v_stx_1246_ = lean_ctor_get(v_info_1243_, 1);
lean_inc(v_stx_1246_);
v_output_1247_ = lean_ctor_get(v_info_1243_, 2);
lean_inc(v_output_1247_);
lean_dec_ref(v_info_1243_);
v___x_1248_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_1242_, v_lctx_1245_, v_stx_1246_);
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = l_Lean_Elab_ContextInfo_ppSyntax(v_ctx_1242_, v_lctx_1245_, v_output_1247_);
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1263_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1263_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1255_ = ((lean_object*)(l_Lean_Elab_MacroExpansionInfo_format___closed__1));
v___x_1256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v_a_1249_);
v___x_1257_ = ((lean_object*)(l_Lean_Elab_MacroExpansionInfo_format___closed__3));
v___x_1258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v_a_1251_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1259_);
v___x_1261_ = v___x_1253_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_MacroExpansionInfo_format___boxed(lean_object* v_ctx_1264_, lean_object* v_info_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_Elab_MacroExpansionInfo_format(v_ctx_1264_, v_info_1265_);
lean_dec_ref(v_ctx_1264_);
return v_res_1267_;
}
}
static lean_object* _init_l_Lean_Elab_UserWidgetInfo_format___closed__0(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
}
static lean_object* _init_l_Lean_Elab_UserWidgetInfo_format___closed__1(void){
_start:
{
uint8_t v___x_1270_; size_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1270_ = 1;
v___x_1271_ = ((size_t)0ULL);
v___x_1272_ = lean_obj_once(&l_Lean_Elab_UserWidgetInfo_format___closed__0, &l_Lean_Elab_UserWidgetInfo_format___closed__0_once, _init_l_Lean_Elab_UserWidgetInfo_format___closed__0);
v___x_1273_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
lean_ctor_set_usize(v___x_1273_, 2, v___x_1271_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*3, v___x_1270_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_UserWidgetInfo_format(lean_object* v_info_1277_){
_start:
{
lean_object* v_toWidgetInstance_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1307_; 
v_toWidgetInstance_1278_ = lean_ctor_get(v_info_1277_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_info_1277_);
if (v_isSharedCheck_1307_ == 0)
{
lean_object* v_unused_1308_; 
v_unused_1308_ = lean_ctor_get(v_info_1277_, 1);
lean_dec(v_unused_1308_);
v___x_1280_ = v_info_1277_;
v_isShared_1281_ = v_isSharedCheck_1307_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_toWidgetInstance_1278_);
lean_dec(v_info_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1307_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v_id_1282_; lean_object* v_props_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v_fst_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1305_; 
v_id_1282_ = lean_ctor_get(v_toWidgetInstance_1278_, 0);
lean_inc(v_id_1282_);
v_props_1283_ = lean_ctor_get(v_toWidgetInstance_1278_, 1);
lean_inc_ref(v_props_1283_);
lean_dec_ref(v_toWidgetInstance_1278_);
v___x_1284_ = lean_obj_once(&l_Lean_Elab_UserWidgetInfo_format___closed__1, &l_Lean_Elab_UserWidgetInfo_format___closed__1_once, _init_l_Lean_Elab_UserWidgetInfo_format___closed__1);
v___x_1285_ = lean_apply_1(v_props_1283_, v___x_1284_);
v_fst_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; 
v_unused_1306_ = lean_ctor_get(v___x_1285_, 1);
lean_dec(v_unused_1306_);
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1305_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_fst_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1305_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; uint8_t v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1295_; 
v___x_1290_ = ((lean_object*)(l_Lean_Elab_UserWidgetInfo_format___closed__3));
v___x_1291_ = 1;
v___x_1292_ = l_Lean_Name_toString(v_id_1282_, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set_tag(v___x_1288_, 5);
lean_ctor_set(v___x_1288_, 1, v___x_1293_);
lean_ctor_set(v___x_1288_, 0, v___x_1290_);
v___x_1295_ = v___x_1288_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v___x_1293_);
v___x_1295_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = ((lean_object*)(l_Lean_Elab_ContextInfo_ppGoals___lam__0___closed__1));
if (v_isShared_1281_ == 0)
{
lean_ctor_set_tag(v___x_1280_, 5);
lean_ctor_set(v___x_1280_, 1, v___x_1296_);
lean_ctor_set(v___x_1280_, 0, v___x_1295_);
v___x_1298_ = v___x_1280_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1299_ = lean_unsigned_to_nat(80u);
v___x_1300_ = l_Lean_Json_pretty(v_fst_1286_, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1298_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
return v___x_1302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FVarAliasInfo_format(lean_object* v_info_1315_){
_start:
{
lean_object* v_userName_1316_; lean_object* v_id_1317_; lean_object* v_baseId_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; uint8_t v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v_userName_1316_ = lean_ctor_get(v_info_1315_, 0);
lean_inc(v_userName_1316_);
v_id_1317_ = lean_ctor_get(v_info_1315_, 1);
lean_inc(v_id_1317_);
v_baseId_1318_ = lean_ctor_get(v_info_1315_, 2);
lean_inc(v_baseId_1318_);
lean_dec_ref(v_info_1315_);
v___x_1319_ = ((lean_object*)(l_Lean_Elab_FVarAliasInfo_format___closed__1));
v___x_1320_ = l_Lean_Name_eraseMacroScopes(v_userName_1316_);
lean_dec(v_userName_1316_);
v___x_1321_ = 1;
v___x_1322_ = l_Lean_Name_toString(v___x_1320_, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1319_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__1));
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = l_Lean_Name_toString(v_id_1317_, v___x_1321_);
v___x_1328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1326_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lean_Elab_FVarAliasInfo_format___closed__3));
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = l_Lean_Name_toString(v_baseId_1318_, v___x_1321_);
v___x_1333_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1331_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format(lean_object* v_ctx_1338_, lean_object* v_info_1339_){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = ((lean_object*)(l_Lean_Elab_FieldRedeclInfo_format___closed__1));
v___x_1341_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange(v_ctx_1338_, v_info_1339_);
v___x_1342_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1340_);
lean_ctor_set(v___x_1342_, 1, v___x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FieldRedeclInfo_format___boxed(lean_object* v_ctx_1343_, lean_object* v_info_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_Elab_FieldRedeclInfo_format(v_ctx_1343_, v_info_1344_);
lean_dec(v_info_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f(lean_object* v_ppCtx_1348_, lean_object* v_info_1349_){
_start:
{
lean_object* v_mkDocString_x3f_1351_; 
v_mkDocString_x3f_1351_ = lean_ctor_get(v_info_1349_, 2);
lean_inc(v_mkDocString_x3f_1351_);
lean_dec_ref(v_info_1349_);
if (lean_obj_tag(v_mkDocString_x3f_1351_) == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec_ref(v_ppCtx_1348_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
else
{
lean_object* v_val_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1386_; 
v_val_1354_ = lean_ctor_get(v_mkDocString_x3f_1351_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_mkDocString_x3f_1351_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1356_ = v_mkDocString_x3f_1351_;
v_isShared_1357_ = v_isSharedCheck_1386_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_val_1354_);
lean_dec(v_mkDocString_x3f_1351_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1386_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_apply_2(v_val_1354_, v_ppCtx_1348_, lean_box(0));
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1369_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1361_ = v___x_1358_;
v_isShared_1362_ = v_isSharedCheck_1369_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1358_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1369_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v_a_1359_);
v___x_1364_ = v___x_1356_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
lean_object* v___x_1366_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v___x_1364_);
v___x_1366_ = v___x_1361_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1364_);
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
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1385_; 
v_a_1370_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1372_ = v___x_1358_;
v_isShared_1373_ = v_isSharedCheck_1385_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1358_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1385_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1380_; 
v___x_1374_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__0));
v___x_1375_ = lean_io_error_to_string(v_a_1370_);
v___x_1376_ = lean_string_append(v___x_1374_, v___x_1375_);
lean_dec_ref(v___x_1375_);
v___x_1377_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v___x_1378_);
v___x_1380_ = v___x_1356_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
lean_object* v___x_1382_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1380_);
v___x_1382_ = v___x_1372_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_docString_x3f___boxed(lean_object* v_ppCtx_1387_, lean_object* v_info_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Lean_Elab_DelabTermInfo_docString_x3f(v_ppCtx_1387_, v_info_1388_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(lean_object* v_x_1391_, lean_object* v_x_1392_){
_start:
{
if (lean_obj_tag(v_x_1391_) == 0)
{
lean_object* v___x_1393_; 
v___x_1393_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
return v___x_1393_;
}
else
{
lean_object* v_val_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1405_; 
v_val_1394_ = lean_ctor_get(v_x_1391_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_x_1391_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1396_ = v_x_1391_;
v_isShared_1397_ = v_isSharedCheck_1405_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_val_1394_);
lean_dec(v_x_1391_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1405_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1398_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__3));
v___x_1399_ = l_String_quote(v_val_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set_tag(v___x_1396_, 3);
lean_ctor_set(v___x_1396_, 0, v___x_1399_);
v___x_1401_ = v___x_1396_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1398_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = l_Repr_addAppParen(v___x_1402_, v_x_1392_);
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0___boxed(lean_object* v_x_1406_, lean_object* v_x_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(v_x_1406_, v_x_1407_);
lean_dec(v_x_1407_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format(lean_object* v_ctx_1423_, lean_object* v_info_1424_){
_start:
{
lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v_toTermInfo_1432_; lean_object* v_location_x3f_1433_; uint8_t v_explicit_1434_; lean_object* v___y_1436_; 
v_toTermInfo_1432_ = lean_ctor_get(v_info_1424_, 0);
lean_inc_ref(v_toTermInfo_1432_);
v_location_x3f_1433_ = lean_ctor_get(v_info_1424_, 1);
lean_inc(v_location_x3f_1433_);
v_explicit_1434_ = lean_ctor_get_uint8(v_info_1424_, sizeof(void*)*3);
if (lean_obj_tag(v_location_x3f_1433_) == 1)
{
lean_object* v_val_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1518_; 
v_val_1457_ = lean_ctor_get(v_location_x3f_1433_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_location_x3f_1433_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1459_ = v_location_x3f_1433_;
v_isShared_1460_ = v_isSharedCheck_1518_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_val_1457_);
lean_dec(v_location_x3f_1433_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1518_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v_range_1461_; lean_object* v_pos_1462_; lean_object* v_endPos_1463_; lean_object* v_module_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1516_; 
v_range_1461_ = lean_ctor_get(v_val_1457_, 1);
v_pos_1462_ = lean_ctor_get(v_range_1461_, 0);
lean_inc_ref(v_pos_1462_);
v_endPos_1463_ = lean_ctor_get(v_range_1461_, 2);
lean_inc_ref(v_endPos_1463_);
v_module_1464_ = lean_ctor_get(v_val_1457_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_val_1457_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v_val_1457_, 1);
lean_dec(v_unused_1517_);
v___x_1466_ = v_val_1457_;
v_isShared_1467_ = v_isSharedCheck_1516_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_module_1464_);
lean_dec(v_val_1457_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1516_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_line_1468_; lean_object* v_column_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1515_; 
v_line_1468_ = lean_ctor_get(v_pos_1462_, 0);
v_column_1469_ = lean_ctor_get(v_pos_1462_, 1);
v_isSharedCheck_1515_ = !lean_is_exclusive(v_pos_1462_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1471_ = v_pos_1462_;
v_isShared_1472_ = v_isSharedCheck_1515_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_column_1469_);
lean_inc(v_line_1468_);
lean_dec(v_pos_1462_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1515_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_line_1473_; lean_object* v_column_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1514_; 
v_line_1473_ = lean_ctor_get(v_endPos_1463_, 0);
v_column_1474_ = lean_ctor_get(v_endPos_1463_, 1);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_endPos_1463_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1476_ = v_endPos_1463_;
v_isShared_1477_ = v_isSharedCheck_1514_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_column_1474_);
lean_inc(v_line_1473_);
lean_dec(v_endPos_1463_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1514_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
uint8_t v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = 1;
v___x_1479_ = l_Lean_Name_toString(v_module_1464_, v___x_1478_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 3);
lean_ctor_set(v___x_1459_, 0, v___x_1479_);
v___x_1481_ = v___x_1459_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1482_ = ((lean_object*)(l_Lean_Elab_TermInfo_format___lam__0___closed__5));
if (v_isShared_1477_ == 0)
{
lean_ctor_set_tag(v___x_1476_, 5);
lean_ctor_set(v___x_1476_, 1, v___x_1482_);
lean_ctor_set(v___x_1476_, 0, v___x_1481_);
v___x_1484_ = v___x_1476_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v___x_1482_);
v___x_1484_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1489_; 
v___x_1485_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__1));
v___x_1486_ = l_Nat_reprFast(v_line_1468_);
v___x_1487_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set_tag(v___x_1471_, 5);
lean_ctor_set(v___x_1471_, 1, v___x_1487_);
lean_ctor_set(v___x_1471_, 0, v___x_1485_);
v___x_1489_ = v___x_1471_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__3));
if (v_isShared_1467_ == 0)
{
lean_ctor_set_tag(v___x_1466_, 5);
lean_ctor_set(v___x_1466_, 1, v___x_1490_);
lean_ctor_set(v___x_1466_, 0, v___x_1489_);
v___x_1492_ = v___x_1466_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1489_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1493_ = l_Nat_reprFast(v_column_1469_);
v___x_1494_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
v___x_1495_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1492_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__5));
v___x_1497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1495_);
lean_ctor_set(v___x_1497_, 1, v___x_1496_);
v___x_1498_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1484_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange___closed__1));
v___x_1500_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1498_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = l_Nat_reprFast(v_line_1473_);
v___x_1502_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1485_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v___x_1490_);
v___x_1505_ = l_Nat_reprFast(v_column_1474_);
v___x_1506_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
v___x_1507_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1504_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v___x_1496_);
v___x_1509_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1500_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___y_1436_ = v___x_1509_;
goto v___jp_1435_;
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
lean_object* v___x_1519_; 
lean_dec(v_location_x3f_1433_);
v___x_1519_ = ((lean_object*)(l_Option_format___at___00Lean_Elab_CompletionInfo_format_spec__0___closed__1));
v___y_1436_ = v___x_1519_;
goto v___jp_1435_;
}
v___jp_1426_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
lean_inc_ref(v___y_1428_);
v___x_1429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___y_1428_);
v___x_1430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___y_1427_);
lean_ctor_set(v___x_1430_, 1, v___x_1429_);
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
return v___x_1431_;
}
v___jp_1435_:
{
lean_object* v_lctx_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v_a_1440_; lean_object* v___x_1441_; 
v_lctx_1437_ = lean_ctor_get(v_toTermInfo_1432_, 1);
lean_inc_ref(v_lctx_1437_);
v___x_1438_ = l_Lean_Elab_ContextInfo_toPPContext(v_ctx_1423_, v_lctx_1437_);
v___x_1439_ = l_Lean_Elab_DelabTermInfo_docString_x3f(v___x_1438_, v_info_1424_);
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref(v___x_1439_);
v___x_1441_ = l_Lean_Elab_TermInfo_format(v_ctx_1423_, v_toTermInfo_1432_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1441_, 1);
v___x_1443_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__1));
v___x_1444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
lean_ctor_set(v___x_1444_, 1, v_a_1442_);
v___x_1445_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__3));
v___x_1446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
lean_ctor_set(v___x_1447_, 1, v___y_1436_);
v___x_1448_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__5));
v___x_1449_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_unsigned_to_nat(0u);
v___x_1451_ = l_Option_repr___at___00Lean_Elab_DelabTermInfo_format_spec__0(v_a_1440_, v___x_1450_);
v___x_1452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1449_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__7));
v___x_1454_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
if (v_explicit_1434_ == 0)
{
lean_object* v___x_1455_; 
v___x_1455_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__8));
v___y_1427_ = v___x_1454_;
v___y_1428_ = v___x_1455_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_format___closed__9));
v___y_1427_ = v___x_1454_;
v___y_1428_ = v___x_1456_;
goto v___jp_1426_;
}
}
else
{
lean_dec(v_a_1440_);
lean_dec(v___y_1436_);
return v___x_1441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DelabTermInfo_format___boxed(lean_object* v_ctx_1520_, lean_object* v_info_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_DelabTermInfo_format(v_ctx_1520_, v_info_1521_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ChoiceInfo_format(lean_object* v_ctx_1527_, lean_object* v_info_1528_){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = ((lean_object*)(l_Lean_Elab_ChoiceInfo_format___closed__1));
v___x_1530_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1527_, v_info_1528_);
v___x_1531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocInfo_format(lean_object* v_ctx_1535_, lean_object* v_info_1536_){
_start:
{
lean_object* v_stx_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_stx_1537_ = lean_ctor_get(v_info_1536_, 1);
v___x_1538_ = ((lean_object*)(l_Lean_Elab_DocInfo_format___closed__1));
lean_inc(v_stx_1537_);
v___x_1539_ = l_Lean_Syntax_getKind(v_stx_1537_);
v___x_1540_ = 1;
v___x_1541_ = l_Lean_Name_toString(v___x_1539_, v___x_1540_);
v___x_1542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
v___x_1543_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1538_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo___closed__1));
v___x_1545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1535_, v_info_1536_);
v___x_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DocElabInfo_format(lean_object* v_ctx_1557_, lean_object* v_info_1558_){
_start:
{
lean_object* v_toElabInfo_1559_; lean_object* v_name_1560_; uint8_t v_kind_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_toElabInfo_1559_ = lean_ctor_get(v_info_1558_, 0);
lean_inc_ref(v_toElabInfo_1559_);
v_name_1560_ = lean_ctor_get(v_info_1558_, 1);
lean_inc(v_name_1560_);
v_kind_1561_ = lean_ctor_get_uint8(v_info_1558_, sizeof(void*)*2);
lean_dec_ref(v_info_1558_);
v___x_1562_ = ((lean_object*)(l_Lean_Elab_DocElabInfo_format___closed__1));
v___x_1563_ = 1;
v___x_1564_ = l_Lean_Name_toString(v_name_1560_, v___x_1563_);
v___x_1565_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1564_);
v___x_1566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1562_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = ((lean_object*)(l_Lean_Elab_DocElabInfo_format___closed__3));
v___x_1568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = lean_unsigned_to_nat(0u);
v___x_1570_ = l_Lean_Elab_instReprDocElabKind_repr(v_kind_1561_, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1568_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = ((lean_object*)(l_Lean_Elab_DocElabInfo_format___closed__5));
v___x_1573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatElabInfo(v_ctx_1557_, v_toElabInfo_1559_);
v___x_1575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format(lean_object* v_ctx_1576_, lean_object* v_x_1577_){
_start:
{
switch(lean_obj_tag(v_x_1577_))
{
case 0:
{
lean_object* v_i_1579_; lean_object* v___x_1580_; 
v_i_1579_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1579_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1580_ = l_Lean_Elab_TacticInfo_format(v_ctx_1576_, v_i_1579_);
return v___x_1580_;
}
case 1:
{
lean_object* v_i_1581_; lean_object* v___x_1582_; 
v_i_1581_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1581_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1582_ = l_Lean_Elab_TermInfo_format(v_ctx_1576_, v_i_1581_);
return v___x_1582_;
}
case 2:
{
lean_object* v_i_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1591_; 
v_i_1583_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1585_ = v_x_1577_;
v_isShared_1586_ = v_isSharedCheck_1591_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_i_1583_);
lean_dec(v_x_1577_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1591_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1587_; lean_object* v___x_1589_; 
v___x_1587_ = l_Lean_Elab_PartialTermInfo_format(v_ctx_1576_, v_i_1583_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set_tag(v___x_1585_, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1587_);
v___x_1589_ = v___x_1585_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1587_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
case 3:
{
lean_object* v_i_1592_; lean_object* v___x_1593_; 
v_i_1592_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1592_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1593_ = l_Lean_Elab_CommandInfo_format(v_ctx_1576_, v_i_1592_);
return v___x_1593_;
}
case 4:
{
lean_object* v_i_1594_; lean_object* v___x_1595_; 
v_i_1594_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1594_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1595_ = l_Lean_Elab_MacroExpansionInfo_format(v_ctx_1576_, v_i_1594_);
lean_dec_ref(v_ctx_1576_);
return v___x_1595_;
}
case 5:
{
lean_object* v_i_1596_; lean_object* v___x_1597_; 
v_i_1596_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1596_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1597_ = l_Lean_Elab_OptionInfo_format(v_ctx_1576_, v_i_1596_);
return v___x_1597_;
}
case 6:
{
lean_object* v_i_1598_; lean_object* v___x_1599_; 
v_i_1598_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1598_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1599_ = l_Lean_Elab_ErrorNameInfo_format(v_ctx_1576_, v_i_1598_);
return v___x_1599_;
}
case 7:
{
lean_object* v_i_1600_; lean_object* v___x_1601_; 
v_i_1600_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1600_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1601_ = l_Lean_Elab_FieldInfo_format(v_ctx_1576_, v_i_1600_);
return v___x_1601_;
}
case 8:
{
lean_object* v_i_1602_; lean_object* v___x_1603_; 
v_i_1602_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1602_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1603_ = l_Lean_Elab_CompletionInfo_format(v_ctx_1576_, v_i_1602_);
return v___x_1603_;
}
case 9:
{
lean_object* v_i_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1612_; 
lean_dec_ref(v_ctx_1576_);
v_i_1604_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1606_ = v_x_1577_;
v_isShared_1607_ = v_isSharedCheck_1612_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_i_1604_);
lean_dec(v_x_1577_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1612_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1608_ = l_Lean_Elab_UserWidgetInfo_format(v_i_1604_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1608_);
v___x_1610_ = v___x_1606_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
case 10:
{
lean_object* v_i_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1621_; 
lean_dec_ref(v_ctx_1576_);
v_i_1613_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1615_ = v_x_1577_;
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_i_1613_);
lean_dec(v_x_1577_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1617_ = l_Lean_Elab_CustomInfo_format(v_i_1613_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set_tag(v___x_1615_, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1617_);
v___x_1619_ = v___x_1615_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
case 11:
{
lean_object* v_i_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1630_; 
lean_dec_ref(v_ctx_1576_);
v_i_1622_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1624_ = v_x_1577_;
v_isShared_1625_ = v_isSharedCheck_1630_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_i_1622_);
lean_dec(v_x_1577_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1630_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1628_; 
v___x_1626_ = l_Lean_Elab_FVarAliasInfo_format(v_i_1622_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1626_);
v___x_1628_ = v___x_1624_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
case 12:
{
lean_object* v_i_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1639_; 
v_i_1631_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1633_ = v_x_1577_;
v_isShared_1634_ = v_isSharedCheck_1639_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_i_1631_);
lean_dec(v_x_1577_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1639_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
v___x_1635_ = l_Lean_Elab_FieldRedeclInfo_format(v_ctx_1576_, v_i_1631_);
lean_dec(v_i_1631_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set_tag(v___x_1633_, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1635_);
v___x_1637_ = v___x_1633_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
case 13:
{
lean_object* v_i_1640_; lean_object* v___x_1641_; 
v_i_1640_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_i_1640_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1641_ = l_Lean_Elab_DelabTermInfo_format(v_ctx_1576_, v_i_1640_);
return v___x_1641_;
}
case 14:
{
lean_object* v_i_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1650_; 
v_i_1642_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1644_ = v_x_1577_;
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_i_1642_);
lean_dec(v_x_1577_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1648_; 
v___x_1646_ = l_Lean_Elab_ChoiceInfo_format(v_ctx_1576_, v_i_1642_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1646_);
v___x_1648_ = v___x_1644_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
case 15:
{
lean_object* v_i_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1659_; 
v_i_1651_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1653_ = v_x_1577_;
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_i_1651_);
lean_dec(v_x_1577_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; lean_object* v___x_1657_; 
v___x_1655_ = l_Lean_Elab_DocInfo_format(v_ctx_1576_, v_i_1651_);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1655_);
v___x_1657_ = v___x_1653_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
default: 
{
lean_object* v_i_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1668_; 
v_i_1660_ = lean_ctor_get(v_x_1577_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1662_ = v_x_1577_;
v_isShared_1663_ = v_isSharedCheck_1668_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_i_1660_);
lean_dec(v_x_1577_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1668_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1664_ = l_Lean_Elab_DocElabInfo_format(v_ctx_1576_, v_i_1660_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1664_);
v___x_1666_ = v___x_1662_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Info_format___boxed(lean_object* v_ctx_1669_, lean_object* v_x_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Elab_Info_format(v_ctx_1669_, v_x_1670_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(lean_object* v_x_1673_, lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 0)
{
return v_x_1673_;
}
else
{
lean_object* v_head_1675_; lean_object* v_tail_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_head_1675_ = lean_ctor_get(v_x_1674_, 0);
v_tail_1676_ = lean_ctor_get(v_x_1674_, 1);
v___x_1677_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_formatStxRange_fmtPos___closed__2));
v___x_1678_ = lean_string_append(v_x_1673_, v___x_1677_);
v___x_1679_ = lean_expr_dbg_to_string(v_head_1675_);
v___x_1680_ = lean_string_append(v___x_1678_, v___x_1679_);
lean_dec_ref(v___x_1679_);
v_x_1673_ = v___x_1680_;
v_x_1674_ = v_tail_1676_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0___boxed(lean_object* v_x_1682_, lean_object* v_x_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(v_x_1682_, v_x_1683_);
lean_dec(v_x_1683_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(lean_object* v_x_1687_){
_start:
{
if (lean_obj_tag(v_x_1687_) == 0)
{
lean_object* v___x_1688_; 
v___x_1688_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__0));
return v___x_1688_;
}
else
{
lean_object* v_tail_1689_; 
v_tail_1689_ = lean_ctor_get(v_x_1687_, 1);
if (lean_obj_tag(v_tail_1689_) == 0)
{
lean_object* v_head_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_head_1690_ = lean_ctor_get(v_x_1687_, 0);
v___x_1691_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1));
v___x_1692_ = lean_expr_dbg_to_string(v_head_1690_);
v___x_1693_ = lean_string_append(v___x_1691_, v___x_1692_);
lean_dec_ref(v___x_1692_);
v___x_1694_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1695_ = lean_string_append(v___x_1693_, v___x_1694_);
return v___x_1695_;
}
else
{
lean_object* v_head_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; uint32_t v___x_1701_; lean_object* v___x_1702_; 
v_head_1696_ = lean_ctor_get(v_x_1687_, 0);
v___x_1697_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___closed__1));
v___x_1698_ = lean_expr_dbg_to_string(v_head_1696_);
v___x_1699_ = lean_string_append(v___x_1697_, v___x_1698_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0_spec__0(v___x_1699_, v_tail_1689_);
v___x_1701_ = 93;
v___x_1702_ = lean_string_push(v___x_1700_, v___x_1701_);
return v___x_1702_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0___boxed(lean_object* v_x_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(v_x_1703_);
lean_dec(v_x_1703_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialContextInfo_format(lean_object* v_ctx_1711_){
_start:
{
switch(lean_obj_tag(v_ctx_1711_))
{
case 0:
{
lean_object* v___x_1712_; 
lean_dec_ref_known(v_ctx_1711_, 1);
v___x_1712_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__1));
return v___x_1712_;
}
case 1:
{
lean_object* v_parentDecl_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1726_; 
v_parentDecl_1713_ = lean_ctor_get(v_ctx_1711_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_ctx_1711_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1715_ = v_ctx_1711_;
v_isShared_1716_ = v_isSharedCheck_1726_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_parentDecl_1713_);
lean_dec(v_ctx_1711_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1726_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; uint8_t v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1724_; 
v___x_1717_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__2));
v___x_1718_ = 1;
v___x_1719_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_parentDecl_1713_, v___x_1718_);
v___x_1720_ = lean_string_append(v___x_1717_, v___x_1719_);
lean_dec_ref(v___x_1719_);
v___x_1721_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1722_ = lean_string_append(v___x_1720_, v___x_1721_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set_tag(v___x_1715_, 3);
lean_ctor_set(v___x_1715_, 0, v___x_1722_);
v___x_1724_ = v___x_1715_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
default: 
{
lean_object* v_autoImplicits_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1742_; 
v_autoImplicits_1727_ = lean_ctor_get(v_ctx_1711_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v_ctx_1711_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1729_ = v_ctx_1711_;
v_isShared_1730_ = v_isSharedCheck_1742_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_autoImplicits_1727_);
lean_dec(v_ctx_1711_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1742_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1731_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__3));
v___x_1732_ = ((lean_object*)(l_Lean_Elab_PartialContextInfo_format___closed__4));
v___x_1733_ = lean_array_to_list(v_autoImplicits_1727_);
v___x_1734_ = l_List_toString___at___00Lean_Elab_PartialContextInfo_format_spec__0(v___x_1733_);
lean_dec(v___x_1733_);
v___x_1735_ = lean_string_append(v___x_1732_, v___x_1734_);
lean_dec_ref(v___x_1734_);
v___x_1736_ = lean_string_append(v___x_1731_, v___x_1735_);
lean_dec_ref(v___x_1735_);
v___x_1737_ = ((lean_object*)(l_Lean_Elab_DelabTermInfo_docString_x3f___closed__1));
v___x_1738_ = lean_string_append(v___x_1736_, v___x_1737_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 3);
lean_ctor_set(v___x_1729_, 0, v___x_1738_);
v___x_1740_ = v___x_1729_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1738_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format(lean_object* v_tree_1752_, lean_object* v_ctx_x3f_1753_){
_start:
{
switch(lean_obj_tag(v_tree_1752_))
{
case 0:
{
lean_object* v_i_1755_; lean_object* v_t_1756_; lean_object* v___x_1757_; 
v_i_1755_ = lean_ctor_get(v_tree_1752_, 0);
lean_inc_ref(v_i_1755_);
v_t_1756_ = lean_ctor_get(v_tree_1752_, 1);
lean_inc_ref(v_t_1756_);
lean_dec_ref_known(v_tree_1752_, 2);
v___x_1757_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_1755_, v_ctx_x3f_1753_);
v_tree_1752_ = v_t_1756_;
v_ctx_x3f_1753_ = v___x_1757_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_ctx_x3f_1753_) == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
lean_dec_ref_known(v_tree_1752_, 2);
v___x_1759_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__1));
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
return v___x_1760_;
}
else
{
lean_object* v_i_1761_; lean_object* v_children_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1812_; 
v_i_1761_ = lean_ctor_get(v_tree_1752_, 0);
v_children_1762_ = lean_ctor_get(v_tree_1752_, 1);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_tree_1752_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1764_ = v_tree_1752_;
v_isShared_1765_ = v_isSharedCheck_1812_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_children_1762_);
lean_inc(v_i_1761_);
lean_dec(v_tree_1752_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1812_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v_val_1766_; lean_object* v___x_1767_; 
v_val_1766_ = lean_ctor_get(v_ctx_x3f_1753_, 0);
lean_inc_ref(v_i_1761_);
lean_inc(v_val_1766_);
v___x_1767_ = l_Lean_Elab_Info_format(v_val_1766_, v_i_1761_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1811_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1770_ = v___x_1767_;
v_isShared_1771_ = v_isSharedCheck_1811_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1767_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1811_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v_size_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; 
v_size_1772_ = lean_ctor_get(v_children_1762_, 2);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_nat_dec_eq(v_size_1772_, v___x_1773_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_del_object(v___x_1770_);
v___x_1775_ = l_Lean_Elab_Info_updateContext_x3f(v_ctx_x3f_1753_, v_i_1761_);
lean_dec_ref(v_i_1761_);
v___x_1776_ = l_Lean_PersistentArray_toList___redArg(v_children_1762_);
lean_dec_ref(v_children_1762_);
v___x_1777_ = lean_box(0);
v___x_1778_ = l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(v___x_1775_, v___x_1776_, v___x_1777_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1794_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1781_ = v___x_1778_;
v_isShared_1782_ = v_isSharedCheck_1794_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1778_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1794_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1783_; lean_object* v___x_1785_; 
v___x_1783_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__3));
if (v_isShared_1765_ == 0)
{
lean_ctor_set_tag(v___x_1764_, 5);
lean_ctor_set(v___x_1764_, 1, v_a_1768_);
lean_ctor_set(v___x_1764_, 0, v___x_1783_);
v___x_1785_ = v___x_1764_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1783_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_a_1768_);
v___x_1785_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1786_ = lean_box(1);
v___x_1787_ = l_Std_Format_prefixJoin___at___00Lean_Elab_ContextInfo_ppGoals_spec__1(v___x_1786_, v_a_1779_);
v___x_1788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1785_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = l_Std_Format_nestD(v___x_1788_);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 0, v___x_1789_);
v___x_1791_ = v___x_1781_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec(v_a_1768_);
lean_del_object(v___x_1764_);
v_a_1795_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1778_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1778_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
lean_dec_ref(v_children_1762_);
lean_dec_ref_known(v_ctx_x3f_1753_, 1);
lean_dec_ref(v_i_1761_);
v___x_1803_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__3));
if (v_isShared_1765_ == 0)
{
lean_ctor_set_tag(v___x_1764_, 5);
lean_ctor_set(v___x_1764_, 1, v_a_1768_);
lean_ctor_set(v___x_1764_, 0, v___x_1803_);
v___x_1805_ = v___x_1764_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_a_1768_);
v___x_1805_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1806_ = l_Std_Format_nestD(v___x_1805_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1806_);
v___x_1808_ = v___x_1770_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
else
{
lean_del_object(v___x_1764_);
lean_dec_ref(v_children_1762_);
lean_dec_ref_known(v_ctx_x3f_1753_, 1);
lean_dec_ref(v_i_1761_);
return v___x_1767_;
}
}
}
}
default: 
{
lean_object* v_mvarId_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1826_; 
lean_dec(v_ctx_x3f_1753_);
v_mvarId_1813_ = lean_ctor_get(v_tree_1752_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_tree_1752_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1815_ = v_tree_1752_;
v_isShared_1816_ = v_isSharedCheck_1826_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_mvarId_1813_);
lean_dec(v_tree_1752_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1826_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1817_ = ((lean_object*)(l_Lean_Elab_InfoTree_format___closed__5));
v___x_1818_ = 1;
v___x_1819_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mvarId_1813_, v___x_1818_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 3);
lean_ctor_set(v___x_1815_, 0, v___x_1819_);
v___x_1821_ = v___x_1815_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1817_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = l_Std_Format_nestD(v___x_1822_);
v___x_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1823_);
return v___x_1824_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(lean_object* v___x_1827_, lean_object* v_x_1828_, lean_object* v_x_1829_){
_start:
{
if (lean_obj_tag(v_x_1828_) == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_dec(v___x_1827_);
v___x_1831_ = l_List_reverse___redArg(v_x_1829_);
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
return v___x_1832_;
}
else
{
lean_object* v_head_1833_; lean_object* v_tail_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1852_; 
v_head_1833_ = lean_ctor_get(v_x_1828_, 0);
v_tail_1834_ = lean_ctor_get(v_x_1828_, 1);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_x_1828_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1836_ = v_x_1828_;
v_isShared_1837_ = v_isSharedCheck_1852_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_tail_1834_);
lean_inc(v_head_1833_);
lean_dec(v_x_1828_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1852_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; 
lean_inc(v___x_1827_);
v___x_1838_ = l_Lean_Elab_InfoTree_format(v_head_1833_, v___x_1827_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1838_, 1);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_x_1829_);
lean_ctor_set(v___x_1836_, 0, v_a_1839_);
v___x_1841_ = v___x_1836_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1839_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_x_1829_);
v___x_1841_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v_x_1828_ = v_tail_1834_;
v_x_1829_ = v___x_1841_;
goto _start;
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_del_object(v___x_1836_);
lean_dec(v_tail_1834_);
lean_dec(v_x_1829_);
lean_dec(v___x_1827_);
v_a_1844_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1838_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1838_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0___boxed(lean_object* v___x_1853_, lean_object* v_x_1854_, lean_object* v_x_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_List_mapM_loop___at___00Lean_Elab_InfoTree_format_spec__0(v___x_1853_, v_x_1854_, v_x_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_format___boxed(lean_object* v_tree_1858_, lean_object* v_ctx_x3f_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lean_Elab_InfoTree_format(v_tree_1858_, v_ctx_x3f_1859_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0(lean_object* v_f_1862_, lean_object* v_s_1863_){
_start:
{
uint8_t v_enabled_1864_; lean_object* v_assignment_1865_; lean_object* v_lazyAssignment_1866_; lean_object* v_trees_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1875_; 
v_enabled_1864_ = lean_ctor_get_uint8(v_s_1863_, sizeof(void*)*3);
v_assignment_1865_ = lean_ctor_get(v_s_1863_, 0);
v_lazyAssignment_1866_ = lean_ctor_get(v_s_1863_, 1);
v_trees_1867_ = lean_ctor_get(v_s_1863_, 2);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_s_1863_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1869_ = v_s_1863_;
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_trees_1867_);
lean_inc(v_lazyAssignment_1866_);
lean_inc(v_assignment_1865_);
lean_dec(v_s_1863_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1871_ = lean_apply_1(v_f_1862_, v_trees_1867_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 2, v___x_1871_);
v___x_1873_ = v___x_1869_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_assignment_1865_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_lazyAssignment_1866_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v___x_1871_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*3, v_enabled_1864_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg(lean_object* v_inst_1876_, lean_object* v_f_1877_){
_start:
{
lean_object* v_modifyInfoState_1878_; lean_object* v___f_1879_; lean_object* v___x_1880_; 
v_modifyInfoState_1878_ = lean_ctor_get(v_inst_1876_, 1);
lean_inc(v_modifyInfoState_1878_);
lean_dec_ref(v_inst_1876_);
v___f_1879_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1879_, 0, v_f_1877_);
v___x_1880_ = lean_apply_1(v_modifyInfoState_1878_, v___f_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees(lean_object* v_m_1881_, lean_object* v_inst_1882_, lean_object* v_f_1883_){
_start:
{
lean_object* v_modifyInfoState_1884_; lean_object* v___f_1885_; lean_object* v___x_1886_; 
v_modifyInfoState_1884_ = lean_ctor_get(v_inst_1882_, 1);
lean_inc(v_modifyInfoState_1884_);
lean_dec_ref(v_inst_1882_);
v___f_1885_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_modifyInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1885_, 0, v_f_1883_);
v___x_1886_ = lean_apply_1(v_modifyInfoState_1884_, v___f_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1887_ = lean_unsigned_to_nat(32u);
v___x_1888_ = lean_mk_empty_array_with_capacity(v___x_1887_);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1(void){
_start:
{
size_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1890_ = ((size_t)5ULL);
v___x_1891_ = lean_unsigned_to_nat(0u);
v___x_1892_ = lean_unsigned_to_nat(32u);
v___x_1893_ = lean_mk_empty_array_with_capacity(v___x_1892_);
v___x_1894_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__0);
v___x_1895_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
lean_ctor_set(v___x_1895_, 1, v___x_1893_);
lean_ctor_set(v___x_1895_, 2, v___x_1891_);
lean_ctor_set(v___x_1895_, 3, v___x_1891_);
lean_ctor_set_usize(v___x_1895_, 4, v___x_1890_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__0(lean_object* v_s_1896_){
_start:
{
uint8_t v_enabled_1897_; lean_object* v_assignment_1898_; lean_object* v_lazyAssignment_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1907_; 
v_enabled_1897_ = lean_ctor_get_uint8(v_s_1896_, sizeof(void*)*3);
v_assignment_1898_ = lean_ctor_get(v_s_1896_, 0);
v_lazyAssignment_1899_ = lean_ctor_get(v_s_1896_, 1);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_s_1896_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; 
v_unused_1908_ = lean_ctor_get(v_s_1896_, 2);
lean_dec(v_unused_1908_);
v___x_1901_ = v_s_1896_;
v_isShared_1902_ = v_isSharedCheck_1907_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_lazyAssignment_1899_);
lean_inc(v_assignment_1898_);
lean_dec(v_s_1896_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1907_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___x_1905_; 
v___x_1903_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 2, v___x_1903_);
v___x_1905_ = v___x_1901_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_assignment_1898_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_lazyAssignment_1899_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v___x_1903_);
lean_ctor_set_uint8(v_reuseFailAlloc_1906_, sizeof(void*)*3, v_enabled_1897_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__1(lean_object* v_toPure_1909_, lean_object* v_trees_1910_, lean_object* v_____r_1911_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = lean_apply_2(v_toPure_1909_, lean_box(0), v_trees_1910_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg___lam__2(lean_object* v_toPure_1913_, lean_object* v_modifyInfoState_1914_, lean_object* v___f_1915_, lean_object* v_toBind_1916_, lean_object* v_____do__lift_1917_){
_start:
{
lean_object* v_trees_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v_trees_1918_ = lean_ctor_get(v_____do__lift_1917_, 2);
lean_inc_ref(v_trees_1918_);
lean_dec_ref(v_____do__lift_1917_);
v___f_1919_ = lean_alloc_closure((void*)(l_Lean_Elab_getResetInfoTrees___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1919_, 0, v_toPure_1913_);
lean_closure_set(v___f_1919_, 1, v_trees_1918_);
v___x_1920_ = lean_apply_1(v_modifyInfoState_1914_, v___f_1915_);
v___x_1921_ = lean_apply_4(v_toBind_1916_, lean_box(0), lean_box(0), v___x_1920_, v___f_1919_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___redArg(lean_object* v_inst_1923_, lean_object* v_inst_1924_){
_start:
{
lean_object* v_toApplicative_1925_; lean_object* v_toBind_1926_; lean_object* v_getInfoState_1927_; lean_object* v_modifyInfoState_1928_; lean_object* v_toPure_1929_; lean_object* v___f_1930_; lean_object* v___f_1931_; lean_object* v___x_1932_; 
v_toApplicative_1925_ = lean_ctor_get(v_inst_1923_, 0);
lean_inc_ref(v_toApplicative_1925_);
v_toBind_1926_ = lean_ctor_get(v_inst_1923_, 1);
lean_inc_n(v_toBind_1926_, 2);
lean_dec_ref(v_inst_1923_);
v_getInfoState_1927_ = lean_ctor_get(v_inst_1924_, 0);
lean_inc(v_getInfoState_1927_);
v_modifyInfoState_1928_ = lean_ctor_get(v_inst_1924_, 1);
lean_inc(v_modifyInfoState_1928_);
lean_dec_ref(v_inst_1924_);
v_toPure_1929_ = lean_ctor_get(v_toApplicative_1925_, 1);
lean_inc(v_toPure_1929_);
lean_dec_ref(v_toApplicative_1925_);
v___f_1930_ = ((lean_object*)(l_Lean_Elab_getResetInfoTrees___redArg___closed__0));
v___f_1931_ = lean_alloc_closure((void*)(l_Lean_Elab_getResetInfoTrees___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1931_, 0, v_toPure_1929_);
lean_closure_set(v___f_1931_, 1, v_modifyInfoState_1928_);
lean_closure_set(v___f_1931_, 2, v___f_1930_);
lean_closure_set(v___f_1931_, 3, v_toBind_1926_);
v___x_1932_ = lean_apply_4(v_toBind_1926_, lean_box(0), lean_box(0), v_getInfoState_1927_, v___f_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees(lean_object* v_m_1933_, lean_object* v_inst_1934_, lean_object* v_inst_1935_){
_start:
{
lean_object* v___x_1936_; 
v___x_1936_ = l_Lean_Elab_getResetInfoTrees___redArg(v_inst_1934_, v_inst_1935_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__0(lean_object* v_t_1937_, lean_object* v_s_1938_){
_start:
{
uint8_t v_enabled_1939_; lean_object* v_assignment_1940_; lean_object* v_lazyAssignment_1941_; lean_object* v_trees_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1950_; 
v_enabled_1939_ = lean_ctor_get_uint8(v_s_1938_, sizeof(void*)*3);
v_assignment_1940_ = lean_ctor_get(v_s_1938_, 0);
v_lazyAssignment_1941_ = lean_ctor_get(v_s_1938_, 1);
v_trees_1942_ = lean_ctor_get(v_s_1938_, 2);
v_isSharedCheck_1950_ = !lean_is_exclusive(v_s_1938_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1944_ = v_s_1938_;
v_isShared_1945_ = v_isSharedCheck_1950_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_trees_1942_);
lean_inc(v_lazyAssignment_1941_);
lean_inc(v_assignment_1940_);
lean_dec(v_s_1938_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1950_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v___x_1948_; 
v___x_1946_ = l_Lean_PersistentArray_push___redArg(v_trees_1942_, v_t_1937_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 2, v___x_1946_);
v___x_1948_ = v___x_1944_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_assignment_1940_);
lean_ctor_set(v_reuseFailAlloc_1949_, 1, v_lazyAssignment_1941_);
lean_ctor_set(v_reuseFailAlloc_1949_, 2, v___x_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_1949_, sizeof(void*)*3, v_enabled_1939_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1(lean_object* v_toPure_1951_, lean_object* v_modifyInfoState_1952_, lean_object* v___f_1953_, lean_object* v_____do__lift_1954_){
_start:
{
uint8_t v_enabled_1955_; 
v_enabled_1955_ = lean_ctor_get_uint8(v_____do__lift_1954_, sizeof(void*)*3);
if (v_enabled_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v___f_1953_);
lean_dec(v_modifyInfoState_1952_);
v___x_1956_ = lean_box(0);
v___x_1957_ = lean_apply_2(v_toPure_1951_, lean_box(0), v___x_1956_);
return v___x_1957_;
}
else
{
lean_object* v___x_1958_; 
lean_dec(v_toPure_1951_);
v___x_1958_ = lean_apply_1(v_modifyInfoState_1952_, v___f_1953_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed(lean_object* v_toPure_1959_, lean_object* v_modifyInfoState_1960_, lean_object* v___f_1961_, lean_object* v_____do__lift_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lean_Elab_pushInfoTree___redArg___lam__1(v_toPure_1959_, v_modifyInfoState_1960_, v___f_1961_, v_____do__lift_1962_);
lean_dec_ref(v_____do__lift_1962_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___redArg(lean_object* v_inst_1964_, lean_object* v_inst_1965_, lean_object* v_t_1966_){
_start:
{
lean_object* v_toApplicative_1967_; lean_object* v_toBind_1968_; lean_object* v_getInfoState_1969_; lean_object* v_modifyInfoState_1970_; lean_object* v_toPure_1971_; lean_object* v___f_1972_; lean_object* v___f_1973_; lean_object* v___x_1974_; 
v_toApplicative_1967_ = lean_ctor_get(v_inst_1964_, 0);
lean_inc_ref(v_toApplicative_1967_);
v_toBind_1968_ = lean_ctor_get(v_inst_1964_, 1);
lean_inc(v_toBind_1968_);
lean_dec_ref(v_inst_1964_);
v_getInfoState_1969_ = lean_ctor_get(v_inst_1965_, 0);
lean_inc(v_getInfoState_1969_);
v_modifyInfoState_1970_ = lean_ctor_get(v_inst_1965_, 1);
lean_inc(v_modifyInfoState_1970_);
lean_dec_ref(v_inst_1965_);
v_toPure_1971_ = lean_ctor_get(v_toApplicative_1967_, 1);
lean_inc(v_toPure_1971_);
lean_dec_ref(v_toApplicative_1967_);
v___f_1972_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoTree___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1972_, 0, v_t_1966_);
v___f_1973_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoTree___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1973_, 0, v_toPure_1971_);
lean_closure_set(v___f_1973_, 1, v_modifyInfoState_1970_);
lean_closure_set(v___f_1973_, 2, v___f_1972_);
v___x_1974_ = lean_apply_4(v_toBind_1968_, lean_box(0), lean_box(0), v_getInfoState_1969_, v___f_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree(lean_object* v_m_1975_, lean_object* v_inst_1976_, lean_object* v_inst_1977_, lean_object* v_t_1978_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l_Lean_Elab_pushInfoTree___redArg(v_inst_1976_, v_inst_1977_, v_t_1978_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0(lean_object* v_toPure_1980_, lean_object* v_t_1981_, lean_object* v_inst_1982_, lean_object* v_inst_1983_, lean_object* v_____do__lift_1984_){
_start:
{
uint8_t v_enabled_1985_; 
v_enabled_1985_ = lean_ctor_get_uint8(v_____do__lift_1984_, sizeof(void*)*3);
if (v_enabled_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec_ref(v_inst_1983_);
lean_dec_ref(v_inst_1982_);
lean_dec_ref(v_t_1981_);
v___x_1986_ = lean_box(0);
v___x_1987_ = lean_apply_2(v_toPure_1980_, lean_box(0), v___x_1986_);
return v___x_1987_;
}
else
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
lean_dec(v_toPure_1980_);
v___x_1988_ = lean_unsigned_to_nat(32u);
v___x_1989_ = lean_mk_empty_array_with_capacity(v___x_1988_);
lean_dec_ref(v___x_1989_);
v___x_1990_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
v___x_1991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1991_, 0, v_t_1981_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = l_Lean_Elab_pushInfoTree___redArg(v_inst_1982_, v_inst_1983_, v___x_1991_);
return v___x_1992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed(lean_object* v_toPure_1993_, lean_object* v_t_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_____do__lift_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lean_Elab_pushInfoLeaf___redArg___lam__0(v_toPure_1993_, v_t_1994_, v_inst_1995_, v_inst_1996_, v_____do__lift_1997_);
lean_dec_ref(v_____do__lift_1997_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object* v_inst_1999_, lean_object* v_inst_2000_, lean_object* v_t_2001_){
_start:
{
lean_object* v_toApplicative_2002_; lean_object* v_toBind_2003_; lean_object* v_getInfoState_2004_; lean_object* v_toPure_2005_; lean_object* v___f_2006_; lean_object* v___x_2007_; 
v_toApplicative_2002_ = lean_ctor_get(v_inst_1999_, 0);
v_toBind_2003_ = lean_ctor_get(v_inst_1999_, 1);
lean_inc(v_toBind_2003_);
v_getInfoState_2004_ = lean_ctor_get(v_inst_2000_, 0);
lean_inc(v_getInfoState_2004_);
v_toPure_2005_ = lean_ctor_get(v_toApplicative_2002_, 1);
lean_inc(v_toPure_2005_);
v___f_2006_ = lean_alloc_closure((void*)(l_Lean_Elab_pushInfoLeaf___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2006_, 0, v_toPure_2005_);
lean_closure_set(v___f_2006_, 1, v_t_2001_);
lean_closure_set(v___f_2006_, 2, v_inst_1999_);
lean_closure_set(v___f_2006_, 3, v_inst_2000_);
v___x_2007_ = lean_apply_4(v_toBind_2003_, lean_box(0), lean_box(0), v_getInfoState_2004_, v___f_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf(lean_object* v_m_2008_, lean_object* v_inst_2009_, lean_object* v_inst_2010_, lean_object* v_t_2011_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2009_, v_inst_2010_, v_t_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___redArg(lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_info_2015_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_info_2015_);
v___x_2017_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2013_, v_inst_2014_, v___x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo(lean_object* v_m_2018_, lean_object* v_inst_2019_, lean_object* v_inst_2020_, lean_object* v_info_2021_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_Elab_addCompletionInfo___redArg(v_inst_2019_, v_inst_2020_, v_info_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg___lam__0(lean_object* v_stx_2023_, lean_object* v_expectedType_x3f_2024_, lean_object* v_inst_2025_, lean_object* v_inst_2026_, lean_object* v_____do__lift_2027_){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; uint8_t v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2028_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_2029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
lean_ctor_set(v___x_2029_, 1, v_stx_2023_);
v___x_2030_ = l_Lean_LocalContext_empty;
v___x_2031_ = 0;
v___x_2032_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2032_, 0, v___x_2029_);
lean_ctor_set(v___x_2032_, 1, v___x_2030_);
lean_ctor_set(v___x_2032_, 2, v_expectedType_x3f_2024_);
lean_ctor_set(v___x_2032_, 3, v_____do__lift_2027_);
lean_ctor_set_uint8(v___x_2032_, sizeof(void*)*4, v___x_2031_);
lean_ctor_set_uint8(v___x_2032_, sizeof(void*)*4 + 1, v___x_2031_);
v___x_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
v___x_2034_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_2025_, v_inst_2026_, v___x_2033_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___redArg(lean_object* v_inst_2035_, lean_object* v_inst_2036_, lean_object* v_inst_2037_, lean_object* v_inst_2038_, lean_object* v_stx_2039_, lean_object* v_n_2040_, lean_object* v_expectedType_x3f_2041_){
_start:
{
lean_object* v_toBind_2042_; lean_object* v___f_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v_toBind_2042_ = lean_ctor_get(v_inst_2035_, 1);
lean_inc(v_toBind_2042_);
lean_inc_ref(v_inst_2035_);
v___f_2043_ = lean_alloc_closure((void*)(l_Lean_Elab_addConstInfo___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2043_, 0, v_stx_2039_);
lean_closure_set(v___f_2043_, 1, v_expectedType_x3f_2041_);
lean_closure_set(v___f_2043_, 2, v_inst_2035_);
lean_closure_set(v___f_2043_, 3, v_inst_2036_);
v___x_2044_ = l_Lean_mkConstWithLevelParams___redArg(v_inst_2035_, v_inst_2037_, v_inst_2038_, v_n_2040_);
v___x_2045_ = lean_apply_4(v_toBind_2042_, lean_box(0), lean_box(0), v___x_2044_, v___f_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo(lean_object* v_m_2046_, lean_object* v_inst_2047_, lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_inst_2050_, lean_object* v_stx_2051_, lean_object* v_n_2052_, lean_object* v_expectedType_x3f_2053_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_Elab_addConstInfo___redArg(v_inst_2047_, v_inst_2048_, v_inst_2049_, v_inst_2050_, v_stx_2051_, v_n_2052_, v_expectedType_x3f_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(lean_object* v_t_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; lean_object* v_infoState_2059_; uint8_t v_enabled_2060_; 
v___x_2058_ = lean_st_ref_get(v___y_2056_);
v_infoState_2059_ = lean_ctor_get(v___x_2058_, 7);
lean_inc_ref(v_infoState_2059_);
lean_dec(v___x_2058_);
v_enabled_2060_ = lean_ctor_get_uint8(v_infoState_2059_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2059_);
if (v_enabled_2060_ == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec_ref(v_t_2055_);
v___x_2061_ = lean_box(0);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
else
{
lean_object* v___x_2063_; lean_object* v_infoState_2064_; lean_object* v_env_2065_; lean_object* v_nextMacroScope_2066_; lean_object* v_ngen_2067_; lean_object* v_auxDeclNGen_2068_; lean_object* v_traceState_2069_; lean_object* v_cache_2070_; lean_object* v_messages_2071_; lean_object* v_snapshotTasks_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2094_; 
v___x_2063_ = lean_st_ref_take(v___y_2056_);
v_infoState_2064_ = lean_ctor_get(v___x_2063_, 7);
v_env_2065_ = lean_ctor_get(v___x_2063_, 0);
v_nextMacroScope_2066_ = lean_ctor_get(v___x_2063_, 1);
v_ngen_2067_ = lean_ctor_get(v___x_2063_, 2);
v_auxDeclNGen_2068_ = lean_ctor_get(v___x_2063_, 3);
v_traceState_2069_ = lean_ctor_get(v___x_2063_, 4);
v_cache_2070_ = lean_ctor_get(v___x_2063_, 5);
v_messages_2071_ = lean_ctor_get(v___x_2063_, 6);
v_snapshotTasks_2072_ = lean_ctor_get(v___x_2063_, 8);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2074_ = v___x_2063_;
v_isShared_2075_ = v_isSharedCheck_2094_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_snapshotTasks_2072_);
lean_inc(v_infoState_2064_);
lean_inc(v_messages_2071_);
lean_inc(v_cache_2070_);
lean_inc(v_traceState_2069_);
lean_inc(v_auxDeclNGen_2068_);
lean_inc(v_ngen_2067_);
lean_inc(v_nextMacroScope_2066_);
lean_inc(v_env_2065_);
lean_dec(v___x_2063_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2094_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
uint8_t v_enabled_2076_; lean_object* v_assignment_2077_; lean_object* v_lazyAssignment_2078_; lean_object* v_trees_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2093_; 
v_enabled_2076_ = lean_ctor_get_uint8(v_infoState_2064_, sizeof(void*)*3);
v_assignment_2077_ = lean_ctor_get(v_infoState_2064_, 0);
v_lazyAssignment_2078_ = lean_ctor_get(v_infoState_2064_, 1);
v_trees_2079_ = lean_ctor_get(v_infoState_2064_, 2);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_infoState_2064_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2081_ = v_infoState_2064_;
v_isShared_2082_ = v_isSharedCheck_2093_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_trees_2079_);
lean_inc(v_lazyAssignment_2078_);
lean_inc(v_assignment_2077_);
lean_dec(v_infoState_2064_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2093_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2086_; 
v___x_2083_ = lean_box(0);
v___x_2084_ = l_Lean_PersistentArray_push___redArg(v_trees_2079_, v_t_2055_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 2, v___x_2084_);
v___x_2086_ = v___x_2081_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_assignment_2077_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_lazyAssignment_2078_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v___x_2084_);
lean_ctor_set_uint8(v_reuseFailAlloc_2092_, sizeof(void*)*3, v_enabled_2076_);
v___x_2086_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
lean_object* v___x_2088_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 7, v___x_2086_);
v___x_2088_ = v___x_2074_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_env_2065_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_nextMacroScope_2066_);
lean_ctor_set(v_reuseFailAlloc_2091_, 2, v_ngen_2067_);
lean_ctor_set(v_reuseFailAlloc_2091_, 3, v_auxDeclNGen_2068_);
lean_ctor_set(v_reuseFailAlloc_2091_, 4, v_traceState_2069_);
lean_ctor_set(v_reuseFailAlloc_2091_, 5, v_cache_2070_);
lean_ctor_set(v_reuseFailAlloc_2091_, 6, v_messages_2071_);
lean_ctor_set(v_reuseFailAlloc_2091_, 7, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2091_, 8, v_snapshotTasks_2072_);
v___x_2088_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = lean_st_ref_put(v___y_2056_, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2083_);
return v___x_2090_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_t_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v_t_2095_, v___y_2096_);
lean_dec(v___y_2096_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(lean_object* v_t_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v_infoState_2104_; uint8_t v_enabled_2105_; 
v___x_2103_ = lean_st_ref_get(v___y_2101_);
v_infoState_2104_ = lean_ctor_get(v___x_2103_, 7);
lean_inc_ref(v_infoState_2104_);
lean_dec(v___x_2103_);
v_enabled_2105_ = lean_ctor_get_uint8(v_infoState_2104_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2104_);
if (v_enabled_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
lean_dec_ref(v_t_2099_);
v___x_2106_ = lean_box(0);
v___x_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
return v___x_2107_;
}
else
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2108_ = lean_unsigned_to_nat(32u);
v___x_2109_ = lean_mk_empty_array_with_capacity(v___x_2108_);
lean_dec_ref(v___x_2109_);
v___x_2110_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1, &l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___redArg___lam__0___closed__1);
v___x_2111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_t_2099_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v___x_2111_, v___y_2101_);
return v___x_2112_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1___boxed(lean_object* v_t_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(v_t_2113_, v___y_2114_, v___y_2115_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
return v_res_2117_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__8);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2120_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
lean_ctor_set(v___x_2122_, 2, v___x_2121_);
lean_ctor_set(v___x_2122_, 3, v___x_2121_);
lean_ctor_set(v___x_2122_, 4, v___x_2120_);
lean_ctor_set(v___x_2122_, 5, v___x_2120_);
lean_ctor_set(v___x_2122_, 6, v___x_2120_);
lean_ctor_set(v___x_2122_, 7, v___x_2120_);
lean_ctor_set(v___x_2122_, 8, v___x_2120_);
lean_ctor_set(v___x_2122_, 9, v___x_2120_);
lean_ctor_set(v___x_2122_, 10, v___x_2120_);
return v___x_2122_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2123_ = lean_box(1);
v___x_2124_ = lean_obj_once(&l_Lean_Elab_ContextInfo_ppGoals___closed__2, &l_Lean_Elab_ContextInfo_ppGoals___closed__2_once, _init_l_Lean_Elab_ContextInfo_ppGoals___closed__2);
v___x_2125_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_2126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
lean_ctor_set(v___x_2126_, 1, v___x_2124_);
lean_ctor_set(v___x_2126_, 2, v___x_2123_);
return v___x_2126_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__3));
v___x_2129_ = l_Lean_stringToMessageData(v___x_2128_);
return v___x_2129_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__5));
v___x_2132_ = l_Lean_stringToMessageData(v___x_2131_);
return v___x_2132_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__7));
v___x_2135_ = l_Lean_stringToMessageData(v___x_2134_);
return v___x_2135_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10(void){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__9));
v___x_2138_ = l_Lean_stringToMessageData(v___x_2137_);
return v___x_2138_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12(void){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__11));
v___x_2141_ = l_Lean_stringToMessageData(v___x_2140_);
return v___x_2141_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14(void){
_start:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__13));
v___x_2144_ = l_Lean_stringToMessageData(v___x_2143_);
return v___x_2144_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16(void){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__15));
v___x_2147_ = l_Lean_stringToMessageData(v___x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_2148_, lean_object* v_declHint_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v_env_2154_; uint8_t v___x_2155_; 
v___x_2152_ = l_Lean_instInhabitedName;
v___x_2153_ = lean_st_ref_get(v___y_2150_);
v_env_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc_ref(v_env_2154_);
lean_dec(v___x_2153_);
v___x_2155_ = l_Lean_Name_isAnonymous(v_declHint_2149_);
if (v___x_2155_ == 0)
{
uint8_t v_isExporting_2156_; 
v_isExporting_2156_ = lean_ctor_get_uint8(v_env_2154_, sizeof(void*)*8);
if (v_isExporting_2156_ == 0)
{
lean_object* v___x_2157_; 
lean_dec_ref(v_env_2154_);
lean_dec(v_declHint_2149_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_msg_2148_);
return v___x_2157_;
}
else
{
lean_object* v___x_2158_; uint8_t v___x_2159_; 
lean_inc_ref(v_env_2154_);
v___x_2158_ = l_Lean_Environment_setExporting(v_env_2154_, v___x_2155_);
lean_inc(v_declHint_2149_);
lean_inc_ref(v___x_2158_);
v___x_2159_ = l_Lean_Environment_contains(v___x_2158_, v_declHint_2149_, v_isExporting_2156_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
lean_dec_ref(v___x_2158_);
lean_dec_ref(v_env_2154_);
lean_dec(v_declHint_2149_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_msg_2148_);
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v_c_2166_; lean_object* v___x_2167_; 
v___x_2161_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2162_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_2163_ = l_Lean_Options_empty;
v___x_2164_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2158_);
lean_ctor_set(v___x_2164_, 1, v___x_2161_);
lean_ctor_set(v___x_2164_, 2, v___x_2162_);
lean_ctor_set(v___x_2164_, 3, v___x_2163_);
lean_inc(v_declHint_2149_);
v___x_2165_ = l_Lean_MessageData_ofConstName(v_declHint_2149_, v___x_2155_);
v_c_2166_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2166_, 0, v___x_2164_);
lean_ctor_set(v_c_2166_, 1, v___x_2165_);
v___x_2167_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2154_, v_declHint_2149_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec_ref(v_env_2154_);
lean_dec(v_declHint_2149_);
v___x_2168_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
lean_ctor_set(v___x_2169_, 1, v_c_2166_);
v___x_2170_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_2171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = l_Lean_MessageData_note(v___x_2171_);
v___x_2173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_msg_2148_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
else
{
lean_object* v_val_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2209_; 
v_val_2175_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2177_ = v___x_2167_;
v_isShared_2178_ = v_isSharedCheck_2209_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_val_2175_);
lean_dec(v___x_2167_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2209_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v_mod_2181_; uint8_t v___x_2182_; 
v___x_2179_ = l_Lean_Environment_header(v_env_2154_);
lean_dec_ref(v_env_2154_);
v___x_2180_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2179_);
lean_dec_ref(v___x_2179_);
v_mod_2181_ = lean_array_get(v___x_2152_, v___x_2180_, v_val_2175_);
lean_dec(v_val_2175_);
lean_dec_ref(v___x_2180_);
v___x_2182_ = l_Lean_isPrivateName(v_declHint_2149_);
lean_dec(v_declHint_2149_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2183_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__8);
v___x_2184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v_c_2166_);
v___x_2185_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__10);
v___x_2186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2184_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = l_Lean_MessageData_ofName(v_mod_2181_);
v___x_2188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__12);
v___x_2190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2188_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = l_Lean_MessageData_note(v___x_2190_);
v___x_2192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2192_, 0, v_msg_2148_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set_tag(v___x_2177_, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2192_);
v___x_2194_ = v___x_2177_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
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
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_2197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_c_2166_);
v___x_2198_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__14);
v___x_2199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = l_Lean_MessageData_ofName(v_mod_2181_);
v___x_2201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__16);
v___x_2203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2201_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = l_Lean_MessageData_note(v___x_2203_);
v___x_2205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2205_, 0, v_msg_2148_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set_tag(v___x_2177_, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2205_);
v___x_2207_ = v___x_2177_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2210_; 
lean_dec_ref(v_env_2154_);
lean_dec(v_declHint_2149_);
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_msg_2148_);
return v___x_2210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_2211_, lean_object* v_declHint_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2211_, v_declHint_2212_, v___y_2213_);
lean_dec(v___y_2213_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(lean_object* v_msg_2216_, lean_object* v_declHint_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v___x_2221_; lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2231_; 
v___x_2221_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2216_, v_declHint_2217_, v___y_2219_);
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2224_ = v___x_2221_;
v_isShared_2225_ = v_isSharedCheck_2231_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2221_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2231_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2229_; 
v___x_2226_ = l_Lean_unknownIdentifierMessageTag;
v___x_2227_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set(v___x_2227_, 1, v_a_2222_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 0, v___x_2227_);
v___x_2229_ = v___x_2224_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2227_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_msg_2232_, lean_object* v_declHint_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(v_msg_2232_, v_declHint_2233_, v___y_2234_, v___y_2235_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(lean_object* v_msgData_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2242_; lean_object* v_toCold_2243_; lean_object* v_env_2244_; lean_object* v_options_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2242_ = lean_st_ref_get(v___y_2240_);
v_toCold_2243_ = lean_ctor_get(v___y_2239_, 0);
v_env_2244_ = lean_ctor_get(v___x_2242_, 0);
lean_inc_ref(v_env_2244_);
lean_dec(v___x_2242_);
v_options_2245_ = lean_ctor_get(v_toCold_2243_, 2);
v___x_2246_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_2247_ = lean_unsigned_to_nat(32u);
v___x_2248_ = lean_mk_empty_array_with_capacity(v___x_2247_);
lean_dec_ref(v___x_2248_);
v___x_2249_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg___closed__2);
lean_inc_ref(v_options_2245_);
v___x_2250_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2250_, 0, v_env_2244_);
lean_ctor_set(v___x_2250_, 1, v___x_2246_);
lean_ctor_set(v___x_2250_, 2, v___x_2249_);
lean_ctor_set(v___x_2250_, 3, v_options_2245_);
v___x_2251_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
lean_ctor_set(v___x_2251_, 1, v_msgData_2238_);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12___boxed(lean_object* v_msgData_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(v_msgData_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(lean_object* v_msg_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_ref_2262_; lean_object* v___x_2263_; lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2272_; 
v_ref_2262_ = lean_ctor_get(v___y_2259_, 2);
v___x_2263_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11_spec__12(v_msg_2258_, v___y_2259_, v___y_2260_);
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v___x_2270_; 
lean_inc(v_ref_2262_);
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v_ref_2262_);
lean_ctor_set(v___x_2268_, 1, v_a_2264_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 1);
lean_ctor_set(v___x_2266_, 0, v___x_2268_);
v___x_2270_ = v___x_2266_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg___boxed(lean_object* v_msg_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(lean_object* v_ref_2278_, lean_object* v_msg_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_toCold_2283_; lean_object* v_currRecDepth_2284_; lean_object* v_ref_2285_; uint8_t v_diag_2286_; uint8_t v_suppressElabErrors_2287_; lean_object* v_ref_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_toCold_2283_ = lean_ctor_get(v___y_2280_, 0);
v_currRecDepth_2284_ = lean_ctor_get(v___y_2280_, 1);
v_ref_2285_ = lean_ctor_get(v___y_2280_, 2);
v_diag_2286_ = lean_ctor_get_uint8(v___y_2280_, sizeof(void*)*3);
v_suppressElabErrors_2287_ = lean_ctor_get_uint8(v___y_2280_, sizeof(void*)*3 + 1);
v_ref_2288_ = l_Lean_replaceRef(v_ref_2278_, v_ref_2285_);
lean_inc(v_currRecDepth_2284_);
lean_inc_ref(v_toCold_2283_);
v___x_2289_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2289_, 0, v_toCold_2283_);
lean_ctor_set(v___x_2289_, 1, v_currRecDepth_2284_);
lean_ctor_set(v___x_2289_, 2, v_ref_2288_);
lean_ctor_set_uint8(v___x_2289_, sizeof(void*)*3, v_diag_2286_);
lean_ctor_set_uint8(v___x_2289_, sizeof(void*)*3 + 1, v_suppressElabErrors_2287_);
v___x_2290_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2279_, v___x_2289_, v___y_2281_);
lean_dec_ref_known(v___x_2289_, 3);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg___boxed(lean_object* v_ref_2291_, lean_object* v_msg_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2291_, v_msg_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v_ref_2291_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(lean_object* v_ref_2297_, lean_object* v_msg_2298_, lean_object* v_declHint_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v_a_2304_; lean_object* v___x_2305_; 
v___x_2303_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8(v_msg_2298_, v_declHint_2299_, v___y_2300_, v___y_2301_);
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref(v___x_2303_);
v___x_2305_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2297_, v_a_2304_, v___y_2300_, v___y_2301_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_ref_2306_, lean_object* v_msg_2307_, lean_object* v_declHint_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2306_, v_msg_2307_, v_declHint_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v_ref_2306_);
return v_res_2312_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__0));
v___x_2315_ = l_Lean_stringToMessageData(v___x_2314_);
return v___x_2315_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__2));
v___x_2318_ = l_Lean_stringToMessageData(v___x_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_ref_2319_, lean_object* v_constName_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v___x_2324_; uint8_t v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2324_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__1);
v___x_2325_ = 0;
lean_inc(v_constName_2320_);
v___x_2326_ = l_Lean_MessageData_ofConstName(v_constName_2320_, v___x_2325_);
v___x_2327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2324_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___closed__3);
v___x_2329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2319_, v___x_2329_, v_constName_2320_, v___y_2321_, v___y_2322_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_ref_2331_, lean_object* v_constName_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2331_, v_constName_2332_, v___y_2333_, v___y_2334_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v_ref_2331_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_constName_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v_ref_2341_; lean_object* v___x_2342_; 
v_ref_2341_ = lean_ctor_get(v___y_2338_, 2);
v___x_2342_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2341_, v_constName_2337_, v___y_2338_, v___y_2339_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_constName_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2343_, v___y_2344_, v___y_2345_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(lean_object* v_constName_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v___x_2352_; lean_object* v_env_2353_; uint8_t v___x_2354_; lean_object* v___x_2355_; 
v___x_2352_ = lean_st_ref_get(v___y_2350_);
v_env_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc_ref(v_env_2353_);
lean_dec(v___x_2352_);
v___x_2354_ = 0;
lean_inc(v_constName_2348_);
v___x_2355_ = l_Lean_Environment_findConstVal_x3f(v_env_2353_, v_constName_2348_, v___x_2354_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2348_, v___y_2349_, v___y_2350_);
return v___x_2356_;
}
else
{
lean_object* v_val_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_constName_2348_);
v_val_2357_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2355_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_val_2357_);
lean_dec(v___x_2355_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
lean_ctor_set_tag(v___x_2359_, 0);
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_val_2357_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_constName_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(v_constName_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(lean_object* v_a_2370_, lean_object* v_a_2371_){
_start:
{
if (lean_obj_tag(v_a_2370_) == 0)
{
lean_object* v___x_2372_; 
v___x_2372_ = l_List_reverse___redArg(v_a_2371_);
return v___x_2372_;
}
else
{
lean_object* v_head_2373_; lean_object* v_tail_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2383_; 
v_head_2373_ = lean_ctor_get(v_a_2370_, 0);
v_tail_2374_ = lean_ctor_get(v_a_2370_, 1);
v_isSharedCheck_2383_ = !lean_is_exclusive(v_a_2370_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2376_ = v_a_2370_;
v_isShared_2377_ = v_isSharedCheck_2383_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_tail_2374_);
lean_inc(v_head_2373_);
lean_dec(v_a_2370_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2383_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2378_ = l_Lean_mkLevelParam(v_head_2373_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 1, v_a_2371_);
lean_ctor_set(v___x_2376_, 0, v___x_2378_);
v___x_2380_ = v___x_2376_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2378_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v_a_2371_);
v___x_2380_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
v_a_2370_ = v_tail_2374_;
v_a_2371_ = v___x_2380_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(lean_object* v_constName_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v___x_2388_; 
lean_inc(v_constName_2384_);
v___x_2388_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1(v_constName_2384_, v___y_2385_, v___y_2386_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2400_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2391_ = v___x_2388_;
v_isShared_2392_ = v_isSharedCheck_2400_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2388_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2400_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v_levelParams_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2398_; 
v_levelParams_2393_ = lean_ctor_get(v_a_2389_, 1);
lean_inc(v_levelParams_2393_);
lean_dec(v_a_2389_);
v___x_2394_ = lean_box(0);
v___x_2395_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__2(v_levelParams_2393_, v___x_2394_);
v___x_2396_ = l_Lean_mkConst(v_constName_2384_, v___x_2395_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2396_);
v___x_2398_ = v___x_2391_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_dec(v_constName_2384_);
v_a_2401_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2388_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2388_);
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
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0___boxed(lean_object* v_constName_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(v_constName_2409_, v___y_2410_, v___y_2411_);
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(lean_object* v_stx_2414_, lean_object* v_n_2415_, lean_object* v_expectedType_x3f_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0(v_n_2415_, v___y_2417_, v___y_2418_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v___x_2422_ = lean_obj_once(&l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2, &l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2_once, _init_l_Lean_Elab_ContextInfo_runCoreM___redArg___closed__2);
v___x_2423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
lean_ctor_set(v___x_2423_, 1, v_stx_2414_);
v___x_2424_ = l_Lean_LocalContext_empty;
v___x_2425_ = 0;
v___x_2426_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2426_, 0, v___x_2423_);
lean_ctor_set(v___x_2426_, 1, v___x_2424_);
lean_ctor_set(v___x_2426_, 2, v_expectedType_x3f_2416_);
lean_ctor_set(v___x_2426_, 3, v_a_2421_);
lean_ctor_set_uint8(v___x_2426_, sizeof(void*)*4, v___x_2425_);
lean_ctor_set_uint8(v___x_2426_, sizeof(void*)*4 + 1, v___x_2425_);
v___x_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
v___x_2428_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1(v___x_2427_, v___y_2417_, v___y_2418_);
return v___x_2428_;
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v_expectedType_x3f_2416_);
lean_dec(v_stx_2414_);
v_a_2429_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2420_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2420_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0___boxed(lean_object* v_stx_2437_, lean_object* v_n_2438_, lean_object* v_expectedType_x3f_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_stx_2437_, v_n_2438_, v_expectedType_x3f_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object* v_id_2444_, lean_object* v_expectedType_x3f_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v___x_2449_; 
lean_inc(v_id_2444_);
v___x_2449_ = l_Lean_realizeGlobalConstNoOverload(v_id_2444_, v_a_2446_, v_a_2447_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2477_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2452_ = v___x_2449_;
v_isShared_2453_ = v_isSharedCheck_2477_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2449_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2477_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v_infoState_2455_; uint8_t v_enabled_2456_; 
v___x_2454_ = lean_st_ref_get(v_a_2447_);
v_infoState_2455_ = lean_ctor_get(v___x_2454_, 7);
lean_inc_ref(v_infoState_2455_);
lean_dec(v___x_2454_);
v_enabled_2456_ = lean_ctor_get_uint8(v_infoState_2455_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2455_);
if (v_enabled_2456_ == 0)
{
lean_object* v___x_2458_; 
lean_dec(v_expectedType_x3f_2445_);
lean_dec(v_id_2444_);
if (v_isShared_2453_ == 0)
{
v___x_2458_ = v___x_2452_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_a_2450_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
else
{
lean_object* v___x_2460_; 
lean_del_object(v___x_2452_);
lean_inc(v_a_2450_);
v___x_2460_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_id_2444_, v_a_2450_, v_expectedType_x3f_2445_, v_a_2446_, v_a_2447_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2467_ == 0)
{
lean_object* v_unused_2468_; 
v_unused_2468_ = lean_ctor_get(v___x_2460_, 0);
lean_dec(v_unused_2468_);
v___x_2462_ = v___x_2460_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_dec(v___x_2460_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 0, v_a_2450_);
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2450_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_a_2450_);
v_a_2469_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2460_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2460_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
}
else
{
lean_dec(v_expectedType_x3f_2445_);
lean_dec(v_id_2444_);
return v___x_2449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object* v_id_2478_, lean_object* v_expectedType_x3f_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_id_2478_, v_expectedType_x3f_2479_, v_a_2480_, v_a_2481_);
lean_dec(v_a_2481_);
lean_dec_ref(v_a_2480_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(lean_object* v_t_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___redArg(v_t_2484_, v___y_2486_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4___boxed(lean_object* v_t_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__1_spec__4(v_t_2489_, v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_2494_, lean_object* v_constName_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___redArg(v_constName_2495_, v___y_2496_, v___y_2497_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2500_, lean_object* v_constName_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_2500_, v_constName_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b1_2506_, lean_object* v_ref_2507_, lean_object* v_constName_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___redArg(v_ref_2507_, v_constName_2508_, v___y_2509_, v___y_2510_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b1_2513_, lean_object* v_ref_2514_, lean_object* v_constName_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5(v_00_u03b1_2513_, v_ref_2514_, v_constName_2515_, v___y_2516_, v___y_2517_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
lean_dec(v_ref_2514_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object* v_00_u03b1_2520_, lean_object* v_ref_2521_, lean_object* v_msg_2522_, lean_object* v_declHint_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___redArg(v_ref_2521_, v_msg_2522_, v_declHint_2523_, v___y_2524_, v___y_2525_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b1_2528_, lean_object* v_ref_2529_, lean_object* v_msg_2530_, lean_object* v_declHint_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7(v_00_u03b1_2528_, v_ref_2529_, v_msg_2530_, v_declHint_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v_ref_2529_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_msg_2536_, lean_object* v_declHint_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___redArg(v_msg_2536_, v_declHint_2537_, v___y_2539_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2542_, lean_object* v_declHint_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__8_spec__9(v_msg_2542_, v_declHint_2543_, v___y_2544_, v___y_2545_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(lean_object* v_00_u03b1_2548_, lean_object* v_ref_2549_, lean_object* v_msg_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___redArg(v_ref_2549_, v_msg_2550_, v___y_2551_, v___y_2552_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2555_, lean_object* v_ref_2556_, lean_object* v_msg_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9(v_00_u03b1_2555_, v_ref_2556_, v_msg_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v_ref_2556_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(lean_object* v_00_u03b1_2562_, lean_object* v_msg_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___redArg(v_msg_2563_, v___y_2564_, v___y_2565_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11___boxed(lean_object* v_00_u03b1_2568_, lean_object* v_msg_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0_spec__0_spec__1_spec__2_spec__5_spec__7_spec__9_spec__11(v_00_u03b1_2568_, v_msg_2569_, v___y_2570_, v___y_2571_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(lean_object* v_id_2574_, lean_object* v_expectedType_x3f_2575_, lean_object* v_as_x27_2576_, lean_object* v_b_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
if (lean_obj_tag(v_as_x27_2576_) == 0)
{
lean_object* v___x_2581_; 
lean_dec(v_expectedType_x3f_2575_);
lean_dec(v_id_2574_);
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_b_2577_);
return v___x_2581_;
}
else
{
lean_object* v_head_2582_; lean_object* v_tail_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_head_2582_ = lean_ctor_get(v_as_x27_2576_, 0);
v_tail_2583_ = lean_ctor_get(v_as_x27_2576_, 1);
v___x_2584_ = lean_box(0);
lean_inc(v_expectedType_x3f_2575_);
lean_inc(v_head_2582_);
lean_inc(v_id_2574_);
v___x_2585_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_id_2574_, v_head_2582_, v_expectedType_x3f_2575_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_dec_ref_known(v___x_2585_, 1);
v_as_x27_2576_ = v_tail_2583_;
v_b_2577_ = v___x_2584_;
goto _start;
}
else
{
lean_dec(v_expectedType_x3f_2575_);
lean_dec(v_id_2574_);
return v___x_2585_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg___boxed(lean_object* v_id_2587_, lean_object* v_expectedType_x3f_2588_, lean_object* v_as_x27_2589_, lean_object* v_b_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v_res_2594_; 
v_res_2594_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2587_, v_expectedType_x3f_2588_, v_as_x27_2589_, v_b_2590_, v___y_2591_, v___y_2592_);
lean_dec(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v_as_x27_2589_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos(lean_object* v_id_2595_, lean_object* v_expectedType_x3f_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_){
_start:
{
lean_object* v___x_2600_; 
lean_inc(v_id_2595_);
v___x_2600_ = l_Lean_realizeGlobalConst(v_id_2595_, v_a_2597_, v_a_2598_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2629_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2603_ = v___x_2600_;
v_isShared_2604_ = v_isSharedCheck_2629_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2600_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2629_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; lean_object* v_infoState_2606_; uint8_t v_enabled_2607_; 
v___x_2605_ = lean_st_ref_get(v_a_2598_);
v_infoState_2606_ = lean_ctor_get(v___x_2605_, 7);
lean_inc_ref(v_infoState_2606_);
lean_dec(v___x_2605_);
v_enabled_2607_ = lean_ctor_get_uint8(v_infoState_2606_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2606_);
if (v_enabled_2607_ == 0)
{
lean_object* v___x_2609_; 
lean_dec(v_expectedType_x3f_2596_);
lean_dec(v_id_2595_);
if (v_isShared_2604_ == 0)
{
v___x_2609_ = v___x_2603_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2601_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_del_object(v___x_2603_);
v___x_2611_ = lean_box(0);
v___x_2612_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2595_, v_expectedType_x3f_2596_, v_a_2601_, v___x_2611_, v_a_2597_, v_a_2598_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2619_ == 0)
{
lean_object* v_unused_2620_; 
v_unused_2620_ = lean_ctor_get(v___x_2612_, 0);
lean_dec(v_unused_2620_);
v___x_2614_ = v___x_2612_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_dec(v___x_2612_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v_a_2601_);
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2601_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec(v_a_2601_);
v_a_2621_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2612_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2612_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
}
}
else
{
lean_dec(v_expectedType_x3f_2596_);
lean_dec(v_id_2595_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalConstWithInfos___boxed(lean_object* v_id_2630_, lean_object* v_expectedType_x3f_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lean_Elab_realizeGlobalConstWithInfos(v_id_2630_, v_expectedType_x3f_2631_, v_a_2632_, v_a_2633_);
lean_dec(v_a_2633_);
lean_dec_ref(v_a_2632_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(lean_object* v_id_2636_, lean_object* v_expectedType_x3f_2637_, lean_object* v_as_2638_, lean_object* v_as_x27_2639_, lean_object* v_b_2640_, lean_object* v_a_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
lean_object* v___x_2645_; 
v___x_2645_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___redArg(v_id_2636_, v_expectedType_x3f_2637_, v_as_x27_2639_, v_b_2640_, v___y_2642_, v___y_2643_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0___boxed(lean_object* v_id_2646_, lean_object* v_expectedType_x3f_2647_, lean_object* v_as_2648_, lean_object* v_as_x27_2649_, lean_object* v_b_2650_, lean_object* v_a_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalConstWithInfos_spec__0(v_id_2646_, v_expectedType_x3f_2647_, v_as_2648_, v_as_x27_2649_, v_b_2650_, v_a_2651_, v___y_2652_, v___y_2653_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v_as_x27_2649_);
lean_dec(v_as_2648_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(lean_object* v_ref_2656_, lean_object* v_as_x27_2657_, lean_object* v_b_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
if (lean_obj_tag(v_as_x27_2657_) == 0)
{
lean_object* v___x_2662_; 
lean_dec(v_ref_2656_);
v___x_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2662_, 0, v_b_2658_);
return v___x_2662_;
}
else
{
lean_object* v_head_2663_; lean_object* v_tail_2664_; lean_object* v_fst_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v_head_2663_ = lean_ctor_get(v_as_x27_2657_, 0);
v_tail_2664_ = lean_ctor_get(v_as_x27_2657_, 1);
v_fst_2665_ = lean_ctor_get(v_head_2663_, 0);
v___x_2666_ = lean_box(0);
v___x_2667_ = lean_box(0);
lean_inc(v_fst_2665_);
lean_inc(v_ref_2656_);
v___x_2668_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_realizeGlobalConstNoOverloadWithInfo_spec__0(v_ref_2656_, v_fst_2665_, v___x_2667_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_dec_ref_known(v___x_2668_, 1);
v_as_x27_2657_ = v_tail_2664_;
v_b_2658_ = v___x_2666_;
goto _start;
}
else
{
lean_dec(v_ref_2656_);
return v___x_2668_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg___boxed(lean_object* v_ref_2670_, lean_object* v_as_x27_2671_, lean_object* v_b_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2670_, v_as_x27_2671_, v_b_2672_, v___y_2673_, v___y_2674_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec(v_as_x27_2671_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos(lean_object* v_ref_2677_, lean_object* v_id_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lean_realizeGlobalName(v_id_2678_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2711_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2685_ = v___x_2682_;
v_isShared_2686_ = v_isSharedCheck_2711_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2682_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2711_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2687_; lean_object* v_infoState_2688_; uint8_t v_enabled_2689_; 
v___x_2687_ = lean_st_ref_get(v_a_2680_);
v_infoState_2688_ = lean_ctor_get(v___x_2687_, 7);
lean_inc_ref(v_infoState_2688_);
lean_dec(v___x_2687_);
v_enabled_2689_ = lean_ctor_get_uint8(v_infoState_2688_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2688_);
if (v_enabled_2689_ == 0)
{
lean_object* v___x_2691_; 
lean_dec(v_ref_2677_);
if (v_isShared_2686_ == 0)
{
v___x_2691_ = v___x_2685_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2683_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
else
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
lean_del_object(v___x_2685_);
v___x_2693_ = lean_box(0);
v___x_2694_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2677_, v_a_2683_, v___x_2693_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2701_ == 0)
{
lean_object* v_unused_2702_; 
v_unused_2702_ = lean_ctor_get(v___x_2694_, 0);
lean_dec(v_unused_2702_);
v___x_2696_ = v___x_2694_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_dec(v___x_2694_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v_a_2683_);
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2683_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_dec(v_a_2683_);
v_a_2703_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2694_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2694_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
}
else
{
lean_dec(v_ref_2677_);
return v___x_2682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_realizeGlobalNameWithInfos___boxed(lean_object* v_ref_2712_, lean_object* v_id_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lean_Elab_realizeGlobalNameWithInfos(v_ref_2712_, v_id_2713_, v_a_2714_, v_a_2715_);
lean_dec(v_a_2715_);
lean_dec_ref(v_a_2714_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(lean_object* v_ref_2718_, lean_object* v_as_2719_, lean_object* v_as_x27_2720_, lean_object* v_b_2721_, lean_object* v_a_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___redArg(v_ref_2718_, v_as_x27_2720_, v_b_2721_, v___y_2723_, v___y_2724_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0___boxed(lean_object* v_ref_2727_, lean_object* v_as_2728_, lean_object* v_as_x27_2729_, lean_object* v_b_2730_, lean_object* v_a_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_List_forIn_x27_loop___at___00Lean_Elab_realizeGlobalNameWithInfos_spec__0(v_ref_2727_, v_as_2728_, v_as_x27_2729_, v_b_2730_, v_a_2731_, v___y_2732_, v___y_2733_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec(v_as_x27_2729_);
lean_dec(v_as_2728_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0(lean_object* v_self_2736_){
_start:
{
lean_object* v_fst_2737_; 
v_fst_2737_ = lean_ctor_get(v_self_2736_, 0);
lean_inc(v_fst_2737_);
return v_fst_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__0___boxed(lean_object* v_self_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_Lean_Elab_withInfoContext_x27___redArg___lam__0(v_self_2738_);
lean_dec_ref(v_self_2738_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__1(lean_object* v_info_2740_, lean_object* v_treesSaved_2741_, lean_object* v_s_2742_){
_start:
{
if (lean_obj_tag(v_info_2740_) == 0)
{
uint8_t v_enabled_2743_; lean_object* v_assignment_2744_; lean_object* v_lazyAssignment_2745_; lean_object* v_trees_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2756_; 
v_enabled_2743_ = lean_ctor_get_uint8(v_s_2742_, sizeof(void*)*3);
v_assignment_2744_ = lean_ctor_get(v_s_2742_, 0);
v_lazyAssignment_2745_ = lean_ctor_get(v_s_2742_, 1);
v_trees_2746_ = lean_ctor_get(v_s_2742_, 2);
v_isSharedCheck_2756_ = !lean_is_exclusive(v_s_2742_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2748_ = v_s_2742_;
v_isShared_2749_ = v_isSharedCheck_2756_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_trees_2746_);
lean_inc(v_lazyAssignment_2745_);
lean_inc(v_assignment_2744_);
lean_dec(v_s_2742_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2756_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v_val_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2754_; 
v_val_2750_ = lean_ctor_get(v_info_2740_, 0);
lean_inc(v_val_2750_);
lean_dec_ref_known(v_info_2740_, 1);
v___x_2751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2751_, 0, v_val_2750_);
lean_ctor_set(v___x_2751_, 1, v_trees_2746_);
v___x_2752_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2741_, v___x_2751_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 2, v___x_2752_);
v___x_2754_ = v___x_2748_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_assignment_2744_);
lean_ctor_set(v_reuseFailAlloc_2755_, 1, v_lazyAssignment_2745_);
lean_ctor_set(v_reuseFailAlloc_2755_, 2, v___x_2752_);
lean_ctor_set_uint8(v_reuseFailAlloc_2755_, sizeof(void*)*3, v_enabled_2743_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
else
{
uint8_t v_enabled_2757_; lean_object* v_assignment_2758_; lean_object* v_lazyAssignment_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2775_; 
v_enabled_2757_ = lean_ctor_get_uint8(v_s_2742_, sizeof(void*)*3);
v_assignment_2758_ = lean_ctor_get(v_s_2742_, 0);
v_lazyAssignment_2759_ = lean_ctor_get(v_s_2742_, 1);
v_isSharedCheck_2775_ = !lean_is_exclusive(v_s_2742_);
if (v_isSharedCheck_2775_ == 0)
{
lean_object* v_unused_2776_; 
v_unused_2776_ = lean_ctor_get(v_s_2742_, 2);
lean_dec(v_unused_2776_);
v___x_2761_ = v_s_2742_;
v_isShared_2762_ = v_isSharedCheck_2775_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_lazyAssignment_2759_);
lean_inc(v_assignment_2758_);
lean_dec(v_s_2742_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2775_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v_val_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2774_; 
v_val_2763_ = lean_ctor_get(v_info_2740_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_info_2740_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2765_ = v_info_2740_;
v_isShared_2766_ = v_isSharedCheck_2774_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_val_2763_);
lean_dec(v_info_2740_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2774_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
lean_ctor_set_tag(v___x_2765_, 2);
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_val_2763_);
v___x_2768_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
lean_object* v___x_2769_; lean_object* v___x_2771_; 
v___x_2769_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2741_, v___x_2768_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 2, v___x_2769_);
v___x_2771_ = v___x_2761_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_assignment_2758_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_lazyAssignment_2759_);
lean_ctor_set(v_reuseFailAlloc_2772_, 2, v___x_2769_);
lean_ctor_set_uint8(v_reuseFailAlloc_2772_, sizeof(void*)*3, v_enabled_2757_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__2(lean_object* v_treesSaved_2777_, lean_object* v_modifyInfoState_2778_, lean_object* v_info_2779_){
_start:
{
lean_object* v___f_2780_; lean_object* v___x_2781_; 
v___f_2780_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2780_, 0, v_info_2779_);
lean_closure_set(v___f_2780_, 1, v_treesSaved_2777_);
v___x_2781_ = lean_apply_1(v_modifyInfoState_2778_, v___f_2780_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__3(lean_object* v___f_2782_, lean_object* v_info_2783_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = lean_apply_1(v___f_2782_, v_info_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__4(lean_object* v_toPure_2785_, lean_object* v_toBind_2786_, lean_object* v___f_2787_, lean_object* v_____do__lift_2788_){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2789_, 0, v_____do__lift_2788_);
v___x_2790_ = lean_apply_2(v_toPure_2785_, lean_box(0), v___x_2789_);
v___x_2791_ = lean_apply_4(v_toBind_2786_, lean_box(0), lean_box(0), v___x_2790_, v___f_2787_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__6(lean_object* v_toBind_2792_, lean_object* v_mkInfoOnError_2793_, lean_object* v___f_2794_, lean_object* v_mkInfo_2795_, lean_object* v___f_2796_, lean_object* v_a_x3f_2797_){
_start:
{
if (lean_obj_tag(v_a_x3f_2797_) == 0)
{
lean_object* v___x_2798_; 
lean_dec(v___f_2796_);
lean_dec(v_mkInfo_2795_);
v___x_2798_ = lean_apply_4(v_toBind_2792_, lean_box(0), lean_box(0), v_mkInfoOnError_2793_, v___f_2794_);
return v___x_2798_;
}
else
{
lean_object* v_val_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
lean_dec(v___f_2794_);
lean_dec(v_mkInfoOnError_2793_);
v_val_2799_ = lean_ctor_get(v_a_x3f_2797_, 0);
lean_inc(v_val_2799_);
lean_dec_ref_known(v_a_x3f_2797_, 1);
v___x_2800_ = lean_apply_1(v_mkInfo_2795_, v_val_2799_);
v___x_2801_ = lean_apply_4(v_toBind_2792_, lean_box(0), lean_box(0), v___x_2800_, v___f_2796_);
return v___x_2801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__5(lean_object* v_toFunctor_2802_, lean_object* v_modifyInfoState_2803_, lean_object* v_toPure_2804_, lean_object* v_toBind_2805_, lean_object* v_mkInfoOnError_2806_, lean_object* v_mkInfo_2807_, lean_object* v_inst_2808_, lean_object* v_x_2809_, lean_object* v___f_2810_, lean_object* v_treesSaved_2811_){
_start:
{
lean_object* v_map_2812_; lean_object* v___f_2813_; lean_object* v___f_2814_; lean_object* v___f_2815_; lean_object* v___f_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v_map_2812_ = lean_ctor_get(v_toFunctor_2802_, 0);
lean_inc(v_map_2812_);
lean_dec_ref(v_toFunctor_2802_);
v___f_2813_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2813_, 0, v_treesSaved_2811_);
lean_closure_set(v___f_2813_, 1, v_modifyInfoState_2803_);
v___f_2814_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2814_, 0, v___f_2813_);
lean_inc_ref(v___f_2814_);
lean_inc(v_toBind_2805_);
v___f_2815_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__4), 4, 3);
lean_closure_set(v___f_2815_, 0, v_toPure_2804_);
lean_closure_set(v___f_2815_, 1, v_toBind_2805_);
lean_closure_set(v___f_2815_, 2, v___f_2814_);
v___f_2816_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__6), 6, 5);
lean_closure_set(v___f_2816_, 0, v_toBind_2805_);
lean_closure_set(v___f_2816_, 1, v_mkInfoOnError_2806_);
lean_closure_set(v___f_2816_, 2, v___f_2815_);
lean_closure_set(v___f_2816_, 3, v_mkInfo_2807_);
lean_closure_set(v___f_2816_, 4, v___f_2814_);
v___x_2817_ = lean_apply_4(v_inst_2808_, lean_box(0), lean_box(0), v_x_2809_, v___f_2816_);
v___x_2818_ = lean_apply_4(v_map_2812_, lean_box(0), lean_box(0), v___f_2810_, v___x_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7(lean_object* v_x_2819_, lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_toBind_2822_, lean_object* v___f_2823_, lean_object* v_____do__lift_2824_){
_start:
{
uint8_t v_enabled_2825_; 
v_enabled_2825_ = lean_ctor_get_uint8(v_____do__lift_2824_, sizeof(void*)*3);
if (v_enabled_2825_ == 0)
{
lean_dec(v___f_2823_);
lean_dec(v_toBind_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_inst_2820_);
lean_inc(v_x_2819_);
return v_x_2819_;
}
else
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = l_Lean_Elab_getResetInfoTrees___redArg(v_inst_2820_, v_inst_2821_);
v___x_2827_ = lean_apply_4(v_toBind_2822_, lean_box(0), lean_box(0), v___x_2826_, v___f_2823_);
return v___x_2827_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed(lean_object* v_x_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_toBind_2831_, lean_object* v___f_2832_, lean_object* v_____do__lift_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lean_Elab_withInfoContext_x27___redArg___lam__7(v_x_2828_, v_inst_2829_, v_inst_2830_, v_toBind_2831_, v___f_2832_, v_____do__lift_2833_);
lean_dec_ref(v_____do__lift_2833_);
lean_dec(v_x_2828_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___redArg(lean_object* v_inst_2836_, lean_object* v_inst_2837_, lean_object* v_inst_2838_, lean_object* v_x_2839_, lean_object* v_mkInfo_2840_, lean_object* v_mkInfoOnError_2841_){
_start:
{
lean_object* v_toApplicative_2842_; lean_object* v_toBind_2843_; lean_object* v_getInfoState_2844_; lean_object* v_modifyInfoState_2845_; lean_object* v_toFunctor_2846_; lean_object* v_toPure_2847_; lean_object* v___f_2848_; lean_object* v___f_2849_; lean_object* v___f_2850_; lean_object* v___x_2851_; 
v_toApplicative_2842_ = lean_ctor_get(v_inst_2836_, 0);
v_toBind_2843_ = lean_ctor_get(v_inst_2836_, 1);
lean_inc_n(v_toBind_2843_, 3);
v_getInfoState_2844_ = lean_ctor_get(v_inst_2837_, 0);
lean_inc(v_getInfoState_2844_);
v_modifyInfoState_2845_ = lean_ctor_get(v_inst_2837_, 1);
v_toFunctor_2846_ = lean_ctor_get(v_toApplicative_2842_, 0);
v_toPure_2847_ = lean_ctor_get(v_toApplicative_2842_, 1);
v___f_2848_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_2839_);
lean_inc(v_toPure_2847_);
lean_inc(v_modifyInfoState_2845_);
lean_inc_ref(v_toFunctor_2846_);
v___f_2849_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__5), 10, 9);
lean_closure_set(v___f_2849_, 0, v_toFunctor_2846_);
lean_closure_set(v___f_2849_, 1, v_modifyInfoState_2845_);
lean_closure_set(v___f_2849_, 2, v_toPure_2847_);
lean_closure_set(v___f_2849_, 3, v_toBind_2843_);
lean_closure_set(v___f_2849_, 4, v_mkInfoOnError_2841_);
lean_closure_set(v___f_2849_, 5, v_mkInfo_2840_);
lean_closure_set(v___f_2849_, 6, v_inst_2838_);
lean_closure_set(v___f_2849_, 7, v_x_2839_);
lean_closure_set(v___f_2849_, 8, v___f_2848_);
v___f_2850_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_2850_, 0, v_x_2839_);
lean_closure_set(v___f_2850_, 1, v_inst_2836_);
lean_closure_set(v___f_2850_, 2, v_inst_2837_);
lean_closure_set(v___f_2850_, 3, v_toBind_2843_);
lean_closure_set(v___f_2850_, 4, v___f_2849_);
v___x_2851_ = lean_apply_4(v_toBind_2843_, lean_box(0), lean_box(0), v_getInfoState_2844_, v___f_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27(lean_object* v_m_2852_, lean_object* v_inst_2853_, lean_object* v_inst_2854_, lean_object* v_00_u03b1_2855_, lean_object* v_inst_2856_, lean_object* v_x_2857_, lean_object* v_mkInfo_2858_, lean_object* v_mkInfoOnError_2859_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_Elab_withInfoContext_x27___redArg(v_inst_2853_, v_inst_2854_, v_inst_2856_, v_x_2857_, v_mkInfo_2858_, v_mkInfoOnError_2859_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__1(lean_object* v_treesSaved_2861_, lean_object* v_tree_2862_, lean_object* v_s_2863_){
_start:
{
uint8_t v_enabled_2864_; lean_object* v_assignment_2865_; lean_object* v_lazyAssignment_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2874_; 
v_enabled_2864_ = lean_ctor_get_uint8(v_s_2863_, sizeof(void*)*3);
v_assignment_2865_ = lean_ctor_get(v_s_2863_, 0);
v_lazyAssignment_2866_ = lean_ctor_get(v_s_2863_, 1);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_s_2863_);
if (v_isSharedCheck_2874_ == 0)
{
lean_object* v_unused_2875_; 
v_unused_2875_ = lean_ctor_get(v_s_2863_, 2);
lean_dec(v_unused_2875_);
v___x_2868_ = v_s_2863_;
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_lazyAssignment_2866_);
lean_inc(v_assignment_2865_);
lean_dec(v_s_2863_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = l_Lean_PersistentArray_push___redArg(v_treesSaved_2861_, v_tree_2862_);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 2, v___x_2870_);
v___x_2872_ = v___x_2868_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_assignment_2865_);
lean_ctor_set(v_reuseFailAlloc_2873_, 1, v_lazyAssignment_2866_);
lean_ctor_set(v_reuseFailAlloc_2873_, 2, v___x_2870_);
lean_ctor_set_uint8(v_reuseFailAlloc_2873_, sizeof(void*)*3, v_enabled_2864_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__0(lean_object* v_treesSaved_2876_, lean_object* v_modifyInfoState_2877_, lean_object* v_tree_2878_){
_start:
{
lean_object* v___f_2879_; lean_object* v___x_2880_; 
v___f_2879_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2879_, 0, v_treesSaved_2876_);
lean_closure_set(v___f_2879_, 1, v_tree_2878_);
v___x_2880_ = lean_apply_1(v_modifyInfoState_2877_, v___f_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__2(lean_object* v_mkInfoTree_2881_, lean_object* v_toBind_2882_, lean_object* v___f_2883_, lean_object* v_st_2884_){
_start:
{
lean_object* v_trees_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v_trees_2885_ = lean_ctor_get(v_st_2884_, 2);
lean_inc_ref(v_trees_2885_);
lean_dec_ref(v_st_2884_);
v___x_2886_ = lean_apply_1(v_mkInfoTree_2881_, v_trees_2885_);
v___x_2887_ = lean_apply_4(v_toBind_2882_, lean_box(0), lean_box(0), v___x_2886_, v___f_2883_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3(lean_object* v_toBind_2888_, lean_object* v_getInfoState_2889_, lean_object* v___f_2890_, lean_object* v_x_2891_){
_start:
{
lean_object* v___x_2892_; 
v___x_2892_ = lean_apply_4(v_toBind_2888_, lean_box(0), lean_box(0), v_getInfoState_2889_, v___f_2890_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed(lean_object* v_toBind_2893_, lean_object* v_getInfoState_2894_, lean_object* v___f_2895_, lean_object* v_x_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_Elab_withInfoTreeContext___redArg___lam__3(v_toBind_2893_, v_getInfoState_2894_, v___f_2895_, v_x_2896_);
lean_dec(v_x_2896_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg___lam__4(lean_object* v_toFunctor_2898_, lean_object* v_modifyInfoState_2899_, lean_object* v_mkInfoTree_2900_, lean_object* v_toBind_2901_, lean_object* v_getInfoState_2902_, lean_object* v_inst_2903_, lean_object* v_x_2904_, lean_object* v___f_2905_, lean_object* v_treesSaved_2906_){
_start:
{
lean_object* v_map_2907_; lean_object* v___f_2908_; lean_object* v___f_2909_; lean_object* v___f_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_map_2907_ = lean_ctor_get(v_toFunctor_2898_, 0);
lean_inc(v_map_2907_);
lean_dec_ref(v_toFunctor_2898_);
v___f_2908_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2908_, 0, v_treesSaved_2906_);
lean_closure_set(v___f_2908_, 1, v_modifyInfoState_2899_);
lean_inc(v_toBind_2901_);
v___f_2909_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2909_, 0, v_mkInfoTree_2900_);
lean_closure_set(v___f_2909_, 1, v_toBind_2901_);
lean_closure_set(v___f_2909_, 2, v___f_2908_);
v___f_2910_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_2910_, 0, v_toBind_2901_);
lean_closure_set(v___f_2910_, 1, v_getInfoState_2902_);
lean_closure_set(v___f_2910_, 2, v___f_2909_);
v___x_2911_ = lean_apply_4(v_inst_2903_, lean_box(0), lean_box(0), v_x_2904_, v___f_2910_);
v___x_2912_ = lean_apply_4(v_map_2907_, lean_box(0), lean_box(0), v___f_2905_, v___x_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___redArg(lean_object* v_inst_2913_, lean_object* v_inst_2914_, lean_object* v_inst_2915_, lean_object* v_x_2916_, lean_object* v_mkInfoTree_2917_){
_start:
{
lean_object* v_toApplicative_2918_; lean_object* v_toBind_2919_; lean_object* v_getInfoState_2920_; lean_object* v_modifyInfoState_2921_; lean_object* v_toFunctor_2922_; lean_object* v___f_2923_; lean_object* v___f_2924_; lean_object* v___f_2925_; lean_object* v___x_2926_; 
v_toApplicative_2918_ = lean_ctor_get(v_inst_2913_, 0);
v_toBind_2919_ = lean_ctor_get(v_inst_2913_, 1);
lean_inc_n(v_toBind_2919_, 3);
v_getInfoState_2920_ = lean_ctor_get(v_inst_2914_, 0);
lean_inc_n(v_getInfoState_2920_, 2);
v_modifyInfoState_2921_ = lean_ctor_get(v_inst_2914_, 1);
v_toFunctor_2922_ = lean_ctor_get(v_toApplicative_2918_, 0);
v___f_2923_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_2916_);
lean_inc(v_modifyInfoState_2921_);
lean_inc_ref(v_toFunctor_2922_);
v___f_2924_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__4), 9, 8);
lean_closure_set(v___f_2924_, 0, v_toFunctor_2922_);
lean_closure_set(v___f_2924_, 1, v_modifyInfoState_2921_);
lean_closure_set(v___f_2924_, 2, v_mkInfoTree_2917_);
lean_closure_set(v___f_2924_, 3, v_toBind_2919_);
lean_closure_set(v___f_2924_, 4, v_getInfoState_2920_);
lean_closure_set(v___f_2924_, 5, v_inst_2915_);
lean_closure_set(v___f_2924_, 6, v_x_2916_);
lean_closure_set(v___f_2924_, 7, v___f_2923_);
v___f_2925_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_2925_, 0, v_x_2916_);
lean_closure_set(v___f_2925_, 1, v_inst_2913_);
lean_closure_set(v___f_2925_, 2, v_inst_2914_);
lean_closure_set(v___f_2925_, 3, v_toBind_2919_);
lean_closure_set(v___f_2925_, 4, v___f_2924_);
v___x_2926_ = lean_apply_4(v_toBind_2919_, lean_box(0), lean_box(0), v_getInfoState_2920_, v___f_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext(lean_object* v_m_2927_, lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_00_u03b1_2930_, lean_object* v_inst_2931_, lean_object* v_x_2932_, lean_object* v_mkInfoTree_2933_){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_2928_, v_inst_2929_, v_inst_2931_, v_x_2932_, v_mkInfoTree_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__0(lean_object* v_trees_2935_, lean_object* v_toPure_2936_, lean_object* v_____do__lift_2937_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2938_, 0, v_____do__lift_2937_);
lean_ctor_set(v___x_2938_, 1, v_trees_2935_);
v___x_2939_ = lean_apply_2(v_toPure_2936_, lean_box(0), v___x_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg___lam__1(lean_object* v_toPure_2940_, lean_object* v_toBind_2941_, lean_object* v_mkInfo_2942_, lean_object* v_trees_2943_){
_start:
{
lean_object* v___f_2944_; lean_object* v___x_2945_; 
v___f_2944_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2944_, 0, v_trees_2943_);
lean_closure_set(v___f_2944_, 1, v_toPure_2940_);
v___x_2945_ = lean_apply_4(v_toBind_2941_, lean_box(0), lean_box(0), v_mkInfo_2942_, v___f_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext___redArg(lean_object* v_inst_2946_, lean_object* v_inst_2947_, lean_object* v_inst_2948_, lean_object* v_x_2949_, lean_object* v_mkInfo_2950_){
_start:
{
lean_object* v_toApplicative_2951_; lean_object* v_toBind_2952_; lean_object* v_toPure_2953_; lean_object* v___f_2954_; lean_object* v___x_2955_; 
v_toApplicative_2951_ = lean_ctor_get(v_inst_2946_, 0);
v_toBind_2952_ = lean_ctor_get(v_inst_2946_, 1);
v_toPure_2953_ = lean_ctor_get(v_toApplicative_2951_, 1);
lean_inc(v_toBind_2952_);
lean_inc(v_toPure_2953_);
v___f_2954_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2954_, 0, v_toPure_2953_);
lean_closure_set(v___f_2954_, 1, v_toBind_2952_);
lean_closure_set(v___f_2954_, 2, v_mkInfo_2950_);
v___x_2955_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_2946_, v_inst_2947_, v_inst_2948_, v_x_2949_, v___f_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext(lean_object* v_m_2956_, lean_object* v_inst_2957_, lean_object* v_inst_2958_, lean_object* v_00_u03b1_2959_, lean_object* v_inst_2960_, lean_object* v_x_2961_, lean_object* v_mkInfo_2962_){
_start:
{
lean_object* v_toApplicative_2963_; lean_object* v_toBind_2964_; lean_object* v_toPure_2965_; lean_object* v___f_2966_; lean_object* v___x_2967_; 
v_toApplicative_2963_ = lean_ctor_get(v_inst_2957_, 0);
v_toBind_2964_ = lean_ctor_get(v_inst_2957_, 1);
v_toPure_2965_ = lean_ctor_get(v_toApplicative_2963_, 1);
lean_inc(v_toBind_2964_);
lean_inc(v_toPure_2965_);
v___f_2966_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2966_, 0, v_toPure_2965_);
lean_closure_set(v___f_2966_, 1, v_toBind_2964_);
lean_closure_set(v___f_2966_, 2, v_mkInfo_2962_);
v___x_2967_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_2957_, v_inst_2958_, v_inst_2960_, v_x_2961_, v___f_2966_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(lean_object* v_treesSaved_2968_, lean_object* v_trees_2969_, lean_object* v_s_2970_){
_start:
{
uint8_t v_enabled_2971_; lean_object* v_assignment_2972_; lean_object* v_lazyAssignment_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2981_; 
v_enabled_2971_ = lean_ctor_get_uint8(v_s_2970_, sizeof(void*)*3);
v_assignment_2972_ = lean_ctor_get(v_s_2970_, 0);
v_lazyAssignment_2973_ = lean_ctor_get(v_s_2970_, 1);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_s_2970_);
if (v_isSharedCheck_2981_ == 0)
{
lean_object* v_unused_2982_; 
v_unused_2982_ = lean_ctor_get(v_s_2970_, 2);
lean_dec(v_unused_2982_);
v___x_2975_ = v_s_2970_;
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_lazyAssignment_2973_);
lean_inc(v_assignment_2972_);
lean_dec(v_s_2970_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2977_ = l_Lean_PersistentArray_append___redArg(v_treesSaved_2968_, v_trees_2969_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 2, v___x_2977_);
v___x_2979_ = v___x_2975_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_assignment_2972_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v_lazyAssignment_2973_);
lean_ctor_set(v_reuseFailAlloc_2980_, 2, v___x_2977_);
lean_ctor_set_uint8(v_reuseFailAlloc_2980_, sizeof(void*)*3, v_enabled_2971_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed(lean_object* v_treesSaved_2983_, lean_object* v_trees_2984_, lean_object* v_s_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1(v_treesSaved_2983_, v_trees_2984_, v_s_2985_);
lean_dec_ref(v_trees_2984_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0(lean_object* v_treesSaved_2987_, lean_object* v_modifyInfoState_2988_, lean_object* v_trees_2989_){
_start:
{
lean_object* v___f_2990_; lean_object* v___x_2991_; 
v___f_2990_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2990_, 0, v_treesSaved_2987_);
lean_closure_set(v___f_2990_, 1, v_trees_2989_);
v___x_2991_ = lean_apply_1(v_modifyInfoState_2988_, v___f_2990_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(lean_object* v_toPure_2992_, lean_object* v_tree_2993_, lean_object* v_____do__lift_2994_){
_start:
{
if (lean_obj_tag(v_____do__lift_2994_) == 0)
{
lean_object* v___x_2995_; 
v___x_2995_ = lean_apply_2(v_toPure_2992_, lean_box(0), v_tree_2993_);
return v___x_2995_;
}
else
{
lean_object* v_val_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v_val_2996_ = lean_ctor_get(v_____do__lift_2994_, 0);
lean_inc(v_val_2996_);
v___x_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2997_, 0, v_val_2996_);
lean_ctor_set(v___x_2997_, 1, v_tree_2993_);
v___x_2998_ = lean_apply_2(v_toPure_2992_, lean_box(0), v___x_2997_);
return v___x_2998_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed(lean_object* v_toPure_2999_, lean_object* v_tree_3000_, lean_object* v_____do__lift_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2(v_toPure_2999_, v_tree_3000_, v_____do__lift_3001_);
lean_dec(v_____do__lift_3001_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(lean_object* v_assignment_3003_, lean_object* v_toPure_3004_, lean_object* v_toBind_3005_, lean_object* v_ctx_x3f_3006_, lean_object* v_tree_3007_){
_start:
{
lean_object* v_tree_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; 
v_tree_3008_ = l_Lean_Elab_InfoTree_substitute(v_tree_3007_, v_assignment_3003_);
v___f_3009_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_3009_, 0, v_toPure_3004_);
lean_closure_set(v___f_3009_, 1, v_tree_3008_);
v___x_3010_ = lean_apply_4(v_toBind_3005_, lean_box(0), lean_box(0), v_ctx_x3f_3006_, v___f_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed(lean_object* v_assignment_3011_, lean_object* v_toPure_3012_, lean_object* v_toBind_3013_, lean_object* v_ctx_x3f_3014_, lean_object* v_tree_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3(v_assignment_3011_, v_toPure_3012_, v_toBind_3013_, v_ctx_x3f_3014_, v_tree_3015_);
lean_dec_ref(v_assignment_3011_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4(lean_object* v_toPure_3017_, lean_object* v_toBind_3018_, lean_object* v_ctx_x3f_3019_, lean_object* v_inst_3020_, lean_object* v___f_3021_, lean_object* v_st_3022_){
_start:
{
lean_object* v_assignment_3023_; lean_object* v_trees_3024_; lean_object* v___f_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_assignment_3023_ = lean_ctor_get(v_st_3022_, 0);
lean_inc_ref(v_assignment_3023_);
v_trees_3024_ = lean_ctor_get(v_st_3022_, 2);
lean_inc_ref(v_trees_3024_);
lean_dec_ref(v_st_3022_);
lean_inc(v_toBind_3018_);
v___f_3025_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_3025_, 0, v_assignment_3023_);
lean_closure_set(v___f_3025_, 1, v_toPure_3017_);
lean_closure_set(v___f_3025_, 2, v_toBind_3018_);
lean_closure_set(v___f_3025_, 3, v_ctx_x3f_3019_);
v___x_3026_ = l_Lean_PersistentArray_mapM___redArg(v_inst_3020_, v___f_3025_, v_trees_3024_);
v___x_3027_ = lean_apply_4(v_toBind_3018_, lean_box(0), lean_box(0), v___x_3026_, v___f_3021_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6(lean_object* v_toFunctor_3028_, lean_object* v_modifyInfoState_3029_, lean_object* v_toPure_3030_, lean_object* v_toBind_3031_, lean_object* v_ctx_x3f_3032_, lean_object* v_inst_3033_, lean_object* v_getInfoState_3034_, lean_object* v_inst_3035_, lean_object* v_x_3036_, lean_object* v___f_3037_, lean_object* v_treesSaved_3038_){
_start:
{
lean_object* v_map_3039_; lean_object* v___f_3040_; lean_object* v___f_3041_; lean_object* v___f_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v_map_3039_ = lean_ctor_get(v_toFunctor_3028_, 0);
lean_inc(v_map_3039_);
lean_dec_ref(v_toFunctor_3028_);
v___f_3040_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3040_, 0, v_treesSaved_3038_);
lean_closure_set(v___f_3040_, 1, v_modifyInfoState_3029_);
lean_inc(v_toBind_3031_);
v___f_3041_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__4), 6, 5);
lean_closure_set(v___f_3041_, 0, v_toPure_3030_);
lean_closure_set(v___f_3041_, 1, v_toBind_3031_);
lean_closure_set(v___f_3041_, 2, v_ctx_x3f_3032_);
lean_closure_set(v___f_3041_, 3, v_inst_3033_);
lean_closure_set(v___f_3041_, 4, v___f_3040_);
v___f_3042_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3042_, 0, v_toBind_3031_);
lean_closure_set(v___f_3042_, 1, v_getInfoState_3034_);
lean_closure_set(v___f_3042_, 2, v___f_3041_);
v___x_3043_ = lean_apply_4(v_inst_3035_, lean_box(0), lean_box(0), v_x_3036_, v___f_3042_);
v___x_3044_ = lean_apply_4(v_map_3039_, lean_box(0), lean_box(0), v___f_3037_, v___x_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_inst_3047_, lean_object* v_x_3048_, lean_object* v_ctx_x3f_3049_){
_start:
{
lean_object* v_toApplicative_3050_; lean_object* v_toBind_3051_; lean_object* v_getInfoState_3052_; lean_object* v_modifyInfoState_3053_; lean_object* v_toFunctor_3054_; lean_object* v_toPure_3055_; lean_object* v___f_3056_; lean_object* v___f_3057_; lean_object* v___f_3058_; lean_object* v___x_3059_; 
v_toApplicative_3050_ = lean_ctor_get(v_inst_3045_, 0);
v_toBind_3051_ = lean_ctor_get(v_inst_3045_, 1);
lean_inc_n(v_toBind_3051_, 3);
v_getInfoState_3052_ = lean_ctor_get(v_inst_3046_, 0);
lean_inc_n(v_getInfoState_3052_, 2);
v_modifyInfoState_3053_ = lean_ctor_get(v_inst_3046_, 1);
v_toFunctor_3054_ = lean_ctor_get(v_toApplicative_3050_, 0);
v_toPure_3055_ = lean_ctor_get(v_toApplicative_3050_, 1);
v___f_3056_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
lean_inc(v_x_3048_);
lean_inc_ref(v_inst_3045_);
lean_inc(v_toPure_3055_);
lean_inc(v_modifyInfoState_3053_);
lean_inc_ref(v_toFunctor_3054_);
v___f_3057_ = lean_alloc_closure((void*)(l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg___lam__6), 11, 10);
lean_closure_set(v___f_3057_, 0, v_toFunctor_3054_);
lean_closure_set(v___f_3057_, 1, v_modifyInfoState_3053_);
lean_closure_set(v___f_3057_, 2, v_toPure_3055_);
lean_closure_set(v___f_3057_, 3, v_toBind_3051_);
lean_closure_set(v___f_3057_, 4, v_ctx_x3f_3049_);
lean_closure_set(v___f_3057_, 5, v_inst_3045_);
lean_closure_set(v___f_3057_, 6, v_getInfoState_3052_);
lean_closure_set(v___f_3057_, 7, v_inst_3047_);
lean_closure_set(v___f_3057_, 8, v_x_3048_);
lean_closure_set(v___f_3057_, 9, v___f_3056_);
v___f_3058_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3058_, 0, v_x_3048_);
lean_closure_set(v___f_3058_, 1, v_inst_3045_);
lean_closure_set(v___f_3058_, 2, v_inst_3046_);
lean_closure_set(v___f_3058_, 3, v_toBind_3051_);
lean_closure_set(v___f_3058_, 4, v___f_3057_);
v___x_3059_ = lean_apply_4(v_toBind_3051_, lean_box(0), lean_box(0), v_getInfoState_3052_, v___f_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext(lean_object* v_m_3060_, lean_object* v_inst_3061_, lean_object* v_inst_3062_, lean_object* v_00_u03b1_3063_, lean_object* v_inst_3064_, lean_object* v_x_3065_, lean_object* v_ctx_x3f_3066_){
_start:
{
lean_object* v___x_3067_; 
v___x_3067_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3061_, v_inst_3062_, v_inst_3064_, v_x_3065_, v_ctx_x3f_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg___lam__0(lean_object* v_toPure_3068_, lean_object* v_____do__lift_3069_){
_start:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3070_, 0, v_____do__lift_3069_);
v___x_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3070_);
v___x_3072_ = lean_apply_2(v_toPure_3068_, lean_box(0), v___x_3071_);
return v___x_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___redArg(lean_object* v_inst_3073_, lean_object* v_inst_3074_, lean_object* v_inst_3075_, lean_object* v_inst_3076_, lean_object* v_inst_3077_, lean_object* v_inst_3078_, lean_object* v_inst_3079_, lean_object* v_inst_3080_, lean_object* v_inst_3081_, lean_object* v_x_3082_){
_start:
{
lean_object* v_toApplicative_3083_; lean_object* v_toBind_3084_; lean_object* v_toPure_3085_; lean_object* v___x_3086_; lean_object* v___f_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v_toApplicative_3083_ = lean_ctor_get(v_inst_3073_, 0);
v_toBind_3084_ = lean_ctor_get(v_inst_3073_, 1);
v_toPure_3085_ = lean_ctor_get(v_toApplicative_3083_, 1);
lean_inc_ref(v_inst_3073_);
v___x_3086_ = l_Lean_Elab_CommandContextInfo_save___redArg(v_inst_3073_, v_inst_3077_, v_inst_3079_, v_inst_3078_, v_inst_3080_, v_inst_3075_, v_inst_3081_);
lean_inc(v_toPure_3085_);
v___f_3087_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3087_, 0, v_toPure_3085_);
lean_inc(v_toBind_3084_);
v___x_3088_ = lean_apply_4(v_toBind_3084_, lean_box(0), lean_box(0), v___x_3086_, v___f_3087_);
v___x_3089_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3073_, v_inst_3074_, v_inst_3076_, v_x_3082_, v___x_3088_);
return v___x_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext(lean_object* v_m_3090_, lean_object* v_inst_3091_, lean_object* v_inst_3092_, lean_object* v_00_u03b1_3093_, lean_object* v_inst_3094_, lean_object* v_inst_3095_, lean_object* v_inst_3096_, lean_object* v_inst_3097_, lean_object* v_inst_3098_, lean_object* v_inst_3099_, lean_object* v_inst_3100_, lean_object* v_x_3101_){
_start:
{
lean_object* v___x_3102_; 
v___x_3102_ = l_Lean_Elab_withSaveInfoContext___redArg(v_inst_3091_, v_inst_3092_, v_inst_3094_, v_inst_3095_, v_inst_3096_, v_inst_3097_, v_inst_3098_, v_inst_3099_, v_inst_3100_, v_x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0(lean_object* v_toPure_3103_, lean_object* v_____x_3104_){
_start:
{
if (lean_obj_tag(v_____x_3104_) == 1)
{
lean_object* v_val_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3114_; 
v_val_3105_ = lean_ctor_get(v_____x_3104_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v_____x_3104_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3107_ = v_____x_3104_;
v_isShared_3108_ = v_isSharedCheck_3114_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_val_3105_);
lean_dec(v_____x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3114_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_val_3105_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v___x_3109_);
v___x_3111_ = v___x_3107_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3109_);
v___x_3111_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_apply_2(v_toPure_3103_, lean_box(0), v___x_3111_);
return v___x_3112_;
}
}
}
else
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec(v_____x_3104_);
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_apply_2(v_toPure_3103_, lean_box(0), v___x_3115_);
return v___x_3116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext___redArg(lean_object* v_inst_3117_, lean_object* v_inst_3118_, lean_object* v_inst_3119_, lean_object* v_inst_3120_, lean_object* v_x_3121_){
_start:
{
lean_object* v_toApplicative_3122_; lean_object* v_toBind_3123_; lean_object* v_toPure_3124_; lean_object* v___f_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_toApplicative_3122_ = lean_ctor_get(v_inst_3117_, 0);
v_toBind_3123_ = lean_ctor_get(v_inst_3117_, 1);
v_toPure_3124_ = lean_ctor_get(v_toApplicative_3122_, 1);
lean_inc(v_toPure_3124_);
v___f_3125_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveParentDeclInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3125_, 0, v_toPure_3124_);
lean_inc(v_toBind_3123_);
v___x_3126_ = lean_apply_4(v_toBind_3123_, lean_box(0), lean_box(0), v_inst_3120_, v___f_3125_);
v___x_3127_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3117_, v_inst_3118_, v_inst_3119_, v_x_3121_, v___x_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveParentDeclInfoContext(lean_object* v_m_3128_, lean_object* v_inst_3129_, lean_object* v_inst_3130_, lean_object* v_00_u03b1_3131_, lean_object* v_inst_3132_, lean_object* v_inst_3133_, lean_object* v_x_3134_){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = l_Lean_Elab_withSaveParentDeclInfoContext___redArg(v_inst_3129_, v_inst_3130_, v_inst_3132_, v_inst_3133_, v_x_3134_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0(lean_object* v_toPure_3136_, lean_object* v_autoImplicits_3137_){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3138_, 0, v_autoImplicits_3137_);
v___x_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
v___x_3140_ = lean_apply_2(v_toPure_3136_, lean_box(0), v___x_3139_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(lean_object* v_inst_3141_, lean_object* v_inst_3142_, lean_object* v_inst_3143_, lean_object* v_inst_3144_, lean_object* v_x_3145_){
_start:
{
lean_object* v_toApplicative_3146_; lean_object* v_toBind_3147_; lean_object* v_toPure_3148_; lean_object* v___f_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v_toApplicative_3146_ = lean_ctor_get(v_inst_3141_, 0);
v_toBind_3147_ = lean_ctor_get(v_inst_3141_, 1);
v_toPure_3148_ = lean_ctor_get(v_toApplicative_3146_, 1);
lean_inc(v_toPure_3148_);
v___f_3149_ = lean_alloc_closure((void*)(l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3149_, 0, v_toPure_3148_);
lean_inc(v_toBind_3147_);
v___x_3150_ = lean_apply_4(v_toBind_3147_, lean_box(0), lean_box(0), v_inst_3144_, v___f_3149_);
v___x_3151_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___redArg(v_inst_3141_, v_inst_3142_, v_inst_3143_, v_x_3145_, v___x_3150_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveAutoImplicitInfoContext(lean_object* v_m_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v_00_u03b1_3155_, lean_object* v_inst_3156_, lean_object* v_inst_3157_, lean_object* v_x_3158_){
_start:
{
lean_object* v___x_3159_; 
v___x_3159_ = l_Lean_Elab_withSaveAutoImplicitInfoContext___redArg(v_inst_3153_, v_inst_3154_, v_inst_3156_, v_inst_3157_, v_x_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(lean_object* v___x_3160_, lean_object* v___x_3161_, lean_object* v_mvarId_3162_, lean_object* v_toPure_3163_, lean_object* v_____do__lift_3164_){
_start:
{
lean_object* v_assignment_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_assignment_3165_ = lean_ctor_get(v_____do__lift_3164_, 0);
v___x_3166_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_3160_, v___x_3161_, v_assignment_3165_, v_mvarId_3162_);
v___x_3167_ = lean_apply_2(v_toPure_3163_, lean_box(0), v___x_3166_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed(lean_object* v___x_3168_, lean_object* v___x_3169_, lean_object* v_mvarId_3170_, lean_object* v_toPure_3171_, lean_object* v_____do__lift_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0(v___x_3168_, v___x_3169_, v_mvarId_3170_, v_toPure_3171_, v_____do__lift_3172_);
lean_dec_ref(v_____do__lift_3172_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(lean_object* v_inst_3176_, lean_object* v_inst_3177_, lean_object* v_mvarId_3178_){
_start:
{
lean_object* v_toApplicative_3179_; lean_object* v_toBind_3180_; lean_object* v_getInfoState_3181_; lean_object* v_toPure_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___f_3185_; lean_object* v___x_3186_; 
v_toApplicative_3179_ = lean_ctor_get(v_inst_3176_, 0);
lean_inc_ref(v_toApplicative_3179_);
v_toBind_3180_ = lean_ctor_get(v_inst_3176_, 1);
lean_inc(v_toBind_3180_);
lean_dec_ref(v_inst_3176_);
v_getInfoState_3181_ = lean_ctor_get(v_inst_3177_, 0);
lean_inc(v_getInfoState_3181_);
lean_dec_ref(v_inst_3177_);
v_toPure_3182_ = lean_ctor_get(v_toApplicative_3179_, 1);
lean_inc(v_toPure_3182_);
lean_dec_ref(v_toApplicative_3179_);
v___x_3183_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3184_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___f_3185_ = lean_alloc_closure((void*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3185_, 0, v___x_3183_);
lean_closure_set(v___f_3185_, 1, v___x_3184_);
lean_closure_set(v___f_3185_, 2, v_mvarId_3178_);
lean_closure_set(v___f_3185_, 3, v_toPure_3182_);
v___x_3186_ = lean_apply_4(v_toBind_3180_, lean_box(0), lean_box(0), v_getInfoState_3181_, v___f_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoHoleIdAssignment_x3f(lean_object* v_m_3187_, lean_object* v_inst_3188_, lean_object* v_inst_3189_, lean_object* v_mvarId_3190_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(v_inst_3188_, v_inst_3189_, v_mvarId_3190_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__0(lean_object* v___x_3192_, lean_object* v___x_3193_, lean_object* v_mvarId_3194_, lean_object* v_infoTree_3195_, lean_object* v_s_3196_){
_start:
{
uint8_t v_enabled_3197_; lean_object* v_assignment_3198_; lean_object* v_lazyAssignment_3199_; lean_object* v_trees_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3208_; 
v_enabled_3197_ = lean_ctor_get_uint8(v_s_3196_, sizeof(void*)*3);
v_assignment_3198_ = lean_ctor_get(v_s_3196_, 0);
v_lazyAssignment_3199_ = lean_ctor_get(v_s_3196_, 1);
v_trees_3200_ = lean_ctor_get(v_s_3196_, 2);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_s_3196_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3202_ = v_s_3196_;
v_isShared_3203_ = v_isSharedCheck_3208_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_trees_3200_);
lean_inc(v_lazyAssignment_3199_);
lean_inc(v_assignment_3198_);
lean_dec(v_s_3196_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3208_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3204_; lean_object* v___x_3206_; 
v___x_3204_ = l_Lean_PersistentHashMap_insert___redArg(v___x_3192_, v___x_3193_, v_assignment_3198_, v_mvarId_3194_, v_infoTree_3195_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 0, v___x_3204_);
v___x_3206_ = v___x_3202_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3204_);
lean_ctor_set(v_reuseFailAlloc_3207_, 1, v_lazyAssignment_3199_);
lean_ctor_set(v_reuseFailAlloc_3207_, 2, v_trees_3200_);
lean_ctor_set_uint8(v_reuseFailAlloc_3207_, sizeof(void*)*3, v_enabled_3197_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3212_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__2));
v___x_3213_ = lean_unsigned_to_nat(2u);
v___x_3214_ = lean_unsigned_to_nat(380u);
v___x_3215_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__1));
v___x_3216_ = ((lean_object*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__0));
v___x_3217_ = l_mkPanicMessageWithDecl(v___x_3216_, v___x_3215_, v___x_3214_, v___x_3213_, v___x_3212_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1(lean_object* v_inst_3218_, lean_object* v___f_3219_, lean_object* v___x_3220_, lean_object* v_____do__lift_3221_){
_start:
{
if (lean_obj_tag(v_____do__lift_3221_) == 0)
{
lean_object* v_modifyInfoState_3222_; lean_object* v___x_3223_; 
v_modifyInfoState_3222_ = lean_ctor_get(v_inst_3218_, 1);
lean_inc(v_modifyInfoState_3222_);
lean_dec_ref(v_inst_3218_);
v___x_3223_ = lean_apply_1(v_modifyInfoState_3222_, v___f_3219_);
return v___x_3223_;
}
else
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_dec_ref(v___f_3219_);
lean_dec_ref(v_inst_3218_);
v___x_3224_ = lean_obj_once(&l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3, &l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3_once, _init_l_Lean_Elab_assignInfoHoleId___redArg___lam__1___closed__3);
v___x_3225_ = l_panic___redArg(v___x_3220_, v___x_3224_);
return v___x_3225_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed(lean_object* v_inst_3226_, lean_object* v___f_3227_, lean_object* v___x_3228_, lean_object* v_____do__lift_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l_Lean_Elab_assignInfoHoleId___redArg___lam__1(v_inst_3226_, v___f_3227_, v___x_3228_, v_____do__lift_3229_);
lean_dec(v_____do__lift_3229_);
lean_dec(v___x_3228_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId___redArg(lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_mvarId_3233_, lean_object* v_infoTree_3234_){
_start:
{
lean_object* v_toBind_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___f_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___f_3242_; lean_object* v___x_3243_; 
v_toBind_3235_ = lean_ctor_get(v_inst_3231_, 1);
lean_inc(v_toBind_3235_);
v___x_3236_ = lean_box(0);
v___x_3237_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3238_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
lean_inc(v_mvarId_3233_);
v___f_3239_ = lean_alloc_closure((void*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__0), 5, 4);
lean_closure_set(v___f_3239_, 0, v___x_3237_);
lean_closure_set(v___f_3239_, 1, v___x_3238_);
lean_closure_set(v___f_3239_, 2, v_mvarId_3233_);
lean_closure_set(v___f_3239_, 3, v_infoTree_3234_);
lean_inc_ref(v_inst_3232_);
lean_inc_ref(v_inst_3231_);
v___x_3240_ = l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg(v_inst_3231_, v_inst_3232_, v_mvarId_3233_);
v___x_3241_ = l_instInhabitedOfMonad___redArg(v_inst_3231_, v___x_3236_);
v___f_3242_ = lean_alloc_closure((void*)(l_Lean_Elab_assignInfoHoleId___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3242_, 0, v_inst_3232_);
lean_closure_set(v___f_3242_, 1, v___f_3239_);
lean_closure_set(v___f_3242_, 2, v___x_3241_);
v___x_3243_ = lean_apply_4(v_toBind_3235_, lean_box(0), lean_box(0), v___x_3240_, v___f_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_assignInfoHoleId(lean_object* v_m_3244_, lean_object* v_inst_3245_, lean_object* v_inst_3246_, lean_object* v_mvarId_3247_, lean_object* v_infoTree_3248_){
_start:
{
lean_object* v___x_3249_; 
v___x_3249_ = l_Lean_Elab_assignInfoHoleId___redArg(v_inst_3245_, v_inst_3246_, v_mvarId_3247_, v_infoTree_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0(lean_object* v_stx_3250_, lean_object* v_output_3251_, lean_object* v_toPure_3252_, lean_object* v_____do__lift_3253_){
_start:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3254_, 0, v_____do__lift_3253_);
lean_ctor_set(v___x_3254_, 1, v_stx_3250_);
lean_ctor_set(v___x_3254_, 2, v_output_3251_);
v___x_3255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
v___x_3256_ = lean_apply_2(v_toPure_3252_, lean_box(0), v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___redArg(lean_object* v_inst_3257_, lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_stx_3261_, lean_object* v_output_3262_, lean_object* v_x_3263_){
_start:
{
lean_object* v_toApplicative_3264_; lean_object* v_toBind_3265_; lean_object* v_toPure_3266_; lean_object* v___f_3267_; lean_object* v_mkInfo_3268_; lean_object* v___f_3269_; lean_object* v___x_3270_; 
v_toApplicative_3264_ = lean_ctor_get(v_inst_3258_, 0);
v_toBind_3265_ = lean_ctor_get(v_inst_3258_, 1);
v_toPure_3266_ = lean_ctor_get(v_toApplicative_3264_, 1);
lean_inc_n(v_toPure_3266_, 2);
v___f_3267_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3267_, 0, v_stx_3261_);
lean_closure_set(v___f_3267_, 1, v_output_3262_);
lean_closure_set(v___f_3267_, 2, v_toPure_3266_);
lean_inc_n(v_toBind_3265_, 2);
v_mkInfo_3268_ = lean_apply_4(v_toBind_3265_, lean_box(0), lean_box(0), v_inst_3260_, v___f_3267_);
v___f_3269_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3269_, 0, v_toPure_3266_);
lean_closure_set(v___f_3269_, 1, v_toBind_3265_);
lean_closure_set(v___f_3269_, 2, v_mkInfo_3268_);
v___x_3270_ = l_Lean_Elab_withInfoTreeContext___redArg(v_inst_3258_, v_inst_3259_, v_inst_3257_, v_x_3263_, v___f_3269_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo(lean_object* v_m_3271_, lean_object* v_00_u03b1_3272_, lean_object* v_inst_3273_, lean_object* v_inst_3274_, lean_object* v_inst_3275_, lean_object* v_inst_3276_, lean_object* v_stx_3277_, lean_object* v_output_3278_, lean_object* v_x_3279_){
_start:
{
lean_object* v___x_3280_; 
v___x_3280_ = l_Lean_Elab_withMacroExpansionInfo___redArg(v_inst_3273_, v_inst_3274_, v_inst_3275_, v_inst_3276_, v_stx_3277_, v_output_3278_, v_x_3279_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1(lean_object* v_treesSaved_3281_, lean_object* v___x_3282_, lean_object* v___x_3283_, lean_object* v___x_3284_, lean_object* v_mvarId_3285_, lean_object* v_s_3286_){
_start:
{
lean_object* v_trees_3287_; uint8_t v_enabled_3288_; lean_object* v_assignment_3289_; lean_object* v_lazyAssignment_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3307_; 
v_trees_3287_ = lean_ctor_get(v_s_3286_, 2);
v_enabled_3288_ = lean_ctor_get_uint8(v_s_3286_, sizeof(void*)*3);
v_assignment_3289_ = lean_ctor_get(v_s_3286_, 0);
v_lazyAssignment_3290_ = lean_ctor_get(v_s_3286_, 1);
v_isSharedCheck_3307_ = !lean_is_exclusive(v_s_3286_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3292_ = v_s_3286_;
v_isShared_3293_ = v_isSharedCheck_3307_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_trees_3287_);
lean_inc(v_lazyAssignment_3290_);
lean_inc(v_assignment_3289_);
lean_dec(v_s_3286_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3307_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v_size_3294_; lean_object* v___x_3295_; uint8_t v___x_3296_; 
v_size_3294_ = lean_ctor_get(v_trees_3287_, 2);
v___x_3295_ = lean_unsigned_to_nat(0u);
v___x_3296_ = lean_nat_dec_lt(v___x_3295_, v_size_3294_);
if (v___x_3296_ == 0)
{
lean_object* v___x_3298_; 
lean_dec_ref(v_trees_3287_);
lean_dec(v_mvarId_3285_);
lean_dec_ref(v___x_3284_);
lean_dec_ref(v___x_3283_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 2, v_treesSaved_3281_);
v___x_3298_ = v___x_3292_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_assignment_3289_);
lean_ctor_set(v_reuseFailAlloc_3299_, 1, v_lazyAssignment_3290_);
lean_ctor_set(v_reuseFailAlloc_3299_, 2, v_treesSaved_3281_);
lean_ctor_set_uint8(v_reuseFailAlloc_3299_, sizeof(void*)*3, v_enabled_3288_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
else
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3300_ = lean_unsigned_to_nat(1u);
v___x_3301_ = lean_nat_sub(v_size_3294_, v___x_3300_);
v___x_3302_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3282_, v_trees_3287_, v___x_3301_);
lean_dec(v___x_3301_);
lean_dec_ref(v_trees_3287_);
v___x_3303_ = l_Lean_PersistentHashMap_insert___redArg(v___x_3283_, v___x_3284_, v_assignment_3289_, v_mvarId_3285_, v___x_3302_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 2, v_treesSaved_3281_);
lean_ctor_set(v___x_3292_, 0, v___x_3303_);
v___x_3305_ = v___x_3292_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3306_, 1, v_lazyAssignment_3290_);
lean_ctor_set(v_reuseFailAlloc_3306_, 2, v_treesSaved_3281_);
lean_ctor_set_uint8(v_reuseFailAlloc_3306_, sizeof(void*)*3, v_enabled_3288_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__1___boxed(lean_object* v_treesSaved_3308_, lean_object* v___x_3309_, lean_object* v___x_3310_, lean_object* v___x_3311_, lean_object* v_mvarId_3312_, lean_object* v_s_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_Elab_withInfoHole___redArg___lam__1(v_treesSaved_3308_, v___x_3309_, v___x_3310_, v___x_3311_, v_mvarId_3312_, v_s_3313_);
lean_dec_ref(v___x_3309_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0(lean_object* v_modifyInfoState_3315_, lean_object* v___f_3316_, lean_object* v_x_3317_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = lean_apply_1(v_modifyInfoState_3315_, v___f_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__0___boxed(lean_object* v_modifyInfoState_3319_, lean_object* v___f_3320_, lean_object* v_x_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Lean_Elab_withInfoHole___redArg___lam__0(v_modifyInfoState_3319_, v___f_3320_, v_x_3321_);
lean_dec(v_x_3321_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg___lam__2(lean_object* v_toFunctor_3323_, lean_object* v___x_3324_, lean_object* v___x_3325_, lean_object* v___x_3326_, lean_object* v_mvarId_3327_, lean_object* v_modifyInfoState_3328_, lean_object* v_inst_3329_, lean_object* v_x_3330_, lean_object* v___f_3331_, lean_object* v_treesSaved_3332_){
_start:
{
lean_object* v_map_3333_; lean_object* v___f_3334_; lean_object* v___f_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_map_3333_ = lean_ctor_get(v_toFunctor_3323_, 0);
lean_inc(v_map_3333_);
lean_dec_ref(v_toFunctor_3323_);
v___f_3334_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_3334_, 0, v_treesSaved_3332_);
lean_closure_set(v___f_3334_, 1, v___x_3324_);
lean_closure_set(v___f_3334_, 2, v___x_3325_);
lean_closure_set(v___f_3334_, 3, v___x_3326_);
lean_closure_set(v___f_3334_, 4, v_mvarId_3327_);
v___f_3335_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3335_, 0, v_modifyInfoState_3328_);
lean_closure_set(v___f_3335_, 1, v___f_3334_);
v___x_3336_ = lean_apply_4(v_inst_3329_, lean_box(0), lean_box(0), v_x_3330_, v___f_3335_);
v___x_3337_ = lean_apply_4(v_map_3333_, lean_box(0), lean_box(0), v___f_3331_, v___x_3336_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole___redArg(lean_object* v_inst_3338_, lean_object* v_inst_3339_, lean_object* v_inst_3340_, lean_object* v_mvarId_3341_, lean_object* v_x_3342_){
_start:
{
lean_object* v_toApplicative_3343_; lean_object* v_toBind_3344_; lean_object* v_getInfoState_3345_; lean_object* v_modifyInfoState_3346_; lean_object* v_toFunctor_3347_; lean_object* v___f_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___f_3352_; lean_object* v___f_3353_; lean_object* v___x_3354_; 
v_toApplicative_3343_ = lean_ctor_get(v_inst_3339_, 0);
v_toBind_3344_ = lean_ctor_get(v_inst_3339_, 1);
lean_inc_n(v_toBind_3344_, 2);
v_getInfoState_3345_ = lean_ctor_get(v_inst_3340_, 0);
lean_inc(v_getInfoState_3345_);
v_modifyInfoState_3346_ = lean_ctor_get(v_inst_3340_, 1);
v_toFunctor_3347_ = lean_ctor_get(v_toApplicative_3343_, 0);
v___f_3348_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
v___x_3349_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3350_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___x_3351_ = l_Lean_Elab_instInhabitedInfoTree_default;
lean_inc(v_x_3342_);
lean_inc(v_modifyInfoState_3346_);
lean_inc_ref(v_toFunctor_3347_);
v___f_3352_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3352_, 0, v_toFunctor_3347_);
lean_closure_set(v___f_3352_, 1, v___x_3351_);
lean_closure_set(v___f_3352_, 2, v___x_3349_);
lean_closure_set(v___f_3352_, 3, v___x_3350_);
lean_closure_set(v___f_3352_, 4, v_mvarId_3341_);
lean_closure_set(v___f_3352_, 5, v_modifyInfoState_3346_);
lean_closure_set(v___f_3352_, 6, v_inst_3338_);
lean_closure_set(v___f_3352_, 7, v_x_3342_);
lean_closure_set(v___f_3352_, 8, v___f_3348_);
v___f_3353_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3353_, 0, v_x_3342_);
lean_closure_set(v___f_3353_, 1, v_inst_3339_);
lean_closure_set(v___f_3353_, 2, v_inst_3340_);
lean_closure_set(v___f_3353_, 3, v_toBind_3344_);
lean_closure_set(v___f_3353_, 4, v___f_3352_);
v___x_3354_ = lean_apply_4(v_toBind_3344_, lean_box(0), lean_box(0), v_getInfoState_3345_, v___f_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoHole(lean_object* v_m_3355_, lean_object* v_00_u03b1_3356_, lean_object* v_inst_3357_, lean_object* v_inst_3358_, lean_object* v_inst_3359_, lean_object* v_mvarId_3360_, lean_object* v_x_3361_){
_start:
{
lean_object* v_toApplicative_3362_; lean_object* v_toBind_3363_; lean_object* v_getInfoState_3364_; lean_object* v_modifyInfoState_3365_; lean_object* v_toFunctor_3366_; lean_object* v___f_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___f_3371_; lean_object* v___f_3372_; lean_object* v___x_3373_; 
v_toApplicative_3362_ = lean_ctor_get(v_inst_3358_, 0);
v_toBind_3363_ = lean_ctor_get(v_inst_3358_, 1);
lean_inc_n(v_toBind_3363_, 2);
v_getInfoState_3364_ = lean_ctor_get(v_inst_3359_, 0);
lean_inc(v_getInfoState_3364_);
v_modifyInfoState_3365_ = lean_ctor_get(v_inst_3359_, 1);
v_toFunctor_3366_ = lean_ctor_get(v_toApplicative_3362_, 0);
v___f_3367_ = ((lean_object*)(l_Lean_Elab_withInfoContext_x27___redArg___closed__0));
v___x_3368_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__0));
v___x_3369_ = ((lean_object*)(l_Lean_Elab_getInfoHoleIdAssignment_x3f___redArg___closed__1));
v___x_3370_ = l_Lean_Elab_instInhabitedInfoTree_default;
lean_inc(v_x_3361_);
lean_inc(v_modifyInfoState_3365_);
lean_inc_ref(v_toFunctor_3366_);
v___f_3371_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoHole___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3371_, 0, v_toFunctor_3366_);
lean_closure_set(v___f_3371_, 1, v___x_3370_);
lean_closure_set(v___f_3371_, 2, v___x_3368_);
lean_closure_set(v___f_3371_, 3, v___x_3369_);
lean_closure_set(v___f_3371_, 4, v_mvarId_3360_);
lean_closure_set(v___f_3371_, 5, v_modifyInfoState_3365_);
lean_closure_set(v___f_3371_, 6, v_inst_3357_);
lean_closure_set(v___f_3371_, 7, v_x_3361_);
lean_closure_set(v___f_3371_, 8, v___f_3367_);
v___f_3372_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3372_, 0, v_x_3361_);
lean_closure_set(v___f_3372_, 1, v_inst_3358_);
lean_closure_set(v___f_3372_, 2, v_inst_3359_);
lean_closure_set(v___f_3372_, 3, v_toBind_3363_);
lean_closure_set(v___f_3372_, 4, v___f_3371_);
v___x_3373_ = lean_apply_4(v_toBind_3363_, lean_box(0), lean_box(0), v_getInfoState_3364_, v___f_3372_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0(uint8_t v_flag_3374_, lean_object* v_s_3375_){
_start:
{
lean_object* v_assignment_3376_; lean_object* v_lazyAssignment_3377_; lean_object* v_trees_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3385_; 
v_assignment_3376_ = lean_ctor_get(v_s_3375_, 0);
v_lazyAssignment_3377_ = lean_ctor_get(v_s_3375_, 1);
v_trees_3378_ = lean_ctor_get(v_s_3375_, 2);
v_isSharedCheck_3385_ = !lean_is_exclusive(v_s_3375_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v_s_3375_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_trees_3378_);
lean_inc(v_lazyAssignment_3377_);
lean_inc(v_assignment_3376_);
lean_dec(v_s_3375_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_assignment_3376_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_lazyAssignment_3377_);
lean_ctor_set(v_reuseFailAlloc_3384_, 2, v_trees_3378_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
lean_ctor_set_uint8(v___x_3383_, sizeof(void*)*3, v_flag_3374_);
return v___x_3383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed(lean_object* v_flag_3386_, lean_object* v_s_3387_){
_start:
{
uint8_t v_flag_boxed_3388_; lean_object* v_res_3389_; 
v_flag_boxed_3388_ = lean_unbox(v_flag_3386_);
v_res_3389_ = l_Lean_Elab_enableInfoTree___redArg___lam__0(v_flag_boxed_3388_, v_s_3387_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg(lean_object* v_inst_3390_, uint8_t v_flag_3391_){
_start:
{
lean_object* v_modifyInfoState_3392_; lean_object* v___x_3393_; lean_object* v___f_3394_; lean_object* v___x_3395_; 
v_modifyInfoState_3392_ = lean_ctor_get(v_inst_3390_, 1);
lean_inc(v_modifyInfoState_3392_);
lean_dec_ref(v_inst_3390_);
v___x_3393_ = lean_box(v_flag_3391_);
v___f_3394_ = lean_alloc_closure((void*)(l_Lean_Elab_enableInfoTree___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3394_, 0, v___x_3393_);
v___x_3395_ = lean_apply_1(v_modifyInfoState_3392_, v___f_3394_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___redArg___boxed(lean_object* v_inst_3396_, lean_object* v_flag_3397_){
_start:
{
uint8_t v_flag_boxed_3398_; lean_object* v_res_3399_; 
v_flag_boxed_3398_ = lean_unbox(v_flag_3397_);
v_res_3399_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3396_, v_flag_boxed_3398_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree(lean_object* v_m_3400_, lean_object* v_inst_3401_, uint8_t v_flag_3402_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3401_, v_flag_3402_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___boxed(lean_object* v_m_3404_, lean_object* v_inst_3405_, lean_object* v_flag_3406_){
_start:
{
uint8_t v_flag_boxed_3407_; lean_object* v_res_3408_; 
v_flag_boxed_3407_ = lean_unbox(v_flag_3406_);
v_res_3408_ = l_Lean_Elab_enableInfoTree(v_m_3404_, v_inst_3405_, v_flag_boxed_3407_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0(lean_object* v_x_3409_){
_start:
{
lean_object* v_fst_3410_; 
v_fst_3410_ = lean_ctor_get(v_x_3409_, 0);
lean_inc(v_fst_3410_);
return v_fst_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__0___boxed(lean_object* v_x_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__0(v_x_3411_);
lean_dec_ref(v_x_3411_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1(lean_object* v_x_3413_, lean_object* v_____r_3414_){
_start:
{
lean_inc(v_x_3413_);
return v_x_3413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed(lean_object* v_x_3415_, lean_object* v_____r_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__1(v_x_3415_, v_____r_3416_);
lean_dec(v_x_3415_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2(lean_object* v___x_3418_, lean_object* v_x_3419_){
_start:
{
lean_inc(v___x_3418_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed(lean_object* v___x_3420_, lean_object* v_x_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__2(v___x_3420_, v_x_3421_);
lean_dec(v_x_3421_);
lean_dec(v___x_3420_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3(lean_object* v_toFunctor_3423_, lean_object* v_inst_3424_, uint8_t v_flag_3425_, lean_object* v_toBind_3426_, lean_object* v___f_3427_, lean_object* v_inst_3428_, lean_object* v___f_3429_, lean_object* v_____do__lift_3430_){
_start:
{
uint8_t v_enabled_3431_; lean_object* v_map_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___f_3436_; lean_object* v_y_3437_; lean_object* v___x_3438_; 
v_enabled_3431_ = lean_ctor_get_uint8(v_____do__lift_3430_, sizeof(void*)*3);
v_map_3432_ = lean_ctor_get(v_toFunctor_3423_, 0);
lean_inc(v_map_3432_);
lean_dec_ref(v_toFunctor_3423_);
lean_inc_ref(v_inst_3424_);
v___x_3433_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3424_, v_flag_3425_);
v___x_3434_ = lean_apply_4(v_toBind_3426_, lean_box(0), lean_box(0), v___x_3433_, v___f_3427_);
v___x_3435_ = l_Lean_Elab_enableInfoTree___redArg(v_inst_3424_, v_enabled_3431_);
v___f_3436_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_3436_, 0, v___x_3435_);
v_y_3437_ = lean_apply_4(v_inst_3428_, lean_box(0), lean_box(0), v___x_3434_, v___f_3436_);
v___x_3438_ = lean_apply_4(v_map_3432_, lean_box(0), lean_box(0), v___f_3429_, v_y_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed(lean_object* v_toFunctor_3439_, lean_object* v_inst_3440_, lean_object* v_flag_3441_, lean_object* v_toBind_3442_, lean_object* v___f_3443_, lean_object* v_inst_3444_, lean_object* v___f_3445_, lean_object* v_____do__lift_3446_){
_start:
{
uint8_t v_flag_boxed_3447_; lean_object* v_res_3448_; 
v_flag_boxed_3447_ = lean_unbox(v_flag_3441_);
v_res_3448_ = l_Lean_Elab_withEnableInfoTree___redArg___lam__3(v_toFunctor_3439_, v_inst_3440_, v_flag_boxed_3447_, v_toBind_3442_, v___f_3443_, v_inst_3444_, v___f_3445_, v_____do__lift_3446_);
lean_dec_ref(v_____do__lift_3446_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg(lean_object* v_inst_3450_, lean_object* v_inst_3451_, lean_object* v_inst_3452_, uint8_t v_flag_3453_, lean_object* v_x_3454_){
_start:
{
lean_object* v_toApplicative_3455_; lean_object* v_toBind_3456_; lean_object* v_getInfoState_3457_; lean_object* v_toFunctor_3458_; lean_object* v___f_3459_; lean_object* v___f_3460_; lean_object* v___x_3461_; lean_object* v___f_3462_; lean_object* v___x_3463_; 
v_toApplicative_3455_ = lean_ctor_get(v_inst_3450_, 0);
lean_inc_ref(v_toApplicative_3455_);
v_toBind_3456_ = lean_ctor_get(v_inst_3450_, 1);
lean_inc_n(v_toBind_3456_, 2);
lean_dec_ref(v_inst_3450_);
v_getInfoState_3457_ = lean_ctor_get(v_inst_3451_, 0);
lean_inc(v_getInfoState_3457_);
v_toFunctor_3458_ = lean_ctor_get(v_toApplicative_3455_, 0);
lean_inc_ref(v_toFunctor_3458_);
lean_dec_ref(v_toApplicative_3455_);
v___f_3459_ = ((lean_object*)(l_Lean_Elab_withEnableInfoTree___redArg___closed__0));
v___f_3460_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3460_, 0, v_x_3454_);
v___x_3461_ = lean_box(v_flag_3453_);
v___f_3462_ = lean_alloc_closure((void*)(l_Lean_Elab_withEnableInfoTree___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_3462_, 0, v_toFunctor_3458_);
lean_closure_set(v___f_3462_, 1, v_inst_3451_);
lean_closure_set(v___f_3462_, 2, v___x_3461_);
lean_closure_set(v___f_3462_, 3, v_toBind_3456_);
lean_closure_set(v___f_3462_, 4, v___f_3460_);
lean_closure_set(v___f_3462_, 5, v_inst_3452_);
lean_closure_set(v___f_3462_, 6, v___f_3459_);
v___x_3463_ = lean_apply_4(v_toBind_3456_, lean_box(0), lean_box(0), v_getInfoState_3457_, v___f_3462_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___redArg___boxed(lean_object* v_inst_3464_, lean_object* v_inst_3465_, lean_object* v_inst_3466_, lean_object* v_flag_3467_, lean_object* v_x_3468_){
_start:
{
uint8_t v_flag_boxed_3469_; lean_object* v_res_3470_; 
v_flag_boxed_3469_ = lean_unbox(v_flag_3467_);
v_res_3470_ = l_Lean_Elab_withEnableInfoTree___redArg(v_inst_3464_, v_inst_3465_, v_inst_3466_, v_flag_boxed_3469_, v_x_3468_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree(lean_object* v_m_3471_, lean_object* v_00_u03b1_3472_, lean_object* v_inst_3473_, lean_object* v_inst_3474_, lean_object* v_inst_3475_, uint8_t v_flag_3476_, lean_object* v_x_3477_){
_start:
{
lean_object* v___x_3478_; 
v___x_3478_ = l_Lean_Elab_withEnableInfoTree___redArg(v_inst_3473_, v_inst_3474_, v_inst_3475_, v_flag_3476_, v_x_3477_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___boxed(lean_object* v_m_3479_, lean_object* v_00_u03b1_3480_, lean_object* v_inst_3481_, lean_object* v_inst_3482_, lean_object* v_inst_3483_, lean_object* v_flag_3484_, lean_object* v_x_3485_){
_start:
{
uint8_t v_flag_boxed_3486_; lean_object* v_res_3487_; 
v_flag_boxed_3486_ = lean_unbox(v_flag_3484_);
v_res_3487_ = l_Lean_Elab_withEnableInfoTree(v_m_3479_, v_00_u03b1_3480_, v_inst_3481_, v_inst_3482_, v_inst_3483_, v_flag_boxed_3486_, v_x_3485_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg___lam__0(lean_object* v_toPure_3488_, lean_object* v_____do__lift_3489_){
_start:
{
lean_object* v_trees_3490_; lean_object* v___x_3491_; 
v_trees_3490_ = lean_ctor_get(v_____do__lift_3489_, 2);
lean_inc_ref(v_trees_3490_);
lean_dec_ref(v_____do__lift_3489_);
v___x_3491_ = lean_apply_2(v_toPure_3488_, lean_box(0), v_trees_3490_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___redArg(lean_object* v_inst_3492_, lean_object* v_inst_3493_){
_start:
{
lean_object* v_toApplicative_3494_; lean_object* v_toBind_3495_; lean_object* v_getInfoState_3496_; lean_object* v_toPure_3497_; lean_object* v___f_3498_; lean_object* v___x_3499_; 
v_toApplicative_3494_ = lean_ctor_get(v_inst_3493_, 0);
lean_inc_ref(v_toApplicative_3494_);
v_toBind_3495_ = lean_ctor_get(v_inst_3493_, 1);
lean_inc(v_toBind_3495_);
lean_dec_ref(v_inst_3493_);
v_getInfoState_3496_ = lean_ctor_get(v_inst_3492_, 0);
lean_inc(v_getInfoState_3496_);
lean_dec_ref(v_inst_3492_);
v_toPure_3497_ = lean_ctor_get(v_toApplicative_3494_, 1);
lean_inc(v_toPure_3497_);
lean_dec_ref(v_toApplicative_3494_);
v___f_3498_ = lean_alloc_closure((void*)(l_Lean_Elab_getInfoTrees___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3498_, 0, v_toPure_3497_);
v___x_3499_ = lean_apply_4(v_toBind_3495_, lean_box(0), lean_box(0), v_getInfoState_3496_, v___f_3498_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees(lean_object* v_m_3500_, lean_object* v_inst_3501_, lean_object* v_inst_3502_){
_start:
{
lean_object* v___x_3503_; 
v___x_3503_ = l_Lean_Elab_getInfoTrees___redArg(v_inst_3501_, v_inst_3502_);
return v___x_3503_;
}
}
lean_object* runtime_initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_InfoTree_Main(builtin);
}
#ifdef __cplusplus
}
#endif
